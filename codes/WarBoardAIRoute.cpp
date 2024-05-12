void __fastcall WarBoardAIRoute___ctor(
        WarBoardAIRoute_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v54; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v61; // x20
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  WarBoardData_o *reinforcementsSaveList; // x0
  const MethodInfo *v75; // x1
  const MethodInfo *v76; // x1
  BattleServantConfConponent_o *p_aiIds; // x20
  struct System_Int32_array *aiIds; // x21
  System_Array_o *v79; // x21
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  __int64 v86; // x8
  unsigned __int64 v87; // x20
  int v88; // w19
  WarBoardAIRoute_PiecePersonality_o *v89; // x23
  WarBoardPieceData_o *Piece; // x0
  int32_t overwriteAiId_k__BackingField; // w22
  DataMasterBase_WarMaster__WarEntity__int__o *v92; // x22
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *stageNpcMaster; // x8
  WarBoardData_o *v94; // x27
  unsigned __int64 v95; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *actionTrandList; // x28
  WarBoardActionTrendEntity_o *v97; // x20
  WarBoardAIRoute_ActionTrendInfo_o *v98; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v99; // x22
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v100; // x8
  WarBoardData_o *v101; // x27
  unsigned __int64 v102; // x19
  WarBoardStageReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x27
  WarBoardReinforcementsMaster_o *v104; // x28
  WarBoardData_o *v105; // x20
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v107; // x22
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__c *klass; // x8
  WarBoardData_o *v109; // x22
  unsigned __int64 v110; // x10
  int32_t *p_offset; // x11
  __int64 v112; // x0
  __int64 v113; // x1
  __int64 v114; // x26
  __int64 v115; // x8
  unsigned __int64 v116; // x10
  int *v117; // x11
  __int64 v118; // x0
  __int64 v119; // x8
  unsigned __int64 v120; // x10
  int *v121; // x11
  __int64 v122; // x0
  __int64 v123; // x1
  int32_t *v124; // x22
  __int64 id; // x0
  __int64 v126; // x1
  _BOOL8 v127; // x0
  __int64 v128; // x1
  __int64 v129; // x0
  __int64 v130; // x1
  _BOOL8 v131; // x0
  __int64 v132; // x1
  const MethodInfo *v133; // x3
  __int64 v134; // x8
  unsigned __int64 v135; // x10
  int *v136; // x11
  __int64 v137; // x0
  _QWORD *p_klass; // x19
  BattleServantConfConponent_o *p_ratingBaseIds; // x20
  System_Array_o *v140; // x21
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  __int64 v147; // x8
  unsigned __int64 v148; // x21
  int32_t v149; // w20
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v150; // x20
  __int64 v151; // x22
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  int32_t buckets; // w20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v159; // x22
  WarBoardEvalValueSquare_CalcEval_o *v160; // x25
  _QWORD *p_image; // x19
  BattleServantConfConponent_o *p_tacticalIds; // x21
  System_Array_o *v163; // x20
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  __int64 v170; // x8
  unsigned __int64 v171; // x21
  int32_t v172; // w20
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v175; // x22
  const MethodInfo *v176; // x3
  System_String_array **v177; // x2
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  __int64 v183; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_tacticalTrendList; // [xsp+8h] [xbp-C8h]
  WarBoardStageNpcEntity_o *v185; // [xsp+10h] [xbp-C0h]
  WarBoardAIRoute_o *v186; // [xsp+18h] [xbp-B8h]
  struct System_Collections_Generic_List_WarBoardRatingBase__o **p_ratingBaseList; // [xsp+20h] [xbp-B0h]
  struct System_Int32_array *v188; // [xsp+28h] [xbp-A8h]
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o **p_dicRatingbaseCalcValue; // [xsp+30h] [xbp-A0h]
  unsigned __int64 key; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o **p_piecePersonalityDic; // [xsp+40h] [xbp-90h]
  DataManager_o *Instance; // [xsp+48h] [xbp-88h]
  int v193; // [xsp+50h] [xbp-80h]
  int v194; // [xsp+54h] [xbp-7Ch]
  WarBoardReinforcementsEntity_o *v195; // [xsp+58h] [xbp-78h] BYREF
  WarBoardStageReinforcementsEntity_o *v196; // [xsp+60h] [xbp-70h] BYREF
  WarEntity_o *v197; // [xsp+68h] [xbp-68h] BYREF
  WarEntity_o *v198; // [xsp+70h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF
  System_RuntimeFieldHandle_o v200; // 0:w1.4
  System_RuntimeFieldHandle_o v201; // 0:w1.4
  System_RuntimeFieldHandle_o v202; // 0:w1.4

  if ( (byte_4388FE2 & 1) == 0 )
  {
    sub_B775C4(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_B775C4(&Method_BasicHelper_IndexValue_int____69469920);
    sub_B775C4(&WarBoardEvalValueSquare_CalcEval_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_WarBoardAIMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
    sub_B775C4(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B775C4(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B775C4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
    sub_B775C4(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
    sub_B775C4(&WarBoardAIRoute_PiecePersonality_TypeInfo);
    sub_B775C4(&ShortestDistanceFromAllyMaster_TypeInfo);
    sub_B775C4(&ShortestDistanceFromAllyServant_TypeInfo);
    sub_B775C4(&ShortestDistanceFromEnemyMaster_TypeInfo);
    sub_B775C4(&ShortestDistanceFromEnemyServant_TypeInfo);
    sub_B775C4(&ShortestDistanceFromItem_TypeInfo);
    sub_B775C4(&ShortestDistanceFromPrioritySpace_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384);
    sub_B775C4(&Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49);
    sub_B775C4(&Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72);
    sub_B775C4(&Method_WarBoardAIRoute___ctor_b__42_0__);
    sub_B775C4(&WarBoardAiTargetCacher_TypeInfo);
    byte_4388FE2 = 1;
  }
  v198 = 0LL;
  entity = 0LL;
  v196 = 0LL;
  v197 = 0LL;
  v195 = 0LL;
  v194 = 0;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v5;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.tacticalTrendList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v12;
  p_ratingBaseList = &this->fields.ratingBaseList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.ratingBaseList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v19,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v19;
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o **)&this->fields.piecePersonalityDic;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.piecePersonalityDic,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v26;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.allRouteList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B77694(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v33,
    (const MethodInfo_2FC5AE0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v33;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyAdvantagePieceData,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B77694(System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v40,
    (const MethodInfo_2F88504 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v40;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dictionaryCreateRouteDataEvalValue,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B77694(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v47,
    (const MethodInfo_2FC5AE0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v47;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyDesignationItem,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B77694(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v54,
    (const MethodInfo_2FC5AE0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = v54;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyTarget,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v61,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v61;
  p_dicRatingbaseCalcValue = &this->fields.dicRatingbaseCalcValue;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dicRatingbaseCalcValue,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.npcData,
    (System_Int32_array **)npc,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  if ( !npc )
    goto LABEL_130;
  this->fields.forceId = npc->fields.forceId;
  this->fields.groupId = npc->fields.groupId;
  this->fields.pickValue = npc->fields.pickValue;
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  WarBoardAIRoute__Clear(this, v76);
  reinforcementsSaveList = (WarBoardData_o *)this->fields.piecePersonalityDic;
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)reinforcementsSaveList,
    (const MethodInfo_2FF4354 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  reinforcementsSaveList = (WarBoardData_o *)*p_ratingBaseList;
  if ( !*p_ratingBaseList )
    goto LABEL_130;
  p_tacticalTrendList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.tacticalTrendList;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)reinforcementsSaveList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__);
  v185 = npc;
  p_aiIds = (BattleServantConfConponent_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v79 = (System_Array_o *)sub_B775DC(int___TypeInfo, 4LL);
    v200.fields.value = Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v79, v200, 0LL);
    p_aiIds->klass = (BattleServantConfConponent_c *)v79;
    sub_B77560(p_aiIds, (System_Int32_array **)v79, v80, v81, v82, v83, v84, v85);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_130;
  }
  v86 = *(_QWORD *)&aiIds->max_length;
  v186 = this;
  if ( (int)v86 >= 1 )
  {
    v87 = 0LL;
    v188 = aiIds;
    do
    {
      if ( v87 >= (unsigned int)v86 )
        goto LABEL_131;
      v88 = aiIds->m_Items[v87 + 1];
      v89 = (WarBoardAIRoute_PiecePersonality_o *)sub_B77694(WarBoardAIRoute_PiecePersonality_TypeInfo);
      WarBoardAIRoute_PiecePersonality___ctor(v89, 0LL);
      reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !reinforcementsSaveList )
        goto LABEL_130;
      reinforcementsSaveList = (WarBoardData_o *)reinforcementsSaveList[1].fields.reinforcementsSaveList;
      if ( !reinforcementsSaveList )
        goto LABEL_130;
      key = v87;
      Piece = WarBoardData__GetPiece(reinforcementsSaveList, this->fields.forceId, this->fields.groupId, v87, 1, 0LL);
      if ( Piece
        && (overwriteAiId_k__BackingField = Piece->fields._overwriteAiId_k__BackingField,
            overwriteAiId_k__BackingField > 0)
        || (overwriteAiId_k__BackingField = v88, v88 >= 1) )
      {
        reinforcementsSaveList = (WarBoardData_o *)Instance;
        if ( !Instance )
          goto LABEL_130;
        reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     Instance,
                                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !reinforcementsSaveList )
          goto LABEL_130;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList,
               &entity,
               overwriteAiId_k__BackingField,
               (const MethodInfo_21FB8F0 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       Instance,
                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
          if ( !entity )
            goto LABEL_130;
          v92 = (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList;
          reinforcementsSaveList = (WarBoardData_o *)WarBoardAIEntity__GetActionTrendIds(
                                                       (WarBoardAIEntity_o *)entity,
                                                       v75);
          if ( !reinforcementsSaveList )
            goto LABEL_130;
          stageNpcMaster = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)reinforcementsSaveList->fields.stageNpcMaster;
          v94 = reinforcementsSaveList;
          if ( (int)stageNpcMaster >= 1 )
          {
            v95 = 0LL;
            while ( v95 < (unsigned int)stageNpcMaster )
            {
              if ( !v92 )
                goto LABEL_130;
              reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                           v92,
                                                           &v198,
                                                           *((_DWORD *)&v94->fields.npcEntityDict + v95),
                                                           (const MethodInfo_21FB8F0 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)reinforcementsSaveList & 1) != 0 )
              {
                if ( !v89 )
                  goto LABEL_130;
                actionTrandList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v89->fields.actionTrandList;
                v97 = (WarBoardActionTrendEntity_o *)v198;
                v98 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B77694(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
                WarBoardAIRoute_ActionTrendInfo___ctor(v98, v97, 0LL);
                if ( !actionTrandList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  actionTrandList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v98,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
              }
              LODWORD(stageNpcMaster) = v94->fields.stageNpcMaster;
              if ( (__int64)++v95 >= (int)stageNpcMaster )
                goto LABEL_38;
            }
LABEL_131:
            v183 = sub_B776C8(reinforcementsSaveList);
            sub_B77668(v183, 0LL);
          }
LABEL_38:
          reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       Instance,
                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_130;
          v99 = (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList;
          reinforcementsSaveList = (WarBoardData_o *)WarBoardAIEntity__GetRatingOffsetIds(
                                                       (WarBoardAIEntity_o *)entity,
                                                       v75);
          this = v186;
          if ( !reinforcementsSaveList )
            goto LABEL_130;
          v100 = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)reinforcementsSaveList->fields.stageNpcMaster;
          v101 = reinforcementsSaveList;
          if ( (int)v100 >= 1 )
          {
            v102 = 0LL;
            while ( v102 < (unsigned int)v100 )
            {
              if ( !v99 )
                goto LABEL_130;
              reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                           v99,
                                                           &v197,
                                                           *((_DWORD *)&v101->fields.npcEntityDict + v102),
                                                           (const MethodInfo_21FB8F0 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)reinforcementsSaveList & 1) != 0 )
              {
                if ( !v89 )
                  goto LABEL_130;
                reinforcementsSaveList = (WarBoardData_o *)v89->fields.ratingOffsetList;
                if ( !reinforcementsSaveList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)reinforcementsSaveList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v197,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
              }
              LODWORD(v100) = v101->fields.stageNpcMaster;
              if ( (__int64)++v102 >= (int)v100 )
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
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v89,
        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      aiIds = v188;
      v87 = key + 1;
      LODWORD(v86) = v188->max_length;
    }
    while ( (__int64)(key + 1) < (int)v86 );
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v104 = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  v105 = (WarBoardData_o *)reinforcementsSaveList[1].fields.reinforcementsSaveList;
  if ( !v105 )
    goto LABEL_130;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)v105->fields.pieces;
  v107 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v107,
    (Il2CppObject *)this,
    Method_WarBoardAIRoute___ctor_b__42_0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  reinforcementsSaveList = (WarBoardData_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                               pieces,
                                               (System_Func_TSource__bool__o *)v107,
                                               (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  klass = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__c *)reinforcementsSaveList->klass;
  v109 = reinforcementsSaveList;
  if ( *(_WORD *)&reinforcementsSaveList->klass->_2.bitflags1 )
  {
    v110 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      ++v110;
      p_offset += 4;
      if ( v110 >= *(unsigned __int16 *)&reinforcementsSaveList->klass->_2.bitflags1 )
        goto LABEL_61;
    }
    v112 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_61:
    v112 = sub_B0F4C0(reinforcementsSaveList, System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, 0LL);
  }
  v114 = (*(__int64 (__fastcall **)(WarBoardData_o *, _QWORD))v112)(v109, *(_QWORD *)(v112 + 8));
  if ( !v114 )
    sub_B7769C(0LL, v113);
  while ( 1 )
  {
    v115 = *(_QWORD *)v114;
    if ( *(_WORD *)(*(_QWORD *)v114 + 298LL) )
    {
      v116 = 0LL;
      v117 = (int *)(*(_QWORD *)(v115 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v117 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v116;
        v117 += 4;
        if ( v116 >= *(unsigned __int16 *)(*(_QWORD *)v114 + 298LL) )
          goto LABEL_68;
      }
      v118 = v115 + 16LL * *v117 + 312;
    }
    else
    {
LABEL_68:
      v118 = sub_B0F4C0(v114, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v118)(v114, *(_QWORD *)(v118 + 8)) & 1) == 0 )
      break;
    v119 = *(_QWORD *)v114;
    if ( *(_WORD *)(*(_QWORD *)v114 + 298LL) )
    {
      v120 = 0LL;
      v121 = (int *)(*(_QWORD *)(v119 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v121 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        ++v120;
        v121 += 4;
        if ( v120 >= *(unsigned __int16 *)(*(_QWORD *)v114 + 298LL) )
          goto LABEL_75;
      }
      v122 = v119 + 16LL * *v121 + 312;
    }
    else
    {
LABEL_75:
      v122 = sub_B0F4C0(v114, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL);
    }
    v124 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v122)(v114, *(_QWORD *)(v122 + 8));
    if ( !v124 )
      sub_B7769C(0LL, v123);
    if ( !*p_piecePersonalityDic )
      sub_B7769C(0LL, v123);
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            *p_piecePersonalityDic,
            v124[7],
            (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__) )
    {
      id = WarBoardData__get_id(v105, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        sub_B7769C(id, v126);
      v127 = WarBoardStageReinforcementsMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v196, id, v124[70], 0LL);
      if ( v127 )
      {
        if ( !v196 )
          sub_B7769C(v127, v128);
        v129 = BasicHelper__IndexValue_int_(
                 v196->fields.reinforcementsIds,
                 v124[71],
                 -1,
                 (const MethodInfo_1C683B4 *)Method_BasicHelper_IndexValue_int____69469920);
        if ( !v104 )
          sub_B7769C(v129, v130);
        v131 = WarBoardReinforcementsMaster__TryGetEntity(v104, &v195, v129, 0LL);
        if ( v131 )
        {
          if ( !v195 )
            sub_B7769C(v131, v132);
          WarBoardAIRoute__AddPiecePersonalityDic(this, v195->fields.aiId, v124[7], v133);
        }
      }
    }
  }
  v193 = 833;
  ++v194;
  v134 = *(_QWORD *)v114;
  if ( *(_WORD *)(*(_QWORD *)v114 + 298LL) )
  {
    v135 = 0LL;
    v136 = (int *)(*(_QWORD *)(v134 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v136 - 1) != System_IDisposable_TypeInfo )
    {
      ++v135;
      v136 += 4;
      if ( v135 >= *(unsigned __int16 *)(*(_QWORD *)v114 + 298LL) )
        goto LABEL_91;
    }
    v137 = v134 + 16LL * *v136 + 312;
  }
  else
  {
LABEL_91:
    v137 = sub_B0F4C0(v114, System_IDisposable_TypeInfo, 0LL);
  }
  reinforcementsSaveList = (WarBoardData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v137)(
                                               v114,
                                               *(_QWORD *)(v137 + 8));
  if ( v194 && *(&v193 + v194 - 1) == 833 )
    --v194;
  p_ratingBaseIds = (BattleServantConfConponent_o *)&v185->fields.ratingBaseIds;
  p_klass = &v185->fields.ratingBaseIds->obj.klass;
  if ( !p_klass )
  {
    v140 = (System_Array_o *)sub_B775DC(int___TypeInfo, 6LL);
    v201.fields.value = Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v140, v201, 0LL);
    p_ratingBaseIds->klass = (BattleServantConfConponent_c *)v140;
    sub_B77560(p_ratingBaseIds, (System_Int32_array **)v140, v141, v142, v143, v144, v145, v146);
    p_klass = &p_ratingBaseIds->klass->_1.image;
    if ( !p_ratingBaseIds->klass )
LABEL_130:
      sub_B7769C(reinforcementsSaveList, v75);
  }
  v147 = p_klass[3];
  if ( (int)v147 >= 1 )
  {
    v148 = 0LL;
    while ( 2 )
    {
      if ( v148 >= (unsigned int)v147 )
        goto LABEL_131;
      reinforcementsSaveList = (WarBoardData_o *)Instance;
      if ( Instance )
      {
        v149 = *((_DWORD *)p_klass + v148 + 8);
        reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     Instance,
                                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
        if ( reinforcementsSaveList )
        {
          reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList,
                                                       v149,
                                                       (const MethodInfo_21FB894 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
          if ( reinforcementsSaveList )
          {
            v150 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)reinforcementsSaveList;
            switch ( HIDWORD(reinforcementsSaveList->fields.stageEntity) )
            {
              case 0:
                v151 = sub_B77694(ShortestDistanceFromAllyServant_TypeInfo);
                ShortestDistanceFromAllyServant___ctor((ShortestDistanceFromAllyServant_o *)v151, 0LL);
                if ( !v151 )
                  goto LABEL_130;
                goto LABEL_116;
              case 1:
                v151 = sub_B77694(ShortestDistanceFromEnemyServant_TypeInfo);
                ShortestDistanceFromEnemyServant___ctor((ShortestDistanceFromEnemyServant_o *)v151, 0LL);
                if ( !v151 )
                  goto LABEL_130;
                goto LABEL_116;
              case 2:
                v151 = sub_B77694(ShortestDistanceFromAllyMaster_TypeInfo);
                ShortestDistanceFromAllyMaster___ctor((ShortestDistanceFromAllyMaster_o *)v151, 0LL);
                if ( !v151 )
                  goto LABEL_130;
                goto LABEL_116;
              case 3:
                v151 = sub_B77694(ShortestDistanceFromEnemyMaster_TypeInfo);
                ShortestDistanceFromEnemyMaster___ctor((ShortestDistanceFromEnemyMaster_o *)v151, 0LL);
                if ( !v151 )
                  goto LABEL_130;
                goto LABEL_116;
              case 4:
                v151 = sub_B77694(ShortestDistanceFromItem_TypeInfo);
                ShortestDistanceFromItem___ctor((ShortestDistanceFromItem_o *)v151, 0LL);
                if ( !v151 )
                  goto LABEL_130;
                goto LABEL_116;
              case 5:
                v151 = sub_B77694(ShortestDistanceFromPrioritySpace_TypeInfo);
                ShortestDistanceFromPrioritySpace___ctor((ShortestDistanceFromPrioritySpace_o *)v151, 0LL);
                if ( !v151 )
                  goto LABEL_130;
LABEL_116:
                *(_QWORD *)(v151 + 16) = v150;
                sub_B77560(
                  (BattleServantConfConponent_o *)(v151 + 16),
                  (System_Int32_array **)v150,
                  v152,
                  v153,
                  v154,
                  v155,
                  v156,
                  v157);
                reinforcementsSaveList = (WarBoardData_o *)*p_ratingBaseList;
                if ( !*p_ratingBaseList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)reinforcementsSaveList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v151,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardRatingBase__Add__);
LABEL_118:
                buckets = (int32_t)v150->fields.buckets;
                v159 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)*p_dicRatingbaseCalcValue;
                v160 = (WarBoardEvalValueSquare_CalcEval_o *)sub_B77694(WarBoardEvalValueSquare_CalcEval_TypeInfo);
                WarBoardEvalValueSquare_CalcEval___ctor(v160, 0LL);
                if ( !v159 )
                  goto LABEL_130;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  v159,
                  buckets,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v160,
                  (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
                LODWORD(v147) = *((_DWORD *)p_klass + 6);
                if ( (__int64)++v148 >= (int)v147 )
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
  p_tacticalIds = (BattleServantConfConponent_o *)&v185->fields.tacticalIds;
  p_image = &v185->fields.tacticalIds->obj.klass;
  if ( !p_image )
  {
    v163 = (System_Array_o *)sub_B775DC(int___TypeInfo, 5LL);
    v202.fields.value = Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v163, v202, 0LL);
    p_tacticalIds->klass = (BattleServantConfConponent_c *)v163;
    sub_B77560(p_tacticalIds, (System_Int32_array **)v163, v164, v165, v166, v167, v168, v169);
    p_image = &p_tacticalIds->klass->_1.image;
    if ( !p_tacticalIds->klass )
      goto LABEL_130;
  }
  v170 = p_image[3];
  if ( (int)v170 >= 1 )
  {
    v171 = 0LL;
    while ( v171 < (unsigned int)v170 )
    {
      reinforcementsSaveList = (WarBoardData_o *)Instance;
      if ( !Instance )
        goto LABEL_130;
      v172 = *((_DWORD *)p_image + v171 + 8);
      reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   Instance,
                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !reinforcementsSaveList )
        goto LABEL_130;
      reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList,
                                                   v172,
                                                   (const MethodInfo_21FB894 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      if ( !*p_tacticalTrendList )
        goto LABEL_130;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_tacticalTrendList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)reinforcementsSaveList,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__);
      LODWORD(v170) = *((_DWORD *)p_image + 6);
      if ( (__int64)++v171 >= (int)v170 )
        goto LABEL_129;
    }
    goto LABEL_131;
  }
LABEL_129:
  forceId = v186->fields.forceId;
  groupId = v186->fields.groupId;
  v175 = (WarBoardAiTargetCacher_o *)sub_B77694(WarBoardAiTargetCacher_TypeInfo);
  WarBoardAiTargetCacher___ctor(v175, forceId, groupId, v176);
  v186->fields.aiTargetCacher = v175;
  sub_B77560(
    (BattleServantConfConponent_o *)&v186->fields.aiTargetCacher,
    (System_Int32_array **)v175,
    v177,
    v178,
    v179,
    v180,
    v181,
    v182);
}


void __fastcall WarBoardAIRoute__AddPiecePersonalityDic(
        WarBoardAIRoute_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute___c__DisplayClass43_0_o *v7; // x20
  WarBoardAIEntity_o *Entity; // x0
  MethodInfo *v9; // x1
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x21
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *v11; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x23
  WarBoardAIRoute_PiecePersonality_o *v15; // x21
  struct System_Int32_array *actionTrendIds; // x8
  WarBoardAIEntity_o *v17; // x25
  unsigned __int64 v18; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *actionTrandList; // x26
  WarBoardActionTrendEntity_o *v20; // x27
  WarBoardAIRoute_ActionTrendInfo_o *v21; // x28
  struct System_Int32_array *v22; // x8
  WarBoardAIEntity_o *v23; // x22
  unsigned __int64 v24; // x19
  __int64 v25; // x0
  WarBoardAIEntity_o *v26; // [xsp+8h] [xbp-68h]
  WarBoardAIRoute_o *v27; // [xsp+18h] [xbp-58h]

  if ( (byte_4388FE3 & 1) == 0 )
  {
    sub_B775C4(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardAIMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____);
    sub_B775C4(&Method_System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool___ctor__);
    sub_B775C4(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
    sub_B775C4(&WarBoardAIRoute_PiecePersonality_TypeInfo);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__);
    sub_B775C4(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
    byte_4388FE3 = 1;
  }
  v7 = (WarBoardAIRoute___c__DisplayClass43_0_o *)sub_B77694(WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass43_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_32;
  v7->fields.pieceIndex = pieceIndex;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  v11 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)sub_B77694(System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    (const MethodInfo_29D5D98 *)Method_System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool___ctor__);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v11,
         (const MethodInfo_1D1E2A0 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v15 = (WarBoardAIRoute_PiecePersonality_o *)sub_B77694(WarBoardAIRoute_PiecePersonality_TypeInfo);
  WarBoardAIRoute_PiecePersonality___ctor(v15, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  Entity = (WarBoardAIEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   Master_WarQuestSelectionMaster,
                                   aiId,
                                   (const MethodInfo_21FB894 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_32;
  v26 = Entity;
  Entity = (WarBoardAIEntity_o *)WarBoardAIEntity__GetActionTrendIds(Entity, v9);
  if ( !Entity )
    goto LABEL_32;
  v27 = this;
  actionTrendIds = Entity->fields.actionTrendIds;
  v17 = Entity;
  if ( (int)actionTrendIds >= 1 )
  {
    v18 = 0LL;
    while ( v18 < (unsigned int)actionTrendIds )
    {
      if ( !v13 )
        goto LABEL_32;
      Entity = (WarBoardAIEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v13,
                                       *((_DWORD *)&v17->fields.ratingOffsetIds + v18),
                                       (const MethodInfo_21FB894 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v15 )
          goto LABEL_32;
        actionTrandList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v15->fields.actionTrandList;
        v20 = (WarBoardActionTrendEntity_o *)Entity;
        v21 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B77694(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v21, v20, 0LL);
        if ( !actionTrandList )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          actionTrandList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
      LODWORD(actionTrendIds) = v17->fields.actionTrendIds;
      if ( (__int64)++v18 >= (int)actionTrendIds )
        goto LABEL_20;
    }
LABEL_33:
    v25 = sub_B776C8(Entity);
    sub_B77668(v25, 0LL);
  }
LABEL_20:
  Entity = (WarBoardAIEntity_o *)WarBoardAIEntity__GetRatingOffsetIds(v26, v9);
  if ( !Entity )
    goto LABEL_32;
  v22 = Entity->fields.actionTrendIds;
  v23 = Entity;
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    while ( v24 < (unsigned int)v22 )
    {
      if ( !v14 )
        goto LABEL_32;
      Entity = (WarBoardAIEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v14,
                                       *((_DWORD *)&v23->fields.ratingOffsetIds + v24),
                                       (const MethodInfo_21FB894 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v15 )
          goto LABEL_32;
        v9 = (MethodInfo *)Entity;
        Entity = (WarBoardAIEntity_o *)v15->fields.ratingOffsetList;
        if ( !Entity )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Entity,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
      }
      LODWORD(v22) = v23->fields.actionTrendIds;
      if ( (__int64)++v24 >= (int)v22 )
        goto LABEL_30;
    }
    goto LABEL_33;
  }
LABEL_30:
  Entity = (WarBoardAIEntity_o *)v27->fields.piecePersonalityDic;
  if ( !Entity )
LABEL_32:
    sub_B7769C(Entity, v9);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Entity,
    v7->fields.pieceIndex,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v15,
    (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
}


void __fastcall WarBoardAIRoute__BeforeCreateRouteData(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *Instance; // x0
  const MethodInfo *v4; // x1
  _QWORD *v5; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  __int64 v9; // x24
  int v10; // w8
  unsigned int v11; // w25
  int v12; // w8
  int32_t forceId; // w9
  __int64 v14; // x23
  System_Int32_array **v15; // x0
  WarBoardAIRoute_o *v16; // x25
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x23
  int32_t v59; // w19
  int32_t groupId; // w20
  WarBoardAIRoute_AIRouteMasterData_o *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_Dictionary_int__uint__o *v68; // x19
  void **p_placePieceData; // x20
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct WarBoardPieceData_array *allAllyPiece; // x26
  int max_length; // w8
  signed int v78; // w9
  __int64 v79; // x0
  __int64 v80; // x0
  WarBoardPieceData_o *v81; // x8
  int32_t forceId_k__BackingField; // w8
  int32_t v83; // w9
  int32_t v84; // w1
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v86; // x20
  unsigned __int64 v87; // x10
  int *p_offset; // x11
  __int64 v89; // x0
  __int64 v90; // x1
  int v91; // w8
  unsigned int v92; // w9
  WarBoardActionTrendConditionEntity_o *v93; // x26
  struct System_Int32_array *conditionTypes; // x28
  __int64 v95; // x8
  unsigned __int64 v96; // x27
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x0
  const MethodInfo *v99; // x2
  TargetDetector_o *DetectorByTrendKey; // x0
  const MethodInfo *v101; // x1
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v102; // x19
  const MethodInfo *v103; // x3
  WarBoardAiTargetCacher_o *v104; // x19
  const MethodInfo *v105; // x1
  int64_t v106; // x0
  const MethodInfo *v107; // x4
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicIndividualityPutSqareIndex; // x19
  int64_t v109; // x22
  const MethodInfo *v110; // x1
  int64_t v111; // x25
  WarBoardAIRoute_TargetData_o *v112; // x23
  __int64 v113; // x0
  __int64 v114; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  const MethodInfo *v116; // x1
  int32_t squareIndex; // w19
  unsigned int v118; // w24
  WarBoardAIRoute___c__DisplayClass45_0_o *v119; // x21
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *dicSquareIndexKeyItemData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v122; // x22
  WarBoardEvalValueSquare_EvalValueSquare_o *v123; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v124; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x22
  WarBoardAIRoute_o *v126; // x0
  const MethodInfo *v127; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicSquarePutSqareIndex; // x19
  int64_t v129; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v131; // x22
  WarBoardSquareData_o *v132; // x21
  int64_t v133; // x22
  WarBoardAIRoute_TargetData_o *v134; // x19
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v135; // x21
  const MethodInfo *v136; // x1
  int64_t v137; // x0
  __int64 v138; // x8
  unsigned __int64 v139; // x10
  int *v140; // x11
  __int64 v141; // x0
  __int64 v142; // x8
  unsigned __int64 v143; // x10
  int *v144; // x11
  __int64 v145; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v146; // x0
  __int64 v147; // x1
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x20
  int v149; // w19
  __int64 v150; // x8
  unsigned __int64 v151; // x10
  int *v152; // x11
  __int64 v153; // x21
  __int64 v154; // x0
  WarBoardAiTargetCacher_o *v155; // x20
  WarBoardAIRoute___c_c *v156; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__45_0; // x19
  Il2CppObject *v159; // x21
  struct WarBoardAIRoute___c_StaticFields *v160; // x0
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v167; // x0
  const MethodInfo *v168; // x2
  WarBoardAIRoute_AdvantagePieceData_o *v169; // x20
  struct WarBoardPieceData_array *v170; // x22
  int v171; // w8
  int32_t v172; // w21
  unsigned int v173; // w23
  __int64 v174; // x8
  __int64 v175; // x24
  int32_t ClassId; // w19
  float Magnification; // s9
  float v178; // s10
  float v179; // s8
  bool v180; // cc
  float v181; // s9
  char v182; // w19
  int v183; // w8
  const MethodInfo *v184; // x1
  __int64 v185; // x0
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+8h] [xbp-118h]
  struct WarBoardPieceData_array *v187; // [xsp+10h] [xbp-110h]
  void **p_aiRouteMasterData; // [xsp+20h] [xbp-100h]
  int v189; // [xsp+2Ch] [xbp-F4h]
  int v190; // [xsp+30h] [xbp-F0h]
  signed int v191; // [xsp+34h] [xbp-ECh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-E8h]
  __int64 v193; // [xsp+40h] [xbp-E0h]
  unsigned int v194; // [xsp+54h] [xbp-CCh]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v196; // [xsp+60h] [xbp-C0h]
  WarBoardAIRoute_o *v197; // [xsp+68h] [xbp-B8h]
  WarBoardAIRoute_DesignationItemData_o *v198; // [xsp+78h] [xbp-A8h]
  WarBoardAIRoute_PutSquareTarget_o *v199; // [xsp+88h] [xbp-98h]
  _DWORD v200[1]; // [xsp+90h] [xbp-90h]
  int v201; // [xsp+94h] [xbp-8Ch]
  bool notSquareTarget; // [xsp+98h] [xbp-88h] BYREF
  int32_t condType; // [xsp+9Ch] [xbp-84h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_4388FE5 & 1) == 0 )
  {
    sub_B775C4(&WarBoardAIRoute_AIRouteMasterData_TypeInfo);
    sub_B775C4(&WarBoardAIRoute_AdvantagePieceData_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&WarBoardAIRoute_DesignationItemData_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__uint__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
    sub_B775C4(&Method_System_Func_WarBoardItemData__bool___ctor__);
    sub_B775C4(&Method_System_Func_WarBoardSquareData__bool___ctor__);
    sub_B775C4(&Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
    sub_B775C4(&Method_System_Func_IWarBoardObjectData__bool___ctor__);
    sub_B775C4(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_B775C4(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_B775C4(&System_Func_WarBoardItemData__bool__TypeInfo);
    sub_B775C4(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
    sub_B775C4(&WarBoardAIRoute_PutSquareTarget_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&SvtClassAttri_TypeInfo);
    sub_B775C4(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_B775C4(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__);
    sub_B775C4(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
    sub_B775C4(&WarBoardAIRoute___c_TypeInfo);
    sub_B775C4(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__);
    byte_4388FE5 = 1;
  }
  value = 0LL;
  condType = 0;
  notSquareTarget = 0;
  v201 = 0;
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_206;
  v5 = *(_QWORD **)&Instance[5].fields.count;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v5 )
    goto LABEL_206;
  v197 = this;
  v9 = v5[6];
  if ( !v9 )
    goto LABEL_206;
  v10 = *(_DWORD *)(v9 + 24);
  if ( v10 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v10 )
        goto LABEL_207;
      if ( !v8 )
        goto LABEL_206;
      v14 = *(_QWORD *)(v9 + 8LL * (int)v11 + 32);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v8,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      if ( !v14 )
        goto LABEL_206;
      if ( !*(_BYTE *)(v14 + 60) )
      {
        v12 = *(_DWORD *)(v14 + 20);
        forceId = v197->fields.forceId;
        if ( v12 != forceId )
          goto LABEL_12;
        if ( *(_DWORD *)(v14 + 24) == v197->fields.groupId )
          break;
      }
LABEL_20:
      v10 = *(_DWORD *)(v9 + 24);
      if ( (int)++v11 >= v10 )
        goto LABEL_21;
    }
    if ( !v6 )
      goto LABEL_206;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v6,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    v12 = *(_DWORD *)(v14 + 20);
    forceId = v197->fields.forceId;
LABEL_12:
    if ( v12 != forceId )
    {
      if ( !v7 )
        goto LABEL_206;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                            (WarBoardPieceData_o *)v14,
                                                                            0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        v197->fields.enemyMasterSquareIndex = *(_DWORD *)(v14 + 64);
    }
    goto LABEL_20;
  }
LABEL_21:
  if ( !v6 )
    goto LABEL_206;
  v15 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                 (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v16 = v197;
  v197->fields.allAllyPiece = (struct WarBoardPieceData_array *)v15;
  sub_B77560((BattleServantConfConponent_o *)&v197->fields.allAllyPiece, v15, v17, v18, v19, v20, v21, v22);
  if ( !v7 )
    goto LABEL_206;
  v23 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                 (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v197->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v23;
  sub_B77560((BattleServantConfConponent_o *)&v197->fields.allEnemyPiece, v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_Int32_array **)v5[7];
  v197->fields.allSquare = (struct WarBoardSquareData_array *)v30;
  sub_B77560((BattleServantConfConponent_o *)&v197->fields.allSquare, v30, v31, v32, v33, v34, v35, v36);
  v37 = (System_Int32_array **)v5[9];
  v197->fields.allItemData = (struct WarBoardItemData_array *)v37;
  sub_B77560((BattleServantConfConponent_o *)&v197->fields.allItemData, v37, v38, v39, v40, v41, v42, v43);
  v44 = (System_Int32_array **)v5[10];
  v197->fields.allTreasureData = (struct WarBoardTreasureData_array *)v44;
  sub_B77560((BattleServantConfConponent_o *)&v197->fields.allTreasureData, v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Int32_array **)v5[11];
  v197->fields.allWallData = (struct WarBoardWallData_array *)v51;
  sub_B77560((BattleServantConfConponent_o *)&v197->fields.allWallData, v51, v52, v53, v54, v55, v56, v57);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v197->fields.dictionaryCreateRouteDataEvalValue;
  p_allEnemyPiece = &v197->fields.allEnemyPiece;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_object__float___Clear(
    Instance,
    (const MethodInfo_2F89298 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v197->fields.dicUniqueKeyDesignationItem;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
    (const MethodInfo_2FC6870 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v197->fields.dicUniqueKeyTarget;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
    (const MethodInfo_2FC6870 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v197->fields.dicUniqueKeyAdvantagePieceData;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
    (const MethodInfo_2FC6870 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_206;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v58,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v58 )
    goto LABEL_206;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v58,
    (System_Collections_Generic_IEnumerable_T__o *)v197->fields.allItemData,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v58,
    (System_Collections_Generic_IEnumerable_T__o *)v197->fields.allTreasureData,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v58,
    (System_Collections_Generic_IEnumerable_T__o *)v197->fields.allWallData,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v58,
    (System_Collections_Generic_IEnumerable_T__o *)v8,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  v59 = v197->fields.forceId;
  groupId = v197->fields.groupId;
  v61 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_B77694(WarBoardAIRoute_AIRouteMasterData_TypeInfo);
  WarBoardAIRoute_AIRouteMasterData___ctor(v61, v59, groupId, 0LL);
  v197->fields.aiRouteMasterData = v61;
  p_aiRouteMasterData = (void **)&v197->fields.aiRouteMasterData;
  sub_B77560(
    (BattleServantConfConponent_o *)&v197->fields.aiRouteMasterData,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_B77694(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v68,
    (const MethodInfo_2FFADDC *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  p_placePieceData = (void **)&v197->fields.placePieceData;
  v197->fields.placePieceData = v68;
  sub_B77560(
    (BattleServantConfConponent_o *)&v197->fields.placePieceData,
    (System_Int32_array **)v68,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  allAllyPiece = v197->fields.allAllyPiece;
  if ( !allAllyPiece )
    goto LABEL_206;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v78 = 0;
    v189 = 0;
    v196 = v58;
    v187 = v197->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v78 >= (unsigned int)max_length )
        goto LABEL_207;
      v81 = allAllyPiece->m_Items[v78];
      if ( !v81 )
        goto LABEL_206;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      v191 = v78;
      if ( !*p_placePieceData )
        goto LABEL_206;
      pieceData = allAllyPiece->m_Items[v78];
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
                                                                            v81->fields._nowSquareIndex_k__BackingField,
                                                                            (const MethodInfo_2FFBBE4 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_203;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_206;
      System_Collections_Generic_Dictionary_int__uint___Add(
        (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
        pieceData->fields._nowSquareIndex_k__BackingField,
        pieceData->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_2FFB980 *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
      forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
      v83 = v16->fields.forceId;
      if ( forceId_k__BackingField != v83 )
        goto LABEL_64;
      if ( pieceData->fields._groupId_k__BackingField == v16->fields.groupId )
        break;
LABEL_65:
      if ( pieceData->fields._groupId_k__BackingField != v16->fields.groupId )
        goto LABEL_69;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_206;
      v84 = 2;
LABEL_68:
      WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        (WarBoardAIRoute_AIRouteMasterData_o *)Instance,
        v84,
        pieceData,
        0LL);
LABEL_69:
      v198 = (WarBoardAIRoute_DesignationItemData_o *)sub_B77694(WarBoardAIRoute_DesignationItemData_TypeInfo);
      WarBoardAIRoute_DesignationItemData___ctor(v198, 0LL);
      v199 = (WarBoardAIRoute_PutSquareTarget_o *)sub_B77694(WarBoardAIRoute_PutSquareTarget_TypeInfo);
      WarBoardAIRoute_PutSquareTarget___ctor(v199, 0LL);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v16->fields.piecePersonalityDic;
      if ( !Instance )
        goto LABEL_206;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
                                                                            pieceData->fields._index_k__BackingField,
                                                                            &value,
                                                                            (const MethodInfo_2FF5E9C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
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
        v86 = Instance;
        if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
        {
          v87 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
          {
            ++v87;
            p_offset += 4;
            if ( v87 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
              goto LABEL_77;
          }
          v89 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_77:
          v89 = sub_B0F4C0(
                  Instance,
                  System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                  0LL);
        }
        v193 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v89)(
                 v86,
                 *(_QWORD *)(v89 + 8));
        if ( !v193 )
          sub_B7769C(0LL, v90);
        while ( 1 )
        {
LABEL_122:
          v138 = *(_QWORD *)v193;
          if ( *(_WORD *)(*(_QWORD *)v193 + 298LL) )
          {
            v139 = 0LL;
            v140 = (int *)(*(_QWORD *)(v138 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v140 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v139;
              v140 += 4;
              if ( v139 >= *(unsigned __int16 *)(*(_QWORD *)v193 + 298LL) )
                goto LABEL_126;
            }
            v141 = v138 + 16LL * *v140 + 312;
          }
          else
          {
LABEL_126:
            v141 = sub_B0F4C0(v193, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v141)(v193, *(_QWORD *)(v141 + 8)) & 1) == 0 )
            break;
          v142 = *(_QWORD *)v193;
          if ( *(_WORD *)(*(_QWORD *)v193 + 298LL) )
          {
            v143 = 0LL;
            v144 = (int *)(*(_QWORD *)(v142 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__c **)v144 - 1) != System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
            {
              ++v143;
              v144 += 4;
              if ( v143 >= *(unsigned __int16 *)(*(_QWORD *)v193 + 298LL) )
                goto LABEL_133;
            }
            v145 = v142 + 16LL * *v144 + 312;
          }
          else
          {
LABEL_133:
            v145 = sub_B0F4C0(
                     v193,
                     System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                     0LL);
          }
          v146 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v145)(
                                                        v193,
                                                        *(_QWORD *)(v145 + 8));
          if ( !v146 )
            sub_B7769C(0LL, v147);
          Entity_k__BackingField = v146->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v146, 0LL);
          if ( !ConditionEntityArray )
            sub_B7769C(0LL, v116);
          v91 = ConditionEntityArray->max_length;
          if ( v91 >= 1 )
          {
            v92 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v92 >= v91 )
              {
                v80 = sub_B776C8(ConditionEntityArray);
                sub_B77668(v80, 0LL);
              }
              v93 = ConditionEntityArray->m_Items[v92];
              if ( !v93 )
                sub_B7769C(ConditionEntityArray, v116);
              conditionTypes = v93->fields.conditionTypes;
              v194 = v92;
              if ( !conditionTypes )
                sub_B7769C(ConditionEntityArray, v116);
              v95 = *(_QWORD *)&conditionTypes->max_length;
              if ( (int)v95 >= 1 )
                break;
LABEL_121:
              ConditionEntityArray = condEntityArray;
              v91 = condEntityArray->max_length;
              v92 = v194 + 1;
              if ( (int)(v194 + 1) >= v91 )
                goto LABEL_122;
            }
            v96 = 0LL;
            while ( 2 )
            {
              if ( v96 >= (unsigned int)v95 )
              {
                v79 = sub_B776C8(ConditionEntityArray);
                sub_B77668(v79, 0LL);
              }
              v118 = conditionTypes->m_Items[v96 + 1];
              v119 = (WarBoardAIRoute___c__DisplayClass45_0_o *)sub_B77694(WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
              WarBoardAIRoute___c__DisplayClass45_0___ctor(v119, 0LL);
              if ( !v119 )
                sub_B7769C(ConditionEntityArray, v116);
              v119->fields.squareIndex = -1;
              if ( v118 <= 0x2A && ((1LL << v118) & 0x70001800000LL) != 0 )
              {
                v116 = (const MethodInfo *)(unsigned int)v93->fields.value;
                v119->fields.squareIndex = (int)v116;
                if ( (_DWORD)v116 != -1 )
                {
                  if ( !v198 )
                    sub_B7769C(ConditionEntityArray, v116);
                  dicSquareIndexKeyItemData = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v198->fields.dicSquareIndexKeyItemData;
                  if ( !dicSquareIndexKeyItemData )
                    sub_B7769C(0LL, v116);
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                                                       dicSquareIndexKeyItemData,
                                                                                       (int32_t)v116,
                                                                                       (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)v197->fields.allItemData;
                    v122 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardItemData__bool__TypeInfo);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      v122,
                      (Il2CppObject *)v119,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                      (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardItemData__bool___ctor__);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                                         allItemData,
                                                                                         (System_Func_TSource__bool__o *)v122,
                                                                                         (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                    v123 = (WarBoardEvalValueSquare_EvalValueSquare_o *)ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v124 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v198->fields.dicSquareIndexKeyItemData;
                      if ( !v124 )
                        sub_B7769C(0LL, v116);
                      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                        v124,
                        v119->fields.squareIndex,
                        v123,
                        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                    }
                  }
                }
              }
              v119->fields.squareIndex = -1;
              if ( v118 == 74 || v118 == 75 )
              {
                squareIndex = v93->fields.value;
                v119->fields.squareIndex = squareIndex;
                goto LABEL_110;
              }
              if ( v118 - 127 <= 1 )
              {
                if ( !Entity_k__BackingField )
                  sub_B7769C(ConditionEntityArray, v116);
                aiTargetCacher = v16->fields.aiTargetCacher;
                TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v116);
                if ( !aiTargetCacher )
                  sub_B7769C(TrendKey, TrendKey);
                DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(aiTargetCacher, TrendKey, v99);
                if ( !DetectorByTrendKey )
                {
                  v102 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B77694(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
                  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
                    v102,
                    0LL,
                    Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                    (const MethodInfo_29E4E2C *)Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
                  WarBoardActionTrendConditionMaster__HasMatchCondition(condEntityArray, v102, &condType, v103);
                  v104 = v16->fields.aiTargetCacher;
                  v106 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v105);
                  if ( !v104 )
                    sub_B7769C(v106, v106);
                  WarBoardAiTargetCacher__Register(v104, v106, v93, condType, v107);
                }
                if ( !v199 )
                  sub_B7769C(DetectorByTrendKey, v101);
                dicIndividualityPutSqareIndex = v199->fields.dicIndividualityPutSqareIndex;
                v109 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v101);
                v111 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v110);
                v112 = (WarBoardAIRoute_TargetData_o *)sub_B77694(WarBoardAIRoute_TargetData_TypeInfo);
                WarBoardAIRoute_TargetData___ctor(v112, v111, v118, 0LL);
                if ( !dicIndividualityPutSqareIndex )
                  sub_B7769C(v113, v114);
                System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
                  dicIndividualityPutSqareIndex,
                  v109,
                  v112,
                  (const MethodInfo_2FCDF38 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                squareIndex = v119->fields.squareIndex;
                v58 = v196;
                v16 = v197;
LABEL_110:
                if ( squareIndex != -1 )
                {
                  if ( !v199 )
                    sub_B7769C(ConditionEntityArray, v116);
                  if ( !Entity_k__BackingField )
                    sub_B7769C(ConditionEntityArray, v116);
                  dicObjectPutSquareIndex = v199->fields.dicObjectPutSquareIndex;
                  v126 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v116);
                  WarBoardAIRoute__RegisterTargetObjectToDic(
                    v126,
                    dicObjectPutSquareIndex,
                    (System_Collections_Generic_List_IWarBoardObjectData__o *)v58,
                    squareIndex,
                    (int64_t)v126,
                    v118,
                    &notSquareTarget,
                    v127);
                  if ( !notSquareTarget )
                  {
                    dicSquarePutSqareIndex = v199->fields.dicSquarePutSqareIndex;
                    v129 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v116);
                    if ( !dicSquarePutSqareIndex )
                      sub_B7769C(v129, v129);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ContainsKey(
                                                                                         dicSquarePutSqareIndex,
                                                                                         v129,
                                                                                         (const MethodInfo_2FCE1D4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                    if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                    {
                      allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)v197->fields.allSquare;
                      v131 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardSquareData__bool__TypeInfo);
                      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                        v131,
                        (Il2CppObject *)v119,
                        Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                        (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardSquareData__bool___ctor__);
                      ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                                           allSquare,
                                                                                           (System_Func_TSource__bool__o *)v131,
                                                                                           (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                      v132 = (WarBoardSquareData_o *)ConditionEntityArray;
                      if ( ConditionEntityArray )
                      {
                        v133 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v116);
                        v134 = (WarBoardAIRoute_TargetData_o *)sub_B77694(WarBoardAIRoute_TargetData_TypeInfo);
                        WarBoardAIRoute_TargetData___ctor_21244860(v134, v132, v133, v118, 0LL);
                        v135 = v199->fields.dicSquarePutSqareIndex;
                        v137 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v136);
                        if ( !v135 )
                          sub_B7769C(v137, v137);
                        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
                          v135,
                          v137,
                          v134,
                          (const MethodInfo_2FCDF60 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                      }
                    }
                  }
                }
              }
              LODWORD(v95) = conditionTypes->max_length;
              if ( (__int64)++v96 >= (int)v95 )
                goto LABEL_121;
              continue;
            }
          }
        }
        allAllyPiece = v187;
        v200[v189] = 1269;
        v149 = ++v201;
        v150 = *(_QWORD *)v193;
        if ( *(_WORD *)(*(_QWORD *)v193 + 298LL) )
        {
          v151 = 0LL;
          v152 = (int *)(*(_QWORD *)(v150 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v152 - 1) != System_IDisposable_TypeInfo )
          {
            ++v151;
            v152 += 4;
            if ( v151 >= *(unsigned __int16 *)(*(_QWORD *)v193 + 298LL) )
              goto LABEL_142;
          }
          v153 = v193;
          v154 = v150 + 16LL * *v152 + 312;
        }
        else
        {
LABEL_142:
          v153 = v193;
          v154 = sub_B0F4C0(v193, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v154)(v153, *(_QWORD *)(v154 + 8));
        if ( v149 )
        {
          v190 = v149;
          if ( v200[v149 - 1] == 1269 )
          {
            v201 = v149 - 1;
            v190 = v149 - 1;
          }
        }
        else
        {
          v190 = 0;
        }
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v16->fields.aiTargetCacher;
        if ( !Instance )
          goto LABEL_206;
        WarBoardAiTargetCacher__ClearTargetObject((WarBoardAiTargetCacher_o *)Instance, v4);
        v155 = v16->fields.aiTargetCacher;
        v156 = WarBoardAIRoute___c_TypeInfo;
        if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v156 = WarBoardAIRoute___c_TypeInfo;
        }
        static_fields = v156->static_fields;
        _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( (BYTE3(v156->vtable._0_Equals.methodPtr) & 4) != 0 && !v156->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v156);
            static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          }
          v159 = (Il2CppObject *)static_fields->__9;
          _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__45_0,
            v159,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            (const MethodInfo_29E92C4 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
          v160 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v160->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_B77560(
            (BattleServantConfConponent_o *)&v160->__9__45_0,
            (System_Int32_array **)_9__45_0,
            v161,
            v162,
            v163,
            v164,
            v165,
            v166);
        }
        v167 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v58,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                              v167,
                                                                              (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v155 )
          goto LABEL_206;
        WarBoardAiTargetCacher__AggregateTargetObject(v155, (IWarBoardObjectData_array *)Instance, v168);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v16->fields.dicUniqueKeyDesignationItem;
        if ( !Instance )
          goto LABEL_206;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (WarBoardAIRoute_PutSquareTarget_o *)v198,
          (const MethodInfo_2FC6694 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v16->fields.dicUniqueKeyTarget;
        if ( !Instance )
          goto LABEL_206;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          v199,
          (const MethodInfo_2FC6694 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isServant(
                                                                              pieceData,
                                                                              0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v169 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_B77694(WarBoardAIRoute_AdvantagePieceData_TypeInfo);
          WarBoardAIRoute_AdvantagePieceData___ctor(v169, 0LL);
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pieceData->fields._battleServant_k__BackingField;
          if ( !Instance )
            goto LABEL_206;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleServantData__getClassId(
                                                                                (BattleServantData_o *)Instance,
                                                                                0LL);
          v170 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_206;
          v171 = v170->max_length;
          if ( v171 >= 1 )
          {
            v172 = (int)Instance;
            v173 = 0;
            while ( v173 < v171 )
            {
              v174 = (__int64)v170 + 8 * (int)v173;
              v175 = *(_QWORD *)(v174 + 32);
              if ( !v175 )
                goto LABEL_206;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                    *(WarBoardPieceData_o **)(v174 + 32),
                                                                                    0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                Instance = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(v175 + 128);
                if ( !Instance )
                  goto LABEL_206;
                ClassId = BattleServantData__getClassId((BattleServantData_o *)Instance, 0LL);
                if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SvtClassAttri_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                }
                Magnification = SvtClassAttri__getMagnification(v172, ClassId, 0LL);
                v178 = SvtClassAttri__getMagnification(ClassId, v172, 0LL);
                v179 = SvtClassAttri__getMagnification(v172, ClassId, 0LL);
                v180 = Magnification <= 1.0;
                v181 = SvtClassAttri__getMagnification(ClassId, v172, 0LL);
                if ( v180 )
                {
                  v182 = 0;
                }
                else
                {
                  if ( !v169 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v169->fields.dicAttackAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v175 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v175,
                    (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v182 = 1;
                  v169->fields.flagNow |= 0x4000uLL;
                }
                if ( v178 < 1.0 )
                {
                  if ( !v169 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v169->fields.dicDefenseAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v175 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v175,
                    (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v169->fields.flagNow |= 0x10000uLL;
                }
                if ( v179 < 1.0 )
                {
                  if ( !v169 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v169->fields.dicAttackDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v175 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v175,
                    (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v169->fields.flagNow |= 0x8000uLL;
                }
                if ( v181 > 1.0 )
                {
                  if ( !v169 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v169->fields.dicDefenseDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v175 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v175,
                    (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v169->fields.flagNow |= 0x20000uLL;
                }
                if ( ((unsigned __int8)v182 & (v178 < 1.0)) != 0 )
                {
                  if ( !v169 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v169->fields.dicClassAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v175 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v175,
                    (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v169->fields.flagNow |= 0x1000uLL;
                }
                if ( v179 < 1.0 && v181 > 1.0 )
                {
                  if ( !v169 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v169->fields.dicClassDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v175 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v175,
                    (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v169->fields.flagNow |= 0x2000uLL;
                }
              }
              v171 = v170->max_length;
              if ( (int)++v173 >= v171 )
                goto LABEL_199;
            }
LABEL_207:
            v185 = sub_B776C8(Instance);
            sub_B77668(v185, 0LL);
          }
LABEL_199:
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v16->fields.dicUniqueKeyAdvantagePieceData;
          if ( !Instance )
            goto LABEL_206;
          System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
            (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
            pieceData->fields._uniqueIndex_k__BackingField,
            (WarBoardAIRoute_PutSquareTarget_o *)v169,
            (const MethodInfo_2FC6694 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          v183 = v190;
          v58 = v196;
        }
        else
        {
          v183 = v190;
        }
        v189 = v183;
        p_placePieceData = (void **)&v197->fields.placePieceData;
      }
LABEL_203:
      max_length = allAllyPiece->max_length;
      v78 = v191 + 1;
      if ( v191 + 1 >= max_length )
        goto LABEL_204;
    }
    if ( WarBoardPieceData__get_isMaster(pieceData, 0LL) )
    {
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_206;
      v84 = 0;
      goto LABEL_68;
    }
    forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
    v83 = v16->fields.forceId;
LABEL_64:
    if ( forceId_k__BackingField != v83 )
      goto LABEL_69;
    goto LABEL_65;
  }
LABEL_204:
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
  if ( !*p_aiRouteMasterData )
LABEL_206:
    sub_B7769C(Instance, v4);
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData((WarBoardAIRoute_AIRouteMasterData_o *)Instance, 1, 0LL, 0LL);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(v16, v184);
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
  const MethodInfo *v6; // x1
  WarBoardItemData_o *Item; // x0

  if ( (byte_4388FEF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    this = (WarBoardAIRoute_o *)sub_B775C4(&WarBoardAIManager_TypeInfo);
    byte_4388FEF = 1;
  }
  if ( !alreadyGetItemList )
    sub_B7769C(this, *(_QWORD *)&targetSquare);
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 0;
  }
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  Item = WarBoardAIManager__GetItem(targetSquare, v6);
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
    sub_B7769C(this, routeData);
  v19->fields.isMoveByServantAndDefenseDisAdvantageServantRange = (int)this;
}


void __fastcall WarBoardAIRoute__Clear(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x0

  if ( (byte_4388FE1 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__);
    byte_4388FE1 = 1;
  }
  allRouteList = this->fields.allRouteList;
  if ( !allRouteList )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)allRouteList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__);
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
  int32_t v7; // w19
  int32_t key; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  int32_t v10; // w0
  int32_t v11; // w20
  int v12; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-68h] BYREF

  v6 = dicPieceList;
  if ( (byte_4388FEE & 1) == 0 )
  {
    sub_B775C4(&AStarSearch_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_int___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    dicPieceList = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    byte_4388FEE = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !v6 )
    sub_B7769C(dicPieceList, *(_QWORD *)&baseRange);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v14,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v6,
    (const MethodInfo_2FF475C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v7 = 3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v14,
            (const MethodInfo_28883E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
    {
      v11 = 0;
      v12 = 1;
      goto LABEL_14;
    }
    key = (int32_t)v14.fields.current.fields.key;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                0LL,
                                                                actionIndex,
                                                                key,
                                                                0,
                                                                0LL,
                                                                0LL);
    v10 = System_Linq_Enumerable__Count_int_(v9, (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v10 < baseRange )
      break;
    if ( v10 == baseRange )
      v7 = 2;
  }
  v11 = 1;
  v12 = 3;
LABEL_14:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v14,
    (const MethodInfo_2888550 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  if ( (unsigned int)(v12 + 1) >> 2 )
    return v11;
  return v7;
}


void __fastcall WarBoardAIRoute__CreateOutOfWarningAreaToDistance(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v2; // x21
  struct System_Collections_Generic_Dictionary_int__int__o **p_dicOutOfWarningAreaRange; // x23
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Dictionary_int__int__o *IsFlag; // x0
  __int64 v11; // x1
  struct WarBoardSquareData_array *allSquare; // x25
  int max_length; // w8
  int v14; // w26
  Il2CppClass **v15; // x8
  Il2CppClass *v16; // x21
  struct WarBoardSquareData_array *v17; // x20
  int v18; // w8
  unsigned int v19; // w27
  int v20; // w22
  Il2CppClass **v21; // x8
  Il2CppClass *v22; // x23
  int32_t name; // w24
  int32_t v24; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  int32_t v27; // w1
  const MethodInfo_2FE8D70 *v28; // x3
  int32_t v29; // w2
  __int64 v30; // x0
  struct System_Collections_Generic_Dictionary_int__int__o **v31; // [xsp+0h] [xbp-60h]

  if ( (byte_4388FFA & 1) == 0 )
  {
    sub_B775C4(&AStarSearch_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_int___);
    byte_4388FFA = 1;
  }
  v2 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v2,
    (const MethodInfo_2FE81CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v2;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dicOutOfWarningAreaRange,
    (System_Int32_array **)v2,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  allSquare = this->fields.allSquare;
  if ( !allSquare )
LABEL_33:
    sub_B7769C(IsFlag, v11);
  max_length = allSquare->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v31 = &this->fields.dicOutOfWarningAreaRange;
    do
    {
      if ( v14 >= (unsigned int)max_length )
        goto LABEL_34;
      v15 = &allSquare->obj.klass + v14;
      v16 = v15[4];
      if ( !v16 )
        goto LABEL_33;
      IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                      (WarBoardSquareData_o *)v15[4],
                                                                      1,
                                                                      0LL);
      if ( ((unsigned __int8)IsFlag & 1) != 0 )
      {
        v17 = this->fields.allSquare;
        if ( !v17 )
          goto LABEL_33;
        v18 = v17->max_length;
        if ( v18 >= 1 )
        {
          v19 = 0;
          v20 = -1;
          while ( v19 < v18 )
          {
            v21 = &v17->obj.klass + (int)v19;
            v22 = v21[4];
            if ( !v22 )
              goto LABEL_33;
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                            (WarBoardSquareData_o *)v21[4],
                                                                            1,
                                                                            0LL);
            if ( ((unsigned __int8)IsFlag & 1) != 0 )
              goto LABEL_37;
            name = (int32_t)v16->_1.name;
            v24 = (int32_t)v22->_1.name;
            if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AStarSearch_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
            }
            v25 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                         0LL,
                                                                         name,
                                                                         v24,
                                                                         0,
                                                                         0LL,
                                                                         0LL);
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__Count_int_(
                                                                            v25,
                                                                            (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
            if ( v20 > (int)IsFlag - 1 || v20 == -1 )
              v20 = (_DWORD)IsFlag - 1;
            if ( v20 >= 2 )
            {
LABEL_37:
              v18 = v17->max_length;
              if ( (int)++v19 < v18 )
                continue;
            }
            goto LABEL_29;
          }
LABEL_34:
          v30 = sub_B776C8(IsFlag);
          sub_B77668(v30, 0LL);
        }
        v20 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        IsFlag = *v31;
        if ( !*v31 )
          goto LABEL_33;
        v27 = (int32_t)v16->_1.name;
        v29 = v20;
        v28 = (const MethodInfo_2FE8D70 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
      }
      else
      {
        IsFlag = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v27 = (int32_t)v16->_1.name;
        v28 = (const MethodInfo_2FE8D70 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v29 = 0;
      }
      System_Collections_Generic_Dictionary_int__int___Add(IsFlag, v27, v29, v28);
      max_length = allSquare->max_length;
      ++v14;
    }
    while ( v14 < max_length );
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

  if ( (byte_4388FE7 & 1) == 0 )
  {
    sub_B775C4(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
    byte_4388FE7 = 1;
  }
  v9 = sub_B77694(WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
  WarBoardAIRoute__CreateRouteData_d__47___ctor((WarBoardAIRoute__CreateRouteData_d__47_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_B7769C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_B77560(
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
  sub_B77560(
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
  const MethodInfo *v7; // x1
  uint32_t v8; // w19
  uint32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4388FFF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    this = (WarBoardAIRoute_o *)sub_B775C4(&WarBoardAIManager_TypeInfo);
    byte_4388FFF = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_B7769C(this, basePiece);
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_2FFD590 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
  {
    v8 = value;
    if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    }
    return WarBoardAIManager__GetPieceUnique(v8, v7);
  }
  else
  {
    if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    }
    return WarBoardAIManager__GetEnemyPieceSquareIndex(actionSquareIndex, v7);
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
  _BOOL8 HasFlag_21240276; // x0
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
  if ( (byte_4388FFD & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__);
    byte_4388FFD = 1;
  }
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v6->fields.dicUniqueKeyAdvantagePieceData) == 0LL
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                                      (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)this,
                                      basePiece->fields._uniqueIndex_k__BackingField,
                                      (const MethodInfo_2FC65D0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0LL )
  {
    sub_B7769C(this, basePiece);
  }
  v7 = (WarBoardAIRoute_AdvantagePieceData_o *)this;
  HasFlag_21240276 = WarBoardAIRoute_RouteData__HasFlag_21240276(
                       *(_QWORD *)&this->fields.TEMP_SEARCH_DEPTH,
                       4096LL,
                       0LL);
  if ( HasFlag_21240276 )
    v7->fields.baseCARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)HasFlag_21240276,
                               v7->fields.dicClassAdvantageServant,
                               baseSquareIndex,
                               v9);
  v10 = WarBoardAIRoute_RouteData__HasFlag_21240276(v7->fields.flagNow, 0x2000LL, 0LL);
  if ( v10 )
    v7->fields.baseCDARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v10,
                                v7->fields.dicClassDisAdvantageServant,
                                baseSquareIndex,
                                v11);
  v12 = WarBoardAIRoute_RouteData__HasFlag_21240276(v7->fields.flagNow, 0x4000LL, 0LL);
  if ( v12 )
    v7->fields.baseAARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v12,
                               v7->fields.dicAttackAdvantageServant,
                               baseSquareIndex,
                               v13);
  v14 = WarBoardAIRoute_RouteData__HasFlag_21240276(v7->fields.flagNow, 0x8000LL, 0LL);
  if ( v14 )
    v7->fields.baseADARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v14,
                                v7->fields.dicAttackDisAdvantageServant,
                                baseSquareIndex,
                                v15);
  v16 = WarBoardAIRoute_RouteData__HasFlag_21240276(v7->fields.flagNow, 0x10000LL, 0LL);
  if ( v16 )
    v7->fields.baseDARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v16,
                               v7->fields.dicDefenseAdvantageServant,
                               baseSquareIndex,
                               v17);
  v18 = WarBoardAIRoute_RouteData__HasFlag_21240276(v7->fields.flagNow, 0x20000LL, 0LL);
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
  System_Collections_Generic_Dictionary_uint__int__o *v10; // x22
  __int64 isMaster; // x0
  __int64 v12; // x1
  struct WarBoardPieceData_array *allEnemyPiece; // x25
  int max_length; // w8
  unsigned int v15; // w26
  WarBoardPieceData_o *v16; // x23
  int32_t nowSquareIndex_k__BackingField; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  int32_t v19; // w24
  __int64 v21; // x0

  if ( (byte_4388FF9 & 1) == 0 )
  {
    sub_B775C4(&AStarSearch_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_int___);
    byte_4388FF9 = 1;
  }
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v10 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B77694(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v10,
    (const MethodInfo_2FC1F30 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  allEnemyPiece = this->fields.allEnemyPiece;
  if ( !allEnemyPiece )
    goto LABEL_21;
  max_length = allEnemyPiece->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v21 = sub_B776C8(isMaster);
        sub_B77668(v21, 0LL);
      }
      v16 = allEnemyPiece->m_Items[v15];
      if ( !v16 )
        break;
      nowSquareIndex_k__BackingField = v16->fields._nowSquareIndex_k__BackingField;
      if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AStarSearch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      }
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   nowSquareIndex_k__BackingField,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      isMaster = System_Linq_Enumerable__Count_int_(
                   v18,
                   (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v10 )
        break;
      v19 = isMaster;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v10,
        v16->fields._uniqueIndex_k__BackingField,
        isMaster,
        (const MethodInfo_2FC2AD4 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
      if ( *servantAndEnemyRange == -1 || v19 < *servantAndEnemyRange )
        *servantAndEnemyRange = v19;
      isMaster = WarBoardPieceData__get_isMaster(v16, 0LL);
      if ( (isMaster & 1) != 0 && (*servantAndEnemyMasterRange == -1 || v19 < *servantAndEnemyMasterRange) )
        *servantAndEnemyMasterRange = v19;
      max_length = allEnemyPiece->max_length;
      if ( (int)++v15 >= max_length )
        return v10;
    }
LABEL_21:
    sub_B7769C(isMaster, v12);
  }
  return v10;
}


System_Int32_array *__fastcall WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t masterSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute___c__DisplayClass51_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w20
  System_Collections_Generic_IEnumerable_TSource__o *Keys; // x19
  System_Func_int__bool__o *v13; // x20

  if ( (byte_4388FEA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_int___);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__);
    sub_B775C4(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
    byte_4388FEA = 1;
  }
  v7 = (WarBoardAIRoute___c__DisplayClass51_0_o *)sub_B77694(WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass51_0___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.masterSquareIndex = masterSquareIndex, (aiRouteMasterData = this->fields.aiRouteMasterData) == 0LL)
    || !piecePlaceData )
  {
    sub_B7769C(v8, v9);
  }
  masterType = aiRouteMasterData->fields.masterType;
  Keys = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                                piecePlaceData,
                                                                (const MethodInfo_2FFB590 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  if ( masterType != 1 )
  {
    v13 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
    Keys = System_Linq_Enumerable__Where_int_(
             Keys,
             (System_Func_TSource__bool__o *)v13,
             (const MethodInfo_1D41A00 *)Method_System_Linq_Enumerable_Where_int___);
  }
  return System_Linq_Enumerable__ToArray_int_(
           Keys,
           (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
}


DefenseAreaData_o *__fastcall WarBoardAIRoute__GetDefenseAreaData(
        WarBoardAIRoute_o *this,
        int32_t masterSquareIndex,
        System_Int32_array *allyPieces,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  __int64 v8; // x24
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicSquareIndexEnemyPiece; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t defenseArea; // w20
  DefenseAreaData_o *v19; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v20; // x20
  WarBoardAIManager_c *v21; // x0
  char v22; // w10
  bool v23; // w8
  bool IsDetour; // w25
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Int32_array *v26; // x28
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w25
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  BalanceConfig_c *v34; // x0
  System_Func_int__bool__o *klass; // x28
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x8
  int64_t v43; // x21
  BalanceConfig_c *v44; // x0
  BattleServantConfConponent_o *v46; // [xsp+8h] [xbp-C8h]
  bool v48; // [xsp+1Ch] [xbp-B4h]
  char v49; // [xsp+20h] [xbp-B0h]
  bool v50; // [xsp+24h] [xbp-ACh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v51; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v52; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4388FEB & 1) == 0 )
  {
    sub_B775C4(&AStarSearch_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&DefenseAreaData_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_int___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__);
    sub_B775C4(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
    sub_B775C4(&WarBoardAIManager_TypeInfo);
    byte_4388FEB = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v8 = sub_B77694(WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass52_0___ctor((WarBoardAIRoute___c__DisplayClass52_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_55;
  *(_QWORD *)(v8 + 16) = piecePlaceData;
  sub_B77560(
    (BattleServantConfConponent_o *)(v8 + 16),
    (System_Int32_array **)piecePlaceData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  npcData = this->fields.npcData;
  if ( !npcData )
    goto LABEL_55;
  defenseArea = npcData->fields.defenseArea;
  v19 = (DefenseAreaData_o *)sub_B77694(DefenseAreaData_TypeInfo);
  DefenseAreaData___ctor(v19, masterSquareIndex, defenseArea, 0LL);
  v20 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v20,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  if ( !byte_4388F9B )
  {
    sub_B775C4(&WarBoardAIManager_TypeInfo);
    byte_4388F9B = 1;
  }
  v21 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v21 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v21->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_55;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v51,
    dicSquareIndexEnemyPiece,
    (const MethodInfo_2FF475C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v46 = (BattleServantConfConponent_o *)(v8 + 24);
  v52 = v51;
  v22 = 0;
  v23 = 1;
  IsDetour = 1;
LABEL_15:
  v48 = v23;
LABEL_16:
  v49 = v22;
  v50 = IsDetour;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v52,
            (const MethodInfo_28883E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    current = v52.fields.current;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v26 = AStarSearch__RouteSearch(0LL, masterSquareIndex, (int32_t)current.fields.key, 0, 0LL, 0LL);
    v27 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v26,
            (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v20 )
      sub_B7769C(v27, v28);
    v29 = v27;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v20,
      (int32_t)current.fields.key,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v26,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v19 )
      sub_B7769C(v30, v31);
    DefenseAreaData__SetComparisonMasterAndEnemyRange(v19, v29, 0LL);
    if ( DefenseAreaData__IsInDefenseArea(v19, (int32_t)current.fields.key, 0LL) )
    {
      v34 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v34 = BalanceConfig_TypeInfo;
      }
      if ( !v34->static_fields->IsEnableOldBlockShortestRoute )
      {
        if ( !v26 )
          sub_B7769C(v34, v32);
        if ( (int)v26->max_length >= 2 )
          DefenseAreaData__SetComparisonAllMasterAndEnemyRange(v19, v26->m_Items[2], v29, 0LL);
      }
      IsDetour = 0;
      v22 = 1;
      if ( v50 )
      {
        IsDetour = WarBoardAIRoute__IsDetour(v26, allyPieces, v33);
        v23 = 0;
        v22 = 1;
        if ( v48 )
        {
          klass = (System_Func_int__bool__o *)v46->klass;
          if ( !v46->klass )
          {
            klass = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              klass,
              (Il2CppObject *)v8,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
            v46->klass = (BattleServantConfConponent_c *)klass;
            sub_B77560(v46, (System_Int32_array **)klass, v36, v37, v38, v39, v40, v41);
          }
          if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AStarSearch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          }
          v23 = AStarSearch__RouteSearch(
                  (WarBoardPieceData_o *)current.fields.value,
                  (int32_t)current.fields.key,
                  masterSquareIndex,
                  0,
                  klass,
                  0LL) == 0LL;
          v22 = 1;
        }
        goto LABEL_15;
      }
      goto LABEL_16;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v52,
    (const MethodInfo_2888550 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  v42 = 1025LL;
  if ( (v49 & 1) == 0 )
    v42 = 1LL;
  if ( v50 )
    v42 |= 0x2000000000uLL;
  v43 = v48 ? v42 | 0x10000000000LL : v42;
  if ( !v19 )
LABEL_55:
    sub_B7769C(dicSquareIndexEnemyPiece, v10);
  DefenseAreaData__CreateShortestRoutes(v19, (System_Collections_Generic_Dictionary_int__int____o *)v20, 0LL);
  v44 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  if ( !v44->static_fields->IsEnableOldBlockShortestRoute )
    DefenseAreaData__CreateAllShortestRoutes(v19, (System_Collections_Generic_Dictionary_int__int____o *)v20, 0LL);
  DefenseAreaData__SetFlag(v19, v43, 0LL);
  return v19;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall WarBoardAIRoute__GetDesignationItemToDistance(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v7; // x22
  WarBoardAIRoute_PutSquareTarget_o *Item; // x22
  System_Collections_Generic_Dictionary_int__int__o *v9; // x19
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x24
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+30h] [xbp-80h] BYREF

  v7 = this;
  if ( (byte_4388FF8 & 1) == 0 )
  {
    sub_B775C4(&AStarSearch_TypeInfo);
    sub_B775C4(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_int___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__);
    sub_B775C4(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    sub_B775C4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__);
    this = (WarBoardAIRoute_o *)sub_B775C4(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    byte_4388FF8 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v7->fields.dicUniqueKeyDesignationItem) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                 (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)this,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_2FC65D0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int__TypeInfo),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v9,
          (const MethodInfo_2FE81CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (this = (WarBoardAIRoute_o *)Item->fields.dicSquarePutSqareIndex) == 0LL )
  {
    sub_B7769C(this, basePiece);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v29,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
    (const MethodInfo_2FF475C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v30,
            (const MethodInfo_28883E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v10 = sub_B77694(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    WarBoardAIRoute___c__DisplayClass66_0___ctor((WarBoardAIRoute___c__DisplayClass66_0_o *)v10, 0LL);
    if ( !v10 )
      sub_B7769C(v11, v12);
    v19 = v10 + 24;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v10 + 16) = v30.fields.current;
    sub_B77560((BattleServantConfConponent_o *)(v10 + 24), 0LL, v13, v14, v15, v16, v17, v18);
    v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v20,
      (Il2CppObject *)v10,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    v21 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v20,
            (const MethodInfo_1C66144 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    if ( !v21 )
    {
      if ( !*(_QWORD *)v19 )
        sub_B7769C(v21, v22);
      v23 = *(_DWORD *)(*(_QWORD *)v19 + 16LL);
      if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AStarSearch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      }
      v24 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   v23,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v25 = System_Linq_Enumerable__Count_int_(
              v24,
              (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v9 )
        sub_B7769C(v25, v26);
      System_Collections_Generic_Dictionary_int__int___Add(
        v9,
        *(_DWORD *)(v10 + 16),
        v25,
        (const MethodInfo_2FE8D70 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v30,
    (const MethodInfo_2888550 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v9;
}


WarBoardEvalValueSquare_EvalValueSquare_o *__fastcall WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4388FEC & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
    byte_4388FEC = 1;
  }
  if ( !evalValueSquareList )
    sub_B7769C(this, evalValueSquareList);
  return System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
           evalValueSquareList,
           index,
           (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
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

  if ( (byte_4389000 & 1) == 0 )
  {
    sub_B775C4(&SvtClassAttri_TypeInfo);
    byte_4389000 = 1;
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
  if ( WarBoardAIRoute_RouteData__HasFlag_21240276(v8, 0x80000LL, 0LL)
    && WarBoardAIRoute_RouteData__HasFlag_21240276(v8, 0x100000LL, 0LL) )
  {
    v8 |= 0x40000uLL;
  }
  if ( !WarBoardAIRoute_RouteData__HasFlag_21240276(v8, 0x400000LL, 0LL) )
    return v8;
  if ( WarBoardAIRoute_RouteData__HasFlag_21240276(v8, 0x800000LL, 0LL) )
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
  struct System_Int32_array *linkedSquares; // x19
  __int64 v12; // x8
  unsigned __int64 v13; // x22
  int32_t *v14; // x26
  __int64 v15; // x23
  int32_t v16; // w24
  const MethodInfo *v17; // x2
  WarBoardPieceData_o *v18; // x25
  int32_t *v19; // x19
  __int64 v20; // x26
  int32_t v21; // w27
  int32_t ClassId; // w28
  float Magnification; // s0
  const MethodInfo *v24; // x1
  uint32_t v25; // w24
  const MethodInfo *v26; // x2
  WarBoardAIRoute_o *v27; // x24
  __int64 v29; // x0
  WarBoardAIRoute_o *v30; // [xsp+0h] [xbp-70h]
  struct System_Int32_array *v31; // [xsp+8h] [xbp-68h]
  int32_t v32; // [xsp+18h] [xbp-58h]
  uint32_t value; // [xsp+1Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4388FFC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&SvtClassAttri_TypeInfo);
    this = (WarBoardAIRoute_o *)sub_B775C4(&WarBoardAIManager_TypeInfo);
    byte_4388FFC = 1;
  }
  value = 0;
  if ( !baseSquare )
    goto LABEL_52;
  linkedSquares = baseSquare->fields.linkedSquares;
  if ( !linkedSquares )
    goto LABEL_52;
  v12 = *(_QWORD *)&linkedSquares->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    v14 = &linkedSquares->m_Items[1];
    v15 = 1LL;
    v30 = v10;
    v31 = linkedSquares;
    v32 = masterSquareIndex;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
      {
        v29 = sub_B776C8(this);
        sub_B77668(v29, 0LL);
      }
      v16 = v14[v13];
      this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)this[1].fields.npcData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_22695252((WarBoardData_o *)this, v16, 0LL);
      if ( !this )
        goto LABEL_31;
      v18 = (WarBoardPieceData_o *)this;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v18, v17);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !basePiece )
          break;
        if ( WarBoardPieceData__get_isServant(basePiece, 0LL) || WarBoardPieceData__get_isMaster(v18, 0LL) )
        {
          v19 = v14;
          v20 = v15 | 0x10;
          if ( WarBoardPieceData__get_isServant(v18, 0LL)
            && !WarBoardAIRoute_RouteData__HasFlag_21240276(v15 | 0x10, 0x1000000LL, 0LL) )
          {
            this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
            if ( !this )
              break;
            this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
            if ( !v18->fields._battleServant_k__BackingField )
              break;
            v21 = (int)this;
            ClassId = BattleServantData__getClassId(v18->fields._battleServant_k__BackingField, 0LL);
            if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SvtClassAttri_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            }
            Magnification = SvtClassAttri__getMagnification(v21, ClassId, 0LL);
            masterSquareIndex = v32;
            v10 = v30;
            if ( Magnification > 1.0 )
              v20 = v15 | 0x1000010;
          }
          if ( WarBoardPieceData__get_isMaster(v18, 0LL) )
            v15 = v20 | 0x20;
          else
            v15 = v20;
          v14 = v19;
          linkedSquares = v31;
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
      if ( ((v16 == masterSquareIndex) & ((unsigned int)this ^ 1)) != 0 )
        v15 |= 0x400000000uLL;
      if ( !piecePlaceData )
        break;
      this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_int__uint___TryGetValue(
                                    piecePlaceData,
                                    v16,
                                    &value,
                                    (const MethodInfo_2FFD590 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v25 = value;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        this = (WarBoardAIRoute_o *)WarBoardAIManager__GetPieceUnique(v25, v24);
        if ( basePiece->fields._uniqueIndex_k__BackingField != value )
        {
          v27 = this;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          }
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsAllyPiece(basePiece, (WarBoardPieceData_o *)v27, v26);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v27 )
              break;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v27, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              v15 |= 0x800000000uLL;
          }
        }
      }
      LODWORD(v12) = linkedSquares->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        return v15;
    }
LABEL_52:
    sub_B7769C(this, baseSquare);
  }
  return 1LL;
}


int32_t __fastcall WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
        WarBoardAIRoute_o *this,
        int32_t baseSquareIndex,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicOutOfWarningAreaRange; // x0
  System_Collections_Generic_Dictionary_int__int__o *v10; // x8

  if ( (byte_4388FFB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4388FFB = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0LL) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_2FE8FD4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          actionSquareIndex,
          (const MethodInfo_2FE8FD4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                    dicOutOfWarningAreaRange,
                                                                                    baseSquareIndex,
                                                                                    (const MethodInfo_2FE8CB0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( (int)dicOutOfWarningAreaRange > System_Collections_Generic_Dictionary_int__int___get_Item(
                                         this->fields.dicOutOfWarningAreaRange,
                                         actionSquareIndex,
                                         (const MethodInfo_2FE8CB0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange
    || (dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                          dicOutOfWarningAreaRange,
                                                                                          baseSquareIndex,
                                                                                          (const MethodInfo_2FE8CB0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v10 = this->fields.dicOutOfWarningAreaRange) == 0LL) )
  {
LABEL_18:
    sub_B7769C(dicOutOfWarningAreaRange, v7);
  }
  if ( (_DWORD)dicOutOfWarningAreaRange == System_Collections_Generic_Dictionary_int__int___get_Item(
                                             v10,
                                             actionSquareIndex,
                                             (const MethodInfo_2FE8CB0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w9
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *v10; // x8
  int32_t key; // w20
  int v12; // w19
  __int128 v13[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v14; // [xsp+20h] [xbp-40h] BYREF

  v4 = this;
  if ( (byte_4388FE9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    this = (WarBoardAIRoute_o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    byte_4388FE9 = 1;
  }
  memset(&v14, 0, 32);
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
    sub_B7769C(this, piecePlaceData);
  System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v13,
    piecePlaceData,
    (const MethodInfo_2FFBEF4 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
  *(_OWORD *)&v14.fields.dictionary = v13[0];
  v14.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v13[1];
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
           &v14,
           (const MethodInfo_288A4A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    if ( !v8 )
      break;
    v10 = v4->fields.aiRouteMasterData;
    if ( !v10 )
      sub_B7769C(v8, v9);
    key = (int32_t)v14.fields.current.fields.key;
    if ( v10->fields.masterUniqueIndex == HIDWORD(v14.fields.current.fields.key) )
    {
      v12 = 3;
      goto LABEL_15;
    }
  }
  key = 0;
  v12 = 1;
LABEL_15:
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &v14,
    (const MethodInfo_288A5F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
  if ( (unsigned int)(v12 + 1) >> 2 )
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
  Il2CppClass *klass; // x8
  System_Func_KeyValuePair_int__uint___bool__o *v7; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4389004 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____);
    sub_B775C4(&Method_System_Func_KeyValuePair_int__uint___bool___ctor__);
    sub_B775C4(&System_Func_KeyValuePair_int__uint___bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    this = (WarBoardAIRoute_o *)sub_B775C4(&Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__);
    byte_4389004 = 1;
  }
  klass = v4[13].klass;
  if ( !klass )
    sub_B7769C(this, piecePlaceData);
  if ( LODWORD(klass->_1.name) == 1 )
    return HIDWORD(klass->_1.name);
  v7 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_B77694(System_Func_KeyValuePair_int__uint___bool__TypeInfo);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v7,
    v4,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    (const MethodInfo_29D7A64 *)Method_System_Func_KeyValuePair_int__uint___bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v7,
           (const MethodInfo_1D31948 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetMoveByTargetDistance(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData,
        int32_t actionSquareIndex,
        WarBoardPieceData_o *basePiece,
        const MethodInfo *method)
{
  Il2CppObject *currentValue; // x19
  WarBoardPieceData_o *monitor; // x22
  const MethodInfo *v10; // x2
  int32_t v11; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  int32_t v13; // w22
  int32_t v14; // w0
  int32_t v15; // w2
  int v16; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  int32_t v19; // w23
  int32_t v20; // w0
  int v21; // w8
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v25; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4389006 & 1) == 0 )
  {
    sub_B775C4(&AStarSearch_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_int___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    this = (WarBoardAIRoute_o *)sub_B775C4(&WarBoardAIManager_TypeInfo);
    byte_4389006 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !dicKeyPutIndexValueTargetData
    || (v25 = dicKeyPutIndexValueTargetData,
        (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___get_Values(
                                       dicKeyPutIndexValueTargetData,
                                       (const MethodInfo_2FCDD04 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0LL) )
  {
    sub_B7769C(this, dicKeyPutIndexValueTargetData);
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_26B83F4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v22 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v27,
            (const MethodInfo_27DEDF4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v22 )
      break;
    currentValue = v27.fields.currentValue;
    if ( !v27.fields.currentValue )
      sub_B7769C(v22, v23);
    monitor = (WarBoardPieceData_o *)v27.fields.currentValue[1].monitor;
    if ( !monitor || LODWORD(v27.fields.currentValue[4].monitor) != actionSquareIndex )
      goto LABEL_14;
    if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    }
    if ( WarBoardAIManager__IsAllyPiece(basePiece, monitor, v10) )
    {
      LODWORD(currentValue[4].klass) = 2;
    }
    else
    {
LABEL_14:
      v11 = (int32_t)currentValue[4].monitor;
      if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AStarSearch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      }
      v12 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v11,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v13 = System_Linq_Enumerable__Count_int_(
              v12,
              (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
      v14 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
      v15 = (int32_t)currentValue[4].monitor;
      if ( v13 == v14 )
        v16 = 2;
      else
        v16 = 3;
      if ( v13 < v14 )
        v16 = 1;
      LODWORD(currentValue[4].klass) = v16;
      v17 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v15,
                                                                   1,
                                                                   0LL,
                                                                   0LL);
      if ( v17 && (klass = (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[6].klass) != 0LL )
      {
        v19 = System_Linq_Enumerable__Count_int_(
                klass,
                (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
        v20 = System_Linq_Enumerable__Count_int_(
                v17,
                (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
        if ( v20 >= v19 )
        {
          if ( v20 == v19 )
            v21 = 2;
          else
            v21 = 3;
        }
        else
        {
          v21 = 1;
        }
      }
      else
      {
        v21 = 0;
      }
      HIDWORD(currentValue[4].klass) = v21;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v27,
    (const MethodInfo_27DEDF0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
  return v25;
}


int32_t __fastcall WarBoardAIRoute__GetRangeShortMost(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *dicPieceList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  int32_t v6; // w19
  int32_t key; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  int32_t v9; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4388FED & 1) == 0 )
  {
    sub_B775C4(&AStarSearch_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_int___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    this = (WarBoardAIRoute_o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    byte_4388FED = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !dicPieceList )
    sub_B7769C(this, dicPieceList);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)dicPieceList,
    (const MethodInfo_2FF475C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v6 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v12,
            (const MethodInfo_28883E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v12.fields.current.fields.key;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                0LL,
                                                                baseSquareIndex,
                                                                key,
                                                                0,
                                                                0LL,
                                                                0LL);
    v9 = System_Linq_Enumerable__Count_int_(v8, (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v6 > v9 || v6 == -1 )
      v6 = v9;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v12,
    (const MethodInfo_2888550 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  return v6;
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
  System_Collections_Generic_Dictionary_uint__int__o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  _BOOL8 v15; // x0
  __int64 v16; // x1
  WarBoardAIRoute_RouteData_o *current; // x24
  _BOOL8 HasFlag; // x0
  __int64 v19; // x1
  struct WarBoardPieceData_o *basePiece; // x8
  bool v21; // zf
  int32_t *v22; // x8
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *v24; // x8
  int32_t *v25; // x8
  uint32_t uniqueIndex_k__BackingField; // w24
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-70h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_4388FE8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    byte_4388FE8 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  value = 0;
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  v12 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B77694(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v12,
    (const MethodInfo_2FC1F30 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_B7769C(v13, v14);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)routeDataList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v15 )
      break;
    current = (WarBoardAIRoute_RouteData_o *)v29.fields.current;
    if ( !v29.fields.current )
      sub_B7769C(v15, v16);
    if ( !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v29.fields.current, 0LL) )
    {
      value = 0;
      HasFlag = WarBoardAIRoute_RouteData__HasFlag(current, 0x4000000LL, 0LL);
      basePiece = current->fields.basePiece;
      if ( HasFlag )
      {
        if ( !basePiece )
          sub_B7769C(HasFlag, v19);
        v21 = basePiece->fields._type_k__BackingField == 1;
        v22 = masterReplaceCount;
        if ( !v21 )
        {
          actionPiece = current->fields.actionPiece;
          if ( !actionPiece )
            sub_B7769C(HasFlag, v19);
          if ( actionPiece->fields._type_k__BackingField == 1 )
            v22 = masterReplaceCount;
          else
            v22 = replaceCount;
        }
        ++*v22;
        v24 = current->fields.actionPiece;
        if ( !v24 )
          sub_B7769C(HasFlag, v19);
      }
      else
      {
        if ( !basePiece )
          sub_B7769C(HasFlag, v19);
        if ( basePiece->fields._type_k__BackingField == 1 )
          v25 = masterActionCount;
        else
          v25 = actionCount;
        ++*v25;
        v24 = current->fields.basePiece;
        if ( !v24 )
          sub_B7769C(HasFlag, v19);
      }
      if ( !v12 )
        sub_B7769C(HasFlag, v19);
      uniqueIndex_k__BackingField = v24->fields._uniqueIndex_k__BackingField;
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v12,
        uniqueIndex_k__BackingField,
        &value,
        (const MethodInfo_2FC46E4 *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v12,
        uniqueIndex_k__BackingField,
        value + 1,
        (const MethodInfo_2FC2AAC *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
  return v12;
}


int32_t __fastcall WarBoardAIRoute__GetRouteSumPieceActionCost(
        WarBoardAIRoute_o *this,
        System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *routeDataList,
        WarBoardPieceData_o *targetPiece,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v15; // x20

  if ( (byte_4389007 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____69507656);
    sub_B775C4(&Method_System_Func_WarBoardAIRoute_RouteData__int___ctor__);
    sub_B775C4(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__);
    sub_B775C4(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
    byte_4389007 = 1;
  }
  v6 = sub_B77694(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass84_0___ctor((WarBoardAIRoute___c__DisplayClass84_0_o *)v6, 0LL);
  if ( !v6 )
    sub_B7769C(v7, v8);
  *(_QWORD *)(v6 + 16) = targetPiece;
  sub_B77560((BattleServantConfConponent_o *)(v6 + 16), (System_Int32_array **)targetPiece, v9, v10, v11, v12, v13, v14);
  v15 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v15,
    (Il2CppObject *)v6,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    (const MethodInfo_29E9E70 *)Method_System_Func_WarBoardAIRoute_RouteData__int___ctor__);
  return System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v15,
           (const MethodInfo_1D3CA0C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____69507656);
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
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *key; // x24
  Il2CppObject *value; // x25
  WarBoardPieceData_array *allEnemyPiece; // x27
  WarBoardAIRoute_TargetData_o *v18; // x26
  __int64 v19; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+30h] [xbp-80h] BYREF

  v12 = this;
  if ( (byte_4388FF5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_B775C4(&Method_System_Func_IWarBoardObjectData__bool__Invoke__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    this = (WarBoardAIRoute_o *)sub_B775C4(&WarBoardAIRoute_TargetData_TypeInfo);
    byte_4388FF5 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !dicPutSquareIndex )
    sub_B7769C(this, dicPutSquareIndex);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v20,
    dicPutSquareIndex,
    (const MethodInfo_2FCE540 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v13 = System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v21,
            (const MethodInfo_27DE494 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v13 )
      break;
    key = v21.fields.current.fields.key;
    value = v21.fields.current.fields.value;
    if ( excludeCond )
    {
      if ( !v21.fields.current.fields.value )
        sub_B7769C(v13, v14);
      if ( System_Func_BattleBuffData_BuffData__bool___Invoke(
             (System_Func_BattleBuffData_BuffData__bool__o *)excludeCond,
             (BattleBuffData_BuffData_o *)v21.fields.current.fields.value[3].monitor,
             (const MethodInfo_29E92D8 *)Method_System_Func_IWarBoardObjectData__bool__Invoke__) )
      {
        continue;
      }
    }
    allEnemyPiece = v12->fields.allEnemyPiece;
    v18 = (WarBoardAIRoute_TargetData_o *)sub_B77694(WarBoardAIRoute_TargetData_TypeInfo);
    WarBoardAIRoute_TargetData___ctor_21245364(
      v18,
      (WarBoardAIRoute_TargetData_o *)value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      0LL);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_B7769C(0LL, v19);
    System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
      *dicKeyPutIndexValueTargetData,
      (int64_t)key,
      v18,
      (const MethodInfo_2FCDF60 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v21,
    (const MethodInfo_27DE5FC *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v27; // x22
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  WarBoardAiTargetCacher_o *aiTargetCacher; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  TargetDetector_o *DetectorByTrendKey; // x0
  __int64 v33; // x1
  int32_t Id_k__BackingField; // w27
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  System_Collections_Generic_IEnumerable_TSource__o *Item; // x0
  WarBoardAiTargetCacher_o *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *TargetObjectsByTrendId; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *klass; // x23
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x28
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v48; // x23
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v55; // x28
  WarBoardAIRoute___c_c *v56; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__64_2; // x23
  Il2CppObject *v59; // x19
  struct WarBoardAIRoute___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v67; // x28
  WarBoardAIRoute___c_c *v68; // x0
  struct WarBoardAIRoute___c_StaticFields *v69; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__64_3; // x23
  Il2CppObject *v71; // x19
  struct WarBoardAIRoute___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  __int64 v80; // x1
  WarBoardPieceData_o *v81; // x27
  int32_t v82; // w24
  WarBoardPieceData_array *allEnemyPiece; // x19
  WarBoardAIRoute_TargetData_o *v84; // x23
  __int64 v85; // x1
  BattleServantConfConponent_o *v86; // [xsp+0h] [xbp-C0h]
  BattleServantConfConponent_o *v87; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v89; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v90; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4388FF6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_B775C4(&Method_System_Func_IWarBoardObjectData__int___ctor__);
    sub_B775C4(&Method_System_Func_IWarBoardObjectData__bool___ctor__);
    sub_B775C4(&System_Func_IWarBoardObjectData__int__TypeInfo);
    sub_B775C4(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    sub_B775C4(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_B775C4(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__);
    sub_B775C4(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__);
    sub_B775C4(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
    sub_B775C4(&WarBoardAIRoute___c_TypeInfo);
    byte_4388FF6 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  v12 = sub_B77694(WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass64_0___ctor((WarBoardAIRoute___c__DisplayClass64_0_o *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = excludeCond,
        sub_B77560(
          (BattleServantConfConponent_o *)(v12 + 16),
          (System_Int32_array **)excludeCond,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        *(_QWORD *)(v12 + 24) = basePiece,
        sub_B77560(
          (BattleServantConfConponent_o *)(v12 + 24),
          (System_Int32_array **)basePiece,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        *(_DWORD *)(v12 + 32) = baseSquareIndex,
        v27 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo),
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
          v27,
          (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__),
        !dicIndividualityPutSqareIndex) )
  {
    sub_B7769C(v13, v14);
  }
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v89,
    dicIndividualityPutSqareIndex,
    (const MethodInfo_2FCE540 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v87 = (BattleServantConfConponent_o *)(v12 + 40);
  v90 = v89;
  v86 = (BattleServantConfConponent_o *)(v12 + 48);
  while ( System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v90,
            (const MethodInfo_27DE494 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_B7769C(0LL, v28);
    current = v90.fields.current;
    DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(
                           aiTargetCacher,
                           (int64_t)v90.fields.current.fields.key,
                           v29);
    if ( DetectorByTrendKey )
    {
      Id_k__BackingField = DetectorByTrendKey->fields._Id_k__BackingField;
      if ( !v27 )
        goto LABEL_45;
    }
    else
    {
      Id_k__BackingField = 0;
      if ( !v27 )
LABEL_45:
        sub_B7769C(DetectorByTrendKey, v33);
    }
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v27,
           Id_k__BackingField,
           (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                    v27,
                                                                    Id_k__BackingField,
                                                                    (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
LABEL_37:
      TargetObjectsByTrendId = Item;
      goto LABEL_38;
    }
    v38 = this->fields.aiTargetCacher;
    if ( !v38 )
      sub_B7769C(0LL, v35);
    TargetObjectsByTrendId = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardAiTargetCacher__GetTargetObjectsByTrendId(
                                                                                    v38,
                                                                                    (int64_t)current.fields.key,
                                                                                    v36);
    if ( TargetObjectsByTrendId )
    {
      klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v87->klass;
      if ( !v87->klass )
      {
        klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_IWarBoardObjectData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          klass,
          (Il2CppObject *)v12,
          Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
          (const MethodInfo_29E92C4 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
        v87->klass = (BattleServantConfConponent_c *)klass;
        sub_B77560(v87, (System_Int32_array **)klass, v41, v42, v43, v44, v45, v46);
      }
      v47 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              TargetObjectsByTrendId,
              (System_Func_TSource__bool__o *)klass,
              (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
      v48 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v86->klass;
      if ( !v86->klass )
      {
        v48 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_IWarBoardObjectData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          v48,
          (Il2CppObject *)v12,
          Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
          (const MethodInfo_29E9E70 *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v86->klass = (BattleServantConfConponent_c *)v48;
        sub_B77560(v86, (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
      }
      v55 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
              v47,
              (System_Func_TSource__TKey__o *)v48,
              (const MethodInfo_1D3499C *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
      v56 = WarBoardAIRoute___c_TypeInfo;
      if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
        v56 = WarBoardAIRoute___c_TypeInfo;
      }
      static_fields = v56->static_fields;
      _9__64_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__64_2;
      if ( !_9__64_2 )
      {
        if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v56);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
        }
        v59 = (Il2CppObject *)static_fields->__9;
        _9__64_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_IWarBoardObjectData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__64_2,
          v59,
          Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
          (const MethodInfo_29E9E70 *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v60 = WarBoardAIRoute___c_TypeInfo->static_fields;
        v60->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
        sub_B77560(
          (BattleServantConfConponent_o *)&v60->__9__64_2,
          (System_Int32_array **)_9__64_2,
          v61,
          v62,
          v63,
          v64,
          v65,
          v66);
      }
      v67 = System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
              v55,
              (System_Func_TSource__TKey__o *)_9__64_2,
              (const MethodInfo_1D3CDB0 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
      v68 = WarBoardAIRoute___c_TypeInfo;
      if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
        v68 = WarBoardAIRoute___c_TypeInfo;
      }
      v69 = v68->static_fields;
      _9__64_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v69->__9__64_3;
      if ( !_9__64_3 )
      {
        if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v68);
          v69 = WarBoardAIRoute___c_TypeInfo->static_fields;
        }
        v71 = (Il2CppObject *)v69->__9;
        _9__64_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_IWarBoardObjectData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__64_3,
          v71,
          Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
          (const MethodInfo_29E9E70 *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v72 = WarBoardAIRoute___c_TypeInfo->static_fields;
        v72->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
        sub_B77560(
          (BattleServantConfConponent_o *)&v72->__9__64_3,
          (System_Int32_array **)_9__64_3,
          v73,
          v74,
          v75,
          v76,
          v77,
          v78);
      }
      v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                   v67,
                                                                   (System_Func_TSource__TKey__o *)_9__64_3,
                                                                   (const MethodInfo_1D3CDB0 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                                    v79,
                                                                    (const MethodInfo_1D31514 *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
      goto LABEL_37;
    }
LABEL_38:
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v27,
      Id_k__BackingField,
      (WarBoardAIRoute_RouteData_o *)TargetObjectsByTrendId,
      (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( TargetObjectsByTrendId )
    {
      v81 = *(WarBoardPieceData_o **)(v12 + 24);
      v82 = *(_DWORD *)(v12 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v84 = (WarBoardAIRoute_TargetData_o *)sub_B77694(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_21246452(
        v84,
        (WarBoardAIRoute_TargetData_o *)current.fields.value,
        (IWarBoardObjectData_o *)TargetObjectsByTrendId,
        v81,
        v82,
        allEnemyPiece,
        0LL);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_B7769C(0LL, v85);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
        *dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        v84,
        (const MethodInfo_2FCDF60 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_B7769C(0LL, v80);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Remove(
        *dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        (const MethodInfo_2FCF930 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v90,
    (const MethodInfo_27DE5FC *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetTargetToDistance_21356736(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  __int64 v9; // x22
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *dicUniqueKeyTarget; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  WarBoardAIRoute_PutSquareTarget_o *Item; // x24
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v19; // x23
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x26
  const MethodInfo *v22; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicIndividualityPutSqareIndex; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x26
  const MethodInfo *v25; // x6
  const MethodInfo *v26; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4388FF7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
    sub_B775C4(&Method_System_Func_IWarBoardObjectData__bool___ctor__);
    sub_B775C4(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__);
    sub_B775C4(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
    byte_4388FF7 = 1;
  }
  dicKeyPutIndexValueTargetData = 0LL;
  v9 = sub_B77694(WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass65_0___ctor((WarBoardAIRoute___c__DisplayClass65_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = routeDataList,
        sub_B77560(
          (BattleServantConfConponent_o *)(v9 + 16),
          (System_Int32_array **)routeDataList,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        !basePiece)
    || (dicUniqueKeyTarget = this->fields.dicUniqueKeyTarget) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                 dicUniqueKeyTarget,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_2FC65D0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v19 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B77694(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo),
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
          v19,
          (const MethodInfo_2FCD3B0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = v19,
        !Item) )
  {
    sub_B7769C(dicUniqueKeyTarget, v11);
  }
  dicObjectPutSquareIndex = Item->fields.dicObjectPutSquareIndex;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    dicObjectPutSquareIndex,
    (System_Func_IWarBoardObjectData__bool__o *)v21,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v22);
  dicIndividualityPutSqareIndex = Item->fields.dicIndividualityPutSqareIndex;
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
  WarBoardAIRoute__GetTargetToDistanceUsingIndividuality(
    this,
    dicIndividualityPutSqareIndex,
    (System_Func_IWarBoardObjectData__bool__o *)v24,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v25);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    Item->fields.dicSquarePutSqareIndex,
    0LL,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v26);
  return v19;
}


float __fastcall WarBoardAIRoute__GetThinkingThreshold(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_B7769C(this, method);
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
  if ( (byte_4388FFE & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4388FFE = 1;
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
    this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
      return SHIDWORD(this[3].fields.allAllyPiece) >= v13 + requiredCost;
LABEL_13:
    sub_B7769C(this, basePiece);
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
  __int64 v13; // x20
  WarBoardPieceData_o *Instance; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  WarBoardPieceData_o **v22; // x25
  bool v23; // w8
  const MethodInfo *v24; // x3
  int32_t RouteSumPieceActionCost; // w23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x21
  __int64 v27; // x8

  if ( (byte_4389002 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    sub_B775C4(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    sub_B775C4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__);
    sub_B775C4(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
    byte_4389002 = 1;
  }
  v13 = sub_B77694(WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass76_0___ctor((WarBoardAIRoute___c__DisplayClass76_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_25;
  *(_QWORD *)(v13 + 16) = actionPiece;
  v22 = (WarBoardPieceData_o **)(v13 + 16);
  sub_B77560(
    (BattleServantConfConponent_o *)(v13 + 16),
    (System_Int32_array **)actionPiece,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  Instance = *(WarBoardPieceData_o **)(v13 + 16);
  if ( !Instance )
    goto LABEL_25;
  v23 = WarBoardPieceData__EnableSwapByOther(Instance, 0, 0LL);
  Instance = 0LL;
  if ( !v23 )
    return (char)Instance;
  if ( !basePiece )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(basePiece, 0LL) )
    goto LABEL_10;
  Instance = *v22;
  if ( !*v22 )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(Instance, 0LL) )
  {
LABEL_10:
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( *((_DWORD *)&Instance[2].fields._isNotIncludeWin_k__BackingField + 1) < this->fields.moveCost
                                                                               + requiredCost
                                                                               + this->fields.masterMoveCost )
      goto LABEL_23;
  }
  else
  {
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( *((_DWORD *)&Instance[2].fields._isNotIncludeWin_k__BackingField + 1) < requiredCost
                                                                               + 2 * this->fields.moveCost )
      goto LABEL_23;
  }
  RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                              (WarBoardAIRoute_o *)Instance,
                              routeDataList,
                              *v22,
                              v24);
  if ( !WarBoardPieceData__EnableMoveBySelf(basePiece, sumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v22;
  if ( !*v22 )
    goto LABEL_25;
  if ( !WarBoardPieceData__EnableSwapByOther(Instance, RouteSumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v22;
  if ( !*v22 )
LABEL_25:
    sub_B7769C(Instance, v15);
  if ( !WarBoardPieceData__get_isInfinitelyActable(Instance, 0LL) )
  {
    v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v26,
      (Il2CppObject *)v13,
      Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    Instance = (WarBoardPieceData_o *)System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
                                        (System_Func_TSource__bool__o *)v26,
                                        (const MethodInfo_1D2E1F0 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    v27 = *(_QWORD *)(v13 + 16);
    if ( v27 )
    {
      if ( *(_DWORD *)(v27 + 36) > (int)Instance )
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
  unsigned __int64 v7; // x20
  char i; // w21
  Il2CppObject *current; // x21
  void *monitor; // x9
  signed __int64 v11; // x24
  unsigned __int64 v12; // x25
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 v16; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4388FF4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_B775C4(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4388FF4 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !v6 )
    sub_B7769C(shortestEnemyRoute, piecePlaceData);
  v7 = !isDefenseSquare;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v18 = v17;
  for ( i = 0; ; i = 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    current = v18.fields.current;
    if ( !v18.fields.current )
      sub_B7769C(v13, v14);
    monitor = v18.fields.current[1].monitor;
    if ( (int)monitor - 1 <= (int)v7 )
    {
LABEL_17:
      i = 0;
      break;
    }
    if ( (unsigned int)v18.fields.current[1].monitor <= v7 )
    {
LABEL_20:
      v16 = sub_B776C8(v13);
      sub_B77668(v16, 0LL);
    }
    v11 = (int)monitor - 1;
    v12 = v7;
    while ( 1 )
    {
      if ( !piecePlaceData )
        sub_B7769C(v13, v14);
      v13 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
              piecePlaceData,
              *((_DWORD *)&current[2].klass + v12),
              (const MethodInfo_2FFBBE4 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( v13 )
        break;
      if ( (__int64)++v12 >= v11 )
        goto LABEL_17;
      if ( v12 >= LODWORD(current[1].monitor) )
        goto LABEL_20;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4388FF1 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_4388FF1 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !defenseArea )
    sub_B7769C(v7, *(_QWORD *)&index);
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
  int v7; // w22
  bool v8; // w21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppClass *klass; // x0
  unsigned int monitor; // w9
  __int64 v13; // x11
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int v16; // w8
  int v17; // w28
  int v18; // w25
  int v19; // w8
  __int64 v20; // x0
  int v21; // w9
  _WORD v23[26]; // [xsp+8h] [xbp-D8h] BYREF
  int v24; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+60h] [xbp-80h] BYREF

  v6 = allShortestRoute;
  if ( (byte_4388FF3 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__);
    allShortestRoute = (System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *)sub_B775C4(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4388FF3 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  memset(&v26, 0, sizeof(v26));
  v24 = 0;
  if ( !v6 )
    sub_B7769C(allShortestRoute, *(_QWORD *)&index);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v23,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v6,
    (const MethodInfo_2FF475C *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v26 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v23;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
           &v26,
           (const MethodInfo_28883E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v26.fields.current.fields.value )
      sub_B7769C(v9, v10);
    klass = v26.fields.current.fields.value[1].klass;
    if ( !klass )
      sub_B7769C(0LL, v10);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v25 = *(System_Collections_Generic_List_Enumerator_T__o *)v23;
    do
    {
LABEL_13:
      v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v25,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v14 )
      {
        *(_DWORD *)&v23[2 * v7 + 20] = 117;
        v16 = v24;
        goto LABEL_17;
      }
      if ( !v25.fields.current )
        sub_B7769C(v14, v15);
      monitor = (unsigned int)v25.fields.current[1].monitor;
      v13 = !isDefenseSquare;
    }
    while ( (int)(monitor - 1) <= !isDefenseSquare );
    while ( 1 )
    {
      if ( (unsigned int)v13 >= monitor )
      {
        v20 = sub_B776C8(v14);
        sub_B77668(v20, 0LL);
      }
      if ( *((_DWORD *)&v25.fields.current[2].klass + v13) == index )
        break;
      if ( (int)++v13 >= (int)(monitor - 1) )
        goto LABEL_13;
    }
    *(_DWORD *)&v23[2 * v7 + 20] = 144;
    v16 = v24;
    v8 = 1;
LABEL_17:
    v17 = v16 + 1;
    v24 = v16 + 1;
    v18 = v16 + 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v25,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v7 = 0;
    if ( v18 )
    {
      v7 = v18 - 1;
      v19 = *(_DWORD *)&v23[2 * v18 + 18];
      if ( v19 == 117 )
      {
        v24 = v18 - 1;
      }
      else
      {
        v7 = v18;
        if ( v19 == 144 )
          goto LABEL_25;
      }
    }
  }
  *(_DWORD *)&v23[2 * v7 + 20] = 142;
  v17 = ++v24;
LABEL_25:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v26,
    (const MethodInfo_2888550 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
  if ( !v17 )
    return 0;
  v21 = *(_DWORD *)&v23[2 * v17 + 18];
  if ( v21 == 142 )
  {
    v8 = 0;
    goto LABEL_30;
  }
  if ( v21 == 144 )
  {
LABEL_30:
    v24 = v17 - 1;
    return v8;
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
  _BOOL8 v7; // x20
  unsigned int monitor; // w9
  __int64 v9; // x11
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int v12; // w19
  int v13; // w20
  __int64 v15; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4388FF2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_B775C4(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4388FF2 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !v6 )
    sub_B7769C(shortestEnemyRoute, *(_QWORD *)&index);
  v7 = !isDefenseSquare;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  do
  {
LABEL_10:
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v10 )
    {
      v12 = 0;
      v13 = 1;
      goto LABEL_13;
    }
    if ( !v17.fields.current )
      sub_B7769C(v10, v11);
    monitor = (unsigned int)v17.fields.current[1].monitor;
    v9 = v7;
  }
  while ( (int)(monitor - 1) <= v7 );
  while ( 1 )
  {
    if ( (unsigned int)v9 >= monitor )
    {
      v15 = sub_B776C8(v10);
      sub_B77668(v15, 0LL);
    }
    if ( *((_DWORD *)&v17.fields.current[2].klass + v9) == index )
      break;
    if ( (int)++v9 >= (int)(monitor - 1) )
      goto LABEL_10;
  }
  v12 = 1;
  v13 = 3;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v12 & ((unsigned int)(v13 + 1) >> 2);
}


bool __fastcall WarBoardAIRoute__IsDetour(
        System_Int32_array *route,
        System_Int32_array *blockPieces,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int32_t v14; // w0
  int v15; // w23
  System_Func_int__bool__o **v16; // x21
  System_Func_int__bool__o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int v24; // w8

  if ( (byte_4388FF0 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int____69468304);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_int___);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__);
    sub_B775C4(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
    byte_4388FF0 = 1;
  }
  v5 = sub_B77694(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass58_0___ctor((WarBoardAIRoute___c__DisplayClass58_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 16) = route;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)route, v8, v9, v10, v11, v12, v13);
  v14 = System_Linq_Enumerable__Count_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 16),
          (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v14 < 2 )
    return 0;
  v15 = v14 - 1;
  *(_DWORD *)(v5 + 24) = 1;
  if ( v14 - 1 < 2 )
    return 0;
  v16 = (System_Func_int__bool__o **)(v5 + 32);
  while ( 1 )
  {
    v17 = *v16;
    if ( !*v16 )
    {
      v17 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v17,
        (Il2CppObject *)v5,
        Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
        (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
      *(_QWORD *)(v5 + 32) = v17;
      sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
    }
    if ( BasicHelper__Any_int__29777580(
           blockPieces,
           (System_Func_T__bool__o *)v17,
           (const MethodInfo_1C65EAC *)Method_BasicHelper_Any_int____69468304) )
    {
      break;
    }
    v24 = *(_DWORD *)(v5 + 24) + 1;
    *(_DWORD *)(v5 + 24) = v24;
    if ( v24 >= v15 )
      return 0;
  }
  return 1;
}


bool __fastcall WarBoardAIRoute__IsThinkingThreshold(WarBoardAIRoute_o *this, float v, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_B7769C(this, method);
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
  WarBoardData_o *Square; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  unsigned __int64 v14; // x25
  int32_t v15; // w22
  const MethodInfo *v16; // x1
  __int64 v17; // x0
  uint32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4389001 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardAIManager_TypeInfo);
    byte_4389001 = 1;
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
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)entries )
      {
        v17 = sub_B776C8(Square);
        sub_B77668(v17, 0LL);
      }
      if ( !piecePlaceData )
        break;
      v15 = *(&npcEntityDict->fields.count + v14);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v15,
             &value,
             (const MethodInfo_2FFD590 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Square = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)Square[1].fields.reinforcementsSaveList;
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardData__GetPiece_22736672(Square, value, 1, 0LL);
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
      Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v15, v16);
      if ( Square )
      {
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v15, v11);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0LL);
        if ( ((unsigned __int8)Square & 1) != 0 )
          ++*attackByLinkEnemy;
      }
      LODWORD(entries) = npcEntityDict->fields.entries;
      if ( (__int64)++v14 >= (int)entries )
        return;
    }
LABEL_30:
    sub_B7769C(Square, v11);
  }
}


void __fastcall WarBoardAIRoute__LinkedPieceCount(
        WarBoardAIRoute_o *this,
        WarBoardAIRoute_RouteData_o **routeData,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        System_Collections_Generic_List_int__o *alreadyGetItemSquares,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *v8; // x8
  struct WarBoardSquareData_o *actionSquare; // x9
  struct System_Int32_array *linkedSquares; // x26
  struct WarBoardPieceData_o *basePiece; // x22
  unsigned __int64 v12; // x27
  il2cpp_array_size_t max_length; // w8
  int32_t v14; // w24
  const MethodInfo *v15; // x4
  struct System_Collections_Generic_List_WarBoardPieceData__o *moveByLinkedPiece; // x25
  WarBoardPieceData_o *v17; // x23
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  int32_t v20; // w24
  int32_t ClassId; // w25
  __int64 v22; // x0

  if ( (byte_4389005 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&SvtClassAttri_TypeInfo);
    this = (WarBoardAIRoute_o *)sub_B775C4(&WarBoardAIManager_TypeInfo);
    byte_4389005 = 1;
  }
  v8 = *routeData;
  if ( !*routeData
    || (actionSquare = v8->fields.actionSquare) == 0LL
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0LL )
  {
LABEL_50:
    sub_B7769C(this, routeData);
  }
  if ( (int)*(_QWORD *)&linkedSquares->max_length >= 1 )
  {
    basePiece = v8->fields.basePiece;
    v12 = 0LL;
    max_length = *(_QWORD *)&linkedSquares->max_length;
    do
    {
      if ( v12 >= max_length )
      {
        v22 = sub_B776C8(this);
        sub_B77668(v22, 0LL);
      }
      v14 = linkedSquares->m_Items[v12 + 1];
      this = (WarBoardAIRoute_o *)WarBoardAIRoute__CanAcquireItem(
                                    this,
                                    v14,
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
                                    v14,
                                    piecePlaceData,
                                    v15);
      if ( this )
      {
        if ( !*routeData )
          goto LABEL_50;
        moveByLinkedPiece = (*routeData)->fields.moveByLinkedPiece;
        v17 = (WarBoardPieceData_o *)this;
        this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_50;
        this = (WarBoardAIRoute_o *)this[1].fields.npcData;
        if ( !this )
          goto LABEL_50;
        this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_22695252((WarBoardData_o *)this, v14, 0LL);
        if ( !moveByLinkedPiece )
          goto LABEL_50;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)moveByLinkedPiece,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( WarBoardAIManager__IsAllyPiece(basePiece, v17, v18)
          && (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v17, 0LL), ((unsigned __int8)this & 1) != 0) )
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
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v17, v19);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*routeData )
              goto LABEL_50;
            (*routeData)->fields.flagNow |= 0x40uLL;
            if ( WarBoardPieceData__get_isServant(v17, 0LL) )
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
                this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v17, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
                  if ( !this )
                    goto LABEL_50;
                  this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
                  if ( !v17->fields._battleServant_k__BackingField )
                    goto LABEL_50;
                  v20 = (int)this;
                  ClassId = BattleServantData__getClassId(v17->fields._battleServant_k__BackingField, 0LL);
                  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                  }
                  if ( SvtClassAttri__getMagnification(v20, ClassId, 0LL) > 1.0 )
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
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v17, 0LL);
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
      ++v12;
    }
    while ( (__int64)v12 < (int)max_length );
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
  WarBoardAIRoute___c__DisplayClass46_0_o *v14; // x25
  __int64 v15; // x0
  __int64 v16; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x24
  peRenderTexture_ChangeLayerObject_o *v18; // x0
  peRenderTexture_ChangeLayerObject_c *klass; // x8
  IWarBoardObjectData_o *v20; // x23
  unsigned __int64 v21; // x10
  IWarBoardObjectData_c **p_offset; // x11
  __int64 v23; // x0
  WarBoardAIRoute_TargetData_o *v24; // x22

  if ( (byte_4388FE6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    sub_B775C4(&IWarBoardObjectData_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
    sub_B775C4(&Method_System_Predicate_IWarBoardObjectData___ctor__);
    sub_B775C4(&System_Predicate_IWarBoardObjectData__TypeInfo);
    sub_B775C4(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__);
    sub_B775C4(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
    byte_4388FE6 = 1;
  }
  v14 = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_B77694(WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass46_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_17;
  v14->fields.squareIndex = squareIndex;
  *notSquareTarget = 0;
  if ( !targetDic )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ContainsKey(
         targetDic,
         v14->fields.squareIndex,
         (const MethodInfo_2FCE1D4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_IWarBoardObjectData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v14,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_IWarBoardObjectData___ctor__);
  if ( !objectList )
LABEL_17:
    sub_B7769C(v15, v16);
  v18 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)objectList,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
  if ( v18 )
  {
    *notSquareTarget = 1;
    klass = v18->klass;
    v20 = (IWarBoardObjectData_o *)v18;
    if ( *(_WORD *)&v18->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v21;
        p_offset += 2;
        if ( v21 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      v23 = (__int64)(&klass->vtable._2_GetHashCode.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_12:
      v23 = sub_B0F4C0(v18, IWarBoardObjectData_TypeInfo, 2LL);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8)) & 1) != 0 )
    {
      v24 = (WarBoardAIRoute_TargetData_o *)sub_B77694(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_21244944(v24, v20, trendKey, conditionId, 0LL);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
        targetDic,
        trendKey,
        v24,
        (const MethodInfo_2FCDF38 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
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

  if ( (byte_4388FE4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
    byte_4388FE4 = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_B7769C(0LL, *(_QWORD *)&aiId);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_2FF5B54 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
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
  System_Collections_Generic_Dictionary_int__uint__o *v10; // x22
  _BOOL8 HasFlag; // x0
  __int64 v12; // x1
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *basePiece; // x8

  if ( (byte_4389003 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___69333000);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__uint__TypeInfo);
    byte_4389003 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_B77694(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor_50311024(
    v10,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_2FFAF70 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___69333000);
  if ( !routeData )
    goto LABEL_12;
  HasFlag = WarBoardAIRoute_RouteData__HasFlag(routeData, 0x4000000LL, 0LL);
  if ( HasFlag )
  {
    actionPiece = routeData->fields.actionPiece;
    if ( actionPiece && v10 )
    {
      System_Collections_Generic_Dictionary_int__uint___set_Item(
        v10,
        baseSquareIndex,
        actionPiece->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_2FFB958 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_B7769C(HasFlag, v12);
  }
  if ( !v10 )
    goto LABEL_12;
  HasFlag = System_Collections_Generic_Dictionary_int__uint___Remove(
              v10,
              baseSquareIndex,
              (const MethodInfo_2FFD278 *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v10,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_2FFB958 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v10;
}


bool __fastcall WarBoardAIRoute____ctor_b__42_0(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
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
  if ( (byte_4389008 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    byte_4389008 = 1;
  }
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7769C)(this, x);
  return aiRouteMasterData->fields.masterUniqueIndex == value;
}


void __fastcall WarBoardAIRoute_AIRouteMasterData___ctor(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x23
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v15; // x1
  System_Int32_array *v16; // x8
  unsigned int v17; // w9
  unsigned int max_length; // w10
  unsigned int v19; // w23
  struct System_Collections_Generic_List_int____o *replaceDataList; // x20
  int32_t v21; // w25
  int32_t v22; // w24
  int basePanel; // w8
  __int64 v24; // x0
  System_Int32_array *data; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4388F1B & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int____Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_B775C4(&System_Collections_Generic_List_int____TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4388F1B = 1;
  }
  data = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_OWORD *)&this->fields.masterType = xmmword_331B710;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v7;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.replaceDataList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.replacePriority = -1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = *(WebViewManager_o **)&Instance[4].fields.m_CachedPtr;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WebViewManager_o *)WarBoardData__IsDefenseTarget((WarBoardData_o *)Instance, &data, forceId, groupId, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  v16 = data;
  if ( !data )
LABEL_16:
    sub_B7769C(Instance, v15);
  v17 = 0;
  while ( 1 )
  {
    max_length = v16->max_length;
    if ( (int)v17 >= (int)max_length )
      break;
    if ( v17 >= max_length )
      goto LABEL_18;
    v19 = v17 + 1;
    if ( v17 + 1 >= max_length )
      goto LABEL_18;
    replaceDataList = this->fields.replaceDataList;
    v21 = v16->m_Items[v17 + 1];
    v22 = v16->m_Items[v19 + 1];
    Instance = (WebViewManager_o *)sub_B775DC(int___TypeInfo, 2LL);
    if ( !Instance )
      goto LABEL_16;
    basePanel = (int)Instance->fields.basePanel;
    v15 = Instance;
    if ( !basePanel || (LODWORD(Instance->fields.baseWindow) = v21, basePanel == 1) )
    {
LABEL_18:
      v24 = sub_B776C8(Instance);
      sub_B77668(v24, 0LL);
    }
    HIDWORD(Instance->fields.baseWindow) = v22;
    if ( replaceDataList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)replaceDataList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_int____Add__);
      v16 = data;
      v17 = v19 + 1;
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
  uint32_t uniqueIndex_k__BackingField; // w8
  struct System_Collections_Generic_List_int____o *replaceDataList; // x25
  signed __int64 v9; // x22
  signed __int64 replacePriority; // x9
  System_Int32_array *v11; // x8
  unsigned int max_length; // w9
  int32_t v13; // w8
  __int64 v14; // x0

  v6 = this;
  if ( (byte_4388F1C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int____get_Count__);
    this = (WarBoardAIRoute_AIRouteMasterData_o *)sub_B775C4(&Method_System_Collections_Generic_List_int____get_Item__);
    byte_4388F1C = 1;
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
      v9 = 0LL;
      do
      {
        if ( v9 >= replaceDataList->fields._size )
          return;
        replacePriority = v6->fields.replacePriority;
        if ( (_DWORD)replacePriority != -1 && v9 > replacePriority )
          return;
        if ( v9 >= (unsigned __int64)(unsigned int)replaceDataList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v11 = replaceDataList->fields._items->m_Items[v9];
        if ( type != 0 || pieceData == 0LL )
        {
          if ( type != 2 || pieceData == 0LL )
          {
            if ( type == 1 )
            {
              if ( !v11 )
                break;
              if ( !v11->max_length )
                goto LABEL_38;
              if ( v11->m_Items[1] == 1 )
              {
                v6->fields.masterType = 1;
                if ( v11->max_length <= 1 )
                {
LABEL_38:
                  v14 = sub_B776C8(this);
                  sub_B77668(v14, 0LL);
                }
                v13 = v11->m_Items[2];
                v6->fields.replacePriority = v9;
                v6->fields.masterSquareIndex = v13;
                return;
              }
            }
          }
          else
          {
            if ( !v11 )
              break;
            max_length = v11->max_length;
            if ( !max_length )
              goto LABEL_38;
            if ( v11->m_Items[1] == 2 )
            {
              if ( max_length <= 1 )
                goto LABEL_38;
              if ( v11->m_Items[2] == pieceData->fields._index_k__BackingField )
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
          if ( !v11 )
            break;
          if ( !v11->max_length )
            goto LABEL_38;
          if ( !v11->m_Items[1] )
          {
            v6->fields.masterType = 0;
LABEL_35:
            uniqueIndex_k__BackingField = pieceData->fields._uniqueIndex_k__BackingField;
            v6->fields.replacePriority = v9;
            goto LABEL_36;
          }
        }
        replaceDataList = v6->fields.replaceDataList;
        ++v9;
      }
      while ( replaceDataList );
    }
LABEL_31:
    sub_B7769C(this, *(_QWORD *)&type);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o **p_FutureTrendInfoList_k__BackingField; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x22
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v21; // x23
  WarBoardActionTrendMaster_o *HasMatchCondition; // x0
  __int64 v23; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  WarBoardActionTrendMaster_o *v25; // x20
  unsigned __int64 v26; // x24
  WarBoardActionTrendEntity_o *v27; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x21
  WarBoardAIRoute_ActionTrendInfo_o *v29; // x23
  const MethodInfo *v30; // x2
  __int64 v31; // x0
  int32_t condType; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4388F1E & 1) == 0 )
  {
    sub_B775C4(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
    sub_B775C4(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_B775C4(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__);
    byte_4388F1E = 1;
  }
  condType = 0;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v5;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._FutureTrendInfoList_k__BackingField,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Entity_k__BackingField = entity;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)entity, v13, v14, v15, v16, v17, v18);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v19);
  v21 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B77694(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
    v21,
    0LL,
    Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__,
    (const MethodInfo_29E4E2C *)Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
  HasMatchCondition = (WarBoardActionTrendMaster_o *)WarBoardActionTrendConditionMaster__HasMatchCondition(
                                                       ConditionEntityArray,
                                                       v21,
                                                       &condType,
                                                       0LL);
  this->fields._HasTargetIndividualityCond_k__BackingField = (unsigned __int8)HasMatchCondition & 1;
  if ( !entity )
    goto LABEL_19;
  if ( !WarBoardActionTrendEntity__get_HasFutureTrend(entity, 0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  HasMatchCondition = (WarBoardActionTrendMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !HasMatchCondition
    || (HasMatchCondition = (WarBoardActionTrendMaster_o *)WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                                                             HasMatchCondition,
                                                             entity,
                                                             0LL)) == 0LL )
  {
LABEL_19:
    sub_B7769C(HasMatchCondition, v23);
  }
  MasterName_k__BackingField = HasMatchCondition->fields._MasterName_k__BackingField;
  v25 = HasMatchCondition;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)MasterName_k__BackingField )
      {
        v31 = sub_B776C8(HasMatchCondition);
        sub_B77668(v31, 0LL);
      }
      v27 = (WarBoardActionTrendEntity_o *)*((_QWORD *)&v25->fields.list + v26);
      if ( v27 )
      {
        v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_FutureTrendInfoList_k__BackingField;
        v29 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B77694(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v29, v27, v30);
        if ( !v28 )
          goto LABEL_19;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v28,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
      LODWORD(MasterName_k__BackingField) = v25->fields._MasterName_k__BackingField;
      ++v26;
    }
    while ( (__int64)v26 < (int)MasterName_k__BackingField );
  }
}


WarBoardActionTrendConditionEntity_array *__fastcall WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  WarBoardAIRoute_ActionTrendInfo_o *v2; // x20
  BattleServantConfConponent_o *p_conditionEntityArray; // x19
  System_Int32_array **conditionEntityArray; // x21
  struct WarBoardActionTrendEntity_o *Entity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *conditionIds; // x20
  WarBoardAIRoute_ActionTrendInfo___c_c *v7; // x0
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__8_0; // x21
  Il2CppObject *v10; // x22
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  v2 = this;
  if ( (byte_4388F1D & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    sub_B775C4(&Method_System_Func_int__WarBoardActionTrendConditionEntity___ctor__);
    sub_B775C4(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
    sub_B775C4(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__);
    this = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B775C4(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
    byte_4388F1D = 1;
  }
  p_conditionEntityArray = (BattleServantConfConponent_o *)&v2->fields.conditionEntityArray;
  conditionEntityArray = (System_Int32_array **)v2->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = v2->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_B7769C(this, method);
    conditionIds = (System_Collections_Generic_IEnumerable_TSource__o *)Entity_k__BackingField->fields.conditionIds;
    v7 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    if ( (BYTE3(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
      v7 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__8_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B77694(System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        _9__8_0,
        v10,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        (const MethodInfo_29E3F2C *)Method_System_Func_int__WarBoardActionTrendConditionEntity___ctor__);
      v11 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      v11->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v11->__9__8_0,
        (System_Int32_array **)_9__8_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           conditionIds,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_1D377F4 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v19 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v18,
            (const MethodInfo_1C664DC *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                    (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    p_conditionEntityArray->klass = (BattleServantConfConponent_c *)conditionEntityArray;
    sub_B77560(p_conditionEntityArray, conditionEntityArray, v20, v21, v22, v23, v24, v25);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438AC66 & 1) == 0 )
  {
    sub_B775C4(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
    byte_438AC66 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1

  if ( (byte_438AC67 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
    byte_438AC67 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7769C(0LL, v5);
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   Master_WarQuestSelectionMaster,
                                                   x,
                                                   (const MethodInfo_21FB894 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
}


void __fastcall WarBoardAIRoute_AdvantagePieceData___ctor(
        WarBoardAIRoute_AdvantagePieceData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_4388F1F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
    byte_4388F1F = 1;
  }
  *(_QWORD *)&this->fields.baseAARange = -1LL;
  *(_QWORD *)&this->fields.baseDARange = -1LL;
  this->fields.flagNow = 1LL;
  *(_QWORD *)&this->fields.baseCARange = -1LL;
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dicClassAdvantageServant,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v10,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dicClassDisAdvantageServant,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v17,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dicAttackAdvantageServant,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v24,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v24;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dicAttackDisAdvantageServant,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v31,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v31;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dicDefenseAdvantageServant,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v38,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v38;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dicDefenseDisAdvantageServant,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_DesignationItemData___ctor(
        WarBoardAIRoute_DesignationItemData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4388F20 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
    byte_4388F20 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_PiecePersonality___ctor(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4388F24 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
    byte_4388F24 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.ratingOffsetList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__AttackOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  BattleServantConfConponent_o *p_attackOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v6; // x0
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__4_0; // x21
  Il2CppObject *v9; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Int32_array **v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4388F21 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    sub_B775C4(&Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
    sub_B775C4(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
    sub_B775C4(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__);
    sub_B775C4(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_4388F21 = 1;
  }
  p_attackOffset = (BattleServantConfConponent_o *)&this->fields.attackOffset;
  result = this->fields.attackOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v6 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( (BYTE3(WarBoardAIRoute_PiecePersonality___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v6 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__4_0,
        v9,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
      v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      v10->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v10->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__4_0,
            (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v18 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v17,
                                   (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_attackOffset->klass = (BattleServantConfConponent_c *)v18;
    sub_B77560(p_attackOffset, v18, v19, v20, v21, v22, v23, v24);
    return (System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)p_attackOffset->klass;
  }
  return result;
}


System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4388F23 & 1) == 0 )
  {
    sub_B775C4(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    byte_4388F23 = 1;
  }
  v3 = sub_B77694(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6___ctor(
    (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)v3,
    -2,
    0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 40) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 40), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *)v3;
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__MoveOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  BattleServantConfConponent_o *p_moveOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v6; // x0
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x21
  Il2CppObject *v9; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Int32_array **v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4388F22 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    sub_B775C4(&Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
    sub_B775C4(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
    sub_B775C4(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__);
    sub_B775C4(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_4388F22 = 1;
  }
  p_moveOffset = (BattleServantConfConponent_o *)&this->fields.moveOffset;
  result = this->fields.moveOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v6 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( (BYTE3(WarBoardAIRoute_PiecePersonality___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v6 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__5_0,
        v9,
        Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__,
        (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
      v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      v10->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v10->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v18 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v17,
                                   (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_moveOffset->klass = (BattleServantConfConponent_c *)v18;
    sub_B77560(p_moveOffset, v18, v19, v20, v21, v22, v23, v24);
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
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v2; // x19
  int32_t _1__state; // w8
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *actionTrandList; // x0
  struct System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__o *p__7__wrap1; // x20
  __int128 v7; // q0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct WarBoardAIRoute_ActionTrendInfo_o *trendInfo_5__3; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *FutureTrendInfoList_k__BackingField; // x0
  struct System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__o *p__7__wrap3; // x20
  __int128 v17; // q0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **current; // x1
  bool result; // w0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+38h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_438AC69 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    this = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    byte_438AC69 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__7__wrap3 = &v2->fields.__7__wrap3;
LABEL_13:
    v2->fields.__1__state = -4;
    if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap3,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__) )
    {
      current = (System_Int32_array **)v2->fields.__7__wrap3.fields.current;
      v2->fields.__2__current = (struct WarBoardAIRoute_ActionTrendInfo_o *)current;
      sub_B77560((BattleServantConfConponent_o *)&v2->fields.__2__current, current, v25, v26, v27, v28, v29, v30);
      result = 1;
      v2->fields.__1__state = 2;
      return result;
    }
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(v2, v24);
    *(_QWORD *)&p__7__wrap3->fields.index = 0LL;
    p__7__wrap3->fields.current = 0LL;
    p__7__wrap3->fields.list = 0LL;
    v2->fields._trendInfo_5__3 = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields._trendInfo_5__3, 0LL, v33, v34, v35, v36, v37, v38);
    p__7__wrap1 = &v2->fields.__7__wrap1;
    goto LABEL_16;
  }
  if ( _1__state == 1 )
  {
    trendInfo_5__3 = v2->fields._trendInfo_5__3;
    v2->fields.__1__state = -3;
    if ( !trendInfo_5__3 )
      sub_B7769C(this, method);
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_B7769C(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v54,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    p__7__wrap3 = &v2->fields.__7__wrap3;
    v17 = *(_OWORD *)&v54.fields.list;
    v2->fields.__7__wrap3.fields.current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v54.fields.current;
    *(_OWORD *)&v2->fields.__7__wrap3.fields.list = v17;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields.__7__wrap3, 0LL, v18, v19, v20, v21, v22, v23);
    goto LABEL_13;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_B7769C(this, method);
  actionTrandList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.actionTrandList;
  if ( !actionTrandList )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v54,
    actionTrandList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  p__7__wrap1 = &v2->fields.__7__wrap1;
  v7 = *(_OWORD *)&v54.fields.list;
  v2->fields.__7__wrap1.fields.current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v54.fields.current;
  *(_OWORD *)&v2->fields.__7__wrap1.fields.list = v7;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.__7__wrap1, 0LL, v8, v9, v10, v11, v12, v13);
  v2->fields.__1__state = -3;
LABEL_16:
  if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
         (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
         (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__) )
  {
    v46 = (System_Int32_array **)v2->fields.__7__wrap1.fields.current;
    v2->fields._trendInfo_5__3 = (struct WarBoardAIRoute_ActionTrendInfo_o *)v46;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields._trendInfo_5__3, v46, v40, v41, v42, v43, v44, v45);
    v47 = (System_Int32_array **)v2->fields._trendInfo_5__3;
    v2->fields.__2__current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v47;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields.__2__current, v47, v48, v49, v50, v51, v52, v53);
    result = 1;
    v2->fields.__1__state = 1;
  }
  else
  {
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(v2, v39);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **_4__this; // x1

  if ( (byte_438AC6C & 1) == 0 )
  {
    sub_B775C4(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    byte_438AC6C = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_B77694(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    if ( !v4 )
      sub_B7769C(CurrentManagedThreadId, v6);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_B77560((BattleServantConfConponent_o *)(v4 + 40), _4__this, v7, v8, v9, v10, v11, v12);
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  if ( (byte_438AC6A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    byte_438AC6A = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_438AC6B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    byte_438AC6B = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap3,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438AC68 & 1) == 0 )
  {
    sub_B775C4(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_438AC68 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, 0LL);
  return x->fields.type == 0;
}


bool __fastcall WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.type == 1;
}


void __fastcall WarBoardAIRoute_PutSquareTarget___ctor(
        WarBoardAIRoute_PutSquareTarget_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4388F25 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
    byte_4388F25 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B77694(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v3,
    (const MethodInfo_2FCD3B0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B77694(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v10,
    (const MethodInfo_2FCD3B0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dicObjectPutSquareIndex,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B77694(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v17,
    (const MethodInfo_2FCD3B0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dicIndividualityPutSqareIndex,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData___ctor(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4388F28 & 1) == 0 )
  {
    sub_B775C4(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
    byte_4388F28 = 1;
  }
  this->fields.flagNow = 1LL;
  v3 = (WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)sub_B77694(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
  WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(v3, 0LL);
  this->fields.evalOffsetMagnification = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.evalOffsetMagnification,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData__CalcEvalValue(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t WarBoardEvalFactorsAffectRatio; // w20
  System_Decimal_o v5; // kr00_16
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x0
  System_Decimal_o MoveValue; // kr10_16
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *futureEvalOffsetMag; // x0
  System_Decimal_o Value; // kr20_16
  __int64 v10; // x24
  System_Decimal_c *v11; // x0
  __int64 v12; // x25
  System_Decimal_o AttackValue; // kr30_16
  __int64 v14; // x22
  int32_t attackEvalOffsetAddValue; // w24
  __int64 v16; // x23
  struct System_Decimal_StaticFields *static_fields; // x8
  System_Decimal_o v18; // kr40_16
  System_Decimal_o v19; // 0:x0.16
  System_Decimal_o v20; // 0:x0.16
  System_Decimal_o v21; // 0:x0.16
  System_Decimal_o v22; // 0:x2.16
  System_Decimal_o v23; // 0:x2.16

  if ( (byte_4388F2A & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&System_Decimal_TypeInfo);
    byte_4388F2A = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  WarBoardEvalFactorsAffectRatio = v3->static_fields->WarBoardEvalFactorsAffectRatio;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v5 = System_Decimal__op_Implicit_45002688(WarBoardEvalFactorsAffectRatio, 0LL);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_B7769C(0LL, *(_QWORD *)&v5.fields.lo);
  if ( (this->fields.flagNow & 2) != 0 )
  {
    AttackValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(evalOffsetMagnification, 0LL);
    v14 = *(_QWORD *)&AttackValue.fields.flags;
    attackEvalOffsetAddValue = this->fields.attackEvalOffsetAddValue;
    v16 = *(_QWORD *)&AttackValue.fields.lo;
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
      v10 = *(_QWORD *)&Value.fields.flags;
      v11 = System_Decimal_TypeInfo;
      v12 = *(_QWORD *)&Value.fields.lo;
    }
    else
    {
      v11 = System_Decimal_TypeInfo;
      if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
        v11 = System_Decimal_TypeInfo;
      }
      static_fields = v11->static_fields;
      v10 = *(_QWORD *)&static_fields->Zero.fields.flags;
      v12 = *(_QWORD *)&static_fields->Zero.fields.lo;
    }
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v11);
    *(_QWORD *)&v22.fields.flags = v10;
    *(_QWORD *)&v22.fields.lo = v12;
    v18 = System_Decimal__op_Addition(MoveValue, v22, 0LL);
    attackEvalOffsetAddValue = this->fields.moveEvalOffsetAddValue;
    v16 = *(_QWORD *)&v18.fields.lo;
    v14 = *(_QWORD *)&v18.fields.flags;
  }
  v19 = System_Decimal__op_Implicit_45002688(attackEvalOffsetAddValue, 0LL);
  v23 = System_Decimal__op_Division(v19, v5, 0LL);
  *(_QWORD *)&v20.fields.flags = v14;
  *(_QWORD *)&v20.fields.lo = v16;
  v21 = System_Decimal__op_Addition(v20, v23, 0LL);
  this->fields.evalValue = System_Decimal__op_Explicit_45003164(v21, 0LL);
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


bool __fastcall WarBoardAIRoute_RouteData__HasFlag_21240276(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_4388F27 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__);
    byte_4388F27 = 1;
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

  if ( (byte_4388F29 & 1) == 0 )
  {
    sub_B775C4(&WarBoardAIRoute_RouteData_TypeInfo);
    byte_4388F29 = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0LL);
  if ( result )
  {
    v4 = *(&WarBoardAIRoute_RouteData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v4
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[v4 - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      v5 = (WarBoardAIRoute___c_o *)sub_B77990(result);
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
  BattleServantConfConponent_o *p_futureLookingTrendHashSet; // x19
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v4; // x20
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // t1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4388F26 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    byte_4388F26 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = (BattleServantConfConponent_o *)&this->fields.futureLookingTrendHashSet;
  v4 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v4 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
      v4,
      (const MethodInfo_2EE2460 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    p_futureLookingTrendHashSet->klass = (BattleServantConfConponent_c *)v4;
    sub_B77560(p_futureLookingTrendHashSet, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
  }
  return (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)v4;
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

  if ( (byte_438AC6D & 1) == 0 )
  {
    sub_B775C4(&System_Decimal_TypeInfo);
    byte_438AC6D = 1;
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

  if ( (byte_438AC6E & 1) == 0 )
  {
    sub_B775C4(&System_Decimal_TypeInfo);
    byte_438AC6E = 1;
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


void __fastcall WarBoardAIRoute_TargetData___ctor_21244860(
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
  sub_B77560((BattleServantConfConponent_o *)v8, (System_Int32_array **)targetSquare, v9, v10, v11, v12, v13, v14);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_21244944(
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
  sub_B77560(
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


void __fastcall WarBoardAIRoute_TargetData___ctor_21245364(
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
    sub_B7769C(v11, v12);
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_B77560(
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
  sub_B77560(
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


void __fastcall WarBoardAIRoute_TargetData___ctor_21246452(
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
  sub_B77560(
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


void __fastcall WarBoardAIRoute_TargetData___ctor_21246568(
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
  if ( (byte_4388F2B & 1) == 0 )
  {
    b = (WarBoardAIRoute_TargetData_o *)sub_B775C4(&WarBoardAIRoute_TargetData_TypeInfo);
    byte_4388F2B = 1;
  }
  if ( !v2 )
LABEL_9:
    sub_B7769C(b, method);
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone(v2, 0LL);
  if ( result )
  {
    v4 = *(&WarBoardAIRoute_TargetData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v4
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[v4 - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      b = (WarBoardAIRoute_TargetData_o *)sub_B77990(result);
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
  struct IWarBoardObjectData_o *targetObject; // x8
  __int64 v10; // x11
  struct IWarBoardObjectData_o *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct IWarBoardObjectData_o *v18; // x8
  __int64 v19; // x11
  struct IWarBoardObjectData_o *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct IWarBoardObjectData_o *v27; // x8
  __int64 v28; // x11
  struct IWarBoardObjectData_o *v29; // x1

  if ( (byte_4388F2D & 1) == 0 )
  {
    sub_B775C4(&WarBoardItemData_TypeInfo);
    sub_B775C4(&WarBoardPieceData_TypeInfo);
    sub_B775C4(&WarBoardTreasureData_TypeInfo);
    byte_4388F2D = 1;
  }
  targetObject = this->fields.targetObject;
  if ( targetObject
    && (v10 = *(&WarBoardPieceData_TypeInfo->_2.bitflags2 + 1),
        *(&targetObject->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
  {
    if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[v10 - 1] == WarBoardPieceData_TypeInfo )
      v11 = this->fields.targetObject;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  this->fields.targetPiece = (struct WarBoardPieceData_o *)v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.targetPiece,
    (System_Int32_array **)v11,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v18 = this->fields.targetObject;
  if ( v18
    && (v19 = *(&WarBoardItemData_TypeInfo->_2.bitflags2 + 1), *(&v18->klass->_2.bitflags2 + 1) >= (unsigned int)v19) )
  {
    if ( (WarBoardItemData_c *)v18->klass->_2.typeHierarchy[v19 - 1] == WarBoardItemData_TypeInfo )
      v20 = this->fields.targetObject;
    else
      v20 = 0LL;
  }
  else
  {
    v20 = 0LL;
  }
  this->fields.targetItem = (struct WarBoardItemData_o *)v20;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.targetItem,
    (System_Int32_array **)v20,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v27 = this->fields.targetObject;
  if ( v27
    && (v28 = *(&WarBoardTreasureData_TypeInfo->_2.bitflags2 + 1), *(&v27->klass->_2.bitflags2 + 1) >= (unsigned int)v28) )
  {
    if ( (WarBoardTreasureData_c *)v27->klass->_2.typeHierarchy[v28 - 1] == WarBoardTreasureData_TypeInfo )
      v29 = this->fields.targetObject;
    else
      v29 = 0LL;
  }
  else
  {
    v29 = 0LL;
  }
  this->fields.targetTreasure = (struct WarBoardTreasureData_o *)v29;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.targetTreasure,
    (System_Int32_array **)v29,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void __fastcall WarBoardAIRoute_TargetData__Init(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  struct IWarBoardObjectData_o *targetObject; // x24
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v13; // x10
  IWarBoardObjectData_c **p_offset; // x11
  __int64 p_method; // x0
  struct WarBoardSquareData_o *targetSquare; // x8
  int32_t squareIndex_k__BackingField; // w24
  __int64 v18; // x0
  __int64 v19; // x1
  struct System_Int32_array *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array *baseRoute; // x24
  WarBoardAIRoute_TargetData___c_c *v28; // x0
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x25
  Il2CppObject *v31; // x26
  struct WarBoardAIRoute_TargetData___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Int32_array *v40; // x0
  bool IsDetour; // w0
  int32_t nowSquareIndex; // w23
  struct System_Int32_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int32_t v50; // w0
  struct IWarBoardObjectData_o *v51; // x21
  WarBoardAIRoute_TargetData_o *v52; // x22
  IWarBoardObjectData_c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  struct WarBoardSquareData_o *v57; // x8

  if ( (byte_4388F2C & 1) == 0 )
  {
    sub_B775C4(&AStarSearch_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Func_WarBoardPieceData__int___ctor__);
    sub_B775C4(&System_Func_WarBoardPieceData__int__TypeInfo);
    sub_B775C4(&IWarBoardObjectData_TypeInfo);
    sub_B775C4(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__);
    sub_B775C4(&WarBoardAIRoute_TargetData___c_TypeInfo);
    byte_4388F2C = 1;
  }
  WarBoardAIRoute_TargetData__DetectObject(this, (const MethodInfo *)baseTargetData);
  targetObject = this->fields.targetObject;
  if ( targetObject )
  {
    klass = targetObject->klass;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v13;
        p_offset += 2;
        if ( v13 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_8:
      p_method = sub_B0F4C0(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1LL);
    }
    v18 = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
            targetObject,
            *(_QWORD *)(p_method + 8));
    if ( !this )
LABEL_49:
      sub_B7769C(v18, v19);
    squareIndex_k__BackingField = v18;
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
  v20 = AStarSearch__RouteSearch(0LL, baseSquareIndex, squareIndex_k__BackingField, 0, 0LL, 0LL);
  this->fields.baseRoute = v20;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.baseRoute,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  baseRoute = this->fields.baseRoute;
  v28 = WarBoardAIRoute_TargetData___c_TypeInfo;
  if ( (BYTE3(WarBoardAIRoute_TargetData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIRoute_TargetData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIRoute_TargetData___c_TypeInfo);
    v28 = WarBoardAIRoute_TargetData___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v31,
      Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__,
      (const MethodInfo_29E9E70 *)Method_System_Func_WarBoardPieceData__int___ctor__);
    v32 = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    v32->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v32->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v40 = System_Linq_Enumerable__ToArray_int_(
          v39,
          (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v40, 0LL);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    nowSquareIndex = this->fields.nowSquareIndex;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v43 = AStarSearch__RouteSearch(piece, baseSquareIndex, nowSquareIndex, 1, 0LL, 0LL);
    this->fields.detourRoute = v43;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.detourRoute,
      (System_Int32_array **)v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  v50 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
  v51 = this->fields.targetObject;
  this->fields.isAround = v50 == 2;
  if ( v51 )
    v52 = this;
  else
    v52 = 0LL;
  if ( v51 )
  {
    v53 = v51->klass;
    if ( *(_WORD *)&v51->klass->_2.bitflags1 )
    {
      v54 = 0LL;
      v55 = &v53->_1.interfaceOffsets->offset;
      while ( *((IWarBoardObjectData_c **)v55 - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v54;
        v55 += 4;
        if ( v54 >= *(unsigned __int16 *)&v51->klass->_2.bitflags1 )
          goto LABEL_38;
      }
      v56 = (__int64)&v53->vtable[*v55].method;
    }
    else
    {
LABEL_38:
      v56 = sub_B0F4C0(v51, IWarBoardObjectData_TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v56)(v51, *(_QWORD *)(v56 + 8));
    if ( !v52 )
      goto LABEL_49;
  }
  else
  {
    v57 = this->fields.targetSquare;
    if ( v57 )
      v18 = (unsigned int)v57->fields._squareIndex_k__BackingField;
    else
      v18 = 0xFFFFFFFFLL;
    v52 = this;
  }
  v52->fields.putSquareIndex = v18;
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438AC6F & 1) == 0 )
  {
    sub_B775C4(&WarBoardAIRoute_TargetData___c_TypeInfo);
    byte_438AC6F = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(WarBoardAIRoute_TargetData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, 0LL);
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
  int32_t _1__state; // w8
  bool result; // w0
  WebViewManager_o *Instance; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct WarBoardData_o *v18; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v19; // x21
  BattleServantConfConponent_o *p_warBoardData_5__2; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t v24; // w8
  struct WarBoardStageNpcEntity_o *v25; // x9
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o **p_routeDataList; // x24
  int32_t RequiredCost; // w22
  WebViewManager_o *v28; // x0
  __int64 v29; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v30; // x22
  System_Collections_Generic_Dictionary_int__uint__o **p_piecePlaceData; // x19
  int32_t MasterSquareIndex; // w0
  System_Int32_array **AllyPutSquareIndicesWithoutMaster; // x0
  System_Int32_array **p_allyPieceIndexs_5__5; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  BattleServantConfConponent_o *p_defenseAreaData_5__7; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x0
  __int64 v49; // x1
  System_Collections_Generic_List_int__o *v50; // x0
  _BOOL8 v51; // x0
  __int64 v52; // x1
  struct System_Int32_array **p__7__wrap23; // x26
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **p_basePieceBasePieceRouteList_5__23; // x20
  int32_t servantAndEnemyRange_5__14; // w8
  int32_t servantAndEnemyMasterRange_5__15; // w9
  int32_t *p__7__wrap24; // x19
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w8
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x0
  __int64 v68; // x1
  BattleServantConfConponent_c *v69; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v70; // x9
  WarBoardAIRoute__CreateRouteData_d__47_o *v71; // x20
  __int128 v72; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_int__uint__o *p__7__wrap8; // x26
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  BattleServantConfConponent_o *p__8__1; // x22
  BattleServantConfConponent_o *p_baseSquareIndex_5__10; // x21
  const MethodInfo *v82; // x1
  Il2CppObject *key; // x23
  Il2CppObject *v84; // x27
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **Square; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  BattleServantConfConponent_c *klass; // x27
  System_Int32_array **PieceUnique; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  __int64 v106; // x0
  __int64 v107; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v108; // x9
  int64_t baseFlag_5__6; // x24
  struct WarBoardAIRoute___c__DisplayClass47_0_o *_8__1; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v111; // x28
  System_Collections_Generic_IEnumerable_TSource__o *routeDataList; // x27
  Il2CppObject *v113; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v114; // x28
  __int64 v115; // x1
  int32_t v116; // w8
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v117; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  __int64 RouteSumPieceActionCost; // x0
  __int64 v120; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v121; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v122; // x8
  _BOOL8 IsActable; // x0
  __int64 v124; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v125; // x19
  System_Int32_array **DesignationItemToDistance; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  __int64 v133; // x0
  __int64 v134; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v135; // x24
  System_Int32_array **TargetToDistance_21356736; // x0
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Int32_array **AllEnemyToDistance; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  BattleServantConfConponent_o *p_dicEnemyRange_5__20; // x24
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  __int64 v157; // x0
  __int64 v158; // x1
  WarBoardPieceData_o *name; // x0
  _BOOL8 isServant; // x0
  __int64 v161; // x1
  System_Int32_array **AdvantagePieceData; // x0
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  int32_t v169; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v170; // x0
  __int64 v171; // x0
  __int64 v172; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v173; // x10
  struct WarBoardPieceData_o *basePiece; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v175; // x9
  struct WarBoardStageNpcEntity_o *v176; // x11
  int32_t v177; // w10
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v178; // x24
  WarBoardAIRoute__CreateRouteData_d__47_o *v179; // x23
  BattleServantConfConponent_o *p_advantagePieceData_5__21; // x23
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v187; // x25
  WarBoardAIRoute__CreateRouteData_d__47_o *v188; // x24
  BattleServantConfConponent_o *p_basePieceActionPieceRouteList_5__22; // x24
  System_String_array **v190; // x2
  System_String_array **v191; // x3
  System_Boolean_array **v192; // x4
  System_Int32_array **v193; // x5
  System_Int32_array *v194; // x6
  System_Int32_array *v195; // x7
  __int64 v196; // x1
  _BOOL8 v197; // x0
  __int64 v198; // x1
  Il2CppObject *v199; // x25
  Il2CppClass *v200; // x8
  const char *v201; // x9
  _DWORD *monitor; // x8
  const char *v203; // x9
  WarBoardAIRoute__CreateRouteData_d__47_o *v204; // x19
  __int64 v205; // x0
  __int64 v206; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v207; // x21
  WarBoardAIRoute___c_c *v208; // x0
  struct WarBoardAIRoute___c_StaticFields *v209; // x8
  System_Func_T__TResult__o *_9__47_6; // x22
  Il2CppObject *v211; // x23
  struct WarBoardAIRoute___c_StaticFields *v212; // x0
  System_String_array **v213; // x2
  System_String_array **v214; // x3
  System_Boolean_array **v215; // x4
  System_Int32_array **v216; // x5
  System_Int32_array *v217; // x6
  System_Int32_array *v218; // x7
  __int64 v219; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v220; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v221; // x0
  __int64 Count; // x0
  __int64 v223; // x1
  struct WarBoardStageNpcEntity_o *v224; // x8
  float v225; // s0
  WarBoardAIRoute__CreateRouteData_d__47_o *v226; // x10
  double v227; // d0
  int v228; // w8
  struct WarBoardStageNpcEntity_o *v229; // x9
  int calcEllipsisMin; // w9
  System_Linq_IOrderedEnumerable_TSource__c *v231; // x8
  unsigned __int64 v232; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v235; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v236; // x19
  System_Int32_array **MyAndLinkedSquareIndecies; // x0
  System_String_array **v238; // x2
  System_String_array **v239; // x3
  System_Boolean_array **v240; // x4
  System_Int32_array **v241; // x5
  System_Int32_array *v242; // x6
  System_Int32_array *v243; // x7
  int v244; // w8
  System_Int32_array **v245; // x0
  System_String_array **v246; // x2
  System_String_array **v247; // x3
  System_Boolean_array **v248; // x4
  System_Int32_array **v249; // x5
  System_Int32_array *v250; // x6
  System_Int32_array *v251; // x7
  __int64 *v252; // x21
  __int64 v253; // x8
  unsigned __int64 v254; // x10
  int *v255; // x11
  __int64 v256; // x0
  __int64 v257; // x0
  __int64 *v258; // x19
  __int64 v259; // x8
  unsigned __int64 v260; // x10
  int *v261; // x11
  __int64 v262; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v263; // x19
  System_String_array **v264; // x2
  System_String_array **v265; // x3
  System_Boolean_array **v266; // x4
  System_Int32_array **v267; // x5
  System_Int32_array *v268; // x6
  System_Int32_array *v269; // x7
  Il2CppObject *v270; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v271; // x19
  WarBoardAIRoute__CreateRouteData_d__47_o *v272; // x0
  System_String_array **v273; // x2
  System_String_array **v274; // x3
  System_Boolean_array **v275; // x4
  System_Int32_array **v276; // x5
  System_Int32_array *v277; // x6
  System_Int32_array *v278; // x7
  __int64 v279; // x23
  __int64 v280; // x0
  __int64 v281; // x1
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v282; // x8
  __int64 v283; // x9
  int32_t *v284; // x28
  WarBoardAIRoute_RouteData_o *v285; // x22
  const MethodInfo *v286; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v287; // x10
  int32_t getEnumeratorRetType; // w8
  int32_t v289; // w9
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v290; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dicBaseDIRange_5__18; // x22
  WarBoardAIRoute___c_c *v292; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *_9__47_1; // x24
  Il2CppObject *v295; // x25
  struct WarBoardAIRoute___c_StaticFields *v296; // x0
  System_String_array **v297; // x2
  System_String_array **v298; // x3
  System_Boolean_array **v299; // x4
  System_Int32_array **v300; // x5
  System_Int32_array *v301; // x6
  System_Int32_array *v302; // x7
  struct WarBoardAIRoute___c_StaticFields *v303; // x8
  System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *_9__47_2; // x25
  struct System_Int32_array **v305; // x19
  Il2CppObject *v306; // x26
  struct WarBoardAIRoute___c_StaticFields *v307; // x0
  System_String_array **v308; // x2
  System_String_array **v309; // x3
  System_Boolean_array **v310; // x4
  System_Int32_array **v311; // x5
  System_Int32_array *v312; // x6
  System_Int32_array *v313; // x7
  __int64 v314; // x1
  System_String_array **v315; // x2
  System_String_array **v316; // x3
  System_Boolean_array **v317; // x4
  System_Int32_array **v318; // x5
  System_Int32_array *v319; // x6
  System_Int32_array *v320; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v321; // x22
  WarBoardAIRoute_RouteData_o *v322; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v323; // x21
  struct WarBoardSquareData_o *v324; // x1
  __int64 v325; // x1
  System_String_array **v326; // x2
  System_String_array **v327; // x3
  System_Boolean_array **v328; // x4
  System_Int32_array **v329; // x5
  System_Int32_array *v330; // x6
  System_Int32_array *v331; // x7
  WarBoardAIRoute_RouteData_o *v332; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v333; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o **v334; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v335; // t1
  struct WarBoardPieceData_o *v336; // x1
  __int64 v337; // x1
  System_String_array **v338; // x2
  System_String_array **v339; // x3
  System_Boolean_array **v340; // x4
  System_Int32_array **v341; // x5
  System_Int32_array *v342; // x6
  System_Int32_array *v343; // x7
  WarBoardAIRoute_RouteData_o *v344; // x0
  WarBoardAIRoute_RouteData_o *v345; // x24
  int32_t v346; // w25
  System_Int32_array **v347; // x0
  System_String_array **v348; // x2
  System_String_array **v349; // x3
  System_Boolean_array **v350; // x4
  System_Int32_array **v351; // x5
  System_Int32_array *v352; // x6
  System_Int32_array *v353; // x7
  __int64 v354; // x1
  struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v356; // x19
  __int64 v357; // x1
  struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v358; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v360; // x0
  WarBoardAIRoute_RouteData_o *v361; // x24
  System_Int32_array **MoveByTargetDistance; // x0
  System_String_array **v363; // x2
  System_String_array **v364; // x3
  System_Boolean_array **v365; // x4
  System_Int32_array **v366; // x5
  System_Int32_array *v367; // x6
  System_Int32_array *v368; // x7
  __int64 v369; // x0
  __int64 v370; // x1
  WarBoardAIRoute_RouteData_o *v371; // x22
  System_Int32_array **ActionPiece; // x0
  System_String_array **v373; // x2
  System_String_array **v374; // x3
  System_Boolean_array **v375; // x4
  System_Int32_array **v376; // x5
  System_Int32_array *v377; // x6
  System_Int32_array *v378; // x7
  BattleServantConfConponent_o *p_actionPiece; // x0
  __int64 v380; // x1
  System_String_array **v381; // x2
  System_String_array **v382; // x3
  System_Boolean_array **v383; // x4
  System_Int32_array **v384; // x5
  System_Int32_array *v385; // x6
  System_Int32_array *v386; // x7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v387; // x8
  struct WarBoardPieceData_o *v388; // x9
  struct WarBoardPieceData_o *v389; // x10
  struct WarBoardPieceData_o *v390; // x8
  __int64 v391; // x0
  __int64 v392; // x1
  WarBoardAIRoute_RouteData_o *v393; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v394; // x10
  struct WarBoardSquareData_o *baseSquare_5__11; // x9
  WarBoardData_o *warBoardData_5__2; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v397; // x22
  WarBoardPieceData_o *v398; // x0
  WarBoardPieceData_o *v399; // x0
  WarBoardPieceData_o *v400; // x22
  WarBoardPieceData_o *v401; // x24
  WarBoardPieceData_o *v402; // x0
  WarBoardPieceData_o *v403; // x0
  WarBoardAIRoute_RouteData_o *v404; // x8
  struct WarBoardPieceData_o *v405; // x9
  WarBoardPieceData_o *v406; // x0
  WarBoardAIRoute_RouteData_o *v407; // x19
  struct WarBoardPieceData_o *v408; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v410; // x24
  int64_t flagNow; // x20
  __int64 ClassId; // x0
  __int64 v413; // x1
  struct WarBoardPieceData_o *v414; // x8
  int32_t v415; // w22
  BattleServantData_o *v416; // x0
  int32_t v417; // w2
  int64_t FlagAdvantage; // x0
  __int64 v419; // x1
  BattleServantConfConponent_o *v420; // x0
  System_String_array **v421; // x2
  System_String_array **v422; // x3
  System_Boolean_array **v423; // x4
  System_Int32_array **v424; // x5
  System_Int32_array *v425; // x6
  System_Int32_array *v426; // x7
  System_String_array **v427; // x2
  System_String_array **v428; // x3
  System_Boolean_array **v429; // x4
  System_Int32_array **v430; // x5
  System_Int32_array *v431; // x6
  System_Int32_array *v432; // x7
  System_String_array **v433; // x2
  System_String_array **v434; // x3
  System_Boolean_array **v435; // x4
  System_Int32_array **v436; // x5
  System_Int32_array *v437; // x6
  System_Int32_array *v438; // x7
  System_String_array **v439; // x2
  System_String_array **v440; // x3
  System_Boolean_array **v441; // x4
  System_Int32_array **v442; // x5
  System_Int32_array *v443; // x6
  System_Int32_array *v444; // x7
  System_String_array **v445; // x2
  System_String_array **v446; // x3
  System_Boolean_array **v447; // x4
  System_Int32_array **v448; // x5
  System_Int32_array *v449; // x6
  System_Int32_array *v450; // x7
  System_String_array **v451; // x2
  System_String_array **v452; // x3
  System_Boolean_array **v453; // x4
  System_Int32_array **v454; // x5
  System_Int32_array *v455; // x6
  System_Int32_array *v456; // x7
  System_String_array **v457; // x2
  System_String_array **v458; // x3
  System_Boolean_array **v459; // x4
  System_Int32_array **v460; // x5
  System_Int32_array *v461; // x6
  System_Int32_array *v462; // x7
  System_String_array **v463; // x2
  System_String_array **v464; // x3
  System_Boolean_array **v465; // x4
  System_Int32_array **v466; // x5
  System_Int32_array *v467; // x6
  System_Int32_array *v468; // x7
  struct WarBoardPieceData_o *v469; // x22
  WarBoardPieceData_o *v470; // x24
  WarBoardAIRoute_RouteData_o *v471; // x2
  WarBoardPieceData_o *v472; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v473; // x19
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v474; // x0
  WarBoardPieceData_o *v475; // x22
  WarBoardPieceData_o *v476; // x24
  int32_t requiredCost_5__3; // w25
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v478; // x0
  int32_t MasterSquareIndexFromPlaceData; // w24
  System_Collections_Generic_IEnumerable_TSource__o *basePieceActionPieceRouteList_5__22; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v481; // x26
  DefenseAreaData_o *DefenseAreaData; // x0
  __int64 v483; // x1
  struct WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData_5__21; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v485; // x26
  struct DefenseAreaData_o *defenseAreaData_5__7; // x25
  WarBoardPieceData_o *v487; // x0
  System_Int32_array *v488; // x2
  struct WarBoardAIRoute_AIRouteMasterData_o *v489; // x8
  _BOOL8 IsAllBlockShortestRouteEnemyAndMastr; // x0
  __int64 v491; // x1
  WarBoardAIRoute_RouteData_o *v492; // x23
  int64_t v493; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v494; // x25
  __int64 v495; // x0
  __int64 v496; // x1
  System_String_array **v497; // x2
  System_String_array **v498; // x3
  System_Boolean_array **v499; // x4
  System_Int32_array **v500; // x5
  System_Int32_array *v501; // x6
  System_Int32_array *v502; // x7
  __int64 v503; // x0
  __int64 v504; // x1
  WarBoardAIRoute_RouteData_o *v505; // x23
  System_Collections_Generic_Dictionary_uint__int__o *v506; // x25
  System_String_array **v507; // x2
  System_String_array **v508; // x3
  System_Boolean_array **v509; // x4
  System_Int32_array **v510; // x5
  System_Int32_array *v511; // x6
  System_Int32_array *v512; // x7
  __int64 v513; // x1
  System_Collections_Generic_Dictionary_int__uint__o *v514; // x0
  _BOOL8 v515; // x0
  __int64 v516; // x1
  struct WarBoardPieceData_o *v517; // x8
  uint32_t key_high; // w23
  int32_t v519; // w26
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x25
  int32_t v521; // w27
  System_Collections_Generic_IEnumerable_TSource__o *v522; // x0
  __int64 v523; // x0
  __int64 v524; // x1
  WarBoardAIRoute_RouteData_o *v525; // x23
  System_Collections_Generic_List_int__o *v526; // x25
  __int64 v527; // x0
  __int64 v528; // x1
  System_String_array **v529; // x2
  System_String_array **v530; // x3
  System_Boolean_array **v531; // x4
  System_Int32_array **v532; // x5
  System_Int32_array *v533; // x6
  System_Int32_array *v534; // x7
  WarBoardAIRoute_RouteData_o *v535; // x23
  System_Collections_Generic_Dictionary_int__bool__o *v536; // x25
  __int64 v537; // x0
  __int64 v538; // x1
  System_String_array **v539; // x2
  System_String_array **v540; // x3
  System_Boolean_array **v541; // x4
  System_Int32_array **v542; // x5
  System_Int32_array *v543; // x6
  System_Int32_array *v544; // x7
  WarBoardAIRoute_RouteData_o *v545; // x23
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *v546; // x25
  __int64 v547; // x0
  __int64 v548; // x1
  System_String_array **v549; // x2
  System_String_array **v550; // x3
  System_Boolean_array **v551; // x4
  System_Int32_array **v552; // x5
  System_Int32_array *v553; // x6
  System_Int32_array *v554; // x7
  __int64 v555; // x0
  __int64 v556; // x1
  WarBoardAIRoute_RouteData_o *v557; // x8
  WarBoardPieceData_o *v558; // x0
  _BOOL8 IsBlockShortestRouteEnemyAndMaster; // x0
  __int64 v560; // x1
  struct WarBoardPieceData_o *v561; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v562; // x9
  DefenseAreaData_o *v563; // x0
  struct WarBoardPieceData_o *v564; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v565; // x10
  int32_t v566; // w9
  struct WarBoardPieceData_o *v567; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v568; // x9
  int32_t v569; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v570; // x0
  int32_t v571; // w0
  WarBoardAIRoute_RouteData_o *v572; // x19
  __int64 v573; // x0
  System_Collections_Generic_Dictionary_int__int__o *v574; // x0
  int32_t v575; // w23
  int32_t v576; // w24
  int32_t v577; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v578; // x0
  __int64 v579; // x0
  __int64 v580; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x25
  __int64 v582; // x0
  __int64 v583; // x1
  __int64 v584; // x0
  __int64 v585; // x1
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  __int64 v587; // x0
  __int64 v588; // x1
  System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  int32_t v590; // w23
  int32_t enemyMasterSquareIndex; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v592; // x0
  int32_t v593; // w0
  WarBoardAIRoute_RouteData_o *v594; // x19
  __int64 v595; // x0
  __int64 v596; // x1
  WarBoardAIRoute_RouteData_o *v597; // x19
  WarBoardAIManager_c *v598; // x0
  __int64 v599; // x0
  __int64 v600; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v601; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v602; // x8
  WarBoardPieceData_o *v603; // x0
  struct WarBoardPieceData_o *v604; // x9
  WarBoardAIManager_c *v605; // x0
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *dicSquareIndexEnemyPiece; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v608; // x1
  int32_t currentKey; // w23
  int32_t v610; // w24
  System_Int32_array *v611; // x0
  __int64 v612; // x1
  struct WarBoardStageNpcEntity_o *v613; // x8
  __int64 v614; // x1
  WarBoardAIRoute_RouteData_o *v615; // x20
  WarBoardAIManager_c *v616; // x0
  struct DefenseAreaData_o *v617; // x8
  __int64 v618; // x0
  __int64 v619; // x1
  WarBoardAIManager_c *v620; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v621; // x0
  int32_t v622; // w23
  int32_t v623; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v624; // x23
  int v625; // w19
  WarBoardAIRoute_RouteData_o *v626; // x19
  System_Collections_Generic_Dictionary_int__uint__o *v627; // x22
  WarBoardData_o *v628; // x0
  WarBoardEffectData_o *Effect; // x0
  __int64 v630; // x1
  System_Collections_Generic_List_int__o *v631; // x23
  __int64 v632; // x1
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v633; // x0
  _BOOL8 v634; // x0
  __int64 v635; // x1
  Il2CppObject *v636; // x21
  Il2CppClass *v637; // x0
  _BOOL8 v638; // x0
  __int64 v639; // x1
  WarBoardPieceData_o *v640; // x0
  __int64 v641; // x1
  WarBoardPieceData_o *v642; // x0
  _BOOL8 v643; // x0
  __int64 v644; // x1
  __int64 v645; // x0
  __int64 v646; // x1
  WarBoardPieceData_o *v647; // x0
  _BOOL8 v648; // x0
  __int64 v649; // x1
  _BOOL8 CanAcquireItem; // x0
  __int64 v651; // x1
  WarBoardAIRoute_RouteData_o *v652; // x8
  int64_t v653; // x9
  WarBoardPieceData_o *v654; // x0
  _BOOL8 isMaster; // x0
  __int64 v656; // x1
  _BOOL8 v657; // x0
  __int64 v658; // x1
  WarBoardAIRoute_RouteData_o *v659; // x8
  WarBoardPieceData_o *v660; // x0
  _BOOL8 v661; // x0
  __int64 v662; // x1
  _BOOL8 v663; // x0
  __int64 v664; // x1
  __int64 v665; // x0
  __int64 v666; // x1
  __int64 FlagOutOfWarningAreaToDistance; // x0
  __int64 v668; // x1
  WarBoardAIRoute_RouteData_o *v669; // x8
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x9
  struct WarBoardPieceData_o *v671; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *piecePersonalityDic; // x0
  WarBoardAIRoute_PiecePersonality_o *v673; // x24
  WarBoardAIEvalCalcurater_o *v674; // x23
  __int64 v675; // x0
  __int64 v676; // x1
  const MethodInfo *v677; // x1
  WarBoardAIRoute___c_c *v678; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v679; // x24
  struct WarBoardAIRoute___c_StaticFields *v680; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__47_5; // x25
  Il2CppObject *v682; // x26
  struct WarBoardAIRoute___c_StaticFields *v683; // x0
  System_String_array **v684; // x2
  System_String_array **v685; // x3
  System_Boolean_array **v686; // x4
  System_Int32_array **v687; // x5
  System_Int32_array *v688; // x6
  System_Int32_array *v689; // x7
  System_Collections_Generic_IEnumerable_T__o *v690; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v691; // x24
  __int64 v692; // x0
  __int64 v693; // x1
  WarBoardAIRoute_RouteData_o *v694; // x0
  __int64 v695; // x1
  const MethodInfo *v696; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *allRouteList; // x0
  int32_t searchCount; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x23
  Il2CppObject *v700; // x0
  Il2CppObject *v701; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v702; // x0
  System_String_array **v703; // x2
  System_String_array **v704; // x3
  System_Boolean_array **v705; // x4
  System_Int32_array **v706; // x5
  System_Int32_array *v707; // x6
  System_Int32_array *v708; // x7
  __int64 v709; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **v710; // [xsp+0h] [xbp-200h]
  struct System_Int32_array **v711; // [xsp+8h] [xbp-1F8h]
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // [xsp+10h] [xbp-1F0h]
  int32_t *p_masterSquareIndex_5__4; // [xsp+18h] [xbp-1E8h]
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v714; // [xsp+18h] [xbp-1E8h]
  struct WarBoardAIRoute_o *_4__this; // [xsp+20h] [xbp-1E0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v716; // [xsp+28h] [xbp-1D8h] BYREF
  __int128 v717; // [xsp+50h] [xbp-1B0h]
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+60h] [xbp-1A0h]
  _DWORD v719[12]; // [xsp+78h] [xbp-188h]
  int v720; // [xsp+A8h] [xbp-158h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v721; // [xsp+B0h] [xbp-150h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v722; // [xsp+E0h] [xbp-120h] BYREF
  __int128 v723; // [xsp+100h] [xbp-100h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o endSquare; // [xsp+110h] [xbp-F0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v725; // [xsp+120h] [xbp-E0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+148h] [xbp-B8h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+150h] [xbp-B0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+158h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v729; // [xsp+160h] [xbp-A0h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+180h] [xbp-80h] BYREF
  int32_t actionCount[6]; // [xsp+188h] [xbp-78h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v732; // [xsp+1A8h] [xbp-58h]

  v732 = this;
  if ( (byte_4388F18 & 1) == 0 )
  {
    sub_B775C4(&AStarSearch_TypeInfo);
    sub_B775C4(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_B775C4(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_B775C4(&Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData___ctor__);
    sub_B775C4(&Method_System_Func_KeyValuePair_IEnumerator__float___float___ctor__);
    sub_B775C4(&Method_System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___ctor__);
    sub_B775C4(&Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long___ctor__);
    sub_B775C4(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    sub_B775C4(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
    sub_B775C4(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
    sub_B775C4(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
    sub_B775C4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_B775C4(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
    sub_B775C4(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_B775C4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___69420960);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_B775C4(&WarBoardAIRoute_RouteData_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__);
    sub_B775C4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__);
    sub_B775C4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__);
    sub_B775C4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__);
    sub_B775C4(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__);
    sub_B775C4(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
    sub_B775C4(&WarBoardAIRoute___c_TypeInfo);
    sub_B775C4(&WarBoardAIEvalCalcurater_TypeInfo);
    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)sub_B775C4(&WarBoardAIManager_TypeInfo);
    byte_4388F18 = 1;
  }
  *(_QWORD *)masterReplaceCount = 0LL;
  *(_QWORD *)actionCount = 0LL;
  value = 0LL;
  routeData = 0LL;
  route = 0LL;
  memset(&v729, 0, sizeof(v729));
  memset(&v725, 0, 32);
  v723 = 0u;
  endSquare = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v722, 0, sizeof(v722));
  memset(&v721, 0, sizeof(v721));
  v720 = 0;
  _1__state = v732->fields.__1__state;
  if ( _1__state == 2 )
  {
    servantAndEnemyRange_5__14 = v732->fields._servantAndEnemyRange_5__14;
    servantAndEnemyMasterRange_5__15 = v732->fields._servantAndEnemyMasterRange_5__15;
    v732->fields.__1__state = -4;
    if ( servantAndEnemyRange_5__14 < servantAndEnemyMasterRange_5__15 )
    {
LABEL_140:
      v263 = v732;
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(v732, method);
      *(_QWORD *)&v263->fields.__7__wrap24 = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&v263->fields.__7__wrap24, 0LL, v264, v265, v266, v267, v268, v269);
      return 0;
    }
    p__7__wrap24 = &v732->fields.__7__wrap24;
LABEL_126:
    v252 = *(__int64 **)p__7__wrap24;
    if ( !*(_QWORD *)p__7__wrap24 )
      sub_B7769C(this, method);
    v253 = *v252;
    if ( *(_WORD *)(*v252 + 298) )
    {
      v254 = 0LL;
      v255 = (int *)(*(_QWORD *)(v253 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v255 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v254;
        v255 += 4;
        if ( v254 >= *(unsigned __int16 *)(*v252 + 298) )
          goto LABEL_131;
      }
      v256 = v253 + 16LL * *v255 + 312;
    }
    else
    {
LABEL_131:
      v256 = sub_B0F4C0(*(_QWORD *)p__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v257 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v256)(v252, *(_QWORD *)(v256 + 8));
    if ( (v257 & 1) != 0 )
    {
      v258 = *(__int64 **)p__7__wrap24;
      if ( !v258 )
        sub_B7769C(v257, method);
      v259 = *v258;
      if ( *(_WORD *)(*v258 + 298) )
      {
        v260 = 0LL;
        v261 = (int *)(*(_QWORD *)(v259 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v261 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          ++v260;
          v261 += 4;
          if ( v260 >= *(unsigned __int16 *)(*v258 + 298) )
            goto LABEL_139;
        }
        v262 = v259 + 16LL * *v261 + 312;
      }
      else
      {
LABEL_139:
        v262 = sub_B0F4C0(v258, System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo, 0LL);
      }
      v270 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v262)(v258, *(_QWORD *)(v262 + 8));
      v271 = v732;
      v272 = v732;
      v732->fields.__2__current = v270;
      v272 = (WarBoardAIRoute__CreateRouteData_d__47_o *)((char *)v272 + 24);
      ++LODWORD(v272->fields._baseSquare_5__11);
      sub_B77560((BattleServantConfConponent_o *)v272, (System_Int32_array **)v270, v273, v274, v275, v276, v277, v278);
      result = 1;
      v271->fields.__1__state = 2;
      return result;
    }
    goto LABEL_140;
  }
  _4__this = v732->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap23 = &v732->fields.__7__wrap23;
    p_basePieceBasePieceRouteList_5__23 = &v732->fields._basePieceBasePieceRouteList_5__23;
    v732->fields.__1__state = -3;
    goto LABEL_543;
  }
  result = 0;
  if ( !_1__state )
  {
    v732->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      sub_B7769C(0LL, v11);
    v18 = *(struct WarBoardData_o **)&Instance[4].fields.m_CachedPtr;
    v19 = v732;
    v732->fields._warBoardData_5__2 = v18;
    p_warBoardData_5__2 = (BattleServantConfConponent_o *)&v19->fields._warBoardData_5__2;
    sub_B77560(p_warBoardData_5__2, (System_Int32_array **)v18, v12, v13, v14, v15, v16, v17);
    if ( !_4__this )
      sub_B7769C(v21, v22);
    npcData = _4__this->fields.npcData;
    if ( !npcData )
      sub_B7769C(v21, v22);
    if ( !npcData->fields.searchDepth )
      npcData->fields.searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
    v24 = v732->fields.searchCount + 1;
    v732->fields.searchCount = v24;
    v25 = _4__this->fields.npcData;
    if ( !v25 )
      sub_B7769C(v21, v22);
    if ( v24 > v25->fields.searchDepth )
      return 0;
    *(_QWORD *)masterReplaceCount = 0LL;
    *(_QWORD *)actionCount = 0LL;
    p_routeDataList = &v732->fields.routeDataList;
    WarBoardAIRoute__GetRouteDataActionList(
      _4__this,
      v732->fields.routeDataList,
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
    v732->fields._requiredCost_5__3 = RequiredCost;
    v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v28 )
      sub_B7769C(0LL, v29);
    if ( RequiredCost >= *((_DWORD *)&v28[7].fields.SingletonMonoBehaviour_WebViewManager__Fields + 1) )
      return 0;
    v30 = v732;
    p_piecePlaceData = &v732->fields.piecePlaceData;
    MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v732->fields.piecePlaceData, 0LL);
    v30->fields._masterSquareIndex_5__4 = MasterSquareIndex;
    p_masterSquareIndex_5__4 = &v30->fields._masterSquareIndex_5__4;
    AllyPutSquareIndicesWithoutMaster = (System_Int32_array **)WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                                                 _4__this,
                                                                 v30->fields.piecePlaceData,
                                                                 MasterSquareIndex,
                                                                 0LL);
    v30->fields._allyPieceIndexs_5__5 = (struct System_Int32_array *)AllyPutSquareIndicesWithoutMaster;
    p_allyPieceIndexs_5__5 = &v30->fields._allyPieceIndexs_5__5;
    sub_B77560(
      (BattleServantConfConponent_o *)&v30->fields._allyPieceIndexs_5__5,
      AllyPutSquareIndicesWithoutMaster,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    v30->fields._defenseAreaData_5__7 = 0LL;
    p_defenseAreaData_5__7 = (BattleServantConfConponent_o *)&v30->fields._defenseAreaData_5__7;
    *(_QWORD *)&p_defenseAreaData_5__7[-1].fields.isOpenAfter = 1LL;
    sub_B77560(p_defenseAreaData_5__7, 0LL, v42, v43, v44, v45, v46, v47);
    if ( !p_warBoardData_5__2->klass )
      sub_B7769C(v48, v49);
    v50 = *(System_Collections_Generic_List_int__o **)&p_warBoardData_5__2->klass->_2.cctor_finished;
    if ( !v50 )
      sub_B7769C(0LL, v49);
    v51 = System_Collections_Generic_List_int___Contains(
            v50,
            _4__this->fields.forceId,
            (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
    if ( v51 )
    {
      v732->fields._masterExists_5__8 = 1;
    }
    else
    {
      aiRouteMasterData = _4__this->fields.aiRouteMasterData;
      if ( !aiRouteMasterData )
        sub_B7769C(v51, v52);
      masterType = aiRouteMasterData->fields.masterType;
      v732->fields._masterExists_5__8 = masterType != 3;
      if ( masterType == 3 )
      {
LABEL_28:
        if ( !*p_piecePlaceData )
          sub_B7769C(0LL, v52);
        v710 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)p_routeDataList;
        System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
          &v716,
          *p_piecePlaceData,
          (const MethodInfo_2FFBEF4 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
        v71 = v732;
        v717 = *(_OWORD *)&v716.fields.dictionary;
        current = v716.fields.current;
        v72 = *(_OWORD *)&v716.fields.dictionary;
        p__7__wrap8 = &v732->fields.__7__wrap8;
        v732->fields.__7__wrap8.fields.current = v716.fields.current;
        *(_OWORD *)&v71->fields.__7__wrap8.fields.dictionary = v72;
        sub_B77560((BattleServantConfConponent_o *)&v71->fields.__7__wrap8, 0LL, v74, v75, v76, v77, v78, v79);
        p__8__1 = (BattleServantConfConponent_o *)&v71->fields.__8__1;
        v71->fields.__1__state = -3;
        p_baseSquareIndex_5__10 = (BattleServantConfConponent_o *)&v71->fields._baseSquareIndex_5__10;
LABEL_43:
        while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                  p__7__wrap8,
                  (const MethodInfo_288A4A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
        {
          key = v732->fields.__7__wrap8.fields.current.fields.key;
          v84 = (Il2CppObject *)sub_B77694(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
          System_Object___ctor(v84, 0LL);
          p__8__1->klass = (BattleServantConfConponent_c *)v84;
          sub_B77560(p__8__1, (System_Int32_array **)v84, v85, v86, v87, v88, v89, v90);
          v732->fields.__7__wrap8.fields.getEnumeratorRetType = (int)key;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          }
          Square = (System_Int32_array **)WarBoardAIManager__GetSquare((int32_t)key, 0LL);
          p_baseSquareIndex_5__10->klass = (BattleServantConfConponent_c *)Square;
          sub_B77560(p_baseSquareIndex_5__10, Square, v92, v93, v94, v95, v96, v97);
          klass = p__8__1->klass;
          PieceUnique = (System_Int32_array **)WarBoardAIManager__GetPieceUnique(HIDWORD(key), 0LL);
          if ( !klass )
            sub_B7769C(PieceUnique, PieceUnique);
          klass->_1.name = (const char *)PieceUnique;
          sub_B77560((BattleServantConfConponent_o *)&klass->_1.name, PieceUnique, v100, v101, v102, v103, v104, v105);
          v108 = v732;
          baseFlag_5__6 = v732->fields._baseFlag_5__6;
          _8__1 = v732->fields.__8__1;
          v732->fields._tmpFlagNow_5__12 = -1LL;
          v108->fields._servantAndMasterRange_5__13 = -1;
          v108->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
          if ( !_8__1 )
            sub_B7769C(v106, v107);
          if ( !_4__this )
            sub_B7769C(0LL, v107);
          v111 = v732;
          v111->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)(WarBoardAIRoute__GetFlagAroundSquareCheck(
                                                                             _4__this,
                                                                             *(WarBoardSquareData_o **)&v732->fields._baseSquareIndex_5__10,
                                                                             _8__1->fields.basePiece,
                                                                             *p_piecePlaceData,
                                                                             *p_masterSquareIndex_5__4,
                                                                             0LL) | baseFlag_5__6);
          routeDataList = (System_Collections_Generic_IEnumerable_TSource__o *)v111->fields.routeDataList;
          v113 = (Il2CppObject *)v111->fields.__8__1;
          v114 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v114,
            v113,
            Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
            (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
          v116 = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                   routeDataList,
                   (System_Func_TSource__bool__o *)v114,
                   (const MethodInfo_1D2E1F0 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
          v117 = v732->fields.routeDataList;
          v732->fields._servantAndEnemyRange_5__14 = v116;
          if ( !v117 )
            sub_B7769C(0LL, v115);
          Only = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                   v117,
                   (const MethodInfo_3053518 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
          if ( !p__8__1->klass )
            sub_B7769C(Only, Only);
          RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                      _4__this,
                                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                      (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                      0LL);
          v121 = v732;
          v122 = v732->fields.__8__1;
          v732->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
          if ( !v122 )
            sub_B7769C(RouteSumPieceActionCost, v120);
          IsActable = WarBoardAIRoute__IsActable(
                        _4__this,
                        v122->fields.basePiece,
                        v121->fields._servantAndEnemyRange_5__14,
                        v121->fields._requiredCost_5__3,
                        RouteSumPieceActionCost,
                        0LL);
          if ( IsActable )
          {
            if ( !p__8__1->klass )
              sub_B7769C(IsActable, v124);
            v125 = v732;
            DesignationItemToDistance = (System_Int32_array **)WarBoardAIRoute__GetDesignationItemToDistance(
                                                                 _4__this,
                                                                 (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                                                 v732->fields.routeDataList,
                                                                 v732->fields.__7__wrap8.fields.getEnumeratorRetType,
                                                                 0LL);
            *(_QWORD *)&v125->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
            sub_B77560(
              (BattleServantConfConponent_o *)&v125->fields._sumPieceActionCost_5__17,
              DesignationItemToDistance,
              v127,
              v128,
              v129,
              v130,
              v131,
              v132);
            if ( !p__8__1->klass )
              sub_B7769C(v133, v134);
            v135 = v732;
            TargetToDistance_21356736 = (System_Int32_array **)WarBoardAIRoute__GetTargetToDistance_21356736(
                                                                 _4__this,
                                                                 (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                                                 v732->fields.routeDataList,
                                                                 v732->fields.__7__wrap8.fields.getEnumeratorRetType,
                                                                 0LL);
            v135->fields._dicBaseDIRange_5__18 = (struct System_Collections_Generic_Dictionary_int__int__o *)TargetToDistance_21356736;
            sub_B77560(
              (BattleServantConfConponent_o *)&v135->fields._dicBaseDIRange_5__18,
              TargetToDistance_21356736,
              v137,
              v138,
              v139,
              v140,
              v141,
              v142);
            AllEnemyToDistance = (System_Int32_array **)WarBoardAIRoute__GetAllEnemyToDistance(
                                                          _4__this,
                                                          v135->fields.routeDataList,
                                                          v135->fields.__7__wrap8.fields.getEnumeratorRetType,
                                                          (int32_t *)&v71->fields._tmpFlagNow_5__12 + 1,
                                                          &v71->fields._servantAndMasterRange_5__13,
                                                          0LL);
            v135->fields._dicKeyPutIndexValueTargetData_5__19 = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)AllEnemyToDistance;
            sub_B77560(
              (BattleServantConfConponent_o *)&v135->fields._dicKeyPutIndexValueTargetData_5__19,
              AllEnemyToDistance,
              v144,
              v145,
              v146,
              v147,
              v148,
              v149);
            v135->fields._dicEnemyRange_5__20 = 0LL;
            p_dicEnemyRange_5__20 = (BattleServantConfConponent_o *)&v135->fields._dicEnemyRange_5__20;
            sub_B77560(p_dicEnemyRange_5__20, 0LL, v151, v152, v153, v154, v155, v156);
            if ( !p__8__1->klass )
              sub_B7769C(v157, v158);
            name = (WarBoardPieceData_o *)p__8__1->klass->_1.name;
            if ( !name )
              sub_B7769C(0LL, v158);
            isServant = WarBoardPieceData__get_isServant(name, 0LL);
            if ( isServant )
            {
              if ( !p__8__1->klass )
                sub_B7769C(isServant, v161);
              AdvantagePieceData = (System_Int32_array **)WarBoardAIRoute__GetAdvantagePieceData(
                                                            _4__this,
                                                            (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                                            v732->fields.__7__wrap8.fields.getEnumeratorRetType,
                                                            0LL);
              p_dicEnemyRange_5__20->klass = (BattleServantConfConponent_c *)AdvantagePieceData;
              sub_B77560(p_dicEnemyRange_5__20, AdvantagePieceData, v163, v164, v165, v166, v167, v168);
              if ( v732->fields._masterExists_5__8 )
              {
                v169 = *p_masterSquareIndex_5__4;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v170 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              (int32_t)key,
                                                                              v169,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v171 = System_Linq_Enumerable__Count_int_(
                         v170,
                         (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
                v173 = v732->fields.__8__1;
                LODWORD(v732->fields._tmpFlagNow_5__12) = v171;
                if ( !v173 )
                  sub_B7769C(v171, v172);
                basePiece = v173->fields.basePiece;
                if ( !basePiece )
                  sub_B7769C(v171, v172);
                v175 = _4__this->fields.aiRouteMasterData;
                if ( !v175 )
                  sub_B7769C(v171, v172);
                if ( v175->fields.masterType != 2
                  || v175->fields.masterPieceIndex != basePiece->fields._index_k__BackingField )
                {
                  v176 = _4__this->fields.npcData;
                  if ( !v176 )
                    sub_B7769C(v171, v172);
                  if ( v176->fields.defenseArea > (int)v171 )
                  {
                    v732->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v732->fields._baseSquare_5__11 | 0x800);
                    basePiece = v173->fields.basePiece;
                    if ( !basePiece )
                      sub_B7769C(v171, v172);
                    v175 = _4__this->fields.aiRouteMasterData;
                    if ( !v175 )
                      sub_B7769C(v171, v172);
                  }
                }
                v177 = v175->fields.masterType;
                if ( (v177 != 2 || v175->fields.masterPieceIndex != basePiece->fields._index_k__BackingField)
                  && WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                       v732->fields._defenseAreaData_5__7,
                       v732->fields.__7__wrap8.fields.getEnumeratorRetType,
                       v177 == 1,
                       0LL) )
                {
                  v732->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v732->fields._baseSquare_5__11 | 0x80000000);
                }
              }
            }
            v178 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
              v178,
              (const MethodInfo_2EE2460 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v179 = v732;
            v732->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v178;
            p_advantagePieceData_5__21 = (BattleServantConfConponent_o *)&v179->fields._advantagePieceData_5__21;
            sub_B77560(p_advantagePieceData_5__21, (System_Int32_array **)v178, v181, v182, v183, v184, v185, v186);
            v187 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
              v187,
              (const MethodInfo_2EE2460 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v188 = v732;
            v732->fields._basePieceActionPieceRouteList_5__22 = v187;
            p_basePieceActionPieceRouteList_5__22 = (BattleServantConfConponent_o *)&v188->fields._basePieceActionPieceRouteList_5__22;
            sub_B77560(
              p_basePieceActionPieceRouteList_5__22,
              (System_Int32_array **)v187,
              v190,
              v191,
              v192,
              v193,
              v194,
              v195);
            if ( !*v710 )
              sub_B7769C(0LL, v196);
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v716,
              *v710,
              (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
            v729.fields.current = v716.fields.current.fields.key;
            *(_OWORD *)&v729.fields.list = *(_OWORD *)&v716.fields.dictionary;
            while ( 1 )
            {
              v197 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v729,
                       (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
              if ( !v197 )
                break;
              v199 = v729.fields.current;
              if ( !v729.fields.current )
                sub_B7769C(v197, v198);
              if ( LODWORD(v729.fields.current[1].monitor) != HIDWORD(v729.fields.current[1].monitor) )
              {
                v200 = v729.fields.current[3].klass;
                if ( !v200 )
                  sub_B7769C(v197, v198);
                if ( !p__8__1->klass )
                  sub_B7769C(v197, v198);
                v201 = p__8__1->klass->_1.name;
                if ( !v201 )
                  sub_B7769C(v197, v198);
                if ( HIDWORD(v200->_1.namespaze) == *((_DWORD *)v201 + 7) )
                {
                  if ( !p_basePieceActionPieceRouteList_5__22->klass )
                    sub_B7769C(0LL, v198);
                  v197 = System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                           (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)p_basePieceActionPieceRouteList_5__22->klass,
                           (WarBoardAIRoute_RouteData_o *)v729.fields.current,
                           (const MethodInfo_2EE361C *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                }
                if ( (BYTE3(v199[1].klass) & 4) != 0 )
                {
                  monitor = v199[3].monitor;
                  if ( !monitor )
                    sub_B7769C(v197, v198);
                  if ( !p__8__1->klass )
                    sub_B7769C(v197, v198);
                  v203 = p__8__1->klass->_1.name;
                  if ( !v203 )
                    sub_B7769C(v197, v198);
                  if ( monitor[7] == *((_DWORD *)v203 + 7) )
                  {
                    if ( !p_advantagePieceData_5__21->klass )
                      sub_B7769C(0LL, v198);
                    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                      (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)p_advantagePieceData_5__21->klass,
                      (WarBoardAIRoute_RouteData_o *)v199,
                      (const MethodInfo_2EE361C *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                  }
                }
              }
            }
            v719[v720++] = 1280;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v729,
              (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
            if ( v720 && v719[v720 - 1] == 1280 )
              --v720;
            if ( !p_baseSquareIndex_5__10->klass )
              sub_B7769C(0LL, v235);
            v236 = v732;
            MyAndLinkedSquareIndecies = (System_Int32_array **)WarBoardSquareData__GetMyAndLinkedSquareIndecies(
                                                                 (WarBoardSquareData_o *)p_baseSquareIndex_5__10->klass,
                                                                 0LL);
            v236->fields._basePieceBasePieceRouteList_5__23 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)MyAndLinkedSquareIndecies;
            p_basePieceBasePieceRouteList_5__23 = &v236->fields._basePieceBasePieceRouteList_5__23;
            sub_B77560(
              (BattleServantConfConponent_o *)&v236->fields._basePieceBasePieceRouteList_5__23,
              MyAndLinkedSquareIndecies,
              v238,
              v239,
              v240,
              v241,
              v242,
              v243);
            v244 = 0;
            p__7__wrap23 = &v236->fields.__7__wrap23;
            LODWORD(v236->fields.__7__wrap23) = 0;
            while ( 2 )
            {
              if ( !*p_basePieceBasePieceRouteList_5__23 )
                sub_B7769C(this, method);
              if ( v244 >= SLODWORD((*p_basePieceBasePieceRouteList_5__23)->fields._slots) )
              {
                *p_basePieceBasePieceRouteList_5__23 = 0LL;
                v420 = (BattleServantConfConponent_o *)p_basePieceBasePieceRouteList_5__23;
                v71 = v732;
                sub_B77560(v420, 0LL, v2, v3, v4, v5, v6, v7);
                v71->fields.__8__1 = 0LL;
                p__8__1 = (BattleServantConfConponent_o *)&v71->fields.__8__1;
                sub_B77560((BattleServantConfConponent_o *)&v71->fields.__8__1, 0LL, v421, v422, v423, v424, v425, v426);
                *(_QWORD *)&v71->fields._baseSquareIndex_5__10 = 0LL;
                p_baseSquareIndex_5__10 = (BattleServantConfConponent_o *)&v71->fields._baseSquareIndex_5__10;
                sub_B77560(
                  (BattleServantConfConponent_o *)&v71->fields._baseSquareIndex_5__10,
                  0LL,
                  v427,
                  v428,
                  v429,
                  v430,
                  v431,
                  v432);
                *(_QWORD *)&v71->fields._sumPieceActionCost_5__17 = 0LL;
                sub_B77560(
                  (BattleServantConfConponent_o *)&v71->fields._sumPieceActionCost_5__17,
                  0LL,
                  v433,
                  v434,
                  v435,
                  v436,
                  v437,
                  v438);
                v71->fields._dicBaseDIRange_5__18 = 0LL;
                sub_B77560(
                  (BattleServantConfConponent_o *)&v71->fields._dicBaseDIRange_5__18,
                  0LL,
                  v439,
                  v440,
                  v441,
                  v442,
                  v443,
                  v444);
                v71->fields._dicKeyPutIndexValueTargetData_5__19 = 0LL;
                sub_B77560(
                  (BattleServantConfConponent_o *)&v71->fields._dicKeyPutIndexValueTargetData_5__19,
                  0LL,
                  v445,
                  v446,
                  v447,
                  v448,
                  v449,
                  v450);
                v71->fields._dicEnemyRange_5__20 = 0LL;
                sub_B77560(
                  (BattleServantConfConponent_o *)&v71->fields._dicEnemyRange_5__20,
                  0LL,
                  v451,
                  v452,
                  v453,
                  v454,
                  v455,
                  v456);
                v71->fields._advantagePieceData_5__21 = 0LL;
                sub_B77560(
                  (BattleServantConfConponent_o *)&v71->fields._advantagePieceData_5__21,
                  0LL,
                  v457,
                  v458,
                  v459,
                  v460,
                  v461,
                  v462);
                v71->fields._basePieceActionPieceRouteList_5__22 = 0LL;
                sub_B77560(
                  (BattleServantConfConponent_o *)&v71->fields._basePieceActionPieceRouteList_5__22,
                  0LL,
                  v463,
                  v464,
                  v465,
                  v466,
                  v467,
                  v468);
                p__7__wrap8 = &v71->fields.__7__wrap8;
                p_masterSquareIndex_5__4 = &v71->fields._masterSquareIndex_5__4;
                p_piecePlaceData = &v71->fields.piecePlaceData;
                v710 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&v71->fields.routeDataList;
                goto LABEL_43;
              }
              v279 = sub_B77694(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v279, 0LL);
              v282 = *p_basePieceBasePieceRouteList_5__23;
              if ( !*p_basePieceBasePieceRouteList_5__23 )
                sub_B7769C(v280, v281);
              v283 = *(int *)p__7__wrap23;
              if ( (unsigned int)v283 >= LODWORD(v282->fields._slots) )
              {
                v709 = sub_B776C8(v280);
                sub_B77668(v709, 0LL);
              }
              if ( !v279 )
                sub_B7769C(v280, v281);
              *(_DWORD *)(v279 + 16) = *(&v282->fields._count + v283);
              v284 = (int32_t *)(v279 + 16);
              v285 = (WarBoardAIRoute_RouteData_o *)sub_B77694(WarBoardAIRoute_RouteData_TypeInfo);
              WarBoardAIRoute_RouteData___ctor(v285, v286);
              routeData = v285;
              if ( !v285 )
                sub_B7769C(this, method);
              v287 = v732;
              getEnumeratorRetType = v732->fields.__7__wrap8.fields.getEnumeratorRetType;
              v285->fields.baseIndex = getEnumeratorRetType;
              v289 = *v284;
              v285->fields.actionIndex = *v284;
              if ( getEnumeratorRetType == v289 )
              {
                v290 = v287->fields.routeDataList;
                if ( !v290 )
                  sub_B7769C(this, method);
                v287 = v732;
                if ( v290->fields._size > 0 )
                  goto LABEL_543;
              }
              dicBaseDIRange_5__18 = (System_Collections_Generic_IEnumerable_TSource__o *)v287->fields._dicBaseDIRange_5__18;
              v292 = WarBoardAIRoute___c_TypeInfo;
              if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v292 = WarBoardAIRoute___c_TypeInfo;
              }
              static_fields = v292->static_fields;
              _9__47_1 = static_fields->__9__47_1;
              if ( !_9__47_1 )
              {
                if ( (BYTE3(v292->vtable._0_Equals.methodPtr) & 4) != 0 && !v292->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v292);
                  static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v295 = (Il2CppObject *)static_fields->__9;
                _9__47_1 = (System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)sub_B77694(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
                System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long____ctor(
                  _9__47_1,
                  v295,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
                  (const MethodInfo_29D83D0 *)Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long___ctor__);
                v296 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v296->__9__47_1 = _9__47_1;
                sub_B77560(
                  (BattleServantConfConponent_o *)&v296->__9__47_1,
                  (System_Int32_array **)_9__47_1,
                  v297,
                  v298,
                  v299,
                  v300,
                  v301,
                  v302);
                v292 = WarBoardAIRoute___c_TypeInfo;
              }
              if ( (BYTE3(v292->vtable._0_Equals.methodPtr) & 4) != 0 && !v292->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v292);
                v292 = WarBoardAIRoute___c_TypeInfo;
              }
              v303 = v292->static_fields;
              _9__47_2 = v303->__9__47_2;
              if ( !_9__47_2 )
              {
                v305 = p__7__wrap23;
                if ( (BYTE3(v292->vtable._0_Equals.methodPtr) & 4) != 0 && !v292->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v292);
                  v303 = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v306 = (Il2CppObject *)v303->__9;
                _9__47_2 = (System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)sub_B77694(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
                System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData____ctor(
                  _9__47_2,
                  v306,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
                  (const MethodInfo_29D8704 *)Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData___ctor__);
                v307 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v307->__9__47_2 = _9__47_2;
                sub_B77560(
                  (BattleServantConfConponent_o *)&v307->__9__47_2,
                  (System_Int32_array **)_9__47_2,
                  v308,
                  v309,
                  v310,
                  v311,
                  v312,
                  v313);
                p__7__wrap23 = v305;
              }
              v321 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData_(
                                                                                                    dicBaseDIRange_5__18,
                                                                                                    (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                                    (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                                    (const MethodInfo_1D3D93C *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
              v322 = routeData;
              if ( !routeData )
                sub_B7769C(0LL, v314);
              v323 = v732;
              v324 = *(struct WarBoardSquareData_o **)&v732->fields._baseSquareIndex_5__10;
              routeData->fields.baseSquare = v324;
              sub_B77560(
                (BattleServantConfConponent_o *)&v322->fields.baseSquare,
                (System_Int32_array **)v324,
                v315,
                v316,
                v317,
                v318,
                v319,
                v320);
              v332 = routeData;
              v335 = v323->fields.__8__1;
              v334 = &v323->fields.__8__1;
              v333 = v335;
              if ( !v335 )
                sub_B7769C(routeData, v325);
              if ( !routeData )
                sub_B7769C(0LL, v325);
              v336 = v333->fields.basePiece;
              routeData->fields.basePiece = v336;
              sub_B77560(
                (BattleServantConfConponent_o *)&v332->fields.basePiece,
                (System_Int32_array **)v336,
                v326,
                v327,
                v328,
                v329,
                v330,
                v331);
              v344 = routeData;
              if ( !routeData )
                sub_B7769C(0LL, v337);
              routeData->fields.actionPiece = 0LL;
              sub_B77560(
                (BattleServantConfConponent_o *)&v344->fields.actionPiece,
                0LL,
                v338,
                v339,
                v340,
                v341,
                v342,
                v343);
              v345 = routeData;
              v346 = *v284;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              v347 = (System_Int32_array **)WarBoardAIManager__GetSquare(v346, 0LL);
              if ( !v345 )
                sub_B7769C(v347, v347);
              v345->fields.actionSquare = (struct WarBoardSquareData_o *)v347;
              sub_B77560(
                (BattleServantConfConponent_o *)&v345->fields.actionSquare,
                v347,
                v348,
                v349,
                v350,
                v351,
                v352,
                v353);
              dicKeyPutIndexValueTargetData_5__19 = v732->fields._dicKeyPutIndexValueTargetData_5__19;
              if ( !dicKeyPutIndexValueTargetData_5__19 )
                sub_B7769C(0LL, v354);
              v356 = routeData;
              if ( System_Collections_Generic_Dictionary_uint__int___get_Count(
                     (System_Collections_Generic_Dictionary_uint__int__o *)dicKeyPutIndexValueTargetData_5__19,
                     (const MethodInfo_2FC26D4 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0 )
              {
                v360 = 0x7FFFFFFFLL;
                if ( !v356 )
                  goto LABEL_266;
              }
              else
              {
                v358 = v732->fields._dicKeyPutIndexValueTargetData_5__19;
                if ( !v358 )
                  sub_B7769C(0LL, v357);
                Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                           (System_Collections_Generic_Dictionary_uint__int__o *)v358,
                           (const MethodInfo_2FC287C *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
                v360 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
                if ( !v356 )
LABEL_266:
                  sub_B7769C(v360, v357);
              }
              v356->fields.EnemyRangeMin = v360;
              if ( !*v334 )
                sub_B7769C(v360, v357);
              if ( !_4__this )
                sub_B7769C(0LL, v357);
              v361 = routeData;
              MoveByTargetDistance = (System_Int32_array **)WarBoardAIRoute__GetMoveByTargetDistance(
                                                              _4__this,
                                                              v321,
                                                              *v284,
                                                              (*v334)->fields.basePiece,
                                                              0LL);
              if ( !v361 )
                sub_B7769C(MoveByTargetDistance, MoveByTargetDistance);
              v361->fields.dicPutIndexTargetData = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)MoveByTargetDistance;
              sub_B77560(
                (BattleServantConfConponent_o *)&v361->fields.dicPutIndexTargetData,
                MoveByTargetDistance,
                v363,
                v364,
                v365,
                v366,
                v367,
                v368);
              if ( !*v334 )
                sub_B7769C(v369, v370);
              v371 = routeData;
              ActionPiece = (System_Int32_array **)WarBoardAIRoute__GetActionPiece(
                                                     _4__this,
                                                     (*v334)->fields.basePiece,
                                                     *v284,
                                                     v732->fields.piecePlaceData,
                                                     0LL);
              if ( !v371 )
                sub_B7769C(ActionPiece, ActionPiece);
              v371->fields.actionPiece = (struct WarBoardPieceData_o *)ActionPiece;
              sub_B77560(
                (BattleServantConfConponent_o *)&v371->fields.actionPiece,
                ActionPiece,
                v373,
                v374,
                v375,
                v376,
                v377,
                v378);
              v387 = *v334;
              if ( !*v334 )
                sub_B7769C(p_actionPiece, v380);
              v388 = v387->fields.basePiece;
              if ( !v388 )
                sub_B7769C(p_actionPiece, v380);
              if ( v388->fields._nowSquareIndex_k__BackingField == *v284 )
              {
                if ( !routeData )
                  sub_B7769C(0LL, v380);
                p_actionPiece = (BattleServantConfConponent_o *)&routeData->fields.actionPiece;
                v389 = routeData->fields.actionPiece;
                if ( v389 )
                {
                  if ( v389->fields._uniqueIndex_k__BackingField == v388->fields._uniqueIndex_k__BackingField )
                  {
                    p_actionPiece->klass = 0LL;
                    sub_B77560(p_actionPiece, 0LL, v381, v382, v383, v384, v385, v386);
                    v387 = *v334;
                    if ( !*v334 )
                      sub_B7769C(p_actionPiece, v380);
                  }
                }
              }
              v390 = v387->fields.basePiece;
              if ( !v390 )
                sub_B7769C(p_actionPiece, v380);
              v391 = UnityEngine_Mathf__Abs_41473480(
                       v390->fields._limitActionCount_k__BackingField - v390->fields._currentActionCount_k__BackingField,
                       0LL);
              v393 = routeData;
              if ( !routeData )
                sub_B7769C(v391, v392);
              v394 = v732;
              routeData->fields.actionCountOnThisTurn = v391 + v732->fields._servantAndEnemyRange_5__14 + 1;
              baseSquare_5__11 = v394->fields._baseSquare_5__11;
              *(_QWORD *)&v393->fields.attackByLinkedEnemy = 0LL;
              v393->fields.flagNow = (int64_t)baseSquare_5__11;
              warBoardData_5__2 = v394->fields._warBoardData_5__2;
              if ( !warBoardData_5__2 )
                sub_B7769C(0LL, v392);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardData__GetWall(warBoardData_5__2, *v284, 0, 0LL);
              v397 = this;
              if ( this )
              {
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                if ( !this )
                  sub_B7769C(0LL, method);
                if ( this[2].fields._servantAndEnemyRange_5__14 < _4__this->fields.wallAttackCost
                                                                + v732->fields._requiredCost_5__3 )
                  goto LABEL_543;
                if ( !*v334 )
                  sub_B7769C(this, method);
                v398 = (*v334)->fields.basePiece;
                if ( !v398 )
                  sub_B7769C(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableWallAttack(
                                                                     v398,
                                                                     v732->fields._servantAndEnemyMasterRange_5__15,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_543;
                if ( !*v334 )
                  sub_B7769C(this, method);
                v399 = (*v334)->fields.basePiece;
                if ( !v399 )
                  sub_B7769C(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__CheckWallAttackCond(
                                                                     v399,
                                                                     (WarBoardWallData_o *)v397,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_543;
              }
              if ( !routeData )
                sub_B7769C(this, method);
              v400 = routeData->fields.actionPiece;
              if ( v400 )
              {
                if ( !*v334 )
                  sub_B7769C(this, method);
                v401 = (*v334)->fields.basePiece;
                if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                }
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsEnemyPiece(v401, v400, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !*v334 )
                    sub_B7769C(this, method);
                  v402 = (*v334)->fields.basePiece;
                  if ( !v402 )
                    sub_B7769C(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v402, 0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_251;
                  if ( !routeData )
                    sub_B7769C(this, method);
                  v403 = routeData->fields.actionPiece;
                  if ( !v403 )
                    sub_B7769C(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v403, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_251:
                    v404 = routeData;
                    if ( !routeData )
                      sub_B7769C(this, method);
                    v405 = routeData->fields.basePiece;
                    routeData->fields.flagNow |= 2uLL;
                    if ( !v405 )
                      sub_B7769C(this, method);
                    v406 = v404->fields.actionPiece;
                    v404->fields.attackCountOnThisTurn = v405->fields._attackCount_k__BackingField + 1;
                    if ( !v406 )
                      sub_B7769C(0LL, method);
                    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isServant(v406, 0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v407 = routeData;
                      if ( !routeData )
                        sub_B7769C(this, method);
                      if ( !*v334 )
                        sub_B7769C(this, method);
                      v408 = (*v334)->fields.basePiece;
                      if ( !v408 )
                        sub_B7769C(this, method);
                      battleServant_k__BackingField = v408->fields._battleServant_k__BackingField;
                      if ( !battleServant_k__BackingField )
                        sub_B7769C(0LL, method);
                      v410 = p_basePieceBasePieceRouteList_5__23;
                      flagNow = routeData->fields.flagNow;
                      ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
                      if ( !routeData )
                        sub_B7769C(ClassId, v413);
                      v414 = routeData->fields.actionPiece;
                      if ( !v414 )
                        sub_B7769C(ClassId, v413);
                      v415 = ClassId;
                      v416 = v414->fields._battleServant_k__BackingField;
                      if ( !v416 )
                        sub_B7769C(0LL, v413);
                      v417 = BattleServantData__getClassId(v416, 0LL);
                      FlagAdvantage = WarBoardAIRoute__GetFlagAdvantage(_4__this, v415, v417, 0LL);
                      v407->fields.flagNow = FlagAdvantage | flagNow;
                      if ( !routeData )
                        sub_B7769C(FlagAdvantage, v419);
                      WarBoardAIRoute__LinkedCount(
                        _4__this,
                        *v284,
                        v732->fields.piecePlaceData,
                        &routeData->fields.attackByLinkedEnemy,
                        &routeData->fields.attackByLinkedAlly,
                        0LL);
                      p_basePieceBasePieceRouteList_5__23 = v410;
                    }
                    break;
                  }
LABEL_543:
                  v244 = *(_DWORD *)p__7__wrap23 + 1;
                  *(_DWORD *)p__7__wrap23 = v244;
                  continue;
                }
                if ( !routeData )
                  sub_B7769C(this, method);
                v469 = routeData->fields.actionPiece;
                if ( !v469 )
                  sub_B7769C(this, method);
                if ( v469->fields._roleType_k__BackingField == 1 )
                  goto LABEL_543;
                if ( !*v334 )
                  sub_B7769C(this, method);
                v470 = (*v334)->fields.basePiece;
                if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                }
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsAllyPiece(v470, v469, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !routeData )
                    sub_B7769C(this, method);
                  routeData->fields.flagNow |= 0x4000000uLL;
                }
              }
              break;
            }
            v471 = routeData;
            if ( !routeData )
              sub_B7769C(this, method);
            if ( (routeData->fields.flagNow & 2) != 0 )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_B7769C(0LL, method);
              if ( this[2].fields._servantAndEnemyRange_5__14 < _4__this->fields.attackCost
                                                              + v732->fields._requiredCost_5__3 )
                goto LABEL_543;
              if ( !*v334 )
                sub_B7769C(this, method);
              v487 = (*v334)->fields.basePiece;
              if ( !v487 )
                sub_B7769C(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableAttack(
                                                                   v487,
                                                                   v732->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_543;
              v471 = routeData;
              if ( !routeData )
                sub_B7769C(this, method);
            }
            if ( (v471->fields.flagNow & 2) == 0 )
            {
              if ( !*v334 )
                sub_B7769C(this, method);
              v472 = (*v334)->fields.basePiece;
              if ( !v472 )
                sub_B7769C(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableMoveBySelf(
                                                                   v472,
                                                                   v732->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_543;
              v471 = routeData;
              if ( !routeData )
                sub_B7769C(this, method);
            }
            if ( (v471->fields.flagNow & 0x4000000) != 0 )
            {
              if ( !*v334 )
                sub_B7769C(this, method);
              v473 = v732;
              v474 = v732->fields.routeDataList;
              if ( !v474 )
                sub_B7769C(0LL, method);
              v475 = (*v334)->fields.basePiece;
              v476 = v471->fields.actionPiece;
              requiredCost_5__3 = v732->fields._requiredCost_5__3;
              v478 = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                       v474,
                       (const MethodInfo_3053518 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIRoute__IsActableReplace(
                                                                   _4__this,
                                                                   v475,
                                                                   v476,
                                                                   requiredCost_5__3,
                                                                   (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v478,
                                                                   v473->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_543;
              v471 = routeData;
            }
            v711 = p__7__wrap23;
            v714 = p_basePieceBasePieceRouteList_5__23;
            piecePlaceData = WarBoardAIRoute__UpdatePiecePlaceData(
                               _4__this,
                               v732->fields.piecePlaceData,
                               v471,
                               v732->fields.__7__wrap8.fields.getEnumeratorRetType,
                               *v284,
                               0LL);
            MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
                                               _4__this,
                                               piecePlaceData,
                                               0LL);
            basePieceActionPieceRouteList_5__22 = (System_Collections_Generic_IEnumerable_TSource__o *)v732->fields._basePieceActionPieceRouteList_5__22;
            v481 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v481,
              (Il2CppObject *)v279,
              Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
              (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
            DefenseAreaData = (DefenseAreaData_o *)System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
                                                     basePieceActionPieceRouteList_5__22,
                                                     (System_Func_TSource__bool__o *)v481,
                                                     (const MethodInfo_1D1F698 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)DefenseAreaData & 1) != 0
              || (advantagePieceData_5__21 = v732->fields._advantagePieceData_5__21,
                  v485 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo),
                  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                    v485,
                    (Il2CppObject *)v279,
                    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
                    (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__),
                  DefenseAreaData = (DefenseAreaData_o *)System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)advantagePieceData_5__21,
                                                           (System_Func_TSource__bool__o *)v485,
                                                           (const MethodInfo_1D1F698 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___),
                  ((unsigned __int8)DefenseAreaData & 1) != 0) )
            {
              if ( !routeData )
                sub_B7769C(DefenseAreaData, v483);
              routeData->fields.flagNow |= 0x20000000000uLL;
            }
            if ( v732->fields._masterExists_5__8 )
            {
              if ( v732->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
                goto LABEL_306;
              if ( !routeData )
                sub_B7769C(DefenseAreaData, v483);
              if ( (routeData->fields.flagNow & 0x400) != 0 )
              {
LABEL_306:
                v488 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                         _4__this,
                         piecePlaceData,
                         MasterSquareIndexFromPlaceData,
                         0LL);
                DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                                    _4__this,
                                    MasterSquareIndexFromPlaceData,
                                    v488,
                                    piecePlaceData,
                                    0LL);
                defenseAreaData_5__7 = DefenseAreaData;
                if ( !DefenseAreaData )
LABEL_672:
                  sub_B7769C(DefenseAreaData, v483);
              }
              else
              {
                defenseAreaData_5__7 = v732->fields._defenseAreaData_5__7;
                if ( !defenseAreaData_5__7 )
                  goto LABEL_672;
              }
              v489 = _4__this->fields.aiRouteMasterData;
              if ( !v489 )
                sub_B7769C(DefenseAreaData, v483);
              IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                                       defenseAreaData_5__7->fields._ShortestRoutes_k__BackingField,
                                                       piecePlaceData,
                                                       v489->fields.masterType == 1,
                                                       0LL);
              v492 = routeData;
              if ( IsAllBlockShortestRouteEnemyAndMastr )
              {
                if ( !routeData )
                  sub_B7769C(IsAllBlockShortestRouteEnemyAndMastr, v491);
                routeData->fields.flagNow |= 0x40000000uLL;
              }
              else if ( !routeData )
              {
                sub_B7769C(IsAllBlockShortestRouteEnemyAndMastr, v491);
              }
              v493 = v492->fields.flagNow;
              if ( (v493 & 0x400) != 0 && (defenseAreaData_5__7->fields._Flag_k__BackingField & 0x10000000000LL) != 0 )
                v492->fields.flagNow = v493 | 0x40000000000LL;
            }
            else
            {
              v492 = routeData;
            }
            v494 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v494,
              (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v492 )
              sub_B7769C(v495, v496);
            v492->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v494;
            sub_B77560(
              (BattleServantConfConponent_o *)&v492->fields.moveByLinkedPiece,
              (System_Int32_array **)v494,
              v497,
              v498,
              v499,
              v500,
              v501,
              v502);
            v505 = routeData;
            if ( !routeData )
              sub_B7769C(v503, v504);
            *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0LL;
            v506 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B77694(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
            System_Collections_Generic_Dictionary_uint__int____ctor(
              v506,
              (const MethodInfo_2FC1F30 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
            v505->fields.dicUniqueKeyRange = v506;
            sub_B77560(
              (BattleServantConfConponent_o *)&v505->fields.dicUniqueKeyRange,
              (System_Int32_array **)v506,
              v507,
              v508,
              v509,
              v510,
              v511,
              v512);
            v514 = v732->fields.piecePlaceData;
            if ( !v514 )
              sub_B7769C(0LL, v513);
            System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
              &v716,
              v514,
              (const MethodInfo_2FFBEF4 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
            *(_OWORD *)&v725.fields.dictionary = *(_OWORD *)&v716.fields.dictionary;
            v725.fields.current = v716.fields.current;
            while ( 1 )
            {
              v515 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                       &v725,
                       (const MethodInfo_288A4A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
              if ( !v515 )
                break;
              if ( !*v334 )
                sub_B7769C(v515, v516);
              v517 = (*v334)->fields.basePiece;
              if ( !v517 )
                sub_B7769C(v515, v516);
              key_high = HIDWORD(v725.fields.current.fields.key);
              if ( v517->fields._uniqueIndex_k__BackingField != HIDWORD(v725.fields.current.fields.key) )
              {
                if ( !routeData )
                  sub_B7769C(v515, v516);
                v519 = (int32_t)v725.fields.current.fields.key;
                dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
                v521 = *v284;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v522 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v521,
                                                                              v519,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v523 = System_Linq_Enumerable__Count_int_(
                         v522,
                         (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !dicUniqueKeyRange )
                  sub_B7769C(v523, v524);
                System_Collections_Generic_Dictionary_uint__int___Add(
                  dicUniqueKeyRange,
                  key_high,
                  v523,
                  (const MethodInfo_2FC2AD4 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
              }
            }
            v719[v720++] = 2813;
            System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
              &v725,
              (const MethodInfo_288A5F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
            if ( v720 && v719[v720 - 1] == 2813 )
              --v720;
            v525 = routeData;
            v526 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v526,
              (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
            if ( !v525 )
              sub_B7769C(v527, v528);
            v525->fields.listExistDesignationItem = v526;
            sub_B77560(
              (BattleServantConfConponent_o *)&v525->fields.listExistDesignationItem,
              (System_Int32_array **)v526,
              v529,
              v530,
              v531,
              v532,
              v533,
              v534);
            v535 = routeData;
            v536 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B77694(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v536,
              (const MethodInfo_2F74144 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( !v535 )
              sub_B7769C(v537, v538);
            v535->fields.dicMoveByServantGetDesignationItem = v536;
            sub_B77560(
              (BattleServantConfConponent_o *)&v535->fields.dicMoveByServantGetDesignationItem,
              (System_Int32_array **)v536,
              v539,
              v540,
              v541,
              v542,
              v543,
              v544);
            v545 = routeData;
            v546 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)sub_B77694(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType____ctor(
              v546,
              (const MethodInfo_2FEBD7C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
            if ( !v545 )
              sub_B7769C(v547, v548);
            v545->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = v546;
            sub_B77560(
              (BattleServantConfConponent_o *)&v545->fields.dicItemIdKeyIsMoveByServantDesignationItemRange,
              (System_Int32_array **)v546,
              v549,
              v550,
              v551,
              v552,
              v553,
              v554);
            v557 = routeData;
            if ( !routeData )
              sub_B7769C(v555, v556);
            routeData->fields.isMoveByOutOfWarningArea = 0;
            *(_QWORD *)&v557->fields.isMoveByServantAndEnemyRange = 0LL;
            *(_QWORD *)&v557->fields.isMoveByMasterAndEnemyRange = 0LL;
            *(_QWORD *)&v557->fields.isMoveByServantAndAttackAdvantageServantRange = 0LL;
            *(_QWORD *)&v557->fields.isMoveByServantAndDefenseAdvantageServantRange = 0LL;
            *(_QWORD *)&v557->fields.isMoveByServantAndClassAdvantageServantRange = 0LL;
            if ( !*v334 )
              sub_B7769C(v555, v556);
            v558 = (*v334)->fields.basePiece;
            if ( !v558 )
              sub_B7769C(0LL, v556);
            IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isServant(v558, 0LL);
            if ( IsBlockShortestRouteEnemyAndMaster )
            {
              if ( v732->fields._masterExists_5__8 )
              {
                if ( !*v334 )
                  sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                v561 = (*v334)->fields.basePiece;
                if ( !v561 )
                  sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                v562 = _4__this->fields.aiRouteMasterData;
                if ( !v562 )
                  sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                if ( v562->fields.masterType != 2
                  || v562->fields.masterPieceIndex != v561->fields._index_k__BackingField )
                {
                  v563 = v732->fields._defenseAreaData_5__7;
                  if ( !v563 )
                    sub_B7769C(0LL, v560);
                  IsBlockShortestRouteEnemyAndMaster = DefenseAreaData__IsInDefenseArea(v563, *v284, 0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                    routeData->fields.flagNow |= 0x4000000000uLL;
                  }
                }
                if ( !*v334 )
                  sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                v564 = (*v334)->fields.basePiece;
                if ( !v564 )
                  sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                v565 = _4__this->fields.aiRouteMasterData;
                if ( !v565 )
                  sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                v566 = v565->fields.masterType;
                if ( v566 != 2 || v565->fields.masterPieceIndex != v564->fields._index_k__BackingField )
                {
                  IsBlockShortestRouteEnemyAndMaster = WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                                                         v732->fields._defenseAreaData_5__7,
                                                         *v284,
                                                         v566 == 1,
                                                         0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                    routeData->fields.flagNow |= 0x100000000uLL;
                  }
                }
                if ( !*v334 )
                  sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                v567 = (*v334)->fields.basePiece;
                if ( !v567 )
                  sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                v568 = _4__this->fields.aiRouteMasterData;
                if ( !v568 )
                  sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                if ( v568->fields.masterType != 2
                  || v568->fields.masterPieceIndex != v567->fields._index_k__BackingField )
                {
                  v569 = *v284;
                  if ( *v284 == MasterSquareIndexFromPlaceData )
                  {
                    if ( !routeData )
                      sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                    routeData->fields.isMoveByServantAndMasterRange = 2;
                  }
                  else
                  {
                    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AStarSearch_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                    }
                    v570 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                                  0LL,
                                                                                  v569,
                                                                                  MasterSquareIndexFromPlaceData,
                                                                                  0,
                                                                                  0LL,
                                                                                  0LL);
                    v571 = System_Linq_Enumerable__Count_int_(
                             v570,
                             (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
                    v572 = routeData;
                    v573 = WarBoardAIRoute__CalcurateDistanceType(v571, v732->fields._tmpFlagNow_5__12, 0LL);
                    if ( !v572 )
                      sub_B7769C(v573, v560);
                    v572->fields.isMoveByServantAndMasterRange = v573;
                  }
                }
              }
              v574 = *(System_Collections_Generic_Dictionary_int__int__o **)&v732->fields._sumPieceActionCost_5__17;
              if ( !v574 )
                sub_B7769C(0LL, v560);
              System_Collections_Generic_Dictionary_int__int___GetEnumerator(
                &v716,
                v574,
                (const MethodInfo_2FE92E4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
              v723 = *(_OWORD *)&v716.fields.dictionary;
              endSquare = v716.fields.current;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
                        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v723,
                        (const MethodInfo_2885E04 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
              {
                v575 = (int32_t)endSquare.fields.key;
                v576 = HIDWORD(endSquare.fields.key);
                v577 = *v284;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v578 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v577,
                                                                              v575,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v579 = System_Linq_Enumerable__Count_int_(
                         v578,
                         (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !routeData )
                  sub_B7769C(v579, v580);
                dicItemIdKeyIsMoveByServantDesignationItemRange = routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
                v582 = WarBoardAIRoute__CalcurateDistanceType(v579, v576, 0LL);
                if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
                  sub_B7769C(v582, v583);
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___set_Item(
                  dicItemIdKeyIsMoveByServantDesignationItemRange,
                  v575,
                  v582,
                  (const MethodInfo_2FEC8F8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
                if ( !routeData )
                  sub_B7769C(v584, v585);
                dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
                if ( !dicMoveByServantGetDesignationItem )
                  sub_B7769C(0LL, v585);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  dicMoveByServantGetDesignationItem,
                  v575,
                  *v284 == v575,
                  (const MethodInfo_2F74CF4 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
                if ( !routeData )
                  sub_B7769C(v587, v588);
                listExistDesignationItem = routeData->fields.listExistDesignationItem;
                if ( !listExistDesignationItem )
                  sub_B7769C(0LL, v588);
                System_Collections_Generic_List_int___Add(
                  listExistDesignationItem,
                  v575,
                  (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
              }
              v719[v720++] = 3406;
              System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v723,
                (const MethodInfo_2885F4C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
              if ( v720 && v719[v720 - 1] == 3406 )
                --v720;
              v590 = *v284;
              enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
              if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AStarSearch_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
              }
              v592 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                            0LL,
                                                                            v590,
                                                                            enemyMasterSquareIndex,
                                                                            0,
                                                                            0LL,
                                                                            0LL);
              v593 = System_Linq_Enumerable__Count_int_(
                       v592,
                       (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
              v594 = routeData;
              v595 = WarBoardAIRoute__CalcurateDistanceType(v593, v732->fields._servantAndMasterRange_5__13, 0LL);
              if ( !v594 )
                sub_B7769C(v595, v596);
              v594->fields.isMoveByServantAndEnemyMasterRange = v595;
              v597 = routeData;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_4388F9B )
              {
                sub_B775C4(&WarBoardAIManager_TypeInfo);
                byte_4388F9B = 1;
              }
              v598 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v598 = WarBoardAIManager_TypeInfo;
              }
              v599 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v598->static_fields->dicSquareIndexEnemyPiece,
                       HIDWORD(v732->fields._tmpFlagNow_5__12),
                       *v284,
                       0LL);
              if ( !v597 )
                sub_B7769C(v599, v600);
              v601 = v732;
              v597->fields.isMoveByServantAndEnemyRange = v599;
              WarBoardAIRoute__ClassAdvantageDistance(
                _4__this,
                &routeData,
                (WarBoardAIRoute_AdvantagePieceData_o *)v601->fields._dicEnemyRange_5__20,
                *v284,
                0LL);
            }
            v602 = _4__this->fields.aiRouteMasterData;
            if ( !v602 )
              sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
            if ( v602->fields.masterType )
            {
LABEL_407:
              if ( v602->fields.masterType == 2 )
              {
                if ( !*v334 )
                  sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                v604 = (*v334)->fields.basePiece;
                if ( !v604 )
                  sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                if ( v604->fields._index_k__BackingField == v602->fields.masterPieceIndex )
                  goto LABEL_411;
              }
            }
            else
            {
              if ( !*v334 )
                sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
              v603 = (*v334)->fields.basePiece;
              if ( !v603 )
                sub_B7769C(0LL, v560);
              IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isMaster(v603, 0LL);
              if ( !IsBlockShortestRouteEnemyAndMaster )
              {
                v602 = _4__this->fields.aiRouteMasterData;
                if ( !v602 )
                  sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                goto LABEL_407;
              }
LABEL_411:
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_4388F9B )
              {
                sub_B775C4(&WarBoardAIManager_TypeInfo);
                byte_4388F9B = 1;
              }
              v605 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v605 = WarBoardAIManager_TypeInfo;
              }
              dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v605->static_fields->dicSquareIndexEnemyPiece;
              if ( !dicSquareIndexEnemyPiece )
                sub_B7769C(0LL, v560);
              Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                       dicSquareIndexEnemyPiece,
                       (const MethodInfo_2FF3D84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
              if ( !Keys )
                sub_B7769C(0LL, v608);
              System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData___GetEnumerator(
                (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v716,
                Keys,
                (const MethodInfo_22E70F0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
              v722.fields.currentKey = v716.fields.current.fields.key;
              *(_OWORD *)&v722.fields.dictionary = *(_OWORD *)&v716.fields.dictionary;
              while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___MoveNext(
                        &v722,
                        (const MethodInfo_28892FC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                currentKey = (int32_t)v722.fields.currentKey;
                v610 = *v284;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v611 = AStarSearch__RouteSearch(0LL, v610, currentKey, 0, 0LL, 0LL);
                if ( !v611 )
                  sub_B7769C(0LL, v612);
                v613 = _4__this->fields.npcData;
                if ( !v613 )
                  sub_B7769C(v611, v612);
                if ( (signed int)(v611->max_length - 1) <= v613->fields.defenseArea )
                {
                  if ( !routeData )
                    sub_B7769C(v611, v612);
                  routeData->fields.flagNow |= 0x8000000000uLL;
                  break;
                }
              }
              v719[v720++] = 3697;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___Dispose(
                &v722,
                (const MethodInfo_28892F8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( v720 && v719[v720 - 1] == 3697 )
                --v720;
              v615 = routeData;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_4388F9B )
              {
                sub_B775C4(&WarBoardAIManager_TypeInfo);
                byte_4388F9B = 1;
              }
              v616 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v616 = WarBoardAIManager_TypeInfo;
              }
              v617 = v732->fields._defenseAreaData_5__7;
              if ( !v617 )
                sub_B7769C(v616, v614);
              v618 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v616->static_fields->dicSquareIndexEnemyPiece,
                       v617->fields._MasterAndEnemyRange_k__BackingField,
                       *v284,
                       0LL);
              if ( !v615 )
                sub_B7769C(v618, v619);
              v615->fields.isMoveByMasterAndEnemyRange = v618;
              p_basePieceBasePieceRouteList_5__23 = v714;
              if ( !byte_4388F9B )
              {
                sub_B775C4(&WarBoardAIManager_TypeInfo);
                byte_4388F9B = 1;
              }
              v620 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v620 = WarBoardAIManager_TypeInfo;
              }
              v621 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v620->static_fields->dicSquareIndexEnemyPiece;
              if ( !v621 )
                sub_B7769C(0LL, v619);
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
                &v716,
                v621,
                (const MethodInfo_2FF475C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
              v721 = v716;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                        &v721,
                        (const MethodInfo_28883E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                v622 = (int32_t)v721.fields.current.fields.key;
                v623 = *v284;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v624 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v623,
                                                                              v622,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                System_Linq_Enumerable__Count_int_(
                  v624,
                  (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !WarBoardAIRoute__IsDetour((System_Int32_array *)v624, v732->fields._allyPieceIndexs_5__5, 0LL) )
                {
                  v625 = 0;
                  goto LABEL_458;
                }
              }
              v625 = 1;
LABEL_458:
              v719[v720++] = 3829;
              System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
                &v721,
                (const MethodInfo_2888550 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( v720 && v719[v720 - 1] == 3829 )
                --v720;
              if ( v625 )
              {
                if ( !routeData )
                  sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
                routeData->fields.flagNow |= 0x1000000000uLL;
              }
            }
            v626 = routeData;
            if ( !routeData )
              sub_B7769C(IsBlockShortestRouteEnemyAndMaster, v560);
            v627 = piecePlaceData;
            if ( !routeData->fields.actionPiece || (routeData->fields.flagNow & 0x4000000) != 0 )
            {
              v628 = v732->fields._warBoardData_5__2;
              if ( !v628 )
                sub_B7769C(0LL, v560);
              Effect = WarBoardData__GetEffect(v628, *v284, 0LL);
              if ( Effect )
              {
                if ( !routeData )
                  sub_B7769C(Effect, v630);
                routeData->fields.flagNow |= 0x200000000uLL;
              }
              v631 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v631,
                (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
              v633 = v732->fields.routeDataList;
              if ( !v633 )
                sub_B7769C(0LL, v632);
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v716,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v633,
                (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
              v729.fields.current = v716.fields.current.fields.key;
              *(_OWORD *)&v729.fields.list = *(_OWORD *)&v716.fields.dictionary;
              while ( 1 )
              {
                v634 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v729,
                         (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
                if ( !v634 )
                  break;
                v636 = v729.fields.current;
                if ( !v729.fields.current )
                  sub_B7769C(v634, v635);
                if ( (BYTE3(v729.fields.current[1].klass) & 8) != 0 )
                {
                  v637 = v729.fields.current[3].klass;
                  if ( !v637 )
                    sub_B7769C(0LL, v635);
                  v638 = WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v637, 0LL);
                  if ( v638 )
                  {
                    if ( !v631 )
                      sub_B7769C(v638, v639);
                    System_Collections_Generic_List_int___Add(
                      v631,
                      HIDWORD(v636[1].monitor),
                      (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
                  }
                  if ( (BYTE3(v636[1].klass) & 4) != 0 )
                  {
                    v640 = (WarBoardPieceData_o *)v636[3].klass;
                    if ( !v640 )
                      sub_B7769C(0LL, v639);
                    if ( WarBoardPieceData__get_isMaster(v640, 0LL) )
                    {
                      v642 = (WarBoardPieceData_o *)v636[3].monitor;
                      if ( !v642 )
                        sub_B7769C(0LL, v641);
                      v643 = WarBoardPieceData__get_isServant(v642, 0LL);
                      if ( v643 )
                      {
                        if ( !v631 )
                          sub_B7769C(v643, v644);
                        System_Collections_Generic_List_int___Add(
                          v631,
                          (int32_t)v636[1].monitor,
                          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
                      }
                    }
                  }
                }
              }
              v719[v720++] = 4082;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v729,
                (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
              p_basePieceBasePieceRouteList_5__23 = v714;
              v627 = piecePlaceData;
              if ( v720 && v719[v720 - 1] == 4082 )
                --v720;
              if ( !routeData )
                sub_B7769C(v645, v646);
              v647 = routeData->fields.basePiece;
              if ( !v647 )
                sub_B7769C(0LL, v646);
              v648 = WarBoardPieceData__get_isServant(v647, 0LL);
              if ( v648 )
              {
                if ( !routeData )
                  sub_B7769C(v648, v649);
                CanAcquireItem = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v631, 0LL);
                if ( CanAcquireItem )
                {
                  v652 = routeData;
                  if ( !routeData )
                    sub_B7769C(CanAcquireItem, v651);
                  v653 = routeData->fields.flagNow | 0x18000000;
                  goto LABEL_497;
                }
              }
              else
              {
                if ( !routeData )
                  sub_B7769C(v648, v649);
                v654 = routeData->fields.basePiece;
                if ( !v654 )
                  sub_B7769C(0LL, v649);
                isMaster = WarBoardPieceData__get_isMaster(v654, 0LL);
                if ( isMaster )
                {
                  if ( !routeData )
                    sub_B7769C(isMaster, v656);
                  v657 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v631, 0LL);
                  v659 = routeData;
                  if ( v657 )
                  {
                    if ( !routeData )
                      sub_B7769C(v657, v658);
                    routeData->fields.flagNow |= 0x10000000uLL;
                  }
                  else if ( !routeData )
                  {
                    sub_B7769C(v657, v658);
                  }
                  if ( (v659->fields.flagNow & 0x4000000) != 0 )
                  {
                    v660 = v659->fields.actionPiece;
                    if ( !v660 )
                      sub_B7769C(0LL, v658);
                    v661 = WarBoardPieceData__get_isServant(v660, 0LL);
                    if ( v661 )
                    {
                      if ( !routeData )
                        sub_B7769C(v661, v662);
                      v663 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.baseIndex, v631, 0LL);
                      if ( v663 )
                      {
                        v652 = routeData;
                        if ( !routeData )
                          sub_B7769C(v663, v664);
                        v653 = routeData->fields.flagNow | 0x8000000;
LABEL_497:
                        v652->fields.flagNow = v653;
                      }
                    }
                  }
                }
              }
              WarBoardAIRoute__LinkedPieceCount(_4__this, &routeData, piecePlaceData, v631, 0LL);
              v626 = routeData;
              if ( !routeData )
                sub_B7769C(v665, v666);
            }
            FlagOutOfWarningAreaToDistance = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                               _4__this,
                                               v626->fields.baseIndex,
                                               v626->fields.actionIndex,
                                               0LL);
            v626->fields.isMoveByOutOfWarningArea = FlagOutOfWarningAreaToDistance;
            v669 = routeData;
            p__7__wrap23 = v711;
            if ( !routeData )
              sub_B7769C(FlagOutOfWarningAreaToDistance, v668);
            evalOffsetMagnification = routeData->fields.evalOffsetMagnification;
            if ( !evalOffsetMagnification )
              sub_B7769C(FlagOutOfWarningAreaToDistance, v668);
            evalOffsetMagnification->fields.isAttack = (routeData->fields.flagNow & 2) != 0;
            v671 = v669->fields.basePiece;
            if ( !v671 )
              sub_B7769C(FlagOutOfWarningAreaToDistance, v668);
            piecePersonalityDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)_4__this->fields.piecePersonalityDic;
            if ( !piecePersonalityDic )
              sub_B7769C(0LL, v668);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                 piecePersonalityDic,
                                                                 v671->fields._index_k__BackingField,
                                                                 &value,
                                                                 (const MethodInfo_2FF5E9C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v673 = (WarBoardAIRoute_PiecePersonality_o *)value;
              v674 = (WarBoardAIEvalCalcurater_o *)sub_B77694(WarBoardAIEvalCalcurater_TypeInfo);
              WarBoardAIEvalCalcurater___ctor(v674, v673, 0LL);
              if ( !v674 )
                sub_B7769C(v675, v676);
              WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v674, &routeData, 0LL);
              WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
                v674,
                &routeData,
                _4__this->fields.averageBenefitValue,
                0LL);
              if ( !routeData )
                sub_B7769C(0LL, v677);
              WarBoardAIRoute_RouteData__CalcEvalValue(routeData, v677);
              v678 = WarBoardAIRoute___c_TypeInfo;
              v679 = v732->fields.routeDataList;
              if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v678 = WarBoardAIRoute___c_TypeInfo;
              }
              v680 = v678->static_fields;
              _9__47_5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v680->__9__47_5;
              if ( !_9__47_5 )
              {
                if ( (BYTE3(v678->vtable._0_Equals.methodPtr) & 4) != 0 && !v678->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v678);
                  v627 = piecePlaceData;
                  v680 = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v682 = (Il2CppObject *)v680->__9;
                _9__47_5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
                  _9__47_5,
                  v682,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__,
                  (const MethodInfo_29EAA10 *)Method_System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___ctor__);
                v683 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v683->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
                sub_B77560(
                  (BattleServantConfConponent_o *)&v683->__9__47_5,
                  (System_Int32_array **)_9__47_5,
                  v684,
                  v685,
                  v686,
                  v687,
                  v688,
                  v689);
                p__7__wrap23 = v711;
              }
              v690 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v679,
                                                                      (System_Func_TSource__TResult__o *)_9__47_5,
                                                                      (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
              v691 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
              System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
                v691,
                v690,
                (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___69420960);
              if ( !v691 )
                sub_B7769C(v692, v693);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v691,
                (EventMissionProgressRequest_Argument_ProgressData_o *)routeData,
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__);
              v694 = BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                       (System_Collections_Generic_List_T__o *)v691,
                       v691->fields._size - 2,
                       0LL,
                       (const MethodInfo_1C6842C *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
              route = v694;
              if ( v694 )
              {
                if ( !routeData )
                  sub_B7769C(v694, v695);
                if ( routeData->fields.basePiece == v694->fields.basePiece )
                {
                  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
                    v674,
                    &route,
                    routeData,
                    0LL);
                  if ( !route )
                    sub_B7769C(0LL, v696);
                  WarBoardAIRoute_RouteData__CalcEvalValue(route, v696);
                }
              }
              allRouteList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allRouteList;
              if ( !allRouteList )
                sub_B7769C(0LL, v695);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                allRouteList,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v691,
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
              if ( !routeData )
                sub_B7769C(this, method);
              if ( routeData->fields.baseIndex != routeData->fields.actionIndex && (routeData->fields.flagNow & 2) == 0 )
              {
                searchCount = v732->fields.searchCount;
                if ( searchCount != 1 )
                {
                  v701 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(_4__this, v627, searchCount, v691, 0LL);
                  v702 = v732;
                  v732->fields.__2__current = v701;
                  sub_B77560(
                    (BattleServantConfConponent_o *)&v702->fields.__2__current,
                    (System_Int32_array **)v701,
                    v703,
                    v704,
                    v705,
                    v706,
                    v707,
                    v708);
                  result = 1;
                  v732->fields.__1__state = 1;
                  return result;
                }
                dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
                v700 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(_4__this, v627, 1, v691, 0LL);
                if ( !routeData )
                  sub_B7769C(v700, v700);
                if ( !dictionaryCreateRouteDataEvalValue )
                  sub_B7769C(v700, v700);
                System_Collections_Generic_Dictionary_object__float___Add(
                  dictionaryCreateRouteDataEvalValue,
                  v700,
                  routeData->fields.evalValue,
                  (const MethodInfo_2F890B4 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
              }
            }
            goto LABEL_543;
          }
        }
        v204 = v732;
        WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v732, v82);
        *(_OWORD *)&p__7__wrap8->fields.dictionary = 0u;
        p__7__wrap8->fields.current = 0u;
        if ( v204->fields.searchCount != 1 )
          return 0;
        if ( !_4__this )
          sub_B7769C(v205, v206);
        v207 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        v208 = WarBoardAIRoute___c_TypeInfo;
        if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v208 = WarBoardAIRoute___c_TypeInfo;
        }
        v209 = v208->static_fields;
        _9__47_6 = (System_Func_T__TResult__o *)v209->__9__47_6;
        if ( !_9__47_6 )
        {
          if ( (BYTE3(v208->vtable._0_Equals.methodPtr) & 4) != 0 && !v208->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v208);
            v209 = WarBoardAIRoute___c_TypeInfo->static_fields;
          }
          v211 = (Il2CppObject *)v209->__9;
          _9__47_6 = (System_Func_T__TResult__o *)sub_B77694(System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v211,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            (const MethodInfo_29DC6BC *)Method_System_Func_KeyValuePair_IEnumerator__float___float___ctor__);
          v212 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v212->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_B77560(
            (BattleServantConfConponent_o *)&v212->__9__47_6,
            (System_Int32_array **)_9__47_6,
            v213,
            v214,
            v215,
            v216,
            v217,
            v218);
        }
        v220 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__float___float_(
                 v207,
                 (System_Func_TSource__TKey__o *)_9__47_6,
                 (const MethodInfo_1D34B78 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v732->fields._servantAndEnemyMasterRange_5__15 = 0;
        v221 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v221 )
          sub_B7769C(0LL, v219);
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v221,
                  (const MethodInfo_2F88CB0 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v224 = _4__this->fields.npcData;
        if ( !v224 )
          sub_B7769C(Count, v223);
        v225 = (float)((float)v224->fields.calcEllipsis / 100.0) * (float)(int)Count;
        v226 = v732;
        if ( v225 == INFINITY )
          v227 = -v225;
        else
          v227 = v225;
        v228 = (int)v227;
        v732->fields._servantAndEnemyRange_5__14 = (int)v227;
        v229 = _4__this->fields.npcData;
        if ( !v229 )
          sub_B7769C(Count, v223);
        calcEllipsisMin = v229->fields.calcEllipsisMin;
        if ( calcEllipsisMin > v228 )
          v228 = calcEllipsisMin;
        v226->fields._servantAndEnemyRange_5__14 = v228;
        if ( !v220 )
          sub_B7769C(Count, v223);
        v231 = v220->klass;
        if ( *(_WORD *)&v220->klass->_2.bitflags1 )
        {
          v232 = 0LL;
          p_offset = &v231->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            ++v232;
            p_offset += 4;
            if ( v232 >= *(unsigned __int16 *)&v220->klass->_2.bitflags1 )
              goto LABEL_118;
          }
          p_method = (__int64)&v231->vtable[*p_offset].method;
        }
        else
        {
LABEL_118:
          p_method = sub_B0F4C0(
                       v220,
                       System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo,
                       0LL);
        }
        v245 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                                        v220,
                                        *(_QWORD *)(p_method + 8));
        p__7__wrap24 = &v732->fields.__7__wrap24;
        *(_QWORD *)&v732->fields.__7__wrap24 = v245;
        sub_B77560((BattleServantConfConponent_o *)p__7__wrap24, v245, v246, v247, v248, v249, v250, v251);
        v732->fields.__1__state = -4;
        goto LABEL_126;
      }
    }
    v60 = (System_Int32_array **)WarBoardAIRoute__GetDefenseAreaData(
                                   _4__this,
                                   *p_masterSquareIndex_5__4,
                                   *p_allyPieceIndexs_5__5,
                                   *p_piecePlaceData,
                                   0LL);
    p_defenseAreaData_5__7->klass = (BattleServantConfConponent_c *)v60;
    sub_B77560(p_defenseAreaData_5__7, v60, v61, v62, v63, v64, v65, v66);
    v69 = p_defenseAreaData_5__7->klass;
    if ( !p_defenseAreaData_5__7->klass )
      sub_B7769C(v67, v68);
    v732->fields._baseFlag_5__6 |= (int64_t)v69->_1.name;
    v70 = _4__this->fields.aiRouteMasterData;
    if ( !v70 )
      sub_B7769C(v67, v68);
    if ( WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
           (System_Collections_Generic_List_int____o *)v69->_1.this_arg.data,
           *p_piecePlaceData,
           v70->fields.masterType == 1,
           0LL) )
    {
      v732->fields._baseFlag_5__6 |= 0x20000000uLL;
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  if ( (byte_4388F19 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    byte_4388F19 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &this->fields.__7__wrap8,
    (const MethodInfo_288A5F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
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

  if ( (byte_4388F1A & 1) == 0 )
  {
    sub_B775C4(&System_IDisposable_TypeInfo);
    byte_4388F1A = 1;
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
      v7 = sub_B0F4C0(v3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v7)(v3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall WarBoardAIRoute___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388F09 & 1) == 0 )
  {
    sub_B775C4(&WarBoardAIRoute___c_TypeInfo);
    byte_4388F09 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(WarBoardAIRoute___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4388F0A & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_B775C4(&IWarBoardObjectData_TypeInfo);
    byte_4388F0A = 1;
  }
  if ( !x )
    sub_B7769C(this, x);
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
    p_method = sub_B0F4C0(x, IWarBoardObjectData_TypeInfo, 2LL);
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
  if ( (byte_4388F0B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    byte_4388F0B = 1;
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
  if ( (byte_4388F0C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    byte_4388F0C = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, (const MethodInfo *)x.fields.key);
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return WarBoardAIRoute_RouteData__ShallowCopy(x, (const MethodInfo *)x);
}


float __fastcall WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // s8

  value = x.fields.value;
  if ( (byte_4388F0D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__);
    byte_4388F0D = 1;
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

  if ( (byte_4388F0E & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_B775C4(&IWarBoardObjectData_TypeInfo);
    byte_4388F0E = 1;
  }
  if ( !x )
    sub_B7769C(this, x);
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
    p_method = sub_B0F4C0(x, IWarBoardObjectData_TypeInfo, 4LL);
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

  if ( (byte_4388F0F & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_B775C4(&IWarBoardObjectData_TypeInfo);
    byte_4388F0F = 1;
  }
  if ( !x )
    sub_B7769C(this, x);
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
    p_method = sub_B0F4C0(x, IWarBoardObjectData_TypeInfo, 5LL);
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
  if ( (byte_4388F10 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__);
    byte_4388F10 = 1;
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
    sub_B7769C(this, 0LL);
  return !WarBoardItemData__get_Acquired(z, 0LL) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_B7769C(this, 0LL);
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
  if ( (byte_4388F11 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_B775C4(&IWarBoardObjectData_TypeInfo);
    byte_4388F11 = 1;
  }
  if ( !z )
    sub_B7769C(this, z);
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
    p_method = sub_B0F4C0(z, IWarBoardObjectData_TypeInfo, 0LL);
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
    v12 = sub_B0F4C0(z, IWarBoardObjectData_TypeInfo, 3LL);
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
    sub_B7769C(this, x);
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
    sub_B7769C(this, 0LL);
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
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

  if ( (byte_4388F12 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    byte_4388F12 = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_B7769C(0LL, *(_QWORD *)&square);
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_2FFBBE4 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
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
    sub_B7769C(this, x);
  i = this->fields.i;
  if ( (unsigned int)i >= route->max_length )
  {
    v6 = sub_B776C8(this);
    sub_B77668(v6, 0LL);
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

  if ( (byte_4388F13 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Func_IWarBoardObjectData__bool__Invoke__);
    byte_4388F13 = 1;
  }
  excludeCond = this->fields.excludeCond;
  if ( !excludeCond )
    sub_B7769C(0LL, x);
  return !System_Func_BattleBuffData_BuffData__bool___Invoke(
            (System_Func_BattleBuffData_BuffData__bool__o *)excludeCond,
            (BattleBuffData_BuffData_o *)x,
            (const MethodInfo_29E92D8 *)Method_System_Func_IWarBoardObjectData__bool__Invoke__)
      && this->fields.basePiece != (struct WarBoardPieceData_o *)x;
}


int32_t __fastcall WarBoardAIRoute___c__DisplayClass64_0___GetTargetToDistanceUsingIndividuality_b__1(
        WarBoardAIRoute___c__DisplayClass64_0_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  WarBoardAIRoute___c__DisplayClass64_0_o *v4; // x20
  IWarBoardObjectData_c *klass; // x8
  int32_t baseSquareIndex; // w20
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v10; // w19

  v4 = this;
  if ( (byte_4388F14 & 1) == 0 )
  {
    sub_B775C4(&AStarSearch_TypeInfo);
    this = (WarBoardAIRoute___c__DisplayClass64_0_o *)sub_B775C4(&IWarBoardObjectData_TypeInfo);
    byte_4388F14 = 1;
  }
  if ( !x )
    goto LABEL_15;
  klass = x->klass;
  baseSquareIndex = v4->fields.baseSquareIndex;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B0F4C0(x, IWarBoardObjectData_TypeInfo, 1LL);
  }
  v10 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  this = (WarBoardAIRoute___c__DisplayClass64_0_o *)AStarSearch__RouteSearch(0LL, baseSquareIndex, v10, 0, 0LL, 0LL);
  if ( !this )
LABEL_15:
    sub_B7769C(this, x);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_T__o *routeDataList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20

  if ( (byte_4388F15 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_B775C4(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    sub_B775C4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_B775C4(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__);
    sub_B775C4(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
    byte_4388F15 = 1;
  }
  v5 = sub_B77694(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 16) = targetObject;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)targetObject, v8, v9, v10, v11, v12, v13);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           routeDataList,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_1C66144 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
  struct IWarBoardObjectData_o *targetObject; // x21
  IWarBoardObjectData_c *klass; // x8
  __int64 v7; // x10
  int32_t baseIndex; // w23
  unsigned __int64 v10; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct IWarBoardObjectData_o *v13; // x20
  IWarBoardObjectData_c *v14; // x8
  int32_t actionIndex; // w19
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0

  v4 = this;
  if ( (byte_4388F16 & 1) == 0 )
  {
    sub_B775C4(&IWarBoardObjectData_TypeInfo);
    this = (WarBoardAIRoute___c__DisplayClass65_1_o *)sub_B775C4(&WarBoardItemData_TypeInfo);
    byte_4388F16 = 1;
  }
  targetObject = v4->fields.targetObject;
  if ( !targetObject )
    return 0;
  klass = targetObject->klass;
  v7 = *(&WarBoardItemData_TypeInfo->_2.bitflags2 + 1);
  if ( *(&targetObject->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (WarBoardItemData_c *)klass->_2.typeHierarchy[v7 - 1] != WarBoardItemData_TypeInfo )
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
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_B0F4C0(v4->fields.targetObject, IWarBoardObjectData_TypeInfo, 0LL);
  }
  this = (WarBoardAIRoute___c__DisplayClass65_1_o *)(*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                                      targetObject,
                                                      *(_QWORD *)(p_method + 8));
  if ( baseIndex == (_DWORD)this )
    return 1;
  v13 = v4->fields.targetObject;
  if ( !v13 )
LABEL_25:
    sub_B7769C(this, x);
  v14 = v13->klass;
  actionIndex = x->fields.actionIndex;
  if ( *(_WORD *)&v13->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    v17 = &v14->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v17 - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v16;
      v17 += 4;
      if ( v16 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v18 = (__int64)&v14->vtable[*v17].method;
  }
  else
  {
LABEL_22:
    v18 = sub_B0F4C0(v13, IWarBoardObjectData_TypeInfo, 0LL);
  }
  return actionIndex == (*(unsigned int (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v18)(
                          v13,
                          *(_QWORD *)(v18 + 8));
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
  if ( (byte_4388F17 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass66_0_o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__);
    byte_4388F17 = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  value = v4->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_B7769C(this, x);
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
    sub_B7769C(this, x);
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
      sub_B7769C(this, x);
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