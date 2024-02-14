void __fastcall WarBoardAIRoute___ctor(
        WarBoardAIRoute_o *this,
        WarBoardStageNpcEntity_o *npc,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // x20
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x1
  __int64 v77; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v78; // x20
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  __int64 v85; // x1
  __int64 v86; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v87; // x20
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  __int64 v94; // x1
  __int64 v95; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v96; // x20
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  __int64 v103; // x1
  __int64 v104; // x2
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v105; // x20
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  __int64 v112; // x1
  __int64 v113; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v114; // x20
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  __int64 v121; // x1
  __int64 v122; // x2
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v123; // x20
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  __int64 v130; // x1
  __int64 v131; // x2
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v132; // x20
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  __int64 v139; // x1
  __int64 v140; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v141; // x20
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  WarBoardData_o *reinforcementsSaveList; // x0
  const MethodInfo *v155; // x1
  __int64 v156; // x1
  __int64 v157; // x2
  BattleServantConfConponent_o *p_aiIds; // x20
  struct System_Int32_array *aiIds; // x21
  System_Array_o *v160; // x21
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  __int64 v167; // x8
  unsigned __int64 v168; // x20
  int v169; // w19
  WarBoardAIRoute_PiecePersonality_o *v170; // x23
  WarBoardPieceData_o *Piece; // x0
  int32_t overwriteAiId_k__BackingField; // w22
  const MethodInfo *v173; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v174; // x22
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *stageNpcMaster; // x8
  WarBoardData_o *v176; // x27
  unsigned __int64 v177; // x19
  __int64 v178; // x1
  __int64 v179; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *actionTrandList; // x28
  WarBoardActionTrendEntity_o *v181; // x20
  WarBoardAIRoute_ActionTrendInfo_o *v182; // x21
  const MethodInfo *v183; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v184; // x22
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v185; // x8
  WarBoardData_o *v186; // x27
  unsigned __int64 v187; // x19
  WarBoardStageReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x27
  WarBoardReinforcementsMaster_o *v189; // x28
  __int64 v190; // x1
  __int64 v191; // x2
  WarBoardData_o *v192; // x20
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v194; // x22
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__c *klass; // x8
  WarBoardData_o *v196; // x22
  unsigned __int64 v197; // x10
  int32_t *p_offset; // x11
  __int64 v199; // x0
  __int64 v200; // x26
  __int64 v201; // x8
  unsigned __int64 v202; // x10
  int *v203; // x11
  __int64 v204; // x0
  __int64 v205; // x8
  unsigned __int64 v206; // x10
  int *v207; // x11
  __int64 v208; // x0
  int32_t *v209; // x22
  __int64 id; // x0
  _BOOL8 v211; // x0
  __int64 v212; // x0
  _BOOL8 v213; // x0
  const MethodInfo *v214; // x3
  __int64 v215; // x8
  unsigned __int64 v216; // x10
  int *v217; // x11
  __int64 v218; // x0
  __int64 v219; // x1
  __int64 v220; // x2
  _QWORD *p_klass; // x19
  BattleServantConfConponent_o *p_ratingBaseIds; // x20
  System_Array_o *v223; // x21
  System_String_array **v224; // x2
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  __int64 v230; // x8
  unsigned __int64 v231; // x21
  int32_t v232; // w20
  __int64 v233; // x1
  __int64 v234; // x2
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v235; // x20
  __int64 v236; // x22
  System_String_array **v237; // x2
  System_String_array **v238; // x3
  System_Boolean_array **v239; // x4
  System_Int32_array **v240; // x5
  System_Int32_array *v241; // x6
  System_Int32_array *v242; // x7
  int32_t buckets; // w20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v244; // x22
  WarBoardEvalValueSquare_CalcEval_o *v245; // x25
  _QWORD *p_image; // x19
  BattleServantConfConponent_o *p_tacticalIds; // x21
  System_Array_o *v248; // x20
  System_String_array **v249; // x2
  System_String_array **v250; // x3
  System_Boolean_array **v251; // x4
  System_Int32_array **v252; // x5
  System_Int32_array *v253; // x6
  System_Int32_array *v254; // x7
  __int64 v255; // x8
  unsigned __int64 v256; // x21
  int32_t v257; // w20
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v260; // x22
  const MethodInfo *v261; // x3
  System_String_array **v262; // x2
  System_String_array **v263; // x3
  System_Boolean_array **v264; // x4
  System_Int32_array **v265; // x5
  System_Int32_array *v266; // x6
  System_Int32_array *v267; // x7
  __int64 v268; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_tacticalTrendList; // [xsp+8h] [xbp-C8h]
  WarBoardStageNpcEntity_o *v270; // [xsp+10h] [xbp-C0h]
  WarBoardAIRoute_o *v271; // [xsp+18h] [xbp-B8h]
  struct System_Collections_Generic_List_WarBoardRatingBase__o **p_ratingBaseList; // [xsp+20h] [xbp-B0h]
  struct System_Int32_array *v273; // [xsp+28h] [xbp-A8h]
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o **p_dicRatingbaseCalcValue; // [xsp+30h] [xbp-A0h]
  unsigned __int64 key; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o **p_piecePersonalityDic; // [xsp+40h] [xbp-90h]
  DataManager_o *Instance; // [xsp+48h] [xbp-88h]
  int v278; // [xsp+50h] [xbp-80h]
  int v279; // [xsp+54h] [xbp-7Ch]
  WarBoardReinforcementsEntity_o *v280; // [xsp+58h] [xbp-78h] BYREF
  WarBoardStageReinforcementsEntity_o *v281; // [xsp+60h] [xbp-70h] BYREF
  WarEntity_o *v282; // [xsp+68h] [xbp-68h] BYREF
  WarEntity_o *v283; // [xsp+70h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF
  System_RuntimeFieldHandle_o v285; // 0:w1.4
  System_RuntimeFieldHandle_o v286; // 0:w1.4
  System_RuntimeFieldHandle_o v287; // 0:w1.4

  if ( (byte_4212B11 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, npc);
    sub_B0D8A4(&Method_BasicHelper_IndexValue_int____67955848, v5);
    sub_B0D8A4(&WarBoardEvalValueSquare_CalcEval_TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardAIMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v13);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__, v15);
    sub_B0D8A4(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__, v16);
    sub_B0D8A4(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__, v17);
    sub_B0D8A4(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__, v18);
    sub_B0D8A4(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__, v29);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo, v30);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo, v31);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo, v32);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo, v33);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo, v34);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo, v35);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v36);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v37);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v38);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v39);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, v40);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, v41);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v42);
    sub_B0D8A4(&int___TypeInfo, v43);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v44);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v45);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__, v46);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__, v47);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__, v48);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__, v49);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v50);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__, v51);
    sub_B0D8A4(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v52);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo, v53);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo, v54);
    sub_B0D8A4(&WarBoardAIRoute_PiecePersonality_TypeInfo, v55);
    sub_B0D8A4(&ShortestDistanceFromAllyMaster_TypeInfo, v56);
    sub_B0D8A4(&ShortestDistanceFromAllyServant_TypeInfo, v57);
    sub_B0D8A4(&ShortestDistanceFromEnemyMaster_TypeInfo, v58);
    sub_B0D8A4(&ShortestDistanceFromEnemyServant_TypeInfo, v59);
    sub_B0D8A4(&ShortestDistanceFromItem_TypeInfo, v60);
    sub_B0D8A4(&ShortestDistanceFromPrioritySpace_TypeInfo, v61);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v62);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v63);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384,
      v64);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49,
      v65);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72,
      v66);
    sub_B0D8A4(&Method_WarBoardAIRoute___ctor_b__42_0__, v67);
    sub_B0D8A4(&WarBoardAiTargetCacher_TypeInfo, v68);
    byte_4212B11 = 1;
  }
  v283 = 0LL;
  entity = 0LL;
  v281 = 0LL;
  v282 = 0LL;
  v280 = 0LL;
  v279 = 0;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo,
                                                                                                  npc,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v69,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v69;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tacticalTrendList,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v78 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardRatingBase__TypeInfo,
                                                                                                  v76,
                                                                                                  v77);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v78,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v78;
  p_ratingBaseList = &this->fields.ratingBaseList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.ratingBaseList,
    (System_Int32_array **)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  v87 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo,
                                                                                                   v85,
                                                                                                   v86);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v87,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v87;
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o **)&this->fields.piecePersonalityDic;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.piecePersonalityDic,
    (System_Int32_array **)v87,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  v96 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo,
                                                                                                  v94,
                                                                                                  v95);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v96,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v96;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.allRouteList,
    (System_Int32_array **)v96,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  v105 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B0D974(
                                                                                             System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo,
                                                                                             v103,
                                                                                             v104);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v105,
    (const MethodInfo_2E279D4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v105;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyAdvantagePieceData,
    (System_Int32_array **)v105,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  v114 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B0D974(
                                                                    System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo,
                                                                    v112,
                                                                    v113);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v114,
    (const MethodInfo_2E71590 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v114;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dictionaryCreateRouteDataEvalValue,
    (System_Int32_array **)v114,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  v123 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B0D974(
                                                                                             System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo,
                                                                                             v121,
                                                                                             v122);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v123,
    (const MethodInfo_2E279D4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v123;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyDesignationItem,
    (System_Int32_array **)v123,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  v132 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B0D974(
                                                                                             System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo,
                                                                                             v130,
                                                                                             v131);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v132,
    (const MethodInfo_2E279D4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = v132;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyTarget,
    (System_Int32_array **)v132,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  v141 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo,
                                                                                                    v139,
                                                                                                    v140);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v141,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v141;
  p_dicRatingbaseCalcValue = &this->fields.dicRatingbaseCalcValue;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dicRatingbaseCalcValue,
    (System_Int32_array **)v141,
    v142,
    v143,
    v144,
    v145,
    v146,
    v147);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.npcData,
    (System_Int32_array **)npc,
    v148,
    v149,
    v150,
    v151,
    v152,
    v153);
  if ( !npc )
    goto LABEL_130;
  this->fields.forceId = npc->fields.forceId;
  this->fields.groupId = npc->fields.groupId;
  this->fields.pickValue = npc->fields.pickValue;
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  WarBoardAIRoute__Clear(this, v155);
  reinforcementsSaveList = (WarBoardData_o *)this->fields.piecePersonalityDic;
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)reinforcementsSaveList,
    (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  reinforcementsSaveList = (WarBoardData_o *)*p_ratingBaseList;
  if ( !*p_ratingBaseList )
    goto LABEL_130;
  p_tacticalTrendList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.tacticalTrendList;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)reinforcementsSaveList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__);
  v270 = npc;
  p_aiIds = (BattleServantConfConponent_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v160 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 4LL);
    v285.fields.value = Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v160, v285, 0LL);
    p_aiIds->klass = (BattleServantConfConponent_c *)v160;
    sub_B0D840(p_aiIds, (System_Int32_array **)v160, v161, v162, v163, v164, v165, v166);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_130;
  }
  v167 = *(_QWORD *)&aiIds->max_length;
  v271 = this;
  if ( (int)v167 >= 1 )
  {
    v168 = 0LL;
    v273 = aiIds;
    do
    {
      if ( v168 >= (unsigned int)v167 )
        goto LABEL_131;
      v169 = aiIds->m_Items[v168 + 1];
      v170 = (WarBoardAIRoute_PiecePersonality_o *)sub_B0D974(WarBoardAIRoute_PiecePersonality_TypeInfo, v156, v157);
      WarBoardAIRoute_PiecePersonality___ctor(v170, 0LL);
      reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !reinforcementsSaveList )
        goto LABEL_130;
      reinforcementsSaveList = (WarBoardData_o *)reinforcementsSaveList[1].fields.reinforcementsSaveList;
      if ( !reinforcementsSaveList )
        goto LABEL_130;
      key = v168;
      Piece = WarBoardData__GetPiece(reinforcementsSaveList, this->fields.forceId, this->fields.groupId, v168, 1, 0LL);
      if ( Piece
        && (overwriteAiId_k__BackingField = Piece->fields._overwriteAiId_k__BackingField,
            overwriteAiId_k__BackingField > 0)
        || (overwriteAiId_k__BackingField = v169, v169 >= 1) )
      {
        reinforcementsSaveList = (WarBoardData_o *)Instance;
        if ( !Instance )
          goto LABEL_130;
        reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     Instance,
                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !reinforcementsSaveList )
          goto LABEL_130;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList,
               &entity,
               overwriteAiId_k__BackingField,
               (const MethodInfo_2669C30 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       Instance,
                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
          if ( !entity )
            goto LABEL_130;
          v174 = (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList;
          reinforcementsSaveList = (WarBoardData_o *)WarBoardAIEntity__GetActionTrendIds(
                                                       (WarBoardAIEntity_o *)entity,
                                                       v173);
          if ( !reinforcementsSaveList )
            goto LABEL_130;
          stageNpcMaster = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)reinforcementsSaveList->fields.stageNpcMaster;
          v176 = reinforcementsSaveList;
          if ( (int)stageNpcMaster >= 1 )
          {
            v177 = 0LL;
            while ( v177 < (unsigned int)stageNpcMaster )
            {
              if ( !v174 )
                goto LABEL_130;
              reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                           v174,
                                                           &v283,
                                                           *((_DWORD *)&v176->fields.npcEntityDict + v177),
                                                           (const MethodInfo_2669C30 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)reinforcementsSaveList & 1) != 0 )
              {
                if ( !v170 )
                  goto LABEL_130;
                actionTrandList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v170->fields.actionTrandList;
                v181 = (WarBoardActionTrendEntity_o *)v283;
                v182 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B0D974(
                                                              WarBoardAIRoute_ActionTrendInfo_TypeInfo,
                                                              v178,
                                                              v179);
                WarBoardAIRoute_ActionTrendInfo___ctor(v182, v181, 0LL);
                if ( !actionTrandList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  actionTrandList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v182,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
              }
              LODWORD(stageNpcMaster) = v176->fields.stageNpcMaster;
              if ( (__int64)++v177 >= (int)stageNpcMaster )
                goto LABEL_38;
            }
LABEL_131:
            v268 = sub_B0D9A8(reinforcementsSaveList);
            sub_B0D948(v268, 0LL);
          }
LABEL_38:
          reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       Instance,
                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_130;
          v184 = (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList;
          reinforcementsSaveList = (WarBoardData_o *)WarBoardAIEntity__GetRatingOffsetIds(
                                                       (WarBoardAIEntity_o *)entity,
                                                       v183);
          this = v271;
          if ( !reinforcementsSaveList )
            goto LABEL_130;
          v185 = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)reinforcementsSaveList->fields.stageNpcMaster;
          v186 = reinforcementsSaveList;
          if ( (int)v185 >= 1 )
          {
            v187 = 0LL;
            while ( v187 < (unsigned int)v185 )
            {
              if ( !v184 )
                goto LABEL_130;
              reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                           v184,
                                                           &v282,
                                                           *((_DWORD *)&v186->fields.npcEntityDict + v187),
                                                           (const MethodInfo_2669C30 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)reinforcementsSaveList & 1) != 0 )
              {
                if ( !v170 )
                  goto LABEL_130;
                reinforcementsSaveList = (WarBoardData_o *)v170->fields.ratingOffsetList;
                if ( !reinforcementsSaveList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)reinforcementsSaveList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v282,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
              }
              LODWORD(v185) = v186->fields.stageNpcMaster;
              if ( (__int64)++v187 >= (int)v185 )
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
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v170,
        (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      aiIds = v273;
      v168 = key + 1;
      LODWORD(v167) = v273->max_length;
    }
    while ( (__int64)(key + 1) < (int)v167 );
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v189 = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  v192 = (WarBoardData_o *)reinforcementsSaveList[1].fields.reinforcementsSaveList;
  if ( !v192 )
    goto LABEL_130;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)v192->fields.pieces;
  v194 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                              System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                              v190,
                                                                              v191);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v194,
    (Il2CppObject *)this,
    Method_WarBoardAIRoute___ctor_b__42_0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  reinforcementsSaveList = (WarBoardData_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                               pieces,
                                               (System_Func_TSource__bool__o *)v194,
                                               (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  klass = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__c *)reinforcementsSaveList->klass;
  v196 = reinforcementsSaveList;
  if ( *(_WORD *)&reinforcementsSaveList->klass->_2.bitflags1 )
  {
    v197 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      ++v197;
      p_offset += 4;
      if ( v197 >= *(unsigned __int16 *)&reinforcementsSaveList->klass->_2.bitflags1 )
        goto LABEL_61;
    }
    v199 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_61:
    v199 = sub_AA67A0(reinforcementsSaveList, System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, 0LL);
  }
  v200 = (*(__int64 (__fastcall **)(WarBoardData_o *, _QWORD))v199)(v196, *(_QWORD *)(v199 + 8));
  if ( !v200 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v201 = *(_QWORD *)v200;
    if ( *(_WORD *)(*(_QWORD *)v200 + 298LL) )
    {
      v202 = 0LL;
      v203 = (int *)(*(_QWORD *)(v201 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v203 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v202;
        v203 += 4;
        if ( v202 >= *(unsigned __int16 *)(*(_QWORD *)v200 + 298LL) )
          goto LABEL_68;
      }
      v204 = v201 + 16LL * *v203 + 312;
    }
    else
    {
LABEL_68:
      v204 = sub_AA67A0(v200, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v204)(v200, *(_QWORD *)(v204 + 8)) & 1) == 0 )
      break;
    v205 = *(_QWORD *)v200;
    if ( *(_WORD *)(*(_QWORD *)v200 + 298LL) )
    {
      v206 = 0LL;
      v207 = (int *)(*(_QWORD *)(v205 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v207 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        ++v206;
        v207 += 4;
        if ( v206 >= *(unsigned __int16 *)(*(_QWORD *)v200 + 298LL) )
          goto LABEL_75;
      }
      v208 = v205 + 16LL * *v207 + 312;
    }
    else
    {
LABEL_75:
      v208 = sub_AA67A0(v200, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL);
    }
    v209 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v208)(v200, *(_QWORD *)(v208 + 8));
    if ( !v209 )
      sub_B0D97C(0LL);
    if ( !*p_piecePersonalityDic )
      sub_B0D97C(0LL);
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            *p_piecePersonalityDic,
            v209[7],
            (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__) )
    {
      id = WarBoardData__get_id(v192, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        sub_B0D97C(id);
      v211 = WarBoardStageReinforcementsMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v281, id, v209[70], 0LL);
      if ( v211 )
      {
        if ( !v281 )
          sub_B0D97C(v211);
        v212 = BasicHelper__IndexValue_int_(
                 v281->fields.reinforcementsIds,
                 v209[71],
                 -1,
                 (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
        if ( !v189 )
          sub_B0D97C(v212);
        v213 = WarBoardReinforcementsMaster__TryGetEntity(v189, &v280, v212, 0LL);
        if ( v213 )
        {
          if ( !v280 )
            sub_B0D97C(v213);
          WarBoardAIRoute__AddPiecePersonalityDic(this, v280->fields.aiId, v209[7], v214);
        }
      }
    }
  }
  v278 = 833;
  ++v279;
  v215 = *(_QWORD *)v200;
  if ( *(_WORD *)(*(_QWORD *)v200 + 298LL) )
  {
    v216 = 0LL;
    v217 = (int *)(*(_QWORD *)(v215 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v217 - 1) != System_IDisposable_TypeInfo )
    {
      ++v216;
      v217 += 4;
      if ( v216 >= *(unsigned __int16 *)(*(_QWORD *)v200 + 298LL) )
        goto LABEL_91;
    }
    v218 = v215 + 16LL * *v217 + 312;
  }
  else
  {
LABEL_91:
    v218 = sub_AA67A0(v200, System_IDisposable_TypeInfo, 0LL);
  }
  reinforcementsSaveList = (WarBoardData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v218)(
                                               v200,
                                               *(_QWORD *)(v218 + 8));
  if ( v279 && *(&v278 + v279 - 1) == 833 )
    --v279;
  p_ratingBaseIds = (BattleServantConfConponent_o *)&v270->fields.ratingBaseIds;
  p_klass = &v270->fields.ratingBaseIds->obj.klass;
  if ( !p_klass )
  {
    v223 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 6LL);
    v286.fields.value = Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v223, v286, 0LL);
    p_ratingBaseIds->klass = (BattleServantConfConponent_c *)v223;
    sub_B0D840(p_ratingBaseIds, (System_Int32_array **)v223, v224, v225, v226, v227, v228, v229);
    p_klass = &p_ratingBaseIds->klass->_1.image;
    if ( !p_ratingBaseIds->klass )
LABEL_130:
      sub_B0D97C(reinforcementsSaveList);
  }
  v230 = p_klass[3];
  if ( (int)v230 >= 1 )
  {
    v231 = 0LL;
    while ( 2 )
    {
      if ( v231 >= (unsigned int)v230 )
        goto LABEL_131;
      reinforcementsSaveList = (WarBoardData_o *)Instance;
      if ( Instance )
      {
        v232 = *((_DWORD *)p_klass + v231 + 8);
        reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     Instance,
                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
        if ( reinforcementsSaveList )
        {
          reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList,
                                                       v232,
                                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
          if ( reinforcementsSaveList )
          {
            v235 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)reinforcementsSaveList;
            switch ( HIDWORD(reinforcementsSaveList->fields.stageEntity) )
            {
              case 0:
                v236 = sub_B0D974(ShortestDistanceFromAllyServant_TypeInfo, v233, v234);
                ShortestDistanceFromAllyServant___ctor((ShortestDistanceFromAllyServant_o *)v236, 0LL);
                if ( !v236 )
                  goto LABEL_130;
                goto LABEL_116;
              case 1:
                v236 = sub_B0D974(ShortestDistanceFromEnemyServant_TypeInfo, v233, v234);
                ShortestDistanceFromEnemyServant___ctor((ShortestDistanceFromEnemyServant_o *)v236, 0LL);
                if ( !v236 )
                  goto LABEL_130;
                goto LABEL_116;
              case 2:
                v236 = sub_B0D974(ShortestDistanceFromAllyMaster_TypeInfo, v233, v234);
                ShortestDistanceFromAllyMaster___ctor((ShortestDistanceFromAllyMaster_o *)v236, 0LL);
                if ( !v236 )
                  goto LABEL_130;
                goto LABEL_116;
              case 3:
                v236 = sub_B0D974(ShortestDistanceFromEnemyMaster_TypeInfo, v233, v234);
                ShortestDistanceFromEnemyMaster___ctor((ShortestDistanceFromEnemyMaster_o *)v236, 0LL);
                if ( !v236 )
                  goto LABEL_130;
                goto LABEL_116;
              case 4:
                v236 = sub_B0D974(ShortestDistanceFromItem_TypeInfo, v233, v234);
                ShortestDistanceFromItem___ctor((ShortestDistanceFromItem_o *)v236, 0LL);
                if ( !v236 )
                  goto LABEL_130;
                goto LABEL_116;
              case 5:
                v236 = sub_B0D974(ShortestDistanceFromPrioritySpace_TypeInfo, v233, v234);
                ShortestDistanceFromPrioritySpace___ctor((ShortestDistanceFromPrioritySpace_o *)v236, 0LL);
                if ( !v236 )
                  goto LABEL_130;
LABEL_116:
                *(_QWORD *)(v236 + 16) = v235;
                sub_B0D840(
                  (BattleServantConfConponent_o *)(v236 + 16),
                  (System_Int32_array **)v235,
                  v237,
                  v238,
                  v239,
                  v240,
                  v241,
                  v242);
                reinforcementsSaveList = (WarBoardData_o *)*p_ratingBaseList;
                if ( !*p_ratingBaseList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)reinforcementsSaveList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v236,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardRatingBase__Add__);
LABEL_118:
                buckets = (int32_t)v235->fields.buckets;
                v244 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)*p_dicRatingbaseCalcValue;
                v245 = (WarBoardEvalValueSquare_CalcEval_o *)sub_B0D974(
                                                               WarBoardEvalValueSquare_CalcEval_TypeInfo,
                                                               v233,
                                                               v234);
                WarBoardEvalValueSquare_CalcEval___ctor(v245, 0LL);
                if ( !v244 )
                  goto LABEL_130;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  v244,
                  buckets,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v245,
                  (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
                LODWORD(v230) = *((_DWORD *)p_klass + 6);
                if ( (__int64)++v231 >= (int)v230 )
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
  p_tacticalIds = (BattleServantConfConponent_o *)&v270->fields.tacticalIds;
  p_image = &v270->fields.tacticalIds->obj.klass;
  if ( !p_image )
  {
    v248 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 5LL);
    v287.fields.value = Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v248, v287, 0LL);
    p_tacticalIds->klass = (BattleServantConfConponent_c *)v248;
    sub_B0D840(p_tacticalIds, (System_Int32_array **)v248, v249, v250, v251, v252, v253, v254);
    p_image = &p_tacticalIds->klass->_1.image;
    if ( !p_tacticalIds->klass )
      goto LABEL_130;
  }
  v255 = p_image[3];
  if ( (int)v255 >= 1 )
  {
    v256 = 0LL;
    while ( v256 < (unsigned int)v255 )
    {
      reinforcementsSaveList = (WarBoardData_o *)Instance;
      if ( !Instance )
        goto LABEL_130;
      v257 = *((_DWORD *)p_image + v256 + 8);
      reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   Instance,
                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !reinforcementsSaveList )
        goto LABEL_130;
      reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList,
                                                   v257,
                                                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      if ( !*p_tacticalTrendList )
        goto LABEL_130;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_tacticalTrendList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)reinforcementsSaveList,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__);
      LODWORD(v255) = *((_DWORD *)p_image + 6);
      if ( (__int64)++v256 >= (int)v255 )
        goto LABEL_129;
    }
    goto LABEL_131;
  }
LABEL_129:
  forceId = v271->fields.forceId;
  groupId = v271->fields.groupId;
  v260 = (WarBoardAiTargetCacher_o *)sub_B0D974(WarBoardAiTargetCacher_TypeInfo, v219, v220);
  WarBoardAiTargetCacher___ctor(v260, forceId, groupId, v261);
  v271->fields.aiTargetCacher = v260;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v271->fields.aiTargetCacher,
    (System_Int32_array **)v260,
    v262,
    v263,
    v264,
    v265,
    v266,
    v267);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute__AddPiecePersonalityDic(
        WarBoardAIRoute_o *this,
        int32_t aiId,
        int32_t pieceIndex,
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
  __int64 v21; // x1
  __int64 v22; // x1
  WarBoardAIRoute___c__DisplayClass43_0_o *v23; // x20
  WarBoardAIEntity_o *Entity; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x21
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *v28; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  WarBoardAIRoute_PiecePersonality_o *v34; // x21
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  struct System_Int32_array *actionTrendIds; // x8
  WarBoardAIEntity_o *v38; // x25
  unsigned __int64 v39; // x19
  __int64 v40; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *actionTrandList; // x26
  WarBoardActionTrendEntity_o *v42; // x27
  WarBoardAIRoute_ActionTrendInfo_o *v43; // x28
  struct System_Int32_array *v44; // x8
  WarBoardAIEntity_o *v45; // x22
  unsigned __int64 v46; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x1
  __int64 v48; // x0
  WarBoardAIEntity_o *v49; // [xsp+8h] [xbp-68h]
  WarBoardAIRoute_o *v50; // [xsp+18h] [xbp-58h]

  if ( (byte_4212B12 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, *(_QWORD *)&aiId);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardAIMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v14);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____, v15);
    sub_B0D8A4(&Method_System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool___ctor__, v16);
    sub_B0D8A4(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v19);
    sub_B0D8A4(&WarBoardAIRoute_PiecePersonality_TypeInfo, v20);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__, v21);
    sub_B0D8A4(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo, v22);
    byte_4212B12 = 1;
  }
  v23 = (WarBoardAIRoute___c__DisplayClass43_0_o *)sub_B0D974(
                                                     WarBoardAIRoute___c__DisplayClass43_0_TypeInfo,
                                                     *(_QWORD *)&aiId,
                                                     *(_QWORD *)&pieceIndex);
  WarBoardAIRoute___c__DisplayClass43_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_32;
  v23->fields.pieceIndex = pieceIndex;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  v28 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)sub_B0D974(
                                                                                      System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo,
                                                                                      v25,
                                                                                      v26);
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool____ctor(
    v28,
    (Il2CppObject *)v23,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    (const MethodInfo_260A3CC *)Method_System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool___ctor__);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v28,
         (const MethodInfo_1719DF0 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v34 = (WarBoardAIRoute_PiecePersonality_o *)sub_B0D974(WarBoardAIRoute_PiecePersonality_TypeInfo, v32, v33);
  WarBoardAIRoute_PiecePersonality___ctor(v34, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  Entity = (WarBoardAIEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   Master_WarQuestSelectionMaster,
                                   aiId,
                                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_32;
  v49 = Entity;
  Entity = (WarBoardAIEntity_o *)WarBoardAIEntity__GetActionTrendIds(Entity, v35);
  if ( !Entity )
    goto LABEL_32;
  v50 = this;
  actionTrendIds = Entity->fields.actionTrendIds;
  v38 = Entity;
  if ( (int)actionTrendIds >= 1 )
  {
    v39 = 0LL;
    while ( v39 < (unsigned int)actionTrendIds )
    {
      if ( !v30 )
        goto LABEL_32;
      Entity = (WarBoardAIEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v30,
                                       *((_DWORD *)&v38->fields.ratingOffsetIds + v39),
                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v34 )
          goto LABEL_32;
        actionTrandList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34->fields.actionTrandList;
        v42 = (WarBoardActionTrendEntity_o *)Entity;
        v43 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B0D974(WarBoardAIRoute_ActionTrendInfo_TypeInfo, v36, v40);
        WarBoardAIRoute_ActionTrendInfo___ctor(v43, v42, 0LL);
        if ( !actionTrandList )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          actionTrandList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
      LODWORD(actionTrendIds) = v38->fields.actionTrendIds;
      if ( (__int64)++v39 >= (int)actionTrendIds )
        goto LABEL_20;
    }
LABEL_33:
    v48 = sub_B0D9A8(Entity);
    sub_B0D948(v48, 0LL);
  }
LABEL_20:
  Entity = (WarBoardAIEntity_o *)WarBoardAIEntity__GetRatingOffsetIds(v49, v36);
  if ( !Entity )
    goto LABEL_32;
  v44 = Entity->fields.actionTrendIds;
  v45 = Entity;
  if ( (int)v44 >= 1 )
  {
    v46 = 0LL;
    while ( v46 < (unsigned int)v44 )
    {
      if ( !v31 )
        goto LABEL_32;
      Entity = (WarBoardAIEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v31,
                                       *((_DWORD *)&v45->fields.ratingOffsetIds + v46),
                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v34 )
          goto LABEL_32;
        v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)Entity;
        Entity = (WarBoardAIEntity_o *)v34->fields.ratingOffsetList;
        if ( !Entity )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Entity,
          v47,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
      }
      LODWORD(v44) = v45->fields.actionTrendIds;
      if ( (__int64)++v46 >= (int)v44 )
        goto LABEL_30;
    }
    goto LABEL_33;
  }
LABEL_30:
  Entity = (WarBoardAIEntity_o *)v50->fields.piecePersonalityDic;
  if ( !Entity )
LABEL_32:
    sub_B0D97C(Entity);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Entity,
    v23->fields.pieceIndex,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v34,
    (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
}


void __fastcall WarBoardAIRoute__BeforeCreateRouteData(WarBoardAIRoute_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *Instance; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  _QWORD *v63; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x22
  __int64 v65; // x1
  __int64 v66; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // x21
  __int64 v68; // x1
  __int64 v69; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x20
  __int64 v71; // x24
  int v72; // w8
  unsigned int v73; // w25
  int v74; // w8
  int32_t forceId; // w9
  __int64 v76; // x23
  System_Int32_array **v77; // x0
  WarBoardAIRoute_o *v78; // x25
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x1
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x1
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x1
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x1
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  __int64 v120; // x1
  __int64 v121; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v122; // x23
  int32_t v123; // w19
  int32_t groupId; // w20
  __int64 v125; // x1
  __int64 v126; // x2
  WarBoardAIRoute_AIRouteMasterData_o *v127; // x21
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  __int64 v134; // x1
  __int64 v135; // x2
  System_Collections_Generic_Dictionary_int__uint__o *v136; // x19
  void **p_placePieceData; // x20
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  struct WarBoardPieceData_array *allAllyPiece; // x26
  int max_length; // w8
  signed int v146; // w9
  __int64 v147; // x0
  __int64 v148; // x0
  WarBoardPieceData_o *v149; // x8
  __int64 v150; // x1
  __int64 v151; // x2
  int32_t forceId_k__BackingField; // w8
  int32_t v153; // w9
  int32_t v154; // w1
  __int64 v155; // x1
  __int64 v156; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v158; // x20
  unsigned __int64 v159; // x10
  int *p_offset; // x11
  __int64 v161; // x0
  int v162; // w8
  unsigned int v163; // w9
  WarBoardActionTrendConditionEntity_o *v164; // x26
  struct System_Int32_array *conditionTypes; // x28
  __int64 v166; // x8
  unsigned __int64 v167; // x27
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x0
  const MethodInfo *v170; // x2
  TargetDetector_o *DetectorByTrendKey; // x0
  const MethodInfo *v172; // x1
  __int64 v173; // x2
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v174; // x19
  const MethodInfo *v175; // x3
  WarBoardAiTargetCacher_o *v176; // x19
  const MethodInfo *v177; // x1
  int64_t v178; // x0
  const MethodInfo *v179; // x4
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicIndividualityPutSqareIndex; // x19
  int64_t v181; // x22
  const MethodInfo *v182; // x1
  int64_t v183; // x25
  __int64 v184; // x1
  __int64 v185; // x2
  WarBoardAIRoute_TargetData_o *v186; // x23
  __int64 v187; // x0
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  const MethodInfo *v189; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *v190; // x2
  int32_t squareIndex; // w19
  unsigned int v192; // w24
  WarBoardAIRoute___c__DisplayClass45_0_o *v193; // x21
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *dicSquareIndexKeyItemData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v196; // x22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v197; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x22
  WarBoardAIRoute_o *v199; // x0
  const MethodInfo *v200; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicSquarePutSqareIndex; // x19
  int64_t v202; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v204; // x22
  WarBoardSquareData_o *v205; // x21
  int64_t v206; // x22
  __int64 v207; // x1
  __int64 v208; // x2
  WarBoardAIRoute_TargetData_o *v209; // x19
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v210; // x21
  const MethodInfo *v211; // x1
  int64_t v212; // x0
  __int64 v213; // x8
  unsigned __int64 v214; // x10
  int *v215; // x11
  __int64 v216; // x0
  __int64 v217; // x8
  unsigned __int64 v218; // x10
  int *v219; // x11
  __int64 v220; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v221; // x0
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x20
  int v223; // w19
  __int64 v224; // x8
  unsigned __int64 v225; // x10
  int *v226; // x11
  __int64 v227; // x21
  __int64 v228; // x0
  const MethodInfo *v229; // x1
  __int64 v230; // x1
  __int64 v231; // x2
  WarBoardAiTargetCacher_o *v232; // x20
  WarBoardAIRoute___c_c *v233; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__45_0; // x19
  Il2CppObject *v236; // x21
  struct WarBoardAIRoute___c_StaticFields *v237; // x0
  System_String_array **v238; // x2
  System_String_array **v239; // x3
  System_Boolean_array **v240; // x4
  System_Int32_array **v241; // x5
  System_Int32_array *v242; // x6
  System_Int32_array *v243; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v244; // x0
  const MethodInfo *v245; // x2
  __int64 v246; // x1
  __int64 v247; // x2
  WarBoardAIRoute_AdvantagePieceData_o *v248; // x20
  struct WarBoardPieceData_array *v249; // x22
  int v250; // w8
  int32_t v251; // w21
  unsigned int v252; // w23
  __int64 v253; // x8
  __int64 v254; // x24
  int32_t ClassId; // w19
  float Magnification; // s9
  float v257; // s10
  float v258; // s8
  bool v259; // cc
  float v260; // s9
  char v261; // w19
  int v262; // w8
  const MethodInfo *v263; // x1
  __int64 v264; // x0
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+8h] [xbp-118h]
  struct WarBoardPieceData_array *v266; // [xsp+10h] [xbp-110h]
  void **p_aiRouteMasterData; // [xsp+20h] [xbp-100h]
  int v268; // [xsp+2Ch] [xbp-F4h]
  int v269; // [xsp+30h] [xbp-F0h]
  signed int v270; // [xsp+34h] [xbp-ECh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-E8h]
  __int64 v272; // [xsp+40h] [xbp-E0h]
  unsigned int v273; // [xsp+54h] [xbp-CCh]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v275; // [xsp+60h] [xbp-C0h]
  WarBoardAIRoute_o *v276; // [xsp+68h] [xbp-B8h]
  WarBoardAIRoute_DesignationItemData_o *v277; // [xsp+78h] [xbp-A8h]
  WarBoardAIRoute_PutSquareTarget_o *v278; // [xsp+88h] [xbp-98h]
  _DWORD v279[1]; // [xsp+90h] [xbp-90h]
  int v280; // [xsp+94h] [xbp-8Ch]
  bool notSquareTarget; // [xsp+98h] [xbp-88h] BYREF
  int32_t condType; // [xsp+9Ch] [xbp-84h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_4212B14 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIRoute_AIRouteMasterData_TypeInfo, method);
    sub_B0D8A4(&WarBoardAIRoute_AdvantagePieceData_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&WarBoardAIRoute_DesignationItemData_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__uint__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v24);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v25);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, v26);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, v27);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, v28);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v29);
    sub_B0D8A4(&Method_System_Func_WarBoardItemData__bool___ctor__, v30);
    sub_B0D8A4(&Method_System_Func_WarBoardSquareData__bool___ctor__, v31);
    sub_B0D8A4(&Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__, v32);
    sub_B0D8A4(&Method_System_Func_IWarBoardObjectData__bool___ctor__, v33);
    sub_B0D8A4(&System_Func_WarBoardSquareData__bool__TypeInfo, v34);
    sub_B0D8A4(&System_Func_IWarBoardObjectData__bool__TypeInfo, v35);
    sub_B0D8A4(&System_Func_WarBoardItemData__bool__TypeInfo, v36);
    sub_B0D8A4(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v37);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v38);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v39);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v40);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v41);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__, v42);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v43);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v44);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v45);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__, v46);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v47);
    sub_B0D8A4(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo, v48);
    sub_B0D8A4(&WarBoardAIRoute_PutSquareTarget_TypeInfo, v49);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v51);
    sub_B0D8A4(&SvtClassAttri_TypeInfo, v52);
    sub_B0D8A4(&WarBoardAIRoute_TargetData_TypeInfo, v53);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__, v54);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__, v55);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__, v56);
    sub_B0D8A4(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo, v57);
    sub_B0D8A4(&WarBoardAIRoute___c_TypeInfo, v58);
    sub_B0D8A4(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__, v59);
    byte_4212B14 = 1;
  }
  value = 0LL;
  condType = 0;
  notSquareTarget = 0;
  v280 = 0;
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_206;
  v63 = *(_QWORD **)&Instance[5].fields.count;
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  v61,
                                                                                                  v62);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  v65,
                                                                                                  v66);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v67,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  v68,
                                                                                                  v69);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v70,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v63 )
    goto LABEL_206;
  v276 = this;
  v71 = v63[6];
  if ( !v71 )
    goto LABEL_206;
  v72 = *(_DWORD *)(v71 + 24);
  if ( v72 >= 1 )
  {
    v73 = 0;
    while ( 1 )
    {
      if ( v73 >= v72 )
        goto LABEL_207;
      if ( !v70 )
        goto LABEL_206;
      v76 = *(_QWORD *)(v71 + 8LL * (int)v73 + 32);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v70,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      if ( !v76 )
        goto LABEL_206;
      if ( !*(_BYTE *)(v76 + 60) )
      {
        v74 = *(_DWORD *)(v76 + 20);
        forceId = v276->fields.forceId;
        if ( v74 != forceId )
          goto LABEL_12;
        if ( *(_DWORD *)(v76 + 24) == v276->fields.groupId )
          break;
      }
LABEL_20:
      v72 = *(_DWORD *)(v71 + 24);
      if ( (int)++v73 >= v72 )
        goto LABEL_21;
    }
    if ( !v64 )
      goto LABEL_206;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v64,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    v74 = *(_DWORD *)(v76 + 20);
    forceId = v276->fields.forceId;
LABEL_12:
    if ( v74 != forceId )
    {
      if ( !v67 )
        goto LABEL_206;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v67,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                            (WarBoardPieceData_o *)v76,
                                                                            0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        v276->fields.enemyMasterSquareIndex = *(_DWORD *)(v76 + 64);
    }
    goto LABEL_20;
  }
LABEL_21:
  if ( !v64 )
    goto LABEL_206;
  v77 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v64,
                                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v78 = v276;
  v276->fields.allAllyPiece = (struct WarBoardPieceData_array *)v77;
  sub_B0D840((BattleServantConfConponent_o *)&v276->fields.allAllyPiece, v77, v79, v80, v81, v82, v83, v84);
  if ( !v67 )
    goto LABEL_206;
  v85 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v67,
                                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v276->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v85;
  sub_B0D840((BattleServantConfConponent_o *)&v276->fields.allEnemyPiece, v85, v86, v87, v88, v89, v90, v91);
  v92 = (System_Int32_array **)v63[7];
  v276->fields.allSquare = (struct WarBoardSquareData_array *)v92;
  sub_B0D840((BattleServantConfConponent_o *)&v276->fields.allSquare, v92, v93, v94, v95, v96, v97, v98);
  v99 = (System_Int32_array **)v63[9];
  v276->fields.allItemData = (struct WarBoardItemData_array *)v99;
  sub_B0D840((BattleServantConfConponent_o *)&v276->fields.allItemData, v99, v100, v101, v102, v103, v104, v105);
  v106 = (System_Int32_array **)v63[10];
  v276->fields.allTreasureData = (struct WarBoardTreasureData_array *)v106;
  sub_B0D840((BattleServantConfConponent_o *)&v276->fields.allTreasureData, v106, v107, v108, v109, v110, v111, v112);
  v113 = (System_Int32_array **)v63[11];
  v276->fields.allWallData = (struct WarBoardWallData_array *)v113;
  sub_B0D840((BattleServantConfConponent_o *)&v276->fields.allWallData, v113, v114, v115, v116, v117, v118, v119);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v276->fields.dictionaryCreateRouteDataEvalValue;
  p_allEnemyPiece = &v276->fields.allEnemyPiece;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_object__float___Clear(
    Instance,
    (const MethodInfo_2E72324 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v276->fields.dicUniqueKeyDesignationItem;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
    (const MethodInfo_2E28764 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v276->fields.dicUniqueKeyTarget;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
    (const MethodInfo_2E28764 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v276->fields.dicUniqueKeyAdvantagePieceData;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
    (const MethodInfo_2E28764 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_206;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v122 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_IWarBoardObjectData__TypeInfo,
                                                                                                   v120,
                                                                                                   v121);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v122,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v122 )
    goto LABEL_206;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v122,
    (System_Collections_Generic_IEnumerable_T__o *)v276->fields.allItemData,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v122,
    (System_Collections_Generic_IEnumerable_T__o *)v276->fields.allTreasureData,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v122,
    (System_Collections_Generic_IEnumerable_T__o *)v276->fields.allWallData,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v122,
    (System_Collections_Generic_IEnumerable_T__o *)v70,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  v123 = v276->fields.forceId;
  groupId = v276->fields.groupId;
  v127 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_B0D974(WarBoardAIRoute_AIRouteMasterData_TypeInfo, v125, v126);
  WarBoardAIRoute_AIRouteMasterData___ctor(v127, v123, groupId, 0LL);
  v276->fields.aiRouteMasterData = v127;
  p_aiRouteMasterData = (void **)&v276->fields.aiRouteMasterData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v276->fields.aiRouteMasterData,
    (System_Int32_array **)v127,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133);
  v136 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_B0D974(
                                                                 System_Collections_Generic_Dictionary_int__uint__TypeInfo,
                                                                 v134,
                                                                 v135);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v136,
    (const MethodInfo_2E9708C *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  p_placePieceData = (void **)&v276->fields.placePieceData;
  v276->fields.placePieceData = v136;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v276->fields.placePieceData,
    (System_Int32_array **)v136,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  allAllyPiece = v276->fields.allAllyPiece;
  if ( !allAllyPiece )
    goto LABEL_206;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v146 = 0;
    v268 = 0;
    v275 = v122;
    v266 = v276->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v146 >= (unsigned int)max_length )
        goto LABEL_207;
      v149 = allAllyPiece->m_Items[v146];
      if ( !v149 )
        goto LABEL_206;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      v270 = v146;
      if ( !*p_placePieceData )
        goto LABEL_206;
      pieceData = allAllyPiece->m_Items[v146];
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
                                                                            v149->fields._nowSquareIndex_k__BackingField,
                                                                            (const MethodInfo_2E97E94 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_203;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_206;
      System_Collections_Generic_Dictionary_int__uint___Add(
        (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
        pieceData->fields._nowSquareIndex_k__BackingField,
        pieceData->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_2E97C30 *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
      forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
      v153 = v78->fields.forceId;
      if ( forceId_k__BackingField != v153 )
        goto LABEL_64;
      if ( pieceData->fields._groupId_k__BackingField == v78->fields.groupId )
        break;
LABEL_65:
      if ( pieceData->fields._groupId_k__BackingField != v78->fields.groupId )
        goto LABEL_69;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_206;
      v154 = 2;
LABEL_68:
      WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        (WarBoardAIRoute_AIRouteMasterData_o *)Instance,
        v154,
        pieceData,
        0LL);
LABEL_69:
      v277 = (WarBoardAIRoute_DesignationItemData_o *)sub_B0D974(
                                                        WarBoardAIRoute_DesignationItemData_TypeInfo,
                                                        v150,
                                                        v151);
      WarBoardAIRoute_DesignationItemData___ctor(v277, 0LL);
      v278 = (WarBoardAIRoute_PutSquareTarget_o *)sub_B0D974(WarBoardAIRoute_PutSquareTarget_TypeInfo, v155, v156);
      WarBoardAIRoute_PutSquareTarget___ctor(v278, 0LL);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v78->fields.piecePersonalityDic;
      if ( !Instance )
        goto LABEL_206;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
                                                                            pieceData->fields._index_k__BackingField,
                                                                            &value,
                                                                            (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
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
        v158 = Instance;
        if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
        {
          v159 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
          {
            ++v159;
            p_offset += 4;
            if ( v159 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
              goto LABEL_77;
          }
          v161 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_77:
          v161 = sub_AA67A0(
                   Instance,
                   System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                   0LL);
        }
        v272 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v161)(
                 v158,
                 *(_QWORD *)(v161 + 8));
        if ( !v272 )
          sub_B0D97C(0LL);
        while ( 1 )
        {
LABEL_122:
          v213 = *(_QWORD *)v272;
          if ( *(_WORD *)(*(_QWORD *)v272 + 298LL) )
          {
            v214 = 0LL;
            v215 = (int *)(*(_QWORD *)(v213 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v215 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v214;
              v215 += 4;
              if ( v214 >= *(unsigned __int16 *)(*(_QWORD *)v272 + 298LL) )
                goto LABEL_126;
            }
            v216 = v213 + 16LL * *v215 + 312;
          }
          else
          {
LABEL_126:
            v216 = sub_AA67A0(v272, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v216)(v272, *(_QWORD *)(v216 + 8)) & 1) == 0 )
            break;
          v217 = *(_QWORD *)v272;
          if ( *(_WORD *)(*(_QWORD *)v272 + 298LL) )
          {
            v218 = 0LL;
            v219 = (int *)(*(_QWORD *)(v217 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__c **)v219 - 1) != System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
            {
              ++v218;
              v219 += 4;
              if ( v218 >= *(unsigned __int16 *)(*(_QWORD *)v272 + 298LL) )
                goto LABEL_133;
            }
            v220 = v217 + 16LL * *v219 + 312;
          }
          else
          {
LABEL_133:
            v220 = sub_AA67A0(
                     v272,
                     System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                     0LL);
          }
          v221 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v220)(
                                                        v272,
                                                        *(_QWORD *)(v220 + 8));
          if ( !v221 )
            sub_B0D97C(0LL);
          Entity_k__BackingField = v221->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v221, 0LL);
          if ( !ConditionEntityArray )
            sub_B0D97C(0LL);
          v162 = ConditionEntityArray->max_length;
          if ( v162 >= 1 )
          {
            v163 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v163 >= v162 )
              {
                v148 = sub_B0D9A8(ConditionEntityArray);
                sub_B0D948(v148, 0LL);
              }
              v164 = ConditionEntityArray->m_Items[v163];
              if ( !v164 )
                sub_B0D97C(ConditionEntityArray);
              conditionTypes = v164->fields.conditionTypes;
              v273 = v163;
              if ( !conditionTypes )
                sub_B0D97C(ConditionEntityArray);
              v166 = *(_QWORD *)&conditionTypes->max_length;
              if ( (int)v166 >= 1 )
                break;
LABEL_121:
              ConditionEntityArray = condEntityArray;
              v162 = condEntityArray->max_length;
              v163 = v273 + 1;
              if ( (int)(v273 + 1) >= v162 )
                goto LABEL_122;
            }
            v167 = 0LL;
            while ( 2 )
            {
              if ( v167 >= (unsigned int)v166 )
              {
                v147 = sub_B0D9A8(ConditionEntityArray);
                sub_B0D948(v147, 0LL);
              }
              v192 = conditionTypes->m_Items[v167 + 1];
              v193 = (WarBoardAIRoute___c__DisplayClass45_0_o *)sub_B0D974(
                                                                  WarBoardAIRoute___c__DisplayClass45_0_TypeInfo,
                                                                  v189,
                                                                  v190);
              WarBoardAIRoute___c__DisplayClass45_0___ctor(v193, 0LL);
              if ( !v193 )
                sub_B0D97C(ConditionEntityArray);
              v193->fields.squareIndex = -1;
              if ( v192 <= 0x2A && ((1LL << v192) & 0x70001800000LL) != 0 )
              {
                v189 = (const MethodInfo *)(unsigned int)v164->fields.value;
                v193->fields.squareIndex = (int)v189;
                if ( (_DWORD)v189 != -1 )
                {
                  if ( !v277 )
                    sub_B0D97C(ConditionEntityArray);
                  dicSquareIndexKeyItemData = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v277->fields.dicSquareIndexKeyItemData;
                  if ( !dicSquareIndexKeyItemData )
                    sub_B0D97C(0LL);
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                                                       dicSquareIndexKeyItemData,
                                                                                       (int32_t)v189,
                                                                                       (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)v276->fields.allItemData;
                    v196 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                                System_Func_WarBoardItemData__bool__TypeInfo,
                                                                                                v189,
                                                                                                v190);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      v196,
                      (Il2CppObject *)v193,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardItemData__bool___ctor__);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                                         allItemData,
                                                                                         (System_Func_TSource__bool__o *)v196,
                                                                                         (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                    v190 = (WarBoardEvalValueSquare_EvalValueSquare_o *)ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v197 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v277->fields.dicSquareIndexKeyItemData;
                      if ( !v197 )
                        sub_B0D97C(0LL);
                      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                        v197,
                        v193->fields.squareIndex,
                        v190,
                        (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                    }
                  }
                }
              }
              v193->fields.squareIndex = -1;
              if ( v192 == 74 || v192 == 75 )
              {
                squareIndex = v164->fields.value;
                v193->fields.squareIndex = squareIndex;
                goto LABEL_110;
              }
              if ( v192 - 127 <= 1 )
              {
                if ( !Entity_k__BackingField )
                  sub_B0D97C(ConditionEntityArray);
                aiTargetCacher = v78->fields.aiTargetCacher;
                TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v189);
                if ( !aiTargetCacher )
                  sub_B0D97C(TrendKey);
                DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(aiTargetCacher, TrendKey, v170);
                if ( !DetectorByTrendKey )
                {
                  v174 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B0D974(
                                                                                                    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo,
                                                                                                    v172,
                                                                                                    v173);
                  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
                    v174,
                    0LL,
                    Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                    (const MethodInfo_26151B8 *)Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
                  WarBoardActionTrendConditionMaster__HasMatchCondition(condEntityArray, v174, &condType, v175);
                  v176 = v78->fields.aiTargetCacher;
                  v178 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v177);
                  if ( !v176 )
                    sub_B0D97C(v178);
                  WarBoardAiTargetCacher__Register(v176, v178, v164, condType, v179);
                }
                if ( !v278 )
                  sub_B0D97C(DetectorByTrendKey);
                dicIndividualityPutSqareIndex = v278->fields.dicIndividualityPutSqareIndex;
                v181 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v172);
                v183 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v182);
                v186 = (WarBoardAIRoute_TargetData_o *)sub_B0D974(WarBoardAIRoute_TargetData_TypeInfo, v184, v185);
                WarBoardAIRoute_TargetData___ctor(v186, v183, v192, 0LL);
                if ( !dicIndividualityPutSqareIndex )
                  sub_B0D97C(v187);
                System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
                  dicIndividualityPutSqareIndex,
                  v181,
                  v186,
                  (const MethodInfo_2EB9B54 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                squareIndex = v193->fields.squareIndex;
                v122 = v275;
                v78 = v276;
LABEL_110:
                if ( squareIndex != -1 )
                {
                  if ( !v278 )
                    sub_B0D97C(ConditionEntityArray);
                  if ( !Entity_k__BackingField )
                    sub_B0D97C(ConditionEntityArray);
                  dicObjectPutSquareIndex = v278->fields.dicObjectPutSquareIndex;
                  v199 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v189);
                  WarBoardAIRoute__RegisterTargetObjectToDic(
                    v199,
                    dicObjectPutSquareIndex,
                    (System_Collections_Generic_List_IWarBoardObjectData__o *)v122,
                    squareIndex,
                    (int64_t)v199,
                    v192,
                    &notSquareTarget,
                    v200);
                  if ( !notSquareTarget )
                  {
                    dicSquarePutSqareIndex = v278->fields.dicSquarePutSqareIndex;
                    v202 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v189);
                    if ( !dicSquarePutSqareIndex )
                      sub_B0D97C(v202);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ContainsKey(
                                                                                         dicSquarePutSqareIndex,
                                                                                         v202,
                                                                                         (const MethodInfo_2EB9DF0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                    if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                    {
                      allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)v276->fields.allSquare;
                      v204 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                                  System_Func_WarBoardSquareData__bool__TypeInfo,
                                                                                                  v189,
                                                                                                  v190);
                      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                        v204,
                        (Il2CppObject *)v193,
                        Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                        (const MethodInfo_26189B8 *)Method_System_Func_WarBoardSquareData__bool___ctor__);
                      ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                                           allSquare,
                                                                                           (System_Func_TSource__bool__o *)v204,
                                                                                           (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                      v205 = (WarBoardSquareData_o *)ConditionEntityArray;
                      if ( ConditionEntityArray )
                      {
                        v206 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v189);
                        v209 = (WarBoardAIRoute_TargetData_o *)sub_B0D974(
                                                                 WarBoardAIRoute_TargetData_TypeInfo,
                                                                 v207,
                                                                 v208);
                        WarBoardAIRoute_TargetData___ctor_20580520(v209, v205, v206, v192, 0LL);
                        v210 = v278->fields.dicSquarePutSqareIndex;
                        v212 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v211);
                        if ( !v210 )
                          sub_B0D97C(v212);
                        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
                          v210,
                          v212,
                          v209,
                          (const MethodInfo_2EB9B7C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                      }
                    }
                  }
                }
              }
              LODWORD(v166) = conditionTypes->max_length;
              if ( (__int64)++v167 >= (int)v166 )
                goto LABEL_121;
              continue;
            }
          }
        }
        allAllyPiece = v266;
        v279[v268] = 1269;
        v223 = ++v280;
        v224 = *(_QWORD *)v272;
        if ( *(_WORD *)(*(_QWORD *)v272 + 298LL) )
        {
          v225 = 0LL;
          v226 = (int *)(*(_QWORD *)(v224 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v226 - 1) != System_IDisposable_TypeInfo )
          {
            ++v225;
            v226 += 4;
            if ( v225 >= *(unsigned __int16 *)(*(_QWORD *)v272 + 298LL) )
              goto LABEL_142;
          }
          v227 = v272;
          v228 = v224 + 16LL * *v226 + 312;
        }
        else
        {
LABEL_142:
          v227 = v272;
          v228 = sub_AA67A0(v272, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v228)(v227, *(_QWORD *)(v228 + 8));
        if ( v223 )
        {
          v269 = v223;
          if ( v279[v223 - 1] == 1269 )
          {
            v280 = v223 - 1;
            v269 = v223 - 1;
          }
        }
        else
        {
          v269 = 0;
        }
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v78->fields.aiTargetCacher;
        if ( !Instance )
          goto LABEL_206;
        WarBoardAiTargetCacher__ClearTargetObject((WarBoardAiTargetCacher_o *)Instance, v229);
        v232 = v78->fields.aiTargetCacher;
        v233 = WarBoardAIRoute___c_TypeInfo;
        if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v233 = WarBoardAIRoute___c_TypeInfo;
        }
        static_fields = v233->static_fields;
        _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( (BYTE3(v233->vtable._0_Equals.methodPtr) & 4) != 0 && !v233->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v233);
            static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          }
          v236 = (Il2CppObject *)static_fields->__9;
          _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                          System_Func_IWarBoardObjectData__bool__TypeInfo,
                                                                                          v230,
                                                                                          v231);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__45_0,
            v236,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            (const MethodInfo_26189B8 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
          v237 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v237->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v237->__9__45_0,
            (System_Int32_array **)_9__45_0,
            v238,
            v239,
            v240,
            v241,
            v242,
            v243);
        }
        v244 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v122,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                              v244,
                                                                              (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v232 )
          goto LABEL_206;
        WarBoardAiTargetCacher__AggregateTargetObject(v232, (IWarBoardObjectData_array *)Instance, v245);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v78->fields.dicUniqueKeyDesignationItem;
        if ( !Instance )
          goto LABEL_206;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (WarBoardAIRoute_PutSquareTarget_o *)v277,
          (const MethodInfo_2E28588 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v78->fields.dicUniqueKeyTarget;
        if ( !Instance )
          goto LABEL_206;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          v278,
          (const MethodInfo_2E28588 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isServant(
                                                                              pieceData,
                                                                              0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v248 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_B0D974(
                                                           WarBoardAIRoute_AdvantagePieceData_TypeInfo,
                                                           v246,
                                                           v247);
          WarBoardAIRoute_AdvantagePieceData___ctor(v248, 0LL);
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pieceData->fields._battleServant_k__BackingField;
          if ( !Instance )
            goto LABEL_206;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleServantData__getClassId(
                                                                                (BattleServantData_o *)Instance,
                                                                                0LL);
          v249 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_206;
          v250 = v249->max_length;
          if ( v250 >= 1 )
          {
            v251 = (int)Instance;
            v252 = 0;
            while ( v252 < v250 )
            {
              v253 = (__int64)v249 + 8 * (int)v252;
              v254 = *(_QWORD *)(v253 + 32);
              if ( !v254 )
                goto LABEL_206;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                    *(WarBoardPieceData_o **)(v253 + 32),
                                                                                    0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                Instance = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(v254 + 128);
                if ( !Instance )
                  goto LABEL_206;
                ClassId = BattleServantData__getClassId((BattleServantData_o *)Instance, 0LL);
                if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SvtClassAttri_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                }
                Magnification = SvtClassAttri__getMagnification(v251, ClassId, 0LL);
                v257 = SvtClassAttri__getMagnification(ClassId, v251, 0LL);
                v258 = SvtClassAttri__getMagnification(v251, ClassId, 0LL);
                v259 = Magnification <= 1.0;
                v260 = SvtClassAttri__getMagnification(ClassId, v251, 0LL);
                if ( v259 )
                {
                  v261 = 0;
                }
                else
                {
                  if ( !v248 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v248->fields.dicAttackAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v254 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v254,
                    (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v261 = 1;
                  v248->fields.flagNow |= 0x4000uLL;
                }
                if ( v257 < 1.0 )
                {
                  if ( !v248 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v248->fields.dicDefenseAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v254 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v254,
                    (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v248->fields.flagNow |= 0x10000uLL;
                }
                if ( v258 < 1.0 )
                {
                  if ( !v248 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v248->fields.dicAttackDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v254 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v254,
                    (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v248->fields.flagNow |= 0x8000uLL;
                }
                if ( v260 > 1.0 )
                {
                  if ( !v248 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v248->fields.dicDefenseDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v254 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v254,
                    (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v248->fields.flagNow |= 0x20000uLL;
                }
                if ( ((unsigned __int8)v261 & (v257 < 1.0)) != 0 )
                {
                  if ( !v248 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v248->fields.dicClassAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v254 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v254,
                    (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v248->fields.flagNow |= 0x1000uLL;
                }
                if ( v258 < 1.0 && v260 > 1.0 )
                {
                  if ( !v248 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v248->fields.dicClassDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v254 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v254,
                    (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v248->fields.flagNow |= 0x2000uLL;
                }
              }
              v250 = v249->max_length;
              if ( (int)++v252 >= v250 )
                goto LABEL_199;
            }
LABEL_207:
            v264 = sub_B0D9A8(Instance);
            sub_B0D948(v264, 0LL);
          }
LABEL_199:
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v78->fields.dicUniqueKeyAdvantagePieceData;
          if ( !Instance )
            goto LABEL_206;
          System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
            (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
            pieceData->fields._uniqueIndex_k__BackingField,
            (WarBoardAIRoute_PutSquareTarget_o *)v248,
            (const MethodInfo_2E28588 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          v262 = v269;
          v122 = v275;
        }
        else
        {
          v262 = v269;
        }
        v268 = v262;
        p_placePieceData = (void **)&v276->fields.placePieceData;
      }
LABEL_203:
      max_length = allAllyPiece->max_length;
      v146 = v270 + 1;
      if ( v270 + 1 >= max_length )
        goto LABEL_204;
    }
    if ( WarBoardPieceData__get_isMaster(pieceData, 0LL) )
    {
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_206;
      v154 = 0;
      goto LABEL_68;
    }
    forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
    v153 = v78->fields.forceId;
LABEL_64:
    if ( forceId_k__BackingField != v153 )
      goto LABEL_69;
    goto LABEL_65;
  }
LABEL_204:
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
  if ( !*p_aiRouteMasterData )
LABEL_206:
    sub_B0D97C(Instance);
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData((WarBoardAIRoute_AIRouteMasterData_o *)Instance, 1, 0LL, 0LL);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(v78, v263);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  WarBoardItemData_o *Item; // x0

  if ( (byte_4212B1E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&targetSquare);
    this = (WarBoardAIRoute_o *)sub_B0D8A4(&WarBoardAIManager_TypeInfo, v6);
    byte_4212B1E = 1;
  }
  if ( !alreadyGetItemList )
    sub_B0D97C(this);
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 0;
  }
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  Item = WarBoardAIManager__GetItem(targetSquare, v7);
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
    sub_B0D97C(this);
  v19->fields.isMoveByServantAndDefenseDisAdvantageServantRange = (int)this;
}


void __fastcall WarBoardAIRoute__Clear(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x0

  if ( (byte_4212B10 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__, method);
    byte_4212B10 = 1;
  }
  allRouteList = this->fields.allRouteList;
  if ( !allRouteList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)allRouteList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t v13; // w19
  int32_t key; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w0
  int32_t v17; // w20
  int v18; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+8h] [xbp-68h] BYREF

  v6 = dicPieceList;
  if ( (byte_4212B1D & 1) == 0 )
  {
    sub_B0D8A4(&AStarSearch_TypeInfo, *(_QWORD *)&baseRange);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v11);
    dicPieceList = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_B0D8A4(
                                                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                                                                        v12);
    byte_4212B1D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !v6 )
    sub_B0D97C(dicPieceList);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v20,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v6,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v13 = 3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v20,
            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
    {
      v17 = 0;
      v18 = 1;
      goto LABEL_14;
    }
    key = (int32_t)v20.fields.current.fields.key;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                 0LL,
                                                                 actionIndex,
                                                                 key,
                                                                 0,
                                                                 0LL,
                                                                 0LL);
    v16 = System_Linq_Enumerable__Count_int_(
            v15,
            (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v16 < baseRange )
      break;
    if ( v16 == baseRange )
      v13 = 2;
  }
  v17 = 1;
  v18 = 3;
LABEL_14:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v20,
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  if ( (unsigned int)(v18 + 1) >> 2 )
    return v17;
  return v13;
}


void __fastcall WarBoardAIRoute__CreateOutOfWarningAreaToDistance(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__int__o *v7; // x21
  struct System_Collections_Generic_Dictionary_int__int__o **p_dicOutOfWarningAreaRange; // x23
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_Dictionary_int__int__o *IsFlag; // x0
  struct WarBoardSquareData_array *allSquare; // x25
  int max_length; // w8
  int v18; // w26
  Il2CppClass **v19; // x8
  Il2CppClass *v20; // x21
  struct WarBoardSquareData_array *v21; // x20
  int v22; // w8
  unsigned int v23; // w27
  int v24; // w22
  Il2CppClass **v25; // x8
  Il2CppClass *v26; // x23
  int32_t name; // w24
  int32_t v28; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  int32_t v31; // w1
  const MethodInfo_2E69854 *v32; // x3
  int32_t v33; // w2
  __int64 v34; // x0
  struct System_Collections_Generic_Dictionary_int__int__o **v35; // [xsp+0h] [xbp-60h]

  if ( (byte_4212B29 & 1) == 0 )
  {
    sub_B0D8A4(&AStarSearch_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v6);
    byte_4212B29 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                              System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                              method,
                                                              v2);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v7;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dicOutOfWarningAreaRange,
    (System_Int32_array **)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  allSquare = this->fields.allSquare;
  if ( !allSquare )
LABEL_33:
    sub_B0D97C(IsFlag);
  max_length = allSquare->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    v35 = &this->fields.dicOutOfWarningAreaRange;
    do
    {
      if ( v18 >= (unsigned int)max_length )
        goto LABEL_34;
      v19 = &allSquare->obj.klass + v18;
      v20 = v19[4];
      if ( !v20 )
        goto LABEL_33;
      IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                      (WarBoardSquareData_o *)v19[4],
                                                                      1,
                                                                      0LL);
      if ( ((unsigned __int8)IsFlag & 1) != 0 )
      {
        v21 = this->fields.allSquare;
        if ( !v21 )
          goto LABEL_33;
        v22 = v21->max_length;
        if ( v22 >= 1 )
        {
          v23 = 0;
          v24 = -1;
          while ( v23 < v22 )
          {
            v25 = &v21->obj.klass + (int)v23;
            v26 = v25[4];
            if ( !v26 )
              goto LABEL_33;
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                            (WarBoardSquareData_o *)v25[4],
                                                                            1,
                                                                            0LL);
            if ( ((unsigned __int8)IsFlag & 1) != 0 )
              goto LABEL_37;
            name = (int32_t)v20->_1.name;
            v28 = (int32_t)v26->_1.name;
            if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AStarSearch_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
            }
            v29 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                         0LL,
                                                                         name,
                                                                         v28,
                                                                         0,
                                                                         0LL,
                                                                         0LL);
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__Count_int_(
                                                                            v29,
                                                                            (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
            if ( v24 > (int)IsFlag - 1 || v24 == -1 )
              v24 = (_DWORD)IsFlag - 1;
            if ( v24 >= 2 )
            {
LABEL_37:
              v22 = v21->max_length;
              if ( (int)++v23 < v22 )
                continue;
            }
            goto LABEL_29;
          }
LABEL_34:
          v34 = sub_B0D9A8(IsFlag);
          sub_B0D948(v34, 0LL);
        }
        v24 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        IsFlag = *v35;
        if ( !*v35 )
          goto LABEL_33;
        v31 = (int32_t)v20->_1.name;
        v33 = v24;
        v32 = (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
      }
      else
      {
        IsFlag = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v31 = (int32_t)v20->_1.name;
        v32 = (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v33 = 0;
      }
      System_Collections_Generic_Dictionary_int__int___Add(IsFlag, v31, v33, v32);
      max_length = allSquare->max_length;
      ++v18;
    }
    while ( v18 < max_length );
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall WarBoardAIRoute__CreateRouteData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t searchCount,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
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

  if ( (byte_4212B16 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo, piecePlaceData);
    byte_4212B16 = 1;
  }
  v9 = sub_B0D974(WarBoardAIRoute__CreateRouteData_d__47_TypeInfo, piecePlaceData, *(_QWORD *)&searchCount);
  WarBoardAIRoute__CreateRouteData_d__47___ctor((WarBoardAIRoute__CreateRouteData_d__47_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v9 + 56),
    (System_Int32_array **)piecePlaceData,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  *(_DWORD *)(v9 + 40) = searchCount;
  *(_QWORD *)(v9 + 48) = routeDataList;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v9 + 48),
    (System_Int32_array **)routeDataList,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  return (System_Collections_IEnumerator_o *)v9;
}


WarBoardPieceData_o *__fastcall WarBoardAIRoute__GetActionPiece(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        int32_t actionSquareIndex,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  uint32_t v9; // w19
  uint32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4212B2E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, basePiece);
    this = (WarBoardAIRoute_o *)sub_B0D8A4(&WarBoardAIManager_TypeInfo, v7);
    byte_4212B2E = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_B0D97C(this);
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_2E99840 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
  {
    v9 = value;
    if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    }
    return WarBoardAIManager__GetPieceUnique(v9, v8);
  }
  else
  {
    if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    }
    return WarBoardAIManager__GetEnemyPieceSquareIndex(actionSquareIndex, v8);
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
  _BOOL8 HasFlag_20575936; // x0
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
  if ( (byte_4212B2C & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B0D8A4(
                                  &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__,
                                  basePiece);
    byte_4212B2C = 1;
  }
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v6->fields.dicUniqueKeyAdvantagePieceData) == 0LL
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                                      (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)this,
                                      basePiece->fields._uniqueIndex_k__BackingField,
                                      (const MethodInfo_2E284C4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0LL )
  {
    sub_B0D97C(this);
  }
  v7 = (WarBoardAIRoute_AdvantagePieceData_o *)this;
  HasFlag_20575936 = WarBoardAIRoute_RouteData__HasFlag_20575936(
                       *(_QWORD *)&this->fields.TEMP_SEARCH_DEPTH,
                       4096LL,
                       0LL);
  if ( HasFlag_20575936 )
    v7->fields.baseCARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)HasFlag_20575936,
                               v7->fields.dicClassAdvantageServant,
                               baseSquareIndex,
                               v9);
  v10 = WarBoardAIRoute_RouteData__HasFlag_20575936(v7->fields.flagNow, 0x2000LL, 0LL);
  if ( v10 )
    v7->fields.baseCDARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v10,
                                v7->fields.dicClassDisAdvantageServant,
                                baseSquareIndex,
                                v11);
  v12 = WarBoardAIRoute_RouteData__HasFlag_20575936(v7->fields.flagNow, 0x4000LL, 0LL);
  if ( v12 )
    v7->fields.baseAARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v12,
                               v7->fields.dicAttackAdvantageServant,
                               baseSquareIndex,
                               v13);
  v14 = WarBoardAIRoute_RouteData__HasFlag_20575936(v7->fields.flagNow, 0x8000LL, 0LL);
  if ( v14 )
    v7->fields.baseADARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v14,
                                v7->fields.dicAttackDisAdvantageServant,
                                baseSquareIndex,
                                v15);
  v16 = WarBoardAIRoute_RouteData__HasFlag_20575936(v7->fields.flagNow, 0x10000LL, 0LL);
  if ( v16 )
    v7->fields.baseDARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v16,
                               v7->fields.dicDefenseAdvantageServant,
                               baseSquareIndex,
                               v17);
  v18 = WarBoardAIRoute_RouteData__HasFlag_20575936(v7->fields.flagNow, 0x20000LL, 0LL);
  if ( v18 )
    v7->fields.baseDDARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v18,
                                v7->fields.dicDefenseDisAdvantageServant,
                                baseSquareIndex,
                                v19);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_uint__int__o *__fastcall WarBoardAIRoute__GetAllEnemyToDistance(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        int32_t *servantAndEnemyRange,
        int32_t *servantAndEnemyMasterRange,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_uint__int__o *v14; // x22
  __int64 isMaster; // x0
  struct WarBoardPieceData_array *allEnemyPiece; // x25
  int max_length; // w8
  unsigned int v18; // w26
  WarBoardPieceData_o *v19; // x23
  int32_t nowSquareIndex_k__BackingField; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  int32_t v22; // w24
  __int64 v24; // x0

  if ( (byte_4212B28 & 1) == 0 )
  {
    sub_B0D8A4(&AStarSearch_TypeInfo, routeDataList);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v13);
    byte_4212B28 = 1;
  }
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v14 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B0D974(
                                                                System_Collections_Generic_Dictionary_uint__int__TypeInfo,
                                                                routeDataList,
                                                                *(_QWORD *)&baseSquareIndex);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v14,
    (const MethodInfo_2E23E24 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  allEnemyPiece = this->fields.allEnemyPiece;
  if ( !allEnemyPiece )
    goto LABEL_21;
  max_length = allEnemyPiece->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        v24 = sub_B0D9A8(isMaster);
        sub_B0D948(v24, 0LL);
      }
      v19 = allEnemyPiece->m_Items[v18];
      if ( !v19 )
        break;
      nowSquareIndex_k__BackingField = v19->fields._nowSquareIndex_k__BackingField;
      if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AStarSearch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      }
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   nowSquareIndex_k__BackingField,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      isMaster = System_Linq_Enumerable__Count_int_(
                   v21,
                   (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v14 )
        break;
      v22 = isMaster;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v14,
        v19->fields._uniqueIndex_k__BackingField,
        isMaster,
        (const MethodInfo_2E249C8 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
      if ( *servantAndEnemyRange == -1 || v22 < *servantAndEnemyRange )
        *servantAndEnemyRange = v22;
      isMaster = WarBoardPieceData__get_isMaster(v19, 0LL);
      if ( (isMaster & 1) != 0 && (*servantAndEnemyMasterRange == -1 || v22 < *servantAndEnemyMasterRange) )
        *servantAndEnemyMasterRange = v22;
      max_length = allEnemyPiece->max_length;
      if ( (int)++v18 >= max_length )
        return v14;
    }
LABEL_21:
    sub_B0D97C(isMaster);
  }
  return v14;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t masterSquareIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WarBoardAIRoute___c__DisplayClass51_0_o *v13; // x22
  __int64 v14; // x0
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w20
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_IEnumerable_TSource__o *Keys; // x19
  System_Func_int__bool__o *v20; // x20

  if ( (byte_4212B19 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__, piecePlaceData);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_int___, v8);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v10);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__, v11);
    sub_B0D8A4(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo, v12);
    byte_4212B19 = 1;
  }
  v13 = (WarBoardAIRoute___c__DisplayClass51_0_o *)sub_B0D974(
                                                     WarBoardAIRoute___c__DisplayClass51_0_TypeInfo,
                                                     piecePlaceData,
                                                     *(_QWORD *)&masterSquareIndex);
  WarBoardAIRoute___c__DisplayClass51_0___ctor(v13, 0LL);
  if ( !v13
    || (v13->fields.masterSquareIndex = masterSquareIndex, (aiRouteMasterData = this->fields.aiRouteMasterData) == 0LL)
    || !piecePlaceData )
  {
    sub_B0D97C(v14);
  }
  masterType = aiRouteMasterData->fields.masterType;
  Keys = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                                piecePlaceData,
                                                                (const MethodInfo_2E97840 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  if ( masterType != 1 )
  {
    v20 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v17, v18);
    System_Func_int__bool____ctor(
      v20,
      (Il2CppObject *)v13,
      Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    Keys = System_Linq_Enumerable__Where_int_(
             Keys,
             (System_Func_TSource__bool__o *)v20,
             (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
  }
  return System_Linq_Enumerable__ToArray_int_(
           Keys,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
DefenseAreaData_o *__fastcall WarBoardAIRoute__GetDefenseAreaData(
        WarBoardAIRoute_o *this,
        int32_t masterSquareIndex,
        System_Int32_array *allyPieces,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
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
  __int64 v25; // x24
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicSquareIndexEnemyPiece; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t defenseArea; // w20
  DefenseAreaData_o *v37; // x19
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v40; // x20
  __int64 v41; // x1
  WarBoardAIManager_c *v42; // x0
  char v43; // w10
  bool v44; // w8
  bool IsDetour; // w25
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Int32_array *v47; // x28
  __int64 v48; // x0
  int32_t v49; // w25
  __int64 v50; // x0
  const MethodInfo *v51; // x2
  BalanceConfig_c *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  System_Func_int__bool__o *klass; // x28
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x8
  int64_t v63; // x21
  BalanceConfig_c *v64; // x0
  BattleServantConfConponent_o *v66; // [xsp+8h] [xbp-C8h]
  bool v68; // [xsp+1Ch] [xbp-B4h]
  char v69; // [xsp+20h] [xbp-B0h]
  bool v70; // [xsp+24h] [xbp-ACh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v71; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v72; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4212B1A & 1) == 0 )
  {
    sub_B0D8A4(&AStarSearch_TypeInfo, *(_QWORD *)&masterSquareIndex);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v8);
    sub_B0D8A4(&DefenseAreaData_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v17);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v18);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__, v21);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__, v22);
    sub_B0D8A4(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo, v23);
    sub_B0D8A4(&WarBoardAIManager_TypeInfo, v24);
    byte_4212B1A = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v25 = sub_B0D974(WarBoardAIRoute___c__DisplayClass52_0_TypeInfo, *(_QWORD *)&masterSquareIndex, allyPieces);
  WarBoardAIRoute___c__DisplayClass52_0___ctor((WarBoardAIRoute___c__DisplayClass52_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_55;
  *(_QWORD *)(v25 + 16) = piecePlaceData;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v25 + 16),
    (System_Int32_array **)piecePlaceData,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  npcData = this->fields.npcData;
  if ( !npcData )
    goto LABEL_55;
  defenseArea = npcData->fields.defenseArea;
  v37 = (DefenseAreaData_o *)sub_B0D974(DefenseAreaData_TypeInfo, v33, v34);
  DefenseAreaData___ctor(v37, masterSquareIndex, defenseArea, 0LL);
  v40 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                   v38,
                                                                                                   v39);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v40,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  if ( !byte_42126C5 )
  {
    sub_B0D8A4(&WarBoardAIManager_TypeInfo, v41);
    byte_42126C5 = 1;
  }
  v42 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v42 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v42->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_55;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v71,
    dicSquareIndexEnemyPiece,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v66 = (BattleServantConfConponent_o *)(v25 + 24);
  v72 = v71;
  v43 = 0;
  v44 = 1;
  IsDetour = 1;
LABEL_15:
  v68 = v44;
LABEL_16:
  v69 = v43;
  v70 = IsDetour;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v72,
            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    current = v72.fields.current;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v47 = AStarSearch__RouteSearch(0LL, masterSquareIndex, (int32_t)current.fields.key, 0, 0LL, 0LL);
    v48 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v47,
            (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v40 )
      sub_B0D97C(v48);
    v49 = v48;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v40,
      (int32_t)current.fields.key,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v47,
      (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v37 )
      sub_B0D97C(v50);
    DefenseAreaData__SetComparisonMasterAndEnemyRange(v37, v49, 0LL);
    if ( DefenseAreaData__IsInDefenseArea(v37, (int32_t)current.fields.key, 0LL) )
    {
      v52 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v52 = BalanceConfig_TypeInfo;
      }
      if ( !v52->static_fields->IsEnableOldBlockShortestRoute )
      {
        if ( !v47 )
          sub_B0D97C(v52);
        if ( (int)v47->max_length >= 2 )
          DefenseAreaData__SetComparisonAllMasterAndEnemyRange(v37, v47->m_Items[2], v49, 0LL);
      }
      IsDetour = 0;
      v43 = 1;
      if ( v70 )
      {
        IsDetour = WarBoardAIRoute__IsDetour(v47, allyPieces, v51);
        v44 = 0;
        v43 = 1;
        if ( v68 )
        {
          klass = (System_Func_int__bool__o *)v66->klass;
          if ( !v66->klass )
          {
            klass = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v53, v54);
            System_Func_int__bool____ctor(
              klass,
              (Il2CppObject *)v25,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
            v66->klass = (BattleServantConfConponent_c *)klass;
            sub_B0D840(v66, (System_Int32_array **)klass, v56, v57, v58, v59, v60, v61);
          }
          if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AStarSearch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          }
          v44 = AStarSearch__RouteSearch(
                  (WarBoardPieceData_o *)current.fields.value,
                  (int32_t)current.fields.key,
                  masterSquareIndex,
                  0,
                  klass,
                  0LL) == 0LL;
          v43 = 1;
        }
        goto LABEL_15;
      }
      goto LABEL_16;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v72,
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  v62 = 1025LL;
  if ( (v69 & 1) == 0 )
    v62 = 1LL;
  if ( v70 )
    v62 |= 0x2000000000uLL;
  v63 = v68 ? v62 | 0x10000000000LL : v62;
  if ( !v37 )
LABEL_55:
    sub_B0D97C(dicSquareIndexEnemyPiece);
  DefenseAreaData__CreateShortestRoutes(v37, (System_Collections_Generic_Dictionary_int__int____o *)v40, 0LL);
  v64 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v64 = BalanceConfig_TypeInfo;
  }
  if ( !v64->static_fields->IsEnableOldBlockShortestRoute )
    DefenseAreaData__CreateAllShortestRoutes(v37, (System_Collections_Generic_Dictionary_int__int____o *)v40, 0LL);
  DefenseAreaData__SetFlag(v37, v63, 0LL);
  return v37;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall WarBoardAIRoute__GetDesignationItemToDistance(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v7; // x22
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
  WarBoardAIRoute_PutSquareTarget_o *Item; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_Dictionary_int__int__o *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x22
  __int64 v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x23
  __int64 v39; // x1
  __int64 v40; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v41; // x24
  _BOOL8 v42; // x0
  int32_t v43; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  __int64 v45; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v48; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v49; // [xsp+30h] [xbp-80h] BYREF

  v7 = this;
  if ( (byte_4212B27 & 1) == 0 )
  {
    sub_B0D8A4(&AStarSearch_TypeInfo, basePiece);
    sub_B0D8A4(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__, v17);
    sub_B0D8A4(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v18);
    sub_B0D8A4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__, v21);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__, v22);
    this = (WarBoardAIRoute_o *)sub_B0D8A4(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo, v23);
    byte_4212B27 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v7->fields.dicUniqueKeyDesignationItem) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                 (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)this,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_2E284C4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v27 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                                     System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                     v25,
                                                                     v26),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v27,
          (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (this = (WarBoardAIRoute_o *)Item->fields.dicSquarePutSqareIndex) == 0LL )
  {
    sub_B0D97C(this);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v48,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v49 = v48;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v49,
            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v30 = sub_B0D974(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo, v28, v29);
    WarBoardAIRoute___c__DisplayClass66_0___ctor((WarBoardAIRoute___c__DisplayClass66_0_o *)v30, 0LL);
    if ( !v30 )
      sub_B0D97C(v31);
    v38 = v30 + 24;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v30 + 16) = v49.fields.current;
    sub_B0D840((BattleServantConfConponent_o *)(v30 + 24), 0LL, v32, v33, v34, v35, v36, v37);
    v41 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                                               v39,
                                                                               v40);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v41,
      (Il2CppObject *)v30,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    v42 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v41,
            (const MethodInfo_1707138 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    if ( !v42 )
    {
      if ( !*(_QWORD *)v38 )
        sub_B0D97C(v42);
      v43 = *(_DWORD *)(*(_QWORD *)v38 + 16LL);
      if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AStarSearch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      }
      v44 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   v43,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v45 = System_Linq_Enumerable__Count_int_(
              v44,
              (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v27 )
        sub_B0D97C(v45);
      System_Collections_Generic_Dictionary_int__int___Add(
        v27,
        *(_DWORD *)(v30 + 16),
        v45,
        (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v49,
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v27;
}


WarBoardEvalValueSquare_EvalValueSquare_o *__fastcall WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4212B1B & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B0D8A4(
                                  &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__,
                                  evalValueSquareList);
    byte_4212B1B = 1;
  }
  if ( !evalValueSquareList )
    sub_B0D97C(this);
  return System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
           evalValueSquareList,
           index,
           (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarBoardAIRoute__GetFlagAdvantage(
        WarBoardAIRoute_o *this,
        int32_t baseClassId,
        int32_t actionClassId,
        const MethodInfo *method)
{
  __int64 v6; // x22
  __int64 v7; // x21
  __int64 v8; // x19

  if ( (byte_4212B2F & 1) == 0 )
  {
    sub_B0D8A4(&SvtClassAttri_TypeInfo, *(_QWORD *)&baseClassId);
    byte_4212B2F = 1;
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
  if ( WarBoardAIRoute_RouteData__HasFlag_20575936(v8, 0x80000LL, 0LL)
    && WarBoardAIRoute_RouteData__HasFlag_20575936(v8, 0x100000LL, 0LL) )
  {
    v8 |= 0x40000uLL;
  }
  if ( !WarBoardAIRoute_RouteData__HasFlag_20575936(v8, 0x400000LL, 0LL) )
    return v8;
  if ( WarBoardAIRoute_RouteData__HasFlag_20575936(v8, 0x800000LL, 0LL) )
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Int32_array *linkedSquares; // x19
  __int64 v15; // x8
  unsigned __int64 v16; // x22
  int32_t *v17; // x26
  __int64 v18; // x23
  int32_t v19; // w24
  const MethodInfo *v20; // x2
  WarBoardPieceData_o *v21; // x25
  int32_t *v22; // x19
  __int64 v23; // x26
  int32_t v24; // w27
  int32_t ClassId; // w28
  float Magnification; // s0
  const MethodInfo *v27; // x1
  uint32_t v28; // w24
  const MethodInfo *v29; // x2
  WarBoardAIRoute_o *v30; // x24
  __int64 v32; // x0
  WarBoardAIRoute_o *v33; // [xsp+0h] [xbp-70h]
  struct System_Int32_array *v34; // [xsp+8h] [xbp-68h]
  int32_t v35; // [xsp+18h] [xbp-58h]
  uint32_t value; // [xsp+1Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4212B2B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, baseSquare);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B0D8A4(&SvtClassAttri_TypeInfo, v12);
    this = (WarBoardAIRoute_o *)sub_B0D8A4(&WarBoardAIManager_TypeInfo, v13);
    byte_4212B2B = 1;
  }
  value = 0;
  if ( !baseSquare )
    goto LABEL_52;
  linkedSquares = baseSquare->fields.linkedSquares;
  if ( !linkedSquares )
    goto LABEL_52;
  v15 = *(_QWORD *)&linkedSquares->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    v17 = &linkedSquares->m_Items[1];
    v18 = 1LL;
    v33 = v10;
    v34 = linkedSquares;
    v35 = masterSquareIndex;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
      {
        v32 = sub_B0D9A8(this);
        sub_B0D948(v32, 0LL);
      }
      v19 = v17[v16];
      this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)this[1].fields.npcData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_22073600((WarBoardData_o *)this, v19, 0LL);
      if ( !this )
        goto LABEL_31;
      v21 = (WarBoardPieceData_o *)this;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v21, v20);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !basePiece )
          break;
        if ( WarBoardPieceData__get_isServant(basePiece, 0LL) || WarBoardPieceData__get_isMaster(v21, 0LL) )
        {
          v22 = v17;
          v23 = v18 | 0x10;
          if ( WarBoardPieceData__get_isServant(v21, 0LL)
            && !WarBoardAIRoute_RouteData__HasFlag_20575936(v18 | 0x10, 0x1000000LL, 0LL) )
          {
            this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
            if ( !this )
              break;
            this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
            if ( !v21->fields._battleServant_k__BackingField )
              break;
            v24 = (int)this;
            ClassId = BattleServantData__getClassId(v21->fields._battleServant_k__BackingField, 0LL);
            if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SvtClassAttri_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            }
            Magnification = SvtClassAttri__getMagnification(v24, ClassId, 0LL);
            masterSquareIndex = v35;
            v10 = v33;
            if ( Magnification > 1.0 )
              v23 = v18 | 0x1000010;
          }
          if ( WarBoardPieceData__get_isMaster(v21, 0LL) )
            v18 = v23 | 0x20;
          else
            v18 = v23;
          v17 = v22;
          linkedSquares = v34;
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
      if ( ((v19 == masterSquareIndex) & ((unsigned int)this ^ 1)) != 0 )
        v18 |= 0x400000000uLL;
      if ( !piecePlaceData )
        break;
      this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_int__uint___TryGetValue(
                                    piecePlaceData,
                                    v19,
                                    &value,
                                    (const MethodInfo_2E99840 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v28 = value;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        this = (WarBoardAIRoute_o *)WarBoardAIManager__GetPieceUnique(v28, v27);
        if ( basePiece->fields._uniqueIndex_k__BackingField != value )
        {
          v30 = this;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          }
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsAllyPiece(basePiece, (WarBoardPieceData_o *)v30, v29);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v30 )
              break;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v30, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              v18 |= 0x800000000uLL;
          }
        }
      }
      LODWORD(v15) = linkedSquares->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        return v18;
    }
LABEL_52:
    sub_B0D97C(this);
  }
  return 1LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
        WarBoardAIRoute_o *this,
        int32_t baseSquareIndex,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicOutOfWarningAreaRange; // x0
  System_Collections_Generic_Dictionary_int__int__o *v10; // x8

  if ( (byte_4212B2A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&baseSquareIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    byte_4212B2A = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0LL) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_2E69AB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          actionSquareIndex,
          (const MethodInfo_2E69AB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                    dicOutOfWarningAreaRange,
                                                                                    baseSquareIndex,
                                                                                    (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( (int)dicOutOfWarningAreaRange > System_Collections_Generic_Dictionary_int__int___get_Item(
                                         this->fields.dicOutOfWarningAreaRange,
                                         actionSquareIndex,
                                         (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange
    || (dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                          dicOutOfWarningAreaRange,
                                                                                          baseSquareIndex,
                                                                                          (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v10 = this->fields.dicOutOfWarningAreaRange) == 0LL) )
  {
LABEL_18:
    sub_B0D97C(dicOutOfWarningAreaRange);
  }
  if ( (_DWORD)dicOutOfWarningAreaRange == System_Collections_Generic_Dictionary_int__int___get_Item(
                                             v10,
                                             actionSquareIndex,
                                             (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 2;
  else
    return 3;
}


int32_t __fastcall WarBoardAIRoute__GetMasterSquareIndex(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w9
  _BOOL8 v13; // x0
  struct WarBoardAIRoute_AIRouteMasterData_o *v14; // x8
  int32_t key; // w20
  int v16; // w19
  __int128 v17[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v18; // [xsp+20h] [xbp-40h] BYREF

  v4 = this;
  if ( (byte_4212B18 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, piecePlaceData);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v8);
    this = (WarBoardAIRoute_o *)sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v9);
    byte_4212B18 = 1;
  }
  memset(&v18, 0, 32);
  aiRouteMasterData = v4->fields.aiRouteMasterData;
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
    sub_B0D97C(this);
  System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v17,
    piecePlaceData,
    (const MethodInfo_2E981A4 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
  *(_OWORD *)&v18.fields.dictionary = v17[0];
  v18.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v17[1];
  while ( 1 )
  {
    v13 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
            &v18,
            (const MethodInfo_2812868 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    if ( !v13 )
      break;
    v14 = v4->fields.aiRouteMasterData;
    if ( !v14 )
      sub_B0D97C(v13);
    key = (int32_t)v18.fields.current.fields.key;
    if ( v14->fields.masterUniqueIndex == HIDWORD(v18.fields.current.fields.key) )
    {
      v16 = 3;
      goto LABEL_15;
    }
  }
  key = 0;
  v16 = 1;
LABEL_15:
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &v18,
    (const MethodInfo_28129B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
  if ( (unsigned int)(v16 + 1) >> 2 )
    return key;
  else
    return 0;
}


int32_t __fastcall WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppClass *klass; // x8
  System_Func_KeyValuePair_int__uint___bool__o *v11; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4212B33 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____, piecePlaceData);
    sub_B0D8A4(&Method_System_Func_KeyValuePair_int__uint___bool___ctor__, v5);
    sub_B0D8A4(&System_Func_KeyValuePair_int__uint___bool__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v7);
    this = (WarBoardAIRoute_o *)sub_B0D8A4(&Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__, v8);
    byte_4212B33 = 1;
  }
  klass = v4[13].klass;
  if ( !klass )
    sub_B0D97C(this);
  if ( LODWORD(klass->_1.name) == 1 )
    return HIDWORD(klass->_1.name);
  v11 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_B0D974(
                                                          System_Func_KeyValuePair_int__uint___bool__TypeInfo,
                                                          piecePlaceData,
                                                          method);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v11,
    v4,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    (const MethodInfo_260B6F4 *)Method_System_Func_KeyValuePair_int__uint___bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_1B4BD6C *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetMoveByTargetDistance(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData,
        int32_t actionSquareIndex,
        WarBoardPieceData_o *basePiece,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *currentValue; // x19
  WarBoardPieceData_o *monitor; // x22
  const MethodInfo *v17; // x2
  int32_t v18; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  int32_t v20; // w22
  int32_t v21; // w0
  int32_t v22; // w2
  int v23; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x22
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  int32_t v26; // w23
  int32_t v27; // w0
  int v28; // w8
  _BOOL8 v29; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v31; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4212B35 & 1) == 0 )
  {
    sub_B0D8A4(&AStarSearch_TypeInfo, dicKeyPutIndexValueTargetData);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v10);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v11);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__,
      v13);
    this = (WarBoardAIRoute_o *)sub_B0D8A4(&WarBoardAIManager_TypeInfo, v14);
    byte_4212B35 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !dicKeyPutIndexValueTargetData
    || (v31 = dicKeyPutIndexValueTargetData,
        (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___get_Values(
                                       dicKeyPutIndexValueTargetData,
                                       (const MethodInfo_2EB9920 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0LL) )
  {
    sub_B0D97C(this);
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v32,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_22D5E94 *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v29 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v33,
            (const MethodInfo_281A3E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v29 )
      break;
    currentValue = v33.fields.currentValue;
    if ( !v33.fields.currentValue )
      sub_B0D97C(v29);
    monitor = (WarBoardPieceData_o *)v33.fields.currentValue[1].monitor;
    if ( !monitor || LODWORD(v33.fields.currentValue[4].monitor) != actionSquareIndex )
      goto LABEL_14;
    if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    }
    if ( WarBoardAIManager__IsAllyPiece(basePiece, monitor, v17) )
    {
      LODWORD(currentValue[4].klass) = 2;
    }
    else
    {
LABEL_14:
      v18 = (int32_t)currentValue[4].monitor;
      if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AStarSearch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      }
      v19 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v18,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v20 = System_Linq_Enumerable__Count_int_(
              v19,
              (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
      v21 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
      v22 = (int32_t)currentValue[4].monitor;
      if ( v20 == v21 )
        v23 = 2;
      else
        v23 = 3;
      if ( v20 < v21 )
        v23 = 1;
      LODWORD(currentValue[4].klass) = v23;
      v24 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v22,
                                                                   1,
                                                                   0LL,
                                                                   0LL);
      if ( v24 && (klass = (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[6].klass) != 0LL )
      {
        v26 = System_Linq_Enumerable__Count_int_(
                klass,
                (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
        v27 = System_Linq_Enumerable__Count_int_(
                v24,
                (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
        if ( v27 >= v26 )
        {
          if ( v27 == v26 )
            v28 = 2;
          else
            v28 = 3;
        }
        else
        {
          v28 = 1;
        }
      }
      else
      {
        v28 = 0;
      }
      HIDWORD(currentValue[4].klass) = v28;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v33,
    (const MethodInfo_281A3E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
  return v31;
}


int32_t __fastcall WarBoardAIRoute__GetRangeShortMost(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *dicPieceList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w19
  int32_t key; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  int32_t v15; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4212B1C & 1) == 0 )
  {
    sub_B0D8A4(&AStarSearch_TypeInfo, dicPieceList);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v10);
    this = (WarBoardAIRoute_o *)sub_B0D8A4(
                                  &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                  v11);
    byte_4212B1C = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !dicPieceList )
    sub_B0D97C(this);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)dicPieceList,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v12 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v18,
            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v18.fields.current.fields.key;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                 0LL,
                                                                 baseSquareIndex,
                                                                 key,
                                                                 0,
                                                                 0LL,
                                                                 0LL);
    v15 = System_Linq_Enumerable__Count_int_(
            v14,
            (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v12 > v15 || v12 == -1 )
      v12 = v15;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v18,
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  return v12;
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_uint__int__o *v19; // x19
  __int64 v20; // x0
  _BOOL8 v21; // x0
  WarBoardAIRoute_RouteData_o *current; // x24
  _BOOL8 HasFlag; // x0
  struct WarBoardPieceData_o *basePiece; // x8
  bool v25; // zf
  int32_t *v26; // x8
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *v28; // x8
  int32_t *v29; // x8
  uint32_t uniqueIndex_k__BackingField; // w24
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-70h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_4212B17 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__, routeDataList);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__, v13);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v18);
    byte_4212B17 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  value = 0;
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  v19 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B0D974(
                                                                System_Collections_Generic_Dictionary_uint__int__TypeInfo,
                                                                routeDataList,
                                                                replaceCount);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v19,
    (const MethodInfo_2E23E24 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_B0D97C(v20);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)routeDataList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v21 )
      break;
    current = (WarBoardAIRoute_RouteData_o *)v33.fields.current;
    if ( !v33.fields.current )
      sub_B0D97C(v21);
    if ( !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v33.fields.current, 0LL) )
    {
      value = 0;
      HasFlag = WarBoardAIRoute_RouteData__HasFlag(current, 0x4000000LL, 0LL);
      basePiece = current->fields.basePiece;
      if ( HasFlag )
      {
        if ( !basePiece )
          sub_B0D97C(HasFlag);
        v25 = basePiece->fields._type_k__BackingField == 1;
        v26 = masterReplaceCount;
        if ( !v25 )
        {
          actionPiece = current->fields.actionPiece;
          if ( !actionPiece )
            sub_B0D97C(HasFlag);
          if ( actionPiece->fields._type_k__BackingField == 1 )
            v26 = masterReplaceCount;
          else
            v26 = replaceCount;
        }
        ++*v26;
        v28 = current->fields.actionPiece;
        if ( !v28 )
          sub_B0D97C(HasFlag);
      }
      else
      {
        if ( !basePiece )
          sub_B0D97C(HasFlag);
        if ( basePiece->fields._type_k__BackingField == 1 )
          v29 = masterActionCount;
        else
          v29 = actionCount;
        ++*v29;
        v28 = current->fields.basePiece;
        if ( !v28 )
          sub_B0D97C(HasFlag);
      }
      if ( !v19 )
        sub_B0D97C(HasFlag);
      uniqueIndex_k__BackingField = v28->fields._uniqueIndex_k__BackingField;
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v19,
        uniqueIndex_k__BackingField,
        &value,
        (const MethodInfo_2E265D8 *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v19,
        uniqueIndex_k__BackingField,
        value + 1,
        (const MethodInfo_2E249A0 *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
  return v19;
}


int32_t __fastcall WarBoardAIRoute__GetRouteSumPieceActionCost(
        WarBoardAIRoute_o *this,
        System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *routeDataList,
        WarBoardPieceData_o *targetPiece,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v20; // x20

  if ( (byte_4212B36 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____67992144, routeDataList);
    sub_B0D8A4(&Method_System_Func_WarBoardAIRoute_RouteData__int___ctor__, v6);
    sub_B0D8A4(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo, v7);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__, v8);
    sub_B0D8A4(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo, v9);
    byte_4212B36 = 1;
  }
  v10 = sub_B0D974(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo, routeDataList, targetPiece);
  WarBoardAIRoute___c__DisplayClass84_0___ctor((WarBoardAIRoute___c__DisplayClass84_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  *(_QWORD *)(v10 + 16) = targetPiece;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v10 + 16),
    (System_Int32_array **)targetPiece,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v20 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                          System_Func_WarBoardAIRoute_RouteData__int__TypeInfo,
                                                                          v18,
                                                                          v19);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v20,
    (Il2CppObject *)v10,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    (const MethodInfo_2619564 *)Method_System_Func_WarBoardAIRoute_RouteData__int___ctor__);
  return System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v20,
           (const MethodInfo_1B55828 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____67992144);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *key; // x24
  Il2CppObject *value; // x25
  WarBoardPieceData_array *allEnemyPiece; // x27
  WarBoardAIRoute_TargetData_o *v27; // x26
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+30h] [xbp-80h] BYREF

  v12 = this;
  if ( (byte_4212B24 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__, dicPutSquareIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__, v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v14);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v15);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v16);
    sub_B0D8A4(&Method_System_Func_IWarBoardObjectData__bool__Invoke__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v19);
    this = (WarBoardAIRoute_o *)sub_B0D8A4(&WarBoardAIRoute_TargetData_TypeInfo, v20);
    byte_4212B24 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !dicPutSquareIndex )
    sub_B0D97C(this);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v28,
    dicPutSquareIndex,
    (const MethodInfo_2EBA15C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v21 = System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v29,
            (const MethodInfo_2819A88 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v21 )
      break;
    key = v29.fields.current.fields.key;
    value = v29.fields.current.fields.value;
    if ( excludeCond )
    {
      if ( !v29.fields.current.fields.value )
        sub_B0D97C(v21);
      if ( System_Func_BattleBuffData_BuffData__bool___Invoke(
             (System_Func_BattleBuffData_BuffData__bool__o *)excludeCond,
             (BattleBuffData_BuffData_o *)v29.fields.current.fields.value[3].monitor,
             (const MethodInfo_26189CC *)Method_System_Func_IWarBoardObjectData__bool__Invoke__) )
      {
        continue;
      }
    }
    allEnemyPiece = v12->fields.allEnemyPiece;
    v27 = (WarBoardAIRoute_TargetData_o *)sub_B0D974(WarBoardAIRoute_TargetData_TypeInfo, v22, v23);
    WarBoardAIRoute_TargetData___ctor_20581024(
      v27,
      (WarBoardAIRoute_TargetData_o *)value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      0LL);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_B0D97C(0LL);
    System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
      *dicKeyPutIndexValueTargetData,
      (int64_t)key,
      v27,
      (const MethodInfo_2EB9B7C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v29,
    (const MethodInfo_2819BF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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
  __int64 v39; // x21
  __int64 v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x1
  __int64 v54; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v55; // x22
  const MethodInfo *v56; // x2
  WarBoardAiTargetCacher_o *aiTargetCacher; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  TargetDetector_o *DetectorByTrendKey; // x0
  int32_t Id_k__BackingField; // w27
  const MethodInfo *v61; // x2
  System_Collections_Generic_IEnumerable_TSource__o *Item; // x0
  WarBoardAiTargetCacher_o *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  System_Collections_Generic_IEnumerable_TSource__o *TargetObjectsByTrendId; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *klass; // x23
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x1
  __int64 v75; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x28
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v77; // x23
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x1
  __int64 v85; // x2
  System_Linq_IOrderedEnumerable_TSource__o *v86; // x28
  WarBoardAIRoute___c_c *v87; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__64_2; // x23
  Il2CppObject *v90; // x19
  struct WarBoardAIRoute___c_StaticFields *v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  __int64 v98; // x1
  __int64 v99; // x2
  System_Linq_IOrderedEnumerable_TSource__o *v100; // x28
  WarBoardAIRoute___c_c *v101; // x0
  struct WarBoardAIRoute___c_StaticFields *v102; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__64_3; // x23
  Il2CppObject *v104; // x19
  struct WarBoardAIRoute___c_StaticFields *v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v112; // x0
  __int64 v113; // x1
  __int64 v114; // x2
  WarBoardPieceData_o *v115; // x27
  int32_t v116; // w24
  WarBoardPieceData_array *allEnemyPiece; // x19
  WarBoardAIRoute_TargetData_o *v118; // x23
  BattleServantConfConponent_o *v119; // [xsp+0h] [xbp-C0h]
  BattleServantConfConponent_o *v120; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v122; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v123; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4212B25 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__,
      dicIndividualityPutSqareIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__, v17);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo, v18);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___, v19);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___, v20);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___, v21);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v22);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v23);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v24);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v25);
    sub_B0D8A4(&Method_System_Func_IWarBoardObjectData__int___ctor__, v26);
    sub_B0D8A4(&Method_System_Func_IWarBoardObjectData__bool___ctor__, v27);
    sub_B0D8A4(&System_Func_IWarBoardObjectData__int__TypeInfo, v28);
    sub_B0D8A4(&System_Func_IWarBoardObjectData__bool__TypeInfo, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v31);
    sub_B0D8A4(&WarBoardAIRoute_TargetData_TypeInfo, v32);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__, v33);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__, v34);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__, v35);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__, v36);
    sub_B0D8A4(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo, v37);
    sub_B0D8A4(&WarBoardAIRoute___c_TypeInfo, v38);
    byte_4212B25 = 1;
  }
  memset(&v123, 0, sizeof(v123));
  v39 = sub_B0D974(WarBoardAIRoute___c__DisplayClass64_0_TypeInfo, dicIndividualityPutSqareIndex, excludeCond);
  WarBoardAIRoute___c__DisplayClass64_0___ctor((WarBoardAIRoute___c__DisplayClass64_0_o *)v39, 0LL);
  if ( !v39
    || (*(_QWORD *)(v39 + 16) = excludeCond,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v39 + 16),
          (System_Int32_array **)excludeCond,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46),
        *(_QWORD *)(v39 + 24) = basePiece,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v39 + 24),
          (System_Int32_array **)basePiece,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52),
        *(_DWORD *)(v39 + 32) = baseSquareIndex,
        v55 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo, v53, v54),
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
          v55,
          (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__),
        !dicIndividualityPutSqareIndex) )
  {
    sub_B0D97C(v40);
  }
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v122,
    dicIndividualityPutSqareIndex,
    (const MethodInfo_2EBA15C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v120 = (BattleServantConfConponent_o *)(v39 + 40);
  v123 = v122;
  v119 = (BattleServantConfConponent_o *)(v39 + 48);
  while ( System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v123,
            (const MethodInfo_2819A88 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_B0D97C(0LL);
    current = v123.fields.current;
    DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(
                           aiTargetCacher,
                           (int64_t)v123.fields.current.fields.key,
                           v56);
    if ( DetectorByTrendKey )
    {
      Id_k__BackingField = DetectorByTrendKey->fields._Id_k__BackingField;
      if ( !v55 )
        goto LABEL_45;
    }
    else
    {
      Id_k__BackingField = 0;
      if ( !v55 )
LABEL_45:
        sub_B0D97C(DetectorByTrendKey);
    }
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v55,
           Id_k__BackingField,
           (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                    v55,
                                                                    Id_k__BackingField,
                                                                    (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
LABEL_37:
      TargetObjectsByTrendId = Item;
      goto LABEL_38;
    }
    v63 = this->fields.aiTargetCacher;
    if ( !v63 )
      sub_B0D97C(0LL);
    TargetObjectsByTrendId = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardAiTargetCacher__GetTargetObjectsByTrendId(
                                                                                    v63,
                                                                                    (int64_t)current.fields.key,
                                                                                    v61);
    if ( TargetObjectsByTrendId )
    {
      klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v120->klass;
      if ( !v120->klass )
      {
        klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_IWarBoardObjectData__bool__TypeInfo,
                                                                                     v64,
                                                                                     v65);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          klass,
          (Il2CppObject *)v39,
          Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
          (const MethodInfo_26189B8 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
        v120->klass = (BattleServantConfConponent_c *)klass;
        sub_B0D840(v120, (System_Int32_array **)klass, v68, v69, v70, v71, v72, v73);
      }
      v76 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              TargetObjectsByTrendId,
              (System_Func_TSource__bool__o *)klass,
              (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
      v77 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v119->klass;
      if ( !v119->klass )
      {
        v77 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_IWarBoardObjectData__int__TypeInfo,
                                                                                v74,
                                                                                v75);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          v77,
          (Il2CppObject *)v39,
          Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
          (const MethodInfo_2619564 *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v119->klass = (BattleServantConfConponent_c *)v77;
        sub_B0D840(v119, (System_Int32_array **)v77, v78, v79, v80, v81, v82, v83);
      }
      v86 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
              v76,
              (System_Func_TSource__TKey__o *)v77,
              (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
      v87 = WarBoardAIRoute___c_TypeInfo;
      if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
        v87 = WarBoardAIRoute___c_TypeInfo;
      }
      static_fields = v87->static_fields;
      _9__64_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__64_2;
      if ( !_9__64_2 )
      {
        if ( (BYTE3(v87->vtable._0_Equals.methodPtr) & 4) != 0 && !v87->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v87);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
        }
        v90 = (Il2CppObject *)static_fields->__9;
        _9__64_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                     System_Func_IWarBoardObjectData__int__TypeInfo,
                                                                                     v84,
                                                                                     v85);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__64_2,
          v90,
          Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
          (const MethodInfo_2619564 *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v91 = WarBoardAIRoute___c_TypeInfo->static_fields;
        v91->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v91->__9__64_2,
          (System_Int32_array **)_9__64_2,
          v92,
          v93,
          v94,
          v95,
          v96,
          v97);
      }
      v100 = System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
               v86,
               (System_Func_TSource__TKey__o *)_9__64_2,
               (const MethodInfo_1B55AEC *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
      v101 = WarBoardAIRoute___c_TypeInfo;
      if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
        v101 = WarBoardAIRoute___c_TypeInfo;
      }
      v102 = v101->static_fields;
      _9__64_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v102->__9__64_3;
      if ( !_9__64_3 )
      {
        if ( (BYTE3(v101->vtable._0_Equals.methodPtr) & 4) != 0 && !v101->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v101);
          v102 = WarBoardAIRoute___c_TypeInfo->static_fields;
        }
        v104 = (Il2CppObject *)v102->__9;
        _9__64_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                     System_Func_IWarBoardObjectData__int__TypeInfo,
                                                                                     v98,
                                                                                     v99);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__64_3,
          v104,
          Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
          (const MethodInfo_2619564 *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v105 = WarBoardAIRoute___c_TypeInfo->static_fields;
        v105->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v105->__9__64_3,
          (System_Int32_array **)_9__64_3,
          v106,
          v107,
          v108,
          v109,
          v110,
          v111);
      }
      v112 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                    v100,
                                                                    (System_Func_TSource__TKey__o *)_9__64_3,
                                                                    (const MethodInfo_1B55AEC *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                                    v112,
                                                                    (const MethodInfo_1B4B938 *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
      goto LABEL_37;
    }
LABEL_38:
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v55,
      Id_k__BackingField,
      (WarBoardAIRoute_RouteData_o *)TargetObjectsByTrendId,
      (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( TargetObjectsByTrendId )
    {
      v115 = *(WarBoardPieceData_o **)(v39 + 24);
      v116 = *(_DWORD *)(v39 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v118 = (WarBoardAIRoute_TargetData_o *)sub_B0D974(WarBoardAIRoute_TargetData_TypeInfo, v113, v114);
      WarBoardAIRoute_TargetData___ctor_20582112(
        v118,
        (WarBoardAIRoute_TargetData_o *)current.fields.value,
        (IWarBoardObjectData_o *)TargetObjectsByTrendId,
        v115,
        v116,
        allEnemyPiece,
        0LL);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_B0D97C(0LL);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
        *dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        v118,
        (const MethodInfo_2EB9B7C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_B0D97C(0LL);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Remove(
        *dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        (const MethodInfo_2EBB54C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v123,
    (const MethodInfo_2819BF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetTargetToDistance_21104000(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x22
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *dicUniqueKeyTarget; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  WarBoardAIRoute_PutSquareTarget_o *Item; // x24
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v26; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x26
  const MethodInfo *v31; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicIndividualityPutSqareIndex; // x25
  __int64 v33; // x1
  __int64 v34; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x26
  const MethodInfo *v36; // x6
  const MethodInfo *v37; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4212B26 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__, basePiece);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Func_IWarBoardObjectData__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_IWarBoardObjectData__bool__TypeInfo, v12);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__, v13);
    sub_B0D8A4(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo, v14);
    byte_4212B26 = 1;
  }
  dicKeyPutIndexValueTargetData = 0LL;
  v15 = sub_B0D974(WarBoardAIRoute___c__DisplayClass65_0_TypeInfo, basePiece, routeDataList);
  WarBoardAIRoute___c__DisplayClass65_0___ctor((WarBoardAIRoute___c__DisplayClass65_0_o *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = routeDataList,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v15 + 16),
          (System_Int32_array **)routeDataList,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        !basePiece)
    || (dicUniqueKeyTarget = this->fields.dicUniqueKeyTarget) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                 dicUniqueKeyTarget,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_2E284C4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v26 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B0D974(
                                                                                             System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                                             v24,
                                                                                             v25),
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
          v26,
          (const MethodInfo_2EB8FCC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = v26,
        !Item) )
  {
    sub_B0D97C(dicUniqueKeyTarget);
  }
  dicObjectPutSquareIndex = Item->fields.dicObjectPutSquareIndex;
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_IWarBoardObjectData__bool__TypeInfo,
                                                                             v27,
                                                                             v28);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v15,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    (const MethodInfo_26189B8 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    dicObjectPutSquareIndex,
    (System_Func_IWarBoardObjectData__bool__o *)v30,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v31);
  dicIndividualityPutSqareIndex = Item->fields.dicIndividualityPutSqareIndex;
  v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_IWarBoardObjectData__bool__TypeInfo,
                                                                             v33,
                                                                             v34);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v35,
    (Il2CppObject *)v15,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    (const MethodInfo_26189B8 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
  WarBoardAIRoute__GetTargetToDistanceUsingIndividuality(
    this,
    dicIndividualityPutSqareIndex,
    (System_Func_IWarBoardObjectData__bool__o *)v35,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v36);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    Item->fields.dicSquarePutSqareIndex,
    0LL,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v37);
  return v26;
}


float __fastcall WarBoardAIRoute__GetThinkingThreshold(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_B0D97C(this);
  return (float)npcData->fields.lowerThinkingValue / 100.0;
}


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
  if ( (byte_4212B2D & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, basePiece);
    byte_4212B2D = 1;
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
    this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
      return SHIDWORD(this[3].fields.allAllyPiece) >= v13 + requiredCost;
LABEL_13:
    sub_B0D97C(this);
  }
  return 0;
}


bool __fastcall WarBoardAIRoute__IsActableReplace(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        WarBoardPieceData_o *actionPiece,
        int32_t requiredCost,
        System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t sumPieceActionCost,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  WarBoardPieceData_o *Instance; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  WarBoardPieceData_o **v26; // x25
  bool v27; // w8
  const MethodInfo *v28; // x3
  int32_t RouteSumPieceActionCost; // w23
  __int64 v30; // x1
  __int64 v31; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v32; // x21
  __int64 v33; // x8

  if ( (byte_4212B31 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, basePiece);
    sub_B0D8A4(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v13);
    sub_B0D8A4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__, v16);
    sub_B0D8A4(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo, v17);
    byte_4212B31 = 1;
  }
  v18 = sub_B0D974(WarBoardAIRoute___c__DisplayClass76_0_TypeInfo, basePiece, actionPiece);
  WarBoardAIRoute___c__DisplayClass76_0___ctor((WarBoardAIRoute___c__DisplayClass76_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_25;
  *(_QWORD *)(v18 + 16) = actionPiece;
  v26 = (WarBoardPieceData_o **)(v18 + 16);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v18 + 16),
    (System_Int32_array **)actionPiece,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Instance = *(WarBoardPieceData_o **)(v18 + 16);
  if ( !Instance )
    goto LABEL_25;
  v27 = WarBoardPieceData__EnableSwapByOther(Instance, 0, 0LL);
  Instance = 0LL;
  if ( !v27 )
    return (char)Instance;
  if ( !basePiece )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(basePiece, 0LL) )
    goto LABEL_10;
  Instance = *v26;
  if ( !*v26 )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(Instance, 0LL) )
  {
LABEL_10:
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( *((_DWORD *)&Instance[2].fields._isNotIncludeWin_k__BackingField + 1) < this->fields.moveCost
                                                                               + requiredCost
                                                                               + this->fields.masterMoveCost )
      goto LABEL_23;
  }
  else
  {
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( *((_DWORD *)&Instance[2].fields._isNotIncludeWin_k__BackingField + 1) < requiredCost
                                                                               + 2 * this->fields.moveCost )
      goto LABEL_23;
  }
  RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                              (WarBoardAIRoute_o *)Instance,
                              routeDataList,
                              *v26,
                              v28);
  if ( !WarBoardPieceData__EnableMoveBySelf(basePiece, sumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v26;
  if ( !*v26 )
    goto LABEL_25;
  if ( !WarBoardPieceData__EnableSwapByOther(Instance, RouteSumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v26;
  if ( !*v26 )
LABEL_25:
    sub_B0D97C(Instance);
  if ( !WarBoardPieceData__get_isInfinitelyActable(Instance, 0LL) )
  {
    v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                                               v30,
                                                                               v31);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v32,
      (Il2CppObject *)v18,
      Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    Instance = (WarBoardPieceData_o *)System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
                                        (System_Func_TSource__bool__o *)v32,
                                        (const MethodInfo_1B48614 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    v33 = *(_QWORD *)(v18 + 16);
    if ( v33 )
    {
      if ( *(_DWORD *)(v33 + 36) > (int)Instance )
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  unsigned __int64 v11; // x20
  char i; // w21
  Il2CppObject *current; // x21
  void *monitor; // x9
  signed __int64 v15; // x24
  unsigned __int64 v16; // x25
  _BOOL8 v17; // x0
  __int64 v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-60h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4212B23 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, piecePlaceData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v9);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_B0D8A4(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v10);
    byte_4212B23 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !v6 )
    sub_B0D97C(shortestEnemyRoute);
  v11 = !isDefenseSquare;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v21 = v20;
  for ( i = 0; ; i = 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v17 )
      break;
    current = v21.fields.current;
    if ( !v21.fields.current )
      sub_B0D97C(v17);
    monitor = v21.fields.current[1].monitor;
    if ( (int)monitor - 1 <= (int)v11 )
    {
LABEL_17:
      i = 0;
      break;
    }
    if ( (unsigned int)v21.fields.current[1].monitor <= v11 )
    {
LABEL_20:
      v19 = sub_B0D9A8(v17);
      sub_B0D948(v19, 0LL);
    }
    v15 = (int)monitor - 1;
    v16 = v11;
    while ( 1 )
    {
      if ( !piecePlaceData )
        sub_B0D97C(v17);
      v17 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
              piecePlaceData,
              *((_DWORD *)&current[2].klass + v16),
              (const MethodInfo_2E97E94 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( v17 )
        break;
      if ( (__int64)++v16 >= v15 )
        goto LABEL_17;
      if ( v16 >= LODWORD(current[1].monitor) )
        goto LABEL_20;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4212B20 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    byte_4212B20 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !defenseArea )
    sub_B0D97C(v7);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int v15; // w22
  bool v16; // w21
  _BOOL8 v17; // x0
  Il2CppClass *klass; // x0
  unsigned int monitor; // w9
  __int64 v20; // x11
  _BOOL8 v21; // x0
  int v22; // w8
  int v23; // w28
  int v24; // w25
  int v25; // w8
  __int64 v26; // x0
  int v27; // w9
  _WORD v29[26]; // [xsp+8h] [xbp-D8h] BYREF
  int v30; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+60h] [xbp-80h] BYREF

  v6 = allShortestRoute;
  if ( (byte_4212B22 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__,
      *(_QWORD *)&index);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__,
      v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v9);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__,
      v10);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__,
      v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__,
      v13);
    allShortestRoute = (System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int____GetEnumerator__, v14);
    byte_4212B22 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  memset(&v32, 0, sizeof(v32));
  v30 = 0;
  if ( !v6 )
    sub_B0D97C(allShortestRoute);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v29,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v6,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v32 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v29;
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v32,
            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    if ( !v17 )
      break;
    if ( !v32.fields.current.fields.value )
      sub_B0D97C(v17);
    klass = v32.fields.current.fields.value[1].klass;
    if ( !klass )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v29,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v31 = *(System_Collections_Generic_List_Enumerator_T__o *)v29;
    do
    {
LABEL_13:
      v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v31,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v21 )
      {
        *(_DWORD *)&v29[2 * v15 + 20] = 117;
        v22 = v30;
        goto LABEL_17;
      }
      if ( !v31.fields.current )
        sub_B0D97C(v21);
      monitor = (unsigned int)v31.fields.current[1].monitor;
      v20 = !isDefenseSquare;
    }
    while ( (int)(monitor - 1) <= !isDefenseSquare );
    while ( 1 )
    {
      if ( (unsigned int)v20 >= monitor )
      {
        v26 = sub_B0D9A8(v21);
        sub_B0D948(v26, 0LL);
      }
      if ( *((_DWORD *)&v31.fields.current[2].klass + v20) == index )
        break;
      if ( (int)++v20 >= (int)(monitor - 1) )
        goto LABEL_13;
    }
    *(_DWORD *)&v29[2 * v15 + 20] = 144;
    v22 = v30;
    v16 = 1;
LABEL_17:
    v23 = v22 + 1;
    v30 = v22 + 1;
    v24 = v22 + 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v31,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v15 = 0;
    if ( v24 )
    {
      v15 = v24 - 1;
      v25 = *(_DWORD *)&v29[2 * v24 + 18];
      if ( v25 == 117 )
      {
        v30 = v24 - 1;
      }
      else
      {
        v15 = v24;
        if ( v25 == 144 )
          goto LABEL_25;
      }
    }
  }
  *(_DWORD *)&v29[2 * v15 + 20] = 142;
  v23 = ++v30;
LABEL_25:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v32,
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
  if ( !v23 )
    return 0;
  v27 = *(_DWORD *)&v29[2 * v23 + 18];
  if ( v27 == 142 )
  {
    v16 = 0;
    goto LABEL_30;
  }
  if ( v27 == 144 )
  {
LABEL_30:
    v30 = v23 - 1;
    return v16;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _BOOL8 v10; // x20
  unsigned int monitor; // w9
  __int64 v12; // x11
  _BOOL8 v13; // x0
  int v14; // w19
  int v15; // w20
  __int64 v17; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4212B21 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_B0D8A4(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v9);
    byte_4212B21 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !v6 )
    sub_B0D97C(shortestEnemyRoute);
  v10 = !isDefenseSquare;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  do
  {
LABEL_10:
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
    {
      v14 = 0;
      v15 = 1;
      goto LABEL_13;
    }
    if ( !v19.fields.current )
      sub_B0D97C(v13);
    monitor = (unsigned int)v19.fields.current[1].monitor;
    v12 = v10;
  }
  while ( (int)(monitor - 1) <= v10 );
  while ( 1 )
  {
    if ( (unsigned int)v12 >= monitor )
    {
      v17 = sub_B0D9A8(v13);
      sub_B0D948(v17, 0LL);
    }
    if ( *((_DWORD *)&v19.fields.current[2].klass + v12) == index )
      break;
    if ( (int)++v12 >= (int)(monitor - 1) )
      goto LABEL_10;
  }
  v14 = 1;
  v15 = 3;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v14 & ((unsigned int)(v15 + 1) >> 2);
}


bool __fastcall WarBoardAIRoute__IsDetour(
        System_Int32_array *route,
        System_Int32_array *blockPieces,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int32_t v18; // w0
  __int64 v19; // x1
  __int64 v20; // x2
  int v21; // w23
  System_Func_int__bool__o **v22; // x21
  System_Func_int__bool__o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int v30; // w8

  if ( (byte_4212B1F & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, blockPieces);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v5);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__, v8);
    sub_B0D8A4(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo, v9);
    byte_4212B1F = 1;
  }
  v10 = sub_B0D974(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo, blockPieces, method);
  WarBoardAIRoute___c__DisplayClass58_0___ctor((WarBoardAIRoute___c__DisplayClass58_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  *(_QWORD *)(v10 + 16) = route;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)route, v12, v13, v14, v15, v16, v17);
  v18 = System_Linq_Enumerable__Count_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v10 + 16),
          (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v18 < 2 )
    return 0;
  v21 = v18 - 1;
  *(_DWORD *)(v10 + 24) = 1;
  if ( v18 - 1 < 2 )
    return 0;
  v22 = (System_Func_int__bool__o **)(v10 + 32);
  while ( 1 )
  {
    v23 = *v22;
    if ( !*v22 )
    {
      v23 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v19, v20);
      System_Func_int__bool____ctor(
        v23,
        (Il2CppObject *)v10,
        Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
        (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
      *(_QWORD *)(v10 + 32) = v23;
      sub_B0D840((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
    }
    if ( BasicHelper__Any_int__24145568(
           blockPieces,
           (System_Func_T__bool__o *)v23,
           (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312) )
    {
      break;
    }
    v30 = *(_DWORD *)(v10 + 24) + 1;
    *(_DWORD *)(v10 + 24) = v30;
    if ( v30 >= v21 )
      return 0;
  }
  return 1;
}


bool __fastcall WarBoardAIRoute__IsThinkingThreshold(WarBoardAIRoute_o *this, float v, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_B0D97C(this);
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
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardData_o *Square; // x0
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  unsigned __int64 v15; // x25
  int32_t v16; // w22
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  __int64 v19; // x0
  uint32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4212B30 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, *(_QWORD *)&actionSquareIndex);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B0D8A4(&WarBoardAIManager_TypeInfo, v11);
    byte_4212B30 = 1;
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
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)entries )
      {
        v19 = sub_B0D9A8(Square);
        sub_B0D948(v19, 0LL);
      }
      if ( !piecePlaceData )
        break;
      v16 = *(&npcEntityDict->fields.count + v15);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v16,
             &value,
             (const MethodInfo_2E99840 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Square = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)Square[1].fields.reinforcementsSaveList;
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardData__GetPiece_22114396(Square, value, 1, 0LL);
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
      Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v16, v17);
      if ( Square )
      {
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v16, v18);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0LL);
        if ( ((unsigned __int8)Square & 1) != 0 )
          ++*attackByLinkEnemy;
      }
      LODWORD(entries) = npcEntityDict->fields.entries;
      if ( (__int64)++v15 >= (int)entries )
        return;
    }
LABEL_30:
    sub_B0D97C(Square);
  }
}


void __fastcall WarBoardAIRoute__LinkedPieceCount(
        WarBoardAIRoute_o *this,
        WarBoardAIRoute_RouteData_o **routeData,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        System_Collections_Generic_List_int__o *alreadyGetItemSquares,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardAIRoute_RouteData_o *v11; // x8
  struct WarBoardSquareData_o *actionSquare; // x9
  struct System_Int32_array *linkedSquares; // x26
  struct WarBoardPieceData_o *basePiece; // x22
  unsigned __int64 v15; // x27
  il2cpp_array_size_t max_length; // w8
  int32_t v17; // w24
  WarBoardPieceData_o *v18; // x1
  const MethodInfo *v19; // x4
  struct System_Collections_Generic_List_WarBoardPieceData__o *moveByLinkedPiece; // x25
  WarBoardPieceData_o *v21; // x23
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  int32_t v24; // w24
  int32_t ClassId; // w25
  __int64 v26; // x0

  if ( (byte_4212B34 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, routeData);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B0D8A4(&SvtClassAttri_TypeInfo, v9);
    this = (WarBoardAIRoute_o *)sub_B0D8A4(&WarBoardAIManager_TypeInfo, v10);
    byte_4212B34 = 1;
  }
  v11 = *routeData;
  if ( !*routeData
    || (actionSquare = v11->fields.actionSquare) == 0LL
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0LL )
  {
LABEL_50:
    sub_B0D97C(this);
  }
  if ( (int)*(_QWORD *)&linkedSquares->max_length >= 1 )
  {
    basePiece = v11->fields.basePiece;
    v15 = 0LL;
    max_length = *(_QWORD *)&linkedSquares->max_length;
    do
    {
      if ( v15 >= max_length )
      {
        v26 = sub_B0D9A8(this);
        sub_B0D948(v26, 0LL);
      }
      v17 = linkedSquares->m_Items[v15 + 1];
      this = (WarBoardAIRoute_o *)WarBoardAIRoute__CanAcquireItem(
                                    this,
                                    v17,
                                    alreadyGetItemSquares,
                                    (const MethodInfo *)alreadyGetItemSquares);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*routeData )
          goto LABEL_50;
        ++(*routeData)->fields.moveByLinkedItem;
      }
      this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetActionPiece(this, v18, v17, piecePlaceData, v19);
      if ( this )
      {
        if ( !*routeData )
          goto LABEL_50;
        moveByLinkedPiece = (*routeData)->fields.moveByLinkedPiece;
        v21 = (WarBoardPieceData_o *)this;
        this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_50;
        this = (WarBoardAIRoute_o *)this[1].fields.npcData;
        if ( !this )
          goto LABEL_50;
        this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_22073600((WarBoardData_o *)this, v17, 0LL);
        if ( !moveByLinkedPiece )
          goto LABEL_50;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)moveByLinkedPiece,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( WarBoardAIManager__IsAllyPiece(basePiece, v21, v22)
          && (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v21, 0LL), ((unsigned __int8)this & 1) != 0) )
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
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v21, v23);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*routeData )
              goto LABEL_50;
            (*routeData)->fields.flagNow |= 0x40uLL;
            if ( WarBoardPieceData__get_isServant(v21, 0LL) )
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
                this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v21, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
                  if ( !this )
                    goto LABEL_50;
                  this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
                  if ( !v21->fields._battleServant_k__BackingField )
                    goto LABEL_50;
                  v24 = (int)this;
                  ClassId = BattleServantData__getClassId(v21->fields._battleServant_k__BackingField, 0LL);
                  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                  }
                  if ( SvtClassAttri__getMagnification(v24, ClassId, 0LL) > 1.0 )
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
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v21, 0LL);
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
      ++v15;
    }
    while ( (__int64)v15 < (int)max_length );
  }
}


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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  WarBoardAIRoute___c__DisplayClass46_0_o *v22; // x25
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x24
  peRenderTexture_ChangeLayerObject_o *v27; // x0
  peRenderTexture_ChangeLayerObject_c *klass; // x8
  IWarBoardObjectData_o *v29; // x23
  unsigned __int64 v30; // x10
  IWarBoardObjectData_c **p_offset; // x11
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  WarBoardAIRoute_TargetData_o *v35; // x22

  if ( (byte_4212B15 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__, targetDic);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v14);
    sub_B0D8A4(&IWarBoardObjectData_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__, v16);
    sub_B0D8A4(&Method_System_Predicate_IWarBoardObjectData___ctor__, v17);
    sub_B0D8A4(&System_Predicate_IWarBoardObjectData__TypeInfo, v18);
    sub_B0D8A4(&WarBoardAIRoute_TargetData_TypeInfo, v19);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__, v20);
    sub_B0D8A4(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo, v21);
    byte_4212B15 = 1;
  }
  v22 = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_B0D974(
                                                     WarBoardAIRoute___c__DisplayClass46_0_TypeInfo,
                                                     targetDic,
                                                     objectList);
  WarBoardAIRoute___c__DisplayClass46_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_17;
  v22->fields.squareIndex = squareIndex;
  *notSquareTarget = 0;
  if ( !targetDic )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ContainsKey(
         targetDic,
         v22->fields.squareIndex,
         (const MethodInfo_2EB9DF0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_IWarBoardObjectData__TypeInfo,
                                                                   v24,
                                                                   v25);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v26,
    (Il2CppObject *)v22,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_IWarBoardObjectData___ctor__);
  if ( !objectList )
LABEL_17:
    sub_B0D97C(v23);
  v27 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)objectList,
          (System_Predicate_T__o *)v26,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
  if ( v27 )
  {
    *notSquareTarget = 1;
    klass = v27->klass;
    v29 = (IWarBoardObjectData_o *)v27;
    if ( *(_WORD *)&v27->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v30;
        p_offset += 2;
        if ( v30 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      v32 = (__int64)(&klass->vtable._2_GetHashCode.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_12:
      v32 = sub_AA67A0(v27, IWarBoardObjectData_TypeInfo, 2LL);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8)) & 1) != 0 )
    {
      v35 = (WarBoardAIRoute_TargetData_o *)sub_B0D974(WarBoardAIRoute_TargetData_TypeInfo, v33, v34);
      WarBoardAIRoute_TargetData___ctor_20580604(v35, v29, trendKey, conditionId, 0LL);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
        targetDic,
        trendKey,
        v35,
        (const MethodInfo_2EB9B54 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
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

  if ( (byte_4212B13 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__,
      *(_QWORD *)&aiId);
    byte_4212B13 = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_2E91E04 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
  WarBoardAIRoute__AddPiecePersonalityDic(this, aiId, pieceIndex, v8);
}


System_Collections_Generic_Dictionary_int__uint__o *__fastcall WarBoardAIRoute__UpdatePiecePlaceData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        WarBoardAIRoute_RouteData_o *routeData,
        int32_t baseSquareIndex,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__uint__o *v13; // x22
  _BOOL8 HasFlag; // x0
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *basePiece; // x8

  if ( (byte_4212B32 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__uint__Remove__, piecePlaceData);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___67822048, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v12);
    byte_4212B32 = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_B0D974(
                                                                System_Collections_Generic_Dictionary_int__uint__TypeInfo,
                                                                piecePlaceData,
                                                                routeData);
  System_Collections_Generic_Dictionary_int__uint____ctor_48853536(
    v13,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_2E97220 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___67822048);
  if ( !routeData )
    goto LABEL_12;
  HasFlag = WarBoardAIRoute_RouteData__HasFlag(routeData, 0x4000000LL, 0LL);
  if ( HasFlag )
  {
    actionPiece = routeData->fields.actionPiece;
    if ( actionPiece && v13 )
    {
      System_Collections_Generic_Dictionary_int__uint___set_Item(
        v13,
        baseSquareIndex,
        actionPiece->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_2E97C08 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_B0D97C(HasFlag);
  }
  if ( !v13 )
    goto LABEL_12;
  HasFlag = System_Collections_Generic_Dictionary_int__uint___Remove(
              v13,
              baseSquareIndex,
              (const MethodInfo_2E99528 *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v13,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_2E97C08 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v13;
}


bool __fastcall WarBoardAIRoute____ctor_b__42_0(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return WarBoardPieceData__get_IsReinforcement(x, 0LL)
      && x->fields._forceId_k__BackingField == this->fields.forceId
      && x->fields._groupId_k__BackingField == this->fields.groupId;
}


bool __fastcall WarBoardAIRoute___GetMasterSquareIndexFromPlaceData_b__78_0(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_KeyValuePair_int__uint__o x,
        const MethodInfo *method)
{
  uint32_t value; // x19^4
  WarBoardAIRoute_o *v4; // x20
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8

  value = x.fields.value;
  v4 = this;
  if ( (byte_4212B37 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, x);
    byte_4212B37 = 1;
  }
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    sub_B0D97C(this);
  return aiRouteMasterData->fields.masterUniqueIndex == value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute_AIRouteMasterData___ctor(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x23
  WebViewManager_o *Instance; // x0
  System_Int32_array *v15; // x8
  unsigned int v16; // w9
  unsigned int max_length; // w10
  unsigned int v18; // w23
  struct System_Collections_Generic_List_int____o *replaceDataList; // x20
  int32_t v20; // w25
  int32_t v21; // w24
  int basePanel; // w8
  __int64 v23; // x0
  System_Int32_array *data; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421267D & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&forceId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int_____ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int____TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_421267D = 1;
  }
  data = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_OWORD *)&this->fields.masterType = xmmword_32018E0;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_int____TypeInfo,
                                                                                                  v11,
                                                                                                  v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v13;
  sub_B0D840(&this->fields.replaceDataList, v13);
  this->fields.replacePriority = -1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = *(WebViewManager_o **)&Instance[4].fields.m_CachedPtr;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WebViewManager_o *)WarBoardData__IsDefenseTarget((WarBoardData_o *)Instance, &data, forceId, groupId, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  v15 = data;
  if ( !data )
LABEL_16:
    sub_B0D97C(Instance);
  v16 = 0;
  while ( 1 )
  {
    max_length = v15->max_length;
    if ( (int)v16 >= (int)max_length )
      break;
    if ( v16 >= max_length )
      goto LABEL_18;
    v18 = v16 + 1;
    if ( v16 + 1 >= max_length )
      goto LABEL_18;
    replaceDataList = this->fields.replaceDataList;
    v20 = v15->m_Items[v16 + 1];
    v21 = v15->m_Items[v18 + 1];
    Instance = (WebViewManager_o *)sub_B0D8BC(int___TypeInfo, 2LL);
    if ( !Instance )
      goto LABEL_16;
    basePanel = (int)Instance->fields.basePanel;
    if ( !basePanel || (LODWORD(Instance->fields.baseWindow) = v20, basePanel == 1) )
    {
LABEL_18:
      v23 = sub_B0D9A8(Instance);
      sub_B0D948(v23, 0LL);
    }
    HIDWORD(Instance->fields.baseWindow) = v21;
    if ( replaceDataList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)replaceDataList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_int____Add__);
      v15 = data;
      v16 = v18 + 1;
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
  __int64 v7; // x1
  uint32_t uniqueIndex_k__BackingField; // w8
  struct System_Collections_Generic_List_int____o *replaceDataList; // x25
  signed __int64 v10; // x22
  signed __int64 replacePriority; // x9
  System_Int32_array *v12; // x8
  unsigned int max_length; // w9
  int32_t v14; // w8
  __int64 v15; // x0

  v6 = this;
  if ( (byte_421267E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Count__, *(_QWORD *)&type);
    this = (WarBoardAIRoute_AIRouteMasterData_o *)sub_B0D8A4(
                                                    &Method_System_Collections_Generic_List_int____get_Item__,
                                                    v7);
    byte_421267E = 1;
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
      v10 = 0LL;
      do
      {
        if ( v10 >= replaceDataList->fields._size )
          return;
        replacePriority = v6->fields.replacePriority;
        if ( (_DWORD)replacePriority != -1 && v10 > replacePriority )
          return;
        if ( v10 >= (unsigned __int64)(unsigned int)replaceDataList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v12 = replaceDataList->fields._items->m_Items[v10];
        if ( type != 0 || pieceData == 0LL )
        {
          if ( type != 2 || pieceData == 0LL )
          {
            if ( type == 1 )
            {
              if ( !v12 )
                break;
              if ( !v12->max_length )
                goto LABEL_38;
              if ( v12->m_Items[1] == 1 )
              {
                v6->fields.masterType = 1;
                if ( v12->max_length <= 1 )
                {
LABEL_38:
                  v15 = sub_B0D9A8(this);
                  sub_B0D948(v15, 0LL);
                }
                v14 = v12->m_Items[2];
                v6->fields.replacePriority = v10;
                v6->fields.masterSquareIndex = v14;
                return;
              }
            }
          }
          else
          {
            if ( !v12 )
              break;
            max_length = v12->max_length;
            if ( !max_length )
              goto LABEL_38;
            if ( v12->m_Items[1] == 2 )
            {
              if ( max_length <= 1 )
                goto LABEL_38;
              if ( v12->m_Items[2] == pieceData->fields._index_k__BackingField )
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
          if ( !v12 )
            break;
          if ( !v12->max_length )
            goto LABEL_38;
          if ( !v12->m_Items[1] )
          {
            v6->fields.masterType = 0;
LABEL_35:
            uniqueIndex_k__BackingField = pieceData->fields._uniqueIndex_k__BackingField;
            v6->fields.replacePriority = v10;
            goto LABEL_36;
          }
        }
        replaceDataList = v6->fields.replaceDataList;
        ++v10;
      }
      while ( replaceDataList );
    }
LABEL_31:
    sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o **p_FutureTrendInfoList_k__BackingField; // x19
  const MethodInfo *v15; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v19; // x23
  WarBoardActionTrendMaster_o *HasMatchCondition; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  WarBoardActionTrendMaster_o *v24; // x20
  unsigned __int64 v25; // x24
  WarBoardActionTrendEntity_o *v26; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  WarBoardAIRoute_ActionTrendInfo_o *v28; // x23
  const MethodInfo *v29; // x2
  __int64 v30; // x0
  int32_t condType; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4212680 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, entity);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v11);
    sub_B0D8A4(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__, v12);
    byte_4212680 = 1;
  }
  condType = 0;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                                                                                                  entity,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v13;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_B0D840(&this->fields._FutureTrendInfoList_k__BackingField, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Entity_k__BackingField = entity;
  sub_B0D840(&this->fields, entity);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v15);
  v19 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B0D974(
                                                                                   System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo,
                                                                                   v17,
                                                                                   v18);
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
    v19,
    0LL,
    Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__,
    (const MethodInfo_26151B8 *)Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
  HasMatchCondition = (WarBoardActionTrendMaster_o *)WarBoardActionTrendConditionMaster__HasMatchCondition(
                                                       ConditionEntityArray,
                                                       v19,
                                                       &condType,
                                                       0LL);
  this->fields._HasTargetIndividualityCond_k__BackingField = (unsigned __int8)HasMatchCondition & 1;
  if ( !entity )
    goto LABEL_19;
  if ( !WarBoardActionTrendEntity__get_HasFutureTrend(entity, 0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  HasMatchCondition = (WarBoardActionTrendMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !HasMatchCondition
    || (HasMatchCondition = (WarBoardActionTrendMaster_o *)WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                                                             HasMatchCondition,
                                                             entity,
                                                             0LL)) == 0LL )
  {
LABEL_19:
    sub_B0D97C(HasMatchCondition);
  }
  MasterName_k__BackingField = HasMatchCondition->fields._MasterName_k__BackingField;
  v24 = HasMatchCondition;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v25 = 0LL;
    do
    {
      if ( v25 >= (unsigned int)MasterName_k__BackingField )
      {
        v30 = sub_B0D9A8(HasMatchCondition);
        sub_B0D948(v30, 0LL);
      }
      v26 = (WarBoardActionTrendEntity_o *)*((_QWORD *)&v24->fields.list + v25);
      if ( v26 )
      {
        v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_FutureTrendInfoList_k__BackingField;
        v28 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B0D974(WarBoardAIRoute_ActionTrendInfo_TypeInfo, v21, v22);
        WarBoardAIRoute_ActionTrendInfo___ctor(v28, v26, v29);
        if ( !v27 )
          goto LABEL_19;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v27,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
      LODWORD(MasterName_k__BackingField) = v24->fields._MasterName_k__BackingField;
      ++v25;
    }
    while ( (__int64)v25 < (int)MasterName_k__BackingField );
  }
}


WarBoardActionTrendConditionEntity_array *__fastcall WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardAIRoute_ActionTrendInfo_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct WarBoardActionTrendConditionEntity_array **p_conditionEntityArray; // x19
  WarBoardActionTrendConditionEntity_array *conditionEntityArray; // x21
  struct WarBoardActionTrendEntity_o *Entity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *conditionIds; // x20
  WarBoardAIRoute_ActionTrendInfo___c_c *v14; // x0
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__8_0; // x21
  Il2CppObject *v17; // x22
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *v18; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x0
  System_Collections_Generic_IEnumerable_T__o *v20; // x0

  v3 = this;
  if ( (byte_421267F & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___, v5);
    sub_B0D8A4(&Method_System_Func_int__WarBoardActionTrendConditionEntity___ctor__, v6);
    sub_B0D8A4(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__, v8);
    this = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B0D8A4(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v9);
    byte_421267F = 1;
  }
  p_conditionEntityArray = &v3->fields.conditionEntityArray;
  conditionEntityArray = v3->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = v3->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_B0D97C(this);
    conditionIds = (System_Collections_Generic_IEnumerable_TSource__o *)Entity_k__BackingField->fields.conditionIds;
    v14 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    if ( (BYTE3(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
      v14 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__8_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                         System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo,
                                                                         method,
                                                                         v2);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        _9__8_0,
        v17,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        (const MethodInfo_26145DC *)Method_System_Func_int__WarBoardActionTrendConditionEntity___ctor__);
      v18 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      v18->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_B0D840(&v18->__9__8_0, _9__8_0);
    }
    v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           conditionIds,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_1B50D58 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v20 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v19,
            (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                                                         (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    *p_conditionEntityArray = conditionEntityArray;
    sub_B0D840(p_conditionEntityArray, conditionEntityArray);
  }
  return conditionEntityArray;
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x0

  if ( (byte_4211FCC & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v1);
    byte_4211FCC = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAIRoute_ActionTrendInfo___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall WarBoardAIRoute_ActionTrendInfo___c___ctor(
        WarBoardAIRoute_ActionTrendInfo___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionTrendConditionEntity_o *__fastcall WarBoardAIRoute_ActionTrendInfo___c___get_ConditionEntityArray_b__8_0(
        WarBoardAIRoute_ActionTrendInfo___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_4211FCD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___, *(_QWORD *)&x);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(
      &Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__,
      v5);
    byte_4211FCD = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   Master_WarQuestSelectionMaster,
                                                   x,
                                                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
}


void __fastcall WarBoardAIRoute_AdvantagePieceData___ctor(
        WarBoardAIRoute_AdvantagePieceData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v20; // x20

  if ( (byte_4212681 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v4);
    byte_4212681 = 1;
  }
  *(_QWORD *)&this->fields.baseAARange = -1LL;
  *(_QWORD *)&this->fields.baseDARange = -1LL;
  this->fields.flagNow = 1LL;
  *(_QWORD *)&this->fields.baseCARange = -1LL;
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v5;
  sub_B0D840(&this->fields.dicClassAdvantageServant, v5);
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                                                  v6,
                                                                                                  v7);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v8;
  sub_B0D840(&this->fields.dicClassDisAdvantageServant, v8);
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                                                   v9,
                                                                                                   v10);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v11;
  sub_B0D840(&this->fields.dicAttackAdvantageServant, v11);
  v14 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                                                   v12,
                                                                                                   v13);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v14,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v14;
  sub_B0D840(&this->fields.dicAttackDisAdvantageServant, v14);
  v17 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                                                   v15,
                                                                                                   v16);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v17,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v17;
  sub_B0D840(&this->fields.dicDefenseAdvantageServant, v17);
  v20 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                                                   v18,
                                                                                                   v19);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v20,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v20;
  sub_B0D840(&this->fields.dicDefenseDisAdvantageServant, v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_DesignationItemData___ctor(
        WarBoardAIRoute_DesignationItemData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20

  if ( (byte_4212682 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v4);
    byte_4212682 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v5;
  sub_B0D840(&this->fields, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_PiecePersonality___ctor(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20

  if ( (byte_4212686 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo, v6);
    byte_4212686 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v7;
  sub_B0D840(&this->fields, v7);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo,
                                                                                                  v8,
                                                                                                  v9);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v10;
  sub_B0D840(&this->fields.ratingOffsetList, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__AttackOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o **p_attackOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v12; // x0
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__4_0; // x21
  Il2CppObject *v15; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_TSource__o *v18; // x0

  if ( (byte_4212683 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v4);
    sub_B0D8A4(&Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__, v7);
    sub_B0D8A4(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v8);
    byte_4212683 = 1;
  }
  p_attackOffset = &this->fields.attackOffset;
  result = this->fields.attackOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v12 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( (BYTE3(WarBoardAIRoute_PiecePersonality___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v12 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo,
                                                                                     method,
                                                                                     v2);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__4_0,
        v15,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
      v16 = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      v16->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_B0D840(&v16->__9__4_0, _9__4_0);
    }
    v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__4_0,
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v18 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
            v17,
            (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    *p_attackOffset = (System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v18;
    sub_B0D840(p_attackOffset, v18);
    return *p_attackOffset;
  }
  return result;
}


System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_4212685 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method);
    byte_4212685 = 1;
  }
  v4 = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_B0D974(
                                                                             WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo,
                                                                             method,
                                                                             v2);
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6___ctor(v4, -2, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
  return (System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *)v4;
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__MoveOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o **p_moveOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v12; // x0
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x21
  Il2CppObject *v15; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_TSource__o *v18; // x0

  if ( (byte_4212684 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v4);
    sub_B0D8A4(&Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__, v7);
    sub_B0D8A4(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v8);
    byte_4212684 = 1;
  }
  p_moveOffset = &this->fields.moveOffset;
  result = this->fields.moveOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v12 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( (BYTE3(WarBoardAIRoute_PiecePersonality___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v12 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo,
                                                                                     method,
                                                                                     v2);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__5_0,
        v15,
        Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
      v16 = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      v16->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_B0D840(&v16->__9__5_0, _9__5_0);
    }
    v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v18 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
            v17,
            (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    *p_moveOffset = (System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v18;
    sub_B0D840(p_moveOffset, v18);
    return *p_moveOffset;
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
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *actionTrandList; // x0
  struct System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__o *p__7__wrap1; // x20
  __int128 v9; // q0
  struct WarBoardAIRoute_ActionTrendInfo_o *trendInfo_5__3; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *FutureTrendInfoList_k__BackingField; // x0
  struct System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__o *p__7__wrap3; // x20
  __int128 v13; // q0
  const MethodInfo *v14; // x1
  struct WarBoardAIRoute_ActionTrendInfo_o *current; // x1
  bool result; // w0
  const MethodInfo *v17; // x1
  struct WarBoardAIRoute_ActionTrendInfo_o *v18; // x1
  struct WarBoardAIRoute_ActionTrendInfo_o *v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+38h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4211FCF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__, v3);
    this = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_B0D8A4(
                                                                                 &Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__,
                                                                                 v4);
    byte_4211FCF = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__7__wrap3 = &v2->fields.__7__wrap3;
LABEL_13:
    v2->fields.__1__state = -4;
    if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap3,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__) )
    {
      current = v2->fields.__7__wrap3.fields.current;
      v2->fields.__2__current = current;
      sub_B0D840(&v2->fields.__2__current, current);
      result = 1;
      v2->fields.__1__state = 2;
      return result;
    }
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(v2, v14);
    *(_QWORD *)&p__7__wrap3->fields.index = 0LL;
    p__7__wrap3->fields.current = 0LL;
    p__7__wrap3->fields.list = 0LL;
    v2->fields._trendInfo_5__3 = 0LL;
    sub_B0D840(&v2->fields._trendInfo_5__3, 0LL);
    p__7__wrap1 = &v2->fields.__7__wrap1;
    goto LABEL_16;
  }
  if ( _1__state == 1 )
  {
    trendInfo_5__3 = v2->fields._trendInfo_5__3;
    v2->fields.__1__state = -3;
    if ( !trendInfo_5__3 )
      sub_B0D97C(this);
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    p__7__wrap3 = &v2->fields.__7__wrap3;
    v13 = *(_OWORD *)&v20.fields.list;
    v2->fields.__7__wrap3.fields.current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v20.fields.current;
    *(_OWORD *)&v2->fields.__7__wrap3.fields.list = v13;
    sub_B0D840(&v2->fields.__7__wrap3, 0LL);
    goto LABEL_13;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_B0D97C(this);
  actionTrandList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.actionTrandList;
  if ( !actionTrandList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    actionTrandList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  p__7__wrap1 = &v2->fields.__7__wrap1;
  v9 = *(_OWORD *)&v20.fields.list;
  v2->fields.__7__wrap1.fields.current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v20.fields.current;
  *(_OWORD *)&v2->fields.__7__wrap1.fields.list = v9;
  sub_B0D840(&v2->fields.__7__wrap1, 0LL);
  v2->fields.__1__state = -3;
LABEL_16:
  if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
         (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
         (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__) )
  {
    v18 = v2->fields.__7__wrap1.fields.current;
    v2->fields._trendInfo_5__3 = v18;
    sub_B0D840(&v2->fields._trendInfo_5__3, v18);
    v19 = v2->fields._trendInfo_5__3;
    v2->fields.__2__current = v19;
    sub_B0D840(&v2->fields.__2__current, v19);
    result = 1;
    v2->fields.__1__state = 1;
  }
  else
  {
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(v2, v17);
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
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  __int64 v5; // x20
  __int64 CurrentManagedThreadId; // x0
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x1

  if ( (byte_4211FD2 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method);
    byte_4211FD2 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v5 = sub_B0D974(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    *(_DWORD *)(v5 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v5 + 32) = CurrentManagedThreadId;
    if ( !v5 )
      sub_B0D97C(CurrentManagedThreadId);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v5 + 40) = _4__this;
    sub_B0D840(v5 + 40, _4__this);
    return (System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *)v5;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  if ( (byte_4211FD0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, method);
    byte_4211FD0 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_4211FD1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, method);
    byte_4211FD1 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap3,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0

  if ( (byte_4211FCE & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v1);
    byte_4211FCE = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardAIRoute_PiecePersonality___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAIRoute_PiecePersonality___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return x->fields.type == 0;
}


bool __fastcall WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.type == 1;
}


void __fastcall WarBoardAIRoute_PutSquareTarget___ctor(
        WarBoardAIRoute_PutSquareTarget_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v11; // x20

  if ( (byte_4212687 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v4);
    byte_4212687 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B0D974(
                                                                                      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                                      method,
                                                                                      v2);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v5,
    (const MethodInfo_2EB8FCC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = v5;
  sub_B0D840(&this->fields, v5);
  v8 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B0D974(
                                                                                      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                                      v6,
                                                                                      v7);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v8,
    (const MethodInfo_2EB8FCC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = v8;
  sub_B0D840(&this->fields.dicObjectPutSquareIndex, v8);
  v11 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B0D974(
                                                                                       System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                                       v9,
                                                                                       v10);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v11,
    (const MethodInfo_2EB8FCC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = v11;
  sub_B0D840(&this->fields.dicIndividualityPutSqareIndex, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData___ctor(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *v4; // x20

  if ( (byte_421268A & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, method);
    byte_421268A = 1;
  }
  this->fields.flagNow = 1LL;
  v4 = (WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)sub_B0D974(
                                                                WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo,
                                                                method,
                                                                v2);
  WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(v4, 0LL);
  this->fields.evalOffsetMagnification = v4;
  sub_B0D840(&this->fields.evalOffsetMagnification, v4);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData__CalcEvalValue(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  int32_t WarBoardEvalFactorsAffectRatio; // w20
  System_Decimal_o v6; // kr00_16
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x0
  System_Decimal_o MoveValue; // kr10_16
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *futureEvalOffsetMag; // x0
  System_Decimal_o Value; // kr20_16
  __int64 v11; // x24
  System_Decimal_c *v12; // x0
  __int64 v13; // x25
  System_Decimal_o AttackValue; // kr30_16
  __int64 v15; // x22
  int32_t attackEvalOffsetAddValue; // w24
  __int64 v17; // x23
  struct System_Decimal_StaticFields *static_fields; // x8
  System_Decimal_o v19; // kr40_16
  System_Decimal_o v20; // 0:x0.16
  System_Decimal_o v21; // 0:x0.16
  System_Decimal_o v22; // 0:x0.16
  System_Decimal_o v23; // 0:x2.16
  System_Decimal_o v24; // 0:x2.16

  if ( (byte_421268C & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&System_Decimal_TypeInfo, v3);
    byte_421268C = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  WarBoardEvalFactorsAffectRatio = v4->static_fields->WarBoardEvalFactorsAffectRatio;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v6 = System_Decimal__op_Implicit_43734496(WarBoardEvalFactorsAffectRatio, 0LL);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_B0D97C(0LL);
  if ( (this->fields.flagNow & 2) != 0 )
  {
    AttackValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(evalOffsetMagnification, 0LL);
    v15 = *(_QWORD *)&AttackValue.fields.flags;
    attackEvalOffsetAddValue = this->fields.attackEvalOffsetAddValue;
    v17 = *(_QWORD *)&AttackValue.fields.lo;
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
      v11 = *(_QWORD *)&Value.fields.flags;
      v12 = System_Decimal_TypeInfo;
      v13 = *(_QWORD *)&Value.fields.lo;
    }
    else
    {
      v12 = System_Decimal_TypeInfo;
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
        v12 = System_Decimal_TypeInfo;
      }
      static_fields = v12->static_fields;
      v11 = *(_QWORD *)&static_fields->Zero.fields.flags;
      v13 = *(_QWORD *)&static_fields->Zero.fields.lo;
    }
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    *(_QWORD *)&v23.fields.flags = v11;
    *(_QWORD *)&v23.fields.lo = v13;
    v19 = System_Decimal__op_Addition(MoveValue, v23, 0LL);
    attackEvalOffsetAddValue = this->fields.moveEvalOffsetAddValue;
    v17 = *(_QWORD *)&v19.fields.lo;
    v15 = *(_QWORD *)&v19.fields.flags;
  }
  v20 = System_Decimal__op_Implicit_43734496(attackEvalOffsetAddValue, 0LL);
  v24 = System_Decimal__op_Division(v20, v6, 0LL);
  *(_QWORD *)&v21.fields.flags = v15;
  *(_QWORD *)&v21.fields.lo = v17;
  v22 = System_Decimal__op_Addition(v21, v24, 0LL);
  this->fields.evalValue = System_Decimal__op_Explicit_43734972(v22, 0LL);
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


bool __fastcall WarBoardAIRoute_RouteData__HasFlag_20575936(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_4212689 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__, method);
    byte_4212689 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  return futureLookingTrendHashSet && futureLookingTrendHashSet->fields._count > 0;
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute_RouteData__ShallowCopy(
        WarBoardAIRoute_RouteData_o *this,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *result; // x0
  __int64 v4; // x9
  WarBoardAIRoute___c_o *v5; // x0
  const MethodInfo *v6; // x3
  System_Collections_Generic_KeyValuePair_IEnumerator__float__o v7; // 0:x1.16

  if ( (byte_421268B & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIRoute_RouteData_TypeInfo, method);
    byte_421268B = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0LL);
  if ( result )
  {
    v4 = *(&WarBoardAIRoute_RouteData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v4
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[v4 - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      v5 = (WarBoardAIRoute___c_o *)sub_B0DC70(result);
      WarBoardAIRoute___c___CreateRouteData_b__47_6(v5, v7, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o **p_futureLookingTrendHashSet; // x19
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v6; // x20
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // t1

  if ( (byte_4212688 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v4);
    byte_4212688 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = &this->fields.futureLookingTrendHashSet;
  v6 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v6 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                              System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                                                                              method,
                                                                              v2);
    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
      v6,
      (const MethodInfo_2C7B9D8 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    *p_futureLookingTrendHashSet = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)v6;
    sub_B0D840(p_futureLookingTrendHashSet, v6);
  }
  return (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)v6;
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
  float warAttack; // s8
  float benAttack; // s9
  __int64 v5; // x0 OVERLAPPED
  __int64 v6; // x1
  System_Decimal_o v7; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_4211FD3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Decimal_TypeInfo, method);
    byte_4211FD3 = 1;
  }
  warAttack = this->fields.warAttack;
  benAttack = this->fields.benAttack;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v7 = System_Decimal__op_Explicit(warAttack + benAttack, 0LL);
  v6 = *(_QWORD *)&v7.fields.lo;
  v5 = *(_QWORD *)&v7.fields.flags;
  *(_QWORD *)&result.fields.lo = v6;
  *(_QWORD *)&result.fields.flags = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  float warMove; // s8
  float benMove; // s9
  __int64 v5; // x0 OVERLAPPED
  __int64 v6; // x1
  System_Decimal_o v7; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_4211FD4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Decimal_TypeInfo, method);
    byte_4211FD4 = 1;
  }
  warMove = this->fields.warMove;
  benMove = this->fields.benMove;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v7 = System_Decimal__op_Explicit(warMove + benMove, 0LL);
  v6 = *(_QWORD *)&v7.fields.lo;
  v5 = *(_QWORD *)&v7.fields.flags;
  *(_QWORD *)&result.fields.lo = v6;
  *(_QWORD *)&result.fields.flags = v5;
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


void __fastcall WarBoardAIRoute_TargetData___ctor_20580520(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardSquareData_o *targetSquare,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  WarBoardAIRoute_TargetData_o *v8; // x22

  v8 = this;
  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields.targetSquare = targetSquare;
  v8 = (WarBoardAIRoute_TargetData_o *)((char *)v8 + 48);
  v8->fields.targetObject = (struct IWarBoardObjectData_o *)actionTrendKey;
  v8->fields.moveByDistanceType = conditionId;
  sub_B0D840(v8, targetSquare);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_20580604(
        WarBoardAIRoute_TargetData_o *this,
        IWarBoardObjectData_o *targetObject,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actionTrendKey = actionTrendKey;
  this->fields.conditionId = conditionId;
  this->fields.targetObject = targetObject;
  sub_B0D840(&this->fields.targetObject, targetObject);
  WarBoardAIRoute_TargetData__DetectObject(this, v9);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_20581024(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  __int64 v11; // x0
  struct IWarBoardObjectData_o *targetObject; // x1
  struct WarBoardSquareData_o *targetSquare; // x1
  const MethodInfo *v14; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseTargetData )
    sub_B0D97C(v11);
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_B0D840(&this->fields.targetObject, targetObject);
  targetSquare = baseTargetData->fields.targetSquare;
  this->fields.targetSquare = targetSquare;
  sub_B0D840(&this->fields.targetSquare, targetSquare);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v14);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_20582112(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        IWarBoardObjectData_o *targetObject,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.targetObject = targetObject;
  sub_B0D840(&this->fields.targetObject, targetObject);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v13);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_20582228(
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
  Il2CppObject *v2; // x19
  WarBoardAIRoute_TargetData_o *result; // x0
  __int64 v4; // x9

  v2 = (Il2CppObject *)b;
  if ( (byte_421268D & 1) == 0 )
  {
    b = (WarBoardAIRoute_TargetData_o *)sub_B0D8A4(&WarBoardAIRoute_TargetData_TypeInfo, method);
    byte_421268D = 1;
  }
  if ( !v2 )
LABEL_9:
    sub_B0D97C(b);
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone(v2, 0LL);
  if ( result )
  {
    v4 = *(&WarBoardAIRoute_TargetData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v4
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[v4 - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      b = (WarBoardAIRoute_TargetData_o *)sub_B0DC70(result);
      goto LABEL_9;
    }
  }
  return result;
}


void __fastcall WarBoardAIRoute_TargetData__DetectObject(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct IWarBoardObjectData_o *targetObject; // x8
  __int64 v6; // x11
  struct IWarBoardObjectData_o *v7; // x1
  struct IWarBoardObjectData_o *v8; // x8
  __int64 v9; // x11
  struct IWarBoardObjectData_o *v10; // x1
  struct IWarBoardObjectData_o *v11; // x8
  __int64 v12; // x11
  struct IWarBoardObjectData_o *v13; // x1

  if ( (byte_421268F & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardItemData_TypeInfo, method);
    sub_B0D8A4(&WarBoardPieceData_TypeInfo, v3);
    sub_B0D8A4(&WarBoardTreasureData_TypeInfo, v4);
    byte_421268F = 1;
  }
  targetObject = this->fields.targetObject;
  if ( targetObject
    && (v6 = *(&WarBoardPieceData_TypeInfo->_2.bitflags2 + 1),
        *(&targetObject->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
  {
    if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[v6 - 1] == WarBoardPieceData_TypeInfo )
      v7 = this->fields.targetObject;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  this->fields.targetPiece = (struct WarBoardPieceData_o *)v7;
  sub_B0D840(&this->fields.targetPiece, v7);
  v8 = this->fields.targetObject;
  if ( v8 && (v9 = *(&WarBoardItemData_TypeInfo->_2.bitflags2 + 1), *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
  {
    if ( (WarBoardItemData_c *)v8->klass->_2.typeHierarchy[v9 - 1] == WarBoardItemData_TypeInfo )
      v10 = this->fields.targetObject;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  this->fields.targetItem = (struct WarBoardItemData_o *)v10;
  sub_B0D840(&this->fields.targetItem, v10);
  v11 = this->fields.targetObject;
  if ( v11
    && (v12 = *(&WarBoardTreasureData_TypeInfo->_2.bitflags2 + 1), *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (WarBoardTreasureData_c *)v11->klass->_2.typeHierarchy[v12 - 1] == WarBoardTreasureData_TypeInfo )
      v13 = this->fields.targetObject;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  this->fields.targetTreasure = (struct WarBoardTreasureData_o *)v13;
  sub_B0D840(&this->fields.targetTreasure, v13);
}


void __fastcall WarBoardAIRoute_TargetData__Init(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
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
  struct IWarBoardObjectData_o *targetObject; // x24
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v21; // x10
  IWarBoardObjectData_c **p_offset; // x11
  __int64 p_method; // x0
  struct WarBoardSquareData_o *targetSquare; // x8
  int32_t squareIndex_k__BackingField; // w24
  __int64 v26; // x0
  struct System_Int32_array *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  System_Int32_array *baseRoute; // x24
  WarBoardAIRoute_TargetData___c_c *v31; // x0
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x25
  Il2CppObject *v34; // x26
  struct WarBoardAIRoute_TargetData___c_StaticFields *v35; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Int32_array *v37; // x0
  bool IsDetour; // w0
  int32_t nowSquareIndex; // w23
  struct System_Int32_array *v40; // x0
  int32_t v41; // w0
  struct IWarBoardObjectData_o *v42; // x21
  WarBoardAIRoute_TargetData_o *v43; // x22
  IWarBoardObjectData_c *v44; // x8
  unsigned __int64 v45; // x10
  int32_t *v46; // x11
  __int64 v47; // x0
  struct WarBoardSquareData_o *v48; // x8

  if ( (byte_421268E & 1) == 0 )
  {
    sub_B0D8A4(&AStarSearch_TypeInfo, baseTargetData);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__int___ctor__, v14);
    sub_B0D8A4(&System_Func_WarBoardPieceData__int__TypeInfo, v15);
    sub_B0D8A4(&IWarBoardObjectData_TypeInfo, v16);
    sub_B0D8A4(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, v17);
    sub_B0D8A4(&WarBoardAIRoute_TargetData___c_TypeInfo, v18);
    byte_421268E = 1;
  }
  WarBoardAIRoute_TargetData__DetectObject(this, (const MethodInfo *)baseTargetData);
  targetObject = this->fields.targetObject;
  if ( targetObject )
  {
    klass = targetObject->klass;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v21;
        p_offset += 2;
        if ( v21 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_8:
      p_method = sub_AA67A0(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1LL);
    }
    v26 = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
            targetObject,
            *(_QWORD *)(p_method + 8));
    if ( !this )
LABEL_49:
      sub_B0D97C(v26);
    squareIndex_k__BackingField = v26;
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
  v27 = AStarSearch__RouteSearch(0LL, baseSquareIndex, squareIndex_k__BackingField, 0, 0LL, 0LL);
  this->fields.baseRoute = v27;
  sub_B0D840(&this->fields.baseRoute, v27);
  baseRoute = this->fields.baseRoute;
  v31 = WarBoardAIRoute_TargetData___c_TypeInfo;
  if ( (BYTE3(WarBoardAIRoute_TargetData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIRoute_TargetData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIRoute_TargetData___c_TypeInfo);
    v31 = WarBoardAIRoute_TargetData___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_WarBoardPieceData__int__TypeInfo,
                                                                                v28,
                                                                                v29);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v34,
      Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__,
      (const MethodInfo_2619564 *)Method_System_Func_WarBoardPieceData__int___ctor__);
    v35 = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    v35->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_B0D840(&v35->__9__7_0, _9__7_0);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v37 = System_Linq_Enumerable__ToArray_int_(
          v36,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v37, 0LL);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    nowSquareIndex = this->fields.nowSquareIndex;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v40 = AStarSearch__RouteSearch(piece, baseSquareIndex, nowSquareIndex, 1, 0LL, 0LL);
    this->fields.detourRoute = v40;
    sub_B0D840(&this->fields.detourRoute, v40);
  }
  v41 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
  v42 = this->fields.targetObject;
  this->fields.isAround = v41 == 2;
  if ( v42 )
    v43 = this;
  else
    v43 = 0LL;
  if ( v42 )
  {
    v44 = v42->klass;
    if ( *(_WORD *)&v42->klass->_2.bitflags1 )
    {
      v45 = 0LL;
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((IWarBoardObjectData_c **)v46 - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)&v42->klass->_2.bitflags1 )
          goto LABEL_38;
      }
      v47 = (__int64)&v44->vtable[*v46].method;
    }
    else
    {
LABEL_38:
      v47 = sub_AA67A0(v42, IWarBoardObjectData_TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v47)(v42, *(_QWORD *)(v47 + 8));
    if ( !v43 )
      goto LABEL_49;
  }
  else
  {
    v48 = this->fields.targetSquare;
    if ( v48 )
      v26 = (unsigned int)v48->fields._squareIndex_k__BackingField;
    else
      v26 = 0xFFFFFFFFLL;
    v43 = this;
  }
  v43->fields.putSquareIndex = v26;
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x0

  if ( (byte_4211FD5 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIRoute_TargetData___c_TypeInfo, v1);
    byte_4211FD5 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardAIRoute_TargetData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAIRoute_TargetData___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
  __int64 v2; // x2
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
  int32_t _1__state; // w8
  bool result; // w0
  WebViewManager_o *Instance; // x0
  struct WarBoardData_o *v96; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v97; // x21
  struct WarBoardData_o **p_warBoardData_5__2; // x21
  __int64 v99; // x0
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t v101; // w8
  struct WarBoardStageNpcEntity_o *v102; // x9
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o **p_routeDataList; // x24
  int32_t RequiredCost; // w22
  WebViewManager_o *v105; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v106; // x22
  System_Collections_Generic_Dictionary_int__uint__o **p_piecePlaceData; // x19
  int32_t MasterSquareIndex; // w0
  System_Int32_array *AllyPutSquareIndicesWithoutMaster; // x0
  System_Int32_array **p_allyPieceIndexs_5__5; // x23
  struct DefenseAreaData_o **p_defenseAreaData_5__7; // x22
  __int64 v112; // x0
  System_Collections_Generic_List_int__o *masterExistsForce; // x0
  _BOOL8 v114; // x0
  struct System_Int32_array **p__7__wrap23; // x26
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **p_basePieceBasePieceRouteList_5__23; // x20
  int32_t servantAndEnemyRange_5__14; // w8
  int32_t servantAndEnemyMasterRange_5__15; // w9
  int32_t *p__7__wrap24; // x19
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w8
  DefenseAreaData_o *v122; // x0
  __int64 v123; // x0
  struct DefenseAreaData_o *v124; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v125; // x9
  WarBoardAIRoute__CreateRouteData_d__47_o *v126; // x20
  __int128 v127; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_int__uint__o *p__7__wrap8; // x26
  struct WarBoardAIRoute___c__DisplayClass47_0_o **p__8__1; // x22
  WarBoardSquareData_o **p_baseSquareIndex_5__10; // x21
  const MethodInfo *v131; // x1
  __int64 v132; // x2
  Il2CppObject *key; // x23
  Il2CppObject *v134; // x27
  WarBoardSquareData_o *Square; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v136; // x27
  WarBoardPieceData_o *PieceUnique; // x0
  __int64 v138; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v139; // x9
  int64_t baseFlag_5__6; // x24
  struct WarBoardAIRoute___c__DisplayClass47_0_o *_8__1; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v142; // x28
  System_Collections_Generic_IEnumerable_TSource__o *routeDataList; // x27
  Il2CppObject *v144; // x24
  __int64 v145; // x1
  __int64 v146; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v147; // x28
  int32_t v148; // w8
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v149; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  __int64 RouteSumPieceActionCost; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v152; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v153; // x8
  _BOOL8 IsActable; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v155; // x19
  System_Collections_Generic_Dictionary_int__int__o *DesignationItemToDistance; // x0
  __int64 v157; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v158; // x24
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *TargetToDistance_21104000; // x0
  System_Collections_Generic_Dictionary_uint__int__o *AllEnemyToDistance; // x0
  _QWORD *p_dicEnemyRange_5__20; // x24
  __int64 v162; // x0
  WarBoardPieceData_o *basePiece; // x0
  _BOOL8 isServant; // x0
  __int64 v165; // x1
  __int64 v166; // x2
  WarBoardAIRoute_AdvantagePieceData_o *AdvantagePieceData; // x0
  int32_t v168; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v169; // x0
  __int64 v170; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v171; // x10
  struct WarBoardPieceData_o *v172; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v173; // x9
  struct WarBoardStageNpcEntity_o *v174; // x11
  int32_t v175; // w10
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v176; // x24
  WarBoardAIRoute__CreateRouteData_d__47_o *v177; // x23
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **p_advantagePieceData_5__21; // x23
  __int64 v179; // x1
  __int64 v180; // x2
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v181; // x25
  WarBoardAIRoute__CreateRouteData_d__47_o *v182; // x24
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **p_basePieceActionPieceRouteList_5__22; // x24
  _BOOL8 v184; // x0
  Il2CppObject *v185; // x25
  Il2CppClass *klass; // x8
  struct WarBoardPieceData_o *v187; // x9
  _DWORD *monitor; // x8
  struct WarBoardPieceData_o *v189; // x9
  WarBoardAIRoute__CreateRouteData_d__47_o *v190; // x19
  __int64 v191; // x0
  __int64 v192; // x1
  __int64 v193; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v194; // x21
  WarBoardAIRoute___c_c *v195; // x0
  struct WarBoardAIRoute___c_StaticFields *v196; // x8
  System_Func_T__TResult__o *_9__47_6; // x22
  Il2CppObject *v198; // x23
  struct WarBoardAIRoute___c_StaticFields *v199; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v200; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v201; // x0
  __int64 Count; // x0
  struct WarBoardStageNpcEntity_o *v203; // x8
  float v204; // s0
  WarBoardAIRoute__CreateRouteData_d__47_o *v205; // x10
  double v206; // d0
  int v207; // w8
  struct WarBoardStageNpcEntity_o *v208; // x9
  int calcEllipsisMin; // w9
  System_Linq_IOrderedEnumerable_TSource__c *v210; // x8
  unsigned __int64 v211; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v214; // x19
  System_Int32_array *MyAndLinkedSquareIndecies; // x0
  int v216; // w8
  __int64 v217; // x0
  __int64 *v218; // x21
  __int64 v219; // x8
  unsigned __int64 v220; // x10
  int *v221; // x11
  __int64 v222; // x0
  __int64 v223; // x0
  __int64 *v224; // x19
  __int64 v225; // x8
  unsigned __int64 v226; // x10
  int *v227; // x11
  __int64 v228; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v229; // x19
  Il2CppObject *v230; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v231; // x19
  WarBoardAIRoute__CreateRouteData_d__47_o *v232; // x0
  __int64 v233; // x23
  __int64 v234; // x0
  __int64 v235; // x1
  __int64 v236; // x2
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v237; // x8
  __int64 v238; // x9
  int32_t *v239; // x28
  WarBoardAIRoute_RouteData_o *v240; // x22
  const MethodInfo *v241; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v242; // x10
  int32_t getEnumeratorRetType; // w8
  int32_t v244; // w9
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v245; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dicBaseDIRange_5__18; // x22
  WarBoardAIRoute___c_c *v247; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *_9__47_1; // x24
  Il2CppObject *v250; // x25
  struct WarBoardAIRoute___c_StaticFields *v251; // x0
  struct WarBoardAIRoute___c_StaticFields *v252; // x8
  System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *_9__47_2; // x25
  struct System_Int32_array **v254; // x19
  Il2CppObject *v255; // x26
  struct WarBoardAIRoute___c_StaticFields *v256; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v257; // x22
  WarBoardAIRoute_RouteData_o *v258; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v259; // x21
  struct WarBoardSquareData_o *v260; // x1
  WarBoardAIRoute_RouteData_o *v261; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v262; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o **v263; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v264; // t1
  struct WarBoardPieceData_o *v265; // x1
  WarBoardAIRoute_RouteData_o *v266; // x0
  WarBoardAIRoute_RouteData_o *v267; // x24
  int32_t v268; // w25
  WarBoardSquareData_o *v269; // x0
  struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v271; // x19
  struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v272; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v274; // x0
  WarBoardAIRoute_RouteData_o *v275; // x24
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *MoveByTargetDistance; // x0
  __int64 v277; // x0
  WarBoardAIRoute_RouteData_o *v278; // x22
  WarBoardPieceData_o *ActionPiece; // x0
  struct WarBoardPieceData_o **p_actionPiece; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v281; // x8
  struct WarBoardPieceData_o *v282; // x9
  struct WarBoardPieceData_o *v283; // x10
  struct WarBoardPieceData_o *v284; // x8
  __int64 v285; // x0
  WarBoardAIRoute_RouteData_o *v286; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v287; // x10
  struct WarBoardSquareData_o *baseSquare_5__11; // x9
  WarBoardData_o *warBoardData_5__2; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v290; // x22
  WarBoardPieceData_o *v291; // x0
  WarBoardPieceData_o *v292; // x0
  WarBoardPieceData_o *v293; // x22
  WarBoardPieceData_o *v294; // x24
  WarBoardPieceData_o *v295; // x0
  WarBoardPieceData_o *v296; // x0
  WarBoardAIRoute_RouteData_o *v297; // x8
  struct WarBoardPieceData_o *v298; // x9
  WarBoardPieceData_o *v299; // x0
  WarBoardAIRoute_RouteData_o *v300; // x19
  struct WarBoardPieceData_o *v301; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v303; // x24
  int64_t flagNow; // x20
  __int64 ClassId; // x0
  struct WarBoardPieceData_o *v306; // x8
  int32_t v307; // w22
  BattleServantData_o *v308; // x0
  int32_t v309; // w2
  int64_t FlagAdvantage; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v311; // x0
  struct WarBoardPieceData_o *v312; // x22
  WarBoardPieceData_o *v313; // x24
  WarBoardAIRoute_RouteData_o *v314; // x2
  WarBoardPieceData_o *v315; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v316; // x19
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v317; // x0
  WarBoardPieceData_o *v318; // x22
  WarBoardPieceData_o *v319; // x24
  int32_t requiredCost_5__3; // w25
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v321; // x0
  int32_t MasterSquareIndexFromPlaceData; // w24
  System_Collections_Generic_IEnumerable_TSource__o *basePieceActionPieceRouteList_5__22; // x25
  __int64 v324; // x1
  __int64 v325; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v326; // x26
  DefenseAreaData_o *DefenseAreaData; // x0
  __int64 v328; // x1
  __int64 v329; // x2
  struct WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData_5__21; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v331; // x26
  struct DefenseAreaData_o *defenseAreaData_5__7; // x25
  WarBoardPieceData_o *v333; // x0
  System_Int32_array *v334; // x2
  struct WarBoardAIRoute_AIRouteMasterData_o *v335; // x8
  _BOOL8 IsAllBlockShortestRouteEnemyAndMastr; // x0
  WarBoardAIRoute_RouteData_o *v337; // x23
  int64_t v338; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v339; // x25
  __int64 v340; // x0
  __int64 v341; // x0
  __int64 v342; // x1
  __int64 v343; // x2
  WarBoardAIRoute_RouteData_o *v344; // x23
  System_Collections_Generic_Dictionary_uint__int__o *v345; // x25
  System_Collections_Generic_Dictionary_int__uint__o *v346; // x0
  _BOOL8 v347; // x0
  struct WarBoardPieceData_o *v348; // x8
  uint32_t key_high; // w23
  int32_t v350; // w26
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x25
  int32_t v352; // w27
  System_Collections_Generic_IEnumerable_TSource__o *v353; // x0
  __int64 v354; // x0
  __int64 v355; // x1
  __int64 v356; // x2
  WarBoardAIRoute_RouteData_o *v357; // x23
  System_Collections_Generic_List_int__o *v358; // x25
  __int64 v359; // x0
  WarBoardAIRoute_RouteData_o *v360; // x23
  __int64 v361; // x1
  __int64 v362; // x2
  System_Collections_Generic_Dictionary_int__bool__o *v363; // x25
  __int64 v364; // x0
  WarBoardAIRoute_RouteData_o *v365; // x23
  __int64 v366; // x1
  __int64 v367; // x2
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *v368; // x25
  __int64 v369; // x0
  __int64 v370; // x0
  WarBoardAIRoute_RouteData_o *v371; // x8
  WarBoardPieceData_o *v372; // x0
  _BOOL8 IsBlockShortestRouteEnemyAndMaster; // x0
  __int64 v374; // x1
  struct WarBoardPieceData_o *v375; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v376; // x9
  DefenseAreaData_o *v377; // x0
  struct WarBoardPieceData_o *v378; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v379; // x10
  int32_t v380; // w9
  struct WarBoardPieceData_o *v381; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v382; // x9
  int32_t v383; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v384; // x0
  int32_t v385; // w0
  WarBoardAIRoute_RouteData_o *v386; // x19
  __int64 v387; // x0
  System_Collections_Generic_Dictionary_int__int__o *v388; // x0
  int32_t v389; // w23
  int32_t v390; // w24
  int32_t v391; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v392; // x0
  __int64 v393; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x25
  __int64 v395; // x0
  __int64 v396; // x0
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  __int64 v398; // x0
  System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  int32_t v400; // w23
  int32_t enemyMasterSquareIndex; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v402; // x0
  int32_t v403; // w0
  WarBoardAIRoute_RouteData_o *v404; // x19
  __int64 v405; // x0
  __int64 v406; // x1
  WarBoardAIRoute_RouteData_o *v407; // x19
  WarBoardAIManager_c *v408; // x0
  __int64 v409; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v410; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v411; // x8
  WarBoardPieceData_o *v412; // x0
  struct WarBoardPieceData_o *v413; // x9
  WarBoardAIManager_c *v414; // x0
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *dicSquareIndexEnemyPiece; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  int32_t currentKey; // w23
  int32_t v418; // w24
  System_Int32_array *v419; // x0
  struct WarBoardStageNpcEntity_o *v420; // x8
  __int64 v421; // x1
  WarBoardAIRoute_RouteData_o *v422; // x20
  WarBoardAIManager_c *v423; // x0
  struct DefenseAreaData_o *v424; // x8
  __int64 v425; // x0
  __int64 v426; // x1
  WarBoardAIManager_c *v427; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v428; // x0
  int32_t v429; // w23
  int32_t v430; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v431; // x23
  int v432; // w19
  WarBoardAIRoute_RouteData_o *v433; // x19
  System_Collections_Generic_Dictionary_int__uint__o *v434; // x22
  WarBoardData_o *v435; // x0
  WarBoardEffectData_o *Effect; // x0
  __int64 v437; // x1
  __int64 v438; // x2
  System_Collections_Generic_List_int__o *v439; // x23
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v440; // x0
  _BOOL8 v441; // x0
  Il2CppObject *v442; // x21
  Il2CppClass *v443; // x0
  _BOOL8 v444; // x0
  WarBoardPieceData_o *v445; // x0
  WarBoardPieceData_o *v446; // x0
  _BOOL8 v447; // x0
  __int64 v448; // x0
  WarBoardPieceData_o *v449; // x0
  _BOOL8 v450; // x0
  _BOOL8 CanAcquireItem; // x0
  WarBoardAIRoute_RouteData_o *v452; // x8
  int64_t v453; // x9
  WarBoardPieceData_o *v454; // x0
  _BOOL8 isMaster; // x0
  _BOOL8 v456; // x0
  WarBoardAIRoute_RouteData_o *v457; // x8
  WarBoardPieceData_o *v458; // x0
  _BOOL8 v459; // x0
  _BOOL8 v460; // x0
  __int64 v461; // x0
  __int64 FlagOutOfWarningAreaToDistance; // x0
  WarBoardAIRoute_RouteData_o *v463; // x8
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x9
  struct WarBoardPieceData_o *v465; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *piecePersonalityDic; // x0
  WarBoardAIRoute_PiecePersonality_o *v467; // x24
  WarBoardAIEvalCalcurater_o *v468; // x23
  __int64 v469; // x0
  const MethodInfo *v470; // x1
  __int64 v471; // x1
  __int64 v472; // x2
  WarBoardAIRoute___c_c *v473; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v474; // x24
  struct WarBoardAIRoute___c_StaticFields *v475; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__47_5; // x25
  Il2CppObject *v477; // x26
  struct WarBoardAIRoute___c_StaticFields *v478; // x0
  System_Collections_Generic_IEnumerable_T__o *v479; // x25
  __int64 v480; // x1
  __int64 v481; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v482; // x24
  __int64 v483; // x0
  WarBoardAIRoute_RouteData_o *v484; // x0
  const MethodInfo *v485; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *allRouteList; // x0
  int32_t searchCount; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x23
  Il2CppObject *v489; // x0
  Il2CppObject *v490; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v491; // x0
  __int64 v492; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **v493; // [xsp+0h] [xbp-200h]
  struct System_Int32_array **v494; // [xsp+8h] [xbp-1F8h]
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // [xsp+10h] [xbp-1F0h]
  int32_t *p_masterSquareIndex_5__4; // [xsp+18h] [xbp-1E8h]
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v497; // [xsp+18h] [xbp-1E8h]
  struct WarBoardAIRoute_o *_4__this; // [xsp+20h] [xbp-1E0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v499; // [xsp+28h] [xbp-1D8h] BYREF
  __int128 v500; // [xsp+50h] [xbp-1B0h]
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+60h] [xbp-1A0h]
  _DWORD v502[12]; // [xsp+78h] [xbp-188h]
  int v503; // [xsp+A8h] [xbp-158h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v504; // [xsp+B0h] [xbp-150h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v505; // [xsp+E0h] [xbp-120h] BYREF
  __int128 v506; // [xsp+100h] [xbp-100h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o endSquare; // [xsp+110h] [xbp-F0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v508; // [xsp+120h] [xbp-E0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+148h] [xbp-B8h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+150h] [xbp-B0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+158h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v512; // [xsp+160h] [xbp-A0h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+180h] [xbp-80h] BYREF
  int32_t actionCount[6]; // [xsp+188h] [xbp-78h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v515; // [xsp+1A8h] [xbp-58h]

  v515 = this;
  if ( (byte_421267A & 1) == 0 )
  {
    sub_B0D8A4(&AStarSearch_TypeInfo, method);
    sub_B0D8A4(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__, v18);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v19);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v20);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo, v21);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___, v22);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v23);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, v24);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___, v25);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___, v26);
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___,
      v27);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v28);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__,
      v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v33);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__,
      v34);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v35);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v36);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v37);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v38);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v39);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__,
      v40);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v41);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v42);
    sub_B0D8A4(
      &Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData___ctor__,
      v43);
    sub_B0D8A4(&Method_System_Func_KeyValuePair_IEnumerator__float___float___ctor__, v44);
    sub_B0D8A4(&Method_System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___ctor__, v45);
    sub_B0D8A4(&Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long___ctor__, v46);
    sub_B0D8A4(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v47);
    sub_B0D8A4(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo, v48);
    sub_B0D8A4(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo, v49);
    sub_B0D8A4(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo, v50);
    sub_B0D8A4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v51);
    sub_B0D8A4(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo, v52);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__, v53);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__, v54);
    sub_B0D8A4(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo, v55);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo, v56);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo, v57);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v58);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__, v59);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__, v60);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v61);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v62);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v63);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v64);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v65);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v66);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__, v67);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v68);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__, v69);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v70);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v71);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v72);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v73);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___67908072, v74);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v75);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v76);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v77);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v78);
    sub_B0D8A4(&WarBoardAIRoute_RouteData_TypeInfo, v79);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v80);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__, v81);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__, v82);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__, v83);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__, v84);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__, v85);
    sub_B0D8A4(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo, v86);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__, v87);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__, v88);
    sub_B0D8A4(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo, v89);
    sub_B0D8A4(&WarBoardAIRoute___c_TypeInfo, v90);
    sub_B0D8A4(&WarBoardAIEvalCalcurater_TypeInfo, v91);
    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)sub_B0D8A4(&WarBoardAIManager_TypeInfo, v92);
    byte_421267A = 1;
  }
  *(_QWORD *)masterReplaceCount = 0LL;
  *(_QWORD *)actionCount = 0LL;
  value = 0LL;
  routeData = 0LL;
  route = 0LL;
  memset(&v512, 0, sizeof(v512));
  memset(&v508, 0, 32);
  v506 = 0u;
  endSquare = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v505, 0, sizeof(v505));
  memset(&v504, 0, sizeof(v504));
  v503 = 0;
  _1__state = v515->fields.__1__state;
  if ( _1__state == 2 )
  {
    servantAndEnemyRange_5__14 = v515->fields._servantAndEnemyRange_5__14;
    servantAndEnemyMasterRange_5__15 = v515->fields._servantAndEnemyMasterRange_5__15;
    v515->fields.__1__state = -4;
    if ( servantAndEnemyRange_5__14 < servantAndEnemyMasterRange_5__15 )
    {
LABEL_140:
      v229 = v515;
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(v515, method);
      *(_QWORD *)&v229->fields.__7__wrap24 = 0LL;
      sub_B0D840(&v229->fields.__7__wrap24, 0LL);
      return 0;
    }
    p__7__wrap24 = &v515->fields.__7__wrap24;
LABEL_126:
    v218 = *(__int64 **)p__7__wrap24;
    if ( !*(_QWORD *)p__7__wrap24 )
      sub_B0D97C(this);
    v219 = *v218;
    if ( *(_WORD *)(*v218 + 298) )
    {
      v220 = 0LL;
      v221 = (int *)(*(_QWORD *)(v219 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v221 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v220;
        v221 += 4;
        if ( v220 >= *(unsigned __int16 *)(*v218 + 298) )
          goto LABEL_131;
      }
      v222 = v219 + 16LL * *v221 + 312;
    }
    else
    {
LABEL_131:
      v222 = sub_AA67A0(*(_QWORD *)p__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v223 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v222)(v218, *(_QWORD *)(v222 + 8));
    if ( (v223 & 1) != 0 )
    {
      v224 = *(__int64 **)p__7__wrap24;
      if ( !v224 )
        sub_B0D97C(v223);
      v225 = *v224;
      if ( *(_WORD *)(*v224 + 298) )
      {
        v226 = 0LL;
        v227 = (int *)(*(_QWORD *)(v225 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v227 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          ++v226;
          v227 += 4;
          if ( v226 >= *(unsigned __int16 *)(*v224 + 298) )
            goto LABEL_139;
        }
        v228 = v225 + 16LL * *v227 + 312;
      }
      else
      {
LABEL_139:
        v228 = sub_AA67A0(v224, System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo, 0LL);
      }
      v230 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v228)(v224, *(_QWORD *)(v228 + 8));
      v231 = v515;
      v232 = v515;
      v515->fields.__2__current = v230;
      v232 = (WarBoardAIRoute__CreateRouteData_d__47_o *)((char *)v232 + 24);
      ++LODWORD(v232->fields._baseSquare_5__11);
      sub_B0D840(v232, v230);
      result = 1;
      v231->fields.__1__state = 2;
      return result;
    }
    goto LABEL_140;
  }
  _4__this = v515->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap23 = &v515->fields.__7__wrap23;
    p_basePieceBasePieceRouteList_5__23 = &v515->fields._basePieceBasePieceRouteList_5__23;
    v515->fields.__1__state = -3;
    goto LABEL_543;
  }
  result = 0;
  if ( !_1__state )
  {
    v515->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    v96 = *(struct WarBoardData_o **)&Instance[4].fields.m_CachedPtr;
    v97 = v515;
    v515->fields._warBoardData_5__2 = v96;
    p_warBoardData_5__2 = &v97->fields._warBoardData_5__2;
    sub_B0D840(p_warBoardData_5__2, v96);
    if ( !_4__this )
      sub_B0D97C(v99);
    npcData = _4__this->fields.npcData;
    if ( !npcData )
      sub_B0D97C(v99);
    if ( !npcData->fields.searchDepth )
      npcData->fields.searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
    v101 = v515->fields.searchCount + 1;
    v515->fields.searchCount = v101;
    v102 = _4__this->fields.npcData;
    if ( !v102 )
      sub_B0D97C(v99);
    if ( v101 > v102->fields.searchDepth )
      return 0;
    *(_QWORD *)masterReplaceCount = 0LL;
    *(_QWORD *)actionCount = 0LL;
    p_routeDataList = &v515->fields.routeDataList;
    WarBoardAIRoute__GetRouteDataActionList(
      _4__this,
      v515->fields.routeDataList,
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
    v515->fields._requiredCost_5__3 = RequiredCost;
    v105 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v105 )
      sub_B0D97C(0LL);
    if ( RequiredCost >= *((_DWORD *)&v105[7].fields.SingletonMonoBehaviour_WebViewManager__Fields + 1) )
      return 0;
    v106 = v515;
    p_piecePlaceData = &v515->fields.piecePlaceData;
    MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v515->fields.piecePlaceData, 0LL);
    v106->fields._masterSquareIndex_5__4 = MasterSquareIndex;
    p_masterSquareIndex_5__4 = &v106->fields._masterSquareIndex_5__4;
    AllyPutSquareIndicesWithoutMaster = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                          _4__this,
                                          v106->fields.piecePlaceData,
                                          MasterSquareIndex,
                                          0LL);
    v106->fields._allyPieceIndexs_5__5 = AllyPutSquareIndicesWithoutMaster;
    p_allyPieceIndexs_5__5 = &v106->fields._allyPieceIndexs_5__5;
    sub_B0D840(&v106->fields._allyPieceIndexs_5__5, AllyPutSquareIndicesWithoutMaster);
    v106->fields._defenseAreaData_5__7 = 0LL;
    p_defenseAreaData_5__7 = &v106->fields._defenseAreaData_5__7;
    *(p_defenseAreaData_5__7 - 1) = (struct DefenseAreaData_o *)(&dword_0 + 1);
    sub_B0D840(p_defenseAreaData_5__7, 0LL);
    if ( !*p_warBoardData_5__2 )
      sub_B0D97C(v112);
    masterExistsForce = (*p_warBoardData_5__2)->fields.masterExistsForce;
    if ( !masterExistsForce )
      sub_B0D97C(0LL);
    v114 = System_Collections_Generic_List_int___Contains(
             masterExistsForce,
             _4__this->fields.forceId,
             (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( v114 )
    {
      v515->fields._masterExists_5__8 = 1;
    }
    else
    {
      aiRouteMasterData = _4__this->fields.aiRouteMasterData;
      if ( !aiRouteMasterData )
        sub_B0D97C(v114);
      masterType = aiRouteMasterData->fields.masterType;
      v515->fields._masterExists_5__8 = masterType != 3;
      if ( masterType == 3 )
      {
LABEL_28:
        if ( !*p_piecePlaceData )
          sub_B0D97C(0LL);
        v493 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)p_routeDataList;
        System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
          &v499,
          *p_piecePlaceData,
          (const MethodInfo_2E981A4 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
        v126 = v515;
        v500 = *(_OWORD *)&v499.fields.dictionary;
        current = v499.fields.current;
        v127 = *(_OWORD *)&v499.fields.dictionary;
        p__7__wrap8 = &v515->fields.__7__wrap8;
        v515->fields.__7__wrap8.fields.current = v499.fields.current;
        *(_OWORD *)&v126->fields.__7__wrap8.fields.dictionary = v127;
        sub_B0D840(&v126->fields.__7__wrap8, 0LL);
        p__8__1 = &v126->fields.__8__1;
        v126->fields.__1__state = -3;
        p_baseSquareIndex_5__10 = (WarBoardSquareData_o **)&v126->fields._baseSquareIndex_5__10;
LABEL_43:
        while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                  p__7__wrap8,
                  (const MethodInfo_2812868 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
        {
          key = v515->fields.__7__wrap8.fields.current.fields.key;
          v134 = (Il2CppObject *)sub_B0D974(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo, v131, v132);
          System_Object___ctor(v134, 0LL);
          *p__8__1 = (struct WarBoardAIRoute___c__DisplayClass47_0_o *)v134;
          sub_B0D840(p__8__1, v134);
          v515->fields.__7__wrap8.fields.getEnumeratorRetType = (int)key;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          }
          Square = WarBoardAIManager__GetSquare((int32_t)key, 0LL);
          *p_baseSquareIndex_5__10 = Square;
          sub_B0D840(p_baseSquareIndex_5__10, Square);
          v136 = *p__8__1;
          PieceUnique = WarBoardAIManager__GetPieceUnique(HIDWORD(key), 0LL);
          if ( !v136 )
            sub_B0D97C(PieceUnique);
          v136->fields.basePiece = PieceUnique;
          sub_B0D840(&v136->fields, PieceUnique);
          v139 = v515;
          baseFlag_5__6 = v515->fields._baseFlag_5__6;
          _8__1 = v515->fields.__8__1;
          v515->fields._tmpFlagNow_5__12 = -1LL;
          v139->fields._servantAndMasterRange_5__13 = -1;
          v139->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
          if ( !_8__1 )
            sub_B0D97C(v138);
          if ( !_4__this )
            sub_B0D97C(0LL);
          v142 = v515;
          v142->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)(WarBoardAIRoute__GetFlagAroundSquareCheck(
                                                                             _4__this,
                                                                             *(WarBoardSquareData_o **)&v515->fields._baseSquareIndex_5__10,
                                                                             _8__1->fields.basePiece,
                                                                             *p_piecePlaceData,
                                                                             *p_masterSquareIndex_5__4,
                                                                             0LL) | baseFlag_5__6);
          routeDataList = (System_Collections_Generic_IEnumerable_TSource__o *)v142->fields.routeDataList;
          v144 = (Il2CppObject *)v142->fields.__8__1;
          v147 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                                                      v145,
                                                                                      v146);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v147,
            v144,
            Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
            (const MethodInfo_26189B8 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
          v148 = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                   routeDataList,
                   (System_Func_TSource__bool__o *)v147,
                   (const MethodInfo_1B48614 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
          v149 = v515->fields.routeDataList;
          v515->fields._servantAndEnemyRange_5__14 = v148;
          if ( !v149 )
            sub_B0D97C(0LL);
          Only = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                   v149,
                   (const MethodInfo_2FC5968 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
          if ( !*p__8__1 )
            sub_B0D97C(Only);
          RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                      _4__this,
                                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                      (*p__8__1)->fields.basePiece,
                                      0LL);
          v152 = v515;
          v153 = v515->fields.__8__1;
          v515->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
          if ( !v153 )
            sub_B0D97C(RouteSumPieceActionCost);
          IsActable = WarBoardAIRoute__IsActable(
                        _4__this,
                        v153->fields.basePiece,
                        v152->fields._servantAndEnemyRange_5__14,
                        v152->fields._requiredCost_5__3,
                        RouteSumPieceActionCost,
                        0LL);
          if ( IsActable )
          {
            if ( !*p__8__1 )
              sub_B0D97C(IsActable);
            v155 = v515;
            DesignationItemToDistance = WarBoardAIRoute__GetDesignationItemToDistance(
                                          _4__this,
                                          (*p__8__1)->fields.basePiece,
                                          v515->fields.routeDataList,
                                          v515->fields.__7__wrap8.fields.getEnumeratorRetType,
                                          0LL);
            *(_QWORD *)&v155->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
            sub_B0D840(&v155->fields._sumPieceActionCost_5__17, DesignationItemToDistance);
            if ( !*p__8__1 )
              sub_B0D97C(v157);
            v158 = v515;
            TargetToDistance_21104000 = WarBoardAIRoute__GetTargetToDistance_21104000(
                                          _4__this,
                                          (*p__8__1)->fields.basePiece,
                                          v515->fields.routeDataList,
                                          v515->fields.__7__wrap8.fields.getEnumeratorRetType,
                                          0LL);
            v158->fields._dicBaseDIRange_5__18 = (struct System_Collections_Generic_Dictionary_int__int__o *)TargetToDistance_21104000;
            sub_B0D840(&v158->fields._dicBaseDIRange_5__18, TargetToDistance_21104000);
            AllEnemyToDistance = WarBoardAIRoute__GetAllEnemyToDistance(
                                   _4__this,
                                   v158->fields.routeDataList,
                                   v158->fields.__7__wrap8.fields.getEnumeratorRetType,
                                   (int32_t *)&v126->fields._tmpFlagNow_5__12 + 1,
                                   &v126->fields._servantAndMasterRange_5__13,
                                   0LL);
            v158->fields._dicKeyPutIndexValueTargetData_5__19 = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)AllEnemyToDistance;
            sub_B0D840(&v158->fields._dicKeyPutIndexValueTargetData_5__19, AllEnemyToDistance);
            v158->fields._dicEnemyRange_5__20 = 0LL;
            p_dicEnemyRange_5__20 = &v158->fields._dicEnemyRange_5__20;
            sub_B0D840(p_dicEnemyRange_5__20, 0LL);
            if ( !*p__8__1 )
              sub_B0D97C(v162);
            basePiece = (*p__8__1)->fields.basePiece;
            if ( !basePiece )
              sub_B0D97C(0LL);
            isServant = WarBoardPieceData__get_isServant(basePiece, 0LL);
            if ( isServant )
            {
              if ( !*p__8__1 )
                sub_B0D97C(isServant);
              AdvantagePieceData = WarBoardAIRoute__GetAdvantagePieceData(
                                     _4__this,
                                     (*p__8__1)->fields.basePiece,
                                     v515->fields.__7__wrap8.fields.getEnumeratorRetType,
                                     0LL);
              *p_dicEnemyRange_5__20 = AdvantagePieceData;
              sub_B0D840(p_dicEnemyRange_5__20, AdvantagePieceData);
              if ( v515->fields._masterExists_5__8 )
              {
                v168 = *p_masterSquareIndex_5__4;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v169 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              (int32_t)key,
                                                                              v168,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v170 = System_Linq_Enumerable__Count_int_(
                         v169,
                         (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
                v171 = v515->fields.__8__1;
                LODWORD(v515->fields._tmpFlagNow_5__12) = v170;
                if ( !v171 )
                  sub_B0D97C(v170);
                v172 = v171->fields.basePiece;
                if ( !v172 )
                  sub_B0D97C(v170);
                v173 = _4__this->fields.aiRouteMasterData;
                if ( !v173 )
                  sub_B0D97C(v170);
                if ( v173->fields.masterType != 2
                  || v173->fields.masterPieceIndex != v172->fields._index_k__BackingField )
                {
                  v174 = _4__this->fields.npcData;
                  if ( !v174 )
                    sub_B0D97C(v170);
                  if ( v174->fields.defenseArea > (int)v170 )
                  {
                    v515->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v515->fields._baseSquare_5__11 | 0x800);
                    v172 = v171->fields.basePiece;
                    if ( !v172 )
                      sub_B0D97C(v170);
                    v173 = _4__this->fields.aiRouteMasterData;
                    if ( !v173 )
                      sub_B0D97C(v170);
                  }
                }
                v175 = v173->fields.masterType;
                if ( (v175 != 2 || v173->fields.masterPieceIndex != v172->fields._index_k__BackingField)
                  && WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                       v515->fields._defenseAreaData_5__7,
                       v515->fields.__7__wrap8.fields.getEnumeratorRetType,
                       v175 == 1,
                       0LL) )
                {
                  v515->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v515->fields._baseSquare_5__11 | 0x80000000);
                }
              }
            }
            v176 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                                        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo,
                                                                                        v165,
                                                                                        v166);
            System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
              v176,
              (const MethodInfo_2C7B9D8 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v177 = v515;
            v515->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v176;
            p_advantagePieceData_5__21 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **)&v177->fields._advantagePieceData_5__21;
            sub_B0D840(p_advantagePieceData_5__21, v176);
            v181 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                                        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo,
                                                                                        v179,
                                                                                        v180);
            System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
              v181,
              (const MethodInfo_2C7B9D8 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v182 = v515;
            v515->fields._basePieceActionPieceRouteList_5__22 = v181;
            p_basePieceActionPieceRouteList_5__22 = &v182->fields._basePieceActionPieceRouteList_5__22;
            sub_B0D840(p_basePieceActionPieceRouteList_5__22, v181);
            if ( !*v493 )
              sub_B0D97C(0LL);
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v499,
              *v493,
              (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
            v512.fields.current = v499.fields.current.fields.key;
            *(_OWORD *)&v512.fields.list = *(_OWORD *)&v499.fields.dictionary;
            while ( 1 )
            {
              v184 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v512,
                       (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
              if ( !v184 )
                break;
              v185 = v512.fields.current;
              if ( !v512.fields.current )
                sub_B0D97C(v184);
              if ( LODWORD(v512.fields.current[1].monitor) != HIDWORD(v512.fields.current[1].monitor) )
              {
                klass = v512.fields.current[3].klass;
                if ( !klass )
                  sub_B0D97C(v184);
                if ( !*p__8__1 )
                  sub_B0D97C(v184);
                v187 = (*p__8__1)->fields.basePiece;
                if ( !v187 )
                  sub_B0D97C(v184);
                if ( HIDWORD(klass->_1.namespaze) == v187->fields._index_k__BackingField )
                {
                  if ( !*p_basePieceActionPieceRouteList_5__22 )
                    sub_B0D97C(0LL);
                  v184 = System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                           *p_basePieceActionPieceRouteList_5__22,
                           (WarBoardAIRoute_RouteData_o *)v512.fields.current,
                           (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                }
                if ( (BYTE3(v185[1].klass) & 4) != 0 )
                {
                  monitor = v185[3].monitor;
                  if ( !monitor )
                    sub_B0D97C(v184);
                  if ( !*p__8__1 )
                    sub_B0D97C(v184);
                  v189 = (*p__8__1)->fields.basePiece;
                  if ( !v189 )
                    sub_B0D97C(v184);
                  if ( monitor[7] == v189->fields._index_k__BackingField )
                  {
                    if ( !*p_advantagePieceData_5__21 )
                      sub_B0D97C(0LL);
                    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                      *p_advantagePieceData_5__21,
                      (WarBoardAIRoute_RouteData_o *)v185,
                      (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                  }
                }
              }
            }
            v502[v503++] = 1280;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v512,
              (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
            if ( v503 && v502[v503 - 1] == 1280 )
              --v503;
            if ( !*p_baseSquareIndex_5__10 )
              sub_B0D97C(0LL);
            v214 = v515;
            MyAndLinkedSquareIndecies = WarBoardSquareData__GetMyAndLinkedSquareIndecies(*p_baseSquareIndex_5__10, 0LL);
            v214->fields._basePieceBasePieceRouteList_5__23 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)MyAndLinkedSquareIndecies;
            p_basePieceBasePieceRouteList_5__23 = &v214->fields._basePieceBasePieceRouteList_5__23;
            sub_B0D840(&v214->fields._basePieceBasePieceRouteList_5__23, MyAndLinkedSquareIndecies);
            v216 = 0;
            p__7__wrap23 = &v214->fields.__7__wrap23;
            LODWORD(v214->fields.__7__wrap23) = 0;
            while ( 2 )
            {
              if ( !*p_basePieceBasePieceRouteList_5__23 )
                sub_B0D97C(this);
              if ( v216 >= SLODWORD((*p_basePieceBasePieceRouteList_5__23)->fields._slots) )
              {
                *p_basePieceBasePieceRouteList_5__23 = 0LL;
                v311 = p_basePieceBasePieceRouteList_5__23;
                v126 = v515;
                sub_B0D840(v311, 0LL);
                v126->fields.__8__1 = 0LL;
                p__8__1 = &v126->fields.__8__1;
                sub_B0D840(&v126->fields.__8__1, 0LL);
                *(_QWORD *)&v126->fields._baseSquareIndex_5__10 = 0LL;
                p_baseSquareIndex_5__10 = (WarBoardSquareData_o **)&v126->fields._baseSquareIndex_5__10;
                sub_B0D840(&v126->fields._baseSquareIndex_5__10, 0LL);
                *(_QWORD *)&v126->fields._sumPieceActionCost_5__17 = 0LL;
                sub_B0D840(&v126->fields._sumPieceActionCost_5__17, 0LL);
                v126->fields._dicBaseDIRange_5__18 = 0LL;
                sub_B0D840(&v126->fields._dicBaseDIRange_5__18, 0LL);
                v126->fields._dicKeyPutIndexValueTargetData_5__19 = 0LL;
                sub_B0D840(&v126->fields._dicKeyPutIndexValueTargetData_5__19, 0LL);
                v126->fields._dicEnemyRange_5__20 = 0LL;
                sub_B0D840(&v126->fields._dicEnemyRange_5__20, 0LL);
                v126->fields._advantagePieceData_5__21 = 0LL;
                sub_B0D840(&v126->fields._advantagePieceData_5__21, 0LL);
                v126->fields._basePieceActionPieceRouteList_5__22 = 0LL;
                sub_B0D840(&v126->fields._basePieceActionPieceRouteList_5__22, 0LL);
                p__7__wrap8 = &v126->fields.__7__wrap8;
                p_masterSquareIndex_5__4 = &v126->fields._masterSquareIndex_5__4;
                p_piecePlaceData = &v126->fields.piecePlaceData;
                v493 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&v126->fields.routeDataList;
                goto LABEL_43;
              }
              v233 = sub_B0D974(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo, method, v2);
              System_Object___ctor((Il2CppObject *)v233, 0LL);
              v237 = *p_basePieceBasePieceRouteList_5__23;
              if ( !*p_basePieceBasePieceRouteList_5__23 )
                sub_B0D97C(v234);
              v238 = *(int *)p__7__wrap23;
              if ( (unsigned int)v238 >= LODWORD(v237->fields._slots) )
              {
                v492 = sub_B0D9A8(v234);
                sub_B0D948(v492, 0LL);
              }
              if ( !v233 )
                sub_B0D97C(v234);
              *(_DWORD *)(v233 + 16) = *(&v237->fields._count + v238);
              v239 = (int32_t *)(v233 + 16);
              v240 = (WarBoardAIRoute_RouteData_o *)sub_B0D974(WarBoardAIRoute_RouteData_TypeInfo, v235, v236);
              WarBoardAIRoute_RouteData___ctor(v240, v241);
              routeData = v240;
              if ( !v240 )
                sub_B0D97C(this);
              v242 = v515;
              getEnumeratorRetType = v515->fields.__7__wrap8.fields.getEnumeratorRetType;
              v240->fields.baseIndex = getEnumeratorRetType;
              v244 = *v239;
              v240->fields.actionIndex = *v239;
              if ( getEnumeratorRetType == v244 )
              {
                v245 = v242->fields.routeDataList;
                if ( !v245 )
                  sub_B0D97C(this);
                v242 = v515;
                if ( v245->fields._size > 0 )
                  goto LABEL_543;
              }
              dicBaseDIRange_5__18 = (System_Collections_Generic_IEnumerable_TSource__o *)v242->fields._dicBaseDIRange_5__18;
              v247 = WarBoardAIRoute___c_TypeInfo;
              if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v247 = WarBoardAIRoute___c_TypeInfo;
              }
              static_fields = v247->static_fields;
              _9__47_1 = static_fields->__9__47_1;
              if ( !_9__47_1 )
              {
                if ( (BYTE3(v247->vtable._0_Equals.methodPtr) & 4) != 0 && !v247->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v247);
                  static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v250 = (Il2CppObject *)static_fields->__9;
                _9__47_1 = (System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)sub_B0D974(
                                                                                                    System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo,
                                                                                                    method,
                                                                                                    v2);
                System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long____ctor(
                  _9__47_1,
                  v250,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
                  (const MethodInfo_260C060 *)Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long___ctor__);
                v251 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v251->__9__47_1 = _9__47_1;
                sub_B0D840(&v251->__9__47_1, _9__47_1);
                v247 = WarBoardAIRoute___c_TypeInfo;
              }
              if ( (BYTE3(v247->vtable._0_Equals.methodPtr) & 4) != 0 && !v247->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v247);
                v247 = WarBoardAIRoute___c_TypeInfo;
              }
              v252 = v247->static_fields;
              _9__47_2 = v252->__9__47_2;
              if ( !_9__47_2 )
              {
                v254 = p__7__wrap23;
                if ( (BYTE3(v247->vtable._0_Equals.methodPtr) & 4) != 0 && !v247->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v247);
                  v252 = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v255 = (Il2CppObject *)v252->__9;
                _9__47_2 = (System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)sub_B0D974(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo, method, v2);
                System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData____ctor(
                  _9__47_2,
                  v255,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
                  (const MethodInfo_260C394 *)Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData___ctor__);
                v256 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v256->__9__47_2 = _9__47_2;
                sub_B0D840(&v256->__9__47_2, _9__47_2);
                p__7__wrap23 = v254;
              }
              v257 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData_(
                                                                                                    dicBaseDIRange_5__18,
                                                                                                    (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                                    (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                                    (const MethodInfo_1B565EC *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
              v258 = routeData;
              if ( !routeData )
                sub_B0D97C(0LL);
              v259 = v515;
              v260 = *(struct WarBoardSquareData_o **)&v515->fields._baseSquareIndex_5__10;
              routeData->fields.baseSquare = v260;
              sub_B0D840(&v258->fields.baseSquare, v260);
              v261 = routeData;
              v264 = v259->fields.__8__1;
              v263 = &v259->fields.__8__1;
              v262 = v264;
              if ( !v264 )
                sub_B0D97C(routeData);
              if ( !routeData )
                sub_B0D97C(0LL);
              v265 = v262->fields.basePiece;
              routeData->fields.basePiece = v265;
              sub_B0D840(&v261->fields.basePiece, v265);
              v266 = routeData;
              if ( !routeData )
                sub_B0D97C(0LL);
              routeData->fields.actionPiece = 0LL;
              sub_B0D840(&v266->fields.actionPiece, 0LL);
              v267 = routeData;
              v268 = *v239;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              v269 = WarBoardAIManager__GetSquare(v268, 0LL);
              if ( !v267 )
                sub_B0D97C(v269);
              v267->fields.actionSquare = v269;
              sub_B0D840(&v267->fields.actionSquare, v269);
              dicKeyPutIndexValueTargetData_5__19 = v515->fields._dicKeyPutIndexValueTargetData_5__19;
              if ( !dicKeyPutIndexValueTargetData_5__19 )
                sub_B0D97C(0LL);
              v271 = routeData;
              if ( System_Collections_Generic_Dictionary_uint__int___get_Count(
                     (System_Collections_Generic_Dictionary_uint__int__o *)dicKeyPutIndexValueTargetData_5__19,
                     (const MethodInfo_2E245C8 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0 )
              {
                v274 = 0x7FFFFFFFLL;
                if ( !v271 )
                  goto LABEL_266;
              }
              else
              {
                v272 = v515->fields._dicKeyPutIndexValueTargetData_5__19;
                if ( !v272 )
                  sub_B0D97C(0LL);
                Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                           (System_Collections_Generic_Dictionary_uint__int__o *)v272,
                           (const MethodInfo_2E24770 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
                v274 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
                if ( !v271 )
LABEL_266:
                  sub_B0D97C(v274);
              }
              v271->fields.EnemyRangeMin = v274;
              if ( !*v263 )
                sub_B0D97C(v274);
              if ( !_4__this )
                sub_B0D97C(0LL);
              v275 = routeData;
              MoveByTargetDistance = WarBoardAIRoute__GetMoveByTargetDistance(
                                       _4__this,
                                       v257,
                                       *v239,
                                       (*v263)->fields.basePiece,
                                       0LL);
              if ( !v275 )
                sub_B0D97C(MoveByTargetDistance);
              v275->fields.dicPutIndexTargetData = MoveByTargetDistance;
              sub_B0D840(&v275->fields.dicPutIndexTargetData, MoveByTargetDistance);
              if ( !*v263 )
                sub_B0D97C(v277);
              v278 = routeData;
              ActionPiece = WarBoardAIRoute__GetActionPiece(
                              _4__this,
                              (*v263)->fields.basePiece,
                              *v239,
                              v515->fields.piecePlaceData,
                              0LL);
              if ( !v278 )
                sub_B0D97C(ActionPiece);
              v278->fields.actionPiece = ActionPiece;
              sub_B0D840(&v278->fields.actionPiece, ActionPiece);
              v281 = *v263;
              if ( !*v263 )
                sub_B0D97C(p_actionPiece);
              v282 = v281->fields.basePiece;
              if ( !v282 )
                sub_B0D97C(p_actionPiece);
              if ( v282->fields._nowSquareIndex_k__BackingField == *v239 )
              {
                if ( !routeData )
                  sub_B0D97C(0LL);
                p_actionPiece = &routeData->fields.actionPiece;
                v283 = routeData->fields.actionPiece;
                if ( v283 )
                {
                  if ( v283->fields._uniqueIndex_k__BackingField == v282->fields._uniqueIndex_k__BackingField )
                  {
                    *p_actionPiece = 0LL;
                    sub_B0D840(p_actionPiece, 0LL);
                    v281 = *v263;
                    if ( !*v263 )
                      sub_B0D97C(p_actionPiece);
                  }
                }
              }
              v284 = v281->fields.basePiece;
              if ( !v284 )
                sub_B0D97C(p_actionPiece);
              v285 = UnityEngine_Mathf__Abs_40818848(
                       v284->fields._limitActionCount_k__BackingField - v284->fields._currentActionCount_k__BackingField,
                       0LL);
              v286 = routeData;
              if ( !routeData )
                sub_B0D97C(v285);
              v287 = v515;
              routeData->fields.actionCountOnThisTurn = v285 + v515->fields._servantAndEnemyRange_5__14 + 1;
              baseSquare_5__11 = v287->fields._baseSquare_5__11;
              *(_QWORD *)&v286->fields.attackByLinkedEnemy = 0LL;
              v286->fields.flagNow = (int64_t)baseSquare_5__11;
              warBoardData_5__2 = v287->fields._warBoardData_5__2;
              if ( !warBoardData_5__2 )
                sub_B0D97C(0LL);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardData__GetWall(warBoardData_5__2, *v239, 0, 0LL);
              v290 = this;
              if ( this )
              {
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                if ( !this )
                  sub_B0D97C(0LL);
                if ( this[2].fields._servantAndEnemyRange_5__14 < _4__this->fields.wallAttackCost
                                                                + v515->fields._requiredCost_5__3 )
                  goto LABEL_543;
                if ( !*v263 )
                  sub_B0D97C(this);
                v291 = (*v263)->fields.basePiece;
                if ( !v291 )
                  sub_B0D97C(0LL);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableWallAttack(
                                                                     v291,
                                                                     v515->fields._servantAndEnemyMasterRange_5__15,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_543;
                if ( !*v263 )
                  sub_B0D97C(this);
                v292 = (*v263)->fields.basePiece;
                if ( !v292 )
                  sub_B0D97C(0LL);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__CheckWallAttackCond(
                                                                     v292,
                                                                     (WarBoardWallData_o *)v290,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_543;
              }
              if ( !routeData )
                sub_B0D97C(this);
              v293 = routeData->fields.actionPiece;
              if ( v293 )
              {
                if ( !*v263 )
                  sub_B0D97C(this);
                v294 = (*v263)->fields.basePiece;
                if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                }
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsEnemyPiece(v294, v293, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !*v263 )
                    sub_B0D97C(this);
                  v295 = (*v263)->fields.basePiece;
                  if ( !v295 )
                    sub_B0D97C(0LL);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v295, 0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_251;
                  if ( !routeData )
                    sub_B0D97C(this);
                  v296 = routeData->fields.actionPiece;
                  if ( !v296 )
                    sub_B0D97C(0LL);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v296, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_251:
                    v297 = routeData;
                    if ( !routeData )
                      sub_B0D97C(this);
                    v298 = routeData->fields.basePiece;
                    routeData->fields.flagNow |= 2uLL;
                    if ( !v298 )
                      sub_B0D97C(this);
                    v299 = v297->fields.actionPiece;
                    v297->fields.attackCountOnThisTurn = v298->fields._attackCount_k__BackingField + 1;
                    if ( !v299 )
                      sub_B0D97C(0LL);
                    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isServant(v299, 0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v300 = routeData;
                      if ( !routeData )
                        sub_B0D97C(this);
                      if ( !*v263 )
                        sub_B0D97C(this);
                      v301 = (*v263)->fields.basePiece;
                      if ( !v301 )
                        sub_B0D97C(this);
                      battleServant_k__BackingField = v301->fields._battleServant_k__BackingField;
                      if ( !battleServant_k__BackingField )
                        sub_B0D97C(0LL);
                      v303 = p_basePieceBasePieceRouteList_5__23;
                      flagNow = routeData->fields.flagNow;
                      ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
                      if ( !routeData )
                        sub_B0D97C(ClassId);
                      v306 = routeData->fields.actionPiece;
                      if ( !v306 )
                        sub_B0D97C(ClassId);
                      v307 = ClassId;
                      v308 = v306->fields._battleServant_k__BackingField;
                      if ( !v308 )
                        sub_B0D97C(0LL);
                      v309 = BattleServantData__getClassId(v308, 0LL);
                      FlagAdvantage = WarBoardAIRoute__GetFlagAdvantage(_4__this, v307, v309, 0LL);
                      v300->fields.flagNow = FlagAdvantage | flagNow;
                      if ( !routeData )
                        sub_B0D97C(FlagAdvantage);
                      WarBoardAIRoute__LinkedCount(
                        _4__this,
                        *v239,
                        v515->fields.piecePlaceData,
                        &routeData->fields.attackByLinkedEnemy,
                        &routeData->fields.attackByLinkedAlly,
                        0LL);
                      p_basePieceBasePieceRouteList_5__23 = v303;
                    }
                    break;
                  }
LABEL_543:
                  v216 = *(_DWORD *)p__7__wrap23 + 1;
                  *(_DWORD *)p__7__wrap23 = v216;
                  continue;
                }
                if ( !routeData )
                  sub_B0D97C(this);
                v312 = routeData->fields.actionPiece;
                if ( !v312 )
                  sub_B0D97C(this);
                if ( v312->fields._roleType_k__BackingField == 1 )
                  goto LABEL_543;
                if ( !*v263 )
                  sub_B0D97C(this);
                v313 = (*v263)->fields.basePiece;
                if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                }
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsAllyPiece(v313, v312, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !routeData )
                    sub_B0D97C(this);
                  routeData->fields.flagNow |= 0x4000000uLL;
                }
              }
              break;
            }
            v314 = routeData;
            if ( !routeData )
              sub_B0D97C(this);
            if ( (routeData->fields.flagNow & 2) != 0 )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_B0D97C(0LL);
              if ( this[2].fields._servantAndEnemyRange_5__14 < _4__this->fields.attackCost
                                                              + v515->fields._requiredCost_5__3 )
                goto LABEL_543;
              if ( !*v263 )
                sub_B0D97C(this);
              v333 = (*v263)->fields.basePiece;
              if ( !v333 )
                sub_B0D97C(0LL);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableAttack(
                                                                   v333,
                                                                   v515->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_543;
              v314 = routeData;
              if ( !routeData )
                sub_B0D97C(this);
            }
            if ( (v314->fields.flagNow & 2) == 0 )
            {
              if ( !*v263 )
                sub_B0D97C(this);
              v315 = (*v263)->fields.basePiece;
              if ( !v315 )
                sub_B0D97C(0LL);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableMoveBySelf(
                                                                   v315,
                                                                   v515->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_543;
              v314 = routeData;
              if ( !routeData )
                sub_B0D97C(this);
            }
            if ( (v314->fields.flagNow & 0x4000000) != 0 )
            {
              if ( !*v263 )
                sub_B0D97C(this);
              v316 = v515;
              v317 = v515->fields.routeDataList;
              if ( !v317 )
                sub_B0D97C(0LL);
              v318 = (*v263)->fields.basePiece;
              v319 = v314->fields.actionPiece;
              requiredCost_5__3 = v515->fields._requiredCost_5__3;
              v321 = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                       v317,
                       (const MethodInfo_2FC5968 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIRoute__IsActableReplace(
                                                                   _4__this,
                                                                   v318,
                                                                   v319,
                                                                   requiredCost_5__3,
                                                                   (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v321,
                                                                   v316->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_543;
              v314 = routeData;
            }
            v494 = p__7__wrap23;
            v497 = p_basePieceBasePieceRouteList_5__23;
            piecePlaceData = WarBoardAIRoute__UpdatePiecePlaceData(
                               _4__this,
                               v515->fields.piecePlaceData,
                               v314,
                               v515->fields.__7__wrap8.fields.getEnumeratorRetType,
                               *v239,
                               0LL);
            MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
                                               _4__this,
                                               piecePlaceData,
                                               0LL);
            basePieceActionPieceRouteList_5__22 = (System_Collections_Generic_IEnumerable_TSource__o *)v515->fields._basePieceActionPieceRouteList_5__22;
            v326 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                        System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                                                        v324,
                                                                                        v325);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v326,
              (Il2CppObject *)v233,
              Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
              (const MethodInfo_26189B8 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
            DefenseAreaData = (DefenseAreaData_o *)System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
                                                     basePieceActionPieceRouteList_5__22,
                                                     (System_Func_TSource__bool__o *)v326,
                                                     (const MethodInfo_171B1E8 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)DefenseAreaData & 1) != 0
              || (advantagePieceData_5__21 = v515->fields._advantagePieceData_5__21,
                  v331 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                              System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                                                              v328,
                                                                                              v329),
                  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                    v331,
                    (Il2CppObject *)v233,
                    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
                    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__),
                  DefenseAreaData = (DefenseAreaData_o *)System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)advantagePieceData_5__21,
                                                           (System_Func_TSource__bool__o *)v331,
                                                           (const MethodInfo_171B1E8 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___),
                  ((unsigned __int8)DefenseAreaData & 1) != 0) )
            {
              if ( !routeData )
                sub_B0D97C(DefenseAreaData);
              routeData->fields.flagNow |= 0x20000000000uLL;
            }
            if ( v515->fields._masterExists_5__8 )
            {
              if ( v515->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
                goto LABEL_306;
              if ( !routeData )
                sub_B0D97C(DefenseAreaData);
              if ( (routeData->fields.flagNow & 0x400) != 0 )
              {
LABEL_306:
                v334 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                         _4__this,
                         piecePlaceData,
                         MasterSquareIndexFromPlaceData,
                         0LL);
                DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                                    _4__this,
                                    MasterSquareIndexFromPlaceData,
                                    v334,
                                    piecePlaceData,
                                    0LL);
                defenseAreaData_5__7 = DefenseAreaData;
                if ( !DefenseAreaData )
LABEL_672:
                  sub_B0D97C(DefenseAreaData);
              }
              else
              {
                defenseAreaData_5__7 = v515->fields._defenseAreaData_5__7;
                if ( !defenseAreaData_5__7 )
                  goto LABEL_672;
              }
              v335 = _4__this->fields.aiRouteMasterData;
              if ( !v335 )
                sub_B0D97C(DefenseAreaData);
              IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                                       defenseAreaData_5__7->fields._ShortestRoutes_k__BackingField,
                                                       piecePlaceData,
                                                       v335->fields.masterType == 1,
                                                       0LL);
              v337 = routeData;
              if ( IsAllBlockShortestRouteEnemyAndMastr )
              {
                if ( !routeData )
                  sub_B0D97C(IsAllBlockShortestRouteEnemyAndMastr);
                routeData->fields.flagNow |= 0x40000000uLL;
              }
              else if ( !routeData )
              {
                sub_B0D97C(IsAllBlockShortestRouteEnemyAndMastr);
              }
              v338 = v337->fields.flagNow;
              if ( (v338 & 0x400) != 0 && (defenseAreaData_5__7->fields._Flag_k__BackingField & 0x10000000000LL) != 0 )
                v337->fields.flagNow = v338 | 0x40000000000LL;
            }
            else
            {
              v337 = routeData;
            }
            v339 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v328, v329);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v339,
              (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v337 )
              sub_B0D97C(v340);
            v337->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v339;
            sub_B0D840(&v337->fields.moveByLinkedPiece, v339);
            v344 = routeData;
            if ( !routeData )
              sub_B0D97C(v341);
            *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0LL;
            v345 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_uint__int__TypeInfo,
                                                                           v342,
                                                                           v343);
            System_Collections_Generic_Dictionary_uint__int____ctor(
              v345,
              (const MethodInfo_2E23E24 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
            v344->fields.dicUniqueKeyRange = v345;
            sub_B0D840(&v344->fields.dicUniqueKeyRange, v345);
            v346 = v515->fields.piecePlaceData;
            if ( !v346 )
              sub_B0D97C(0LL);
            System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
              &v499,
              v346,
              (const MethodInfo_2E981A4 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
            *(_OWORD *)&v508.fields.dictionary = *(_OWORD *)&v499.fields.dictionary;
            v508.fields.current = v499.fields.current;
            while ( 1 )
            {
              v347 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                       &v508,
                       (const MethodInfo_2812868 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
              if ( !v347 )
                break;
              if ( !*v263 )
                sub_B0D97C(v347);
              v348 = (*v263)->fields.basePiece;
              if ( !v348 )
                sub_B0D97C(v347);
              key_high = HIDWORD(v508.fields.current.fields.key);
              if ( v348->fields._uniqueIndex_k__BackingField != HIDWORD(v508.fields.current.fields.key) )
              {
                if ( !routeData )
                  sub_B0D97C(v347);
                v350 = (int32_t)v508.fields.current.fields.key;
                dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
                v352 = *v239;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v353 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v352,
                                                                              v350,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v354 = System_Linq_Enumerable__Count_int_(
                         v353,
                         (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !dicUniqueKeyRange )
                  sub_B0D97C(v354);
                System_Collections_Generic_Dictionary_uint__int___Add(
                  dicUniqueKeyRange,
                  key_high,
                  v354,
                  (const MethodInfo_2E249C8 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
              }
            }
            v502[v503++] = 2813;
            System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
              &v508,
              (const MethodInfo_28129B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
            if ( v503 && v502[v503 - 1] == 2813 )
              --v503;
            v357 = routeData;
            v358 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                               System_Collections_Generic_List_int__TypeInfo,
                                                               v355,
                                                               v356);
            System_Collections_Generic_List_int____ctor(
              v358,
              (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v357 )
              sub_B0D97C(v359);
            v357->fields.listExistDesignationItem = v358;
            sub_B0D840(&v357->fields.listExistDesignationItem, v358);
            v360 = routeData;
            v363 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                           v361,
                                                                           v362);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v363,
              (const MethodInfo_2E61370 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( !v360 )
              sub_B0D97C(v364);
            v360->fields.dicMoveByServantGetDesignationItem = v363;
            sub_B0D840(&v360->fields.dicMoveByServantGetDesignationItem, v363);
            v365 = routeData;
            v368 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo,
                                                                                                   v366,
                                                                                                   v367);
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType____ctor(
              v368,
              (const MethodInfo_2E8802C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
            if ( !v365 )
              sub_B0D97C(v369);
            v365->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = v368;
            sub_B0D840(&v365->fields.dicItemIdKeyIsMoveByServantDesignationItemRange, v368);
            v371 = routeData;
            if ( !routeData )
              sub_B0D97C(v370);
            routeData->fields.isMoveByOutOfWarningArea = 0;
            *(_QWORD *)&v371->fields.isMoveByServantAndEnemyRange = 0LL;
            *(_QWORD *)&v371->fields.isMoveByMasterAndEnemyRange = 0LL;
            *(_QWORD *)&v371->fields.isMoveByServantAndAttackAdvantageServantRange = 0LL;
            *(_QWORD *)&v371->fields.isMoveByServantAndDefenseAdvantageServantRange = 0LL;
            *(_QWORD *)&v371->fields.isMoveByServantAndClassAdvantageServantRange = 0LL;
            if ( !*v263 )
              sub_B0D97C(v370);
            v372 = (*v263)->fields.basePiece;
            if ( !v372 )
              sub_B0D97C(0LL);
            IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isServant(v372, 0LL);
            if ( IsBlockShortestRouteEnemyAndMaster )
            {
              if ( v515->fields._masterExists_5__8 )
              {
                if ( !*v263 )
                  sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                v375 = (*v263)->fields.basePiece;
                if ( !v375 )
                  sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                v376 = _4__this->fields.aiRouteMasterData;
                if ( !v376 )
                  sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                if ( v376->fields.masterType != 2
                  || v376->fields.masterPieceIndex != v375->fields._index_k__BackingField )
                {
                  v377 = v515->fields._defenseAreaData_5__7;
                  if ( !v377 )
                    sub_B0D97C(0LL);
                  IsBlockShortestRouteEnemyAndMaster = DefenseAreaData__IsInDefenseArea(v377, *v239, 0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                    routeData->fields.flagNow |= 0x4000000000uLL;
                  }
                }
                if ( !*v263 )
                  sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                v378 = (*v263)->fields.basePiece;
                if ( !v378 )
                  sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                v379 = _4__this->fields.aiRouteMasterData;
                if ( !v379 )
                  sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                v380 = v379->fields.masterType;
                if ( v380 != 2 || v379->fields.masterPieceIndex != v378->fields._index_k__BackingField )
                {
                  IsBlockShortestRouteEnemyAndMaster = WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                                                         v515->fields._defenseAreaData_5__7,
                                                         *v239,
                                                         v380 == 1,
                                                         0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                    routeData->fields.flagNow |= 0x100000000uLL;
                  }
                }
                if ( !*v263 )
                  sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                v381 = (*v263)->fields.basePiece;
                if ( !v381 )
                  sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                v382 = _4__this->fields.aiRouteMasterData;
                if ( !v382 )
                  sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                if ( v382->fields.masterType != 2
                  || v382->fields.masterPieceIndex != v381->fields._index_k__BackingField )
                {
                  v383 = *v239;
                  if ( *v239 == MasterSquareIndexFromPlaceData )
                  {
                    if ( !routeData )
                      sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                    routeData->fields.isMoveByServantAndMasterRange = 2;
                  }
                  else
                  {
                    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AStarSearch_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                    }
                    v384 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                                  0LL,
                                                                                  v383,
                                                                                  MasterSquareIndexFromPlaceData,
                                                                                  0,
                                                                                  0LL,
                                                                                  0LL);
                    v385 = System_Linq_Enumerable__Count_int_(
                             v384,
                             (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
                    v386 = routeData;
                    v387 = WarBoardAIRoute__CalcurateDistanceType(v385, v515->fields._tmpFlagNow_5__12, 0LL);
                    if ( !v386 )
                      sub_B0D97C(v387);
                    v386->fields.isMoveByServantAndMasterRange = v387;
                  }
                }
              }
              v388 = *(System_Collections_Generic_Dictionary_int__int__o **)&v515->fields._sumPieceActionCost_5__17;
              if ( !v388 )
                sub_B0D97C(0LL);
              System_Collections_Generic_Dictionary_int__int___GetEnumerator(
                &v499,
                v388,
                (const MethodInfo_2E69DC8 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
              v506 = *(_OWORD *)&v499.fields.dictionary;
              endSquare = v499.fields.current;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
                        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v506,
                        (const MethodInfo_280E1C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
              {
                v389 = (int32_t)endSquare.fields.key;
                v390 = HIDWORD(endSquare.fields.key);
                v391 = *v239;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v392 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v391,
                                                                              v389,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v393 = System_Linq_Enumerable__Count_int_(
                         v392,
                         (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !routeData )
                  sub_B0D97C(v393);
                dicItemIdKeyIsMoveByServantDesignationItemRange = routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
                v395 = WarBoardAIRoute__CalcurateDistanceType(v393, v390, 0LL);
                if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
                  sub_B0D97C(v395);
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___set_Item(
                  dicItemIdKeyIsMoveByServantDesignationItemRange,
                  v389,
                  v395,
                  (const MethodInfo_2E88BA8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
                if ( !routeData )
                  sub_B0D97C(v396);
                dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
                if ( !dicMoveByServantGetDesignationItem )
                  sub_B0D97C(0LL);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  dicMoveByServantGetDesignationItem,
                  v389,
                  *v239 == v389,
                  (const MethodInfo_2E61F20 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
                if ( !routeData )
                  sub_B0D97C(v398);
                listExistDesignationItem = routeData->fields.listExistDesignationItem;
                if ( !listExistDesignationItem )
                  sub_B0D97C(0LL);
                System_Collections_Generic_List_int___Add(
                  listExistDesignationItem,
                  v389,
                  (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
              }
              v502[v503++] = 3406;
              System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v506,
                (const MethodInfo_280E30C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
              if ( v503 && v502[v503 - 1] == 3406 )
                --v503;
              v400 = *v239;
              enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
              if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AStarSearch_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
              }
              v402 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                            0LL,
                                                                            v400,
                                                                            enemyMasterSquareIndex,
                                                                            0,
                                                                            0LL,
                                                                            0LL);
              v403 = System_Linq_Enumerable__Count_int_(
                       v402,
                       (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
              v404 = routeData;
              v405 = WarBoardAIRoute__CalcurateDistanceType(v403, v515->fields._servantAndMasterRange_5__13, 0LL);
              if ( !v404 )
                sub_B0D97C(v405);
              v404->fields.isMoveByServantAndEnemyMasterRange = v405;
              v407 = routeData;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_42126C5 )
              {
                sub_B0D8A4(&WarBoardAIManager_TypeInfo, v406);
                byte_42126C5 = 1;
              }
              v408 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v408 = WarBoardAIManager_TypeInfo;
              }
              v409 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v408->static_fields->dicSquareIndexEnemyPiece,
                       HIDWORD(v515->fields._tmpFlagNow_5__12),
                       *v239,
                       0LL);
              if ( !v407 )
                sub_B0D97C(v409);
              v410 = v515;
              v407->fields.isMoveByServantAndEnemyRange = v409;
              WarBoardAIRoute__ClassAdvantageDistance(
                _4__this,
                &routeData,
                (WarBoardAIRoute_AdvantagePieceData_o *)v410->fields._dicEnemyRange_5__20,
                *v239,
                0LL);
            }
            v411 = _4__this->fields.aiRouteMasterData;
            if ( !v411 )
              sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
            if ( v411->fields.masterType )
            {
LABEL_407:
              if ( v411->fields.masterType == 2 )
              {
                if ( !*v263 )
                  sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                v413 = (*v263)->fields.basePiece;
                if ( !v413 )
                  sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                if ( v413->fields._index_k__BackingField == v411->fields.masterPieceIndex )
                  goto LABEL_411;
              }
            }
            else
            {
              if ( !*v263 )
                sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
              v412 = (*v263)->fields.basePiece;
              if ( !v412 )
                sub_B0D97C(0LL);
              IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isMaster(v412, 0LL);
              if ( !IsBlockShortestRouteEnemyAndMaster )
              {
                v411 = _4__this->fields.aiRouteMasterData;
                if ( !v411 )
                  sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                goto LABEL_407;
              }
LABEL_411:
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_42126C5 )
              {
                sub_B0D8A4(&WarBoardAIManager_TypeInfo, v374);
                byte_42126C5 = 1;
              }
              v414 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v414 = WarBoardAIManager_TypeInfo;
              }
              dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v414->static_fields->dicSquareIndexEnemyPiece;
              if ( !dicSquareIndexEnemyPiece )
                sub_B0D97C(0LL);
              Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                       dicSquareIndexEnemyPiece,
                       (const MethodInfo_2E90034 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
              if ( !Keys )
                sub_B0D97C(0LL);
              System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData___GetEnumerator(
                (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v499,
                Keys,
                (const MethodInfo_20109B0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
              v505.fields.currentKey = v499.fields.current.fields.key;
              *(_OWORD *)&v505.fields.dictionary = *(_OWORD *)&v499.fields.dictionary;
              while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___MoveNext(
                        &v505,
                        (const MethodInfo_28116BC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                currentKey = (int32_t)v505.fields.currentKey;
                v418 = *v239;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v419 = AStarSearch__RouteSearch(0LL, v418, currentKey, 0, 0LL, 0LL);
                if ( !v419 )
                  sub_B0D97C(0LL);
                v420 = _4__this->fields.npcData;
                if ( !v420 )
                  sub_B0D97C(v419);
                if ( (signed int)(v419->max_length - 1) <= v420->fields.defenseArea )
                {
                  if ( !routeData )
                    sub_B0D97C(v419);
                  routeData->fields.flagNow |= 0x8000000000uLL;
                  break;
                }
              }
              v502[v503++] = 3697;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___Dispose(
                &v505,
                (const MethodInfo_28116B8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( v503 && v502[v503 - 1] == 3697 )
                --v503;
              v422 = routeData;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_42126C5 )
              {
                sub_B0D8A4(&WarBoardAIManager_TypeInfo, v421);
                byte_42126C5 = 1;
              }
              v423 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v423 = WarBoardAIManager_TypeInfo;
              }
              v424 = v515->fields._defenseAreaData_5__7;
              if ( !v424 )
                sub_B0D97C(v423);
              v425 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v423->static_fields->dicSquareIndexEnemyPiece,
                       v424->fields._MasterAndEnemyRange_k__BackingField,
                       *v239,
                       0LL);
              if ( !v422 )
                sub_B0D97C(v425);
              v422->fields.isMoveByMasterAndEnemyRange = v425;
              p_basePieceBasePieceRouteList_5__23 = v497;
              if ( !byte_42126C5 )
              {
                sub_B0D8A4(&WarBoardAIManager_TypeInfo, v426);
                byte_42126C5 = 1;
              }
              v427 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v427 = WarBoardAIManager_TypeInfo;
              }
              v428 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v427->static_fields->dicSquareIndexEnemyPiece;
              if ( !v428 )
                sub_B0D97C(0LL);
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
                &v499,
                v428,
                (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
              v504 = v499;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                        &v504,
                        (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                v429 = (int32_t)v504.fields.current.fields.key;
                v430 = *v239;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v431 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v430,
                                                                              v429,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                System_Linq_Enumerable__Count_int_(
                  v431,
                  (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !WarBoardAIRoute__IsDetour((System_Int32_array *)v431, v515->fields._allyPieceIndexs_5__5, 0LL) )
                {
                  v432 = 0;
                  goto LABEL_458;
                }
              }
              v432 = 1;
LABEL_458:
              v502[v503++] = 3829;
              System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
                &v504,
                (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( v503 && v502[v503 - 1] == 3829 )
                --v503;
              if ( v432 )
              {
                if ( !routeData )
                  sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
                routeData->fields.flagNow |= 0x1000000000uLL;
              }
            }
            v433 = routeData;
            if ( !routeData )
              sub_B0D97C(IsBlockShortestRouteEnemyAndMaster);
            v434 = piecePlaceData;
            if ( !routeData->fields.actionPiece || (routeData->fields.flagNow & 0x4000000) != 0 )
            {
              v435 = v515->fields._warBoardData_5__2;
              if ( !v435 )
                sub_B0D97C(0LL);
              Effect = WarBoardData__GetEffect(v435, *v239, 0LL);
              if ( Effect )
              {
                if ( !routeData )
                  sub_B0D97C(Effect);
                routeData->fields.flagNow |= 0x200000000uLL;
              }
              v439 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                                 System_Collections_Generic_List_int__TypeInfo,
                                                                 v437,
                                                                 v438);
              System_Collections_Generic_List_int____ctor(
                v439,
                (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
              v440 = v515->fields.routeDataList;
              if ( !v440 )
                sub_B0D97C(0LL);
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v499,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v440,
                (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
              v512.fields.current = v499.fields.current.fields.key;
              *(_OWORD *)&v512.fields.list = *(_OWORD *)&v499.fields.dictionary;
              while ( 1 )
              {
                v441 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v512,
                         (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
                if ( !v441 )
                  break;
                v442 = v512.fields.current;
                if ( !v512.fields.current )
                  sub_B0D97C(v441);
                if ( (BYTE3(v512.fields.current[1].klass) & 8) != 0 )
                {
                  v443 = v512.fields.current[3].klass;
                  if ( !v443 )
                    sub_B0D97C(0LL);
                  v444 = WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v443, 0LL);
                  if ( v444 )
                  {
                    if ( !v439 )
                      sub_B0D97C(v444);
                    System_Collections_Generic_List_int___Add(
                      v439,
                      HIDWORD(v442[1].monitor),
                      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
                  }
                  if ( (BYTE3(v442[1].klass) & 4) != 0 )
                  {
                    v445 = (WarBoardPieceData_o *)v442[3].klass;
                    if ( !v445 )
                      sub_B0D97C(0LL);
                    if ( WarBoardPieceData__get_isMaster(v445, 0LL) )
                    {
                      v446 = (WarBoardPieceData_o *)v442[3].monitor;
                      if ( !v446 )
                        sub_B0D97C(0LL);
                      v447 = WarBoardPieceData__get_isServant(v446, 0LL);
                      if ( v447 )
                      {
                        if ( !v439 )
                          sub_B0D97C(v447);
                        System_Collections_Generic_List_int___Add(
                          v439,
                          (int32_t)v442[1].monitor,
                          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
                      }
                    }
                  }
                }
              }
              v502[v503++] = 4082;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v512,
                (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
              p_basePieceBasePieceRouteList_5__23 = v497;
              v434 = piecePlaceData;
              if ( v503 && v502[v503 - 1] == 4082 )
                --v503;
              if ( !routeData )
                sub_B0D97C(v448);
              v449 = routeData->fields.basePiece;
              if ( !v449 )
                sub_B0D97C(0LL);
              v450 = WarBoardPieceData__get_isServant(v449, 0LL);
              if ( v450 )
              {
                if ( !routeData )
                  sub_B0D97C(v450);
                CanAcquireItem = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v439, 0LL);
                if ( CanAcquireItem )
                {
                  v452 = routeData;
                  if ( !routeData )
                    sub_B0D97C(CanAcquireItem);
                  v453 = routeData->fields.flagNow | 0x18000000;
                  goto LABEL_497;
                }
              }
              else
              {
                if ( !routeData )
                  sub_B0D97C(v450);
                v454 = routeData->fields.basePiece;
                if ( !v454 )
                  sub_B0D97C(0LL);
                isMaster = WarBoardPieceData__get_isMaster(v454, 0LL);
                if ( isMaster )
                {
                  if ( !routeData )
                    sub_B0D97C(isMaster);
                  v456 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v439, 0LL);
                  v457 = routeData;
                  if ( v456 )
                  {
                    if ( !routeData )
                      sub_B0D97C(v456);
                    routeData->fields.flagNow |= 0x10000000uLL;
                  }
                  else if ( !routeData )
                  {
                    sub_B0D97C(v456);
                  }
                  if ( (v457->fields.flagNow & 0x4000000) != 0 )
                  {
                    v458 = v457->fields.actionPiece;
                    if ( !v458 )
                      sub_B0D97C(0LL);
                    v459 = WarBoardPieceData__get_isServant(v458, 0LL);
                    if ( v459 )
                    {
                      if ( !routeData )
                        sub_B0D97C(v459);
                      v460 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.baseIndex, v439, 0LL);
                      if ( v460 )
                      {
                        v452 = routeData;
                        if ( !routeData )
                          sub_B0D97C(v460);
                        v453 = routeData->fields.flagNow | 0x8000000;
LABEL_497:
                        v452->fields.flagNow = v453;
                      }
                    }
                  }
                }
              }
              WarBoardAIRoute__LinkedPieceCount(_4__this, &routeData, piecePlaceData, v439, 0LL);
              v433 = routeData;
              if ( !routeData )
                sub_B0D97C(v461);
            }
            FlagOutOfWarningAreaToDistance = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                               _4__this,
                                               v433->fields.baseIndex,
                                               v433->fields.actionIndex,
                                               0LL);
            v433->fields.isMoveByOutOfWarningArea = FlagOutOfWarningAreaToDistance;
            v463 = routeData;
            p__7__wrap23 = v494;
            if ( !routeData )
              sub_B0D97C(FlagOutOfWarningAreaToDistance);
            evalOffsetMagnification = routeData->fields.evalOffsetMagnification;
            if ( !evalOffsetMagnification )
              sub_B0D97C(FlagOutOfWarningAreaToDistance);
            evalOffsetMagnification->fields.isAttack = (routeData->fields.flagNow & 2) != 0;
            v465 = v463->fields.basePiece;
            if ( !v465 )
              sub_B0D97C(FlagOutOfWarningAreaToDistance);
            piecePersonalityDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)_4__this->fields.piecePersonalityDic;
            if ( !piecePersonalityDic )
              sub_B0D97C(0LL);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                 piecePersonalityDic,
                                                                 v465->fields._index_k__BackingField,
                                                                 &value,
                                                                 (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v467 = (WarBoardAIRoute_PiecePersonality_o *)value;
              v468 = (WarBoardAIEvalCalcurater_o *)sub_B0D974(WarBoardAIEvalCalcurater_TypeInfo, method, v2);
              WarBoardAIEvalCalcurater___ctor(v468, v467, 0LL);
              if ( !v468 )
                sub_B0D97C(v469);
              WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v468, &routeData, 0LL);
              WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
                v468,
                &routeData,
                _4__this->fields.averageBenefitValue,
                0LL);
              if ( !routeData )
                sub_B0D97C(0LL);
              WarBoardAIRoute_RouteData__CalcEvalValue(routeData, v470);
              v473 = WarBoardAIRoute___c_TypeInfo;
              v474 = v515->fields.routeDataList;
              if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v473 = WarBoardAIRoute___c_TypeInfo;
              }
              v475 = v473->static_fields;
              _9__47_5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v475->__9__47_5;
              if ( !_9__47_5 )
              {
                if ( (BYTE3(v473->vtable._0_Equals.methodPtr) & 4) != 0 && !v473->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v473);
                  v434 = piecePlaceData;
                  v475 = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v477 = (Il2CppObject *)v475->__9;
                _9__47_5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo, v471, v472);
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
                  _9__47_5,
                  v477,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__,
                  (const MethodInfo_261A104 *)Method_System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___ctor__);
                v478 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v478->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
                sub_B0D840(&v478->__9__47_5, _9__47_5);
                p__7__wrap23 = v494;
              }
              v479 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v474,
                                                                      (System_Func_TSource__TResult__o *)_9__47_5,
                                                                      (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
              v482 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                                       System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo,
                                                                                       v480,
                                                                                       v481);
              System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
                v482,
                v479,
                (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___67908072);
              if ( !v482 )
                sub_B0D97C(v483);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v482,
                (EventMissionProgressRequest_Argument_ProgressData_o *)routeData,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__);
              v484 = BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                       (System_Collections_Generic_List_T__o *)v482,
                       v482->fields._size - 2,
                       0LL,
                       (const MethodInfo_1709420 *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
              route = v484;
              if ( v484 )
              {
                if ( !routeData )
                  sub_B0D97C(v484);
                if ( routeData->fields.basePiece == v484->fields.basePiece )
                {
                  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
                    v468,
                    &route,
                    routeData,
                    0LL);
                  if ( !route )
                    sub_B0D97C(0LL);
                  WarBoardAIRoute_RouteData__CalcEvalValue(route, v485);
                }
              }
              allRouteList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allRouteList;
              if ( !allRouteList )
                sub_B0D97C(0LL);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                allRouteList,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v482,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
              if ( !routeData )
                sub_B0D97C(this);
              if ( routeData->fields.baseIndex != routeData->fields.actionIndex && (routeData->fields.flagNow & 2) == 0 )
              {
                searchCount = v515->fields.searchCount;
                if ( searchCount != 1 )
                {
                  v490 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(_4__this, v434, searchCount, v482, 0LL);
                  v491 = v515;
                  v515->fields.__2__current = v490;
                  sub_B0D840(&v491->fields.__2__current, v490);
                  result = 1;
                  v515->fields.__1__state = 1;
                  return result;
                }
                dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
                v489 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(_4__this, v434, 1, v482, 0LL);
                if ( !routeData )
                  sub_B0D97C(v489);
                if ( !dictionaryCreateRouteDataEvalValue )
                  sub_B0D97C(v489);
                System_Collections_Generic_Dictionary_object__float___Add(
                  dictionaryCreateRouteDataEvalValue,
                  v489,
                  routeData->fields.evalValue,
                  (const MethodInfo_2E72140 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
              }
            }
            goto LABEL_543;
          }
        }
        v190 = v515;
        WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v515, v131);
        *(_OWORD *)&p__7__wrap8->fields.dictionary = 0u;
        p__7__wrap8->fields.current = 0u;
        if ( v190->fields.searchCount != 1 )
          return 0;
        if ( !_4__this )
          sub_B0D97C(v191);
        v194 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        v195 = WarBoardAIRoute___c_TypeInfo;
        if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v195 = WarBoardAIRoute___c_TypeInfo;
        }
        v196 = v195->static_fields;
        _9__47_6 = (System_Func_T__TResult__o *)v196->__9__47_6;
        if ( !_9__47_6 )
        {
          if ( (BYTE3(v195->vtable._0_Equals.methodPtr) & 4) != 0 && !v195->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v195);
            v196 = WarBoardAIRoute___c_TypeInfo->static_fields;
          }
          v198 = (Il2CppObject *)v196->__9;
          _9__47_6 = (System_Func_T__TResult__o *)sub_B0D974(
                                                    System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo,
                                                    v192,
                                                    v193);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v198,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            (const MethodInfo_260ECF4 *)Method_System_Func_KeyValuePair_IEnumerator__float___float___ctor__);
          v199 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v199->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_B0D840(&v199->__9__47_6, _9__47_6);
        }
        v200 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__float___float_(
                 v194,
                 (System_Func_TSource__TKey__o *)_9__47_6,
                 (const MethodInfo_1B4EB00 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v515->fields._servantAndEnemyMasterRange_5__15 = 0;
        v201 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v201 )
          sub_B0D97C(0LL);
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v201,
                  (const MethodInfo_2E71D3C *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v203 = _4__this->fields.npcData;
        if ( !v203 )
          sub_B0D97C(Count);
        v204 = (float)((float)v203->fields.calcEllipsis / 100.0) * (float)(int)Count;
        v205 = v515;
        if ( v204 == INFINITY )
          v206 = -v204;
        else
          v206 = v204;
        v207 = (int)v206;
        v515->fields._servantAndEnemyRange_5__14 = (int)v206;
        v208 = _4__this->fields.npcData;
        if ( !v208 )
          sub_B0D97C(Count);
        calcEllipsisMin = v208->fields.calcEllipsisMin;
        if ( calcEllipsisMin > v207 )
          v207 = calcEllipsisMin;
        v205->fields._servantAndEnemyRange_5__14 = v207;
        if ( !v200 )
          sub_B0D97C(Count);
        v210 = v200->klass;
        if ( *(_WORD *)&v200->klass->_2.bitflags1 )
        {
          v211 = 0LL;
          p_offset = &v210->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            ++v211;
            p_offset += 4;
            if ( v211 >= *(unsigned __int16 *)&v200->klass->_2.bitflags1 )
              goto LABEL_118;
          }
          p_method = (__int64)&v210->vtable[*p_offset].method;
        }
        else
        {
LABEL_118:
          p_method = sub_AA67A0(
                       v200,
                       System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo,
                       0LL);
        }
        v217 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                 v200,
                 *(_QWORD *)(p_method + 8));
        p__7__wrap24 = &v515->fields.__7__wrap24;
        *(_QWORD *)&v515->fields.__7__wrap24 = v217;
        sub_B0D840(p__7__wrap24, v217);
        v515->fields.__1__state = -4;
        goto LABEL_126;
      }
    }
    v122 = WarBoardAIRoute__GetDefenseAreaData(
             _4__this,
             *p_masterSquareIndex_5__4,
             *p_allyPieceIndexs_5__5,
             *p_piecePlaceData,
             0LL);
    *p_defenseAreaData_5__7 = v122;
    sub_B0D840(p_defenseAreaData_5__7, v122);
    v124 = *p_defenseAreaData_5__7;
    if ( !*p_defenseAreaData_5__7 )
      sub_B0D97C(v123);
    v515->fields._baseFlag_5__6 |= v124->fields._Flag_k__BackingField;
    v125 = _4__this->fields.aiRouteMasterData;
    if ( !v125 )
      sub_B0D97C(v123);
    if ( WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
           v124->fields._ShortestRoutes_k__BackingField,
           *p_piecePlaceData,
           v125->fields.masterType == 1,
           0LL) )
    {
      v515->fields._baseFlag_5__6 |= 0x20000000uLL;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  if ( (byte_421267B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, method);
    byte_421267B = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &this->fields.__7__wrap8,
    (const MethodInfo_28129B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
}


void __fastcall WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  __int64 *v3; // x19
  __int64 v4; // x8
  unsigned __int64 v5; // x10
  int *v6; // x11
  __int64 v7; // x0

  if ( (byte_421267C & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, method);
    byte_421267C = 1;
  }
  v3 = *(__int64 **)&this->fields.__7__wrap24;
  this->fields.__1__state = -1;
  if ( v3 )
  {
    v4 = *v3;
    if ( *(_WORD *)(*v3 + 298) )
    {
      v5 = 0LL;
      v6 = (int *)(*(_QWORD *)(v4 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v6 - 1) != System_IDisposable_TypeInfo )
      {
        ++v5;
        v6 += 4;
        if ( v5 >= *(unsigned __int16 *)(*v3 + 298) )
          goto LABEL_8;
      }
      v7 = v4 + 16LL * *v6 + 312;
    }
    else
    {
LABEL_8:
      v7 = sub_AA67A0(v3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v7)(v3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall WarBoardAIRoute___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0

  if ( (byte_421266B & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIRoute___c_TypeInfo, v1);
    byte_421266B = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardAIRoute___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAIRoute___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_421266C & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_B0D8A4(&IWarBoardObjectData_TypeInfo, x);
    byte_421266C = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(x, IWarBoardObjectData_TypeInfo, 2LL);
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
  if ( (byte_421266D & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__,
      x.fields.key);
    byte_421266D = 1;
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
  if ( (byte_421266E & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__,
      x.fields.key);
    byte_421266E = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, (const MethodInfo *)x.fields.key);
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return WarBoardAIRoute_RouteData__ShallowCopy(x, (const MethodInfo *)x);
}


float __fastcall WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // s8

  value = x.fields.value;
  if ( (byte_421266F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__, x.fields.key);
    byte_421266F = 1;
  }
  return value;
}


int32_t __fastcall WarBoardAIRoute___c___GetTargetToDistanceUsingIndividuality_b__64_2(
        WarBoardAIRoute___c_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4212670 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_B0D8A4(&IWarBoardObjectData_TypeInfo, x);
    byte_4212670 = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 4].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(x, IWarBoardObjectData_TypeInfo, 4LL);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


int32_t __fastcall WarBoardAIRoute___c___GetTargetToDistanceUsingIndividuality_b__64_3(
        WarBoardAIRoute___c_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4212671 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_B0D8A4(&IWarBoardObjectData_TypeInfo, x);
    byte_4212671 = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(x, IWarBoardObjectData_TypeInfo, 5LL);
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
  if ( (byte_4212672 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__,
      *(_QWORD *)&x.fields.key);
    byte_4212672 = 1;
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
    sub_B0D97C(this);
  return !WarBoardItemData__get_Acquired(z, 0LL) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_B0D97C(this);
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
  WarBoardAIRoute___c__DisplayClass46_0_o *v4; // x20
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  IWarBoardObjectData_c *v9; // x8
  unsigned __int64 v10; // x10
  int32_t *v11; // x11
  __int64 v12; // x0

  v4 = this;
  if ( (byte_4212673 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_B0D8A4(&IWarBoardObjectData_TypeInfo, z);
    byte_4212673 = 1;
  }
  if ( !z )
    sub_B0D97C(this);
  klass = z->klass;
  if ( *(_WORD *)&z->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&z->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(z, IWarBoardObjectData_TypeInfo, 0LL);
  }
  if ( (*(unsigned int (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(z, *(_QWORD *)(p_method + 8)) != v4->fields.squareIndex )
    return 0;
  v9 = z->klass;
  if ( *(_WORD *)&z->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    v11 = &v9->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v11 - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v10;
      v11 += 4;
      if ( v10 >= *(unsigned __int16 *)&z->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v12 = (__int64)&v9->vtable[*v11 + 3].method;
  }
  else
  {
LABEL_15:
    v12 = sub_AA67A0(z, IWarBoardObjectData_TypeInfo, 3LL);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v12)(z, *(_QWORD *)(v12 + 8));
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // x0

  if ( (byte_4212674 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, *(_QWORD *)&square);
    byte_4212674 = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_B0D97C(0LL);
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_2E97E94 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
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
    sub_B0D97C(this);
  i = this->fields.i;
  if ( (unsigned int)i >= route->max_length )
  {
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
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
  struct System_Func_IWarBoardObjectData__bool__o *excludeCond; // x0

  if ( (byte_4212675 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_IWarBoardObjectData__bool__Invoke__, x);
    byte_4212675 = 1;
  }
  excludeCond = this->fields.excludeCond;
  if ( !excludeCond )
    sub_B0D97C(0LL);
  return !System_Func_BattleBuffData_BuffData__bool___Invoke(
            (System_Func_BattleBuffData_BuffData__bool__o *)excludeCond,
            (BattleBuffData_BuffData_o *)x,
            (const MethodInfo_26189CC *)Method_System_Func_IWarBoardObjectData__bool__Invoke__)
      && this->fields.basePiece != (struct WarBoardPieceData_o *)x;
}


int32_t __fastcall WarBoardAIRoute___c__DisplayClass64_0___GetTargetToDistanceUsingIndividuality_b__1(
        WarBoardAIRoute___c__DisplayClass64_0_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  WarBoardAIRoute___c__DisplayClass64_0_o *v4; // x20
  __int64 v5; // x1
  IWarBoardObjectData_c *klass; // x8
  int32_t baseSquareIndex; // w20
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v11; // w19

  v4 = this;
  if ( (byte_4212676 & 1) == 0 )
  {
    sub_B0D8A4(&AStarSearch_TypeInfo, x);
    this = (WarBoardAIRoute___c__DisplayClass64_0_o *)sub_B0D8A4(&IWarBoardObjectData_TypeInfo, v5);
    byte_4212676 = 1;
  }
  if ( !x )
    goto LABEL_15;
  klass = x->klass;
  baseSquareIndex = v4->fields.baseSquareIndex;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(x, IWarBoardObjectData_TypeInfo, 1LL);
  }
  v11 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  this = (WarBoardAIRoute___c__DisplayClass64_0_o *)AStarSearch__RouteSearch(0LL, baseSquareIndex, v11, 0, 0LL, 0LL);
  if ( !this )
LABEL_15:
    sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 v10; // x0
  System_Collections_Generic_List_T__o *routeDataList; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_4212677 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, targetObject);
    sub_B0D8A4(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__, v7);
    sub_B0D8A4(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo, v8);
    byte_4212677 = 1;
  }
  v9 = (Il2CppObject *)sub_B0D974(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo, targetObject, method);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9[1].klass = (Il2CppClass *)targetObject;
  sub_B0D840(&v9[1], targetObject);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                                             v12,
                                                                             v13);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    v9,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           routeDataList,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_1707138 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
  WarBoardAIRoute___c__DisplayClass65_1_o *v4; // x20
  __int64 v5; // x1
  struct IWarBoardObjectData_o *targetObject; // x21
  IWarBoardObjectData_c *klass; // x8
  __int64 v8; // x10
  int32_t baseIndex; // w23
  unsigned __int64 v11; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct IWarBoardObjectData_o *v14; // x20
  IWarBoardObjectData_c *v15; // x8
  int32_t actionIndex; // w19
  unsigned __int64 v17; // x10
  int *v18; // x11
  __int64 v19; // x0

  v4 = this;
  if ( (byte_4212678 & 1) == 0 )
  {
    sub_B0D8A4(&IWarBoardObjectData_TypeInfo, x);
    this = (WarBoardAIRoute___c__DisplayClass65_1_o *)sub_B0D8A4(&WarBoardItemData_TypeInfo, v5);
    byte_4212678 = 1;
  }
  targetObject = v4->fields.targetObject;
  if ( !targetObject )
    return 0;
  klass = targetObject->klass;
  v8 = *(&WarBoardItemData_TypeInfo->_2.bitflags2 + 1);
  if ( *(&targetObject->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (WarBoardItemData_c *)klass->_2.typeHierarchy[v8 - 1] != WarBoardItemData_TypeInfo )
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
    v11 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v11;
      p_offset += 4;
      if ( v11 >= *(unsigned __int16 *)&klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AA67A0(v4->fields.targetObject, IWarBoardObjectData_TypeInfo, 0LL);
  }
  this = (WarBoardAIRoute___c__DisplayClass65_1_o *)(*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                                      targetObject,
                                                      *(_QWORD *)(p_method + 8));
  if ( baseIndex == (_DWORD)this )
    return 1;
  v14 = v4->fields.targetObject;
  if ( !v14 )
LABEL_25:
    sub_B0D97C(this);
  v15 = v14->klass;
  actionIndex = x->fields.actionIndex;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v18 - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v17;
      v18 += 4;
      if ( v17 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v19 = (__int64)&v15->vtable[*v18].method;
  }
  else
  {
LABEL_22:
    v19 = sub_AA67A0(v14, IWarBoardObjectData_TypeInfo, 0LL);
  }
  return actionIndex == (*(unsigned int (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v19)(
                          v14,
                          *(_QWORD *)(v19 + 8));
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
  WarBoardAIRoute___c__DisplayClass66_0_o *v4; // x20
  struct WarBoardItemData_o *value; // x8
  int32_t squareIndex_k__BackingField; // w8

  v4 = this;
  if ( (byte_4212679 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass66_0_o *)sub_B0D8A4(
                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__,
                                                        x);
    byte_4212679 = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  value = v4->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
      sub_B0D97C(this);
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