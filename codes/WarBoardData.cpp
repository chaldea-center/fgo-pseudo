void __fastcall WarBoardData___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct WarBoardData_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42AEBD6 & 1) == 0 )
  {
    sub_B52984(&WarBoardData_TypeInfo);
    sub_B52984(&StringLiteral_1682/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/);
    sub_B52984(&StringLiteral_15331/*"WARBOARDDATA_SAVEDATA"*/);
    byte_42AEBD6 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardData_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_15331/*"WARBOARDDATA_SAVEDATA"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15331/*"WARBOARDDATA_SAVEDATA"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = WarBoardData_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_1682/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  v9->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = (struct System_String_o *)StringLiteral_1682/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&v9->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void __fastcall WarBoardData___ctor(
        WarBoardData_o *this,
        WarBoardStageEntity_o *stage,
        WarBoardStageLayoutEntity_array *layoutEntities,
        WarBoardRoadEntity_array *roadEntities,
        WarBoardDataEntity_o *serverData,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v10; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Int32_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_UInt32_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x19
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x19
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_List_int__o *v52; // x19
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x19
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_List_int__o *v66; // x19
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_List_int__o *v73; // x19
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  WarBoardData___c_c *v80; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__77_0; // x19
  Il2CppObject *v83; // x20
  struct WarBoardData___c_StaticFields *v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 Instance; // x0
  const MethodInfo *throughCondId; // x1
  __int64 v99; // x20
  struct WarBoardStageNpcMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *WarBoardStageEntities; // x0
  WarBoardData___c_c *v108; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v109; // x21
  struct WarBoardData___c_StaticFields *v110; // x9
  System_Func_WarBoardStageNpcEntity__uint__o *_9__77_1; // x19
  Il2CppObject *v112; // x20
  struct WarBoardData___c_StaticFields *v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v120; // x0
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *WarBoardActionPointEntities; // x0
  WarBoardData___c_c *v128; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v129; // x21
  struct WarBoardData___c_StaticFields *v130; // x9
  System_Func_WarBoardStageNpcEntity__uint__o *_9__77_2; // x19
  Il2CppObject *v132; // x20
  struct WarBoardData___c_StaticFields *v133; // x0
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v140; // x0
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  WarBoardData___c_c *v148; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v149; // x21
  struct WarBoardData___c_StaticFields *v150; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__77_3; // x19
  Il2CppObject *v152; // x20
  struct WarBoardData___c_StaticFields *v153; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v161; // x0
  WarBoardData___c_c *v162; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v163; // x21
  struct WarBoardData___c_StaticFields *v164; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__77_4; // x19
  Il2CppObject *v166; // x20
  struct WarBoardData___c_StaticFields *v167; // x0
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  WarBoardData_c *v174; // x0
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19
  const MethodInfo *v176; // x0
  int v177; // w19
  WarBoardDataEntity_o *v178; // x25
  System_String_o *image; // x19
  System_String_o *String; // x19
  System_Byte_array *v181; // x19
  MiniMessagePack_MiniMessagePacker_o *v182; // x20
  struct WarBoardData_WarBoardLocalSaveData_o *v183; // x0
  struct WarBoardData_WarBoardLocalSaveData_o **p_localSaveData; // x24
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v191; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x23
  unsigned __int64 v193; // x26
  __int64 v194; // x21
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  System_Int32_array **v201; // x1
  WarBoardPieceData_SaveData_o **v202; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v203; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v204; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v205; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v206; // x22
  struct WarBoardItemData_SaveData_array *itemSaves; // x23
  unsigned __int64 v208; // x26
  __int64 v209; // x20
  System_String_array **v210; // x2
  System_String_array **v211; // x3
  System_Boolean_array **v212; // x4
  System_Int32_array **v213; // x5
  System_Int32_array *v214; // x6
  System_Int32_array *v215; // x7
  System_Int32_array **v216; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v217; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v218; // x22
  BattleServantConfConponent_o *v219; // x21
  struct WarBoardData_WarBoardLocalSaveData_o **v220; // x23
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  unsigned __int64 v222; // x26
  __int64 v223; // x19
  System_String_array **v224; // x2
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  System_Int32_array **v230; // x1
  __int64 v231; // x20
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v233; // x23
  WarBoardData___c_c *v234; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v235; // x22
  struct WarBoardData___c_StaticFields *v236; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__77_9; // x19
  Il2CppObject *v238; // x20
  struct WarBoardData___c_StaticFields *v239; // x0
  System_String_array **v240; // x2
  System_String_array **v241; // x3
  System_Boolean_array **v242; // x4
  System_Int32_array **v243; // x5
  System_Int32_array *v244; // x6
  System_Int32_array *v245; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v246; // x0
  System_Int32_array **v247; // x0
  System_String_array **v248; // x2
  System_String_array **v249; // x3
  System_Boolean_array **v250; // x4
  System_Int32_array **v251; // x5
  System_Int32_array *v252; // x6
  System_Int32_array *v253; // x7
  struct WarBoardWallData_SaveData_array *wallSaves; // x23
  unsigned __int64 v255; // x25
  __int64 v256; // x19
  System_String_array **v257; // x2
  System_String_array **v258; // x3
  System_Boolean_array **v259; // x4
  System_Int32_array **v260; // x5
  System_Int32_array *v261; // x6
  System_Int32_array *v262; // x7
  System_Int32_array **v263; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v264; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v265; // x22
  int v266; // w19
  unsigned __int64 v267; // x22
  signed __int64 v268; // x23
  __int64 v269; // x24
  struct WarBoardSquareIndexData_SaveData_array *squareIndexInfo; // x8
  unsigned int *v271; // x26
  WarBoardSquareIndexData_SaveData_o *v272; // x20
  WarBoardSquareIndexData_o *v273; // x19
  System_String_array **v274; // x2
  System_String_array **v275; // x3
  System_Boolean_array **v276; // x4
  System_Int32_array **v277; // x5
  System_Int32_array *v278; // x6
  System_Int32_array *v279; // x7
  int v280; // w19
  unsigned __int64 v281; // x22
  signed __int64 v282; // x23
  __int64 v283; // x24
  struct WarBoardBossBattleData_SaveData_array *bossBattleInfo; // x8
  unsigned int *v285; // x26
  WarBoardBossBattleData_SaveData_o *v286; // x20
  WarBoardBossBattleData_o *v287; // x19
  const MethodInfo *v288; // x2
  System_String_array **v289; // x2
  System_String_array **v290; // x3
  System_Boolean_array **v291; // x4
  System_Int32_array **v292; // x5
  System_Int32_array *v293; // x6
  System_Int32_array *v294; // x7
  WarBoardData_c *v295; // x0
  System_String_array **v296; // x2
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  unsigned __int64 v302; // x28
  signed __int64 v303; // x22
  __int64 v304; // x26
  System_String_array **v305; // x2
  System_String_array **v306; // x3
  System_Boolean_array **v307; // x4
  System_Int32_array **v308; // x5
  System_Int32_array *v309; // x6
  System_Int32_array *v310; // x7
  System_Int32_array **v311; // x1
  WarBoardStageLayoutEntity_o **v312; // x21
  WarBoardStageLayoutEntity_o *v313; // x19
  WarBoardSquareData_o *v314; // x20
  const MethodInfo *v315; // x3
  __int64 v316; // x9
  WarBoardStageLayoutEntity_o *v317; // x8
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v319; // x20
  WarBoardData_SquareRangeSearch_o *v320; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v321; // x1
  const MethodInfo_2FF1604 *v322; // x2
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v324; // x20
  WarBoardStageLayoutEntity_o *v325; // x8
  WarBoardDataEntity_WarBoardDeckData_o **v326; // x9
  WarBoardDataEntity_WarBoardDeckData_o *v327; // x27
  int32_t Type; // w0
  bool IsNpc; // w0
  int32_t progressType; // w23
  WarBoardStageLayoutEntity_o *v331; // x19
  bool v332; // w24
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v333; // x25
  WarBoardPieceData_o *v334; // x0
  WarBoardPieceData_o *v335; // x22
  bool v336; // w5
  NpcFollowerEntity_o *Entity_20742188; // x0
  NpcFollowerEntity_o *v338; // x19
  WarBoardStageLayoutEntity_o *v339; // x20
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v341; // x20
  WarBoardData_SquareRangeSearch_o *v342; // x0
  WarBoardStageLayoutEntity_o *v343; // x20
  WarBoardUserGetItemData_o *v344; // x21
  WarBoardItemData_o *v345; // x19
  __int64 *v346; // x8
  System_Collections_Generic_IEnumerable_TSource__o *treasureInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v348; // x20
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v350; // x20
  WarBoardData_SquareRangeSearch_o *v351; // x0
  WarBoardStageLayoutEntity_o *v352; // x20
  WarBoardUserWallData_o *v353; // x21
  System_Int32_array **v354; // x0
  System_String_array **v355; // x2
  System_String_array **v356; // x3
  System_Boolean_array **v357; // x4
  System_Int32_array **v358; // x5
  System_Int32_array *v359; // x6
  System_Int32_array *v360; // x7
  System_Int32_array **v361; // x0
  System_String_array **v362; // x2
  System_String_array **v363; // x3
  System_Boolean_array **v364; // x4
  System_Int32_array **v365; // x5
  System_Int32_array *v366; // x6
  System_Int32_array *v367; // x7
  System_Int32_array **v368; // x0
  System_Collections_Generic_IEnumerable_T__o **p_pieces; // x22
  System_String_array **v370; // x2
  System_String_array **v371; // x3
  System_Boolean_array **v372; // x4
  System_Int32_array **v373; // x5
  System_Int32_array *v374; // x6
  System_Int32_array *v375; // x7
  BattleBuffData_BuffData_array *pieces; // x19
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v377; // x20
  System_Int32_array **v378; // x0
  System_String_array **v379; // x2
  System_String_array **v380; // x3
  System_Boolean_array **v381; // x4
  System_Int32_array **v382; // x5
  System_Int32_array *v383; // x6
  System_Int32_array *v384; // x7
  System_Int32_array **v385; // x0
  System_String_array **v386; // x2
  System_String_array **v387; // x3
  System_Boolean_array **v388; // x4
  System_Int32_array **v389; // x5
  System_Int32_array *v390; // x6
  System_Int32_array *v391; // x7
  System_Int32_array **v392; // x0
  System_String_array **v393; // x2
  System_String_array **v394; // x3
  System_Boolean_array **v395; // x4
  System_Int32_array **v396; // x5
  System_Int32_array *v397; // x6
  System_Int32_array *v398; // x7
  System_Int32_array **v399; // x0
  System_String_array **v400; // x2
  System_String_array **v401; // x3
  System_Boolean_array **v402; // x4
  System_Int32_array **v403; // x5
  System_Int32_array *v404; // x6
  System_Int32_array *v405; // x7
  System_String_array **v406; // x2
  System_String_array **v407; // x3
  System_Boolean_array **v408; // x4
  System_Int32_array **v409; // x5
  System_Int32_array *v410; // x6
  System_Int32_array *v411; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardPieceData_SaveData_array *v413; // x28
  WarBoardData___c__DisplayClass77_5_c **v414; // x26
  unsigned __int64 v415; // x27
  WarBoardPieceData_SaveData_o **m_Items; // x21
  __int64 v417; // x20
  System_String_array **v418; // x2
  System_String_array **v419; // x3
  System_Boolean_array **v420; // x4
  System_Int32_array **v421; // x5
  System_Int32_array *v422; // x6
  System_Int32_array *v423; // x7
  System_Int32_array **v424; // x1
  WarBoardPieceData_SaveData_o **v425; // x23
  System_Collections_Generic_IEnumerable_T__o *v426; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v427; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v428; // x19
  WarBoardPieceData_SaveData_o **v429; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v430; // x24
  WarBoardData_SquareRangeSearch_o *v431; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v432; // x20
  WarBoardData___c__DisplayClass77_5_c **v433; // x21
  int32_t id; // w19
  WarBoardPieceData_SaveData_o *v435; // x25
  WarBoardPieceData_o *v436; // x26
  System_Int32_array **v437; // x0
  System_String_array **v438; // x2
  System_String_array **v439; // x3
  System_Boolean_array **v440; // x4
  System_Int32_array **v441; // x5
  System_Int32_array *v442; // x6
  System_Int32_array *v443; // x7
  struct WarBoardItemData_SaveData_array *v444; // x20
  int max_length; // w8
  unsigned int v446; // w21
  __int64 v447; // x8
  WarBoardItemData_SaveData_o *v448; // x19
  struct WarBoardTreasureData_SaveData_array *v449; // x20
  int v450; // w8
  unsigned int v451; // w21
  __int64 v452; // x8
  WarBoardTreasureData_SaveData_o *v453; // x19
  struct WarBoardWallData_SaveData_array *v454; // x20
  int v455; // w8
  unsigned int v456; // w21
  __int64 v457; // x8
  WarBoardWallData_SaveData_o *v458; // x19
  struct WarBoardSquareData_SaveData_array *squareSaves; // x20
  int v460; // w8
  unsigned int v461; // w21
  __int64 v462; // x8
  WarBoardSquareData_SaveData_o *v463; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v464; // x19
  System_String_array **v465; // x2
  System_String_array **v466; // x3
  System_Boolean_array **v467; // x4
  System_Int32_array **v468; // x5
  System_Int32_array *v469; // x6
  System_Int32_array *v470; // x7
  System_String_array **v471; // x2
  System_String_array **v472; // x3
  System_Boolean_array **v473; // x4
  System_Int32_array **v474; // x5
  System_Int32_array *v475; // x6
  System_Int32_array *v476; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v477; // x8
  struct WarBoardEventData_SaveData_array *eventSaves; // x21
  __int64 v479; // x8
  unsigned __int64 v480; // x23
  WarBoardEventData_SaveData_o *v481; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v482; // x19
  WarBoardEventData_o *v483; // x20
  struct WarBoardData_WarBoardLocalSaveData_o *v484; // x8
  System_Int32_array **latestPieceActionSquareIndexes; // x1
  System_String_array **v486; // x2
  System_String_array **v487; // x3
  System_Boolean_array **v488; // x4
  System_Int32_array **v489; // x5
  System_Int32_array *v490; // x6
  System_Int32_array *v491; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v492; // x8
  System_Int32_array **latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v494; // x19
  System_String_array **v495; // x2
  System_String_array **v496; // x3
  System_Boolean_array **v497; // x4
  System_Int32_array **v498; // x5
  System_Int32_array *v499; // x6
  System_Int32_array *v500; // x7
  struct WarBoardPrevCondData_SaveData_array *prevCondSaves; // x21
  __int64 v502; // x8
  unsigned __int64 v503; // x23
  WarBoardPrevCondData_SaveData_o *v504; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v505; // x19
  WarBoardPrevCondData_o *v506; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v507; // x19
  System_String_array **v508; // x2
  System_String_array **v509; // x3
  System_Boolean_array **v510; // x4
  System_Int32_array **v511; // x5
  System_Int32_array *v512; // x6
  System_Int32_array *v513; // x7
  struct HoldReinforcementsData_SaveData_array *reinforcementsSaves; // x21
  __int64 v515; // x8
  unsigned __int64 v516; // x23
  HoldReinforcementsData_SaveData_o *v517; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v518; // x19
  HoldReinforcementsData_o *v519; // x20
  System_Int32_array **v520; // x0
  System_String_array **v521; // x2
  System_String_array **v522; // x3
  System_Boolean_array **v523; // x4
  System_Int32_array **v524; // x5
  System_Int32_array *v525; // x6
  System_Int32_array *v526; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v527; // x19
  System_String_array **v528; // x2
  System_String_array **v529; // x3
  System_Boolean_array **v530; // x4
  System_Int32_array **v531; // x5
  System_Int32_array *v532; // x6
  System_Int32_array *v533; // x7
  System_String_array **v534; // x2
  System_String_array **v535; // x3
  System_Boolean_array **v536; // x4
  System_Int32_array **v537; // x5
  System_Int32_array *v538; // x6
  System_Int32_array *v539; // x7
  struct WarBoardUiData_SaveData_array *uiDataSaves; // x21
  __int64 v541; // x8
  unsigned __int64 v542; // x23
  WarBoardUiData_SaveData_o *v543; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v544; // x19
  WarBoardUiData_o *v545; // x20
  System_Int32_array **bgAnimationInfo; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *v547; // x8
  WarBoardData_WarBoardLocalSaveData_o *v548; // x19
  System_String_array **v549; // x2
  System_String_array **v550; // x3
  System_Boolean_array **v551; // x4
  System_Int32_array **v552; // x5
  System_Int32_array *v553; // x6
  System_Int32_array *v554; // x7
  __int64 v555; // x0
  __int64 v556; // x0
  BattleServantConfConponent_o *p_latestBattlePieceUniqueIndexes; // [xsp+10h] [xbp-170h]
  struct System_Int32_array **p_latestPieceActionSquareIndexes; // [xsp+18h] [xbp-168h]
  BattleServantConfConponent_o *p_playedStageReinforcementsList; // [xsp+20h] [xbp-160h]
  BattleServantConfConponent_o *p_bgAnimationInfo_k__BackingField; // [xsp+28h] [xbp-158h]
  BattleServantConfConponent_o *p_listUiData; // [xsp+30h] [xbp-150h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v562; // [xsp+38h] [xbp-148h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v563; // [xsp+40h] [xbp-140h]
  WarBoardDataEntity_WarBoardDeckData_o **p_myDeck; // [xsp+48h] [xbp-138h]
  struct System_Collections_Generic_List_int__o **p_masterExistsForce; // [xsp+50h] [xbp-130h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v566; // [xsp+58h] [xbp-128h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v567; // [xsp+60h] [xbp-120h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v568; // [xsp+68h] [xbp-118h]
  NpcFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+70h] [xbp-110h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v570; // [xsp+78h] [xbp-108h]
  WarBoardData_Fields *p_fields; // [xsp+80h] [xbp-100h]
  WarBoardCommonReleaseMaster_o *v572; // [xsp+88h] [xbp-F8h]
  signed __int64 v573; // [xsp+90h] [xbp-F0h]
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // [xsp+98h] [xbp-E8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v575; // [xsp+A0h] [xbp-E0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v576; // [xsp+A8h] [xbp-D8h]
  WarBoardStageLayoutEntity_array *v577; // [xsp+B0h] [xbp-D0h]
  WarBoardDataEntity_WarBoardDeckData_o **p_enemyDeck; // [xsp+B8h] [xbp-C8h]
  BattleServantConfConponent_o *p_listPrevCond; // [xsp+C0h] [xbp-C0h]
  BattleServantConfConponent_o *p_reinforcementsSaveList; // [xsp+C8h] [xbp-B8h]
  struct System_Collections_Generic_List_WarBoardEventData__o **p_listEvent; // [xsp+D0h] [xbp-B0h]
  int32_t questPhase; // [xsp+DCh] [xbp-A4h]
  WarBoardData_o *v583; // [xsp+E0h] [xbp-A0h]
  char v584; // [xsp+ECh] [xbp-94h]
  int32_t v585; // [xsp+ECh] [xbp-94h]
  struct WarBoardData_WarBoardLocalSaveData_o **v586; // [xsp+F0h] [xbp-90h]
  int32_t questId; // [xsp+F0h] [xbp-90h]
  __int64 v588; // [xsp+F8h] [xbp-88h]
  WarBoardDataEntity_o *v589; // [xsp+F8h] [xbp-88h]
  int v590; // [xsp+100h] [xbp-80h]
  WarBoardUserMasterData_o *v591; // [xsp+100h] [xbp-80h]
  struct WarBoardData_WarBoardLocalSaveData_o **v592; // [xsp+100h] [xbp-80h]
  struct WarBoardPieceData_SaveData_array *v594; // [xsp+108h] [xbp-78h]
  bool isChangeName; // [xsp+114h] [xbp-6Ch] BYREF
  UserServantEntity_o *entity; // [xsp+118h] [xbp-68h] BYREF
  int32_t condGroup[3]; // [xsp+124h] [xbp-5Ch] BYREF

  if ( (byte_42AEB7E & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Resize_WarBoardBossBattleData___);
    sub_B52984(&Method_System_Array_Resize_WarBoardSquareIndexData___);
    sub_B52984(&Method_System_Array_Sort_WarBoardPieceData___);
    sub_B52984(&Method_System_Array_Sort_WarBoardStageLayoutEntity___);
    sub_B52984(&Method_BasicHelper_Any_WarBoardPieceData___);
    sub_B52984(&Method_System_Comparison_WarBoardStageLayoutEntity___ctor__);
    sub_B52984(&Method_System_Comparison_WarBoardPieceData___ctor__);
    sub_B52984(&System_Comparison_WarBoardStageLayoutEntity__TypeInfo);
    sub_B52984(&System_Comparison_WarBoardPieceData__TypeInfo);
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
    sub_B52984(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B52984(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B52984(&EncryptedPlayerPrefs_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
    sub_B52984(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
    sub_B52984(&Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
    sub_B52984(&Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
    sub_B52984(&Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
    sub_B52984(&Method_System_Func_WarBoardUserMasterData__bool___ctor__);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
    sub_B52984(&Method_System_Func_WarBoardStageNpcEntity__uint___ctor__);
    sub_B52984(&Method_System_Func_WarBoardStageNpcEntity__int___ctor__);
    sub_B52984(&Method_System_Func_WarBoardActionPointEntity__uint___ctor__);
    sub_B52984(&Method_System_Func_WarBoardUserServantData__bool___ctor__);
    sub_B52984(&Method_System_Func_WarBoardUserWallData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardActionPointEntity__uint__TypeInfo);
    sub_B52984(&System_Func_WarBoardUserTreasureData__bool__TypeInfo);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    sub_B52984(&System_Func_WarBoardStageNpcEntity__uint__TypeInfo);
    sub_B52984(&System_Func_WarBoardUserMasterData__bool__TypeInfo);
    sub_B52984(&System_Func_WarBoardUserWallData__bool__TypeInfo);
    sub_B52984(&System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    sub_B52984(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_B52984(&HoldReinforcementsData_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardEventData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardItemData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardUiData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTreasureData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardWallData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardEffectData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardUiData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardItemData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardTreasureData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardWallData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardEffectData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardEventData__TypeInfo);
    sub_B52984(&Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
    sub_B52984(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&Method_WarBoardData___c___ctor_b__77_0__);
    sub_B52984(&Method_WarBoardData___c___ctor_b__77_1__);
    sub_B52984(&Method_WarBoardData___c___ctor_b__77_2__);
    sub_B52984(&Method_WarBoardData___c___ctor_b__77_3__);
    sub_B52984(&Method_WarBoardData___c___ctor_b__77_4__);
    sub_B52984(&Method_WarBoardData___c___ctor_b__77_9__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__);
    sub_B52984(&WarBoardData___c__DisplayClass77_0_TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__);
    sub_B52984(&WarBoardData___c__DisplayClass77_1_TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__);
    sub_B52984(&WarBoardData___c__DisplayClass77_2_TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__);
    sub_B52984(&WarBoardData___c__DisplayClass77_3_TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__);
    sub_B52984(&WarBoardData___c__DisplayClass77_4_TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__);
    sub_B52984(&WarBoardData___c__DisplayClass77_5_TypeInfo);
    sub_B52984(&WarBoardData___c_TypeInfo);
    sub_B52984(&uint___TypeInfo);
    sub_B52984(&WarBoardBossBattleData_TypeInfo);
    sub_B52984(&Method_WarBoardData_ComparePiece__);
    sub_B52984(&WarBoardData_TypeInfo);
    sub_B52984(&WarBoardEffectData_TypeInfo);
    sub_B52984(&WarBoardEventData_TypeInfo);
    sub_B52984(&WarBoardItemData_TypeInfo);
    sub_B52984(&WarBoardData_WarBoardLocalSaveData_TypeInfo);
    sub_B52984(&WarBoardPieceData_TypeInfo);
    sub_B52984(&WarBoardPrevCondData_TypeInfo);
    sub_B52984(&WarBoardSquareData_TypeInfo);
    sub_B52984(&WarBoardSquareIndexData_TypeInfo);
    sub_B52984(&WarBoardTreasureData_TypeInfo);
    sub_B52984(&WarBoardUiData_TypeInfo);
    sub_B52984(&WarBoardWallData_TypeInfo);
    byte_42AEB7E = 1;
  }
  entity = 0LL;
  isChangeName = 0;
  v10 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v10,
    (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields._bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
  this->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v17;
  p_listEvent = &this->fields.listEvent;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.listEvent,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_QWORD *)&this->fields.winCondId = -1LL;
  v24 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 2LL);
  this->fields.latestPieceActionSquareIndexes = v24;
  p_latestPieceActionSquareIndexes = &this->fields.latestPieceActionSquareIndexes;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.latestPieceActionSquareIndexes,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (struct System_UInt32_array *)sub_B5299C(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v31;
  p_latestBattlePieceUniqueIndexes = (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
  this->fields.listPrevCond = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v38;
  p_listPrevCond = (BattleServantConfConponent_o *)&this->fields.listPrevCond;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.listPrevCond,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
  this->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v45;
  p_reinforcementsSaveList = (BattleServantConfConponent_o *)&this->fields.reinforcementsSaveList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.reinforcementsSaveList,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v52,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedStageReinforcementsList = v52;
  p_playedStageReinforcementsList = (BattleServantConfConponent_o *)&this->fields.playedStageReinforcementsList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.playedStageReinforcementsList,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v59,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardUiData__o *)v59;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.listUiData,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v66,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.masterExistsForce = v66;
  p_masterExistsForce = &this->fields.masterExistsForce;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.masterExistsForce,
    (System_Int32_array **)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v73 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v73,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reinforcementsAppointmentSquareList = v73;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.reinforcementsAppointmentSquareList,
    (System_Int32_array **)v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  this->fields.localSaveTiming = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v80 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v80 = WarBoardData___c_TypeInfo;
  }
  static_fields = v80->static_fields;
  _9__77_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( (BYTE3(v80->vtable._0_Equals.methodPtr) & 4) != 0 && !v80->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v80);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v83 = (Il2CppObject *)static_fields->__9;
    _9__77_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_WarBoardStageLayoutEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__77_0,
      v83,
      Method_WarBoardData___c___ctor_b__77_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_WarBoardStageLayoutEntity___ctor__);
    v84 = WarBoardData___c_TypeInfo->static_fields;
    v84->__9__77_0 = (struct System_Comparison_WarBoardStageLayoutEntity__o *)_9__77_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v84->__9__77_0,
      (System_Int32_array **)_9__77_0,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)layoutEntities,
    (System_Comparison_T__o *)_9__77_0,
    (const MethodInfo_1A33468 *)Method_System_Array_Sort_WarBoardStageLayoutEntity___);
  this->fields.stageEntity = stage;
  p_fields = &this->fields;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)stage, v91, v92, v93, v94, v95, v96);
  if ( !layoutEntities )
    goto LABEL_331;
  v577 = layoutEntities;
  v99 = *(_QWORD *)&layoutEntities->max_length;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  MasterData_WarQuestSelectionMaster = (struct WarBoardStageNpcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
  this->fields.stageNpcMaster = MasterData_WarQuestSelectionMaster;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.stageNpcMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  if ( !stage )
    goto LABEL_331;
  Instance = (__int64)this->fields.stageNpcMaster;
  v590 = v99;
  if ( !Instance )
    goto LABEL_331;
  WarBoardStageEntities = WarBoardStageNpcMaster__GetWarBoardStageEntities(
                            (WarBoardStageNpcMaster_o *)Instance,
                            stage->fields.id,
                            0LL);
  v108 = WarBoardData___c_TypeInfo;
  v109 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardStageEntities;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v108 = WarBoardData___c_TypeInfo;
  }
  v110 = v108->static_fields;
  _9__77_1 = v110->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( (BYTE3(v108->vtable._0_Equals.methodPtr) & 4) != 0 && !v108->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v108);
      v110 = WarBoardData___c_TypeInfo->static_fields;
    }
    v112 = (Il2CppObject *)v110->__9;
    _9__77_1 = (System_Func_WarBoardStageNpcEntity__uint__o *)sub_B52A54(System_Func_WarBoardStageNpcEntity__uint__TypeInfo);
    System_Func_WarBoardStageNpcEntity__uint____ctor(
      _9__77_1,
      v112,
      Method_WarBoardData___c___ctor_b__77_1__,
      (const MethodInfo_2BCBB7C *)Method_System_Func_WarBoardStageNpcEntity__uint___ctor__);
    v113 = WarBoardData___c_TypeInfo->static_fields;
    v113->__9__77_1 = _9__77_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v113->__9__77_1,
      (System_Int32_array **)_9__77_1,
      v114,
      v115,
      v116,
      v117,
      v118,
      v119);
  }
  v120 = (struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)System_Linq_Enumerable__ToDictionary_WarBoardStageNpcEntity__uint_(
                                                                                           v109,
                                                                                           (System_Func_TSource__TKey__o *)_9__77_1,
                                                                                           (const MethodInfo_1B6E8F8 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
  this->fields.npcEntityDict = v120;
  p_npcEntityDict = &this->fields.npcEntityDict;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.npcEntityDict,
    (System_Int32_array **)v120,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
  if ( !Instance )
    goto LABEL_331;
  WarBoardActionPointEntities = WarBoardActionPointMaster__GetWarBoardActionPointEntities(
                                  (WarBoardActionPointMaster_o *)Instance,
                                  stage->fields.id,
                                  0LL);
  v128 = WarBoardData___c_TypeInfo;
  v129 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardActionPointEntities;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v128 = WarBoardData___c_TypeInfo;
  }
  v130 = v128->static_fields;
  _9__77_2 = (System_Func_WarBoardStageNpcEntity__uint__o *)v130->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( (BYTE3(v128->vtable._0_Equals.methodPtr) & 4) != 0 && !v128->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v128);
      v130 = WarBoardData___c_TypeInfo->static_fields;
    }
    v132 = (Il2CppObject *)v130->__9;
    _9__77_2 = (System_Func_WarBoardStageNpcEntity__uint__o *)sub_B52A54(System_Func_WarBoardActionPointEntity__uint__TypeInfo);
    System_Func_WarBoardStageNpcEntity__uint____ctor(
      _9__77_2,
      v132,
      Method_WarBoardData___c___ctor_b__77_2__,
      (const MethodInfo_2BCBB7C *)Method_System_Func_WarBoardActionPointEntity__uint___ctor__);
    v133 = WarBoardData___c_TypeInfo->static_fields;
    v133->__9__77_2 = (struct System_Func_WarBoardActionPointEntity__uint__o *)_9__77_2;
    sub_B52920(
      (BattleServantConfConponent_o *)&v133->__9__77_2,
      (System_Int32_array **)_9__77_2,
      v134,
      v135,
      v136,
      v137,
      v138,
      v139);
  }
  v140 = (struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *)System_Linq_Enumerable__ToDictionary_WarBoardStageNpcEntity__uint_(
                                                                                              v129,
                                                                                              (System_Func_TSource__TKey__o *)_9__77_2,
                                                                                              (const MethodInfo_1B6E8F8 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
  this->fields.actionPointEntityDict = v140;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.actionPointEntityDict,
    (System_Int32_array **)v140,
    v141,
    v142,
    v143,
    v144,
    v145,
    v146);
  Instance = (__int64)this->fields.npcEntityDict;
  if ( !Instance )
    goto LABEL_331;
  Values = System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___get_Values(
             (System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)Instance,
             (const MethodInfo_2EDD3C4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v148 = WarBoardData___c_TypeInfo;
  v149 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v148 = WarBoardData___c_TypeInfo;
  }
  v150 = v148->static_fields;
  _9__77_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v150->__9__77_3;
  if ( !_9__77_3 )
  {
    if ( (BYTE3(v148->vtable._0_Equals.methodPtr) & 4) != 0 && !v148->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v148);
      v150 = WarBoardData___c_TypeInfo->static_fields;
    }
    v152 = (Il2CppObject *)v150->__9;
    _9__77_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__77_3,
      v152,
      Method_WarBoardData___c___ctor_b__77_3__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_WarBoardStageNpcEntity__int___ctor__);
    v153 = WarBoardData___c_TypeInfo->static_fields;
    v153->__9__77_3 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_3;
    sub_B52920(
      (BattleServantConfConponent_o *)&v153->__9__77_3,
      (System_Int32_array **)_9__77_3,
      v154,
      v155,
      v156,
      v157,
      v158,
      v159);
  }
  p_bgAnimationInfo_k__BackingField = (BattleServantConfConponent_o *)&this->fields._bgAnimationInfo_k__BackingField;
  Instance = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
               v149,
               (System_Func_TSource__int__o *)_9__77_3,
               (const MethodInfo_1B65988 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  npcEntityDict = this->fields.npcEntityDict;
  this->fields._maxForceId_k__BackingField = Instance;
  if ( !npcEntityDict )
    goto LABEL_331;
  v161 = System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___get_Values(
           npcEntityDict,
           (const MethodInfo_2EDD3C4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v162 = WarBoardData___c_TypeInfo;
  v163 = (System_Collections_Generic_IEnumerable_TSource__o *)v161;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v162 = WarBoardData___c_TypeInfo;
  }
  v164 = v162->static_fields;
  _9__77_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v164->__9__77_4;
  if ( !_9__77_4 )
  {
    if ( (BYTE3(v162->vtable._0_Equals.methodPtr) & 4) != 0 && !v162->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v162);
      v164 = WarBoardData___c_TypeInfo->static_fields;
    }
    v166 = (Il2CppObject *)v164->__9;
    _9__77_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__77_4,
      v166,
      Method_WarBoardData___c___ctor_b__77_4__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_WarBoardStageNpcEntity__int___ctor__);
    v167 = WarBoardData___c_TypeInfo->static_fields;
    v167->__9__77_4 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_4;
    sub_B52920(
      (BattleServantConfConponent_o *)&v167->__9__77_4,
      (System_Int32_array **)_9__77_4,
      v168,
      v169,
      v170,
      v171,
      v172,
      v173);
  }
  this->fields._maxGroupId_k__BackingField = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
                                               v163,
                                               (System_Func_TSource__int__o *)_9__77_4,
                                               (const MethodInfo_1B65988 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  v562 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v572 = (WarBoardCommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  v575 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v575,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v570 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v570,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v576 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v576,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v567 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardItemData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v567,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
  v563 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTreasureData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v563,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
  v568 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardWallData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v568,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
  v566 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardEffectData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v566,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
  v174 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v174 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v174->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  Instance = EncryptedPlayerPrefs__HasKey(WARBOARDDATA_SAVEDATA_KEY, 0LL);
  v583 = this;
  p_listUiData = (BattleServantConfConponent_o *)&this->fields.listUiData;
  if ( (Instance & 1) != 0 )
  {
    if ( !serverData )
      goto LABEL_331;
    v176 = (const MethodInfo *)WarBoardData_TypeInfo;
    if ( serverData->fields.progressType == 3 )
    {
      if ( (WORD1(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !WarBoardData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      }
      WarBoardData__DeleteLocalSave(v176);
    }
    else
    {
      if ( (WORD1(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !WarBoardData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
        v176 = (const MethodInfo *)WarBoardData_TypeInfo;
      }
      image = (System_String_o *)v176[2].klass->_1.image;
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
      v181 = System_Convert__FromBase64String(String, 0LL);
      v182 = (MiniMessagePack_MiniMessagePacker_o *)sub_B52A54(MiniMessagePack_MiniMessagePacker_TypeInfo);
      MiniMessagePack_MiniMessagePacker___ctor(v182, 0LL);
      if ( !v182 )
        goto LABEL_331;
      v183 = MiniMessagePack_MiniMessagePacker__UnpackClass_WarBoardData_WarBoardLocalSaveData_(
               v182,
               v181,
               (const MethodInfo_1F6E668 *)Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
      this->fields.localSaveData = v183;
      p_localSaveData = &this->fields.localSaveData;
      sub_B52920(
        (BattleServantConfConponent_o *)p_localSaveData,
        (System_Int32_array **)v183,
        v185,
        v186,
        v187,
        v188,
        v189,
        v190);
      v191 = *p_localSaveData;
      v586 = p_localSaveData;
      if ( *p_localSaveData
        && v191->fields.questId == serverData->fields.questId
        && v191->fields.questPhase == serverData->fields.questPhase
        && v191->fields.stageId == serverData->fields.stageId )
      {
        if ( v191->fields.localSaveTiming == 6
          && (v191->fields.turn != serverData->fields.turn
           || v191->fields.turnForceId != serverData->fields.turnForceId
           || v191->fields.turnGroupId != serverData->fields.turnGroupId) )
        {
          v191->fields.localSaveTiming = 7;
        }
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !*p_localSaveData )
          goto LABEL_331;
        if ( !Instance )
          goto LABEL_331;
        Instance = (__int64)WarBoardManager__CheckAndLoadCacheServerData(
                              (WarBoardManager_o *)Instance,
                              serverData,
                              (*p_localSaveData)->fields.localSaveTiming,
                              0LL);
        v588 = Instance;
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
            if ( !v588 )
              goto LABEL_331;
            v219 = (BattleServantConfConponent_o *)(v588 + 40);
            v220 = p_localSaveData;
            if ( *(_QWORD *)(v588 + 40) )
            {
              if ( !*p_localSaveData )
                goto LABEL_331;
              treasureSaves = (*p_localSaveData)->fields.treasureSaves;
              if ( !treasureSaves )
                goto LABEL_331;
              if ( (int)treasureSaves->max_length >= 1 )
              {
                v584 = 0;
                v222 = 0LL;
                do
                {
                  v223 = sub_B52A54(WarBoardData___c__DisplayClass77_2_TypeInfo);
                  WarBoardData___c__DisplayClass77_2___ctor((WarBoardData___c__DisplayClass77_2_o *)v223, 0LL);
                  if ( v222 >= treasureSaves->max_length )
                    goto LABEL_332;
                  if ( !v223 )
                    goto LABEL_331;
                  v230 = (System_Int32_array **)treasureSaves->m_Items[v222];
                  *(_QWORD *)(v223 + 16) = v230;
                  v231 = v223 + 16;
                  sub_B52920((BattleServantConfConponent_o *)(v223 + 16), v230, v224, v225, v226, v227, v228, v229);
                  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v219->klass;
                  v233 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                    v233,
                    (Il2CppObject *)v223,
                    Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__,
                    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
                  Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                        klass,
                                        (System_Func_TSource__bool__o *)v233,
                                        (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
                  if ( Instance )
                  {
                    if ( !*(_QWORD *)v231 )
                      goto LABEL_331;
                    if ( !*(_BYTE *)(*(_QWORD *)v231 + 20LL) )
                    {
                      *(_BYTE *)(Instance + 20) = 0;
                      v584 = 1;
                    }
                  }
                  ++v222;
                }
                while ( (__int64)v222 < (int)treasureSaves->max_length );
                v220 = p_localSaveData;
                if ( (v584 & 1) != 0 )
                {
                  v234 = WarBoardData___c_TypeInfo;
                  v235 = (System_Collections_Generic_IEnumerable_TSource__o *)v219->klass;
                  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
                    v234 = WarBoardData___c_TypeInfo;
                  }
                  v236 = v234->static_fields;
                  _9__77_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v236->__9__77_9;
                  if ( !_9__77_9 )
                  {
                    if ( (BYTE3(v234->vtable._0_Equals.methodPtr) & 4) != 0 && !v234->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v234);
                      v236 = WarBoardData___c_TypeInfo->static_fields;
                    }
                    v238 = (Il2CppObject *)v236->__9;
                    _9__77_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      _9__77_9,
                      v238,
                      Method_WarBoardData___c___ctor_b__77_9__,
                      (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
                    v239 = WarBoardData___c_TypeInfo->static_fields;
                    v239->__9__77_9 = (struct System_Func_WarBoardUserTreasureData__bool__o *)_9__77_9;
                    sub_B52920(
                      (BattleServantConfConponent_o *)&v239->__9__77_9,
                      (System_Int32_array **)_9__77_9,
                      v240,
                      v241,
                      v242,
                      v243,
                      v244,
                      v245);
                  }
                  v246 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                           v235,
                           (System_Func_TSource__bool__o *)_9__77_9,
                           (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
                  v247 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                  v246,
                                                  (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
                  v219->klass = (BattleServantConfConponent_c *)v247;
                  sub_B52920(v219, v247, v248, v249, v250, v251, v252, v253);
                }
              }
            }
            if ( !*v220 )
              goto LABEL_331;
            wallSaves = (*v220)->fields.wallSaves;
            if ( !wallSaves )
              goto LABEL_331;
            if ( (int)wallSaves->max_length < 1 )
            {
LABEL_149:
              if ( !*p_localSaveData )
                goto LABEL_331;
              v266 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.squareIndexInfo,
                       (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
              System_Array__Resize_WarBoardSquareIndexData_(
                (WarBoardSquareIndexData_array **)(v588 + 88),
                v266,
                (const MethodInfo_22C19A8 *)Method_System_Array_Resize_WarBoardSquareIndexData___);
              if ( v266 >= 1 )
              {
                v267 = 0LL;
                v268 = v266;
                v269 = 8LL;
                while ( *v586 )
                {
                  squareIndexInfo = (*v586)->fields.squareIndexInfo;
                  if ( !squareIndexInfo )
                    break;
                  if ( v267 >= squareIndexInfo->max_length )
                    goto LABEL_332;
                  v271 = *(unsigned int **)(v588 + 88);
                  v272 = *(WarBoardSquareIndexData_SaveData_o **)((char *)&squareIndexInfo->obj.klass + v269 * 4);
                  v273 = (WarBoardSquareIndexData_o *)sub_B52A54(WarBoardSquareIndexData_TypeInfo);
                  WarBoardSquareIndexData___ctor_29098244(v273, v272, 0LL);
                  if ( !v271 )
                    break;
                  if ( v273 )
                  {
                    Instance = sub_B52A44(v273, *(_QWORD *)(*(_QWORD *)v271 + 64LL));
                    if ( !Instance )
                    {
LABEL_333:
                      v556 = sub_B52A7C();
                      sub_B52A28(v556, 0LL);
                    }
                  }
                  if ( v267 >= v271[6] )
                    goto LABEL_332;
                  *(_QWORD *)&v271[v269] = v273;
                  sub_B52920(
                    (BattleServantConfConponent_o *)&v271[v269],
                    (System_Int32_array **)v273,
                    v274,
                    v275,
                    v276,
                    v277,
                    v278,
                    v279);
                  ++v267;
                  v269 += 2LL;
                  if ( (__int64)v267 >= v268 )
                    goto LABEL_160;
                }
                goto LABEL_331;
              }
LABEL_160:
              if ( !*v586 )
                goto LABEL_331;
              v178 = (WarBoardDataEntity_o *)v588;
              v280 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*v586)->fields.bossBattleInfo,
                       (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
              System_Array__Resize_WarBoardSquareIndexData_(
                (WarBoardSquareIndexData_array **)(v588 + 96),
                v280,
                (const MethodInfo_22C19A8 *)Method_System_Array_Resize_WarBoardBossBattleData___);
              if ( v280 >= 1 )
              {
                v281 = 0LL;
                v282 = v280;
                v283 = 8LL;
                do
                {
                  if ( !*v586 )
                    goto LABEL_331;
                  bossBattleInfo = (*v586)->fields.bossBattleInfo;
                  if ( !bossBattleInfo )
                    goto LABEL_331;
                  if ( v281 >= bossBattleInfo->max_length )
                    goto LABEL_332;
                  v285 = *(unsigned int **)(v588 + 96);
                  v286 = *(WarBoardBossBattleData_SaveData_o **)((char *)&bossBattleInfo->obj.klass + v283 * 4);
                  v287 = (WarBoardBossBattleData_o *)sub_B52A54(WarBoardBossBattleData_TypeInfo);
                  WarBoardBossBattleData___ctor_22779352(v287, v286, v288);
                  if ( !v285 )
                    goto LABEL_331;
                  if ( v287 )
                  {
                    Instance = sub_B52A44(v287, *(_QWORD *)(*(_QWORD *)v285 + 64LL));
                    if ( !Instance )
                      goto LABEL_333;
                  }
                  if ( v281 >= v285[6] )
                    goto LABEL_332;
                  *(_QWORD *)&v285[v283] = v287;
                  sub_B52920(
                    (BattleServantConfConponent_o *)&v285[v283],
                    (System_Int32_array **)v287,
                    v289,
                    v290,
                    v291,
                    v292,
                    v293,
                    v294);
                  ++v281;
                  v283 += 2LL;
                }
                while ( (__int64)v281 < v282 );
                v178 = (WarBoardDataEntity_o *)v588;
              }
              layoutEntities = v577;
              goto LABEL_178;
            }
            v255 = 0LL;
            while ( 1 )
            {
              v256 = sub_B52A54(WarBoardData___c__DisplayClass77_3_TypeInfo);
              WarBoardData___c__DisplayClass77_3___ctor((WarBoardData___c__DisplayClass77_3_o *)v256, 0LL);
              if ( v255 >= wallSaves->max_length )
                break;
              if ( !v256 )
                goto LABEL_331;
              v263 = (System_Int32_array **)wallSaves->m_Items[v255];
              *(_QWORD *)(v256 + 16) = v263;
              sub_B52920((BattleServantConfConponent_o *)(v256 + 16), v263, v257, v258, v259, v260, v261, v262);
              v264 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v588 + 48);
              v265 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardUserWallData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v265,
                (Il2CppObject *)v256,
                Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__,
                (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v264,
                                    (System_Func_TSource__bool__o *)v265,
                                    (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
              if ( Instance )
                WarBoardUserWallData__SetSaveData(
                  (WarBoardUserWallData_o *)Instance,
                  *(WarBoardWallData_SaveData_o **)(v256 + 16),
                  0LL);
              if ( (__int64)++v255 >= (int)wallSaves->max_length )
                goto LABEL_149;
            }
          }
          else
          {
            v208 = 0LL;
            while ( 1 )
            {
              v209 = sub_B52A54(WarBoardData___c__DisplayClass77_1_TypeInfo);
              WarBoardData___c__DisplayClass77_1___ctor((WarBoardData___c__DisplayClass77_1_o *)v209, 0LL);
              if ( v208 >= itemSaves->max_length )
                break;
              if ( !v209 )
                goto LABEL_331;
              v216 = (System_Int32_array **)itemSaves->m_Items[v208];
              *(_QWORD *)(v209 + 16) = v216;
              sub_B52920((BattleServantConfConponent_o *)(v209 + 16), v216, v210, v211, v212, v213, v214, v215);
              if ( !v588 )
                goto LABEL_331;
              v217 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v588 + 32);
              v218 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v218,
                (Il2CppObject *)v209,
                Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__,
                (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v217,
                                    (System_Func_TSource__bool__o *)v218,
                                    (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
              if ( Instance )
                WarBoardUserGetItemData__SetSaveData(
                  (WarBoardUserGetItemData_o *)Instance,
                  *(WarBoardItemData_SaveData_o **)(v209 + 16),
                  0LL);
              if ( (__int64)++v208 >= (int)itemSaves->max_length )
                goto LABEL_117;
            }
          }
        }
        else
        {
          v193 = 0LL;
          while ( 1 )
          {
            v194 = sub_B52A54(WarBoardData___c__DisplayClass77_0_TypeInfo);
            WarBoardData___c__DisplayClass77_0___ctor((WarBoardData___c__DisplayClass77_0_o *)v194, 0LL);
            if ( v193 >= pieceSaves->max_length )
              break;
            if ( !v194 )
              goto LABEL_331;
            v201 = (System_Int32_array **)pieceSaves->m_Items[v193];
            *(_QWORD *)(v194 + 16) = v201;
            v202 = (WarBoardPieceData_SaveData_o **)(v194 + 16);
            sub_B52920((BattleServantConfConponent_o *)(v194 + 16), v201, v195, v196, v197, v198, v199, v200);
            if ( !*(_QWORD *)(v194 + 16) || !v588 )
              goto LABEL_331;
            if ( *(_DWORD *)(*(_QWORD *)(v194 + 16) + 24LL) )
            {
              v203 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v588 + 16);
              v204 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardUserServantData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v204,
                (Il2CppObject *)v194,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__,
                (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v203,
                                    (System_Func_TSource__bool__o *)v204,
                                    (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
              if ( Instance )
                WarBoardUserServantData__SetSaveData((WarBoardUserServantData_o *)Instance, *v202, 0LL);
            }
            else
            {
              v205 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v588 + 24);
              v206 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardUserMasterData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v206,
                (Il2CppObject *)v194,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__,
                (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v205,
                                    (System_Func_TSource__bool__o *)v206,
                                    (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
              if ( Instance )
                WarBoardUserMasterData__SetSaveData((WarBoardUserMasterData_o *)Instance, *v202, 0LL);
            }
            if ( (__int64)++v193 >= (int)pieceSaves->max_length )
              goto LABEL_107;
          }
        }
LABEL_332:
        v555 = sub_B52A88(Instance);
        sub_B52A28(v555, 0LL);
      }
      v295 = WarBoardData_TypeInfo;
      if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      }
      WarBoardData__DeleteLocalSave((const MethodInfo *)v295);
      *p_localSaveData = 0LL;
      sub_B52920((BattleServantConfConponent_o *)p_localSaveData, 0LL, v296, v297, v298, v299, v300, v301);
    }
    v178 = serverData;
LABEL_178:
    v177 = v590;
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_331;
    goto LABEL_179;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !serverData )
    goto LABEL_331;
  v177 = v590;
  v178 = serverData;
  if ( !Instance )
    goto LABEL_331;
LABEL_179:
  WarBoardManager__InitializeLogic((WarBoardManager_o *)Instance, v178, v178->fields.progressType != 3, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  WarBoardManager__UpdateServerData((WarBoardManager_o *)Instance, v178, 0LL);
  v589 = v178;
  if ( v177 >= 1 )
  {
    p_enemyDeck = &v178->fields.enemyDeck;
    v585 = 0;
    p_myDeck = &v178->fields.myDeck;
    v302 = 0LL;
    v303 = v177;
    v573 = v177;
    do
    {
      v304 = sub_B52A54(WarBoardData___c__DisplayClass77_4_TypeInfo);
      WarBoardData___c__DisplayClass77_4___ctor((WarBoardData___c__DisplayClass77_4_o *)v304, 0LL);
      if ( v302 >= layoutEntities->max_length )
        goto LABEL_332;
      if ( !v304 )
        goto LABEL_331;
      v311 = (System_Int32_array **)layoutEntities->m_Items[v302];
      *(_QWORD *)(v304 + 16) = v311;
      v312 = (WarBoardStageLayoutEntity_o **)(v304 + 16);
      sub_B52920((BattleServantConfConponent_o *)(v304 + 16), v311, v305, v306, v307, v308, v309, v310);
      v313 = *(WarBoardStageLayoutEntity_o **)(v304 + 16);
      v314 = (WarBoardSquareData_o *)sub_B52A54(WarBoardSquareData_TypeInfo);
      WarBoardSquareData___ctor(v314, v313, roadEntities, 0LL);
      if ( v302 )
      {
        if ( (unsigned int)(v302 - 1) >= layoutEntities->max_length )
          goto LABEL_332;
        v316 = *((_QWORD *)&layoutEntities->max_length + v302);
        if ( !v316 )
          goto LABEL_331;
        v317 = *v312;
        if ( !*v312 )
          goto LABEL_331;
        if ( *(_DWORD *)(v316 + 20) == v317->fields.squareIndex )
          goto LABEL_196;
      }
      else
      {
        v317 = *v312;
        if ( !*v312 )
          goto LABEL_331;
      }
      throughCondId = (const MethodInfo *)(unsigned int)v317->fields.throughCondId;
      if ( (_DWORD)throughCondId )
      {
        Instance = (__int64)v572;
        if ( !v572 )
          goto LABEL_331;
        condGroup[0] = 0;
        if ( !WarBoardCommonReleaseMaster__IsOpen_22791504(v572, (int32_t)throughCondId, condGroup, v315) )
        {
          Instance = (__int64)v570;
          if ( !v570 )
            goto LABEL_331;
          v321 = (EventMissionProgressRequest_Argument_ProgressData_o *)v314;
          v322 = (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
          goto LABEL_243;
        }
      }
      Instance = (__int64)v575;
      if ( !v575 )
        goto LABEL_331;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v575,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v314,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
      v317 = *v312;
      if ( !*v312 )
        goto LABEL_331;
LABEL_196:
      if ( v317->fields.isPiecePut )
      {
        questId = v178->fields.questId;
        questPhase = v178->fields.questPhase;
        if ( v317->fields.pieceIndex )
        {
          svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v178->fields.svtInfo;
          v319 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardUserServantData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v319,
            (Il2CppObject *)v304,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__,
            (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
          v320 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   svtInfo,
                   (System_Func_TSource__bool__o *)v319,
                   (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
          Instance = 0LL;
        }
        else
        {
          masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v178->fields.masterInfo;
          v324 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardUserMasterData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v324,
            (Il2CppObject *)v304,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__,
            (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
          Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                masterInfo,
                                (System_Func_TSource__bool__o *)v324,
                                (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
          v320 = 0LL;
        }
        v325 = *v312;
        if ( !*v312 )
          goto LABEL_331;
        v326 = p_enemyDeck;
        v591 = (WarBoardUserMasterData_o *)Instance;
        if ( !v325->fields.forceId )
        {
          v326 = p_enemyDeck;
          if ( !v325->fields.pieceIndex )
            v326 = p_myDeck;
        }
        v327 = *v326;
        Type = Follower__getType(v325->fields.followerType, 0LL);
        IsNpc = Follower__IsNpc(Type, 0LL);
        progressType = v178->fields.progressType;
        v331 = *v312;
        v332 = IsNpc;
        v333 = *p_npcEntityDict;
        v334 = (WarBoardPieceData_o *)sub_B52A54(WarBoardPieceData_TypeInfo);
        v335 = v334;
        v336 = progressType == 3;
        if ( v332 )
        {
          WarBoardPieceData___ctor(v334, v331, (WarBoardUserServantData_o *)v320, v591, v327, v336, v333, v585, 0LL);
          if ( !v335 )
            goto LABEL_331;
          v178 = v589;
          layoutEntities = v577;
          Instance = (__int64)Master_WarQuestSelectionMaster;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_331;
          Entity_20742188 = NpcFollowerMaster__GetEntity_20742188(
                              Master_WarQuestSelectionMaster,
                              questId,
                              questPhase,
                              v335->fields._npcId_k__BackingField,
                              0LL);
          if ( Entity_20742188 )
          {
            v338 = Entity_20742188;
            v335->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_20742188, 0LL);
            v335->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v338, 0LL);
          }
          if ( WarBoardPieceData__get_isPlayerGroup(v335, 0LL) )
          {
            Instance = (__int64)v562;
            if ( !v562 )
              goto LABEL_331;
            if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   v562,
                   &entity,
                   v335->fields._npcId_k__BackingField,
                   (const MethodInfo_23E255C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            {
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_331;
              NpcServantFollowerEntity__GetFollowerName_20743660(
                (NpcServantFollowerEntity_o *)entity,
                v335->fields._npcId_k__BackingField,
                questId,
                questPhase,
                &isChangeName,
                0LL);
              if ( isChangeName )
              {
                Instance = (__int64)v335->fields._battleServant_k__BackingField;
                if ( !Instance )
                  goto LABEL_331;
                BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
              }
            }
          }
          Instance = (__int64)v576;
          if ( !v576 )
            goto LABEL_331;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v576,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v335,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
          ++v585;
        }
        else
        {
          WarBoardPieceData___ctor(v334, v331, (WarBoardUserServantData_o *)v320, v591, v327, v336, v333, -1, 0LL);
          if ( !v335 )
            goto LABEL_331;
          v178 = v589;
          layoutEntities = v577;
          if ( WarBoardPieceData__get_isMaster(v335, 0LL) )
          {
            Instance = (__int64)*p_masterExistsForce;
            if ( !*p_masterExistsForce )
              goto LABEL_331;
            if ( !System_Collections_Generic_List_int___Contains(
                    (System_Collections_Generic_List_int__o *)Instance,
                    v335->fields._forceId_k__BackingField,
                    (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              Instance = (__int64)*p_masterExistsForce;
              if ( !*p_masterExistsForce )
                goto LABEL_331;
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)Instance,
                v335->fields._forceId_k__BackingField,
                (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          Instance = (__int64)v576;
          if ( !v576 )
            goto LABEL_331;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v576,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v335,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        }
        v303 = v573;
      }
      v339 = *v312;
      if ( !*v312 )
        goto LABEL_331;
      switch ( v339->fields.type )
      {
        case 2:
          getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v178->fields.getItemInfo;
          v341 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v341,
            (Il2CppObject *)v304,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__,
            (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
          v342 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   getItemInfo,
                   (System_Func_TSource__bool__o *)v341,
                   (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
          v343 = *(WarBoardStageLayoutEntity_o **)(v304 + 16);
          v344 = (WarBoardUserGetItemData_o *)v342;
          v345 = (WarBoardItemData_o *)sub_B52A54(WarBoardItemData_TypeInfo);
          WarBoardItemData___ctor(v345, v343, v344, 0LL);
          Instance = (__int64)v567;
          if ( !v567 )
            goto LABEL_331;
          v346 = &Method_System_Collections_Generic_List_WarBoardItemData__Add__;
          goto LABEL_242;
        case 3:
          v345 = (WarBoardItemData_o *)sub_B52A54(WarBoardEffectData_TypeInfo);
          WarBoardEffectData___ctor((WarBoardEffectData_o *)v345, v339, 0LL);
          Instance = (__int64)v566;
          if ( !v566 )
            goto LABEL_331;
          v346 = &Method_System_Collections_Generic_List_WarBoardEffectData__Add__;
          goto LABEL_242;
        case 4:
          treasureInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v178->fields.treasureInfo;
          if ( !treasureInfo )
            goto LABEL_236;
          v348 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v348,
            (Il2CppObject *)v304,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__,
            (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
          if ( System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                 treasureInfo,
                 (System_Func_TSource__bool__o *)v348,
                 (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___) )
          {
            goto LABEL_244;
          }
          v339 = *v312;
LABEL_236:
          v345 = (WarBoardItemData_o *)sub_B52A54(WarBoardTreasureData_TypeInfo);
          WarBoardTreasureData___ctor((WarBoardTreasureData_o *)v345, v339, 0LL);
          Instance = (__int64)v563;
          if ( !v563 )
            goto LABEL_331;
          v346 = &Method_System_Collections_Generic_List_WarBoardTreasureData__Add__;
LABEL_242:
          v322 = (const MethodInfo_2FF1604 *)*v346;
          v321 = (EventMissionProgressRequest_Argument_ProgressData_o *)v345;
          break;
        case 5:
          wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v178->fields.wallInfo;
          v350 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardUserWallData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v350,
            (Il2CppObject *)v304,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__,
            (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
          v351 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   wallInfo,
                   (System_Func_TSource__bool__o *)v350,
                   (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
          v352 = *(WarBoardStageLayoutEntity_o **)(v304 + 16);
          v353 = (WarBoardUserWallData_o *)v351;
          v345 = (WarBoardItemData_o *)sub_B52A54(WarBoardWallData_TypeInfo);
          WarBoardWallData___ctor((WarBoardWallData_o *)v345, v352, v353, 0LL);
          Instance = (__int64)v568;
          if ( !v568 )
            goto LABEL_331;
          v346 = &Method_System_Collections_Generic_List_WarBoardWallData__Add__;
          goto LABEL_242;
        default:
          goto LABEL_244;
      }
LABEL_243:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        v321,
        v322);
LABEL_244:
      ++v302;
    }
    while ( (__int64)v302 < v303 );
  }
  Instance = (__int64)v575;
  if ( !v575 )
    goto LABEL_331;
  v354 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v575,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v583->fields.squares = (struct WarBoardSquareData_array *)v354;
  sub_B52920((BattleServantConfConponent_o *)&v583->fields.squares, v354, v355, v356, v357, v358, v359, v360);
  Instance = (__int64)v570;
  if ( !v570 )
    goto LABEL_331;
  v361 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v570,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v583->fields.condSquares = (struct WarBoardSquareData_array *)v361;
  sub_B52920((BattleServantConfConponent_o *)&v583->fields.condSquares, v361, v362, v363, v364, v365, v366, v367);
  Instance = (__int64)v576;
  if ( !v576 )
    goto LABEL_331;
  v368 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v576,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v583->fields.pieces = (struct WarBoardPieceData_array *)v368;
  p_pieces = (System_Collections_Generic_IEnumerable_T__o **)&v583->fields.pieces;
  sub_B52920((BattleServantConfConponent_o *)&v583->fields.pieces, v368, v370, v371, v372, v373, v374, v375);
  pieces = (BattleBuffData_BuffData_array *)v583->fields.pieces;
  v377 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_WarBoardPieceData__TypeInfo);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v377,
    (Il2CppObject *)v583,
    Method_WarBoardData_ComparePiece__,
    (const MethodInfo_2483370 *)Method_System_Comparison_WarBoardPieceData___ctor__);
  System_Array__Sort_BattleBuffData_BuffData_(
    pieces,
    (System_Comparison_T__o *)v377,
    (const MethodInfo_1A33468 *)Method_System_Array_Sort_WarBoardPieceData___);
  Instance = (__int64)v567;
  if ( !v567 )
    goto LABEL_331;
  v378 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v567,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
  v583->fields.items = (struct WarBoardItemData_array *)v378;
  sub_B52920((BattleServantConfConponent_o *)&v583->fields.items, v378, v379, v380, v381, v382, v383, v384);
  Instance = (__int64)v563;
  if ( !v563 )
    goto LABEL_331;
  v385 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v563,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
  v583->fields.treasures = (struct WarBoardTreasureData_array *)v385;
  sub_B52920((BattleServantConfConponent_o *)&v583->fields.treasures, v385, v386, v387, v388, v389, v390, v391);
  Instance = (__int64)v566;
  if ( !v566 )
    goto LABEL_331;
  v392 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v566,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
  v583->fields.effects = (struct WarBoardEffectData_array *)v392;
  sub_B52920((BattleServantConfConponent_o *)&v583->fields.effects, v392, v393, v394, v395, v396, v397, v398);
  Instance = (__int64)v568;
  if ( !v568 )
    goto LABEL_331;
  v399 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v568,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
  v583->fields.walls = (struct WarBoardWallData_array *)v399;
  sub_B52920((BattleServantConfConponent_o *)&v583->fields.walls, v399, v400, v401, v402, v403, v404, v405);
  v583->fields.serverData = v178;
  sub_B52920(
    (BattleServantConfConponent_o *)&v583->fields.serverData,
    (System_Int32_array **)v178,
    v406,
    v407,
    v408,
    v409,
    v410,
    v411);
  if ( v178->fields.progressType == 3 )
    WarBoardData__InitPrevCondData(v583, throughCondId);
  localSaveData = v583->fields.localSaveData;
  if ( localSaveData )
  {
    v413 = localSaveData->fields.pieceSaves;
    v592 = &v583->fields.localSaveData;
    if ( v413 )
    {
      if ( (int)v413->max_length >= 1 )
      {
        v414 = &WarBoardData___c__DisplayClass77_5_TypeInfo;
        v415 = 0LL;
        m_Items = v413->m_Items;
        v594 = localSaveData->fields.pieceSaves;
        do
        {
          v417 = sub_B52A54(*v414);
          WarBoardData___c__DisplayClass77_5___ctor((WarBoardData___c__DisplayClass77_5_o *)v417, 0LL);
          if ( v415 >= v413->max_length )
            goto LABEL_332;
          if ( !v417 )
            goto LABEL_331;
          v424 = (System_Int32_array **)m_Items[v415];
          *(_QWORD *)(v417 + 16) = v424;
          v425 = (WarBoardPieceData_SaveData_o **)(v417 + 16);
          sub_B52920((BattleServantConfConponent_o *)(v417 + 16), v424, v418, v419, v420, v421, v422, v423);
          v426 = *p_pieces;
          v427 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v427,
            (Il2CppObject *)v417,
            Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__,
            (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
          if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v426,
                  (System_Func_T__bool__o *)v427,
                  (const MethodInfo_1A41D18 *)Method_BasicHelper_Any_WarBoardPieceData___) )
          {
            v428 = (System_Collections_Generic_IEnumerable_TSource__o *)v178->fields.svtInfo;
            v429 = m_Items;
            v430 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardUserServantData__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v430,
              (Il2CppObject *)v417,
              Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__,
              (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
            v431 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                     v428,
                     (System_Func_TSource__bool__o *)v430,
                     (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v432 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v432,
              (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v432 )
              goto LABEL_331;
            v433 = v414;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v432,
              *p_pieces,
              (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
            if ( !p_fields->stageEntity )
              goto LABEL_331;
            id = p_fields->stageEntity->fields.id;
            v435 = *v425;
            v436 = (WarBoardPieceData_o *)sub_B52A54(WarBoardPieceData_TypeInfo);
            WarBoardPieceData___ctor_22750824(v436, id, (WarBoardUserServantData_o *)v431, v435, 0LL, -1, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v432,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v436,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
            v437 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v432,
                                            (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
            *p_pieces = (System_Collections_Generic_IEnumerable_T__o *)v437;
            sub_B52920((BattleServantConfConponent_o *)p_pieces, v437, v438, v439, v440, v441, v442, v443);
            v178 = v589;
            v414 = v433;
            m_Items = v429;
            v413 = v594;
          }
          Instance = (__int64)*v425;
          if ( !*v425 )
            goto LABEL_331;
          WarBoardPieceData_SaveData__SetOwner((WarBoardPieceData_SaveData_o *)Instance, v583, 0LL);
          Instance = (__int64)*v425;
          if ( !*v425 )
            goto LABEL_331;
          WarBoardPieceData_SaveData__Load((WarBoardPieceData_SaveData_o *)Instance, 0LL);
        }
        while ( (__int64)++v415 < (int)v413->max_length );
      }
      if ( *v592 )
      {
        v444 = (*v592)->fields.itemSaves;
        if ( v444 )
        {
          max_length = v444->max_length;
          if ( max_length >= 1 )
          {
            v446 = 0;
            while ( v446 < max_length )
            {
              v447 = (__int64)v444 + 8 * (int)v446;
              v448 = *(WarBoardItemData_SaveData_o **)(v447 + 32);
              if ( !v448 )
                goto LABEL_331;
              WarBoardItemData_SaveData__SetOwner(*(WarBoardItemData_SaveData_o **)(v447 + 32), v583, 0LL);
              WarBoardItemData_SaveData__Load(v448, 0LL);
              max_length = v444->max_length;
              if ( (int)++v446 >= max_length )
                goto LABEL_274;
            }
            goto LABEL_332;
          }
LABEL_274:
          if ( *v592 )
          {
            v449 = (*v592)->fields.treasureSaves;
            if ( v449 )
            {
              v450 = v449->max_length;
              if ( v450 >= 1 )
              {
                v451 = 0;
                while ( v451 < v450 )
                {
                  v452 = (__int64)v449 + 8 * (int)v451;
                  v453 = *(WarBoardTreasureData_SaveData_o **)(v452 + 32);
                  if ( !v453 )
                    goto LABEL_331;
                  WarBoardTreasureData_SaveData__SetOwner(*(WarBoardTreasureData_SaveData_o **)(v452 + 32), v583, 0LL);
                  WarBoardTreasureData_SaveData__Load(v453, 0LL);
                  v450 = v449->max_length;
                  if ( (int)++v451 >= v450 )
                    goto LABEL_281;
                }
                goto LABEL_332;
              }
LABEL_281:
              if ( *v592 )
              {
                v454 = (*v592)->fields.wallSaves;
                if ( v454 )
                {
                  v455 = v454->max_length;
                  if ( v455 >= 1 )
                  {
                    v456 = 0;
                    while ( v456 < v455 )
                    {
                      v457 = (__int64)v454 + 8 * (int)v456;
                      v458 = *(WarBoardWallData_SaveData_o **)(v457 + 32);
                      if ( !v458 )
                        goto LABEL_331;
                      WarBoardWallData_SaveData__SetOwner(*(WarBoardWallData_SaveData_o **)(v457 + 32), v583, 0LL);
                      WarBoardWallData_SaveData__Load(v458, 0LL);
                      v455 = v454->max_length;
                      if ( (int)++v456 >= v455 )
                        goto LABEL_288;
                    }
                    goto LABEL_332;
                  }
LABEL_288:
                  if ( *v592 )
                  {
                    squareSaves = (*v592)->fields.squareSaves;
                    if ( squareSaves )
                    {
                      v460 = squareSaves->max_length;
                      if ( v460 >= 1 )
                      {
                        v461 = 0;
                        while ( v461 < v460 )
                        {
                          v462 = (__int64)squareSaves + 8 * (int)v461;
                          v463 = *(WarBoardSquareData_SaveData_o **)(v462 + 32);
                          if ( !v463 )
                            goto LABEL_331;
                          WarBoardSquareData_SaveData__SetOwner(
                            *(WarBoardSquareData_SaveData_o **)(v462 + 32),
                            v583,
                            0LL);
                          WarBoardSquareData_SaveData__Load(v463, 0LL);
                          v460 = squareSaves->max_length;
                          if ( (int)++v461 >= v460 )
                            goto LABEL_295;
                        }
                        goto LABEL_332;
                      }
LABEL_295:
                      if ( *v592 )
                      {
                        v583->fields.isPlayedHalfDeadMessage = (*v592)->fields.isPlayedHalfDeadMessage;
                        v464 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                          v464,
                          (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
                        v583->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v464;
                        sub_B52920(
                          (BattleServantConfConponent_o *)p_listEvent,
                          (System_Int32_array **)v464,
                          v465,
                          v466,
                          v467,
                          v468,
                          v469,
                          v470);
                        v477 = v583->fields.localSaveData;
                        if ( v477 )
                        {
                          eventSaves = v477->fields.eventSaves;
                          if ( eventSaves )
                          {
                            v479 = *(_QWORD *)&eventSaves->max_length;
                            if ( (int)v479 >= 1 )
                            {
                              v480 = 0LL;
                              while ( v480 < (unsigned int)v479 )
                              {
                                v481 = eventSaves->m_Items[v480];
                                v482 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_listEvent;
                                v483 = (WarBoardEventData_o *)sub_B52A54(WarBoardEventData_TypeInfo);
                                WarBoardEventData___ctor_18463360(v483, v481, 0LL);
                                if ( !v482 )
                                  goto LABEL_331;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  v482,
                                  (EventMissionProgressRequest_Argument_ProgressData_o *)v483,
                                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardEventData__Add__);
                                LODWORD(v479) = eventSaves->max_length;
                                if ( (__int64)++v480 >= (int)v479 )
                                  goto LABEL_303;
                              }
                              goto LABEL_332;
                            }
LABEL_303:
                            v484 = *v592;
                            if ( *v592 )
                            {
                              v583->fields.winCondId = v484->fields.winCondId;
                              latestPieceActionSquareIndexes = (System_Int32_array **)v484->fields.latestPieceActionSquareIndexes;
                              v583->fields.latestPieceActionSquareIndexes = (struct System_Int32_array *)latestPieceActionSquareIndexes;
                              sub_B52920(
                                (BattleServantConfConponent_o *)p_latestPieceActionSquareIndexes,
                                latestPieceActionSquareIndexes,
                                v471,
                                v472,
                                v473,
                                v474,
                                v475,
                                v476);
                              v492 = v583->fields.localSaveData;
                              if ( v492 )
                              {
                                latestBattlePieceUniqueIndexes = (System_Int32_array **)v492->fields.latestBattlePieceUniqueIndexes;
                                p_latestBattlePieceUniqueIndexes->klass = (BattleServantConfConponent_c *)latestBattlePieceUniqueIndexes;
                                sub_B52920(
                                  p_latestBattlePieceUniqueIndexes,
                                  latestBattlePieceUniqueIndexes,
                                  v486,
                                  v487,
                                  v488,
                                  v489,
                                  v490,
                                  v491);
                                v494 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                  v494,
                                  (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
                                p_listPrevCond->klass = (BattleServantConfConponent_c *)v494;
                                sub_B52920(
                                  p_listPrevCond,
                                  (System_Int32_array **)v494,
                                  v495,
                                  v496,
                                  v497,
                                  v498,
                                  v499,
                                  v500);
                                if ( *v592 )
                                {
                                  prevCondSaves = (*v592)->fields.prevCondSaves;
                                  if ( prevCondSaves )
                                  {
                                    v502 = *(_QWORD *)&prevCondSaves->max_length;
                                    if ( (int)v502 >= 1 )
                                    {
                                      v503 = 0LL;
                                      while ( v503 < (unsigned int)v502 )
                                      {
                                        v504 = prevCondSaves->m_Items[v503];
                                        v505 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_listPrevCond->klass;
                                        v506 = (WarBoardPrevCondData_o *)sub_B52A54(WarBoardPrevCondData_TypeInfo);
                                        WarBoardPrevCondData___ctor_29033708(v506, v504, 0LL);
                                        if ( !v505 )
                                          goto LABEL_331;
                                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                          v505,
                                          (EventMissionProgressRequest_Argument_ProgressData_o *)v506,
                                          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
                                        LODWORD(v502) = prevCondSaves->max_length;
                                        if ( (__int64)++v503 >= (int)v502 )
                                          goto LABEL_312;
                                      }
                                      goto LABEL_332;
                                    }
LABEL_312:
                                    v507 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
                                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                      v507,
                                      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
                                    p_reinforcementsSaveList->klass = (BattleServantConfConponent_c *)v507;
                                    sub_B52920(
                                      p_reinforcementsSaveList,
                                      (System_Int32_array **)v507,
                                      v508,
                                      v509,
                                      v510,
                                      v511,
                                      v512,
                                      v513);
                                    if ( *v592 )
                                    {
                                      reinforcementsSaves = (*v592)->fields.reinforcementsSaves;
                                      if ( reinforcementsSaves )
                                      {
                                        v515 = *(_QWORD *)&reinforcementsSaves->max_length;
                                        if ( (int)v515 >= 1 )
                                        {
                                          v516 = 0LL;
                                          while ( v516 < (unsigned int)v515 )
                                          {
                                            v517 = reinforcementsSaves->m_Items[v516];
                                            v518 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_reinforcementsSaveList->klass;
                                            v519 = (HoldReinforcementsData_o *)sub_B52A54(HoldReinforcementsData_TypeInfo);
                                            HoldReinforcementsData___ctor_28273984(v519, v517, 0LL);
                                            if ( !v518 )
                                              goto LABEL_331;
                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                              v518,
                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v519,
                                              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
                                            LODWORD(v515) = reinforcementsSaves->max_length;
                                            if ( (__int64)++v516 >= (int)v515 )
                                              goto LABEL_319;
                                          }
                                          goto LABEL_332;
                                        }
LABEL_319:
                                        if ( *v592 )
                                        {
                                          v520 = (System_Int32_array **)System_Linq_Enumerable__ToList_int_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)(*v592)->fields.playedReinforcements,
                                                                          (const MethodInfo_1B7131C *)Method_System_Linq_Enumerable_ToList_int___);
                                          p_playedStageReinforcementsList->klass = (BattleServantConfConponent_c *)v520;
                                          sub_B52920(
                                            p_playedStageReinforcementsList,
                                            v520,
                                            v521,
                                            v522,
                                            v523,
                                            v524,
                                            v525,
                                            v526);
                                          v527 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
                                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                            v527,
                                            (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
                                          p_listUiData->klass = (BattleServantConfConponent_c *)v527;
                                          sub_B52920(
                                            p_listUiData,
                                            (System_Int32_array **)v527,
                                            v528,
                                            v529,
                                            v530,
                                            v531,
                                            v532,
                                            v533);
                                          if ( *v592 )
                                          {
                                            uiDataSaves = (*v592)->fields.uiDataSaves;
                                            if ( uiDataSaves )
                                            {
                                              v541 = *(_QWORD *)&uiDataSaves->max_length;
                                              if ( (int)v541 >= 1 )
                                              {
                                                v542 = 0LL;
                                                while ( v542 < (unsigned int)v541 )
                                                {
                                                  v543 = uiDataSaves->m_Items[v542];
                                                  v544 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_listUiData->klass;
                                                  v545 = (WarBoardUiData_o *)sub_B52A54(WarBoardUiData_TypeInfo);
                                                  WarBoardUiData___ctor_26381020(v545, v543, 0LL);
                                                  if ( !v544 )
                                                    goto LABEL_331;
                                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                    v544,
                                                    (EventMissionProgressRequest_Argument_ProgressData_o *)v545,
                                                    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardUiData__Add__);
                                                  LODWORD(v541) = uiDataSaves->max_length;
                                                  if ( (__int64)++v542 >= (int)v541 )
                                                    goto LABEL_327;
                                                }
                                                goto LABEL_332;
                                              }
LABEL_327:
                                              if ( *v592 )
                                              {
                                                bgAnimationInfo = (System_Int32_array **)(*v592)->fields.bgAnimationInfo;
                                                p_bgAnimationInfo_k__BackingField->klass = (BattleServantConfConponent_c *)bgAnimationInfo;
                                                sub_B52920(
                                                  p_bgAnimationInfo_k__BackingField,
                                                  bgAnimationInfo,
                                                  v534,
                                                  v535,
                                                  v536,
                                                  v537,
                                                  v538,
                                                  v539);
                                                v547 = *v592;
                                                if ( *v592 )
                                                {
                                                  v583->fields._ContinueConsumeType_k__BackingField = v547->fields.continueConsumeType;
                                                  v583->fields._IsContinue_k__BackingField = v547->fields.isContinue;
                                                  v583->fields._IsNextTurn_k__BackingField = v547->fields.isNextTurn;
                                                  v583->fields.localSaveTiming = v547->fields.localSaveTiming;
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
    sub_B52A5C(Instance, throughCondId);
  }
  v548 = (WarBoardData_WarBoardLocalSaveData_o *)sub_B52A54(WarBoardData_WarBoardLocalSaveData_TypeInfo);
  WarBoardData_WarBoardLocalSaveData___ctor_22504260(v548, v583, 0LL);
  v583->fields.localSaveData = v548;
  sub_B52920(
    (BattleServantConfConponent_o *)&v583->fields.localSaveData,
    (System_Int32_array **)v548,
    v549,
    v550,
    v551,
    v552,
    v553,
    v554);
}


void __fastcall WarBoardData__AddPlayedEventData(
        WarBoardData_o *this,
        WarBoardEventData_o *eventData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x0

  if ( (byte_42AEBB9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardEventData__Add__);
    byte_42AEBB9 = 1;
  }
  listEvent = this->fields.listEvent;
  if ( !listEvent )
    sub_B52A5C(0LL, eventData);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)listEvent,
    (EventMissionProgressRequest_Argument_ProgressData_o *)eventData,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardEventData__Add__);
}


WarBoardPieceData_array *__fastcall WarBoardData__AddReinforcementPieces(
        WarBoardData_o *this,
        WarBoardDataEntity_o *serverData,
        WarBoardUserServantData_array *reinfoSvtInfo,
        System_Int32_array *indexList,
        WarBoardStageReinforcementsEntity_o *reinfoStage,
        const MethodInfo *method)
{
  WarBoardReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x25
  __int64 Instance; // x0
  __int64 v13; // x1
  NpcFollowerMaster_o *v14; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x24
  __int64 v16; // x8
  unsigned __int64 v17; // x23
  WarBoardUserServantData_o *v18; // x22
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *v20; // x8
  __int64 v21; // x9
  WarBoardReinforcementsMaster_o *v22; // x19
  struct System_Collections_Generic_List_int__o *reinforcementsAppointmentSquareList; // x25
  WarBoardReinforcementsEntity_o *v24; // x20
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x24
  int32_t v26; // w21
  int32_t v27; // w25
  WarBoardPieceData_o *v28; // x27
  NpcFollowerEntity_o *Entity_20742188; // x0
  NpcFollowerEntity_o *v30; // x20
  struct WarBoardPieceData_array **p_pieces; // x20
  struct WarBoardPieceData_array *v32; // x0
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
  System_Int32_array **svtInfo; // x1
  __int64 v46; // x21
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  unsigned __int64 v54; // x23
  signed __int64 v55; // x24
  __int64 v56; // x25
  struct WarBoardData_WarBoardLocalSaveData_o *v57; // x8
  struct WarBoardPieceData_array *v58; // x9
  unsigned int *pieceSaves; // x27
  WarBoardPieceData_o *v60; // x22
  WarBoardPieceData_SaveData_o *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v69; // x0
  __int64 v70; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v71; // [xsp+8h] [xbp-B8h]
  WarBoardDataEntity_o *v72; // [xsp+10h] [xbp-B0h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // [xsp+18h] [xbp-A8h]
  System_Int32_array *v74; // [xsp+20h] [xbp-A0h]
  WarBoardUserServantData_array *v75; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v76; // [xsp+30h] [xbp-90h]
  WarBoardUserServantData_o **m_Items; // [xsp+38h] [xbp-88h]
  int32_t questPhase; // [xsp+40h] [xbp-80h]
  int32_t questId; // [xsp+44h] [xbp-7Ch]
  WarBoardStageReinforcementsEntity_o *stageReinforcementsEntity; // [xsp+48h] [xbp-78h]
  int32_t *v81; // [xsp+50h] [xbp-70h]
  bool isChangeName; // [xsp+5Ch] [xbp-64h] BYREF
  UserServantEntity_o *v83; // [xsp+60h] [xbp-60h] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42AEBB7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_B52984(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B52984(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_B52984(&WarBoardPieceData_SaveData___TypeInfo);
    sub_B52984(&WarBoardPieceData_SaveData_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&WarBoardPieceData_TypeInfo);
    byte_42AEBB7 = 1;
  }
  entity = 0LL;
  v83 = 0LL;
  isChangeName = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !serverData )
    goto LABEL_60;
  v72 = serverData;
  v14 = (NpcFollowerMaster_o *)Instance;
  questId = serverData->fields.questId;
  questPhase = serverData->fields.questPhase;
  v71 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v71,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !reinfoSvtInfo )
    goto LABEL_60;
  v16 = *(_QWORD *)&reinfoSvtInfo->max_length;
  v76 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    stageReinforcementsEntity = reinfoStage;
    v81 = &indexList->m_Items[1];
    m_Items = reinfoSvtInfo->m_Items;
    v74 = indexList;
    v75 = reinfoSvtInfo;
    do
    {
      if ( v17 >= (unsigned int)v16 )
      {
LABEL_61:
        v69 = sub_B52A88(Instance);
        sub_B52A28(v69, 0LL);
      }
      v18 = m_Items[v17];
      if ( v18 )
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
        if ( v17 >= indexList->max_length )
          goto LABEL_61;
        if ( v81[v17] < (signed int)reinforcementsIds->max_length )
          goto LABEL_43;
      }
      if ( v17 >= indexList->max_length )
        goto LABEL_61;
      v20 = reinfoStage->fields.reinforcementsIds;
      if ( !v20 )
        goto LABEL_60;
      v21 = v81[v17];
      if ( (unsigned int)v21 >= v20->max_length )
        goto LABEL_61;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_60;
      v22 = Master_WarQuestSelectionMaster;
      Instance = WarBoardReinforcementsMaster__TryGetEntity(
                   Master_WarQuestSelectionMaster,
                   &entity,
                   v20->m_Items[v21 + 1],
                   0LL);
      reinforcementsAppointmentSquareList = this->fields.reinforcementsAppointmentSquareList;
      if ( !reinforcementsAppointmentSquareList )
        goto LABEL_60;
      v24 = entity;
      npcEntityDict = this->fields.npcEntityDict;
      if ( !reinforcementsAppointmentSquareList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( v17 >= indexList->max_length )
        goto LABEL_61;
      v26 = reinforcementsAppointmentSquareList->fields._items->m_Items[1];
      v27 = v81[v17];
      v28 = (WarBoardPieceData_o *)sub_B52A54(WarBoardPieceData_TypeInfo);
      WarBoardPieceData___ctor_22749576(v28, stageReinforcementsEntity, v24, v18, npcEntityDict, v17, v26, v27, 0LL);
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_60;
      System_Collections_Generic_List_int___RemoveAt(
        (System_Collections_Generic_List_int__o *)Instance,
        0,
        (const MethodInfo_3058C68 *)Method_System_Collections_Generic_List_int__RemoveAt__);
      v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v76;
      if ( !v28 || !v14 )
        goto LABEL_60;
      Master_WarQuestSelectionMaster = v22;
      Entity_20742188 = NpcFollowerMaster__GetEntity_20742188(
                          v14,
                          questId,
                          questPhase,
                          v28->fields._npcId_k__BackingField,
                          0LL);
      if ( Entity_20742188 )
      {
        v30 = Entity_20742188;
        v28->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_20742188, 0LL);
        v28->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v30, 0LL);
      }
      Instance = WarBoardPieceData__get_isPlayerGroup(v28, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)MasterData_WarQuestSelectionMaster;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_60;
        Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                     MasterData_WarQuestSelectionMaster,
                     &v83,
                     v28->fields._npcId_k__BackingField,
                     (const MethodInfo_23E255C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)v83;
          if ( !v83 )
            goto LABEL_60;
          Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_20743660(
                                (NpcServantFollowerEntity_o *)v83,
                                v28->fields._npcId_k__BackingField,
                                questId,
                                questPhase,
                                &isChangeName,
                                0LL);
          if ( isChangeName )
          {
            Instance = (__int64)v28->fields._battleServant_k__BackingField;
            if ( !Instance )
              goto LABEL_60;
            BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
          }
        }
      }
      if ( !v76 )
        goto LABEL_60;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v76,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      reinfoStage = stageReinforcementsEntity;
      indexList = v74;
      reinfoSvtInfo = v75;
LABEL_43:
      LODWORD(v16) = reinfoSvtInfo->max_length;
    }
    while ( (__int64)++v17 < (int)v16 );
  }
  if ( !v71 )
    goto LABEL_60;
  p_pieces = &this->fields.pieces;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v71,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v71,
    (System_Collections_Generic_IEnumerable_T__o *)v15,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v32 = (struct WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v71,
                                            (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.pieces = v32;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.pieces,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  Instance = (__int64)this->fields.serverData;
  if ( !Instance
    || (svtInfo = (System_Int32_array **)v72->fields.svtInfo,
        *(_QWORD *)(Instance + 16) = svtInfo,
        sub_B52920((BattleServantConfConponent_o *)(Instance + 16), svtInfo, v39, v40, v41, v42, v43, v44),
        !*p_pieces)
    || (v46 = *(_QWORD *)&(*p_pieces)->max_length,
        localSaveData = this->fields.localSaveData,
        Instance = sub_B5299C(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v46),
        !localSaveData) )
  {
LABEL_60:
    sub_B52A5C(Instance, v13);
  }
  localSaveData->fields.pieceSaves = (struct WarBoardPieceData_SaveData_array *)Instance;
  sub_B52920(
    (BattleServantConfConponent_o *)&localSaveData->fields.pieceSaves,
    (System_Int32_array **)Instance,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( (int)v46 >= 1 )
  {
    v54 = 0LL;
    v55 = (int)v46;
    v56 = 8LL;
    do
    {
      v57 = this->fields.localSaveData;
      if ( !v57 )
        goto LABEL_60;
      v58 = *p_pieces;
      if ( !*p_pieces )
        goto LABEL_60;
      if ( v54 >= v58->max_length )
        goto LABEL_61;
      pieceSaves = (unsigned int *)v57->fields.pieceSaves;
      v60 = *(WarBoardPieceData_o **)((char *)&v58->obj.klass + v56 * 4);
      v61 = (WarBoardPieceData_SaveData_o *)sub_B52A54(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_20312400(v61, v60, 0LL);
      if ( !pieceSaves )
        goto LABEL_60;
      if ( v61 )
      {
        Instance = sub_B52A44(v61, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !Instance )
        {
          v70 = sub_B52A7C();
          sub_B52A28(v70, 0LL);
        }
      }
      if ( v54 >= pieceSaves[6] )
        goto LABEL_61;
      *(_QWORD *)&pieceSaves[v56] = v61;
      sub_B52920(
        (BattleServantConfConponent_o *)&pieceSaves[v56],
        (System_Int32_array **)v61,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      ++v54;
      v56 += 2LL;
    }
    while ( (__int64)v54 < v55 );
  }
  Instance = (__int64)v76;
  if ( !v76 )
    goto LABEL_60;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      v76,
                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


void __fastcall WarBoardData__AddSquareInfo(
        WarBoardData_o *this,
        int32_t squareIndex,
        int32_t effectId,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass173_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *squareIndexInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v12; // x21
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  BattleServantConfConponent_o *p_isExecute; // x20
  System_Collections_Generic_IEnumerable_T__o *v15; // x22
  System_Collections_Generic_List_int__o *v16; // x21
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42AEBBE & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Find_WarBoardSquareIndexData___);
    sub_B52984(&Method_System_Func_WarBoardSquareIndexData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardSquareIndexData__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass173_0_TypeInfo);
    byte_42AEBBE = 1;
  }
  v7 = (WarBoardData___c__DisplayClass173_0_o *)sub_B52A54(WarBoardData___c__DisplayClass173_0_TypeInfo);
  WarBoardData___c__DisplayClass173_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  v7->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.squareIndexInfo;
  v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardSquareIndexData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     squareIndexInfo,
                                                                     (System_Func_T__bool__o *)v12,
                                                                     (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return;
  p_isExecute = (BattleServantConfConponent_o *)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v15 = *(System_Collections_Generic_IEnumerable_T__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v16 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50685004(
    v16,
    v15,
    (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
  if ( !v16 )
LABEL_10:
    sub_B52A5C(v8, v9);
  if ( !System_Collections_Generic_List_int___Contains(
          v16,
          effectId,
          (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Add(
      v16,
      effectId,
      (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    v17 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                   v16,
                                   (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
    p_isExecute->klass = (BattleServantConfConponent_c *)v17;
    sub_B52920(p_isExecute, v17, v18, v19, v20, v21, v22, v23);
  }
}


void __fastcall WarBoardData__BuffTurnProgressing(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v4; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__191_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  WarBoardData___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  struct WarBoardData___c_StaticFields *v18; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__191_1; // x20
  Il2CppObject *v20; // x21
  struct WarBoardData___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  WarBoardData___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_T__o *v30; // x19
  struct WarBoardData___c_StaticFields *v31; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__191_2; // x20
  Il2CppObject *v33; // x21
  struct WarBoardData___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_42AEBCD & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleBuffData___ctor__);
    sub_B52984(&System_Action_BattleBuffData__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleBuffData___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleBuffData___);
    sub_B52984(&Method_System_Func_BattleBuffData__bool___ctor__);
    sub_B52984(&Method_System_Func_WarBoardPieceData__BattleBuffData___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__BattleBuffData__TypeInfo);
    sub_B52984(&System_Func_BattleBuffData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__BuffTurnProgressing_b__191_0__);
    sub_B52984(&Method_WarBoardData___c__BuffTurnProgressing_b__191_1__);
    sub_B52984(&Method_WarBoardData___c__BuffTurnProgressing_b__191_2__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEBCD = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v4 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__191_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__191_0;
  if ( !_9__191_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__191_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_WarBoardPieceData__BattleBuffData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__191_0,
      v7,
      Method_WarBoardData___c__BuffTurnProgressing_b__191_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_WarBoardPieceData__BattleBuffData___ctor__);
    v8 = WarBoardData___c_TypeInfo->static_fields;
    v8->__9__191_0 = (struct System_Func_WarBoardPieceData__BattleBuffData__o *)_9__191_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__191_0,
      (System_Int32_array **)_9__191_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__191_0,
          (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
  v16 = WarBoardData___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v16 = WarBoardData___c_TypeInfo;
  }
  v18 = v16->static_fields;
  _9__191_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v18->__9__191_1;
  if ( !_9__191_1 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v18 = WarBoardData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__191_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleBuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__191_1,
      v20,
      Method_WarBoardData___c__BuffTurnProgressing_b__191_1__,
      (const MethodInfo_2BC90BC *)Method_System_Func_BattleBuffData__bool___ctor__);
    v21 = WarBoardData___c_TypeInfo->static_fields;
    v21->__9__191_1 = (struct System_Func_BattleBuffData__bool__o *)_9__191_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v21->__9__191_1,
      (System_Int32_array **)_9__191_1,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v17,
          (System_Func_TSource__bool__o *)_9__191_1,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleBuffData___);
  v29 = WarBoardData___c_TypeInfo;
  v30 = (System_Collections_Generic_IEnumerable_T__o *)v28;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v29 = WarBoardData___c_TypeInfo;
  }
  v31 = v29->static_fields;
  _9__191_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v31->__9__191_2;
  if ( !_9__191_2 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v31 = WarBoardData___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)v31->__9;
    _9__191_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleBuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__191_2,
      v33,
      Method_WarBoardData___c__BuffTurnProgressing_b__191_2__,
      (const MethodInfo_2627780 *)Method_System_Action_BattleBuffData___ctor__);
    v34 = WarBoardData___c_TypeInfo->static_fields;
    v34->__9__191_2 = (struct System_Action_BattleBuffData__o *)_9__191_2;
    sub_B52920(
      (BattleServantConfConponent_o *)&v34->__9__191_2,
      (System_Int32_array **)_9__191_2,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v30,
    (System_Action_T__o *)_9__191_2,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleBuffData___);
}


void __fastcall WarBoardData__CheckItem(
        WarBoardData_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardTaskBase__o *v3; // x19
  __int64 AliveServantPieces; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int v8; // w8
  __int64 v9; // x21
  const MethodInfo_2B75DB0 **v10; // x26
  unsigned int v11; // w27
  WarBoardPieceData_o *v12; // x22
  __int64 v13; // x23
  WarBoardManager_o *v14; // x24
  const MethodInfo_2175340 *v15; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x24
  const MethodInfo_2B75DB0 **v17; // x19
  WebViewManager_o *Instance; // x25
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x26
  __int64 v26; // x0
  __int64 v27; // x0
  WarBoardData_o *v28; // [xsp+8h] [xbp-68h]
  System_Nullable_Vector3__o v29; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_float__o v30; // 0:x3.8
  System_Nullable_Vector3__o v31; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v3 = taskList;
  if ( (byte_42AEB84 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_System_Nullable_Vector3___ctor__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardTaskBase___TypeInfo);
    byte_42AEB84 = 1;
  }
  AliveServantPieces = (__int64)WarBoardData__GetAliveServantPieces(this, (const MethodInfo *)taskList);
  if ( !AliveServantPieces )
LABEL_24:
    sub_B52A5C(AliveServantPieces, v6);
  v8 = *(_DWORD *)(AliveServantPieces + 24);
  v9 = AliveServantPieces;
  if ( v8 >= 1 )
  {
    v10 = (const MethodInfo_2B75DB0 **)&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
    v11 = 0;
    v28 = this;
    while ( v11 < v8 )
    {
      v12 = *(WarBoardPieceData_o **)(v9 + 8LL * (int)v11 + 32);
      if ( !v12 )
        goto LABEL_24;
      AliveServantPieces = (__int64)WarBoardData__GetItem(this, v12->fields._nowSquareIndex_k__BackingField, v7);
      if ( AliveServantPieces )
      {
        v13 = AliveServantPieces;
        AliveServantPieces = WarBoardItemData__get_Acquired((WarBoardItemData_o *)AliveServantPieces, 0LL);
        if ( (AliveServantPieces & 1) == 0 )
        {
          AliveServantPieces = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance(*v10);
          if ( !*(_QWORD *)(v13 + 56) )
            goto LABEL_24;
          v14 = (WarBoardManager_o *)AliveServantPieces;
          AliveServantPieces = (__int64)UnityEngine_Component__get_transform(
                                          *(UnityEngine_Component_o **)(v13 + 56),
                                          0LL);
          if ( !AliveServantPieces )
            goto LABEL_24;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)AliveServantPieces, 0LL);
          *(_QWORD *)&v31.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
          *(_QWORD *)&v31.fields.value.fields.x = &v29;
          *(_QWORD *)&v29.fields.value.fields.x = 0LL;
          *(_QWORD *)&v29.fields.value.fields.z = 0LL;
          System_Nullable_Vector3____ctor(v31, localPosition, v15);
          if ( !v14 )
            goto LABEL_24;
          v30 = 0LL;
          CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                           v14,
                                                                                           v29,
                                                                                           v30,
                                                                                           1,
                                                                                           0,
                                                                                           1,
                                                                                           0LL);
          if ( v3 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v3,
              CameraPerformanceTask,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
          }
          else
          {
            v17 = v10;
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance(*v10);
            AliveServantPieces = sub_B5299C(WarBoardTaskBase___TypeInfo, 1LL);
            if ( !AliveServantPieces )
              goto LABEL_24;
            v25 = AliveServantPieces;
            if ( CameraPerformanceTask )
            {
              AliveServantPieces = sub_B52A44(CameraPerformanceTask, *(_QWORD *)(*(_QWORD *)AliveServantPieces + 64LL));
              if ( !AliveServantPieces )
              {
                v27 = sub_B52A7C();
                sub_B52A28(v27, 0LL);
              }
            }
            if ( !*(_DWORD *)(v25 + 24) )
              break;
            *(_QWORD *)(v25 + 32) = CameraPerformanceTask;
            sub_B52920(
              (BattleServantConfConponent_o *)(v25 + 32),
              (System_Int32_array **)CameraPerformanceTask,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24);
            if ( !Instance )
              goto LABEL_24;
            WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v25, 0LL);
            v10 = v17;
            v3 = 0LL;
            this = v28;
          }
          AliveServantPieces = WarBoardItemData__Get((WarBoardItemData_o *)v13, v12, v3, 0, 0LL);
        }
      }
      v8 = *(_DWORD *)(v9 + 24);
      if ( (int)++v11 >= v8 )
        return;
    }
    v26 = sub_B52A88(AliveServantPieces);
    sub_B52A28(v26, 0LL);
  }
}


bool __fastcall WarBoardData__CheckWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  bool result; // w0
  int32_t maxForceId_k__BackingField; // w9
  int32_t maxGroupId_k__BackingField; // w8
  int v10; // w24
  int v11; // w23
  int32_t i; // w20
  int32_t v13; // w21
  int v14; // w8
  void *v15; // x22
  unsigned int v16; // w25
  struct System_Collections_Generic_List_int__o *masterExistsForce; // x19
  WarBoardData___c_c *v18; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__98_0; // x20
  Il2CppObject *v21; // x21
  struct WarBoardData___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x0
  int32_t condGroup; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42AEB89 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Count_int____68616992);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__CheckWinCond_b__98_0__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEB89 = 1;
  }
  condGroup = 0;
  if ( (this->fields.winCondId & 0x80000000) == 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    condGroup = -1;
    if ( Master_WarQuestSelectionMaster )
    {
      if ( !WarBoardCommonReleaseMaster__IsOpen_22791504(
              (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster,
              this->fields.winCondId,
              &condGroup,
              v6) )
        return 0;
      result = 1;
      this->fields.winCondGroup = condGroup;
      return result;
    }
LABEL_41:
    sub_B52A5C(Master_WarQuestSelectionMaster, v5);
  }
  maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField < 1 )
  {
    v11 = 0;
    v10 = 0;
    goto LABEL_31;
  }
  maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
  v10 = 0;
  v11 = 0;
  for ( i = 1; i <= maxForceId_k__BackingField; ++i )
  {
    if ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
      continue;
    v13 = 0;
    do
    {
      Master_WarQuestSelectionMaster = WarBoardData__GetPieces_22796832(this, i, v13, v2);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_41;
      v14 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
      v15 = Master_WarQuestSelectionMaster;
      if ( v14 >= 1 )
      {
        v16 = 0;
        do
        {
          if ( v16 >= v14 )
          {
            v29 = sub_B52A88(Master_WarQuestSelectionMaster);
            sub_B52A28(v29, 0LL);
          }
          Master_WarQuestSelectionMaster = (void *)*((_QWORD *)v15 + (int)v16 + 4);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_41;
          if ( !*((_BYTE *)Master_WarQuestSelectionMaster + 60) && !*((_BYTE *)Master_WarQuestSelectionMaster + 120) )
          {
            Master_WarQuestSelectionMaster = (void *)WarBoardPieceData__get_isMaster(
                                                       (WarBoardPieceData_o *)Master_WarQuestSelectionMaster,
                                                       0LL);
            if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
              ++v10;
            else
              ++v11;
          }
          v14 = *((_DWORD *)v15 + 6);
        }
        while ( (int)++v16 < v14 );
      }
      maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
      ++v13;
    }
    while ( v13 <= maxGroupId_k__BackingField );
    maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  }
LABEL_31:
  masterExistsForce = this->fields.masterExistsForce;
  v18 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v18 = WarBoardData___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__98_0 = static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__98_0 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__98_0,
      v21,
      Method_WarBoardData___c__CheckWinCond_b__98_0__,
      (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
    v22 = WarBoardData___c_TypeInfo->static_fields;
    v22->__9__98_0 = _9__98_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v22->__9__98_0,
      (System_Int32_array **)_9__98_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return (v10 == 0) & (System_Linq_Enumerable__Count_int__28701924(
                         (System_Collections_Generic_IEnumerable_TSource__o *)masterExistsForce,
                         (System_Func_TSource__bool__o *)_9__98_0,
                         (const MethodInfo_1B5F4E4 *)Method_System_Linq_Enumerable_Count_int____68616992) > 0) | (v11 == 0);
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

  if ( (byte_42AEBC1 & 1) == 0 )
  {
    sub_B52984(&uint___TypeInfo);
    byte_42AEBC1 = 1;
  }
  v3 = (struct System_UInt32_array *)sub_B5299C(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v3;
  sub_B52920(
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
    sub_B52A5C(this, a);
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

  if ( (byte_42AEBD5 & 1) == 0 )
  {
    sub_B52984(&WarBoardData_BattleParticipantInfo_TypeInfo);
    byte_42AEBD5 = 1;
  }
  v6 = (WarBoardData_BattleParticipantInfo_o *)sub_B52A54(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor(v6, attackPieceData, targetPieceData, 0LL);
  return v6;
}


void __fastcall WarBoardData__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  WarBoardData_c *v1; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_42AEB81 & 1) == 0 )
  {
    sub_B52984(&EncryptedPlayerPrefs_TypeInfo);
    sub_B52984(&WarBoardData_TypeInfo);
    byte_42AEB81 = 1;
  }
  v1 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v1 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v1->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SetInt(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 1, 0LL);
}


WarBoardWaitTime_o *__fastcall WarBoardData__CreateEventBossUIDataTask(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  System_Delegate_o *v5; // x21
  WarBoardData___c_c *v6; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__152_0; // x22
  Il2CppObject *v9; // x23
  struct WarBoardData___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  WarBoardData_o *v25; // x0
  int32_t v26; // w1
  const MethodInfo *v27; // x2

  if ( (byte_42AEBB1 & 1) == 0 )
  {
    sub_B52984(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    sub_B52984(&WarBoardWaitTime_TypeInfo);
    byte_42AEBB1 = 1;
  }
  v2 = sub_B52A54(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v2, 0.0, 0LL);
  if ( !v2 )
    sub_B52A5C(v3, v4);
  v5 = *(System_Delegate_o **)(v2 + 40);
  v6 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v6 = WarBoardData___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__152_0 = static_fields->__9__152_0;
  if ( !_9__152_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__152_0 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__152_0,
      v9,
      Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__,
      0LL);
    v10 = WarBoardData___c_TypeInfo->static_fields;
    v10->__9__152_0 = _9__152_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v10->__9__152_0,
      (System_Int32_array **)_9__152_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = (System_Int32_array **)System_Delegate__Combine(v5, (System_Delegate_o *)_9__152_0, 0LL);
  if ( v17 && *v17 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v25 = (WarBoardData_o *)sub_B52D50(v17);
    return (WarBoardWaitTime_o *)WarBoardData__GetStageBossData(v25, v26, v27);
  }
  else
  {
    *(_QWORD *)(v2 + 40) = v17;
    sub_B52920((BattleServantConfConponent_o *)(v2 + 40), v17, v18, v19, v20, v21, v22, v23);
    return (WarBoardWaitTime_o *)v2;
  }
}


void __fastcall WarBoardData__DelSquareInfo(
        WarBoardData_o *this,
        int32_t squareIndex,
        int32_t effectId,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass174_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *squareIndexInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v12; // x21
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  BattleServantConfConponent_o *p_isExecute; // x20
  System_Collections_Generic_IEnumerable_T__o *v15; // x22
  System_Collections_Generic_List_int__o *v16; // x21
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42AEBBF & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Find_WarBoardSquareIndexData___);
    sub_B52984(&Method_System_Func_WarBoardSquareIndexData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardSquareIndexData__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass174_0_TypeInfo);
    byte_42AEBBF = 1;
  }
  v7 = (WarBoardData___c__DisplayClass174_0_o *)sub_B52A54(WarBoardData___c__DisplayClass174_0_TypeInfo);
  WarBoardData___c__DisplayClass174_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  v7->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.squareIndexInfo;
  v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardSquareIndexData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     squareIndexInfo,
                                                                     (System_Func_T__bool__o *)v12,
                                                                     (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return;
  p_isExecute = (BattleServantConfConponent_o *)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v15 = *(System_Collections_Generic_IEnumerable_T__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v16 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50685004(
    v16,
    v15,
    (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
  if ( !v16 )
LABEL_10:
    sub_B52A5C(v8, v9);
  if ( System_Collections_Generic_List_int___Contains(
         v16,
         effectId,
         (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Remove(
      v16,
      effectId,
      (const MethodInfo_305892C *)Method_System_Collections_Generic_List_int__Remove__);
    v17 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                   v16,
                                   (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
    p_isExecute->klass = (BattleServantConfConponent_c *)v17;
    sub_B52920(p_isExecute, v17, v18, v19, v20, v21, v22, v23);
  }
}


void __fastcall WarBoardData__DeleteAfterContinueDeviceLocalSave(const MethodInfo *method)
{
  WarBoardData_c *v1; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_42AEB82 & 1) == 0 )
  {
    sub_B52984(&EncryptedPlayerPrefs_TypeInfo);
    sub_B52984(&WarBoardData_TypeInfo);
    byte_42AEB82 = 1;
  }
  v1 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v1 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v1->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__DeleteKey(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 0LL);
}


void __fastcall WarBoardData__DeleteLocalSave(const MethodInfo *method)
{
  WarBoardData_c *v1; // x0
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19

  if ( (byte_42AEB80 & 1) == 0 )
  {
    sub_B52984(&EncryptedPlayerPrefs_TypeInfo);
    sub_B52984(&WarBoardData_TypeInfo);
    byte_42AEB80 = 1;
  }
  v1 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v1 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v1->static_fields->WARBOARDDATA_SAVEDATA_KEY;
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
  if ( (byte_42AEB86 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
    byte_42AEB86 = 1;
  }
  value = 0LL;
  actionPointEntityDict = (System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)this->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    sub_B52A5C(0LL, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___TryGetValue(
    actionPointEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_2EDF344 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
  return (WarBoardActionPointEntity_o *)value;
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAliveEnemyServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v4; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__110_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_42AEB95 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEB95 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v4 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__110_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__110_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__110_0,
      v7,
      Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v8 = WarBoardData___c_TypeInfo->static_fields;
    v8->__9__110_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__110_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__110_0,
      (System_Int32_array **)_9__110_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__110_0,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                   v15,
                                                                   (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAlivePieces(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v4; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__107_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_42AEB92 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__GetAlivePieces_b__107_0__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEB92 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v4 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__107_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__107_0;
  if ( !_9__107_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__107_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__107_0,
      v7,
      Method_WarBoardData___c__GetAlivePieces_b__107_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v8 = WarBoardData___c_TypeInfo->static_fields;
    v8->__9__107_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__107_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__107_0,
      (System_Int32_array **)_9__107_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v15,
                                      (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAlivePlayerGroupServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v4; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__109_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_42AEB94 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEB94 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v4 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__109_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__109_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__109_0,
      v7,
      Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v8 = WarBoardData___c_TypeInfo->static_fields;
    v8->__9__109_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__109_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__109_0,
      (System_Int32_array **)_9__109_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__109_0,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                   v15,
                                                                   (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAliveServantPieces(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v4; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__108_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_42AEB93 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__GetAliveServantPieces_b__108_0__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEB93 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v4 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__108_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__108_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__108_0,
      v7,
      Method_WarBoardData___c__GetAliveServantPieces_b__108_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v8 = WarBoardData___c_TypeInfo->static_fields;
    v8->__9__108_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__108_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__108_0,
      (System_Int32_array **)_9__108_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__108_0,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v15,
                                      (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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


int32_t __fastcall WarBoardData__GetClearedTurn(WarBoardData_o *this, int32_t condId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass183_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20
  peRenderTexture_ChangeLayerObject_o *v10; // x0

  if ( (byte_42AEBC5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
    sub_B52984(&Method_System_Predicate_WarBoardPrevCondData___ctor__);
    sub_B52984(&System_Predicate_WarBoardPrevCondData__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass183_0_TypeInfo);
    byte_42AEBC5 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass183_0_o *)sub_B52A54(WarBoardData___c__DisplayClass183_0_TypeInfo);
  WarBoardData___c__DisplayClass183_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.condId = condId,
        listPrevCond = this->fields.listPrevCond,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_WarBoardPrevCondData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_WarBoardPrevCondData___ctor__),
        !listPrevCond) )
  {
    sub_B52A5C(v6, v7);
  }
  v10 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listPrevCond,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
  if ( v10 )
    return HIDWORD(v10->fields.gameObject);
  else
    return -1;
}


WarBoardSquareData_o *__fastcall WarBoardData__GetCondSquare(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass130_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *condSquares; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_42AEBA3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_B52984(&Method_System_Func_WarBoardSquareData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass130_0_TypeInfo);
    byte_42AEBA3 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass130_0_o *)sub_B52A54(WarBoardData___c__DisplayClass130_0_TypeInfo);
  WarBoardData___c__DisplayClass130_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.squareIndex = squareIndex;
  condSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condSquares;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardSquareData__bool___ctor__);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   condSquares,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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
  System_Collections_Generic_List_int__o *v5; // x21
  void *Piece_22803728; // x0
  __int64 value; // x1
  signed int max_length; // w8
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
  __int64 v21; // x0
  System_Int32_array_array *v22; // [xsp+8h] [xbp-58h]

  if ( (byte_42AEBA5 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int___);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__);
    sub_B52984(&WarBoardData___c__DisplayClass133_0_TypeInfo);
    byte_42AEBA5 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !squareIds )
    goto LABEL_27;
  max_length = squareIds->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    v22 = squareIds;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
LABEL_26:
        v21 = sub_B52A88(Piece_22803728);
        sub_B52A28(v21, 0LL);
      }
      v10 = squareIds->m_Items[v9];
      if ( !v10 )
        break;
      if ( (int)v10->max_length < 1 )
      {
        value = 0xFFFFFFFFLL;
        if ( !v5 )
          break;
      }
      else
      {
        v11 = 0LL;
        do
        {
          v12 = (WarBoardData___c__DisplayClass133_0_o *)sub_B52A54(WarBoardData___c__DisplayClass133_0_TypeInfo);
          WarBoardData___c__DisplayClass133_0___ctor(v12, 0LL);
          if ( v11 >= v10->max_length )
            goto LABEL_26;
          if ( !v12 )
            goto LABEL_27;
          v14 = v10->m_Items[v11 + 1];
          v12->fields.value = v14;
          Piece_22803728 = WarBoardData__GetPiece_22803728(this, v14, v13);
          if ( !Piece_22803728 )
          {
            Piece_22803728 = WarBoardData__GetUnusedTreasure(this, v12->fields.value, v15);
            if ( !Piece_22803728 )
            {
              Piece_22803728 = WarBoardData__GetWall(this, v12->fields.value, 0, v16);
              if ( !Piece_22803728 )
              {
                reinforcementsAppointmentSquareList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsAppointmentSquareList;
                v18 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v18,
                  (Il2CppObject *)v12,
                  Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__,
                  (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
                Piece_22803728 = (void *)BasicHelper__Any_int_(
                                           reinforcementsAppointmentSquareList,
                                           (System_Func_T__bool__o *)v18,
                                           (const MethodInfo_1A41928 *)Method_BasicHelper_Any_int___);
                if ( ((unsigned __int8)Piece_22803728 & 1) == 0 )
                {
                  v19 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
                  System_Func_int__bool____ctor(
                    v19,
                    (Il2CppObject *)v12,
                    Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__,
                    (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
                  Piece_22803728 = (void *)BasicHelper__Any_int_(
                                             (System_Collections_Generic_List_T__o *)v5,
                                             (System_Func_T__bool__o *)v19,
                                             (const MethodInfo_1A41928 *)Method_BasicHelper_Any_int___);
                  if ( ((unsigned __int8)Piece_22803728 & 1) == 0 )
                  {
                    value = (unsigned int)v12->fields.value;
                    goto LABEL_20;
                  }
                }
              }
            }
          }
          ++v11;
        }
        while ( (__int64)v11 < (int)v10->max_length );
        value = 0xFFFFFFFFLL;
LABEL_20:
        squareIds = v22;
        if ( !v5 )
          break;
      }
      System_Collections_Generic_List_int___Add(
        v5,
        value,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = squareIds->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_24;
    }
LABEL_27:
    sub_B52A5C(Piece_22803728, value);
  }
LABEL_24:
  if ( !v5 )
    goto LABEL_27;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *__fastcall WarBoardData__GetEditBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AEBAE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_B52984(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEBAE = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                stageEntity->fields.editBgmId,
                                (const MethodInfo_23E2334 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.age;
LABEL_11:
    sub_B52A5C(Instance, v4);
  }
  return 0LL;
}


WarBoardPieceData_array *__fastcall WarBoardData__GetEditableServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v4; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__120_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_42AEB9B & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__GetEditableServantPieces_b__120_0__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEB9B = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v4 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__120_0,
      v7,
      Method_WarBoardData___c__GetEditableServantPieces_b__120_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v8 = WarBoardData___c_TypeInfo->static_fields;
    v8->__9__120_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__120_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__120_0,
      (System_Int32_array **)_9__120_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v15,
                                      (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardEffectData_o *__fastcall WarBoardData__GetEffect(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass142_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *effects; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_42AEBAA & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
    sub_B52984(&Method_System_Func_WarBoardEffectData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardEffectData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass142_0_TypeInfo);
    byte_42AEBAA = 1;
  }
  v5 = (WarBoardData___c__DisplayClass142_0_o *)sub_B52A54(WarBoardData___c__DisplayClass142_0_TypeInfo);
  WarBoardData___c__DisplayClass142_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.squareIndex = squareIndex;
  effects = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.effects;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardEffectData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardEffectData__bool___ctor__);
  return (WarBoardEffectData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   effects,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
}


WarBoardEffectData_array *__fastcall WarBoardData__GetEffects(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.effects;
}


WarBoardPieceData_o *__fastcall WarBoardData__GetEventBossPiece(
        WarBoardData_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass105_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_42AEB90 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass105_0_TypeInfo);
    byte_42AEB90 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass105_0_o *)sub_B52A54(WarBoardData___c__DisplayClass105_0_TypeInfo);
  WarBoardData___c__DisplayClass105_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.stageBossIndex = stageBossIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v9,
                                  (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
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
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
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
    sub_B52A5C(this, method);
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
  WarBoardData___c__DisplayClass188_0_o *v8; // x23
  void *v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__188_0; // x24
  Il2CppObject *v14; // x25
  struct WarBoardData___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v29; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  int v32; // w26
  __int64 v33; // x24
  __int64 v34; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **current; // x1
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
  WebViewManager_o *Instance; // x0
  __int64 v62; // x1
  _BOOL8 IsPlayerTurn; // x0
  __int64 v64; // x1
  __int64 v65; // x10
  int max_length; // w11
  int v67; // w10
  System_Collections_Generic_List_T__o *v68; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v69; // x26
  bool v70; // w0
  __int64 v71; // x1
  _BOOL8 v72; // x0
  __int64 v73; // x1
  Il2CppObject *v74; // x24
  System_Collections_Generic_List_int__o *v75; // x25
  System_Collections_Generic_List_int__o *v76; // x26
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x0
  __int64 v80; // x1
  System_Int32_array **v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  __int64 v88; // x0
  __int64 v89; // x1
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x8
  System_Int32_array **v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  WebViewManager_o *v100; // x0
  __int64 v101; // x1
  __int64 v102; // x8
  __int64 v103; // x9
  System_Collections_Generic_List_int__o *v104; // x0
  __int64 v105; // x1
  int v106; // w8
  __int64 v107; // x24
  __int64 v108; // x0
  __int64 v109; // x1
  __int64 v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  __int64 v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  __int64 v124; // x8
  __int64 v125; // x1
  WebViewManager_o *v126; // x0
  __int64 v127; // x1
  __int64 v128; // x8
  __int64 v129; // x9
  System_Collections_Generic_List_int__o *v130; // x0
  __int64 v131; // x1
  __int64 v132; // x0
  __int64 v133; // x0
  int v134; // w26
  __int64 v135; // x0
  __int64 v136; // x0
  __int64 v137; // x0
  __int64 v138; // x0
  __int64 v139; // x0
  __int64 v140; // x0
  __int64 v141; // x0
  int v142; // [xsp+14h] [xbp-CCh]
  int v143; // [xsp+1Ch] [xbp-C4h]
  _BYTE v145[36]; // [xsp+28h] [xbp-B8h] BYREF
  int v146; // [xsp+4Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v147; // [xsp+50h] [xbp-90h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v149; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_42AEBCA & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_ReinforcementsData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__get_Current__);
    sub_B52984(&Method_System_Func_ReinforcementsData__bool___ctor__);
    sub_B52984(&Method_System_Func_HoldReinforcementsData__bool___ctor__);
    sub_B52984(&System_Func_ReinforcementsData__bool__TypeInfo);
    sub_B52984(&System_Func_HoldReinforcementsData__bool__TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_ReinforcementsData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_ReinforcementsData__TypeInfo);
    sub_B52984(&Method_System_Predicate_HoldReinforcementsData___ctor__);
    sub_B52984(&System_Predicate_HoldReinforcementsData__TypeInfo);
    sub_B52984(&ReinforcementsData_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&Method_WarBoardData___c__GetHoldReinforcements_b__188_0__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__);
    sub_B52984(&WarBoardData___c__DisplayClass188_0_TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__);
    sub_B52984(&WarBoardData___c__DisplayClass188_1_TypeInfo);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEBCA = 1;
  }
  memset(&v149, 0, sizeof(v149));
  entity = 0LL;
  memset(&v147, 0, sizeof(v147));
  v146 = 0;
  v8 = (WarBoardData___c__DisplayClass188_0_o *)sub_B52A54(WarBoardData___c__DisplayClass188_0_TypeInfo);
  WarBoardData___c__DisplayClass188_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_123;
  v8->fields.targetStageReinforcementsId = targetStageReinforcementsId;
  reinforcementsSaveList = this->fields.reinforcementsSaveList;
  v9 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v9 = WarBoardData___c_TypeInfo;
  }
  static_fields = (struct WarBoardData___c_StaticFields *)*((_QWORD *)v9 + 23);
  _9__188_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__188_0;
  if ( !_9__188_0 )
  {
    if ( (*((_BYTE *)v9 + 307) & 4) != 0 && !*((_DWORD *)v9 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__188_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_HoldReinforcementsData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__188_0,
      v14,
      Method_WarBoardData___c__GetHoldReinforcements_b__188_0__,
      (const MethodInfo_28D2DBC *)Method_System_Predicate_HoldReinforcementsData___ctor__);
    v15 = WarBoardData___c_TypeInfo->static_fields;
    v15->__9__188_0 = (struct System_Predicate_HoldReinforcementsData__o *)_9__188_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v15->__9__188_0,
      (System_Int32_array **)_9__188_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !reinforcementsSaveList )
    goto LABEL_123;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)reinforcementsSaveList,
    (System_Predicate_T__o *)_9__188_0,
    (const MethodInfo_2FF3154 *)Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ReinforcementsData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
  *reinforcementsDatas = (System_Collections_Generic_List_ReinforcementsData__o *)v22;
  sub_B52920(
    (BattleServantConfConponent_o *)reinforcementsDatas,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = this->fields.reinforcementsSaveList;
  if ( (v8->fields.targetStageReinforcementsId & 0x80000000) == 0 )
  {
    v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_HoldReinforcementsData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v30,
      (Il2CppObject *)v8,
      Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__,
      (const MethodInfo_2BC90BC *)Method_System_Func_HoldReinforcementsData__bool___ctor__);
    v31 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v29,
            (System_Func_TSource__bool__o *)v30,
            (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    v9 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
           v31,
           (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    v29 = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v9;
  }
  if ( !v29 )
LABEL_123:
    sub_B52A5C(v9, v10);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v145,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v29,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v143 = 0;
  v32 = 0;
  v149 = *(System_Collections_Generic_List_Enumerator_T__o *)v145;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v149,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v33 = sub_B52A54(WarBoardData___c__DisplayClass188_1_TypeInfo);
    WarBoardData___c__DisplayClass188_1___ctor((WarBoardData___c__DisplayClass188_1_o *)v33, 0LL);
    if ( !v33 )
      sub_B52A5C(v34, v35);
    current = (System_Int32_array **)v149.fields.current;
    *(_QWORD *)(v33 + 16) = v149.fields.current;
    v43 = (HoldReinforcementsData_o **)(v33 + 16);
    sub_B52920((BattleServantConfConponent_o *)(v33 + 16), current, v36, v37, v38, v39, v40, v41);
    stageEntity = this->fields.stageEntity;
    if ( !stageEntity )
      sub_B52A5C(v44, v45);
    if ( !*v43 )
      sub_B52A5C(v44, v45);
    if ( !mst )
      sub_B52A5C(v44, v45);
    v47 = WarBoardStageReinforcementsMaster__TryGetEntity(
            mst,
            &entity,
            stageEntity->fields.id,
            (*v43)->fields._id_k__BackingField,
            0LL);
    if ( v47 )
    {
      if ( !entity )
        sub_B52A5C(v47, v48);
      DeploySquareIds = WarBoardData__GetDeploySquareIds(this, entity->fields.squareIds, v49);
      if ( !entity )
        sub_B52A5C(DeploySquareIds, v51);
      if ( !*v43 )
        sub_B52A5C(DeploySquareIds, v51);
      limitNums = entity->fields.limitNums;
      if ( !limitNums )
        sub_B52A5C(DeploySquareIds, v51);
      index_k__BackingField = (*v43)->fields._index_k__BackingField;
      if ( (unsigned int)index_k__BackingField >= limitNums->max_length )
      {
        v135 = sub_B52A88(DeploySquareIds);
        sub_B52A28(v135, 0LL);
      }
      v55 = DeploySquareIds;
      if ( limitNums->m_Items[index_k__BackingField + 1] < 1 )
      {
        v60 = 0;
      }
      else
      {
        ReinfocementsPieces = WarBoardData__GetReinfocementsPieces(this, entity->fields.id, index_k__BackingField, v52);
        if ( !ReinfocementsPieces )
          sub_B52A5C(0LL, v57);
        if ( !entity )
          sub_B52A5C(ReinfocementsPieces, v57);
        if ( !*v43 )
          sub_B52A5C(ReinfocementsPieces, v57);
        v58 = entity->fields.limitNums;
        if ( !v58 )
          sub_B52A5C(ReinfocementsPieces, v57);
        v59 = (*v43)->fields._index_k__BackingField;
        if ( (unsigned int)v59 >= v58->max_length )
        {
          v136 = sub_B52A88(ReinfocementsPieces);
          sub_B52A28(v136, 0LL);
        }
        v60 = v58->m_Items[v59 + 1] <= (signed int)ReinfocementsPieces->max_length;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_B52A5C(0LL, v62);
      IsPlayerTurn = WarBoardManager__IsPlayerTurn((WarBoardManager_o *)Instance, 0LL);
      if ( !entity )
        sub_B52A5C(IsPlayerTurn, v64);
      if ( !v55 )
        sub_B52A5C(IsPlayerTurn, v64);
      if ( !*v43 )
        sub_B52A5C(IsPlayerTurn, v64);
      v65 = (*v43)->fields._index_k__BackingField;
      max_length = v55->max_length;
      if ( (int)v65 >= max_length )
      {
        v67 = 0;
      }
      else
      {
        if ( (unsigned int)v65 >= max_length )
        {
          v137 = sub_B52A88(IsPlayerTurn);
          sub_B52A28(v137, 0LL);
        }
        v67 = v55->m_Items[v65 + 1] >= 0 && !v60;
      }
      if ( v67 & (IsPlayerTurn ^ (entity->fields.forceId != 0)) )
      {
        v142 = v32;
        v68 = (System_Collections_Generic_List_T__o *)*reinforcementsDatas;
        v69 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ReinforcementsData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v69,
          (Il2CppObject *)v33,
          Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__,
          (const MethodInfo_2BC90BC *)Method_System_Func_ReinforcementsData__bool___ctor__);
        v70 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                v68,
                (System_Func_T__bool__o *)v69,
                (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_ReinforcementsData___);
        v32 = v142;
        if ( !v70 )
          goto LABEL_70;
        if ( !*reinforcementsDatas )
          sub_B52A5C(0LL, v71);
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v145,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*reinforcementsDatas,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
        v147 = *(System_Collections_Generic_List_Enumerator_T__o *)v145;
        while ( 1 )
        {
          v72 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v147,
                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
          if ( !v72 )
            break;
          v74 = v147.fields.current;
          if ( !v147.fields.current )
            sub_B52A5C(v72, v73);
          if ( !*v43 )
            sub_B52A5C(v72, v73);
          if ( LODWORD(v147.fields.current[1].klass) == (*v43)->fields._id_k__BackingField )
          {
            v75 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v75,
              (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
            v76 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v76,
              (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v75 )
              sub_B52A5C(v77, v78);
            System_Collections_Generic_List_int___AddRange(
              v75,
              (System_Collections_Generic_IEnumerable_T__o *)v74[1].monitor,
              (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( !*v43 )
              sub_B52A5C(v79, v80);
            System_Collections_Generic_List_int___Add(
              v75,
              (*v43)->fields._index_k__BackingField,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
            v81 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                           v75,
                                           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
            v74[1].monitor = v81;
            sub_B52920((BattleServantConfConponent_o *)&v74[1].monitor, v81, v82, v83, v84, v85, v86, v87);
            if ( !v76 )
              sub_B52A5C(v88, v89);
            System_Collections_Generic_List_int___AddRange(
              v76,
              (System_Collections_Generic_IEnumerable_T__o *)v74[2].klass,
              (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( !*v43 )
              sub_B52A5C(v90, v91);
            v92 = (*v43)->fields._index_k__BackingField;
            if ( (unsigned int)v92 >= v55->max_length )
            {
              v132 = sub_B52A88(v90);
              sub_B52A28(v132, 0LL);
            }
            System_Collections_Generic_List_int___Add(
              v76,
              v55->m_Items[v92 + 1],
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
            v93 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                           v76,
                                           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
            v74[2].klass = (Il2CppClass *)v93;
            sub_B52920((BattleServantConfConponent_o *)&v74[2], v93, v94, v95, v96, v97, v98, v99);
            v100 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( !v100 )
              sub_B52A5C(0LL, v101);
            v102 = *(_QWORD *)&v100[4].fields.m_CachedPtr;
            if ( !v102 )
              sub_B52A5C(v100, v101);
            if ( !*v43 )
              sub_B52A5C(v100, v101);
            v103 = (*v43)->fields._index_k__BackingField;
            if ( (unsigned int)v103 >= v55->max_length )
            {
              v133 = sub_B52A88(v100);
              sub_B52A28(v133, 0LL);
            }
            v104 = *(System_Collections_Generic_List_int__o **)(v102 + 232);
            if ( !v104 )
              sub_B52A5C(0LL, v101);
            System_Collections_Generic_List_int___Add(
              v104,
              v55->m_Items[v103 + 1],
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
            if ( !*v43 )
              sub_B52A5C(0LL, v105);
            HoldReinforcementsData__DecreaseHoldNum(*v43, 0LL);
            break;
          }
        }
        *(_DWORD *)&v145[4 * v143 + 24] = 727;
        v32 = ++v146;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v147,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
        if ( v32 )
        {
          v106 = v32 - 1;
          v143 = v32;
          if ( *(_DWORD *)&v145[4 * v32 + 20] != 727 )
            goto LABEL_70;
          v146 = --v32;
          v143 = v106;
        }
        else
        {
          v143 = 0;
LABEL_70:
          v107 = sub_B52A54(ReinforcementsData_TypeInfo);
          ReinforcementsData___ctor((ReinforcementsData_o *)v107, 0LL);
          if ( !entity )
            sub_B52A5C(v108, v109);
          if ( !v107 )
            sub_B52A5C(v108, v109);
          *(_DWORD *)(v107 + 16) = entity->fields.id;
          v110 = sub_B5299C(int___TypeInfo, 1LL);
          if ( !*v43 )
            sub_B52A5C(v110, v110);
          if ( !v110 )
            sub_B52A5C(0LL, 0LL);
          if ( !*(_DWORD *)(v110 + 24) )
          {
            v139 = sub_B52A88(v110);
            sub_B52A28(v139, 0LL);
          }
          *(_DWORD *)(v110 + 32) = (*v43)->fields._index_k__BackingField;
          *(_QWORD *)(v107 + 24) = v110;
          sub_B52920(
            (BattleServantConfConponent_o *)(v107 + 24),
            (System_Int32_array **)v110,
            v111,
            v112,
            v113,
            v114,
            v115,
            v116);
          v117 = sub_B5299C(int___TypeInfo, 1LL);
          if ( !*v43 )
            sub_B52A5C(v117, v117);
          v124 = (*v43)->fields._index_k__BackingField;
          if ( (unsigned int)v124 >= v55->max_length )
          {
            v140 = sub_B52A88(v117);
            sub_B52A28(v140, 0LL);
          }
          if ( !v117 )
            sub_B52A5C(0LL, 0LL);
          if ( !*(_DWORD *)(v117 + 24) )
          {
            v138 = sub_B52A88(v117);
            sub_B52A28(v138, 0LL);
          }
          *(_DWORD *)(v117 + 32) = v55->m_Items[v124 + 1];
          *(_QWORD *)(v107 + 32) = v117;
          sub_B52920(
            (BattleServantConfConponent_o *)(v107 + 32),
            (System_Int32_array **)v117,
            v118,
            v119,
            v120,
            v121,
            v122,
            v123);
          if ( !*reinforcementsDatas )
            sub_B52A5C(0LL, v125);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*reinforcementsDatas,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v107,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ReinforcementsData__Add__);
          v126 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v126 )
            sub_B52A5C(0LL, v127);
          v128 = *(_QWORD *)&v126[4].fields.m_CachedPtr;
          if ( !v128 )
            sub_B52A5C(v126, v127);
          if ( !*v43 )
            sub_B52A5C(v126, v127);
          v129 = (*v43)->fields._index_k__BackingField;
          if ( (unsigned int)v129 >= v55->max_length )
          {
            v141 = sub_B52A88(v126);
            sub_B52A28(v141, 0LL);
          }
          v130 = *(System_Collections_Generic_List_int__o **)(v128 + 232);
          if ( !v130 )
            sub_B52A5C(0LL, v127);
          System_Collections_Generic_List_int___Add(
            v130,
            v55->m_Items[v129 + 1],
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !*v43 )
            sub_B52A5C(0LL, v131);
          HoldReinforcementsData__DecreaseHoldNum(*v43, 0LL);
        }
      }
    }
  }
  *(_DWORD *)&v145[4 * v143 + 24] = 755;
  v134 = ++v146;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v149,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( v134 && *(_DWORD *)&v145[4 * v134 + 20] == 755 )
    v146 = v134 - 1;
}


int32_t __fastcall WarBoardData__GetHoldReinforcementsCount(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData_o *v2; // x19
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8

  v2 = this;
  if ( (byte_42AEBB6 & 1) == 0 )
  {
    this = (WarBoardData_o *)sub_B52984(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__);
    byte_42AEBB6 = 1;
  }
  reinforcementsSaveList = v2->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    sub_B52A5C(this, method);
  return reinforcementsSaveList->fields._size;
}


System_Int32_array *__fastcall WarBoardData__GetInRangeSquareIndecies(
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
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__123_0; // x21
  Il2CppObject *v17; // x22
  struct WarBoardData___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  System_Func_int__bool__o *v26; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *rangeSearches; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AEB9E & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_int___);
    sub_B52984(&Method_System_Func_WarBoardData_SquareRangeSearch__int___ctor__);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__);
    sub_B52984(&WarBoardData___c__DisplayClass123_0_TypeInfo);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEB9E = 1;
  }
  rangeSearches = 0LL;
  v9 = (WarBoardData___c__DisplayClass123_0_o *)sub_B52A54(WarBoardData___c__DisplayClass123_0_TypeInfo);
  WarBoardData___c__DisplayClass123_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  v9->fields.start = start;
  v9->fields.ignoreStart = ignoreStart;
  rangeSearches = 0LL;
  WarBoardData__SearchInRangeSquares(this, start, range, &rangeSearches, v12);
  v13 = rangeSearches;
  if ( !rangeSearches )
    return 0LL;
  v14 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v14 = WarBoardData___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__123_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__123_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__123_0,
      v17,
      Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_WarBoardData_SquareRangeSearch__int___ctor__);
    v18 = WarBoardData___c_TypeInfo->static_fields;
    v18->__9__123_0 = (struct System_Func_WarBoardData_SquareRangeSearch__int__o *)_9__123_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v18->__9__123_0,
      (System_Int32_array **)_9__123_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                               (System_Func_TSource__TResult__o *)_9__123_0,
                                                               (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
  v26 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v26,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__,
    (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
  v27 = System_Linq_Enumerable__Where_int_(
          v25,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_1B72A2C *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v27,
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
}


WarBoardSquareData_array *__fastcall WarBoardData__GetInRangeSquares(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  WarBoardSquareData_array *result; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20
  System_Func_int__BattleActionData_SideEffectData__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  if ( (byte_42AEB9F & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
    sub_B52984(&Method_System_Func_int__WarBoardSquareData___ctor__);
    sub_B52984(&System_Func_int__WarBoardSquareData__TypeInfo);
    sub_B52984(&Method_WarBoardData__GetInRangeSquares_b__124_0__);
    byte_42AEB9F = 1;
  }
  result = (WarBoardSquareData_array *)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, method);
  if ( result )
  {
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)result;
    v11 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B52A54(System_Func_int__WarBoardSquareData__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v11,
      (Il2CppObject *)this,
      Method_WarBoardData__GetInRangeSquares_b__124_0__,
      (const MethodInfo_2BC49BC *)Method_System_Func_int__WarBoardSquareData___ctor__);
    v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 v10,
                                                                 (System_Func_TSource__TResult__o *)v11,
                                                                 (const MethodInfo_1B68D9C *)Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    return (WarBoardSquareData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         v12,
                                         (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
  }
  return result;
}


WarBoardItemData_o *__fastcall WarBoardData__GetItem(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass135_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *items; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_42AEBA6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
    sub_B52984(&Method_System_Func_WarBoardItemData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardItemData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass135_0_TypeInfo);
    byte_42AEBA6 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass135_0_o *)sub_B52A54(WarBoardData___c__DisplayClass135_0_TypeInfo);
  WarBoardData___c__DisplayClass135_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.squareIndex = squareIndex;
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardItemData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardItemData__bool___ctor__);
  return (WarBoardItemData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 items,
                                 (System_Func_TSource__bool__o *)v9,
                                 (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
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
    sub_B52A5C(this, method);
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
  if ( (byte_42AEB85 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
    byte_42AEB85 = 1;
  }
  value = 0LL;
  npcEntityDict = this->fields.npcEntityDict;
  if ( !npcEntityDict )
    sub_B52A5C(0LL, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___TryGetValue(
    npcEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_2EDF344 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
  return value;
}


int32_t __fastcall WarBoardData__GetPartySkillId(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_B52A5C(this, method);
  return stageEntity->fields.partySkillId;
}


WarBoardPieceData_array *__fastcall WarBoardData__GetPicesForRange(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  __int64 v9; // x23
  const MethodInfo *v10; // x4
  System_Int32_array **v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_42AEB99 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass118_0_TypeInfo);
    byte_42AEB99 = 1;
  }
  v9 = sub_B52A54(WarBoardData___c__DisplayClass118_0_TypeInfo);
  WarBoardData___c__DisplayClass118_0___ctor((WarBoardData___c__DisplayClass118_0_o *)v9, 0LL);
  v11 = (System_Int32_array **)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v10);
  if ( !v9 )
    sub_B52A5C(v11, v12);
  *(_QWORD *)(v9 + 16) = v11;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 16), v11, v13, v14, v15, v16, v17, v18);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v21,
                                      (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetPicesForRangeIsAlive(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  __int64 v9; // x23
  const MethodInfo *v10; // x4
  System_Int32_array **v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_42AEB9A & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass119_0_TypeInfo);
    byte_42AEB9A = 1;
  }
  v9 = sub_B52A54(WarBoardData___c__DisplayClass119_0_TypeInfo);
  WarBoardData___c__DisplayClass119_0___ctor((WarBoardData___c__DisplayClass119_0_o *)v9, 0LL);
  v11 = (System_Int32_array **)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v10);
  if ( !v9 )
    sub_B52A5C(v11, v12);
  *(_QWORD *)(v9 + 16) = v11;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 16), v11, v13, v14, v15, v16, v17, v18);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v21,
                                      (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardPieceData_o *__fastcall WarBoardData__GetPiece(
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
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20

  if ( (byte_42AEB8B & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass100_0_TypeInfo);
    sub_B52984(&WarBoardPieceData_TypeInfo);
    byte_42AEB8B = 1;
  }
  v11 = (WarBoardData___c__DisplayClass100_0_o *)sub_B52A54(WarBoardData___c__DisplayClass100_0_TypeInfo);
  WarBoardData___c__DisplayClass100_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B52A5C(v12, v13);
  v11->fields.ignoreDead = ignoreDead;
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  }
  v11->fields.uniqueId = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v15,
                                  (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetPieceDispPriority(
        WarBoardData_o *this,
        WarBoardPieceData_o *piece,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1
  WarBoardPieceData_array *AlivePieces; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x20

  if ( (byte_42AEBAD & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_FindIndex_WarBoardPieceData___);
    sub_B52984(&Method_System_Predicate_WarBoardPieceData___ctor__);
    sub_B52984(&System_Predicate_WarBoardPieceData__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass145_0_TypeInfo);
    byte_42AEBAD = 1;
  }
  v5 = sub_B52A54(WarBoardData___c__DisplayClass145_0_TypeInfo);
  WarBoardData___c__DisplayClass145_0___ctor((WarBoardData___c__DisplayClass145_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 16) = piece;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)piece, v8, v9, v10, v11, v12, v13);
  AlivePieces = WarBoardData__GetAlivePieces(this, v14);
  v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_WarBoardPieceData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_WarBoardPieceData___ctor__);
  return System_Array__FindIndex_WarBoardPieceData_(
           AlivePieces,
           (System_Predicate_T__o *)v16,
           (const MethodInfo_201AF0C *)Method_System_Array_FindIndex_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetPieceMaxDispPriotiry(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_array *pieces; // x8

  pieces = this->fields.pieces;
  if ( !pieces )
    sub_B52A5C(this, method);
  return pieces->max_length;
}


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

  if ( (byte_42AEB8E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEB8E = 1;
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
      sub_B52A5C(gameObject, v13);
    }
    activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0LL);
    result = 0LL;
    if ( activeInHierarchy )
      return v11;
  }
  return result;
}


int32_t __fastcall WarBoardData__GetPiecePosition(
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
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x20
  WarBoardData_SquareRangeSearch_o *v14; // x0

  if ( (byte_42AEB8A & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass99_0_TypeInfo);
    sub_B52984(&WarBoardPieceData_TypeInfo);
    byte_42AEB8A = 1;
  }
  v9 = (WarBoardData___c__DisplayClass99_0_o *)sub_B52A54(WarBoardData___c__DisplayClass99_0_TypeInfo);
  WarBoardData___c__DisplayClass99_0___ctor(v9, 0LL);
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  }
  UniqueIndex = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  if ( !v9 )
    sub_B52A5C(UniqueIndex, v11);
  v9->fields.uniqueId = UniqueIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v14 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          pieces,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
  if ( v14 )
    return v14[2].fields.squareIndex;
  else
    return -1;
}


WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_22803728(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass101_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_42AEB8C & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass101_0_TypeInfo);
    byte_42AEB8C = 1;
  }
  v5 = (WarBoardData___c__DisplayClass101_0_o *)sub_B52A54(WarBoardData___c__DisplayClass101_0_TypeInfo);
  WarBoardData___c__DisplayClass101_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.squareIndex = squareIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v9,
                                  (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_22844524(
        WarBoardData_o *this,
        uint32_t uniqueIndex,
        bool ignoreDead,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass102_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x20

  if ( (byte_42AEB8D & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass102_0_TypeInfo);
    byte_42AEB8D = 1;
  }
  v7 = (WarBoardData___c__DisplayClass102_0_o *)sub_B52A54(WarBoardData___c__DisplayClass102_0_TypeInfo);
  WarBoardData___c__DisplayClass102_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v7->fields.uniqueIndex = uniqueIndex;
  v7->fields.ignoreDead = ignoreDead;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v11,
                                  (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetPieces(
        WarBoardData_o *this,
        int32_t forceId,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass116_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_42AEB97 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass116_0_TypeInfo);
    byte_42AEB97 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass116_0_o *)sub_B52A54(WarBoardData___c__DisplayClass116_0_TypeInfo);
  WarBoardData___c__DisplayClass116_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.forceIdOnly = forceId << 24;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v10 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v10,
                                      (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetPieces_22796832(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w19
  WarBoardData___c__DisplayClass117_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  v4 = groupId;
  if ( (byte_42AEB98 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass117_0_TypeInfo);
    byte_42AEB98 = 1;
  }
  v7 = (WarBoardData___c__DisplayClass117_0_o *)sub_B52A54(WarBoardData___c__DisplayClass117_0_TypeInfo);
  WarBoardData___c__DisplayClass117_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v7->fields.forceAndGroup = (forceId << 24) | (v4 << 16);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v12 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v12,
                                      (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_String_o *__fastcall WarBoardData__GetPlayBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AEBAF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_B52984(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEBAF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                stageEntity->fields.playBgmId,
                                (const MethodInfo_23E2334 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.age;
LABEL_11:
    sub_B52A5C(Instance, v4);
  }
  return 0LL;
}


System_Int32_array *__fastcall WarBoardData__GetPlayReinforcements(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_42AEBC8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_42AEBC8 = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_B52A5C(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           playedStageReinforcementsList,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardEventData_o *__fastcall WarBoardData__GetPlayedEventData(
        WarBoardData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass164_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_42AEBB8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardEventData__Find__);
    sub_B52984(&Method_System_Predicate_WarBoardEventData___ctor__);
    sub_B52984(&System_Predicate_WarBoardEventData__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass164_0_TypeInfo);
    byte_42AEBB8 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass164_0_o *)sub_B52A54(WarBoardData___c__DisplayClass164_0_TypeInfo);
  WarBoardData___c__DisplayClass164_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.eventId = eventId,
        listEvent = this->fields.listEvent,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_WarBoardEventData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_WarBoardEventData___ctor__),
        !listEvent) )
  {
    sub_B52A5C(v6, v7);
  }
  return (WarBoardEventData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listEvent,
                                  (System_Predicate_T__o *)v9,
                                  (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_WarBoardEventData__Find__);
}


WarBoardPieceData_o *__fastcall WarBoardData__GetPlayerMasterPiece(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v4; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__104_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42AEB8F & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEB8F = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v4 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__104_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__104_0;
  if ( !_9__104_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__104_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__104_0,
      v7,
      Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v8 = WarBoardData___c_TypeInfo->static_fields;
    v8->__9__104_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__104_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__104_0,
      (System_Int32_array **)_9__104_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)_9__104_0,
                                  (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetPlayerPieces(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v4; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__121_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_42AEB9C & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__GetPlayerPieces_b__121_0__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEB9C = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v4 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__121_0,
      v7,
      Method_WarBoardData___c__GetPlayerPieces_b__121_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v8 = WarBoardData___c_TypeInfo->static_fields;
    v8->__9__121_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__121_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__121_0,
      (System_Int32_array **)_9__121_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__121_0,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v15,
                                      (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Int32_array *__fastcall WarBoardData__GetPrevCondIds(
        WarBoardData_o *this,
        System_Int32_array *commonReleaseIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  System_Collections_Generic_List_int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x8
  WarBoardCommonReleaseMaster_o *v9; // x21
  unsigned __int64 v10; // x23
  int size; // w8
  System_Collections_Generic_List_int__o *v12; // x22
  unsigned int v13; // w25
  __int64 v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v17; // x0

  if ( (byte_42AEBC3 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AEBC3 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_Generic_List_int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !commonReleaseIds )
    goto LABEL_23;
  v8 = *(_QWORD *)&commonReleaseIds->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v8 )
        goto LABEL_24;
      if ( !v9 )
        goto LABEL_23;
      Master_WarQuestSelectionMaster = (System_Collections_Generic_List_int__o *)WarBoardCommonReleaseMaster__GetList(
                                                                                   v9,
                                                                                   commonReleaseIds->m_Items[v10 + 1],
                                                                                   v7);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_23;
      size = Master_WarQuestSelectionMaster->fields._size;
      v12 = Master_WarQuestSelectionMaster;
      if ( size >= 1 )
        break;
LABEL_20:
      LODWORD(v8) = commonReleaseIds->max_length;
      if ( (__int64)++v10 >= (int)v8 )
        goto LABEL_21;
    }
    v13 = 0;
    while ( v13 < size )
    {
      v14 = *((_QWORD *)&v12->fields._syncRoot + (int)v13);
      if ( !v14 )
        goto LABEL_23;
      if ( (unsigned int)(*(_DWORD *)(v14 + 28) - 7) <= 1 )
      {
        if ( !v4 )
          goto LABEL_23;
        System_Collections_Generic_List_int___Add(
          v4,
          *(_DWORD *)(v14 + 40),
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      size = v12->fields._size;
      if ( (int)++v13 >= size )
        goto LABEL_20;
    }
LABEL_24:
    v17 = sub_B52A88(Master_WarQuestSelectionMaster);
    sub_B52A28(v17, 0LL);
  }
LABEL_21:
  v15 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v4,
          (const MethodInfo_1B5FED4 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_WarQuestSelectionMaster = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                                               v15,
                                                                               (const MethodInfo_1B7131C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B52A5C(Master_WarQuestSelectionMaster, v6);
  return System_Collections_Generic_List_int___ToArray(
           Master_WarQuestSelectionMaster,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
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


WarBoardPieceData_array *__fastcall WarBoardData__GetReinfocementsPieces(
        WarBoardData_o *this,
        int32_t stageReinfoId,
        int32_t reinfoIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  const MethodInfo *v8; // x1
  WarBoardPieceData_array *AlivePieces; // x0
  WarBoardPieceData_o *v10; // x1
  int max_length; // w8
  WarBoardPieceData_array *v12; // x22
  unsigned int v13; // w23
  __int64 v15; // x0

  if ( (byte_42AEB9D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    byte_42AEB9D = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  AlivePieces = WarBoardData__GetAlivePieces(this, v8);
  if ( !AlivePieces )
    goto LABEL_15;
  max_length = AlivePieces->max_length;
  v12 = AlivePieces;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        v15 = sub_B52A88(AlivePieces);
        sub_B52A28(v15, 0LL);
      }
      v10 = v12->m_Items[v13];
      if ( !v10 )
        break;
      if ( v10->fields._StageReinfoId_k__BackingField == stageReinfoId
        && v10->fields._ReinfoIndex_k__BackingField == reinfoIndex )
      {
        if ( !v7 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      }
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_B52A5C(AlivePieces, v10);
  }
LABEL_13:
  if ( !v7 )
    goto LABEL_15;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


void __fastcall WarBoardData__GetReinforcements(
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
  const MethodInfo *v13; // x2
  System_Int32_array *DeploySquareIds; // x24
  __int64 v15; // x25
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x26
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  int32_t v25; // w2
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *limitNums; // x8
  WarBoardStageReinforcementsEntity_o *v28; // x8
  struct System_Int32_array *v29; // x9
  __int64 v30; // x10
  _BOOL4 v31; // w23
  _BOOL4 IsOnce; // w27
  const MethodInfo *v33; // x1
  __int64 v34; // x21
  System_Func_int__bool__o *v35; // x22
  System_Int32_array *v36; // x28
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  _BOOL4 v43; // w28
  System_Collections_Generic_List_T__o *v44; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v45; // x21
  const MethodInfo *v46; // x3
  __int64 v47; // x8
  __int64 v48; // x9
  __int64 v49; // x8
  WarBoardStageReinforcementsEntity_c *klass; // x8
  __int64 v51; // x9
  __int64 v52; // x20
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x0
  WarBoardData___c__DisplayClass189_0_Fields *v68; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_int__o *v69; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_int__o *v70; // [xsp+10h] [xbp-60h]

  if ( (byte_42AEBCB & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&Method_BasicHelper_Any_ReinforcementsData___);
    sub_B52984(&Method_System_Func_ReinforcementsData__bool___ctor__);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&System_Func_ReinforcementsData__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ReinforcementsData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&ReinforcementsData_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass189_0_TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__);
    sub_B52984(&WarBoardData___c__DisplayClass189_1_TypeInfo);
    byte_42AEBCB = 1;
  }
  v8 = (WarBoardData___c__DisplayClass189_0_o *)sub_B52A54(WarBoardData___c__DisplayClass189_0_TypeInfo);
  WarBoardData___c__DisplayClass189_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_51;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !mst )
    goto LABEL_51;
  p_fields = &v8->fields;
  if ( WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
         mst,
         &v8->fields.stageEntity,
         stageEntity->fields.id,
         targetStageReinforcementsId,
         0LL) )
  {
    v70 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v70,
      (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
    v69 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v69,
      (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !p_fields->stageEntity )
      goto LABEL_51;
    v68 = &v8->fields;
    DeploySquareIds = WarBoardData__GetDeploySquareIds(this, p_fields->stageEntity->fields.squareIds, v13);
    v15 = sub_B52A54(WarBoardData___c__DisplayClass189_1_TypeInfo);
    WarBoardData___c__DisplayClass189_1___ctor((WarBoardData___c__DisplayClass189_1_o *)v15, 0LL);
    if ( !v15 )
      goto LABEL_51;
    *(_QWORD *)(v15 + 24) = v8;
    v22 = v15 + 24;
    sub_B52920((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)v8, v16, v17, v18, v19, v20, v21);
    v24 = *(_QWORD *)(v15 + 24);
    *(_DWORD *)(v15 + 16) = 0;
    if ( !v24 )
      goto LABEL_51;
    v25 = 0;
    while ( 1 )
    {
      ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(v24 + 16);
      if ( !ReinfocementsPieces )
        goto LABEL_51;
      reinforcementsIds = ReinfocementsPieces->fields.reinforcementsIds;
      if ( !reinforcementsIds )
        goto LABEL_51;
      if ( v25 >= (signed int)reinforcementsIds->max_length )
        break;
      limitNums = ReinfocementsPieces->fields.limitNums;
      if ( !limitNums )
        goto LABEL_51;
      if ( v25 >= limitNums->max_length )
        goto LABEL_52;
      if ( limitNums->m_Items[v25 + 1] < 1 )
      {
        v31 = 0;
      }
      else
      {
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetReinfocementsPieces(
                                                                       this,
                                                                       ReinfocementsPieces->fields.id,
                                                                       v25,
                                                                       v23);
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        if ( !*(_QWORD *)v22 )
          goto LABEL_51;
        v28 = ReinfocementsPieces;
        ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(*(_QWORD *)v22 + 16LL);
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        v29 = ReinfocementsPieces->fields.limitNums;
        if ( !v29 )
          goto LABEL_51;
        v30 = *(int *)(v15 + 16);
        if ( (unsigned int)v30 >= v29->max_length )
          goto LABEL_52;
        v31 = v29->m_Items[v30 + 1] <= v28->fields.forceId;
      }
      IsOnce = WarBoardStageReinforcementsEntity__IsOnce(ReinfocementsPieces, 0LL);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetPlayReinforcements(this, v33);
      v34 = *(_QWORD *)v22;
      if ( !*(_QWORD *)v22 )
        goto LABEL_51;
      v35 = *(System_Func_int__bool__o **)(v34 + 24);
      v36 = (System_Int32_array *)ReinfocementsPieces;
      if ( !v35 )
      {
        v35 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v35,
          (Il2CppObject *)v34,
          Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__,
          (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
        *(_QWORD *)(v34 + 24) = v35;
        sub_B52920((BattleServantConfConponent_o *)(v34 + 24), (System_Int32_array **)v35, v37, v38, v39, v40, v41, v42);
      }
      v43 = BasicHelper__Any_int__27531732(
              v36,
              (System_Func_T__bool__o *)v35,
              (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832);
      v44 = (System_Collections_Generic_List_T__o *)*reinfoDatas;
      v45 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ReinforcementsData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v45,
        (Il2CppObject *)v15,
        Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__,
        (const MethodInfo_2BC90BC *)Method_System_Func_ReinforcementsData__bool___ctor__);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                                     v44,
                                                                     (System_Func_T__bool__o *)v45,
                                                                     (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_ReinforcementsData___);
      if ( !DeploySquareIds )
        goto LABEL_51;
      v47 = *(int *)(v15 + 16);
      if ( (unsigned int)v47 >= DeploySquareIds->max_length )
        goto LABEL_52;
      if ( (unsigned __int8)ReinfocementsPieces & 1 | (IsOnce && v43 || v31 || DeploySquareIds->m_Items[v47 + 1] < 0) )
      {
        if ( !*(_QWORD *)v22 )
          goto LABEL_51;
        v48 = *(_QWORD *)(*(_QWORD *)v22 + 16LL);
        if ( !v48 )
          goto LABEL_51;
        WarBoardData__SaveHoldReinforcements(this, *(_DWORD *)(v48 + 20), v47, v46);
      }
      else
      {
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v70;
        if ( !v70 )
          goto LABEL_51;
        System_Collections_Generic_List_int___Add(
          v70,
          v47,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        v49 = *(int *)(v15 + 16);
        if ( (unsigned int)v49 >= DeploySquareIds->max_length )
        {
LABEL_52:
          v67 = sub_B52A88(ReinfocementsPieces);
          sub_B52A28(v67, 0LL);
        }
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v69;
        if ( !v69 )
          goto LABEL_51;
        System_Collections_Generic_List_int___Add(
          v69,
          DeploySquareIds->m_Items[v49 + 1],
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        klass = ReinfocementsPieces[6].klass;
        if ( !klass )
          goto LABEL_51;
        v51 = *(int *)(v15 + 16);
        if ( (unsigned int)v51 >= DeploySquareIds->max_length )
          goto LABEL_52;
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)klass->_2.genericContainerHandle;
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)ReinfocementsPieces,
          DeploySquareIds->m_Items[v51 + 1],
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v24 = *(_QWORD *)(v15 + 24);
      v25 = *(_DWORD *)(v15 + 16) + 1;
      *(_DWORD *)(v15 + 16) = v25;
      if ( !v24 )
        goto LABEL_51;
    }
    if ( !v70 )
      goto LABEL_51;
    if ( v70->fields._size >= 1 )
    {
      v52 = sub_B52A54(ReinforcementsData_TypeInfo);
      ReinforcementsData___ctor((ReinforcementsData_o *)v52, 0LL);
      if ( v68->stageEntity )
      {
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v70;
        if ( v52 )
        {
          *(_DWORD *)(v52 + 16) = v68->stageEntity->fields.id;
          v53 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                         v70,
                                         (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
          *(_QWORD *)(v52 + 24) = v53;
          sub_B52920((BattleServantConfConponent_o *)(v52 + 24), v53, v54, v55, v56, v57, v58, v59);
          ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v69;
          if ( v69 )
          {
            v60 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                           v69,
                                           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
            *(_QWORD *)(v52 + 32) = v60;
            sub_B52920((BattleServantConfConponent_o *)(v52 + 32), v60, v61, v62, v63, v64, v65, v66);
            ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)*reinfoDatas;
            if ( *reinfoDatas )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ReinfocementsPieces,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ReinforcementsData__Add__);
              return;
            }
          }
        }
      }
LABEL_51:
      sub_B52A5C(ReinfocementsPieces, v10);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
  return localSaveData->fields.cameraSize;
}


WarBoardPieceData_array *__fastcall WarBoardData__GetServantPieces(
        WarBoardData_o *this,
        bool isPlayerGroup,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass106_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_42AEB91 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass106_0_TypeInfo);
    byte_42AEB91 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass106_0_o *)sub_B52A54(WarBoardData___c__DisplayClass106_0_TypeInfo);
  WarBoardData___c__DisplayClass106_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.isPlayerGroup = isPlayerGroup;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v10 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v10,
                                      (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardDataEntity_o *__fastcall WarBoardData__GetServerData(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.serverData;
}


WarBoardSquareData_o *__fastcall WarBoardData__GetSquare(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass128_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *squares; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_42AEBA2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_B52984(&Method_System_Func_WarBoardSquareData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass128_0_TypeInfo);
    byte_42AEBA2 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass128_0_o *)sub_B52A54(WarBoardData___c__DisplayClass128_0_TypeInfo);
  WarBoardData___c__DisplayClass128_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.squareIndex = squareIndex;
  squares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squares;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardSquareData__bool___ctor__);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   squares,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
}


WarBoardSquareData_array *__fastcall WarBoardData__GetSquares(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.squares;
}


WarBoardUserServantData_o *__fastcall WarBoardData__GetStageBossData(
        WarBoardData_o *this,
        int32_t stageBossIdx,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass153_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *svtInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v10; // x20

  if ( (byte_42AEBB2 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Find_WarBoardUserServantData___);
    sub_B52984(&Method_System_Func_WarBoardUserServantData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass153_0_TypeInfo);
    byte_42AEBB2 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass153_0_o *)sub_B52A54(WarBoardData___c__DisplayClass153_0_TypeInfo);
  WarBoardData___c__DisplayClass153_0___ctor(v5, 0LL);
  if ( !v5 || (v5->fields.stageBossIdx = stageBossIdx, (serverData = this->fields.serverData) == 0LL) )
    sub_B52A5C(v6, v7);
  svtInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.svtInfo;
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardUserServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
  return (WarBoardUserServantData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v10,
                                        (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


WarBoardTreasureData_o *__fastcall WarBoardData__GetTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass137_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_42AEBA7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
    sub_B52984(&Method_System_Func_WarBoardTreasureData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardTreasureData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass137_0_TypeInfo);
    byte_42AEBA7 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass137_0_o *)sub_B52A54(WarBoardData___c__DisplayClass137_0_TypeInfo);
  WarBoardData___c__DisplayClass137_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardTreasureData__bool___ctor__);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v9,
                                     (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetTreasureIdList(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  int max_length; // w8
  unsigned int v9; // w21
  WarBoardTreasureData_SaveData_o *v10; // x8
  __int64 v12; // x0

  if ( (byte_42AEB96 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AEB96 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_15;
  treasureSaves = localSaveData->fields.treasureSaves;
  if ( !treasureSaves )
    goto LABEL_15;
  max_length = treasureSaves->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v12 = sub_B52A88(v4);
        sub_B52A28(v12, 0LL);
      }
      v10 = treasureSaves->m_Items[v9];
      if ( !v10 )
        break;
      if ( v10->fields.isUse )
      {
        if ( !v3 )
          break;
        System_Collections_Generic_List_int___Add(
          v3,
          v10->fields.treasureId,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = treasureSaves->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_B52A5C(v4, v5);
  }
LABEL_13:
  if ( !v3 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardTreasureData_array *__fastcall WarBoardData__GetTreasures(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.treasures;
}


WarBoardUiData_o *__fastcall WarBoardData__GetUiData(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass193_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_42AEBCF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardUiData__Find__);
    sub_B52984(&Method_System_Predicate_WarBoardUiData___ctor__);
    sub_B52984(&System_Predicate_WarBoardUiData__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass193_0_TypeInfo);
    byte_42AEBCF = 1;
  }
  v5 = (WarBoardData___c__DisplayClass193_0_o *)sub_B52A54(WarBoardData___c__DisplayClass193_0_TypeInfo);
  WarBoardData___c__DisplayClass193_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.squareIndex = squareIndex,
        listUiData = this->fields.listUiData,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_WarBoardUiData___ctor__),
        !listUiData) )
  {
    sub_B52A5C(v6, v7);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
                               (System_Predicate_T__o *)v9,
                               (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardUiData_o *__fastcall WarBoardData__GetUiData_22871012(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x20

  if ( (byte_42AEBD0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardUiData__Find__);
    sub_B52984(&Method_System_Predicate_WarBoardUiData___ctor__);
    sub_B52984(&System_Predicate_WarBoardUiData__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass194_0_TypeInfo);
    byte_42AEBD0 = 1;
  }
  v5 = sub_B52A54(WarBoardData___c__DisplayClass194_0_TypeInfo);
  WarBoardData___c__DisplayClass194_0___ctor((WarBoardData___c__DisplayClass194_0_o *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = pieceIndex,
        sub_B52920(
          (BattleServantConfConponent_o *)(v5 + 16),
          (System_Int32_array **)pieceIndex,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        listUiData = this->fields.listUiData,
        v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_WarBoardUiData___ctor__),
        !listUiData) )
  {
    sub_B52A5C(v6, v7);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
                               (System_Predicate_T__o *)v15,
                               (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardTreasureData_o *__fastcall WarBoardData__GetUnusedTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass138_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_42AEBA8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
    sub_B52984(&Method_System_Func_WarBoardTreasureData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardTreasureData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass138_0_TypeInfo);
    byte_42AEBA8 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass138_0_o *)sub_B52A54(WarBoardData___c__DisplayClass138_0_TypeInfo);
  WarBoardData___c__DisplayClass138_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardTreasureData__bool___ctor__);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v9,
                                     (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetUseCommonReleaseIds(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t stageId; // w21
  WarBoardEventScriptMaster_o *v8; // x20
  int v9; // w8
  void *v10; // x21
  unsigned int v11; // w23
  __int64 v12; // x22
  __int64 v13; // x25
  __int64 v14; // x8
  unsigned __int64 v15; // x26
  __int64 v16; // x25
  __int64 v17; // x8
  unsigned __int64 v18; // x26
  int v19; // w8
  void *v20; // x22
  unsigned int v21; // w27
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  __int64 v24; // x0

  if ( (byte_42AEBC2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_WarBoardEventMaster___);
    sub_B52984(&Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AEBC2 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_41;
  stageId = serverData->fields.stageId;
  v8 = (WarBoardEventScriptMaster_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardEventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_41;
  Master_WarQuestSelectionMaster = WarBoardEventMaster__GetListByStageId(
                                     (WarBoardEventMaster_o *)Master_WarQuestSelectionMaster,
                                     stageId,
                                     0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_41;
  v9 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  v10 = Master_WarQuestSelectionMaster;
  if ( v9 >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= v9 )
        goto LABEL_42;
      v12 = *((_QWORD *)v10 + (int)v11 + 4);
      if ( !v12 )
        goto LABEL_41;
      v13 = *(_QWORD *)(v12 + 56);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 24);
        if ( v14 )
        {
          if ( (int)v14 >= 1 )
          {
            v15 = 0LL;
            while ( v15 < (unsigned int)v14 )
            {
              v5 = *(unsigned int *)(v13 + 32 + 4 * v15);
              if ( (int)v5 >= 1 )
              {
                if ( !v3 )
                  goto LABEL_41;
                System_Collections_Generic_List_int___Add(
                  v3,
                  v5,
                  (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
                LODWORD(v14) = *(_DWORD *)(v13 + 24);
              }
              if ( (__int64)++v15 >= (int)v14 )
                goto LABEL_22;
            }
LABEL_42:
            v24 = sub_B52A88(Master_WarQuestSelectionMaster);
            sub_B52A28(v24, 0LL);
          }
LABEL_22:
          v16 = *(_QWORD *)(v12 + 48);
          if ( !v16 )
            goto LABEL_41;
          v17 = *(_QWORD *)(v16 + 24);
          if ( (int)v17 >= 1 )
          {
            v18 = 0LL;
            while ( 1 )
            {
              if ( v18 >= (unsigned int)v17 )
                goto LABEL_42;
              if ( !v8 )
                goto LABEL_41;
              Master_WarQuestSelectionMaster = WarBoardEventScriptMaster__GetList(
                                                 v8,
                                                 *(_DWORD *)(v16 + 4 * v18 + 32),
                                                 0LL);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_41;
              v19 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
              v20 = Master_WarQuestSelectionMaster;
              if ( v19 >= 1 )
                break;
LABEL_37:
              LODWORD(v17) = *(_DWORD *)(v16 + 24);
              if ( (__int64)++v18 >= (int)v17 )
                goto LABEL_38;
            }
            v21 = 0;
            while ( v21 < v19 )
            {
              Master_WarQuestSelectionMaster = (void *)*((_QWORD *)v20 + (int)v21 + 4);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_41;
              if ( *((_DWORD *)Master_WarQuestSelectionMaster + 6) == 2 )
              {
                Master_WarQuestSelectionMaster = (void *)WarBoardEventScriptEntity__GetChangeWinCondition(
                                                           (WarBoardEventScriptEntity_o *)Master_WarQuestSelectionMaster,
                                                           0LL);
                if ( ((unsigned int)Master_WarQuestSelectionMaster & 0x80000000) == 0 )
                {
                  if ( !v3 )
                    goto LABEL_41;
                  System_Collections_Generic_List_int___Add(
                    v3,
                    (int32_t)Master_WarQuestSelectionMaster,
                    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
                }
              }
              v19 = *((_DWORD *)v20 + 6);
              if ( (int)++v21 >= v19 )
                goto LABEL_37;
            }
            goto LABEL_42;
          }
        }
      }
LABEL_38:
      v9 = *((_DWORD *)v10 + 6);
    }
    while ( (int)++v11 < v9 );
  }
  v22 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
          (const MethodInfo_1B5FED4 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_WarQuestSelectionMaster = System_Linq_Enumerable__ToList_int_(
                                     v22,
                                     (const MethodInfo_1B7131C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_41:
    sub_B52A5C(Master_WarQuestSelectionMaster, v5);
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardWallData_o *__fastcall WarBoardData__GetWall(
        WarBoardData_o *this,
        int32_t squareIndex,
        bool ignoreDestroy,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass140_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *walls; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x20

  if ( (byte_42AEBA9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
    sub_B52984(&Method_System_Func_WarBoardWallData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardWallData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass140_0_TypeInfo);
    byte_42AEBA9 = 1;
  }
  v7 = (WarBoardData___c__DisplayClass140_0_o *)sub_B52A54(WarBoardData___c__DisplayClass140_0_TypeInfo);
  WarBoardData___c__DisplayClass140_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v7->fields.squareIndex = squareIndex;
  v7->fields.ignoreDestroy = ignoreDestroy;
  walls = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.walls;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardWallData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardWallData__bool___ctor__);
  return (WarBoardWallData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 walls,
                                 (System_Func_TSource__bool__o *)v11,
                                 (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
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

  if ( (byte_42AEBBA & 1) == 0 )
  {
    sub_B52984(&WarBoardManager_TypeInfo);
    byte_42AEBBA = 1;
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
  WarBoardData_o *UseCommonReleaseIds; // x0
  const MethodInfo *v4; // x2
  System_Int32_array *PrevCondIds; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  System_Int32_array *v8; // x20
  unsigned __int64 v9; // x24
  int32_t v10; // w23
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x21
  WarBoardPrevCondData_o *v12; // x22
  __int64 v13; // x0

  if ( (byte_42AEBC4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
    sub_B52984(&WarBoardPrevCondData_TypeInfo);
    byte_42AEBC4 = 1;
  }
  UseCommonReleaseIds = (WarBoardData_o *)WarBoardData__GetUseCommonReleaseIds(this, method);
  PrevCondIds = WarBoardData__GetPrevCondIds(UseCommonReleaseIds, (System_Int32_array *)UseCommonReleaseIds, v4);
  if ( !PrevCondIds )
    goto LABEL_11;
  v7 = *(_QWORD *)&PrevCondIds->max_length;
  v8 = PrevCondIds;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v7 )
      {
        v13 = sub_B52A88(PrevCondIds);
        sub_B52A28(v13, 0LL);
      }
      v10 = v8->m_Items[v9 + 1];
      listPrevCond = this->fields.listPrevCond;
      v12 = (WarBoardPrevCondData_o *)sub_B52A54(WarBoardPrevCondData_TypeInfo);
      WarBoardPrevCondData___ctor_29033652(v12, v10, -1, 0LL);
      if ( !listPrevCond )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)listPrevCond,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
      LODWORD(v7) = v8->max_length;
      if ( (__int64)++v9 >= (int)v7 )
        return;
    }
LABEL_11:
    sub_B52A5C(PrevCondIds, v6);
  }
}


bool __fastcall WarBoardData__IsBossInfo(
        WarBoardData_o *this,
        int32_t bossId,
        System_String_o *key,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass172_0_o *v9; // x23
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v10; // x0
  __int64 v11; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *bossBattleInfo; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x22
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *v16; // x21
  Il2CppObject *v17; // x20
  System_Xml_Schema_XmlSchemaObject_o *valuea; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AEBBD & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Find_WarBoardBossBattleData___);
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&Method_System_Func_WarBoardBossBattleData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardBossBattleData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass172_0_TypeInfo);
    byte_42AEBBD = 1;
  }
  valuea = 0LL;
  v9 = (WarBoardData___c__DisplayClass172_0_o *)sub_B52A54(WarBoardData___c__DisplayClass172_0_TypeInfo);
  WarBoardData___c__DisplayClass172_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_18;
  v9->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_18;
  bossBattleInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.bossBattleInfo;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardBossBattleData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     bossBattleInfo,
                                                                     (System_Func_T__bool__o *)v14,
                                                                     (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return value == 0;
  v16 = USFGOActorBattleActionEventConditional_OverwriteParamCondition;
  v10 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  if ( !v10 )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          v10,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return value == 0;
  v10 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&v16->fields.isExecute;
  if ( !v10 )
LABEL_18:
    sub_B52A5C(v10, v11);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          v10,
          (System_Xml_XmlQualifiedName_o *)key,
          &valuea,
          (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return value == 0;
  v17 = (Il2CppObject *)valuea;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32(v17, 0LL) == value;
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

  if ( (byte_42AEBBB & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_int___);
    byte_42AEBBB = 1;
  }
  entity = 0LL;
  v12 = (_QWORD **)Method_System_Array_Empty_int___;
  v13 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v14 = *(_WORD *)(v13 + 306);
  if ( (v14 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v14 = *(_WORD *)(v13 + 306);
  }
  if ( (v14 & 0x400) != 0 )
  {
    v15 = *v12[6];
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      sub_AEB684(*v12[6]);
    if ( !*(_DWORD *)(v15 + 224) )
    {
      v16 = *v12[6];
      if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
        sub_AEB684(*v12[6]);
      j_il2cpp_runtime_class_init_0(v16);
    }
  }
  v17 = *v12[6];
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AEB684(*v12[6]);
  v18 = *(System_Int32_array ***)(v17 + 184);
  v19 = *v18;
  *data = *v18;
  sub_B52920(
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
    sub_B52920((BattleServantConfConponent_o *)data, (System_Int32_array **)DefenseTarget, v24, v25, v26, v27, v28, v29);
  }
  stageNpcMaster = (WarBoardStageNpcMaster_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)*data,
                                                 0LL);
  if ( ((unsigned __int8)stageNpcMaster & 1) != 0 )
    return 0;
  if ( !*data )
LABEL_24:
    sub_B52A5C(stageNpcMaster, v21);
  return ((*data)->max_length & 1) == 0;
}


bool __fastcall WarBoardData__IsLose(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Pieces_22796832; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  WarBoardPieceData_array *v7; // x20
  int v8; // w24
  int v9; // w22
  int v10; // w23
  WarBoardPieceData_o *v11; // x21
  __int64 v14; // x0

  Pieces_22796832 = WarBoardData__GetPieces_22796832(this, 0, 0, v2);
  if ( !Pieces_22796832 )
LABEL_19:
    sub_B52A5C(Pieces_22796832, v5);
  max_length = Pieces_22796832->max_length;
  v7 = Pieces_22796832;
  if ( max_length < 1 )
    return 1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( v8 >= (unsigned int)max_length )
    {
      v14 = sub_B52A88(Pieces_22796832);
      sub_B52A28(v14, 0LL);
    }
    v11 = v7->m_Items[v8];
    if ( !v11 )
      goto LABEL_19;
    if ( !v11->fields._isDead_k__BackingField )
    {
      Pieces_22796832 = (WarBoardPieceData_array *)WarBoardPieceData__HasAvailablePermanentSleepBuff(v11, 0LL);
      if ( ((unsigned __int8)Pieces_22796832 & 1) == 0 )
      {
        Pieces_22796832 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(v11, 0LL);
        if ( ((unsigned __int8)Pieces_22796832 & 1) != 0 )
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
  WarBoardPieceData_array *Pieces_22796832; // x0
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
          Pieces_22796832 = WarBoardData__GetPieces_22796832(this, i, v10, v2);
          if ( !Pieces_22796832 )
            goto LABEL_28;
          max_length = Pieces_22796832->max_length;
          v14 = Pieces_22796832;
          if ( max_length >= 1 )
          {
            v15 = 0;
            while ( 1 )
            {
              if ( v15 >= max_length )
              {
                v19 = sub_B52A88(Pieces_22796832);
                sub_B52A28(v19, 0LL);
              }
              v16 = &v14->obj.klass + (int)v15;
              v17 = v16[4];
              if ( !v17 )
                break;
              Pieces_22796832 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                             (WarBoardPieceData_o *)v16[4],
                                                             0LL);
              if ( ((unsigned __int8)Pieces_22796832 & 1) == 0 && !LOBYTE(v17->_1.klass) )
              {
                ++v7;
                v8 += *((unsigned __int8 *)&v17->_1.this_arg.bits + 4);
              }
              max_length = v14->max_length;
              if ( (int)++v15 >= max_length )
                goto LABEL_16;
            }
LABEL_28:
            sub_B52A5C(Pieces_22796832, v12);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  WarBoardCommonReleaseEntity_array *List; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v8; // x19
  int max_length; // w8
  unsigned int v10; // w21
  int32_t *v11; // x25
  int32_t v12; // w8
  int32_t v13; // w1
  const MethodInfo_2EF813C *v14; // x3
  bool v15; // w2
  System_Collections_Generic_Dictionary_int__bool__o *v16; // x0
  WarBoardData___c_c *v17; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__bool___bool__o *_9__95_0; // x20
  Il2CppObject *v20; // x21
  struct WarBoardData___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x0

  if ( (byte_42AEB87 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
    sub_B52984(&Method_System_Func_KeyValuePair_int__bool___bool___ctor__);
    sub_B52984(&System_Func_KeyValuePair_int__bool___bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__IsReachableWinConditions_b__95_0__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEB87 = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) != 0 )
    return 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_36;
  List = WarBoardCommonReleaseMaster__GetList(
           (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster,
           this->fields.winCondId,
           v5);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)List, 0LL) )
    return 0;
  v8 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v8,
    (const MethodInfo_2EF75B8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !List )
LABEL_36:
    sub_B52A5C(Master_WarQuestSelectionMaster, v4);
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v28 = sub_B52A88(Master_WarQuestSelectionMaster);
        sub_B52A28(v28, 0LL);
      }
      v11 = (int32_t *)List->m_Items[v10];
      if ( !v11 || !v8 )
        goto LABEL_36;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v8,
              v11[6],
              (const MethodInfo_2EF83DC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
        break;
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                      v8,
                                                                      v11[6],
                                                                      (const MethodInfo_2EF80A4 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        break;
LABEL_26:
      max_length = List->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_27;
    }
    v12 = v11[7];
    if ( v12 == 1 )
    {
      v13 = v11[6];
      v14 = (const MethodInfo_2EF813C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v15 = v11[10] == 0;
    }
    else
    {
      if ( v12 != 5 )
      {
        v13 = v11[6];
        v14 = (const MethodInfo_2EF813C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
        v16 = v8;
        v15 = 0;
        goto LABEL_25;
      }
      v13 = v11[6];
      v14 = (const MethodInfo_2EF813C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v15 = v11[10] < 1;
    }
    v16 = v8;
LABEL_25:
    System_Collections_Generic_Dictionary_int__bool___set_Item(v16, v13, v15, v14);
    goto LABEL_26;
  }
LABEL_27:
  v17 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v17 = WarBoardData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__95_0 = static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__95_0 = (System_Func_KeyValuePair_int__bool___bool__o *)sub_B52A54(System_Func_KeyValuePair_int__bool___bool__TypeInfo);
    System_Func_KeyValuePair_int__bool___bool____ctor(
      _9__95_0,
      v20,
      Method_WarBoardData___c__IsReachableWinConditions_b__95_0__,
      (const MethodInfo_2778CF4 *)Method_System_Func_KeyValuePair_int__bool___bool___ctor__);
    v21 = WarBoardData___c_TypeInfo->static_fields;
    v21->__9__95_0 = _9__95_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v21->__9__95_0,
      (System_Int32_array **)_9__95_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  return System_Linq_Enumerable__Any_KeyValuePair_int__bool__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v8,
           (System_Func_TSource__bool__o *)_9__95_0,
           (const MethodInfo_1B50DFC *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
}


bool __fastcall WarBoardData__IsReinforcementsApper(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass190_0_o *v9; // x24
  WarBoardStageReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x0
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
  bool result; // w0
  const MethodInfo *v22; // x3
  void *v23; // x8
  __int64 v24; // x9
  WarBoardStageReinforcementsMaster_o *v25; // x21
  int32_t v26; // w22
  __int64 v27; // x9
  __int64 v28; // x9
  _BOOL4 v29; // w9
  __int64 v30; // x0

  if ( (byte_42AEBCC & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass190_0_TypeInfo);
    byte_42AEBCC = 1;
  }
  v9 = (WarBoardData___c__DisplayClass190_0_o *)sub_B52A54(WarBoardData___c__DisplayClass190_0_TypeInfo);
  WarBoardData___c__DisplayClass190_0___ctor(v9, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !v9 )
    goto LABEL_33;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_33;
  p_entity = (void **)&v9->fields.entity;
  if ( !WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
          Master_WarQuestSelectionMaster,
          &v9->fields.entity,
          stageEntity->fields.id,
          targetStageReinforcementsId,
          0LL) )
    return 0;
  Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)*p_entity;
  if ( !*p_entity
    || (IsOnce = WarBoardStageReinforcementsEntity__IsOnce(
                   (WarBoardStageReinforcementsEntity_o *)Master_WarQuestSelectionMaster,
                   0LL),
        PlayReinforcements = WarBoardData__GetPlayReinforcements(this, v15),
        v17 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo),
        System_Func_int__bool____ctor(
          v17,
          (Il2CppObject *)v9,
          Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__,
          (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__),
        Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)BasicHelper__Any_int__27531732(
                                                                                  PlayReinforcements,
                                                                                  (System_Func_T__bool__o *)v17,
                                                                                  (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832),
        (entity = v9->fields.entity) == 0LL) )
  {
LABEL_33:
    sub_B52A5C(Master_WarQuestSelectionMaster, v11);
  }
  v20 = IsOnce & (unsigned __int8)Master_WarQuestSelectionMaster;
  result = 0;
  if ( (v20 & 1) == 0 && entity->fields.forceId == forceId && entity->fields.groupId == groupId )
  {
    Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetDeploySquareIds(
                                                                              this,
                                                                              entity->fields.squareIds,
                                                                              v18);
    v23 = *p_entity;
    if ( *p_entity )
    {
      v24 = *((_QWORD *)v23 + 5);
      if ( v24 )
      {
        v25 = Master_WarQuestSelectionMaster;
        v26 = 0;
        while ( v26 < *(_DWORD *)(v24 + 24) )
        {
          v27 = *((_QWORD *)v23 + 8);
          if ( !v27 )
            goto LABEL_33;
          if ( (unsigned int)v26 >= *(_DWORD *)(v27 + 24) )
          {
LABEL_37:
            v30 = sub_B52A88(Master_WarQuestSelectionMaster);
            sub_B52A28(v30, 0LL);
          }
          if ( *(int *)(v27 + 4LL * v26 + 32) < 1 )
          {
            v29 = 0;
            if ( !v25 )
              goto LABEL_33;
          }
          else
          {
            Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetReinfocementsPieces(
                                                                                      this,
                                                                                      *((_DWORD *)v23 + 5),
                                                                                      v26,
                                                                                      v22);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_33;
            v23 = *p_entity;
            if ( !*p_entity )
              goto LABEL_33;
            v28 = *((_QWORD *)v23 + 8);
            if ( !v28 )
              goto LABEL_33;
            if ( (unsigned int)v26 >= *(_DWORD *)(v28 + 24) )
              goto LABEL_37;
            v29 = *(_DWORD *)(v28 + 4LL * v26 + 32) <= SLODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField);
            if ( !v25 )
              goto LABEL_33;
          }
          if ( (unsigned int)v26 >= LODWORD(v25->fields._MasterName_k__BackingField) )
            goto LABEL_37;
          if ( !v29 && (*((_DWORD *)&v25->fields.list + v26) & 0x80000000) == 0 )
            return 1;
          v24 = *((_QWORD *)v23 + 5);
          ++v26;
          if ( !v24 )
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x20
  __int64 v6; // x1
  System_Type_o *Type; // x20
  intptr_t v8; // w21
  System_Type_o *TypeFromHandle; // x1
  bool v10; // w20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-48h] BYREF
  System_RuntimeTypeHandle_o v13; // 0:w0.4

  if ( (byte_42AEB88 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&System_Type_TypeInfo);
    sub_B52984(&WarBoardChangeWinConditionTask_var);
    byte_42AEB88 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !WarBoardData__CheckWinCond(this, method) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 28, 0LL, 0LL);
  Instance = (WebViewManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)EventTasks,
                                   (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    WarBoardManager__AddTask_18580124((WarBoardManager_o *)Instance, 0, EventTasks, 0LL);
  }
  if ( !EventTasks )
LABEL_22:
    sub_B52A5C(Instance, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTasks,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__) )
  {
    if ( !v12.fields.current )
      sub_B52A5C(0LL, v6);
    Type = System_Object__GetType(v12.fields.current, 0LL);
    v8 = (int)WarBoardChangeWinConditionTask_var;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v13.fields.value = v8;
    TypeFromHandle = System_Type__GetTypeFromHandle(v13, 0LL);
    if ( System_Type__op_Equality(Type, TypeFromHandle, 0LL) )
    {
      v10 = 0;
      this->fields.winCondGroup = -1;
      goto LABEL_19;
    }
  }
  v10 = 1;
LABEL_19:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
  return v10;
}


void __fastcall WarBoardData__JudgePrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  WarBoardCommonReleaseMaster_o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  Il2CppObject *current; // x21
  int32_t klass; // w1
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t turn; // w1
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+0h] [xbp-40h] BYREF
  int32_t condGroup; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42AEBC6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
    byte_42AEBC6 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !this->fields.listPrevCond )
    sub_B52A5C(Master_WarQuestSelectionMaster, v4);
  v5 = (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.listPrevCond,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v13,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    if ( !v6 )
      break;
    current = v13.fields.current;
    if ( !v13.fields.current )
      sub_B52A5C(v6, v7);
    if ( (HIDWORD(v13.fields.current[1].klass) & 0x80000000) != 0 )
    {
      if ( !v5 )
        sub_B52A5C(v6, v7);
      klass = (int32_t)v13.fields.current[1].klass;
      condGroup = 0;
      if ( WarBoardCommonReleaseMaster__IsOpen_22791504(v5, klass, &condGroup, v8) )
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
    &v13,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
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
  struct WarBoardData_WarBoardLocalSaveData_o *v23; // x9
  struct WarBoardDataEntity_o *v24; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v25; // x9
  struct WarBoardDataEntity_o *v26; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v27; // x9
  WarBoardData_o *v28; // x21
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v29; // x8
  UnityEngine_Vector2_o *v30; // x22
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v32; // x8
  WarBoardData_o *v33; // x22
  float ZoomSize; // s0
  WarBoardData_o *v35; // x20
  WarBoardData_o *v36; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x20
  Il2CppObject *current; // x22
  WarBoardEventData_SaveData_o *v39; // x21
  __int64 v40; // x0
  __int64 v41; // x1
  WarBoardData_o *v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *latestPieceActionSquareIndexes; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x20
  Il2CppObject *v64; // x22
  WarBoardPrevCondData_SaveData_o *v65; // x21
  __int64 v66; // x0
  __int64 v67; // x1
  WarBoardData_o *v68; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x20
  Il2CppObject *v76; // x22
  HoldReinforcementsData_SaveData_o *v77; // x21
  __int64 v78; // x0
  __int64 v79; // x1
  WarBoardData_o *v80; // x21
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v87; // x20
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v94; // x20
  Il2CppObject *v95; // x22
  WarBoardUiData_SaveData_o *v96; // x21
  __int64 v97; // x0
  __int64 v98; // x1
  WarBoardData_o *v99; // x21
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  struct WarBoardDataEntity_o *v106; // x8
  unsigned int v107; // w0
  WarBoardData_o *v108; // x21
  int v109; // w20
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  unsigned __int64 v116; // x22
  signed __int64 v117; // x24
  __int64 v118; // x25
  struct WarBoardDataEntity_o *v119; // x9
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x9
  unsigned int *reinforcementsSaveList; // x27
  WarBoardSquareIndexData_o *v122; // x21
  WarBoardSquareIndexData_SaveData_o *v123; // x20
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  struct WarBoardDataEntity_o *v130; // x8
  unsigned int v131; // w0
  WarBoardData_o *v132; // x21
  int v133; // w20
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  unsigned __int64 v146; // x22
  signed __int64 v147; // x24
  __int64 v148; // x25
  struct WarBoardDataEntity_o *v149; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x27
  WarBoardBossBattleData_o *v152; // x21
  WarBoardBossBattleData_SaveData_o *v153; // x20
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *bgAnimationInfo_k__BackingField; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *v161; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v162; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v163; // x8
  MiniMessagePack_MiniMessagePacker_o *v164; // x19
  System_Byte_array *v165; // x19
  WarBoardData_c *v166; // x8
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x20
  System_String_o *v168; // x19
  __int64 v169; // x0
  __int64 v170; // x0
  _BYTE v171[40]; // [xsp+0h] [xbp-100h] BYREF
  int v172; // [xsp+28h] [xbp-D8h]
  System_Collections_Generic_List_Enumerator_T__o v173; // [xsp+30h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v174; // [xsp+50h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v175; // [xsp+70h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v176; // [xsp+90h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_42AEB7F & 1) == 0 )
  {
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&EncryptedPlayerPrefs_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
    sub_B52984(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo);
    sub_B52984(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B52984(&WarBoardSquareIndexData_SaveData___TypeInfo);
    sub_B52984(&WarBoardBossBattleData_SaveData___TypeInfo);
    sub_B52984(&WarBoardUiData_SaveData_TypeInfo);
    sub_B52984(&WarBoardEventData_SaveData_TypeInfo);
    sub_B52984(&WarBoardSquareIndexData_SaveData_TypeInfo);
    sub_B52984(&WarBoardPrevCondData_SaveData_TypeInfo);
    sub_B52984(&HoldReinforcementsData_SaveData_TypeInfo);
    sub_B52984(&WarBoardBossBattleData_SaveData_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardData_o *)sub_B52984(&WarBoardData_TypeInfo);
    byte_42AEB7F = 1;
  }
  memset(&v176, 0, sizeof(v176));
  memset(&v175, 0, sizeof(v175));
  memset(&v174, 0, sizeof(v174));
  memset(&v173, 0, sizeof(v173));
  v172 = 0;
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
    v9 = 0;
    while ( v9 < max_length )
    {
      this = (WarBoardData_o *)pieceSaves->m_Items[v9];
      if ( !this )
        goto LABEL_143;
      WarBoardPieceData_SaveData__Save((WarBoardPieceData_SaveData_o *)this, 0LL);
      max_length = pieceSaves->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_10;
    }
LABEL_144:
    v169 = sub_B52A88(this);
    sub_B52A28(v169, 0LL);
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
    v12 = 0;
    while ( v12 < entries )
    {
      this = (WarBoardData_o *)*((_QWORD *)&actionPointEntityDict->fields.count + (int)v12);
      if ( !this )
        goto LABEL_143;
      WarBoardItemData_SaveData__Save((WarBoardItemData_SaveData_o *)this, 0LL);
      entries = (int)actionPointEntityDict->fields.entries;
      if ( (int)++v12 >= entries )
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
  v14 = pieces->max_length;
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( v15 < v14 )
    {
      this = (WarBoardData_o *)pieces->m_Items[v15];
      if ( !this )
        goto LABEL_143;
      WarBoardTreasureData_SaveData__Save((WarBoardTreasureData_SaveData_o *)this, 0LL);
      v14 = pieces->max_length;
      if ( (int)++v15 >= v14 )
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
  v17 = squares->max_length;
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( v18 < v17 )
    {
      this = (WarBoardData_o *)squares->m_Items[v18];
      if ( !this )
        goto LABEL_143;
      WarBoardWallData_SaveData__Save((WarBoardWallData_SaveData_o *)this, 0LL);
      v17 = squares->max_length;
      if ( (int)++v18 >= v17 )
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
  v20 = condSquares->max_length;
  if ( v20 >= 1 )
  {
    v21 = 0;
    while ( v21 < v20 )
    {
      this = (WarBoardData_o *)condSquares->m_Items[v21];
      if ( !this )
        goto LABEL_143;
      WarBoardSquareData_SaveData__Save((WarBoardSquareData_SaveData_o *)this, 0LL);
      v20 = condSquares->max_length;
      if ( (int)++v21 >= v20 )
        goto LABEL_38;
    }
    goto LABEL_144;
  }
LABEL_38:
  this = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  serverData = v4->fields.serverData;
  if ( !serverData )
    goto LABEL_143;
  v23 = v4->fields.localSaveData;
  if ( !v23 )
    goto LABEL_143;
  v23->fields.turn = serverData->fields.turn;
  v24 = v4->fields.serverData;
  if ( !v24 )
    goto LABEL_143;
  v25 = v4->fields.localSaveData;
  if ( !v25 )
    goto LABEL_143;
  v25->fields.turnForceId = v24->fields.turnForceId;
  v26 = v4->fields.serverData;
  if ( !v26 )
    goto LABEL_143;
  v27 = v4->fields.localSaveData;
  if ( !v27 )
    goto LABEL_143;
  v28 = this;
  v27->fields.turnGroupId = v26->fields.turnGroupId;
  if ( !this )
    goto LABEL_143;
  v29 = this->fields.actionPointEntityDict;
  if ( !v29 )
    goto LABEL_143;
  this = (WarBoardData_o *)v29->fields.values;
  if ( !this )
    goto LABEL_143;
  v30 = (UnityEngine_Vector2_o *)*p_localSaveData;
  ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)this, 0LL);
  if ( !v30 )
    goto LABEL_143;
  v30[9] = ScrlPos;
  v32 = v28->fields.actionPointEntityDict;
  if ( !v32 )
    goto LABEL_143;
  this = (WarBoardData_o *)v32->fields._syncRoot;
  if ( !this )
    goto LABEL_143;
  v33 = *p_localSaveData;
  ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)this, 0LL);
  if ( !v33 )
    goto LABEL_143;
  *(float *)&v33->fields.treasures = ZoomSize;
  if ( !*p_localSaveData )
    goto LABEL_143;
  HIDWORD((*p_localSaveData)->fields.treasures) = HIDWORD(v28[3].fields.stageNpcMaster);
  if ( !*p_localSaveData )
    goto LABEL_143;
  BYTE4((*p_localSaveData)->fields.effects) = onBoardSkillUpdate;
  v35 = *p_localSaveData;
  this = (WarBoardData_o *)BattleRandom__GetLogicCount(0LL);
  if ( !v35 )
    goto LABEL_143;
  LODWORD(v35->fields.serverData) = (_DWORD)this;
  v36 = *p_localSaveData;
  this = (WarBoardData_o *)BattleRandom__GetGutsCount(0LL);
  if ( !v36 )
    goto LABEL_143;
  HIDWORD(v36->fields.serverData) = (_DWORD)this;
  if ( !*p_localSaveData )
    goto LABEL_143;
  LOBYTE((*p_localSaveData)->fields._bgAnimationInfo_k__BackingField) = v4->fields.isPlayedHalfDeadMessage;
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listEvent;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v171,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
  v176 = *(System_Collections_Generic_List_Enumerator_T__o *)v171;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v176,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__) )
  {
    current = v176.fields.current;
    v39 = (WarBoardEventData_SaveData_o *)sub_B52A54(WarBoardEventData_SaveData_TypeInfo);
    WarBoardEventData_SaveData___ctor_22507528(v39, (WarBoardEventData_o *)current, 0LL);
    if ( !v37 )
      sub_B52A5C(v40, v41);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v37,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__);
  }
  *(_DWORD *)&v171[4 * v172++ + 24] = 482;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v176,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
  if ( v172 && *(_DWORD *)&v171[4 * v172 + 20] == 482 )
    --v172;
  if ( !v37 )
    goto LABEL_143;
  v42 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v37,
                             (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
  if ( !v42 )
    goto LABEL_143;
  v42->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)this;
  sub_B52920(
    (BattleServantConfConponent_o *)&v42->fields.localSaveData,
    (System_Int32_array **)this,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( !*p_localSaveData )
    goto LABEL_143;
  (*p_localSaveData)->fields._maxForceId_k__BackingField = v4->fields.winCondId;
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_143;
  latestPieceActionSquareIndexes = (struct System_Collections_Generic_List_WarBoardUiData__o *)v4->fields.latestPieceActionSquareIndexes;
  this->fields.listUiData = latestPieceActionSquareIndexes;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.listUiData,
    (System_Int32_array **)latestPieceActionSquareIndexes,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_143;
  latestBattlePieceUniqueIndexes = (System_Int32_array **)v4->fields.latestBattlePieceUniqueIndexes;
  *(_QWORD *)&this->fields.isPlayedHalfDeadMessage = latestBattlePieceUniqueIndexes;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.isPlayedHalfDeadMessage,
    latestBattlePieceUniqueIndexes,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listPrevCond;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v171,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v175 = *(System_Collections_Generic_List_Enumerator_T__o *)v171;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v175,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__) )
  {
    v64 = v175.fields.current;
    v65 = (WarBoardPrevCondData_SaveData_o *)sub_B52A54(WarBoardPrevCondData_SaveData_TypeInfo);
    WarBoardPrevCondData_SaveData___ctor_20314652(v65, (WarBoardPrevCondData_o *)v64, 0LL);
    if ( !v63 )
      sub_B52A5C(v66, v67);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v63,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__);
  }
  *(_DWORD *)&v171[4 * v172++ + 24] = 618;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v175,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
  if ( v172 && *(_DWORD *)&v171[4 * v172 + 20] == 618 )
    --v172;
  if ( !v63 )
    goto LABEL_143;
  v68 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v63,
                             (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
  if ( !v68 )
    goto LABEL_143;
  v68->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)this;
  sub_B52920(
    (BattleServantConfConponent_o *)&v68->fields.listEvent,
    (System_Int32_array **)this,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v75,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.reinforcementsSaveList;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v171,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v174 = *(System_Collections_Generic_List_Enumerator_T__o *)v171;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v174,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v76 = v174.fields.current;
    v77 = (HoldReinforcementsData_SaveData_o *)sub_B52A54(HoldReinforcementsData_SaveData_TypeInfo);
    HoldReinforcementsData_SaveData___ctor_19250300(v77, (HoldReinforcementsData_o *)v76, 0LL);
    if ( !v75 )
      sub_B52A5C(v78, v79);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v75,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__);
  }
  *(_DWORD *)&v171[4 * v172++ + 24] = 703;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v174,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( v172 && *(_DWORD *)&v171[4 * v172 + 20] == 703 )
    --v172;
  if ( !v75 )
    goto LABEL_143;
  v80 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v75,
                             (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
  if ( !v80 )
    goto LABEL_143;
  *(_QWORD *)&v80->fields.winCondId = this;
  sub_B52920(
    (BattleServantConfConponent_o *)&v80->fields.winCondId,
    (System_Int32_array **)this,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  this = (WarBoardData_o *)v4->fields.playedStageReinforcementsList;
  if ( !this )
    goto LABEL_143;
  v87 = v4->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_int___ToArray(
                             (System_Collections_Generic_List_int__o *)this,
                             (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v87 )
    goto LABEL_143;
  v87->fields.playedReinforcements = (struct System_Int32_array *)this;
  sub_B52920(
    (BattleServantConfConponent_o *)&v87->fields.playedReinforcements,
    (System_Int32_array **)this,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  v94 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v94,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listUiData;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v171,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v173 = *(System_Collections_Generic_List_Enumerator_T__o *)v171;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v173,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__) )
  {
    v95 = v173.fields.current;
    v96 = (WarBoardUiData_SaveData_o *)sub_B52A54(WarBoardUiData_SaveData_TypeInfo);
    WarBoardUiData_SaveData___ctor_20325780(v96, (WarBoardUiData_o *)v95, 0LL);
    if ( !v94 )
      sub_B52A5C(v97, v98);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v94,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v96,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__);
  }
  *(_DWORD *)&v171[4 * v172++ + 24] = 812;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v173,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( v172 && *(_DWORD *)&v171[4 * v172 + 20] == 812 )
    --v172;
  if ( !v94 )
    goto LABEL_143;
  v99 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v94,
                             (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
  if ( !v99
    || (v99->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)this,
        sub_B52920(
          (BattleServantConfConponent_o *)&v99->fields.latestBattlePieceUniqueIndexes,
          (System_Int32_array **)this,
          v100,
          v101,
          v102,
          v103,
          v104,
          v105),
        (v106 = v4->fields.serverData) == 0LL)
    || (v107 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v106->fields.squareIndexInfo,
                 (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___),
        v108 = *p_localSaveData,
        v109 = v107,
        this = (WarBoardData_o *)sub_B5299C(WarBoardSquareIndexData_SaveData___TypeInfo, v107),
        !v108) )
  {
LABEL_143:
    sub_B52A5C(this, onBoardSkillUpdate);
  }
  v108->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)this;
  sub_B52920(
    (BattleServantConfConponent_o *)&v108->fields.reinforcementsSaveList,
    (System_Int32_array **)this,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  if ( v109 >= 1 )
  {
    v116 = 0LL;
    v117 = v109;
    v118 = 8LL;
    while ( *p_localSaveData )
    {
      v119 = v4->fields.serverData;
      if ( !v119 )
        break;
      squareIndexInfo = v119->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        break;
      if ( v116 >= squareIndexInfo->max_length )
        goto LABEL_144;
      reinforcementsSaveList = (unsigned int *)(*p_localSaveData)->fields.reinforcementsSaveList;
      v122 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v118 * 4);
      v123 = (WarBoardSquareIndexData_SaveData_o *)sub_B52A54(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_20320752(v123, v122, 0LL);
      if ( !reinforcementsSaveList )
        break;
      if ( v123 )
      {
        this = (WarBoardData_o *)sub_B52A44(v123, *(_QWORD *)(*(_QWORD *)reinforcementsSaveList + 64LL));
        if ( !this )
        {
LABEL_149:
          v170 = sub_B52A7C();
          sub_B52A28(v170, 0LL);
        }
      }
      if ( v116 >= reinforcementsSaveList[6] )
        goto LABEL_144;
      *(_QWORD *)&reinforcementsSaveList[v118] = v123;
      sub_B52920(
        (BattleServantConfConponent_o *)&reinforcementsSaveList[v118],
        (System_Int32_array **)v123,
        v124,
        v125,
        v126,
        v127,
        v128,
        v129);
      ++v116;
      v118 += 2LL;
      if ( (__int64)v116 >= v117 )
        goto LABEL_114;
    }
    goto LABEL_143;
  }
LABEL_114:
  v130 = v4->fields.serverData;
  if ( !v130 )
    goto LABEL_143;
  v131 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v130->fields.bossBattleInfo,
           (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v132 = *p_localSaveData;
  v133 = v131;
  this = (WarBoardData_o *)sub_B5299C(WarBoardBossBattleData_SaveData___TypeInfo, v131);
  if ( !v132 )
    goto LABEL_143;
  v132->fields.playedStageReinforcementsList = (struct System_Collections_Generic_List_int__o *)this;
  sub_B52920(
    (BattleServantConfConponent_o *)&v132->fields.playedStageReinforcementsList,
    (System_Int32_array **)this,
    v134,
    v135,
    v136,
    v137,
    v138,
    v139);
  this = *p_localSaveData;
  if ( v133 >= 1 )
  {
    v146 = 0LL;
    v147 = v133;
    v148 = 32LL;
    while ( this )
    {
      v149 = v4->fields.serverData;
      if ( !v149 )
        break;
      bossBattleInfo = v149->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        break;
      if ( v146 >= bossBattleInfo->max_length )
        goto LABEL_144;
      playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
      v152 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v148);
      v153 = (WarBoardBossBattleData_SaveData_o *)sub_B52A54(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_22177032(v153, v152, 0LL);
      if ( !playedStageReinforcementsList )
        break;
      if ( v153 )
      {
        this = (WarBoardData_o *)sub_B52A44(v153, playedStageReinforcementsList->klass->_1.element_class);
        if ( !this )
          goto LABEL_149;
      }
      if ( v146 >= (unsigned int)playedStageReinforcementsList->fields._size )
        goto LABEL_144;
      *(System_Collections_Generic_List_int__c **)((char *)&playedStageReinforcementsList->klass + v148) = (System_Collections_Generic_List_int__c *)v153;
      sub_B52920(
        (BattleServantConfConponent_o *)((char *)playedStageReinforcementsList + v148),
        (System_Int32_array **)v153,
        v154,
        v155,
        v156,
        v157,
        v158,
        v159);
      this = *p_localSaveData;
      ++v146;
      v148 += 8LL;
      if ( (__int64)v146 >= v147 )
        goto LABEL_127;
    }
    goto LABEL_143;
  }
LABEL_127:
  if ( !this )
    goto LABEL_143;
  bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v4->fields._bgAnimationInfo_k__BackingField;
  this->fields.listPrevCond = bgAnimationInfo_k__BackingField;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.listPrevCond,
    (System_Int32_array **)bgAnimationInfo_k__BackingField,
    v140,
    v141,
    v142,
    v143,
    v144,
    v145);
  if ( !*p_localSaveData )
    goto LABEL_143;
  (*p_localSaveData)->fields._CurrentMemberCount_k__BackingField = v4->fields._ContinueConsumeType_k__BackingField;
  v161 = v4->fields.localSaveData;
  if ( !v161 )
    goto LABEL_143;
  v161->fields.isContinue = v4->fields._IsContinue_k__BackingField;
  v162 = v4->fields.localSaveData;
  if ( !v162 )
    goto LABEL_143;
  v162->fields.isNextTurn = v4->fields._IsNextTurn_k__BackingField;
  v163 = v4->fields.localSaveData;
  if ( !v163 )
    goto LABEL_143;
  v163->fields.localSaveTiming = v4->fields.localSaveTiming;
  v164 = (MiniMessagePack_MiniMessagePacker_o *)sub_B52A54(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v164, 0LL);
  if ( !v164 )
    goto LABEL_143;
  v165 = MiniMessagePack_MiniMessagePacker__PackClass(v164, (Il2CppObject *)*p_localSaveData, 0LL);
  v166 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v166 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v166->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v168 = System_Convert__ToBase64String(v165, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SetString(WARBOARDDATA_SAVEDATA_KEY, v168, 0LL);
}


void __fastcall WarBoardData__SaveHoldReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        int32_t index,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass187_0_o *v7; // x20
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_T__o *reinforcementsSaveList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w21
  int32_t v15; // w22
  HoldReinforcementsData_o *v16; // x20
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AEBC9 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_HoldReinforcementsData___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__);
    sub_B52984(&Method_System_Func_HoldReinforcementsData__bool___ctor__);
    sub_B52984(&System_Func_HoldReinforcementsData__bool__TypeInfo);
    sub_B52984(&HoldReinforcementsData_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass187_0_TypeInfo);
    byte_42AEBC9 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v7 = (WarBoardData___c__DisplayClass187_0_o *)sub_B52A54(WarBoardData___c__DisplayClass187_0_TypeInfo);
  WarBoardData___c__DisplayClass187_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_17;
  v7->fields.stageReinforcementsId = stageReinforcementsId;
  v7->fields.index = index;
  reinforcementsSaveList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsSaveList;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_HoldReinforcementsData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_HoldReinforcementsData__bool___ctor__);
  if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          reinforcementsSaveList,
          (System_Func_T__bool__o *)v11,
          (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_HoldReinforcementsData___) )
  {
    v14 = v7->fields.stageReinforcementsId;
    v15 = v7->fields.index;
    v16 = (HoldReinforcementsData_o *)sub_B52A54(HoldReinforcementsData_TypeInfo);
    HoldReinforcementsData___ctor_28274056(v16, v14, v15, 1, 0LL);
    v8 = this->fields.reinforcementsSaveList;
    if ( v8 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v8,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
      return;
    }
LABEL_17:
    sub_B52A5C(v8, v9);
  }
  v8 = this->fields.reinforcementsSaveList;
  if ( !v8 )
    goto LABEL_17;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v8,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    if ( !v12 )
      break;
    if ( !v17.fields.current )
      sub_B52A5C(v12, v13);
    if ( LODWORD(v17.fields.current[1].klass) == v7->fields.stageReinforcementsId
      && HIDWORD(v17.fields.current[1].klass) == v7->fields.index )
    {
      HoldReinforcementsData__IncreaseHoldNum((HoldReinforcementsData_o *)v17.fields.current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__SavePlayReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_42AEBC7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    byte_42AEBC7 = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_B52A5C(0LL, *(_QWORD *)&stageReinforcementsId);
  System_Collections_Generic_List_int___Add(
    playedStageReinforcementsList,
    stageReinforcementsId,
    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall WarBoardData__SearchInRangeSquares(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o **rangeSearches,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass125_0_o *v8; // x21
  WarBoardData_SquareRangeSearch_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  WarBoardSquareData_o *Square; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v13; // x24
  WarBoardSquareData_o *v14; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x24
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x25
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v23; // x24
  int32_t v24; // w26
  WarBoardData_SquareRangeSearch_o *v25; // x25
  struct System_Int32_array *linkedSquares; // x8
  __int64 v27; // x8
  __int64 v28; // x20
  __int64 i; // x27
  __int64 v30; // x24
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x23
  struct System_Int32_array *v38; // x8
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v39; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v40; // x26
  const MethodInfo *v41; // x4
  System_Collections_Generic_List_T__o *v42; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v43; // x26
  struct System_Int32_array *v44; // x8
  __int64 v45; // x8
  __int64 v46; // x0

  if ( (byte_42AEBA0 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___);
    sub_B52984(&Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    sub_B52984(&Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__);
    sub_B52984(&System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo);
    sub_B52984(&WarBoardData_SquareRangeSearch_TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass125_0_TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__);
    sub_B52984(&WarBoardData___c__DisplayClass125_1_TypeInfo);
    byte_42AEBA0 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass125_0_o *)sub_B52A54(WarBoardData___c__DisplayClass125_0_TypeInfo);
  WarBoardData___c__DisplayClass125_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_26;
  v8->fields.start = start;
  Square = WarBoardData__GetSquare(this, start, v11);
  if ( Square )
  {
    v13 = *rangeSearches;
    v14 = Square;
    if ( !*rangeSearches )
    {
      v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v15,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
      *rangeSearches = (System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *)v15;
      sub_B52920(
        (BattleServantConfConponent_o *)rangeSearches,
        (System_Int32_array **)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      v13 = *rangeSearches;
    }
    v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v22,
      (Il2CppObject *)v8,
      Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__);
    v9 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v13,
           (System_Func_TSource__bool__o *)v22,
           (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    if ( v9 )
    {
      v9->fields.range = range;
    }
    else
    {
      v23 = *rangeSearches;
      v24 = v8->fields.start;
      v25 = (WarBoardData_SquareRangeSearch_o *)sub_B52A54(WarBoardData_SquareRangeSearch_TypeInfo);
      WarBoardData_SquareRangeSearch___ctor(v25, v24, range, 0LL);
      if ( !v23 )
        goto LABEL_26;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__);
    }
    v8->fields.nextRange = range - 1;
    if ( range - 1 >= 0 )
    {
      linkedSquares = v14->fields.linkedSquares;
      if ( !linkedSquares )
        goto LABEL_26;
      v27 = *(_QWORD *)&linkedSquares->max_length;
      if ( (int)v27 >= 1 )
      {
        v28 = (int)v27;
        for ( i = 8LL; ; ++i )
        {
          v30 = sub_B52A54(WarBoardData___c__DisplayClass125_1_TypeInfo);
          WarBoardData___c__DisplayClass125_1___ctor((WarBoardData___c__DisplayClass125_1_o *)v30, 0LL);
          if ( !v30 )
            break;
          *(_QWORD *)(v30 + 24) = v8;
          v37 = v30 + 24;
          sub_B52920(
            (BattleServantConfConponent_o *)(v30 + 24),
            (System_Int32_array **)v8,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
          v38 = v14->fields.linkedSquares;
          if ( !v38 )
            break;
          if ( i - 8 >= (unsigned __int64)v38->max_length )
            goto LABEL_27;
          *(_DWORD *)(v30 + 16) = *((_DWORD *)&v38->obj.klass + i);
          v39 = *rangeSearches;
          v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v40,
            (Il2CppObject *)v30,
            Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__,
            (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__);
          v9 = (WarBoardData_SquareRangeSearch_o *)System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v39,
                                                     (System_Func_TSource__bool__o *)v40,
                                                     (const MethodInfo_1A53970 *)Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
          if ( ((unsigned __int8)v9 & 1) != 0
            || (v42 = (System_Collections_Generic_List_T__o *)*rangeSearches,
                v43 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo),
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                  v43,
                  (Il2CppObject *)v30,
                  Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__,
                  (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__),
                v9 = (WarBoardData_SquareRangeSearch_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                           v42,
                                                           (System_Func_T__bool__o *)v43,
                                                           (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___),
                ((unsigned __int8)v9 & 1) != 0) )
          {
            v44 = v14->fields.linkedSquares;
            if ( !v44 )
              break;
            if ( i - 8 >= (unsigned __int64)v44->max_length )
            {
LABEL_27:
              v46 = sub_B52A88(v9);
              sub_B52A28(v46, 0LL);
            }
            if ( !*(_QWORD *)v37 )
              break;
            WarBoardData__SearchInRangeSquares(
              this,
              *((_DWORD *)&v44->obj.klass + i),
              *(_DWORD *)(*(_QWORD *)v37 + 20LL),
              rangeSearches,
              v41);
          }
          v45 = i - 7;
          if ( v45 >= v28 )
            return;
        }
LABEL_26:
        sub_B52A5C(v9, v10);
      }
    }
  }
}


int32_t __fastcall WarBoardData__SearchNearestEmptySquare(
        WarBoardData_o *this,
        int32_t destination,
        int32_t current,
        System_Func_WarBoardPieceData__bool__o *checkReplaceFunc,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_int__o *v9; // x21
  WarBoardPieceData_o *Piece_22803728; // x0
  __int64 v11; // x1
  System_Collections_Generic_HashSet_int__o *v12; // x23
  const MethodInfo *v13; // x2
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v15; // x2
  WarBoardSquareData_o *v16; // x24
  WarBoardPieceData_o *v17; // x25
  struct System_Int32_array *linkedSquares; // x24
  __int64 v19; // x8
  unsigned __int64 v20; // x25
  int32_t v21; // w22
  __int64 v23; // x0

  if ( (byte_42AEBA1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool__Invoke__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Queue_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_Queue_int__Dequeue__);
    sub_B52984(&Method_System_Collections_Generic_Queue_int__Enqueue__);
    sub_B52984(&Method_System_Collections_Generic_Queue_int___ctor___68540568);
    sub_B52984(&Method_System_Collections_Generic_Queue_int__get_Count__);
    sub_B52984(&System_Collections_Generic_Queue_int__TypeInfo);
    byte_42AEBA1 = 1;
  }
  if ( destination != current )
  {
    v9 = (System_Collections_Generic_Queue_int__o *)sub_B52A54(System_Collections_Generic_Queue_int__TypeInfo);
    System_Collections_Generic_Queue_int____ctor(
      v9,
      (const MethodInfo_28DC2B4 *)Method_System_Collections_Generic_Queue_int___ctor___68540568);
    if ( !v9 )
LABEL_24:
      sub_B52A5C(Piece_22803728, v11);
    System_Collections_Generic_Queue_int___Enqueue(
      v9,
      destination,
      (const MethodInfo_28DC854 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
    v12 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v12,
      (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    if ( v9->fields._size >= 1 )
    {
      do
      {
        destination = System_Collections_Generic_Queue_int___Dequeue(
                        v9,
                        (const MethodInfo_28DCA60 *)Method_System_Collections_Generic_Queue_int__Dequeue__);
        Square = WarBoardData__GetSquare(this, destination, v13);
        if ( !Square )
          break;
        v16 = Square;
        Piece_22803728 = WarBoardData__GetPiece_22803728(this, destination, v15);
        if ( !Piece_22803728 )
          return destination;
        if ( !checkReplaceFunc )
          goto LABEL_24;
        v17 = Piece_22803728;
        Piece_22803728 = (WarBoardPieceData_o *)System_Func_BattleBuffData_BuffData__bool___Invoke(
                                                  (System_Func_BattleBuffData_BuffData__bool__o *)checkReplaceFunc,
                                                  (BattleBuffData_BuffData_o *)Piece_22803728,
                                                  (const MethodInfo_2BC90D0 *)Method_System_Func_WarBoardPieceData__bool__Invoke__);
        if ( ((unsigned __int8)Piece_22803728 & 1) != 0 )
        {
          WarBoardPieceData__SetSquareIndex(v17, -1, 0LL);
          return destination;
        }
        if ( !v12 )
          goto LABEL_24;
        Piece_22803728 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Add(
                                                  v12,
                                                  destination,
                                                  (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
        linkedSquares = v16->fields.linkedSquares;
        if ( !linkedSquares )
          goto LABEL_24;
        v19 = *(_QWORD *)&linkedSquares->max_length;
        if ( (int)v19 >= 1 )
        {
          v20 = 0LL;
          do
          {
            if ( v20 >= (unsigned int)v19 )
            {
              v23 = sub_B52A88(Piece_22803728);
              sub_B52A28(v23, 0LL);
            }
            v21 = linkedSquares->m_Items[v20 + 1];
            Piece_22803728 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Contains(
                                                      v12,
                                                      v21,
                                                      (const MethodInfo_24D9CCC *)Method_System_Collections_Generic_HashSet_int__Contains__);
            if ( ((unsigned __int8)Piece_22803728 & 1) == 0 )
            {
              Piece_22803728 = (WarBoardPieceData_o *)System_Collections_Generic_Queue_int___Contains(
                                                        v9,
                                                        v21,
                                                        (const MethodInfo_28DCB70 *)Method_System_Collections_Generic_Queue_int__Contains__);
              if ( ((unsigned __int8)Piece_22803728 & 1) == 0 )
                System_Collections_Generic_Queue_int___Enqueue(
                  v9,
                  v21,
                  (const MethodInfo_28DC854 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
            }
            LODWORD(v19) = linkedSquares->max_length;
            ++v20;
          }
          while ( (__int64)v20 < (int)v19 );
        }
      }
      while ( v9->fields._size > 0 );
    }
    return -1;
  }
  return destination;
}


void __fastcall WarBoardData__SetBgAnimationInfo(
        WarBoardData_o *this,
        System_String_o *objectName,
        System_String_o *animName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *bgAnimationInfo_k__BackingField; // x0

  if ( (byte_42AEBD4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    byte_42AEBD4 = 1;
  }
  bgAnimationInfo_k__BackingField = this->fields._bgAnimationInfo_k__BackingField;
  if ( !bgAnimationInfo_k__BackingField )
    sub_B52A5C(0LL, objectName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)bgAnimationInfo_k__BackingField,
    (System_Xml_XmlQualifiedName_o *)objectName,
    (System_Xml_Schema_XmlSchemaObject_o *)animName,
    (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void __fastcall WarBoardData__SetContinue(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *PlayerPieces; // x20
  WarBoardData___c_c *v4; // x8
  struct WarBoardData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__82_0; // x21
  Il2CppObject *v7; // x22
  struct WarBoardData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  WarBoardItemData_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x3
  WarBoardItemData_c *klass; // x8
  WarBoardItemData_o *v19; // x20
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x3
  __int64 v25; // x20
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x3
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  WarBoardPieceData_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  struct WarBoardItemData_array *items; // x19
  int max_length; // w8
  unsigned int v43; // w20
  __int64 v44; // x0

  if ( (byte_42AEB83 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__int___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__int__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_WarBoardData___c__SetContinue_b__82_0__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEB83 = 1;
  }
  PlayerPieces = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardData__GetPlayerPieces(this, method);
  v4 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__82_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__82_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__82_0,
      v7,
      Method_WarBoardData___c__SetContinue_b__82_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_WarBoardPieceData__int___ctor__);
    v8 = WarBoardData___c_TypeInfo->static_fields;
    v8->__9__82_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__82_0,
      (System_Int32_array **)_9__82_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (WarBoardItemData_o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                PlayerPieces,
                                (System_Func_TSource__TKey__o *)_9__82_0,
                                (const MethodInfo_1B66330 *)Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
  if ( !v15 )
    goto LABEL_48;
  klass = v15->klass;
  v19 = v15;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v22 = sub_AEB880(v15, System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, 0LL, v17);
  }
  v25 = (*(__int64 (__fastcall **)(WarBoardItemData_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  if ( !v25 )
    sub_B52A5C(0LL, v23);
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
          goto LABEL_23;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_23:
      v29 = sub_AEB880(v25, System_Collections_IEnumerator_TypeInfo, 0LL, v24);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
    {
      v32 = 0LL;
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v33 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
          goto LABEL_30;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_30:
      v34 = sub_AEB880(v25, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL, v30);
    }
    v35 = (WarBoardPieceData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v25, *(_QWORD *)(v34 + 8));
    if ( !v35 )
      sub_B52A5C(0LL, v36);
    WarBoardPieceData__SetContinue(v35, 0LL);
  }
  v37 = *(_QWORD *)v25;
  if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
  {
    v38 = 0LL;
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
        goto LABEL_38;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_38:
    v40 = sub_AEB880(v25, System_IDisposable_TypeInfo, 0LL, v30);
  }
  v15 = (WarBoardItemData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v25, *(_QWORD *)(v40 + 8));
  items = this->fields.items;
  if ( !items )
LABEL_48:
    sub_B52A5C(v15, v16);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      if ( v43 >= max_length )
      {
        v44 = sub_B52A88(v15);
        sub_B52A28(v44, 0LL);
      }
      v15 = items->m_Items[v43];
      if ( !v15 )
        break;
      WarBoardItemData__ResetItem(v15, 0LL);
      max_length = items->max_length;
      if ( (int)++v43 >= max_length )
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
  struct WarBoardPieceData_array *pieces; // x20
  WarBoardData___c_c *v6; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__144_0; // x21
  Il2CppObject *v9; // x22
  struct WarBoardData___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WarBoardPieceData_o *USFGOPlayStandardCutInLimitCount_OverwriteCutIn; // x0

  if ( (byte_42AEBAC & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Find_WarBoardPieceData___);
    sub_B52984(&Method_System_Predicate_WarBoardPieceData___ctor__);
    sub_B52984(&System_Predicate_WarBoardPieceData__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEBAC = 1;
  }
  pieces = this->fields.pieces;
  v6 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v6 = WarBoardData___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__144_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__144_0;
  if ( !_9__144_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__144_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__144_0,
      v9,
      Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__,
      (const MethodInfo_28D2DBC *)Method_System_Predicate_WarBoardPieceData___ctor__);
    v10 = WarBoardData___c_TypeInfo->static_fields;
    v10->__9__144_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__144_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v10->__9__144_0,
      (System_Int32_array **)_9__144_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (WarBoardPieceData_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                                             (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)pieces,
                                                                             (System_Predicate_T__o *)_9__144_0,
                                                                             (const MethodInfo_201A850 *)Method_System_Array_Find_WarBoardPieceData___);
  if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
    WarBoardPieceData__SetMasterEquip(USFGOPlayStandardCutInLimitCount_OverwriteCutIn, userEquipId, 0LL);
}


void __fastcall WarBoardData__SetRequest(WarBoardData_o *this, RequestBase_o *request, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *pieces; // x21
  WarBoardData___c_c *v6; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__156_0; // x22
  Il2CppObject *v9; // x23
  struct WarBoardData___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  Il2CppObject *p_obj; // x21
  System_Byte_array *v21; // x21
  System_Byte_array *v22; // x21
  System_String_o *v23; // x0
  struct WarBoardDataEntity_o *v24; // x8
  Il2CppObject *v25; // x0
  System_Byte_array *v26; // x0
  System_Byte_array *v27; // x0
  System_String_o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *items; // x23
  WarBoardData___c_c *v30; // x0
  struct WarBoardData___c_StaticFields *v31; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__156_1; // x24
  System_String_o *v33; // x22
  System_String_o *v34; // x21
  Il2CppObject *v35; // x1
  Il2CppObject *v36; // x25
  struct WarBoardData___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v44; // x0
  WarBoardData___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x23
  struct WarBoardData___c_StaticFields *v47; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__156_2; // x24
  Il2CppObject *v49; // x25
  struct WarBoardData___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_String_array *v58; // x0
  Il2CppObject *v59; // x0
  System_Byte_array *v60; // x21
  System_Byte_array *v61; // x21
  System_String_o *v62; // x0
  struct WarBoardDataEntity_o *v63; // x8
  Il2CppObject *v64; // x21
  Il2CppObject *v65; // x0
  System_Byte_array *v66; // x21
  System_Byte_array *v67; // x21
  System_String_o *v68; // x0
  struct WarBoardDataEntity_o *v69; // x8
  Il2CppObject *v70; // x0
  System_Byte_array *v71; // x0
  System_Byte_array *v72; // x0
  System_String_o *v73; // x0
  struct WarBoardDataEntity_o *v74; // x8
  Il2CppObject *v75; // x0
  System_Byte_array *v76; // x0
  System_Byte_array *v77; // x0
  System_String_o *v78; // x2

  if ( (byte_42AEBB5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_WarBoardPieceData___ctor__);
    sub_B52984(&System_Action_WarBoardPieceData__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_B52984(&CatAndMouseGame_TypeInfo);
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_string___);
    sub_B52984(&Method_System_Func_WarBoardItemData__string___ctor__);
    sub_B52984(&Method_System_Func_string__bool___ctor__);
    sub_B52984(&System_Func_WarBoardItemData__string__TypeInfo);
    sub_B52984(&System_Func_string__bool__TypeInfo);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&Method_WarBoardData___c__SetRequest_b__156_0__);
    sub_B52984(&Method_WarBoardData___c__SetRequest_b__156_1__);
    sub_B52984(&Method_WarBoardData___c__SetRequest_b__156_2__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    sub_B52984(&StringLiteral_17003/*"bossBattleInfo"*/);
    sub_B52984(&StringLiteral_22659/*"svtInfo"*/);
    sub_B52984(&StringLiteral_20554/*"masterInfo"*/);
    sub_B52984(&StringLiteral_23386/*"wallInfo"*/);
    sub_B52984(&StringLiteral_21338/*"null"*/);
    sub_B52984(&StringLiteral_22429/*"squareIndexInfo"*/);
    sub_B52984(&StringLiteral_19144/*"getItemInfo"*/);
    sub_B52984(&StringLiteral_709/*","*/);
    sub_B52984(&StringLiteral_15933/*"[{0}]"*/);
    byte_42AEBB5 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces;
  v6 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v6 = WarBoardData___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__156_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__156_0;
  if ( !_9__156_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__156_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_WarBoardPieceData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__156_0,
      v9,
      Method_WarBoardData___c__SetRequest_b__156_0__,
      (const MethodInfo_2627780 *)Method_System_Action_WarBoardPieceData___ctor__);
    v10 = WarBoardData___c_TypeInfo->static_fields;
    v10->__9__156_0 = (struct System_Action_WarBoardPieceData__o *)_9__156_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v10->__9__156_0,
      (System_Int32_array **)_9__156_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    pieces,
    (System_Action_T__o *)_9__156_0,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_63;
  p_obj = &serverData->fields.svtInfo->obj;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v17 = (Il2CppObject *)JsonManager__toJson(p_obj, 0, 0, 0LL);
  if ( !request )
    goto LABEL_63;
  v21 = RequestBase__PackToMessagePack(request, v17, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v22 = CatAndMouseGame__CatGame5Bytes(v21, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v23 = System_Convert__ToBase64String(v22, 0LL);
  RequestBase__addField_32020920(request, (System_String_o *)StringLiteral_22659/*"svtInfo"*/, v23, 0LL);
  v24 = this->fields.serverData;
  if ( !v24 )
    goto LABEL_63;
  v25 = (Il2CppObject *)JsonManager__toJson(&v24->fields.masterInfo->obj, 0, 0, 0LL);
  v26 = RequestBase__PackToMessagePack(request, v25, 0LL);
  v27 = CatAndMouseGame__CatGame5Bytes(v26, 0LL);
  v28 = System_Convert__ToBase64String(v27, 0LL);
  RequestBase__addField_32020920(request, (System_String_o *)StringLiteral_20554/*"masterInfo"*/, v28, 0LL);
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  if ( !items )
    goto LABEL_63;
  if ( items[1].monitor )
  {
    v30 = WarBoardData___c_TypeInfo;
    if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v30 = WarBoardData___c_TypeInfo;
    }
    v31 = v30->static_fields;
    _9__156_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v31->__9__156_1;
    v33 = (System_String_o *)StringLiteral_709/*","*/;
    v34 = (System_String_o *)StringLiteral_15933/*"[{0}]"*/;
    if ( !_9__156_1 )
    {
      if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v31 = WarBoardData___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)v31->__9;
      _9__156_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_WarBoardItemData__string__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__156_1,
        v36,
        Method_WarBoardData___c__SetRequest_b__156_1__,
        (const MethodInfo_2BCA808 *)Method_System_Func_WarBoardItemData__string___ctor__);
      v37 = WarBoardData___c_TypeInfo->static_fields;
      v37->__9__156_1 = (struct System_Func_WarBoardItemData__string__o *)_9__156_1;
      sub_B52920(
        (BattleServantConfConponent_o *)&v37->__9__156_1,
        (System_Int32_array **)_9__156_1,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    v44 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
            items,
            (System_Func_TSource__TResult__o *)_9__156_1,
            (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    v45 = WarBoardData___c_TypeInfo;
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)v44;
    if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v45 = WarBoardData___c_TypeInfo;
    }
    v47 = v45->static_fields;
    _9__156_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v47->__9__156_2;
    if ( !_9__156_2 )
    {
      if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v47 = WarBoardData___c_TypeInfo->static_fields;
      }
      v49 = (Il2CppObject *)v47->__9;
      _9__156_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_string__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__156_2,
        v49,
        Method_WarBoardData___c__SetRequest_b__156_2__,
        (const MethodInfo_2BC90BC *)Method_System_Func_string__bool___ctor__);
      v50 = WarBoardData___c_TypeInfo->static_fields;
      v50->__9__156_2 = (struct System_Func_string__bool__o *)_9__156_2;
      sub_B52920(
        (BattleServantConfConponent_o *)&v50->__9__156_2,
        (System_Int32_array **)_9__156_2,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
    }
    v57 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v46,
            (System_Func_TSource__bool__o *)_9__156_2,
            (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_string___);
    v58 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v57,
                                   (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_string___);
    v59 = (Il2CppObject *)System_String__Join(v33, v58, 0LL);
    v35 = (Il2CppObject *)System_String__Format(v34, v59, 0LL);
  }
  else
  {
    v35 = (Il2CppObject *)StringLiteral_21338/*"null"*/;
  }
  v60 = RequestBase__PackToMessagePack(request, v35, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v61 = CatAndMouseGame__CatGame5Bytes(v60, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v62 = System_Convert__ToBase64String(v61, 0LL);
  RequestBase__addField_32020920(request, (System_String_o *)StringLiteral_19144/*"getItemInfo"*/, v62, 0LL);
  v63 = this->fields.serverData;
  if ( !v63 )
    goto LABEL_63;
  v64 = &v63->fields.wallInfo->obj;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v65 = (Il2CppObject *)JsonManager__toJson(v64, 0, 0, 0LL);
  v66 = RequestBase__PackToMessagePack(request, v65, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v67 = CatAndMouseGame__CatGame5Bytes(v66, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v68 = System_Convert__ToBase64String(v67, 0LL);
  RequestBase__addField_32020920(request, (System_String_o *)StringLiteral_23386/*"wallInfo"*/, v68, 0LL);
  v69 = this->fields.serverData;
  if ( !v69
    || (v70 = (Il2CppObject *)JsonManager__toJson(&v69->fields.squareIndexInfo->obj, 0, 0, 0LL),
        v71 = RequestBase__PackToMessagePack(request, v70, 0LL),
        v72 = CatAndMouseGame__CatGame5Bytes(v71, 0LL),
        v73 = System_Convert__ToBase64String(v72, 0LL),
        RequestBase__addField_32020920(request, (System_String_o *)StringLiteral_22429/*"squareIndexInfo"*/, v73, 0LL),
        (v74 = this->fields.serverData) == 0LL) )
  {
LABEL_63:
    sub_B52A5C(v17, v18);
  }
  v75 = (Il2CppObject *)JsonManager__toJson(&v74->fields.bossBattleInfo->obj, 0, 0, 0LL);
  v76 = RequestBase__PackToMessagePack(request, v75, 0LL);
  v77 = CatAndMouseGame__CatGame5Bytes(v76, 0LL);
  v78 = System_Convert__ToBase64String(v77, 0LL);
  RequestBase__addField_32020920(request, (System_String_o *)StringLiteral_17003/*"bossBattleInfo"*/, v78, 0LL);
}


void __fastcall WarBoardData__SetUiDataFromLocalData(WarBoardData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x5
  Il2CppObject *current; // x23
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
  const MethodInfo *v20; // x2
  WarBoardControlUiDataComponent_c *v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42AEBD3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&WarBoardControlUiDataComponent_TypeInfo);
    byte_42AEBD3 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  listUiData = this->fields.listUiData;
  if ( !listUiData )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listUiData,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v26,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    if ( !v4 )
      break;
    current = v26.fields.current;
    if ( !v26.fields.current )
      sub_B52A5C(v4, v5);
    klass_low = LODWORD(v26.fields.current[1].klass);
    if ( (klass_low & 0x80000000) != 0 )
    {
      monitor = v26.fields.current[1].monitor;
      if ( !monitor )
        sub_B52A5C(v4, klass_low);
      v14 = monitor[6];
      if ( !v14 )
      {
        v23 = sub_B52A88(v4);
        sub_B52A28(v23, 0LL);
      }
      if ( v14 == 1 )
      {
        v24 = sub_B52A88(v4);
        sub_B52A28(v24, 0LL);
      }
      if ( v14 <= 2 )
      {
        v22 = sub_B52A88(v4);
        sub_B52A28(v22, 0LL);
      }
      Piece = WarBoardData__GetPiece(this, monitor[8], monitor[9], monitor[10], 1, v7);
      if ( Piece )
      {
        pieceComponent = Piece->fields.pieceComponent;
        if ( !pieceComponent )
          sub_B52A5C(Piece, v16);
LABEL_17:
        v17 = (UnityEngine_Object_o *)*((_QWORD *)pieceComponent + 22);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v18 = UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
        if ( !v18 )
        {
          if ( !v17 )
            sub_B52A5C(v18, v19);
          WarBoardControlUiDataComponent__SetUiDataFromLocalData(
            (WarBoardControlUiDataComponent_o *)v17,
            (System_String_array *)current[2].klass,
            v20);
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
          sub_B52A5C(Square, v11);
        goto LABEL_17;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
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
  __int64 v5; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Func_bool__o *v20; // x20
  UnityEngine_WaitUntil_o *v21; // x21
  __int64 v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Delegate_o *v29; // x22
  WarBoardTaskBase_TaskCallback_o *v30; // x23
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  WebViewManager_o *Instance; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v39; // x21
  __int64 v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x0
  __int64 v48; // x0
  WarBoardData_o *v49; // x0
  const MethodInfo *v50; // x1

  if ( (byte_42AEBB3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__);
    sub_B52984(&WarBoardData___c__DisplayClass154_0_TypeInfo);
    sub_B52984(&UnityEngine_WaitUntil_TypeInfo);
    sub_B52984(&WarBoardCallbackTask_TypeInfo);
    sub_B52984(&WarBoardTaskBase___TypeInfo);
    byte_42AEBB3 = 1;
  }
  v5 = sub_B52A54(WarBoardData___c__DisplayClass154_0_TypeInfo);
  WarBoardData___c__DisplayClass154_0___ctor((WarBoardData___c__DisplayClass154_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 24) = consumedPieceActionPointDict;
  sub_B52920(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)consumedPieceActionPointDict,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  *(_QWORD *)(v5 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  v6 = *(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)(v5 + 24);
  if ( !v6 )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
         v6,
         (const MethodInfo_2F27904 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__) >= 1 )
  {
    *(_BYTE *)(v5 + 16) = 0;
    v20 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v20,
      (Il2CppObject *)v5,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__,
      (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
    v21 = (UnityEngine_WaitUntil_o *)sub_B52A54(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v21, v20, 0LL);
    v22 = sub_B52A54(WarBoardCallbackTask_TypeInfo);
    WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v22, 0LL);
    *(_QWORD *)(v22 + 56) = v21;
    sub_B52920((BattleServantConfConponent_o *)(v22 + 56), (System_Int32_array **)v21, v23, v24, v25, v26, v27, v28);
    if ( !v22 )
      goto LABEL_15;
    v29 = *(System_Delegate_o **)(v22 + 32);
    v30 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v30,
      (Il2CppObject *)v5,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__,
      0LL);
    v31 = (System_Int32_array **)System_Delegate__Combine(v29, (System_Delegate_o *)v30, 0LL);
    if ( !v31 || *v31 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v22 + 32) = v31;
      sub_B52920((BattleServantConfConponent_o *)(v22 + 32), v31, v32, v33, v34, v35, v36, v37);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      v6 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5299C(WarBoardTaskBase___TypeInfo, 1LL);
      if ( v6 )
      {
        v39 = v6;
        v40 = sub_B52A44(v22, v6->klass->_1.element_class);
        if ( !v40 )
        {
          v47 = sub_B52A7C();
          sub_B52A28(v47, 0LL);
        }
        if ( !LODWORD(v39->fields.entries) )
        {
          v48 = sub_B52A88(v40);
          sub_B52A28(v48, 0LL);
        }
        *(_QWORD *)&v39->fields.count = v22;
        sub_B52920(
          (BattleServantConfConponent_o *)&v39->fields.count,
          (System_Int32_array **)v22,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
        if ( Instance )
        {
          WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v39, 0LL);
          return;
        }
      }
LABEL_15:
      sub_B52A5C(v6, v7);
    }
    v49 = (WarBoardData_o *)sub_B52D50(v31);
    WarBoardData__CreateEventBossUIDataTask(v49, v50);
  }
}


System_String_o *__fastcall WarBoardData__ToJson(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *serverData; // x19

  if ( (byte_42AEBB4 & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&string_TypeInfo);
    byte_42AEBB4 = 1;
  }
  serverData = (Il2CppObject *)this->fields.serverData;
  if ( !serverData )
    return string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(serverData, 0, 0, 0LL);
}


void __fastcall WarBoardData__UpdateBossInfo(
        WarBoardData_o *this,
        int32_t bossId,
        System_String_o *key,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass171_0_o *v9; // x23
  System_Xml_Schema_XmlSchemaObject_o *v10; // x0
  __int64 v11; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *bossBattleInfo; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x22
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v16; // x21
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42AEBBC & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Find_WarBoardBossBattleData___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_B52984(&Method_System_Func_WarBoardBossBattleData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardBossBattleData__bool__TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass171_0_TypeInfo);
    byte_42AEBBC = 1;
  }
  v9 = (WarBoardData___c__DisplayClass171_0_o *)sub_B52A54(WarBoardData___c__DisplayClass171_0_TypeInfo);
  WarBoardData___c__DisplayClass171_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  v9->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_9;
  bossBattleInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.bossBattleInfo;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardBossBattleData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     bossBattleInfo,
                                                                     (System_Func_T__bool__o *)v14,
                                                                     (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return;
  v16 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v17 = value;
  v10 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  if ( !v16 )
LABEL_9:
    sub_B52A5C(v10, v11);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v16,
    (System_Xml_XmlQualifiedName_o *)key,
    v10,
    (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void __fastcall WarBoardData__UpdateBuffTurnNoticeDisp(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v4; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__192_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  WarBoardData___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  struct WarBoardData___c_StaticFields *v18; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__192_1; // x20
  Il2CppObject *v20; // x21
  struct WarBoardData___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  WarBoardData___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_T__o *v30; // x19
  struct WarBoardData___c_StaticFields *v31; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__192_2; // x20
  Il2CppObject *v33; // x21
  struct WarBoardData___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_42AEBCE & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_WarBoardPieceBaseComponent___ctor__);
    sub_B52984(&System_Action_WarBoardPieceBaseComponent__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
    sub_B52984(&Method_System_Func_WarBoardPieceBaseComponent__bool___ctor__);
    sub_B52984(&Method_System_Func_WarBoardPieceData__WarBoardPieceBaseComponent___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo);
    sub_B52984(&System_Func_WarBoardPieceBaseComponent__bool__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__);
    sub_B52984(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__);
    sub_B52984(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEBCE = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v4 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__192_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__192_0;
  if ( !_9__192_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__192_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__192_0,
      v7,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_WarBoardPieceData__WarBoardPieceBaseComponent___ctor__);
    v8 = WarBoardData___c_TypeInfo->static_fields;
    v8->__9__192_0 = (struct System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__o *)_9__192_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__192_0,
      (System_Int32_array **)_9__192_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__192_0,
          (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
  v16 = WarBoardData___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v16 = WarBoardData___c_TypeInfo;
  }
  v18 = v16->static_fields;
  _9__192_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v18->__9__192_1;
  if ( !_9__192_1 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v18 = WarBoardData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__192_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceBaseComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__192_1,
      v20,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__,
      (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceBaseComponent__bool___ctor__);
    v21 = WarBoardData___c_TypeInfo->static_fields;
    v21->__9__192_1 = (struct System_Func_WarBoardPieceBaseComponent__bool__o *)_9__192_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v21->__9__192_1,
      (System_Int32_array **)_9__192_1,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v17,
          (System_Func_TSource__bool__o *)_9__192_1,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
  v29 = WarBoardData___c_TypeInfo;
  v30 = (System_Collections_Generic_IEnumerable_T__o *)v28;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v29 = WarBoardData___c_TypeInfo;
  }
  v31 = v29->static_fields;
  _9__192_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v31->__9__192_2;
  if ( !_9__192_2 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v31 = WarBoardData___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)v31->__9;
    _9__192_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_WarBoardPieceBaseComponent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__192_2,
      v33,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__,
      (const MethodInfo_2627780 *)Method_System_Action_WarBoardPieceBaseComponent___ctor__);
    v34 = WarBoardData___c_TypeInfo->static_fields;
    v34->__9__192_2 = (struct System_Action_WarBoardPieceBaseComponent__o *)_9__192_2;
    sub_B52920(
      (BattleServantConfConponent_o *)&v34->__9__192_2,
      (System_Int32_array **)_9__192_2,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v30,
    (System_Action_T__o *)_9__192_2,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
}


void __fastcall WarBoardData__UpdateCurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_List_long__o *v4; // x21
  const MethodInfo *v5; // x1
  void *EditableServantPieces; // x0
  __int64 v7; // x1
  int v8; // w8
  void *v9; // x22
  unsigned int v10; // w23
  __int64 v11; // x25
  __int64 v12; // x22
  __int64 v13; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Entities_35316932; // x21
  WarBoardData___c_c *v15; // x8
  struct WarBoardData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__143_0; // x22
  Il2CppObject *v18; // x23
  struct WarBoardData___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v32; // x22
  __int64 v33; // x0

  if ( (byte_42AEBAB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_Count_UserServantEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    sub_B52984(&Method_System_Func_UserServantEntity__int___ctor__);
    sub_B52984(&Method_System_Func_UserServantEntity__bool___ctor__);
    sub_B52984(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_B52984(&System_Func_UserServantEntity__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__);
    sub_B52984(&WarBoardData___c__DisplayClass143_0_TypeInfo);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEBAB = 1;
  }
  v3 = sub_B52A54(WarBoardData___c__DisplayClass143_0_TypeInfo);
  WarBoardData___c__DisplayClass143_0___ctor((WarBoardData___c__DisplayClass143_0_o *)v3, 0LL);
  v4 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  EditableServantPieces = WarBoardData__GetEditableServantPieces(this, v5);
  if ( !EditableServantPieces )
    goto LABEL_28;
  v8 = *((_DWORD *)EditableServantPieces + 6);
  v9 = EditableServantPieces;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
      {
        v33 = sub_B52A88(EditableServantPieces);
        sub_B52A28(v33, 0LL);
      }
      v11 = *((_QWORD *)v9 + (int)v10 + 4);
      if ( !v11 || !v4 )
        break;
      System_Collections_Generic_List_long___Add(
        v4,
        *(_QWORD *)(v11 + 224),
        (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
      System_Collections_Generic_List_long___Add(
        v4,
        *(_QWORD *)(v11 + 232),
        (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_10;
    }
LABEL_28:
    sub_B52A5C(EditableServantPieces, v7);
  }
LABEL_10:
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AEB684(v13);
  EditableServantPieces = **(void ***)(v13 + 184);
  if ( !EditableServantPieces )
    goto LABEL_28;
  EditableServantPieces = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)EditableServantPieces,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !EditableServantPieces )
    goto LABEL_28;
  Entities_35316932 = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__GetEntities_35316932(
                                                                             (UserServantMaster_o *)EditableServantPieces,
                                                                             v4,
                                                                             0LL);
  v15 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v15 = WarBoardData___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__143_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__143_0;
  if ( !_9__143_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__143_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__143_0,
      v18,
      Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_UserServantEntity__int___ctor__);
    v19 = WarBoardData___c_TypeInfo->static_fields;
    v19->__9__143_0 = (struct System_Func_UserServantEntity__int__o *)_9__143_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v19->__9__143_0,
      (System_Int32_array **)_9__143_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  EditableServantPieces = (void *)System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                                    Entities_35316932,
                                    (System_Func_TSource__int__o *)_9__143_0,
                                    (const MethodInfo_1B6DB18 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  if ( !this )
    goto LABEL_28;
  this->fields._CurrentPartyCost_k__BackingField = (int)EditableServantPieces;
  EditableServantPieces = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EditableServantPieces )
    goto LABEL_28;
  EditableServantPieces = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)EditableServantPieces,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v3 )
    goto LABEL_28;
  *(_QWORD *)(v3 + 16) = EditableServantPieces;
  sub_B52920(
    (BattleServantConfConponent_o *)(v3 + 16),
    (System_Int32_array **)EditableServantPieces,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v32,
    (Il2CppObject *)v3,
    Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__,
    (const MethodInfo_2BC90BC *)Method_System_Func_UserServantEntity__bool___ctor__);
  this->fields._CurrentMemberCount_k__BackingField = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                                                       Entities_35316932,
                                                       (System_Func_TSource__bool__o *)v32,
                                                       (const MethodInfo_1B5FB84 *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
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
  WarBoardDataEntity_o **p_serverData; // x21
  WarBoardManager_TaskMultiList_o *v12; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *isPlayerGroup; // x0
  const MethodInfo *v15; // x1
  struct WarBoardPieceData_array *pieces; // x25
  int max_length; // w8
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v18; // x22
  unsigned int v19; // w19
  bool v20; // w26
  WarBoardPieceData_o *v21; // x28
  WarBoardManager_TaskList_o *v22; // x20
  int32_t ConsumedRecoverDonotActCost_k__BackingField; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x22
  WarBoardEvalValueSquare_EvalValueSquare_o *v25; // x2
  Il2CppObject *current; // x25
  WarBoardManager_TaskList_o *v27; // x26
  __int64 v28; // x0
  __int64 v29; // x1
  Il2CppClass *v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  char v33; // w8
  int monitor_high; // w20
  Il2CppClass *klass; // x0
  Il2CppClass *v36; // x0
  const MethodInfo *v37; // x2
  System_Collections_Generic_IEnumerable_T__o *v38; // x0
  WarBoardDataEntity_o *v39; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *EventBossUIDataTask; // x0
  WarBoardWaitNonBlockingTaskEnd_o *v41; // x20
  struct WarBoardItemData_array *items; // x19
  int v43; // w8
  unsigned int v44; // w20
  struct WarBoardWallData_array *walls; // x19
  unsigned __int64 v46; // x24
  __int64 v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v55; // x21
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v57; // x23
  WarBoardData_SquareRangeSearch_o *v58; // x0
  WarBoardData_SquareRangeSearch_o *v59; // x8
  int32_t range; // w1
  __int64 v61; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // [xsp+0h] [xbp-B0h]
  WarBoardData_o *v63; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v64; // [xsp+10h] [xbp-A0h]
  WarBoardManager_TaskMultiList_o *v65; // [xsp+18h] [xbp-98h]
  WarBoardDataEntity_o *v66; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42AEBB0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__get_Current__);
    sub_B52984(&Method_System_Func_WarBoardUserWallData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardUserWallData__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardManager_TaskList_TypeInfo);
    sub_B52984(&WarBoardManager_TaskMultiList_TypeInfo);
    sub_B52984(&Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__);
    sub_B52984(&WarBoardData___c__DisplayClass151_0_TypeInfo);
    sub_B52984(&WarBoardWaitNonBlockingTaskEnd_TypeInfo);
    byte_42AEBB0 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  p_serverData = &this->fields.serverData;
  if ( !this->fields.serverData )
    return;
  this->fields.serverData = warBoardDataEntity;
  v66 = warBoardDataEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.serverData,
    (System_Int32_array **)warBoardDataEntity,
    (System_String_array **)forceUpdate,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v65 = (WarBoardManager_TaskMultiList_o *)sub_B52A54(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v65, 0LL);
  v12 = (WarBoardManager_TaskMultiList_o *)sub_B52A54(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v12, 0LL);
  v64 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v64,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
  pieces = this->fields.pieces;
  v63 = this;
  if ( !pieces )
    goto LABEL_71;
  max_length = pieces->max_length;
  v18 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v64;
  if ( max_length >= 1 )
  {
    v19 = 0;
    v20 = forceUpdate;
    while ( v19 < max_length )
    {
      v21 = pieces->m_Items[v19];
      v22 = (WarBoardManager_TaskList_o *)sub_B52A54(WarBoardManager_TaskList_TypeInfo);
      WarBoardManager_TaskList___ctor(v22, 0LL);
      if ( !v21 )
        goto LABEL_71;
      WarBoardPieceData__UpdateFromServerData(
        v21,
        *p_serverData,
        (System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__o *)v13,
        v22,
        v20,
        0LL);
      if ( !v22 )
        goto LABEL_71;
      if ( v22->fields._size >= 1 )
      {
        if ( v21->fields._isDead_k__BackingField )
        {
          if ( !v12 )
            goto LABEL_71;
          isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v12;
        }
        else
        {
          isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v65;
          if ( !v65 )
            goto LABEL_71;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          isPlayerGroup,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
      }
      isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)WarBoardPieceData__get_isPlayerGroup(v21, 0LL);
      if ( ((unsigned __int8)isPlayerGroup & 1) != 0 )
      {
        isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)WarBoardPieceData__get_isMaster(v21, 0LL);
        if ( ((unsigned __int8)isPlayerGroup & 1) == 0 && v21->fields._IsDispConsumedPieceActionPoint_k__BackingField )
        {
          if ( !v18 )
            goto LABEL_71;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  v18,
                  v21->fields._ConsumedRecoverDonotActCost_k__BackingField,
                  (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__) )
          {
            ConsumedRecoverDonotActCost_k__BackingField = v21->fields._ConsumedRecoverDonotActCost_k__BackingField;
            v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v24,
              (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            v25 = (WarBoardEvalValueSquare_EvalValueSquare_o *)v24;
            v18 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v64;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v64,
              ConsumedRecoverDonotActCost_k__BackingField,
              v25,
              (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
          }
          isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item((System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v18, v21->fields._ConsumedRecoverDonotActCost_k__BackingField, (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
          if ( !isPlayerGroup )
            goto LABEL_71;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            isPlayerGroup,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        }
      }
      max_length = pieces->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_25;
    }
LABEL_72:
    v61 = sub_B52A88(isPlayerGroup);
    sub_B52A28(v61, 0LL);
  }
LABEL_25:
  if ( !v13 )
    goto LABEL_71;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v67,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v13,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
  v68 = v67;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v68,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__) )
  {
    current = v68.fields.current;
    v27 = (WarBoardManager_TaskList_o *)sub_B52A54(WarBoardManager_TaskList_TypeInfo);
    WarBoardManager_TaskList___ctor(v27, 0LL);
    if ( !current )
      sub_B52A5C(v28, v29);
    if ( ((__int64)current[1].monitor & 0x80000000) != 0 )
    {
      monitor_high = HIDWORD(current[1].monitor);
      if ( monitor_high >= 1 )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_B52A5C(0LL, v29);
        (*((void (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))klass->_1.image
         + 101))(
          klass,
          (unsigned int)monitor_high,
          0LL,
          v27,
          0xFFFFFFFFLL,
          0LL,
          1LL,
          *((_QWORD *)klass->_1.image + 102));
      }
      v36 = current[1].klass;
      if ( !v36 )
        sub_B52A5C(0LL, v29);
      v31 = (*((__int64 (**)(void))v36->_1.image + 103))();
      v33 = 1;
      if ( !v27 )
LABEL_74:
        sub_B52A5C(v31, v32);
    }
    else
    {
      v30 = current[1].klass;
      if ( !v30 )
        sub_B52A5C(0LL, v29);
      v31 = (*((__int64 (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))v30->_1.image
             + 101))(
              v30,
              HIDWORD(current[1].monitor),
              0LL,
              v27,
              0xFFFFFFFFLL,
              0LL,
              1LL,
              *((_QWORD *)v30->_1.image + 102));
      v33 = 0;
      if ( !v27 )
        goto LABEL_74;
    }
    if ( v27->fields._size >= 1 )
    {
      if ( (v33 & 1) != 0 )
      {
        if ( !v12 )
          sub_B52A5C(v31, v32);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v12,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
      }
      else
      {
        if ( !v65 )
          sub_B52A5C(v31, v32);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v65,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v68,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
  if ( !v64 )
    goto LABEL_71;
  isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(v64, (const MethodInfo_2F27904 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
  if ( (int)isPlayerGroup >= 1 )
    WarBoardData__ShowConsumedPieceActionPointPopup(
      v63,
      (System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *)v64,
      v37);
  if ( !v65 )
    goto LABEL_71;
  isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)WarBoardManager_TaskMultiList__SortedFlatted(v65, 0LL);
  if ( !v62 )
    goto LABEL_71;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v62,
    (System_Collections_Generic_IEnumerable_T__o *)isPlayerGroup,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v12 )
    goto LABEL_71;
  v38 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager_TaskMultiList__SortedFlatted(v12, 0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v62,
    v38,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v39 = v66;
  if ( v62->fields._size >= 1 )
  {
    EventBossUIDataTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardData__CreateEventBossUIDataTask(
                                                                                   (WarBoardData_o *)isPlayerGroup,
                                                                                   v15);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v62,
      EventBossUIDataTask,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v41 = (WarBoardWaitNonBlockingTaskEnd_o *)sub_B52A54(WarBoardWaitNonBlockingTaskEnd_TypeInfo);
    WarBoardWaitNonBlockingTaskEnd___ctor(v41, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v62,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !isPlayerGroup )
      goto LABEL_71;
    WarBoardManager__InsertTask_18573140(
      (WarBoardManager_o *)isPlayerGroup,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v62,
      0LL);
  }
  items = v63->fields.items;
  if ( !items )
    goto LABEL_71;
  v43 = items->max_length;
  if ( v43 >= 1 )
  {
    v44 = 0;
    while ( v44 < v43 )
    {
      isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)items->m_Items[v44];
      if ( !isPlayerGroup )
        goto LABEL_71;
      WarBoardItemData__UpdateFromServerData((WarBoardItemData_o *)isPlayerGroup, *p_serverData, 0LL);
      v43 = items->max_length;
      if ( (int)++v44 >= v43 )
        goto LABEL_59;
    }
    goto LABEL_72;
  }
LABEL_59:
  walls = v63->fields.walls;
  if ( !walls )
LABEL_71:
    sub_B52A5C(isPlayerGroup, v15);
  if ( (int)walls->max_length >= 1 )
  {
    v46 = 0LL;
    while ( 1 )
    {
      v47 = sub_B52A54(WarBoardData___c__DisplayClass151_0_TypeInfo);
      WarBoardData___c__DisplayClass151_0___ctor((WarBoardData___c__DisplayClass151_0_o *)v47, 0LL);
      if ( v46 >= walls->max_length )
        goto LABEL_72;
      if ( !v47 )
        goto LABEL_71;
      v54 = (System_Int32_array **)walls->m_Items[v46];
      *(_QWORD *)(v47 + 16) = v54;
      v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v47 + 16);
      sub_B52920((BattleServantConfConponent_o *)(v47 + 16), v54, v48, v49, v50, v51, v52, v53);
      if ( !v39 )
        goto LABEL_71;
      wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v39->fields.wallInfo;
      v57 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardUserWallData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v57,
        (Il2CppObject *)v47,
        Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
      v58 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
              wallInfo,
              (System_Func_TSource__bool__o *)v57,
              (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v58 )
      {
        v59 = v58;
        isPlayerGroup = *v55;
        if ( !*v55 )
          goto LABEL_71;
        range = v59->fields.range;
        if ( isPlayerGroup->fields._size > range )
          WarBoardWallData__SetBreakPoint((WarBoardWallData_o *)isPlayerGroup, range, 0LL);
      }
      v39 = v66;
      if ( (__int64)++v46 >= (int)walls->max_length )
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
    sub_B52A5C(this, 0LL);
  v4 = WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(participantInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


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

  if ( (byte_42AEBC0 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42AEBC0 = 1;
  }
  v7 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 2LL);
  if ( !v7 )
    sub_B52A5C(0LL, v8);
  max_length = v7->max_length;
  if ( !max_length || (v7->m_Items[1] = fromSquareIndex, max_length == 1) )
  {
    v16 = sub_B52A88(v7);
    sub_B52A28(v16, 0LL);
  }
  v7->m_Items[2] = toSquareIndex;
  this->fields.latestPieceActionSquareIndexes = v7;
  sub_B52920(
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
  System_Collections_Generic_IEnumerable_T__o *squares; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  struct WarBoardSquareData_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleServantConfConponent_o *p_condSquares; // x19
  System_Collections_Generic_IEnumerable_T__o *condSquares; // t1
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v18; // x21
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42AEBA4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor___68527760);
    sub_B52984(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
    byte_42AEBA4 = 1;
  }
  squares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.squares;
  v6 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v6,
    squares,
    (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___68527760);
  if ( !v6 )
    goto LABEL_6;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6,
    (EventMissionProgressRequest_Argument_ProgressData_o *)square,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
  v9 = (struct WarBoardSquareData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                            (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.squares = v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.squares,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  condSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.condSquares;
  p_condSquares = (BattleServantConfConponent_o *)&this->fields.condSquares;
  v18 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v18,
    condSquares,
    (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___68527760);
  if ( !v18 )
LABEL_6:
    sub_B52A5C(v7, v8);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v18,
    (WarBoardManager_TaskList_o *)square,
    (const MethodInfo_2FF2FB0 *)Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
  v19 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                 (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  p_condSquares->klass = (BattleServantConfConponent_c *)v19;
  sub_B52920(p_condSquares, v19, v20, v21, v22, v23, v24, v25);
}


void __fastcall WarBoardData__UpdateUiData(
        WarBoardData_o *this,
        int32_t squareIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  WarBoardUiData_o *UiData; // x0
  WarBoardManager_TaskList_o *v8; // x1
  il2cpp_array_size_t max_length; // w8
  WarBoardUiData_o *v10; // x22

  if ( (byte_42AEBD1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardUiData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
    sub_B52984(&WarBoardUiData_TypeInfo);
    byte_42AEBD1 = 1;
  }
  UiData = WarBoardData__GetUiData(this, squareIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_13;
  max_length = setKeys->max_length;
  v8 = (WarBoardManager_TaskList_o *)UiData;
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
        v8,
        (const MethodInfo_2FF2FB0 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_13:
    sub_B52A5C(UiData, v8);
  }
  if ( max_length )
  {
    v10 = (WarBoardUiData_o *)sub_B52A54(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_26381104(v10, squareIndex, setKeys, 0LL);
    UiData = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UiData,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardUiData__Add__);
      return;
    }
    goto LABEL_13;
  }
}


void __fastcall WarBoardData__UpdateUiData_22825192(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  WarBoardUiData_o *UiData_22871012; // x0
  WarBoardManager_TaskList_o *v8; // x1
  il2cpp_array_size_t max_length; // w8
  WarBoardUiData_o *v10; // x22

  if ( (byte_42AEBD2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardUiData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
    sub_B52984(&WarBoardUiData_TypeInfo);
    byte_42AEBD2 = 1;
  }
  UiData_22871012 = WarBoardData__GetUiData_22871012(this, pieceIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_13;
  max_length = setKeys->max_length;
  v8 = (WarBoardManager_TaskList_o *)UiData_22871012;
  if ( UiData_22871012 )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys(UiData_22871012, setKeys, 0LL);
      return;
    }
    UiData_22871012 = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData_22871012 )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UiData_22871012,
        v8,
        (const MethodInfo_2FF2FB0 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_13:
    sub_B52A5C(UiData_22871012, v8);
  }
  if ( max_length )
  {
    v10 = (WarBoardUiData_o *)sub_B52A54(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_26381188(v10, pieceIndex, setKeys, 0LL);
    UiData_22871012 = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData_22871012 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UiData_22871012,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardUiData__Add__);
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
  struct WarBoardPieceData_array *pieces; // x19
  WarBoardData___c_c *v4; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__62_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int64_t result; // x0

  if ( (byte_42AEB7D & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Find_WarBoardPieceData___);
    sub_B52984(&Method_System_Predicate_WarBoardPieceData___ctor__);
    sub_B52984(&System_Predicate_WarBoardPieceData__TypeInfo);
    sub_B52984(&Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__);
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AEB7D = 1;
  }
  pieces = this->fields.pieces;
  v4 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__62_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__62_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__62_0,
      v7,
      Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__,
      (const MethodInfo_28D2DBC *)Method_System_Predicate_WarBoardPieceData___ctor__);
    v8 = WarBoardData___c_TypeInfo->static_fields;
    v8->__9__62_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__62_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__62_0,
      (System_Int32_array **)_9__62_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  result = (int64_t)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                      (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)pieces,
                      (System_Predicate_T__o *)_9__62_0,
                      (const MethodInfo_201A850 *)Method_System_Array_Find_WarBoardPieceData___);
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
    sub_B52A5C(this, method);
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
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
}


void __fastcall WarBoardData_BattleParticipantInfo___ctor_22503100(
        WarBoardData_BattleParticipantInfo_o *this,
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  __int64 v5; // x21
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x1
  System_Func_uint__WarBoardPieceData__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  struct WarBoardPieceData_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42AE8F4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_uint__WarBoardPieceData___ctor__);
    sub_B52984(&System_Func_uint__WarBoardPieceData__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__);
    sub_B52984(&WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo);
    byte_42AE8F4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = sub_B52A54(WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo);
  WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor(
    (WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *)v5,
    0LL);
  if ( !uniqueIndexArray )
    goto LABEL_9;
  if ( (int)uniqueIndexArray->max_length > 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance && v5 )
    {
      v14 = *(System_Int32_array ***)&Instance[4].fields.m_CachedPtr;
      *(_QWORD *)(v5 + 16) = v14;
      sub_B52920((BattleServantConfConponent_o *)(v5 + 16), v14, v8, v9, v10, v11, v12, v13);
      v15 = (System_Func_uint__WarBoardPieceData__o *)sub_B52A54(System_Func_uint__WarBoardPieceData__TypeInfo);
      System_Func_uint__WarBoardPieceData____ctor(
        v15,
        (Il2CppObject *)v5,
        Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__,
        (const MethodInfo_2BD0844 *)Method_System_Func_uint__WarBoardPieceData___ctor__);
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_uint__WarBoardPieceData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIndexArray,
                                                                   (System_Func_TSource__TResult__o *)v15,
                                                                   (const MethodInfo_1B6B058 *)Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
      v17 = (struct WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                v16,
                                                (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      this->fields._Participants_k__BackingField = v17;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields,
        (System_Int32_array **)v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      return;
    }
LABEL_9:
    sub_B52A5C(Instance, v7);
  }
  this->fields._Invalid_k__BackingField = 1;
}


WarBoardPieceData_array *__fastcall WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(
        WarBoardData_BattleParticipantInfo_o *this,
        WarBoardPieceData_o *attackPieceData,
        WarBoardPieceData_o *targetPieceData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  WarBoardData_o *Instance; // x0
  __int64 v8; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardData_o *v10; // x20
  unsigned __int64 v11; // x23
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // x24
  WarBoardManager_TaskList_o *v13; // x21
  __int64 v15; // x0

  if ( (byte_42AE8F6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AE8F6 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v6
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v6,
          (EventMissionProgressRequest_Argument_ProgressData_o *)attackPieceData,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v6,
          (EventMissionProgressRequest_Argument_ProgressData_o *)targetPieceData,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__),
        (Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
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
    sub_B52A5C(Instance, v8);
  }
  stageNpcMaster = Instance->fields.stageNpcMaster;
  v10 = Instance;
  if ( (int)stageNpcMaster >= 1 )
  {
    v11 = 0LL;
    p_npcEntityDict = &Instance->fields.npcEntityDict;
    do
    {
      if ( v11 >= (unsigned int)stageNpcMaster )
      {
        v15 = sub_B52A88(Instance);
        sub_B52A28(v15, 0LL);
      }
      v13 = (WarBoardManager_TaskList_o *)p_npcEntityDict[v11];
      Instance = (WarBoardData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                     (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v6,
                                     v13,
                                     (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v13 )
          goto LABEL_19;
        Instance = (WarBoardData_o *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v13, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (WarBoardData_o *)WarBoardPieceData__HasAvailableWarBoardNotAttackedBuff(
                                         (WarBoardPieceData_o *)v13,
                                         0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v6,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        }
      }
      LODWORD(stageNpcMaster) = v10->fields.stageNpcMaster;
      ++v11;
    }
    while ( (__int64)v11 < (int)stageNpcMaster );
  }
  return (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


WarBoardData_BattleParticipantInfo_o *__fastcall WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_42AE8F7 & 1) == 0 )
  {
    sub_B52984(&WarBoardData_BattleParticipantInfo_TypeInfo);
    byte_42AE8F7 = 1;
  }
  v3 = (WarBoardData_BattleParticipantInfo_o *)sub_B52A54(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor_22503100(v3, uniqueIndexArray, v4);
  return v3;
}


System_UInt32_array *__fastcall WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x19
  WarBoardData_BattleParticipantInfo___c_c *v4; // x0
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardStageNpcEntity__uint__o *_9__14_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_42AE8F5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_uint___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__uint___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__uint__TypeInfo);
    sub_B52984(&Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__);
    sub_B52984(&WarBoardData_BattleParticipantInfo___c_TypeInfo);
    byte_42AE8F5 = 1;
  }
  Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Participants_k__BackingField;
  v4 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  if ( (BYTE3(WarBoardData_BattleParticipantInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData_BattleParticipantInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_BattleParticipantInfo___c_TypeInfo);
    v4 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__14_0 = (System_Func_WarBoardStageNpcEntity__uint__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_WarBoardStageNpcEntity__uint__o *)sub_B52A54(System_Func_WarBoardPieceData__uint__TypeInfo);
    System_Func_WarBoardStageNpcEntity__uint____ctor(
      _9__14_0,
      v7,
      Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__,
      (const MethodInfo_2BCBB7C *)Method_System_Func_WarBoardPieceData__uint___ctor__);
    v8 = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    v8->__9__14_0 = (struct System_Func_WarBoardPieceData__uint__o *)_9__14_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardPieceData__uint_(
                                                               Participants_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__14_0,
                                                               (const MethodInfo_1B6A854 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
  return System_Linq_Enumerable__ToArray_uint_(
           v15,
           (const MethodInfo_1B6E728 *)Method_System_Linq_Enumerable_ToArray_uint___);
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Attacker(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8
  __int64 v4; // x0

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_B52A5C(this, method);
  if ( !Participants_k__BackingField->max_length )
  {
    v4 = sub_B52A88(this);
    sub_B52A28(v4, 0LL);
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
    sub_B52A5C(this, method);
  if ( Participants_k__BackingField->max_length <= 1 )
  {
    v4 = sub_B52A88(this);
    sub_B52A28(v4, 0LL);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42BDD09 & 1) == 0 )
  {
    sub_B52984(&WarBoardData_BattleParticipantInfo___c_TypeInfo);
    byte_42BDD09 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardData_BattleParticipantInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(0LL, x);
  return WarBoardData__GetPiece_22844524(warBoardData, x, 0, 0LL);
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.pieceSaves, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.itemSaves = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.itemSaves, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.treasureSaves = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.treasureSaves, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.wallSaves = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.wallSaves, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.squareSaves = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.squareSaves, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.cameraPos = UnityEngine_Vector2__get_zero(0LL);
  this->fields.cameraSize = 0.0;
  this->fields.onBoardSkillUpdate = 0;
  *(_QWORD *)&this->fields.turn = 0xFFFFFFFF00000000LL;
  this->fields.turnGroupId = -1;
  this->fields.eventSaves = 0LL;
  this->fields.isPlayedHalfDeadMessage = 0;
  *(_QWORD *)&this->fields.randLogicCount = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.eventSaves, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.winCondId = -1;
  this->fields.latestBattlePieceUniqueIndexes = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes,
    0LL,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.prevCondSaves = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.prevCondSaves, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.reinforcementsSaves = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.reinforcementsSaves, 0LL, v51, v52, v53, v54, v55, v56);
  this->fields.playedReinforcements = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playedReinforcements, 0LL, v57, v58, v59, v60, v61, v62);
  this->fields.uiDataSaves = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.uiDataSaves, 0LL, v63, v64, v65, v66, v67, v68);
  this->fields.bgAnimationInfo = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.bgAnimationInfo, 0LL, v69, v70, v71, v72, v73, v74);
  this->fields.squareIndexInfo = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.squareIndexInfo, 0LL, v75, v76, v77, v78, v79, v80);
  this->fields.bossBattleInfo = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.bossBattleInfo, 0LL, v81, v82, v83, v84, v85, v86);
}


void __fastcall WarBoardData_WarBoardLocalSaveData___ctor_22504260(
        WarBoardData_WarBoardLocalSaveData_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 GutsCount; // x0
  __int64 v6; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardDataEntity_o *v8; // x8
  struct WarBoardDataEntity_o *v9; // x8
  struct WarBoardDataEntity_o *v10; // x8
  struct WarBoardDataEntity_o *v11; // x8
  struct WarBoardDataEntity_o *v12; // x8
  struct WarBoardPieceData_array *pieces; // x8
  __int64 v14; // x22
  struct WarBoardPieceData_SaveData_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  unsigned __int64 v22; // x24
  signed __int64 v23; // x25
  __int64 v24; // x26
  struct WarBoardPieceData_array *v25; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x20
  WarBoardPieceData_o *v27; // x23
  WarBoardPieceData_SaveData_o *v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct WarBoardItemData_array *items; // x8
  __int64 v36; // x22
  struct WarBoardItemData_SaveData_array *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  unsigned __int64 v44; // x24
  signed __int64 v45; // x25
  __int64 v46; // x26
  struct WarBoardItemData_array *v47; // x8
  struct WarBoardItemData_SaveData_array *itemSaves; // x20
  WarBoardItemData_o *v49; // x23
  WarBoardItemData_SaveData_o *v50; // x22
  const MethodInfo *v51; // x2
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct WarBoardTreasureData_array *treasures; // x8
  __int64 v59; // x22
  struct WarBoardTreasureData_SaveData_array *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  unsigned __int64 v67; // x24
  signed __int64 v68; // x25
  __int64 v69; // x26
  struct WarBoardTreasureData_array *v70; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  WarBoardTreasureData_o *v72; // x23
  WarBoardTreasureData_SaveData_o *v73; // x22
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct WarBoardWallData_array *walls; // x8
  __int64 v81; // x22
  struct WarBoardWallData_SaveData_array *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  unsigned __int64 v89; // x24
  signed __int64 v90; // x25
  __int64 v91; // x26
  struct WarBoardWallData_array *v92; // x8
  struct WarBoardWallData_SaveData_array *wallSaves; // x20
  WarBoardWallData_o *v94; // x23
  WarBoardWallData_SaveData_o *v95; // x22
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct WarBoardSquareData_array *squares; // x8
  __int64 v103; // x22
  struct WarBoardSquareData_SaveData_array *v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  unsigned __int64 v111; // x24
  signed __int64 v112; // x25
  __int64 v113; // x26
  struct WarBoardSquareData_array *v114; // x8
  struct WarBoardSquareData_SaveData_array *squareSaves; // x20
  WarBoardSquareData_o *v116; // x23
  WarBoardSquareData_SaveData_o *v117; // x22
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x8
  int size; // w22
  struct WarBoardEventData_SaveData_array *v126; // x0
  struct WarBoardEventData_SaveData_array **p_eventSaves; // x21
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  __int64 v140; // x24
  __int64 v141; // x27
  __int64 v142; // x25
  struct System_Collections_Generic_List_WarBoardEventData__o *v143; // x22
  unsigned int *v144; // x28
  WarBoardEventData_o *v145; // x23
  WarBoardEventData_SaveData_o *v146; // x22
  const MethodInfo *v147; // x2
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  __int64 v154; // x8
  System_Int32_array **latestPieceActionSquareIndexes; // x1
  System_Int32_array **latestBattlePieceUniqueIndexes; // x1
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x8
  int v164; // w22
  System_Int32_array **v165; // x0
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  __int64 v172; // x24
  __int64 v173; // x27
  __int64 v174; // x25
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *v175; // x22
  unsigned int *prevCondSaves; // x28
  WarBoardPrevCondData_o *v177; // x23
  WarBoardPrevCondData_SaveData_o *v178; // x22
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  __int64 v185; // x8
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  int v187; // w22
  System_Int32_array **v188; // x0
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  __int64 v195; // x24
  __int64 v196; // x27
  __int64 v197; // x25
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v198; // x22
  unsigned int *reinforcementsSaves; // x28
  HoldReinforcementsData_o *v200; // x23
  HoldReinforcementsData_SaveData_o *v201; // x22
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  __int64 v208; // x8
  System_Int32_array **v209; // x0
  System_String_array **v210; // x2
  System_String_array **v211; // x3
  System_Boolean_array **v212; // x4
  System_Int32_array **v213; // x5
  System_Int32_array *v214; // x6
  System_Int32_array *v215; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x8
  int v217; // w22
  System_Int32_array **v218; // x0
  System_String_array **v219; // x2
  System_String_array **v220; // x3
  System_Boolean_array **v221; // x4
  System_Int32_array **v222; // x5
  System_Int32_array *v223; // x6
  System_Int32_array *v224; // x7
  __int64 v225; // x24
  __int64 v226; // x27
  __int64 v227; // x25
  struct System_Collections_Generic_List_WarBoardUiData__o *v228; // x22
  unsigned int *uiDataSaves; // x28
  WarBoardUiData_o *v230; // x23
  WarBoardUiData_SaveData_o *v231; // x22
  System_String_array **v232; // x2
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  __int64 v238; // x8
  struct WarBoardDataEntity_o *v239; // x8
  int32_t v240; // w22
  System_Int32_array **v241; // x0
  System_String_array **v242; // x2
  System_String_array **v243; // x3
  System_Boolean_array **v244; // x4
  System_Int32_array **v245; // x5
  System_Int32_array *v246; // x6
  System_Int32_array *v247; // x7
  unsigned __int64 v248; // x24
  signed __int64 v249; // x25
  __int64 v250; // x26
  struct WarBoardDataEntity_o *v251; // x8
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x8
  unsigned int *v253; // x20
  WarBoardSquareIndexData_o *v254; // x23
  WarBoardSquareIndexData_SaveData_o *v255; // x22
  System_String_array **v256; // x2
  System_String_array **v257; // x3
  System_Boolean_array **v258; // x4
  System_Int32_array **v259; // x5
  System_Int32_array *v260; // x6
  System_Int32_array *v261; // x7
  struct WarBoardDataEntity_o *v262; // x8
  int32_t v263; // w22
  System_Int32_array **v264; // x0
  System_String_array **v265; // x2
  System_String_array **v266; // x3
  System_Boolean_array **v267; // x4
  System_Int32_array **v268; // x5
  System_Int32_array *v269; // x6
  System_Int32_array *v270; // x7
  unsigned __int64 v271; // x24
  signed __int64 v272; // x25
  __int64 v273; // x26
  struct WarBoardDataEntity_o *v274; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  unsigned int *v276; // x20
  WarBoardBossBattleData_o *v277; // x23
  WarBoardBossBattleData_SaveData_o *v278; // x22
  System_String_array **v279; // x2
  System_String_array **v280; // x3
  System_Boolean_array **v281; // x4
  System_Int32_array **v282; // x5
  System_Int32_array *v283; // x6
  System_Int32_array *v284; // x7
  int32_t ContinueConsumeType_k__BackingField; // w8
  __int64 v286; // x0
  __int64 v287; // x0
  WarBoardData_WarBoardLocalSaveData_o *v288; // [xsp+8h] [xbp-58h]

  if ( (byte_42AE8F8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
    sub_B52984(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardEventData__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardUiData__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardEventData__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardUiData__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__);
    sub_B52984(&WarBoardUiData_SaveData___TypeInfo);
    sub_B52984(&WarBoardSquareData_SaveData___TypeInfo);
    sub_B52984(&WarBoardTreasureData_SaveData___TypeInfo);
    sub_B52984(&WarBoardSquareIndexData_SaveData___TypeInfo);
    sub_B52984(&HoldReinforcementsData_SaveData___TypeInfo);
    sub_B52984(&WarBoardItemData_SaveData___TypeInfo);
    sub_B52984(&WarBoardBossBattleData_SaveData___TypeInfo);
    sub_B52984(&WarBoardEventData_SaveData___TypeInfo);
    sub_B52984(&WarBoardPrevCondData_SaveData___TypeInfo);
    sub_B52984(&WarBoardPieceData_SaveData___TypeInfo);
    sub_B52984(&WarBoardWallData_SaveData___TypeInfo);
    sub_B52984(&WarBoardItemData_SaveData_TypeInfo);
    sub_B52984(&WarBoardPieceData_SaveData_TypeInfo);
    sub_B52984(&WarBoardWallData_SaveData_TypeInfo);
    sub_B52984(&WarBoardUiData_SaveData_TypeInfo);
    sub_B52984(&WarBoardTreasureData_SaveData_TypeInfo);
    sub_B52984(&WarBoardEventData_SaveData_TypeInfo);
    sub_B52984(&WarBoardSquareData_SaveData_TypeInfo);
    sub_B52984(&WarBoardSquareIndexData_SaveData_TypeInfo);
    sub_B52984(&WarBoardPrevCondData_SaveData_TypeInfo);
    sub_B52984(&HoldReinforcementsData_SaveData_TypeInfo);
    sub_B52984(&WarBoardBossBattleData_SaveData_TypeInfo);
    byte_42AE8F8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !warBoardData )
    goto LABEL_128;
  serverData = warBoardData->fields.serverData;
  if ( !serverData )
    goto LABEL_128;
  this->fields.questId = serverData->fields.questId;
  v8 = warBoardData->fields.serverData;
  if ( !v8 )
    goto LABEL_128;
  this->fields.questPhase = v8->fields.questPhase;
  v9 = warBoardData->fields.serverData;
  if ( !v9 )
    goto LABEL_128;
  this->fields.stageId = v9->fields.stageId;
  v10 = warBoardData->fields.serverData;
  if ( !v10 )
    goto LABEL_128;
  this->fields.turn = v10->fields.turn;
  v11 = warBoardData->fields.serverData;
  if ( !v11 )
    goto LABEL_128;
  this->fields.turnForceId = v11->fields.turnForceId;
  v12 = warBoardData->fields.serverData;
  if ( !v12 )
    goto LABEL_128;
  this->fields.turnGroupId = v12->fields.turnGroupId;
  pieces = warBoardData->fields.pieces;
  if ( !pieces )
    goto LABEL_128;
  v14 = *(_QWORD *)&pieces->max_length;
  v15 = (struct WarBoardPieceData_SaveData_array *)sub_B5299C(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v14);
  this->fields.pieceSaves = v15;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.pieceSaves,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( (int)v14 >= 1 )
  {
    v22 = 0LL;
    v23 = (int)v14;
    v24 = 32LL;
    while ( 1 )
    {
      v25 = warBoardData->fields.pieces;
      if ( !v25 )
        break;
      if ( v22 >= v25->max_length )
        goto LABEL_129;
      pieceSaves = this->fields.pieceSaves;
      v27 = *(WarBoardPieceData_o **)((char *)&v25->obj.klass + v24);
      v28 = (WarBoardPieceData_SaveData_o *)sub_B52A54(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_20312400(v28, v27, 0LL);
      if ( !pieceSaves )
        break;
      if ( v28 )
      {
        GutsCount = sub_B52A44(v28, pieceSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
        {
LABEL_130:
          v287 = sub_B52A7C();
          sub_B52A28(v287, 0LL);
        }
      }
      if ( v22 >= pieceSaves->max_length )
      {
LABEL_129:
        v286 = sub_B52A88(GutsCount);
        sub_B52A28(v286, 0LL);
      }
      *(Il2CppClass **)((char *)&pieceSaves->obj.klass + v24) = (Il2CppClass *)v28;
      sub_B52920(
        (BattleServantConfConponent_o *)((char *)pieceSaves + v24),
        (System_Int32_array **)v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      ++v22;
      v24 += 8LL;
      if ( (__int64)v22 >= v23 )
        goto LABEL_20;
    }
LABEL_128:
    sub_B52A5C(GutsCount, v6);
  }
LABEL_20:
  items = warBoardData->fields.items;
  if ( !items )
    goto LABEL_128;
  v36 = *(_QWORD *)&items->max_length;
  v37 = (struct WarBoardItemData_SaveData_array *)sub_B5299C(WarBoardItemData_SaveData___TypeInfo, (unsigned int)v36);
  this->fields.itemSaves = v37;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.itemSaves,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( (int)v36 >= 1 )
  {
    v44 = 0LL;
    v45 = (int)v36;
    v46 = 32LL;
    do
    {
      v47 = warBoardData->fields.items;
      if ( !v47 )
        goto LABEL_128;
      if ( v44 >= v47->max_length )
        goto LABEL_129;
      itemSaves = this->fields.itemSaves;
      v49 = *(WarBoardItemData_o **)((char *)&v47->obj.klass + v46);
      v50 = (WarBoardItemData_SaveData_o *)sub_B52A54(WarBoardItemData_SaveData_TypeInfo);
      WarBoardItemData_SaveData___ctor_22507432(v50, v49, v51);
      if ( !itemSaves )
        goto LABEL_128;
      if ( v50 )
      {
        GutsCount = sub_B52A44(v50, itemSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v44 >= itemSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&itemSaves->obj.klass + v46) = (Il2CppClass *)v50;
      sub_B52920(
        (BattleServantConfConponent_o *)((char *)itemSaves + v46),
        (System_Int32_array **)v50,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      ++v44;
      v46 += 8LL;
    }
    while ( (__int64)v44 < v45 );
  }
  treasures = warBoardData->fields.treasures;
  if ( !treasures )
    goto LABEL_128;
  v59 = *(_QWORD *)&treasures->max_length;
  v60 = (struct WarBoardTreasureData_SaveData_array *)sub_B5299C(
                                                        WarBoardTreasureData_SaveData___TypeInfo,
                                                        (unsigned int)v59);
  this->fields.treasureSaves = v60;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.treasureSaves,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( (int)v59 >= 1 )
  {
    v67 = 0LL;
    v68 = (int)v59;
    v69 = 32LL;
    do
    {
      v70 = warBoardData->fields.treasures;
      if ( !v70 )
        goto LABEL_128;
      if ( v67 >= v70->max_length )
        goto LABEL_129;
      treasureSaves = this->fields.treasureSaves;
      v72 = *(WarBoardTreasureData_o **)((char *)&v70->obj.klass + v69);
      v73 = (WarBoardTreasureData_SaveData_o *)sub_B52A54(WarBoardTreasureData_SaveData_TypeInfo);
      WarBoardTreasureData_SaveData___ctor_20325372(v73, v72, 0LL);
      if ( !treasureSaves )
        goto LABEL_128;
      if ( v73 )
      {
        GutsCount = sub_B52A44(v73, treasureSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v67 >= treasureSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&treasureSaves->obj.klass + v69) = (Il2CppClass *)v73;
      sub_B52920(
        (BattleServantConfConponent_o *)((char *)treasureSaves + v69),
        (System_Int32_array **)v73,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      ++v67;
      v69 += 8LL;
    }
    while ( (__int64)v67 < v68 );
  }
  walls = warBoardData->fields.walls;
  if ( !walls )
    goto LABEL_128;
  v81 = *(_QWORD *)&walls->max_length;
  v82 = (struct WarBoardWallData_SaveData_array *)sub_B5299C(WarBoardWallData_SaveData___TypeInfo, (unsigned int)v81);
  this->fields.wallSaves = v82;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.wallSaves,
    (System_Int32_array **)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  if ( (int)v81 >= 1 )
  {
    v89 = 0LL;
    v90 = (int)v81;
    v91 = 32LL;
    do
    {
      v92 = warBoardData->fields.walls;
      if ( !v92 )
        goto LABEL_128;
      if ( v89 >= v92->max_length )
        goto LABEL_129;
      wallSaves = this->fields.wallSaves;
      v94 = *(WarBoardWallData_o **)((char *)&v92->obj.klass + v91);
      v95 = (WarBoardWallData_SaveData_o *)sub_B52A54(WarBoardWallData_SaveData_TypeInfo);
      WarBoardWallData_SaveData___ctor_20328600(v95, v94, 0LL);
      if ( !wallSaves )
        goto LABEL_128;
      if ( v95 )
      {
        GutsCount = sub_B52A44(v95, wallSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v89 >= wallSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&wallSaves->obj.klass + v91) = (Il2CppClass *)v95;
      sub_B52920(
        (BattleServantConfConponent_o *)((char *)wallSaves + v91),
        (System_Int32_array **)v95,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101);
      ++v89;
      v91 += 8LL;
    }
    while ( (__int64)v89 < v90 );
  }
  squares = warBoardData->fields.squares;
  if ( !squares )
    goto LABEL_128;
  v103 = *(_QWORD *)&squares->max_length;
  v104 = (struct WarBoardSquareData_SaveData_array *)sub_B5299C(
                                                       WarBoardSquareData_SaveData___TypeInfo,
                                                       (unsigned int)v103);
  this->fields.squareSaves = v104;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.squareSaves,
    (System_Int32_array **)v104,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  if ( (int)v103 >= 1 )
  {
    v111 = 0LL;
    v112 = (int)v103;
    v113 = 32LL;
    do
    {
      v114 = warBoardData->fields.squares;
      if ( !v114 )
        goto LABEL_128;
      if ( v111 >= v114->max_length )
        goto LABEL_129;
      squareSaves = this->fields.squareSaves;
      v116 = *(WarBoardSquareData_o **)((char *)&v114->obj.klass + v113);
      v117 = (WarBoardSquareData_SaveData_o *)sub_B52A54(WarBoardSquareData_SaveData_TypeInfo);
      WarBoardSquareData_SaveData___ctor_20320420(v117, v116, 0LL);
      if ( !squareSaves )
        goto LABEL_128;
      if ( v117 )
      {
        GutsCount = sub_B52A44(v117, squareSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v111 >= squareSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&squareSaves->obj.klass + v113) = (Il2CppClass *)v117;
      sub_B52920(
        (BattleServantConfConponent_o *)((char *)squareSaves + v113),
        (System_Int32_array **)v117,
        v118,
        v119,
        v120,
        v121,
        v122,
        v123);
      ++v111;
      v113 += 8LL;
    }
    while ( (__int64)v111 < v112 );
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
  v126 = (struct WarBoardEventData_SaveData_array *)sub_B5299C(
                                                      WarBoardEventData_SaveData___TypeInfo,
                                                      (unsigned int)size);
  this->fields.eventSaves = v126;
  p_eventSaves = &this->fields.eventSaves;
  v288 = this;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventSaves,
    (System_Int32_array **)v126,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133);
  if ( size >= 1 )
  {
    v140 = size;
    v141 = 4LL;
    v142 = 8LL;
    do
    {
      v143 = warBoardData->fields.listEvent;
      if ( !v143 )
        goto LABEL_128;
      v144 = (unsigned int *)*p_eventSaves;
      if ( v141 - 4 >= (unsigned __int64)(unsigned int)v143->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v145 = (WarBoardEventData_o *)*((_QWORD *)&v143->fields._items->obj.klass + v141);
      v146 = (WarBoardEventData_SaveData_o *)sub_B52A54(WarBoardEventData_SaveData_TypeInfo);
      WarBoardEventData_SaveData___ctor_22507528(v146, v145, v147);
      if ( !v144 )
        goto LABEL_128;
      if ( v146 )
      {
        GutsCount = sub_B52A44(v146, *(_QWORD *)(*(_QWORD *)v144 + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v141 - 4 >= (unsigned __int64)v144[6] )
        goto LABEL_129;
      *(_QWORD *)&v144[2 * v141] = v146;
      sub_B52920(
        (BattleServantConfConponent_o *)&v144[v142],
        (System_Int32_array **)v146,
        v148,
        v149,
        v150,
        v151,
        v152,
        v153);
      v154 = v141 - 3;
      ++v141;
      v142 += 2LL;
    }
    while ( v154 < v140 );
  }
  v288->fields.winCondId = warBoardData->fields.winCondId;
  latestPieceActionSquareIndexes = (System_Int32_array **)warBoardData->fields.latestPieceActionSquareIndexes;
  v288->fields.latestPieceActionSquareIndexes = (struct System_Int32_array *)latestPieceActionSquareIndexes;
  sub_B52920(
    (BattleServantConfConponent_o *)&v288->fields.latestPieceActionSquareIndexes,
    latestPieceActionSquareIndexes,
    v134,
    v135,
    v136,
    v137,
    v138,
    v139);
  latestBattlePieceUniqueIndexes = (System_Int32_array **)warBoardData->fields.latestBattlePieceUniqueIndexes;
  v288->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)latestBattlePieceUniqueIndexes;
  sub_B52920(
    (BattleServantConfConponent_o *)&v288->fields.latestBattlePieceUniqueIndexes,
    latestBattlePieceUniqueIndexes,
    v157,
    v158,
    v159,
    v160,
    v161,
    v162);
  listPrevCond = warBoardData->fields.listPrevCond;
  if ( !listPrevCond )
    goto LABEL_128;
  v164 = listPrevCond->fields._size;
  v165 = (System_Int32_array **)sub_B5299C(WarBoardPrevCondData_SaveData___TypeInfo, (unsigned int)v164);
  v288->fields.prevCondSaves = (struct WarBoardPrevCondData_SaveData_array *)v165;
  sub_B52920((BattleServantConfConponent_o *)&v288->fields.prevCondSaves, v165, v166, v167, v168, v169, v170, v171);
  if ( v164 >= 1 )
  {
    v172 = v164;
    v173 = 4LL;
    v174 = 8LL;
    do
    {
      v175 = warBoardData->fields.listPrevCond;
      if ( !v175 )
        goto LABEL_128;
      prevCondSaves = (unsigned int *)v288->fields.prevCondSaves;
      if ( v173 - 4 >= (unsigned __int64)(unsigned int)v175->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v177 = (WarBoardPrevCondData_o *)*((_QWORD *)&v175->fields._items->obj.klass + v173);
      v178 = (WarBoardPrevCondData_SaveData_o *)sub_B52A54(WarBoardPrevCondData_SaveData_TypeInfo);
      WarBoardPrevCondData_SaveData___ctor_20314652(v178, v177, 0LL);
      if ( !prevCondSaves )
        goto LABEL_128;
      if ( v178 )
      {
        GutsCount = sub_B52A44(v178, *(_QWORD *)(*(_QWORD *)prevCondSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v173 - 4 >= (unsigned __int64)prevCondSaves[6] )
        goto LABEL_129;
      *(_QWORD *)&prevCondSaves[2 * v173] = v178;
      sub_B52920(
        (BattleServantConfConponent_o *)&prevCondSaves[v174],
        (System_Int32_array **)v178,
        v179,
        v180,
        v181,
        v182,
        v183,
        v184);
      v185 = v173 - 3;
      ++v173;
      v174 += 2LL;
    }
    while ( v185 < v172 );
  }
  reinforcementsSaveList = warBoardData->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_128;
  v187 = reinforcementsSaveList->fields._size;
  v188 = (System_Int32_array **)sub_B5299C(HoldReinforcementsData_SaveData___TypeInfo, (unsigned int)v187);
  v288->fields.reinforcementsSaves = (struct HoldReinforcementsData_SaveData_array *)v188;
  sub_B52920(
    (BattleServantConfConponent_o *)&v288->fields.reinforcementsSaves,
    v188,
    v189,
    v190,
    v191,
    v192,
    v193,
    v194);
  if ( v187 >= 1 )
  {
    v195 = v187;
    v196 = 4LL;
    v197 = 8LL;
    do
    {
      v198 = warBoardData->fields.reinforcementsSaveList;
      if ( !v198 )
        goto LABEL_128;
      reinforcementsSaves = (unsigned int *)v288->fields.reinforcementsSaves;
      if ( v196 - 4 >= (unsigned __int64)(unsigned int)v198->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v200 = (HoldReinforcementsData_o *)*((_QWORD *)&v198->fields._items->obj.klass + v196);
      v201 = (HoldReinforcementsData_SaveData_o *)sub_B52A54(HoldReinforcementsData_SaveData_TypeInfo);
      HoldReinforcementsData_SaveData___ctor_19250300(v201, v200, 0LL);
      if ( !reinforcementsSaves )
        goto LABEL_128;
      if ( v201 )
      {
        GutsCount = sub_B52A44(v201, *(_QWORD *)(*(_QWORD *)reinforcementsSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v196 - 4 >= (unsigned __int64)reinforcementsSaves[6] )
        goto LABEL_129;
      *(_QWORD *)&reinforcementsSaves[2 * v196] = v201;
      sub_B52920(
        (BattleServantConfConponent_o *)&reinforcementsSaves[v197],
        (System_Int32_array **)v201,
        v202,
        v203,
        v204,
        v205,
        v206,
        v207);
      v208 = v196 - 3;
      ++v196;
      v197 += 2LL;
    }
    while ( v208 < v195 );
  }
  GutsCount = (__int64)warBoardData->fields.playedStageReinforcementsList;
  if ( !GutsCount )
    goto LABEL_128;
  v209 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                  (System_Collections_Generic_List_int__o *)GutsCount,
                                  (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
  v288->fields.playedReinforcements = (struct System_Int32_array *)v209;
  sub_B52920(
    (BattleServantConfConponent_o *)&v288->fields.playedReinforcements,
    v209,
    v210,
    v211,
    v212,
    v213,
    v214,
    v215);
  listUiData = warBoardData->fields.listUiData;
  if ( !listUiData )
    goto LABEL_128;
  v217 = listUiData->fields._size;
  v218 = (System_Int32_array **)sub_B5299C(WarBoardUiData_SaveData___TypeInfo, (unsigned int)v217);
  v288->fields.uiDataSaves = (struct WarBoardUiData_SaveData_array *)v218;
  sub_B52920((BattleServantConfConponent_o *)&v288->fields.uiDataSaves, v218, v219, v220, v221, v222, v223, v224);
  if ( v217 >= 1 )
  {
    v225 = v217;
    v226 = 4LL;
    v227 = 8LL;
    do
    {
      v228 = warBoardData->fields.listUiData;
      if ( !v228 )
        goto LABEL_128;
      uiDataSaves = (unsigned int *)v288->fields.uiDataSaves;
      if ( v226 - 4 >= (unsigned __int64)(unsigned int)v228->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v230 = (WarBoardUiData_o *)*((_QWORD *)&v228->fields._items->obj.klass + v226);
      v231 = (WarBoardUiData_SaveData_o *)sub_B52A54(WarBoardUiData_SaveData_TypeInfo);
      WarBoardUiData_SaveData___ctor_20325780(v231, v230, 0LL);
      if ( !uiDataSaves )
        goto LABEL_128;
      if ( v231 )
      {
        GutsCount = sub_B52A44(v231, *(_QWORD *)(*(_QWORD *)uiDataSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v226 - 4 >= (unsigned __int64)uiDataSaves[6] )
        goto LABEL_129;
      *(_QWORD *)&uiDataSaves[2 * v226] = v231;
      sub_B52920(
        (BattleServantConfConponent_o *)&uiDataSaves[v227],
        (System_Int32_array **)v231,
        v232,
        v233,
        v234,
        v235,
        v236,
        v237);
      v238 = v226 - 3;
      ++v226;
      v227 += 2LL;
    }
    while ( v238 < v225 );
  }
  v239 = warBoardData->fields.serverData;
  if ( !v239 )
    goto LABEL_128;
  v240 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v239->fields.squareIndexInfo,
           (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
  v241 = (System_Int32_array **)sub_B5299C(WarBoardSquareIndexData_SaveData___TypeInfo, (unsigned int)v240);
  v288->fields.squareIndexInfo = (struct WarBoardSquareIndexData_SaveData_array *)v241;
  sub_B52920((BattleServantConfConponent_o *)&v288->fields.squareIndexInfo, v241, v242, v243, v244, v245, v246, v247);
  if ( v240 >= 1 )
  {
    v248 = 0LL;
    v249 = v240;
    v250 = 8LL;
    do
    {
      v251 = warBoardData->fields.serverData;
      if ( !v251 )
        goto LABEL_128;
      squareIndexInfo = v251->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        goto LABEL_128;
      if ( v248 >= squareIndexInfo->max_length )
        goto LABEL_129;
      v253 = (unsigned int *)v288->fields.squareIndexInfo;
      v254 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v250 * 4);
      v255 = (WarBoardSquareIndexData_SaveData_o *)sub_B52A54(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_20320752(v255, v254, 0LL);
      if ( !v253 )
        goto LABEL_128;
      if ( v255 )
      {
        GutsCount = sub_B52A44(v255, *(_QWORD *)(*(_QWORD *)v253 + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v248 >= v253[6] )
        goto LABEL_129;
      *(_QWORD *)&v253[v250] = v255;
      sub_B52920(
        (BattleServantConfConponent_o *)&v253[v250],
        (System_Int32_array **)v255,
        v256,
        v257,
        v258,
        v259,
        v260,
        v261);
      ++v248;
      v250 += 2LL;
    }
    while ( (__int64)v248 < v249 );
  }
  v262 = warBoardData->fields.serverData;
  if ( !v262 )
    goto LABEL_128;
  v263 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v262->fields.bossBattleInfo,
           (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v264 = (System_Int32_array **)sub_B5299C(WarBoardBossBattleData_SaveData___TypeInfo, (unsigned int)v263);
  v288->fields.bossBattleInfo = (struct WarBoardBossBattleData_SaveData_array *)v264;
  sub_B52920((BattleServantConfConponent_o *)&v288->fields.bossBattleInfo, v264, v265, v266, v267, v268, v269, v270);
  if ( v263 >= 1 )
  {
    v271 = 0LL;
    v272 = v263;
    v273 = 8LL;
    do
    {
      v274 = warBoardData->fields.serverData;
      if ( !v274 )
        goto LABEL_128;
      bossBattleInfo = v274->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        goto LABEL_128;
      if ( v271 >= bossBattleInfo->max_length )
        goto LABEL_129;
      v276 = (unsigned int *)v288->fields.bossBattleInfo;
      v277 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v273 * 4);
      v278 = (WarBoardBossBattleData_SaveData_o *)sub_B52A54(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_22177032(v278, v277, 0LL);
      if ( !v276 )
        goto LABEL_128;
      if ( v278 )
      {
        GutsCount = sub_B52A44(v278, *(_QWORD *)(*(_QWORD *)v276 + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v271 >= v276[6] )
        goto LABEL_129;
      *(_QWORD *)&v276[v273] = v278;
      sub_B52920(
        (BattleServantConfConponent_o *)&v276[v273],
        (System_Int32_array **)v278,
        v279,
        v280,
        v281,
        v282,
        v283,
        v284);
      ++v271;
      v273 += 2LL;
    }
    while ( (__int64)v271 < v272 );
  }
  ContinueConsumeType_k__BackingField = warBoardData->fields._ContinueConsumeType_k__BackingField;
  *(_WORD *)&v288->fields.isContinue = 0;
  v288->fields.continueConsumeType = ContinueConsumeType_k__BackingField;
  v288->fields.localSaveTiming = warBoardData->fields.localSaveTiming;
}


void __fastcall WarBoardData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE8E9 & 1) == 0 )
  {
    sub_B52984(&WarBoardData___c_TypeInfo);
    byte_42AE8E9 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, x);
  return x->fields.squareIndex - y->fields.squareIndex;
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_1(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_2(
        WarBoardData___c_o *this,
        WarBoardActionPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


int32_t __fastcall WarBoardData___c____ctor_b__77_3(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.forceId;
}


int32_t __fastcall WarBoardData___c____ctor_b__77_4(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.groupId;
}


bool __fastcall WarBoardData___c____ctor_b__77_9(
        WarBoardData___c_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.isReceived;
}


BattleBuffData_o *__fastcall WarBoardData___c___BuffTurnProgressing_b__191_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  if ( !p )
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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

  if ( (byte_42AE8EB & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AE8EB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
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
    sub_B52A5C(this, 0LL);
  return !x->fields._isDead_k__BackingField && WarBoardPieceData__get_isEnemyServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetAlivePieces_b__107_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return !x->fields._isDead_k__BackingField;
}


bool __fastcall WarBoardData___c___GetAlivePlayerGroupServantPieces_b__109_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return !x->fields._isDead_k__BackingField && WarBoardPieceData__get_isPlayerServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetAliveServantPieces_b__108_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return !x->fields._isDead_k__BackingField && WarBoardPieceData__get_isServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetEditableServantPieces_b__120_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return WarBoardPieceData__get_isPlayerServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetHoldReinforcements_b__188_0(
        WarBoardData___c_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields._holdNum_k__BackingField < 1;
}


int32_t __fastcall WarBoardData___c___GetInRangeSquareIndecies_b__123_0(
        WarBoardData___c_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.squareIndex;
}


bool __fastcall WarBoardData___c___GetPlayerMasterPiece_b__104_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return WarBoardPieceData__get_isPlayerMaster(x, 0LL);
}


bool __fastcall WarBoardData___c___GetPlayerPieces_b__121_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return WarBoardPieceData__get_isPlayerGroup(x, 0LL) && x->fields._iconId_k__BackingField != 0;
}


bool __fastcall WarBoardData___c___IsReachableWinConditions_b__95_0(
        WarBoardData___c_o *this,
        System_Collections_Generic_KeyValuePair_int__bool__o status,
        const MethodInfo *method)
{
  bool value; // x19^4

  value = status.fields.value;
  if ( (byte_42AE8EA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    byte_42AE8EA = 1;
  }
  return value;
}


int32_t __fastcall WarBoardData___c___SetContinue_b__82_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields._index_k__BackingField;
}


bool __fastcall WarBoardData___c___SetPlayerMasterUserEquip_b__144_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return WarBoardPieceData__get_isPlayerMaster(x, 0LL);
}


void __fastcall WarBoardData___c___SetRequest_b__156_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  WarBoardPieceData__SetServarData(x, 0LL);
}


System_String_o *__fastcall WarBoardData___c___SetRequest_b__156_1(
        WarBoardData___c_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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

  if ( (byte_42AE8EC & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE8EC = 1;
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
    sub_B52A5C(v4, v5);
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
    sub_B52A5C(this, n);
  }
  WarBoardServantPieceBuffTurnComponent__UpdateDisp((WarBoardServantPieceBuffTurnComponent_o *)this, 1, 0LL);
}


int32_t __fastcall WarBoardData___c___UpdateCurrentPartyCost_b__143_0(
        WarBoardData___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return UserServantEntity__getCost(x, 0LL);
}


bool __fastcall WarBoardData___c___get_PlayerMasterUserEquipId_b__62_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
  if ( (byte_42AE8ED & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass118_0_o *)sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    byte_42AE8ED = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_42AE8EE & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass119_0_o *)sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    byte_42AE8EE = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  return !x->fields._isDead_k__BackingField
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, 0LL);
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
  DataMasterBase_WarMaster__WarEntity__int__o *svtMaster; // x20
  __int64 v6; // x19
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_42AE8EF & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (WarBoardData___c__DisplayClass143_0_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE8EF = 1;
  }
  if ( !x )
    goto LABEL_10;
  svtMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v4->fields.svtMaster;
  v7 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (WarBoardData___c__DisplayClass143_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                    v9,
                                                    0LL);
  if ( !svtMaster
    || (this = (WarBoardData___c__DisplayClass143_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          svtMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, 0LL);
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
  WebViewManager_o *Instance; // x0
  System_Action_bool__o *_9__2; // x21
  WarBoardManager_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  int32_t key; // w0
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x8
  int32_t v14; // w19
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_42AE8F0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_bool___ctor__);
    sub_B52984(&System_Action_bool__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Value__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__);
    byte_42AE8F0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (WarBoardManager_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_bool__o *)sub_B52A54(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__,
      (const MethodInfo_2623838 *)Method_System_Action_bool___ctor__);
    this->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  key = System_Linq_Enumerable__First_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.consumedPieceActionPointDict,
          (const MethodInfo_1B61620 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____).fields.key;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  v14 = key;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_1B61620 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  Only = *(System_Collections_ObjectModel_ReadOnlyCollection_T__o **)&KeyValuePair_int__object.fields.key;
  if ( !KeyValuePair_int__object.fields.value
    || (Only = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                 (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)KeyValuePair_int__object.fields.value,
                 (const MethodInfo_2FF1884 *)Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__),
        !v5) )
  {
    sub_B52A5C(Only, value);
  }
  WarBoardManager__ShowConsumedPieceActionPointPopup(
    v5,
    _9__2,
    v14,
    (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__o *)Only,
    0LL);
}


void __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__2(
        WarBoardData___c__DisplayClass154_0_o *this,
        bool _,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  System_Action_o *_9__3; // x22
  WarBoardManager_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42AE8F1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__);
    byte_42AE8F1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v7 = (WarBoardManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !v7 )
    sub_B52A5C(Instance, v5);
  WarBoardManager__HideConsumedPieceActionPointPopup(v7, _9__3, 0LL);
}


void __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__3(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x20
  WarBoardData_o *_4__this; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_42AE8F2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__);
    sub_B52984(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__);
    byte_42AE8F2 = 1;
  }
  this->fields.consumedPiecePopupClose = 1;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_1B61620 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  _4__this = *(WarBoardData_o **)&KeyValuePair_int__object.fields.key;
  if ( !consumedPieceActionPointDict
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)consumedPieceActionPointDict,
          KeyValuePair_int__object.fields.key,
          (const MethodInfo_2F296E4 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(_4__this, value);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, x);
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
  WarBoardData___c__DisplayClass189_1_o *v4; // x19
  struct WarBoardData___c__DisplayClass189_0_o *CS___8__locals1; // x8
  struct WarBoardStageReinforcementsEntity_o *stageEntity; // x8
  System_Int32_array *reinforcementsIdx; // x20
  System_Func_int__bool__o *_9__2; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v4 = this;
  if ( (byte_42AE8F3 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    this = (WarBoardData___c__DisplayClass189_1_o *)sub_B52984(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__);
    byte_42AE8F3 = 1;
  }
  if ( !x
    || (CS___8__locals1 = v4->fields.CS___8__locals1) == 0LL
    || (stageEntity = CS___8__locals1->fields.stageEntity) == 0LL )
  {
    sub_B52A5C(this, x);
  }
  if ( x->fields.stageReinforcementId != stageEntity->fields.id )
    return 0;
  reinforcementsIdx = x->fields.reinforcementsIdx;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
      (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
    v4->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&v4->fields.__9__2,
      (System_Int32_array **)_9__2,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return BasicHelper__Any_int__27531732(
           reinforcementsIdx,
           (System_Func_T__bool__o *)_9__2,
           (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, a);
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
      v8 = sub_B52A88(this);
      sub_B52A28(v8, 0LL);
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
    sub_B52A5C(this, x);
  return x->fields.forceId == piece->fields.forceId && x->fields.groupId == piece->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_0____ctor_b__6(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, x);
  return x->fields.treasureId == layout->fields.effectId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__12(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B52A5C(this, x);
  return x->fields.forceId == layout->fields.forceId && x->fields.groupId == layout->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__13(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, x);
  return x->fields.squareIndex == layout->fields.squareIndex;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__15(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, 0LL);
  return !x->fields._isDead_k__BackingField && x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}