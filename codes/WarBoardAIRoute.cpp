void __fastcall WarBoardAIRoute___ctor(
        WarBoardAIRoute_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  int v117; // w1
  int v118; // w2
  __int64 v119; // x3
  int v120; // w1
  int v121; // w2
  __int64 v122; // x3
  int v123; // w1
  int v124; // w2
  __int64 v125; // x3
  int v126; // w1
  int v127; // w2
  __int64 v128; // x3
  int v129; // w1
  int v130; // w2
  __int64 v131; // x3
  int v132; // w1
  int v133; // w2
  __int64 v134; // x3
  int v135; // w1
  int v136; // w2
  __int64 v137; // x3
  int v138; // w1
  int v139; // w2
  __int64 v140; // x3
  int v141; // w1
  int v142; // w2
  __int64 v143; // x3
  int v144; // w1
  int v145; // w2
  __int64 v146; // x3
  int v147; // w1
  int v148; // w2
  __int64 v149; // x3
  int v150; // w1
  int v151; // w2
  __int64 v152; // x3
  int v153; // w1
  int v154; // w2
  __int64 v155; // x3
  int v156; // w1
  int v157; // w2
  __int64 v158; // x3
  int v159; // w1
  int v160; // w2
  __int64 v161; // x3
  int v162; // w1
  int v163; // w2
  __int64 v164; // x3
  int v165; // w1
  int v166; // w2
  __int64 v167; // x3
  int v168; // w1
  int v169; // w2
  __int64 v170; // x3
  int v171; // w1
  int v172; // w2
  __int64 v173; // x3
  int v174; // w1
  int v175; // w2
  __int64 v176; // x3
  int v177; // w1
  int v178; // w2
  __int64 v179; // x3
  int v180; // w1
  int v181; // w2
  __int64 v182; // x3
  int v183; // w1
  int v184; // w2
  __int64 v185; // x3
  int v186; // w1
  int v187; // w2
  __int64 v188; // x3
  int v189; // w1
  int v190; // w2
  __int64 v191; // x3
  int v192; // w1
  int v193; // w2
  __int64 v194; // x3
  int v195; // w1
  int v196; // w2
  __int64 v197; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v198; // x20
  System_String_array **v199; // x2
  System_String_array **v200; // x3
  System_Boolean_array **v201; // x4
  System_Int32_array **v202; // x5
  System_Int32_array *v203; // x6
  System_Int32_array *v204; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v205; // x20
  System_String_array **v206; // x2
  System_String_array **v207; // x3
  System_Boolean_array **v208; // x4
  System_Int32_array **v209; // x5
  System_Int32_array *v210; // x6
  System_Int32_array *v211; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v212; // x20
  System_String_array **v213; // x2
  System_String_array **v214; // x3
  System_Boolean_array **v215; // x4
  System_Int32_array **v216; // x5
  System_Int32_array *v217; // x6
  System_Int32_array *v218; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v219; // x20
  System_String_array **v220; // x2
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v226; // x20
  System_String_array **v227; // x2
  System_String_array **v228; // x3
  System_Boolean_array **v229; // x4
  System_Int32_array **v230; // x5
  System_Int32_array *v231; // x6
  System_Int32_array *v232; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v233; // x20
  System_String_array **v234; // x2
  System_String_array **v235; // x3
  System_Boolean_array **v236; // x4
  System_Int32_array **v237; // x5
  System_Int32_array *v238; // x6
  System_Int32_array *v239; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v240; // x20
  System_String_array **v241; // x2
  System_String_array **v242; // x3
  System_Boolean_array **v243; // x4
  System_Int32_array **v244; // x5
  System_Int32_array *v245; // x6
  System_Int32_array *v246; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v247; // x20
  System_String_array **v248; // x2
  System_String_array **v249; // x3
  System_Boolean_array **v250; // x4
  System_Int32_array **v251; // x5
  System_Int32_array *v252; // x6
  System_Int32_array *v253; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v254; // x20
  System_String_array **v255; // x2
  System_String_array **v256; // x3
  System_Boolean_array **v257; // x4
  System_Int32_array **v258; // x5
  System_Int32_array *v259; // x6
  System_Int32_array *v260; // x7
  System_String_array **v261; // x2
  System_String_array **v262; // x3
  System_Boolean_array **v263; // x4
  System_Int32_array **v264; // x5
  System_Int32_array *v265; // x6
  System_Int32_array *v266; // x7
  WarBoardData_o *reinforcementsSaveList; // x0
  const MethodInfo *v268; // x1
  const MethodInfo *v269; // x1
  BattleServantConfConponent_o *p_aiIds; // x20
  struct System_Int32_array *aiIds; // x21
  System_Array_o *v272; // x21
  System_String_array **v273; // x2
  System_String_array **v274; // x3
  System_Boolean_array **v275; // x4
  System_Int32_array **v276; // x5
  System_Int32_array *v277; // x6
  System_Int32_array *v278; // x7
  __int64 v279; // x8
  unsigned __int64 v280; // x20
  int v281; // w19
  WarBoardAIRoute_PiecePersonality_o *v282; // x23
  WarBoardPieceData_o *Piece; // x0
  int32_t overwriteAiId_k__BackingField; // w22
  DataMasterBase_WarMaster__WarEntity__int__o *v285; // x22
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *stageNpcMaster; // x8
  WarBoardData_o *v287; // x27
  unsigned __int64 v288; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *actionTrandList; // x28
  WarBoardActionTrendEntity_o *v290; // x20
  WarBoardAIRoute_ActionTrendInfo_o *v291; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v292; // x22
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v293; // x8
  WarBoardData_o *v294; // x27
  unsigned __int64 v295; // x19
  WarBoardStageReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x27
  WarBoardReinforcementsMaster_o *v297; // x28
  WarBoardData_o *v298; // x20
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v300; // x22
  __int64 v301; // x3
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__c *klass; // x8
  WarBoardData_o *v303; // x22
  unsigned __int64 v304; // x10
  int32_t *p_offset; // x11
  __int64 v306; // x0
  __int64 v307; // x1
  const MethodInfo *v308; // x3
  __int64 v309; // x26
  __int64 v310; // x8
  unsigned __int64 v311; // x10
  int *v312; // x11
  __int64 v313; // x0
  __int64 v314; // x3
  __int64 v315; // x8
  unsigned __int64 v316; // x10
  int *v317; // x11
  __int64 v318; // x0
  __int64 v319; // x1
  int32_t *v320; // x22
  __int64 id; // x0
  __int64 v322; // x1
  _BOOL8 v323; // x0
  __int64 v324; // x1
  __int64 v325; // x0
  __int64 v326; // x1
  _BOOL8 v327; // x0
  __int64 v328; // x1
  __int64 v329; // x8
  unsigned __int64 v330; // x10
  int *v331; // x11
  __int64 v332; // x0
  _QWORD *p_klass; // x19
  BattleServantConfConponent_o *p_ratingBaseIds; // x20
  System_Array_o *v335; // x21
  System_String_array **v336; // x2
  System_String_array **v337; // x3
  System_Boolean_array **v338; // x4
  System_Int32_array **v339; // x5
  System_Int32_array *v340; // x6
  System_Int32_array *v341; // x7
  __int64 v342; // x8
  unsigned __int64 v343; // x21
  int32_t v344; // w20
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v345; // x20
  __int64 v346; // x22
  System_String_array **v347; // x2
  System_String_array **v348; // x3
  System_Boolean_array **v349; // x4
  System_Int32_array **v350; // x5
  System_Int32_array *v351; // x6
  System_Int32_array *v352; // x7
  int32_t buckets; // w20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v354; // x22
  WarBoardEvalValueSquare_CalcEval_o *v355; // x25
  _QWORD *p_image; // x19
  BattleServantConfConponent_o *p_tacticalIds; // x21
  System_Array_o *v358; // x20
  System_String_array **v359; // x2
  System_String_array **v360; // x3
  System_Boolean_array **v361; // x4
  System_Int32_array **v362; // x5
  System_Int32_array *v363; // x6
  System_Int32_array *v364; // x7
  __int64 v365; // x8
  unsigned __int64 v366; // x21
  int32_t v367; // w20
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v370; // x22
  const MethodInfo *v371; // x3
  System_String_array **v372; // x2
  System_String_array **v373; // x3
  System_Boolean_array **v374; // x4
  System_Int32_array **v375; // x5
  System_Int32_array *v376; // x6
  System_Int32_array *v377; // x7
  __int64 v378; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_tacticalTrendList; // [xsp+8h] [xbp-C8h]
  WarBoardStageNpcEntity_o *v380; // [xsp+10h] [xbp-C0h]
  WarBoardAIRoute_o *v381; // [xsp+18h] [xbp-B8h]
  struct System_Collections_Generic_List_WarBoardRatingBase__o **p_ratingBaseList; // [xsp+20h] [xbp-B0h]
  struct System_Int32_array *v383; // [xsp+28h] [xbp-A8h]
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o **p_dicRatingbaseCalcValue; // [xsp+30h] [xbp-A0h]
  unsigned __int64 key; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o **p_piecePersonalityDic; // [xsp+40h] [xbp-90h]
  DataManager_o *Instance; // [xsp+48h] [xbp-88h]
  int v388; // [xsp+50h] [xbp-80h]
  int v389; // [xsp+54h] [xbp-7Ch]
  WarBoardReinforcementsEntity_o *v390; // [xsp+58h] [xbp-78h] BYREF
  WarBoardStageReinforcementsEntity_o *v391; // [xsp+60h] [xbp-70h] BYREF
  WarEntity_o *v392; // [xsp+68h] [xbp-68h] BYREF
  WarEntity_o *v393; // [xsp+70h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF
  System_RuntimeFieldHandle_o v395; // 0:w1.4
  System_RuntimeFieldHandle_o v396; // 0:w1.4
  System_RuntimeFieldHandle_o v397; // 0:w1.4

  if ( (byte_42E68E1 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, (_DWORD)npc, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int____68811968, v6, v7, v8);
    sub_B5D5C4(&WarBoardEvalValueSquare_CalcEval_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardAIMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v27, v28, v29);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v30, v31, v32);
    sub_B5D5C4(&DataManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__,
      v36,
      v37,
      v38);
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__,
      v39,
      v40,
      v41);
    sub_B5D5C4(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__, v42, v43, v44);
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__,
      v45,
      v46,
      v47);
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__,
      v48,
      v49,
      v50);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__,
      v51,
      v52,
      v53);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__,
      v54,
      v55,
      v56);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__,
      v57,
      v58,
      v59);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__,
      v60,
      v61,
      v62);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__,
      v63,
      v64,
      v65);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__,
      v66,
      v67,
      v68);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__,
      v69,
      v70,
      v71);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__,
      v72,
      v73,
      v74);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__, v75, v76, v77);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__,
      v78,
      v79,
      v80);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo, v81, v82, v83);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo, v84, v85, v86);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo,
      v87,
      v88,
      v89);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo, v90, v91, v92);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo, v93, v94, v95);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo, v96, v97, v98);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v99, v100, v101);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v102, v103, v104);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v105, v106, v107);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v108, v109, v110);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, v111, v112, v113);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, v114, v115, v116);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v117, v118, v119);
    sub_B5D5C4(&int___TypeInfo, v120, v121, v122);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v123, v124, v125);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v126, v127, v128);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__, v129, v130, v131);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__, v132, v133, v134);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__, v135, v136, v137);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__, v138, v139, v140);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v141, v142, v143);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__, v144, v145, v146);
    sub_B5D5C4(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v147, v148, v149);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo, v150, v151, v152);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo, v153, v154, v155);
    sub_B5D5C4(&WarBoardAIRoute_PiecePersonality_TypeInfo, v156, v157, v158);
    sub_B5D5C4(&ShortestDistanceFromAllyMaster_TypeInfo, v159, v160, v161);
    sub_B5D5C4(&ShortestDistanceFromAllyServant_TypeInfo, v162, v163, v164);
    sub_B5D5C4(&ShortestDistanceFromEnemyMaster_TypeInfo, v165, v166, v167);
    sub_B5D5C4(&ShortestDistanceFromEnemyServant_TypeInfo, v168, v169, v170);
    sub_B5D5C4(&ShortestDistanceFromItem_TypeInfo, v171, v172, v173);
    sub_B5D5C4(&ShortestDistanceFromPrioritySpace_TypeInfo, v174, v175, v176);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v177, v178, v179);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v180, v181, v182);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384,
      v183,
      v184,
      v185);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49,
      v186,
      v187,
      v188);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72,
      v189,
      v190,
      v191);
    sub_B5D5C4(&Method_WarBoardAIRoute___ctor_b__42_0__, v192, v193, v194);
    sub_B5D5C4(&WarBoardAiTargetCacher_TypeInfo, v195, v196, v197);
    byte_42E68E1 = 1;
  }
  v393 = 0LL;
  entity = 0LL;
  v391 = 0LL;
  v392 = 0LL;
  v390 = 0LL;
  v389 = 0;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v198 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v198,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v198;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tacticalTrendList,
    (System_Int32_array **)v198,
    v199,
    v200,
    v201,
    v202,
    v203,
    v204);
  v205 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v205,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v205;
  p_ratingBaseList = &this->fields.ratingBaseList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.ratingBaseList,
    (System_Int32_array **)v205,
    v206,
    v207,
    v208,
    v209,
    v210,
    v211);
  v212 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v212,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v212;
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o **)&this->fields.piecePersonalityDic;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.piecePersonalityDic,
    (System_Int32_array **)v212,
    v213,
    v214,
    v215,
    v216,
    v217,
    v218);
  v219 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v219,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v219;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.allRouteList,
    (System_Int32_array **)v219,
    v220,
    v221,
    v222,
    v223,
    v224,
    v225);
  v226 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B5D694(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v226,
    (const MethodInfo_2EE7E28 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v226;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyAdvantagePieceData,
    (System_Int32_array **)v226,
    v227,
    v228,
    v229,
    v230,
    v231,
    v232);
  v233 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B5D694(System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v233,
    (const MethodInfo_2EC4F58 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v233;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dictionaryCreateRouteDataEvalValue,
    (System_Int32_array **)v233,
    v234,
    v235,
    v236,
    v237,
    v238,
    v239);
  v240 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B5D694(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v240,
    (const MethodInfo_2EE7E28 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v240;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyDesignationItem,
    (System_Int32_array **)v240,
    v241,
    v242,
    v243,
    v244,
    v245,
    v246);
  v247 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B5D694(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v247,
    (const MethodInfo_2EE7E28 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = v247;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyTarget,
    (System_Int32_array **)v247,
    v248,
    v249,
    v250,
    v251,
    v252,
    v253);
  v254 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v254,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v254;
  p_dicRatingbaseCalcValue = &this->fields.dicRatingbaseCalcValue;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicRatingbaseCalcValue,
    (System_Int32_array **)v254,
    v255,
    v256,
    v257,
    v258,
    v259,
    v260);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.npcData,
    (System_Int32_array **)npc,
    v261,
    v262,
    v263,
    v264,
    v265,
    v266);
  if ( !npc )
    goto LABEL_130;
  this->fields.forceId = npc->fields.forceId;
  this->fields.groupId = npc->fields.groupId;
  this->fields.pickValue = npc->fields.pickValue;
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  reinforcementsSaveList = (WarBoardData_o *)reinforcementsSaveList[1].fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  this->fields.moveCost = WarBoardData__GetMoveCost(
                            reinforcementsSaveList,
                            this->fields.forceId,
                            this->fields.groupId,
                            0,
                            0,
                            0LL);
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  reinforcementsSaveList = (WarBoardData_o *)reinforcementsSaveList[1].fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  this->fields.masterMoveCost = WarBoardData__GetMoveCost(
                                  reinforcementsSaveList,
                                  this->fields.forceId,
                                  this->fields.groupId,
                                  0,
                                  1,
                                  0LL);
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  reinforcementsSaveList = (WarBoardData_o *)reinforcementsSaveList[1].fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  this->fields.attackCost = WarBoardData__GetAttackCost(
                              reinforcementsSaveList,
                              this->fields.forceId,
                              this->fields.groupId,
                              0LL);
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  reinforcementsSaveList = (WarBoardData_o *)reinforcementsSaveList[1].fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  this->fields.wallAttackCost = WarBoardData__GetWallAttackCost(
                                  reinforcementsSaveList,
                                  this->fields.forceId,
                                  this->fields.groupId,
                                  0LL);
  WarBoardAIRoute__Clear(this, v269);
  reinforcementsSaveList = (WarBoardData_o *)this->fields.piecePersonalityDic;
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)reinforcementsSaveList,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  reinforcementsSaveList = (WarBoardData_o *)*p_ratingBaseList;
  if ( !*p_ratingBaseList )
    goto LABEL_130;
  p_tacticalTrendList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.tacticalTrendList;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)reinforcementsSaveList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__);
  v380 = npc;
  p_aiIds = (BattleServantConfConponent_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v272 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 4LL);
    v395.fields.value = Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v272, v395, 0LL);
    p_aiIds->klass = (BattleServantConfConponent_c *)v272;
    sub_B5D560(p_aiIds, (System_Int32_array **)v272, v273, v274, v275, v276, v277, v278);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_130;
  }
  v279 = *(_QWORD *)&aiIds->max_length;
  v381 = this;
  if ( (int)v279 >= 1 )
  {
    v280 = 0LL;
    v383 = aiIds;
    do
    {
      if ( v280 >= (unsigned int)v279 )
        goto LABEL_131;
      v281 = aiIds->m_Items[v280 + 1];
      v282 = (WarBoardAIRoute_PiecePersonality_o *)sub_B5D694(WarBoardAIRoute_PiecePersonality_TypeInfo);
      WarBoardAIRoute_PiecePersonality___ctor(v282, 0LL);
      reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !reinforcementsSaveList )
        goto LABEL_130;
      reinforcementsSaveList = (WarBoardData_o *)reinforcementsSaveList[1].fields.reinforcementsSaveList;
      if ( !reinforcementsSaveList )
        goto LABEL_130;
      key = v280;
      Piece = WarBoardData__GetPiece(reinforcementsSaveList, this->fields.forceId, this->fields.groupId, v280, 1, 0LL);
      if ( Piece
        && (overwriteAiId_k__BackingField = Piece->fields._overwriteAiId_k__BackingField,
            overwriteAiId_k__BackingField > 0)
        || (overwriteAiId_k__BackingField = v281, v281 >= 1) )
      {
        reinforcementsSaveList = (WarBoardData_o *)Instance;
        if ( !Instance )
          goto LABEL_130;
        reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     Instance,
                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !reinforcementsSaveList )
          goto LABEL_130;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList,
               &entity,
               overwriteAiId_k__BackingField,
               (const MethodInfo_23FAE6C *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       Instance,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
          if ( !entity )
            goto LABEL_130;
          v285 = (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList;
          reinforcementsSaveList = (WarBoardData_o *)WarBoardAIEntity__GetActionTrendIds(
                                                       (WarBoardAIEntity_o *)entity,
                                                       v268);
          if ( !reinforcementsSaveList )
            goto LABEL_130;
          stageNpcMaster = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)reinforcementsSaveList->fields.stageNpcMaster;
          v287 = reinforcementsSaveList;
          if ( (int)stageNpcMaster >= 1 )
          {
            v288 = 0LL;
            while ( v288 < (unsigned int)stageNpcMaster )
            {
              if ( !v285 )
                goto LABEL_130;
              reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                           v285,
                                                           &v393,
                                                           *((_DWORD *)&v287->fields.npcEntityDict + v288),
                                                           (const MethodInfo_23FAE6C *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)reinforcementsSaveList & 1) != 0 )
              {
                if ( !v282 )
                  goto LABEL_130;
                actionTrandList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v282->fields.actionTrandList;
                v290 = (WarBoardActionTrendEntity_o *)v393;
                v291 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B5D694(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
                WarBoardAIRoute_ActionTrendInfo___ctor(v291, v290, 0LL);
                if ( !actionTrandList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  actionTrandList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v291,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
              }
              LODWORD(stageNpcMaster) = v287->fields.stageNpcMaster;
              if ( (__int64)++v288 >= (int)stageNpcMaster )
                goto LABEL_38;
            }
LABEL_131:
            v378 = sub_B5D6C8(reinforcementsSaveList);
            sub_B5D668(v378, 0LL);
          }
LABEL_38:
          reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       Instance,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_130;
          v292 = (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList;
          reinforcementsSaveList = (WarBoardData_o *)WarBoardAIEntity__GetRatingOffsetIds(
                                                       (WarBoardAIEntity_o *)entity,
                                                       v268);
          this = v381;
          if ( !reinforcementsSaveList )
            goto LABEL_130;
          v293 = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)reinforcementsSaveList->fields.stageNpcMaster;
          v294 = reinforcementsSaveList;
          if ( (int)v293 >= 1 )
          {
            v295 = 0LL;
            while ( v295 < (unsigned int)v293 )
            {
              if ( !v292 )
                goto LABEL_130;
              reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                           v292,
                                                           &v392,
                                                           *((_DWORD *)&v294->fields.npcEntityDict + v295),
                                                           (const MethodInfo_23FAE6C *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)reinforcementsSaveList & 1) != 0 )
              {
                if ( !v282 )
                  goto LABEL_130;
                reinforcementsSaveList = (WarBoardData_o *)v282->fields.ratingOffsetList;
                if ( !reinforcementsSaveList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)reinforcementsSaveList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v392,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
              }
              LODWORD(v293) = v294->fields.stageNpcMaster;
              if ( (__int64)++v295 >= (int)v293 )
                goto LABEL_49;
            }
            goto LABEL_131;
          }
        }
      }
LABEL_49:
      reinforcementsSaveList = (WarBoardData_o *)*p_piecePersonalityDic;
      if ( !*p_piecePersonalityDic )
        goto LABEL_130;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)reinforcementsSaveList,
        key,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v282,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      aiIds = v383;
      v280 = key + 1;
      LODWORD(v279) = v383->max_length;
    }
    while ( (__int64)(key + 1) < (int)v279 );
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v297 = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  v298 = (WarBoardData_o *)reinforcementsSaveList[1].fields.reinforcementsSaveList;
  if ( !v298 )
    goto LABEL_130;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)v298->fields.pieces;
  v300 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v300,
    (Il2CppObject *)this,
    Method_WarBoardAIRoute___ctor_b__42_0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  reinforcementsSaveList = (WarBoardData_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                               pieces,
                                               (System_Func_TSource__bool__o *)v300,
                                               (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  klass = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__c *)reinforcementsSaveList->klass;
  v303 = reinforcementsSaveList;
  if ( *(_WORD *)&reinforcementsSaveList->klass->_2.bitflags1 )
  {
    v304 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      ++v304;
      p_offset += 4;
      if ( v304 >= *(unsigned __int16 *)&reinforcementsSaveList->klass->_2.bitflags1 )
        goto LABEL_61;
    }
    v306 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_61:
    v306 = sub_AF54C0(
             reinforcementsSaveList,
             System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo,
             0LL,
             v301);
  }
  v309 = (*(__int64 (__fastcall **)(WarBoardData_o *, _QWORD))v306)(v303, *(_QWORD *)(v306 + 8));
  if ( !v309 )
    sub_B5D69C(0LL, v307);
  while ( 1 )
  {
    v310 = *(_QWORD *)v309;
    if ( *(_WORD *)(*(_QWORD *)v309 + 298LL) )
    {
      v311 = 0LL;
      v312 = (int *)(*(_QWORD *)(v310 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v312 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v311;
        v312 += 4;
        if ( v311 >= *(unsigned __int16 *)(*(_QWORD *)v309 + 298LL) )
          goto LABEL_68;
      }
      v313 = v310 + 16LL * *v312 + 312;
    }
    else
    {
LABEL_68:
      v313 = sub_AF54C0(v309, System_Collections_IEnumerator_TypeInfo, 0LL, v308);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v313)(v309, *(_QWORD *)(v313 + 8)) & 1) == 0 )
      break;
    v315 = *(_QWORD *)v309;
    if ( *(_WORD *)(*(_QWORD *)v309 + 298LL) )
    {
      v316 = 0LL;
      v317 = (int *)(*(_QWORD *)(v315 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v317 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        ++v316;
        v317 += 4;
        if ( v316 >= *(unsigned __int16 *)(*(_QWORD *)v309 + 298LL) )
          goto LABEL_75;
      }
      v318 = v315 + 16LL * *v317 + 312;
    }
    else
    {
LABEL_75:
      v318 = sub_AF54C0(v309, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL, v314);
    }
    v320 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v318)(v309, *(_QWORD *)(v318 + 8));
    if ( !v320 )
      sub_B5D69C(0LL, v319);
    if ( !*p_piecePersonalityDic )
      sub_B5D69C(0LL, v319);
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            *p_piecePersonalityDic,
            v320[7],
            (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__) )
    {
      id = WarBoardData__get_id(v298, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        sub_B5D69C(id, v322);
      v323 = WarBoardStageReinforcementsMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v391, id, v320[70], 0LL);
      if ( v323 )
      {
        if ( !v391 )
          sub_B5D69C(v323, v324);
        v325 = BasicHelper__IndexValue_int_(
                 v391->fields.reinforcementsIds,
                 v320[71],
                 -1,
                 (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
        if ( !v297 )
          sub_B5D69C(v325, v326);
        v327 = WarBoardReinforcementsMaster__TryGetEntity(v297, &v390, v325, 0LL);
        if ( v327 )
        {
          if ( !v390 )
            sub_B5D69C(v327, v328);
          WarBoardAIRoute__AddPiecePersonalityDic(this, v390->fields.aiId, v320[7], v308);
        }
      }
    }
  }
  v388 = 833;
  ++v389;
  v329 = *(_QWORD *)v309;
  if ( *(_WORD *)(*(_QWORD *)v309 + 298LL) )
  {
    v330 = 0LL;
    v331 = (int *)(*(_QWORD *)(v329 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v331 - 1) != System_IDisposable_TypeInfo )
    {
      ++v330;
      v331 += 4;
      if ( v330 >= *(unsigned __int16 *)(*(_QWORD *)v309 + 298LL) )
        goto LABEL_91;
    }
    v332 = v329 + 16LL * *v331 + 312;
  }
  else
  {
LABEL_91:
    v332 = sub_AF54C0(v309, System_IDisposable_TypeInfo, 0LL, v314);
  }
  reinforcementsSaveList = (WarBoardData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v332)(
                                               v309,
                                               *(_QWORD *)(v332 + 8));
  if ( v389 && *(&v388 + v389 - 1) == 833 )
    --v389;
  p_ratingBaseIds = (BattleServantConfConponent_o *)&v380->fields.ratingBaseIds;
  p_klass = &v380->fields.ratingBaseIds->obj.klass;
  if ( !p_klass )
  {
    v335 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 6LL);
    v396.fields.value = Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v335, v396, 0LL);
    p_ratingBaseIds->klass = (BattleServantConfConponent_c *)v335;
    sub_B5D560(p_ratingBaseIds, (System_Int32_array **)v335, v336, v337, v338, v339, v340, v341);
    p_klass = &p_ratingBaseIds->klass->_1.image;
    if ( !p_ratingBaseIds->klass )
LABEL_130:
      sub_B5D69C(reinforcementsSaveList, v268);
  }
  v342 = p_klass[3];
  if ( (int)v342 >= 1 )
  {
    v343 = 0LL;
    while ( 2 )
    {
      if ( v343 >= (unsigned int)v342 )
        goto LABEL_131;
      reinforcementsSaveList = (WarBoardData_o *)Instance;
      if ( Instance )
      {
        v344 = *((_DWORD *)p_klass + v343 + 8);
        reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     Instance,
                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
        if ( reinforcementsSaveList )
        {
          reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList,
                                                       v344,
                                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
          if ( reinforcementsSaveList )
          {
            v345 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)reinforcementsSaveList;
            switch ( HIDWORD(reinforcementsSaveList->fields.stageEntity) )
            {
              case 0:
                v346 = sub_B5D694(ShortestDistanceFromAllyServant_TypeInfo);
                ShortestDistanceFromAllyServant___ctor((ShortestDistanceFromAllyServant_o *)v346, 0LL);
                if ( !v346 )
                  goto LABEL_130;
                goto LABEL_116;
              case 1:
                v346 = sub_B5D694(ShortestDistanceFromEnemyServant_TypeInfo);
                ShortestDistanceFromEnemyServant___ctor((ShortestDistanceFromEnemyServant_o *)v346, 0LL);
                if ( !v346 )
                  goto LABEL_130;
                goto LABEL_116;
              case 2:
                v346 = sub_B5D694(ShortestDistanceFromAllyMaster_TypeInfo);
                ShortestDistanceFromAllyMaster___ctor((ShortestDistanceFromAllyMaster_o *)v346, 0LL);
                if ( !v346 )
                  goto LABEL_130;
                goto LABEL_116;
              case 3:
                v346 = sub_B5D694(ShortestDistanceFromEnemyMaster_TypeInfo);
                ShortestDistanceFromEnemyMaster___ctor((ShortestDistanceFromEnemyMaster_o *)v346, 0LL);
                if ( !v346 )
                  goto LABEL_130;
                goto LABEL_116;
              case 4:
                v346 = sub_B5D694(ShortestDistanceFromItem_TypeInfo);
                ShortestDistanceFromItem___ctor((ShortestDistanceFromItem_o *)v346, 0LL);
                if ( !v346 )
                  goto LABEL_130;
                goto LABEL_116;
              case 5:
                v346 = sub_B5D694(ShortestDistanceFromPrioritySpace_TypeInfo);
                ShortestDistanceFromPrioritySpace___ctor((ShortestDistanceFromPrioritySpace_o *)v346, 0LL);
                if ( !v346 )
                  goto LABEL_130;
LABEL_116:
                *(_QWORD *)(v346 + 16) = v345;
                sub_B5D560(
                  (BattleServantConfConponent_o *)(v346 + 16),
                  (System_Int32_array **)v345,
                  v347,
                  v348,
                  v349,
                  v350,
                  v351,
                  v352);
                reinforcementsSaveList = (WarBoardData_o *)*p_ratingBaseList;
                if ( !*p_ratingBaseList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)reinforcementsSaveList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v346,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardRatingBase__Add__);
LABEL_118:
                buckets = (int32_t)v345->fields.buckets;
                v354 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)*p_dicRatingbaseCalcValue;
                v355 = (WarBoardEvalValueSquare_CalcEval_o *)sub_B5D694(WarBoardEvalValueSquare_CalcEval_TypeInfo);
                WarBoardEvalValueSquare_CalcEval___ctor(v355, 0LL);
                if ( !v354 )
                  goto LABEL_130;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  v354,
                  buckets,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v355,
                  (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
                LODWORD(v342) = *((_DWORD *)p_klass + 6);
                if ( (__int64)++v343 >= (int)v342 )
                  goto LABEL_120;
                continue;
              default:
                goto LABEL_118;
            }
          }
        }
      }
      goto LABEL_130;
    }
  }
LABEL_120:
  p_tacticalIds = (BattleServantConfConponent_o *)&v380->fields.tacticalIds;
  p_image = &v380->fields.tacticalIds->obj.klass;
  if ( !p_image )
  {
    v358 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 5LL);
    v397.fields.value = Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v358, v397, 0LL);
    p_tacticalIds->klass = (BattleServantConfConponent_c *)v358;
    sub_B5D560(p_tacticalIds, (System_Int32_array **)v358, v359, v360, v361, v362, v363, v364);
    p_image = &p_tacticalIds->klass->_1.image;
    if ( !p_tacticalIds->klass )
      goto LABEL_130;
  }
  v365 = p_image[3];
  if ( (int)v365 >= 1 )
  {
    v366 = 0LL;
    while ( v366 < (unsigned int)v365 )
    {
      reinforcementsSaveList = (WarBoardData_o *)Instance;
      if ( !Instance )
        goto LABEL_130;
      v367 = *((_DWORD *)p_image + v366 + 8);
      reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   Instance,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !reinforcementsSaveList )
        goto LABEL_130;
      reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList,
                                                   v367,
                                                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      if ( !*p_tacticalTrendList )
        goto LABEL_130;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_tacticalTrendList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)reinforcementsSaveList,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__);
      LODWORD(v365) = *((_DWORD *)p_image + 6);
      if ( (__int64)++v366 >= (int)v365 )
        goto LABEL_129;
    }
    goto LABEL_131;
  }
LABEL_129:
  forceId = v381->fields.forceId;
  groupId = v381->fields.groupId;
  v370 = (WarBoardAiTargetCacher_o *)sub_B5D694(WarBoardAiTargetCacher_TypeInfo);
  WarBoardAiTargetCacher___ctor(v370, forceId, groupId, v371);
  v381->fields.aiTargetCacher = v370;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v381->fields.aiTargetCacher,
    (System_Int32_array **)v370,
    v372,
    v373,
    v374,
    v375,
    v376,
    v377);
}


void __fastcall WarBoardAIRoute__AddPiecePersonalityDic(
        WarBoardAIRoute_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  WarBoardAIRoute___c__DisplayClass43_0_o *v55; // x20
  WarBoardAIEntity_o *Entity; // x0
  MethodInfo *v57; // x1
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x21
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *v59; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v61; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v62; // x23
  WarBoardAIRoute_PiecePersonality_o *v63; // x21
  struct System_Int32_array *actionTrendIds; // x8
  WarBoardAIEntity_o *v65; // x25
  unsigned __int64 v66; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *actionTrandList; // x26
  WarBoardActionTrendEntity_o *v68; // x27
  WarBoardAIRoute_ActionTrendInfo_o *v69; // x28
  struct System_Int32_array *v70; // x8
  WarBoardAIEntity_o *v71; // x22
  unsigned __int64 v72; // x19
  __int64 v73; // x0
  WarBoardAIEntity_o *v74; // [xsp+8h] [xbp-68h]
  WarBoardAIRoute_o *v75; // [xsp+18h] [xbp-58h]

  if ( (byte_42E68E2 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, aiId, pieceIndex, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardAIMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___, v13, v14, v15);
    sub_B5D5C4(&DataManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__, v19, v20, v21);
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__,
      v22,
      v23,
      v24);
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__,
      v25,
      v26,
      v27);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__,
      v28,
      v29,
      v30);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____, v31, v32, v33);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool___ctor__, v34, v35, v36);
    sub_B5D5C4(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v43, v44, v45);
    sub_B5D5C4(&WarBoardAIRoute_PiecePersonality_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__, v49, v50, v51);
    sub_B5D5C4(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo, v52, v53, v54);
    byte_42E68E2 = 1;
  }
  v55 = (WarBoardAIRoute___c__DisplayClass43_0_o *)sub_B5D694(WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass43_0___ctor(v55, 0LL);
  if ( !v55 )
    goto LABEL_32;
  v55->fields.pieceIndex = pieceIndex;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  v59 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)sub_B5D694(System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool____ctor(
    v59,
    (Il2CppObject *)v55,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    (const MethodInfo_27926E4 *)Method_System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool___ctor__);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v59,
         (const MethodInfo_1C99534 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v61 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v62 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v63 = (WarBoardAIRoute_PiecePersonality_o *)sub_B5D694(WarBoardAIRoute_PiecePersonality_TypeInfo);
  WarBoardAIRoute_PiecePersonality___ctor(v63, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  Entity = (WarBoardAIEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   Master_WarQuestSelectionMaster,
                                   aiId,
                                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_32;
  v74 = Entity;
  Entity = (WarBoardAIEntity_o *)WarBoardAIEntity__GetActionTrendIds(Entity, v57);
  if ( !Entity )
    goto LABEL_32;
  v75 = this;
  actionTrendIds = Entity->fields.actionTrendIds;
  v65 = Entity;
  if ( (int)actionTrendIds >= 1 )
  {
    v66 = 0LL;
    while ( v66 < (unsigned int)actionTrendIds )
    {
      if ( !v61 )
        goto LABEL_32;
      Entity = (WarBoardAIEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v61,
                                       *((_DWORD *)&v65->fields.ratingOffsetIds + v66),
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v63 )
          goto LABEL_32;
        actionTrandList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v63->fields.actionTrandList;
        v68 = (WarBoardActionTrendEntity_o *)Entity;
        v69 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B5D694(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v69, v68, 0LL);
        if ( !actionTrandList )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          actionTrandList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
      LODWORD(actionTrendIds) = v65->fields.actionTrendIds;
      if ( (__int64)++v66 >= (int)actionTrendIds )
        goto LABEL_20;
    }
LABEL_33:
    v73 = sub_B5D6C8(Entity);
    sub_B5D668(v73, 0LL);
  }
LABEL_20:
  Entity = (WarBoardAIEntity_o *)WarBoardAIEntity__GetRatingOffsetIds(v74, v57);
  if ( !Entity )
    goto LABEL_32;
  v70 = Entity->fields.actionTrendIds;
  v71 = Entity;
  if ( (int)v70 >= 1 )
  {
    v72 = 0LL;
    while ( v72 < (unsigned int)v70 )
    {
      if ( !v62 )
        goto LABEL_32;
      Entity = (WarBoardAIEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v62,
                                       *((_DWORD *)&v71->fields.ratingOffsetIds + v72),
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v63 )
          goto LABEL_32;
        v57 = (MethodInfo *)Entity;
        Entity = (WarBoardAIEntity_o *)v63->fields.ratingOffsetList;
        if ( !Entity )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Entity,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
      }
      LODWORD(v70) = v71->fields.actionTrendIds;
      if ( (__int64)++v72 >= (int)v70 )
        goto LABEL_30;
    }
    goto LABEL_33;
  }
LABEL_30:
  Entity = (WarBoardAIEntity_o *)v75->fields.piecePersonalityDic;
  if ( !Entity )
LABEL_32:
    sub_B5D69C(Entity, v57);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Entity,
    v55->fields.pieceIndex,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v63,
    (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
}


void __fastcall WarBoardAIRoute__BeforeCreateRouteData(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  int v110; // w1
  int v111; // w2
  __int64 v112; // x3
  int v113; // w1
  int v114; // w2
  __int64 v115; // x3
  int v116; // w1
  int v117; // w2
  __int64 v118; // x3
  int v119; // w1
  int v120; // w2
  __int64 v121; // x3
  int v122; // w1
  int v123; // w2
  __int64 v124; // x3
  int v125; // w1
  int v126; // w2
  __int64 v127; // x3
  int v128; // w1
  int v129; // w2
  __int64 v130; // x3
  int v131; // w1
  int v132; // w2
  __int64 v133; // x3
  int v134; // w1
  int v135; // w2
  __int64 v136; // x3
  int v137; // w1
  int v138; // w2
  __int64 v139; // x3
  int v140; // w1
  int v141; // w2
  __int64 v142; // x3
  int v143; // w1
  int v144; // w2
  __int64 v145; // x3
  int v146; // w1
  int v147; // w2
  __int64 v148; // x3
  int v149; // w1
  int v150; // w2
  __int64 v151; // x3
  int v152; // w1
  int v153; // w2
  __int64 v154; // x3
  int v155; // w1
  int v156; // w2
  __int64 v157; // x3
  int v158; // w1
  int v159; // w2
  __int64 v160; // x3
  int v161; // w1
  int v162; // w2
  __int64 v163; // x3
  int v164; // w1
  int v165; // w2
  __int64 v166; // x3
  int v167; // w1
  int v168; // w2
  __int64 v169; // x3
  int v170; // w1
  int v171; // w2
  __int64 v172; // x3
  int v173; // w1
  int v174; // w2
  __int64 v175; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *Instance; // x0
  const MethodInfo *v177; // x1
  _QWORD *v178; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v179; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v180; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v181; // x20
  __int64 v182; // x24
  int v183; // w8
  unsigned int v184; // w25
  int v185; // w8
  int32_t forceId; // w9
  __int64 v187; // x23
  System_Int32_array **v188; // x0
  WarBoardAIRoute_o *v189; // x25
  System_String_array **v190; // x2
  System_String_array **v191; // x3
  System_Boolean_array **v192; // x4
  System_Int32_array **v193; // x5
  System_Int32_array *v194; // x6
  System_Int32_array *v195; // x7
  System_Int32_array **v196; // x0
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_Int32_array **v203; // x1
  System_String_array **v204; // x2
  System_String_array **v205; // x3
  System_Boolean_array **v206; // x4
  System_Int32_array **v207; // x5
  System_Int32_array *v208; // x6
  System_Int32_array *v209; // x7
  System_Int32_array **v210; // x1
  System_String_array **v211; // x2
  System_String_array **v212; // x3
  System_Boolean_array **v213; // x4
  System_Int32_array **v214; // x5
  System_Int32_array *v215; // x6
  System_Int32_array *v216; // x7
  System_Int32_array **v217; // x1
  System_String_array **v218; // x2
  System_String_array **v219; // x3
  System_Boolean_array **v220; // x4
  System_Int32_array **v221; // x5
  System_Int32_array *v222; // x6
  System_Int32_array *v223; // x7
  System_Int32_array **v224; // x1
  System_String_array **v225; // x2
  System_String_array **v226; // x3
  System_Boolean_array **v227; // x4
  System_Int32_array **v228; // x5
  System_Int32_array *v229; // x6
  System_Int32_array *v230; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v231; // x23
  int32_t v232; // w19
  int32_t groupId; // w20
  WarBoardAIRoute_AIRouteMasterData_o *v234; // x21
  System_String_array **v235; // x2
  System_String_array **v236; // x3
  System_Boolean_array **v237; // x4
  System_Int32_array **v238; // x5
  System_Int32_array *v239; // x6
  System_Int32_array *v240; // x7
  System_Collections_Generic_Dictionary_int__uint__o *v241; // x19
  void **p_placePieceData; // x20
  System_String_array **v243; // x2
  System_String_array **v244; // x3
  System_Boolean_array **v245; // x4
  System_Int32_array **v246; // x5
  System_Int32_array *v247; // x6
  System_Int32_array *v248; // x7
  struct WarBoardPieceData_array *allAllyPiece; // x26
  int max_length; // w8
  signed int v251; // w9
  __int64 v252; // x0
  __int64 v253; // x0
  WarBoardPieceData_o *v254; // x8
  int32_t forceId_k__BackingField; // w8
  int32_t v256; // w9
  int32_t v257; // w1
  __int64 v258; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v260; // x20
  unsigned __int64 v261; // x10
  int *p_offset; // x11
  __int64 v263; // x0
  __int64 v264; // x1
  __int64 v265; // x3
  int v266; // w8
  unsigned int v267; // w9
  WarBoardActionTrendConditionEntity_o *v268; // x26
  struct System_Int32_array *conditionTypes; // x28
  __int64 v270; // x8
  unsigned __int64 v271; // x27
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x0
  const MethodInfo *v274; // x2
  TargetDetector_o *DetectorByTrendKey; // x0
  const MethodInfo *v276; // x1
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v277; // x19
  const MethodInfo *v278; // x3
  WarBoardAiTargetCacher_o *v279; // x19
  const MethodInfo *v280; // x1
  int64_t v281; // x0
  const MethodInfo *v282; // x4
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicIndividualityPutSqareIndex; // x19
  int64_t v284; // x22
  const MethodInfo *v285; // x1
  int64_t v286; // x25
  WarBoardAIRoute_TargetData_o *v287; // x23
  __int64 v288; // x0
  __int64 v289; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  const MethodInfo *v291; // x1
  int32_t squareIndex; // w19
  unsigned int v293; // w24
  WarBoardAIRoute___c__DisplayClass45_0_o *v294; // x21
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *dicSquareIndexKeyItemData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v297; // x22
  WarBoardEvalValueSquare_EvalValueSquare_o *v298; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v299; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x22
  WarBoardAIRoute_o *v301; // x0
  const MethodInfo *v302; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicSquarePutSqareIndex; // x19
  int64_t v304; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v306; // x22
  WarBoardSquareData_o *v307; // x21
  int64_t v308; // x22
  WarBoardAIRoute_TargetData_o *v309; // x19
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v310; // x21
  const MethodInfo *v311; // x1
  int64_t v312; // x0
  __int64 v313; // x8
  unsigned __int64 v314; // x10
  int *v315; // x11
  __int64 v316; // x0
  __int64 v317; // x3
  __int64 v318; // x8
  unsigned __int64 v319; // x10
  int *v320; // x11
  __int64 v321; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v322; // x0
  __int64 v323; // x1
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x20
  int v325; // w19
  __int64 v326; // x8
  unsigned __int64 v327; // x10
  int *v328; // x11
  __int64 v329; // x21
  __int64 v330; // x0
  WarBoardAiTargetCacher_o *v331; // x20
  WarBoardAIRoute___c_c *v332; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__45_0; // x19
  Il2CppObject *v335; // x21
  struct WarBoardAIRoute___c_StaticFields *v336; // x0
  System_String_array **v337; // x2
  System_String_array **v338; // x3
  System_Boolean_array **v339; // x4
  System_Int32_array **v340; // x5
  System_Int32_array *v341; // x6
  System_Int32_array *v342; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v343; // x0
  const MethodInfo *v344; // x2
  WarBoardAIRoute_AdvantagePieceData_o *v345; // x20
  struct WarBoardPieceData_array *v346; // x22
  int v347; // w8
  int32_t v348; // w21
  unsigned int v349; // w23
  __int64 v350; // x8
  __int64 v351; // x24
  int32_t ClassId; // w19
  float Magnification; // s9
  float v354; // s10
  float v355; // s8
  bool v356; // cc
  float v357; // s9
  char v358; // w19
  int v359; // w8
  const MethodInfo *v360; // x1
  __int64 v361; // x0
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+8h] [xbp-118h]
  struct WarBoardPieceData_array *v363; // [xsp+10h] [xbp-110h]
  void **p_aiRouteMasterData; // [xsp+20h] [xbp-100h]
  int v365; // [xsp+2Ch] [xbp-F4h]
  int v366; // [xsp+30h] [xbp-F0h]
  signed int v367; // [xsp+34h] [xbp-ECh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-E8h]
  __int64 v369; // [xsp+40h] [xbp-E0h]
  unsigned int v370; // [xsp+54h] [xbp-CCh]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v372; // [xsp+60h] [xbp-C0h]
  WarBoardAIRoute_o *v373; // [xsp+68h] [xbp-B8h]
  WarBoardAIRoute_DesignationItemData_o *v374; // [xsp+78h] [xbp-A8h]
  WarBoardAIRoute_PutSquareTarget_o *v375; // [xsp+88h] [xbp-98h]
  _DWORD v376[1]; // [xsp+90h] [xbp-90h]
  int v377; // [xsp+94h] [xbp-8Ch]
  bool notSquareTarget; // [xsp+98h] [xbp-88h] BYREF
  int32_t condType; // [xsp+9Ch] [xbp-84h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_42E68E4 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIRoute_AIRouteMasterData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WarBoardAIRoute_AdvantagePieceData_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&WarBoardAIRoute_DesignationItemData_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, v20, v21, v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__,
      v23,
      v24,
      v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__,
      v26,
      v27,
      v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__uint__Add__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__, v32, v33, v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__,
      v35,
      v36,
      v37);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__, v41, v42, v43);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__,
      v44,
      v45,
      v46);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__,
      v47,
      v48,
      v49);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__,
      v50,
      v51,
      v52);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__,
      v53,
      v54,
      v55);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, v56, v57, v58);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__, v59, v60, v61);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__,
      v62,
      v63,
      v64);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__, v65, v66, v67);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__,
      v68,
      v69,
      v70);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v71, v72, v73);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, v74, v75, v76);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, v77, v78, v79);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, v80, v81, v82);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v83, v84, v85);
    sub_B5D5C4(&Method_System_Func_WarBoardItemData__bool___ctor__, v86, v87, v88);
    sub_B5D5C4(&Method_System_Func_WarBoardSquareData__bool___ctor__, v89, v90, v91);
    sub_B5D5C4(&Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__, v92, v93, v94);
    sub_B5D5C4(&Method_System_Func_IWarBoardObjectData__bool___ctor__, v95, v96, v97);
    sub_B5D5C4(&System_Func_WarBoardSquareData__bool__TypeInfo, v98, v99, v100);
    sub_B5D5C4(&System_Func_IWarBoardObjectData__bool__TypeInfo, v101, v102, v103);
    sub_B5D5C4(&System_Func_WarBoardItemData__bool__TypeInfo, v104, v105, v106);
    sub_B5D5C4(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v107, v108, v109);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v110, v111, v112);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v113, v114, v115);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v116, v117, v118);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v119, v120, v121);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__, v122, v123, v124);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v125, v126, v127);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v128, v129, v130);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v131, v132, v133);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__, v134, v135, v136);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v137, v138, v139);
    sub_B5D5C4(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo, v140, v141, v142);
    sub_B5D5C4(&WarBoardAIRoute_PutSquareTarget_TypeInfo, v143, v144, v145);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v146, v147, v148);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v149, v150, v151);
    sub_B5D5C4(&SvtClassAttri_TypeInfo, v152, v153, v154);
    sub_B5D5C4(&WarBoardAIRoute_TargetData_TypeInfo, v155, v156, v157);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__, v158, v159, v160);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__, v161, v162, v163);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__, v164, v165, v166);
    sub_B5D5C4(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo, v167, v168, v169);
    sub_B5D5C4(&WarBoardAIRoute___c_TypeInfo, v170, v171, v172);
    sub_B5D5C4(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__, v173, v174, v175);
    byte_42E68E4 = 1;
  }
  value = 0LL;
  condType = 0;
  notSquareTarget = 0;
  v377 = 0;
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_206;
  v178 = *(_QWORD **)&Instance[5].fields.count;
  v179 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v179,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v180 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v180,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v181 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v181,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v178 )
    goto LABEL_206;
  v373 = this;
  v182 = v178[6];
  if ( !v182 )
    goto LABEL_206;
  v183 = *(_DWORD *)(v182 + 24);
  if ( v183 >= 1 )
  {
    v184 = 0;
    while ( 1 )
    {
      if ( v184 >= v183 )
        goto LABEL_207;
      if ( !v181 )
        goto LABEL_206;
      v187 = *(_QWORD *)(v182 + 8LL * (int)v184 + 32);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v181,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v187,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      if ( !v187 )
        goto LABEL_206;
      if ( !*(_BYTE *)(v187 + 60) )
      {
        v185 = *(_DWORD *)(v187 + 20);
        forceId = v373->fields.forceId;
        if ( v185 != forceId )
          goto LABEL_12;
        if ( *(_DWORD *)(v187 + 24) == v373->fields.groupId )
          break;
      }
LABEL_20:
      v183 = *(_DWORD *)(v182 + 24);
      if ( (int)++v184 >= v183 )
        goto LABEL_21;
    }
    if ( !v179 )
      goto LABEL_206;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v179,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v187,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    v185 = *(_DWORD *)(v187 + 20);
    forceId = v373->fields.forceId;
LABEL_12:
    if ( v185 != forceId )
    {
      if ( !v180 )
        goto LABEL_206;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v180,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v187,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                            (WarBoardPieceData_o *)v187,
                                                                            0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        v373->fields.enemyMasterSquareIndex = *(_DWORD *)(v187 + 64);
    }
    goto LABEL_20;
  }
LABEL_21:
  if ( !v179 )
    goto LABEL_206;
  v188 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v179,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v189 = v373;
  v373->fields.allAllyPiece = (struct WarBoardPieceData_array *)v188;
  sub_B5D560((BattleServantConfConponent_o *)&v373->fields.allAllyPiece, v188, v190, v191, v192, v193, v194, v195);
  if ( !v180 )
    goto LABEL_206;
  v196 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v180,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v373->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v196;
  sub_B5D560((BattleServantConfConponent_o *)&v373->fields.allEnemyPiece, v196, v197, v198, v199, v200, v201, v202);
  v203 = (System_Int32_array **)v178[7];
  v373->fields.allSquare = (struct WarBoardSquareData_array *)v203;
  sub_B5D560((BattleServantConfConponent_o *)&v373->fields.allSquare, v203, v204, v205, v206, v207, v208, v209);
  v210 = (System_Int32_array **)v178[9];
  v373->fields.allItemData = (struct WarBoardItemData_array *)v210;
  sub_B5D560((BattleServantConfConponent_o *)&v373->fields.allItemData, v210, v211, v212, v213, v214, v215, v216);
  v217 = (System_Int32_array **)v178[10];
  v373->fields.allTreasureData = (struct WarBoardTreasureData_array *)v217;
  sub_B5D560((BattleServantConfConponent_o *)&v373->fields.allTreasureData, v217, v218, v219, v220, v221, v222, v223);
  v224 = (System_Int32_array **)v178[11];
  v373->fields.allWallData = (struct WarBoardWallData_array *)v224;
  sub_B5D560((BattleServantConfConponent_o *)&v373->fields.allWallData, v224, v225, v226, v227, v228, v229, v230);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v373->fields.dictionaryCreateRouteDataEvalValue;
  p_allEnemyPiece = &v373->fields.allEnemyPiece;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_object__float___Clear(
    Instance,
    (const MethodInfo_2EC5CEC *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v373->fields.dicUniqueKeyDesignationItem;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
    (const MethodInfo_2EE8BB8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v373->fields.dicUniqueKeyTarget;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
    (const MethodInfo_2EE8BB8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v373->fields.dicUniqueKeyAdvantagePieceData;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
    (const MethodInfo_2EE8BB8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_206;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v231 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v231,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v231 )
    goto LABEL_206;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v231,
    (System_Collections_Generic_IEnumerable_T__o *)v373->fields.allItemData,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v231,
    (System_Collections_Generic_IEnumerable_T__o *)v373->fields.allTreasureData,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v231,
    (System_Collections_Generic_IEnumerable_T__o *)v373->fields.allWallData,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v231,
    (System_Collections_Generic_IEnumerable_T__o *)v181,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  v232 = v373->fields.forceId;
  groupId = v373->fields.groupId;
  v234 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_B5D694(WarBoardAIRoute_AIRouteMasterData_TypeInfo);
  WarBoardAIRoute_AIRouteMasterData___ctor(v234, v232, groupId, 0LL);
  v373->fields.aiRouteMasterData = v234;
  p_aiRouteMasterData = (void **)&v373->fields.aiRouteMasterData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v373->fields.aiRouteMasterData,
    (System_Int32_array **)v234,
    v235,
    v236,
    v237,
    v238,
    v239,
    v240);
  v241 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v241,
    (const MethodInfo_2F38D28 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  p_placePieceData = (void **)&v373->fields.placePieceData;
  v373->fields.placePieceData = v241;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v373->fields.placePieceData,
    (System_Int32_array **)v241,
    v243,
    v244,
    v245,
    v246,
    v247,
    v248);
  allAllyPiece = v373->fields.allAllyPiece;
  if ( !allAllyPiece )
    goto LABEL_206;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v251 = 0;
    v365 = 0;
    v372 = v231;
    v363 = v373->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v251 >= (unsigned int)max_length )
        goto LABEL_207;
      v254 = allAllyPiece->m_Items[v251];
      if ( !v254 )
        goto LABEL_206;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      v367 = v251;
      if ( !*p_placePieceData )
        goto LABEL_206;
      pieceData = allAllyPiece->m_Items[v251];
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
                                                                            v254->fields._nowSquareIndex_k__BackingField,
                                                                            (const MethodInfo_2F39B30 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_203;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_206;
      System_Collections_Generic_Dictionary_int__uint___Add(
        (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
        pieceData->fields._nowSquareIndex_k__BackingField,
        pieceData->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_2F398CC *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
      forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
      v256 = v189->fields.forceId;
      if ( forceId_k__BackingField != v256 )
        goto LABEL_64;
      if ( pieceData->fields._groupId_k__BackingField == v189->fields.groupId )
        break;
LABEL_65:
      if ( pieceData->fields._groupId_k__BackingField != v189->fields.groupId )
        goto LABEL_69;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_206;
      v257 = 2;
LABEL_68:
      WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        (WarBoardAIRoute_AIRouteMasterData_o *)Instance,
        v257,
        pieceData,
        0LL);
LABEL_69:
      v374 = (WarBoardAIRoute_DesignationItemData_o *)sub_B5D694(WarBoardAIRoute_DesignationItemData_TypeInfo);
      WarBoardAIRoute_DesignationItemData___ctor(v374, 0LL);
      v375 = (WarBoardAIRoute_PutSquareTarget_o *)sub_B5D694(WarBoardAIRoute_PutSquareTarget_TypeInfo);
      WarBoardAIRoute_PutSquareTarget___ctor(v375, 0LL);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v189->fields.piecePersonalityDic;
      if ( !Instance )
        goto LABEL_206;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
                                                                            pieceData->fields._index_k__BackingField,
                                                                            &value,
                                                                            (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)value;
        if ( !value )
          goto LABEL_206;
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
                                                                              (WarBoardAIRoute_PiecePersonality_o *)value,
                                                                              0LL);
        if ( !Instance )
          goto LABEL_206;
        klass = Instance->klass;
        v260 = Instance;
        if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
        {
          v261 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
          {
            ++v261;
            p_offset += 4;
            if ( v261 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
              goto LABEL_77;
          }
          v263 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_77:
          v263 = sub_AF54C0(
                   Instance,
                   System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                   0LL,
                   v258);
        }
        v369 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v263)(
                 v260,
                 *(_QWORD *)(v263 + 8));
        if ( !v369 )
          sub_B5D69C(0LL, v264);
        while ( 1 )
        {
LABEL_122:
          v313 = *(_QWORD *)v369;
          if ( *(_WORD *)(*(_QWORD *)v369 + 298LL) )
          {
            v314 = 0LL;
            v315 = (int *)(*(_QWORD *)(v313 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v315 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v314;
              v315 += 4;
              if ( v314 >= *(unsigned __int16 *)(*(_QWORD *)v369 + 298LL) )
                goto LABEL_126;
            }
            v316 = v313 + 16LL * *v315 + 312;
          }
          else
          {
LABEL_126:
            v316 = sub_AF54C0(v369, System_Collections_IEnumerator_TypeInfo, 0LL, v265);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v316)(v369, *(_QWORD *)(v316 + 8)) & 1) == 0 )
            break;
          v318 = *(_QWORD *)v369;
          if ( *(_WORD *)(*(_QWORD *)v369 + 298LL) )
          {
            v319 = 0LL;
            v320 = (int *)(*(_QWORD *)(v318 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__c **)v320 - 1) != System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
            {
              ++v319;
              v320 += 4;
              if ( v319 >= *(unsigned __int16 *)(*(_QWORD *)v369 + 298LL) )
                goto LABEL_133;
            }
            v321 = v318 + 16LL * *v320 + 312;
          }
          else
          {
LABEL_133:
            v321 = sub_AF54C0(
                     v369,
                     System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                     0LL,
                     v317);
          }
          v322 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v321)(
                                                        v369,
                                                        *(_QWORD *)(v321 + 8));
          if ( !v322 )
            sub_B5D69C(0LL, v323);
          Entity_k__BackingField = v322->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v322, 0LL);
          if ( !ConditionEntityArray )
            sub_B5D69C(0LL, v291);
          v266 = ConditionEntityArray->max_length;
          if ( v266 >= 1 )
          {
            v267 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v267 >= v266 )
              {
                v253 = sub_B5D6C8(ConditionEntityArray);
                sub_B5D668(v253, 0LL);
              }
              v268 = ConditionEntityArray->m_Items[v267];
              if ( !v268 )
                sub_B5D69C(ConditionEntityArray, v291);
              conditionTypes = v268->fields.conditionTypes;
              v370 = v267;
              if ( !conditionTypes )
                sub_B5D69C(ConditionEntityArray, v291);
              v270 = *(_QWORD *)&conditionTypes->max_length;
              if ( (int)v270 >= 1 )
                break;
LABEL_121:
              ConditionEntityArray = condEntityArray;
              v266 = condEntityArray->max_length;
              v267 = v370 + 1;
              if ( (int)(v370 + 1) >= v266 )
                goto LABEL_122;
            }
            v271 = 0LL;
            while ( 2 )
            {
              if ( v271 >= (unsigned int)v270 )
              {
                v252 = sub_B5D6C8(ConditionEntityArray);
                sub_B5D668(v252, 0LL);
              }
              v293 = conditionTypes->m_Items[v271 + 1];
              v294 = (WarBoardAIRoute___c__DisplayClass45_0_o *)sub_B5D694(WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
              WarBoardAIRoute___c__DisplayClass45_0___ctor(v294, 0LL);
              if ( !v294 )
                sub_B5D69C(ConditionEntityArray, v291);
              v294->fields.squareIndex = -1;
              if ( v293 <= 0x2A && ((1LL << v293) & 0x70001800000LL) != 0 )
              {
                v291 = (const MethodInfo *)(unsigned int)v268->fields.value;
                v294->fields.squareIndex = (int)v291;
                if ( (_DWORD)v291 != -1 )
                {
                  if ( !v374 )
                    sub_B5D69C(ConditionEntityArray, v291);
                  dicSquareIndexKeyItemData = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v374->fields.dicSquareIndexKeyItemData;
                  if ( !dicSquareIndexKeyItemData )
                    sub_B5D69C(0LL, v291);
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                                                       dicSquareIndexKeyItemData,
                                                                                       (int32_t)v291,
                                                                                       (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)v373->fields.allItemData;
                    v297 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardItemData__bool__TypeInfo);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      v297,
                      (Il2CppObject *)v294,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardItemData__bool___ctor__);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                                         allItemData,
                                                                                         (System_Func_TSource__bool__o *)v297,
                                                                                         (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                    v298 = (WarBoardEvalValueSquare_EvalValueSquare_o *)ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v299 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v374->fields.dicSquareIndexKeyItemData;
                      if ( !v299 )
                        sub_B5D69C(0LL, v291);
                      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                        v299,
                        v294->fields.squareIndex,
                        v298,
                        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                    }
                  }
                }
              }
              v294->fields.squareIndex = -1;
              if ( v293 == 74 || v293 == 75 )
              {
                squareIndex = v268->fields.value;
                v294->fields.squareIndex = squareIndex;
                goto LABEL_110;
              }
              if ( v293 - 127 <= 1 )
              {
                if ( !Entity_k__BackingField )
                  sub_B5D69C(ConditionEntityArray, v291);
                aiTargetCacher = v189->fields.aiTargetCacher;
                TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v291);
                if ( !aiTargetCacher )
                  sub_B5D69C(TrendKey, TrendKey);
                DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(aiTargetCacher, TrendKey, v274);
                if ( !DetectorByTrendKey )
                {
                  v277 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B5D694(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
                  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
                    v277,
                    0LL,
                    Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                    (const MethodInfo_2C2A838 *)Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
                  WarBoardActionTrendConditionMaster__HasMatchCondition(condEntityArray, v277, &condType, v278);
                  v279 = v189->fields.aiTargetCacher;
                  v281 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v280);
                  if ( !v279 )
                    sub_B5D69C(v281, v281);
                  WarBoardAiTargetCacher__Register(v279, v281, v268, condType, v282);
                }
                if ( !v375 )
                  sub_B5D69C(DetectorByTrendKey, v276);
                dicIndividualityPutSqareIndex = v375->fields.dicIndividualityPutSqareIndex;
                v284 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v276);
                v286 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v285);
                v287 = (WarBoardAIRoute_TargetData_o *)sub_B5D694(WarBoardAIRoute_TargetData_TypeInfo);
                WarBoardAIRoute_TargetData___ctor(v287, v286, v293, 0LL);
                if ( !dicIndividualityPutSqareIndex )
                  sub_B5D69C(v288, v289);
                System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
                  dicIndividualityPutSqareIndex,
                  v284,
                  v287,
                  (const MethodInfo_2F5C7F0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                squareIndex = v294->fields.squareIndex;
                v231 = v372;
                v189 = v373;
LABEL_110:
                if ( squareIndex != -1 )
                {
                  if ( !v375 )
                    sub_B5D69C(ConditionEntityArray, v291);
                  if ( !Entity_k__BackingField )
                    sub_B5D69C(ConditionEntityArray, v291);
                  dicObjectPutSquareIndex = v375->fields.dicObjectPutSquareIndex;
                  v301 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v291);
                  WarBoardAIRoute__RegisterTargetObjectToDic(
                    v301,
                    dicObjectPutSquareIndex,
                    (System_Collections_Generic_List_IWarBoardObjectData__o *)v231,
                    squareIndex,
                    (int64_t)v301,
                    v293,
                    &notSquareTarget,
                    v302);
                  if ( !notSquareTarget )
                  {
                    dicSquarePutSqareIndex = v375->fields.dicSquarePutSqareIndex;
                    v304 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v291);
                    if ( !dicSquarePutSqareIndex )
                      sub_B5D69C(v304, v304);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ContainsKey(
                                                                                         dicSquarePutSqareIndex,
                                                                                         v304,
                                                                                         (const MethodInfo_2F5CA8C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                    if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                    {
                      allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)v373->fields.allSquare;
                      v306 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardSquareData__bool__TypeInfo);
                      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                        v306,
                        (Il2CppObject *)v294,
                        Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                        (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardSquareData__bool___ctor__);
                      ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                                           allSquare,
                                                                                           (System_Func_TSource__bool__o *)v306,
                                                                                           (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                      v307 = (WarBoardSquareData_o *)ConditionEntityArray;
                      if ( ConditionEntityArray )
                      {
                        v308 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v291);
                        v309 = (WarBoardAIRoute_TargetData_o *)sub_B5D694(WarBoardAIRoute_TargetData_TypeInfo);
                        WarBoardAIRoute_TargetData___ctor_22446780(v309, v307, v308, v293, 0LL);
                        v310 = v375->fields.dicSquarePutSqareIndex;
                        v312 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v311);
                        if ( !v310 )
                          sub_B5D69C(v312, v312);
                        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
                          v310,
                          v312,
                          v309,
                          (const MethodInfo_2F5C818 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                      }
                    }
                  }
                }
              }
              LODWORD(v270) = conditionTypes->max_length;
              if ( (__int64)++v271 >= (int)v270 )
                goto LABEL_121;
              continue;
            }
          }
        }
        allAllyPiece = v363;
        v376[v365] = 1269;
        v325 = ++v377;
        v326 = *(_QWORD *)v369;
        if ( *(_WORD *)(*(_QWORD *)v369 + 298LL) )
        {
          v327 = 0LL;
          v328 = (int *)(*(_QWORD *)(v326 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v328 - 1) != System_IDisposable_TypeInfo )
          {
            ++v327;
            v328 += 4;
            if ( v327 >= *(unsigned __int16 *)(*(_QWORD *)v369 + 298LL) )
              goto LABEL_142;
          }
          v329 = v369;
          v330 = v326 + 16LL * *v328 + 312;
        }
        else
        {
LABEL_142:
          v329 = v369;
          v330 = sub_AF54C0(v369, System_IDisposable_TypeInfo, 0LL, v317);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v330)(v329, *(_QWORD *)(v330 + 8));
        if ( v325 )
        {
          v366 = v325;
          if ( v376[v325 - 1] == 1269 )
          {
            v377 = v325 - 1;
            v366 = v325 - 1;
          }
        }
        else
        {
          v366 = 0;
        }
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v189->fields.aiTargetCacher;
        if ( !Instance )
          goto LABEL_206;
        WarBoardAiTargetCacher__ClearTargetObject((WarBoardAiTargetCacher_o *)Instance, v177);
        v331 = v189->fields.aiTargetCacher;
        v332 = WarBoardAIRoute___c_TypeInfo;
        if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v332 = WarBoardAIRoute___c_TypeInfo;
        }
        static_fields = v332->static_fields;
        _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( (BYTE3(v332->vtable._0_Equals.methodPtr) & 4) != 0 && !v332->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v332);
            static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          }
          v335 = (Il2CppObject *)static_fields->__9;
          _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__45_0,
            v335,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
          v336 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v336->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v336->__9__45_0,
            (System_Int32_array **)_9__45_0,
            v337,
            v338,
            v339,
            v340,
            v341,
            v342);
        }
        v343 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v231,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                              v343,
                                                                              (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v331 )
          goto LABEL_206;
        WarBoardAiTargetCacher__AggregateTargetObject(v331, (IWarBoardObjectData_array *)Instance, v344);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v189->fields.dicUniqueKeyDesignationItem;
        if ( !Instance )
          goto LABEL_206;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (WarBoardAIRoute_PutSquareTarget_o *)v374,
          (const MethodInfo_2EE89DC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v189->fields.dicUniqueKeyTarget;
        if ( !Instance )
          goto LABEL_206;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          v375,
          (const MethodInfo_2EE89DC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isServant(
                                                                              pieceData,
                                                                              0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v345 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_B5D694(WarBoardAIRoute_AdvantagePieceData_TypeInfo);
          WarBoardAIRoute_AdvantagePieceData___ctor(v345, 0LL);
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pieceData->fields._battleServant_k__BackingField;
          if ( !Instance )
            goto LABEL_206;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleServantData__getClassId(
                                                                                (BattleServantData_o *)Instance,
                                                                                0LL);
          v346 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_206;
          v347 = v346->max_length;
          if ( v347 >= 1 )
          {
            v348 = (int)Instance;
            v349 = 0;
            while ( v349 < v347 )
            {
              v350 = (__int64)v346 + 8 * (int)v349;
              v351 = *(_QWORD *)(v350 + 32);
              if ( !v351 )
                goto LABEL_206;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                    *(WarBoardPieceData_o **)(v350 + 32),
                                                                                    0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                Instance = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(v351 + 128);
                if ( !Instance )
                  goto LABEL_206;
                ClassId = BattleServantData__getClassId((BattleServantData_o *)Instance, 0LL);
                if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SvtClassAttri_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                }
                Magnification = SvtClassAttri__getMagnification(v348, ClassId, 0LL);
                v354 = SvtClassAttri__getMagnification(ClassId, v348, 0LL);
                v355 = SvtClassAttri__getMagnification(v348, ClassId, 0LL);
                v356 = Magnification <= 1.0;
                v357 = SvtClassAttri__getMagnification(ClassId, v348, 0LL);
                if ( v356 )
                {
                  v358 = 0;
                }
                else
                {
                  if ( !v345 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v345->fields.dicAttackAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v351 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v351,
                    (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v358 = 1;
                  v345->fields.flagNow |= 0x4000uLL;
                }
                if ( v354 < 1.0 )
                {
                  if ( !v345 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v345->fields.dicDefenseAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v351 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v351,
                    (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v345->fields.flagNow |= 0x10000uLL;
                }
                if ( v355 < 1.0 )
                {
                  if ( !v345 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v345->fields.dicAttackDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v351 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v351,
                    (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v345->fields.flagNow |= 0x8000uLL;
                }
                if ( v357 > 1.0 )
                {
                  if ( !v345 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v345->fields.dicDefenseDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v351 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v351,
                    (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v345->fields.flagNow |= 0x20000uLL;
                }
                if ( ((unsigned __int8)v358 & (v354 < 1.0)) != 0 )
                {
                  if ( !v345 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v345->fields.dicClassAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v351 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v351,
                    (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v345->fields.flagNow |= 0x1000uLL;
                }
                if ( v355 < 1.0 && v357 > 1.0 )
                {
                  if ( !v345 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v345->fields.dicClassDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v351 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v351,
                    (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v345->fields.flagNow |= 0x2000uLL;
                }
              }
              v347 = v346->max_length;
              if ( (int)++v349 >= v347 )
                goto LABEL_199;
            }
LABEL_207:
            v361 = sub_B5D6C8(Instance);
            sub_B5D668(v361, 0LL);
          }
LABEL_199:
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v189->fields.dicUniqueKeyAdvantagePieceData;
          if ( !Instance )
            goto LABEL_206;
          System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
            (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
            pieceData->fields._uniqueIndex_k__BackingField,
            (WarBoardAIRoute_PutSquareTarget_o *)v345,
            (const MethodInfo_2EE89DC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          v359 = v366;
          v231 = v372;
        }
        else
        {
          v359 = v366;
        }
        v365 = v359;
        p_placePieceData = (void **)&v373->fields.placePieceData;
      }
LABEL_203:
      max_length = allAllyPiece->max_length;
      v251 = v367 + 1;
      if ( v367 + 1 >= max_length )
        goto LABEL_204;
    }
    if ( WarBoardPieceData__get_isMaster(pieceData, 0LL) )
    {
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_206;
      v257 = 0;
      goto LABEL_68;
    }
    forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
    v256 = v189->fields.forceId;
LABEL_64:
    if ( forceId_k__BackingField != v256 )
      goto LABEL_69;
    goto LABEL_65;
  }
LABEL_204:
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
  if ( !*p_aiRouteMasterData )
LABEL_206:
    sub_B5D69C(Instance, v177);
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData((WarBoardAIRoute_AIRouteMasterData_o *)Instance, 1, 0LL, 0LL);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(v189, v360);
}


int32_t __fastcall WarBoardAIRoute__CalcurateDistanceType(
        int32_t newDistance,
        int32_t oldDistance,
        const MethodInfo *method)
{
  if ( newDistance == oldDistance )
    return 2;
  if ( newDistance < oldDistance )
    return 1;
  return 3;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__CanAcquireItem(
        WarBoardAIRoute_o *this,
        int32_t targetSquare,
        System_Collections_Generic_List_int__o *alreadyGetItemList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x1
  WarBoardItemData_o *Item; // x0

  if ( (byte_42E68EE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_int__Contains__,
      targetSquare,
      (_DWORD)alreadyGetItemList,
      method);
    this = (WarBoardAIRoute_o *)sub_B5D5C4(&WarBoardAIManager_TypeInfo, v6, v7, v8);
    byte_42E68EE = 1;
  }
  if ( !alreadyGetItemList )
    sub_B5D69C(this, *(_QWORD *)&targetSquare);
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 0;
  }
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  Item = WarBoardAIManager__GetItem(targetSquare, v9);
  return Item && !WarBoardItemData__get_Acquired(Item, 0LL);
}


void __fastcall WarBoardAIRoute__ClassAdvantageDistance(
        WarBoardAIRoute_o *this,
        WarBoardAIRoute_RouteData_o **routeData,
        WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  WarBoardAIRoute_RouteData_o *v9; // x22
  const MethodInfo *v10; // x3
  WarBoardAIRoute_RouteData_o *v11; // x22
  const MethodInfo *v12; // x3
  WarBoardAIRoute_RouteData_o *v13; // x22
  const MethodInfo *v14; // x3
  WarBoardAIRoute_RouteData_o *v15; // x22
  const MethodInfo *v16; // x3
  WarBoardAIRoute_RouteData_o *v17; // x22
  const MethodInfo *v18; // x3
  WarBoardAIRoute_RouteData_o *v19; // x21

  if ( !*routeData )
    goto LABEL_28;
  if ( !advantagePieceData )
    goto LABEL_28;
  (*routeData)->fields.flagNow |= advantagePieceData->fields.flagNow;
  this = (WarBoardAIRoute_o *)*routeData;
  if ( !*routeData )
    goto LABEL_28;
  if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)this, 4096LL, 0LL) )
  {
    v9 = *routeData;
    this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                  advantagePieceData->fields.dicClassAdvantageServant,
                                  advantagePieceData->fields.baseCARange,
                                  actionSquareIndex,
                                  v8);
    if ( !v9 )
      goto LABEL_28;
    v9->fields.isMoveByServantAndClassAdvantageServantRange = (int)this;
  }
  this = (WarBoardAIRoute_o *)*routeData;
  if ( !*routeData )
    goto LABEL_28;
  if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)this, 0x2000LL, 0LL) )
  {
    v11 = *routeData;
    this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                  advantagePieceData->fields.dicClassDisAdvantageServant,
                                  advantagePieceData->fields.baseCDARange,
                                  actionSquareIndex,
                                  v10);
    if ( !v11 )
      goto LABEL_28;
    v11->fields.isMoveByServantAndClassDisAdvantageServantRange = (int)this;
  }
  this = (WarBoardAIRoute_o *)*routeData;
  if ( !*routeData )
    goto LABEL_28;
  if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)this, 0x4000LL, 0LL) )
  {
    v13 = *routeData;
    this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                  advantagePieceData->fields.dicAttackAdvantageServant,
                                  advantagePieceData->fields.baseAARange,
                                  actionSquareIndex,
                                  v12);
    if ( !v13 )
      goto LABEL_28;
    v13->fields.isMoveByServantAndAttackAdvantageServantRange = (int)this;
  }
  this = (WarBoardAIRoute_o *)*routeData;
  if ( !*routeData )
    goto LABEL_28;
  if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)this, 0x8000LL, 0LL) )
  {
    v15 = *routeData;
    this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                  advantagePieceData->fields.dicAttackDisAdvantageServant,
                                  advantagePieceData->fields.baseADARange,
                                  actionSquareIndex,
                                  v14);
    if ( !v15 )
      goto LABEL_28;
    v15->fields.isMoveByServantAndAttackDisAdvantageServantRange = (int)this;
  }
  this = (WarBoardAIRoute_o *)*routeData;
  if ( !*routeData )
    goto LABEL_28;
  if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)this, 0x10000LL, 0LL) )
  {
    v17 = *routeData;
    this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                  advantagePieceData->fields.dicDefenseAdvantageServant,
                                  advantagePieceData->fields.baseDARange,
                                  actionSquareIndex,
                                  v16);
    if ( !v17 )
      goto LABEL_28;
    v17->fields.isMoveByServantAndDefenseAdvantageServantRange = (int)this;
  }
  this = (WarBoardAIRoute_o *)*routeData;
  if ( !*routeData )
    goto LABEL_28;
  if ( !WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)this, 0x20000LL, 0LL) )
    return;
  v19 = *routeData;
  this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                advantagePieceData->fields.dicDefenseDisAdvantageServant,
                                advantagePieceData->fields.baseDDARange,
                                actionSquareIndex,
                                v18);
  if ( !v19 )
LABEL_28:
    sub_B5D69C(this, routeData);
  v19->fields.isMoveByServantAndDefenseDisAdvantageServantRange = (int)this;
}


void __fastcall WarBoardAIRoute__Clear(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x0

  if ( (byte_42E68E0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__, (_DWORD)method, v2, v3);
    byte_42E68E0 = 1;
  }
  allRouteList = this->fields.allRouteList;
  if ( !allRouteList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)allRouteList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__);
}


int32_t __fastcall WarBoardAIRoute__CompareBaseRange(int32_t baseRange, int32_t actionRange, const MethodInfo *method)
{
  if ( actionRange < baseRange )
    return 1;
  if ( actionRange == baseRange )
    return 2;
  return 3;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardAIRoute__CompareBaseRangeToActionRange(
        System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *dicPieceList,
        int32_t baseRange,
        int32_t actionIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int32_t v25; // w19
  int32_t key; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  int32_t v28; // w0
  int32_t v29; // w20
  int v30; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+8h] [xbp-68h] BYREF

  v6 = dicPieceList;
  if ( (byte_42E68ED & 1) == 0 )
  {
    sub_B5D5C4(&AStarSearch_TypeInfo, baseRange, actionIndex, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v10, v11, v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__,
      v13,
      v14,
      v15);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__,
      v16,
      v17,
      v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__,
      v19,
      v20,
      v21);
    dicPieceList = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_B5D5C4(
                                                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                                                                        v22,
                                                                                        v23,
                                                                                        v24);
    byte_42E68ED = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !v6 )
    sub_B5D69C(dicPieceList, *(_QWORD *)&baseRange);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v32,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v6,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v25 = 3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v32,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
    {
      v29 = 0;
      v30 = 1;
      goto LABEL_14;
    }
    key = (int32_t)v32.fields.current.fields.key;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                 0LL,
                                                                 actionIndex,
                                                                 key,
                                                                 0,
                                                                 0LL,
                                                                 0LL);
    v28 = System_Linq_Enumerable__Count_int_(
            v27,
            (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
    if ( v28 < baseRange )
      break;
    if ( v28 == baseRange )
      v25 = 2;
  }
  v29 = 1;
  v30 = 3;
LABEL_14:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v32,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  if ( (unsigned int)(v30 + 1) >> 2 )
    return v29;
  return v25;
}


void __fastcall WarBoardAIRoute__CreateOutOfWarningAreaToDistance(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_Generic_Dictionary_int__int__o *v16; // x21
  struct System_Collections_Generic_Dictionary_int__int__o **p_dicOutOfWarningAreaRange; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_Dictionary_int__int__o *IsFlag; // x0
  __int64 v25; // x1
  struct WarBoardSquareData_array *allSquare; // x25
  int max_length; // w8
  int v28; // w26
  Il2CppClass **v29; // x8
  Il2CppClass *v30; // x21
  struct WarBoardSquareData_array *v31; // x20
  int v32; // w8
  unsigned int v33; // w27
  int v34; // w22
  Il2CppClass **v35; // x8
  Il2CppClass *v36; // x23
  int32_t name; // w24
  int32_t v38; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  int32_t v41; // w1
  const MethodInfo_2F0AE58 *v42; // x3
  int32_t v43; // w2
  __int64 v44; // x0
  struct System_Collections_Generic_Dictionary_int__int__o **v45; // [xsp+0h] [xbp-60h]

  if ( (byte_42E68F9 & 1) == 0 )
  {
    sub_B5D5C4(&AStarSearch_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v13, v14, v15);
    byte_42E68F9 = 1;
  }
  v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v16,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v16;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicOutOfWarningAreaRange,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  allSquare = this->fields.allSquare;
  if ( !allSquare )
LABEL_33:
    sub_B5D69C(IsFlag, v25);
  max_length = allSquare->max_length;
  if ( max_length >= 1 )
  {
    v28 = 0;
    v45 = &this->fields.dicOutOfWarningAreaRange;
    do
    {
      if ( v28 >= (unsigned int)max_length )
        goto LABEL_34;
      v29 = &allSquare->obj.klass + v28;
      v30 = v29[4];
      if ( !v30 )
        goto LABEL_33;
      IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                      (WarBoardSquareData_o *)v29[4],
                                                                      1,
                                                                      0LL);
      if ( ((unsigned __int8)IsFlag & 1) != 0 )
      {
        v31 = this->fields.allSquare;
        if ( !v31 )
          goto LABEL_33;
        v32 = v31->max_length;
        if ( v32 >= 1 )
        {
          v33 = 0;
          v34 = -1;
          while ( v33 < v32 )
          {
            v35 = &v31->obj.klass + (int)v33;
            v36 = v35[4];
            if ( !v36 )
              goto LABEL_33;
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                            (WarBoardSquareData_o *)v35[4],
                                                                            1,
                                                                            0LL);
            if ( ((unsigned __int8)IsFlag & 1) != 0 )
              goto LABEL_37;
            name = (int32_t)v30->_1.name;
            v38 = (int32_t)v36->_1.name;
            if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AStarSearch_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
            }
            v39 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                         0LL,
                                                                         name,
                                                                         v38,
                                                                         0,
                                                                         0LL,
                                                                         0LL);
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__Count_int_(
                                                                            v39,
                                                                            (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
            if ( v34 > (int)IsFlag - 1 || v34 == -1 )
              v34 = (_DWORD)IsFlag - 1;
            if ( v34 >= 2 )
            {
LABEL_37:
              v32 = v31->max_length;
              if ( (int)++v33 < v32 )
                continue;
            }
            goto LABEL_29;
          }
LABEL_34:
          v44 = sub_B5D6C8(IsFlag);
          sub_B5D668(v44, 0LL);
        }
        v34 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        IsFlag = *v45;
        if ( !*v45 )
          goto LABEL_33;
        v41 = (int32_t)v30->_1.name;
        v43 = v34;
        v42 = (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
      }
      else
      {
        IsFlag = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v41 = (int32_t)v30->_1.name;
        v42 = (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v43 = 0;
      }
      System_Collections_Generic_Dictionary_int__int___Add(IsFlag, v41, v43, v42);
      max_length = allSquare->max_length;
      ++v28;
    }
    while ( v28 < max_length );
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardAIRoute__CreateRouteData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t searchCount,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
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

  if ( (byte_42E68E6 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo, (_DWORD)piecePlaceData, searchCount, routeDataList);
    byte_42E68E6 = 1;
  }
  v9 = sub_B5D694(WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
  WarBoardAIRoute__CreateRouteData_d__47___ctor((WarBoardAIRoute__CreateRouteData_d__47_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_B5D69C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v9 + 56),
    (System_Int32_array **)piecePlaceData,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_DWORD *)(v9 + 40) = searchCount;
  *(_QWORD *)(v9 + 48) = routeDataList;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v9 + 48),
    (System_Int32_array **)routeDataList,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  return (System_Collections_IEnumerator_o *)v9;
}


WarBoardPieceData_o *__fastcall WarBoardAIRoute__GetActionPiece(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        int32_t actionSquareIndex,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  const MethodInfo *v10; // x1
  uint32_t v11; // w19
  uint32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E68FE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__,
      (_DWORD)basePiece,
      actionSquareIndex,
      piecePlaceData);
    this = (WarBoardAIRoute_o *)sub_B5D5C4(&WarBoardAIManager_TypeInfo, v7, v8, v9);
    byte_42E68FE = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_B5D69C(this, basePiece);
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_2F3B4DC *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
  {
    v11 = value;
    if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    }
    return WarBoardAIManager__GetPieceUnique(v11, v10);
  }
  else
  {
    if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    }
    return WarBoardAIManager__GetEnemyPieceSquareIndex(actionSquareIndex, v10);
  }
}


WarBoardAIRoute_AdvantagePieceData_o *__fastcall WarBoardAIRoute__GetAdvantagePieceData(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v6; // x21
  WarBoardAIRoute_AdvantagePieceData_o *v7; // x20
  _BOOL8 HasFlag_22442196; // x0
  const MethodInfo *v9; // x3
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x3
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x3
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x3
  _BOOL8 v18; // x0
  const MethodInfo *v19; // x3

  v6 = this;
  if ( (byte_42E68FC & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B5D5C4(
                                  &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__,
                                  (_DWORD)basePiece,
                                  baseSquareIndex,
                                  method);
    byte_42E68FC = 1;
  }
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v6->fields.dicUniqueKeyAdvantagePieceData) == 0LL
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                                      (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)this,
                                      basePiece->fields._uniqueIndex_k__BackingField,
                                      (const MethodInfo_2EE8918 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0LL )
  {
    sub_B5D69C(this, basePiece);
  }
  v7 = (WarBoardAIRoute_AdvantagePieceData_o *)this;
  HasFlag_22442196 = WarBoardAIRoute_RouteData__HasFlag_22442196(
                       *(_QWORD *)&this->fields.TEMP_SEARCH_DEPTH,
                       4096LL,
                       0LL);
  if ( HasFlag_22442196 )
    v7->fields.baseCARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)HasFlag_22442196,
                               v7->fields.dicClassAdvantageServant,
                               baseSquareIndex,
                               v9);
  v10 = WarBoardAIRoute_RouteData__HasFlag_22442196(v7->fields.flagNow, 0x2000LL, 0LL);
  if ( v10 )
    v7->fields.baseCDARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v10,
                                v7->fields.dicClassDisAdvantageServant,
                                baseSquareIndex,
                                v11);
  v12 = WarBoardAIRoute_RouteData__HasFlag_22442196(v7->fields.flagNow, 0x4000LL, 0LL);
  if ( v12 )
    v7->fields.baseAARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v12,
                               v7->fields.dicAttackAdvantageServant,
                               baseSquareIndex,
                               v13);
  v14 = WarBoardAIRoute_RouteData__HasFlag_22442196(v7->fields.flagNow, 0x8000LL, 0LL);
  if ( v14 )
    v7->fields.baseADARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v14,
                                v7->fields.dicAttackDisAdvantageServant,
                                baseSquareIndex,
                                v15);
  v16 = WarBoardAIRoute_RouteData__HasFlag_22442196(v7->fields.flagNow, 0x10000LL, 0LL);
  if ( v16 )
    v7->fields.baseDARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v16,
                               v7->fields.dicDefenseAdvantageServant,
                               baseSquareIndex,
                               v17);
  v18 = WarBoardAIRoute_RouteData__HasFlag_22442196(v7->fields.flagNow, 0x20000LL, 0LL);
  if ( v18 )
    v7->fields.baseDDARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v18,
                                v7->fields.dicDefenseDisAdvantageServant,
                                baseSquareIndex,
                                v19);
  return v7;
}


System_Collections_Generic_Dictionary_uint__int__o *__fastcall WarBoardAIRoute__GetAllEnemyToDistance(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        int32_t *servantAndEnemyRange,
        int32_t *servantAndEnemyMasterRange,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_Dictionary_uint__int__o *v22; // x22
  __int64 isMaster; // x0
  __int64 v24; // x1
  struct WarBoardPieceData_array *allEnemyPiece; // x25
  int max_length; // w8
  unsigned int v27; // w26
  WarBoardPieceData_o *v28; // x23
  int32_t nowSquareIndex_k__BackingField; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  int32_t v31; // w24
  __int64 v33; // x0

  if ( (byte_42E68F8 & 1) == 0 )
  {
    sub_B5D5C4(&AStarSearch_TypeInfo, (_DWORD)routeDataList, baseSquareIndex, servantAndEnemyRange);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v19, v20, v21);
    byte_42E68F8 = 1;
  }
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v22 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v22,
    (const MethodInfo_2EE4278 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  allEnemyPiece = this->fields.allEnemyPiece;
  if ( !allEnemyPiece )
    goto LABEL_21;
  max_length = allEnemyPiece->max_length;
  if ( max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= max_length )
      {
        v33 = sub_B5D6C8(isMaster);
        sub_B5D668(v33, 0LL);
      }
      v28 = allEnemyPiece->m_Items[v27];
      if ( !v28 )
        break;
      nowSquareIndex_k__BackingField = v28->fields._nowSquareIndex_k__BackingField;
      if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AStarSearch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      }
      v30 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   nowSquareIndex_k__BackingField,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      isMaster = System_Linq_Enumerable__Count_int_(
                   v30,
                   (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v22 )
        break;
      v31 = isMaster;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v22,
        v28->fields._uniqueIndex_k__BackingField,
        isMaster,
        (const MethodInfo_2EE4E1C *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
      if ( *servantAndEnemyRange == -1 || v31 < *servantAndEnemyRange )
        *servantAndEnemyRange = v31;
      isMaster = WarBoardPieceData__get_isMaster(v28, 0LL);
      if ( (isMaster & 1) != 0 && (*servantAndEnemyMasterRange == -1 || v31 < *servantAndEnemyMasterRange) )
        *servantAndEnemyMasterRange = v31;
      max_length = allEnemyPiece->max_length;
      if ( (int)++v27 >= max_length )
        return v22;
    }
LABEL_21:
    sub_B5D69C(isMaster, v24);
  }
  return v22;
}


System_Int32_array *__fastcall WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t masterSquareIndex,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  WarBoardAIRoute___c__DisplayClass51_0_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w20
  System_Collections_Generic_IEnumerable_TSource__o *Keys; // x19
  System_Func_int__bool__o *v31; // x20

  if ( (byte_42E68E9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__,
      (_DWORD)piecePlaceData,
      masterSquareIndex,
      method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v16, v17, v18);
    sub_B5D5C4(
      &Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      v19,
      v20,
      v21);
    sub_B5D5C4(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo, v22, v23, v24);
    byte_42E68E9 = 1;
  }
  v25 = (WarBoardAIRoute___c__DisplayClass51_0_o *)sub_B5D694(WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass51_0___ctor(v25, 0LL);
  if ( !v25
    || (v25->fields.masterSquareIndex = masterSquareIndex, (aiRouteMasterData = this->fields.aiRouteMasterData) == 0LL)
    || !piecePlaceData )
  {
    sub_B5D69C(v26, v27);
  }
  masterType = aiRouteMasterData->fields.masterType;
  Keys = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                                piecePlaceData,
                                                                (const MethodInfo_2F394DC *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  if ( masterType != 1 )
  {
    v31 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v31,
      (Il2CppObject *)v25,
      Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    Keys = System_Linq_Enumerable__Where_int_(
             Keys,
             (System_Func_TSource__bool__o *)v31,
             (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
  }
  return System_Linq_Enumerable__ToArray_int_(
           Keys,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


DefenseAreaData_o *__fastcall WarBoardAIRoute__GetDefenseAreaData(
        WarBoardAIRoute_o *this,
        int32_t masterSquareIndex,
        System_Int32_array *allyPieces,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  __int64 v59; // x24
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicSquareIndexEnemyPiece; // x0
  __int64 v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t defenseArea; // w20
  DefenseAreaData_o *v70; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v71; // x20
  int v72; // w2
  __int64 v73; // x3
  WarBoardAIManager_c *v74; // x0
  char v75; // w10
  bool v76; // w8
  bool IsDetour; // w25
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Int32_array *v79; // x28
  __int64 v80; // x0
  __int64 v81; // x1
  int32_t v82; // w25
  __int64 v83; // x0
  __int64 v84; // x1
  __int64 v85; // x1
  const MethodInfo *v86; // x2
  BalanceConfig_c *v87; // x0
  System_Func_int__bool__o *klass; // x28
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  __int64 v95; // x8
  int64_t v96; // x21
  BalanceConfig_c *v97; // x0
  BattleServantConfConponent_o *v99; // [xsp+8h] [xbp-C8h]
  bool v101; // [xsp+1Ch] [xbp-B4h]
  char v102; // [xsp+20h] [xbp-B0h]
  bool v103; // [xsp+24h] [xbp-ACh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v104; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v105; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_42E68EA & 1) == 0 )
  {
    sub_B5D5C4(&AStarSearch_TypeInfo, masterSquareIndex, (_DWORD)allyPieces, piecePlaceData);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&DefenseAreaData_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v26, v27, v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__,
      v29,
      v30,
      v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__,
      v32,
      v33,
      v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__,
      v35,
      v36,
      v37);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v38, v39, v40);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__, v47, v48, v49);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__, v50, v51, v52);
    sub_B5D5C4(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&WarBoardAIManager_TypeInfo, v56, v57, v58);
    byte_42E68EA = 1;
  }
  memset(&v105, 0, sizeof(v105));
  v59 = sub_B5D694(WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass52_0___ctor((WarBoardAIRoute___c__DisplayClass52_0_o *)v59, 0LL);
  if ( !v59 )
    goto LABEL_55;
  *(_QWORD *)(v59 + 16) = piecePlaceData;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v59 + 16),
    (System_Int32_array **)piecePlaceData,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  npcData = this->fields.npcData;
  if ( !npcData )
    goto LABEL_55;
  defenseArea = npcData->fields.defenseArea;
  v70 = (DefenseAreaData_o *)sub_B5D694(DefenseAreaData_TypeInfo);
  DefenseAreaData___ctor(v70, masterSquareIndex, defenseArea, 0LL);
  v71 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v71,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  if ( !byte_42E696F )
  {
    sub_B5D5C4(&WarBoardAIManager_TypeInfo, v61, v72, v73);
    byte_42E696F = 1;
  }
  v74 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v74 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v74->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_55;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v104,
    dicSquareIndexEnemyPiece,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v99 = (BattleServantConfConponent_o *)(v59 + 24);
  v105 = v104;
  v75 = 0;
  v76 = 1;
  IsDetour = 1;
LABEL_15:
  v101 = v76;
LABEL_16:
  v102 = v75;
  v103 = IsDetour;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v105,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    current = v105.fields.current;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v79 = AStarSearch__RouteSearch(0LL, masterSquareIndex, (int32_t)current.fields.key, 0, 0LL, 0LL);
    v80 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v79,
            (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v71 )
      sub_B5D69C(v80, v81);
    v82 = v80;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v71,
      (int32_t)current.fields.key,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v79,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v70 )
      sub_B5D69C(v83, v84);
    DefenseAreaData__SetComparisonMasterAndEnemyRange(v70, v82, 0LL);
    if ( DefenseAreaData__IsInDefenseArea(v70, (int32_t)current.fields.key, 0LL) )
    {
      v87 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v87 = BalanceConfig_TypeInfo;
      }
      if ( !v87->static_fields->IsEnableOldBlockShortestRoute )
      {
        if ( !v79 )
          sub_B5D69C(v87, v85);
        if ( (int)v79->max_length >= 2 )
          DefenseAreaData__SetComparisonAllMasterAndEnemyRange(v70, v79->m_Items[2], v82, 0LL);
      }
      IsDetour = 0;
      v75 = 1;
      if ( v103 )
      {
        IsDetour = WarBoardAIRoute__IsDetour(v79, allyPieces, v86);
        v76 = 0;
        v75 = 1;
        if ( v101 )
        {
          klass = (System_Func_int__bool__o *)v99->klass;
          if ( !v99->klass )
          {
            klass = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              klass,
              (Il2CppObject *)v59,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
            v99->klass = (BattleServantConfConponent_c *)klass;
            sub_B5D560(v99, (System_Int32_array **)klass, v89, v90, v91, v92, v93, v94);
          }
          if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AStarSearch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          }
          v76 = AStarSearch__RouteSearch(
                  (WarBoardPieceData_o *)current.fields.value,
                  (int32_t)current.fields.key,
                  masterSquareIndex,
                  0,
                  klass,
                  0LL) == 0LL;
          v75 = 1;
        }
        goto LABEL_15;
      }
      goto LABEL_16;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v105,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  v95 = 1025LL;
  if ( (v102 & 1) == 0 )
    v95 = 1LL;
  if ( v103 )
    v95 |= 0x2000000000uLL;
  v96 = v101 ? v95 | 0x10000000000LL : v95;
  if ( !v70 )
LABEL_55:
    sub_B5D69C(dicSquareIndexEnemyPiece, v61);
  DefenseAreaData__CreateShortestRoutes(v70, (System_Collections_Generic_Dictionary_int__int____o *)v71, 0LL);
  v97 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v97 = BalanceConfig_TypeInfo;
  }
  if ( !v97->static_fields->IsEnableOldBlockShortestRoute )
    DefenseAreaData__CreateAllShortestRoutes(v70, (System_Collections_Generic_Dictionary_int__int____o *)v71, 0LL);
  DefenseAreaData__SetFlag(v70, v96, 0LL);
  return v70;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_int__int__o *__fastcall WarBoardAIRoute__GetDesignationItemToDistance(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v7; // x22
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  WarBoardAIRoute_PutSquareTarget_o *Item; // x22
  System_Collections_Generic_Dictionary_int__int__o *v57; // x19
  __int64 v58; // x22
  __int64 v59; // x0
  __int64 v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v68; // x24
  _BOOL8 v69; // x0
  __int64 v70; // x1
  int32_t v71; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v77; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v78; // [xsp+30h] [xbp-80h] BYREF

  v7 = this;
  if ( (byte_42E68F7 & 1) == 0 )
  {
    sub_B5D5C4(&AStarSearch_TypeInfo, (_DWORD)basePiece, (_DWORD)routeDataList, *(_QWORD *)&baseSquareIndex);
    sub_B5D5C4(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__, v29, v30, v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__,
      v32,
      v33,
      v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__,
      v35,
      v36,
      v37);
    sub_B5D5C4(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v38, v39, v40);
    sub_B5D5C4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__, v47, v48, v49);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__, v50, v51, v52);
    this = (WarBoardAIRoute_o *)sub_B5D5C4(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo, v53, v54, v55);
    byte_42E68F7 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v7->fields.dicUniqueKeyDesignationItem) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                 (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)this,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_2EE8918 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v57 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v57,
          (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (this = (WarBoardAIRoute_o *)Item->fields.dicSquarePutSqareIndex) == 0LL )
  {
    sub_B5D69C(this, basePiece);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v77,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v78 = v77;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v78,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v58 = sub_B5D694(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    WarBoardAIRoute___c__DisplayClass66_0___ctor((WarBoardAIRoute___c__DisplayClass66_0_o *)v58, 0LL);
    if ( !v58 )
      sub_B5D69C(v59, v60);
    v67 = v58 + 24;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v58 + 16) = v78.fields.current;
    sub_B5D560((BattleServantConfConponent_o *)(v58 + 24), 0LL, v61, v62, v63, v64, v65, v66);
    v68 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v68,
      (Il2CppObject *)v58,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    v69 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v68,
            (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    if ( !v69 )
    {
      if ( !*(_QWORD *)v67 )
        sub_B5D69C(v69, v70);
      v71 = *(_DWORD *)(*(_QWORD *)v67 + 16LL);
      if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AStarSearch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      }
      v72 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   v71,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v73 = System_Linq_Enumerable__Count_int_(
              v72,
              (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v57 )
        sub_B5D69C(v73, v74);
      System_Collections_Generic_Dictionary_int__int___Add(
        v57,
        *(_DWORD *)(v58 + 16),
        v73,
        (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v78,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v57;
}


WarBoardEvalValueSquare_EvalValueSquare_o *__fastcall WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_42E68EB & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B5D5C4(
                                  &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__,
                                  (_DWORD)evalValueSquareList,
                                  index,
                                  method);
    byte_42E68EB = 1;
  }
  if ( !evalValueSquareList )
    sub_B5D69C(this, evalValueSquareList);
  return System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
           evalValueSquareList,
           index,
           (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
}


int64_t __fastcall WarBoardAIRoute__GetFlagAdvantage(
        WarBoardAIRoute_o *this,
        int32_t baseClassId,
        int32_t actionClassId,
        const MethodInfo *method)
{
  __int64 v6; // x22
  __int64 v7; // x21
  __int64 v8; // x19

  if ( (byte_42E68FF & 1) == 0 )
  {
    sub_B5D5C4(&SvtClassAttri_TypeInfo, baseClassId, actionClassId, method);
    byte_42E68FF = 1;
  }
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  if ( SvtClassAttri__getMagnification(baseClassId, actionClassId, 0LL) <= 1.0 )
    v6 = 1LL;
  else
    v6 = 524289LL;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  if ( SvtClassAttri__getMagnification(baseClassId, actionClassId, 0LL) < 1.0 )
    v6 |= 0x400000uLL;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  if ( SvtClassAttri__getMagnification(actionClassId, baseClassId, 0LL) >= 1.0 )
    v7 = v6;
  else
    v7 = v6 | 0x100000;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  if ( SvtClassAttri__getMagnification(actionClassId, baseClassId, 0LL) <= 1.0 )
    v8 = v7;
  else
    v8 = v7 | 0x800000;
  if ( WarBoardAIRoute_RouteData__HasFlag_22442196(v8, 0x80000LL, 0LL)
    && WarBoardAIRoute_RouteData__HasFlag_22442196(v8, 0x100000LL, 0LL) )
  {
    v8 |= 0x40000uLL;
  }
  if ( !WarBoardAIRoute_RouteData__HasFlag_22442196(v8, 0x400000LL, 0LL) )
    return v8;
  if ( WarBoardAIRoute_RouteData__HasFlag_22442196(v8, 0x800000LL, 0LL) )
    return v8 | 0x200000;
  return v8;
}


int64_t __fastcall WarBoardAIRoute__GetFlagAroundSquareCheck(
        WarBoardAIRoute_o *this,
        WarBoardSquareData_o *baseSquare,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t masterSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v10; // x27
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Int32_array *linkedSquares; // x19
  __int64 v21; // x8
  unsigned __int64 v22; // x22
  int32_t *v23; // x26
  __int64 v24; // x23
  int32_t v25; // w24
  const MethodInfo *v26; // x2
  WarBoardPieceData_o *v27; // x25
  int32_t *v28; // x19
  __int64 v29; // x26
  int32_t v30; // w27
  int32_t ClassId; // w28
  float Magnification; // s0
  const MethodInfo *v33; // x1
  uint32_t v34; // w24
  const MethodInfo *v35; // x2
  WarBoardAIRoute_o *v36; // x24
  __int64 v38; // x0
  WarBoardAIRoute_o *v39; // [xsp+0h] [xbp-70h]
  struct System_Int32_array *v40; // [xsp+8h] [xbp-68h]
  int32_t v41; // [xsp+18h] [xbp-58h]
  uint32_t value; // [xsp+1Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_42E68FB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__,
      (_DWORD)baseSquare,
      (_DWORD)basePiece,
      piecePlaceData);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SvtClassAttri_TypeInfo, v14, v15, v16);
    this = (WarBoardAIRoute_o *)sub_B5D5C4(&WarBoardAIManager_TypeInfo, v17, v18, v19);
    byte_42E68FB = 1;
  }
  value = 0;
  if ( !baseSquare )
    goto LABEL_52;
  linkedSquares = baseSquare->fields.linkedSquares;
  if ( !linkedSquares )
    goto LABEL_52;
  v21 = *(_QWORD *)&linkedSquares->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    v23 = &linkedSquares->m_Items[1];
    v24 = 1LL;
    v39 = v10;
    v40 = linkedSquares;
    v41 = masterSquareIndex;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v21 )
      {
        v38 = sub_B5D6C8(this);
        sub_B5D668(v38, 0LL);
      }
      v25 = v23[v22];
      this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)this[1].fields.npcData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_23181536((WarBoardData_o *)this, v25, 0LL);
      if ( !this )
        goto LABEL_31;
      v27 = (WarBoardPieceData_o *)this;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v27, v26);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !basePiece )
          break;
        if ( WarBoardPieceData__get_isServant(basePiece, 0LL) || WarBoardPieceData__get_isMaster(v27, 0LL) )
        {
          v28 = v23;
          v29 = v24 | 0x10;
          if ( WarBoardPieceData__get_isServant(v27, 0LL)
            && !WarBoardAIRoute_RouteData__HasFlag_22442196(v24 | 0x10, 0x1000000LL, 0LL) )
          {
            this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
            if ( !this )
              break;
            this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
            if ( !v27->fields._battleServant_k__BackingField )
              break;
            v30 = (int)this;
            ClassId = BattleServantData__getClassId(v27->fields._battleServant_k__BackingField, 0LL);
            if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SvtClassAttri_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            }
            Magnification = SvtClassAttri__getMagnification(v30, ClassId, 0LL);
            masterSquareIndex = v41;
            v10 = v39;
            if ( Magnification > 1.0 )
              v29 = v24 | 0x1000010;
          }
          if ( WarBoardPieceData__get_isMaster(v27, 0LL) )
            v24 = v29 | 0x20;
          else
            v24 = v29;
          v23 = v28;
          linkedSquares = v40;
        }
      }
      else
      {
LABEL_31:
        if ( !basePiece )
          break;
      }
      this = (WarBoardAIRoute_o *)v10->fields.aiRouteMasterData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardAIRoute_AIRouteMasterData__IsMasterServant(
                                    (WarBoardAIRoute_AIRouteMasterData_o *)this,
                                    basePiece->fields._index_k__BackingField,
                                    0LL);
      if ( ((v25 == masterSquareIndex) & ((unsigned int)this ^ 1)) != 0 )
        v24 |= 0x400000000uLL;
      if ( !piecePlaceData )
        break;
      this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_int__uint___TryGetValue(
                                    piecePlaceData,
                                    v25,
                                    &value,
                                    (const MethodInfo_2F3B4DC *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v34 = value;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        this = (WarBoardAIRoute_o *)WarBoardAIManager__GetPieceUnique(v34, v33);
        if ( basePiece->fields._uniqueIndex_k__BackingField != value )
        {
          v36 = this;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          }
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsAllyPiece(basePiece, (WarBoardPieceData_o *)v36, v35);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v36 )
              break;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v36, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              v24 |= 0x800000000uLL;
          }
        }
      }
      LODWORD(v21) = linkedSquares->max_length;
      if ( (__int64)++v22 >= (int)v21 )
        return v24;
    }
LABEL_52:
    sub_B5D69C(this, baseSquare);
  }
  return 1LL;
}


int32_t __fastcall WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
        WarBoardAIRoute_o *this,
        int32_t baseSquareIndex,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicOutOfWarningAreaRange; // x0
  System_Collections_Generic_Dictionary_int__int__o *v13; // x8

  if ( (byte_42E68FA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__,
      baseSquareIndex,
      actionSquareIndex,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7, v8, v9);
    byte_42E68FA = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0LL) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          actionSquareIndex,
          (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                    dicOutOfWarningAreaRange,
                                                                                    baseSquareIndex,
                                                                                    (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( (int)dicOutOfWarningAreaRange > System_Collections_Generic_Dictionary_int__int___get_Item(
                                         this->fields.dicOutOfWarningAreaRange,
                                         actionSquareIndex,
                                         (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange
    || (dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                          dicOutOfWarningAreaRange,
                                                                                          baseSquareIndex,
                                                                                          (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v13 = this->fields.dicOutOfWarningAreaRange) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(dicOutOfWarningAreaRange, v10);
  }
  if ( (_DWORD)dicOutOfWarningAreaRange == System_Collections_Generic_Dictionary_int__int___get_Item(
                                             v13,
                                             actionSquareIndex,
                                             (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 2;
  else
    return 3;
}


int32_t __fastcall WarBoardAIRoute__GetMasterSquareIndex(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardAIRoute_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w9
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *v26; // x8
  int32_t key; // w20
  int v28; // w19
  __int128 v29[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v30; // [xsp+20h] [xbp-40h] BYREF

  v5 = this;
  if ( (byte_42E68E8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__,
      (_DWORD)piecePlaceData,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v15, v16, v17);
    this = (WarBoardAIRoute_o *)sub_B5D5C4(
                                  &Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__,
                                  v18,
                                  v19,
                                  v20);
    byte_42E68E8 = 1;
  }
  memset(&v30, 0, 32);
  aiRouteMasterData = v5->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    goto LABEL_19;
  masterType = aiRouteMasterData->fields.masterType;
  if ( masterType && masterType != 2 )
  {
    if ( masterType == 1 )
      return aiRouteMasterData->fields.masterSquareIndex;
    else
      return 0;
  }
  if ( !piecePlaceData )
LABEL_19:
    sub_B5D69C(this, piecePlaceData);
  System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v29,
    piecePlaceData,
    (const MethodInfo_2F39E40 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
  *(_OWORD *)&v30.fields.dictionary = v29[0];
  v30.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v29[1];
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
            &v30,
            (const MethodInfo_28A3D38 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    if ( !v24 )
      break;
    v26 = v5->fields.aiRouteMasterData;
    if ( !v26 )
      sub_B5D69C(v24, v25);
    key = (int32_t)v30.fields.current.fields.key;
    if ( v26->fields.masterUniqueIndex == HIDWORD(v30.fields.current.fields.key) )
    {
      v28 = 3;
      goto LABEL_15;
    }
  }
  key = 0;
  v28 = 1;
LABEL_15:
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &v30,
    (const MethodInfo_28A3E80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
  if ( (unsigned int)(v28 + 1) >> 2 )
    return key;
  else
    return 0;
}


int32_t __fastcall WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  Il2CppClass *klass; // x8
  System_Func_KeyValuePair_int__uint___bool__o *v20; // x21

  v5 = (Il2CppObject *)this;
  if ( (byte_42E6903 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____,
      (_DWORD)piecePlaceData,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_int__uint___bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_KeyValuePair_int__uint___bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v12, v13, v14);
    this = (WarBoardAIRoute_o *)sub_B5D5C4(
                                  &Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
                                  v15,
                                  v16,
                                  v17);
    byte_42E6903 = 1;
  }
  klass = v5[13].klass;
  if ( !klass )
    sub_B5D69C(this, piecePlaceData);
  if ( LODWORD(klass->_1.name) == 1 )
    return HIDWORD(klass->_1.name);
  v20 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_B5D694(System_Func_KeyValuePair_int__uint___bool__TypeInfo);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v20,
    v5,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    (const MethodInfo_27943B0 *)Method_System_Func_KeyValuePair_int__uint___bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v20,
           (const MethodInfo_1CAC1B4 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetMoveByTargetDistance(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData,
        int32_t actionSquareIndex,
        WarBoardPieceData_o *basePiece,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  Il2CppObject *currentValue; // x19
  WarBoardPieceData_o *monitor; // x22
  const MethodInfo *v31; // x2
  int32_t v32; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  int32_t v34; // w22
  int32_t v35; // w0
  int32_t v36; // w2
  int v37; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x22
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  int32_t v40; // w23
  int32_t v41; // w0
  int v42; // w8
  _BOOL8 v43; // x0
  __int64 v44; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v46; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v48; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E6905 & 1) == 0 )
  {
    sub_B5D5C4(&AStarSearch_TypeInfo, (_DWORD)dicKeyPutIndexValueTargetData, actionSquareIndex, basePiece);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__,
      v23,
      v24,
      v25);
    this = (WarBoardAIRoute_o *)sub_B5D5C4(&WarBoardAIManager_TypeInfo, v26, v27, v28);
    byte_42E6905 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( !dicKeyPutIndexValueTargetData
    || (v46 = dicKeyPutIndexValueTargetData,
        (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___get_Values(
                                       dicKeyPutIndexValueTargetData,
                                       (const MethodInfo_2F5C5BC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0LL) )
  {
    sub_B5D69C(this, dicKeyPutIndexValueTargetData);
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v47,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_23C02E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v43 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v48,
            (const MethodInfo_2763348 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v43 )
      break;
    currentValue = v48.fields.currentValue;
    if ( !v48.fields.currentValue )
      sub_B5D69C(v43, v44);
    monitor = (WarBoardPieceData_o *)v48.fields.currentValue[1].monitor;
    if ( !monitor || LODWORD(v48.fields.currentValue[4].monitor) != actionSquareIndex )
      goto LABEL_14;
    if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    }
    if ( WarBoardAIManager__IsAllyPiece(basePiece, monitor, v31) )
    {
      LODWORD(currentValue[4].klass) = 2;
    }
    else
    {
LABEL_14:
      v32 = (int32_t)currentValue[4].monitor;
      if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AStarSearch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      }
      v33 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v32,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v34 = System_Linq_Enumerable__Count_int_(
              v33,
              (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
      v35 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
      v36 = (int32_t)currentValue[4].monitor;
      if ( v34 == v35 )
        v37 = 2;
      else
        v37 = 3;
      if ( v34 < v35 )
        v37 = 1;
      LODWORD(currentValue[4].klass) = v37;
      v38 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v36,
                                                                   1,
                                                                   0LL,
                                                                   0LL);
      if ( v38 && (klass = (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[6].klass) != 0LL )
      {
        v40 = System_Linq_Enumerable__Count_int_(
                klass,
                (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
        v41 = System_Linq_Enumerable__Count_int_(
                v38,
                (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
        if ( v41 >= v40 )
        {
          if ( v41 == v40 )
            v42 = 2;
          else
            v42 = 3;
        }
        else
        {
          v42 = 1;
        }
      }
      else
      {
        v42 = 0;
      }
      HIDWORD(currentValue[4].klass) = v42;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v48,
    (const MethodInfo_2763344 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
  return v46;
}


int32_t __fastcall WarBoardAIRoute__GetRangeShortMost(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *dicPieceList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int32_t v24; // w19
  int32_t key; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  int32_t v27; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_42E68EC & 1) == 0 )
  {
    sub_B5D5C4(&AStarSearch_TypeInfo, (_DWORD)dicPieceList, baseSquareIndex, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__,
      v18,
      v19,
      v20);
    this = (WarBoardAIRoute_o *)sub_B5D5C4(
                                  &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                  v21,
                                  v22,
                                  v23);
    byte_42E68EC = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !dicPieceList )
    sub_B5D69C(this, dicPieceList);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v30,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)dicPieceList,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v24 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v30,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v30.fields.current.fields.key;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                 0LL,
                                                                 baseSquareIndex,
                                                                 key,
                                                                 0,
                                                                 0LL,
                                                                 0LL);
    v27 = System_Linq_Enumerable__Count_int_(
            v26,
            (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
    if ( v24 > v27 || v24 == -1 )
      v24 = v27;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v30,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  return v24;
}


int32_t __fastcall WarBoardAIRoute__GetRequiredCost(
        WarBoardAIRoute_o *this,
        int32_t moveCost,
        int32_t masterMoveCost,
        int32_t replaceCount,
        int32_t actionCount,
        int32_t masterActionCount,
        int32_t masterReplaceCount,
        const MethodInfo *method)
{
  return masterActionCount * masterMoveCost
       + (actionCount + 2 * replaceCount) * moveCost
       + (masterMoveCost + moveCost) * masterReplaceCount;
}


System_Collections_Generic_Dictionary_uint__int__o *__fastcall WarBoardAIRoute__GetRouteDataActionList(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t *replaceCount,
        int32_t *actionCount,
        int32_t *masterActionCount,
        int32_t *masterReplaceCount,
        const MethodInfo *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_Collections_Generic_Dictionary_uint__int__o *v33; // x19
  __int64 v34; // x0
  __int64 v35; // x1
  _BOOL8 v36; // x0
  __int64 v37; // x1
  WarBoardAIRoute_RouteData_o *current; // x24
  _BOOL8 HasFlag; // x0
  __int64 v40; // x1
  struct WarBoardPieceData_o *basePiece; // x8
  bool v42; // zf
  int32_t *v43; // x8
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *v45; // x8
  int32_t *v46; // x8
  uint32_t uniqueIndex_k__BackingField; // w24
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+20h] [xbp-70h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_42E68E7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__,
      (_DWORD)routeDataList,
      (_DWORD)replaceCount,
      actionCount);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v24, v25, v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__,
      v27,
      v28,
      v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v30, v31, v32);
    byte_42E68E7 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  value = 0;
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  v33 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v33,
    (const MethodInfo_2EE4278 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_B5D69C(v34, v35);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v49,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)routeDataList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v50 = v49;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v50,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v36 )
      break;
    current = (WarBoardAIRoute_RouteData_o *)v50.fields.current;
    if ( !v50.fields.current )
      sub_B5D69C(v36, v37);
    if ( !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v50.fields.current, 0LL) )
    {
      value = 0;
      HasFlag = WarBoardAIRoute_RouteData__HasFlag(current, 0x4000000LL, 0LL);
      basePiece = current->fields.basePiece;
      if ( HasFlag )
      {
        if ( !basePiece )
          sub_B5D69C(HasFlag, v40);
        v42 = basePiece->fields._type_k__BackingField == 1;
        v43 = masterReplaceCount;
        if ( !v42 )
        {
          actionPiece = current->fields.actionPiece;
          if ( !actionPiece )
            sub_B5D69C(HasFlag, v40);
          if ( actionPiece->fields._type_k__BackingField == 1 )
            v43 = masterReplaceCount;
          else
            v43 = replaceCount;
        }
        ++*v43;
        v45 = current->fields.actionPiece;
        if ( !v45 )
          sub_B5D69C(HasFlag, v40);
      }
      else
      {
        if ( !basePiece )
          sub_B5D69C(HasFlag, v40);
        if ( basePiece->fields._type_k__BackingField == 1 )
          v46 = masterActionCount;
        else
          v46 = actionCount;
        ++*v46;
        v45 = current->fields.basePiece;
        if ( !v45 )
          sub_B5D69C(HasFlag, v40);
      }
      if ( !v33 )
        sub_B5D69C(HasFlag, v40);
      uniqueIndex_k__BackingField = v45->fields._uniqueIndex_k__BackingField;
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v33,
        uniqueIndex_k__BackingField,
        &value,
        (const MethodInfo_2EE6A2C *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v33,
        uniqueIndex_k__BackingField,
        value + 1,
        (const MethodInfo_2EE4DF4 *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v50,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
  return v33;
}


int32_t __fastcall WarBoardAIRoute__GetRouteSumPieceActionCost(
        WarBoardAIRoute_o *this,
        System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *routeDataList,
        WarBoardPieceData_o *targetPiece,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v27; // x20

  if ( (byte_42E6906 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____68849160,
      (_DWORD)routeDataList,
      (_DWORD)targetPiece,
      method);
    sub_B5D5C4(&Method_System_Func_WarBoardAIRoute_RouteData__int___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo, v15, v16, v17);
    byte_42E6906 = 1;
  }
  v18 = sub_B5D694(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass84_0___ctor((WarBoardAIRoute___c__DisplayClass84_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = targetPiece;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v18 + 16),
    (System_Int32_array **)targetPiece,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v27,
    (Il2CppObject *)v18,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    (const MethodInfo_2C2F87C *)Method_System_Func_WarBoardAIRoute_RouteData__int___ctor__);
  return System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v27,
           (const MethodInfo_1CB6D68 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____68849160);
}


void __fastcall WarBoardAIRoute__GetTargetToDistance(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicPutSquareIndex,
        System_Func_IWarBoardObjectData__bool__o *excludeCond,
        WarBoardPieceData_o *basePiece,
        int32_t baseSquareIndex,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o **dicKeyPutIndexValueTargetData,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v12; // x23
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppObject *key; // x24
  Il2CppObject *value; // x25
  WarBoardPieceData_array *allEnemyPiece; // x27
  WarBoardAIRoute_TargetData_o *v42; // x26
  __int64 v43; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+30h] [xbp-80h] BYREF

  v12 = this;
  if ( (byte_42E68F4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__,
      (_DWORD)dicPutSquareIndex,
      (_DWORD)excludeCond,
      basePiece);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__,
      v13,
      v14,
      v15);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v16,
      v17,
      v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v19,
      v20,
      v21);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v22,
      v23,
      v24);
    sub_B5D5C4(&Method_System_Func_IWarBoardObjectData__bool__Invoke__, v25, v26, v27);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__,
      v28,
      v29,
      v30);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__,
      v31,
      v32,
      v33);
    this = (WarBoardAIRoute_o *)sub_B5D5C4(&WarBoardAIRoute_TargetData_TypeInfo, v34, v35, v36);
    byte_42E68F4 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  if ( !dicPutSquareIndex )
    sub_B5D69C(this, dicPutSquareIndex);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v44,
    dicPutSquareIndex,
    (const MethodInfo_2F5CDF8 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v45 = v44;
  while ( 1 )
  {
    v37 = System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v45,
            (const MethodInfo_27629E8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v37 )
      break;
    key = v45.fields.current.fields.key;
    value = v45.fields.current.fields.value;
    if ( excludeCond )
    {
      if ( !v45.fields.current.fields.value )
        sub_B5D69C(v37, v38);
      if ( System_Func_BattleBuffData_BuffData__bool___Invoke(
             (System_Func_BattleBuffData_BuffData__bool__o *)excludeCond,
             (BattleBuffData_BuffData_o *)v45.fields.current.fields.value[3].monitor,
             (const MethodInfo_2C2ECE4 *)Method_System_Func_IWarBoardObjectData__bool__Invoke__) )
      {
        continue;
      }
    }
    allEnemyPiece = v12->fields.allEnemyPiece;
    v42 = (WarBoardAIRoute_TargetData_o *)sub_B5D694(WarBoardAIRoute_TargetData_TypeInfo);
    WarBoardAIRoute_TargetData___ctor_22447284(
      v42,
      (WarBoardAIRoute_TargetData_o *)value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      0LL);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_B5D69C(0LL, v43);
    System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
      *dicKeyPutIndexValueTargetData,
      (int64_t)key,
      v42,
      (const MethodInfo_2F5C818 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v45,
    (const MethodInfo_2762B50 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


void __fastcall WarBoardAIRoute__GetTargetToDistanceUsingIndividuality(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicIndividualityPutSqareIndex,
        System_Func_IWarBoardObjectData__bool__o *excludeCond,
        WarBoardPieceData_o *basePiece,
        int32_t baseSquareIndex,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o **dicKeyPutIndexValueTargetData,
        const MethodInfo *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  __int64 v93; // x21
  __int64 v94; // x0
  __int64 v95; // x1
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v108; // x22
  __int64 v109; // x1
  const MethodInfo *v110; // x2
  WarBoardAiTargetCacher_o *aiTargetCacher; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  TargetDetector_o *DetectorByTrendKey; // x0
  __int64 v114; // x1
  int32_t Id_k__BackingField; // w27
  __int64 v116; // x1
  const MethodInfo *v117; // x2
  System_Collections_Generic_IEnumerable_TSource__o *Item; // x0
  WarBoardAiTargetCacher_o *v119; // x0
  System_Collections_Generic_IEnumerable_TSource__o *TargetObjectsByTrendId; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *klass; // x23
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v128; // x28
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v129; // x23
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v136; // x28
  WarBoardAIRoute___c_c *v137; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__64_2; // x23
  Il2CppObject *v140; // x19
  struct WarBoardAIRoute___c_StaticFields *v141; // x0
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v148; // x28
  WarBoardAIRoute___c_c *v149; // x0
  struct WarBoardAIRoute___c_StaticFields *v150; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__64_3; // x23
  Il2CppObject *v152; // x19
  struct WarBoardAIRoute___c_StaticFields *v153; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v160; // x0
  __int64 v161; // x1
  WarBoardPieceData_o *v162; // x27
  int32_t v163; // w24
  WarBoardPieceData_array *allEnemyPiece; // x19
  WarBoardAIRoute_TargetData_o *v165; // x23
  __int64 v166; // x1
  BattleServantConfConponent_o *v167; // [xsp+0h] [xbp-C0h]
  BattleServantConfConponent_o *v168; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v170; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v171; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_42E68F5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__,
      (_DWORD)dicIndividualityPutSqareIndex,
      (_DWORD)excludeCond,
      basePiece);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__, v12, v13, v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___, v33, v34, v35);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___, v36, v37, v38);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___, v39, v40, v41);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v42, v43, v44);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v45,
      v46,
      v47);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v48,
      v49,
      v50);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v51,
      v52,
      v53);
    sub_B5D5C4(&Method_System_Func_IWarBoardObjectData__int___ctor__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Func_IWarBoardObjectData__bool___ctor__, v57, v58, v59);
    sub_B5D5C4(&System_Func_IWarBoardObjectData__int__TypeInfo, v60, v61, v62);
    sub_B5D5C4(&System_Func_IWarBoardObjectData__bool__TypeInfo, v63, v64, v65);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__,
      v66,
      v67,
      v68);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__,
      v69,
      v70,
      v71);
    sub_B5D5C4(&WarBoardAIRoute_TargetData_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__, v75, v76, v77);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__, v78, v79, v80);
    sub_B5D5C4(
      &Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
      v81,
      v82,
      v83);
    sub_B5D5C4(
      &Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
      v84,
      v85,
      v86);
    sub_B5D5C4(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo, v87, v88, v89);
    sub_B5D5C4(&WarBoardAIRoute___c_TypeInfo, v90, v91, v92);
    byte_42E68F5 = 1;
  }
  memset(&v171, 0, sizeof(v171));
  v93 = sub_B5D694(WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass64_0___ctor((WarBoardAIRoute___c__DisplayClass64_0_o *)v93, 0LL);
  if ( !v93
    || (*(_QWORD *)(v93 + 16) = excludeCond,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v93 + 16),
          (System_Int32_array **)excludeCond,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101),
        *(_QWORD *)(v93 + 24) = basePiece,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v93 + 24),
          (System_Int32_array **)basePiece,
          v102,
          v103,
          v104,
          v105,
          v106,
          v107),
        *(_DWORD *)(v93 + 32) = baseSquareIndex,
        v108 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo),
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
          v108,
          (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__),
        !dicIndividualityPutSqareIndex) )
  {
    sub_B5D69C(v94, v95);
  }
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v170,
    dicIndividualityPutSqareIndex,
    (const MethodInfo_2F5CDF8 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v168 = (BattleServantConfConponent_o *)(v93 + 40);
  v171 = v170;
  v167 = (BattleServantConfConponent_o *)(v93 + 48);
  while ( System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v171,
            (const MethodInfo_27629E8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_B5D69C(0LL, v109);
    current = v171.fields.current;
    DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(
                           aiTargetCacher,
                           (int64_t)v171.fields.current.fields.key,
                           v110);
    if ( DetectorByTrendKey )
    {
      Id_k__BackingField = DetectorByTrendKey->fields._Id_k__BackingField;
      if ( !v108 )
        goto LABEL_45;
    }
    else
    {
      Id_k__BackingField = 0;
      if ( !v108 )
LABEL_45:
        sub_B5D69C(DetectorByTrendKey, v114);
    }
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v108,
           Id_k__BackingField,
           (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                    v108,
                                                                    Id_k__BackingField,
                                                                    (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
LABEL_37:
      TargetObjectsByTrendId = Item;
      goto LABEL_38;
    }
    v119 = this->fields.aiTargetCacher;
    if ( !v119 )
      sub_B5D69C(0LL, v116);
    TargetObjectsByTrendId = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardAiTargetCacher__GetTargetObjectsByTrendId(
                                                                                    v119,
                                                                                    (int64_t)current.fields.key,
                                                                                    v117);
    if ( TargetObjectsByTrendId )
    {
      klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v168->klass;
      if ( !v168->klass )
      {
        klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_IWarBoardObjectData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          klass,
          (Il2CppObject *)v93,
          Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
        v168->klass = (BattleServantConfConponent_c *)klass;
        sub_B5D560(v168, (System_Int32_array **)klass, v122, v123, v124, v125, v126, v127);
      }
      v128 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               TargetObjectsByTrendId,
               (System_Func_TSource__bool__o *)klass,
               (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
      v129 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v167->klass;
      if ( !v167->klass )
      {
        v129 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_IWarBoardObjectData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          v129,
          (Il2CppObject *)v93,
          Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
          (const MethodInfo_2C2F87C *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v167->klass = (BattleServantConfConponent_c *)v129;
        sub_B5D560(v167, (System_Int32_array **)v129, v130, v131, v132, v133, v134, v135);
      }
      v136 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
               v128,
               (System_Func_TSource__TKey__o *)v129,
               (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
      v137 = WarBoardAIRoute___c_TypeInfo;
      if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
        v137 = WarBoardAIRoute___c_TypeInfo;
      }
      static_fields = v137->static_fields;
      _9__64_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__64_2;
      if ( !_9__64_2 )
      {
        if ( (BYTE3(v137->vtable._0_Equals.methodPtr) & 4) != 0 && !v137->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v137);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
        }
        v140 = (Il2CppObject *)static_fields->__9;
        _9__64_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_IWarBoardObjectData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__64_2,
          v140,
          Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
          (const MethodInfo_2C2F87C *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v141 = WarBoardAIRoute___c_TypeInfo->static_fields;
        v141->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v141->__9__64_2,
          (System_Int32_array **)_9__64_2,
          v142,
          v143,
          v144,
          v145,
          v146,
          v147);
      }
      v148 = System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
               v136,
               (System_Func_TSource__TKey__o *)_9__64_2,
               (const MethodInfo_1CB702C *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
      v149 = WarBoardAIRoute___c_TypeInfo;
      if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
        v149 = WarBoardAIRoute___c_TypeInfo;
      }
      v150 = v149->static_fields;
      _9__64_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v150->__9__64_3;
      if ( !_9__64_3 )
      {
        if ( (BYTE3(v149->vtable._0_Equals.methodPtr) & 4) != 0 && !v149->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v149);
          v150 = WarBoardAIRoute___c_TypeInfo->static_fields;
        }
        v152 = (Il2CppObject *)v150->__9;
        _9__64_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_IWarBoardObjectData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__64_3,
          v152,
          Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
          (const MethodInfo_2C2F87C *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v153 = WarBoardAIRoute___c_TypeInfo->static_fields;
        v153->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v153->__9__64_3,
          (System_Int32_array **)_9__64_3,
          v154,
          v155,
          v156,
          v157,
          v158,
          v159);
      }
      v160 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                    v148,
                                                                    (System_Func_TSource__TKey__o *)_9__64_3,
                                                                    (const MethodInfo_1CB702C *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                                    v160,
                                                                    (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
      goto LABEL_37;
    }
LABEL_38:
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v108,
      Id_k__BackingField,
      (WarBoardAIRoute_RouteData_o *)TargetObjectsByTrendId,
      (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( TargetObjectsByTrendId )
    {
      v162 = *(WarBoardPieceData_o **)(v93 + 24);
      v163 = *(_DWORD *)(v93 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v165 = (WarBoardAIRoute_TargetData_o *)sub_B5D694(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_22448372(
        v165,
        (WarBoardAIRoute_TargetData_o *)current.fields.value,
        (IWarBoardObjectData_o *)TargetObjectsByTrendId,
        v162,
        v163,
        allEnemyPiece,
        0LL);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_B5D69C(0LL, v166);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
        *dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        v165,
        (const MethodInfo_2F5C818 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_B5D69C(0LL, v161);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Remove(
        *dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        (const MethodInfo_2F5E1E8 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v171,
    (const MethodInfo_2762B50 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetTargetToDistance_21394984(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x22
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *dicUniqueKeyTarget; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  WarBoardAIRoute_PutSquareTarget_o *Item; // x24
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v37; // x23
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x26
  const MethodInfo *v40; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicIndividualityPutSqareIndex; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v42; // x26
  const MethodInfo *v43; // x6
  const MethodInfo *v44; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E68F6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__,
      (_DWORD)basePiece,
      (_DWORD)routeDataList,
      *(_QWORD *)&baseSquareIndex);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_IWarBoardObjectData__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_IWarBoardObjectData__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__, v21, v22, v23);
    sub_B5D5C4(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo, v24, v25, v26);
    byte_42E68F6 = 1;
  }
  dicKeyPutIndexValueTargetData = 0LL;
  v27 = sub_B5D694(WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass65_0___ctor((WarBoardAIRoute___c__DisplayClass65_0_o *)v27, 0LL);
  if ( !v27
    || (*(_QWORD *)(v27 + 16) = routeDataList,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v27 + 16),
          (System_Int32_array **)routeDataList,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35),
        !basePiece)
    || (dicUniqueKeyTarget = this->fields.dicUniqueKeyTarget) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                 dicUniqueKeyTarget,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_2EE8918 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v37 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B5D694(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo),
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
          v37,
          (const MethodInfo_2F5BC68 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = v37,
        !Item) )
  {
    sub_B5D69C(dicUniqueKeyTarget, v29);
  }
  dicObjectPutSquareIndex = Item->fields.dicObjectPutSquareIndex;
  v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v39,
    (Il2CppObject *)v27,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    dicObjectPutSquareIndex,
    (System_Func_IWarBoardObjectData__bool__o *)v39,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v40);
  dicIndividualityPutSqareIndex = Item->fields.dicIndividualityPutSqareIndex;
  v42 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v42,
    (Il2CppObject *)v27,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
  WarBoardAIRoute__GetTargetToDistanceUsingIndividuality(
    this,
    dicIndividualityPutSqareIndex,
    (System_Func_IWarBoardObjectData__bool__o *)v42,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v43);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    Item->fields.dicSquarePutSqareIndex,
    0LL,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v44);
  return v37;
}


float __fastcall WarBoardAIRoute__GetThinkingThreshold(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_B5D69C(this, method);
  return (float)npcData->fields.lowerThinkingValue / 100.0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsActable(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        int32_t basePieceActionCount,
        int32_t requiredCost,
        int32_t sumPieceActionCost,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v10; // x20
  bool isMaster; // w0
  __int64 v12; // x8
  int v13; // w20

  v10 = this;
  if ( (byte_42E68FD & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B5D5C4(
                                  &Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__,
                                  (_DWORD)basePiece,
                                  basePieceActionCount,
                                  *(_QWORD *)&requiredCost);
    byte_42E68FD = 1;
  }
  if ( !basePiece )
    goto LABEL_13;
  if ( (WarBoardPieceData__EnableMoveBySelf(basePiece, sumPieceActionCost, 0LL)
     || WarBoardPieceData__EnableAttack(basePiece, sumPieceActionCost, 0LL))
    && (WarBoardPieceData__get_isInfinitelyActable(basePiece, 0LL)
     || basePiece->fields._currentActionCount_k__BackingField > basePieceActionCount) )
  {
    isMaster = WarBoardPieceData__get_isMaster(basePiece, 0LL);
    v12 = 32LL;
    if ( isMaster )
      v12 = 36LL;
    v13 = *(_DWORD *)((char *)&v10->klass + v12);
    this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
      return SHIDWORD(this[3].fields.allAllyPiece) >= v13 + requiredCost;
LABEL_13:
    sub_B5D69C(this, basePiece);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsActableReplace(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        WarBoardPieceData_o *actionPiece,
        int32_t requiredCost,
        System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t sumPieceActionCost,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  __int64 v28; // x20
  WarBoardPieceData_o *Instance; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WarBoardPieceData_o **v37; // x25
  bool v38; // w8
  const MethodInfo *v39; // x3
  int32_t RouteSumPieceActionCost; // w23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v41; // x21
  __int64 v42; // x8

  if ( (byte_42E6901 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___,
      (_DWORD)basePiece,
      (_DWORD)actionPiece,
      *(_QWORD *)&requiredCost);
    sub_B5D5C4(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__, v22, v23, v24);
    sub_B5D5C4(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo, v25, v26, v27);
    byte_42E6901 = 1;
  }
  v28 = sub_B5D694(WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass76_0___ctor((WarBoardAIRoute___c__DisplayClass76_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_25;
  *(_QWORD *)(v28 + 16) = actionPiece;
  v37 = (WarBoardPieceData_o **)(v28 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v28 + 16),
    (System_Int32_array **)actionPiece,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  Instance = *(WarBoardPieceData_o **)(v28 + 16);
  if ( !Instance )
    goto LABEL_25;
  v38 = WarBoardPieceData__EnableSwapByOther(Instance, 0, 0LL);
  Instance = 0LL;
  if ( !v38 )
    return (char)Instance;
  if ( !basePiece )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(basePiece, 0LL) )
    goto LABEL_10;
  Instance = *v37;
  if ( !*v37 )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(Instance, 0LL) )
  {
LABEL_10:
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( *((_DWORD *)&Instance[2].fields._isNotIncludeWin_k__BackingField + 1) < this->fields.moveCost
                                                                               + requiredCost
                                                                               + this->fields.masterMoveCost )
      goto LABEL_23;
  }
  else
  {
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( *((_DWORD *)&Instance[2].fields._isNotIncludeWin_k__BackingField + 1) < requiredCost
                                                                               + 2 * this->fields.moveCost )
      goto LABEL_23;
  }
  RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                              (WarBoardAIRoute_o *)Instance,
                              routeDataList,
                              *v37,
                              v39);
  if ( !WarBoardPieceData__EnableMoveBySelf(basePiece, sumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v37;
  if ( !*v37 )
    goto LABEL_25;
  if ( !WarBoardPieceData__EnableSwapByOther(Instance, RouteSumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v37;
  if ( !*v37 )
LABEL_25:
    sub_B5D69C(Instance, v30);
  if ( !WarBoardPieceData__get_isInfinitelyActable(Instance, 0LL) )
  {
    v41 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v41,
      (Il2CppObject *)v28,
      Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    Instance = (WarBoardPieceData_o *)System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
                                        (System_Func_TSource__bool__o *)v41,
                                        (const MethodInfo_1CA8A5C *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    v42 = *(_QWORD *)(v28 + 16);
    if ( v42 )
    {
      if ( *(_DWORD *)(v42 + 36) > (int)Instance )
        goto LABEL_22;
LABEL_23:
      LOBYTE(Instance) = 0;
      return (char)Instance;
    }
    goto LABEL_25;
  }
LABEL_22:
  LOBYTE(Instance) = 1;
  return (char)Instance;
}


bool __fastcall WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
        System_Collections_Generic_List_int____o *shortestEnemyRoute,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int____o *v6; // x21
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  unsigned __int64 v19; // x20
  char i; // w21
  Il2CppObject *current; // x21
  void *monitor; // x9
  signed __int64 v23; // x24
  unsigned __int64 v24; // x25
  _BOOL8 v25; // x0
  __int64 v26; // x1
  __int64 v28; // x0
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-60h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_42E68F3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__,
      (_DWORD)piecePlaceData,
      isDefenseSquare,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v13, v14, v15);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_B5D5C4(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v16,
                                                                       v17,
                                                                       v18);
    byte_42E68F3 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !v6 )
    sub_B5D69C(shortestEnemyRoute, piecePlaceData);
  v19 = !isDefenseSquare;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v30 = v29;
  for ( i = 0; ; i = 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v25 )
      break;
    current = v30.fields.current;
    if ( !v30.fields.current )
      sub_B5D69C(v25, v26);
    monitor = v30.fields.current[1].monitor;
    if ( (int)monitor - 1 <= (int)v19 )
    {
LABEL_17:
      i = 0;
      break;
    }
    if ( (unsigned int)v30.fields.current[1].monitor <= v19 )
    {
LABEL_20:
      v28 = sub_B5D6C8(v25);
      sub_B5D668(v28, 0LL);
    }
    v23 = (int)monitor - 1;
    v24 = v19;
    while ( 1 )
    {
      if ( !piecePlaceData )
        sub_B5D69C(v25, v26);
      v25 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
              piecePlaceData,
              *((_DWORD *)&current[2].klass + v24),
              (const MethodInfo_2F39B30 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( v25 )
        break;
      if ( (__int64)++v24 >= v23 )
        goto LABEL_17;
      if ( v24 >= LODWORD(current[1].monitor) )
        goto LABEL_20;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
        DefenseAreaData_o *defenseArea,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0

  if ( (byte_42E68F0 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, index, isDefenseSquare, method);
    byte_42E68F0 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !defenseArea )
    sub_B5D69C(v7, *(_QWORD *)&index);
  if ( BalanceConfig_TypeInfo->static_fields->IsEnableOldBlockShortestRoute )
    return WarBoardAIRoute__IsBlockShortestRouteEnemyAndMasterOld(
             defenseArea->fields._ShortestRoutes_k__BackingField,
             index,
             isDefenseSquare,
             method);
  else
    return WarBoardAIRoute__IsBlockShortestRouteEnemyAndMasterAll(
             defenseArea->fields._AllShortestRoutes_k__BackingField,
             index,
             isDefenseSquare,
             method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsBlockShortestRouteEnemyAndMasterAll(
        System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *allShortestRoute,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *v6; // x21
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w22
  bool v32; // w21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppClass *klass; // x0
  unsigned int monitor; // w9
  __int64 v37; // x11
  _BOOL8 v38; // x0
  __int64 v39; // x1
  int v40; // w8
  int v41; // w28
  int v42; // w25
  int v43; // w8
  __int64 v44; // x0
  int v45; // w9
  _WORD v47[26]; // [xsp+8h] [xbp-D8h] BYREF
  int v48; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v50; // [xsp+60h] [xbp-80h] BYREF

  v6 = allShortestRoute;
  if ( (byte_42E68F2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__,
      index,
      isDefenseSquare,
      method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__,
      v7,
      v8,
      v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v13, v14, v15);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__,
      v16,
      v17,
      v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__,
      v19,
      v20,
      v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v22, v23, v24);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__,
      v25,
      v26,
      v27);
    allShortestRoute = (System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *)sub_B5D5C4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v28, v29, v30);
    byte_42E68F2 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  memset(&v50, 0, sizeof(v50));
  v48 = 0;
  if ( !v6 )
    sub_B5D69C(allShortestRoute, *(_QWORD *)&index);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v47,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v6,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v50 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v47;
  v31 = 0;
  v32 = 0;
  while ( 1 )
  {
    v33 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v50,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    if ( !v33 )
      break;
    if ( !v50.fields.current.fields.value )
      sub_B5D69C(v33, v34);
    klass = v50.fields.current.fields.value[1].klass;
    if ( !klass )
      sub_B5D69C(0LL, v34);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v47,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v49 = *(System_Collections_Generic_List_Enumerator_T__o *)v47;
    do
    {
LABEL_13:
      v38 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v49,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v38 )
      {
        *(_DWORD *)&v47[2 * v31 + 20] = 117;
        v40 = v48;
        goto LABEL_17;
      }
      if ( !v49.fields.current )
        sub_B5D69C(v38, v39);
      monitor = (unsigned int)v49.fields.current[1].monitor;
      v37 = !isDefenseSquare;
    }
    while ( (int)(monitor - 1) <= !isDefenseSquare );
    while ( 1 )
    {
      if ( (unsigned int)v37 >= monitor )
      {
        v44 = sub_B5D6C8(v38);
        sub_B5D668(v44, 0LL);
      }
      if ( *((_DWORD *)&v49.fields.current[2].klass + v37) == index )
        break;
      if ( (int)++v37 >= (int)(monitor - 1) )
        goto LABEL_13;
    }
    *(_DWORD *)&v47[2 * v31 + 20] = 144;
    v40 = v48;
    v32 = 1;
LABEL_17:
    v41 = v40 + 1;
    v48 = v40 + 1;
    v42 = v40 + 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v49,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v31 = 0;
    if ( v42 )
    {
      v31 = v42 - 1;
      v43 = *(_DWORD *)&v47[2 * v42 + 18];
      if ( v43 == 117 )
      {
        v48 = v42 - 1;
      }
      else
      {
        v31 = v42;
        if ( v43 == 144 )
          goto LABEL_25;
      }
    }
  }
  *(_DWORD *)&v47[2 * v31 + 20] = 142;
  v41 = ++v48;
LABEL_25:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v50,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
  if ( !v41 )
    return 0;
  v45 = *(_DWORD *)&v47[2 * v41 + 18];
  if ( v45 == 142 )
  {
    v32 = 0;
    goto LABEL_30;
  }
  if ( v45 == 144 )
  {
LABEL_30:
    v48 = v41 - 1;
    return v32;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsBlockShortestRouteEnemyAndMasterOld(
        System_Collections_Generic_List_int____o *shortestEnemyRoute,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int____o *v6; // x21
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  _BOOL8 v16; // x20
  unsigned int monitor; // w9
  __int64 v18; // x11
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int v21; // w19
  int v22; // w20
  __int64 v24; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-38h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_42E68F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, index, isDefenseSquare, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v10, v11, v12);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_B5D5C4(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v13,
                                                                       v14,
                                                                       v15);
    byte_42E68F1 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !v6 )
    sub_B5D69C(shortestEnemyRoute, *(_QWORD *)&index);
  v16 = !isDefenseSquare;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  do
  {
LABEL_10:
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v19 )
    {
      v21 = 0;
      v22 = 1;
      goto LABEL_13;
    }
    if ( !v26.fields.current )
      sub_B5D69C(v19, v20);
    monitor = (unsigned int)v26.fields.current[1].monitor;
    v18 = v16;
  }
  while ( (int)(monitor - 1) <= v16 );
  while ( 1 )
  {
    if ( (unsigned int)v18 >= monitor )
    {
      v24 = sub_B5D6C8(v19);
      sub_B5D668(v24, 0LL);
    }
    if ( *((_DWORD *)&v26.fields.current[2].klass + v18) == index )
      break;
    if ( (int)++v18 >= (int)(monitor - 1) )
      goto LABEL_10;
  }
  v21 = 1;
  v22 = 3;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v21 & ((unsigned int)(v22 + 1) >> 2);
}


bool __fastcall WarBoardAIRoute__IsDetour(
        System_Int32_array *route,
        System_Int32_array *blockPieces,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w0
  int v31; // w23
  System_Func_int__bool__o **v32; // x21
  System_Func_int__bool__o *v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int v40; // w8

  if ( (byte_42E68EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)blockPieces, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__, v15, v16, v17);
    sub_B5D5C4(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo, v18, v19, v20);
    byte_42E68EF = 1;
  }
  v21 = sub_B5D694(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass58_0___ctor((WarBoardAIRoute___c__DisplayClass58_0_o *)v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  *(_QWORD *)(v21 + 16) = route;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)route, v24, v25, v26, v27, v28, v29);
  v30 = System_Linq_Enumerable__Count_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v21 + 16),
          (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
  if ( v30 < 2 )
    return 0;
  v31 = v30 - 1;
  *(_DWORD *)(v21 + 24) = 1;
  if ( v30 - 1 < 2 )
    return 0;
  v32 = (System_Func_int__bool__o **)(v21 + 32);
  while ( 1 )
  {
    v33 = *v32;
    if ( !*v32 )
    {
      v33 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v33,
        (Il2CppObject *)v21,
        Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
        (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
      *(_QWORD *)(v21 + 32) = v33;
      sub_B5D560((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
    }
    if ( BasicHelper__Any_int__28142236(
           blockPieces,
           (System_Func_T__bool__o *)v33,
           (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384) )
    {
      break;
    }
    v40 = *(_DWORD *)(v21 + 24) + 1;
    *(_DWORD *)(v21 + 24) = v40;
    if ( v40 >= v31 )
      return 0;
  }
  return 1;
}


bool __fastcall WarBoardAIRoute__IsThinkingThreshold(WarBoardAIRoute_o *this, float v, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_B5D69C(this, method);
  return (float)((float)npcData->fields.lowerThinkingValue / 100.0) > v;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute__LinkedCount(
        WarBoardAIRoute_o *this,
        int32_t actionSquareIndex,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t *attackByLinkEnemy,
        int32_t *attackByLinkAlly,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  WarBoardData_o *Square; // x0
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  unsigned __int64 v20; // x25
  int32_t v21; // w22
  const MethodInfo *v22; // x1
  __int64 v23; // x0
  uint32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E6900 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__,
      actionSquareIndex,
      (_DWORD)piecePlaceData,
      attackByLinkEnemy);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&WarBoardAIManager_TypeInfo, v13, v14, v15);
    byte_42E6900 = 1;
  }
  value = 0;
  ++*attackByLinkEnemy;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  Square = (WarBoardData_o *)WarBoardAIManager__GetSquare(actionSquareIndex, *(const MethodInfo **)&actionSquareIndex);
  if ( !Square )
    goto LABEL_30;
  npcEntityDict = Square->fields.npcEntityDict;
  if ( !npcEntityDict )
    goto LABEL_30;
  entries = npcEntityDict->fields.entries;
  if ( (int)entries >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)entries )
      {
        v23 = sub_B5D6C8(Square);
        sub_B5D668(v23, 0LL);
      }
      if ( !piecePlaceData )
        break;
      v21 = *(&npcEntityDict->fields.count + v20);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v21,
             &value,
             (const MethodInfo_2F3B4DC *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Square = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)Square[1].fields.reinforcementsSaveList;
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardData__GetPiece_23222488(Square, value, 1, 0LL);
        if ( !Square )
          break;
        if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0LL) )
          ++*attackByLinkAlly;
      }
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v21, v22);
      if ( Square )
      {
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v21, v17);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0LL);
        if ( ((unsigned __int8)Square & 1) != 0 )
          ++*attackByLinkEnemy;
      }
      LODWORD(entries) = npcEntityDict->fields.entries;
      if ( (__int64)++v20 >= (int)entries )
        return;
    }
LABEL_30:
    sub_B5D69C(Square, v17);
  }
}


void __fastcall WarBoardAIRoute__LinkedPieceCount(
        WarBoardAIRoute_o *this,
        WarBoardAIRoute_RouteData_o **routeData,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        System_Collections_Generic_List_int__o *alreadyGetItemSquares,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  WarBoardAIRoute_RouteData_o *v17; // x8
  struct WarBoardSquareData_o *actionSquare; // x9
  struct System_Int32_array *linkedSquares; // x26
  struct WarBoardPieceData_o *basePiece; // x22
  unsigned __int64 v21; // x27
  il2cpp_array_size_t max_length; // w8
  int32_t v23; // w24
  const MethodInfo *v24; // x4
  struct System_Collections_Generic_List_WarBoardPieceData__o *moveByLinkedPiece; // x25
  WarBoardPieceData_o *v26; // x23
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  int32_t v29; // w24
  int32_t ClassId; // w25
  __int64 v31; // x0

  if ( (byte_42E6904 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardPieceData__Add__,
      (_DWORD)routeData,
      (_DWORD)piecePlaceData,
      alreadyGetItemSquares);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SvtClassAttri_TypeInfo, v11, v12, v13);
    this = (WarBoardAIRoute_o *)sub_B5D5C4(&WarBoardAIManager_TypeInfo, v14, v15, v16);
    byte_42E6904 = 1;
  }
  v17 = *routeData;
  if ( !*routeData
    || (actionSquare = v17->fields.actionSquare) == 0LL
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0LL )
  {
LABEL_50:
    sub_B5D69C(this, routeData);
  }
  if ( (int)*(_QWORD *)&linkedSquares->max_length >= 1 )
  {
    basePiece = v17->fields.basePiece;
    v21 = 0LL;
    max_length = *(_QWORD *)&linkedSquares->max_length;
    do
    {
      if ( v21 >= max_length )
      {
        v31 = sub_B5D6C8(this);
        sub_B5D668(v31, 0LL);
      }
      v23 = linkedSquares->m_Items[v21 + 1];
      this = (WarBoardAIRoute_o *)WarBoardAIRoute__CanAcquireItem(
                                    this,
                                    v23,
                                    alreadyGetItemSquares,
                                    (const MethodInfo *)alreadyGetItemSquares);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*routeData )
          goto LABEL_50;
        ++(*routeData)->fields.moveByLinkedItem;
      }
      this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetActionPiece(
                                    this,
                                    (WarBoardPieceData_o *)routeData,
                                    v23,
                                    piecePlaceData,
                                    v24);
      if ( this )
      {
        if ( !*routeData )
          goto LABEL_50;
        moveByLinkedPiece = (*routeData)->fields.moveByLinkedPiece;
        v26 = (WarBoardPieceData_o *)this;
        this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_50;
        this = (WarBoardAIRoute_o *)this[1].fields.npcData;
        if ( !this )
          goto LABEL_50;
        this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_23181536((WarBoardData_o *)this, v23, 0LL);
        if ( !moveByLinkedPiece )
          goto LABEL_50;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)moveByLinkedPiece,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( WarBoardAIManager__IsAllyPiece(basePiece, v26, v27)
          && (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v26, 0LL), ((unsigned __int8)this & 1) != 0) )
        {
          if ( !*routeData )
            goto LABEL_50;
          ++(*routeData)->fields.moveByLinkedAlly;
        }
        else
        {
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          }
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v26, v28);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*routeData )
              goto LABEL_50;
            (*routeData)->fields.flagNow |= 0x40uLL;
            if ( WarBoardPieceData__get_isServant(v26, 0LL) )
            {
              this = (WarBoardAIRoute_o *)*routeData;
              if ( !*routeData )
                goto LABEL_50;
              this = (WarBoardAIRoute_o *)WarBoardAIRoute_RouteData__HasFlag(
                                            (WarBoardAIRoute_RouteData_o *)this,
                                            0x2000000LL,
                                            0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_32;
              if ( !basePiece )
                goto LABEL_50;
              this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(basePiece, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v26, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
                  if ( !this )
                    goto LABEL_50;
                  this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
                  if ( !v26->fields._battleServant_k__BackingField )
                    goto LABEL_50;
                  v29 = (int)this;
                  ClassId = BattleServantData__getClassId(v26->fields._battleServant_k__BackingField, 0LL);
                  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                  }
                  if ( SvtClassAttri__getMagnification(v29, ClassId, 0LL) > 1.0 )
                  {
LABEL_32:
                    if ( !*routeData )
                      goto LABEL_50;
                    (*routeData)->fields.flagNow |= 0x2000000uLL;
                  }
                }
              }
              if ( !*routeData )
                goto LABEL_50;
              ++(*routeData)->fields.moveByLinkedEnemy;
            }
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v26, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !*routeData )
                goto LABEL_50;
              (*routeData)->fields.flagNow |= 0x80uLL;
            }
          }
        }
      }
      max_length = linkedSquares->max_length;
      ++v21;
    }
    while ( (__int64)v21 < (int)max_length );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute__RegisterTargetObjectToDic(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *targetDic,
        System_Collections_Generic_List_IWarBoardObjectData__o *objectList,
        int32_t squareIndex,
        int64_t trendKey,
        int32_t conditionId,
        bool *notSquareTarget,
        const MethodInfo *method)
{
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  WarBoardAIRoute___c__DisplayClass46_0_o *v38; // x25
  __int64 v39; // x0
  __int64 v40; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v41; // x24
  peRenderTexture_ChangeLayerObject_o *v42; // x0
  __int64 v43; // x3
  peRenderTexture_ChangeLayerObject_c *klass; // x8
  IWarBoardObjectData_o *v45; // x23
  unsigned __int64 v46; // x10
  IWarBoardObjectData_c **p_offset; // x11
  __int64 v48; // x0
  WarBoardAIRoute_TargetData_o *v49; // x22

  if ( (byte_42E68E5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__,
      (_DWORD)targetDic,
      (_DWORD)objectList,
      *(_QWORD *)&squareIndex);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&IWarBoardObjectData_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Predicate_IWarBoardObjectData___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Predicate_IWarBoardObjectData__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&WarBoardAIRoute_TargetData_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__, v32, v33, v34);
    sub_B5D5C4(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo, v35, v36, v37);
    byte_42E68E5 = 1;
  }
  v38 = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_B5D694(WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass46_0___ctor(v38, 0LL);
  if ( !v38 )
    goto LABEL_17;
  v38->fields.squareIndex = squareIndex;
  *notSquareTarget = 0;
  if ( !targetDic )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ContainsKey(
         targetDic,
         v38->fields.squareIndex,
         (const MethodInfo_2F5CA8C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v41 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_IWarBoardObjectData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v41,
    (Il2CppObject *)v38,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_IWarBoardObjectData___ctor__);
  if ( !objectList )
LABEL_17:
    sub_B5D69C(v39, v40);
  v42 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)objectList,
          (System_Predicate_T__o *)v41,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
  if ( v42 )
  {
    *notSquareTarget = 1;
    klass = v42->klass;
    v45 = (IWarBoardObjectData_o *)v42;
    if ( *(_WORD *)&v42->klass->_2.bitflags1 )
    {
      v46 = 0LL;
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v46;
        p_offset += 2;
        if ( v46 >= *(unsigned __int16 *)&v42->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      v48 = (__int64)(&klass->vtable._2_GetHashCode.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_12:
      v48 = sub_AF54C0(v42, IWarBoardObjectData_TypeInfo, 2LL, v43);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v48)(v45, *(_QWORD *)(v48 + 8)) & 1) != 0 )
    {
      v49 = (WarBoardAIRoute_TargetData_o *)sub_B5D694(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_22446864(v49, v45, trendKey, conditionId, 0LL);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
        targetDic,
        trendKey,
        v49,
        (const MethodInfo_2F5C7F0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute__UpdatePiecePersonalityDic(
        WarBoardAIRoute_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x0
  const MethodInfo *v8; // x3

  if ( (byte_42E68E3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__,
      aiId,
      pieceIndex,
      method);
    byte_42E68E3 = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_B5D69C(0LL, *(_QWORD *)&aiId);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_2F33AA0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
  WarBoardAIRoute__AddPiecePersonalityDic(this, aiId, pieceIndex, v8);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_int__uint__o *__fastcall WarBoardAIRoute__UpdatePiecePlaceData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        WarBoardAIRoute_RouteData_o *routeData,
        int32_t baseSquareIndex,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_Generic_Dictionary_int__uint__o *v19; // x22
  _BOOL8 HasFlag; // x0
  __int64 v21; // x1
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *basePiece; // x8

  if ( (byte_42E6902 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__uint__Remove__,
      (_DWORD)piecePlaceData,
      (_DWORD)routeData,
      *(_QWORD *)&baseSquareIndex);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___68676152, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v16, v17, v18);
    byte_42E6902 = 1;
  }
  v19 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor_49516220(
    v19,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_2F38EBC *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___68676152);
  if ( !routeData )
    goto LABEL_12;
  HasFlag = WarBoardAIRoute_RouteData__HasFlag(routeData, 0x4000000LL, 0LL);
  if ( HasFlag )
  {
    actionPiece = routeData->fields.actionPiece;
    if ( actionPiece && v19 )
    {
      System_Collections_Generic_Dictionary_int__uint___set_Item(
        v19,
        baseSquareIndex,
        actionPiece->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_2F398A4 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_B5D69C(HasFlag, v21);
  }
  if ( !v19 )
    goto LABEL_12;
  HasFlag = System_Collections_Generic_Dictionary_int__uint___Remove(
              v19,
              baseSquareIndex,
              (const MethodInfo_2F3B1C4 *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v19,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_2F398A4 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v19;
}


bool __fastcall WarBoardAIRoute____ctor_b__42_0(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return WarBoardPieceData__get_IsReinforcement(x, 0LL)
      && x->fields._forceId_k__BackingField == this->fields.forceId
      && x->fields._groupId_k__BackingField == this->fields.groupId;
}


bool __fastcall WarBoardAIRoute___GetMasterSquareIndexFromPlaceData_b__78_0(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_KeyValuePair_int__uint__o x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  uint32_t value; // x19^4
  WarBoardAIRoute_o *v5; // x20
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8

  value = x.fields.value;
  v5 = this;
  if ( (byte_42E6907 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B5D5C4(
                                  &Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__,
                                  x.fields.key,
                                  (_DWORD)method,
                                  v3);
    byte_42E6907 = 1;
  }
  aiRouteMasterData = v5->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(this, x);
  return aiRouteMasterData->fields.masterUniqueIndex == value;
}


void __fastcall WarBoardAIRoute_AIRouteMasterData___ctor(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v27; // x1
  System_Int32_array *v28; // x8
  unsigned int v29; // w9
  unsigned int max_length; // w10
  unsigned int v31; // w23
  struct System_Collections_Generic_List_int____o *replaceDataList; // x20
  int32_t v33; // w25
  int32_t v34; // w24
  int basePanel; // w8
  __int64 v36; // x0
  System_Int32_array *data; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7059 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, forceId, groupId, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int_____ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_int____TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16, v17, v18);
    byte_42E7059 = 1;
  }
  data = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_OWORD *)&this->fields.masterType = xmmword_32A14F0;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.replaceDataList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.replacePriority = -1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = *(WebViewManager_o **)&Instance[4].fields.m_CachedPtr;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WebViewManager_o *)WarBoardData__IsDefenseTarget((WarBoardData_o *)Instance, &data, forceId, groupId, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  v28 = data;
  if ( !data )
LABEL_16:
    sub_B5D69C(Instance, v27);
  v29 = 0;
  while ( 1 )
  {
    max_length = v28->max_length;
    if ( (int)v29 >= (int)max_length )
      break;
    if ( v29 >= max_length )
      goto LABEL_18;
    v31 = v29 + 1;
    if ( v29 + 1 >= max_length )
      goto LABEL_18;
    replaceDataList = this->fields.replaceDataList;
    v33 = v28->m_Items[v29 + 1];
    v34 = v28->m_Items[v31 + 1];
    Instance = (WebViewManager_o *)sub_B5D5DC(int___TypeInfo, 2LL);
    if ( !Instance )
      goto LABEL_16;
    basePanel = (int)Instance->fields.basePanel;
    v27 = Instance;
    if ( !basePanel || (LODWORD(Instance->fields.baseWindow) = v33, basePanel == 1) )
    {
LABEL_18:
      v36 = sub_B5D6C8(Instance);
      sub_B5D668(v36, 0LL);
    }
    HIDWORD(Instance->fields.baseWindow) = v34;
    if ( replaceDataList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)replaceDataList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_int____Add__);
      v28 = data;
      v29 = v31 + 1;
      if ( data )
        continue;
    }
    goto LABEL_16;
  }
}


bool __fastcall WarBoardAIRoute_AIRouteMasterData__IsMasterServant(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  return this->fields.masterType == 2 && this->fields.masterPieceIndex == pieceIndex;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        int32_t type,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  WarBoardAIRoute_AIRouteMasterData_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  uint32_t uniqueIndex_k__BackingField; // w8
  struct System_Collections_Generic_List_int____o *replaceDataList; // x25
  signed __int64 v12; // x22
  signed __int64 replacePriority; // x9
  System_Int32_array *v14; // x8
  unsigned int max_length; // w9
  int32_t v16; // w8
  __int64 v17; // x0

  v6 = this;
  if ( (byte_42E705A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Count__, type, (_DWORD)pieceData, method);
    this = (WarBoardAIRoute_AIRouteMasterData_o *)sub_B5D5C4(
                                                    &Method_System_Collections_Generic_List_int____get_Item__,
                                                    v7,
                                                    v8,
                                                    v9);
    byte_42E705A = 1;
  }
  if ( type
    || (this = (WarBoardAIRoute_AIRouteMasterData_o *)BasicHelper__IsNullOrEmpty(
                                                        (System_Collections_ICollection_o *)v6->fields.replaceDataList,
                                                        0LL),
        ((unsigned __int8)this & 1) == 0) )
  {
    replaceDataList = v6->fields.replaceDataList;
    if ( replaceDataList )
    {
      v12 = 0LL;
      do
      {
        if ( v12 >= replaceDataList->fields._size )
          return;
        replacePriority = v6->fields.replacePriority;
        if ( (_DWORD)replacePriority != -1 && v12 > replacePriority )
          return;
        if ( v12 >= (unsigned __int64)(unsigned int)replaceDataList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v14 = replaceDataList->fields._items->m_Items[v12];
        if ( type != 0 || pieceData == 0LL )
        {
          if ( type != 2 || pieceData == 0LL )
          {
            if ( type == 1 )
            {
              if ( !v14 )
                break;
              if ( !v14->max_length )
                goto LABEL_38;
              if ( v14->m_Items[1] == 1 )
              {
                v6->fields.masterType = 1;
                if ( v14->max_length <= 1 )
                {
LABEL_38:
                  v17 = sub_B5D6C8(this);
                  sub_B5D668(v17, 0LL);
                }
                v16 = v14->m_Items[2];
                v6->fields.replacePriority = v12;
                v6->fields.masterSquareIndex = v16;
                return;
              }
            }
          }
          else
          {
            if ( !v14 )
              break;
            max_length = v14->max_length;
            if ( !max_length )
              goto LABEL_38;
            if ( v14->m_Items[1] == 2 )
            {
              if ( max_length <= 1 )
                goto LABEL_38;
              if ( v14->m_Items[2] == pieceData->fields._index_k__BackingField )
              {
                v6->fields.masterType = 2;
                v6->fields.masterPieceIndex = pieceData->fields._index_k__BackingField;
                goto LABEL_35;
              }
            }
          }
        }
        else
        {
          if ( !v14 )
            break;
          if ( !v14->max_length )
            goto LABEL_38;
          if ( !v14->m_Items[1] )
          {
            v6->fields.masterType = 0;
LABEL_35:
            uniqueIndex_k__BackingField = pieceData->fields._uniqueIndex_k__BackingField;
            v6->fields.replacePriority = v12;
            goto LABEL_36;
          }
        }
        replaceDataList = v6->fields.replaceDataList;
        ++v12;
      }
      while ( replaceDataList );
    }
LABEL_31:
    sub_B5D69C(this, *(_QWORD *)&type);
  }
  v6->fields.masterType = 0;
  if ( !pieceData )
    goto LABEL_31;
  uniqueIndex_k__BackingField = pieceData->fields._uniqueIndex_k__BackingField;
  v6->fields.replacePriority = 0;
LABEL_36:
  v6->fields.masterUniqueIndex = uniqueIndex_k__BackingField;
}


bool __fastcall WarBoardAIRoute_AIRouteMasterData__get_IsServant(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        const MethodInfo *method)
{
  return this->fields.masterType == 2;
}


bool __fastcall WarBoardAIRoute_AIRouteMasterData__get_IsSquare(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        const MethodInfo *method)
{
  return this->fields.masterType == 1;
}


void __fastcall WarBoardAIRoute_ActionTrendInfo___ctor(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        WarBoardActionTrendEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o **p_FutureTrendInfoList_k__BackingField; // x19
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x22
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v46; // x23
  WarBoardActionTrendMaster_o *HasMatchCondition; // x0
  __int64 v48; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  WarBoardActionTrendMaster_o *v50; // x20
  unsigned __int64 v51; // x24
  WarBoardActionTrendEntity_o *v52; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x21
  WarBoardAIRoute_ActionTrendInfo_o *v54; // x23
  const MethodInfo *v55; // x2
  __int64 v56; // x0
  int32_t condType; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E705C & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__, v27, v28, v29);
    byte_42E705C = 1;
  }
  condType = 0;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v30;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._FutureTrendInfoList_k__BackingField,
    (System_Int32_array **)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Entity_k__BackingField = entity;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)entity, v38, v39, v40, v41, v42, v43);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v44);
  v46 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B5D694(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
    v46,
    0LL,
    Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__,
    (const MethodInfo_2C2A838 *)Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
  HasMatchCondition = (WarBoardActionTrendMaster_o *)WarBoardActionTrendConditionMaster__HasMatchCondition(
                                                       ConditionEntityArray,
                                                       v46,
                                                       &condType,
                                                       0LL);
  this->fields._HasTargetIndividualityCond_k__BackingField = (unsigned __int8)HasMatchCondition & 1;
  if ( !entity )
    goto LABEL_19;
  if ( !WarBoardActionTrendEntity__get_HasFutureTrend(entity, 0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  HasMatchCondition = (WarBoardActionTrendMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !HasMatchCondition
    || (HasMatchCondition = (WarBoardActionTrendMaster_o *)WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                                                             HasMatchCondition,
                                                             entity,
                                                             0LL)) == 0LL )
  {
LABEL_19:
    sub_B5D69C(HasMatchCondition, v48);
  }
  MasterName_k__BackingField = HasMatchCondition->fields._MasterName_k__BackingField;
  v50 = HasMatchCondition;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v51 = 0LL;
    do
    {
      if ( v51 >= (unsigned int)MasterName_k__BackingField )
      {
        v56 = sub_B5D6C8(HasMatchCondition);
        sub_B5D668(v56, 0LL);
      }
      v52 = (WarBoardActionTrendEntity_o *)*((_QWORD *)&v50->fields.list + v51);
      if ( v52 )
      {
        v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_FutureTrendInfoList_k__BackingField;
        v54 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B5D694(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v54, v52, v55);
        if ( !v53 )
          goto LABEL_19;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v53,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
      LODWORD(MasterName_k__BackingField) = v50->fields._MasterName_k__BackingField;
      ++v51;
    }
    while ( (__int64)v51 < (int)MasterName_k__BackingField );
  }
}


WarBoardActionTrendConditionEntity_array *__fastcall WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardAIRoute_ActionTrendInfo_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  BattleServantConfConponent_o *p_conditionEntityArray; // x19
  System_Int32_array **conditionEntityArray; // x21
  struct WarBoardActionTrendEntity_o *Entity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *conditionIds; // x20
  WarBoardAIRoute_ActionTrendInfo___c_c *v27; // x0
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__8_0; // x21
  Il2CppObject *v30; // x22
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_T__o *v38; // x0
  System_Collections_Generic_IEnumerable_T__o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  v4 = this;
  if ( (byte_42E705B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_int__WarBoardActionTrendConditionEntity___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__, v17, v18, v19);
    this = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B5D5C4(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v20, v21, v22);
    byte_42E705B = 1;
  }
  p_conditionEntityArray = (BattleServantConfConponent_o *)&v4->fields.conditionEntityArray;
  conditionEntityArray = (System_Int32_array **)v4->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = v4->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_B5D69C(this, method);
    conditionIds = (System_Collections_Generic_IEnumerable_TSource__o *)Entity_k__BackingField->fields.conditionIds;
    v27 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    if ( (BYTE3(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
      v27 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    }
    static_fields = v27->static_fields;
    _9__8_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        _9__8_0,
        v30,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        (const MethodInfo_2C29938 *)Method_System_Func_int__WarBoardActionTrendConditionEntity___ctor__);
      v31 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      v31->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v31->__9__8_0,
        (System_Int32_array **)_9__8_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           conditionIds,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v39 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v38,
            (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v39,
                                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    p_conditionEntityArray->klass = (BattleServantConfConponent_c *)conditionEntityArray;
    sub_B5D560(p_conditionEntityArray, conditionEntityArray, v40, v41, v42, v43, v44, v45);
  }
  return (WarBoardActionTrendConditionEntity_array *)conditionEntityArray;
}


WarBoardActionTrendEntity_o *__fastcall WarBoardAIRoute_ActionTrendInfo__get_Entity(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Entity_k__BackingField;
}


System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_ActionTrendInfo__get_FutureTrendInfoList(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._FutureTrendInfoList_k__BackingField;
}


bool __fastcall WarBoardAIRoute_ActionTrendInfo__get_HasTargetIndividualityCond(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._HasTargetIndividualityCond_k__BackingField;
}


void __fastcall WarBoardAIRoute_ActionTrendInfo___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42F5495 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v1, v2, v3);
    byte_42F5495 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall WarBoardAIRoute_ActionTrendInfo___c___ctor(
        WarBoardAIRoute_ActionTrendInfo___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardActionTrendConditionEntity_o *__fastcall WarBoardAIRoute_ActionTrendInfo___c___get_ConditionEntityArray_b__8_0(
        WarBoardAIRoute_ActionTrendInfo___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1

  if ( (byte_42F5496 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___, x, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__,
      v8,
      v9,
      v10);
    byte_42F5496 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v12);
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   Master_WarQuestSelectionMaster,
                                                   x,
                                                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
}


void __fastcall WarBoardAIRoute_AdvantagePieceData___ctor(
        WarBoardAIRoute_AdvantagePieceData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v43; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_42E705D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v5, v6, v7);
    byte_42E705D = 1;
  }
  *(_QWORD *)&this->fields.baseAARange = -1LL;
  *(_QWORD *)&this->fields.baseDARange = -1LL;
  this->fields.flagNow = 1LL;
  *(_QWORD *)&this->fields.baseCARange = -1LL;
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicClassAdvantageServant,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v15,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicClassDisAdvantageServant,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v22,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicAttackAdvantageServant,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v29,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicAttackDisAdvantageServant,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v36,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicDefenseAdvantageServant,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v43,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicDefenseDisAdvantageServant,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_DesignationItemData___ctor(
        WarBoardAIRoute_DesignationItemData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E705E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v5, v6, v7);
    byte_42E705E = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_PiecePersonality___ctor(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E7062 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo, v11, v12, v13);
    byte_42E7062 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v14;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.ratingOffsetList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__AttackOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  BattleServantConfConponent_o *p_attackOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v23; // x0
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__4_0; // x21
  Il2CppObject *v26; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_42E705F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__, v14, v15, v16);
    sub_B5D5C4(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v17, v18, v19);
    byte_42E705F = 1;
  }
  p_attackOffset = (BattleServantConfConponent_o *)&this->fields.attackOffset;
  result = this->fields.attackOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v23 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( (BYTE3(WarBoardAIRoute_PiecePersonality___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v23 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__4_0,
        v26,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
      v27 = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      v27->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v27->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__4_0,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v35 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v34,
                                   (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_attackOffset->klass = (BattleServantConfConponent_c *)v35;
    sub_B5D560(p_attackOffset, v35, v36, v37, v38, v39, v40, v41);
    return (System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)p_attackOffset->klass;
  }
  return result;
}


System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E7061 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7061 = 1;
  }
  v5 = sub_B5D694(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6___ctor(
    (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *)v5;
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__MoveOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  BattleServantConfConponent_o *p_moveOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v23; // x0
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x21
  Il2CppObject *v26; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_42E7060 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__, v14, v15, v16);
    sub_B5D5C4(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v17, v18, v19);
    byte_42E7060 = 1;
  }
  p_moveOffset = (BattleServantConfConponent_o *)&this->fields.moveOffset;
  result = this->fields.moveOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v23 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( (BYTE3(WarBoardAIRoute_PiecePersonality___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v23 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__5_0,
        v26,
        Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
      v27 = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      v27->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v27->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v35 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v34,
                                   (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_moveOffset->klass = (BattleServantConfConponent_c *)v35;
    sub_B5D560(p_moveOffset, v35, v36, v37, v38, v39, v40, v41);
    return (System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)p_moveOffset->klass;
  }
  return result;
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6___ctor(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__MoveNext(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t _1__state; // w8
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *actionTrandList; // x0
  struct System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__o *p__7__wrap1; // x20
  __int128 v15; // q0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct WarBoardAIRoute_ActionTrendInfo_o *trendInfo_5__3; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *FutureTrendInfoList_k__BackingField; // x0
  struct System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__o *p__7__wrap3; // x20
  __int128 v25; // q0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **current; // x1
  bool result; // w0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+38h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42F5498 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__,
      v5,
      v6,
      v7);
    this = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_B5D5C4(
                                                                                 &Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__,
                                                                                 v8,
                                                                                 v9,
                                                                                 v10);
    byte_42F5498 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__7__wrap3 = &v4->fields.__7__wrap3;
LABEL_13:
    v4->fields.__1__state = -4;
    if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap3,
           (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__) )
    {
      current = (System_Int32_array **)v4->fields.__7__wrap3.fields.current;
      v4->fields.__2__current = (struct WarBoardAIRoute_ActionTrendInfo_o *)current;
      sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__2__current, current, v33, v34, v35, v36, v37, v38);
      result = 1;
      v4->fields.__1__state = 2;
      return result;
    }
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(v4, v32);
    *(_QWORD *)&p__7__wrap3->fields.index = 0LL;
    p__7__wrap3->fields.current = 0LL;
    p__7__wrap3->fields.list = 0LL;
    v4->fields._trendInfo_5__3 = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields._trendInfo_5__3, 0LL, v41, v42, v43, v44, v45, v46);
    p__7__wrap1 = &v4->fields.__7__wrap1;
    goto LABEL_16;
  }
  if ( _1__state == 1 )
  {
    trendInfo_5__3 = v4->fields._trendInfo_5__3;
    v4->fields.__1__state = -3;
    if ( !trendInfo_5__3 )
      sub_B5D69C(this, method);
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_B5D69C(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v62,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    p__7__wrap3 = &v4->fields.__7__wrap3;
    v25 = *(_OWORD *)&v62.fields.list;
    v4->fields.__7__wrap3.fields.current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v62.fields.current;
    *(_OWORD *)&v4->fields.__7__wrap3.fields.list = v25;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__7__wrap3, 0LL, v26, v27, v28, v29, v30, v31);
    goto LABEL_13;
  }
  if ( _1__state )
    return 0;
  _4__this = v4->fields.__4__this;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    sub_B5D69C(this, method);
  actionTrandList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.actionTrandList;
  if ( !actionTrandList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v62,
    actionTrandList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  p__7__wrap1 = &v4->fields.__7__wrap1;
  v15 = *(_OWORD *)&v62.fields.list;
  v4->fields.__7__wrap1.fields.current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v62.fields.current;
  *(_OWORD *)&v4->fields.__7__wrap1.fields.list = v15;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__7__wrap1, 0LL, v16, v17, v18, v19, v20, v21);
  v4->fields.__1__state = -3;
LABEL_16:
  if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
         (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
         (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__) )
  {
    v54 = (System_Int32_array **)v4->fields.__7__wrap1.fields.current;
    v4->fields._trendInfo_5__3 = (struct WarBoardAIRoute_ActionTrendInfo_o *)v54;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields._trendInfo_5__3, v54, v48, v49, v50, v51, v52, v53);
    v55 = (System_Int32_array **)v4->fields._trendInfo_5__3;
    v4->fields.__2__current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v55;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__2__current, v55, v56, v57, v58, v59, v60, v61);
    result = 1;
    v4->fields.__1__state = 1;
  }
  else
  {
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(v4, v47);
    result = 0;
    p__7__wrap1->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
    p__7__wrap1->fields.current = 0LL;
  }
  return result;
}


System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__GetEnumerator(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  __int64 v6; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **_4__this; // x1

  if ( (byte_42F549B & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, (_DWORD)method, v2, v3);
    byte_42F549B = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v6 = sub_B5D694(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    *(_DWORD *)(v6 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v6 + 32) = CurrentManagedThreadId;
    if ( !v6 )
      sub_B5D69C(CurrentManagedThreadId, v8);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    *(_QWORD *)(v6 + 40) = _4__this;
    sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), _4__this, v9, v10, v11, v12, v13, v14);
    return (System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *)v6;
  }
  return (System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *)this;
}


WarBoardAIRoute_ActionTrendInfo_o *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__get_Current(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_IEnumerator_Reset(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_IEnumerator_get_Current(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_IDisposable_Dispose(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  switch ( this->fields.__1__state )
  {
    case 0xFFFFFFFC:
    case 2:
      WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(this, method);
      goto LABEL_3;
    case 0xFFFFFFFD:
    case 1:
LABEL_3:
      WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(this, method);
      break;
    default:
      return;
  }
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42F5499 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    byte_42F5499 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42F549A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    byte_42F549A = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap3,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42F5497 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v1, v2, v3);
    byte_42F5497 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall WarBoardAIRoute_PiecePersonality___c___ctor(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute_PiecePersonality___c___AttackOffset_b__4_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.type == 0;
}


bool __fastcall WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.type == 1;
}


void __fastcall WarBoardAIRoute_PutSquareTarget___ctor(
        WarBoardAIRoute_PutSquareTarget_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7063 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v5, v6, v7);
    byte_42E7063 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B5D694(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v8,
    (const MethodInfo_2F5BC68 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B5D694(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v15,
    (const MethodInfo_2F5BC68 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicObjectPutSquareIndex,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B5D694(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v22,
    (const MethodInfo_2F5BC68 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicIndividualityPutSqareIndex,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData___ctor(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7066 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7066 = 1;
  }
  this->fields.flagNow = 1LL;
  v5 = (WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)sub_B5D694(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
  WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(v5, 0LL);
  this->fields.evalOffsetMagnification = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.evalOffsetMagnification,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData__CalcEvalValue(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  int32_t WarBoardEvalFactorsAffectRatio; // w20
  System_Decimal_o v10; // kr00_16
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x0
  System_Decimal_o MoveValue; // kr10_16
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *futureEvalOffsetMag; // x0
  System_Decimal_o Value; // kr20_16
  __int64 v15; // x24
  System_Decimal_c *v16; // x0
  __int64 v17; // x25
  System_Decimal_o AttackValue; // kr30_16
  __int64 v19; // x22
  int32_t attackEvalOffsetAddValue; // w24
  __int64 v21; // x23
  struct System_Decimal_StaticFields *static_fields; // x8
  System_Decimal_o v23; // kr40_16
  System_Decimal_o v24; // 0:x0.16
  System_Decimal_o v25; // 0:x0.16
  System_Decimal_o v26; // 0:x0.16
  System_Decimal_o v27; // 0:x2.16
  System_Decimal_o v28; // 0:x2.16

  if ( (byte_42E7068 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Decimal_TypeInfo, v5, v6, v7);
    byte_42E7068 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  WarBoardEvalFactorsAffectRatio = v8->static_fields->WarBoardEvalFactorsAffectRatio;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v10 = System_Decimal__op_Implicit_44462380(WarBoardEvalFactorsAffectRatio, 0LL);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_B5D69C(0LL, *(_QWORD *)&v10.fields.lo);
  if ( (this->fields.flagNow & 2) != 0 )
  {
    AttackValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(evalOffsetMagnification, 0LL);
    v19 = *(_QWORD *)&AttackValue.fields.flags;
    attackEvalOffsetAddValue = this->fields.attackEvalOffsetAddValue;
    v21 = *(_QWORD *)&AttackValue.fields.lo;
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    }
  }
  else
  {
    MoveValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(evalOffsetMagnification, 0LL);
    futureEvalOffsetMag = this->fields.futureEvalOffsetMag;
    if ( futureEvalOffsetMag )
    {
      Value = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetValue(futureEvalOffsetMag, 0LL);
      v15 = *(_QWORD *)&Value.fields.flags;
      v16 = System_Decimal_TypeInfo;
      v17 = *(_QWORD *)&Value.fields.lo;
    }
    else
    {
      v16 = System_Decimal_TypeInfo;
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
        v16 = System_Decimal_TypeInfo;
      }
      static_fields = v16->static_fields;
      v15 = *(_QWORD *)&static_fields->Zero.fields.flags;
      v17 = *(_QWORD *)&static_fields->Zero.fields.lo;
    }
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v16);
    *(_QWORD *)&v27.fields.flags = v15;
    *(_QWORD *)&v27.fields.lo = v17;
    v23 = System_Decimal__op_Addition(MoveValue, v27, 0LL);
    attackEvalOffsetAddValue = this->fields.moveEvalOffsetAddValue;
    v21 = *(_QWORD *)&v23.fields.lo;
    v19 = *(_QWORD *)&v23.fields.flags;
  }
  v24 = System_Decimal__op_Implicit_44462380(attackEvalOffsetAddValue, 0LL);
  v28 = System_Decimal__op_Division(v24, v10, 0LL);
  *(_QWORD *)&v25.fields.flags = v19;
  *(_QWORD *)&v25.fields.lo = v21;
  v26 = System_Decimal__op_Addition(v25, v28, 0LL);
  this->fields.evalValue = System_Decimal__op_Explicit_44462856(v26, 0LL);
}


bool __fastcall WarBoardAIRoute_RouteData__HasActionPiece(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return this->fields.actionPiece != 0LL;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFlag(
        WarBoardAIRoute_RouteData_o *this,
        int64_t flag,
        const MethodInfo *method)
{
  return (flag & ~this->fields.flagNow) == 0;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFlag_22442196(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_42E7065 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E7065 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  return futureLookingTrendHashSet && futureLookingTrendHashSet->fields._count > 0;
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute_RouteData__ShallowCopy(
        WarBoardAIRoute_RouteData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardAIRoute_RouteData_o *result; // x0
  __int64 v6; // x9
  WarBoardAIRoute___c_o *v7; // x0
  const MethodInfo *v8; // x3
  System_Collections_Generic_KeyValuePair_IEnumerator__float__o v9; // 0:x1.16

  if ( (byte_42E7067 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIRoute_RouteData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7067 = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0LL);
  if ( result )
  {
    v6 = *(&WarBoardAIRoute_RouteData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[v6 - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      v7 = (WarBoardAIRoute___c_o *)sub_B5D990(result);
      WarBoardAIRoute___c___CreateRouteData_b__47_6(v7, v9, v8);
    }
  }
  return result;
}


int32_t __fastcall WarBoardAIRoute_RouteData__get_ActionIndex(
        WarBoardAIRoute_RouteData_o *this,
        const MethodInfo *method)
{
  return this->fields.actionIndex;
}


int32_t __fastcall WarBoardAIRoute_RouteData__get_BaseIndex(
        WarBoardAIRoute_RouteData_o *this,
        const MethodInfo *method)
{
  return this->fields.baseIndex;
}


int64_t __fastcall WarBoardAIRoute_RouteData__get_FlagNow(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return this->fields.flagNow;
}


System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_RouteData__get_FutureLookingTrendHashSet(
        WarBoardAIRoute_RouteData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_futureLookingTrendHashSet; // x19
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v9; // x20
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // t1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42E7064 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v5, v6, v7);
    byte_42E7064 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = (BattleServantConfConponent_o *)&this->fields.futureLookingTrendHashSet;
  v9 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v9 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
      v9,
      (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    p_futureLookingTrendHashSet->klass = (BattleServantConfConponent_c *)v9;
    sub_B5D560(p_futureLookingTrendHashSet, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  }
  return (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)v9;
}


bool __fastcall WarBoardAIRoute_RouteData__get_IsAttack(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flagNow) >> 1) & 1;
}


bool __fastcall WarBoardAIRoute_RouteData__get_notAction(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return this->fields.baseIndex == this->fields.actionIndex;
}


void __fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float warAttack; // s8
  float benAttack; // s9
  __int64 v7; // x0 OVERLAPPED
  __int64 v8; // x1
  System_Decimal_o v9; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_42F549C & 1) == 0 )
  {
    sub_B5D5C4(&System_Decimal_TypeInfo, (_DWORD)method, v2, v3);
    byte_42F549C = 1;
  }
  warAttack = this->fields.warAttack;
  benAttack = this->fields.benAttack;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v9 = System_Decimal__op_Explicit(warAttack + benAttack, 0LL);
  v8 = *(_QWORD *)&v9.fields.lo;
  v7 = *(_QWORD *)&v9.fields.flags;
  *(_QWORD *)&result.fields.lo = v8;
  *(_QWORD *)&result.fields.flags = v7;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float warMove; // s8
  float benMove; // s9
  __int64 v7; // x0 OVERLAPPED
  __int64 v8; // x1
  System_Decimal_o v9; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_42F549D & 1) == 0 )
  {
    sub_B5D5C4(&System_Decimal_TypeInfo, (_DWORD)method, v2, v3);
    byte_42F549D = 1;
  }
  warMove = this->fields.warMove;
  benMove = this->fields.benMove;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v9 = System_Decimal__op_Explicit(warMove + benMove, 0LL);
  v8 = *(_QWORD *)&v9.fields.lo;
  v7 = *(_QWORD *)&v9.fields.flags;
  *(_QWORD *)&result.fields.lo = v8;
  *(_QWORD *)&result.fields.flags = v7;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetValue(
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0 OVERLAPPED
  __int64 v3; // x1
  System_Decimal_o AttackValue; // kr00_16
  System_Decimal_o MoveValue; // kr10_16
  System_Decimal_o result; // 0:x0.16

  if ( this->fields.isAttack )
  {
    AttackValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(this, method);
    v3 = *(_QWORD *)&AttackValue.fields.lo;
    v2 = *(_QWORD *)&AttackValue.fields.flags;
  }
  else
  {
    MoveValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(this, method);
    v3 = *(_QWORD *)&MoveValue.fields.lo;
    v2 = *(_QWORD *)&MoveValue.fields.flags;
  }
  *(_QWORD *)&result.fields.lo = v3;
  *(_QWORD *)&result.fields.flags = v2;
  return result;
}


void __fastcall WarBoardAIRoute_TargetData___ctor(
        WarBoardAIRoute_TargetData_o *this,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actionTrendKey = actionTrendKey;
  this->fields.conditionId = conditionId;
}


void __fastcall WarBoardAIRoute_TargetData___ctor_22446780(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardSquareData_o *targetSquare,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  WarBoardAIRoute_TargetData_o *v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v8 = this;
  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields.targetSquare = targetSquare;
  v8 = (WarBoardAIRoute_TargetData_o *)((char *)v8 + 48);
  v8->fields.targetObject = (struct IWarBoardObjectData_o *)actionTrendKey;
  v8->fields.moveByDistanceType = conditionId;
  sub_B5D560((BattleServantConfConponent_o *)v8, (System_Int32_array **)targetSquare, v9, v10, v11, v12, v13, v14);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_22446864(
        WarBoardAIRoute_TargetData_o *this,
        IWarBoardObjectData_o *targetObject,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actionTrendKey = actionTrendKey;
  this->fields.conditionId = conditionId;
  this->fields.targetObject = targetObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)targetObject,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarBoardAIRoute_TargetData__DetectObject(this, v15);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_22447284(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct IWarBoardObjectData_o *targetObject; // x1
  struct WarBoardSquareData_o *targetSquare; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseTargetData )
    sub_B5D69C(v11, v12);
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)targetObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  targetSquare = baseTargetData->fields.targetSquare;
  this->fields.targetSquare = targetSquare;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetSquare,
    (System_Int32_array **)targetSquare,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v27);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_22448372(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        IWarBoardObjectData_o *targetObject,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.targetObject = targetObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)targetObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v19);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_22448488(
        WarBoardAIRoute_TargetData_o *this,
        const MethodInfo *method)
{
  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardAIRoute_TargetData_o *__fastcall WarBoardAIRoute_TargetData__Clone(
        WarBoardAIRoute_TargetData_o *b,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  WarBoardAIRoute_TargetData_o *result; // x0
  __int64 v6; // x9

  v4 = (Il2CppObject *)b;
  if ( (byte_42E7069 & 1) == 0 )
  {
    b = (WarBoardAIRoute_TargetData_o *)sub_B5D5C4(&WarBoardAIRoute_TargetData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7069 = 1;
  }
  if ( !v4 )
LABEL_9:
    sub_B5D69C(b, method);
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone(v4, 0LL);
  if ( result )
  {
    v6 = *(&WarBoardAIRoute_TargetData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[v6 - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      b = (WarBoardAIRoute_TargetData_o *)sub_B5D990(result);
      goto LABEL_9;
    }
  }
  return result;
}


void __fastcall WarBoardAIRoute_TargetData__DetectObject(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct IWarBoardObjectData_o *targetObject; // x8
  __int64 v16; // x11
  struct IWarBoardObjectData_o *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct IWarBoardObjectData_o *v24; // x8
  __int64 v25; // x11
  struct IWarBoardObjectData_o *v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct IWarBoardObjectData_o *v33; // x8
  __int64 v34; // x11
  struct IWarBoardObjectData_o *v35; // x1

  if ( (byte_42E706B & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardItemData_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&WarBoardPieceData_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&WarBoardTreasureData_TypeInfo, v12, v13, v14);
    byte_42E706B = 1;
  }
  targetObject = this->fields.targetObject;
  if ( targetObject
    && (v16 = *(&WarBoardPieceData_TypeInfo->_2.bitflags2 + 1),
        *(&targetObject->klass->_2.bitflags2 + 1) >= (unsigned int)v16) )
  {
    if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[v16 - 1] == WarBoardPieceData_TypeInfo )
      v17 = this->fields.targetObject;
    else
      v17 = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
  this->fields.targetPiece = (struct WarBoardPieceData_o *)v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetPiece,
    (System_Int32_array **)v17,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v24 = this->fields.targetObject;
  if ( v24
    && (v25 = *(&WarBoardItemData_TypeInfo->_2.bitflags2 + 1), *(&v24->klass->_2.bitflags2 + 1) >= (unsigned int)v25) )
  {
    if ( (WarBoardItemData_c *)v24->klass->_2.typeHierarchy[v25 - 1] == WarBoardItemData_TypeInfo )
      v26 = this->fields.targetObject;
    else
      v26 = 0LL;
  }
  else
  {
    v26 = 0LL;
  }
  this->fields.targetItem = (struct WarBoardItemData_o *)v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetItem,
    (System_Int32_array **)v26,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v33 = this->fields.targetObject;
  if ( v33
    && (v34 = *(&WarBoardTreasureData_TypeInfo->_2.bitflags2 + 1), *(&v33->klass->_2.bitflags2 + 1) >= (unsigned int)v34) )
  {
    if ( (WarBoardTreasureData_c *)v33->klass->_2.typeHierarchy[v34 - 1] == WarBoardTreasureData_TypeInfo )
      v35 = this->fields.targetObject;
    else
      v35 = 0LL;
  }
  else
  {
    v35 = 0LL;
  }
  this->fields.targetTreasure = (struct WarBoardTreasureData_o *)v35;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetTreasure,
    (System_Int32_array **)v35,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute_TargetData__Init(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  __int64 v35; // x3
  struct IWarBoardObjectData_o *targetObject; // x24
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v38; // x10
  IWarBoardObjectData_c **p_offset; // x11
  __int64 p_method; // x0
  struct WarBoardSquareData_o *targetSquare; // x8
  int32_t squareIndex_k__BackingField; // w24
  __int64 v43; // x0
  __int64 v44; // x1
  struct System_Int32_array *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array *baseRoute; // x24
  WarBoardAIRoute_TargetData___c_c *v53; // x0
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x25
  Il2CppObject *v56; // x26
  struct WarBoardAIRoute_TargetData___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  System_Int32_array *v65; // x0
  bool IsDetour; // w0
  int32_t nowSquareIndex; // w23
  struct System_Int32_array *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  int32_t v75; // w0
  __int64 v76; // x3
  struct IWarBoardObjectData_o *v77; // x21
  WarBoardAIRoute_TargetData_o *v78; // x22
  IWarBoardObjectData_c *v79; // x8
  unsigned __int64 v80; // x10
  int32_t *v81; // x11
  __int64 v82; // x0
  struct WarBoardSquareData_o *v83; // x8

  if ( (byte_42E706A & 1) == 0 )
  {
    sub_B5D5C4(&AStarSearch_TypeInfo, (_DWORD)baseTargetData, (_DWORD)piece, *(_QWORD *)&baseSquareIndex);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__int___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Func_WarBoardPieceData__int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&IWarBoardObjectData_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, v29, v30, v31);
    sub_B5D5C4(&WarBoardAIRoute_TargetData___c_TypeInfo, v32, v33, v34);
    byte_42E706A = 1;
  }
  WarBoardAIRoute_TargetData__DetectObject(this, (const MethodInfo *)baseTargetData);
  targetObject = this->fields.targetObject;
  if ( targetObject )
  {
    klass = targetObject->klass;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v38;
        p_offset += 2;
        if ( v38 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_8:
      p_method = sub_AF54C0(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1LL, v35);
    }
    v43 = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
            targetObject,
            *(_QWORD *)(p_method + 8));
    if ( !this )
LABEL_49:
      sub_B5D69C(v43, v44);
    squareIndex_k__BackingField = v43;
  }
  else
  {
    targetSquare = this->fields.targetSquare;
    if ( targetSquare )
      squareIndex_k__BackingField = targetSquare->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = -1;
  }
  this->fields.nowSquareIndex = squareIndex_k__BackingField;
  if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  v45 = AStarSearch__RouteSearch(0LL, baseSquareIndex, squareIndex_k__BackingField, 0, 0LL, 0LL);
  this->fields.baseRoute = v45;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseRoute,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  baseRoute = this->fields.baseRoute;
  v53 = WarBoardAIRoute_TargetData___c_TypeInfo;
  if ( (BYTE3(WarBoardAIRoute_TargetData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIRoute_TargetData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIRoute_TargetData___c_TypeInfo);
    v53 = WarBoardAIRoute_TargetData___c_TypeInfo;
  }
  static_fields = v53->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    }
    v56 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v56,
      Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_WarBoardPieceData__int___ctor__);
    v57 = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    v57->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v57->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v65 = System_Linq_Enumerable__ToArray_int_(
          v64,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v65, 0LL);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    nowSquareIndex = this->fields.nowSquareIndex;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v68 = AStarSearch__RouteSearch(piece, baseSquareIndex, nowSquareIndex, 1, 0LL, 0LL);
    this->fields.detourRoute = v68;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.detourRoute,
      (System_Int32_array **)v68,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  v75 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
  v77 = this->fields.targetObject;
  this->fields.isAround = v75 == 2;
  if ( v77 )
    v78 = this;
  else
    v78 = 0LL;
  if ( v77 )
  {
    v79 = v77->klass;
    if ( *(_WORD *)&v77->klass->_2.bitflags1 )
    {
      v80 = 0LL;
      v81 = &v79->_1.interfaceOffsets->offset;
      while ( *((IWarBoardObjectData_c **)v81 - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v80;
        v81 += 4;
        if ( v80 >= *(unsigned __int16 *)&v77->klass->_2.bitflags1 )
          goto LABEL_38;
      }
      v82 = (__int64)&v79->vtable[*v81].method;
    }
    else
    {
LABEL_38:
      v82 = sub_AF54C0(v77, IWarBoardObjectData_TypeInfo, 0LL, v76);
    }
    v43 = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v82)(v77, *(_QWORD *)(v82 + 8));
    if ( !v78 )
      goto LABEL_49;
  }
  else
  {
    v83 = this->fields.targetSquare;
    if ( v83 )
      v43 = (unsigned int)v83->fields._squareIndex_k__BackingField;
    else
      v43 = 0xFFFFFFFFLL;
    v78 = this;
  }
  v78->fields.putSquareIndex = v43;
  if ( !baseTargetData )
    goto LABEL_49;
  this->fields.actionTrendKey = baseTargetData->fields.actionTrendKey;
  this->fields.conditionId = baseTargetData->fields.conditionId;
}


bool __fastcall WarBoardAIRoute_TargetData__get_ExistEnemyOnBaseRoute(
        WarBoardAIRoute_TargetData_o *this,
        const MethodInfo *method)
{
  return this->fields._ExistEnemyOnBaseRoute_k__BackingField;
}


bool __fastcall WarBoardAIRoute_TargetData__get_IsItem(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
{
  return this->fields.targetItem != 0LL;
}


void __fastcall WarBoardAIRoute_TargetData__set_ExistEnemyOnBaseRoute(
        WarBoardAIRoute_TargetData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = value;
}


void __fastcall WarBoardAIRoute_TargetData___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42F549E & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIRoute_TargetData___c_TypeInfo, v1, v2, v3);
    byte_42F549E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardAIRoute_TargetData___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall WarBoardAIRoute_TargetData___c___ctor(WarBoardAIRoute_TargetData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardAIRoute_TargetData___c___Init_b__7_0(
        WarBoardAIRoute_TargetData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields._nowSquareIndex_k__BackingField;
}


void __fastcall WarBoardAIRoute__CreateRouteData_d__47___ctor(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardAIRoute__CreateRouteData_d__47__MoveNext(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  int v110; // w1
  int v111; // w2
  __int64 v112; // x3
  int v113; // w1
  int v114; // w2
  __int64 v115; // x3
  int v116; // w1
  int v117; // w2
  __int64 v118; // x3
  int v119; // w1
  int v120; // w2
  __int64 v121; // x3
  int v122; // w1
  int v123; // w2
  __int64 v124; // x3
  int v125; // w1
  int v126; // w2
  __int64 v127; // x3
  int v128; // w1
  int v129; // w2
  __int64 v130; // x3
  int v131; // w1
  int v132; // w2
  __int64 v133; // x3
  int v134; // w1
  int v135; // w2
  __int64 v136; // x3
  int v137; // w1
  int v138; // w2
  __int64 v139; // x3
  int v140; // w1
  int v141; // w2
  __int64 v142; // x3
  int v143; // w1
  int v144; // w2
  __int64 v145; // x3
  int v146; // w1
  int v147; // w2
  __int64 v148; // x3
  int v149; // w1
  int v150; // w2
  __int64 v151; // x3
  int v152; // w1
  int v153; // w2
  __int64 v154; // x3
  int v155; // w1
  int v156; // w2
  __int64 v157; // x3
  int v158; // w1
  int v159; // w2
  __int64 v160; // x3
  int v161; // w1
  int v162; // w2
  __int64 v163; // x3
  int v164; // w1
  int v165; // w2
  __int64 v166; // x3
  int v167; // w1
  int v168; // w2
  __int64 v169; // x3
  int v170; // w1
  int v171; // w2
  __int64 v172; // x3
  int v173; // w1
  int v174; // w2
  __int64 v175; // x3
  int v176; // w1
  int v177; // w2
  __int64 v178; // x3
  int v179; // w1
  int v180; // w2
  __int64 v181; // x3
  int v182; // w1
  int v183; // w2
  __int64 v184; // x3
  int v185; // w1
  int v186; // w2
  __int64 v187; // x3
  int v188; // w1
  int v189; // w2
  __int64 v190; // x3
  int v191; // w1
  int v192; // w2
  __int64 v193; // x3
  int v194; // w1
  int v195; // w2
  __int64 v196; // x3
  int v197; // w1
  int v198; // w2
  __int64 v199; // x3
  int v200; // w1
  int v201; // w2
  __int64 v202; // x3
  int v203; // w1
  int v204; // w2
  __int64 v205; // x3
  int v206; // w1
  int v207; // w2
  __int64 v208; // x3
  int v209; // w1
  int v210; // w2
  __int64 v211; // x3
  int v212; // w1
  int v213; // w2
  __int64 v214; // x3
  int v215; // w1
  int v216; // w2
  __int64 v217; // x3
  int v218; // w1
  int v219; // w2
  __int64 v220; // x3
  int v221; // w1
  int v222; // w2
  __int64 v223; // x3
  int v224; // w1
  int v225; // w2
  __int64 v226; // x3
  int v227; // w1
  int v228; // w2
  __int64 v229; // x3
  int v230; // w1
  int v231; // w2
  __int64 v232; // x3
  int v233; // w1
  int v234; // w2
  __int64 v235; // x3
  int v236; // w1
  int v237; // w2
  __int64 v238; // x3
  int v239; // w1
  int v240; // w2
  __int64 v241; // x3
  int v242; // w1
  int v243; // w2
  __int64 v244; // x3
  int v245; // w1
  int v246; // w2
  __int64 v247; // x3
  int v248; // w1
  int v249; // w2
  __int64 v250; // x3
  int v251; // w1
  int v252; // w2
  __int64 v253; // x3
  int v254; // w1
  int v255; // w2
  __int64 v256; // x3
  int v257; // w1
  int v258; // w2
  __int64 v259; // x3
  int v260; // w1
  int v261; // w2
  __int64 v262; // x3
  int v263; // w1
  int v264; // w2
  __int64 v265; // x3
  int v266; // w1
  int v267; // w2
  __int64 v268; // x3
  int v269; // w1
  int v270; // w2
  __int64 v271; // x3
  int v272; // w1
  int v273; // w2
  __int64 v274; // x3
  int v275; // w1
  int v276; // w2
  __int64 v277; // x3
  int32_t _1__state; // w8
  bool result; // w0
  WebViewManager_o *Instance; // x0
  __int64 v281; // x1
  System_String_array **v282; // x2
  System_String_array **v283; // x3
  System_Boolean_array **v284; // x4
  System_Int32_array **v285; // x5
  System_Int32_array *v286; // x6
  System_Int32_array *v287; // x7
  struct WarBoardData_o *v288; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v289; // x21
  BattleServantConfConponent_o *p_warBoardData_5__2; // x21
  __int64 v291; // x0
  __int64 v292; // x1
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t v294; // w8
  struct WarBoardStageNpcEntity_o *v295; // x9
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o **p_routeDataList; // x24
  int32_t RequiredCost; // w22
  WebViewManager_o *v298; // x0
  __int64 v299; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v300; // x22
  System_Collections_Generic_Dictionary_int__uint__o **p_piecePlaceData; // x19
  int32_t MasterSquareIndex; // w0
  System_Int32_array **AllyPutSquareIndicesWithoutMaster; // x0
  System_Int32_array **p_allyPieceIndexs_5__5; // x23
  System_String_array **v305; // x2
  System_String_array **v306; // x3
  System_Boolean_array **v307; // x4
  System_Int32_array **v308; // x5
  System_Int32_array *v309; // x6
  System_Int32_array *v310; // x7
  BattleServantConfConponent_o *p_defenseAreaData_5__7; // x22
  System_String_array **v312; // x2
  System_String_array **v313; // x3
  System_Boolean_array **v314; // x4
  System_Int32_array **v315; // x5
  System_Int32_array *v316; // x6
  System_Int32_array *v317; // x7
  __int64 v318; // x0
  __int64 v319; // x1
  System_Collections_Generic_List_int__o *v320; // x0
  _BOOL8 v321; // x0
  __int64 v322; // x1
  struct System_Int32_array **p__7__wrap23; // x26
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **p_basePieceBasePieceRouteList_5__23; // x20
  int32_t servantAndEnemyRange_5__14; // w8
  int32_t servantAndEnemyMasterRange_5__15; // w9
  int32_t *p__7__wrap24; // x19
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w8
  System_Int32_array **v330; // x0
  System_String_array **v331; // x2
  System_String_array **v332; // x3
  System_Boolean_array **v333; // x4
  System_Int32_array **v334; // x5
  System_Int32_array *v335; // x6
  System_Int32_array *v336; // x7
  __int64 v337; // x0
  __int64 v338; // x1
  BattleServantConfConponent_c *v339; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v340; // x9
  WarBoardAIRoute__CreateRouteData_d__47_o *v341; // x20
  __int128 v342; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_int__uint__o *p__7__wrap8; // x26
  System_String_array **v344; // x2
  System_String_array **v345; // x3
  System_Boolean_array **v346; // x4
  System_Int32_array **v347; // x5
  System_Int32_array *v348; // x6
  System_Int32_array *v349; // x7
  BattleServantConfConponent_o *p__8__1; // x22
  BattleServantConfConponent_o *p_baseSquareIndex_5__10; // x21
  const MethodInfo *v352; // x1
  Il2CppObject *key; // x23
  Il2CppObject *v354; // x27
  System_String_array **v355; // x2
  System_String_array **v356; // x3
  System_Boolean_array **v357; // x4
  System_Int32_array **v358; // x5
  System_Int32_array *v359; // x6
  System_Int32_array *v360; // x7
  System_Int32_array **Square; // x0
  System_String_array **v362; // x2
  System_String_array **v363; // x3
  System_Boolean_array **v364; // x4
  System_Int32_array **v365; // x5
  System_Int32_array *v366; // x6
  System_Int32_array *v367; // x7
  BattleServantConfConponent_c *klass; // x27
  System_Int32_array **PieceUnique; // x0
  System_String_array **v370; // x2
  System_String_array **v371; // x3
  System_Boolean_array **v372; // x4
  System_Int32_array **v373; // x5
  System_Int32_array *v374; // x6
  System_Int32_array *v375; // x7
  __int64 v376; // x0
  __int64 v377; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v378; // x9
  int64_t baseFlag_5__6; // x24
  struct WarBoardAIRoute___c__DisplayClass47_0_o *_8__1; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v381; // x28
  System_Collections_Generic_IEnumerable_TSource__o *routeDataList; // x27
  Il2CppObject *v383; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v384; // x28
  __int64 v385; // x1
  int32_t v386; // w8
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v387; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  __int64 RouteSumPieceActionCost; // x0
  __int64 v390; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v391; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v392; // x8
  _BOOL8 IsActable; // x0
  __int64 v394; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v395; // x19
  System_Int32_array **DesignationItemToDistance; // x0
  System_String_array **v397; // x2
  System_String_array **v398; // x3
  System_Boolean_array **v399; // x4
  System_Int32_array **v400; // x5
  System_Int32_array *v401; // x6
  System_Int32_array *v402; // x7
  __int64 v403; // x0
  __int64 v404; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v405; // x24
  System_Int32_array **TargetToDistance_21394984; // x0
  System_String_array **v407; // x2
  System_String_array **v408; // x3
  System_Boolean_array **v409; // x4
  System_Int32_array **v410; // x5
  System_Int32_array *v411; // x6
  System_Int32_array *v412; // x7
  System_Int32_array **AllEnemyToDistance; // x0
  System_String_array **v414; // x2
  System_String_array **v415; // x3
  System_Boolean_array **v416; // x4
  System_Int32_array **v417; // x5
  System_Int32_array *v418; // x6
  System_Int32_array *v419; // x7
  BattleServantConfConponent_o *p_dicEnemyRange_5__20; // x24
  System_String_array **v421; // x2
  System_String_array **v422; // x3
  System_Boolean_array **v423; // x4
  System_Int32_array **v424; // x5
  System_Int32_array *v425; // x6
  System_Int32_array *v426; // x7
  __int64 v427; // x0
  __int64 v428; // x1
  WarBoardPieceData_o *name; // x0
  _BOOL8 isServant; // x0
  __int64 v431; // x1
  System_Int32_array **AdvantagePieceData; // x0
  System_String_array **v433; // x2
  System_String_array **v434; // x3
  System_Boolean_array **v435; // x4
  System_Int32_array **v436; // x5
  System_Int32_array *v437; // x6
  System_Int32_array *v438; // x7
  int32_t v439; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v440; // x0
  __int64 v441; // x0
  __int64 v442; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v443; // x10
  struct WarBoardPieceData_o *basePiece; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v445; // x9
  struct WarBoardStageNpcEntity_o *v446; // x11
  int32_t v447; // w10
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v448; // x24
  WarBoardAIRoute__CreateRouteData_d__47_o *v449; // x23
  BattleServantConfConponent_o *p_advantagePieceData_5__21; // x23
  System_String_array **v451; // x2
  System_String_array **v452; // x3
  System_Boolean_array **v453; // x4
  System_Int32_array **v454; // x5
  System_Int32_array *v455; // x6
  System_Int32_array *v456; // x7
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v457; // x25
  WarBoardAIRoute__CreateRouteData_d__47_o *v458; // x24
  BattleServantConfConponent_o *p_basePieceActionPieceRouteList_5__22; // x24
  System_String_array **v460; // x2
  System_String_array **v461; // x3
  System_Boolean_array **v462; // x4
  System_Int32_array **v463; // x5
  System_Int32_array *v464; // x6
  System_Int32_array *v465; // x7
  __int64 v466; // x1
  _BOOL8 v467; // x0
  __int64 v468; // x1
  Il2CppObject *v469; // x25
  Il2CppClass *v470; // x8
  const char *v471; // x9
  _DWORD *monitor; // x8
  const char *v473; // x9
  WarBoardAIRoute__CreateRouteData_d__47_o *v474; // x19
  __int64 v475; // x0
  __int64 v476; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v477; // x21
  WarBoardAIRoute___c_c *v478; // x0
  struct WarBoardAIRoute___c_StaticFields *v479; // x8
  System_Func_T__TResult__o *_9__47_6; // x22
  Il2CppObject *v481; // x23
  struct WarBoardAIRoute___c_StaticFields *v482; // x0
  System_String_array **v483; // x2
  System_String_array **v484; // x3
  System_Boolean_array **v485; // x4
  System_Int32_array **v486; // x5
  System_Int32_array *v487; // x6
  System_Int32_array *v488; // x7
  __int64 v489; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v490; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v491; // x0
  __int64 Count; // x0
  __int64 v493; // x1
  __int64 v494; // x3
  struct WarBoardStageNpcEntity_o *v495; // x8
  float v496; // s0
  WarBoardAIRoute__CreateRouteData_d__47_o *v497; // x10
  double v498; // d0
  int v499; // w8
  struct WarBoardStageNpcEntity_o *v500; // x9
  int calcEllipsisMin; // w9
  System_Linq_IOrderedEnumerable_TSource__c *v502; // x8
  unsigned __int64 v503; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v506; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v507; // x19
  System_Int32_array **MyAndLinkedSquareIndecies; // x0
  System_String_array **v509; // x2
  System_String_array **v510; // x3
  System_Boolean_array **v511; // x4
  System_Int32_array **v512; // x5
  System_Int32_array *v513; // x6
  System_Int32_array *v514; // x7
  int v515; // w8
  System_Int32_array **v516; // x0
  System_String_array **v517; // x2
  System_String_array **v518; // x3
  System_Boolean_array **v519; // x4
  System_Int32_array **v520; // x5
  System_Int32_array *v521; // x6
  System_Int32_array *v522; // x7
  __int64 *v523; // x21
  __int64 v524; // x8
  unsigned __int64 v525; // x10
  int *v526; // x11
  __int64 v527; // x0
  __int64 v528; // x0
  __int64 v529; // x3
  __int64 *v530; // x19
  __int64 v531; // x8
  unsigned __int64 v532; // x10
  int *v533; // x11
  __int64 v534; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v535; // x19
  System_String_array **v536; // x2
  System_String_array **v537; // x3
  System_Boolean_array **v538; // x4
  System_Int32_array **v539; // x5
  System_Int32_array *v540; // x6
  System_Int32_array *v541; // x7
  Il2CppObject *v542; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v543; // x19
  WarBoardAIRoute__CreateRouteData_d__47_o *v544; // x0
  System_String_array **v545; // x2
  System_String_array **v546; // x3
  System_Boolean_array **v547; // x4
  System_Int32_array **v548; // x5
  System_Int32_array *v549; // x6
  System_Int32_array *v550; // x7
  __int64 v551; // x23
  __int64 v552; // x0
  __int64 v553; // x1
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v554; // x8
  __int64 v555; // x9
  int32_t *v556; // x28
  WarBoardAIRoute_RouteData_o *v557; // x22
  const MethodInfo *v558; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v559; // x10
  int32_t getEnumeratorRetType; // w8
  int32_t v561; // w9
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v562; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dicBaseDIRange_5__18; // x22
  WarBoardAIRoute___c_c *v564; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *_9__47_1; // x24
  Il2CppObject *v567; // x25
  struct WarBoardAIRoute___c_StaticFields *v568; // x0
  System_String_array **v569; // x2
  System_String_array **v570; // x3
  System_Boolean_array **v571; // x4
  System_Int32_array **v572; // x5
  System_Int32_array *v573; // x6
  System_Int32_array *v574; // x7
  struct WarBoardAIRoute___c_StaticFields *v575; // x8
  System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *_9__47_2; // x25
  struct System_Int32_array **v577; // x19
  Il2CppObject *v578; // x26
  struct WarBoardAIRoute___c_StaticFields *v579; // x0
  System_String_array **v580; // x2
  System_String_array **v581; // x3
  System_Boolean_array **v582; // x4
  System_Int32_array **v583; // x5
  System_Int32_array *v584; // x6
  System_Int32_array *v585; // x7
  __int64 v586; // x1
  System_String_array **v587; // x2
  System_String_array **v588; // x3
  System_Boolean_array **v589; // x4
  System_Int32_array **v590; // x5
  System_Int32_array *v591; // x6
  System_Int32_array *v592; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v593; // x22
  WarBoardAIRoute_RouteData_o *v594; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v595; // x21
  struct WarBoardSquareData_o *v596; // x1
  __int64 v597; // x1
  System_String_array **v598; // x2
  System_String_array **v599; // x3
  System_Boolean_array **v600; // x4
  System_Int32_array **v601; // x5
  System_Int32_array *v602; // x6
  System_Int32_array *v603; // x7
  WarBoardAIRoute_RouteData_o *v604; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v605; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o **v606; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v607; // t1
  struct WarBoardPieceData_o *v608; // x1
  __int64 v609; // x1
  System_String_array **v610; // x2
  System_String_array **v611; // x3
  System_Boolean_array **v612; // x4
  System_Int32_array **v613; // x5
  System_Int32_array *v614; // x6
  System_Int32_array *v615; // x7
  WarBoardAIRoute_RouteData_o *v616; // x0
  WarBoardAIRoute_RouteData_o *v617; // x24
  int32_t v618; // w25
  System_Int32_array **v619; // x0
  System_String_array **v620; // x2
  System_String_array **v621; // x3
  System_Boolean_array **v622; // x4
  System_Int32_array **v623; // x5
  System_Int32_array *v624; // x6
  System_Int32_array *v625; // x7
  __int64 v626; // x1
  struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v628; // x19
  __int64 v629; // x1
  struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v630; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v632; // x0
  WarBoardAIRoute_RouteData_o *v633; // x24
  System_Int32_array **MoveByTargetDistance; // x0
  System_String_array **v635; // x2
  System_String_array **v636; // x3
  System_Boolean_array **v637; // x4
  System_Int32_array **v638; // x5
  System_Int32_array *v639; // x6
  System_Int32_array *v640; // x7
  __int64 v641; // x0
  __int64 v642; // x1
  WarBoardAIRoute_RouteData_o *v643; // x22
  System_Int32_array **ActionPiece; // x0
  System_String_array **v645; // x2
  System_String_array **v646; // x3
  System_Boolean_array **v647; // x4
  System_Int32_array **v648; // x5
  System_Int32_array *v649; // x6
  System_Int32_array *v650; // x7
  BattleServantConfConponent_o *p_actionPiece; // x0
  __int64 v652; // x1
  System_String_array **v653; // x2
  System_String_array **v654; // x3
  System_Boolean_array **v655; // x4
  System_Int32_array **v656; // x5
  System_Int32_array *v657; // x6
  System_Int32_array *v658; // x7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v659; // x8
  struct WarBoardPieceData_o *v660; // x9
  struct WarBoardPieceData_o *v661; // x10
  struct WarBoardPieceData_o *v662; // x8
  __int64 v663; // x0
  __int64 v664; // x1
  WarBoardAIRoute_RouteData_o *v665; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v666; // x10
  struct WarBoardSquareData_o *baseSquare_5__11; // x9
  WarBoardData_o *warBoardData_5__2; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v669; // x22
  WarBoardPieceData_o *v670; // x0
  WarBoardPieceData_o *v671; // x0
  WarBoardPieceData_o *v672; // x22
  WarBoardPieceData_o *v673; // x24
  WarBoardPieceData_o *v674; // x0
  WarBoardPieceData_o *v675; // x0
  WarBoardAIRoute_RouteData_o *v676; // x8
  struct WarBoardPieceData_o *v677; // x9
  WarBoardPieceData_o *v678; // x0
  WarBoardAIRoute_RouteData_o *v679; // x19
  struct WarBoardPieceData_o *v680; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v682; // x24
  int64_t flagNow; // x20
  __int64 ClassId; // x0
  __int64 v685; // x1
  struct WarBoardPieceData_o *v686; // x8
  int32_t v687; // w22
  BattleServantData_o *v688; // x0
  int32_t v689; // w2
  int64_t FlagAdvantage; // x0
  __int64 v691; // x1
  BattleServantConfConponent_o *v692; // x0
  System_String_array **v693; // x2
  System_String_array **v694; // x3
  System_Boolean_array **v695; // x4
  System_Int32_array **v696; // x5
  System_Int32_array *v697; // x6
  System_Int32_array *v698; // x7
  System_String_array **v699; // x2
  System_String_array **v700; // x3
  System_Boolean_array **v701; // x4
  System_Int32_array **v702; // x5
  System_Int32_array *v703; // x6
  System_Int32_array *v704; // x7
  System_String_array **v705; // x2
  System_String_array **v706; // x3
  System_Boolean_array **v707; // x4
  System_Int32_array **v708; // x5
  System_Int32_array *v709; // x6
  System_Int32_array *v710; // x7
  System_String_array **v711; // x2
  System_String_array **v712; // x3
  System_Boolean_array **v713; // x4
  System_Int32_array **v714; // x5
  System_Int32_array *v715; // x6
  System_Int32_array *v716; // x7
  System_String_array **v717; // x2
  System_String_array **v718; // x3
  System_Boolean_array **v719; // x4
  System_Int32_array **v720; // x5
  System_Int32_array *v721; // x6
  System_Int32_array *v722; // x7
  System_String_array **v723; // x2
  System_String_array **v724; // x3
  System_Boolean_array **v725; // x4
  System_Int32_array **v726; // x5
  System_Int32_array *v727; // x6
  System_Int32_array *v728; // x7
  System_String_array **v729; // x2
  System_String_array **v730; // x3
  System_Boolean_array **v731; // x4
  System_Int32_array **v732; // x5
  System_Int32_array *v733; // x6
  System_Int32_array *v734; // x7
  System_String_array **v735; // x2
  System_String_array **v736; // x3
  System_Boolean_array **v737; // x4
  System_Int32_array **v738; // x5
  System_Int32_array *v739; // x6
  System_Int32_array *v740; // x7
  struct WarBoardPieceData_o *v741; // x22
  WarBoardPieceData_o *v742; // x24
  WarBoardAIRoute_RouteData_o *v743; // x2
  WarBoardPieceData_o *v744; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v745; // x19
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v746; // x0
  WarBoardPieceData_o *v747; // x22
  WarBoardPieceData_o *v748; // x24
  int32_t requiredCost_5__3; // w25
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v750; // x0
  int32_t MasterSquareIndexFromPlaceData; // w24
  System_Collections_Generic_IEnumerable_TSource__o *basePieceActionPieceRouteList_5__22; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v753; // x26
  DefenseAreaData_o *DefenseAreaData; // x0
  __int64 v755; // x1
  struct WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData_5__21; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v757; // x26
  struct DefenseAreaData_o *defenseAreaData_5__7; // x25
  WarBoardPieceData_o *v759; // x0
  System_Int32_array *v760; // x2
  struct WarBoardAIRoute_AIRouteMasterData_o *v761; // x8
  _BOOL8 IsAllBlockShortestRouteEnemyAndMastr; // x0
  __int64 v763; // x1
  WarBoardAIRoute_RouteData_o *v764; // x23
  int64_t v765; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v766; // x25
  __int64 v767; // x0
  __int64 v768; // x1
  System_String_array **v769; // x2
  System_String_array **v770; // x3
  System_Boolean_array **v771; // x4
  System_Int32_array **v772; // x5
  System_Int32_array *v773; // x6
  System_Int32_array *v774; // x7
  __int64 v775; // x0
  __int64 v776; // x1
  WarBoardAIRoute_RouteData_o *v777; // x23
  System_Collections_Generic_Dictionary_uint__int__o *v778; // x25
  System_String_array **v779; // x2
  System_String_array **v780; // x3
  System_Boolean_array **v781; // x4
  System_Int32_array **v782; // x5
  System_Int32_array *v783; // x6
  System_Int32_array *v784; // x7
  __int64 v785; // x1
  System_Collections_Generic_Dictionary_int__uint__o *v786; // x0
  _BOOL8 v787; // x0
  __int64 v788; // x1
  struct WarBoardPieceData_o *v789; // x8
  uint32_t key_high; // w23
  int32_t v791; // w26
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x25
  int32_t v793; // w27
  System_Collections_Generic_IEnumerable_TSource__o *v794; // x0
  __int64 v795; // x0
  __int64 v796; // x1
  WarBoardAIRoute_RouteData_o *v797; // x23
  System_Collections_Generic_List_int__o *v798; // x25
  __int64 v799; // x0
  __int64 v800; // x1
  System_String_array **v801; // x2
  System_String_array **v802; // x3
  System_Boolean_array **v803; // x4
  System_Int32_array **v804; // x5
  System_Int32_array *v805; // x6
  System_Int32_array *v806; // x7
  WarBoardAIRoute_RouteData_o *v807; // x23
  System_Collections_Generic_Dictionary_int__bool__o *v808; // x25
  __int64 v809; // x0
  __int64 v810; // x1
  System_String_array **v811; // x2
  System_String_array **v812; // x3
  System_Boolean_array **v813; // x4
  System_Int32_array **v814; // x5
  System_Int32_array *v815; // x6
  System_Int32_array *v816; // x7
  WarBoardAIRoute_RouteData_o *v817; // x23
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *v818; // x25
  __int64 v819; // x0
  __int64 v820; // x1
  System_String_array **v821; // x2
  System_String_array **v822; // x3
  System_Boolean_array **v823; // x4
  System_Int32_array **v824; // x5
  System_Int32_array *v825; // x6
  System_Int32_array *v826; // x7
  __int64 v827; // x0
  __int64 v828; // x1
  WarBoardAIRoute_RouteData_o *v829; // x8
  WarBoardPieceData_o *v830; // x0
  _BOOL8 IsBlockShortestRouteEnemyAndMaster; // x0
  __int64 v832; // x1
  int v833; // w2
  __int64 v834; // x3
  struct WarBoardPieceData_o *v835; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v836; // x9
  DefenseAreaData_o *v837; // x0
  struct WarBoardPieceData_o *v838; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v839; // x10
  int32_t v840; // w9
  struct WarBoardPieceData_o *v841; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v842; // x9
  int32_t v843; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v844; // x0
  int32_t v845; // w0
  WarBoardAIRoute_RouteData_o *v846; // x19
  __int64 v847; // x0
  System_Collections_Generic_Dictionary_int__int__o *v848; // x0
  int32_t v849; // w23
  int32_t v850; // w24
  int32_t v851; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v852; // x0
  __int64 v853; // x0
  __int64 v854; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x25
  __int64 v856; // x0
  __int64 v857; // x1
  __int64 v858; // x0
  __int64 v859; // x1
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  __int64 v861; // x0
  __int64 v862; // x1
  System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  int32_t v864; // w23
  int32_t enemyMasterSquareIndex; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v866; // x0
  int32_t v867; // w0
  WarBoardAIRoute_RouteData_o *v868; // x19
  __int64 v869; // x0
  __int64 v870; // x1
  int v871; // w2
  __int64 v872; // x3
  WarBoardAIRoute_RouteData_o *v873; // x19
  WarBoardAIManager_c *v874; // x0
  __int64 v875; // x0
  __int64 v876; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v877; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v878; // x8
  WarBoardPieceData_o *v879; // x0
  struct WarBoardPieceData_o *v880; // x9
  WarBoardAIManager_c *v881; // x0
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *dicSquareIndexEnemyPiece; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v884; // x1
  int32_t currentKey; // w23
  int32_t v886; // w24
  System_Int32_array *v887; // x0
  __int64 v888; // x1
  struct WarBoardStageNpcEntity_o *v889; // x8
  __int64 v890; // x1
  int v891; // w2
  __int64 v892; // x3
  WarBoardAIRoute_RouteData_o *v893; // x20
  WarBoardAIManager_c *v894; // x0
  struct DefenseAreaData_o *v895; // x8
  __int64 v896; // x0
  __int64 v897; // x1
  int v898; // w2
  __int64 v899; // x3
  WarBoardAIManager_c *v900; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v901; // x0
  int32_t v902; // w23
  int32_t v903; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v904; // x23
  int v905; // w19
  WarBoardAIRoute_RouteData_o *v906; // x19
  System_Collections_Generic_Dictionary_int__uint__o *v907; // x22
  WarBoardData_o *v908; // x0
  WarBoardEffectData_o *Effect; // x0
  __int64 v910; // x1
  System_Collections_Generic_List_int__o *v911; // x23
  __int64 v912; // x1
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v913; // x0
  _BOOL8 v914; // x0
  __int64 v915; // x1
  Il2CppObject *v916; // x21
  Il2CppClass *v917; // x0
  _BOOL8 v918; // x0
  __int64 v919; // x1
  WarBoardPieceData_o *v920; // x0
  __int64 v921; // x1
  WarBoardPieceData_o *v922; // x0
  _BOOL8 v923; // x0
  __int64 v924; // x1
  __int64 v925; // x0
  __int64 v926; // x1
  WarBoardPieceData_o *v927; // x0
  _BOOL8 v928; // x0
  __int64 v929; // x1
  _BOOL8 CanAcquireItem; // x0
  __int64 v931; // x1
  WarBoardAIRoute_RouteData_o *v932; // x8
  int64_t v933; // x9
  WarBoardPieceData_o *v934; // x0
  _BOOL8 isMaster; // x0
  __int64 v936; // x1
  _BOOL8 v937; // x0
  __int64 v938; // x1
  WarBoardAIRoute_RouteData_o *v939; // x8
  WarBoardPieceData_o *v940; // x0
  _BOOL8 v941; // x0
  __int64 v942; // x1
  _BOOL8 v943; // x0
  __int64 v944; // x1
  __int64 v945; // x0
  __int64 v946; // x1
  __int64 FlagOutOfWarningAreaToDistance; // x0
  __int64 v948; // x1
  WarBoardAIRoute_RouteData_o *v949; // x8
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x9
  struct WarBoardPieceData_o *v951; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *piecePersonalityDic; // x0
  WarBoardAIRoute_PiecePersonality_o *v953; // x24
  WarBoardAIEvalCalcurater_o *v954; // x23
  __int64 v955; // x0
  __int64 v956; // x1
  const MethodInfo *v957; // x1
  WarBoardAIRoute___c_c *v958; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v959; // x24
  struct WarBoardAIRoute___c_StaticFields *v960; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__47_5; // x25
  Il2CppObject *v962; // x26
  struct WarBoardAIRoute___c_StaticFields *v963; // x0
  System_String_array **v964; // x2
  System_String_array **v965; // x3
  System_Boolean_array **v966; // x4
  System_Int32_array **v967; // x5
  System_Int32_array *v968; // x6
  System_Int32_array *v969; // x7
  System_Collections_Generic_IEnumerable_T__o *v970; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v971; // x24
  __int64 v972; // x0
  __int64 v973; // x1
  WarBoardAIRoute_RouteData_o *v974; // x0
  __int64 v975; // x1
  const MethodInfo *v976; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *allRouteList; // x0
  int32_t searchCount; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x23
  Il2CppObject *v980; // x0
  Il2CppObject *v981; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v982; // x0
  System_String_array **v983; // x2
  System_String_array **v984; // x3
  System_Boolean_array **v985; // x4
  System_Int32_array **v986; // x5
  System_Int32_array *v987; // x6
  System_Int32_array *v988; // x7
  __int64 v989; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **v990; // [xsp+0h] [xbp-200h]
  struct System_Int32_array **v991; // [xsp+8h] [xbp-1F8h]
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // [xsp+10h] [xbp-1F0h]
  int32_t *p_masterSquareIndex_5__4; // [xsp+18h] [xbp-1E8h]
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v994; // [xsp+18h] [xbp-1E8h]
  struct WarBoardAIRoute_o *_4__this; // [xsp+20h] [xbp-1E0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v996; // [xsp+28h] [xbp-1D8h] BYREF
  __int128 v997; // [xsp+50h] [xbp-1B0h]
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+60h] [xbp-1A0h]
  _DWORD v999[12]; // [xsp+78h] [xbp-188h]
  int v1000; // [xsp+A8h] [xbp-158h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v1001; // [xsp+B0h] [xbp-150h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v1002; // [xsp+E0h] [xbp-120h] BYREF
  __int128 v1003; // [xsp+100h] [xbp-100h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o endSquare; // [xsp+110h] [xbp-F0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v1005; // [xsp+120h] [xbp-E0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+148h] [xbp-B8h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+150h] [xbp-B0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+158h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v1009; // [xsp+160h] [xbp-A0h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+180h] [xbp-80h] BYREF
  int32_t actionCount[6]; // [xsp+188h] [xbp-78h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v1012; // [xsp+1A8h] [xbp-58h]

  v1012 = this;
  if ( (byte_42E7056 & 1) == 0 )
  {
    sub_B5D5C4(&AStarSearch_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__,
      v29,
      v30,
      v31);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__, v50, v51, v52);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__,
      v53,
      v54,
      v55);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v56, v57, v58);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v59, v60, v61);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo, v62, v63, v64);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___, v65, v66, v67);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v68, v69, v70);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, v71, v72, v73);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___,
      v74,
      v75,
      v76);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___,
      v77,
      v78,
      v79);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___,
      v80,
      v81,
      v82);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v83, v84, v85);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__,
      v86,
      v87,
      v88);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v89, v90, v91);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v92, v93, v94);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__,
      v95,
      v96,
      v97);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v98, v99, v100);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__,
      v101,
      v102,
      v103);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__,
      v104,
      v105,
      v106);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v107, v108, v109);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__,
      v110,
      v111,
      v112);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v113, v114, v115);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__,
      v116,
      v117,
      v118);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__,
      v119,
      v120,
      v121);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__,
      v122,
      v123,
      v124);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v125, v126, v127);
    sub_B5D5C4(
      &Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData___ctor__,
      v128,
      v129,
      v130);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_IEnumerator__float___float___ctor__, v131, v132, v133);
    sub_B5D5C4(&Method_System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___ctor__, v134, v135, v136);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long___ctor__, v137, v138, v139);
    sub_B5D5C4(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v140, v141, v142);
    sub_B5D5C4(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo, v143, v144, v145);
    sub_B5D5C4(
      &System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo,
      v146,
      v147,
      v148);
    sub_B5D5C4(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo, v149, v150, v151);
    sub_B5D5C4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v152, v153, v154);
    sub_B5D5C4(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo, v155, v156, v157);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__, v158, v159, v160);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__, v161, v162, v163);
    sub_B5D5C4(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo, v164, v165, v166);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo, v167, v168, v169);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo, v170, v171, v172);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v173, v174, v175);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__,
      v176,
      v177,
      v178);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__, v179, v180, v181);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v182, v183, v184);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v185, v186, v187);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v188, v189, v190);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v191, v192, v193);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v194, v195, v196);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v197, v198, v199);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__, v200, v201, v202);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v203, v204, v205);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__, v206, v207, v208);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v209, v210, v211);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v212, v213, v214);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v215, v216, v217);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v218, v219, v220);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___68763672, v221, v222, v223);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v224, v225, v226);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v227, v228, v229);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v230, v231, v232);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v233, v234, v235);
    sub_B5D5C4(&WarBoardAIRoute_RouteData_TypeInfo, v236, v237, v238);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v239, v240, v241);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__, v242, v243, v244);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__, v245, v246, v247);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__, v248, v249, v250);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__, v251, v252, v253);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__, v254, v255, v256);
    sub_B5D5C4(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo, v257, v258, v259);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__, v260, v261, v262);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__, v263, v264, v265);
    sub_B5D5C4(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo, v266, v267, v268);
    sub_B5D5C4(&WarBoardAIRoute___c_TypeInfo, v269, v270, v271);
    sub_B5D5C4(&WarBoardAIEvalCalcurater_TypeInfo, v272, v273, v274);
    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)sub_B5D5C4(&WarBoardAIManager_TypeInfo, v275, v276, v277);
    byte_42E7056 = 1;
  }
  *(_QWORD *)masterReplaceCount = 0LL;
  *(_QWORD *)actionCount = 0LL;
  value = 0LL;
  routeData = 0LL;
  route = 0LL;
  memset(&v1009, 0, sizeof(v1009));
  memset(&v1005, 0, 32);
  v1003 = 0u;
  endSquare = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v1002, 0, sizeof(v1002));
  memset(&v1001, 0, sizeof(v1001));
  v1000 = 0;
  _1__state = v1012->fields.__1__state;
  if ( _1__state == 2 )
  {
    servantAndEnemyRange_5__14 = v1012->fields._servantAndEnemyRange_5__14;
    servantAndEnemyMasterRange_5__15 = v1012->fields._servantAndEnemyMasterRange_5__15;
    v1012->fields.__1__state = -4;
    if ( servantAndEnemyRange_5__14 < servantAndEnemyMasterRange_5__15 )
    {
LABEL_140:
      v535 = v1012;
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(v1012, method);
      *(_QWORD *)&v535->fields.__7__wrap24 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&v535->fields.__7__wrap24, 0LL, v536, v537, v538, v539, v540, v541);
      return 0;
    }
    p__7__wrap24 = &v1012->fields.__7__wrap24;
LABEL_126:
    v523 = *(__int64 **)p__7__wrap24;
    if ( !*(_QWORD *)p__7__wrap24 )
      sub_B5D69C(this, method);
    v524 = *v523;
    if ( *(_WORD *)(*v523 + 298) )
    {
      v525 = 0LL;
      v526 = (int *)(*(_QWORD *)(v524 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v526 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v525;
        v526 += 4;
        if ( v525 >= *(unsigned __int16 *)(*v523 + 298) )
          goto LABEL_131;
      }
      v527 = v524 + 16LL * *v526 + 312;
    }
    else
    {
LABEL_131:
      v527 = sub_AF54C0(*(_QWORD *)p__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0LL, v3);
    }
    v528 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v527)(v523, *(_QWORD *)(v527 + 8));
    if ( (v528 & 1) != 0 )
    {
      v530 = *(__int64 **)p__7__wrap24;
      if ( !v530 )
        sub_B5D69C(v528, method);
      v531 = *v530;
      if ( *(_WORD *)(*v530 + 298) )
      {
        v532 = 0LL;
        v533 = (int *)(*(_QWORD *)(v531 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v533 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          ++v532;
          v533 += 4;
          if ( v532 >= *(unsigned __int16 *)(*v530 + 298) )
            goto LABEL_139;
        }
        v534 = v531 + 16LL * *v533 + 312;
      }
      else
      {
LABEL_139:
        v534 = sub_AF54C0(
                 v530,
                 System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo,
                 0LL,
                 v529);
      }
      v542 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v534)(v530, *(_QWORD *)(v534 + 8));
      v543 = v1012;
      v544 = v1012;
      v1012->fields.__2__current = v542;
      v544 = (WarBoardAIRoute__CreateRouteData_d__47_o *)((char *)v544 + 24);
      ++LODWORD(v544->fields._baseSquare_5__11);
      sub_B5D560((BattleServantConfConponent_o *)v544, (System_Int32_array **)v542, v545, v546, v547, v548, v549, v550);
      result = 1;
      v543->fields.__1__state = 2;
      return result;
    }
    goto LABEL_140;
  }
  _4__this = v1012->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap23 = &v1012->fields.__7__wrap23;
    p_basePieceBasePieceRouteList_5__23 = &v1012->fields._basePieceBasePieceRouteList_5__23;
    v1012->fields.__1__state = -3;
    goto LABEL_543;
  }
  result = 0;
  if ( !_1__state )
  {
    v1012->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v281);
    v288 = *(struct WarBoardData_o **)&Instance[4].fields.m_CachedPtr;
    v289 = v1012;
    v1012->fields._warBoardData_5__2 = v288;
    p_warBoardData_5__2 = (BattleServantConfConponent_o *)&v289->fields._warBoardData_5__2;
    sub_B5D560(p_warBoardData_5__2, (System_Int32_array **)v288, v282, v283, v284, v285, v286, v287);
    if ( !_4__this )
      sub_B5D69C(v291, v292);
    npcData = _4__this->fields.npcData;
    if ( !npcData )
      sub_B5D69C(v291, v292);
    if ( !npcData->fields.searchDepth )
      npcData->fields.searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
    v294 = v1012->fields.searchCount + 1;
    v1012->fields.searchCount = v294;
    v295 = _4__this->fields.npcData;
    if ( !v295 )
      sub_B5D69C(v291, v292);
    if ( v294 > v295->fields.searchDepth )
      return 0;
    *(_QWORD *)masterReplaceCount = 0LL;
    *(_QWORD *)actionCount = 0LL;
    p_routeDataList = &v1012->fields.routeDataList;
    WarBoardAIRoute__GetRouteDataActionList(
      _4__this,
      v1012->fields.routeDataList,
      &actionCount[1],
      actionCount,
      &masterReplaceCount[1],
      masterReplaceCount,
      0LL);
    RequiredCost = WarBoardAIRoute__GetRequiredCost(
                     _4__this,
                     _4__this->fields.moveCost,
                     _4__this->fields.masterMoveCost,
                     actionCount[1],
                     actionCount[0],
                     masterReplaceCount[1],
                     masterReplaceCount[0],
                     0LL);
    v1012->fields._requiredCost_5__3 = RequiredCost;
    v298 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v298 )
      sub_B5D69C(0LL, v299);
    if ( RequiredCost >= *((_DWORD *)&v298[7].fields.SingletonMonoBehaviour_WebViewManager__Fields + 1) )
      return 0;
    v300 = v1012;
    p_piecePlaceData = &v1012->fields.piecePlaceData;
    MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v1012->fields.piecePlaceData, 0LL);
    v300->fields._masterSquareIndex_5__4 = MasterSquareIndex;
    p_masterSquareIndex_5__4 = &v300->fields._masterSquareIndex_5__4;
    AllyPutSquareIndicesWithoutMaster = (System_Int32_array **)WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                                                 _4__this,
                                                                 v300->fields.piecePlaceData,
                                                                 MasterSquareIndex,
                                                                 0LL);
    v300->fields._allyPieceIndexs_5__5 = (struct System_Int32_array *)AllyPutSquareIndicesWithoutMaster;
    p_allyPieceIndexs_5__5 = &v300->fields._allyPieceIndexs_5__5;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v300->fields._allyPieceIndexs_5__5,
      AllyPutSquareIndicesWithoutMaster,
      v305,
      v306,
      v307,
      v308,
      v309,
      v310);
    v300->fields._defenseAreaData_5__7 = 0LL;
    p_defenseAreaData_5__7 = (BattleServantConfConponent_o *)&v300->fields._defenseAreaData_5__7;
    *(_QWORD *)&p_defenseAreaData_5__7[-1].fields.isOpenAfter = 1LL;
    sub_B5D560(p_defenseAreaData_5__7, 0LL, v312, v313, v314, v315, v316, v317);
    if ( !p_warBoardData_5__2->klass )
      sub_B5D69C(v318, v319);
    v320 = *(System_Collections_Generic_List_int__o **)&p_warBoardData_5__2->klass->_2.cctor_finished;
    if ( !v320 )
      sub_B5D69C(0LL, v319);
    v321 = System_Collections_Generic_List_int___Contains(
             v320,
             _4__this->fields.forceId,
             (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( v321 )
    {
      v1012->fields._masterExists_5__8 = 1;
    }
    else
    {
      aiRouteMasterData = _4__this->fields.aiRouteMasterData;
      if ( !aiRouteMasterData )
        sub_B5D69C(v321, v322);
      masterType = aiRouteMasterData->fields.masterType;
      v1012->fields._masterExists_5__8 = masterType != 3;
      if ( masterType == 3 )
      {
LABEL_28:
        if ( !*p_piecePlaceData )
          sub_B5D69C(0LL, v322);
        v990 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)p_routeDataList;
        System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
          &v996,
          *p_piecePlaceData,
          (const MethodInfo_2F39E40 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
        v341 = v1012;
        v997 = *(_OWORD *)&v996.fields.dictionary;
        current = v996.fields.current;
        v342 = *(_OWORD *)&v996.fields.dictionary;
        p__7__wrap8 = &v1012->fields.__7__wrap8;
        v1012->fields.__7__wrap8.fields.current = v996.fields.current;
        *(_OWORD *)&v341->fields.__7__wrap8.fields.dictionary = v342;
        sub_B5D560((BattleServantConfConponent_o *)&v341->fields.__7__wrap8, 0LL, v344, v345, v346, v347, v348, v349);
        p__8__1 = (BattleServantConfConponent_o *)&v341->fields.__8__1;
        v341->fields.__1__state = -3;
        p_baseSquareIndex_5__10 = (BattleServantConfConponent_o *)&v341->fields._baseSquareIndex_5__10;
LABEL_43:
        while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                  p__7__wrap8,
                  (const MethodInfo_28A3D38 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
        {
          key = v1012->fields.__7__wrap8.fields.current.fields.key;
          v354 = (Il2CppObject *)sub_B5D694(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
          System_Object___ctor(v354, 0LL);
          p__8__1->klass = (BattleServantConfConponent_c *)v354;
          sub_B5D560(p__8__1, (System_Int32_array **)v354, v355, v356, v357, v358, v359, v360);
          v1012->fields.__7__wrap8.fields.getEnumeratorRetType = (int)key;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          }
          Square = (System_Int32_array **)WarBoardAIManager__GetSquare((int32_t)key, 0LL);
          p_baseSquareIndex_5__10->klass = (BattleServantConfConponent_c *)Square;
          sub_B5D560(p_baseSquareIndex_5__10, Square, v362, v363, v364, v365, v366, v367);
          klass = p__8__1->klass;
          PieceUnique = (System_Int32_array **)WarBoardAIManager__GetPieceUnique(HIDWORD(key), 0LL);
          if ( !klass )
            sub_B5D69C(PieceUnique, PieceUnique);
          klass->_1.name = (const char *)PieceUnique;
          sub_B5D560((BattleServantConfConponent_o *)&klass->_1.name, PieceUnique, v370, v371, v372, v373, v374, v375);
          v378 = v1012;
          baseFlag_5__6 = v1012->fields._baseFlag_5__6;
          _8__1 = v1012->fields.__8__1;
          v1012->fields._tmpFlagNow_5__12 = -1LL;
          v378->fields._servantAndMasterRange_5__13 = -1;
          v378->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
          if ( !_8__1 )
            sub_B5D69C(v376, v377);
          if ( !_4__this )
            sub_B5D69C(0LL, v377);
          v381 = v1012;
          v381->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)(WarBoardAIRoute__GetFlagAroundSquareCheck(
                                                                             _4__this,
                                                                             *(WarBoardSquareData_o **)&v1012->fields._baseSquareIndex_5__10,
                                                                             _8__1->fields.basePiece,
                                                                             *p_piecePlaceData,
                                                                             *p_masterSquareIndex_5__4,
                                                                             0LL) | baseFlag_5__6);
          routeDataList = (System_Collections_Generic_IEnumerable_TSource__o *)v381->fields.routeDataList;
          v383 = (Il2CppObject *)v381->fields.__8__1;
          v384 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v384,
            v383,
            Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
          v386 = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                   routeDataList,
                   (System_Func_TSource__bool__o *)v384,
                   (const MethodInfo_1CA8A5C *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
          v387 = v1012->fields.routeDataList;
          v1012->fields._servantAndEnemyRange_5__14 = v386;
          if ( !v387 )
            sub_B5D69C(0LL, v385);
          Only = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                   v387,
                   (const MethodInfo_3057240 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
          if ( !p__8__1->klass )
            sub_B5D69C(Only, Only);
          RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                      _4__this,
                                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                      (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                      0LL);
          v391 = v1012;
          v392 = v1012->fields.__8__1;
          v1012->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
          if ( !v392 )
            sub_B5D69C(RouteSumPieceActionCost, v390);
          IsActable = WarBoardAIRoute__IsActable(
                        _4__this,
                        v392->fields.basePiece,
                        v391->fields._servantAndEnemyRange_5__14,
                        v391->fields._requiredCost_5__3,
                        RouteSumPieceActionCost,
                        0LL);
          if ( IsActable )
          {
            if ( !p__8__1->klass )
              sub_B5D69C(IsActable, v394);
            v395 = v1012;
            DesignationItemToDistance = (System_Int32_array **)WarBoardAIRoute__GetDesignationItemToDistance(
                                                                 _4__this,
                                                                 (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                                                 v1012->fields.routeDataList,
                                                                 v1012->fields.__7__wrap8.fields.getEnumeratorRetType,
                                                                 0LL);
            *(_QWORD *)&v395->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v395->fields._sumPieceActionCost_5__17,
              DesignationItemToDistance,
              v397,
              v398,
              v399,
              v400,
              v401,
              v402);
            if ( !p__8__1->klass )
              sub_B5D69C(v403, v404);
            v405 = v1012;
            TargetToDistance_21394984 = (System_Int32_array **)WarBoardAIRoute__GetTargetToDistance_21394984(
                                                                 _4__this,
                                                                 (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                                                 v1012->fields.routeDataList,
                                                                 v1012->fields.__7__wrap8.fields.getEnumeratorRetType,
                                                                 0LL);
            v405->fields._dicBaseDIRange_5__18 = (struct System_Collections_Generic_Dictionary_int__int__o *)TargetToDistance_21394984;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v405->fields._dicBaseDIRange_5__18,
              TargetToDistance_21394984,
              v407,
              v408,
              v409,
              v410,
              v411,
              v412);
            AllEnemyToDistance = (System_Int32_array **)WarBoardAIRoute__GetAllEnemyToDistance(
                                                          _4__this,
                                                          v405->fields.routeDataList,
                                                          v405->fields.__7__wrap8.fields.getEnumeratorRetType,
                                                          (int32_t *)&v341->fields._tmpFlagNow_5__12 + 1,
                                                          &v341->fields._servantAndMasterRange_5__13,
                                                          0LL);
            v405->fields._dicKeyPutIndexValueTargetData_5__19 = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)AllEnemyToDistance;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v405->fields._dicKeyPutIndexValueTargetData_5__19,
              AllEnemyToDistance,
              v414,
              v415,
              v416,
              v417,
              v418,
              v419);
            v405->fields._dicEnemyRange_5__20 = 0LL;
            p_dicEnemyRange_5__20 = (BattleServantConfConponent_o *)&v405->fields._dicEnemyRange_5__20;
            sub_B5D560(p_dicEnemyRange_5__20, 0LL, v421, v422, v423, v424, v425, v426);
            if ( !p__8__1->klass )
              sub_B5D69C(v427, v428);
            name = (WarBoardPieceData_o *)p__8__1->klass->_1.name;
            if ( !name )
              sub_B5D69C(0LL, v428);
            isServant = WarBoardPieceData__get_isServant(name, 0LL);
            if ( isServant )
            {
              if ( !p__8__1->klass )
                sub_B5D69C(isServant, v431);
              AdvantagePieceData = (System_Int32_array **)WarBoardAIRoute__GetAdvantagePieceData(
                                                            _4__this,
                                                            (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                                            v1012->fields.__7__wrap8.fields.getEnumeratorRetType,
                                                            0LL);
              p_dicEnemyRange_5__20->klass = (BattleServantConfConponent_c *)AdvantagePieceData;
              sub_B5D560(p_dicEnemyRange_5__20, AdvantagePieceData, v433, v434, v435, v436, v437, v438);
              if ( v1012->fields._masterExists_5__8 )
              {
                v439 = *p_masterSquareIndex_5__4;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v440 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              (int32_t)key,
                                                                              v439,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v441 = System_Linq_Enumerable__Count_int_(
                         v440,
                         (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
                v443 = v1012->fields.__8__1;
                LODWORD(v1012->fields._tmpFlagNow_5__12) = v441;
                if ( !v443 )
                  sub_B5D69C(v441, v442);
                basePiece = v443->fields.basePiece;
                if ( !basePiece )
                  sub_B5D69C(v441, v442);
                v445 = _4__this->fields.aiRouteMasterData;
                if ( !v445 )
                  sub_B5D69C(v441, v442);
                if ( v445->fields.masterType != 2
                  || v445->fields.masterPieceIndex != basePiece->fields._index_k__BackingField )
                {
                  v446 = _4__this->fields.npcData;
                  if ( !v446 )
                    sub_B5D69C(v441, v442);
                  if ( v446->fields.defenseArea > (int)v441 )
                  {
                    v1012->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v1012->fields._baseSquare_5__11 | 0x800);
                    basePiece = v443->fields.basePiece;
                    if ( !basePiece )
                      sub_B5D69C(v441, v442);
                    v445 = _4__this->fields.aiRouteMasterData;
                    if ( !v445 )
                      sub_B5D69C(v441, v442);
                  }
                }
                v447 = v445->fields.masterType;
                if ( (v447 != 2 || v445->fields.masterPieceIndex != basePiece->fields._index_k__BackingField)
                  && WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                       v1012->fields._defenseAreaData_5__7,
                       v1012->fields.__7__wrap8.fields.getEnumeratorRetType,
                       v447 == 1,
                       0LL) )
                {
                  v1012->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v1012->fields._baseSquare_5__11 | 0x80000000);
                }
              }
            }
            v448 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
              v448,
              (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v449 = v1012;
            v1012->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v448;
            p_advantagePieceData_5__21 = (BattleServantConfConponent_o *)&v449->fields._advantagePieceData_5__21;
            sub_B5D560(p_advantagePieceData_5__21, (System_Int32_array **)v448, v451, v452, v453, v454, v455, v456);
            v457 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
              v457,
              (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v458 = v1012;
            v1012->fields._basePieceActionPieceRouteList_5__22 = v457;
            p_basePieceActionPieceRouteList_5__22 = (BattleServantConfConponent_o *)&v458->fields._basePieceActionPieceRouteList_5__22;
            sub_B5D560(
              p_basePieceActionPieceRouteList_5__22,
              (System_Int32_array **)v457,
              v460,
              v461,
              v462,
              v463,
              v464,
              v465);
            if ( !*v990 )
              sub_B5D69C(0LL, v466);
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v996,
              *v990,
              (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
            v1009.fields.current = v996.fields.current.fields.key;
            *(_OWORD *)&v1009.fields.list = *(_OWORD *)&v996.fields.dictionary;
            while ( 1 )
            {
              v467 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v1009,
                       (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
              if ( !v467 )
                break;
              v469 = v1009.fields.current;
              if ( !v1009.fields.current )
                sub_B5D69C(v467, v468);
              if ( LODWORD(v1009.fields.current[1].monitor) != HIDWORD(v1009.fields.current[1].monitor) )
              {
                v470 = v1009.fields.current[3].klass;
                if ( !v470 )
                  sub_B5D69C(v467, v468);
                if ( !p__8__1->klass )
                  sub_B5D69C(v467, v468);
                v471 = p__8__1->klass->_1.name;
                if ( !v471 )
                  sub_B5D69C(v467, v468);
                if ( HIDWORD(v470->_1.namespaze) == *((_DWORD *)v471 + 7) )
                {
                  if ( !p_basePieceActionPieceRouteList_5__22->klass )
                    sub_B5D69C(0LL, v468);
                  v467 = System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                           (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)p_basePieceActionPieceRouteList_5__22->klass,
                           (WarBoardAIRoute_RouteData_o *)v1009.fields.current,
                           (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                }
                if ( (BYTE3(v469[1].klass) & 4) != 0 )
                {
                  monitor = v469[3].monitor;
                  if ( !monitor )
                    sub_B5D69C(v467, v468);
                  if ( !p__8__1->klass )
                    sub_B5D69C(v467, v468);
                  v473 = p__8__1->klass->_1.name;
                  if ( !v473 )
                    sub_B5D69C(v467, v468);
                  if ( monitor[7] == *((_DWORD *)v473 + 7) )
                  {
                    if ( !p_advantagePieceData_5__21->klass )
                      sub_B5D69C(0LL, v468);
                    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                      (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)p_advantagePieceData_5__21->klass,
                      (WarBoardAIRoute_RouteData_o *)v469,
                      (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                  }
                }
              }
            }
            v999[v1000++] = 1280;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v1009,
              (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
            if ( v1000 && v999[v1000 - 1] == 1280 )
              --v1000;
            if ( !p_baseSquareIndex_5__10->klass )
              sub_B5D69C(0LL, v506);
            v507 = v1012;
            MyAndLinkedSquareIndecies = (System_Int32_array **)WarBoardSquareData__GetMyAndLinkedSquareIndecies(
                                                                 (WarBoardSquareData_o *)p_baseSquareIndex_5__10->klass,
                                                                 0LL);
            v507->fields._basePieceBasePieceRouteList_5__23 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)MyAndLinkedSquareIndecies;
            p_basePieceBasePieceRouteList_5__23 = &v507->fields._basePieceBasePieceRouteList_5__23;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v507->fields._basePieceBasePieceRouteList_5__23,
              MyAndLinkedSquareIndecies,
              v509,
              v510,
              v511,
              v512,
              v513,
              v514);
            v515 = 0;
            p__7__wrap23 = &v507->fields.__7__wrap23;
            LODWORD(v507->fields.__7__wrap23) = 0;
            while ( 2 )
            {
              if ( !*p_basePieceBasePieceRouteList_5__23 )
                sub_B5D69C(this, method);
              if ( v515 >= SLODWORD((*p_basePieceBasePieceRouteList_5__23)->fields._slots) )
              {
                *p_basePieceBasePieceRouteList_5__23 = 0LL;
                v692 = (BattleServantConfConponent_o *)p_basePieceBasePieceRouteList_5__23;
                v341 = v1012;
                sub_B5D560(v692, 0LL, v2, v3, v4, v5, v6, v7);
                v341->fields.__8__1 = 0LL;
                p__8__1 = (BattleServantConfConponent_o *)&v341->fields.__8__1;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v341->fields.__8__1,
                  0LL,
                  v693,
                  v694,
                  v695,
                  v696,
                  v697,
                  v698);
                *(_QWORD *)&v341->fields._baseSquareIndex_5__10 = 0LL;
                p_baseSquareIndex_5__10 = (BattleServantConfConponent_o *)&v341->fields._baseSquareIndex_5__10;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v341->fields._baseSquareIndex_5__10,
                  0LL,
                  v699,
                  v700,
                  v701,
                  v702,
                  v703,
                  v704);
                *(_QWORD *)&v341->fields._sumPieceActionCost_5__17 = 0LL;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v341->fields._sumPieceActionCost_5__17,
                  0LL,
                  v705,
                  v706,
                  v707,
                  v708,
                  v709,
                  v710);
                v341->fields._dicBaseDIRange_5__18 = 0LL;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v341->fields._dicBaseDIRange_5__18,
                  0LL,
                  v711,
                  v712,
                  v713,
                  v714,
                  v715,
                  v716);
                v341->fields._dicKeyPutIndexValueTargetData_5__19 = 0LL;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v341->fields._dicKeyPutIndexValueTargetData_5__19,
                  0LL,
                  v717,
                  v718,
                  v719,
                  v720,
                  v721,
                  v722);
                v341->fields._dicEnemyRange_5__20 = 0LL;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v341->fields._dicEnemyRange_5__20,
                  0LL,
                  v723,
                  v724,
                  v725,
                  v726,
                  v727,
                  v728);
                v341->fields._advantagePieceData_5__21 = 0LL;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v341->fields._advantagePieceData_5__21,
                  0LL,
                  v729,
                  v730,
                  v731,
                  v732,
                  v733,
                  v734);
                v341->fields._basePieceActionPieceRouteList_5__22 = 0LL;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v341->fields._basePieceActionPieceRouteList_5__22,
                  0LL,
                  v735,
                  v736,
                  v737,
                  v738,
                  v739,
                  v740);
                p__7__wrap8 = &v341->fields.__7__wrap8;
                p_masterSquareIndex_5__4 = &v341->fields._masterSquareIndex_5__4;
                p_piecePlaceData = &v341->fields.piecePlaceData;
                v990 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&v341->fields.routeDataList;
                goto LABEL_43;
              }
              v551 = sub_B5D694(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v551, 0LL);
              v554 = *p_basePieceBasePieceRouteList_5__23;
              if ( !*p_basePieceBasePieceRouteList_5__23 )
                sub_B5D69C(v552, v553);
              v555 = *(int *)p__7__wrap23;
              if ( (unsigned int)v555 >= LODWORD(v554->fields._slots) )
              {
                v989 = sub_B5D6C8(v552);
                sub_B5D668(v989, 0LL);
              }
              if ( !v551 )
                sub_B5D69C(v552, v553);
              *(_DWORD *)(v551 + 16) = *(&v554->fields._count + v555);
              v556 = (int32_t *)(v551 + 16);
              v557 = (WarBoardAIRoute_RouteData_o *)sub_B5D694(WarBoardAIRoute_RouteData_TypeInfo);
              WarBoardAIRoute_RouteData___ctor(v557, v558);
              routeData = v557;
              if ( !v557 )
                sub_B5D69C(this, method);
              v559 = v1012;
              getEnumeratorRetType = v1012->fields.__7__wrap8.fields.getEnumeratorRetType;
              v557->fields.baseIndex = getEnumeratorRetType;
              v561 = *v556;
              v557->fields.actionIndex = *v556;
              if ( getEnumeratorRetType == v561 )
              {
                v562 = v559->fields.routeDataList;
                if ( !v562 )
                  sub_B5D69C(this, method);
                v559 = v1012;
                if ( v562->fields._size > 0 )
                  goto LABEL_543;
              }
              dicBaseDIRange_5__18 = (System_Collections_Generic_IEnumerable_TSource__o *)v559->fields._dicBaseDIRange_5__18;
              v564 = WarBoardAIRoute___c_TypeInfo;
              if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v564 = WarBoardAIRoute___c_TypeInfo;
              }
              static_fields = v564->static_fields;
              _9__47_1 = static_fields->__9__47_1;
              if ( !_9__47_1 )
              {
                if ( (BYTE3(v564->vtable._0_Equals.methodPtr) & 4) != 0 && !v564->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v564);
                  static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v567 = (Il2CppObject *)static_fields->__9;
                _9__47_1 = (System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)sub_B5D694(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
                System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long____ctor(
                  _9__47_1,
                  v567,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
                  (const MethodInfo_2794D1C *)Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long___ctor__);
                v568 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v568->__9__47_1 = _9__47_1;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v568->__9__47_1,
                  (System_Int32_array **)_9__47_1,
                  v569,
                  v570,
                  v571,
                  v572,
                  v573,
                  v574);
                v564 = WarBoardAIRoute___c_TypeInfo;
              }
              if ( (BYTE3(v564->vtable._0_Equals.methodPtr) & 4) != 0 && !v564->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v564);
                v564 = WarBoardAIRoute___c_TypeInfo;
              }
              v575 = v564->static_fields;
              _9__47_2 = v575->__9__47_2;
              if ( !_9__47_2 )
              {
                v577 = p__7__wrap23;
                if ( (BYTE3(v564->vtable._0_Equals.methodPtr) & 4) != 0 && !v564->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v564);
                  v575 = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v578 = (Il2CppObject *)v575->__9;
                _9__47_2 = (System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)sub_B5D694(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
                System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData____ctor(
                  _9__47_2,
                  v578,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
                  (const MethodInfo_2795050 *)Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData___ctor__);
                v579 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v579->__9__47_2 = _9__47_2;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v579->__9__47_2,
                  (System_Int32_array **)_9__47_2,
                  v580,
                  v581,
                  v582,
                  v583,
                  v584,
                  v585);
                p__7__wrap23 = v577;
              }
              v593 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData_(
                                                                                                    dicBaseDIRange_5__18,
                                                                                                    (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                                    (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                                    (const MethodInfo_1CB7BB8 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
              v594 = routeData;
              if ( !routeData )
                sub_B5D69C(0LL, v586);
              v595 = v1012;
              v596 = *(struct WarBoardSquareData_o **)&v1012->fields._baseSquareIndex_5__10;
              routeData->fields.baseSquare = v596;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v594->fields.baseSquare,
                (System_Int32_array **)v596,
                v587,
                v588,
                v589,
                v590,
                v591,
                v592);
              v604 = routeData;
              v607 = v595->fields.__8__1;
              v606 = &v595->fields.__8__1;
              v605 = v607;
              if ( !v607 )
                sub_B5D69C(routeData, v597);
              if ( !routeData )
                sub_B5D69C(0LL, v597);
              v608 = v605->fields.basePiece;
              routeData->fields.basePiece = v608;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v604->fields.basePiece,
                (System_Int32_array **)v608,
                v598,
                v599,
                v600,
                v601,
                v602,
                v603);
              v616 = routeData;
              if ( !routeData )
                sub_B5D69C(0LL, v609);
              routeData->fields.actionPiece = 0LL;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v616->fields.actionPiece,
                0LL,
                v610,
                v611,
                v612,
                v613,
                v614,
                v615);
              v617 = routeData;
              v618 = *v556;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              v619 = (System_Int32_array **)WarBoardAIManager__GetSquare(v618, 0LL);
              if ( !v617 )
                sub_B5D69C(v619, v619);
              v617->fields.actionSquare = (struct WarBoardSquareData_o *)v619;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v617->fields.actionSquare,
                v619,
                v620,
                v621,
                v622,
                v623,
                v624,
                v625);
              dicKeyPutIndexValueTargetData_5__19 = v1012->fields._dicKeyPutIndexValueTargetData_5__19;
              if ( !dicKeyPutIndexValueTargetData_5__19 )
                sub_B5D69C(0LL, v626);
              v628 = routeData;
              if ( System_Collections_Generic_Dictionary_uint__int___get_Count(
                     (System_Collections_Generic_Dictionary_uint__int__o *)dicKeyPutIndexValueTargetData_5__19,
                     (const MethodInfo_2EE4A1C *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0 )
              {
                v632 = 0x7FFFFFFFLL;
                if ( !v628 )
                  goto LABEL_266;
              }
              else
              {
                v630 = v1012->fields._dicKeyPutIndexValueTargetData_5__19;
                if ( !v630 )
                  sub_B5D69C(0LL, v629);
                Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                           (System_Collections_Generic_Dictionary_uint__int__o *)v630,
                           (const MethodInfo_2EE4BC4 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
                v632 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
                if ( !v628 )
LABEL_266:
                  sub_B5D69C(v632, v629);
              }
              v628->fields.EnemyRangeMin = v632;
              if ( !*v606 )
                sub_B5D69C(v632, v629);
              if ( !_4__this )
                sub_B5D69C(0LL, v629);
              v633 = routeData;
              MoveByTargetDistance = (System_Int32_array **)WarBoardAIRoute__GetMoveByTargetDistance(
                                                              _4__this,
                                                              v593,
                                                              *v556,
                                                              (*v606)->fields.basePiece,
                                                              0LL);
              if ( !v633 )
                sub_B5D69C(MoveByTargetDistance, MoveByTargetDistance);
              v633->fields.dicPutIndexTargetData = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)MoveByTargetDistance;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v633->fields.dicPutIndexTargetData,
                MoveByTargetDistance,
                v635,
                v636,
                v637,
                v638,
                v639,
                v640);
              if ( !*v606 )
                sub_B5D69C(v641, v642);
              v643 = routeData;
              ActionPiece = (System_Int32_array **)WarBoardAIRoute__GetActionPiece(
                                                     _4__this,
                                                     (*v606)->fields.basePiece,
                                                     *v556,
                                                     v1012->fields.piecePlaceData,
                                                     0LL);
              if ( !v643 )
                sub_B5D69C(ActionPiece, ActionPiece);
              v643->fields.actionPiece = (struct WarBoardPieceData_o *)ActionPiece;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v643->fields.actionPiece,
                ActionPiece,
                v645,
                v646,
                v647,
                v648,
                v649,
                v650);
              v659 = *v606;
              if ( !*v606 )
                sub_B5D69C(p_actionPiece, v652);
              v660 = v659->fields.basePiece;
              if ( !v660 )
                sub_B5D69C(p_actionPiece, v652);
              if ( v660->fields._nowSquareIndex_k__BackingField == *v556 )
              {
                if ( !routeData )
                  sub_B5D69C(0LL, v652);
                p_actionPiece = (BattleServantConfConponent_o *)&routeData->fields.actionPiece;
                v661 = routeData->fields.actionPiece;
                if ( v661 )
                {
                  if ( v661->fields._uniqueIndex_k__BackingField == v660->fields._uniqueIndex_k__BackingField )
                  {
                    p_actionPiece->klass = 0LL;
                    sub_B5D560(p_actionPiece, 0LL, v653, v654, v655, v656, v657, v658);
                    v659 = *v606;
                    if ( !*v606 )
                      sub_B5D69C(p_actionPiece, v652);
                  }
                }
              }
              v662 = v659->fields.basePiece;
              if ( !v662 )
                sub_B5D69C(p_actionPiece, v652);
              v663 = UnityEngine_Mathf__Abs_41629140(
                       v662->fields._limitActionCount_k__BackingField - v662->fields._currentActionCount_k__BackingField,
                       0LL);
              v665 = routeData;
              if ( !routeData )
                sub_B5D69C(v663, v664);
              v666 = v1012;
              routeData->fields.actionCountOnThisTurn = v663 + v1012->fields._servantAndEnemyRange_5__14 + 1;
              baseSquare_5__11 = v666->fields._baseSquare_5__11;
              *(_QWORD *)&v665->fields.attackByLinkedEnemy = 0LL;
              v665->fields.flagNow = (int64_t)baseSquare_5__11;
              warBoardData_5__2 = v666->fields._warBoardData_5__2;
              if ( !warBoardData_5__2 )
                sub_B5D69C(0LL, v664);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardData__GetWall(warBoardData_5__2, *v556, 0, 0LL);
              v669 = this;
              if ( this )
              {
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                if ( !this )
                  sub_B5D69C(0LL, method);
                if ( this[2].fields._servantAndEnemyRange_5__14 < _4__this->fields.wallAttackCost
                                                                + v1012->fields._requiredCost_5__3 )
                  goto LABEL_543;
                if ( !*v606 )
                  sub_B5D69C(this, method);
                v670 = (*v606)->fields.basePiece;
                if ( !v670 )
                  sub_B5D69C(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableWallAttack(
                                                                     v670,
                                                                     v1012->fields._servantAndEnemyMasterRange_5__15,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_543;
                if ( !*v606 )
                  sub_B5D69C(this, method);
                v671 = (*v606)->fields.basePiece;
                if ( !v671 )
                  sub_B5D69C(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__CheckWallAttackCond(
                                                                     v671,
                                                                     (WarBoardWallData_o *)v669,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_543;
              }
              if ( !routeData )
                sub_B5D69C(this, method);
              v672 = routeData->fields.actionPiece;
              if ( v672 )
              {
                if ( !*v606 )
                  sub_B5D69C(this, method);
                v673 = (*v606)->fields.basePiece;
                if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                }
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsEnemyPiece(v673, v672, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !*v606 )
                    sub_B5D69C(this, method);
                  v674 = (*v606)->fields.basePiece;
                  if ( !v674 )
                    sub_B5D69C(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v674, 0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_251;
                  if ( !routeData )
                    sub_B5D69C(this, method);
                  v675 = routeData->fields.actionPiece;
                  if ( !v675 )
                    sub_B5D69C(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v675, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_251:
                    v676 = routeData;
                    if ( !routeData )
                      sub_B5D69C(this, method);
                    v677 = routeData->fields.basePiece;
                    routeData->fields.flagNow |= 2uLL;
                    if ( !v677 )
                      sub_B5D69C(this, method);
                    v678 = v676->fields.actionPiece;
                    v676->fields.attackCountOnThisTurn = v677->fields._attackCount_k__BackingField + 1;
                    if ( !v678 )
                      sub_B5D69C(0LL, method);
                    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isServant(v678, 0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v679 = routeData;
                      if ( !routeData )
                        sub_B5D69C(this, method);
                      if ( !*v606 )
                        sub_B5D69C(this, method);
                      v680 = (*v606)->fields.basePiece;
                      if ( !v680 )
                        sub_B5D69C(this, method);
                      battleServant_k__BackingField = v680->fields._battleServant_k__BackingField;
                      if ( !battleServant_k__BackingField )
                        sub_B5D69C(0LL, method);
                      v682 = p_basePieceBasePieceRouteList_5__23;
                      flagNow = routeData->fields.flagNow;
                      ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
                      if ( !routeData )
                        sub_B5D69C(ClassId, v685);
                      v686 = routeData->fields.actionPiece;
                      if ( !v686 )
                        sub_B5D69C(ClassId, v685);
                      v687 = ClassId;
                      v688 = v686->fields._battleServant_k__BackingField;
                      if ( !v688 )
                        sub_B5D69C(0LL, v685);
                      v689 = BattleServantData__getClassId(v688, 0LL);
                      FlagAdvantage = WarBoardAIRoute__GetFlagAdvantage(_4__this, v687, v689, 0LL);
                      v679->fields.flagNow = FlagAdvantage | flagNow;
                      if ( !routeData )
                        sub_B5D69C(FlagAdvantage, v691);
                      WarBoardAIRoute__LinkedCount(
                        _4__this,
                        *v556,
                        v1012->fields.piecePlaceData,
                        &routeData->fields.attackByLinkedEnemy,
                        &routeData->fields.attackByLinkedAlly,
                        0LL);
                      p_basePieceBasePieceRouteList_5__23 = v682;
                    }
                    break;
                  }
LABEL_543:
                  v515 = *(_DWORD *)p__7__wrap23 + 1;
                  *(_DWORD *)p__7__wrap23 = v515;
                  continue;
                }
                if ( !routeData )
                  sub_B5D69C(this, method);
                v741 = routeData->fields.actionPiece;
                if ( !v741 )
                  sub_B5D69C(this, method);
                if ( v741->fields._roleType_k__BackingField == 1 )
                  goto LABEL_543;
                if ( !*v606 )
                  sub_B5D69C(this, method);
                v742 = (*v606)->fields.basePiece;
                if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                }
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsAllyPiece(v742, v741, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !routeData )
                    sub_B5D69C(this, method);
                  routeData->fields.flagNow |= 0x4000000uLL;
                }
              }
              break;
            }
            v743 = routeData;
            if ( !routeData )
              sub_B5D69C(this, method);
            if ( (routeData->fields.flagNow & 2) != 0 )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_B5D69C(0LL, method);
              if ( this[2].fields._servantAndEnemyRange_5__14 < _4__this->fields.attackCost
                                                              + v1012->fields._requiredCost_5__3 )
                goto LABEL_543;
              if ( !*v606 )
                sub_B5D69C(this, method);
              v759 = (*v606)->fields.basePiece;
              if ( !v759 )
                sub_B5D69C(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableAttack(
                                                                   v759,
                                                                   v1012->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_543;
              v743 = routeData;
              if ( !routeData )
                sub_B5D69C(this, method);
            }
            if ( (v743->fields.flagNow & 2) == 0 )
            {
              if ( !*v606 )
                sub_B5D69C(this, method);
              v744 = (*v606)->fields.basePiece;
              if ( !v744 )
                sub_B5D69C(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableMoveBySelf(
                                                                   v744,
                                                                   v1012->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_543;
              v743 = routeData;
              if ( !routeData )
                sub_B5D69C(this, method);
            }
            if ( (v743->fields.flagNow & 0x4000000) != 0 )
            {
              if ( !*v606 )
                sub_B5D69C(this, method);
              v745 = v1012;
              v746 = v1012->fields.routeDataList;
              if ( !v746 )
                sub_B5D69C(0LL, method);
              v747 = (*v606)->fields.basePiece;
              v748 = v743->fields.actionPiece;
              requiredCost_5__3 = v1012->fields._requiredCost_5__3;
              v750 = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                       v746,
                       (const MethodInfo_3057240 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIRoute__IsActableReplace(
                                                                   _4__this,
                                                                   v747,
                                                                   v748,
                                                                   requiredCost_5__3,
                                                                   (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v750,
                                                                   v745->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_543;
              v743 = routeData;
            }
            v991 = p__7__wrap23;
            v994 = p_basePieceBasePieceRouteList_5__23;
            piecePlaceData = WarBoardAIRoute__UpdatePiecePlaceData(
                               _4__this,
                               v1012->fields.piecePlaceData,
                               v743,
                               v1012->fields.__7__wrap8.fields.getEnumeratorRetType,
                               *v556,
                               0LL);
            MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
                                               _4__this,
                                               piecePlaceData,
                                               0LL);
            basePieceActionPieceRouteList_5__22 = (System_Collections_Generic_IEnumerable_TSource__o *)v1012->fields._basePieceActionPieceRouteList_5__22;
            v753 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v753,
              (Il2CppObject *)v551,
              Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
              (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
            DefenseAreaData = (DefenseAreaData_o *)System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
                                                     basePieceActionPieceRouteList_5__22,
                                                     (System_Func_TSource__bool__o *)v753,
                                                     (const MethodInfo_1C9A92C *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)DefenseAreaData & 1) != 0
              || (advantagePieceData_5__21 = v1012->fields._advantagePieceData_5__21,
                  v757 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo),
                  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                    v757,
                    (Il2CppObject *)v551,
                    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
                    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__),
                  DefenseAreaData = (DefenseAreaData_o *)System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)advantagePieceData_5__21,
                                                           (System_Func_TSource__bool__o *)v757,
                                                           (const MethodInfo_1C9A92C *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___),
                  ((unsigned __int8)DefenseAreaData & 1) != 0) )
            {
              if ( !routeData )
                sub_B5D69C(DefenseAreaData, v755);
              routeData->fields.flagNow |= 0x20000000000uLL;
            }
            if ( v1012->fields._masterExists_5__8 )
            {
              if ( v1012->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
                goto LABEL_306;
              if ( !routeData )
                sub_B5D69C(DefenseAreaData, v755);
              if ( (routeData->fields.flagNow & 0x400) != 0 )
              {
LABEL_306:
                v760 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                         _4__this,
                         piecePlaceData,
                         MasterSquareIndexFromPlaceData,
                         0LL);
                DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                                    _4__this,
                                    MasterSquareIndexFromPlaceData,
                                    v760,
                                    piecePlaceData,
                                    0LL);
                defenseAreaData_5__7 = DefenseAreaData;
                if ( !DefenseAreaData )
LABEL_672:
                  sub_B5D69C(DefenseAreaData, v755);
              }
              else
              {
                defenseAreaData_5__7 = v1012->fields._defenseAreaData_5__7;
                if ( !defenseAreaData_5__7 )
                  goto LABEL_672;
              }
              v761 = _4__this->fields.aiRouteMasterData;
              if ( !v761 )
                sub_B5D69C(DefenseAreaData, v755);
              IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                                       defenseAreaData_5__7->fields._ShortestRoutes_k__BackingField,
                                                       piecePlaceData,
                                                       v761->fields.masterType == 1,
                                                       0LL);
              v764 = routeData;
              if ( IsAllBlockShortestRouteEnemyAndMastr )
              {
                if ( !routeData )
                  sub_B5D69C(IsAllBlockShortestRouteEnemyAndMastr, v763);
                routeData->fields.flagNow |= 0x40000000uLL;
              }
              else if ( !routeData )
              {
                sub_B5D69C(IsAllBlockShortestRouteEnemyAndMastr, v763);
              }
              v765 = v764->fields.flagNow;
              if ( (v765 & 0x400) != 0 && (defenseAreaData_5__7->fields._Flag_k__BackingField & 0x10000000000LL) != 0 )
                v764->fields.flagNow = v765 | 0x40000000000LL;
            }
            else
            {
              v764 = routeData;
            }
            v766 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v766,
              (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v764 )
              sub_B5D69C(v767, v768);
            v764->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v766;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v764->fields.moveByLinkedPiece,
              (System_Int32_array **)v766,
              v769,
              v770,
              v771,
              v772,
              v773,
              v774);
            v777 = routeData;
            if ( !routeData )
              sub_B5D69C(v775, v776);
            *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0LL;
            v778 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
            System_Collections_Generic_Dictionary_uint__int____ctor(
              v778,
              (const MethodInfo_2EE4278 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
            v777->fields.dicUniqueKeyRange = v778;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v777->fields.dicUniqueKeyRange,
              (System_Int32_array **)v778,
              v779,
              v780,
              v781,
              v782,
              v783,
              v784);
            v786 = v1012->fields.piecePlaceData;
            if ( !v786 )
              sub_B5D69C(0LL, v785);
            System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
              &v996,
              v786,
              (const MethodInfo_2F39E40 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
            *(_OWORD *)&v1005.fields.dictionary = *(_OWORD *)&v996.fields.dictionary;
            v1005.fields.current = v996.fields.current;
            while ( 1 )
            {
              v787 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                       &v1005,
                       (const MethodInfo_28A3D38 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
              if ( !v787 )
                break;
              if ( !*v606 )
                sub_B5D69C(v787, v788);
              v789 = (*v606)->fields.basePiece;
              if ( !v789 )
                sub_B5D69C(v787, v788);
              key_high = HIDWORD(v1005.fields.current.fields.key);
              if ( v789->fields._uniqueIndex_k__BackingField != HIDWORD(v1005.fields.current.fields.key) )
              {
                if ( !routeData )
                  sub_B5D69C(v787, v788);
                v791 = (int32_t)v1005.fields.current.fields.key;
                dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
                v793 = *v556;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v794 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v793,
                                                                              v791,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v795 = System_Linq_Enumerable__Count_int_(
                         v794,
                         (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
                if ( !dicUniqueKeyRange )
                  sub_B5D69C(v795, v796);
                System_Collections_Generic_Dictionary_uint__int___Add(
                  dicUniqueKeyRange,
                  key_high,
                  v795,
                  (const MethodInfo_2EE4E1C *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
              }
            }
            v999[v1000++] = 2813;
            System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
              &v1005,
              (const MethodInfo_28A3E80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
            if ( v1000 && v999[v1000 - 1] == 2813 )
              --v1000;
            v797 = routeData;
            v798 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v798,
              (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
            if ( !v797 )
              sub_B5D69C(v799, v800);
            v797->fields.listExistDesignationItem = v798;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v797->fields.listExistDesignationItem,
              (System_Int32_array **)v798,
              v801,
              v802,
              v803,
              v804,
              v805,
              v806);
            v807 = routeData;
            v808 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v808,
              (const MethodInfo_2F02974 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( !v807 )
              sub_B5D69C(v809, v810);
            v807->fields.dicMoveByServantGetDesignationItem = v808;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v807->fields.dicMoveByServantGetDesignationItem,
              (System_Int32_array **)v808,
              v811,
              v812,
              v813,
              v814,
              v815,
              v816);
            v817 = routeData;
            v818 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType____ctor(
              v818,
              (const MethodInfo_2F29CC8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
            if ( !v817 )
              sub_B5D69C(v819, v820);
            v817->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = v818;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v817->fields.dicItemIdKeyIsMoveByServantDesignationItemRange,
              (System_Int32_array **)v818,
              v821,
              v822,
              v823,
              v824,
              v825,
              v826);
            v829 = routeData;
            if ( !routeData )
              sub_B5D69C(v827, v828);
            routeData->fields.isMoveByOutOfWarningArea = 0;
            *(_QWORD *)&v829->fields.isMoveByServantAndEnemyRange = 0LL;
            *(_QWORD *)&v829->fields.isMoveByMasterAndEnemyRange = 0LL;
            *(_QWORD *)&v829->fields.isMoveByServantAndAttackAdvantageServantRange = 0LL;
            *(_QWORD *)&v829->fields.isMoveByServantAndDefenseAdvantageServantRange = 0LL;
            *(_QWORD *)&v829->fields.isMoveByServantAndClassAdvantageServantRange = 0LL;
            if ( !*v606 )
              sub_B5D69C(v827, v828);
            v830 = (*v606)->fields.basePiece;
            if ( !v830 )
              sub_B5D69C(0LL, v828);
            IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isServant(v830, 0LL);
            if ( IsBlockShortestRouteEnemyAndMaster )
            {
              if ( v1012->fields._masterExists_5__8 )
              {
                if ( !*v606 )
                  sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                v835 = (*v606)->fields.basePiece;
                if ( !v835 )
                  sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                v836 = _4__this->fields.aiRouteMasterData;
                if ( !v836 )
                  sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                if ( v836->fields.masterType != 2
                  || v836->fields.masterPieceIndex != v835->fields._index_k__BackingField )
                {
                  v837 = v1012->fields._defenseAreaData_5__7;
                  if ( !v837 )
                    sub_B5D69C(0LL, v832);
                  IsBlockShortestRouteEnemyAndMaster = DefenseAreaData__IsInDefenseArea(v837, *v556, 0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                    routeData->fields.flagNow |= 0x4000000000uLL;
                  }
                }
                if ( !*v606 )
                  sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                v838 = (*v606)->fields.basePiece;
                if ( !v838 )
                  sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                v839 = _4__this->fields.aiRouteMasterData;
                if ( !v839 )
                  sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                v840 = v839->fields.masterType;
                if ( v840 != 2 || v839->fields.masterPieceIndex != v838->fields._index_k__BackingField )
                {
                  IsBlockShortestRouteEnemyAndMaster = WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                                                         v1012->fields._defenseAreaData_5__7,
                                                         *v556,
                                                         v840 == 1,
                                                         0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                    routeData->fields.flagNow |= 0x100000000uLL;
                  }
                }
                if ( !*v606 )
                  sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                v841 = (*v606)->fields.basePiece;
                if ( !v841 )
                  sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                v842 = _4__this->fields.aiRouteMasterData;
                if ( !v842 )
                  sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                if ( v842->fields.masterType != 2
                  || v842->fields.masterPieceIndex != v841->fields._index_k__BackingField )
                {
                  v843 = *v556;
                  if ( *v556 == MasterSquareIndexFromPlaceData )
                  {
                    if ( !routeData )
                      sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                    routeData->fields.isMoveByServantAndMasterRange = 2;
                  }
                  else
                  {
                    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AStarSearch_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                    }
                    v844 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                                  0LL,
                                                                                  v843,
                                                                                  MasterSquareIndexFromPlaceData,
                                                                                  0,
                                                                                  0LL,
                                                                                  0LL);
                    v845 = System_Linq_Enumerable__Count_int_(
                             v844,
                             (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
                    v846 = routeData;
                    v847 = WarBoardAIRoute__CalcurateDistanceType(v845, v1012->fields._tmpFlagNow_5__12, 0LL);
                    if ( !v846 )
                      sub_B5D69C(v847, v832);
                    v846->fields.isMoveByServantAndMasterRange = v847;
                  }
                }
              }
              v848 = *(System_Collections_Generic_Dictionary_int__int__o **)&v1012->fields._sumPieceActionCost_5__17;
              if ( !v848 )
                sub_B5D69C(0LL, v832);
              System_Collections_Generic_Dictionary_int__int___GetEnumerator(
                &v996,
                v848,
                (const MethodInfo_2F0B3CC *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
              v1003 = *(_OWORD *)&v996.fields.dictionary;
              endSquare = v996.fields.current;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
                        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v1003,
                        (const MethodInfo_289F694 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
              {
                v849 = (int32_t)endSquare.fields.key;
                v850 = HIDWORD(endSquare.fields.key);
                v851 = *v556;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v852 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v851,
                                                                              v849,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v853 = System_Linq_Enumerable__Count_int_(
                         v852,
                         (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
                if ( !routeData )
                  sub_B5D69C(v853, v854);
                dicItemIdKeyIsMoveByServantDesignationItemRange = routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
                v856 = WarBoardAIRoute__CalcurateDistanceType(v853, v850, 0LL);
                if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
                  sub_B5D69C(v856, v857);
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___set_Item(
                  dicItemIdKeyIsMoveByServantDesignationItemRange,
                  v849,
                  v856,
                  (const MethodInfo_2F2A844 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
                if ( !routeData )
                  sub_B5D69C(v858, v859);
                dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
                if ( !dicMoveByServantGetDesignationItem )
                  sub_B5D69C(0LL, v859);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  dicMoveByServantGetDesignationItem,
                  v849,
                  *v556 == v849,
                  (const MethodInfo_2F03524 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
                if ( !routeData )
                  sub_B5D69C(v861, v862);
                listExistDesignationItem = routeData->fields.listExistDesignationItem;
                if ( !listExistDesignationItem )
                  sub_B5D69C(0LL, v862);
                System_Collections_Generic_List_int___Add(
                  listExistDesignationItem,
                  v849,
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              }
              v999[v1000++] = 3406;
              System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v1003,
                (const MethodInfo_289F7DC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
              if ( v1000 && v999[v1000 - 1] == 3406 )
                --v1000;
              v864 = *v556;
              enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
              if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AStarSearch_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
              }
              v866 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                            0LL,
                                                                            v864,
                                                                            enemyMasterSquareIndex,
                                                                            0,
                                                                            0LL,
                                                                            0LL);
              v867 = System_Linq_Enumerable__Count_int_(
                       v866,
                       (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
              v868 = routeData;
              v869 = WarBoardAIRoute__CalcurateDistanceType(v867, v1012->fields._servantAndMasterRange_5__13, 0LL);
              if ( !v868 )
                sub_B5D69C(v869, v870);
              v868->fields.isMoveByServantAndEnemyMasterRange = v869;
              v873 = routeData;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_42E696F )
              {
                sub_B5D5C4(&WarBoardAIManager_TypeInfo, v870, v871, v872);
                byte_42E696F = 1;
              }
              v874 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v874 = WarBoardAIManager_TypeInfo;
              }
              v875 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v874->static_fields->dicSquareIndexEnemyPiece,
                       HIDWORD(v1012->fields._tmpFlagNow_5__12),
                       *v556,
                       0LL);
              if ( !v873 )
                sub_B5D69C(v875, v876);
              v877 = v1012;
              v873->fields.isMoveByServantAndEnemyRange = v875;
              WarBoardAIRoute__ClassAdvantageDistance(
                _4__this,
                &routeData,
                (WarBoardAIRoute_AdvantagePieceData_o *)v877->fields._dicEnemyRange_5__20,
                *v556,
                0LL);
            }
            v878 = _4__this->fields.aiRouteMasterData;
            if ( !v878 )
              sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
            if ( v878->fields.masterType )
            {
LABEL_407:
              if ( v878->fields.masterType == 2 )
              {
                if ( !*v606 )
                  sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                v880 = (*v606)->fields.basePiece;
                if ( !v880 )
                  sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                if ( v880->fields._index_k__BackingField == v878->fields.masterPieceIndex )
                  goto LABEL_411;
              }
            }
            else
            {
              if ( !*v606 )
                sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
              v879 = (*v606)->fields.basePiece;
              if ( !v879 )
                sub_B5D69C(0LL, v832);
              IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isMaster(v879, 0LL);
              if ( !IsBlockShortestRouteEnemyAndMaster )
              {
                v878 = _4__this->fields.aiRouteMasterData;
                if ( !v878 )
                  sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                goto LABEL_407;
              }
LABEL_411:
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_42E696F )
              {
                sub_B5D5C4(&WarBoardAIManager_TypeInfo, v832, v833, v834);
                byte_42E696F = 1;
              }
              v881 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v881 = WarBoardAIManager_TypeInfo;
              }
              dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v881->static_fields->dicSquareIndexEnemyPiece;
              if ( !dicSquareIndexEnemyPiece )
                sub_B5D69C(0LL, v832);
              Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                       dicSquareIndexEnemyPiece,
                       (const MethodInfo_2F31CD0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
              if ( !Keys )
                sub_B5D69C(0LL, v884);
              System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData___GetEnumerator(
                (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v996,
                Keys,
                (const MethodInfo_243597C *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
              v1002.fields.currentKey = v996.fields.current.fields.key;
              *(_OWORD *)&v1002.fields.dictionary = *(_OWORD *)&v996.fields.dictionary;
              while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___MoveNext(
                        &v1002,
                        (const MethodInfo_28A2B8C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                currentKey = (int32_t)v1002.fields.currentKey;
                v886 = *v556;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v887 = AStarSearch__RouteSearch(0LL, v886, currentKey, 0, 0LL, 0LL);
                if ( !v887 )
                  sub_B5D69C(0LL, v888);
                v889 = _4__this->fields.npcData;
                if ( !v889 )
                  sub_B5D69C(v887, v888);
                if ( (signed int)(v887->max_length - 1) <= v889->fields.defenseArea )
                {
                  if ( !routeData )
                    sub_B5D69C(v887, v888);
                  routeData->fields.flagNow |= 0x8000000000uLL;
                  break;
                }
              }
              v999[v1000++] = 3697;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___Dispose(
                &v1002,
                (const MethodInfo_28A2B88 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( v1000 && v999[v1000 - 1] == 3697 )
                --v1000;
              v893 = routeData;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_42E696F )
              {
                sub_B5D5C4(&WarBoardAIManager_TypeInfo, v890, v891, v892);
                byte_42E696F = 1;
              }
              v894 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v894 = WarBoardAIManager_TypeInfo;
              }
              v895 = v1012->fields._defenseAreaData_5__7;
              if ( !v895 )
                sub_B5D69C(v894, v890);
              v896 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v894->static_fields->dicSquareIndexEnemyPiece,
                       v895->fields._MasterAndEnemyRange_k__BackingField,
                       *v556,
                       0LL);
              if ( !v893 )
                sub_B5D69C(v896, v897);
              v893->fields.isMoveByMasterAndEnemyRange = v896;
              p_basePieceBasePieceRouteList_5__23 = v994;
              if ( !byte_42E696F )
              {
                sub_B5D5C4(&WarBoardAIManager_TypeInfo, v897, v898, v899);
                byte_42E696F = 1;
              }
              v900 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v900 = WarBoardAIManager_TypeInfo;
              }
              v901 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v900->static_fields->dicSquareIndexEnemyPiece;
              if ( !v901 )
                sub_B5D69C(0LL, v897);
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
                &v996,
                v901,
                (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
              v1001 = v996;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                        &v1001,
                        (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                v902 = (int32_t)v1001.fields.current.fields.key;
                v903 = *v556;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v904 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v903,
                                                                              v902,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                System_Linq_Enumerable__Count_int_(
                  v904,
                  (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
                if ( !WarBoardAIRoute__IsDetour((System_Int32_array *)v904, v1012->fields._allyPieceIndexs_5__5, 0LL) )
                {
                  v905 = 0;
                  goto LABEL_458;
                }
              }
              v905 = 1;
LABEL_458:
              v999[v1000++] = 3829;
              System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
                &v1001,
                (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( v1000 && v999[v1000 - 1] == 3829 )
                --v1000;
              if ( v905 )
              {
                if ( !routeData )
                  sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
                routeData->fields.flagNow |= 0x1000000000uLL;
              }
            }
            v906 = routeData;
            if ( !routeData )
              sub_B5D69C(IsBlockShortestRouteEnemyAndMaster, v832);
            v907 = piecePlaceData;
            if ( !routeData->fields.actionPiece || (routeData->fields.flagNow & 0x4000000) != 0 )
            {
              v908 = v1012->fields._warBoardData_5__2;
              if ( !v908 )
                sub_B5D69C(0LL, v832);
              Effect = WarBoardData__GetEffect(v908, *v556, 0LL);
              if ( Effect )
              {
                if ( !routeData )
                  sub_B5D69C(Effect, v910);
                routeData->fields.flagNow |= 0x200000000uLL;
              }
              v911 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v911,
                (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
              v913 = v1012->fields.routeDataList;
              if ( !v913 )
                sub_B5D69C(0LL, v912);
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v996,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v913,
                (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
              v1009.fields.current = v996.fields.current.fields.key;
              *(_OWORD *)&v1009.fields.list = *(_OWORD *)&v996.fields.dictionary;
              while ( 1 )
              {
                v914 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v1009,
                         (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
                if ( !v914 )
                  break;
                v916 = v1009.fields.current;
                if ( !v1009.fields.current )
                  sub_B5D69C(v914, v915);
                if ( (BYTE3(v1009.fields.current[1].klass) & 8) != 0 )
                {
                  v917 = v1009.fields.current[3].klass;
                  if ( !v917 )
                    sub_B5D69C(0LL, v915);
                  v918 = WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v917, 0LL);
                  if ( v918 )
                  {
                    if ( !v911 )
                      sub_B5D69C(v918, v919);
                    System_Collections_Generic_List_int___Add(
                      v911,
                      HIDWORD(v916[1].monitor),
                      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                  }
                  if ( (BYTE3(v916[1].klass) & 4) != 0 )
                  {
                    v920 = (WarBoardPieceData_o *)v916[3].klass;
                    if ( !v920 )
                      sub_B5D69C(0LL, v919);
                    if ( WarBoardPieceData__get_isMaster(v920, 0LL) )
                    {
                      v922 = (WarBoardPieceData_o *)v916[3].monitor;
                      if ( !v922 )
                        sub_B5D69C(0LL, v921);
                      v923 = WarBoardPieceData__get_isServant(v922, 0LL);
                      if ( v923 )
                      {
                        if ( !v911 )
                          sub_B5D69C(v923, v924);
                        System_Collections_Generic_List_int___Add(
                          v911,
                          (int32_t)v916[1].monitor,
                          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                      }
                    }
                  }
                }
              }
              v999[v1000++] = 4082;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v1009,
                (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
              p_basePieceBasePieceRouteList_5__23 = v994;
              v907 = piecePlaceData;
              if ( v1000 && v999[v1000 - 1] == 4082 )
                --v1000;
              if ( !routeData )
                sub_B5D69C(v925, v926);
              v927 = routeData->fields.basePiece;
              if ( !v927 )
                sub_B5D69C(0LL, v926);
              v928 = WarBoardPieceData__get_isServant(v927, 0LL);
              if ( v928 )
              {
                if ( !routeData )
                  sub_B5D69C(v928, v929);
                CanAcquireItem = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v911, 0LL);
                if ( CanAcquireItem )
                {
                  v932 = routeData;
                  if ( !routeData )
                    sub_B5D69C(CanAcquireItem, v931);
                  v933 = routeData->fields.flagNow | 0x18000000;
                  goto LABEL_497;
                }
              }
              else
              {
                if ( !routeData )
                  sub_B5D69C(v928, v929);
                v934 = routeData->fields.basePiece;
                if ( !v934 )
                  sub_B5D69C(0LL, v929);
                isMaster = WarBoardPieceData__get_isMaster(v934, 0LL);
                if ( isMaster )
                {
                  if ( !routeData )
                    sub_B5D69C(isMaster, v936);
                  v937 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v911, 0LL);
                  v939 = routeData;
                  if ( v937 )
                  {
                    if ( !routeData )
                      sub_B5D69C(v937, v938);
                    routeData->fields.flagNow |= 0x10000000uLL;
                  }
                  else if ( !routeData )
                  {
                    sub_B5D69C(v937, v938);
                  }
                  if ( (v939->fields.flagNow & 0x4000000) != 0 )
                  {
                    v940 = v939->fields.actionPiece;
                    if ( !v940 )
                      sub_B5D69C(0LL, v938);
                    v941 = WarBoardPieceData__get_isServant(v940, 0LL);
                    if ( v941 )
                    {
                      if ( !routeData )
                        sub_B5D69C(v941, v942);
                      v943 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.baseIndex, v911, 0LL);
                      if ( v943 )
                      {
                        v932 = routeData;
                        if ( !routeData )
                          sub_B5D69C(v943, v944);
                        v933 = routeData->fields.flagNow | 0x8000000;
LABEL_497:
                        v932->fields.flagNow = v933;
                      }
                    }
                  }
                }
              }
              WarBoardAIRoute__LinkedPieceCount(_4__this, &routeData, piecePlaceData, v911, 0LL);
              v906 = routeData;
              if ( !routeData )
                sub_B5D69C(v945, v946);
            }
            FlagOutOfWarningAreaToDistance = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                               _4__this,
                                               v906->fields.baseIndex,
                                               v906->fields.actionIndex,
                                               0LL);
            v906->fields.isMoveByOutOfWarningArea = FlagOutOfWarningAreaToDistance;
            v949 = routeData;
            p__7__wrap23 = v991;
            if ( !routeData )
              sub_B5D69C(FlagOutOfWarningAreaToDistance, v948);
            evalOffsetMagnification = routeData->fields.evalOffsetMagnification;
            if ( !evalOffsetMagnification )
              sub_B5D69C(FlagOutOfWarningAreaToDistance, v948);
            evalOffsetMagnification->fields.isAttack = (routeData->fields.flagNow & 2) != 0;
            v951 = v949->fields.basePiece;
            if ( !v951 )
              sub_B5D69C(FlagOutOfWarningAreaToDistance, v948);
            piecePersonalityDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)_4__this->fields.piecePersonalityDic;
            if ( !piecePersonalityDic )
              sub_B5D69C(0LL, v948);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                 piecePersonalityDic,
                                                                 v951->fields._index_k__BackingField,
                                                                 &value,
                                                                 (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v953 = (WarBoardAIRoute_PiecePersonality_o *)value;
              v954 = (WarBoardAIEvalCalcurater_o *)sub_B5D694(WarBoardAIEvalCalcurater_TypeInfo);
              WarBoardAIEvalCalcurater___ctor(v954, v953, 0LL);
              if ( !v954 )
                sub_B5D69C(v955, v956);
              WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v954, &routeData, 0LL);
              WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
                v954,
                &routeData,
                _4__this->fields.averageBenefitValue,
                0LL);
              if ( !routeData )
                sub_B5D69C(0LL, v957);
              WarBoardAIRoute_RouteData__CalcEvalValue(routeData, v957);
              v958 = WarBoardAIRoute___c_TypeInfo;
              v959 = v1012->fields.routeDataList;
              if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v958 = WarBoardAIRoute___c_TypeInfo;
              }
              v960 = v958->static_fields;
              _9__47_5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v960->__9__47_5;
              if ( !_9__47_5 )
              {
                if ( (BYTE3(v958->vtable._0_Equals.methodPtr) & 4) != 0 && !v958->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v958);
                  v907 = piecePlaceData;
                  v960 = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v962 = (Il2CppObject *)v960->__9;
                _9__47_5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
                  _9__47_5,
                  v962,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__,
                  (const MethodInfo_2C3041C *)Method_System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___ctor__);
                v963 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v963->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v963->__9__47_5,
                  (System_Int32_array **)_9__47_5,
                  v964,
                  v965,
                  v966,
                  v967,
                  v968,
                  v969);
                p__7__wrap23 = v991;
              }
              v970 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v959,
                                                                      (System_Func_TSource__TResult__o *)_9__47_5,
                                                                      (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
              v971 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
              System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
                v971,
                v970,
                (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___68763672);
              if ( !v971 )
                sub_B5D69C(v972, v973);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v971,
                (EventMissionProgressRequest_Argument_ProgressData_o *)routeData,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__);
              v974 = BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                       (System_Collections_Generic_List_T__o *)v971,
                       v971->fields._size - 2,
                       0LL,
                       (const MethodInfo_1AD901C *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
              route = v974;
              if ( v974 )
              {
                if ( !routeData )
                  sub_B5D69C(v974, v975);
                if ( routeData->fields.basePiece == v974->fields.basePiece )
                {
                  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
                    v954,
                    &route,
                    routeData,
                    0LL);
                  if ( !route )
                    sub_B5D69C(0LL, v976);
                  WarBoardAIRoute_RouteData__CalcEvalValue(route, v976);
                }
              }
              allRouteList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allRouteList;
              if ( !allRouteList )
                sub_B5D69C(0LL, v975);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                allRouteList,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v971,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
              if ( !routeData )
                sub_B5D69C(this, method);
              if ( routeData->fields.baseIndex != routeData->fields.actionIndex && (routeData->fields.flagNow & 2) == 0 )
              {
                searchCount = v1012->fields.searchCount;
                if ( searchCount != 1 )
                {
                  v981 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(_4__this, v907, searchCount, v971, 0LL);
                  v982 = v1012;
                  v1012->fields.__2__current = v981;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&v982->fields.__2__current,
                    (System_Int32_array **)v981,
                    v983,
                    v984,
                    v985,
                    v986,
                    v987,
                    v988);
                  result = 1;
                  v1012->fields.__1__state = 1;
                  return result;
                }
                dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
                v980 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(_4__this, v907, 1, v971, 0LL);
                if ( !routeData )
                  sub_B5D69C(v980, v980);
                if ( !dictionaryCreateRouteDataEvalValue )
                  sub_B5D69C(v980, v980);
                System_Collections_Generic_Dictionary_object__float___Add(
                  dictionaryCreateRouteDataEvalValue,
                  v980,
                  routeData->fields.evalValue,
                  (const MethodInfo_2EC5B08 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
              }
            }
            goto LABEL_543;
          }
        }
        v474 = v1012;
        WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v1012, v352);
        *(_OWORD *)&p__7__wrap8->fields.dictionary = 0u;
        p__7__wrap8->fields.current = 0u;
        if ( v474->fields.searchCount != 1 )
          return 0;
        if ( !_4__this )
          sub_B5D69C(v475, v476);
        v477 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        v478 = WarBoardAIRoute___c_TypeInfo;
        if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v478 = WarBoardAIRoute___c_TypeInfo;
        }
        v479 = v478->static_fields;
        _9__47_6 = (System_Func_T__TResult__o *)v479->__9__47_6;
        if ( !_9__47_6 )
        {
          if ( (BYTE3(v478->vtable._0_Equals.methodPtr) & 4) != 0 && !v478->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v478);
            v479 = WarBoardAIRoute___c_TypeInfo->static_fields;
          }
          v481 = (Il2CppObject *)v479->__9;
          _9__47_6 = (System_Func_T__TResult__o *)sub_B5D694(System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v481,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            (const MethodInfo_2799008 *)Method_System_Func_KeyValuePair_IEnumerator__float___float___ctor__);
          v482 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v482->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v482->__9__47_6,
            (System_Int32_array **)_9__47_6,
            v483,
            v484,
            v485,
            v486,
            v487,
            v488);
        }
        v490 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__float___float_(
                 v477,
                 (System_Func_TSource__TKey__o *)_9__47_6,
                 (const MethodInfo_1CAF3E4 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v1012->fields._servantAndEnemyMasterRange_5__15 = 0;
        v491 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v491 )
          sub_B5D69C(0LL, v489);
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v491,
                  (const MethodInfo_2EC5704 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v495 = _4__this->fields.npcData;
        if ( !v495 )
          sub_B5D69C(Count, v493);
        v496 = (float)((float)v495->fields.calcEllipsis / 100.0) * (float)(int)Count;
        v497 = v1012;
        if ( v496 == INFINITY )
          v498 = -v496;
        else
          v498 = v496;
        v499 = (int)v498;
        v1012->fields._servantAndEnemyRange_5__14 = (int)v498;
        v500 = _4__this->fields.npcData;
        if ( !v500 )
          sub_B5D69C(Count, v493);
        calcEllipsisMin = v500->fields.calcEllipsisMin;
        if ( calcEllipsisMin > v499 )
          v499 = calcEllipsisMin;
        v497->fields._servantAndEnemyRange_5__14 = v499;
        if ( !v490 )
          sub_B5D69C(Count, v493);
        v502 = v490->klass;
        if ( *(_WORD *)&v490->klass->_2.bitflags1 )
        {
          v503 = 0LL;
          p_offset = &v502->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            ++v503;
            p_offset += 4;
            if ( v503 >= *(unsigned __int16 *)&v490->klass->_2.bitflags1 )
              goto LABEL_118;
          }
          p_method = (__int64)&v502->vtable[*p_offset].method;
        }
        else
        {
LABEL_118:
          p_method = sub_AF54C0(
                       v490,
                       System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo,
                       0LL,
                       v494);
        }
        v516 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                                        v490,
                                        *(_QWORD *)(p_method + 8));
        p__7__wrap24 = &v1012->fields.__7__wrap24;
        *(_QWORD *)&v1012->fields.__7__wrap24 = v516;
        sub_B5D560((BattleServantConfConponent_o *)p__7__wrap24, v516, v517, v518, v519, v520, v521, v522);
        v1012->fields.__1__state = -4;
        goto LABEL_126;
      }
    }
    v330 = (System_Int32_array **)WarBoardAIRoute__GetDefenseAreaData(
                                    _4__this,
                                    *p_masterSquareIndex_5__4,
                                    *p_allyPieceIndexs_5__5,
                                    *p_piecePlaceData,
                                    0LL);
    p_defenseAreaData_5__7->klass = (BattleServantConfConponent_c *)v330;
    sub_B5D560(p_defenseAreaData_5__7, v330, v331, v332, v333, v334, v335, v336);
    v339 = p_defenseAreaData_5__7->klass;
    if ( !p_defenseAreaData_5__7->klass )
      sub_B5D69C(v337, v338);
    v1012->fields._baseFlag_5__6 |= (int64_t)v339->_1.name;
    v340 = _4__this->fields.aiRouteMasterData;
    if ( !v340 )
      sub_B5D69C(v337, v338);
    if ( WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
           (System_Collections_Generic_List_int____o *)v339->_1.this_arg.data,
           *p_piecePlaceData,
           v340->fields.masterType == 1,
           0LL) )
    {
      v1012->fields._baseFlag_5__6 |= 0x20000000uLL;
    }
    goto LABEL_28;
  }
  return result;
}


Il2CppObject *__fastcall WarBoardAIRoute__CreateRouteData_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardAIRoute__CreateRouteData_d__47__System_Collections_IEnumerator_Reset(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall WarBoardAIRoute__CreateRouteData_d__47__System_Collections_IEnumerator_get_Current(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardAIRoute__CreateRouteData_d__47__System_IDisposable_Dispose(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  int v2; // w19
  int v3[2]; // [xsp+0h] [xbp-20h]
  int v4; // [xsp+8h] [xbp-18h]

  v4 = 0;
  switch ( this->fields.__1__state )
  {
    case 0xFFFFFFFC:
    case 2:
      v2 = v4;
      v3[0] = 65;
      ++v4;
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(this, method);
      if ( v4 )
      {
        if ( v3[v2] == 65 )
          v4 = v2;
      }
      break;
    case 0xFFFFFFFD:
    case 1:
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(this, method);
      break;
    default:
      return;
  }
}


void __fastcall WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7057 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, (_DWORD)method, v2, v3);
    byte_42E7057 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &this->fields.__7__wrap8,
    (const MethodInfo_28A3E80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
}


void __fastcall WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 *v5; // x19
  __int64 v6; // x8
  unsigned __int64 v7; // x10
  int *v8; // x11
  __int64 v9; // x0

  if ( (byte_42E7058 & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7058 = 1;
  }
  v5 = *(__int64 **)&this->fields.__7__wrap24;
  this->fields.__1__state = -1;
  if ( v5 )
  {
    v6 = *v5;
    if ( *(_WORD *)(*v5 + 298) )
    {
      v7 = 0LL;
      v8 = (int *)(*(_QWORD *)(v6 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v8 - 1) != System_IDisposable_TypeInfo )
      {
        ++v7;
        v8 += 4;
        if ( v7 >= *(unsigned __int16 *)(*v5 + 298) )
          goto LABEL_8;
      }
      v9 = v6 + 16LL * *v8 + 312;
    }
    else
    {
LABEL_8:
      v9 = sub_AF54C0(v5, System_IDisposable_TypeInfo, 0LL, v3);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v9)(v5, *(_QWORD *)(v9 + 8));
  }
}


void __fastcall WarBoardAIRoute___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7047 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIRoute___c_TypeInfo, v1, v2, v3);
    byte_42E7047 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardAIRoute___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall WarBoardAIRoute___c___ctor(WarBoardAIRoute___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c___BeforeCreateRouteData_b__45_0(
        WarBoardAIRoute___c_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42E7048 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_B5D5C4(&IWarBoardObjectData_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E7048 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(x, IWarBoardObjectData_TypeInfo, 2LL, v3);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


int64_t __fastcall WarBoardAIRoute___c___CreateRouteData_b__47_1(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__o x,
        const MethodInfo *method)
{
  int64_t key; // x19

  key = x.fields.key;
  if ( (byte_42E7049 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__,
      x.fields.key,
      x.fields.value,
      method);
    byte_42E7049 = 1;
  }
  return key;
}


WarBoardAIRoute_TargetData_o *__fastcall WarBoardAIRoute___c___CreateRouteData_b__47_2(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__o x,
        const MethodInfo *method)
{
  WarBoardAIRoute_TargetData_o *value; // x19

  value = x.fields.value;
  if ( (byte_42E704A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__,
      x.fields.key,
      x.fields.value,
      method);
    byte_42E704A = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, (const MethodInfo *)x.fields.key);
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return WarBoardAIRoute_RouteData__ShallowCopy(x, (const MethodInfo *)x);
}


float __fastcall WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // s8

  value = x.fields.value;
  if ( (byte_42E704B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__,
      x.fields.key,
      LODWORD(x.fields.value),
      method);
    byte_42E704B = 1;
  }
  return value;
}


int32_t __fastcall WarBoardAIRoute___c___GetTargetToDistanceUsingIndividuality_b__64_2(
        WarBoardAIRoute___c_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42E704C & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_B5D5C4(&IWarBoardObjectData_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E704C = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 4].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(x, IWarBoardObjectData_TypeInfo, 4LL, v3);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


int32_t __fastcall WarBoardAIRoute___c___GetTargetToDistanceUsingIndividuality_b__64_3(
        WarBoardAIRoute___c_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42E704D & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_B5D5C4(&IWarBoardObjectData_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E704D = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(x, IWarBoardObjectData_TypeInfo, 5LL, v3);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


void __fastcall WarBoardAIRoute___c__DisplayClass43_0___ctor(
        WarBoardAIRoute___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass43_0___AddPiecePersonalityDic_b__0(
        WarBoardAIRoute___c__DisplayClass43_0_o *this,
        System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key;
  if ( (byte_42E704E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__,
      x.fields.key,
      x.fields.value,
      method);
    byte_42E704E = 1;
  }
  return this->fields.pieceIndex == key;
}


void __fastcall WarBoardAIRoute___c__DisplayClass45_0___ctor(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__1(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardItemData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_B5D69C(this, 0LL);
  return !WarBoardItemData__get_Acquired(z, 0LL) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_B5D69C(this, 0LL);
  return z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardAIRoute___c__DisplayClass46_0___ctor(
        WarBoardAIRoute___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass46_0___RegisterTargetObjectToDic_b__0(
        WarBoardAIRoute___c__DisplayClass46_0_o *this,
        IWarBoardObjectData_o *z,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardAIRoute___c__DisplayClass46_0_o *v5; // x20
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v10; // x3
  IWarBoardObjectData_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0

  v5 = this;
  if ( (byte_42E704F & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_B5D5C4(
                                                        &IWarBoardObjectData_TypeInfo,
                                                        (_DWORD)z,
                                                        (_DWORD)method,
                                                        v3);
    byte_42E704F = 1;
  }
  if ( !z )
    sub_B5D69C(this, z);
  klass = z->klass;
  if ( *(_WORD *)&z->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&z->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(z, IWarBoardObjectData_TypeInfo, 0LL, v3);
  }
  if ( (*(unsigned int (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(z, *(_QWORD *)(p_method + 8)) != v5->fields.squareIndex )
    return 0;
  v11 = z->klass;
  if ( *(_WORD *)&z->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    v13 = &v11->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v13 - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v12;
      v13 += 4;
      if ( v12 >= *(unsigned __int16 *)&z->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v14 = (__int64)&v11->vtable[*v13 + 3].method;
  }
  else
  {
LABEL_15:
    v14 = sub_AF54C0(z, IWarBoardObjectData_TypeInfo, 3LL, v10);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v14)(z, *(_QWORD *)(v14 + 8));
}


void __fastcall WarBoardAIRoute___c__DisplayClass47_0___ctor(
        WarBoardAIRoute___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_0___CreateRouteData_b__0(
        WarBoardAIRoute___c__DisplayClass47_0_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *basePiece; // x8
  struct WarBoardPieceData_o *v5; // x9
  int32_t index_k__BackingField; // w10
  int32_t v7; // w8
  struct WarBoardPieceData_o *actionPiece; // x9

  if ( !x )
    goto LABEL_12;
  if ( x->fields.baseIndex == x->fields.actionIndex )
    return 0;
  basePiece = x->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  v5 = this->fields.basePiece;
  if ( !v5 )
    goto LABEL_12;
  index_k__BackingField = basePiece->fields._index_k__BackingField;
  v7 = v5->fields._index_k__BackingField;
  if ( index_k__BackingField == v7 )
    return 1;
  if ( (x->fields.flagNow & 0x4000000) == 0 )
    return 0;
  actionPiece = x->fields.actionPiece;
  if ( !actionPiece )
LABEL_12:
    sub_B5D69C(this, x);
  return actionPiece->fields._index_k__BackingField == v7;
}


void __fastcall WarBoardAIRoute___c__DisplayClass47_1___ctor(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__3(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return this->fields.actionSquareIndex == x->fields.actionIndex;
}


void __fastcall WarBoardAIRoute___c__DisplayClass51_0___ctor(
        WarBoardAIRoute___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass51_0___GetAllyPutSquareIndicesWithoutMaster_b__0(
        WarBoardAIRoute___c__DisplayClass51_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.masterSquareIndex != x;
}


void __fastcall WarBoardAIRoute___c__DisplayClass52_0___ctor(
        WarBoardAIRoute___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute___c__DisplayClass52_0___GetDefenseAreaData_b__0(
        WarBoardAIRoute___c__DisplayClass52_0_o *this,
        int32_t square,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // x0

  if ( (byte_42E7050 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, square, (_DWORD)method, v3);
    byte_42E7050 = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_B5D69C(0LL, *(_QWORD *)&square);
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_2F39B30 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
}


void __fastcall WarBoardAIRoute___c__DisplayClass58_0___ctor(
        WarBoardAIRoute___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass58_0___IsDetour_b__0(
        WarBoardAIRoute___c__DisplayClass58_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct System_Int32_array *route; // x8
  __int64 i; // x9
  __int64 v6; // x0

  route = this->fields.route;
  if ( !route )
    sub_B5D69C(this, x);
  i = this->fields.i;
  if ( (unsigned int)i >= route->max_length )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  return route->m_Items[i + 1] == x;
}


void __fastcall WarBoardAIRoute___c__DisplayClass64_0___ctor(
        WarBoardAIRoute___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass64_0___GetTargetToDistanceUsingIndividuality_b__0(
        WarBoardAIRoute___c__DisplayClass64_0_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Func_IWarBoardObjectData__bool__o *excludeCond; // x0

  if ( (byte_42E7051 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_IWarBoardObjectData__bool__Invoke__, (_DWORD)x, (_DWORD)method, v3);
    byte_42E7051 = 1;
  }
  excludeCond = this->fields.excludeCond;
  if ( !excludeCond )
    sub_B5D69C(0LL, x);
  return !System_Func_BattleBuffData_BuffData__bool___Invoke(
            (System_Func_BattleBuffData_BuffData__bool__o *)excludeCond,
            (BattleBuffData_BuffData_o *)x,
            (const MethodInfo_2C2ECE4 *)Method_System_Func_IWarBoardObjectData__bool__Invoke__)
      && this->fields.basePiece != (struct WarBoardPieceData_o *)x;
}


int32_t __fastcall WarBoardAIRoute___c__DisplayClass64_0___GetTargetToDistanceUsingIndividuality_b__1(
        WarBoardAIRoute___c__DisplayClass64_0_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardAIRoute___c__DisplayClass64_0_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  IWarBoardObjectData_c *klass; // x8
  int32_t baseSquareIndex; // w20
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v14; // w19

  v5 = this;
  if ( (byte_42E7052 & 1) == 0 )
  {
    sub_B5D5C4(&AStarSearch_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    this = (WarBoardAIRoute___c__DisplayClass64_0_o *)sub_B5D5C4(&IWarBoardObjectData_TypeInfo, v6, v7, v8);
    byte_42E7052 = 1;
  }
  if ( !x )
    goto LABEL_15;
  klass = x->klass;
  baseSquareIndex = v5->fields.baseSquareIndex;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v11;
      p_offset += 4;
      if ( v11 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(x, IWarBoardObjectData_TypeInfo, 1LL, v3);
  }
  v14 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  this = (WarBoardAIRoute___c__DisplayClass64_0_o *)AStarSearch__RouteSearch(0LL, baseSquareIndex, v14, 0, 0LL, 0LL);
  if ( !this )
LABEL_15:
    sub_B5D69C(this, x);
  return (int32_t)this->fields.basePiece;
}


void __fastcall WarBoardAIRoute___c__DisplayClass65_0___ctor(
        WarBoardAIRoute___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass65_0___GetTargetToDistance_g__excludeCond_0(
        WarBoardAIRoute___c__DisplayClass65_0_o *this,
        IWarBoardObjectData_o *targetObject,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_T__o *routeDataList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x20

  if ( (byte_42E7053 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, (_DWORD)targetObject, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__, v12, v13, v14);
    sub_B5D5C4(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo, v15, v16, v17);
    byte_42E7053 = 1;
  }
  v18 = sub_B5D694(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = targetObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v18 + 16),
    (System_Int32_array **)targetObject,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v28,
    (Il2CppObject *)v18,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           routeDataList,
           (System_Func_T__bool__o *)v28,
           (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
}


void __fastcall WarBoardAIRoute___c__DisplayClass65_1___ctor(
        WarBoardAIRoute___c__DisplayClass65_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass65_1___GetTargetToDistance_b__1(
        WarBoardAIRoute___c__DisplayClass65_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardAIRoute___c__DisplayClass65_1_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct IWarBoardObjectData_o *targetObject; // x21
  IWarBoardObjectData_c *klass; // x8
  __int64 v11; // x10
  int32_t baseIndex; // w23
  unsigned __int64 v14; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  struct IWarBoardObjectData_o *v18; // x20
  IWarBoardObjectData_c *v19; // x8
  int32_t actionIndex; // w19
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0

  v5 = this;
  if ( (byte_42E7054 & 1) == 0 )
  {
    sub_B5D5C4(&IWarBoardObjectData_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    this = (WarBoardAIRoute___c__DisplayClass65_1_o *)sub_B5D5C4(&WarBoardItemData_TypeInfo, v6, v7, v8);
    byte_42E7054 = 1;
  }
  targetObject = v5->fields.targetObject;
  if ( !targetObject )
    return 0;
  klass = targetObject->klass;
  v11 = *(&WarBoardItemData_TypeInfo->_2.bitflags2 + 1);
  if ( *(&targetObject->klass->_2.bitflags2 + 1) < (unsigned int)v11
    || (WarBoardItemData_c *)klass->_2.typeHierarchy[v11 - 1] != WarBoardItemData_TypeInfo )
  {
    return 0;
  }
  if ( !x )
    goto LABEL_25;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  baseIndex = x->fields.baseIndex;
  if ( *(_WORD *)&klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AF54C0(v5->fields.targetObject, IWarBoardObjectData_TypeInfo, 0LL, v3);
  }
  this = (WarBoardAIRoute___c__DisplayClass65_1_o *)(*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                                      targetObject,
                                                      *(_QWORD *)(p_method + 8));
  if ( baseIndex == (_DWORD)this )
    return 1;
  v18 = v5->fields.targetObject;
  if ( !v18 )
LABEL_25:
    sub_B5D69C(this, x);
  v19 = v18->klass;
  actionIndex = x->fields.actionIndex;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = &v19->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v22 - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v23 = (__int64)&v19->vtable[*v22].method;
  }
  else
  {
LABEL_22:
    v23 = sub_AF54C0(v18, IWarBoardObjectData_TypeInfo, 0LL, v17);
  }
  return actionIndex == (*(unsigned int (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v23)(
                          v18,
                          *(_QWORD *)(v23 + 8));
}


void __fastcall WarBoardAIRoute___c__DisplayClass66_0___ctor(
        WarBoardAIRoute___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass66_0___GetDesignationItemToDistance_b__0(
        WarBoardAIRoute___c__DisplayClass66_0_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardAIRoute___c__DisplayClass66_0_o *v5; // x20
  struct WarBoardItemData_o *value; // x8
  int32_t squareIndex_k__BackingField; // w8

  v5 = this;
  if ( (byte_42E7055 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass66_0_o *)sub_B5D5C4(
                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__,
                                                        (_DWORD)x,
                                                        (_DWORD)method,
                                                        v3);
    byte_42E7055 = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  value = v5->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_B5D69C(this, x);
  squareIndex_k__BackingField = value->fields._squareIndex_k__BackingField;
  return x->fields.baseIndex == squareIndex_k__BackingField || x->fields.actionIndex == squareIndex_k__BackingField;
}


void __fastcall WarBoardAIRoute___c__DisplayClass76_0___ctor(
        WarBoardAIRoute___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass76_0___IsActableReplace_b__0(
        WarBoardAIRoute___c__DisplayClass76_0_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *basePiece; // x8
  struct WarBoardPieceData_o *actionPiece; // x9
  int32_t index_k__BackingField; // w10
  int32_t v6; // w8
  struct WarBoardPieceData_o *v8; // x9

  if ( !x )
    goto LABEL_11;
  basePiece = x->fields.basePiece;
  if ( !basePiece )
    goto LABEL_11;
  actionPiece = this->fields.actionPiece;
  if ( !actionPiece )
    goto LABEL_11;
  index_k__BackingField = basePiece->fields._index_k__BackingField;
  v6 = actionPiece->fields._index_k__BackingField;
  if ( index_k__BackingField == v6 )
    return 1;
  if ( (x->fields.flagNow & 0x4000000) == 0 )
    return 0;
  v8 = x->fields.actionPiece;
  if ( !v8 )
LABEL_11:
    sub_B5D69C(this, x);
  return v8->fields._index_k__BackingField == v6;
}


void __fastcall WarBoardAIRoute___c__DisplayClass84_0___ctor(
        WarBoardAIRoute___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardAIRoute___c__DisplayClass84_0___GetRouteSumPieceActionCost_b__0(
        WarBoardAIRoute___c__DisplayClass84_0_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  int64_t flagNow; // x9
  struct WarBoardPieceData_o *basePiece; // x10
  struct WarBoardPieceData_o *targetPiece; // x8
  struct WarBoardPieceData_o *v7; // x8
  struct WarBoardPieceData_o *v8; // x9
  int32_t index_k__BackingField; // w10
  struct WarBoardPieceData_o *actionPiece; // x11

  if ( !x )
    goto LABEL_22;
  if ( x->fields.baseIndex == x->fields.actionIndex )
    return 0;
  flagNow = x->fields.flagNow;
  if ( (flagNow & 2) != 0 )
  {
    basePiece = x->fields.basePiece;
    if ( !basePiece )
      goto LABEL_22;
    targetPiece = this->fields.targetPiece;
    if ( !targetPiece )
      goto LABEL_22;
    if ( basePiece->fields._index_k__BackingField == targetPiece->fields._index_k__BackingField )
    {
      this = (WarBoardAIRoute___c__DisplayClass84_0_o *)targetPiece->fields._Cost_k__BackingField;
      if ( this )
        return WarBoardCost__get_Attack((WarBoardCost_o *)this, 0LL);
LABEL_22:
      sub_B5D69C(this, x);
    }
  }
  v7 = x->fields.basePiece;
  if ( (flagNow & 0x4000000) == 0 )
  {
    if ( !v7 )
      goto LABEL_22;
LABEL_12:
    v8 = this->fields.targetPiece;
    if ( !v8 )
      goto LABEL_22;
    if ( v7->fields._index_k__BackingField != v8->fields._index_k__BackingField )
      return 0;
    goto LABEL_20;
  }
  if ( !v7 )
    goto LABEL_22;
  v8 = this->fields.targetPiece;
  if ( !v8 )
    goto LABEL_22;
  index_k__BackingField = v8->fields._index_k__BackingField;
  if ( v7->fields._index_k__BackingField != index_k__BackingField )
  {
    actionPiece = x->fields.actionPiece;
    if ( !actionPiece )
      goto LABEL_22;
    if ( actionPiece->fields._index_k__BackingField != index_k__BackingField )
      goto LABEL_12;
  }
LABEL_20:
  this = (WarBoardAIRoute___c__DisplayClass84_0_o *)v8->fields._Cost_k__BackingField;
  if ( !this )
    goto LABEL_22;
  return WarBoardCost__get_Move((WarBoardCost_o *)this, 0LL);
}