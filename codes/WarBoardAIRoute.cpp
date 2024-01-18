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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x20
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v83; // x20
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v90; // x20
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v97; // x20
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v104; // x20
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v111; // x20
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v118; // x20
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v125; // x20
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  WarBoardData_o *reinforcementsSaveList; // x0
  const MethodInfo *v139; // x1
  const MethodInfo *v140; // x1
  BattleServantConfConponent_o *p_aiIds; // x20
  struct System_Int32_array *aiIds; // x21
  System_Array_o *v143; // x21
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  __int64 v150; // x8
  unsigned __int64 v151; // x20
  int v152; // w19
  WarBoardAIRoute_PiecePersonality_o *v153; // x23
  WarBoardPieceData_o *Piece; // x0
  int32_t overwriteAiId_k__BackingField; // w22
  DataMasterBase_WarMaster__WarEntity__int__o *v156; // x22
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *stageNpcMaster; // x8
  WarBoardData_o *v158; // x27
  unsigned __int64 v159; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *actionTrandList; // x28
  WarBoardActionTrendEntity_o *v161; // x20
  WarBoardAIRoute_ActionTrendInfo_o *v162; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v163; // x22
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v164; // x8
  WarBoardData_o *v165; // x27
  unsigned __int64 v166; // x19
  WarBoardStageReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x27
  WarBoardReinforcementsMaster_o *v168; // x28
  WarBoardData_o *v169; // x20
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v171; // x22
  __int64 v172; // x3
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__c *klass; // x8
  WarBoardData_o *v174; // x22
  unsigned __int64 v175; // x10
  int32_t *p_offset; // x11
  __int64 v177; // x0
  __int64 v178; // x1
  const MethodInfo *v179; // x3
  __int64 v180; // x26
  __int64 v181; // x8
  unsigned __int64 v182; // x10
  int *v183; // x11
  __int64 v184; // x0
  __int64 v185; // x3
  __int64 v186; // x8
  unsigned __int64 v187; // x10
  int *v188; // x11
  __int64 v189; // x0
  __int64 v190; // x1
  int32_t *v191; // x22
  __int64 id; // x0
  __int64 v193; // x1
  _BOOL8 v194; // x0
  __int64 v195; // x1
  __int64 v196; // x0
  __int64 v197; // x1
  _BOOL8 v198; // x0
  __int64 v199; // x1
  __int64 v200; // x8
  unsigned __int64 v201; // x10
  int *v202; // x11
  __int64 v203; // x0
  _QWORD *p_klass; // x19
  BattleServantConfConponent_o *p_ratingBaseIds; // x20
  System_Array_o *v206; // x21
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  __int64 v213; // x8
  unsigned __int64 v214; // x21
  int32_t v215; // w20
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v216; // x20
  __int64 v217; // x22
  System_String_array **v218; // x2
  System_String_array **v219; // x3
  System_Boolean_array **v220; // x4
  System_Int32_array **v221; // x5
  System_Int32_array *v222; // x6
  System_Int32_array *v223; // x7
  int32_t buckets; // w20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v225; // x22
  WarBoardEvalValueSquare_CalcEval_o *v226; // x25
  _QWORD *p_image; // x19
  BattleServantConfConponent_o *p_tacticalIds; // x21
  System_Array_o *v229; // x20
  System_String_array **v230; // x2
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  __int64 v236; // x8
  unsigned __int64 v237; // x21
  int32_t v238; // w20
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v241; // x22
  const MethodInfo *v242; // x3
  System_String_array **v243; // x2
  System_String_array **v244; // x3
  System_Boolean_array **v245; // x4
  System_Int32_array **v246; // x5
  System_Int32_array *v247; // x6
  System_Int32_array *v248; // x7
  __int64 v249; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_tacticalTrendList; // [xsp+8h] [xbp-C8h]
  WarBoardStageNpcEntity_o *v251; // [xsp+10h] [xbp-C0h]
  WarBoardAIRoute_o *v252; // [xsp+18h] [xbp-B8h]
  struct System_Collections_Generic_List_WarBoardRatingBase__o **p_ratingBaseList; // [xsp+20h] [xbp-B0h]
  struct System_Int32_array *v254; // [xsp+28h] [xbp-A8h]
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o **p_dicRatingbaseCalcValue; // [xsp+30h] [xbp-A0h]
  unsigned __int64 key; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o **p_piecePersonalityDic; // [xsp+40h] [xbp-90h]
  DataManager_o *Instance; // [xsp+48h] [xbp-88h]
  int v259; // [xsp+50h] [xbp-80h]
  int v260; // [xsp+54h] [xbp-7Ch]
  WarBoardReinforcementsEntity_o *v261; // [xsp+58h] [xbp-78h] BYREF
  WarBoardStageReinforcementsEntity_o *v262; // [xsp+60h] [xbp-70h] BYREF
  WarEntity_o *v263; // [xsp+68h] [xbp-68h] BYREF
  WarEntity_o *v264; // [xsp+70h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF
  System_RuntimeFieldHandle_o v266; // 0:w1.4
  System_RuntimeFieldHandle_o v267; // 0:w1.4
  System_RuntimeFieldHandle_o v268; // 0:w1.4

  if ( (byte_418676B & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, npc);
    sub_B2C35C(&Method_BasicHelper_IndexValue_int____67381984, v5);
    sub_B2C35C(&WarBoardEvalValueSquare_CalcEval_TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardAIMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__, v15);
    sub_B2C35C(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__, v16);
    sub_B2C35C(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__, v17);
    sub_B2C35C(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__, v18);
    sub_B2C35C(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__, v29);
    sub_B2C35C(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo, v30);
    sub_B2C35C(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo, v31);
    sub_B2C35C(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo, v32);
    sub_B2C35C(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo, v33);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo, v34);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo, v35);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v36);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v37);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v38);
    sub_B2C35C(&System_IDisposable_TypeInfo, v39);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, v40);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, v41);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v42);
    sub_B2C35C(&int___TypeInfo, v43);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v44);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v45);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__, v46);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__, v47);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__, v48);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__, v49);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v50);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__, v51);
    sub_B2C35C(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v52);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo, v53);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo, v54);
    sub_B2C35C(&WarBoardAIRoute_PiecePersonality_TypeInfo, v55);
    sub_B2C35C(&ShortestDistanceFromAllyMaster_TypeInfo, v56);
    sub_B2C35C(&ShortestDistanceFromAllyServant_TypeInfo, v57);
    sub_B2C35C(&ShortestDistanceFromEnemyMaster_TypeInfo, v58);
    sub_B2C35C(&ShortestDistanceFromEnemyServant_TypeInfo, v59);
    sub_B2C35C(&ShortestDistanceFromItem_TypeInfo, v60);
    sub_B2C35C(&ShortestDistanceFromPrioritySpace_TypeInfo, v61);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v62);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v63);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384,
      v64);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49,
      v65);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72,
      v66);
    sub_B2C35C(&Method_WarBoardAIRoute___ctor_b__42_0__, v67);
    sub_B2C35C(&WarBoardAiTargetCacher_TypeInfo, v68);
    byte_418676B = 1;
  }
  v264 = 0LL;
  entity = 0LL;
  v262 = 0LL;
  v263 = 0LL;
  v261 = 0LL;
  v260 = 0;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v69,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v69;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tacticalTrendList,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v76,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v76;
  p_ratingBaseList = &this->fields.ratingBaseList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.ratingBaseList,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  v83 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v83,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v83;
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o **)&this->fields.piecePersonalityDic;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.piecePersonalityDic,
    (System_Int32_array **)v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  v90 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v90,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v90;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.allRouteList,
    (System_Int32_array **)v90,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  v97 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B2C42C(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v97,
    (const MethodInfo_2DC43C8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v97;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyAdvantagePieceData,
    (System_Int32_array **)v97,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  v104 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B2C42C(System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v104,
    (const MethodInfo_2E2B0FC *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v104;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dictionaryCreateRouteDataEvalValue,
    (System_Int32_array **)v104,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  v111 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B2C42C(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v111,
    (const MethodInfo_2DC43C8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v111;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyDesignationItem,
    (System_Int32_array **)v111,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  v118 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B2C42C(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v118,
    (const MethodInfo_2DC43C8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = v118;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyTarget,
    (System_Int32_array **)v118,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  v125 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v125,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v125;
  p_dicRatingbaseCalcValue = &this->fields.dicRatingbaseCalcValue;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dicRatingbaseCalcValue,
    (System_Int32_array **)v125,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.npcData,
    (System_Int32_array **)npc,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  if ( !npc )
    goto LABEL_130;
  this->fields.forceId = npc->fields.forceId;
  this->fields.groupId = npc->fields.groupId;
  this->fields.pickValue = npc->fields.pickValue;
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  WarBoardAIRoute__Clear(this, v140);
  reinforcementsSaveList = (WarBoardData_o *)this->fields.piecePersonalityDic;
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)reinforcementsSaveList,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  reinforcementsSaveList = (WarBoardData_o *)*p_ratingBaseList;
  if ( !*p_ratingBaseList )
    goto LABEL_130;
  p_tacticalTrendList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.tacticalTrendList;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)reinforcementsSaveList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__);
  v251 = npc;
  p_aiIds = (BattleServantConfConponent_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v143 = (System_Array_o *)sub_B2C374(int___TypeInfo, 4LL);
    v266.fields.value = Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v143, v266, 0LL);
    p_aiIds->klass = (BattleServantConfConponent_c *)v143;
    sub_B2C2F8(p_aiIds, (System_Int32_array **)v143, v144, v145, v146, v147, v148, v149);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_130;
  }
  v150 = *(_QWORD *)&aiIds->max_length;
  v252 = this;
  if ( (int)v150 >= 1 )
  {
    v151 = 0LL;
    v254 = aiIds;
    do
    {
      if ( v151 >= (unsigned int)v150 )
        goto LABEL_131;
      v152 = aiIds->m_Items[v151 + 1];
      v153 = (WarBoardAIRoute_PiecePersonality_o *)sub_B2C42C(WarBoardAIRoute_PiecePersonality_TypeInfo);
      WarBoardAIRoute_PiecePersonality___ctor(v153, 0LL);
      reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !reinforcementsSaveList )
        goto LABEL_130;
      reinforcementsSaveList = (WarBoardData_o *)reinforcementsSaveList[1].fields.reinforcementsSaveList;
      if ( !reinforcementsSaveList )
        goto LABEL_130;
      key = v151;
      Piece = WarBoardData__GetPiece(reinforcementsSaveList, this->fields.forceId, this->fields.groupId, v151, 1, 0LL);
      if ( Piece
        && (overwriteAiId_k__BackingField = Piece->fields._overwriteAiId_k__BackingField,
            overwriteAiId_k__BackingField > 0)
        || (overwriteAiId_k__BackingField = v152, v152 >= 1) )
      {
        reinforcementsSaveList = (WarBoardData_o *)Instance;
        if ( !Instance )
          goto LABEL_130;
        reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     Instance,
                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !reinforcementsSaveList )
          goto LABEL_130;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList,
               &entity,
               overwriteAiId_k__BackingField,
               (const MethodInfo_24E412C *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       Instance,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
          if ( !entity )
            goto LABEL_130;
          v156 = (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList;
          reinforcementsSaveList = (WarBoardData_o *)WarBoardAIEntity__GetActionTrendIds(
                                                       (WarBoardAIEntity_o *)entity,
                                                       v139);
          if ( !reinforcementsSaveList )
            goto LABEL_130;
          stageNpcMaster = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)reinforcementsSaveList->fields.stageNpcMaster;
          v158 = reinforcementsSaveList;
          if ( (int)stageNpcMaster >= 1 )
          {
            v159 = 0LL;
            while ( v159 < (unsigned int)stageNpcMaster )
            {
              if ( !v156 )
                goto LABEL_130;
              reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                           v156,
                                                           &v264,
                                                           *((_DWORD *)&v158->fields.npcEntityDict + v159),
                                                           (const MethodInfo_24E412C *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)reinforcementsSaveList & 1) != 0 )
              {
                if ( !v153 )
                  goto LABEL_130;
                actionTrandList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v153->fields.actionTrandList;
                v161 = (WarBoardActionTrendEntity_o *)v264;
                v162 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B2C42C(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
                WarBoardAIRoute_ActionTrendInfo___ctor(v162, v161, 0LL);
                if ( !actionTrandList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  actionTrandList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v162,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
              }
              LODWORD(stageNpcMaster) = v158->fields.stageNpcMaster;
              if ( (__int64)++v159 >= (int)stageNpcMaster )
                goto LABEL_38;
            }
LABEL_131:
            v249 = sub_B2C460(reinforcementsSaveList);
            sub_B2C400(v249, 0LL);
          }
LABEL_38:
          reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       Instance,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_130;
          v163 = (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList;
          reinforcementsSaveList = (WarBoardData_o *)WarBoardAIEntity__GetRatingOffsetIds(
                                                       (WarBoardAIEntity_o *)entity,
                                                       v139);
          this = v252;
          if ( !reinforcementsSaveList )
            goto LABEL_130;
          v164 = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)reinforcementsSaveList->fields.stageNpcMaster;
          v165 = reinforcementsSaveList;
          if ( (int)v164 >= 1 )
          {
            v166 = 0LL;
            while ( v166 < (unsigned int)v164 )
            {
              if ( !v163 )
                goto LABEL_130;
              reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                           v163,
                                                           &v263,
                                                           *((_DWORD *)&v165->fields.npcEntityDict + v166),
                                                           (const MethodInfo_24E412C *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)reinforcementsSaveList & 1) != 0 )
              {
                if ( !v153 )
                  goto LABEL_130;
                reinforcementsSaveList = (WarBoardData_o *)v153->fields.ratingOffsetList;
                if ( !reinforcementsSaveList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)reinforcementsSaveList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v263,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
              }
              LODWORD(v164) = v165->fields.stageNpcMaster;
              if ( (__int64)++v166 >= (int)v164 )
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
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v153,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      aiIds = v254;
      v151 = key + 1;
      LODWORD(v150) = v254->max_length;
    }
    while ( (__int64)(key + 1) < (int)v150 );
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v168 = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  v169 = (WarBoardData_o *)reinforcementsSaveList[1].fields.reinforcementsSaveList;
  if ( !v169 )
    goto LABEL_130;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)v169->fields.pieces;
  v171 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v171,
    (Il2CppObject *)this,
    Method_WarBoardAIRoute___ctor_b__42_0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  reinforcementsSaveList = (WarBoardData_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                               pieces,
                                               (System_Func_TSource__bool__o *)v171,
                                               (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  klass = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__c *)reinforcementsSaveList->klass;
  v174 = reinforcementsSaveList;
  if ( *(_WORD *)&reinforcementsSaveList->klass->_2.bitflags1 )
  {
    v175 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      ++v175;
      p_offset += 4;
      if ( v175 >= *(unsigned __int16 *)&reinforcementsSaveList->klass->_2.bitflags1 )
        goto LABEL_61;
    }
    v177 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_61:
    v177 = sub_AC5258(
             reinforcementsSaveList,
             System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo,
             0LL,
             v172);
  }
  v180 = (*(__int64 (__fastcall **)(WarBoardData_o *, _QWORD))v177)(v174, *(_QWORD *)(v177 + 8));
  if ( !v180 )
    sub_B2C434(0LL, v178);
  while ( 1 )
  {
    v181 = *(_QWORD *)v180;
    if ( *(_WORD *)(*(_QWORD *)v180 + 298LL) )
    {
      v182 = 0LL;
      v183 = (int *)(*(_QWORD *)(v181 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v183 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v182;
        v183 += 4;
        if ( v182 >= *(unsigned __int16 *)(*(_QWORD *)v180 + 298LL) )
          goto LABEL_68;
      }
      v184 = v181 + 16LL * *v183 + 312;
    }
    else
    {
LABEL_68:
      v184 = sub_AC5258(v180, System_Collections_IEnumerator_TypeInfo, 0LL, v179);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v184)(v180, *(_QWORD *)(v184 + 8)) & 1) == 0 )
      break;
    v186 = *(_QWORD *)v180;
    if ( *(_WORD *)(*(_QWORD *)v180 + 298LL) )
    {
      v187 = 0LL;
      v188 = (int *)(*(_QWORD *)(v186 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v188 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        ++v187;
        v188 += 4;
        if ( v187 >= *(unsigned __int16 *)(*(_QWORD *)v180 + 298LL) )
          goto LABEL_75;
      }
      v189 = v186 + 16LL * *v188 + 312;
    }
    else
    {
LABEL_75:
      v189 = sub_AC5258(v180, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL, v185);
    }
    v191 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v189)(v180, *(_QWORD *)(v189 + 8));
    if ( !v191 )
      sub_B2C434(0LL, v190);
    if ( !*p_piecePersonalityDic )
      sub_B2C434(0LL, v190);
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            *p_piecePersonalityDic,
            v191[7],
            (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__) )
    {
      id = WarBoardData__get_id(v169, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        sub_B2C434(id, v193);
      v194 = WarBoardStageReinforcementsMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v262, id, v191[70], 0LL);
      if ( v194 )
      {
        if ( !v262 )
          sub_B2C434(v194, v195);
        v196 = BasicHelper__IndexValue_int_(
                 v262->fields.reinforcementsIds,
                 v191[71],
                 -1,
                 (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
        if ( !v168 )
          sub_B2C434(v196, v197);
        v198 = WarBoardReinforcementsMaster__TryGetEntity(v168, &v261, v196, 0LL);
        if ( v198 )
        {
          if ( !v261 )
            sub_B2C434(v198, v199);
          WarBoardAIRoute__AddPiecePersonalityDic(this, v261->fields.aiId, v191[7], v179);
        }
      }
    }
  }
  v259 = 833;
  ++v260;
  v200 = *(_QWORD *)v180;
  if ( *(_WORD *)(*(_QWORD *)v180 + 298LL) )
  {
    v201 = 0LL;
    v202 = (int *)(*(_QWORD *)(v200 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v202 - 1) != System_IDisposable_TypeInfo )
    {
      ++v201;
      v202 += 4;
      if ( v201 >= *(unsigned __int16 *)(*(_QWORD *)v180 + 298LL) )
        goto LABEL_91;
    }
    v203 = v200 + 16LL * *v202 + 312;
  }
  else
  {
LABEL_91:
    v203 = sub_AC5258(v180, System_IDisposable_TypeInfo, 0LL, v185);
  }
  reinforcementsSaveList = (WarBoardData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v203)(
                                               v180,
                                               *(_QWORD *)(v203 + 8));
  if ( v260 && *(&v259 + v260 - 1) == 833 )
    --v260;
  p_ratingBaseIds = (BattleServantConfConponent_o *)&v251->fields.ratingBaseIds;
  p_klass = &v251->fields.ratingBaseIds->obj.klass;
  if ( !p_klass )
  {
    v206 = (System_Array_o *)sub_B2C374(int___TypeInfo, 6LL);
    v267.fields.value = Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v206, v267, 0LL);
    p_ratingBaseIds->klass = (BattleServantConfConponent_c *)v206;
    sub_B2C2F8(p_ratingBaseIds, (System_Int32_array **)v206, v207, v208, v209, v210, v211, v212);
    p_klass = &p_ratingBaseIds->klass->_1.image;
    if ( !p_ratingBaseIds->klass )
LABEL_130:
      sub_B2C434(reinforcementsSaveList, v139);
  }
  v213 = p_klass[3];
  if ( (int)v213 >= 1 )
  {
    v214 = 0LL;
    while ( 2 )
    {
      if ( v214 >= (unsigned int)v213 )
        goto LABEL_131;
      reinforcementsSaveList = (WarBoardData_o *)Instance;
      if ( Instance )
      {
        v215 = *((_DWORD *)p_klass + v214 + 8);
        reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     Instance,
                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
        if ( reinforcementsSaveList )
        {
          reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList,
                                                       v215,
                                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
          if ( reinforcementsSaveList )
          {
            v216 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)reinforcementsSaveList;
            switch ( HIDWORD(reinforcementsSaveList->fields.stageEntity) )
            {
              case 0:
                v217 = sub_B2C42C(ShortestDistanceFromAllyServant_TypeInfo);
                ShortestDistanceFromAllyServant___ctor((ShortestDistanceFromAllyServant_o *)v217, 0LL);
                if ( !v217 )
                  goto LABEL_130;
                goto LABEL_116;
              case 1:
                v217 = sub_B2C42C(ShortestDistanceFromEnemyServant_TypeInfo);
                ShortestDistanceFromEnemyServant___ctor((ShortestDistanceFromEnemyServant_o *)v217, 0LL);
                if ( !v217 )
                  goto LABEL_130;
                goto LABEL_116;
              case 2:
                v217 = sub_B2C42C(ShortestDistanceFromAllyMaster_TypeInfo);
                ShortestDistanceFromAllyMaster___ctor((ShortestDistanceFromAllyMaster_o *)v217, 0LL);
                if ( !v217 )
                  goto LABEL_130;
                goto LABEL_116;
              case 3:
                v217 = sub_B2C42C(ShortestDistanceFromEnemyMaster_TypeInfo);
                ShortestDistanceFromEnemyMaster___ctor((ShortestDistanceFromEnemyMaster_o *)v217, 0LL);
                if ( !v217 )
                  goto LABEL_130;
                goto LABEL_116;
              case 4:
                v217 = sub_B2C42C(ShortestDistanceFromItem_TypeInfo);
                ShortestDistanceFromItem___ctor((ShortestDistanceFromItem_o *)v217, 0LL);
                if ( !v217 )
                  goto LABEL_130;
                goto LABEL_116;
              case 5:
                v217 = sub_B2C42C(ShortestDistanceFromPrioritySpace_TypeInfo);
                ShortestDistanceFromPrioritySpace___ctor((ShortestDistanceFromPrioritySpace_o *)v217, 0LL);
                if ( !v217 )
                  goto LABEL_130;
LABEL_116:
                *(_QWORD *)(v217 + 16) = v216;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)(v217 + 16),
                  (System_Int32_array **)v216,
                  v218,
                  v219,
                  v220,
                  v221,
                  v222,
                  v223);
                reinforcementsSaveList = (WarBoardData_o *)*p_ratingBaseList;
                if ( !*p_ratingBaseList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)reinforcementsSaveList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v217,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardRatingBase__Add__);
LABEL_118:
                buckets = (int32_t)v216->fields.buckets;
                v225 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)*p_dicRatingbaseCalcValue;
                v226 = (WarBoardEvalValueSquare_CalcEval_o *)sub_B2C42C(WarBoardEvalValueSquare_CalcEval_TypeInfo);
                WarBoardEvalValueSquare_CalcEval___ctor(v226, 0LL);
                if ( !v225 )
                  goto LABEL_130;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  v225,
                  buckets,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v226,
                  (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
                LODWORD(v213) = *((_DWORD *)p_klass + 6);
                if ( (__int64)++v214 >= (int)v213 )
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
  p_tacticalIds = (BattleServantConfConponent_o *)&v251->fields.tacticalIds;
  p_image = &v251->fields.tacticalIds->obj.klass;
  if ( !p_image )
  {
    v229 = (System_Array_o *)sub_B2C374(int___TypeInfo, 5LL);
    v268.fields.value = Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v229, v268, 0LL);
    p_tacticalIds->klass = (BattleServantConfConponent_c *)v229;
    sub_B2C2F8(p_tacticalIds, (System_Int32_array **)v229, v230, v231, v232, v233, v234, v235);
    p_image = &p_tacticalIds->klass->_1.image;
    if ( !p_tacticalIds->klass )
      goto LABEL_130;
  }
  v236 = p_image[3];
  if ( (int)v236 >= 1 )
  {
    v237 = 0LL;
    while ( v237 < (unsigned int)v236 )
    {
      reinforcementsSaveList = (WarBoardData_o *)Instance;
      if ( !Instance )
        goto LABEL_130;
      v238 = *((_DWORD *)p_image + v237 + 8);
      reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   Instance,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !reinforcementsSaveList )
        goto LABEL_130;
      reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList,
                                                   v238,
                                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      if ( !*p_tacticalTrendList )
        goto LABEL_130;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_tacticalTrendList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)reinforcementsSaveList,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__);
      LODWORD(v236) = *((_DWORD *)p_image + 6);
      if ( (__int64)++v237 >= (int)v236 )
        goto LABEL_129;
    }
    goto LABEL_131;
  }
LABEL_129:
  forceId = v252->fields.forceId;
  groupId = v252->fields.groupId;
  v241 = (WarBoardAiTargetCacher_o *)sub_B2C42C(WarBoardAiTargetCacher_TypeInfo);
  WarBoardAiTargetCacher___ctor(v241, forceId, groupId, v242);
  v252->fields.aiTargetCacher = v241;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v252->fields.aiTargetCacher,
    (System_Int32_array **)v241,
    v243,
    v244,
    v245,
    v246,
    v247,
    v248);
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
  MethodInfo *v25; // x1
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x21
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *v27; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x23
  WarBoardAIRoute_PiecePersonality_o *v31; // x21
  struct System_Int32_array *actionTrendIds; // x8
  WarBoardAIEntity_o *v33; // x25
  unsigned __int64 v34; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *actionTrandList; // x26
  WarBoardActionTrendEntity_o *v36; // x27
  WarBoardAIRoute_ActionTrendInfo_o *v37; // x28
  struct System_Int32_array *v38; // x8
  WarBoardAIEntity_o *v39; // x22
  unsigned __int64 v40; // x19
  __int64 v41; // x0
  WarBoardAIEntity_o *v42; // [xsp+8h] [xbp-68h]
  WarBoardAIRoute_o *v43; // [xsp+18h] [xbp-58h]

  if ( (byte_418676C & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, *(_QWORD *)&aiId);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardAIMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v14);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____, v15);
    sub_B2C35C(&Method_System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool___ctor__, v16);
    sub_B2C35C(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v19);
    sub_B2C35C(&WarBoardAIRoute_PiecePersonality_TypeInfo, v20);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__, v21);
    sub_B2C35C(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo, v22);
    byte_418676C = 1;
  }
  v23 = (WarBoardAIRoute___c__DisplayClass43_0_o *)sub_B2C42C(WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass43_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_32;
  v23->fields.pieceIndex = pieceIndex;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  v27 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)sub_B2C42C(System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool____ctor(
    v27,
    (Il2CppObject *)v23,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    (const MethodInfo_2703618 *)Method_System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool___ctor__);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v27,
         (const MethodInfo_1738F00 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v31 = (WarBoardAIRoute_PiecePersonality_o *)sub_B2C42C(WarBoardAIRoute_PiecePersonality_TypeInfo);
  WarBoardAIRoute_PiecePersonality___ctor(v31, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  Entity = (WarBoardAIEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   Master_WarQuestSelectionMaster,
                                   aiId,
                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_32;
  v42 = Entity;
  Entity = (WarBoardAIEntity_o *)WarBoardAIEntity__GetActionTrendIds(Entity, v25);
  if ( !Entity )
    goto LABEL_32;
  v43 = this;
  actionTrendIds = Entity->fields.actionTrendIds;
  v33 = Entity;
  if ( (int)actionTrendIds >= 1 )
  {
    v34 = 0LL;
    while ( v34 < (unsigned int)actionTrendIds )
    {
      if ( !v29 )
        goto LABEL_32;
      Entity = (WarBoardAIEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v29,
                                       *((_DWORD *)&v33->fields.ratingOffsetIds + v34),
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v31 )
          goto LABEL_32;
        actionTrandList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v31->fields.actionTrandList;
        v36 = (WarBoardActionTrendEntity_o *)Entity;
        v37 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B2C42C(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v37, v36, 0LL);
        if ( !actionTrandList )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          actionTrandList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
      LODWORD(actionTrendIds) = v33->fields.actionTrendIds;
      if ( (__int64)++v34 >= (int)actionTrendIds )
        goto LABEL_20;
    }
LABEL_33:
    v41 = sub_B2C460(Entity);
    sub_B2C400(v41, 0LL);
  }
LABEL_20:
  Entity = (WarBoardAIEntity_o *)WarBoardAIEntity__GetRatingOffsetIds(v42, v25);
  if ( !Entity )
    goto LABEL_32;
  v38 = Entity->fields.actionTrendIds;
  v39 = Entity;
  if ( (int)v38 >= 1 )
  {
    v40 = 0LL;
    while ( v40 < (unsigned int)v38 )
    {
      if ( !v30 )
        goto LABEL_32;
      Entity = (WarBoardAIEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v30,
                                       *((_DWORD *)&v39->fields.ratingOffsetIds + v40),
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v31 )
          goto LABEL_32;
        v25 = (MethodInfo *)Entity;
        Entity = (WarBoardAIEntity_o *)v31->fields.ratingOffsetList;
        if ( !Entity )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Entity,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
      }
      LODWORD(v38) = v39->fields.actionTrendIds;
      if ( (__int64)++v40 >= (int)v38 )
        goto LABEL_30;
    }
    goto LABEL_33;
  }
LABEL_30:
  Entity = (WarBoardAIEntity_o *)v43->fields.piecePersonalityDic;
  if ( !Entity )
LABEL_32:
    sub_B2C434(Entity, v25);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Entity,
    v23->fields.pieceIndex,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v31,
    (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
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
  const MethodInfo *v61; // x1
  _QWORD *v62; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x20
  __int64 v66; // x24
  int v67; // w8
  unsigned int v68; // w25
  int v69; // w8
  int32_t forceId; // w9
  __int64 v71; // x23
  System_Int32_array **v72; // x0
  WarBoardAIRoute_o *v73; // x25
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x1
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x1
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x1
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v115; // x23
  int32_t v116; // w19
  int32_t groupId; // w20
  WarBoardAIRoute_AIRouteMasterData_o *v118; // x21
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Collections_Generic_Dictionary_int__uint__o *v125; // x19
  void **p_placePieceData; // x20
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  struct WarBoardPieceData_array *allAllyPiece; // x26
  int max_length; // w8
  signed int v135; // w9
  __int64 v136; // x0
  __int64 v137; // x0
  WarBoardPieceData_o *v138; // x8
  int32_t forceId_k__BackingField; // w8
  int32_t v140; // w9
  int32_t v141; // w1
  __int64 v142; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v144; // x20
  unsigned __int64 v145; // x10
  int *p_offset; // x11
  __int64 v147; // x0
  __int64 v148; // x1
  __int64 v149; // x3
  int v150; // w8
  unsigned int v151; // w9
  WarBoardActionTrendConditionEntity_o *v152; // x26
  struct System_Int32_array *conditionTypes; // x28
  __int64 v154; // x8
  unsigned __int64 v155; // x27
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x0
  const MethodInfo *v158; // x2
  TargetDetector_o *DetectorByTrendKey; // x0
  const MethodInfo *v160; // x1
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v161; // x19
  const MethodInfo *v162; // x3
  WarBoardAiTargetCacher_o *v163; // x19
  const MethodInfo *v164; // x1
  int64_t v165; // x0
  const MethodInfo *v166; // x4
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicIndividualityPutSqareIndex; // x19
  int64_t v168; // x22
  const MethodInfo *v169; // x1
  int64_t v170; // x25
  WarBoardAIRoute_TargetData_o *v171; // x23
  __int64 v172; // x0
  __int64 v173; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  const MethodInfo *v175; // x1
  int32_t squareIndex; // w19
  unsigned int v177; // w24
  WarBoardAIRoute___c__DisplayClass45_0_o *v178; // x21
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *dicSquareIndexKeyItemData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v181; // x22
  WarBoardEvalValueSquare_EvalValueSquare_o *v182; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v183; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x22
  WarBoardAIRoute_o *v185; // x0
  const MethodInfo *v186; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicSquarePutSqareIndex; // x19
  int64_t v188; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v190; // x22
  WarBoardSquareData_o *v191; // x21
  int64_t v192; // x22
  WarBoardAIRoute_TargetData_o *v193; // x19
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v194; // x21
  const MethodInfo *v195; // x1
  int64_t v196; // x0
  __int64 v197; // x8
  unsigned __int64 v198; // x10
  int *v199; // x11
  __int64 v200; // x0
  __int64 v201; // x3
  __int64 v202; // x8
  unsigned __int64 v203; // x10
  int *v204; // x11
  __int64 v205; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v206; // x0
  __int64 v207; // x1
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x20
  int v209; // w19
  __int64 v210; // x8
  unsigned __int64 v211; // x10
  int *v212; // x11
  __int64 v213; // x21
  __int64 v214; // x0
  WarBoardAiTargetCacher_o *v215; // x20
  WarBoardAIRoute___c_c *v216; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__45_0; // x19
  Il2CppObject *v219; // x21
  struct WarBoardAIRoute___c_StaticFields *v220; // x0
  System_String_array **v221; // x2
  System_String_array **v222; // x3
  System_Boolean_array **v223; // x4
  System_Int32_array **v224; // x5
  System_Int32_array *v225; // x6
  System_Int32_array *v226; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v227; // x0
  const MethodInfo *v228; // x2
  WarBoardAIRoute_AdvantagePieceData_o *v229; // x20
  struct WarBoardPieceData_array *v230; // x22
  int v231; // w8
  int32_t v232; // w21
  unsigned int v233; // w23
  __int64 v234; // x8
  __int64 v235; // x24
  int32_t ClassId; // w19
  float Magnification; // s9
  float v238; // s10
  float v239; // s8
  bool v240; // cc
  float v241; // s9
  char v242; // w19
  int v243; // w8
  const MethodInfo *v244; // x1
  __int64 v245; // x0
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+8h] [xbp-118h]
  struct WarBoardPieceData_array *v247; // [xsp+10h] [xbp-110h]
  void **p_aiRouteMasterData; // [xsp+20h] [xbp-100h]
  int v249; // [xsp+2Ch] [xbp-F4h]
  int v250; // [xsp+30h] [xbp-F0h]
  signed int v251; // [xsp+34h] [xbp-ECh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-E8h]
  __int64 v253; // [xsp+40h] [xbp-E0h]
  unsigned int v254; // [xsp+54h] [xbp-CCh]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v256; // [xsp+60h] [xbp-C0h]
  WarBoardAIRoute_o *v257; // [xsp+68h] [xbp-B8h]
  WarBoardAIRoute_DesignationItemData_o *v258; // [xsp+78h] [xbp-A8h]
  WarBoardAIRoute_PutSquareTarget_o *v259; // [xsp+88h] [xbp-98h]
  _DWORD v260[1]; // [xsp+90h] [xbp-90h]
  int v261; // [xsp+94h] [xbp-8Ch]
  bool notSquareTarget; // [xsp+98h] [xbp-88h] BYREF
  int32_t condType; // [xsp+9Ch] [xbp-84h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_418676E & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIRoute_AIRouteMasterData_TypeInfo, method);
    sub_B2C35C(&WarBoardAIRoute_AdvantagePieceData_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&WarBoardAIRoute_DesignationItemData_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__uint__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v24);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v25);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, v26);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, v27);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, v28);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v29);
    sub_B2C35C(&Method_System_Func_WarBoardItemData__bool___ctor__, v30);
    sub_B2C35C(&Method_System_Func_WarBoardSquareData__bool___ctor__, v31);
    sub_B2C35C(&Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__, v32);
    sub_B2C35C(&Method_System_Func_IWarBoardObjectData__bool___ctor__, v33);
    sub_B2C35C(&System_Func_WarBoardSquareData__bool__TypeInfo, v34);
    sub_B2C35C(&System_Func_IWarBoardObjectData__bool__TypeInfo, v35);
    sub_B2C35C(&System_Func_WarBoardItemData__bool__TypeInfo, v36);
    sub_B2C35C(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v37);
    sub_B2C35C(&System_IDisposable_TypeInfo, v38);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v39);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v40);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v41);
    sub_B2C35C(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__, v42);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v43);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v44);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v45);
    sub_B2C35C(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__, v46);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v47);
    sub_B2C35C(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo, v48);
    sub_B2C35C(&WarBoardAIRoute_PutSquareTarget_TypeInfo, v49);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v51);
    sub_B2C35C(&SvtClassAttri_TypeInfo, v52);
    sub_B2C35C(&WarBoardAIRoute_TargetData_TypeInfo, v53);
    sub_B2C35C(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__, v54);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__, v55);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__, v56);
    sub_B2C35C(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo, v57);
    sub_B2C35C(&WarBoardAIRoute___c_TypeInfo, v58);
    sub_B2C35C(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__, v59);
    byte_418676E = 1;
  }
  value = 0LL;
  condType = 0;
  notSquareTarget = 0;
  v261 = 0;
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_206;
  v62 = *(_QWORD **)&Instance[5].fields.count;
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v65,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v62 )
    goto LABEL_206;
  v257 = this;
  v66 = v62[6];
  if ( !v66 )
    goto LABEL_206;
  v67 = *(_DWORD *)(v66 + 24);
  if ( v67 >= 1 )
  {
    v68 = 0;
    while ( 1 )
    {
      if ( v68 >= v67 )
        goto LABEL_207;
      if ( !v65 )
        goto LABEL_206;
      v71 = *(_QWORD *)(v66 + 8LL * (int)v68 + 32);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v65,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      if ( !v71 )
        goto LABEL_206;
      if ( !*(_BYTE *)(v71 + 60) )
      {
        v69 = *(_DWORD *)(v71 + 20);
        forceId = v257->fields.forceId;
        if ( v69 != forceId )
          goto LABEL_12;
        if ( *(_DWORD *)(v71 + 24) == v257->fields.groupId )
          break;
      }
LABEL_20:
      v67 = *(_DWORD *)(v66 + 24);
      if ( (int)++v68 >= v67 )
        goto LABEL_21;
    }
    if ( !v63 )
      goto LABEL_206;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v63,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    v69 = *(_DWORD *)(v71 + 20);
    forceId = v257->fields.forceId;
LABEL_12:
    if ( v69 != forceId )
    {
      if ( !v64 )
        goto LABEL_206;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v64,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                            (WarBoardPieceData_o *)v71,
                                                                            0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        v257->fields.enemyMasterSquareIndex = *(_DWORD *)(v71 + 64);
    }
    goto LABEL_20;
  }
LABEL_21:
  if ( !v63 )
    goto LABEL_206;
  v72 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v63,
                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v73 = v257;
  v257->fields.allAllyPiece = (struct WarBoardPieceData_array *)v72;
  sub_B2C2F8((BattleServantConfConponent_o *)&v257->fields.allAllyPiece, v72, v74, v75, v76, v77, v78, v79);
  if ( !v64 )
    goto LABEL_206;
  v80 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v64,
                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v257->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v80;
  sub_B2C2F8((BattleServantConfConponent_o *)&v257->fields.allEnemyPiece, v80, v81, v82, v83, v84, v85, v86);
  v87 = (System_Int32_array **)v62[7];
  v257->fields.allSquare = (struct WarBoardSquareData_array *)v87;
  sub_B2C2F8((BattleServantConfConponent_o *)&v257->fields.allSquare, v87, v88, v89, v90, v91, v92, v93);
  v94 = (System_Int32_array **)v62[9];
  v257->fields.allItemData = (struct WarBoardItemData_array *)v94;
  sub_B2C2F8((BattleServantConfConponent_o *)&v257->fields.allItemData, v94, v95, v96, v97, v98, v99, v100);
  v101 = (System_Int32_array **)v62[10];
  v257->fields.allTreasureData = (struct WarBoardTreasureData_array *)v101;
  sub_B2C2F8((BattleServantConfConponent_o *)&v257->fields.allTreasureData, v101, v102, v103, v104, v105, v106, v107);
  v108 = (System_Int32_array **)v62[11];
  v257->fields.allWallData = (struct WarBoardWallData_array *)v108;
  sub_B2C2F8((BattleServantConfConponent_o *)&v257->fields.allWallData, v108, v109, v110, v111, v112, v113, v114);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v257->fields.dictionaryCreateRouteDataEvalValue;
  p_allEnemyPiece = &v257->fields.allEnemyPiece;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_object__float___Clear(
    Instance,
    (const MethodInfo_2E2BE90 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v257->fields.dicUniqueKeyDesignationItem;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
    (const MethodInfo_2DC5158 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v257->fields.dicUniqueKeyTarget;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
    (const MethodInfo_2DC5158 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v257->fields.dicUniqueKeyAdvantagePieceData;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
    (const MethodInfo_2DC5158 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_206;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v115 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v115,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v115 )
    goto LABEL_206;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v115,
    (System_Collections_Generic_IEnumerable_T__o *)v257->fields.allItemData,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v115,
    (System_Collections_Generic_IEnumerable_T__o *)v257->fields.allTreasureData,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v115,
    (System_Collections_Generic_IEnumerable_T__o *)v257->fields.allWallData,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v115,
    (System_Collections_Generic_IEnumerable_T__o *)v65,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  v116 = v257->fields.forceId;
  groupId = v257->fields.groupId;
  v118 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_B2C42C(WarBoardAIRoute_AIRouteMasterData_TypeInfo);
  WarBoardAIRoute_AIRouteMasterData___ctor(v118, v116, groupId, 0LL);
  v257->fields.aiRouteMasterData = v118;
  p_aiRouteMasterData = (void **)&v257->fields.aiRouteMasterData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v257->fields.aiRouteMasterData,
    (System_Int32_array **)v118,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  v125 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v125,
    (const MethodInfo_2E6B3B0 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  p_placePieceData = (void **)&v257->fields.placePieceData;
  v257->fields.placePieceData = v125;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v257->fields.placePieceData,
    (System_Int32_array **)v125,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  allAllyPiece = v257->fields.allAllyPiece;
  if ( !allAllyPiece )
    goto LABEL_206;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v135 = 0;
    v249 = 0;
    v256 = v115;
    v247 = v257->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v135 >= (unsigned int)max_length )
        goto LABEL_207;
      v138 = allAllyPiece->m_Items[v135];
      if ( !v138 )
        goto LABEL_206;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      v251 = v135;
      if ( !*p_placePieceData )
        goto LABEL_206;
      pieceData = allAllyPiece->m_Items[v135];
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
                                                                            v138->fields._nowSquareIndex_k__BackingField,
                                                                            (const MethodInfo_2E6C1B8 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_203;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_206;
      System_Collections_Generic_Dictionary_int__uint___Add(
        (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
        pieceData->fields._nowSquareIndex_k__BackingField,
        pieceData->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_2E6BF54 *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
      forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
      v140 = v73->fields.forceId;
      if ( forceId_k__BackingField != v140 )
        goto LABEL_64;
      if ( pieceData->fields._groupId_k__BackingField == v73->fields.groupId )
        break;
LABEL_65:
      if ( pieceData->fields._groupId_k__BackingField != v73->fields.groupId )
        goto LABEL_69;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_206;
      v141 = 2;
LABEL_68:
      WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        (WarBoardAIRoute_AIRouteMasterData_o *)Instance,
        v141,
        pieceData,
        0LL);
LABEL_69:
      v258 = (WarBoardAIRoute_DesignationItemData_o *)sub_B2C42C(WarBoardAIRoute_DesignationItemData_TypeInfo);
      WarBoardAIRoute_DesignationItemData___ctor(v258, 0LL);
      v259 = (WarBoardAIRoute_PutSquareTarget_o *)sub_B2C42C(WarBoardAIRoute_PutSquareTarget_TypeInfo);
      WarBoardAIRoute_PutSquareTarget___ctor(v259, 0LL);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v73->fields.piecePersonalityDic;
      if ( !Instance )
        goto LABEL_206;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
                                                                            pieceData->fields._index_k__BackingField,
                                                                            &value,
                                                                            (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
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
        v144 = Instance;
        if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
        {
          v145 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
          {
            ++v145;
            p_offset += 4;
            if ( v145 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
              goto LABEL_77;
          }
          v147 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_77:
          v147 = sub_AC5258(
                   Instance,
                   System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                   0LL,
                   v142);
        }
        v253 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v147)(
                 v144,
                 *(_QWORD *)(v147 + 8));
        if ( !v253 )
          sub_B2C434(0LL, v148);
        while ( 1 )
        {
LABEL_122:
          v197 = *(_QWORD *)v253;
          if ( *(_WORD *)(*(_QWORD *)v253 + 298LL) )
          {
            v198 = 0LL;
            v199 = (int *)(*(_QWORD *)(v197 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v199 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v198;
              v199 += 4;
              if ( v198 >= *(unsigned __int16 *)(*(_QWORD *)v253 + 298LL) )
                goto LABEL_126;
            }
            v200 = v197 + 16LL * *v199 + 312;
          }
          else
          {
LABEL_126:
            v200 = sub_AC5258(v253, System_Collections_IEnumerator_TypeInfo, 0LL, v149);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v200)(v253, *(_QWORD *)(v200 + 8)) & 1) == 0 )
            break;
          v202 = *(_QWORD *)v253;
          if ( *(_WORD *)(*(_QWORD *)v253 + 298LL) )
          {
            v203 = 0LL;
            v204 = (int *)(*(_QWORD *)(v202 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__c **)v204 - 1) != System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
            {
              ++v203;
              v204 += 4;
              if ( v203 >= *(unsigned __int16 *)(*(_QWORD *)v253 + 298LL) )
                goto LABEL_133;
            }
            v205 = v202 + 16LL * *v204 + 312;
          }
          else
          {
LABEL_133:
            v205 = sub_AC5258(
                     v253,
                     System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                     0LL,
                     v201);
          }
          v206 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v205)(
                                                        v253,
                                                        *(_QWORD *)(v205 + 8));
          if ( !v206 )
            sub_B2C434(0LL, v207);
          Entity_k__BackingField = v206->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v206, 0LL);
          if ( !ConditionEntityArray )
            sub_B2C434(0LL, v175);
          v150 = ConditionEntityArray->max_length;
          if ( v150 >= 1 )
          {
            v151 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v151 >= v150 )
              {
                v137 = sub_B2C460(ConditionEntityArray);
                sub_B2C400(v137, 0LL);
              }
              v152 = ConditionEntityArray->m_Items[v151];
              if ( !v152 )
                sub_B2C434(ConditionEntityArray, v175);
              conditionTypes = v152->fields.conditionTypes;
              v254 = v151;
              if ( !conditionTypes )
                sub_B2C434(ConditionEntityArray, v175);
              v154 = *(_QWORD *)&conditionTypes->max_length;
              if ( (int)v154 >= 1 )
                break;
LABEL_121:
              ConditionEntityArray = condEntityArray;
              v150 = condEntityArray->max_length;
              v151 = v254 + 1;
              if ( (int)(v254 + 1) >= v150 )
                goto LABEL_122;
            }
            v155 = 0LL;
            while ( 2 )
            {
              if ( v155 >= (unsigned int)v154 )
              {
                v136 = sub_B2C460(ConditionEntityArray);
                sub_B2C400(v136, 0LL);
              }
              v177 = conditionTypes->m_Items[v155 + 1];
              v178 = (WarBoardAIRoute___c__DisplayClass45_0_o *)sub_B2C42C(WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
              WarBoardAIRoute___c__DisplayClass45_0___ctor(v178, 0LL);
              if ( !v178 )
                sub_B2C434(ConditionEntityArray, v175);
              v178->fields.squareIndex = -1;
              if ( v177 <= 0x2A && ((1LL << v177) & 0x70001800000LL) != 0 )
              {
                v175 = (const MethodInfo *)(unsigned int)v152->fields.value;
                v178->fields.squareIndex = (int)v175;
                if ( (_DWORD)v175 != -1 )
                {
                  if ( !v258 )
                    sub_B2C434(ConditionEntityArray, v175);
                  dicSquareIndexKeyItemData = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v258->fields.dicSquareIndexKeyItemData;
                  if ( !dicSquareIndexKeyItemData )
                    sub_B2C434(0LL, v175);
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                                                       dicSquareIndexKeyItemData,
                                                                                       (int32_t)v175,
                                                                                       (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)v257->fields.allItemData;
                    v181 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardItemData__bool__TypeInfo);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      v181,
                      (Il2CppObject *)v178,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardItemData__bool___ctor__);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                                         allItemData,
                                                                                         (System_Func_TSource__bool__o *)v181,
                                                                                         (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                    v182 = (WarBoardEvalValueSquare_EvalValueSquare_o *)ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v183 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v258->fields.dicSquareIndexKeyItemData;
                      if ( !v183 )
                        sub_B2C434(0LL, v175);
                      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                        v183,
                        v178->fields.squareIndex,
                        v182,
                        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                    }
                  }
                }
              }
              v178->fields.squareIndex = -1;
              if ( v177 == 74 || v177 == 75 )
              {
                squareIndex = v152->fields.value;
                v178->fields.squareIndex = squareIndex;
                goto LABEL_110;
              }
              if ( v177 - 127 <= 1 )
              {
                if ( !Entity_k__BackingField )
                  sub_B2C434(ConditionEntityArray, v175);
                aiTargetCacher = v73->fields.aiTargetCacher;
                TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v175);
                if ( !aiTargetCacher )
                  sub_B2C434(TrendKey, TrendKey);
                DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(aiTargetCacher, TrendKey, v158);
                if ( !DetectorByTrendKey )
                {
                  v161 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B2C42C(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
                  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
                    v161,
                    0LL,
                    Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                    (const MethodInfo_270E404 *)Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
                  WarBoardActionTrendConditionMaster__HasMatchCondition(condEntityArray, v161, &condType, v162);
                  v163 = v73->fields.aiTargetCacher;
                  v165 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v164);
                  if ( !v163 )
                    sub_B2C434(v165, v165);
                  WarBoardAiTargetCacher__Register(v163, v165, v152, condType, v166);
                }
                if ( !v259 )
                  sub_B2C434(DetectorByTrendKey, v160);
                dicIndividualityPutSqareIndex = v259->fields.dicIndividualityPutSqareIndex;
                v168 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v160);
                v170 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v169);
                v171 = (WarBoardAIRoute_TargetData_o *)sub_B2C42C(WarBoardAIRoute_TargetData_TypeInfo);
                WarBoardAIRoute_TargetData___ctor(v171, v170, v177, 0LL);
                if ( !dicIndividualityPutSqareIndex )
                  sub_B2C434(v172, v173);
                System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
                  dicIndividualityPutSqareIndex,
                  v168,
                  v171,
                  (const MethodInfo_2E59218 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                squareIndex = v178->fields.squareIndex;
                v115 = v256;
                v73 = v257;
LABEL_110:
                if ( squareIndex != -1 )
                {
                  if ( !v259 )
                    sub_B2C434(ConditionEntityArray, v175);
                  if ( !Entity_k__BackingField )
                    sub_B2C434(ConditionEntityArray, v175);
                  dicObjectPutSquareIndex = v259->fields.dicObjectPutSquareIndex;
                  v185 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v175);
                  WarBoardAIRoute__RegisterTargetObjectToDic(
                    v185,
                    dicObjectPutSquareIndex,
                    (System_Collections_Generic_List_IWarBoardObjectData__o *)v115,
                    squareIndex,
                    (int64_t)v185,
                    v177,
                    &notSquareTarget,
                    v186);
                  if ( !notSquareTarget )
                  {
                    dicSquarePutSqareIndex = v259->fields.dicSquarePutSqareIndex;
                    v188 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v175);
                    if ( !dicSquarePutSqareIndex )
                      sub_B2C434(v188, v188);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ContainsKey(
                                                                                         dicSquarePutSqareIndex,
                                                                                         v188,
                                                                                         (const MethodInfo_2E594B4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                    if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                    {
                      allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)v257->fields.allSquare;
                      v190 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardSquareData__bool__TypeInfo);
                      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                        v190,
                        (Il2CppObject *)v178,
                        Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                        (const MethodInfo_2711C04 *)Method_System_Func_WarBoardSquareData__bool___ctor__);
                      ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                                           allSquare,
                                                                                           (System_Func_TSource__bool__o *)v190,
                                                                                           (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                      v191 = (WarBoardSquareData_o *)ConditionEntityArray;
                      if ( ConditionEntityArray )
                      {
                        v192 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v175);
                        v193 = (WarBoardAIRoute_TargetData_o *)sub_B2C42C(WarBoardAIRoute_TargetData_TypeInfo);
                        WarBoardAIRoute_TargetData___ctor_20835972(v193, v191, v192, v177, 0LL);
                        v194 = v259->fields.dicSquarePutSqareIndex;
                        v196 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v195);
                        if ( !v194 )
                          sub_B2C434(v196, v196);
                        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
                          v194,
                          v196,
                          v193,
                          (const MethodInfo_2E59240 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                      }
                    }
                  }
                }
              }
              LODWORD(v154) = conditionTypes->max_length;
              if ( (__int64)++v155 >= (int)v154 )
                goto LABEL_121;
              continue;
            }
          }
        }
        allAllyPiece = v247;
        v260[v249] = 1269;
        v209 = ++v261;
        v210 = *(_QWORD *)v253;
        if ( *(_WORD *)(*(_QWORD *)v253 + 298LL) )
        {
          v211 = 0LL;
          v212 = (int *)(*(_QWORD *)(v210 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v212 - 1) != System_IDisposable_TypeInfo )
          {
            ++v211;
            v212 += 4;
            if ( v211 >= *(unsigned __int16 *)(*(_QWORD *)v253 + 298LL) )
              goto LABEL_142;
          }
          v213 = v253;
          v214 = v210 + 16LL * *v212 + 312;
        }
        else
        {
LABEL_142:
          v213 = v253;
          v214 = sub_AC5258(v253, System_IDisposable_TypeInfo, 0LL, v201);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v214)(v213, *(_QWORD *)(v214 + 8));
        if ( v209 )
        {
          v250 = v209;
          if ( v260[v209 - 1] == 1269 )
          {
            v261 = v209 - 1;
            v250 = v209 - 1;
          }
        }
        else
        {
          v250 = 0;
        }
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v73->fields.aiTargetCacher;
        if ( !Instance )
          goto LABEL_206;
        WarBoardAiTargetCacher__ClearTargetObject((WarBoardAiTargetCacher_o *)Instance, v61);
        v215 = v73->fields.aiTargetCacher;
        v216 = WarBoardAIRoute___c_TypeInfo;
        if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v216 = WarBoardAIRoute___c_TypeInfo;
        }
        static_fields = v216->static_fields;
        _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( (BYTE3(v216->vtable._0_Equals.methodPtr) & 4) != 0 && !v216->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v216);
            static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          }
          v219 = (Il2CppObject *)static_fields->__9;
          _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__45_0,
            v219,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            (const MethodInfo_2711C04 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
          v220 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v220->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v220->__9__45_0,
            (System_Int32_array **)_9__45_0,
            v221,
            v222,
            v223,
            v224,
            v225,
            v226);
        }
        v227 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v115,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                              v227,
                                                                              (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v215 )
          goto LABEL_206;
        WarBoardAiTargetCacher__AggregateTargetObject(v215, (IWarBoardObjectData_array *)Instance, v228);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v73->fields.dicUniqueKeyDesignationItem;
        if ( !Instance )
          goto LABEL_206;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (WarBoardAIRoute_PutSquareTarget_o *)v258,
          (const MethodInfo_2DC4F7C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v73->fields.dicUniqueKeyTarget;
        if ( !Instance )
          goto LABEL_206;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          v259,
          (const MethodInfo_2DC4F7C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isServant(
                                                                              pieceData,
                                                                              0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v229 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_B2C42C(WarBoardAIRoute_AdvantagePieceData_TypeInfo);
          WarBoardAIRoute_AdvantagePieceData___ctor(v229, 0LL);
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pieceData->fields._battleServant_k__BackingField;
          if ( !Instance )
            goto LABEL_206;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleServantData__getClassId(
                                                                                (BattleServantData_o *)Instance,
                                                                                0LL);
          v230 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_206;
          v231 = v230->max_length;
          if ( v231 >= 1 )
          {
            v232 = (int)Instance;
            v233 = 0;
            while ( v233 < v231 )
            {
              v234 = (__int64)v230 + 8 * (int)v233;
              v235 = *(_QWORD *)(v234 + 32);
              if ( !v235 )
                goto LABEL_206;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                    *(WarBoardPieceData_o **)(v234 + 32),
                                                                                    0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                Instance = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(v235 + 128);
                if ( !Instance )
                  goto LABEL_206;
                ClassId = BattleServantData__getClassId((BattleServantData_o *)Instance, 0LL);
                if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SvtClassAttri_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                }
                Magnification = SvtClassAttri__getMagnification(v232, ClassId, 0LL);
                v238 = SvtClassAttri__getMagnification(ClassId, v232, 0LL);
                v239 = SvtClassAttri__getMagnification(v232, ClassId, 0LL);
                v240 = Magnification <= 1.0;
                v241 = SvtClassAttri__getMagnification(ClassId, v232, 0LL);
                if ( v240 )
                {
                  v242 = 0;
                }
                else
                {
                  if ( !v229 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v229->fields.dicAttackAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v235 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v235,
                    (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v242 = 1;
                  v229->fields.flagNow |= 0x4000uLL;
                }
                if ( v238 < 1.0 )
                {
                  if ( !v229 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v229->fields.dicDefenseAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v235 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v235,
                    (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v229->fields.flagNow |= 0x10000uLL;
                }
                if ( v239 < 1.0 )
                {
                  if ( !v229 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v229->fields.dicAttackDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v235 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v235,
                    (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v229->fields.flagNow |= 0x8000uLL;
                }
                if ( v241 > 1.0 )
                {
                  if ( !v229 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v229->fields.dicDefenseDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v235 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v235,
                    (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v229->fields.flagNow |= 0x20000uLL;
                }
                if ( ((unsigned __int8)v242 & (v238 < 1.0)) != 0 )
                {
                  if ( !v229 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v229->fields.dicClassAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v235 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v235,
                    (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v229->fields.flagNow |= 0x1000uLL;
                }
                if ( v239 < 1.0 && v241 > 1.0 )
                {
                  if ( !v229 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v229->fields.dicClassDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v235 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v235,
                    (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v229->fields.flagNow |= 0x2000uLL;
                }
              }
              v231 = v230->max_length;
              if ( (int)++v233 >= v231 )
                goto LABEL_199;
            }
LABEL_207:
            v245 = sub_B2C460(Instance);
            sub_B2C400(v245, 0LL);
          }
LABEL_199:
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v73->fields.dicUniqueKeyAdvantagePieceData;
          if ( !Instance )
            goto LABEL_206;
          System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
            (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
            pieceData->fields._uniqueIndex_k__BackingField,
            (WarBoardAIRoute_PutSquareTarget_o *)v229,
            (const MethodInfo_2DC4F7C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          v243 = v250;
          v115 = v256;
        }
        else
        {
          v243 = v250;
        }
        v249 = v243;
        p_placePieceData = (void **)&v257->fields.placePieceData;
      }
LABEL_203:
      max_length = allAllyPiece->max_length;
      v135 = v251 + 1;
      if ( v251 + 1 >= max_length )
        goto LABEL_204;
    }
    if ( WarBoardPieceData__get_isMaster(pieceData, 0LL) )
    {
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_206;
      v141 = 0;
      goto LABEL_68;
    }
    forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
    v140 = v73->fields.forceId;
LABEL_64:
    if ( forceId_k__BackingField != v140 )
      goto LABEL_69;
    goto LABEL_65;
  }
LABEL_204:
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
  if ( !*p_aiRouteMasterData )
LABEL_206:
    sub_B2C434(Instance, v61);
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData((WarBoardAIRoute_AIRouteMasterData_o *)Instance, 1, 0LL, 0LL);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(v73, v244);
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

  if ( (byte_4186778 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&targetSquare);
    this = (WarBoardAIRoute_o *)sub_B2C35C(&WarBoardAIManager_TypeInfo, v6);
    byte_4186778 = 1;
  }
  if ( !alreadyGetItemList )
    sub_B2C434(this, *(_QWORD *)&targetSquare);
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
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
    sub_B2C434(this, routeData);
  v19->fields.isMoveByServantAndDefenseDisAdvantageServantRange = (int)this;
}


void __fastcall WarBoardAIRoute__Clear(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x0

  if ( (byte_418676A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__, method);
    byte_418676A = 1;
  }
  allRouteList = this->fields.allRouteList;
  if ( !allRouteList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)allRouteList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__);
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
  if ( (byte_4186777 & 1) == 0 )
  {
    sub_B2C35C(&AStarSearch_TypeInfo, *(_QWORD *)&baseRange);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v11);
    dicPieceList = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_B2C35C(
                                                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                                                                        v12);
    byte_4186777 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !v6 )
    sub_B2C434(dicPieceList, *(_QWORD *)&baseRange);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v20,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v6,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v13 = 3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v20,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
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
            (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
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
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  if ( (unsigned int)(v18 + 1) >> 2 )
    return v17;
  return v13;
}


void __fastcall WarBoardAIRoute__CreateOutOfWarningAreaToDistance(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__int__o *v6; // x21
  struct System_Collections_Generic_Dictionary_int__int__o **p_dicOutOfWarningAreaRange; // x23
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_Dictionary_int__int__o *IsFlag; // x0
  __int64 v15; // x1
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
  const MethodInfo_2E24540 *v32; // x3
  int32_t v33; // w2
  __int64 v34; // x0
  struct System_Collections_Generic_Dictionary_int__int__o **v35; // [xsp+0h] [xbp-60h]

  if ( (byte_4186783 & 1) == 0 )
  {
    sub_B2C35C(&AStarSearch_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v5);
    byte_4186783 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v6;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dicOutOfWarningAreaRange,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  allSquare = this->fields.allSquare;
  if ( !allSquare )
LABEL_33:
    sub_B2C434(IsFlag, v15);
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
                                                                            (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
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
          v34 = sub_B2C460(IsFlag);
          sub_B2C400(v34, 0LL);
        }
        v24 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        IsFlag = *v35;
        if ( !*v35 )
          goto LABEL_33;
        v31 = (int32_t)v20->_1.name;
        v33 = v24;
        v32 = (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
      }
      else
      {
        IsFlag = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v31 = (int32_t)v20->_1.name;
        v32 = (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v33 = 0;
      }
      System_Collections_Generic_Dictionary_int__int___Add(IsFlag, v31, v33, v32);
      max_length = allSquare->max_length;
      ++v18;
    }
    while ( v18 < max_length );
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

  if ( (byte_4186770 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo, piecePlaceData);
    byte_4186770 = 1;
  }
  v9 = sub_B2C42C(WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
  WarBoardAIRoute__CreateRouteData_d__47___ctor((WarBoardAIRoute__CreateRouteData_d__47_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  uint32_t v9; // w19
  uint32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4186788 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, basePiece);
    this = (WarBoardAIRoute_o *)sub_B2C35C(&WarBoardAIManager_TypeInfo, v7);
    byte_4186788 = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_B2C434(this, basePiece);
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_2E6DB64 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
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
  _BOOL8 HasFlag_20831388; // x0
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
  if ( (byte_4186786 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B2C35C(
                                  &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__,
                                  basePiece);
    byte_4186786 = 1;
  }
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v6->fields.dicUniqueKeyAdvantagePieceData) == 0LL
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                                      (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)this,
                                      basePiece->fields._uniqueIndex_k__BackingField,
                                      (const MethodInfo_2DC4EB8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0LL )
  {
    sub_B2C434(this, basePiece);
  }
  v7 = (WarBoardAIRoute_AdvantagePieceData_o *)this;
  HasFlag_20831388 = WarBoardAIRoute_RouteData__HasFlag_20831388(
                       *(_QWORD *)&this->fields.TEMP_SEARCH_DEPTH,
                       4096LL,
                       0LL);
  if ( HasFlag_20831388 )
    v7->fields.baseCARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)HasFlag_20831388,
                               v7->fields.dicClassAdvantageServant,
                               baseSquareIndex,
                               v9);
  v10 = WarBoardAIRoute_RouteData__HasFlag_20831388(v7->fields.flagNow, 0x2000LL, 0LL);
  if ( v10 )
    v7->fields.baseCDARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v10,
                                v7->fields.dicClassDisAdvantageServant,
                                baseSquareIndex,
                                v11);
  v12 = WarBoardAIRoute_RouteData__HasFlag_20831388(v7->fields.flagNow, 0x4000LL, 0LL);
  if ( v12 )
    v7->fields.baseAARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v12,
                               v7->fields.dicAttackAdvantageServant,
                               baseSquareIndex,
                               v13);
  v14 = WarBoardAIRoute_RouteData__HasFlag_20831388(v7->fields.flagNow, 0x8000LL, 0LL);
  if ( v14 )
    v7->fields.baseADARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v14,
                                v7->fields.dicAttackDisAdvantageServant,
                                baseSquareIndex,
                                v15);
  v16 = WarBoardAIRoute_RouteData__HasFlag_20831388(v7->fields.flagNow, 0x10000LL, 0LL);
  if ( v16 )
    v7->fields.baseDARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v16,
                               v7->fields.dicDefenseAdvantageServant,
                               baseSquareIndex,
                               v17);
  v18 = WarBoardAIRoute_RouteData__HasFlag_20831388(v7->fields.flagNow, 0x20000LL, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_uint__int__o *v14; // x22
  __int64 isMaster; // x0
  __int64 v16; // x1
  struct WarBoardPieceData_array *allEnemyPiece; // x25
  int max_length; // w8
  unsigned int v19; // w26
  WarBoardPieceData_o *v20; // x23
  int32_t nowSquareIndex_k__BackingField; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  int32_t v23; // w24
  __int64 v25; // x0

  if ( (byte_4186782 & 1) == 0 )
  {
    sub_B2C35C(&AStarSearch_TypeInfo, routeDataList);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v13);
    byte_4186782 = 1;
  }
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v14 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v14,
    (const MethodInfo_2DC0818 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  allEnemyPiece = this->fields.allEnemyPiece;
  if ( !allEnemyPiece )
    goto LABEL_21;
  max_length = allEnemyPiece->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
      {
        v25 = sub_B2C460(isMaster);
        sub_B2C400(v25, 0LL);
      }
      v20 = allEnemyPiece->m_Items[v19];
      if ( !v20 )
        break;
      nowSquareIndex_k__BackingField = v20->fields._nowSquareIndex_k__BackingField;
      if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AStarSearch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      }
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   nowSquareIndex_k__BackingField,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      isMaster = System_Linq_Enumerable__Count_int_(
                   v22,
                   (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v14 )
        break;
      v23 = isMaster;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v14,
        v20->fields._uniqueIndex_k__BackingField,
        isMaster,
        (const MethodInfo_2DC13BC *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
      if ( *servantAndEnemyRange == -1 || v23 < *servantAndEnemyRange )
        *servantAndEnemyRange = v23;
      isMaster = WarBoardPieceData__get_isMaster(v20, 0LL);
      if ( (isMaster & 1) != 0 && (*servantAndEnemyMasterRange == -1 || v23 < *servantAndEnemyMasterRange) )
        *servantAndEnemyMasterRange = v23;
      max_length = allEnemyPiece->max_length;
      if ( (int)++v19 >= max_length )
        return v14;
    }
LABEL_21:
    sub_B2C434(isMaster, v16);
  }
  return v14;
}


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
  __int64 v15; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w20
  System_Collections_Generic_IEnumerable_TSource__o *Keys; // x19
  System_Func_int__bool__o *v19; // x20

  if ( (byte_4186773 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__, piecePlaceData);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_int___, v8);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v9);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__, v11);
    sub_B2C35C(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo, v12);
    byte_4186773 = 1;
  }
  v13 = (WarBoardAIRoute___c__DisplayClass51_0_o *)sub_B2C42C(WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass51_0___ctor(v13, 0LL);
  if ( !v13
    || (v13->fields.masterSquareIndex = masterSquareIndex, (aiRouteMasterData = this->fields.aiRouteMasterData) == 0LL)
    || !piecePlaceData )
  {
    sub_B2C434(v14, v15);
  }
  masterType = aiRouteMasterData->fields.masterType;
  Keys = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                                piecePlaceData,
                                                                (const MethodInfo_2E6BB64 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  if ( masterType != 1 )
  {
    v19 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v19,
      (Il2CppObject *)v13,
      Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    Keys = System_Linq_Enumerable__Where_int_(
             Keys,
             (System_Func_TSource__bool__o *)v19,
             (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
  }
  return System_Linq_Enumerable__ToArray_int_(
           Keys,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t defenseArea; // w20
  DefenseAreaData_o *v36; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v37; // x20
  WarBoardAIManager_c *v38; // x0
  char v39; // w10
  bool v40; // w8
  bool IsDetour; // w25
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Int32_array *v43; // x28
  __int64 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w25
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  BalanceConfig_c *v51; // x0
  System_Func_int__bool__o *klass; // x28
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x8
  int64_t v60; // x21
  BalanceConfig_c *v61; // x0
  BattleServantConfConponent_o *v63; // [xsp+8h] [xbp-C8h]
  bool v65; // [xsp+1Ch] [xbp-B4h]
  char v66; // [xsp+20h] [xbp-B0h]
  bool v67; // [xsp+24h] [xbp-ACh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v68; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v69; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4186774 & 1) == 0 )
  {
    sub_B2C35C(&AStarSearch_TypeInfo, *(_QWORD *)&masterSquareIndex);
    sub_B2C35C(&BalanceConfig_TypeInfo, v8);
    sub_B2C35C(&DefenseAreaData_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v17);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v18);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v19);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__, v21);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__, v22);
    sub_B2C35C(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo, v23);
    sub_B2C35C(&WarBoardAIManager_TypeInfo, v24);
    byte_4186774 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  v25 = sub_B2C42C(WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass52_0___ctor((WarBoardAIRoute___c__DisplayClass52_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_55;
  *(_QWORD *)(v25 + 16) = piecePlaceData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v25 + 16),
    (System_Int32_array **)piecePlaceData,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  npcData = this->fields.npcData;
  if ( !npcData )
    goto LABEL_55;
  defenseArea = npcData->fields.defenseArea;
  v36 = (DefenseAreaData_o *)sub_B2C42C(DefenseAreaData_TypeInfo);
  DefenseAreaData___ctor(v36, masterSquareIndex, defenseArea, 0LL);
  v37 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v37,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  if ( !byte_418575F )
  {
    sub_B2C35C(&WarBoardAIManager_TypeInfo, v27);
    byte_418575F = 1;
  }
  v38 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v38 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v38->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_55;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v68,
    dicSquareIndexEnemyPiece,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v63 = (BattleServantConfConponent_o *)(v25 + 24);
  v69 = v68;
  v39 = 0;
  v40 = 1;
  IsDetour = 1;
LABEL_15:
  v65 = v40;
LABEL_16:
  v66 = v39;
  v67 = IsDetour;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v69,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    current = v69.fields.current;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v43 = AStarSearch__RouteSearch(0LL, masterSquareIndex, (int32_t)current.fields.key, 0, 0LL, 0LL);
    v44 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v43,
            (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v37 )
      sub_B2C434(v44, v45);
    v46 = v44;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v37,
      (int32_t)current.fields.key,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v43,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v36 )
      sub_B2C434(v47, v48);
    DefenseAreaData__SetComparisonMasterAndEnemyRange(v36, v46, 0LL);
    if ( DefenseAreaData__IsInDefenseArea(v36, (int32_t)current.fields.key, 0LL) )
    {
      v51 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v51 = BalanceConfig_TypeInfo;
      }
      if ( !v51->static_fields->IsEnableOldBlockShortestRoute )
      {
        if ( !v43 )
          sub_B2C434(v51, v49);
        if ( (int)v43->max_length >= 2 )
          DefenseAreaData__SetComparisonAllMasterAndEnemyRange(v36, v43->m_Items[2], v46, 0LL);
      }
      IsDetour = 0;
      v39 = 1;
      if ( v67 )
      {
        IsDetour = WarBoardAIRoute__IsDetour(v43, allyPieces, v50);
        v40 = 0;
        v39 = 1;
        if ( v65 )
        {
          klass = (System_Func_int__bool__o *)v63->klass;
          if ( !v63->klass )
          {
            klass = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              klass,
              (Il2CppObject *)v25,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
            v63->klass = (BattleServantConfConponent_c *)klass;
            sub_B2C2F8(v63, (System_Int32_array **)klass, v53, v54, v55, v56, v57, v58);
          }
          if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AStarSearch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          }
          v40 = AStarSearch__RouteSearch(
                  (WarBoardPieceData_o *)current.fields.value,
                  (int32_t)current.fields.key,
                  masterSquareIndex,
                  0,
                  klass,
                  0LL) == 0LL;
          v39 = 1;
        }
        goto LABEL_15;
      }
      goto LABEL_16;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v69,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  v59 = 1025LL;
  if ( (v66 & 1) == 0 )
    v59 = 1LL;
  if ( v67 )
    v59 |= 0x2000000000uLL;
  v60 = v65 ? v59 | 0x10000000000LL : v59;
  if ( !v36 )
LABEL_55:
    sub_B2C434(dicSquareIndexEnemyPiece, v27);
  DefenseAreaData__CreateShortestRoutes(v36, (System_Collections_Generic_Dictionary_int__int____o *)v37, 0LL);
  v61 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v61 = BalanceConfig_TypeInfo;
  }
  if ( !v61->static_fields->IsEnableOldBlockShortestRoute )
    DefenseAreaData__CreateAllShortestRoutes(v36, (System_Collections_Generic_Dictionary_int__int____o *)v37, 0LL);
  DefenseAreaData__SetFlag(v36, v60, 0LL);
  return v36;
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
  System_Collections_Generic_Dictionary_int__int__o *v25; // x19
  __int64 v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v36; // x24
  _BOOL8 v37; // x0
  __int64 v38; // x1
  int32_t v39; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+30h] [xbp-80h] BYREF

  v7 = this;
  if ( (byte_4186781 & 1) == 0 )
  {
    sub_B2C35C(&AStarSearch_TypeInfo, basePiece);
    sub_B2C35C(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__, v17);
    sub_B2C35C(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v18);
    sub_B2C35C(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v19);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__, v21);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__, v22);
    this = (WarBoardAIRoute_o *)sub_B2C35C(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo, v23);
    byte_4186781 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v7->fields.dicUniqueKeyDesignationItem) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                 (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)this,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_2DC4EB8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v25 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v25,
          (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (this = (WarBoardAIRoute_o *)Item->fields.dicSquarePutSqareIndex) == 0LL )
  {
    sub_B2C434(this, basePiece);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v45,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v46 = v45;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v46,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v26 = sub_B2C42C(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    WarBoardAIRoute___c__DisplayClass66_0___ctor((WarBoardAIRoute___c__DisplayClass66_0_o *)v26, 0LL);
    if ( !v26 )
      sub_B2C434(v27, v28);
    v35 = v26 + 24;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v26 + 16) = v46.fields.current;
    sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 24), 0LL, v29, v30, v31, v32, v33, v34);
    v36 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v36,
      (Il2CppObject *)v26,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    v37 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v36,
            (const MethodInfo_17266AC *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    if ( !v37 )
    {
      if ( !*(_QWORD *)v35 )
        sub_B2C434(v37, v38);
      v39 = *(_DWORD *)(*(_QWORD *)v35 + 16LL);
      if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AStarSearch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      }
      v40 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   v39,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v41 = System_Linq_Enumerable__Count_int_(
              v40,
              (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v25 )
        sub_B2C434(v41, v42);
      System_Collections_Generic_Dictionary_int__int___Add(
        v25,
        *(_DWORD *)(v26 + 16),
        v41,
        (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v46,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v25;
}


WarBoardEvalValueSquare_EvalValueSquare_o *__fastcall WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4186775 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B2C35C(
                                  &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__,
                                  evalValueSquareList);
    byte_4186775 = 1;
  }
  if ( !evalValueSquareList )
    sub_B2C434(this, evalValueSquareList);
  return System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
           evalValueSquareList,
           index,
           (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
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

  if ( (byte_4186789 & 1) == 0 )
  {
    sub_B2C35C(&SvtClassAttri_TypeInfo, *(_QWORD *)&baseClassId);
    byte_4186789 = 1;
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
  if ( WarBoardAIRoute_RouteData__HasFlag_20831388(v8, 0x80000LL, 0LL)
    && WarBoardAIRoute_RouteData__HasFlag_20831388(v8, 0x100000LL, 0LL) )
  {
    v8 |= 0x40000uLL;
  }
  if ( !WarBoardAIRoute_RouteData__HasFlag_20831388(v8, 0x400000LL, 0LL) )
    return v8;
  if ( WarBoardAIRoute_RouteData__HasFlag_20831388(v8, 0x800000LL, 0LL) )
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
  if ( (byte_4186785 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, baseSquare);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B2C35C(&SvtClassAttri_TypeInfo, v12);
    this = (WarBoardAIRoute_o *)sub_B2C35C(&WarBoardAIManager_TypeInfo, v13);
    byte_4186785 = 1;
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
        v32 = sub_B2C460(this);
        sub_B2C400(v32, 0LL);
      }
      v19 = v17[v16];
      this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)this[1].fields.npcData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_22512764((WarBoardData_o *)this, v19, 0LL);
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
            && !WarBoardAIRoute_RouteData__HasFlag_20831388(v18 | 0x10, 0x1000000LL, 0LL) )
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
                                    (const MethodInfo_2E6DB64 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
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
    sub_B2C434(this, baseSquare);
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
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicOutOfWarningAreaRange; // x0
  System_Collections_Generic_Dictionary_int__int__o *v11; // x8

  if ( (byte_4186784 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&baseSquareIndex);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    byte_4186784 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0LL) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          actionSquareIndex,
          (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                    dicOutOfWarningAreaRange,
                                                                                    baseSquareIndex,
                                                                                    (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( (int)dicOutOfWarningAreaRange > System_Collections_Generic_Dictionary_int__int___get_Item(
                                         this->fields.dicOutOfWarningAreaRange,
                                         actionSquareIndex,
                                         (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange
    || (dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                          dicOutOfWarningAreaRange,
                                                                                          baseSquareIndex,
                                                                                          (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v11 = this->fields.dicOutOfWarningAreaRange) == 0LL) )
  {
LABEL_18:
    sub_B2C434(dicOutOfWarningAreaRange, v8);
  }
  if ( (_DWORD)dicOutOfWarningAreaRange == System_Collections_Generic_Dictionary_int__int___get_Item(
                                             v11,
                                             actionSquareIndex,
                                             (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
  __int64 v14; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *v15; // x8
  int32_t key; // w20
  int v17; // w19
  __int128 v18[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v19; // [xsp+20h] [xbp-40h] BYREF

  v4 = this;
  if ( (byte_4186772 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, piecePlaceData);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v8);
    this = (WarBoardAIRoute_o *)sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v9);
    byte_4186772 = 1;
  }
  memset(&v19, 0, 32);
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
    sub_B2C434(this, piecePlaceData);
  System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v18,
    piecePlaceData,
    (const MethodInfo_2E6C4C8 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
  *(_OWORD *)&v19.fields.dictionary = v18[0];
  v19.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v18[1];
  while ( 1 )
  {
    v13 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
            &v19,
            (const MethodInfo_278006C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    if ( !v13 )
      break;
    v15 = v4->fields.aiRouteMasterData;
    if ( !v15 )
      sub_B2C434(v13, v14);
    key = (int32_t)v19.fields.current.fields.key;
    if ( v15->fields.masterUniqueIndex == HIDWORD(v19.fields.current.fields.key) )
    {
      v17 = 3;
      goto LABEL_15;
    }
  }
  key = 0;
  v17 = 1;
LABEL_15:
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &v19,
    (const MethodInfo_27801B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
  if ( (unsigned int)(v17 + 1) >> 2 )
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
  if ( (byte_418678D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____, piecePlaceData);
    sub_B2C35C(&Method_System_Func_KeyValuePair_int__uint___bool___ctor__, v5);
    sub_B2C35C(&System_Func_KeyValuePair_int__uint___bool__TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v7);
    this = (WarBoardAIRoute_o *)sub_B2C35C(&Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__, v8);
    byte_418678D = 1;
  }
  klass = v4[13].klass;
  if ( !klass )
    sub_B2C434(this, piecePlaceData);
  if ( LODWORD(klass->_1.name) == 1 )
    return HIDWORD(klass->_1.name);
  v11 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_B2C42C(System_Func_KeyValuePair_int__uint___bool__TypeInfo);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v11,
    v4,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    (const MethodInfo_2704940 *)Method_System_Func_KeyValuePair_int__uint___bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_1A90AA0 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
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
  __int64 v30; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v32; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v33; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v34; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_418678F & 1) == 0 )
  {
    sub_B2C35C(&AStarSearch_TypeInfo, dicKeyPutIndexValueTargetData);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__,
      v13);
    this = (WarBoardAIRoute_o *)sub_B2C35C(&WarBoardAIManager_TypeInfo, v14);
    byte_418678F = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( !dicKeyPutIndexValueTargetData
    || (v32 = dicKeyPutIndexValueTargetData,
        (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___get_Values(
                                       dicKeyPutIndexValueTargetData,
                                       (const MethodInfo_2E58FE4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0LL) )
  {
    sub_B2C434(this, dicKeyPutIndexValueTargetData);
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v33,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_2409D54 *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v29 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v34,
            (const MethodInfo_2787BEC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v29 )
      break;
    currentValue = v34.fields.currentValue;
    if ( !v34.fields.currentValue )
      sub_B2C434(v29, v30);
    monitor = (WarBoardPieceData_o *)v34.fields.currentValue[1].monitor;
    if ( !monitor || LODWORD(v34.fields.currentValue[4].monitor) != actionSquareIndex )
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
              (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
      v21 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
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
                (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
        v27 = System_Linq_Enumerable__Count_int_(
                v24,
                (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
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
    &v34,
    (const MethodInfo_2787BE8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
  return v32;
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

  if ( (byte_4186776 & 1) == 0 )
  {
    sub_B2C35C(&AStarSearch_TypeInfo, dicPieceList);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v10);
    this = (WarBoardAIRoute_o *)sub_B2C35C(
                                  &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                  v11);
    byte_4186776 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !dicPieceList )
    sub_B2C434(this, dicPieceList);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)dicPieceList,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v12 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v18,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
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
            (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v12 > v15 || v12 == -1 )
      v12 = v15;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v18,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
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
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  WarBoardAIRoute_RouteData_o *current; // x24
  _BOOL8 HasFlag; // x0
  __int64 v26; // x1
  struct WarBoardPieceData_o *basePiece; // x8
  bool v28; // zf
  int32_t *v29; // x8
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *v31; // x8
  int32_t *v32; // x8
  uint32_t uniqueIndex_k__BackingField; // w24
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-70h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_4186771 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__, routeDataList);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__, v13);
    sub_B2C35C(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v18);
    byte_4186771 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  value = 0;
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  v19 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v19,
    (const MethodInfo_2DC0818 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_B2C434(v20, v21);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)routeDataList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v22 )
      break;
    current = (WarBoardAIRoute_RouteData_o *)v36.fields.current;
    if ( !v36.fields.current )
      sub_B2C434(v22, v23);
    if ( !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v36.fields.current, 0LL) )
    {
      value = 0;
      HasFlag = WarBoardAIRoute_RouteData__HasFlag(current, 0x4000000LL, 0LL);
      basePiece = current->fields.basePiece;
      if ( HasFlag )
      {
        if ( !basePiece )
          sub_B2C434(HasFlag, v26);
        v28 = basePiece->fields._type_k__BackingField == 1;
        v29 = masterReplaceCount;
        if ( !v28 )
        {
          actionPiece = current->fields.actionPiece;
          if ( !actionPiece )
            sub_B2C434(HasFlag, v26);
          if ( actionPiece->fields._type_k__BackingField == 1 )
            v29 = masterReplaceCount;
          else
            v29 = replaceCount;
        }
        ++*v29;
        v31 = current->fields.actionPiece;
        if ( !v31 )
          sub_B2C434(HasFlag, v26);
      }
      else
      {
        if ( !basePiece )
          sub_B2C434(HasFlag, v26);
        if ( basePiece->fields._type_k__BackingField == 1 )
          v32 = masterActionCount;
        else
          v32 = actionCount;
        ++*v32;
        v31 = current->fields.basePiece;
        if ( !v31 )
          sub_B2C434(HasFlag, v26);
      }
      if ( !v19 )
        sub_B2C434(HasFlag, v26);
      uniqueIndex_k__BackingField = v31->fields._uniqueIndex_k__BackingField;
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v19,
        uniqueIndex_k__BackingField,
        &value,
        (const MethodInfo_2DC2FCC *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v19,
        uniqueIndex_k__BackingField,
        value + 1,
        (const MethodInfo_2DC1394 *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
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
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v19; // x20

  if ( (byte_4186790 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____67417536, routeDataList);
    sub_B2C35C(&Method_System_Func_WarBoardAIRoute_RouteData__int___ctor__, v6);
    sub_B2C35C(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo, v7);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__, v8);
    sub_B2C35C(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo, v9);
    byte_4186790 = 1;
  }
  v10 = sub_B2C42C(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass84_0___ctor((WarBoardAIRoute___c__DisplayClass84_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  *(_QWORD *)(v10 + 16) = targetPiece;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v10 + 16),
    (System_Int32_array **)targetPiece,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v19,
    (Il2CppObject *)v10,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    (const MethodInfo_27127B0 *)Method_System_Func_WarBoardAIRoute_RouteData__int___ctor__);
  return System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v19,
           (const MethodInfo_1A9A55C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____67417536);
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
  Il2CppObject *key; // x24
  Il2CppObject *value; // x25
  WarBoardPieceData_array *allEnemyPiece; // x27
  WarBoardAIRoute_TargetData_o *v26; // x26
  __int64 v27; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+30h] [xbp-80h] BYREF

  v12 = this;
  if ( (byte_418677E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__, dicPutSquareIndex);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__, v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v15);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v16);
    sub_B2C35C(&Method_System_Func_IWarBoardObjectData__bool__Invoke__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v19);
    this = (WarBoardAIRoute_o *)sub_B2C35C(&WarBoardAIRoute_TargetData_TypeInfo, v20);
    byte_418677E = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !dicPutSquareIndex )
    sub_B2C434(this, dicPutSquareIndex);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v28,
    dicPutSquareIndex,
    (const MethodInfo_2E59820 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v21 = System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v29,
            (const MethodInfo_278728C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v21 )
      break;
    key = v29.fields.current.fields.key;
    value = v29.fields.current.fields.value;
    if ( excludeCond )
    {
      if ( !v29.fields.current.fields.value )
        sub_B2C434(v21, v22);
      if ( System_Func_BattleBuffData_BuffData__bool___Invoke(
             (System_Func_BattleBuffData_BuffData__bool__o *)excludeCond,
             (BattleBuffData_BuffData_o *)v29.fields.current.fields.value[3].monitor,
             (const MethodInfo_2711C18 *)Method_System_Func_IWarBoardObjectData__bool__Invoke__) )
      {
        continue;
      }
    }
    allEnemyPiece = v12->fields.allEnemyPiece;
    v26 = (WarBoardAIRoute_TargetData_o *)sub_B2C42C(WarBoardAIRoute_TargetData_TypeInfo);
    WarBoardAIRoute_TargetData___ctor_20836476(
      v26,
      (WarBoardAIRoute_TargetData_o *)value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      0LL);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_B2C434(0LL, v27);
    System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
      *dicKeyPutIndexValueTargetData,
      (int64_t)key,
      v26,
      (const MethodInfo_2E59240 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v29,
    (const MethodInfo_27873F4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v54; // x22
  __int64 v55; // x1
  const MethodInfo *v56; // x2
  WarBoardAiTargetCacher_o *aiTargetCacher; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  TargetDetector_o *DetectorByTrendKey; // x0
  __int64 v60; // x1
  int32_t Id_k__BackingField; // w27
  __int64 v62; // x1
  const MethodInfo *v63; // x2
  System_Collections_Generic_IEnumerable_TSource__o *Item; // x0
  WarBoardAiTargetCacher_o *v65; // x0
  System_Collections_Generic_IEnumerable_TSource__o *TargetObjectsByTrendId; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *klass; // x23
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x28
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v75; // x23
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v82; // x28
  WarBoardAIRoute___c_c *v83; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__64_2; // x23
  Il2CppObject *v86; // x19
  struct WarBoardAIRoute___c_StaticFields *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v94; // x28
  WarBoardAIRoute___c_c *v95; // x0
  struct WarBoardAIRoute___c_StaticFields *v96; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__64_3; // x23
  Il2CppObject *v98; // x19
  struct WarBoardAIRoute___c_StaticFields *v99; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v106; // x0
  __int64 v107; // x1
  WarBoardPieceData_o *v108; // x27
  int32_t v109; // w24
  WarBoardPieceData_array *allEnemyPiece; // x19
  WarBoardAIRoute_TargetData_o *v111; // x23
  __int64 v112; // x1
  BattleServantConfConponent_o *v113; // [xsp+0h] [xbp-C0h]
  BattleServantConfConponent_o *v114; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v116; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v117; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_418677F & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__,
      dicIndividualityPutSqareIndex);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__, v17);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo, v18);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___, v19);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___, v20);
    sub_B2C35C(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___, v21);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v22);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v23);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v24);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v25);
    sub_B2C35C(&Method_System_Func_IWarBoardObjectData__int___ctor__, v26);
    sub_B2C35C(&Method_System_Func_IWarBoardObjectData__bool___ctor__, v27);
    sub_B2C35C(&System_Func_IWarBoardObjectData__int__TypeInfo, v28);
    sub_B2C35C(&System_Func_IWarBoardObjectData__bool__TypeInfo, v29);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v31);
    sub_B2C35C(&WarBoardAIRoute_TargetData_TypeInfo, v32);
    sub_B2C35C(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__, v33);
    sub_B2C35C(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__, v34);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__, v35);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__, v36);
    sub_B2C35C(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo, v37);
    sub_B2C35C(&WarBoardAIRoute___c_TypeInfo, v38);
    byte_418677F = 1;
  }
  memset(&v117, 0, sizeof(v117));
  v39 = sub_B2C42C(WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass64_0___ctor((WarBoardAIRoute___c__DisplayClass64_0_o *)v39, 0LL);
  if ( !v39
    || (*(_QWORD *)(v39 + 16) = excludeCond,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v39 + 16),
          (System_Int32_array **)excludeCond,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47),
        *(_QWORD *)(v39 + 24) = basePiece,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v39 + 24),
          (System_Int32_array **)basePiece,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53),
        *(_DWORD *)(v39 + 32) = baseSquareIndex,
        v54 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo),
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
          v54,
          (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__),
        !dicIndividualityPutSqareIndex) )
  {
    sub_B2C434(v40, v41);
  }
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v116,
    dicIndividualityPutSqareIndex,
    (const MethodInfo_2E59820 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v114 = (BattleServantConfConponent_o *)(v39 + 40);
  v117 = v116;
  v113 = (BattleServantConfConponent_o *)(v39 + 48);
  while ( System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v117,
            (const MethodInfo_278728C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_B2C434(0LL, v55);
    current = v117.fields.current;
    DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(
                           aiTargetCacher,
                           (int64_t)v117.fields.current.fields.key,
                           v56);
    if ( DetectorByTrendKey )
    {
      Id_k__BackingField = DetectorByTrendKey->fields._Id_k__BackingField;
      if ( !v54 )
        goto LABEL_45;
    }
    else
    {
      Id_k__BackingField = 0;
      if ( !v54 )
LABEL_45:
        sub_B2C434(DetectorByTrendKey, v60);
    }
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v54,
           Id_k__BackingField,
           (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                    v54,
                                                                    Id_k__BackingField,
                                                                    (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
LABEL_37:
      TargetObjectsByTrendId = Item;
      goto LABEL_38;
    }
    v65 = this->fields.aiTargetCacher;
    if ( !v65 )
      sub_B2C434(0LL, v62);
    TargetObjectsByTrendId = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardAiTargetCacher__GetTargetObjectsByTrendId(
                                                                                    v65,
                                                                                    (int64_t)current.fields.key,
                                                                                    v63);
    if ( TargetObjectsByTrendId )
    {
      klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v114->klass;
      if ( !v114->klass )
      {
        klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_IWarBoardObjectData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          klass,
          (Il2CppObject *)v39,
          Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
          (const MethodInfo_2711C04 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
        v114->klass = (BattleServantConfConponent_c *)klass;
        sub_B2C2F8(v114, (System_Int32_array **)klass, v68, v69, v70, v71, v72, v73);
      }
      v74 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              TargetObjectsByTrendId,
              (System_Func_TSource__bool__o *)klass,
              (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
      v75 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v113->klass;
      if ( !v113->klass )
      {
        v75 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_IWarBoardObjectData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          v75,
          (Il2CppObject *)v39,
          Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
          (const MethodInfo_27127B0 *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v113->klass = (BattleServantConfConponent_c *)v75;
        sub_B2C2F8(v113, (System_Int32_array **)v75, v76, v77, v78, v79, v80, v81);
      }
      v82 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
              v74,
              (System_Func_TSource__TKey__o *)v75,
              (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
      v83 = WarBoardAIRoute___c_TypeInfo;
      if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
        v83 = WarBoardAIRoute___c_TypeInfo;
      }
      static_fields = v83->static_fields;
      _9__64_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__64_2;
      if ( !_9__64_2 )
      {
        if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 && !v83->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v83);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
        }
        v86 = (Il2CppObject *)static_fields->__9;
        _9__64_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_IWarBoardObjectData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__64_2,
          v86,
          Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
          (const MethodInfo_27127B0 *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v87 = WarBoardAIRoute___c_TypeInfo->static_fields;
        v87->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v87->__9__64_2,
          (System_Int32_array **)_9__64_2,
          v88,
          v89,
          v90,
          v91,
          v92,
          v93);
      }
      v94 = System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
              v82,
              (System_Func_TSource__TKey__o *)_9__64_2,
              (const MethodInfo_1A9A820 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
      v95 = WarBoardAIRoute___c_TypeInfo;
      if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
        v95 = WarBoardAIRoute___c_TypeInfo;
      }
      v96 = v95->static_fields;
      _9__64_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v96->__9__64_3;
      if ( !_9__64_3 )
      {
        if ( (BYTE3(v95->vtable._0_Equals.methodPtr) & 4) != 0 && !v95->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v95);
          v96 = WarBoardAIRoute___c_TypeInfo->static_fields;
        }
        v98 = (Il2CppObject *)v96->__9;
        _9__64_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_IWarBoardObjectData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__64_3,
          v98,
          Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
          (const MethodInfo_27127B0 *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v99 = WarBoardAIRoute___c_TypeInfo->static_fields;
        v99->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v99->__9__64_3,
          (System_Int32_array **)_9__64_3,
          v100,
          v101,
          v102,
          v103,
          v104,
          v105);
      }
      v106 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                    v94,
                                                                    (System_Func_TSource__TKey__o *)_9__64_3,
                                                                    (const MethodInfo_1A9A820 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                                    v106,
                                                                    (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
      goto LABEL_37;
    }
LABEL_38:
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v54,
      Id_k__BackingField,
      (WarBoardAIRoute_RouteData_o *)TargetObjectsByTrendId,
      (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( TargetObjectsByTrendId )
    {
      v108 = *(WarBoardPieceData_o **)(v39 + 24);
      v109 = *(_DWORD *)(v39 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v111 = (WarBoardAIRoute_TargetData_o *)sub_B2C42C(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_20837564(
        v111,
        (WarBoardAIRoute_TargetData_o *)current.fields.value,
        (IWarBoardObjectData_o *)TargetObjectsByTrendId,
        v108,
        v109,
        allEnemyPiece,
        0LL);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_B2C434(0LL, v112);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
        *dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        v111,
        (const MethodInfo_2E59240 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_B2C434(0LL, v107);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Remove(
        *dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        (const MethodInfo_2E5AC10 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v117,
    (const MethodInfo_27873F4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetTargetToDistance_22716908(
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
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  WarBoardAIRoute_PutSquareTarget_o *Item; // x24
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v25; // x23
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x26
  const MethodInfo *v28; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicIndividualityPutSqareIndex; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x26
  const MethodInfo *v31; // x6
  const MethodInfo *v32; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4186780 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__, basePiece);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v10);
    sub_B2C35C(&Method_System_Func_IWarBoardObjectData__bool___ctor__, v11);
    sub_B2C35C(&System_Func_IWarBoardObjectData__bool__TypeInfo, v12);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__, v13);
    sub_B2C35C(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo, v14);
    byte_4186780 = 1;
  }
  dicKeyPutIndexValueTargetData = 0LL;
  v15 = sub_B2C42C(WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass65_0___ctor((WarBoardAIRoute___c__DisplayClass65_0_o *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = routeDataList,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v15 + 16),
          (System_Int32_array **)routeDataList,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        !basePiece)
    || (dicUniqueKeyTarget = this->fields.dicUniqueKeyTarget) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                 dicUniqueKeyTarget,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_2DC4EB8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v25 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B2C42C(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo),
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
          v25,
          (const MethodInfo_2E58690 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = v25,
        !Item) )
  {
    sub_B2C434(dicUniqueKeyTarget, v17);
  }
  dicObjectPutSquareIndex = Item->fields.dicObjectPutSquareIndex;
  v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v27,
    (Il2CppObject *)v15,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    (const MethodInfo_2711C04 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    dicObjectPutSquareIndex,
    (System_Func_IWarBoardObjectData__bool__o *)v27,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v28);
  dicIndividualityPutSqareIndex = Item->fields.dicIndividualityPutSqareIndex;
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v15,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    (const MethodInfo_2711C04 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
  WarBoardAIRoute__GetTargetToDistanceUsingIndividuality(
    this,
    dicIndividualityPutSqareIndex,
    (System_Func_IWarBoardObjectData__bool__o *)v30,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v31);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    Item->fields.dicSquarePutSqareIndex,
    0LL,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v32);
  return v25;
}


float __fastcall WarBoardAIRoute__GetThinkingThreshold(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_B2C434(this, method);
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
  if ( (byte_4186787 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, basePiece);
    byte_4186787 = 1;
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
    this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
      return SHIDWORD(this[3].fields.allAllyPiece) >= v13 + requiredCost;
LABEL_13:
    sub_B2C434(this, basePiece);
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
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  WarBoardPieceData_o **v27; // x25
  bool v28; // w8
  const MethodInfo *v29; // x3
  int32_t RouteSumPieceActionCost; // w23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x21
  __int64 v32; // x8

  if ( (byte_418678B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, basePiece);
    sub_B2C35C(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v13);
    sub_B2C35C(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__, v16);
    sub_B2C35C(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo, v17);
    byte_418678B = 1;
  }
  v18 = sub_B2C42C(WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass76_0___ctor((WarBoardAIRoute___c__DisplayClass76_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_25;
  *(_QWORD *)(v18 + 16) = actionPiece;
  v27 = (WarBoardPieceData_o **)(v18 + 16);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v18 + 16),
    (System_Int32_array **)actionPiece,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  Instance = *(WarBoardPieceData_o **)(v18 + 16);
  if ( !Instance )
    goto LABEL_25;
  v28 = WarBoardPieceData__EnableSwapByOther(Instance, 0, 0LL);
  Instance = 0LL;
  if ( !v28 )
    return (char)Instance;
  if ( !basePiece )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(basePiece, 0LL) )
    goto LABEL_10;
  Instance = *v27;
  if ( !*v27 )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(Instance, 0LL) )
  {
LABEL_10:
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( *((_DWORD *)&Instance[2].fields._isNotIncludeWin_k__BackingField + 1) < this->fields.moveCost
                                                                               + requiredCost
                                                                               + this->fields.masterMoveCost )
      goto LABEL_23;
  }
  else
  {
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( *((_DWORD *)&Instance[2].fields._isNotIncludeWin_k__BackingField + 1) < requiredCost
                                                                               + 2 * this->fields.moveCost )
      goto LABEL_23;
  }
  RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                              (WarBoardAIRoute_o *)Instance,
                              routeDataList,
                              *v27,
                              v29);
  if ( !WarBoardPieceData__EnableMoveBySelf(basePiece, sumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v27;
  if ( !*v27 )
    goto LABEL_25;
  if ( !WarBoardPieceData__EnableSwapByOther(Instance, RouteSumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v27;
  if ( !*v27 )
LABEL_25:
    sub_B2C434(Instance, v20);
  if ( !WarBoardPieceData__get_isInfinitelyActable(Instance, 0LL) )
  {
    v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v31,
      (Il2CppObject *)v18,
      Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    Instance = (WarBoardPieceData_o *)System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
                                        (System_Func_TSource__bool__o *)v31,
                                        (const MethodInfo_1A8D348 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    v32 = *(_QWORD *)(v18 + 16);
    if ( v32 )
    {
      if ( *(_DWORD *)(v32 + 36) > (int)Instance )
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
  __int64 v18; // x1
  __int64 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-60h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_418677D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, piecePlaceData);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v9);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_B2C35C(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v10);
    byte_418677D = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !v6 )
    sub_B2C434(shortestEnemyRoute, piecePlaceData);
  v11 = !isDefenseSquare;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v22 = v21;
  for ( i = 0; ; i = 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v17 )
      break;
    current = v22.fields.current;
    if ( !v22.fields.current )
      sub_B2C434(v17, v18);
    monitor = v22.fields.current[1].monitor;
    if ( (int)monitor - 1 <= (int)v11 )
    {
LABEL_17:
      i = 0;
      break;
    }
    if ( (unsigned int)v22.fields.current[1].monitor <= v11 )
    {
LABEL_20:
      v20 = sub_B2C460(v17);
      sub_B2C400(v20, 0LL);
    }
    v15 = (int)monitor - 1;
    v16 = v11;
    while ( 1 )
    {
      if ( !piecePlaceData )
        sub_B2C434(v17, v18);
      v17 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
              piecePlaceData,
              *((_DWORD *)&current[2].klass + v16),
              (const MethodInfo_2E6C1B8 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( v17 )
        break;
      if ( (__int64)++v16 >= v15 )
        goto LABEL_17;
      if ( v16 >= LODWORD(current[1].monitor) )
        goto LABEL_20;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_418677A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    byte_418677A = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !defenseArea )
    sub_B2C434(v7, *(_QWORD *)&index);
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
  __int64 v18; // x1
  Il2CppClass *klass; // x0
  unsigned int monitor; // w9
  __int64 v21; // x11
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int v24; // w8
  int v25; // w28
  int v26; // w25
  int v27; // w8
  __int64 v28; // x0
  int v29; // w9
  _WORD v31[26]; // [xsp+8h] [xbp-D8h] BYREF
  int v32; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+60h] [xbp-80h] BYREF

  v6 = allShortestRoute;
  if ( (byte_418677C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__,
      *(_QWORD *)&index);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__,
      v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v9);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__,
      v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__,
      v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__,
      v13);
    allShortestRoute = (System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *)sub_B2C35C(&Method_System_Collections_Generic_List_int____GetEnumerator__, v14);
    byte_418677C = 1;
  }
  memset(&v33, 0, sizeof(v33));
  memset(&v34, 0, sizeof(v34));
  v32 = 0;
  if ( !v6 )
    sub_B2C434(allShortestRoute, *(_QWORD *)&index);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v31,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v6,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v34 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v31;
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v34,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    if ( !v17 )
      break;
    if ( !v34.fields.current.fields.value )
      sub_B2C434(v17, v18);
    klass = v34.fields.current.fields.value[1].klass;
    if ( !klass )
      sub_B2C434(0LL, v18);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v31,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v33 = *(System_Collections_Generic_List_Enumerator_T__o *)v31;
    do
    {
LABEL_13:
      v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v33,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v22 )
      {
        *(_DWORD *)&v31[2 * v15 + 20] = 117;
        v24 = v32;
        goto LABEL_17;
      }
      if ( !v33.fields.current )
        sub_B2C434(v22, v23);
      monitor = (unsigned int)v33.fields.current[1].monitor;
      v21 = !isDefenseSquare;
    }
    while ( (int)(monitor - 1) <= !isDefenseSquare );
    while ( 1 )
    {
      if ( (unsigned int)v21 >= monitor )
      {
        v28 = sub_B2C460(v22);
        sub_B2C400(v28, 0LL);
      }
      if ( *((_DWORD *)&v33.fields.current[2].klass + v21) == index )
        break;
      if ( (int)++v21 >= (int)(monitor - 1) )
        goto LABEL_13;
    }
    *(_DWORD *)&v31[2 * v15 + 20] = 144;
    v24 = v32;
    v16 = 1;
LABEL_17:
    v25 = v24 + 1;
    v32 = v24 + 1;
    v26 = v24 + 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v33,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v15 = 0;
    if ( v26 )
    {
      v15 = v26 - 1;
      v27 = *(_DWORD *)&v31[2 * v26 + 18];
      if ( v27 == 117 )
      {
        v32 = v26 - 1;
      }
      else
      {
        v15 = v26;
        if ( v27 == 144 )
          goto LABEL_25;
      }
    }
  }
  *(_DWORD *)&v31[2 * v15 + 20] = 142;
  v25 = ++v32;
LABEL_25:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v34,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
  if ( !v25 )
    return 0;
  v29 = *(_DWORD *)&v31[2 * v25 + 18];
  if ( v29 == 142 )
  {
    v16 = 0;
    goto LABEL_30;
  }
  if ( v29 == 144 )
  {
LABEL_30:
    v32 = v25 - 1;
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
  __int64 v14; // x1
  int v15; // w19
  int v16; // w20
  __int64 v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_418677B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_B2C35C(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v9);
    byte_418677B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !v6 )
    sub_B2C434(shortestEnemyRoute, *(_QWORD *)&index);
  v10 = !isDefenseSquare;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  do
  {
LABEL_10:
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
    {
      v15 = 0;
      v16 = 1;
      goto LABEL_13;
    }
    if ( !v20.fields.current )
      sub_B2C434(v13, v14);
    monitor = (unsigned int)v20.fields.current[1].monitor;
    v12 = v10;
  }
  while ( (int)(monitor - 1) <= v10 );
  while ( 1 )
  {
    if ( (unsigned int)v12 >= monitor )
    {
      v18 = sub_B2C460(v13);
      sub_B2C400(v18, 0LL);
    }
    if ( *((_DWORD *)&v20.fields.current[2].klass + v12) == index )
      break;
    if ( (int)++v12 >= (int)(monitor - 1) )
      goto LABEL_10;
  }
  v15 = 1;
  v16 = 3;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v15 & ((unsigned int)(v16 + 1) >> 2);
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
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t v19; // w0
  int v20; // w23
  System_Func_int__bool__o **v21; // x21
  System_Func_int__bool__o *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int v29; // w8

  if ( (byte_4186779 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, blockPieces);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v5);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v6);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v7);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__, v8);
    sub_B2C35C(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo, v9);
    byte_4186779 = 1;
  }
  v10 = sub_B2C42C(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass58_0___ctor((WarBoardAIRoute___c__DisplayClass58_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  *(_QWORD *)(v10 + 16) = route;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)route, v13, v14, v15, v16, v17, v18);
  v19 = System_Linq_Enumerable__Count_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v10 + 16),
          (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v19 < 2 )
    return 0;
  v20 = v19 - 1;
  *(_DWORD *)(v10 + 24) = 1;
  if ( v19 - 1 < 2 )
    return 0;
  v21 = (System_Func_int__bool__o **)(v10 + 32);
  while ( 1 )
  {
    v22 = *v21;
    if ( !*v21 )
    {
      v22 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v22,
        (Il2CppObject *)v10,
        Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
        (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
      *(_QWORD *)(v10 + 32) = v22;
      sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
    }
    if ( BasicHelper__Any_int__24273940(
           blockPieces,
           (System_Func_T__bool__o *)v22,
           (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496) )
    {
      break;
    }
    v29 = *(_DWORD *)(v10 + 24) + 1;
    *(_DWORD *)(v10 + 24) = v29;
    if ( v29 >= v20 )
      return 0;
  }
  return 1;
}


bool __fastcall WarBoardAIRoute__IsThinkingThreshold(WarBoardAIRoute_o *this, float v, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_B2C434(this, method);
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
  const MethodInfo *v13; // x1
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  unsigned __int64 v16; // x25
  int32_t v17; // w22
  const MethodInfo *v18; // x1
  __int64 v19; // x0
  uint32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_418678A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, *(_QWORD *)&actionSquareIndex);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B2C35C(&WarBoardAIManager_TypeInfo, v11);
    byte_418678A = 1;
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
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)entries )
      {
        v19 = sub_B2C460(Square);
        sub_B2C400(v19, 0LL);
      }
      if ( !piecePlaceData )
        break;
      v17 = *(&npcEntityDict->fields.count + v16);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v17,
             &value,
             (const MethodInfo_2E6DB64 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Square = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)Square[1].fields.reinforcementsSaveList;
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardData__GetPiece_22553560(Square, value, 1, 0LL);
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
      Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v17, v18);
      if ( Square )
      {
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v17, v13);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0LL);
        if ( ((unsigned __int8)Square & 1) != 0 )
          ++*attackByLinkEnemy;
      }
      LODWORD(entries) = npcEntityDict->fields.entries;
      if ( (__int64)++v16 >= (int)entries )
        return;
    }
LABEL_30:
    sub_B2C434(Square, v13);
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
  const MethodInfo *v18; // x4
  struct System_Collections_Generic_List_WarBoardPieceData__o *moveByLinkedPiece; // x25
  WarBoardPieceData_o *v20; // x23
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  int32_t v23; // w24
  int32_t ClassId; // w25
  __int64 v25; // x0

  if ( (byte_418678E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, routeData);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B2C35C(&SvtClassAttri_TypeInfo, v9);
    this = (WarBoardAIRoute_o *)sub_B2C35C(&WarBoardAIManager_TypeInfo, v10);
    byte_418678E = 1;
  }
  v11 = *routeData;
  if ( !*routeData
    || (actionSquare = v11->fields.actionSquare) == 0LL
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0LL )
  {
LABEL_50:
    sub_B2C434(this, routeData);
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
        v25 = sub_B2C460(this);
        sub_B2C400(v25, 0LL);
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
      this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetActionPiece(
                                    this,
                                    (WarBoardPieceData_o *)routeData,
                                    v17,
                                    piecePlaceData,
                                    v18);
      if ( this )
      {
        if ( !*routeData )
          goto LABEL_50;
        moveByLinkedPiece = (*routeData)->fields.moveByLinkedPiece;
        v20 = (WarBoardPieceData_o *)this;
        this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_50;
        this = (WarBoardAIRoute_o *)this[1].fields.npcData;
        if ( !this )
          goto LABEL_50;
        this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_22512764((WarBoardData_o *)this, v17, 0LL);
        if ( !moveByLinkedPiece )
          goto LABEL_50;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)moveByLinkedPiece,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( WarBoardAIManager__IsAllyPiece(basePiece, v20, v21)
          && (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v20, 0LL), ((unsigned __int8)this & 1) != 0) )
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
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v20, v22);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*routeData )
              goto LABEL_50;
            (*routeData)->fields.flagNow |= 0x40uLL;
            if ( WarBoardPieceData__get_isServant(v20, 0LL) )
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
                this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v20, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
                  if ( !this )
                    goto LABEL_50;
                  this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
                  if ( !v20->fields._battleServant_k__BackingField )
                    goto LABEL_50;
                  v23 = (int)this;
                  ClassId = BattleServantData__getClassId(v20->fields._battleServant_k__BackingField, 0LL);
                  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                  }
                  if ( SvtClassAttri__getMagnification(v23, ClassId, 0LL) > 1.0 )
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
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v20, 0LL);
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
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x24
  peRenderTexture_ChangeLayerObject_o *v26; // x0
  __int64 v27; // x3
  peRenderTexture_ChangeLayerObject_c *klass; // x8
  IWarBoardObjectData_o *v29; // x23
  unsigned __int64 v30; // x10
  IWarBoardObjectData_c **p_offset; // x11
  __int64 v32; // x0
  WarBoardAIRoute_TargetData_o *v33; // x22

  if ( (byte_418676F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__, targetDic);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v14);
    sub_B2C35C(&IWarBoardObjectData_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__, v16);
    sub_B2C35C(&Method_System_Predicate_IWarBoardObjectData___ctor__, v17);
    sub_B2C35C(&System_Predicate_IWarBoardObjectData__TypeInfo, v18);
    sub_B2C35C(&WarBoardAIRoute_TargetData_TypeInfo, v19);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__, v20);
    sub_B2C35C(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo, v21);
    byte_418676F = 1;
  }
  v22 = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_B2C42C(WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
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
         (const MethodInfo_2E594B4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_IWarBoardObjectData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v25,
    (Il2CppObject *)v22,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_IWarBoardObjectData___ctor__);
  if ( !objectList )
LABEL_17:
    sub_B2C434(v23, v24);
  v26 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)objectList,
          (System_Predicate_T__o *)v25,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
  if ( v26 )
  {
    *notSquareTarget = 1;
    klass = v26->klass;
    v29 = (IWarBoardObjectData_o *)v26;
    if ( *(_WORD *)&v26->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v30;
        p_offset += 2;
        if ( v30 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      v32 = (__int64)(&klass->vtable._2_GetHashCode.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_12:
      v32 = sub_AC5258(v26, IWarBoardObjectData_TypeInfo, 2LL, v27);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8)) & 1) != 0 )
    {
      v33 = (WarBoardAIRoute_TargetData_o *)sub_B2C42C(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_20836056(v33, v29, trendKey, conditionId, 0LL);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
        targetDic,
        trendKey,
        v33,
        (const MethodInfo_2E59218 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
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

  if ( (byte_418676D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__,
      *(_QWORD *)&aiId);
    byte_418676D = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_B2C434(0LL, *(_QWORD *)&aiId);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_2E66128 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
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
  __int64 v15; // x1
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *basePiece; // x8

  if ( (byte_418678C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__uint__Remove__, piecePlaceData);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___67248760, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v12);
    byte_418678C = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor_48674116(
    v13,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_2E6B544 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___67248760);
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
        (const MethodInfo_2E6BF2C *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_B2C434(HasFlag, v15);
  }
  if ( !v13 )
    goto LABEL_12;
  HasFlag = System_Collections_Generic_Dictionary_int__uint___Remove(
              v13,
              baseSquareIndex,
              (const MethodInfo_2E6D84C *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v13,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_2E6BF2C *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v13;
}


bool __fastcall WarBoardAIRoute____ctor_b__42_0(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
  if ( (byte_4186791 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, x);
    byte_4186791 = 1;
  }
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(this, x);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x23
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v13; // x1
  System_Int32_array *v14; // x8
  unsigned int v15; // w9
  unsigned int max_length; // w10
  unsigned int v17; // w23
  struct System_Collections_Generic_List_int____o *replaceDataList; // x20
  int32_t v19; // w25
  int32_t v20; // w24
  int basePanel; // w8
  __int64 v22; // x0
  System_Int32_array *data; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4185706 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, *(_QWORD *)&forceId);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int_____ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int____TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_4185706 = 1;
  }
  data = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_OWORD *)&this->fields.masterType = xmmword_319F710;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v11;
  sub_B2C2F8(&this->fields.replaceDataList, v11);
  this->fields.replacePriority = -1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = *(WebViewManager_o **)&Instance[4].fields.m_CachedPtr;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WebViewManager_o *)WarBoardData__IsDefenseTarget((WarBoardData_o *)Instance, &data, forceId, groupId, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  v14 = data;
  if ( !data )
LABEL_16:
    sub_B2C434(Instance, v13);
  v15 = 0;
  while ( 1 )
  {
    max_length = v14->max_length;
    if ( (int)v15 >= (int)max_length )
      break;
    if ( v15 >= max_length )
      goto LABEL_18;
    v17 = v15 + 1;
    if ( v15 + 1 >= max_length )
      goto LABEL_18;
    replaceDataList = this->fields.replaceDataList;
    v19 = v14->m_Items[v15 + 1];
    v20 = v14->m_Items[v17 + 1];
    Instance = (WebViewManager_o *)sub_B2C374(int___TypeInfo, 2LL);
    if ( !Instance )
      goto LABEL_16;
    basePanel = (int)Instance->fields.basePanel;
    v13 = Instance;
    if ( !basePanel || (LODWORD(Instance->fields.baseWindow) = v19, basePanel == 1) )
    {
LABEL_18:
      v22 = sub_B2C460(Instance);
      sub_B2C400(v22, 0LL);
    }
    HIDWORD(Instance->fields.baseWindow) = v20;
    if ( replaceDataList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)replaceDataList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_int____Add__);
      v14 = data;
      v15 = v17 + 1;
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
  if ( (byte_4185707 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int____get_Count__, *(_QWORD *)&type);
    this = (WarBoardAIRoute_AIRouteMasterData_o *)sub_B2C35C(
                                                    &Method_System_Collections_Generic_List_int____get_Item__,
                                                    v7);
    byte_4185707 = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
                  v15 = sub_B2C460(this);
                  sub_B2C400(v15, 0LL);
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
    sub_B2C434(this, *(_QWORD *)&type);
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
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v17; // x23
  WarBoardActionTrendMaster_o *HasMatchCondition; // x0
  __int64 v19; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  WarBoardActionTrendMaster_o *v21; // x20
  unsigned __int64 v22; // x24
  WarBoardActionTrendEntity_o *v23; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  WarBoardAIRoute_ActionTrendInfo_o *v25; // x23
  const MethodInfo *v26; // x2
  __int64 v27; // x0
  int32_t condType; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4185709 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, entity);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__, v7);
    sub_B2C35C(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v11);
    sub_B2C35C(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__, v12);
    byte_4185709 = 1;
  }
  condType = 0;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v13;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_B2C2F8(&this->fields._FutureTrendInfoList_k__BackingField, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Entity_k__BackingField = entity;
  sub_B2C2F8(&this->fields, entity);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v15);
  v17 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B2C42C(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
    v17,
    0LL,
    Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__,
    (const MethodInfo_270E404 *)Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
  HasMatchCondition = (WarBoardActionTrendMaster_o *)WarBoardActionTrendConditionMaster__HasMatchCondition(
                                                       ConditionEntityArray,
                                                       v17,
                                                       &condType,
                                                       0LL);
  this->fields._HasTargetIndividualityCond_k__BackingField = (unsigned __int8)HasMatchCondition & 1;
  if ( !entity )
    goto LABEL_19;
  if ( !WarBoardActionTrendEntity__get_HasFutureTrend(entity, 0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  HasMatchCondition = (WarBoardActionTrendMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !HasMatchCondition
    || (HasMatchCondition = (WarBoardActionTrendMaster_o *)WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                                                             HasMatchCondition,
                                                             entity,
                                                             0LL)) == 0LL )
  {
LABEL_19:
    sub_B2C434(HasMatchCondition, v19);
  }
  MasterName_k__BackingField = HasMatchCondition->fields._MasterName_k__BackingField;
  v21 = HasMatchCondition;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v22 = 0LL;
    do
    {
      if ( v22 >= (unsigned int)MasterName_k__BackingField )
      {
        v27 = sub_B2C460(HasMatchCondition);
        sub_B2C400(v27, 0LL);
      }
      v23 = (WarBoardActionTrendEntity_o *)*((_QWORD *)&v21->fields.list + v22);
      if ( v23 )
      {
        v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_FutureTrendInfoList_k__BackingField;
        v25 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B2C42C(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v25, v23, v26);
        if ( !v24 )
          goto LABEL_19;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
      LODWORD(MasterName_k__BackingField) = v21->fields._MasterName_k__BackingField;
      ++v22;
    }
    while ( (__int64)v22 < (int)MasterName_k__BackingField );
  }
}


WarBoardActionTrendConditionEntity_array *__fastcall WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  WarBoardAIRoute_ActionTrendInfo_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct WarBoardActionTrendConditionEntity_array **p_conditionEntityArray; // x19
  WarBoardActionTrendConditionEntity_array *conditionEntityArray; // x21
  struct WarBoardActionTrendEntity_o *Entity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *conditionIds; // x20
  WarBoardAIRoute_ActionTrendInfo___c_c *v13; // x0
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__8_0; // x21
  Il2CppObject *v16; // x22
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *v17; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x0

  v2 = this;
  if ( (byte_4185708 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___, v4);
    sub_B2C35C(&Method_System_Func_int__WarBoardActionTrendConditionEntity___ctor__, v5);
    sub_B2C35C(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__, v7);
    this = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B2C35C(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v8);
    byte_4185708 = 1;
  }
  p_conditionEntityArray = &v2->fields.conditionEntityArray;
  conditionEntityArray = v2->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = v2->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_B2C434(this, method);
    conditionIds = (System_Collections_Generic_IEnumerable_TSource__o *)Entity_k__BackingField->fields.conditionIds;
    v13 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    if ( (BYTE3(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
      v13 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__8_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B2C42C(System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        _9__8_0,
        v16,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        (const MethodInfo_270D828 *)Method_System_Func_int__WarBoardActionTrendConditionEntity___ctor__);
      v17 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      v17->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_B2C2F8(&v17->__9__8_0, _9__8_0);
    }
    v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           conditionIds,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_1A95A8C *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v19 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v18,
            (const MethodInfo_1726A44 *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                                         (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    *p_conditionEntityArray = conditionEntityArray;
    sub_B2C2F8(p_conditionEntityArray, conditionEntityArray);
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
  Il2CppObject *v2; // x19
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x0

  if ( (byte_41855F5 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v1);
    byte_41855F5 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAIRoute_ActionTrendInfo___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v7; // x1

  if ( (byte_41855F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___, *(_QWORD *)&x);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__,
      v5);
    byte_41855F6 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v7);
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   Master_WarQuestSelectionMaster,
                                                   x,
                                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
}


void __fastcall WarBoardAIRoute_AdvantagePieceData___ctor(
        WarBoardAIRoute_AdvantagePieceData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v6; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v7; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v9; // x20

  if ( (byte_418570A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v3);
    byte_418570A = 1;
  }
  *(_QWORD *)&this->fields.baseAARange = -1LL;
  *(_QWORD *)&this->fields.baseDARange = -1LL;
  this->fields.flagNow = 1LL;
  *(_QWORD *)&this->fields.baseCARange = -1LL;
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v4;
  sub_B2C2F8(&this->fields.dicClassAdvantageServant, v4);
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v5;
  sub_B2C2F8(&this->fields.dicClassDisAdvantageServant, v5);
  v6 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v6,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v6;
  sub_B2C2F8(&this->fields.dicAttackAdvantageServant, v6);
  v7 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v7,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v7;
  sub_B2C2F8(&this->fields.dicAttackDisAdvantageServant, v7);
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v8;
  sub_B2C2F8(&this->fields.dicDefenseAdvantageServant, v8);
  v9 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v9,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v9;
  sub_B2C2F8(&this->fields.dicDefenseDisAdvantageServant, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_DesignationItemData___ctor(
        WarBoardAIRoute_DesignationItemData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x20

  if ( (byte_418570B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v3);
    byte_418570B = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v4;
  sub_B2C2F8(&this->fields, v4);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_PiecePersonality___ctor(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20

  if ( (byte_418570F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo, v5);
    byte_418570F = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v6;
  sub_B2C2F8(&this->fields, v6);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v7;
  sub_B2C2F8(&this->fields.ratingOffsetList, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__AttackOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o **p_attackOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v11; // x0
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__4_0; // x21
  Il2CppObject *v14; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_TSource__o *v17; // x0

  if ( (byte_418570C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v3);
    sub_B2C35C(&Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__, v4);
    sub_B2C35C(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__, v6);
    sub_B2C35C(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v7);
    byte_418570C = 1;
  }
  p_attackOffset = &this->fields.attackOffset;
  result = this->fields.attackOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v11 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( (BYTE3(WarBoardAIRoute_PiecePersonality___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v11 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__4_0,
        v14,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
      v15 = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      v15->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_B2C2F8(&v15->__9__4_0, _9__4_0);
    }
    v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__4_0,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v17 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
            v16,
            (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    *p_attackOffset = (System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v17;
    sub_B2C2F8(p_attackOffset, v17);
    return *p_attackOffset;
  }
  return result;
}


System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_418570E & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method);
    byte_418570E = 1;
  }
  v3 = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_B2C42C(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6___ctor(v3, -2, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  v3->fields.__4__this = this;
  sub_B2C2F8(&v3->fields.__4__this, this);
  return (System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *)v3;
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__MoveOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o **p_moveOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v11; // x0
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x21
  Il2CppObject *v14; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_TSource__o *v17; // x0

  if ( (byte_418570D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v3);
    sub_B2C35C(&Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__, v4);
    sub_B2C35C(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__, v6);
    sub_B2C35C(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v7);
    byte_418570D = 1;
  }
  p_moveOffset = &this->fields.moveOffset;
  result = this->fields.moveOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v11 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( (BYTE3(WarBoardAIRoute_PiecePersonality___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v11 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__5_0,
        v14,
        Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
      v15 = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      v15->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_B2C2F8(&v15->__9__5_0, _9__5_0);
    }
    v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v17 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
            v16,
            (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    *p_moveOffset = (System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v17;
    sub_B2C2F8(p_moveOffset, v17);
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
  if ( (byte_41855F8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__, v3);
    this = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_B2C35C(
                                                                                 &Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__,
                                                                                 v4);
    byte_41855F8 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__7__wrap3 = &v2->fields.__7__wrap3;
LABEL_13:
    v2->fields.__1__state = -4;
    if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap3,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__) )
    {
      current = v2->fields.__7__wrap3.fields.current;
      v2->fields.__2__current = current;
      sub_B2C2F8(&v2->fields.__2__current, current);
      result = 1;
      v2->fields.__1__state = 2;
      return result;
    }
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(v2, v14);
    *(_QWORD *)&p__7__wrap3->fields.index = 0LL;
    p__7__wrap3->fields.current = 0LL;
    p__7__wrap3->fields.list = 0LL;
    v2->fields._trendInfo_5__3 = 0LL;
    sub_B2C2F8(&v2->fields._trendInfo_5__3, 0LL);
    p__7__wrap1 = &v2->fields.__7__wrap1;
    goto LABEL_16;
  }
  if ( _1__state == 1 )
  {
    trendInfo_5__3 = v2->fields._trendInfo_5__3;
    v2->fields.__1__state = -3;
    if ( !trendInfo_5__3 )
      sub_B2C434(this, method);
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_B2C434(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    p__7__wrap3 = &v2->fields.__7__wrap3;
    v13 = *(_OWORD *)&v20.fields.list;
    v2->fields.__7__wrap3.fields.current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v20.fields.current;
    *(_OWORD *)&v2->fields.__7__wrap3.fields.list = v13;
    sub_B2C2F8(&v2->fields.__7__wrap3, 0LL);
    goto LABEL_13;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_B2C434(this, method);
  actionTrandList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.actionTrandList;
  if ( !actionTrandList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    actionTrandList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  p__7__wrap1 = &v2->fields.__7__wrap1;
  v9 = *(_OWORD *)&v20.fields.list;
  v2->fields.__7__wrap1.fields.current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v20.fields.current;
  *(_OWORD *)&v2->fields.__7__wrap1.fields.list = v9;
  sub_B2C2F8(&v2->fields.__7__wrap1, 0LL);
  v2->fields.__1__state = -3;
LABEL_16:
  if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
         (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
         (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__) )
  {
    v18 = v2->fields.__7__wrap1.fields.current;
    v2->fields._trendInfo_5__3 = v18;
    sub_B2C2F8(&v2->fields._trendInfo_5__3, v18);
    v19 = v2->fields._trendInfo_5__3;
    v2->fields.__2__current = v19;
    sub_B2C2F8(&v2->fields.__2__current, v19);
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
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v6; // x1
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x1

  if ( (byte_41855FB & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method);
    byte_41855FB = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_B2C42C(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    if ( !v4 )
      sub_B2C434(CurrentManagedThreadId, v6);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_B2C2F8(v4 + 40, _4__this);
    return (System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *)v4;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  if ( (byte_41855F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, method);
    byte_41855F9 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_41855FA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, method);
    byte_41855FA = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap3,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0

  if ( (byte_41855F7 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v1);
    byte_41855F7 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAIRoute_PiecePersonality___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields.type == 0;
}


bool __fastcall WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.type == 1;
}


void __fastcall WarBoardAIRoute_PutSquareTarget___ctor(
        WarBoardAIRoute_PutSquareTarget_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v4; // x20
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v5; // x20
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v6; // x20

  if ( (byte_4185710 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v3);
    byte_4185710 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B2C42C(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v4,
    (const MethodInfo_2E58690 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = v4;
  sub_B2C2F8(&this->fields, v4);
  v5 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B2C42C(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v5,
    (const MethodInfo_2E58690 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = v5;
  sub_B2C2F8(&this->fields.dicObjectPutSquareIndex, v5);
  v6 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B2C42C(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v6,
    (const MethodInfo_2E58690 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = v6;
  sub_B2C2F8(&this->fields.dicIndividualityPutSqareIndex, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData___ctor(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *v3; // x20

  if ( (byte_4185713 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, method);
    byte_4185713 = 1;
  }
  this->fields.flagNow = 1LL;
  v3 = (WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)sub_B2C42C(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
  WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(v3, 0LL);
  this->fields.evalOffsetMagnification = v3;
  sub_B2C2F8(&this->fields.evalOffsetMagnification, v3);
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

  if ( (byte_4185715 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&System_Decimal_TypeInfo, v3);
    byte_4185715 = 1;
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
  v6 = System_Decimal__op_Implicit_44194220(WarBoardEvalFactorsAffectRatio, 0LL);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_B2C434(0LL, *(_QWORD *)&v6.fields.lo);
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
  v20 = System_Decimal__op_Implicit_44194220(attackEvalOffsetAddValue, 0LL);
  v24 = System_Decimal__op_Division(v20, v6, 0LL);
  *(_QWORD *)&v21.fields.flags = v15;
  *(_QWORD *)&v21.fields.lo = v17;
  v22 = System_Decimal__op_Addition(v21, v24, 0LL);
  this->fields.evalValue = System_Decimal__op_Explicit_44194696(v22, 0LL);
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


bool __fastcall WarBoardAIRoute_RouteData__HasFlag_20831388(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_4185712 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__, method);
    byte_4185712 = 1;
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

  if ( (byte_4185714 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIRoute_RouteData_TypeInfo, method);
    byte_4185714 = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0LL);
  if ( result )
  {
    v4 = *(&WarBoardAIRoute_RouteData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v4
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[v4 - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      v5 = (WarBoardAIRoute___c_o *)sub_B2C728(result);
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
  __int64 v3; // x1
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o **p_futureLookingTrendHashSet; // x19
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v5; // x20
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // t1

  if ( (byte_4185711 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v3);
    byte_4185711 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = &this->fields.futureLookingTrendHashSet;
  v5 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v5 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
      v5,
      (const MethodInfo_2D8BA5C *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    *p_futureLookingTrendHashSet = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)v5;
    sub_B2C2F8(p_futureLookingTrendHashSet, v5);
  }
  return (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)v5;
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

  if ( (byte_41855FC & 1) == 0 )
  {
    sub_B2C35C(&System_Decimal_TypeInfo, method);
    byte_41855FC = 1;
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

  if ( (byte_41855FD & 1) == 0 )
  {
    sub_B2C35C(&System_Decimal_TypeInfo, method);
    byte_41855FD = 1;
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


void __fastcall WarBoardAIRoute_TargetData___ctor_20835972(
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
  sub_B2C2F8(v8, targetSquare);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_20836056(
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
  sub_B2C2F8(&this->fields.targetObject, targetObject);
  WarBoardAIRoute_TargetData__DetectObject(this, v9);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_20836476(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  struct IWarBoardObjectData_o *targetObject; // x1
  struct WarBoardSquareData_o *targetSquare; // x1
  const MethodInfo *v15; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseTargetData )
    sub_B2C434(v11, v12);
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_B2C2F8(&this->fields.targetObject, targetObject);
  targetSquare = baseTargetData->fields.targetSquare;
  this->fields.targetSquare = targetSquare;
  sub_B2C2F8(&this->fields.targetSquare, targetSquare);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v15);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_20837564(
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
  sub_B2C2F8(&this->fields.targetObject, targetObject);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v13);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_20837680(
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
  if ( (byte_4185716 & 1) == 0 )
  {
    b = (WarBoardAIRoute_TargetData_o *)sub_B2C35C(&WarBoardAIRoute_TargetData_TypeInfo, method);
    byte_4185716 = 1;
  }
  if ( !v2 )
LABEL_9:
    sub_B2C434(b, method);
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone(v2, 0LL);
  if ( result )
  {
    v4 = *(&WarBoardAIRoute_TargetData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v4
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[v4 - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      b = (WarBoardAIRoute_TargetData_o *)sub_B2C728(result);
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

  if ( (byte_4185718 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardItemData_TypeInfo, method);
    sub_B2C35C(&WarBoardPieceData_TypeInfo, v3);
    sub_B2C35C(&WarBoardTreasureData_TypeInfo, v4);
    byte_4185718 = 1;
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
  sub_B2C2F8(&this->fields.targetPiece, v7);
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
  sub_B2C2F8(&this->fields.targetItem, v10);
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
  sub_B2C2F8(&this->fields.targetTreasure, v13);
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
  __int64 v19; // x3
  struct IWarBoardObjectData_o *targetObject; // x24
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v22; // x10
  IWarBoardObjectData_c **p_offset; // x11
  __int64 p_method; // x0
  struct WarBoardSquareData_o *targetSquare; // x8
  int32_t squareIndex_k__BackingField; // w24
  __int64 v27; // x0
  __int64 v28; // x1
  struct System_Int32_array *v29; // x0
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
  __int64 v42; // x3
  struct IWarBoardObjectData_o *v43; // x21
  WarBoardAIRoute_TargetData_o *v44; // x22
  IWarBoardObjectData_c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  struct WarBoardSquareData_o *v49; // x8

  if ( (byte_4185717 & 1) == 0 )
  {
    sub_B2C35C(&AStarSearch_TypeInfo, baseTargetData);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__int___ctor__, v14);
    sub_B2C35C(&System_Func_WarBoardPieceData__int__TypeInfo, v15);
    sub_B2C35C(&IWarBoardObjectData_TypeInfo, v16);
    sub_B2C35C(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, v17);
    sub_B2C35C(&WarBoardAIRoute_TargetData___c_TypeInfo, v18);
    byte_4185717 = 1;
  }
  WarBoardAIRoute_TargetData__DetectObject(this, (const MethodInfo *)baseTargetData);
  targetObject = this->fields.targetObject;
  if ( targetObject )
  {
    klass = targetObject->klass;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v22;
        p_offset += 2;
        if ( v22 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_8:
      p_method = sub_AC5258(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1LL, v19);
    }
    v27 = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
            targetObject,
            *(_QWORD *)(p_method + 8));
    if ( !this )
LABEL_49:
      sub_B2C434(v27, v28);
    squareIndex_k__BackingField = v27;
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
  v29 = AStarSearch__RouteSearch(0LL, baseSquareIndex, squareIndex_k__BackingField, 0, 0LL, 0LL);
  this->fields.baseRoute = v29;
  sub_B2C2F8(&this->fields.baseRoute, v29);
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
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v34,
      Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_WarBoardPieceData__int___ctor__);
    v35 = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    v35->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_B2C2F8(&v35->__9__7_0, _9__7_0);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v37 = System_Linq_Enumerable__ToArray_int_(
          v36,
          (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v37, 0LL);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    nowSquareIndex = this->fields.nowSquareIndex;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v40 = AStarSearch__RouteSearch(piece, baseSquareIndex, nowSquareIndex, 1, 0LL, 0LL);
    this->fields.detourRoute = v40;
    sub_B2C2F8(&this->fields.detourRoute, v40);
  }
  v41 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
  v43 = this->fields.targetObject;
  this->fields.isAround = v41 == 2;
  if ( v43 )
    v44 = this;
  else
    v44 = 0LL;
  if ( v43 )
  {
    v45 = v43->klass;
    if ( *(_WORD *)&v43->klass->_2.bitflags1 )
    {
      v46 = 0LL;
      v47 = &v45->_1.interfaceOffsets->offset;
      while ( *((IWarBoardObjectData_c **)v47 - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)&v43->klass->_2.bitflags1 )
          goto LABEL_38;
      }
      v48 = (__int64)&v45->vtable[*v47].method;
    }
    else
    {
LABEL_38:
      v48 = sub_AC5258(v43, IWarBoardObjectData_TypeInfo, 0LL, v42);
    }
    v27 = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v48)(v43, *(_QWORD *)(v48 + 8));
    if ( !v44 )
      goto LABEL_49;
  }
  else
  {
    v49 = this->fields.targetSquare;
    if ( v49 )
      v27 = (unsigned int)v49->fields._squareIndex_k__BackingField;
    else
      v27 = 0xFFFFFFFFLL;
    v44 = this;
  }
  v44->fields.putSquareIndex = v27;
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
  Il2CppObject *v2; // x19
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x0

  if ( (byte_41855FE & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIRoute_TargetData___c_TypeInfo, v1);
    byte_41855FE = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardAIRoute_TargetData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAIRoute_TargetData___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
  __int64 v2; // x3
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
  __int64 v96; // x1
  struct WarBoardData_o *v97; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v98; // x21
  struct WarBoardData_o **p_warBoardData_5__2; // x21
  __int64 v100; // x0
  __int64 v101; // x1
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t v103; // w8
  struct WarBoardStageNpcEntity_o *v104; // x9
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o **p_routeDataList; // x24
  int32_t RequiredCost; // w22
  WebViewManager_o *v107; // x0
  __int64 v108; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v109; // x22
  System_Collections_Generic_Dictionary_int__uint__o **p_piecePlaceData; // x19
  int32_t MasterSquareIndex; // w0
  System_Int32_array *AllyPutSquareIndicesWithoutMaster; // x0
  System_Int32_array **p_allyPieceIndexs_5__5; // x23
  struct DefenseAreaData_o **p_defenseAreaData_5__7; // x22
  __int64 v115; // x0
  __int64 v116; // x1
  System_Collections_Generic_List_int__o *masterExistsForce; // x0
  _BOOL8 v118; // x0
  __int64 v119; // x1
  struct System_Int32_array **p__7__wrap23; // x26
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **p_basePieceBasePieceRouteList_5__23; // x20
  int32_t servantAndEnemyRange_5__14; // w8
  int32_t servantAndEnemyMasterRange_5__15; // w9
  int32_t *p__7__wrap24; // x19
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w8
  DefenseAreaData_o *v127; // x0
  __int64 v128; // x0
  __int64 v129; // x1
  struct DefenseAreaData_o *v130; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v131; // x9
  WarBoardAIRoute__CreateRouteData_d__47_o *v132; // x20
  __int128 v133; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_int__uint__o *p__7__wrap8; // x26
  struct WarBoardAIRoute___c__DisplayClass47_0_o **p__8__1; // x22
  WarBoardSquareData_o **p_baseSquareIndex_5__10; // x21
  const MethodInfo *v137; // x1
  Il2CppObject *key; // x23
  Il2CppObject *v139; // x27
  WarBoardSquareData_o *Square; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v141; // x27
  WarBoardPieceData_o *PieceUnique; // x0
  __int64 v143; // x0
  __int64 v144; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v145; // x9
  int64_t baseFlag_5__6; // x24
  struct WarBoardAIRoute___c__DisplayClass47_0_o *_8__1; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v148; // x28
  System_Collections_Generic_IEnumerable_TSource__o *routeDataList; // x27
  Il2CppObject *v150; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v151; // x28
  __int64 v152; // x1
  int32_t v153; // w8
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v154; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  __int64 RouteSumPieceActionCost; // x0
  __int64 v157; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v158; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v159; // x8
  _BOOL8 IsActable; // x0
  __int64 v161; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v162; // x19
  System_Collections_Generic_Dictionary_int__int__o *DesignationItemToDistance; // x0
  __int64 v164; // x0
  __int64 v165; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v166; // x24
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *TargetToDistance_22716908; // x0
  System_Collections_Generic_Dictionary_uint__int__o *AllEnemyToDistance; // x0
  _QWORD *p_dicEnemyRange_5__20; // x24
  __int64 v170; // x0
  __int64 v171; // x1
  WarBoardPieceData_o *basePiece; // x0
  _BOOL8 isServant; // x0
  __int64 v174; // x1
  WarBoardAIRoute_AdvantagePieceData_o *AdvantagePieceData; // x0
  int32_t v176; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v177; // x0
  __int64 v178; // x0
  __int64 v179; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v180; // x10
  struct WarBoardPieceData_o *v181; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v182; // x9
  struct WarBoardStageNpcEntity_o *v183; // x11
  int32_t v184; // w10
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v185; // x24
  WarBoardAIRoute__CreateRouteData_d__47_o *v186; // x23
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **p_advantagePieceData_5__21; // x23
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v188; // x25
  WarBoardAIRoute__CreateRouteData_d__47_o *v189; // x24
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **p_basePieceActionPieceRouteList_5__22; // x24
  __int64 v191; // x1
  _BOOL8 v192; // x0
  __int64 v193; // x1
  Il2CppObject *v194; // x25
  Il2CppClass *klass; // x8
  struct WarBoardPieceData_o *v196; // x9
  _DWORD *monitor; // x8
  struct WarBoardPieceData_o *v198; // x9
  WarBoardAIRoute__CreateRouteData_d__47_o *v199; // x19
  __int64 v200; // x0
  __int64 v201; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v202; // x21
  WarBoardAIRoute___c_c *v203; // x0
  struct WarBoardAIRoute___c_StaticFields *v204; // x8
  System_Func_T__TResult__o *_9__47_6; // x22
  Il2CppObject *v206; // x23
  struct WarBoardAIRoute___c_StaticFields *v207; // x0
  __int64 v208; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v209; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v210; // x0
  __int64 Count; // x0
  __int64 v212; // x1
  __int64 v213; // x3
  struct WarBoardStageNpcEntity_o *v214; // x8
  float v215; // s0
  WarBoardAIRoute__CreateRouteData_d__47_o *v216; // x10
  double v217; // d0
  int v218; // w8
  struct WarBoardStageNpcEntity_o *v219; // x9
  int calcEllipsisMin; // w9
  System_Linq_IOrderedEnumerable_TSource__c *v221; // x8
  unsigned __int64 v222; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v225; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v226; // x19
  System_Int32_array *MyAndLinkedSquareIndecies; // x0
  int v228; // w8
  __int64 v229; // x0
  __int64 *v230; // x21
  __int64 v231; // x8
  unsigned __int64 v232; // x10
  int *v233; // x11
  __int64 v234; // x0
  __int64 v235; // x0
  __int64 v236; // x3
  __int64 *v237; // x19
  __int64 v238; // x8
  unsigned __int64 v239; // x10
  int *v240; // x11
  __int64 v241; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v242; // x19
  Il2CppObject *v243; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v244; // x19
  WarBoardAIRoute__CreateRouteData_d__47_o *v245; // x0
  __int64 v246; // x23
  __int64 v247; // x0
  __int64 v248; // x1
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v249; // x8
  __int64 v250; // x9
  int32_t *v251; // x28
  WarBoardAIRoute_RouteData_o *v252; // x22
  const MethodInfo *v253; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v254; // x10
  int32_t getEnumeratorRetType; // w8
  int32_t v256; // w9
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v257; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dicBaseDIRange_5__18; // x22
  WarBoardAIRoute___c_c *v259; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *_9__47_1; // x24
  Il2CppObject *v262; // x25
  struct WarBoardAIRoute___c_StaticFields *v263; // x0
  struct WarBoardAIRoute___c_StaticFields *v264; // x8
  System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *_9__47_2; // x25
  struct System_Int32_array **v266; // x19
  Il2CppObject *v267; // x26
  struct WarBoardAIRoute___c_StaticFields *v268; // x0
  __int64 v269; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v270; // x22
  WarBoardAIRoute_RouteData_o *v271; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v272; // x21
  struct WarBoardSquareData_o *v273; // x1
  __int64 v274; // x1
  WarBoardAIRoute_RouteData_o *v275; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v276; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o **v277; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v278; // t1
  struct WarBoardPieceData_o *v279; // x1
  __int64 v280; // x1
  WarBoardAIRoute_RouteData_o *v281; // x0
  WarBoardAIRoute_RouteData_o *v282; // x24
  int32_t v283; // w25
  WarBoardSquareData_o *v284; // x0
  __int64 v285; // x1
  struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v287; // x19
  __int64 v288; // x1
  struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v289; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v291; // x0
  WarBoardAIRoute_RouteData_o *v292; // x24
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *MoveByTargetDistance; // x0
  __int64 v294; // x0
  __int64 v295; // x1
  WarBoardAIRoute_RouteData_o *v296; // x22
  WarBoardPieceData_o *ActionPiece; // x0
  struct WarBoardPieceData_o **p_actionPiece; // x0
  __int64 v299; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v300; // x8
  struct WarBoardPieceData_o *v301; // x9
  struct WarBoardPieceData_o *v302; // x10
  struct WarBoardPieceData_o *v303; // x8
  __int64 v304; // x0
  __int64 v305; // x1
  WarBoardAIRoute_RouteData_o *v306; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v307; // x10
  struct WarBoardSquareData_o *baseSquare_5__11; // x9
  WarBoardData_o *warBoardData_5__2; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v310; // x22
  WarBoardPieceData_o *v311; // x0
  WarBoardPieceData_o *v312; // x0
  WarBoardPieceData_o *v313; // x22
  WarBoardPieceData_o *v314; // x24
  WarBoardPieceData_o *v315; // x0
  WarBoardPieceData_o *v316; // x0
  WarBoardAIRoute_RouteData_o *v317; // x8
  struct WarBoardPieceData_o *v318; // x9
  WarBoardPieceData_o *v319; // x0
  WarBoardAIRoute_RouteData_o *v320; // x19
  struct WarBoardPieceData_o *v321; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v323; // x24
  int64_t flagNow; // x20
  __int64 ClassId; // x0
  __int64 v326; // x1
  struct WarBoardPieceData_o *v327; // x8
  int32_t v328; // w22
  BattleServantData_o *v329; // x0
  int32_t v330; // w2
  int64_t FlagAdvantage; // x0
  __int64 v332; // x1
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v333; // x0
  struct WarBoardPieceData_o *v334; // x22
  WarBoardPieceData_o *v335; // x24
  WarBoardAIRoute_RouteData_o *v336; // x2
  WarBoardPieceData_o *v337; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v338; // x19
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v339; // x0
  WarBoardPieceData_o *v340; // x22
  WarBoardPieceData_o *v341; // x24
  int32_t requiredCost_5__3; // w25
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v343; // x0
  int32_t MasterSquareIndexFromPlaceData; // w24
  System_Collections_Generic_IEnumerable_TSource__o *basePieceActionPieceRouteList_5__22; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v346; // x26
  DefenseAreaData_o *DefenseAreaData; // x0
  __int64 v348; // x1
  struct WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData_5__21; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v350; // x26
  struct DefenseAreaData_o *defenseAreaData_5__7; // x25
  WarBoardPieceData_o *v352; // x0
  System_Int32_array *v353; // x2
  struct WarBoardAIRoute_AIRouteMasterData_o *v354; // x8
  _BOOL8 IsAllBlockShortestRouteEnemyAndMastr; // x0
  __int64 v356; // x1
  WarBoardAIRoute_RouteData_o *v357; // x23
  int64_t v358; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v359; // x25
  __int64 v360; // x0
  __int64 v361; // x1
  __int64 v362; // x0
  __int64 v363; // x1
  WarBoardAIRoute_RouteData_o *v364; // x23
  System_Collections_Generic_Dictionary_uint__int__o *v365; // x25
  __int64 v366; // x1
  System_Collections_Generic_Dictionary_int__uint__o *v367; // x0
  _BOOL8 v368; // x0
  __int64 v369; // x1
  struct WarBoardPieceData_o *v370; // x8
  uint32_t key_high; // w23
  int32_t v372; // w26
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x25
  int32_t v374; // w27
  System_Collections_Generic_IEnumerable_TSource__o *v375; // x0
  __int64 v376; // x0
  __int64 v377; // x1
  WarBoardAIRoute_RouteData_o *v378; // x23
  System_Collections_Generic_List_int__o *v379; // x25
  __int64 v380; // x0
  __int64 v381; // x1
  WarBoardAIRoute_RouteData_o *v382; // x23
  System_Collections_Generic_Dictionary_int__bool__o *v383; // x25
  __int64 v384; // x0
  __int64 v385; // x1
  WarBoardAIRoute_RouteData_o *v386; // x23
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *v387; // x25
  __int64 v388; // x0
  __int64 v389; // x1
  __int64 v390; // x0
  __int64 v391; // x1
  WarBoardAIRoute_RouteData_o *v392; // x8
  WarBoardPieceData_o *v393; // x0
  _BOOL8 IsBlockShortestRouteEnemyAndMaster; // x0
  __int64 v395; // x1
  struct WarBoardPieceData_o *v396; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v397; // x9
  DefenseAreaData_o *v398; // x0
  struct WarBoardPieceData_o *v399; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v400; // x10
  int32_t v401; // w9
  struct WarBoardPieceData_o *v402; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v403; // x9
  int32_t v404; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v405; // x0
  int32_t v406; // w0
  WarBoardAIRoute_RouteData_o *v407; // x19
  __int64 v408; // x0
  System_Collections_Generic_Dictionary_int__int__o *v409; // x0
  int32_t v410; // w23
  int32_t v411; // w24
  int32_t v412; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v413; // x0
  __int64 v414; // x0
  __int64 v415; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x25
  __int64 v417; // x0
  __int64 v418; // x1
  __int64 v419; // x0
  __int64 v420; // x1
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  __int64 v422; // x0
  __int64 v423; // x1
  System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  int32_t v425; // w23
  int32_t enemyMasterSquareIndex; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v427; // x0
  int32_t v428; // w0
  WarBoardAIRoute_RouteData_o *v429; // x19
  __int64 v430; // x0
  __int64 v431; // x1
  WarBoardAIRoute_RouteData_o *v432; // x19
  WarBoardAIManager_c *v433; // x0
  __int64 v434; // x0
  __int64 v435; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v436; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v437; // x8
  WarBoardPieceData_o *v438; // x0
  struct WarBoardPieceData_o *v439; // x9
  WarBoardAIManager_c *v440; // x0
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *dicSquareIndexEnemyPiece; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v443; // x1
  int32_t currentKey; // w23
  int32_t v445; // w24
  System_Int32_array *v446; // x0
  __int64 v447; // x1
  struct WarBoardStageNpcEntity_o *v448; // x8
  __int64 v449; // x1
  WarBoardAIRoute_RouteData_o *v450; // x20
  WarBoardAIManager_c *v451; // x0
  struct DefenseAreaData_o *v452; // x8
  __int64 v453; // x0
  __int64 v454; // x1
  WarBoardAIManager_c *v455; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v456; // x0
  int32_t v457; // w23
  int32_t v458; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v459; // x23
  int v460; // w19
  WarBoardAIRoute_RouteData_o *v461; // x19
  System_Collections_Generic_Dictionary_int__uint__o *v462; // x22
  WarBoardData_o *v463; // x0
  WarBoardEffectData_o *Effect; // x0
  __int64 v465; // x1
  System_Collections_Generic_List_int__o *v466; // x23
  __int64 v467; // x1
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v468; // x0
  _BOOL8 v469; // x0
  __int64 v470; // x1
  Il2CppObject *v471; // x21
  Il2CppClass *v472; // x0
  _BOOL8 v473; // x0
  __int64 v474; // x1
  WarBoardPieceData_o *v475; // x0
  __int64 v476; // x1
  WarBoardPieceData_o *v477; // x0
  _BOOL8 v478; // x0
  __int64 v479; // x1
  __int64 v480; // x0
  __int64 v481; // x1
  WarBoardPieceData_o *v482; // x0
  _BOOL8 v483; // x0
  __int64 v484; // x1
  _BOOL8 CanAcquireItem; // x0
  __int64 v486; // x1
  WarBoardAIRoute_RouteData_o *v487; // x8
  int64_t v488; // x9
  WarBoardPieceData_o *v489; // x0
  _BOOL8 isMaster; // x0
  __int64 v491; // x1
  _BOOL8 v492; // x0
  __int64 v493; // x1
  WarBoardAIRoute_RouteData_o *v494; // x8
  WarBoardPieceData_o *v495; // x0
  _BOOL8 v496; // x0
  __int64 v497; // x1
  _BOOL8 v498; // x0
  __int64 v499; // x1
  __int64 v500; // x0
  __int64 v501; // x1
  __int64 FlagOutOfWarningAreaToDistance; // x0
  __int64 v503; // x1
  WarBoardAIRoute_RouteData_o *v504; // x8
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x9
  struct WarBoardPieceData_o *v506; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *piecePersonalityDic; // x0
  WarBoardAIRoute_PiecePersonality_o *v508; // x24
  WarBoardAIEvalCalcurater_o *v509; // x23
  __int64 v510; // x0
  __int64 v511; // x1
  const MethodInfo *v512; // x1
  WarBoardAIRoute___c_c *v513; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v514; // x24
  struct WarBoardAIRoute___c_StaticFields *v515; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__47_5; // x25
  Il2CppObject *v517; // x26
  struct WarBoardAIRoute___c_StaticFields *v518; // x0
  System_Collections_Generic_IEnumerable_T__o *v519; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v520; // x24
  __int64 v521; // x0
  __int64 v522; // x1
  WarBoardAIRoute_RouteData_o *v523; // x0
  __int64 v524; // x1
  const MethodInfo *v525; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *allRouteList; // x0
  int32_t searchCount; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x23
  Il2CppObject *v529; // x0
  Il2CppObject *v530; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v531; // x0
  __int64 v532; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **v533; // [xsp+0h] [xbp-200h]
  struct System_Int32_array **v534; // [xsp+8h] [xbp-1F8h]
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // [xsp+10h] [xbp-1F0h]
  int32_t *p_masterSquareIndex_5__4; // [xsp+18h] [xbp-1E8h]
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v537; // [xsp+18h] [xbp-1E8h]
  struct WarBoardAIRoute_o *_4__this; // [xsp+20h] [xbp-1E0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v539; // [xsp+28h] [xbp-1D8h] BYREF
  __int128 v540; // [xsp+50h] [xbp-1B0h]
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+60h] [xbp-1A0h]
  _DWORD v542[12]; // [xsp+78h] [xbp-188h]
  int v543; // [xsp+A8h] [xbp-158h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v544; // [xsp+B0h] [xbp-150h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v545; // [xsp+E0h] [xbp-120h] BYREF
  __int128 v546; // [xsp+100h] [xbp-100h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o endSquare; // [xsp+110h] [xbp-F0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v548; // [xsp+120h] [xbp-E0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+148h] [xbp-B8h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+150h] [xbp-B0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+158h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v552; // [xsp+160h] [xbp-A0h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+180h] [xbp-80h] BYREF
  int32_t actionCount[6]; // [xsp+188h] [xbp-78h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v555; // [xsp+1A8h] [xbp-58h]

  v555 = this;
  if ( (byte_4185703 & 1) == 0 )
  {
    sub_B2C35C(&AStarSearch_TypeInfo, method);
    sub_B2C35C(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__, v18);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v19);
    sub_B2C35C(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v20);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo, v21);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___, v22);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v23);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, v24);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___, v25);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___, v26);
    sub_B2C35C(
      &Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___,
      v27);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v28);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__,
      v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v33);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__,
      v34);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v35);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v37);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v38);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v39);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__,
      v40);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v41);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v42);
    sub_B2C35C(
      &Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData___ctor__,
      v43);
    sub_B2C35C(&Method_System_Func_KeyValuePair_IEnumerator__float___float___ctor__, v44);
    sub_B2C35C(&Method_System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___ctor__, v45);
    sub_B2C35C(&Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long___ctor__, v46);
    sub_B2C35C(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v47);
    sub_B2C35C(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo, v48);
    sub_B2C35C(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo, v49);
    sub_B2C35C(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo, v50);
    sub_B2C35C(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v51);
    sub_B2C35C(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo, v52);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__, v53);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__, v54);
    sub_B2C35C(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo, v55);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo, v56);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo, v57);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v58);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__, v59);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__, v60);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v61);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v62);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v63);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v64);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v65);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v66);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__, v67);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v68);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__, v69);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v70);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v71);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v72);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v73);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___67334480, v74);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v75);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v76);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v77);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v78);
    sub_B2C35C(&WarBoardAIRoute_RouteData_TypeInfo, v79);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v80);
    sub_B2C35C(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__, v81);
    sub_B2C35C(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__, v82);
    sub_B2C35C(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__, v83);
    sub_B2C35C(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__, v84);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__, v85);
    sub_B2C35C(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo, v86);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__, v87);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__, v88);
    sub_B2C35C(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo, v89);
    sub_B2C35C(&WarBoardAIRoute___c_TypeInfo, v90);
    sub_B2C35C(&WarBoardAIEvalCalcurater_TypeInfo, v91);
    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)sub_B2C35C(&WarBoardAIManager_TypeInfo, v92);
    byte_4185703 = 1;
  }
  *(_QWORD *)masterReplaceCount = 0LL;
  *(_QWORD *)actionCount = 0LL;
  value = 0LL;
  routeData = 0LL;
  route = 0LL;
  memset(&v552, 0, sizeof(v552));
  memset(&v548, 0, 32);
  v546 = 0u;
  endSquare = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v545, 0, sizeof(v545));
  memset(&v544, 0, sizeof(v544));
  v543 = 0;
  _1__state = v555->fields.__1__state;
  if ( _1__state == 2 )
  {
    servantAndEnemyRange_5__14 = v555->fields._servantAndEnemyRange_5__14;
    servantAndEnemyMasterRange_5__15 = v555->fields._servantAndEnemyMasterRange_5__15;
    v555->fields.__1__state = -4;
    if ( servantAndEnemyRange_5__14 < servantAndEnemyMasterRange_5__15 )
    {
LABEL_140:
      v242 = v555;
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(v555, method);
      *(_QWORD *)&v242->fields.__7__wrap24 = 0LL;
      sub_B2C2F8(&v242->fields.__7__wrap24, 0LL);
      return 0;
    }
    p__7__wrap24 = &v555->fields.__7__wrap24;
LABEL_126:
    v230 = *(__int64 **)p__7__wrap24;
    if ( !*(_QWORD *)p__7__wrap24 )
      sub_B2C434(this, method);
    v231 = *v230;
    if ( *(_WORD *)(*v230 + 298) )
    {
      v232 = 0LL;
      v233 = (int *)(*(_QWORD *)(v231 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v233 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v232;
        v233 += 4;
        if ( v232 >= *(unsigned __int16 *)(*v230 + 298) )
          goto LABEL_131;
      }
      v234 = v231 + 16LL * *v233 + 312;
    }
    else
    {
LABEL_131:
      v234 = sub_AC5258(*(_QWORD *)p__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0LL, v2);
    }
    v235 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v234)(v230, *(_QWORD *)(v234 + 8));
    if ( (v235 & 1) != 0 )
    {
      v237 = *(__int64 **)p__7__wrap24;
      if ( !v237 )
        sub_B2C434(v235, method);
      v238 = *v237;
      if ( *(_WORD *)(*v237 + 298) )
      {
        v239 = 0LL;
        v240 = (int *)(*(_QWORD *)(v238 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v240 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          ++v239;
          v240 += 4;
          if ( v239 >= *(unsigned __int16 *)(*v237 + 298) )
            goto LABEL_139;
        }
        v241 = v238 + 16LL * *v240 + 312;
      }
      else
      {
LABEL_139:
        v241 = sub_AC5258(
                 v237,
                 System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo,
                 0LL,
                 v236);
      }
      v243 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v241)(v237, *(_QWORD *)(v241 + 8));
      v244 = v555;
      v245 = v555;
      v555->fields.__2__current = v243;
      v245 = (WarBoardAIRoute__CreateRouteData_d__47_o *)((char *)v245 + 24);
      ++LODWORD(v245->fields._baseSquare_5__11);
      sub_B2C2F8(v245, v243);
      result = 1;
      v244->fields.__1__state = 2;
      return result;
    }
    goto LABEL_140;
  }
  _4__this = v555->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap23 = &v555->fields.__7__wrap23;
    p_basePieceBasePieceRouteList_5__23 = &v555->fields._basePieceBasePieceRouteList_5__23;
    v555->fields.__1__state = -3;
    goto LABEL_543;
  }
  result = 0;
  if ( !_1__state )
  {
    v555->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v96);
    v97 = *(struct WarBoardData_o **)&Instance[4].fields.m_CachedPtr;
    v98 = v555;
    v555->fields._warBoardData_5__2 = v97;
    p_warBoardData_5__2 = &v98->fields._warBoardData_5__2;
    sub_B2C2F8(p_warBoardData_5__2, v97);
    if ( !_4__this )
      sub_B2C434(v100, v101);
    npcData = _4__this->fields.npcData;
    if ( !npcData )
      sub_B2C434(v100, v101);
    if ( !npcData->fields.searchDepth )
      npcData->fields.searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
    v103 = v555->fields.searchCount + 1;
    v555->fields.searchCount = v103;
    v104 = _4__this->fields.npcData;
    if ( !v104 )
      sub_B2C434(v100, v101);
    if ( v103 > v104->fields.searchDepth )
      return 0;
    *(_QWORD *)masterReplaceCount = 0LL;
    *(_QWORD *)actionCount = 0LL;
    p_routeDataList = &v555->fields.routeDataList;
    WarBoardAIRoute__GetRouteDataActionList(
      _4__this,
      v555->fields.routeDataList,
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
    v555->fields._requiredCost_5__3 = RequiredCost;
    v107 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v107 )
      sub_B2C434(0LL, v108);
    if ( RequiredCost >= *((_DWORD *)&v107[7].fields.SingletonMonoBehaviour_WebViewManager__Fields + 1) )
      return 0;
    v109 = v555;
    p_piecePlaceData = &v555->fields.piecePlaceData;
    MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v555->fields.piecePlaceData, 0LL);
    v109->fields._masterSquareIndex_5__4 = MasterSquareIndex;
    p_masterSquareIndex_5__4 = &v109->fields._masterSquareIndex_5__4;
    AllyPutSquareIndicesWithoutMaster = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                          _4__this,
                                          v109->fields.piecePlaceData,
                                          MasterSquareIndex,
                                          0LL);
    v109->fields._allyPieceIndexs_5__5 = AllyPutSquareIndicesWithoutMaster;
    p_allyPieceIndexs_5__5 = &v109->fields._allyPieceIndexs_5__5;
    sub_B2C2F8(&v109->fields._allyPieceIndexs_5__5, AllyPutSquareIndicesWithoutMaster);
    v109->fields._defenseAreaData_5__7 = 0LL;
    p_defenseAreaData_5__7 = &v109->fields._defenseAreaData_5__7;
    *(p_defenseAreaData_5__7 - 1) = (struct DefenseAreaData_o *)(&dword_0 + 1);
    sub_B2C2F8(p_defenseAreaData_5__7, 0LL);
    if ( !*p_warBoardData_5__2 )
      sub_B2C434(v115, v116);
    masterExistsForce = (*p_warBoardData_5__2)->fields.masterExistsForce;
    if ( !masterExistsForce )
      sub_B2C434(0LL, v116);
    v118 = System_Collections_Generic_List_int___Contains(
             masterExistsForce,
             _4__this->fields.forceId,
             (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
    if ( v118 )
    {
      v555->fields._masterExists_5__8 = 1;
    }
    else
    {
      aiRouteMasterData = _4__this->fields.aiRouteMasterData;
      if ( !aiRouteMasterData )
        sub_B2C434(v118, v119);
      masterType = aiRouteMasterData->fields.masterType;
      v555->fields._masterExists_5__8 = masterType != 3;
      if ( masterType == 3 )
      {
LABEL_28:
        if ( !*p_piecePlaceData )
          sub_B2C434(0LL, v119);
        v533 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)p_routeDataList;
        System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
          &v539,
          *p_piecePlaceData,
          (const MethodInfo_2E6C4C8 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
        v132 = v555;
        v540 = *(_OWORD *)&v539.fields.dictionary;
        current = v539.fields.current;
        v133 = *(_OWORD *)&v539.fields.dictionary;
        p__7__wrap8 = &v555->fields.__7__wrap8;
        v555->fields.__7__wrap8.fields.current = v539.fields.current;
        *(_OWORD *)&v132->fields.__7__wrap8.fields.dictionary = v133;
        sub_B2C2F8(&v132->fields.__7__wrap8, 0LL);
        p__8__1 = &v132->fields.__8__1;
        v132->fields.__1__state = -3;
        p_baseSquareIndex_5__10 = (WarBoardSquareData_o **)&v132->fields._baseSquareIndex_5__10;
LABEL_43:
        while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                  p__7__wrap8,
                  (const MethodInfo_278006C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
        {
          key = v555->fields.__7__wrap8.fields.current.fields.key;
          v139 = (Il2CppObject *)sub_B2C42C(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
          System_Object___ctor(v139, 0LL);
          *p__8__1 = (struct WarBoardAIRoute___c__DisplayClass47_0_o *)v139;
          sub_B2C2F8(p__8__1, v139);
          v555->fields.__7__wrap8.fields.getEnumeratorRetType = (int)key;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          }
          Square = WarBoardAIManager__GetSquare((int32_t)key, 0LL);
          *p_baseSquareIndex_5__10 = Square;
          sub_B2C2F8(p_baseSquareIndex_5__10, Square);
          v141 = *p__8__1;
          PieceUnique = WarBoardAIManager__GetPieceUnique(HIDWORD(key), 0LL);
          if ( !v141 )
            sub_B2C434(PieceUnique, PieceUnique);
          v141->fields.basePiece = PieceUnique;
          sub_B2C2F8(&v141->fields, PieceUnique);
          v145 = v555;
          baseFlag_5__6 = v555->fields._baseFlag_5__6;
          _8__1 = v555->fields.__8__1;
          v555->fields._tmpFlagNow_5__12 = -1LL;
          v145->fields._servantAndMasterRange_5__13 = -1;
          v145->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
          if ( !_8__1 )
            sub_B2C434(v143, v144);
          if ( !_4__this )
            sub_B2C434(0LL, v144);
          v148 = v555;
          v148->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)(WarBoardAIRoute__GetFlagAroundSquareCheck(
                                                                             _4__this,
                                                                             *(WarBoardSquareData_o **)&v555->fields._baseSquareIndex_5__10,
                                                                             _8__1->fields.basePiece,
                                                                             *p_piecePlaceData,
                                                                             *p_masterSquareIndex_5__4,
                                                                             0LL) | baseFlag_5__6);
          routeDataList = (System_Collections_Generic_IEnumerable_TSource__o *)v148->fields.routeDataList;
          v150 = (Il2CppObject *)v148->fields.__8__1;
          v151 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v151,
            v150,
            Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
            (const MethodInfo_2711C04 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
          v153 = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                   routeDataList,
                   (System_Func_TSource__bool__o *)v151,
                   (const MethodInfo_1A8D348 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
          v154 = v555->fields.routeDataList;
          v555->fields._servantAndEnemyRange_5__14 = v153;
          if ( !v154 )
            sub_B2C434(0LL, v152);
          Only = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                   v154,
                   (const MethodInfo_2EF46E0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
          if ( !*p__8__1 )
            sub_B2C434(Only, Only);
          RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                      _4__this,
                                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                      (*p__8__1)->fields.basePiece,
                                      0LL);
          v158 = v555;
          v159 = v555->fields.__8__1;
          v555->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
          if ( !v159 )
            sub_B2C434(RouteSumPieceActionCost, v157);
          IsActable = WarBoardAIRoute__IsActable(
                        _4__this,
                        v159->fields.basePiece,
                        v158->fields._servantAndEnemyRange_5__14,
                        v158->fields._requiredCost_5__3,
                        RouteSumPieceActionCost,
                        0LL);
          if ( IsActable )
          {
            if ( !*p__8__1 )
              sub_B2C434(IsActable, v161);
            v162 = v555;
            DesignationItemToDistance = WarBoardAIRoute__GetDesignationItemToDistance(
                                          _4__this,
                                          (*p__8__1)->fields.basePiece,
                                          v555->fields.routeDataList,
                                          v555->fields.__7__wrap8.fields.getEnumeratorRetType,
                                          0LL);
            *(_QWORD *)&v162->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
            sub_B2C2F8(&v162->fields._sumPieceActionCost_5__17, DesignationItemToDistance);
            if ( !*p__8__1 )
              sub_B2C434(v164, v165);
            v166 = v555;
            TargetToDistance_22716908 = WarBoardAIRoute__GetTargetToDistance_22716908(
                                          _4__this,
                                          (*p__8__1)->fields.basePiece,
                                          v555->fields.routeDataList,
                                          v555->fields.__7__wrap8.fields.getEnumeratorRetType,
                                          0LL);
            v166->fields._dicBaseDIRange_5__18 = (struct System_Collections_Generic_Dictionary_int__int__o *)TargetToDistance_22716908;
            sub_B2C2F8(&v166->fields._dicBaseDIRange_5__18, TargetToDistance_22716908);
            AllEnemyToDistance = WarBoardAIRoute__GetAllEnemyToDistance(
                                   _4__this,
                                   v166->fields.routeDataList,
                                   v166->fields.__7__wrap8.fields.getEnumeratorRetType,
                                   (int32_t *)&v132->fields._tmpFlagNow_5__12 + 1,
                                   &v132->fields._servantAndMasterRange_5__13,
                                   0LL);
            v166->fields._dicKeyPutIndexValueTargetData_5__19 = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)AllEnemyToDistance;
            sub_B2C2F8(&v166->fields._dicKeyPutIndexValueTargetData_5__19, AllEnemyToDistance);
            v166->fields._dicEnemyRange_5__20 = 0LL;
            p_dicEnemyRange_5__20 = &v166->fields._dicEnemyRange_5__20;
            sub_B2C2F8(p_dicEnemyRange_5__20, 0LL);
            if ( !*p__8__1 )
              sub_B2C434(v170, v171);
            basePiece = (*p__8__1)->fields.basePiece;
            if ( !basePiece )
              sub_B2C434(0LL, v171);
            isServant = WarBoardPieceData__get_isServant(basePiece, 0LL);
            if ( isServant )
            {
              if ( !*p__8__1 )
                sub_B2C434(isServant, v174);
              AdvantagePieceData = WarBoardAIRoute__GetAdvantagePieceData(
                                     _4__this,
                                     (*p__8__1)->fields.basePiece,
                                     v555->fields.__7__wrap8.fields.getEnumeratorRetType,
                                     0LL);
              *p_dicEnemyRange_5__20 = AdvantagePieceData;
              sub_B2C2F8(p_dicEnemyRange_5__20, AdvantagePieceData);
              if ( v555->fields._masterExists_5__8 )
              {
                v176 = *p_masterSquareIndex_5__4;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v177 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              (int32_t)key,
                                                                              v176,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v178 = System_Linq_Enumerable__Count_int_(
                         v177,
                         (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
                v180 = v555->fields.__8__1;
                LODWORD(v555->fields._tmpFlagNow_5__12) = v178;
                if ( !v180 )
                  sub_B2C434(v178, v179);
                v181 = v180->fields.basePiece;
                if ( !v181 )
                  sub_B2C434(v178, v179);
                v182 = _4__this->fields.aiRouteMasterData;
                if ( !v182 )
                  sub_B2C434(v178, v179);
                if ( v182->fields.masterType != 2
                  || v182->fields.masterPieceIndex != v181->fields._index_k__BackingField )
                {
                  v183 = _4__this->fields.npcData;
                  if ( !v183 )
                    sub_B2C434(v178, v179);
                  if ( v183->fields.defenseArea > (int)v178 )
                  {
                    v555->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v555->fields._baseSquare_5__11 | 0x800);
                    v181 = v180->fields.basePiece;
                    if ( !v181 )
                      sub_B2C434(v178, v179);
                    v182 = _4__this->fields.aiRouteMasterData;
                    if ( !v182 )
                      sub_B2C434(v178, v179);
                  }
                }
                v184 = v182->fields.masterType;
                if ( (v184 != 2 || v182->fields.masterPieceIndex != v181->fields._index_k__BackingField)
                  && WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                       v555->fields._defenseAreaData_5__7,
                       v555->fields.__7__wrap8.fields.getEnumeratorRetType,
                       v184 == 1,
                       0LL) )
                {
                  v555->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v555->fields._baseSquare_5__11 | 0x80000000);
                }
              }
            }
            v185 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
              v185,
              (const MethodInfo_2D8BA5C *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v186 = v555;
            v555->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v185;
            p_advantagePieceData_5__21 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **)&v186->fields._advantagePieceData_5__21;
            sub_B2C2F8(p_advantagePieceData_5__21, v185);
            v188 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
              v188,
              (const MethodInfo_2D8BA5C *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v189 = v555;
            v555->fields._basePieceActionPieceRouteList_5__22 = v188;
            p_basePieceActionPieceRouteList_5__22 = &v189->fields._basePieceActionPieceRouteList_5__22;
            sub_B2C2F8(p_basePieceActionPieceRouteList_5__22, v188);
            if ( !*v533 )
              sub_B2C434(0LL, v191);
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v539,
              *v533,
              (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
            v552.fields.current = v539.fields.current.fields.key;
            *(_OWORD *)&v552.fields.list = *(_OWORD *)&v539.fields.dictionary;
            while ( 1 )
            {
              v192 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v552,
                       (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
              if ( !v192 )
                break;
              v194 = v552.fields.current;
              if ( !v552.fields.current )
                sub_B2C434(v192, v193);
              if ( LODWORD(v552.fields.current[1].monitor) != HIDWORD(v552.fields.current[1].monitor) )
              {
                klass = v552.fields.current[3].klass;
                if ( !klass )
                  sub_B2C434(v192, v193);
                if ( !*p__8__1 )
                  sub_B2C434(v192, v193);
                v196 = (*p__8__1)->fields.basePiece;
                if ( !v196 )
                  sub_B2C434(v192, v193);
                if ( HIDWORD(klass->_1.namespaze) == v196->fields._index_k__BackingField )
                {
                  if ( !*p_basePieceActionPieceRouteList_5__22 )
                    sub_B2C434(0LL, v193);
                  v192 = System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                           *p_basePieceActionPieceRouteList_5__22,
                           (WarBoardAIRoute_RouteData_o *)v552.fields.current,
                           (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                }
                if ( (BYTE3(v194[1].klass) & 4) != 0 )
                {
                  monitor = v194[3].monitor;
                  if ( !monitor )
                    sub_B2C434(v192, v193);
                  if ( !*p__8__1 )
                    sub_B2C434(v192, v193);
                  v198 = (*p__8__1)->fields.basePiece;
                  if ( !v198 )
                    sub_B2C434(v192, v193);
                  if ( monitor[7] == v198->fields._index_k__BackingField )
                  {
                    if ( !*p_advantagePieceData_5__21 )
                      sub_B2C434(0LL, v193);
                    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                      *p_advantagePieceData_5__21,
                      (WarBoardAIRoute_RouteData_o *)v194,
                      (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                  }
                }
              }
            }
            v542[v543++] = 1280;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v552,
              (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
            if ( v543 && v542[v543 - 1] == 1280 )
              --v543;
            if ( !*p_baseSquareIndex_5__10 )
              sub_B2C434(0LL, v225);
            v226 = v555;
            MyAndLinkedSquareIndecies = WarBoardSquareData__GetMyAndLinkedSquareIndecies(*p_baseSquareIndex_5__10, 0LL);
            v226->fields._basePieceBasePieceRouteList_5__23 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)MyAndLinkedSquareIndecies;
            p_basePieceBasePieceRouteList_5__23 = &v226->fields._basePieceBasePieceRouteList_5__23;
            sub_B2C2F8(&v226->fields._basePieceBasePieceRouteList_5__23, MyAndLinkedSquareIndecies);
            v228 = 0;
            p__7__wrap23 = &v226->fields.__7__wrap23;
            LODWORD(v226->fields.__7__wrap23) = 0;
            while ( 2 )
            {
              if ( !*p_basePieceBasePieceRouteList_5__23 )
                sub_B2C434(this, method);
              if ( v228 >= SLODWORD((*p_basePieceBasePieceRouteList_5__23)->fields._slots) )
              {
                *p_basePieceBasePieceRouteList_5__23 = 0LL;
                v333 = p_basePieceBasePieceRouteList_5__23;
                v132 = v555;
                sub_B2C2F8(v333, 0LL);
                v132->fields.__8__1 = 0LL;
                p__8__1 = &v132->fields.__8__1;
                sub_B2C2F8(&v132->fields.__8__1, 0LL);
                *(_QWORD *)&v132->fields._baseSquareIndex_5__10 = 0LL;
                p_baseSquareIndex_5__10 = (WarBoardSquareData_o **)&v132->fields._baseSquareIndex_5__10;
                sub_B2C2F8(&v132->fields._baseSquareIndex_5__10, 0LL);
                *(_QWORD *)&v132->fields._sumPieceActionCost_5__17 = 0LL;
                sub_B2C2F8(&v132->fields._sumPieceActionCost_5__17, 0LL);
                v132->fields._dicBaseDIRange_5__18 = 0LL;
                sub_B2C2F8(&v132->fields._dicBaseDIRange_5__18, 0LL);
                v132->fields._dicKeyPutIndexValueTargetData_5__19 = 0LL;
                sub_B2C2F8(&v132->fields._dicKeyPutIndexValueTargetData_5__19, 0LL);
                v132->fields._dicEnemyRange_5__20 = 0LL;
                sub_B2C2F8(&v132->fields._dicEnemyRange_5__20, 0LL);
                v132->fields._advantagePieceData_5__21 = 0LL;
                sub_B2C2F8(&v132->fields._advantagePieceData_5__21, 0LL);
                v132->fields._basePieceActionPieceRouteList_5__22 = 0LL;
                sub_B2C2F8(&v132->fields._basePieceActionPieceRouteList_5__22, 0LL);
                p__7__wrap8 = &v132->fields.__7__wrap8;
                p_masterSquareIndex_5__4 = &v132->fields._masterSquareIndex_5__4;
                p_piecePlaceData = &v132->fields.piecePlaceData;
                v533 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&v132->fields.routeDataList;
                goto LABEL_43;
              }
              v246 = sub_B2C42C(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v246, 0LL);
              v249 = *p_basePieceBasePieceRouteList_5__23;
              if ( !*p_basePieceBasePieceRouteList_5__23 )
                sub_B2C434(v247, v248);
              v250 = *(int *)p__7__wrap23;
              if ( (unsigned int)v250 >= LODWORD(v249->fields._slots) )
              {
                v532 = sub_B2C460(v247);
                sub_B2C400(v532, 0LL);
              }
              if ( !v246 )
                sub_B2C434(v247, v248);
              *(_DWORD *)(v246 + 16) = *(&v249->fields._count + v250);
              v251 = (int32_t *)(v246 + 16);
              v252 = (WarBoardAIRoute_RouteData_o *)sub_B2C42C(WarBoardAIRoute_RouteData_TypeInfo);
              WarBoardAIRoute_RouteData___ctor(v252, v253);
              routeData = v252;
              if ( !v252 )
                sub_B2C434(this, method);
              v254 = v555;
              getEnumeratorRetType = v555->fields.__7__wrap8.fields.getEnumeratorRetType;
              v252->fields.baseIndex = getEnumeratorRetType;
              v256 = *v251;
              v252->fields.actionIndex = *v251;
              if ( getEnumeratorRetType == v256 )
              {
                v257 = v254->fields.routeDataList;
                if ( !v257 )
                  sub_B2C434(this, method);
                v254 = v555;
                if ( v257->fields._size > 0 )
                  goto LABEL_543;
              }
              dicBaseDIRange_5__18 = (System_Collections_Generic_IEnumerable_TSource__o *)v254->fields._dicBaseDIRange_5__18;
              v259 = WarBoardAIRoute___c_TypeInfo;
              if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v259 = WarBoardAIRoute___c_TypeInfo;
              }
              static_fields = v259->static_fields;
              _9__47_1 = static_fields->__9__47_1;
              if ( !_9__47_1 )
              {
                if ( (BYTE3(v259->vtable._0_Equals.methodPtr) & 4) != 0 && !v259->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v259);
                  static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v262 = (Il2CppObject *)static_fields->__9;
                _9__47_1 = (System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)sub_B2C42C(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
                System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long____ctor(
                  _9__47_1,
                  v262,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
                  (const MethodInfo_27052AC *)Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long___ctor__);
                v263 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v263->__9__47_1 = _9__47_1;
                sub_B2C2F8(&v263->__9__47_1, _9__47_1);
                v259 = WarBoardAIRoute___c_TypeInfo;
              }
              if ( (BYTE3(v259->vtable._0_Equals.methodPtr) & 4) != 0 && !v259->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v259);
                v259 = WarBoardAIRoute___c_TypeInfo;
              }
              v264 = v259->static_fields;
              _9__47_2 = v264->__9__47_2;
              if ( !_9__47_2 )
              {
                v266 = p__7__wrap23;
                if ( (BYTE3(v259->vtable._0_Equals.methodPtr) & 4) != 0 && !v259->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v259);
                  v264 = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v267 = (Il2CppObject *)v264->__9;
                _9__47_2 = (System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)sub_B2C42C(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
                System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData____ctor(
                  _9__47_2,
                  v267,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
                  (const MethodInfo_27055E0 *)Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData___ctor__);
                v268 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v268->__9__47_2 = _9__47_2;
                sub_B2C2F8(&v268->__9__47_2, _9__47_2);
                p__7__wrap23 = v266;
              }
              v270 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData_(
                                                                                                    dicBaseDIRange_5__18,
                                                                                                    (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                                    (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                                    (const MethodInfo_1A9B320 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
              v271 = routeData;
              if ( !routeData )
                sub_B2C434(0LL, v269);
              v272 = v555;
              v273 = *(struct WarBoardSquareData_o **)&v555->fields._baseSquareIndex_5__10;
              routeData->fields.baseSquare = v273;
              sub_B2C2F8(&v271->fields.baseSquare, v273);
              v275 = routeData;
              v278 = v272->fields.__8__1;
              v277 = &v272->fields.__8__1;
              v276 = v278;
              if ( !v278 )
                sub_B2C434(routeData, v274);
              if ( !routeData )
                sub_B2C434(0LL, v274);
              v279 = v276->fields.basePiece;
              routeData->fields.basePiece = v279;
              sub_B2C2F8(&v275->fields.basePiece, v279);
              v281 = routeData;
              if ( !routeData )
                sub_B2C434(0LL, v280);
              routeData->fields.actionPiece = 0LL;
              sub_B2C2F8(&v281->fields.actionPiece, 0LL);
              v282 = routeData;
              v283 = *v251;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              v284 = WarBoardAIManager__GetSquare(v283, 0LL);
              if ( !v282 )
                sub_B2C434(v284, v284);
              v282->fields.actionSquare = v284;
              sub_B2C2F8(&v282->fields.actionSquare, v284);
              dicKeyPutIndexValueTargetData_5__19 = v555->fields._dicKeyPutIndexValueTargetData_5__19;
              if ( !dicKeyPutIndexValueTargetData_5__19 )
                sub_B2C434(0LL, v285);
              v287 = routeData;
              if ( System_Collections_Generic_Dictionary_uint__int___get_Count(
                     (System_Collections_Generic_Dictionary_uint__int__o *)dicKeyPutIndexValueTargetData_5__19,
                     (const MethodInfo_2DC0FBC *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0 )
              {
                v291 = 0x7FFFFFFFLL;
                if ( !v287 )
                  goto LABEL_266;
              }
              else
              {
                v289 = v555->fields._dicKeyPutIndexValueTargetData_5__19;
                if ( !v289 )
                  sub_B2C434(0LL, v288);
                Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                           (System_Collections_Generic_Dictionary_uint__int__o *)v289,
                           (const MethodInfo_2DC1164 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
                v291 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
                if ( !v287 )
LABEL_266:
                  sub_B2C434(v291, v288);
              }
              v287->fields.EnemyRangeMin = v291;
              if ( !*v277 )
                sub_B2C434(v291, v288);
              if ( !_4__this )
                sub_B2C434(0LL, v288);
              v292 = routeData;
              MoveByTargetDistance = WarBoardAIRoute__GetMoveByTargetDistance(
                                       _4__this,
                                       v270,
                                       *v251,
                                       (*v277)->fields.basePiece,
                                       0LL);
              if ( !v292 )
                sub_B2C434(MoveByTargetDistance, MoveByTargetDistance);
              v292->fields.dicPutIndexTargetData = MoveByTargetDistance;
              sub_B2C2F8(&v292->fields.dicPutIndexTargetData, MoveByTargetDistance);
              if ( !*v277 )
                sub_B2C434(v294, v295);
              v296 = routeData;
              ActionPiece = WarBoardAIRoute__GetActionPiece(
                              _4__this,
                              (*v277)->fields.basePiece,
                              *v251,
                              v555->fields.piecePlaceData,
                              0LL);
              if ( !v296 )
                sub_B2C434(ActionPiece, ActionPiece);
              v296->fields.actionPiece = ActionPiece;
              sub_B2C2F8(&v296->fields.actionPiece, ActionPiece);
              v300 = *v277;
              if ( !*v277 )
                sub_B2C434(p_actionPiece, v299);
              v301 = v300->fields.basePiece;
              if ( !v301 )
                sub_B2C434(p_actionPiece, v299);
              if ( v301->fields._nowSquareIndex_k__BackingField == *v251 )
              {
                if ( !routeData )
                  sub_B2C434(0LL, v299);
                p_actionPiece = &routeData->fields.actionPiece;
                v302 = routeData->fields.actionPiece;
                if ( v302 )
                {
                  if ( v302->fields._uniqueIndex_k__BackingField == v301->fields._uniqueIndex_k__BackingField )
                  {
                    *p_actionPiece = 0LL;
                    sub_B2C2F8(p_actionPiece, 0LL);
                    v300 = *v277;
                    if ( !*v277 )
                      sub_B2C434(p_actionPiece, v299);
                  }
                }
              }
              v303 = v300->fields.basePiece;
              if ( !v303 )
                sub_B2C434(p_actionPiece, v299);
              v304 = UnityEngine_Mathf__Abs_40694508(
                       v303->fields._limitActionCount_k__BackingField - v303->fields._currentActionCount_k__BackingField,
                       0LL);
              v306 = routeData;
              if ( !routeData )
                sub_B2C434(v304, v305);
              v307 = v555;
              routeData->fields.actionCountOnThisTurn = v304 + v555->fields._servantAndEnemyRange_5__14 + 1;
              baseSquare_5__11 = v307->fields._baseSquare_5__11;
              *(_QWORD *)&v306->fields.attackByLinkedEnemy = 0LL;
              v306->fields.flagNow = (int64_t)baseSquare_5__11;
              warBoardData_5__2 = v307->fields._warBoardData_5__2;
              if ( !warBoardData_5__2 )
                sub_B2C434(0LL, v305);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardData__GetWall(warBoardData_5__2, *v251, 0, 0LL);
              v310 = this;
              if ( this )
              {
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                if ( !this )
                  sub_B2C434(0LL, method);
                if ( this[2].fields._servantAndEnemyRange_5__14 < _4__this->fields.wallAttackCost
                                                                + v555->fields._requiredCost_5__3 )
                  goto LABEL_543;
                if ( !*v277 )
                  sub_B2C434(this, method);
                v311 = (*v277)->fields.basePiece;
                if ( !v311 )
                  sub_B2C434(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableWallAttack(
                                                                     v311,
                                                                     v555->fields._servantAndEnemyMasterRange_5__15,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_543;
                if ( !*v277 )
                  sub_B2C434(this, method);
                v312 = (*v277)->fields.basePiece;
                if ( !v312 )
                  sub_B2C434(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__CheckWallAttackCond(
                                                                     v312,
                                                                     (WarBoardWallData_o *)v310,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_543;
              }
              if ( !routeData )
                sub_B2C434(this, method);
              v313 = routeData->fields.actionPiece;
              if ( v313 )
              {
                if ( !*v277 )
                  sub_B2C434(this, method);
                v314 = (*v277)->fields.basePiece;
                if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                }
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsEnemyPiece(v314, v313, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !*v277 )
                    sub_B2C434(this, method);
                  v315 = (*v277)->fields.basePiece;
                  if ( !v315 )
                    sub_B2C434(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v315, 0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_251;
                  if ( !routeData )
                    sub_B2C434(this, method);
                  v316 = routeData->fields.actionPiece;
                  if ( !v316 )
                    sub_B2C434(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v316, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_251:
                    v317 = routeData;
                    if ( !routeData )
                      sub_B2C434(this, method);
                    v318 = routeData->fields.basePiece;
                    routeData->fields.flagNow |= 2uLL;
                    if ( !v318 )
                      sub_B2C434(this, method);
                    v319 = v317->fields.actionPiece;
                    v317->fields.attackCountOnThisTurn = v318->fields._attackCount_k__BackingField + 1;
                    if ( !v319 )
                      sub_B2C434(0LL, method);
                    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isServant(v319, 0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v320 = routeData;
                      if ( !routeData )
                        sub_B2C434(this, method);
                      if ( !*v277 )
                        sub_B2C434(this, method);
                      v321 = (*v277)->fields.basePiece;
                      if ( !v321 )
                        sub_B2C434(this, method);
                      battleServant_k__BackingField = v321->fields._battleServant_k__BackingField;
                      if ( !battleServant_k__BackingField )
                        sub_B2C434(0LL, method);
                      v323 = p_basePieceBasePieceRouteList_5__23;
                      flagNow = routeData->fields.flagNow;
                      ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
                      if ( !routeData )
                        sub_B2C434(ClassId, v326);
                      v327 = routeData->fields.actionPiece;
                      if ( !v327 )
                        sub_B2C434(ClassId, v326);
                      v328 = ClassId;
                      v329 = v327->fields._battleServant_k__BackingField;
                      if ( !v329 )
                        sub_B2C434(0LL, v326);
                      v330 = BattleServantData__getClassId(v329, 0LL);
                      FlagAdvantage = WarBoardAIRoute__GetFlagAdvantage(_4__this, v328, v330, 0LL);
                      v320->fields.flagNow = FlagAdvantage | flagNow;
                      if ( !routeData )
                        sub_B2C434(FlagAdvantage, v332);
                      WarBoardAIRoute__LinkedCount(
                        _4__this,
                        *v251,
                        v555->fields.piecePlaceData,
                        &routeData->fields.attackByLinkedEnemy,
                        &routeData->fields.attackByLinkedAlly,
                        0LL);
                      p_basePieceBasePieceRouteList_5__23 = v323;
                    }
                    break;
                  }
LABEL_543:
                  v228 = *(_DWORD *)p__7__wrap23 + 1;
                  *(_DWORD *)p__7__wrap23 = v228;
                  continue;
                }
                if ( !routeData )
                  sub_B2C434(this, method);
                v334 = routeData->fields.actionPiece;
                if ( !v334 )
                  sub_B2C434(this, method);
                if ( v334->fields._roleType_k__BackingField == 1 )
                  goto LABEL_543;
                if ( !*v277 )
                  sub_B2C434(this, method);
                v335 = (*v277)->fields.basePiece;
                if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                }
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsAllyPiece(v335, v334, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !routeData )
                    sub_B2C434(this, method);
                  routeData->fields.flagNow |= 0x4000000uLL;
                }
              }
              break;
            }
            v336 = routeData;
            if ( !routeData )
              sub_B2C434(this, method);
            if ( (routeData->fields.flagNow & 2) != 0 )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_B2C434(0LL, method);
              if ( this[2].fields._servantAndEnemyRange_5__14 < _4__this->fields.attackCost
                                                              + v555->fields._requiredCost_5__3 )
                goto LABEL_543;
              if ( !*v277 )
                sub_B2C434(this, method);
              v352 = (*v277)->fields.basePiece;
              if ( !v352 )
                sub_B2C434(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableAttack(
                                                                   v352,
                                                                   v555->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_543;
              v336 = routeData;
              if ( !routeData )
                sub_B2C434(this, method);
            }
            if ( (v336->fields.flagNow & 2) == 0 )
            {
              if ( !*v277 )
                sub_B2C434(this, method);
              v337 = (*v277)->fields.basePiece;
              if ( !v337 )
                sub_B2C434(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableMoveBySelf(
                                                                   v337,
                                                                   v555->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_543;
              v336 = routeData;
              if ( !routeData )
                sub_B2C434(this, method);
            }
            if ( (v336->fields.flagNow & 0x4000000) != 0 )
            {
              if ( !*v277 )
                sub_B2C434(this, method);
              v338 = v555;
              v339 = v555->fields.routeDataList;
              if ( !v339 )
                sub_B2C434(0LL, method);
              v340 = (*v277)->fields.basePiece;
              v341 = v336->fields.actionPiece;
              requiredCost_5__3 = v555->fields._requiredCost_5__3;
              v343 = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                       v339,
                       (const MethodInfo_2EF46E0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIRoute__IsActableReplace(
                                                                   _4__this,
                                                                   v340,
                                                                   v341,
                                                                   requiredCost_5__3,
                                                                   (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v343,
                                                                   v338->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_543;
              v336 = routeData;
            }
            v534 = p__7__wrap23;
            v537 = p_basePieceBasePieceRouteList_5__23;
            piecePlaceData = WarBoardAIRoute__UpdatePiecePlaceData(
                               _4__this,
                               v555->fields.piecePlaceData,
                               v336,
                               v555->fields.__7__wrap8.fields.getEnumeratorRetType,
                               *v251,
                               0LL);
            MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
                                               _4__this,
                                               piecePlaceData,
                                               0LL);
            basePieceActionPieceRouteList_5__22 = (System_Collections_Generic_IEnumerable_TSource__o *)v555->fields._basePieceActionPieceRouteList_5__22;
            v346 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v346,
              (Il2CppObject *)v246,
              Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
              (const MethodInfo_2711C04 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
            DefenseAreaData = (DefenseAreaData_o *)System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
                                                     basePieceActionPieceRouteList_5__22,
                                                     (System_Func_TSource__bool__o *)v346,
                                                     (const MethodInfo_173A2F8 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)DefenseAreaData & 1) != 0
              || (advantagePieceData_5__21 = v555->fields._advantagePieceData_5__21,
                  v350 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo),
                  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                    v350,
                    (Il2CppObject *)v246,
                    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
                    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__),
                  DefenseAreaData = (DefenseAreaData_o *)System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)advantagePieceData_5__21,
                                                           (System_Func_TSource__bool__o *)v350,
                                                           (const MethodInfo_173A2F8 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___),
                  ((unsigned __int8)DefenseAreaData & 1) != 0) )
            {
              if ( !routeData )
                sub_B2C434(DefenseAreaData, v348);
              routeData->fields.flagNow |= 0x20000000000uLL;
            }
            if ( v555->fields._masterExists_5__8 )
            {
              if ( v555->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
                goto LABEL_306;
              if ( !routeData )
                sub_B2C434(DefenseAreaData, v348);
              if ( (routeData->fields.flagNow & 0x400) != 0 )
              {
LABEL_306:
                v353 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                         _4__this,
                         piecePlaceData,
                         MasterSquareIndexFromPlaceData,
                         0LL);
                DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                                    _4__this,
                                    MasterSquareIndexFromPlaceData,
                                    v353,
                                    piecePlaceData,
                                    0LL);
                defenseAreaData_5__7 = DefenseAreaData;
                if ( !DefenseAreaData )
LABEL_672:
                  sub_B2C434(DefenseAreaData, v348);
              }
              else
              {
                defenseAreaData_5__7 = v555->fields._defenseAreaData_5__7;
                if ( !defenseAreaData_5__7 )
                  goto LABEL_672;
              }
              v354 = _4__this->fields.aiRouteMasterData;
              if ( !v354 )
                sub_B2C434(DefenseAreaData, v348);
              IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                                       defenseAreaData_5__7->fields._ShortestRoutes_k__BackingField,
                                                       piecePlaceData,
                                                       v354->fields.masterType == 1,
                                                       0LL);
              v357 = routeData;
              if ( IsAllBlockShortestRouteEnemyAndMastr )
              {
                if ( !routeData )
                  sub_B2C434(IsAllBlockShortestRouteEnemyAndMastr, v356);
                routeData->fields.flagNow |= 0x40000000uLL;
              }
              else if ( !routeData )
              {
                sub_B2C434(IsAllBlockShortestRouteEnemyAndMastr, v356);
              }
              v358 = v357->fields.flagNow;
              if ( (v358 & 0x400) != 0 && (defenseAreaData_5__7->fields._Flag_k__BackingField & 0x10000000000LL) != 0 )
                v357->fields.flagNow = v358 | 0x40000000000LL;
            }
            else
            {
              v357 = routeData;
            }
            v359 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v359,
              (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v357 )
              sub_B2C434(v360, v361);
            v357->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v359;
            sub_B2C2F8(&v357->fields.moveByLinkedPiece, v359);
            v364 = routeData;
            if ( !routeData )
              sub_B2C434(v362, v363);
            *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0LL;
            v365 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
            System_Collections_Generic_Dictionary_uint__int____ctor(
              v365,
              (const MethodInfo_2DC0818 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
            v364->fields.dicUniqueKeyRange = v365;
            sub_B2C2F8(&v364->fields.dicUniqueKeyRange, v365);
            v367 = v555->fields.piecePlaceData;
            if ( !v367 )
              sub_B2C434(0LL, v366);
            System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
              &v539,
              v367,
              (const MethodInfo_2E6C4C8 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
            *(_OWORD *)&v548.fields.dictionary = *(_OWORD *)&v539.fields.dictionary;
            v548.fields.current = v539.fields.current;
            while ( 1 )
            {
              v368 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                       &v548,
                       (const MethodInfo_278006C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
              if ( !v368 )
                break;
              if ( !*v277 )
                sub_B2C434(v368, v369);
              v370 = (*v277)->fields.basePiece;
              if ( !v370 )
                sub_B2C434(v368, v369);
              key_high = HIDWORD(v548.fields.current.fields.key);
              if ( v370->fields._uniqueIndex_k__BackingField != HIDWORD(v548.fields.current.fields.key) )
              {
                if ( !routeData )
                  sub_B2C434(v368, v369);
                v372 = (int32_t)v548.fields.current.fields.key;
                dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
                v374 = *v251;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v375 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v374,
                                                                              v372,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v376 = System_Linq_Enumerable__Count_int_(
                         v375,
                         (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !dicUniqueKeyRange )
                  sub_B2C434(v376, v377);
                System_Collections_Generic_Dictionary_uint__int___Add(
                  dicUniqueKeyRange,
                  key_high,
                  v376,
                  (const MethodInfo_2DC13BC *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
              }
            }
            v542[v543++] = 2813;
            System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
              &v548,
              (const MethodInfo_27801B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
            if ( v543 && v542[v543 - 1] == 2813 )
              --v543;
            v378 = routeData;
            v379 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v379,
              (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v378 )
              sub_B2C434(v380, v381);
            v378->fields.listExistDesignationItem = v379;
            sub_B2C2F8(&v378->fields.listExistDesignationItem, v379);
            v382 = routeData;
            v383 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v383,
              (const MethodInfo_2E1C05C *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( !v382 )
              sub_B2C434(v384, v385);
            v382->fields.dicMoveByServantGetDesignationItem = v383;
            sub_B2C2F8(&v382->fields.dicMoveByServantGetDesignationItem, v383);
            v386 = routeData;
            v387 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType____ctor(
              v387,
              (const MethodInfo_2E2754C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
            if ( !v386 )
              sub_B2C434(v388, v389);
            v386->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = v387;
            sub_B2C2F8(&v386->fields.dicItemIdKeyIsMoveByServantDesignationItemRange, v387);
            v392 = routeData;
            if ( !routeData )
              sub_B2C434(v390, v391);
            routeData->fields.isMoveByOutOfWarningArea = 0;
            *(_QWORD *)&v392->fields.isMoveByServantAndEnemyRange = 0LL;
            *(_QWORD *)&v392->fields.isMoveByMasterAndEnemyRange = 0LL;
            *(_QWORD *)&v392->fields.isMoveByServantAndAttackAdvantageServantRange = 0LL;
            *(_QWORD *)&v392->fields.isMoveByServantAndDefenseAdvantageServantRange = 0LL;
            *(_QWORD *)&v392->fields.isMoveByServantAndClassAdvantageServantRange = 0LL;
            if ( !*v277 )
              sub_B2C434(v390, v391);
            v393 = (*v277)->fields.basePiece;
            if ( !v393 )
              sub_B2C434(0LL, v391);
            IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isServant(v393, 0LL);
            if ( IsBlockShortestRouteEnemyAndMaster )
            {
              if ( v555->fields._masterExists_5__8 )
              {
                if ( !*v277 )
                  sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                v396 = (*v277)->fields.basePiece;
                if ( !v396 )
                  sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                v397 = _4__this->fields.aiRouteMasterData;
                if ( !v397 )
                  sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                if ( v397->fields.masterType != 2
                  || v397->fields.masterPieceIndex != v396->fields._index_k__BackingField )
                {
                  v398 = v555->fields._defenseAreaData_5__7;
                  if ( !v398 )
                    sub_B2C434(0LL, v395);
                  IsBlockShortestRouteEnemyAndMaster = DefenseAreaData__IsInDefenseArea(v398, *v251, 0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                    routeData->fields.flagNow |= 0x4000000000uLL;
                  }
                }
                if ( !*v277 )
                  sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                v399 = (*v277)->fields.basePiece;
                if ( !v399 )
                  sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                v400 = _4__this->fields.aiRouteMasterData;
                if ( !v400 )
                  sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                v401 = v400->fields.masterType;
                if ( v401 != 2 || v400->fields.masterPieceIndex != v399->fields._index_k__BackingField )
                {
                  IsBlockShortestRouteEnemyAndMaster = WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                                                         v555->fields._defenseAreaData_5__7,
                                                         *v251,
                                                         v401 == 1,
                                                         0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                    routeData->fields.flagNow |= 0x100000000uLL;
                  }
                }
                if ( !*v277 )
                  sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                v402 = (*v277)->fields.basePiece;
                if ( !v402 )
                  sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                v403 = _4__this->fields.aiRouteMasterData;
                if ( !v403 )
                  sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                if ( v403->fields.masterType != 2
                  || v403->fields.masterPieceIndex != v402->fields._index_k__BackingField )
                {
                  v404 = *v251;
                  if ( *v251 == MasterSquareIndexFromPlaceData )
                  {
                    if ( !routeData )
                      sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                    routeData->fields.isMoveByServantAndMasterRange = 2;
                  }
                  else
                  {
                    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AStarSearch_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                    }
                    v405 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                                  0LL,
                                                                                  v404,
                                                                                  MasterSquareIndexFromPlaceData,
                                                                                  0,
                                                                                  0LL,
                                                                                  0LL);
                    v406 = System_Linq_Enumerable__Count_int_(
                             v405,
                             (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
                    v407 = routeData;
                    v408 = WarBoardAIRoute__CalcurateDistanceType(v406, v555->fields._tmpFlagNow_5__12, 0LL);
                    if ( !v407 )
                      sub_B2C434(v408, v395);
                    v407->fields.isMoveByServantAndMasterRange = v408;
                  }
                }
              }
              v409 = *(System_Collections_Generic_Dictionary_int__int__o **)&v555->fields._sumPieceActionCost_5__17;
              if ( !v409 )
                sub_B2C434(0LL, v395);
              System_Collections_Generic_Dictionary_int__int___GetEnumerator(
                &v539,
                v409,
                (const MethodInfo_2E24AB4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
              v546 = *(_OWORD *)&v539.fields.dictionary;
              endSquare = v539.fields.current;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
                        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v546,
                        (const MethodInfo_256852C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
              {
                v410 = (int32_t)endSquare.fields.key;
                v411 = HIDWORD(endSquare.fields.key);
                v412 = *v251;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v413 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v412,
                                                                              v410,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v414 = System_Linq_Enumerable__Count_int_(
                         v413,
                         (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !routeData )
                  sub_B2C434(v414, v415);
                dicItemIdKeyIsMoveByServantDesignationItemRange = routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
                v417 = WarBoardAIRoute__CalcurateDistanceType(v414, v411, 0LL);
                if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
                  sub_B2C434(v417, v418);
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___set_Item(
                  dicItemIdKeyIsMoveByServantDesignationItemRange,
                  v410,
                  v417,
                  (const MethodInfo_2E280C8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
                if ( !routeData )
                  sub_B2C434(v419, v420);
                dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
                if ( !dicMoveByServantGetDesignationItem )
                  sub_B2C434(0LL, v420);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  dicMoveByServantGetDesignationItem,
                  v410,
                  *v251 == v410,
                  (const MethodInfo_2E1CC0C *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
                if ( !routeData )
                  sub_B2C434(v422, v423);
                listExistDesignationItem = routeData->fields.listExistDesignationItem;
                if ( !listExistDesignationItem )
                  sub_B2C434(0LL, v423);
                System_Collections_Generic_List_int___Add(
                  listExistDesignationItem,
                  v410,
                  (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              }
              v542[v543++] = 3406;
              System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v546,
                (const MethodInfo_2568674 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
              if ( v543 && v542[v543 - 1] == 3406 )
                --v543;
              v425 = *v251;
              enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
              if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AStarSearch_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
              }
              v427 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                            0LL,
                                                                            v425,
                                                                            enemyMasterSquareIndex,
                                                                            0,
                                                                            0LL,
                                                                            0LL);
              v428 = System_Linq_Enumerable__Count_int_(
                       v427,
                       (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
              v429 = routeData;
              v430 = WarBoardAIRoute__CalcurateDistanceType(v428, v555->fields._servantAndMasterRange_5__13, 0LL);
              if ( !v429 )
                sub_B2C434(v430, v431);
              v429->fields.isMoveByServantAndEnemyMasterRange = v430;
              v432 = routeData;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_418575F )
              {
                sub_B2C35C(&WarBoardAIManager_TypeInfo, v431);
                byte_418575F = 1;
              }
              v433 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v433 = WarBoardAIManager_TypeInfo;
              }
              v434 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v433->static_fields->dicSquareIndexEnemyPiece,
                       HIDWORD(v555->fields._tmpFlagNow_5__12),
                       *v251,
                       0LL);
              if ( !v432 )
                sub_B2C434(v434, v435);
              v436 = v555;
              v432->fields.isMoveByServantAndEnemyRange = v434;
              WarBoardAIRoute__ClassAdvantageDistance(
                _4__this,
                &routeData,
                (WarBoardAIRoute_AdvantagePieceData_o *)v436->fields._dicEnemyRange_5__20,
                *v251,
                0LL);
            }
            v437 = _4__this->fields.aiRouteMasterData;
            if ( !v437 )
              sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
            if ( v437->fields.masterType )
            {
LABEL_407:
              if ( v437->fields.masterType == 2 )
              {
                if ( !*v277 )
                  sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                v439 = (*v277)->fields.basePiece;
                if ( !v439 )
                  sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                if ( v439->fields._index_k__BackingField == v437->fields.masterPieceIndex )
                  goto LABEL_411;
              }
            }
            else
            {
              if ( !*v277 )
                sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
              v438 = (*v277)->fields.basePiece;
              if ( !v438 )
                sub_B2C434(0LL, v395);
              IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isMaster(v438, 0LL);
              if ( !IsBlockShortestRouteEnemyAndMaster )
              {
                v437 = _4__this->fields.aiRouteMasterData;
                if ( !v437 )
                  sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                goto LABEL_407;
              }
LABEL_411:
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_418575F )
              {
                sub_B2C35C(&WarBoardAIManager_TypeInfo, v395);
                byte_418575F = 1;
              }
              v440 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v440 = WarBoardAIManager_TypeInfo;
              }
              dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v440->static_fields->dicSquareIndexEnemyPiece;
              if ( !dicSquareIndexEnemyPiece )
                sub_B2C434(0LL, v395);
              Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                       dicSquareIndexEnemyPiece,
                       (const MethodInfo_2E64358 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
              if ( !Keys )
                sub_B2C434(0LL, v443);
              System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData___GetEnumerator(
                (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v539,
                Keys,
                (const MethodInfo_2261674 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
              v545.fields.currentKey = v539.fields.current.fields.key;
              *(_OWORD *)&v545.fields.dictionary = *(_OWORD *)&v539.fields.dictionary;
              while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___MoveNext(
                        &v545,
                        (const MethodInfo_277EEC0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                currentKey = (int32_t)v545.fields.currentKey;
                v445 = *v251;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v446 = AStarSearch__RouteSearch(0LL, v445, currentKey, 0, 0LL, 0LL);
                if ( !v446 )
                  sub_B2C434(0LL, v447);
                v448 = _4__this->fields.npcData;
                if ( !v448 )
                  sub_B2C434(v446, v447);
                if ( (signed int)(v446->max_length - 1) <= v448->fields.defenseArea )
                {
                  if ( !routeData )
                    sub_B2C434(v446, v447);
                  routeData->fields.flagNow |= 0x8000000000uLL;
                  break;
                }
              }
              v542[v543++] = 3697;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___Dispose(
                &v545,
                (const MethodInfo_277EEBC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( v543 && v542[v543 - 1] == 3697 )
                --v543;
              v450 = routeData;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_418575F )
              {
                sub_B2C35C(&WarBoardAIManager_TypeInfo, v449);
                byte_418575F = 1;
              }
              v451 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v451 = WarBoardAIManager_TypeInfo;
              }
              v452 = v555->fields._defenseAreaData_5__7;
              if ( !v452 )
                sub_B2C434(v451, v449);
              v453 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v451->static_fields->dicSquareIndexEnemyPiece,
                       v452->fields._MasterAndEnemyRange_k__BackingField,
                       *v251,
                       0LL);
              if ( !v450 )
                sub_B2C434(v453, v454);
              v450->fields.isMoveByMasterAndEnemyRange = v453;
              p_basePieceBasePieceRouteList_5__23 = v537;
              if ( !byte_418575F )
              {
                sub_B2C35C(&WarBoardAIManager_TypeInfo, v454);
                byte_418575F = 1;
              }
              v455 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v455 = WarBoardAIManager_TypeInfo;
              }
              v456 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v455->static_fields->dicSquareIndexEnemyPiece;
              if ( !v456 )
                sub_B2C434(0LL, v454);
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
                &v539,
                v456,
                (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
              v544 = v539;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                        &v544,
                        (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                v457 = (int32_t)v544.fields.current.fields.key;
                v458 = *v251;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v459 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v458,
                                                                              v457,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                System_Linq_Enumerable__Count_int_(
                  v459,
                  (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !WarBoardAIRoute__IsDetour((System_Int32_array *)v459, v555->fields._allyPieceIndexs_5__5, 0LL) )
                {
                  v460 = 0;
                  goto LABEL_458;
                }
              }
              v460 = 1;
LABEL_458:
              v542[v543++] = 3829;
              System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
                &v544,
                (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( v543 && v542[v543 - 1] == 3829 )
                --v543;
              if ( v460 )
              {
                if ( !routeData )
                  sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
                routeData->fields.flagNow |= 0x1000000000uLL;
              }
            }
            v461 = routeData;
            if ( !routeData )
              sub_B2C434(IsBlockShortestRouteEnemyAndMaster, v395);
            v462 = piecePlaceData;
            if ( !routeData->fields.actionPiece || (routeData->fields.flagNow & 0x4000000) != 0 )
            {
              v463 = v555->fields._warBoardData_5__2;
              if ( !v463 )
                sub_B2C434(0LL, v395);
              Effect = WarBoardData__GetEffect(v463, *v251, 0LL);
              if ( Effect )
              {
                if ( !routeData )
                  sub_B2C434(Effect, v465);
                routeData->fields.flagNow |= 0x200000000uLL;
              }
              v466 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v466,
                (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
              v468 = v555->fields.routeDataList;
              if ( !v468 )
                sub_B2C434(0LL, v467);
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v539,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v468,
                (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
              v552.fields.current = v539.fields.current.fields.key;
              *(_OWORD *)&v552.fields.list = *(_OWORD *)&v539.fields.dictionary;
              while ( 1 )
              {
                v469 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v552,
                         (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
                if ( !v469 )
                  break;
                v471 = v552.fields.current;
                if ( !v552.fields.current )
                  sub_B2C434(v469, v470);
                if ( (BYTE3(v552.fields.current[1].klass) & 8) != 0 )
                {
                  v472 = v552.fields.current[3].klass;
                  if ( !v472 )
                    sub_B2C434(0LL, v470);
                  v473 = WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v472, 0LL);
                  if ( v473 )
                  {
                    if ( !v466 )
                      sub_B2C434(v473, v474);
                    System_Collections_Generic_List_int___Add(
                      v466,
                      HIDWORD(v471[1].monitor),
                      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                  }
                  if ( (BYTE3(v471[1].klass) & 4) != 0 )
                  {
                    v475 = (WarBoardPieceData_o *)v471[3].klass;
                    if ( !v475 )
                      sub_B2C434(0LL, v474);
                    if ( WarBoardPieceData__get_isMaster(v475, 0LL) )
                    {
                      v477 = (WarBoardPieceData_o *)v471[3].monitor;
                      if ( !v477 )
                        sub_B2C434(0LL, v476);
                      v478 = WarBoardPieceData__get_isServant(v477, 0LL);
                      if ( v478 )
                      {
                        if ( !v466 )
                          sub_B2C434(v478, v479);
                        System_Collections_Generic_List_int___Add(
                          v466,
                          (int32_t)v471[1].monitor,
                          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                      }
                    }
                  }
                }
              }
              v542[v543++] = 4082;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v552,
                (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
              p_basePieceBasePieceRouteList_5__23 = v537;
              v462 = piecePlaceData;
              if ( v543 && v542[v543 - 1] == 4082 )
                --v543;
              if ( !routeData )
                sub_B2C434(v480, v481);
              v482 = routeData->fields.basePiece;
              if ( !v482 )
                sub_B2C434(0LL, v481);
              v483 = WarBoardPieceData__get_isServant(v482, 0LL);
              if ( v483 )
              {
                if ( !routeData )
                  sub_B2C434(v483, v484);
                CanAcquireItem = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v466, 0LL);
                if ( CanAcquireItem )
                {
                  v487 = routeData;
                  if ( !routeData )
                    sub_B2C434(CanAcquireItem, v486);
                  v488 = routeData->fields.flagNow | 0x18000000;
                  goto LABEL_497;
                }
              }
              else
              {
                if ( !routeData )
                  sub_B2C434(v483, v484);
                v489 = routeData->fields.basePiece;
                if ( !v489 )
                  sub_B2C434(0LL, v484);
                isMaster = WarBoardPieceData__get_isMaster(v489, 0LL);
                if ( isMaster )
                {
                  if ( !routeData )
                    sub_B2C434(isMaster, v491);
                  v492 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v466, 0LL);
                  v494 = routeData;
                  if ( v492 )
                  {
                    if ( !routeData )
                      sub_B2C434(v492, v493);
                    routeData->fields.flagNow |= 0x10000000uLL;
                  }
                  else if ( !routeData )
                  {
                    sub_B2C434(v492, v493);
                  }
                  if ( (v494->fields.flagNow & 0x4000000) != 0 )
                  {
                    v495 = v494->fields.actionPiece;
                    if ( !v495 )
                      sub_B2C434(0LL, v493);
                    v496 = WarBoardPieceData__get_isServant(v495, 0LL);
                    if ( v496 )
                    {
                      if ( !routeData )
                        sub_B2C434(v496, v497);
                      v498 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.baseIndex, v466, 0LL);
                      if ( v498 )
                      {
                        v487 = routeData;
                        if ( !routeData )
                          sub_B2C434(v498, v499);
                        v488 = routeData->fields.flagNow | 0x8000000;
LABEL_497:
                        v487->fields.flagNow = v488;
                      }
                    }
                  }
                }
              }
              WarBoardAIRoute__LinkedPieceCount(_4__this, &routeData, piecePlaceData, v466, 0LL);
              v461 = routeData;
              if ( !routeData )
                sub_B2C434(v500, v501);
            }
            FlagOutOfWarningAreaToDistance = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                               _4__this,
                                               v461->fields.baseIndex,
                                               v461->fields.actionIndex,
                                               0LL);
            v461->fields.isMoveByOutOfWarningArea = FlagOutOfWarningAreaToDistance;
            v504 = routeData;
            p__7__wrap23 = v534;
            if ( !routeData )
              sub_B2C434(FlagOutOfWarningAreaToDistance, v503);
            evalOffsetMagnification = routeData->fields.evalOffsetMagnification;
            if ( !evalOffsetMagnification )
              sub_B2C434(FlagOutOfWarningAreaToDistance, v503);
            evalOffsetMagnification->fields.isAttack = (routeData->fields.flagNow & 2) != 0;
            v506 = v504->fields.basePiece;
            if ( !v506 )
              sub_B2C434(FlagOutOfWarningAreaToDistance, v503);
            piecePersonalityDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)_4__this->fields.piecePersonalityDic;
            if ( !piecePersonalityDic )
              sub_B2C434(0LL, v503);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                 piecePersonalityDic,
                                                                 v506->fields._index_k__BackingField,
                                                                 &value,
                                                                 (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v508 = (WarBoardAIRoute_PiecePersonality_o *)value;
              v509 = (WarBoardAIEvalCalcurater_o *)sub_B2C42C(WarBoardAIEvalCalcurater_TypeInfo);
              WarBoardAIEvalCalcurater___ctor(v509, v508, 0LL);
              if ( !v509 )
                sub_B2C434(v510, v511);
              WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v509, &routeData, 0LL);
              WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
                v509,
                &routeData,
                _4__this->fields.averageBenefitValue,
                0LL);
              if ( !routeData )
                sub_B2C434(0LL, v512);
              WarBoardAIRoute_RouteData__CalcEvalValue(routeData, v512);
              v513 = WarBoardAIRoute___c_TypeInfo;
              v514 = v555->fields.routeDataList;
              if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v513 = WarBoardAIRoute___c_TypeInfo;
              }
              v515 = v513->static_fields;
              _9__47_5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v515->__9__47_5;
              if ( !_9__47_5 )
              {
                if ( (BYTE3(v513->vtable._0_Equals.methodPtr) & 4) != 0 && !v513->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v513);
                  v462 = piecePlaceData;
                  v515 = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v517 = (Il2CppObject *)v515->__9;
                _9__47_5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
                  _9__47_5,
                  v517,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__,
                  (const MethodInfo_2713350 *)Method_System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___ctor__);
                v518 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v518->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
                sub_B2C2F8(&v518->__9__47_5, _9__47_5);
                p__7__wrap23 = v534;
              }
              v519 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v514,
                                                                      (System_Func_TSource__TResult__o *)_9__47_5,
                                                                      (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
              v520 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
              System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
                v520,
                v519,
                (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___67334480);
              if ( !v520 )
                sub_B2C434(v521, v522);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v520,
                (EventMissionProgressRequest_Argument_ProgressData_o *)routeData,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__);
              v523 = BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                       (System_Collections_Generic_List_T__o *)v520,
                       v520->fields._size - 2,
                       0LL,
                       (const MethodInfo_1728994 *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
              route = v523;
              if ( v523 )
              {
                if ( !routeData )
                  sub_B2C434(v523, v524);
                if ( routeData->fields.basePiece == v523->fields.basePiece )
                {
                  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
                    v509,
                    &route,
                    routeData,
                    0LL);
                  if ( !route )
                    sub_B2C434(0LL, v525);
                  WarBoardAIRoute_RouteData__CalcEvalValue(route, v525);
                }
              }
              allRouteList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allRouteList;
              if ( !allRouteList )
                sub_B2C434(0LL, v524);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                allRouteList,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v520,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
              if ( !routeData )
                sub_B2C434(this, method);
              if ( routeData->fields.baseIndex != routeData->fields.actionIndex && (routeData->fields.flagNow & 2) == 0 )
              {
                searchCount = v555->fields.searchCount;
                if ( searchCount != 1 )
                {
                  v530 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(_4__this, v462, searchCount, v520, 0LL);
                  v531 = v555;
                  v555->fields.__2__current = v530;
                  sub_B2C2F8(&v531->fields.__2__current, v530);
                  result = 1;
                  v555->fields.__1__state = 1;
                  return result;
                }
                dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
                v529 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(_4__this, v462, 1, v520, 0LL);
                if ( !routeData )
                  sub_B2C434(v529, v529);
                if ( !dictionaryCreateRouteDataEvalValue )
                  sub_B2C434(v529, v529);
                System_Collections_Generic_Dictionary_object__float___Add(
                  dictionaryCreateRouteDataEvalValue,
                  v529,
                  routeData->fields.evalValue,
                  (const MethodInfo_2E2BCAC *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
              }
            }
            goto LABEL_543;
          }
        }
        v199 = v555;
        WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v555, v137);
        *(_OWORD *)&p__7__wrap8->fields.dictionary = 0u;
        p__7__wrap8->fields.current = 0u;
        if ( v199->fields.searchCount != 1 )
          return 0;
        if ( !_4__this )
          sub_B2C434(v200, v201);
        v202 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        v203 = WarBoardAIRoute___c_TypeInfo;
        if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v203 = WarBoardAIRoute___c_TypeInfo;
        }
        v204 = v203->static_fields;
        _9__47_6 = (System_Func_T__TResult__o *)v204->__9__47_6;
        if ( !_9__47_6 )
        {
          if ( (BYTE3(v203->vtable._0_Equals.methodPtr) & 4) != 0 && !v203->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v203);
            v204 = WarBoardAIRoute___c_TypeInfo->static_fields;
          }
          v206 = (Il2CppObject *)v204->__9;
          _9__47_6 = (System_Func_T__TResult__o *)sub_B2C42C(System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v206,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            (const MethodInfo_2707F40 *)Method_System_Func_KeyValuePair_IEnumerator__float___float___ctor__);
          v207 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v207->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_B2C2F8(&v207->__9__47_6, _9__47_6);
        }
        v209 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__float___float_(
                 v202,
                 (System_Func_TSource__TKey__o *)_9__47_6,
                 (const MethodInfo_1A93834 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v555->fields._servantAndEnemyMasterRange_5__15 = 0;
        v210 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v210 )
          sub_B2C434(0LL, v208);
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v210,
                  (const MethodInfo_2E2B8A8 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v214 = _4__this->fields.npcData;
        if ( !v214 )
          sub_B2C434(Count, v212);
        v215 = (float)((float)v214->fields.calcEllipsis / 100.0) * (float)(int)Count;
        v216 = v555;
        if ( v215 == INFINITY )
          v217 = -v215;
        else
          v217 = v215;
        v218 = (int)v217;
        v555->fields._servantAndEnemyRange_5__14 = (int)v217;
        v219 = _4__this->fields.npcData;
        if ( !v219 )
          sub_B2C434(Count, v212);
        calcEllipsisMin = v219->fields.calcEllipsisMin;
        if ( calcEllipsisMin > v218 )
          v218 = calcEllipsisMin;
        v216->fields._servantAndEnemyRange_5__14 = v218;
        if ( !v209 )
          sub_B2C434(Count, v212);
        v221 = v209->klass;
        if ( *(_WORD *)&v209->klass->_2.bitflags1 )
        {
          v222 = 0LL;
          p_offset = &v221->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            ++v222;
            p_offset += 4;
            if ( v222 >= *(unsigned __int16 *)&v209->klass->_2.bitflags1 )
              goto LABEL_118;
          }
          p_method = (__int64)&v221->vtable[*p_offset].method;
        }
        else
        {
LABEL_118:
          p_method = sub_AC5258(
                       v209,
                       System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo,
                       0LL,
                       v213);
        }
        v229 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                 v209,
                 *(_QWORD *)(p_method + 8));
        p__7__wrap24 = &v555->fields.__7__wrap24;
        *(_QWORD *)&v555->fields.__7__wrap24 = v229;
        sub_B2C2F8(p__7__wrap24, v229);
        v555->fields.__1__state = -4;
        goto LABEL_126;
      }
    }
    v127 = WarBoardAIRoute__GetDefenseAreaData(
             _4__this,
             *p_masterSquareIndex_5__4,
             *p_allyPieceIndexs_5__5,
             *p_piecePlaceData,
             0LL);
    *p_defenseAreaData_5__7 = v127;
    sub_B2C2F8(p_defenseAreaData_5__7, v127);
    v130 = *p_defenseAreaData_5__7;
    if ( !*p_defenseAreaData_5__7 )
      sub_B2C434(v128, v129);
    v555->fields._baseFlag_5__6 |= v130->fields._Flag_k__BackingField;
    v131 = _4__this->fields.aiRouteMasterData;
    if ( !v131 )
      sub_B2C434(v128, v129);
    if ( WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
           v130->fields._ShortestRoutes_k__BackingField,
           *p_piecePlaceData,
           v131->fields.masterType == 1,
           0LL) )
    {
      v555->fields._baseFlag_5__6 |= 0x20000000uLL;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  if ( (byte_4185704 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, method);
    byte_4185704 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &this->fields.__7__wrap8,
    (const MethodInfo_27801B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
}


void __fastcall WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  __int64 *v4; // x19
  __int64 v5; // x8
  unsigned __int64 v6; // x10
  int *v7; // x11
  __int64 v8; // x0

  if ( (byte_4185705 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    byte_4185705 = 1;
  }
  v4 = *(__int64 **)&this->fields.__7__wrap24;
  this->fields.__1__state = -1;
  if ( v4 )
  {
    v5 = *v4;
    if ( *(_WORD *)(*v4 + 298) )
    {
      v6 = 0LL;
      v7 = (int *)(*(_QWORD *)(v5 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v7 - 1) != System_IDisposable_TypeInfo )
      {
        ++v6;
        v7 += 4;
        if ( v6 >= *(unsigned __int16 *)(*v4 + 298) )
          goto LABEL_8;
      }
      v8 = v5 + 16LL * *v7 + 312;
    }
    else
    {
LABEL_8:
      v8 = sub_AC5258(v4, System_IDisposable_TypeInfo, 0LL, v2);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v8)(v4, *(_QWORD *)(v8 + 8));
  }
}


void __fastcall WarBoardAIRoute___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0

  if ( (byte_41856F4 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIRoute___c_TypeInfo, v1);
    byte_41856F4 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardAIRoute___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAIRoute___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_41856F5 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_B2C35C(&IWarBoardObjectData_TypeInfo, x);
    byte_41856F5 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
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
    p_method = sub_AC5258(x, IWarBoardObjectData_TypeInfo, 2LL, v3);
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
  if ( (byte_41856F6 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__,
      x.fields.key);
    byte_41856F6 = 1;
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
  if ( (byte_41856F7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__,
      x.fields.key);
    byte_41856F7 = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, (const MethodInfo *)x.fields.key);
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return WarBoardAIRoute_RouteData__ShallowCopy(x, (const MethodInfo *)x);
}


float __fastcall WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // s8

  value = x.fields.value;
  if ( (byte_41856F8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__, x.fields.key);
    byte_41856F8 = 1;
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

  if ( (byte_41856F9 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_B2C35C(&IWarBoardObjectData_TypeInfo, x);
    byte_41856F9 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
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
    p_method = sub_AC5258(x, IWarBoardObjectData_TypeInfo, 4LL, v3);
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

  if ( (byte_41856FA & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_B2C35C(&IWarBoardObjectData_TypeInfo, x);
    byte_41856FA = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
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
    p_method = sub_AC5258(x, IWarBoardObjectData_TypeInfo, 5LL, v3);
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
  if ( (byte_41856FB & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__,
      *(_QWORD *)&x.fields.key);
    byte_41856FB = 1;
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
    sub_B2C434(this, 0LL);
  return !WarBoardItemData__get_Acquired(z, 0LL) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_B2C434(this, 0LL);
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
  if ( (byte_41856FC & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_B2C35C(&IWarBoardObjectData_TypeInfo, z);
    byte_41856FC = 1;
  }
  if ( !z )
    sub_B2C434(this, z);
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
    p_method = sub_AC5258(z, IWarBoardObjectData_TypeInfo, 0LL, v3);
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
    v14 = sub_AC5258(z, IWarBoardObjectData_TypeInfo, 3LL, v10);
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, 0LL);
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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

  if ( (byte_41856FD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, *(_QWORD *)&square);
    byte_41856FD = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_B2C434(0LL, *(_QWORD *)&square);
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_2E6C1B8 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
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
    sub_B2C434(this, x);
  i = this->fields.i;
  if ( (unsigned int)i >= route->max_length )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
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

  if ( (byte_41856FE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_IWarBoardObjectData__bool__Invoke__, x);
    byte_41856FE = 1;
  }
  excludeCond = this->fields.excludeCond;
  if ( !excludeCond )
    sub_B2C434(0LL, x);
  return !System_Func_BattleBuffData_BuffData__bool___Invoke(
            (System_Func_BattleBuffData_BuffData__bool__o *)excludeCond,
            (BattleBuffData_BuffData_o *)x,
            (const MethodInfo_2711C18 *)Method_System_Func_IWarBoardObjectData__bool__Invoke__)
      && this->fields.basePiece != (struct WarBoardPieceData_o *)x;
}


int32_t __fastcall WarBoardAIRoute___c__DisplayClass64_0___GetTargetToDistanceUsingIndividuality_b__1(
        WarBoardAIRoute___c__DisplayClass64_0_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardAIRoute___c__DisplayClass64_0_o *v5; // x20
  __int64 v6; // x1
  IWarBoardObjectData_c *klass; // x8
  int32_t baseSquareIndex; // w20
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v12; // w19

  v5 = this;
  if ( (byte_41856FF & 1) == 0 )
  {
    sub_B2C35C(&AStarSearch_TypeInfo, x);
    this = (WarBoardAIRoute___c__DisplayClass64_0_o *)sub_B2C35C(&IWarBoardObjectData_TypeInfo, v6);
    byte_41856FF = 1;
  }
  if ( !x )
    goto LABEL_15;
  klass = x->klass;
  baseSquareIndex = v5->fields.baseSquareIndex;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(x, IWarBoardObjectData_TypeInfo, 1LL, v3);
  }
  v12 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  this = (WarBoardAIRoute___c__DisplayClass64_0_o *)AStarSearch__RouteSearch(0LL, baseSquareIndex, v12, 0, 0LL, 0LL);
  if ( !this )
LABEL_15:
    sub_B2C434(this, x);
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
  __int64 v11; // x1
  System_Collections_Generic_List_T__o *routeDataList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x20

  if ( (byte_4185700 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, targetObject);
    sub_B2C35C(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__, v7);
    sub_B2C35C(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo, v8);
    byte_4185700 = 1;
  }
  v9 = (Il2CppObject *)sub_B2C42C(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9[1].klass = (Il2CppClass *)targetObject;
  sub_B2C2F8(&v9[1], targetObject);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    v9,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           routeDataList,
           (System_Func_T__bool__o *)v13,
           (const MethodInfo_17266AC *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
  __int64 v6; // x1
  struct IWarBoardObjectData_o *targetObject; // x21
  IWarBoardObjectData_c *klass; // x8
  __int64 v9; // x10
  int32_t baseIndex; // w23
  unsigned __int64 v12; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  struct IWarBoardObjectData_o *v16; // x20
  IWarBoardObjectData_c *v17; // x8
  int32_t actionIndex; // w19
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0

  v5 = this;
  if ( (byte_4185701 & 1) == 0 )
  {
    sub_B2C35C(&IWarBoardObjectData_TypeInfo, x);
    this = (WarBoardAIRoute___c__DisplayClass65_1_o *)sub_B2C35C(&WarBoardItemData_TypeInfo, v6);
    byte_4185701 = 1;
  }
  targetObject = v5->fields.targetObject;
  if ( !targetObject )
    return 0;
  klass = targetObject->klass;
  v9 = *(&WarBoardItemData_TypeInfo->_2.bitflags2 + 1);
  if ( *(&targetObject->klass->_2.bitflags2 + 1) < (unsigned int)v9
    || (WarBoardItemData_c *)klass->_2.typeHierarchy[v9 - 1] != WarBoardItemData_TypeInfo )
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
    v12 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AC5258(v5->fields.targetObject, IWarBoardObjectData_TypeInfo, 0LL, v3);
  }
  this = (WarBoardAIRoute___c__DisplayClass65_1_o *)(*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                                      targetObject,
                                                      *(_QWORD *)(p_method + 8));
  if ( baseIndex == (_DWORD)this )
    return 1;
  v16 = v5->fields.targetObject;
  if ( !v16 )
LABEL_25:
    sub_B2C434(this, x);
  v17 = v16->klass;
  actionIndex = x->fields.actionIndex;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    v20 = &v17->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v20 - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v19;
      v20 += 4;
      if ( v19 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v21 = (__int64)&v17->vtable[*v20].method;
  }
  else
  {
LABEL_22:
    v21 = sub_AC5258(v16, IWarBoardObjectData_TypeInfo, 0LL, v15);
  }
  return actionIndex == (*(unsigned int (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v21)(
                          v16,
                          *(_QWORD *)(v21 + 8));
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
  if ( (byte_4185702 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass66_0_o *)sub_B2C35C(
                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__,
                                                        x);
    byte_4185702 = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  value = v4->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_B2C434(this, x);
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
    sub_B2C434(this, x);
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
      sub_B2C434(this, x);
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