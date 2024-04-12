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
  __int64 v108; // x3
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__c *klass; // x8
  WarBoardData_o *v110; // x22
  unsigned __int64 v111; // x10
  int32_t *p_offset; // x11
  __int64 v113; // x0
  __int64 v114; // x1
  const MethodInfo *v115; // x3
  __int64 v116; // x26
  __int64 v117; // x8
  unsigned __int64 v118; // x10
  int *v119; // x11
  __int64 v120; // x0
  __int64 v121; // x3
  __int64 v122; // x8
  unsigned __int64 v123; // x10
  int *v124; // x11
  __int64 v125; // x0
  __int64 v126; // x1
  int32_t *v127; // x22
  __int64 id; // x0
  __int64 v129; // x1
  _BOOL8 v130; // x0
  __int64 v131; // x1
  __int64 v132; // x0
  __int64 v133; // x1
  _BOOL8 v134; // x0
  __int64 v135; // x1
  __int64 v136; // x8
  unsigned __int64 v137; // x10
  int *v138; // x11
  __int64 v139; // x0
  _QWORD *p_klass; // x19
  BattleServantConfConponent_o *p_ratingBaseIds; // x20
  System_Array_o *v142; // x21
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  __int64 v149; // x8
  unsigned __int64 v150; // x21
  int32_t v151; // w20
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v152; // x20
  __int64 v153; // x22
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  int32_t buckets; // w20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v161; // x22
  WarBoardEvalValueSquare_CalcEval_o *v162; // x25
  _QWORD *p_image; // x19
  BattleServantConfConponent_o *p_tacticalIds; // x21
  System_Array_o *v165; // x20
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  __int64 v172; // x8
  unsigned __int64 v173; // x21
  int32_t v174; // w20
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v177; // x22
  const MethodInfo *v178; // x3
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  __int64 v185; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_tacticalTrendList; // [xsp+8h] [xbp-C8h]
  WarBoardStageNpcEntity_o *v187; // [xsp+10h] [xbp-C0h]
  WarBoardAIRoute_o *v188; // [xsp+18h] [xbp-B8h]
  struct System_Collections_Generic_List_WarBoardRatingBase__o **p_ratingBaseList; // [xsp+20h] [xbp-B0h]
  struct System_Int32_array *v190; // [xsp+28h] [xbp-A8h]
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o **p_dicRatingbaseCalcValue; // [xsp+30h] [xbp-A0h]
  unsigned __int64 key; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o **p_piecePersonalityDic; // [xsp+40h] [xbp-90h]
  DataManager_o *Instance; // [xsp+48h] [xbp-88h]
  int v195; // [xsp+50h] [xbp-80h]
  int v196; // [xsp+54h] [xbp-7Ch]
  WarBoardReinforcementsEntity_o *v197; // [xsp+58h] [xbp-78h] BYREF
  WarBoardStageReinforcementsEntity_o *v198; // [xsp+60h] [xbp-70h] BYREF
  WarEntity_o *v199; // [xsp+68h] [xbp-68h] BYREF
  WarEntity_o *v200; // [xsp+70h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF
  System_RuntimeFieldHandle_o v202; // 0:w1.4
  System_RuntimeFieldHandle_o v203; // 0:w1.4
  System_RuntimeFieldHandle_o v204; // 0:w1.4

  if ( (byte_42AE055 & 1) == 0 )
  {
    sub_B52984(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_B52984(&Method_BasicHelper_IndexValue_int____68584400);
    sub_B52984(&WarBoardEvalValueSquare_CalcEval_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_WarBoardAIMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
    sub_B52984(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_B52984(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
    sub_B52984(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
    sub_B52984(&WarBoardAIRoute_PiecePersonality_TypeInfo);
    sub_B52984(&ShortestDistanceFromAllyMaster_TypeInfo);
    sub_B52984(&ShortestDistanceFromAllyServant_TypeInfo);
    sub_B52984(&ShortestDistanceFromEnemyMaster_TypeInfo);
    sub_B52984(&ShortestDistanceFromEnemyServant_TypeInfo);
    sub_B52984(&ShortestDistanceFromItem_TypeInfo);
    sub_B52984(&ShortestDistanceFromPrioritySpace_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384);
    sub_B52984(&Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49);
    sub_B52984(&Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72);
    sub_B52984(&Method_WarBoardAIRoute___ctor_b__42_0__);
    sub_B52984(&WarBoardAiTargetCacher_TypeInfo);
    byte_42AE055 = 1;
  }
  v200 = 0LL;
  entity = 0LL;
  v198 = 0LL;
  v199 = 0LL;
  v197 = 0LL;
  v196 = 0;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v5;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.tacticalTrendList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v12;
  p_ratingBaseList = &this->fields.ratingBaseList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.ratingBaseList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v19,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v19;
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o **)&this->fields.piecePersonalityDic;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.piecePersonalityDic,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v26;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.allRouteList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B52A54(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v33,
    (const MethodInfo_2EDCA6C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v33;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyAdvantagePieceData,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B52A54(System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v40,
    (const MethodInfo_2EBAB9C *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v40;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dictionaryCreateRouteDataEvalValue,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B52A54(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v47,
    (const MethodInfo_2EDCA6C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v47;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyDesignationItem,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B52A54(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v54,
    (const MethodInfo_2EDCA6C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = v54;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dicUniqueKeyTarget,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v61,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v61;
  p_dicRatingbaseCalcValue = &this->fields.dicRatingbaseCalcValue;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dicRatingbaseCalcValue,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_B52920(
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
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    (const MethodInfo_2F27EE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  reinforcementsSaveList = (WarBoardData_o *)*p_ratingBaseList;
  if ( !*p_ratingBaseList )
    goto LABEL_130;
  p_tacticalTrendList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.tacticalTrendList;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)reinforcementsSaveList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__);
  v187 = npc;
  p_aiIds = (BattleServantConfConponent_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v79 = (System_Array_o *)sub_B5299C(int___TypeInfo, 4LL);
    v202.fields.value = Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v79, v202, 0LL);
    p_aiIds->klass = (BattleServantConfConponent_c *)v79;
    sub_B52920(p_aiIds, (System_Int32_array **)v79, v80, v81, v82, v83, v84, v85);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_130;
  }
  v86 = *(_QWORD *)&aiIds->max_length;
  v188 = this;
  if ( (int)v86 >= 1 )
  {
    v87 = 0LL;
    v190 = aiIds;
    do
    {
      if ( v87 >= (unsigned int)v86 )
        goto LABEL_131;
      v88 = aiIds->m_Items[v87 + 1];
      v89 = (WarBoardAIRoute_PiecePersonality_o *)sub_B52A54(WarBoardAIRoute_PiecePersonality_TypeInfo);
      WarBoardAIRoute_PiecePersonality___ctor(v89, 0LL);
      reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
                                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !reinforcementsSaveList )
          goto LABEL_130;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList,
               &entity,
               overwriteAiId_k__BackingField,
               (const MethodInfo_23E2334 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       Instance,
                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
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
                                                           &v200,
                                                           *((_DWORD *)&v94->fields.npcEntityDict + v95),
                                                           (const MethodInfo_23E2334 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)reinforcementsSaveList & 1) != 0 )
              {
                if ( !v89 )
                  goto LABEL_130;
                actionTrandList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v89->fields.actionTrandList;
                v97 = (WarBoardActionTrendEntity_o *)v200;
                v98 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B52A54(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
                WarBoardAIRoute_ActionTrendInfo___ctor(v98, v97, 0LL);
                if ( !actionTrandList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  actionTrandList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v98,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
              }
              LODWORD(stageNpcMaster) = v94->fields.stageNpcMaster;
              if ( (__int64)++v95 >= (int)stageNpcMaster )
                goto LABEL_38;
            }
LABEL_131:
            v185 = sub_B52A88(reinforcementsSaveList);
            sub_B52A28(v185, 0LL);
          }
LABEL_38:
          reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       Instance,
                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_130;
          v99 = (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList;
          reinforcementsSaveList = (WarBoardData_o *)WarBoardAIEntity__GetRatingOffsetIds(
                                                       (WarBoardAIEntity_o *)entity,
                                                       v75);
          this = v188;
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
                                                           &v199,
                                                           *((_DWORD *)&v101->fields.npcEntityDict + v102),
                                                           (const MethodInfo_23E2334 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)reinforcementsSaveList & 1) != 0 )
              {
                if ( !v89 )
                  goto LABEL_130;
                reinforcementsSaveList = (WarBoardData_o *)v89->fields.ratingOffsetList;
                if ( !reinforcementsSaveList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)reinforcementsSaveList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v199,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
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
        (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      aiIds = v190;
      v87 = key + 1;
      LODWORD(v86) = v190->max_length;
    }
    while ( (__int64)(key + 1) < (int)v86 );
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v104 = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  reinforcementsSaveList = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  v105 = (WarBoardData_o *)reinforcementsSaveList[1].fields.reinforcementsSaveList;
  if ( !v105 )
    goto LABEL_130;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)v105->fields.pieces;
  v107 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v107,
    (Il2CppObject *)this,
    Method_WarBoardAIRoute___ctor_b__42_0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  reinforcementsSaveList = (WarBoardData_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                               pieces,
                                               (System_Func_TSource__bool__o *)v107,
                                               (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  if ( !reinforcementsSaveList )
    goto LABEL_130;
  klass = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__c *)reinforcementsSaveList->klass;
  v110 = reinforcementsSaveList;
  if ( *(_WORD *)&reinforcementsSaveList->klass->_2.bitflags1 )
  {
    v111 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      ++v111;
      p_offset += 4;
      if ( v111 >= *(unsigned __int16 *)&reinforcementsSaveList->klass->_2.bitflags1 )
        goto LABEL_61;
    }
    v113 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_61:
    v113 = sub_AEB880(
             reinforcementsSaveList,
             System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo,
             0LL,
             v108);
  }
  v116 = (*(__int64 (__fastcall **)(WarBoardData_o *, _QWORD))v113)(v110, *(_QWORD *)(v113 + 8));
  if ( !v116 )
    sub_B52A5C(0LL, v114);
  while ( 1 )
  {
    v117 = *(_QWORD *)v116;
    if ( *(_WORD *)(*(_QWORD *)v116 + 298LL) )
    {
      v118 = 0LL;
      v119 = (int *)(*(_QWORD *)(v117 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v119 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v118;
        v119 += 4;
        if ( v118 >= *(unsigned __int16 *)(*(_QWORD *)v116 + 298LL) )
          goto LABEL_68;
      }
      v120 = v117 + 16LL * *v119 + 312;
    }
    else
    {
LABEL_68:
      v120 = sub_AEB880(v116, System_Collections_IEnumerator_TypeInfo, 0LL, v115);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v120)(v116, *(_QWORD *)(v120 + 8)) & 1) == 0 )
      break;
    v122 = *(_QWORD *)v116;
    if ( *(_WORD *)(*(_QWORD *)v116 + 298LL) )
    {
      v123 = 0LL;
      v124 = (int *)(*(_QWORD *)(v122 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v124 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        ++v123;
        v124 += 4;
        if ( v123 >= *(unsigned __int16 *)(*(_QWORD *)v116 + 298LL) )
          goto LABEL_75;
      }
      v125 = v122 + 16LL * *v124 + 312;
    }
    else
    {
LABEL_75:
      v125 = sub_AEB880(v116, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL, v121);
    }
    v127 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v125)(v116, *(_QWORD *)(v125 + 8));
    if ( !v127 )
      sub_B52A5C(0LL, v126);
    if ( !*p_piecePersonalityDic )
      sub_B52A5C(0LL, v126);
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            *p_piecePersonalityDic,
            v127[7],
            (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__) )
    {
      id = WarBoardData__get_id(v105, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        sub_B52A5C(id, v129);
      v130 = WarBoardStageReinforcementsMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v198, id, v127[70], 0LL);
      if ( v130 )
      {
        if ( !v198 )
          sub_B52A5C(v130, v131);
        v132 = BasicHelper__IndexValue_int_(
                 v198->fields.reinforcementsIds,
                 v127[71],
                 -1,
                 (const MethodInfo_1A43EDC *)Method_BasicHelper_IndexValue_int____68584400);
        if ( !v104 )
          sub_B52A5C(v132, v133);
        v134 = WarBoardReinforcementsMaster__TryGetEntity(v104, &v197, v132, 0LL);
        if ( v134 )
        {
          if ( !v197 )
            sub_B52A5C(v134, v135);
          WarBoardAIRoute__AddPiecePersonalityDic(this, v197->fields.aiId, v127[7], v115);
        }
      }
    }
  }
  v195 = 833;
  ++v196;
  v136 = *(_QWORD *)v116;
  if ( *(_WORD *)(*(_QWORD *)v116 + 298LL) )
  {
    v137 = 0LL;
    v138 = (int *)(*(_QWORD *)(v136 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v138 - 1) != System_IDisposable_TypeInfo )
    {
      ++v137;
      v138 += 4;
      if ( v137 >= *(unsigned __int16 *)(*(_QWORD *)v116 + 298LL) )
        goto LABEL_91;
    }
    v139 = v136 + 16LL * *v138 + 312;
  }
  else
  {
LABEL_91:
    v139 = sub_AEB880(v116, System_IDisposable_TypeInfo, 0LL, v121);
  }
  reinforcementsSaveList = (WarBoardData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v139)(
                                               v116,
                                               *(_QWORD *)(v139 + 8));
  if ( v196 && *(&v195 + v196 - 1) == 833 )
    --v196;
  p_ratingBaseIds = (BattleServantConfConponent_o *)&v187->fields.ratingBaseIds;
  p_klass = &v187->fields.ratingBaseIds->obj.klass;
  if ( !p_klass )
  {
    v142 = (System_Array_o *)sub_B5299C(int___TypeInfo, 6LL);
    v203.fields.value = Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v142, v203, 0LL);
    p_ratingBaseIds->klass = (BattleServantConfConponent_c *)v142;
    sub_B52920(p_ratingBaseIds, (System_Int32_array **)v142, v143, v144, v145, v146, v147, v148);
    p_klass = &p_ratingBaseIds->klass->_1.image;
    if ( !p_ratingBaseIds->klass )
LABEL_130:
      sub_B52A5C(reinforcementsSaveList, v75);
  }
  v149 = p_klass[3];
  if ( (int)v149 >= 1 )
  {
    v150 = 0LL;
    while ( 2 )
    {
      if ( v150 >= (unsigned int)v149 )
        goto LABEL_131;
      reinforcementsSaveList = (WarBoardData_o *)Instance;
      if ( Instance )
      {
        v151 = *((_DWORD *)p_klass + v150 + 8);
        reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     Instance,
                                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
        if ( reinforcementsSaveList )
        {
          reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList,
                                                       v151,
                                                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
          if ( reinforcementsSaveList )
          {
            v152 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)reinforcementsSaveList;
            switch ( HIDWORD(reinforcementsSaveList->fields.stageEntity) )
            {
              case 0:
                v153 = sub_B52A54(ShortestDistanceFromAllyServant_TypeInfo);
                ShortestDistanceFromAllyServant___ctor((ShortestDistanceFromAllyServant_o *)v153, 0LL);
                if ( !v153 )
                  goto LABEL_130;
                goto LABEL_116;
              case 1:
                v153 = sub_B52A54(ShortestDistanceFromEnemyServant_TypeInfo);
                ShortestDistanceFromEnemyServant___ctor((ShortestDistanceFromEnemyServant_o *)v153, 0LL);
                if ( !v153 )
                  goto LABEL_130;
                goto LABEL_116;
              case 2:
                v153 = sub_B52A54(ShortestDistanceFromAllyMaster_TypeInfo);
                ShortestDistanceFromAllyMaster___ctor((ShortestDistanceFromAllyMaster_o *)v153, 0LL);
                if ( !v153 )
                  goto LABEL_130;
                goto LABEL_116;
              case 3:
                v153 = sub_B52A54(ShortestDistanceFromEnemyMaster_TypeInfo);
                ShortestDistanceFromEnemyMaster___ctor((ShortestDistanceFromEnemyMaster_o *)v153, 0LL);
                if ( !v153 )
                  goto LABEL_130;
                goto LABEL_116;
              case 4:
                v153 = sub_B52A54(ShortestDistanceFromItem_TypeInfo);
                ShortestDistanceFromItem___ctor((ShortestDistanceFromItem_o *)v153, 0LL);
                if ( !v153 )
                  goto LABEL_130;
                goto LABEL_116;
              case 5:
                v153 = sub_B52A54(ShortestDistanceFromPrioritySpace_TypeInfo);
                ShortestDistanceFromPrioritySpace___ctor((ShortestDistanceFromPrioritySpace_o *)v153, 0LL);
                if ( !v153 )
                  goto LABEL_130;
LABEL_116:
                *(_QWORD *)(v153 + 16) = v152;
                sub_B52920(
                  (BattleServantConfConponent_o *)(v153 + 16),
                  (System_Int32_array **)v152,
                  v154,
                  v155,
                  v156,
                  v157,
                  v158,
                  v159);
                reinforcementsSaveList = (WarBoardData_o *)*p_ratingBaseList;
                if ( !*p_ratingBaseList )
                  goto LABEL_130;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)reinforcementsSaveList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v153,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardRatingBase__Add__);
LABEL_118:
                buckets = (int32_t)v152->fields.buckets;
                v161 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)*p_dicRatingbaseCalcValue;
                v162 = (WarBoardEvalValueSquare_CalcEval_o *)sub_B52A54(WarBoardEvalValueSquare_CalcEval_TypeInfo);
                WarBoardEvalValueSquare_CalcEval___ctor(v162, 0LL);
                if ( !v161 )
                  goto LABEL_130;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  v161,
                  buckets,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v162,
                  (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
                LODWORD(v149) = *((_DWORD *)p_klass + 6);
                if ( (__int64)++v150 >= (int)v149 )
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
  p_tacticalIds = (BattleServantConfConponent_o *)&v187->fields.tacticalIds;
  p_image = &v187->fields.tacticalIds->obj.klass;
  if ( !p_image )
  {
    v165 = (System_Array_o *)sub_B5299C(int___TypeInfo, 5LL);
    v204.fields.value = Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v165, v204, 0LL);
    p_tacticalIds->klass = (BattleServantConfConponent_c *)v165;
    sub_B52920(p_tacticalIds, (System_Int32_array **)v165, v166, v167, v168, v169, v170, v171);
    p_image = &p_tacticalIds->klass->_1.image;
    if ( !p_tacticalIds->klass )
      goto LABEL_130;
  }
  v172 = p_image[3];
  if ( (int)v172 >= 1 )
  {
    v173 = 0LL;
    while ( v173 < (unsigned int)v172 )
    {
      reinforcementsSaveList = (WarBoardData_o *)Instance;
      if ( !Instance )
        goto LABEL_130;
      v174 = *((_DWORD *)p_image + v173 + 8);
      reinforcementsSaveList = (WarBoardData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   Instance,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !reinforcementsSaveList )
        goto LABEL_130;
      reinforcementsSaveList = (WarBoardData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)reinforcementsSaveList,
                                                   v174,
                                                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      if ( !*p_tacticalTrendList )
        goto LABEL_130;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_tacticalTrendList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)reinforcementsSaveList,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__);
      LODWORD(v172) = *((_DWORD *)p_image + 6);
      if ( (__int64)++v173 >= (int)v172 )
        goto LABEL_129;
    }
    goto LABEL_131;
  }
LABEL_129:
  forceId = v188->fields.forceId;
  groupId = v188->fields.groupId;
  v177 = (WarBoardAiTargetCacher_o *)sub_B52A54(WarBoardAiTargetCacher_TypeInfo);
  WarBoardAiTargetCacher___ctor(v177, forceId, groupId, v178);
  v188->fields.aiTargetCacher = v177;
  sub_B52920(
    (BattleServantConfConponent_o *)&v188->fields.aiTargetCacher,
    (System_Int32_array **)v177,
    v179,
    v180,
    v181,
    v182,
    v183,
    v184);
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

  if ( (byte_42AE056 & 1) == 0 )
  {
    sub_B52984(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_WarBoardAIMaster___);
    sub_B52984(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_B52984(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
    sub_B52984(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____);
    sub_B52984(&Method_System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool___ctor__);
    sub_B52984(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
    sub_B52984(&WarBoardAIRoute_PiecePersonality_TypeInfo);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__);
    sub_B52984(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
    byte_42AE056 = 1;
  }
  v7 = (WarBoardAIRoute___c__DisplayClass43_0_o *)sub_B52A54(WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass43_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_32;
  v7->fields.pieceIndex = pieceIndex;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  v11 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)sub_B52A54(System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    (const MethodInfo_2779010 *)Method_System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool___ctor__);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v11,
         (const MethodInfo_1B5114C *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v15 = (WarBoardAIRoute_PiecePersonality_o *)sub_B52A54(WarBoardAIRoute_PiecePersonality_TypeInfo);
  WarBoardAIRoute_PiecePersonality___ctor(v15, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  Entity = (WarBoardAIEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   Master_WarQuestSelectionMaster,
                                   aiId,
                                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
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
                                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v15 )
          goto LABEL_32;
        actionTrandList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v15->fields.actionTrandList;
        v20 = (WarBoardActionTrendEntity_o *)Entity;
        v21 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B52A54(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v21, v20, 0LL);
        if ( !actionTrandList )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          actionTrandList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
      LODWORD(actionTrendIds) = v17->fields.actionTrendIds;
      if ( (__int64)++v18 >= (int)actionTrendIds )
        goto LABEL_20;
    }
LABEL_33:
    v25 = sub_B52A88(Entity);
    sub_B52A28(v25, 0LL);
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
                                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
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
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
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
    sub_B52A5C(Entity, v9);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Entity,
    v7->fields.pieceIndex,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v15,
    (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
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
  __int64 v85; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v87; // x20
  unsigned __int64 v88; // x10
  int *p_offset; // x11
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x3
  int v93; // w8
  unsigned int v94; // w9
  WarBoardActionTrendConditionEntity_o *v95; // x26
  struct System_Int32_array *conditionTypes; // x28
  __int64 v97; // x8
  unsigned __int64 v98; // x27
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x0
  const MethodInfo *v101; // x2
  TargetDetector_o *DetectorByTrendKey; // x0
  const MethodInfo *v103; // x1
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v104; // x19
  const MethodInfo *v105; // x3
  WarBoardAiTargetCacher_o *v106; // x19
  const MethodInfo *v107; // x1
  int64_t v108; // x0
  const MethodInfo *v109; // x4
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicIndividualityPutSqareIndex; // x19
  int64_t v111; // x22
  const MethodInfo *v112; // x1
  int64_t v113; // x25
  WarBoardAIRoute_TargetData_o *v114; // x23
  __int64 v115; // x0
  __int64 v116; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  const MethodInfo *v118; // x1
  int32_t squareIndex; // w19
  unsigned int v120; // w24
  WarBoardAIRoute___c__DisplayClass45_0_o *v121; // x21
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *dicSquareIndexKeyItemData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v124; // x22
  WarBoardEvalValueSquare_EvalValueSquare_o *v125; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v126; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x22
  WarBoardAIRoute_o *v128; // x0
  const MethodInfo *v129; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicSquarePutSqareIndex; // x19
  int64_t v131; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v133; // x22
  WarBoardSquareData_o *v134; // x21
  int64_t v135; // x22
  WarBoardAIRoute_TargetData_o *v136; // x19
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v137; // x21
  const MethodInfo *v138; // x1
  int64_t v139; // x0
  __int64 v140; // x8
  unsigned __int64 v141; // x10
  int *v142; // x11
  __int64 v143; // x0
  __int64 v144; // x3
  __int64 v145; // x8
  unsigned __int64 v146; // x10
  int *v147; // x11
  __int64 v148; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v149; // x0
  __int64 v150; // x1
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x20
  int v152; // w19
  __int64 v153; // x8
  unsigned __int64 v154; // x10
  int *v155; // x11
  __int64 v156; // x21
  __int64 v157; // x0
  WarBoardAiTargetCacher_o *v158; // x20
  WarBoardAIRoute___c_c *v159; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__45_0; // x19
  Il2CppObject *v162; // x21
  struct WarBoardAIRoute___c_StaticFields *v163; // x0
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v170; // x0
  const MethodInfo *v171; // x2
  WarBoardAIRoute_AdvantagePieceData_o *v172; // x20
  struct WarBoardPieceData_array *v173; // x22
  int v174; // w8
  int32_t v175; // w21
  unsigned int v176; // w23
  __int64 v177; // x8
  __int64 v178; // x24
  int32_t ClassId; // w19
  float Magnification; // s9
  float v181; // s10
  float v182; // s8
  bool v183; // cc
  float v184; // s9
  char v185; // w19
  int v186; // w8
  const MethodInfo *v187; // x1
  __int64 v188; // x0
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+8h] [xbp-118h]
  struct WarBoardPieceData_array *v190; // [xsp+10h] [xbp-110h]
  void **p_aiRouteMasterData; // [xsp+20h] [xbp-100h]
  int v192; // [xsp+2Ch] [xbp-F4h]
  int v193; // [xsp+30h] [xbp-F0h]
  signed int v194; // [xsp+34h] [xbp-ECh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-E8h]
  __int64 v196; // [xsp+40h] [xbp-E0h]
  unsigned int v197; // [xsp+54h] [xbp-CCh]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v199; // [xsp+60h] [xbp-C0h]
  WarBoardAIRoute_o *v200; // [xsp+68h] [xbp-B8h]
  WarBoardAIRoute_DesignationItemData_o *v201; // [xsp+78h] [xbp-A8h]
  WarBoardAIRoute_PutSquareTarget_o *v202; // [xsp+88h] [xbp-98h]
  _DWORD v203[1]; // [xsp+90h] [xbp-90h]
  int v204; // [xsp+94h] [xbp-8Ch]
  bool notSquareTarget; // [xsp+98h] [xbp-88h] BYREF
  int32_t condType; // [xsp+9Ch] [xbp-84h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_42AE058 & 1) == 0 )
  {
    sub_B52984(&WarBoardAIRoute_AIRouteMasterData_TypeInfo);
    sub_B52984(&WarBoardAIRoute_AdvantagePieceData_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
    sub_B52984(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&WarBoardAIRoute_DesignationItemData_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__uint__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__uint__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
    sub_B52984(&Method_System_Func_WarBoardItemData__bool___ctor__);
    sub_B52984(&Method_System_Func_WarBoardSquareData__bool___ctor__);
    sub_B52984(&Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
    sub_B52984(&Method_System_Func_IWarBoardObjectData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_B52984(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_B52984(&System_Func_WarBoardItemData__bool__TypeInfo);
    sub_B52984(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
    sub_B52984(&WarBoardAIRoute_PutSquareTarget_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&SvtClassAttri_TypeInfo);
    sub_B52984(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_B52984(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__);
    sub_B52984(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
    sub_B52984(&WarBoardAIRoute___c_TypeInfo);
    sub_B52984(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__);
    byte_42AE058 = 1;
  }
  value = 0LL;
  condType = 0;
  notSquareTarget = 0;
  v204 = 0;
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_206;
  v5 = *(_QWORD **)&Instance[5].fields.count;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v5 )
    goto LABEL_206;
  v200 = this;
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
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      if ( !v14 )
        goto LABEL_206;
      if ( !*(_BYTE *)(v14 + 60) )
      {
        v12 = *(_DWORD *)(v14 + 20);
        forceId = v200->fields.forceId;
        if ( v12 != forceId )
          goto LABEL_12;
        if ( *(_DWORD *)(v14 + 24) == v200->fields.groupId )
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
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    v12 = *(_DWORD *)(v14 + 20);
    forceId = v200->fields.forceId;
LABEL_12:
    if ( v12 != forceId )
    {
      if ( !v7 )
        goto LABEL_206;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                            (WarBoardPieceData_o *)v14,
                                                                            0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        v200->fields.enemyMasterSquareIndex = *(_DWORD *)(v14 + 64);
    }
    goto LABEL_20;
  }
LABEL_21:
  if ( !v6 )
    goto LABEL_206;
  v15 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                 (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v16 = v200;
  v200->fields.allAllyPiece = (struct WarBoardPieceData_array *)v15;
  sub_B52920((BattleServantConfConponent_o *)&v200->fields.allAllyPiece, v15, v17, v18, v19, v20, v21, v22);
  if ( !v7 )
    goto LABEL_206;
  v23 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                 (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v200->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v23;
  sub_B52920((BattleServantConfConponent_o *)&v200->fields.allEnemyPiece, v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_Int32_array **)v5[7];
  v200->fields.allSquare = (struct WarBoardSquareData_array *)v30;
  sub_B52920((BattleServantConfConponent_o *)&v200->fields.allSquare, v30, v31, v32, v33, v34, v35, v36);
  v37 = (System_Int32_array **)v5[9];
  v200->fields.allItemData = (struct WarBoardItemData_array *)v37;
  sub_B52920((BattleServantConfConponent_o *)&v200->fields.allItemData, v37, v38, v39, v40, v41, v42, v43);
  v44 = (System_Int32_array **)v5[10];
  v200->fields.allTreasureData = (struct WarBoardTreasureData_array *)v44;
  sub_B52920((BattleServantConfConponent_o *)&v200->fields.allTreasureData, v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Int32_array **)v5[11];
  v200->fields.allWallData = (struct WarBoardWallData_array *)v51;
  sub_B52920((BattleServantConfConponent_o *)&v200->fields.allWallData, v51, v52, v53, v54, v55, v56, v57);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v200->fields.dictionaryCreateRouteDataEvalValue;
  p_allEnemyPiece = &v200->fields.allEnemyPiece;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_object__float___Clear(
    Instance,
    (const MethodInfo_2EBB930 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v200->fields.dicUniqueKeyDesignationItem;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
    (const MethodInfo_2EDD7FC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v200->fields.dicUniqueKeyTarget;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
    (const MethodInfo_2EDD7FC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v200->fields.dicUniqueKeyAdvantagePieceData;
  if ( !Instance )
    goto LABEL_206;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
    (const MethodInfo_2EDD7FC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_206;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v58,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v58 )
    goto LABEL_206;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v58,
    (System_Collections_Generic_IEnumerable_T__o *)v200->fields.allItemData,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v58,
    (System_Collections_Generic_IEnumerable_T__o *)v200->fields.allTreasureData,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v58,
    (System_Collections_Generic_IEnumerable_T__o *)v200->fields.allWallData,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v58,
    (System_Collections_Generic_IEnumerable_T__o *)v8,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  v59 = v200->fields.forceId;
  groupId = v200->fields.groupId;
  v61 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_B52A54(WarBoardAIRoute_AIRouteMasterData_TypeInfo);
  WarBoardAIRoute_AIRouteMasterData___ctor(v61, v59, groupId, 0LL);
  v200->fields.aiRouteMasterData = v61;
  p_aiRouteMasterData = (void **)&v200->fields.aiRouteMasterData;
  sub_B52920(
    (BattleServantConfConponent_o *)&v200->fields.aiRouteMasterData,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v68,
    (const MethodInfo_2F2E96C *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  p_placePieceData = (void **)&v200->fields.placePieceData;
  v200->fields.placePieceData = v68;
  sub_B52920(
    (BattleServantConfConponent_o *)&v200->fields.placePieceData,
    (System_Int32_array **)v68,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  allAllyPiece = v200->fields.allAllyPiece;
  if ( !allAllyPiece )
    goto LABEL_206;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v78 = 0;
    v192 = 0;
    v199 = v58;
    v190 = v200->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v78 >= (unsigned int)max_length )
        goto LABEL_207;
      v81 = allAllyPiece->m_Items[v78];
      if ( !v81 )
        goto LABEL_206;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      v194 = v78;
      if ( !*p_placePieceData )
        goto LABEL_206;
      pieceData = allAllyPiece->m_Items[v78];
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
                                                                            v81->fields._nowSquareIndex_k__BackingField,
                                                                            (const MethodInfo_2F2F774 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_203;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_206;
      System_Collections_Generic_Dictionary_int__uint___Add(
        (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
        pieceData->fields._nowSquareIndex_k__BackingField,
        pieceData->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_2F2F510 *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
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
      v201 = (WarBoardAIRoute_DesignationItemData_o *)sub_B52A54(WarBoardAIRoute_DesignationItemData_TypeInfo);
      WarBoardAIRoute_DesignationItemData___ctor(v201, 0LL);
      v202 = (WarBoardAIRoute_PutSquareTarget_o *)sub_B52A54(WarBoardAIRoute_PutSquareTarget_TypeInfo);
      WarBoardAIRoute_PutSquareTarget___ctor(v202, 0LL);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v16->fields.piecePersonalityDic;
      if ( !Instance )
        goto LABEL_206;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
                                                                            pieceData->fields._index_k__BackingField,
                                                                            &value,
                                                                            (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
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
        v87 = Instance;
        if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
        {
          v88 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
          {
            ++v88;
            p_offset += 4;
            if ( v88 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
              goto LABEL_77;
          }
          v90 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_77:
          v90 = sub_AEB880(
                  Instance,
                  System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                  0LL,
                  v85);
        }
        v196 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v90)(
                 v87,
                 *(_QWORD *)(v90 + 8));
        if ( !v196 )
          sub_B52A5C(0LL, v91);
        while ( 1 )
        {
LABEL_122:
          v140 = *(_QWORD *)v196;
          if ( *(_WORD *)(*(_QWORD *)v196 + 298LL) )
          {
            v141 = 0LL;
            v142 = (int *)(*(_QWORD *)(v140 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v142 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v141;
              v142 += 4;
              if ( v141 >= *(unsigned __int16 *)(*(_QWORD *)v196 + 298LL) )
                goto LABEL_126;
            }
            v143 = v140 + 16LL * *v142 + 312;
          }
          else
          {
LABEL_126:
            v143 = sub_AEB880(v196, System_Collections_IEnumerator_TypeInfo, 0LL, v92);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v143)(v196, *(_QWORD *)(v143 + 8)) & 1) == 0 )
            break;
          v145 = *(_QWORD *)v196;
          if ( *(_WORD *)(*(_QWORD *)v196 + 298LL) )
          {
            v146 = 0LL;
            v147 = (int *)(*(_QWORD *)(v145 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__c **)v147 - 1) != System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
            {
              ++v146;
              v147 += 4;
              if ( v146 >= *(unsigned __int16 *)(*(_QWORD *)v196 + 298LL) )
                goto LABEL_133;
            }
            v148 = v145 + 16LL * *v147 + 312;
          }
          else
          {
LABEL_133:
            v148 = sub_AEB880(
                     v196,
                     System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                     0LL,
                     v144);
          }
          v149 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v148)(
                                                        v196,
                                                        *(_QWORD *)(v148 + 8));
          if ( !v149 )
            sub_B52A5C(0LL, v150);
          Entity_k__BackingField = v149->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v149, 0LL);
          if ( !ConditionEntityArray )
            sub_B52A5C(0LL, v118);
          v93 = ConditionEntityArray->max_length;
          if ( v93 >= 1 )
          {
            v94 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v94 >= v93 )
              {
                v80 = sub_B52A88(ConditionEntityArray);
                sub_B52A28(v80, 0LL);
              }
              v95 = ConditionEntityArray->m_Items[v94];
              if ( !v95 )
                sub_B52A5C(ConditionEntityArray, v118);
              conditionTypes = v95->fields.conditionTypes;
              v197 = v94;
              if ( !conditionTypes )
                sub_B52A5C(ConditionEntityArray, v118);
              v97 = *(_QWORD *)&conditionTypes->max_length;
              if ( (int)v97 >= 1 )
                break;
LABEL_121:
              ConditionEntityArray = condEntityArray;
              v93 = condEntityArray->max_length;
              v94 = v197 + 1;
              if ( (int)(v197 + 1) >= v93 )
                goto LABEL_122;
            }
            v98 = 0LL;
            while ( 2 )
            {
              if ( v98 >= (unsigned int)v97 )
              {
                v79 = sub_B52A88(ConditionEntityArray);
                sub_B52A28(v79, 0LL);
              }
              v120 = conditionTypes->m_Items[v98 + 1];
              v121 = (WarBoardAIRoute___c__DisplayClass45_0_o *)sub_B52A54(WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
              WarBoardAIRoute___c__DisplayClass45_0___ctor(v121, 0LL);
              if ( !v121 )
                sub_B52A5C(ConditionEntityArray, v118);
              v121->fields.squareIndex = -1;
              if ( v120 <= 0x2A && ((1LL << v120) & 0x70001800000LL) != 0 )
              {
                v118 = (const MethodInfo *)(unsigned int)v95->fields.value;
                v121->fields.squareIndex = (int)v118;
                if ( (_DWORD)v118 != -1 )
                {
                  if ( !v201 )
                    sub_B52A5C(ConditionEntityArray, v118);
                  dicSquareIndexKeyItemData = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v201->fields.dicSquareIndexKeyItemData;
                  if ( !dicSquareIndexKeyItemData )
                    sub_B52A5C(0LL, v118);
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                                                       dicSquareIndexKeyItemData,
                                                                                       (int32_t)v118,
                                                                                       (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)v200->fields.allItemData;
                    v124 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardItemData__bool__TypeInfo);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      v124,
                      (Il2CppObject *)v121,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                      (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardItemData__bool___ctor__);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                                         allItemData,
                                                                                         (System_Func_TSource__bool__o *)v124,
                                                                                         (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                    v125 = (WarBoardEvalValueSquare_EvalValueSquare_o *)ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v126 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v201->fields.dicSquareIndexKeyItemData;
                      if ( !v126 )
                        sub_B52A5C(0LL, v118);
                      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                        v126,
                        v121->fields.squareIndex,
                        v125,
                        (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                    }
                  }
                }
              }
              v121->fields.squareIndex = -1;
              if ( v120 == 74 || v120 == 75 )
              {
                squareIndex = v95->fields.value;
                v121->fields.squareIndex = squareIndex;
                goto LABEL_110;
              }
              if ( v120 - 127 <= 1 )
              {
                if ( !Entity_k__BackingField )
                  sub_B52A5C(ConditionEntityArray, v118);
                aiTargetCacher = v16->fields.aiTargetCacher;
                TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v118);
                if ( !aiTargetCacher )
                  sub_B52A5C(TrendKey, TrendKey);
                DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(aiTargetCacher, TrendKey, v101);
                if ( !DetectorByTrendKey )
                {
                  v104 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B52A54(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
                  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
                    v104,
                    0LL,
                    Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                    (const MethodInfo_2BC58BC *)Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
                  WarBoardActionTrendConditionMaster__HasMatchCondition(condEntityArray, v104, &condType, v105);
                  v106 = v16->fields.aiTargetCacher;
                  v108 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v107);
                  if ( !v106 )
                    sub_B52A5C(v108, v108);
                  WarBoardAiTargetCacher__Register(v106, v108, v95, condType, v109);
                }
                if ( !v202 )
                  sub_B52A5C(DetectorByTrendKey, v103);
                dicIndividualityPutSqareIndex = v202->fields.dicIndividualityPutSqareIndex;
                v111 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v103);
                v113 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v112);
                v114 = (WarBoardAIRoute_TargetData_o *)sub_B52A54(WarBoardAIRoute_TargetData_TypeInfo);
                WarBoardAIRoute_TargetData___ctor(v114, v113, v120, 0LL);
                if ( !dicIndividualityPutSqareIndex )
                  sub_B52A5C(v115, v116);
                System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
                  dicIndividualityPutSqareIndex,
                  v111,
                  v114,
                  (const MethodInfo_2F52434 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                squareIndex = v121->fields.squareIndex;
                v58 = v199;
                v16 = v200;
LABEL_110:
                if ( squareIndex != -1 )
                {
                  if ( !v202 )
                    sub_B52A5C(ConditionEntityArray, v118);
                  if ( !Entity_k__BackingField )
                    sub_B52A5C(ConditionEntityArray, v118);
                  dicObjectPutSquareIndex = v202->fields.dicObjectPutSquareIndex;
                  v128 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v118);
                  WarBoardAIRoute__RegisterTargetObjectToDic(
                    v128,
                    dicObjectPutSquareIndex,
                    (System_Collections_Generic_List_IWarBoardObjectData__o *)v58,
                    squareIndex,
                    (int64_t)v128,
                    v120,
                    &notSquareTarget,
                    v129);
                  if ( !notSquareTarget )
                  {
                    dicSquarePutSqareIndex = v202->fields.dicSquarePutSqareIndex;
                    v131 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v118);
                    if ( !dicSquarePutSqareIndex )
                      sub_B52A5C(v131, v131);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ContainsKey(
                                                                                         dicSquarePutSqareIndex,
                                                                                         v131,
                                                                                         (const MethodInfo_2F526D0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                    if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                    {
                      allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)v200->fields.allSquare;
                      v133 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardSquareData__bool__TypeInfo);
                      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                        v133,
                        (Il2CppObject *)v121,
                        Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                        (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardSquareData__bool___ctor__);
                      ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                                           allSquare,
                                                                                           (System_Func_TSource__bool__o *)v133,
                                                                                           (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                      v134 = (WarBoardSquareData_o *)ConditionEntityArray;
                      if ( ConditionEntityArray )
                      {
                        v135 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v118);
                        v136 = (WarBoardAIRoute_TargetData_o *)sub_B52A54(WarBoardAIRoute_TargetData_TypeInfo);
                        WarBoardAIRoute_TargetData___ctor_22172568(v136, v134, v135, v120, 0LL);
                        v137 = v202->fields.dicSquarePutSqareIndex;
                        v139 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, v138);
                        if ( !v137 )
                          sub_B52A5C(v139, v139);
                        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
                          v137,
                          v139,
                          v136,
                          (const MethodInfo_2F5245C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                      }
                    }
                  }
                }
              }
              LODWORD(v97) = conditionTypes->max_length;
              if ( (__int64)++v98 >= (int)v97 )
                goto LABEL_121;
              continue;
            }
          }
        }
        allAllyPiece = v190;
        v203[v192] = 1269;
        v152 = ++v204;
        v153 = *(_QWORD *)v196;
        if ( *(_WORD *)(*(_QWORD *)v196 + 298LL) )
        {
          v154 = 0LL;
          v155 = (int *)(*(_QWORD *)(v153 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v155 - 1) != System_IDisposable_TypeInfo )
          {
            ++v154;
            v155 += 4;
            if ( v154 >= *(unsigned __int16 *)(*(_QWORD *)v196 + 298LL) )
              goto LABEL_142;
          }
          v156 = v196;
          v157 = v153 + 16LL * *v155 + 312;
        }
        else
        {
LABEL_142:
          v156 = v196;
          v157 = sub_AEB880(v196, System_IDisposable_TypeInfo, 0LL, v144);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v157)(v156, *(_QWORD *)(v157 + 8));
        if ( v152 )
        {
          v193 = v152;
          if ( v203[v152 - 1] == 1269 )
          {
            v204 = v152 - 1;
            v193 = v152 - 1;
          }
        }
        else
        {
          v193 = 0;
        }
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v16->fields.aiTargetCacher;
        if ( !Instance )
          goto LABEL_206;
        WarBoardAiTargetCacher__ClearTargetObject((WarBoardAiTargetCacher_o *)Instance, v4);
        v158 = v16->fields.aiTargetCacher;
        v159 = WarBoardAIRoute___c_TypeInfo;
        if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v159 = WarBoardAIRoute___c_TypeInfo;
        }
        static_fields = v159->static_fields;
        _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( (BYTE3(v159->vtable._0_Equals.methodPtr) & 4) != 0 && !v159->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v159);
            static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          }
          v162 = (Il2CppObject *)static_fields->__9;
          _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__45_0,
            v162,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            (const MethodInfo_2BC90BC *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
          v163 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v163->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_B52920(
            (BattleServantConfConponent_o *)&v163->__9__45_0,
            (System_Int32_array **)_9__45_0,
            v164,
            v165,
            v166,
            v167,
            v168,
            v169);
        }
        v170 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v58,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                              v170,
                                                                              (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v158 )
          goto LABEL_206;
        WarBoardAiTargetCacher__AggregateTargetObject(v158, (IWarBoardObjectData_array *)Instance, v171);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v16->fields.dicUniqueKeyDesignationItem;
        if ( !Instance )
          goto LABEL_206;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (WarBoardAIRoute_PutSquareTarget_o *)v201,
          (const MethodInfo_2EDD620 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v16->fields.dicUniqueKeyTarget;
        if ( !Instance )
          goto LABEL_206;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          v202,
          (const MethodInfo_2EDD620 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isServant(
                                                                              pieceData,
                                                                              0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v172 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_B52A54(WarBoardAIRoute_AdvantagePieceData_TypeInfo);
          WarBoardAIRoute_AdvantagePieceData___ctor(v172, 0LL);
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pieceData->fields._battleServant_k__BackingField;
          if ( !Instance )
            goto LABEL_206;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleServantData__getClassId(
                                                                                (BattleServantData_o *)Instance,
                                                                                0LL);
          v173 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_206;
          v174 = v173->max_length;
          if ( v174 >= 1 )
          {
            v175 = (int)Instance;
            v176 = 0;
            while ( v176 < v174 )
            {
              v177 = (__int64)v173 + 8 * (int)v176;
              v178 = *(_QWORD *)(v177 + 32);
              if ( !v178 )
                goto LABEL_206;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                    *(WarBoardPieceData_o **)(v177 + 32),
                                                                                    0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                Instance = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(v178 + 128);
                if ( !Instance )
                  goto LABEL_206;
                ClassId = BattleServantData__getClassId((BattleServantData_o *)Instance, 0LL);
                if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SvtClassAttri_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                }
                Magnification = SvtClassAttri__getMagnification(v175, ClassId, 0LL);
                v181 = SvtClassAttri__getMagnification(ClassId, v175, 0LL);
                v182 = SvtClassAttri__getMagnification(v175, ClassId, 0LL);
                v183 = Magnification <= 1.0;
                v184 = SvtClassAttri__getMagnification(ClassId, v175, 0LL);
                if ( v183 )
                {
                  v185 = 0;
                }
                else
                {
                  if ( !v172 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v172->fields.dicAttackAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v178 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v178,
                    (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v185 = 1;
                  v172->fields.flagNow |= 0x4000uLL;
                }
                if ( v181 < 1.0 )
                {
                  if ( !v172 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v172->fields.dicDefenseAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v178 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v178,
                    (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v172->fields.flagNow |= 0x10000uLL;
                }
                if ( v182 < 1.0 )
                {
                  if ( !v172 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v172->fields.dicAttackDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v178 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v178,
                    (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v172->fields.flagNow |= 0x8000uLL;
                }
                if ( v184 > 1.0 )
                {
                  if ( !v172 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v172->fields.dicDefenseDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v178 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v178,
                    (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v172->fields.flagNow |= 0x20000uLL;
                }
                if ( ((unsigned __int8)v185 & (v181 < 1.0)) != 0 )
                {
                  if ( !v172 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v172->fields.dicClassAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v178 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v178,
                    (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v172->fields.flagNow |= 0x1000uLL;
                }
                if ( v182 < 1.0 && v184 > 1.0 )
                {
                  if ( !v172 )
                    goto LABEL_206;
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v172->fields.dicClassDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_206;
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                    *(_DWORD *)(v178 + 64),
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v178,
                    (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v172->fields.flagNow |= 0x2000uLL;
                }
              }
              v174 = v173->max_length;
              if ( (int)++v176 >= v174 )
                goto LABEL_199;
            }
LABEL_207:
            v188 = sub_B52A88(Instance);
            sub_B52A28(v188, 0LL);
          }
LABEL_199:
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v16->fields.dicUniqueKeyAdvantagePieceData;
          if ( !Instance )
            goto LABEL_206;
          System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
            (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)Instance,
            pieceData->fields._uniqueIndex_k__BackingField,
            (WarBoardAIRoute_PutSquareTarget_o *)v172,
            (const MethodInfo_2EDD620 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          v186 = v193;
          v58 = v199;
        }
        else
        {
          v186 = v193;
        }
        v192 = v186;
        p_placePieceData = (void **)&v200->fields.placePieceData;
      }
LABEL_203:
      max_length = allAllyPiece->max_length;
      v78 = v194 + 1;
      if ( v194 + 1 >= max_length )
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
    sub_B52A5C(Instance, v4);
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData((WarBoardAIRoute_AIRouteMasterData_o *)Instance, 1, 0LL, 0LL);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(v16, v187);
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

  if ( (byte_42AE062 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    this = (WarBoardAIRoute_o *)sub_B52984(&WarBoardAIManager_TypeInfo);
    byte_42AE062 = 1;
  }
  if ( !alreadyGetItemList )
    sub_B52A5C(this, *(_QWORD *)&targetSquare);
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
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
    sub_B52A5C(this, routeData);
  v19->fields.isMoveByServantAndDefenseDisAdvantageServantRange = (int)this;
}


void __fastcall WarBoardAIRoute__Clear(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x0

  if ( (byte_42AE054 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__);
    byte_42AE054 = 1;
  }
  allRouteList = this->fields.allRouteList;
  if ( !allRouteList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)allRouteList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__);
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
  if ( (byte_42AE061 & 1) == 0 )
  {
    sub_B52984(&AStarSearch_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_B52984(&Method_System_Linq_Enumerable_Count_int___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    dicPieceList = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    byte_42AE061 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !v6 )
    sub_B52A5C(dicPieceList, *(_QWORD *)&baseRange);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v14,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v6,
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v7 = 3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v14,
            (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
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
    v10 = System_Linq_Enumerable__Count_int_(v9, (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
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
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
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
  const MethodInfo_2EFFA9C *v28; // x3
  int32_t v29; // w2
  __int64 v30; // x0
  struct System_Collections_Generic_Dictionary_int__int__o **v31; // [xsp+0h] [xbp-60h]

  if ( (byte_42AE06D & 1) == 0 )
  {
    sub_B52984(&AStarSearch_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Count_int___);
    byte_42AE06D = 1;
  }
  v2 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v2,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v2;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_B52920(
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
    sub_B52A5C(IsFlag, v11);
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
                                                                            (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
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
          v30 = sub_B52A88(IsFlag);
          sub_B52A28(v30, 0LL);
        }
        v20 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        IsFlag = *v31;
        if ( !*v31 )
          goto LABEL_33;
        v27 = (int32_t)v16->_1.name;
        v29 = v20;
        v28 = (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
      }
      else
      {
        IsFlag = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v27 = (int32_t)v16->_1.name;
        v28 = (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
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

  if ( (byte_42AE05A & 1) == 0 )
  {
    sub_B52984(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
    byte_42AE05A = 1;
  }
  v9 = sub_B52A54(WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
  WarBoardAIRoute__CreateRouteData_d__47___ctor((WarBoardAIRoute__CreateRouteData_d__47_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_B52920(
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
  sub_B52920(
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

  if ( (byte_42AE072 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    this = (WarBoardAIRoute_o *)sub_B52984(&WarBoardAIManager_TypeInfo);
    byte_42AE072 = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_B52A5C(this, basePiece);
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_2F31120 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
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
  _BOOL8 HasFlag_22167984; // x0
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
  if ( (byte_42AE070 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__);
    byte_42AE070 = 1;
  }
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v6->fields.dicUniqueKeyAdvantagePieceData) == 0LL
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                                      (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)this,
                                      basePiece->fields._uniqueIndex_k__BackingField,
                                      (const MethodInfo_2EDD55C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0LL )
  {
    sub_B52A5C(this, basePiece);
  }
  v7 = (WarBoardAIRoute_AdvantagePieceData_o *)this;
  HasFlag_22167984 = WarBoardAIRoute_RouteData__HasFlag_22167984(
                       *(_QWORD *)&this->fields.TEMP_SEARCH_DEPTH,
                       4096LL,
                       0LL);
  if ( HasFlag_22167984 )
    v7->fields.baseCARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)HasFlag_22167984,
                               v7->fields.dicClassAdvantageServant,
                               baseSquareIndex,
                               v9);
  v10 = WarBoardAIRoute_RouteData__HasFlag_22167984(v7->fields.flagNow, 0x2000LL, 0LL);
  if ( v10 )
    v7->fields.baseCDARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v10,
                                v7->fields.dicClassDisAdvantageServant,
                                baseSquareIndex,
                                v11);
  v12 = WarBoardAIRoute_RouteData__HasFlag_22167984(v7->fields.flagNow, 0x4000LL, 0LL);
  if ( v12 )
    v7->fields.baseAARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v12,
                               v7->fields.dicAttackAdvantageServant,
                               baseSquareIndex,
                               v13);
  v14 = WarBoardAIRoute_RouteData__HasFlag_22167984(v7->fields.flagNow, 0x8000LL, 0LL);
  if ( v14 )
    v7->fields.baseADARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v14,
                                v7->fields.dicAttackDisAdvantageServant,
                                baseSquareIndex,
                                v15);
  v16 = WarBoardAIRoute_RouteData__HasFlag_22167984(v7->fields.flagNow, 0x10000LL, 0LL);
  if ( v16 )
    v7->fields.baseDARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v16,
                               v7->fields.dicDefenseAdvantageServant,
                               baseSquareIndex,
                               v17);
  v18 = WarBoardAIRoute_RouteData__HasFlag_22167984(v7->fields.flagNow, 0x20000LL, 0LL);
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

  if ( (byte_42AE06C & 1) == 0 )
  {
    sub_B52984(&AStarSearch_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Count_int___);
    byte_42AE06C = 1;
  }
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v10 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v10,
    (const MethodInfo_2ED8EBC *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
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
        v21 = sub_B52A88(isMaster);
        sub_B52A28(v21, 0LL);
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
                   (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v10 )
        break;
      v19 = isMaster;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v10,
        v16->fields._uniqueIndex_k__BackingField,
        isMaster,
        (const MethodInfo_2ED9A60 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
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
    sub_B52A5C(isMaster, v12);
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

  if ( (byte_42AE05D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_int___);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__);
    sub_B52984(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
    byte_42AE05D = 1;
  }
  v7 = (WarBoardAIRoute___c__DisplayClass51_0_o *)sub_B52A54(WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass51_0___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.masterSquareIndex = masterSquareIndex, (aiRouteMasterData = this->fields.aiRouteMasterData) == 0LL)
    || !piecePlaceData )
  {
    sub_B52A5C(v8, v9);
  }
  masterType = aiRouteMasterData->fields.masterType;
  Keys = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                                piecePlaceData,
                                                                (const MethodInfo_2F2F120 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  if ( masterType != 1 )
  {
    v13 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
    Keys = System_Linq_Enumerable__Where_int_(
             Keys,
             (System_Func_TSource__bool__o *)v13,
             (const MethodInfo_1B72A2C *)Method_System_Linq_Enumerable_Where_int___);
  }
  return System_Linq_Enumerable__ToArray_int_(
           Keys,
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_42AE05E & 1) == 0 )
  {
    sub_B52984(&AStarSearch_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&DefenseAreaData_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Count_int___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__);
    sub_B52984(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
    sub_B52984(&WarBoardAIManager_TypeInfo);
    byte_42AE05E = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v8 = sub_B52A54(WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass52_0___ctor((WarBoardAIRoute___c__DisplayClass52_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_55;
  *(_QWORD *)(v8 + 16) = piecePlaceData;
  sub_B52920(
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
  v19 = (DefenseAreaData_o *)sub_B52A54(DefenseAreaData_TypeInfo);
  DefenseAreaData___ctor(v19, masterSquareIndex, defenseArea, 0LL);
  v20 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v20,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  if ( !byte_42AE0E3 )
  {
    sub_B52984(&WarBoardAIManager_TypeInfo);
    byte_42AE0E3 = 1;
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
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
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
            (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    current = v52.fields.current;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v26 = AStarSearch__RouteSearch(0LL, masterSquareIndex, (int32_t)current.fields.key, 0, 0LL, 0LL);
    v27 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v26,
            (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v20 )
      sub_B52A5C(v27, v28);
    v29 = v27;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v20,
      (int32_t)current.fields.key,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v26,
      (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v19 )
      sub_B52A5C(v30, v31);
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
          sub_B52A5C(v34, v32);
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
            klass = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              klass,
              (Il2CppObject *)v8,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
            v46->klass = (BattleServantConfConponent_c *)klass;
            sub_B52920(v46, (System_Int32_array **)klass, v36, v37, v38, v39, v40, v41);
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
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  v42 = 1025LL;
  if ( (v49 & 1) == 0 )
    v42 = 1LL;
  if ( v50 )
    v42 |= 0x2000000000uLL;
  v43 = v48 ? v42 | 0x10000000000LL : v42;
  if ( !v19 )
LABEL_55:
    sub_B52A5C(dicSquareIndexEnemyPiece, v10);
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
  if ( (byte_42AE06B & 1) == 0 )
  {
    sub_B52984(&AStarSearch_TypeInfo);
    sub_B52984(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Count_int___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__);
    sub_B52984(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__);
    this = (WarBoardAIRoute_o *)sub_B52984(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    byte_42AE06B = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v7->fields.dicUniqueKeyDesignationItem) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                 (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)this,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_2EDD55C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v9,
          (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (this = (WarBoardAIRoute_o *)Item->fields.dicSquarePutSqareIndex) == 0LL )
  {
    sub_B52A5C(this, basePiece);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v29,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v30,
            (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v10 = sub_B52A54(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    WarBoardAIRoute___c__DisplayClass66_0___ctor((WarBoardAIRoute___c__DisplayClass66_0_o *)v10, 0LL);
    if ( !v10 )
      sub_B52A5C(v11, v12);
    v19 = v10 + 24;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v10 + 16) = v30.fields.current;
    sub_B52920((BattleServantConfConponent_o *)(v10 + 24), 0LL, v13, v14, v15, v16, v17, v18);
    v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v20,
      (Il2CppObject *)v10,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    v21 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v20,
            (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    if ( !v21 )
    {
      if ( !*(_QWORD *)v19 )
        sub_B52A5C(v21, v22);
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
              (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v9 )
        sub_B52A5C(v25, v26);
      System_Collections_Generic_Dictionary_int__int___Add(
        v9,
        *(_DWORD *)(v10 + 16),
        v25,
        (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v30,
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v9;
}


WarBoardEvalValueSquare_EvalValueSquare_o *__fastcall WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_42AE05F & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
    byte_42AE05F = 1;
  }
  if ( !evalValueSquareList )
    sub_B52A5C(this, evalValueSquareList);
  return System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
           evalValueSquareList,
           index,
           (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
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

  if ( (byte_42AE073 & 1) == 0 )
  {
    sub_B52984(&SvtClassAttri_TypeInfo);
    byte_42AE073 = 1;
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
  if ( WarBoardAIRoute_RouteData__HasFlag_22167984(v8, 0x80000LL, 0LL)
    && WarBoardAIRoute_RouteData__HasFlag_22167984(v8, 0x100000LL, 0LL) )
  {
    v8 |= 0x40000uLL;
  }
  if ( !WarBoardAIRoute_RouteData__HasFlag_22167984(v8, 0x400000LL, 0LL) )
    return v8;
  if ( WarBoardAIRoute_RouteData__HasFlag_22167984(v8, 0x800000LL, 0LL) )
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
  if ( (byte_42AE06F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&SvtClassAttri_TypeInfo);
    this = (WarBoardAIRoute_o *)sub_B52984(&WarBoardAIManager_TypeInfo);
    byte_42AE06F = 1;
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
        v29 = sub_B52A88(this);
        sub_B52A28(v29, 0LL);
      }
      v16 = v14[v13];
      this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)this[1].fields.npcData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_22803728((WarBoardData_o *)this, v16, 0LL);
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
            && !WarBoardAIRoute_RouteData__HasFlag_22167984(v15 | 0x10, 0x1000000LL, 0LL) )
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
                                    (const MethodInfo_2F31120 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
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
    sub_B52A5C(this, baseSquare);
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

  if ( (byte_42AE06E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_42AE06E = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0LL) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          actionSquareIndex,
          (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                    dicOutOfWarningAreaRange,
                                                                                    baseSquareIndex,
                                                                                    (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( (int)dicOutOfWarningAreaRange > System_Collections_Generic_Dictionary_int__int___get_Item(
                                         this->fields.dicOutOfWarningAreaRange,
                                         actionSquareIndex,
                                         (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange
    || (dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                          dicOutOfWarningAreaRange,
                                                                                          baseSquareIndex,
                                                                                          (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v10 = this->fields.dicOutOfWarningAreaRange) == 0LL) )
  {
LABEL_18:
    sub_B52A5C(dicOutOfWarningAreaRange, v7);
  }
  if ( (_DWORD)dicOutOfWarningAreaRange == System_Collections_Generic_Dictionary_int__int___get_Item(
                                             v10,
                                             actionSquareIndex,
                                             (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
  if ( (byte_42AE05C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    this = (WarBoardAIRoute_o *)sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    byte_42AE05C = 1;
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
    sub_B52A5C(this, piecePlaceData);
  System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v13,
    piecePlaceData,
    (const MethodInfo_2F2FA84 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
  *(_OWORD *)&v14.fields.dictionary = v13[0];
  v14.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v13[1];
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
           &v14,
           (const MethodInfo_288B664 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    if ( !v8 )
      break;
    v10 = v4->fields.aiRouteMasterData;
    if ( !v10 )
      sub_B52A5C(v8, v9);
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
    (const MethodInfo_288B7AC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
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
  if ( (byte_42AE077 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____);
    sub_B52984(&Method_System_Func_KeyValuePair_int__uint___bool___ctor__);
    sub_B52984(&System_Func_KeyValuePair_int__uint___bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    this = (WarBoardAIRoute_o *)sub_B52984(&Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__);
    byte_42AE077 = 1;
  }
  klass = v4[13].klass;
  if ( !klass )
    sub_B52A5C(this, piecePlaceData);
  if ( LODWORD(klass->_1.name) == 1 )
    return HIDWORD(klass->_1.name);
  v7 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_B52A54(System_Func_KeyValuePair_int__uint___bool__TypeInfo);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v7,
    v4,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    (const MethodInfo_277ACDC *)Method_System_Func_KeyValuePair_int__uint___bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v7,
           (const MethodInfo_1B632DC *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
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

  if ( (byte_42AE079 & 1) == 0 )
  {
    sub_B52984(&AStarSearch_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__);
    sub_B52984(&Method_System_Linq_Enumerable_Count_int___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    this = (WarBoardAIRoute_o *)sub_B52984(&WarBoardAIManager_TypeInfo);
    byte_42AE079 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !dicKeyPutIndexValueTargetData
    || (v25 = dicKeyPutIndexValueTargetData,
        (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___get_Values(
                                       dicKeyPutIndexValueTargetData,
                                       (const MethodInfo_2F52200 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0LL) )
  {
    sub_B52A5C(this, dicKeyPutIndexValueTargetData);
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_24189F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v22 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v27,
            (const MethodInfo_2749C74 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v22 )
      break;
    currentValue = v27.fields.currentValue;
    if ( !v27.fields.currentValue )
      sub_B52A5C(v22, v23);
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
              (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
      v14 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
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
                (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
        v20 = System_Linq_Enumerable__Count_int_(
                v17,
                (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
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
    (const MethodInfo_2749C70 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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

  if ( (byte_42AE060 & 1) == 0 )
  {
    sub_B52984(&AStarSearch_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_B52984(&Method_System_Linq_Enumerable_Count_int___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    this = (WarBoardAIRoute_o *)sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    byte_42AE060 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !dicPieceList )
    sub_B52A5C(this, dicPieceList);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)dicPieceList,
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v6 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v12,
            (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
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
    v9 = System_Linq_Enumerable__Count_int_(v8, (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v6 > v9 || v6 == -1 )
      v6 = v9;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v12,
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
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

  if ( (byte_42AE05B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    byte_42AE05B = 1;
  }
  memset(&v29, 0, sizeof(v29));
  value = 0;
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  v12 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v12,
    (const MethodInfo_2ED8EBC *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_B52A5C(v13, v14);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)routeDataList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v15 )
      break;
    current = (WarBoardAIRoute_RouteData_o *)v29.fields.current;
    if ( !v29.fields.current )
      sub_B52A5C(v15, v16);
    if ( !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v29.fields.current, 0LL) )
    {
      value = 0;
      HasFlag = WarBoardAIRoute_RouteData__HasFlag(current, 0x4000000LL, 0LL);
      basePiece = current->fields.basePiece;
      if ( HasFlag )
      {
        if ( !basePiece )
          sub_B52A5C(HasFlag, v19);
        v21 = basePiece->fields._type_k__BackingField == 1;
        v22 = masterReplaceCount;
        if ( !v21 )
        {
          actionPiece = current->fields.actionPiece;
          if ( !actionPiece )
            sub_B52A5C(HasFlag, v19);
          if ( actionPiece->fields._type_k__BackingField == 1 )
            v22 = masterReplaceCount;
          else
            v22 = replaceCount;
        }
        ++*v22;
        v24 = current->fields.actionPiece;
        if ( !v24 )
          sub_B52A5C(HasFlag, v19);
      }
      else
      {
        if ( !basePiece )
          sub_B52A5C(HasFlag, v19);
        if ( basePiece->fields._type_k__BackingField == 1 )
          v25 = masterActionCount;
        else
          v25 = actionCount;
        ++*v25;
        v24 = current->fields.basePiece;
        if ( !v24 )
          sub_B52A5C(HasFlag, v19);
      }
      if ( !v12 )
        sub_B52A5C(HasFlag, v19);
      uniqueIndex_k__BackingField = v24->fields._uniqueIndex_k__BackingField;
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v12,
        uniqueIndex_k__BackingField,
        &value,
        (const MethodInfo_2EDB670 *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v12,
        uniqueIndex_k__BackingField,
        value + 1,
        (const MethodInfo_2ED9A38 *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
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

  if ( (byte_42AE07A & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____68621160);
    sub_B52984(&Method_System_Func_WarBoardAIRoute_RouteData__int___ctor__);
    sub_B52984(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__);
    sub_B52984(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
    byte_42AE07A = 1;
  }
  v6 = sub_B52A54(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass84_0___ctor((WarBoardAIRoute___c__DisplayClass84_0_o *)v6, 0LL);
  if ( !v6 )
    sub_B52A5C(v7, v8);
  *(_QWORD *)(v6 + 16) = targetPiece;
  sub_B52920((BattleServantConfConponent_o *)(v6 + 16), (System_Int32_array **)targetPiece, v9, v10, v11, v12, v13, v14);
  v15 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v15,
    (Il2CppObject *)v6,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    (const MethodInfo_2BC9C68 *)Method_System_Func_WarBoardAIRoute_RouteData__int___ctor__);
  return System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v15,
           (const MethodInfo_1B6DB18 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____68621160);
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
  if ( (byte_42AE068 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_B52984(&Method_System_Func_IWarBoardObjectData__bool__Invoke__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    this = (WarBoardAIRoute_o *)sub_B52984(&WarBoardAIRoute_TargetData_TypeInfo);
    byte_42AE068 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !dicPutSquareIndex )
    sub_B52A5C(this, dicPutSquareIndex);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v20,
    dicPutSquareIndex,
    (const MethodInfo_2F52A3C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v13 = System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v21,
            (const MethodInfo_2749314 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v13 )
      break;
    key = v21.fields.current.fields.key;
    value = v21.fields.current.fields.value;
    if ( excludeCond )
    {
      if ( !v21.fields.current.fields.value )
        sub_B52A5C(v13, v14);
      if ( System_Func_BattleBuffData_BuffData__bool___Invoke(
             (System_Func_BattleBuffData_BuffData__bool__o *)excludeCond,
             (BattleBuffData_BuffData_o *)v21.fields.current.fields.value[3].monitor,
             (const MethodInfo_2BC90D0 *)Method_System_Func_IWarBoardObjectData__bool__Invoke__) )
      {
        continue;
      }
    }
    allEnemyPiece = v12->fields.allEnemyPiece;
    v18 = (WarBoardAIRoute_TargetData_o *)sub_B52A54(WarBoardAIRoute_TargetData_TypeInfo);
    WarBoardAIRoute_TargetData___ctor_22173072(
      v18,
      (WarBoardAIRoute_TargetData_o *)value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      0LL);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_B52A5C(0LL, v19);
    System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
      *dicKeyPutIndexValueTargetData,
      (int64_t)key,
      v18,
      (const MethodInfo_2F5245C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v21,
    (const MethodInfo_274947C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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

  if ( (byte_42AE069 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_B52984(&Method_System_Func_IWarBoardObjectData__int___ctor__);
    sub_B52984(&Method_System_Func_IWarBoardObjectData__bool___ctor__);
    sub_B52984(&System_Func_IWarBoardObjectData__int__TypeInfo);
    sub_B52984(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    sub_B52984(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_B52984(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__);
    sub_B52984(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__);
    sub_B52984(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
    sub_B52984(&WarBoardAIRoute___c_TypeInfo);
    byte_42AE069 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  v12 = sub_B52A54(WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass64_0___ctor((WarBoardAIRoute___c__DisplayClass64_0_o *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = excludeCond,
        sub_B52920(
          (BattleServantConfConponent_o *)(v12 + 16),
          (System_Int32_array **)excludeCond,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        *(_QWORD *)(v12 + 24) = basePiece,
        sub_B52920(
          (BattleServantConfConponent_o *)(v12 + 24),
          (System_Int32_array **)basePiece,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        *(_DWORD *)(v12 + 32) = baseSquareIndex,
        v27 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo),
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
          v27,
          (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__),
        !dicIndividualityPutSqareIndex) )
  {
    sub_B52A5C(v13, v14);
  }
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___GetEnumerator(
    &v89,
    dicIndividualityPutSqareIndex,
    (const MethodInfo_2F52A3C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v87 = (BattleServantConfConponent_o *)(v12 + 40);
  v90 = v89;
  v86 = (BattleServantConfConponent_o *)(v12 + 48);
  while ( System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___MoveNext(
            &v90,
            (const MethodInfo_2749314 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_B52A5C(0LL, v28);
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
        sub_B52A5C(DetectorByTrendKey, v33);
    }
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v27,
           Id_k__BackingField,
           (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                    v27,
                                                                    Id_k__BackingField,
                                                                    (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
LABEL_37:
      TargetObjectsByTrendId = Item;
      goto LABEL_38;
    }
    v38 = this->fields.aiTargetCacher;
    if ( !v38 )
      sub_B52A5C(0LL, v35);
    TargetObjectsByTrendId = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardAiTargetCacher__GetTargetObjectsByTrendId(
                                                                                    v38,
                                                                                    (int64_t)current.fields.key,
                                                                                    v36);
    if ( TargetObjectsByTrendId )
    {
      klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v87->klass;
      if ( !v87->klass )
      {
        klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_IWarBoardObjectData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          klass,
          (Il2CppObject *)v12,
          Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
          (const MethodInfo_2BC90BC *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
        v87->klass = (BattleServantConfConponent_c *)klass;
        sub_B52920(v87, (System_Int32_array **)klass, v41, v42, v43, v44, v45, v46);
      }
      v47 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              TargetObjectsByTrendId,
              (System_Func_TSource__bool__o *)klass,
              (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
      v48 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v86->klass;
      if ( !v86->klass )
      {
        v48 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_IWarBoardObjectData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          v48,
          (Il2CppObject *)v12,
          Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
          (const MethodInfo_2BC9C68 *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v86->klass = (BattleServantConfConponent_c *)v48;
        sub_B52920(v86, (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
      }
      v55 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
              v47,
              (System_Func_TSource__TKey__o *)v48,
              (const MethodInfo_1B66330 *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
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
        _9__64_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_IWarBoardObjectData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__64_2,
          v59,
          Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
          (const MethodInfo_2BC9C68 *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v60 = WarBoardAIRoute___c_TypeInfo->static_fields;
        v60->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
        sub_B52920(
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
              (const MethodInfo_1B6DDDC *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
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
        _9__64_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_IWarBoardObjectData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__64_3,
          v71,
          Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
          (const MethodInfo_2BC9C68 *)Method_System_Func_IWarBoardObjectData__int___ctor__);
        v72 = WarBoardAIRoute___c_TypeInfo->static_fields;
        v72->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
        sub_B52920(
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
                                                                   (const MethodInfo_1B6DDDC *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                                    v79,
                                                                    (const MethodInfo_1B62EA8 *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
      goto LABEL_37;
    }
LABEL_38:
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v27,
      Id_k__BackingField,
      (WarBoardAIRoute_RouteData_o *)TargetObjectsByTrendId,
      (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( TargetObjectsByTrendId )
    {
      v81 = *(WarBoardPieceData_o **)(v12 + 24);
      v82 = *(_DWORD *)(v12 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v84 = (WarBoardAIRoute_TargetData_o *)sub_B52A54(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_22174160(
        v84,
        (WarBoardAIRoute_TargetData_o *)current.fields.value,
        (IWarBoardObjectData_o *)TargetObjectsByTrendId,
        v81,
        v82,
        allEnemyPiece,
        0LL);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_B52A5C(0LL, v85);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Add(
        *dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        v84,
        (const MethodInfo_2F5245C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_B52A5C(0LL, v80);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___Remove(
        *dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        (const MethodInfo_2F53E2C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData___Dispose(
    &v90,
    (const MethodInfo_274947C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetTargetToDistance_21348464(
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

  if ( (byte_42AE06A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
    sub_B52984(&Method_System_Func_IWarBoardObjectData__bool___ctor__);
    sub_B52984(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__);
    sub_B52984(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
    byte_42AE06A = 1;
  }
  dicKeyPutIndexValueTargetData = 0LL;
  v9 = sub_B52A54(WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass65_0___ctor((WarBoardAIRoute___c__DisplayClass65_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = routeDataList,
        sub_B52920(
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
                 (const MethodInfo_2EDD55C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v19 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B52A54(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo),
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
          v19,
          (const MethodInfo_2F518AC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = v19,
        !Item) )
  {
    sub_B52A5C(dicUniqueKeyTarget, v11);
  }
  dicObjectPutSquareIndex = Item->fields.dicObjectPutSquareIndex;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    dicObjectPutSquareIndex,
    (System_Func_IWarBoardObjectData__bool__o *)v21,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v22);
  dicIndividualityPutSqareIndex = Item->fields.dicIndividualityPutSqareIndex;
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_IWarBoardObjectData__bool___ctor__);
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
    sub_B52A5C(this, method);
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
  if ( (byte_42AE071 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AE071 = 1;
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
    this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
      return SHIDWORD(this[3].fields.allAllyPiece) >= v13 + requiredCost;
LABEL_13:
    sub_B52A5C(this, basePiece);
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

  if ( (byte_42AE075 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    sub_B52984(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__);
    sub_B52984(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
    byte_42AE075 = 1;
  }
  v13 = sub_B52A54(WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass76_0___ctor((WarBoardAIRoute___c__DisplayClass76_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_25;
  *(_QWORD *)(v13 + 16) = actionPiece;
  v22 = (WarBoardPieceData_o **)(v13 + 16);
  sub_B52920(
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
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( *((_DWORD *)&Instance[2].fields._isNotIncludeWin_k__BackingField + 1) < this->fields.moveCost
                                                                               + requiredCost
                                                                               + this->fields.masterMoveCost )
      goto LABEL_23;
  }
  else
  {
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_B52A5C(Instance, v15);
  if ( !WarBoardPieceData__get_isInfinitelyActable(Instance, 0LL) )
  {
    v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v26,
      (Il2CppObject *)v13,
      Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    Instance = (WarBoardPieceData_o *)System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
                                        (System_Func_TSource__bool__o *)v26,
                                        (const MethodInfo_1B5FB84 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
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
  if ( (byte_42AE067 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_B52984(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_42AE067 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !v6 )
    sub_B52A5C(shortestEnemyRoute, piecePlaceData);
  v7 = !isDefenseSquare;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v18 = v17;
  for ( i = 0; ; i = 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    current = v18.fields.current;
    if ( !v18.fields.current )
      sub_B52A5C(v13, v14);
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
      v16 = sub_B52A88(v13);
      sub_B52A28(v16, 0LL);
    }
    v11 = (int)monitor - 1;
    v12 = v7;
    while ( 1 )
    {
      if ( !piecePlaceData )
        sub_B52A5C(v13, v14);
      v13 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
              piecePlaceData,
              *((_DWORD *)&current[2].klass + v12),
              (const MethodInfo_2F2F774 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
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
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_42AE064 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42AE064 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !defenseArea )
    sub_B52A5C(v7, *(_QWORD *)&index);
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
  if ( (byte_42AE066 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__);
    allShortestRoute = (System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *)sub_B52984(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_42AE066 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  memset(&v26, 0, sizeof(v26));
  v24 = 0;
  if ( !v6 )
    sub_B52A5C(allShortestRoute, *(_QWORD *)&index);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v23,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v6,
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v26 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v23;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
           &v26,
           (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v26.fields.current.fields.value )
      sub_B52A5C(v9, v10);
    klass = v26.fields.current.fields.value[1].klass;
    if ( !klass )
      sub_B52A5C(0LL, v10);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v25 = *(System_Collections_Generic_List_Enumerator_T__o *)v23;
    do
    {
LABEL_13:
      v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v25,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v14 )
      {
        *(_DWORD *)&v23[2 * v7 + 20] = 117;
        v16 = v24;
        goto LABEL_17;
      }
      if ( !v25.fields.current )
        sub_B52A5C(v14, v15);
      monitor = (unsigned int)v25.fields.current[1].monitor;
      v13 = !isDefenseSquare;
    }
    while ( (int)(monitor - 1) <= !isDefenseSquare );
    while ( 1 )
    {
      if ( (unsigned int)v13 >= monitor )
      {
        v20 = sub_B52A88(v14);
        sub_B52A28(v20, 0LL);
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
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
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
  if ( (byte_42AE065 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_B52984(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_42AE065 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !v6 )
    sub_B52A5C(shortestEnemyRoute, *(_QWORD *)&index);
  v7 = !isDefenseSquare;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  do
  {
LABEL_10:
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v10 )
    {
      v12 = 0;
      v13 = 1;
      goto LABEL_13;
    }
    if ( !v17.fields.current )
      sub_B52A5C(v10, v11);
    monitor = (unsigned int)v17.fields.current[1].monitor;
    v9 = v7;
  }
  while ( (int)(monitor - 1) <= v7 );
  while ( 1 )
  {
    if ( (unsigned int)v9 >= monitor )
    {
      v15 = sub_B52A88(v10);
      sub_B52A28(v15, 0LL);
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
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_42AE063 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&Method_System_Linq_Enumerable_Count_int___);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__);
    sub_B52984(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
    byte_42AE063 = 1;
  }
  v5 = sub_B52A54(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass58_0___ctor((WarBoardAIRoute___c__DisplayClass58_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 16) = route;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)route, v8, v9, v10, v11, v12, v13);
  v14 = System_Linq_Enumerable__Count_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 16),
          (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
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
      v17 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v17,
        (Il2CppObject *)v5,
        Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
        (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
      *(_QWORD *)(v5 + 32) = v17;
      sub_B52920((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
    }
    if ( BasicHelper__Any_int__27531732(
           blockPieces,
           (System_Func_T__bool__o *)v17,
           (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832) )
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
    sub_B52A5C(this, method);
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

  if ( (byte_42AE074 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardAIManager_TypeInfo);
    byte_42AE074 = 1;
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
        v17 = sub_B52A88(Square);
        sub_B52A28(v17, 0LL);
      }
      if ( !piecePlaceData )
        break;
      v15 = *(&npcEntityDict->fields.count + v14);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v15,
             &value,
             (const MethodInfo_2F31120 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Square = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)Square[1].fields.reinforcementsSaveList;
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardData__GetPiece_22844524(Square, value, 1, 0LL);
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
    sub_B52A5C(Square, v11);
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

  if ( (byte_42AE078 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&SvtClassAttri_TypeInfo);
    this = (WarBoardAIRoute_o *)sub_B52984(&WarBoardAIManager_TypeInfo);
    byte_42AE078 = 1;
  }
  v8 = *routeData;
  if ( !*routeData
    || (actionSquare = v8->fields.actionSquare) == 0LL
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0LL )
  {
LABEL_50:
    sub_B52A5C(this, routeData);
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
        v22 = sub_B52A88(this);
        sub_B52A28(v22, 0LL);
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
        this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_50;
        this = (WarBoardAIRoute_o *)this[1].fields.npcData;
        if ( !this )
          goto LABEL_50;
        this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_22803728((WarBoardData_o *)this, v14, 0LL);
        if ( !moveByLinkedPiece )
          goto LABEL_50;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)moveByLinkedPiece,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
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
  __int64 v19; // x3
  peRenderTexture_ChangeLayerObject_c *klass; // x8
  IWarBoardObjectData_o *v21; // x23
  unsigned __int64 v22; // x10
  IWarBoardObjectData_c **p_offset; // x11
  __int64 v24; // x0
  WarBoardAIRoute_TargetData_o *v25; // x22

  if ( (byte_42AE059 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    sub_B52984(&IWarBoardObjectData_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
    sub_B52984(&Method_System_Predicate_IWarBoardObjectData___ctor__);
    sub_B52984(&System_Predicate_IWarBoardObjectData__TypeInfo);
    sub_B52984(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__);
    sub_B52984(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
    byte_42AE059 = 1;
  }
  v14 = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_B52A54(WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
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
         (const MethodInfo_2F526D0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_IWarBoardObjectData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v14,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_IWarBoardObjectData___ctor__);
  if ( !objectList )
LABEL_17:
    sub_B52A5C(v15, v16);
  v18 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)objectList,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
  if ( v18 )
  {
    *notSquareTarget = 1;
    klass = v18->klass;
    v21 = (IWarBoardObjectData_o *)v18;
    if ( *(_WORD *)&v18->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v22;
        p_offset += 2;
        if ( v22 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      v24 = (__int64)(&klass->vtable._2_GetHashCode.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_12:
      v24 = sub_AEB880(v18, IWarBoardObjectData_TypeInfo, 2LL, v19);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8)) & 1) != 0 )
    {
      v25 = (WarBoardAIRoute_TargetData_o *)sub_B52A54(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_22172652(v25, v21, trendKey, conditionId, 0LL);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
        targetDic,
        trendKey,
        v25,
        (const MethodInfo_2F52434 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
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

  if ( (byte_42AE057 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
    byte_42AE057 = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_B52A5C(0LL, *(_QWORD *)&aiId);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_2F296E4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
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

  if ( (byte_42AE076 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___68448992);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__uint__TypeInfo);
    byte_42AE076 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor_49474304(
    v10,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_2F2EB00 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___68448992);
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
        (const MethodInfo_2F2F4E8 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_B52A5C(HasFlag, v12);
  }
  if ( !v10 )
    goto LABEL_12;
  HasFlag = System_Collections_Generic_Dictionary_int__uint___Remove(
              v10,
              baseSquareIndex,
              (const MethodInfo_2F30E08 *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v10,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_2F2F4E8 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v10;
}


bool __fastcall WarBoardAIRoute____ctor_b__42_0(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
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
  if ( (byte_42AE07B & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    byte_42AE07B = 1;
  }
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B52A5C)(this, x);
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

  if ( (byte_42AE5E5 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_B52984(&System_Collections_Generic_List_int____TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AE5E5 = 1;
  }
  data = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_OWORD *)&this->fields.masterType = xmmword_327A510;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v7;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.replaceDataList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.replacePriority = -1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_B52A5C(Instance, v15);
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
    Instance = (WebViewManager_o *)sub_B5299C(int___TypeInfo, 2LL);
    if ( !Instance )
      goto LABEL_16;
    basePanel = (int)Instance->fields.basePanel;
    v15 = Instance;
    if ( !basePanel || (LODWORD(Instance->fields.baseWindow) = v21, basePanel == 1) )
    {
LABEL_18:
      v24 = sub_B52A88(Instance);
      sub_B52A28(v24, 0LL);
    }
    HIDWORD(Instance->fields.baseWindow) = v22;
    if ( replaceDataList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)replaceDataList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_int____Add__);
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
  if ( (byte_42AE5E6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int____get_Count__);
    this = (WarBoardAIRoute_AIRouteMasterData_o *)sub_B52984(&Method_System_Collections_Generic_List_int____get_Item__);
    byte_42AE5E6 = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
                  v14 = sub_B52A88(this);
                  sub_B52A28(v14, 0LL);
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
    sub_B52A5C(this, *(_QWORD *)&type);
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

  if ( (byte_42AE5E8 & 1) == 0 )
  {
    sub_B52984(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
    sub_B52984(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_B52984(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__);
    byte_42AE5E8 = 1;
  }
  condType = 0;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v5;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)entity, v13, v14, v15, v16, v17, v18);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v19);
  v21 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B52A54(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
    v21,
    0LL,
    Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__,
    (const MethodInfo_2BC58BC *)Method_System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool___ctor__);
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
  HasMatchCondition = (WarBoardActionTrendMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !HasMatchCondition
    || (HasMatchCondition = (WarBoardActionTrendMaster_o *)WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                                                             HasMatchCondition,
                                                             entity,
                                                             0LL)) == 0LL )
  {
LABEL_19:
    sub_B52A5C(HasMatchCondition, v23);
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
        v31 = sub_B52A88(HasMatchCondition);
        sub_B52A28(v31, 0LL);
      }
      v27 = (WarBoardActionTrendEntity_o *)*((_QWORD *)&v25->fields.list + v26);
      if ( v27 )
      {
        v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_FutureTrendInfoList_k__BackingField;
        v29 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B52A54(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v29, v27, v30);
        if ( !v28 )
          goto LABEL_19;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v28,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
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
  if ( (byte_42AE5E7 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    sub_B52984(&Method_System_Func_int__WarBoardActionTrendConditionEntity___ctor__);
    sub_B52984(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
    sub_B52984(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__);
    this = (WarBoardAIRoute_ActionTrendInfo_o *)sub_B52984(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
    byte_42AE5E7 = 1;
  }
  p_conditionEntityArray = (BattleServantConfConponent_o *)&v2->fields.conditionEntityArray;
  conditionEntityArray = (System_Int32_array **)v2->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = v2->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_B52A5C(this, method);
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
      _9__8_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B52A54(System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        _9__8_0,
        v10,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        (const MethodInfo_2BC49BC *)Method_System_Func_int__WarBoardActionTrendConditionEntity___ctor__);
      v11 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      v11->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_B52920(
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
                                                           (const MethodInfo_1B68D9C *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v19 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v18,
            (const MethodInfo_1A42004 *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                    (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    p_conditionEntityArray->klass = (BattleServantConfConponent_c *)conditionEntityArray;
    sub_B52920(p_conditionEntityArray, conditionEntityArray, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_42BDCFF & 1) == 0 )
  {
    sub_B52984(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
    byte_42BDCFF = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42BDD00 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
    byte_42BDD00 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v5);
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   Master_WarQuestSelectionMaster,
                                                   x,
                                                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
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

  if ( (byte_42AE5E9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
    byte_42AE5E9 = 1;
  }
  *(_QWORD *)&this->fields.baseAARange = -1LL;
  *(_QWORD *)&this->fields.baseDARange = -1LL;
  this->fields.flagNow = 1LL;
  *(_QWORD *)&this->fields.baseCARange = -1LL;
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dicClassAdvantageServant,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v10,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dicClassDisAdvantageServant,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v17,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dicAttackAdvantageServant,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v24,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v24;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dicAttackDisAdvantageServant,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v31,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v31;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dicDefenseAdvantageServant,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v38,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v38;
  sub_B52920(
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

  if ( (byte_42AE5EA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
    byte_42AE5EA = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_42AE5EE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
    byte_42AE5EE = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v10;
  sub_B52920(
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

  if ( (byte_42AE5EB & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    sub_B52984(&Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
    sub_B52984(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
    sub_B52984(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__);
    sub_B52984(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_42AE5EB = 1;
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
      _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__4_0,
        v9,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
      v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      v10->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_B52920(
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
            (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v18 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v17,
                                   (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_attackOffset->klass = (BattleServantConfConponent_c *)v18;
    sub_B52920(p_attackOffset, v18, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_42AE5ED & 1) == 0 )
  {
    sub_B52984(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    byte_42AE5ED = 1;
  }
  v3 = sub_B52A54(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6___ctor(
    (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)v3,
    -2,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 40) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 40), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_42AE5EC & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    sub_B52984(&Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
    sub_B52984(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
    sub_B52984(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__);
    sub_B52984(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_42AE5EC = 1;
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
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__5_0,
        v9,
        Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardRatingOffsetEntity__bool___ctor__);
      v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      v10->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_B52920(
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
            (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v18 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v17,
                                   (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_moveOffset->klass = (BattleServantConfConponent_c *)v18;
    sub_B52920(p_moveOffset, v18, v19, v20, v21, v22, v23, v24);
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
  if ( (byte_42BDD02 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    this = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    byte_42BDD02 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__7__wrap3 = &v2->fields.__7__wrap3;
LABEL_13:
    v2->fields.__1__state = -4;
    if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap3,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__) )
    {
      current = (System_Int32_array **)v2->fields.__7__wrap3.fields.current;
      v2->fields.__2__current = (struct WarBoardAIRoute_ActionTrendInfo_o *)current;
      sub_B52920((BattleServantConfConponent_o *)&v2->fields.__2__current, current, v25, v26, v27, v28, v29, v30);
      result = 1;
      v2->fields.__1__state = 2;
      return result;
    }
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(v2, v24);
    *(_QWORD *)&p__7__wrap3->fields.index = 0LL;
    p__7__wrap3->fields.current = 0LL;
    p__7__wrap3->fields.list = 0LL;
    v2->fields._trendInfo_5__3 = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&v2->fields._trendInfo_5__3, 0LL, v33, v34, v35, v36, v37, v38);
    p__7__wrap1 = &v2->fields.__7__wrap1;
    goto LABEL_16;
  }
  if ( _1__state == 1 )
  {
    trendInfo_5__3 = v2->fields._trendInfo_5__3;
    v2->fields.__1__state = -3;
    if ( !trendInfo_5__3 )
      sub_B52A5C(this, method);
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_B52A5C(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v54,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    p__7__wrap3 = &v2->fields.__7__wrap3;
    v17 = *(_OWORD *)&v54.fields.list;
    v2->fields.__7__wrap3.fields.current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v54.fields.current;
    *(_OWORD *)&v2->fields.__7__wrap3.fields.list = v17;
    sub_B52920((BattleServantConfConponent_o *)&v2->fields.__7__wrap3, 0LL, v18, v19, v20, v21, v22, v23);
    goto LABEL_13;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_B52A5C(this, method);
  actionTrandList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.actionTrandList;
  if ( !actionTrandList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v54,
    actionTrandList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  p__7__wrap1 = &v2->fields.__7__wrap1;
  v7 = *(_OWORD *)&v54.fields.list;
  v2->fields.__7__wrap1.fields.current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v54.fields.current;
  *(_OWORD *)&v2->fields.__7__wrap1.fields.list = v7;
  sub_B52920((BattleServantConfConponent_o *)&v2->fields.__7__wrap1, 0LL, v8, v9, v10, v11, v12, v13);
  v2->fields.__1__state = -3;
LABEL_16:
  if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
         (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
         (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__) )
  {
    v46 = (System_Int32_array **)v2->fields.__7__wrap1.fields.current;
    v2->fields._trendInfo_5__3 = (struct WarBoardAIRoute_ActionTrendInfo_o *)v46;
    sub_B52920((BattleServantConfConponent_o *)&v2->fields._trendInfo_5__3, v46, v40, v41, v42, v43, v44, v45);
    v47 = (System_Int32_array **)v2->fields._trendInfo_5__3;
    v2->fields.__2__current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v47;
    sub_B52920((BattleServantConfConponent_o *)&v2->fields.__2__current, v47, v48, v49, v50, v51, v52, v53);
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

  if ( (byte_42BDD05 & 1) == 0 )
  {
    sub_B52984(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    byte_42BDD05 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_B52A54(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    if ( !v4 )
      sub_B52A5C(CurrentManagedThreadId, v6);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_B52920((BattleServantConfConponent_o *)(v4 + 40), _4__this, v7, v8, v9, v10, v11, v12);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  if ( (byte_42BDD03 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    byte_42BDD03 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_42BDD04 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    byte_42BDD04 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap3,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
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

  if ( (byte_42BDD01 & 1) == 0 )
  {
    sub_B52984(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_42BDD01 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
  return x->fields.type == 0;
}


bool __fastcall WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
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

  if ( (byte_42AE5EF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
    byte_42AE5EF = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B52A54(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v3,
    (const MethodInfo_2F518AC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B52A54(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v10,
    (const MethodInfo_2F518AC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dicObjectPutSquareIndex,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B52A54(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v17,
    (const MethodInfo_2F518AC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = v17;
  sub_B52920(
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

  if ( (byte_42AE5F2 & 1) == 0 )
  {
    sub_B52984(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
    byte_42AE5F2 = 1;
  }
  this->fields.flagNow = 1LL;
  v3 = (WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)sub_B52A54(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
  WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(v3, 0LL);
  this->fields.evalOffsetMagnification = v3;
  sub_B52920(
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

  if ( (byte_42AE5F4 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&System_Decimal_TypeInfo);
    byte_42AE5F4 = 1;
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
  v5 = System_Decimal__op_Implicit_44452908(WarBoardEvalFactorsAffectRatio, 0LL);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_B52A5C(0LL, *(_QWORD *)&v5.fields.lo);
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
  v19 = System_Decimal__op_Implicit_44452908(attackEvalOffsetAddValue, 0LL);
  v23 = System_Decimal__op_Division(v19, v5, 0LL);
  *(_QWORD *)&v20.fields.flags = v14;
  *(_QWORD *)&v20.fields.lo = v16;
  v21 = System_Decimal__op_Addition(v20, v23, 0LL);
  this->fields.evalValue = System_Decimal__op_Explicit_44453384(v21, 0LL);
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


bool __fastcall WarBoardAIRoute_RouteData__HasFlag_22167984(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_42AE5F1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__);
    byte_42AE5F1 = 1;
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

  if ( (byte_42AE5F3 & 1) == 0 )
  {
    sub_B52984(&WarBoardAIRoute_RouteData_TypeInfo);
    byte_42AE5F3 = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0LL);
  if ( result )
  {
    v4 = *(&WarBoardAIRoute_RouteData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v4
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[v4 - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      v5 = (WarBoardAIRoute___c_o *)sub_B52D50(result);
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

  if ( (byte_42AE5F0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_B52984(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    byte_42AE5F0 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = (BattleServantConfConponent_o *)&this->fields.futureLookingTrendHashSet;
  v4 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v4 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
      v4,
      (const MethodInfo_24E0024 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    p_futureLookingTrendHashSet->klass = (BattleServantConfConponent_c *)v4;
    sub_B52920(p_futureLookingTrendHashSet, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_42BDD06 & 1) == 0 )
  {
    sub_B52984(&System_Decimal_TypeInfo);
    byte_42BDD06 = 1;
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

  if ( (byte_42BDD07 & 1) == 0 )
  {
    sub_B52984(&System_Decimal_TypeInfo);
    byte_42BDD07 = 1;
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


void __fastcall WarBoardAIRoute_TargetData___ctor_22172568(
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
  sub_B52920((BattleServantConfConponent_o *)v8, (System_Int32_array **)targetSquare, v9, v10, v11, v12, v13, v14);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_22172652(
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
  sub_B52920(
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


void __fastcall WarBoardAIRoute_TargetData___ctor_22173072(
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
    sub_B52A5C(v11, v12);
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_B52920(
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
  sub_B52920(
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


void __fastcall WarBoardAIRoute_TargetData___ctor_22174160(
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
  sub_B52920(
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


void __fastcall WarBoardAIRoute_TargetData___ctor_22174276(
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
  if ( (byte_42AE5F5 & 1) == 0 )
  {
    b = (WarBoardAIRoute_TargetData_o *)sub_B52984(&WarBoardAIRoute_TargetData_TypeInfo);
    byte_42AE5F5 = 1;
  }
  if ( !v2 )
LABEL_9:
    sub_B52A5C(b, method);
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone(v2, 0LL);
  if ( result )
  {
    v4 = *(&WarBoardAIRoute_TargetData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v4
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[v4 - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      b = (WarBoardAIRoute_TargetData_o *)sub_B52D50(result);
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

  if ( (byte_42AE5F7 & 1) == 0 )
  {
    sub_B52984(&WarBoardItemData_TypeInfo);
    sub_B52984(&WarBoardPieceData_TypeInfo);
    sub_B52984(&WarBoardTreasureData_TypeInfo);
    byte_42AE5F7 = 1;
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  __int64 v11; // x3
  struct IWarBoardObjectData_o *targetObject; // x24
  IWarBoardObjectData_c *klass; // x8
  unsigned __int64 v14; // x10
  IWarBoardObjectData_c **p_offset; // x11
  __int64 p_method; // x0
  struct WarBoardSquareData_o *targetSquare; // x8
  int32_t squareIndex_k__BackingField; // w24
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Int32_array *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array *baseRoute; // x24
  WarBoardAIRoute_TargetData___c_c *v29; // x0
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x25
  Il2CppObject *v32; // x26
  struct WarBoardAIRoute_TargetData___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Int32_array *v41; // x0
  bool IsDetour; // w0
  int32_t nowSquareIndex; // w23
  struct System_Int32_array *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int32_t v51; // w0
  __int64 v52; // x3
  struct IWarBoardObjectData_o *v53; // x21
  WarBoardAIRoute_TargetData_o *v54; // x22
  IWarBoardObjectData_c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  struct WarBoardSquareData_o *v59; // x8

  if ( (byte_42AE5F6 & 1) == 0 )
  {
    sub_B52984(&AStarSearch_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Count_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__int___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__int__TypeInfo);
    sub_B52984(&IWarBoardObjectData_TypeInfo);
    sub_B52984(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__);
    sub_B52984(&WarBoardAIRoute_TargetData___c_TypeInfo);
    byte_42AE5F6 = 1;
  }
  WarBoardAIRoute_TargetData__DetectObject(this, (const MethodInfo *)baseTargetData);
  targetObject = this->fields.targetObject;
  if ( targetObject )
  {
    klass = targetObject->klass;
    if ( *(_WORD *)&targetObject->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v14;
        p_offset += 2;
        if ( v14 >= *(unsigned __int16 *)&targetObject->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_8:
      p_method = sub_AEB880(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1LL, v11);
    }
    v19 = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
            targetObject,
            *(_QWORD *)(p_method + 8));
    if ( !this )
LABEL_49:
      sub_B52A5C(v19, v20);
    squareIndex_k__BackingField = v19;
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
  v21 = AStarSearch__RouteSearch(0LL, baseSquareIndex, squareIndex_k__BackingField, 0, 0LL, 0LL);
  this->fields.baseRoute = v21;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseRoute,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  baseRoute = this->fields.baseRoute;
  v29 = WarBoardAIRoute_TargetData___c_TypeInfo;
  if ( (BYTE3(WarBoardAIRoute_TargetData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIRoute_TargetData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIRoute_TargetData___c_TypeInfo);
    v29 = WarBoardAIRoute_TargetData___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v32,
      Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_WarBoardPieceData__int___ctor__);
    v33 = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    v33->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v33->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v41 = System_Linq_Enumerable__ToArray_int_(
          v40,
          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v41, 0LL);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    nowSquareIndex = this->fields.nowSquareIndex;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v44 = AStarSearch__RouteSearch(piece, baseSquareIndex, nowSquareIndex, 1, 0LL, 0LL);
    this->fields.detourRoute = v44;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.detourRoute,
      (System_Int32_array **)v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  v51 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
  v53 = this->fields.targetObject;
  this->fields.isAround = v51 == 2;
  if ( v53 )
    v54 = this;
  else
    v54 = 0LL;
  if ( v53 )
  {
    v55 = v53->klass;
    if ( *(_WORD *)&v53->klass->_2.bitflags1 )
    {
      v56 = 0LL;
      v57 = &v55->_1.interfaceOffsets->offset;
      while ( *((IWarBoardObjectData_c **)v57 - 1) != IWarBoardObjectData_TypeInfo )
      {
        ++v56;
        v57 += 4;
        if ( v56 >= *(unsigned __int16 *)&v53->klass->_2.bitflags1 )
          goto LABEL_38;
      }
      v58 = (__int64)&v55->vtable[*v57].method;
    }
    else
    {
LABEL_38:
      v58 = sub_AEB880(v53, IWarBoardObjectData_TypeInfo, 0LL, v52);
    }
    v19 = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v58)(v53, *(_QWORD *)(v58 + 8));
    if ( !v54 )
      goto LABEL_49;
  }
  else
  {
    v59 = this->fields.targetSquare;
    if ( v59 )
      v19 = (unsigned int)v59->fields._squareIndex_k__BackingField;
    else
      v19 = 0xFFFFFFFFLL;
    v54 = this;
  }
  v54->fields.putSquareIndex = v19;
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

  if ( (byte_42BDD08 & 1) == 0 )
  {
    sub_B52984(&WarBoardAIRoute_TargetData___c_TypeInfo);
    byte_42BDD08 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardAIRoute_TargetData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
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
  System_Int32_array **TargetToDistance_21348464; // x0
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
  __int64 v224; // x3
  struct WarBoardStageNpcEntity_o *v225; // x8
  float v226; // s0
  WarBoardAIRoute__CreateRouteData_d__47_o *v227; // x10
  double v228; // d0
  int v229; // w8
  struct WarBoardStageNpcEntity_o *v230; // x9
  int calcEllipsisMin; // w9
  System_Linq_IOrderedEnumerable_TSource__c *v232; // x8
  unsigned __int64 v233; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v236; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v237; // x19
  System_Int32_array **MyAndLinkedSquareIndecies; // x0
  System_String_array **v239; // x2
  System_String_array **v240; // x3
  System_Boolean_array **v241; // x4
  System_Int32_array **v242; // x5
  System_Int32_array *v243; // x6
  System_Int32_array *v244; // x7
  int v245; // w8
  System_Int32_array **v246; // x0
  System_String_array **v247; // x2
  System_String_array **v248; // x3
  System_Boolean_array **v249; // x4
  System_Int32_array **v250; // x5
  System_Int32_array *v251; // x6
  System_Int32_array *v252; // x7
  __int64 *v253; // x21
  __int64 v254; // x8
  unsigned __int64 v255; // x10
  int *v256; // x11
  __int64 v257; // x0
  __int64 v258; // x0
  __int64 v259; // x3
  __int64 *v260; // x19
  __int64 v261; // x8
  unsigned __int64 v262; // x10
  int *v263; // x11
  __int64 v264; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v265; // x19
  System_String_array **v266; // x2
  System_String_array **v267; // x3
  System_Boolean_array **v268; // x4
  System_Int32_array **v269; // x5
  System_Int32_array *v270; // x6
  System_Int32_array *v271; // x7
  Il2CppObject *v272; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v273; // x19
  WarBoardAIRoute__CreateRouteData_d__47_o *v274; // x0
  System_String_array **v275; // x2
  System_String_array **v276; // x3
  System_Boolean_array **v277; // x4
  System_Int32_array **v278; // x5
  System_Int32_array *v279; // x6
  System_Int32_array *v280; // x7
  __int64 v281; // x23
  __int64 v282; // x0
  __int64 v283; // x1
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v284; // x8
  __int64 v285; // x9
  int32_t *v286; // x28
  WarBoardAIRoute_RouteData_o *v287; // x22
  const MethodInfo *v288; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v289; // x10
  int32_t getEnumeratorRetType; // w8
  int32_t v291; // w9
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v292; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dicBaseDIRange_5__18; // x22
  WarBoardAIRoute___c_c *v294; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *_9__47_1; // x24
  Il2CppObject *v297; // x25
  struct WarBoardAIRoute___c_StaticFields *v298; // x0
  System_String_array **v299; // x2
  System_String_array **v300; // x3
  System_Boolean_array **v301; // x4
  System_Int32_array **v302; // x5
  System_Int32_array *v303; // x6
  System_Int32_array *v304; // x7
  struct WarBoardAIRoute___c_StaticFields *v305; // x8
  System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *_9__47_2; // x25
  struct System_Int32_array **v307; // x19
  Il2CppObject *v308; // x26
  struct WarBoardAIRoute___c_StaticFields *v309; // x0
  System_String_array **v310; // x2
  System_String_array **v311; // x3
  System_Boolean_array **v312; // x4
  System_Int32_array **v313; // x5
  System_Int32_array *v314; // x6
  System_Int32_array *v315; // x7
  __int64 v316; // x1
  System_String_array **v317; // x2
  System_String_array **v318; // x3
  System_Boolean_array **v319; // x4
  System_Int32_array **v320; // x5
  System_Int32_array *v321; // x6
  System_Int32_array *v322; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v323; // x22
  WarBoardAIRoute_RouteData_o *v324; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v325; // x21
  struct WarBoardSquareData_o *v326; // x1
  __int64 v327; // x1
  System_String_array **v328; // x2
  System_String_array **v329; // x3
  System_Boolean_array **v330; // x4
  System_Int32_array **v331; // x5
  System_Int32_array *v332; // x6
  System_Int32_array *v333; // x7
  WarBoardAIRoute_RouteData_o *v334; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v335; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o **v336; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v337; // t1
  struct WarBoardPieceData_o *v338; // x1
  __int64 v339; // x1
  System_String_array **v340; // x2
  System_String_array **v341; // x3
  System_Boolean_array **v342; // x4
  System_Int32_array **v343; // x5
  System_Int32_array *v344; // x6
  System_Int32_array *v345; // x7
  WarBoardAIRoute_RouteData_o *v346; // x0
  WarBoardAIRoute_RouteData_o *v347; // x24
  int32_t v348; // w25
  System_Int32_array **v349; // x0
  System_String_array **v350; // x2
  System_String_array **v351; // x3
  System_Boolean_array **v352; // x4
  System_Int32_array **v353; // x5
  System_Int32_array *v354; // x6
  System_Int32_array *v355; // x7
  __int64 v356; // x1
  struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v358; // x19
  __int64 v359; // x1
  struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v360; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v362; // x0
  WarBoardAIRoute_RouteData_o *v363; // x24
  System_Int32_array **MoveByTargetDistance; // x0
  System_String_array **v365; // x2
  System_String_array **v366; // x3
  System_Boolean_array **v367; // x4
  System_Int32_array **v368; // x5
  System_Int32_array *v369; // x6
  System_Int32_array *v370; // x7
  __int64 v371; // x0
  __int64 v372; // x1
  WarBoardAIRoute_RouteData_o *v373; // x22
  System_Int32_array **ActionPiece; // x0
  System_String_array **v375; // x2
  System_String_array **v376; // x3
  System_Boolean_array **v377; // x4
  System_Int32_array **v378; // x5
  System_Int32_array *v379; // x6
  System_Int32_array *v380; // x7
  BattleServantConfConponent_o *p_actionPiece; // x0
  __int64 v382; // x1
  System_String_array **v383; // x2
  System_String_array **v384; // x3
  System_Boolean_array **v385; // x4
  System_Int32_array **v386; // x5
  System_Int32_array *v387; // x6
  System_Int32_array *v388; // x7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v389; // x8
  struct WarBoardPieceData_o *v390; // x9
  struct WarBoardPieceData_o *v391; // x10
  struct WarBoardPieceData_o *v392; // x8
  __int64 v393; // x0
  __int64 v394; // x1
  WarBoardAIRoute_RouteData_o *v395; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v396; // x10
  struct WarBoardSquareData_o *baseSquare_5__11; // x9
  WarBoardData_o *warBoardData_5__2; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v399; // x22
  WarBoardPieceData_o *v400; // x0
  WarBoardPieceData_o *v401; // x0
  WarBoardPieceData_o *v402; // x22
  WarBoardPieceData_o *v403; // x24
  WarBoardPieceData_o *v404; // x0
  WarBoardPieceData_o *v405; // x0
  WarBoardAIRoute_RouteData_o *v406; // x8
  struct WarBoardPieceData_o *v407; // x9
  WarBoardPieceData_o *v408; // x0
  WarBoardAIRoute_RouteData_o *v409; // x19
  struct WarBoardPieceData_o *v410; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v412; // x24
  int64_t flagNow; // x20
  __int64 ClassId; // x0
  __int64 v415; // x1
  struct WarBoardPieceData_o *v416; // x8
  int32_t v417; // w22
  BattleServantData_o *v418; // x0
  int32_t v419; // w2
  int64_t FlagAdvantage; // x0
  __int64 v421; // x1
  BattleServantConfConponent_o *v422; // x0
  System_String_array **v423; // x2
  System_String_array **v424; // x3
  System_Boolean_array **v425; // x4
  System_Int32_array **v426; // x5
  System_Int32_array *v427; // x6
  System_Int32_array *v428; // x7
  System_String_array **v429; // x2
  System_String_array **v430; // x3
  System_Boolean_array **v431; // x4
  System_Int32_array **v432; // x5
  System_Int32_array *v433; // x6
  System_Int32_array *v434; // x7
  System_String_array **v435; // x2
  System_String_array **v436; // x3
  System_Boolean_array **v437; // x4
  System_Int32_array **v438; // x5
  System_Int32_array *v439; // x6
  System_Int32_array *v440; // x7
  System_String_array **v441; // x2
  System_String_array **v442; // x3
  System_Boolean_array **v443; // x4
  System_Int32_array **v444; // x5
  System_Int32_array *v445; // x6
  System_Int32_array *v446; // x7
  System_String_array **v447; // x2
  System_String_array **v448; // x3
  System_Boolean_array **v449; // x4
  System_Int32_array **v450; // x5
  System_Int32_array *v451; // x6
  System_Int32_array *v452; // x7
  System_String_array **v453; // x2
  System_String_array **v454; // x3
  System_Boolean_array **v455; // x4
  System_Int32_array **v456; // x5
  System_Int32_array *v457; // x6
  System_Int32_array *v458; // x7
  System_String_array **v459; // x2
  System_String_array **v460; // x3
  System_Boolean_array **v461; // x4
  System_Int32_array **v462; // x5
  System_Int32_array *v463; // x6
  System_Int32_array *v464; // x7
  System_String_array **v465; // x2
  System_String_array **v466; // x3
  System_Boolean_array **v467; // x4
  System_Int32_array **v468; // x5
  System_Int32_array *v469; // x6
  System_Int32_array *v470; // x7
  struct WarBoardPieceData_o *v471; // x22
  WarBoardPieceData_o *v472; // x24
  WarBoardAIRoute_RouteData_o *v473; // x2
  WarBoardPieceData_o *v474; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v475; // x19
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v476; // x0
  WarBoardPieceData_o *v477; // x22
  WarBoardPieceData_o *v478; // x24
  int32_t requiredCost_5__3; // w25
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v480; // x0
  int32_t MasterSquareIndexFromPlaceData; // w24
  System_Collections_Generic_IEnumerable_TSource__o *basePieceActionPieceRouteList_5__22; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v483; // x26
  DefenseAreaData_o *DefenseAreaData; // x0
  __int64 v485; // x1
  struct WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData_5__21; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v487; // x26
  struct DefenseAreaData_o *defenseAreaData_5__7; // x25
  WarBoardPieceData_o *v489; // x0
  System_Int32_array *v490; // x2
  struct WarBoardAIRoute_AIRouteMasterData_o *v491; // x8
  _BOOL8 IsAllBlockShortestRouteEnemyAndMastr; // x0
  __int64 v493; // x1
  WarBoardAIRoute_RouteData_o *v494; // x23
  int64_t v495; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v496; // x25
  __int64 v497; // x0
  __int64 v498; // x1
  System_String_array **v499; // x2
  System_String_array **v500; // x3
  System_Boolean_array **v501; // x4
  System_Int32_array **v502; // x5
  System_Int32_array *v503; // x6
  System_Int32_array *v504; // x7
  __int64 v505; // x0
  __int64 v506; // x1
  WarBoardAIRoute_RouteData_o *v507; // x23
  System_Collections_Generic_Dictionary_uint__int__o *v508; // x25
  System_String_array **v509; // x2
  System_String_array **v510; // x3
  System_Boolean_array **v511; // x4
  System_Int32_array **v512; // x5
  System_Int32_array *v513; // x6
  System_Int32_array *v514; // x7
  __int64 v515; // x1
  System_Collections_Generic_Dictionary_int__uint__o *v516; // x0
  _BOOL8 v517; // x0
  __int64 v518; // x1
  struct WarBoardPieceData_o *v519; // x8
  uint32_t key_high; // w23
  int32_t v521; // w26
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x25
  int32_t v523; // w27
  System_Collections_Generic_IEnumerable_TSource__o *v524; // x0
  __int64 v525; // x0
  __int64 v526; // x1
  WarBoardAIRoute_RouteData_o *v527; // x23
  System_Collections_Generic_List_int__o *v528; // x25
  __int64 v529; // x0
  __int64 v530; // x1
  System_String_array **v531; // x2
  System_String_array **v532; // x3
  System_Boolean_array **v533; // x4
  System_Int32_array **v534; // x5
  System_Int32_array *v535; // x6
  System_Int32_array *v536; // x7
  WarBoardAIRoute_RouteData_o *v537; // x23
  System_Collections_Generic_Dictionary_int__bool__o *v538; // x25
  __int64 v539; // x0
  __int64 v540; // x1
  System_String_array **v541; // x2
  System_String_array **v542; // x3
  System_Boolean_array **v543; // x4
  System_Int32_array **v544; // x5
  System_Int32_array *v545; // x6
  System_Int32_array *v546; // x7
  WarBoardAIRoute_RouteData_o *v547; // x23
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *v548; // x25
  __int64 v549; // x0
  __int64 v550; // x1
  System_String_array **v551; // x2
  System_String_array **v552; // x3
  System_Boolean_array **v553; // x4
  System_Int32_array **v554; // x5
  System_Int32_array *v555; // x6
  System_Int32_array *v556; // x7
  __int64 v557; // x0
  __int64 v558; // x1
  WarBoardAIRoute_RouteData_o *v559; // x8
  WarBoardPieceData_o *v560; // x0
  _BOOL8 IsBlockShortestRouteEnemyAndMaster; // x0
  __int64 v562; // x1
  struct WarBoardPieceData_o *v563; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v564; // x9
  DefenseAreaData_o *v565; // x0
  struct WarBoardPieceData_o *v566; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v567; // x10
  int32_t v568; // w9
  struct WarBoardPieceData_o *v569; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v570; // x9
  int32_t v571; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v572; // x0
  int32_t v573; // w0
  WarBoardAIRoute_RouteData_o *v574; // x19
  __int64 v575; // x0
  System_Collections_Generic_Dictionary_int__int__o *v576; // x0
  int32_t v577; // w23
  int32_t v578; // w24
  int32_t v579; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v580; // x0
  __int64 v581; // x0
  __int64 v582; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x25
  __int64 v584; // x0
  __int64 v585; // x1
  __int64 v586; // x0
  __int64 v587; // x1
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  __int64 v589; // x0
  __int64 v590; // x1
  System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  int32_t v592; // w23
  int32_t enemyMasterSquareIndex; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v594; // x0
  int32_t v595; // w0
  WarBoardAIRoute_RouteData_o *v596; // x19
  __int64 v597; // x0
  __int64 v598; // x1
  WarBoardAIRoute_RouteData_o *v599; // x19
  WarBoardAIManager_c *v600; // x0
  __int64 v601; // x0
  __int64 v602; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v603; // x8
  struct WarBoardAIRoute_AIRouteMasterData_o *v604; // x8
  WarBoardPieceData_o *v605; // x0
  struct WarBoardPieceData_o *v606; // x9
  WarBoardAIManager_c *v607; // x0
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *dicSquareIndexEnemyPiece; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v610; // x1
  int32_t currentKey; // w23
  int32_t v612; // w24
  System_Int32_array *v613; // x0
  __int64 v614; // x1
  struct WarBoardStageNpcEntity_o *v615; // x8
  __int64 v616; // x1
  WarBoardAIRoute_RouteData_o *v617; // x20
  WarBoardAIManager_c *v618; // x0
  struct DefenseAreaData_o *v619; // x8
  __int64 v620; // x0
  __int64 v621; // x1
  WarBoardAIManager_c *v622; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v623; // x0
  int32_t v624; // w23
  int32_t v625; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v626; // x23
  int v627; // w19
  WarBoardAIRoute_RouteData_o *v628; // x19
  System_Collections_Generic_Dictionary_int__uint__o *v629; // x22
  WarBoardData_o *v630; // x0
  WarBoardEffectData_o *Effect; // x0
  __int64 v632; // x1
  System_Collections_Generic_List_int__o *v633; // x23
  __int64 v634; // x1
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v635; // x0
  _BOOL8 v636; // x0
  __int64 v637; // x1
  Il2CppObject *v638; // x21
  Il2CppClass *v639; // x0
  _BOOL8 v640; // x0
  __int64 v641; // x1
  WarBoardPieceData_o *v642; // x0
  __int64 v643; // x1
  WarBoardPieceData_o *v644; // x0
  _BOOL8 v645; // x0
  __int64 v646; // x1
  __int64 v647; // x0
  __int64 v648; // x1
  WarBoardPieceData_o *v649; // x0
  _BOOL8 v650; // x0
  __int64 v651; // x1
  _BOOL8 CanAcquireItem; // x0
  __int64 v653; // x1
  WarBoardAIRoute_RouteData_o *v654; // x8
  int64_t v655; // x9
  WarBoardPieceData_o *v656; // x0
  _BOOL8 isMaster; // x0
  __int64 v658; // x1
  _BOOL8 v659; // x0
  __int64 v660; // x1
  WarBoardAIRoute_RouteData_o *v661; // x8
  WarBoardPieceData_o *v662; // x0
  _BOOL8 v663; // x0
  __int64 v664; // x1
  _BOOL8 v665; // x0
  __int64 v666; // x1
  __int64 v667; // x0
  __int64 v668; // x1
  __int64 FlagOutOfWarningAreaToDistance; // x0
  __int64 v670; // x1
  WarBoardAIRoute_RouteData_o *v671; // x8
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x9
  struct WarBoardPieceData_o *v673; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *piecePersonalityDic; // x0
  WarBoardAIRoute_PiecePersonality_o *v675; // x24
  WarBoardAIEvalCalcurater_o *v676; // x23
  __int64 v677; // x0
  __int64 v678; // x1
  const MethodInfo *v679; // x1
  WarBoardAIRoute___c_c *v680; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v681; // x24
  struct WarBoardAIRoute___c_StaticFields *v682; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__47_5; // x25
  Il2CppObject *v684; // x26
  struct WarBoardAIRoute___c_StaticFields *v685; // x0
  System_String_array **v686; // x2
  System_String_array **v687; // x3
  System_Boolean_array **v688; // x4
  System_Int32_array **v689; // x5
  System_Int32_array *v690; // x6
  System_Int32_array *v691; // x7
  System_Collections_Generic_IEnumerable_T__o *v692; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v693; // x24
  __int64 v694; // x0
  __int64 v695; // x1
  WarBoardAIRoute_RouteData_o *v696; // x0
  __int64 v697; // x1
  const MethodInfo *v698; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *allRouteList; // x0
  int32_t searchCount; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x23
  Il2CppObject *v702; // x0
  Il2CppObject *v703; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v704; // x0
  System_String_array **v705; // x2
  System_String_array **v706; // x3
  System_Boolean_array **v707; // x4
  System_Int32_array **v708; // x5
  System_Int32_array *v709; // x6
  System_Int32_array *v710; // x7
  __int64 v711; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **v712; // [xsp+0h] [xbp-200h]
  struct System_Int32_array **v713; // [xsp+8h] [xbp-1F8h]
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // [xsp+10h] [xbp-1F0h]
  int32_t *p_masterSquareIndex_5__4; // [xsp+18h] [xbp-1E8h]
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v716; // [xsp+18h] [xbp-1E8h]
  struct WarBoardAIRoute_o *_4__this; // [xsp+20h] [xbp-1E0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v718; // [xsp+28h] [xbp-1D8h] BYREF
  __int128 v719; // [xsp+50h] [xbp-1B0h]
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+60h] [xbp-1A0h]
  _DWORD v721[12]; // [xsp+78h] [xbp-188h]
  int v722; // [xsp+A8h] [xbp-158h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v723; // [xsp+B0h] [xbp-150h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v724; // [xsp+E0h] [xbp-120h] BYREF
  __int128 v725; // [xsp+100h] [xbp-100h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o endSquare; // [xsp+110h] [xbp-F0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v727; // [xsp+120h] [xbp-E0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+148h] [xbp-B8h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+150h] [xbp-B0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+158h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v731; // [xsp+160h] [xbp-A0h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+180h] [xbp-80h] BYREF
  int32_t actionCount[6]; // [xsp+188h] [xbp-78h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v734; // [xsp+1A8h] [xbp-58h]

  v734 = this;
  if ( (byte_42AE5E2 & 1) == 0 )
  {
    sub_B52984(&AStarSearch_TypeInfo);
    sub_B52984(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
    sub_B52984(&Method_System_Linq_Enumerable_Count_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_B52984(&Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData___ctor__);
    sub_B52984(&Method_System_Func_KeyValuePair_IEnumerator__float___float___ctor__);
    sub_B52984(&Method_System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___ctor__);
    sub_B52984(&Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long___ctor__);
    sub_B52984(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    sub_B52984(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
    sub_B52984(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
    sub_B52984(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
    sub_B52984(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_B52984(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
    sub_B52984(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_B52984(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___68536144);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_B52984(&WarBoardAIRoute_RouteData_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__);
    sub_B52984(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__);
    sub_B52984(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__);
    sub_B52984(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__);
    sub_B52984(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__);
    sub_B52984(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
    sub_B52984(&WarBoardAIRoute___c_TypeInfo);
    sub_B52984(&WarBoardAIEvalCalcurater_TypeInfo);
    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)sub_B52984(&WarBoardAIManager_TypeInfo);
    byte_42AE5E2 = 1;
  }
  *(_QWORD *)masterReplaceCount = 0LL;
  *(_QWORD *)actionCount = 0LL;
  value = 0LL;
  routeData = 0LL;
  route = 0LL;
  memset(&v731, 0, sizeof(v731));
  memset(&v727, 0, 32);
  v725 = 0u;
  endSquare = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v724, 0, sizeof(v724));
  memset(&v723, 0, sizeof(v723));
  v722 = 0;
  _1__state = v734->fields.__1__state;
  if ( _1__state == 2 )
  {
    servantAndEnemyRange_5__14 = v734->fields._servantAndEnemyRange_5__14;
    servantAndEnemyMasterRange_5__15 = v734->fields._servantAndEnemyMasterRange_5__15;
    v734->fields.__1__state = -4;
    if ( servantAndEnemyRange_5__14 < servantAndEnemyMasterRange_5__15 )
    {
LABEL_140:
      v265 = v734;
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(v734, method);
      *(_QWORD *)&v265->fields.__7__wrap24 = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&v265->fields.__7__wrap24, 0LL, v266, v267, v268, v269, v270, v271);
      return 0;
    }
    p__7__wrap24 = &v734->fields.__7__wrap24;
LABEL_126:
    v253 = *(__int64 **)p__7__wrap24;
    if ( !*(_QWORD *)p__7__wrap24 )
      sub_B52A5C(this, method);
    v254 = *v253;
    if ( *(_WORD *)(*v253 + 298) )
    {
      v255 = 0LL;
      v256 = (int *)(*(_QWORD *)(v254 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v256 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v255;
        v256 += 4;
        if ( v255 >= *(unsigned __int16 *)(*v253 + 298) )
          goto LABEL_131;
      }
      v257 = v254 + 16LL * *v256 + 312;
    }
    else
    {
LABEL_131:
      v257 = sub_AEB880(*(_QWORD *)p__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0LL, v3);
    }
    v258 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v257)(v253, *(_QWORD *)(v257 + 8));
    if ( (v258 & 1) != 0 )
    {
      v260 = *(__int64 **)p__7__wrap24;
      if ( !v260 )
        sub_B52A5C(v258, method);
      v261 = *v260;
      if ( *(_WORD *)(*v260 + 298) )
      {
        v262 = 0LL;
        v263 = (int *)(*(_QWORD *)(v261 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v263 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          ++v262;
          v263 += 4;
          if ( v262 >= *(unsigned __int16 *)(*v260 + 298) )
            goto LABEL_139;
        }
        v264 = v261 + 16LL * *v263 + 312;
      }
      else
      {
LABEL_139:
        v264 = sub_AEB880(
                 v260,
                 System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo,
                 0LL,
                 v259);
      }
      v272 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v264)(v260, *(_QWORD *)(v264 + 8));
      v273 = v734;
      v274 = v734;
      v734->fields.__2__current = v272;
      v274 = (WarBoardAIRoute__CreateRouteData_d__47_o *)((char *)v274 + 24);
      ++LODWORD(v274->fields._baseSquare_5__11);
      sub_B52920((BattleServantConfConponent_o *)v274, (System_Int32_array **)v272, v275, v276, v277, v278, v279, v280);
      result = 1;
      v273->fields.__1__state = 2;
      return result;
    }
    goto LABEL_140;
  }
  _4__this = v734->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap23 = &v734->fields.__7__wrap23;
    p_basePieceBasePieceRouteList_5__23 = &v734->fields._basePieceBasePieceRouteList_5__23;
    v734->fields.__1__state = -3;
    goto LABEL_543;
  }
  result = 0;
  if ( !_1__state )
  {
    v734->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      sub_B52A5C(0LL, v11);
    v18 = *(struct WarBoardData_o **)&Instance[4].fields.m_CachedPtr;
    v19 = v734;
    v734->fields._warBoardData_5__2 = v18;
    p_warBoardData_5__2 = (BattleServantConfConponent_o *)&v19->fields._warBoardData_5__2;
    sub_B52920(p_warBoardData_5__2, (System_Int32_array **)v18, v12, v13, v14, v15, v16, v17);
    if ( !_4__this )
      sub_B52A5C(v21, v22);
    npcData = _4__this->fields.npcData;
    if ( !npcData )
      sub_B52A5C(v21, v22);
    if ( !npcData->fields.searchDepth )
      npcData->fields.searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
    v24 = v734->fields.searchCount + 1;
    v734->fields.searchCount = v24;
    v25 = _4__this->fields.npcData;
    if ( !v25 )
      sub_B52A5C(v21, v22);
    if ( v24 > v25->fields.searchDepth )
      return 0;
    *(_QWORD *)masterReplaceCount = 0LL;
    *(_QWORD *)actionCount = 0LL;
    p_routeDataList = &v734->fields.routeDataList;
    WarBoardAIRoute__GetRouteDataActionList(
      _4__this,
      v734->fields.routeDataList,
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
    v734->fields._requiredCost_5__3 = RequiredCost;
    v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v28 )
      sub_B52A5C(0LL, v29);
    if ( RequiredCost >= *((_DWORD *)&v28[7].fields.SingletonMonoBehaviour_WebViewManager__Fields + 1) )
      return 0;
    v30 = v734;
    p_piecePlaceData = &v734->fields.piecePlaceData;
    MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v734->fields.piecePlaceData, 0LL);
    v30->fields._masterSquareIndex_5__4 = MasterSquareIndex;
    p_masterSquareIndex_5__4 = &v30->fields._masterSquareIndex_5__4;
    AllyPutSquareIndicesWithoutMaster = (System_Int32_array **)WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                                                 _4__this,
                                                                 v30->fields.piecePlaceData,
                                                                 MasterSquareIndex,
                                                                 0LL);
    v30->fields._allyPieceIndexs_5__5 = (struct System_Int32_array *)AllyPutSquareIndicesWithoutMaster;
    p_allyPieceIndexs_5__5 = &v30->fields._allyPieceIndexs_5__5;
    sub_B52920(
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
    sub_B52920(p_defenseAreaData_5__7, 0LL, v42, v43, v44, v45, v46, v47);
    if ( !p_warBoardData_5__2->klass )
      sub_B52A5C(v48, v49);
    v50 = *(System_Collections_Generic_List_int__o **)&p_warBoardData_5__2->klass->_2.cctor_finished;
    if ( !v50 )
      sub_B52A5C(0LL, v49);
    v51 = System_Collections_Generic_List_int___Contains(
            v50,
            _4__this->fields.forceId,
            (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( v51 )
    {
      v734->fields._masterExists_5__8 = 1;
    }
    else
    {
      aiRouteMasterData = _4__this->fields.aiRouteMasterData;
      if ( !aiRouteMasterData )
        sub_B52A5C(v51, v52);
      masterType = aiRouteMasterData->fields.masterType;
      v734->fields._masterExists_5__8 = masterType != 3;
      if ( masterType == 3 )
      {
LABEL_28:
        if ( !*p_piecePlaceData )
          sub_B52A5C(0LL, v52);
        v712 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)p_routeDataList;
        System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
          &v718,
          *p_piecePlaceData,
          (const MethodInfo_2F2FA84 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
        v71 = v734;
        v719 = *(_OWORD *)&v718.fields.dictionary;
        current = v718.fields.current;
        v72 = *(_OWORD *)&v718.fields.dictionary;
        p__7__wrap8 = &v734->fields.__7__wrap8;
        v734->fields.__7__wrap8.fields.current = v718.fields.current;
        *(_OWORD *)&v71->fields.__7__wrap8.fields.dictionary = v72;
        sub_B52920((BattleServantConfConponent_o *)&v71->fields.__7__wrap8, 0LL, v74, v75, v76, v77, v78, v79);
        p__8__1 = (BattleServantConfConponent_o *)&v71->fields.__8__1;
        v71->fields.__1__state = -3;
        p_baseSquareIndex_5__10 = (BattleServantConfConponent_o *)&v71->fields._baseSquareIndex_5__10;
LABEL_43:
        while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                  p__7__wrap8,
                  (const MethodInfo_288B664 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
        {
          key = v734->fields.__7__wrap8.fields.current.fields.key;
          v84 = (Il2CppObject *)sub_B52A54(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
          System_Object___ctor(v84, 0LL);
          p__8__1->klass = (BattleServantConfConponent_c *)v84;
          sub_B52920(p__8__1, (System_Int32_array **)v84, v85, v86, v87, v88, v89, v90);
          v734->fields.__7__wrap8.fields.getEnumeratorRetType = (int)key;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          }
          Square = (System_Int32_array **)WarBoardAIManager__GetSquare((int32_t)key, 0LL);
          p_baseSquareIndex_5__10->klass = (BattleServantConfConponent_c *)Square;
          sub_B52920(p_baseSquareIndex_5__10, Square, v92, v93, v94, v95, v96, v97);
          klass = p__8__1->klass;
          PieceUnique = (System_Int32_array **)WarBoardAIManager__GetPieceUnique(HIDWORD(key), 0LL);
          if ( !klass )
            sub_B52A5C(PieceUnique, PieceUnique);
          klass->_1.name = (const char *)PieceUnique;
          sub_B52920((BattleServantConfConponent_o *)&klass->_1.name, PieceUnique, v100, v101, v102, v103, v104, v105);
          v108 = v734;
          baseFlag_5__6 = v734->fields._baseFlag_5__6;
          _8__1 = v734->fields.__8__1;
          v734->fields._tmpFlagNow_5__12 = -1LL;
          v108->fields._servantAndMasterRange_5__13 = -1;
          v108->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
          if ( !_8__1 )
            sub_B52A5C(v106, v107);
          if ( !_4__this )
            sub_B52A5C(0LL, v107);
          v111 = v734;
          v111->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)(WarBoardAIRoute__GetFlagAroundSquareCheck(
                                                                             _4__this,
                                                                             *(WarBoardSquareData_o **)&v734->fields._baseSquareIndex_5__10,
                                                                             _8__1->fields.basePiece,
                                                                             *p_piecePlaceData,
                                                                             *p_masterSquareIndex_5__4,
                                                                             0LL) | baseFlag_5__6);
          routeDataList = (System_Collections_Generic_IEnumerable_TSource__o *)v111->fields.routeDataList;
          v113 = (Il2CppObject *)v111->fields.__8__1;
          v114 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v114,
            v113,
            Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
            (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
          v116 = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                   routeDataList,
                   (System_Func_TSource__bool__o *)v114,
                   (const MethodInfo_1B5FB84 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
          v117 = v734->fields.routeDataList;
          v734->fields._servantAndEnemyRange_5__14 = v116;
          if ( !v117 )
            sub_B52A5C(0LL, v115);
          Only = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                   v117,
                   (const MethodInfo_2FF1884 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
          if ( !p__8__1->klass )
            sub_B52A5C(Only, Only);
          RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                      _4__this,
                                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                      (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                      0LL);
          v121 = v734;
          v122 = v734->fields.__8__1;
          v734->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
          if ( !v122 )
            sub_B52A5C(RouteSumPieceActionCost, v120);
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
              sub_B52A5C(IsActable, v124);
            v125 = v734;
            DesignationItemToDistance = (System_Int32_array **)WarBoardAIRoute__GetDesignationItemToDistance(
                                                                 _4__this,
                                                                 (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                                                 v734->fields.routeDataList,
                                                                 v734->fields.__7__wrap8.fields.getEnumeratorRetType,
                                                                 0LL);
            *(_QWORD *)&v125->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
            sub_B52920(
              (BattleServantConfConponent_o *)&v125->fields._sumPieceActionCost_5__17,
              DesignationItemToDistance,
              v127,
              v128,
              v129,
              v130,
              v131,
              v132);
            if ( !p__8__1->klass )
              sub_B52A5C(v133, v134);
            v135 = v734;
            TargetToDistance_21348464 = (System_Int32_array **)WarBoardAIRoute__GetTargetToDistance_21348464(
                                                                 _4__this,
                                                                 (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                                                 v734->fields.routeDataList,
                                                                 v734->fields.__7__wrap8.fields.getEnumeratorRetType,
                                                                 0LL);
            v135->fields._dicBaseDIRange_5__18 = (struct System_Collections_Generic_Dictionary_int__int__o *)TargetToDistance_21348464;
            sub_B52920(
              (BattleServantConfConponent_o *)&v135->fields._dicBaseDIRange_5__18,
              TargetToDistance_21348464,
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
            sub_B52920(
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
            sub_B52920(p_dicEnemyRange_5__20, 0LL, v151, v152, v153, v154, v155, v156);
            if ( !p__8__1->klass )
              sub_B52A5C(v157, v158);
            name = (WarBoardPieceData_o *)p__8__1->klass->_1.name;
            if ( !name )
              sub_B52A5C(0LL, v158);
            isServant = WarBoardPieceData__get_isServant(name, 0LL);
            if ( isServant )
            {
              if ( !p__8__1->klass )
                sub_B52A5C(isServant, v161);
              AdvantagePieceData = (System_Int32_array **)WarBoardAIRoute__GetAdvantagePieceData(
                                                            _4__this,
                                                            (WarBoardPieceData_o *)p__8__1->klass->_1.name,
                                                            v734->fields.__7__wrap8.fields.getEnumeratorRetType,
                                                            0LL);
              p_dicEnemyRange_5__20->klass = (BattleServantConfConponent_c *)AdvantagePieceData;
              sub_B52920(p_dicEnemyRange_5__20, AdvantagePieceData, v163, v164, v165, v166, v167, v168);
              if ( v734->fields._masterExists_5__8 )
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
                         (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
                v173 = v734->fields.__8__1;
                LODWORD(v734->fields._tmpFlagNow_5__12) = v171;
                if ( !v173 )
                  sub_B52A5C(v171, v172);
                basePiece = v173->fields.basePiece;
                if ( !basePiece )
                  sub_B52A5C(v171, v172);
                v175 = _4__this->fields.aiRouteMasterData;
                if ( !v175 )
                  sub_B52A5C(v171, v172);
                if ( v175->fields.masterType != 2
                  || v175->fields.masterPieceIndex != basePiece->fields._index_k__BackingField )
                {
                  v176 = _4__this->fields.npcData;
                  if ( !v176 )
                    sub_B52A5C(v171, v172);
                  if ( v176->fields.defenseArea > (int)v171 )
                  {
                    v734->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v734->fields._baseSquare_5__11 | 0x800);
                    basePiece = v173->fields.basePiece;
                    if ( !basePiece )
                      sub_B52A5C(v171, v172);
                    v175 = _4__this->fields.aiRouteMasterData;
                    if ( !v175 )
                      sub_B52A5C(v171, v172);
                  }
                }
                v177 = v175->fields.masterType;
                if ( (v177 != 2 || v175->fields.masterPieceIndex != basePiece->fields._index_k__BackingField)
                  && WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                       v734->fields._defenseAreaData_5__7,
                       v734->fields.__7__wrap8.fields.getEnumeratorRetType,
                       v177 == 1,
                       0LL) )
                {
                  v734->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v734->fields._baseSquare_5__11 | 0x80000000);
                }
              }
            }
            v178 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
              v178,
              (const MethodInfo_24E0024 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v179 = v734;
            v734->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v178;
            p_advantagePieceData_5__21 = (BattleServantConfConponent_o *)&v179->fields._advantagePieceData_5__21;
            sub_B52920(p_advantagePieceData_5__21, (System_Int32_array **)v178, v181, v182, v183, v184, v185, v186);
            v187 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
              v187,
              (const MethodInfo_24E0024 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v188 = v734;
            v734->fields._basePieceActionPieceRouteList_5__22 = v187;
            p_basePieceActionPieceRouteList_5__22 = (BattleServantConfConponent_o *)&v188->fields._basePieceActionPieceRouteList_5__22;
            sub_B52920(
              p_basePieceActionPieceRouteList_5__22,
              (System_Int32_array **)v187,
              v190,
              v191,
              v192,
              v193,
              v194,
              v195);
            if ( !*v712 )
              sub_B52A5C(0LL, v196);
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v718,
              *v712,
              (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
            v731.fields.current = v718.fields.current.fields.key;
            *(_OWORD *)&v731.fields.list = *(_OWORD *)&v718.fields.dictionary;
            while ( 1 )
            {
              v197 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v731,
                       (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
              if ( !v197 )
                break;
              v199 = v731.fields.current;
              if ( !v731.fields.current )
                sub_B52A5C(v197, v198);
              if ( LODWORD(v731.fields.current[1].monitor) != HIDWORD(v731.fields.current[1].monitor) )
              {
                v200 = v731.fields.current[3].klass;
                if ( !v200 )
                  sub_B52A5C(v197, v198);
                if ( !p__8__1->klass )
                  sub_B52A5C(v197, v198);
                v201 = p__8__1->klass->_1.name;
                if ( !v201 )
                  sub_B52A5C(v197, v198);
                if ( HIDWORD(v200->_1.namespaze) == *((_DWORD *)v201 + 7) )
                {
                  if ( !p_basePieceActionPieceRouteList_5__22->klass )
                    sub_B52A5C(0LL, v198);
                  v197 = System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                           (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)p_basePieceActionPieceRouteList_5__22->klass,
                           (WarBoardAIRoute_RouteData_o *)v731.fields.current,
                           (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                }
                if ( (BYTE3(v199[1].klass) & 4) != 0 )
                {
                  monitor = v199[3].monitor;
                  if ( !monitor )
                    sub_B52A5C(v197, v198);
                  if ( !p__8__1->klass )
                    sub_B52A5C(v197, v198);
                  v203 = p__8__1->klass->_1.name;
                  if ( !v203 )
                    sub_B52A5C(v197, v198);
                  if ( monitor[7] == *((_DWORD *)v203 + 7) )
                  {
                    if ( !p_advantagePieceData_5__21->klass )
                      sub_B52A5C(0LL, v198);
                    System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                      (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)p_advantagePieceData_5__21->klass,
                      (WarBoardAIRoute_RouteData_o *)v199,
                      (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                  }
                }
              }
            }
            v721[v722++] = 1280;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v731,
              (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
            if ( v722 && v721[v722 - 1] == 1280 )
              --v722;
            if ( !p_baseSquareIndex_5__10->klass )
              sub_B52A5C(0LL, v236);
            v237 = v734;
            MyAndLinkedSquareIndecies = (System_Int32_array **)WarBoardSquareData__GetMyAndLinkedSquareIndecies(
                                                                 (WarBoardSquareData_o *)p_baseSquareIndex_5__10->klass,
                                                                 0LL);
            v237->fields._basePieceBasePieceRouteList_5__23 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)MyAndLinkedSquareIndecies;
            p_basePieceBasePieceRouteList_5__23 = &v237->fields._basePieceBasePieceRouteList_5__23;
            sub_B52920(
              (BattleServantConfConponent_o *)&v237->fields._basePieceBasePieceRouteList_5__23,
              MyAndLinkedSquareIndecies,
              v239,
              v240,
              v241,
              v242,
              v243,
              v244);
            v245 = 0;
            p__7__wrap23 = &v237->fields.__7__wrap23;
            LODWORD(v237->fields.__7__wrap23) = 0;
            while ( 2 )
            {
              if ( !*p_basePieceBasePieceRouteList_5__23 )
                sub_B52A5C(this, method);
              if ( v245 >= SLODWORD((*p_basePieceBasePieceRouteList_5__23)->fields._slots) )
              {
                *p_basePieceBasePieceRouteList_5__23 = 0LL;
                v422 = (BattleServantConfConponent_o *)p_basePieceBasePieceRouteList_5__23;
                v71 = v734;
                sub_B52920(v422, 0LL, v2, v3, v4, v5, v6, v7);
                v71->fields.__8__1 = 0LL;
                p__8__1 = (BattleServantConfConponent_o *)&v71->fields.__8__1;
                sub_B52920((BattleServantConfConponent_o *)&v71->fields.__8__1, 0LL, v423, v424, v425, v426, v427, v428);
                *(_QWORD *)&v71->fields._baseSquareIndex_5__10 = 0LL;
                p_baseSquareIndex_5__10 = (BattleServantConfConponent_o *)&v71->fields._baseSquareIndex_5__10;
                sub_B52920(
                  (BattleServantConfConponent_o *)&v71->fields._baseSquareIndex_5__10,
                  0LL,
                  v429,
                  v430,
                  v431,
                  v432,
                  v433,
                  v434);
                *(_QWORD *)&v71->fields._sumPieceActionCost_5__17 = 0LL;
                sub_B52920(
                  (BattleServantConfConponent_o *)&v71->fields._sumPieceActionCost_5__17,
                  0LL,
                  v435,
                  v436,
                  v437,
                  v438,
                  v439,
                  v440);
                v71->fields._dicBaseDIRange_5__18 = 0LL;
                sub_B52920(
                  (BattleServantConfConponent_o *)&v71->fields._dicBaseDIRange_5__18,
                  0LL,
                  v441,
                  v442,
                  v443,
                  v444,
                  v445,
                  v446);
                v71->fields._dicKeyPutIndexValueTargetData_5__19 = 0LL;
                sub_B52920(
                  (BattleServantConfConponent_o *)&v71->fields._dicKeyPutIndexValueTargetData_5__19,
                  0LL,
                  v447,
                  v448,
                  v449,
                  v450,
                  v451,
                  v452);
                v71->fields._dicEnemyRange_5__20 = 0LL;
                sub_B52920(
                  (BattleServantConfConponent_o *)&v71->fields._dicEnemyRange_5__20,
                  0LL,
                  v453,
                  v454,
                  v455,
                  v456,
                  v457,
                  v458);
                v71->fields._advantagePieceData_5__21 = 0LL;
                sub_B52920(
                  (BattleServantConfConponent_o *)&v71->fields._advantagePieceData_5__21,
                  0LL,
                  v459,
                  v460,
                  v461,
                  v462,
                  v463,
                  v464);
                v71->fields._basePieceActionPieceRouteList_5__22 = 0LL;
                sub_B52920(
                  (BattleServantConfConponent_o *)&v71->fields._basePieceActionPieceRouteList_5__22,
                  0LL,
                  v465,
                  v466,
                  v467,
                  v468,
                  v469,
                  v470);
                p__7__wrap8 = &v71->fields.__7__wrap8;
                p_masterSquareIndex_5__4 = &v71->fields._masterSquareIndex_5__4;
                p_piecePlaceData = &v71->fields.piecePlaceData;
                v712 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&v71->fields.routeDataList;
                goto LABEL_43;
              }
              v281 = sub_B52A54(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v281, 0LL);
              v284 = *p_basePieceBasePieceRouteList_5__23;
              if ( !*p_basePieceBasePieceRouteList_5__23 )
                sub_B52A5C(v282, v283);
              v285 = *(int *)p__7__wrap23;
              if ( (unsigned int)v285 >= LODWORD(v284->fields._slots) )
              {
                v711 = sub_B52A88(v282);
                sub_B52A28(v711, 0LL);
              }
              if ( !v281 )
                sub_B52A5C(v282, v283);
              *(_DWORD *)(v281 + 16) = *(&v284->fields._count + v285);
              v286 = (int32_t *)(v281 + 16);
              v287 = (WarBoardAIRoute_RouteData_o *)sub_B52A54(WarBoardAIRoute_RouteData_TypeInfo);
              WarBoardAIRoute_RouteData___ctor(v287, v288);
              routeData = v287;
              if ( !v287 )
                sub_B52A5C(this, method);
              v289 = v734;
              getEnumeratorRetType = v734->fields.__7__wrap8.fields.getEnumeratorRetType;
              v287->fields.baseIndex = getEnumeratorRetType;
              v291 = *v286;
              v287->fields.actionIndex = *v286;
              if ( getEnumeratorRetType == v291 )
              {
                v292 = v289->fields.routeDataList;
                if ( !v292 )
                  sub_B52A5C(this, method);
                v289 = v734;
                if ( v292->fields._size > 0 )
                  goto LABEL_543;
              }
              dicBaseDIRange_5__18 = (System_Collections_Generic_IEnumerable_TSource__o *)v289->fields._dicBaseDIRange_5__18;
              v294 = WarBoardAIRoute___c_TypeInfo;
              if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v294 = WarBoardAIRoute___c_TypeInfo;
              }
              static_fields = v294->static_fields;
              _9__47_1 = static_fields->__9__47_1;
              if ( !_9__47_1 )
              {
                if ( (BYTE3(v294->vtable._0_Equals.methodPtr) & 4) != 0 && !v294->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v294);
                  static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v297 = (Il2CppObject *)static_fields->__9;
                _9__47_1 = (System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)sub_B52A54(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
                System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long____ctor(
                  _9__47_1,
                  v297,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
                  (const MethodInfo_277B648 *)Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long___ctor__);
                v298 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v298->__9__47_1 = _9__47_1;
                sub_B52920(
                  (BattleServantConfConponent_o *)&v298->__9__47_1,
                  (System_Int32_array **)_9__47_1,
                  v299,
                  v300,
                  v301,
                  v302,
                  v303,
                  v304);
                v294 = WarBoardAIRoute___c_TypeInfo;
              }
              if ( (BYTE3(v294->vtable._0_Equals.methodPtr) & 4) != 0 && !v294->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v294);
                v294 = WarBoardAIRoute___c_TypeInfo;
              }
              v305 = v294->static_fields;
              _9__47_2 = v305->__9__47_2;
              if ( !_9__47_2 )
              {
                v307 = p__7__wrap23;
                if ( (BYTE3(v294->vtable._0_Equals.methodPtr) & 4) != 0 && !v294->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v294);
                  v305 = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v308 = (Il2CppObject *)v305->__9;
                _9__47_2 = (System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)sub_B52A54(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
                System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData____ctor(
                  _9__47_2,
                  v308,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
                  (const MethodInfo_277B97C *)Method_System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData___ctor__);
                v309 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v309->__9__47_2 = _9__47_2;
                sub_B52920(
                  (BattleServantConfConponent_o *)&v309->__9__47_2,
                  (System_Int32_array **)_9__47_2,
                  v310,
                  v311,
                  v312,
                  v313,
                  v314,
                  v315);
                p__7__wrap23 = v307;
              }
              v323 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData_(
                                                                                                    dicBaseDIRange_5__18,
                                                                                                    (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                                    (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                                    (const MethodInfo_1B6E968 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
              v324 = routeData;
              if ( !routeData )
                sub_B52A5C(0LL, v316);
              v325 = v734;
              v326 = *(struct WarBoardSquareData_o **)&v734->fields._baseSquareIndex_5__10;
              routeData->fields.baseSquare = v326;
              sub_B52920(
                (BattleServantConfConponent_o *)&v324->fields.baseSquare,
                (System_Int32_array **)v326,
                v317,
                v318,
                v319,
                v320,
                v321,
                v322);
              v334 = routeData;
              v337 = v325->fields.__8__1;
              v336 = &v325->fields.__8__1;
              v335 = v337;
              if ( !v337 )
                sub_B52A5C(routeData, v327);
              if ( !routeData )
                sub_B52A5C(0LL, v327);
              v338 = v335->fields.basePiece;
              routeData->fields.basePiece = v338;
              sub_B52920(
                (BattleServantConfConponent_o *)&v334->fields.basePiece,
                (System_Int32_array **)v338,
                v328,
                v329,
                v330,
                v331,
                v332,
                v333);
              v346 = routeData;
              if ( !routeData )
                sub_B52A5C(0LL, v339);
              routeData->fields.actionPiece = 0LL;
              sub_B52920(
                (BattleServantConfConponent_o *)&v346->fields.actionPiece,
                0LL,
                v340,
                v341,
                v342,
                v343,
                v344,
                v345);
              v347 = routeData;
              v348 = *v286;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              v349 = (System_Int32_array **)WarBoardAIManager__GetSquare(v348, 0LL);
              if ( !v347 )
                sub_B52A5C(v349, v349);
              v347->fields.actionSquare = (struct WarBoardSquareData_o *)v349;
              sub_B52920(
                (BattleServantConfConponent_o *)&v347->fields.actionSquare,
                v349,
                v350,
                v351,
                v352,
                v353,
                v354,
                v355);
              dicKeyPutIndexValueTargetData_5__19 = v734->fields._dicKeyPutIndexValueTargetData_5__19;
              if ( !dicKeyPutIndexValueTargetData_5__19 )
                sub_B52A5C(0LL, v356);
              v358 = routeData;
              if ( System_Collections_Generic_Dictionary_uint__int___get_Count(
                     (System_Collections_Generic_Dictionary_uint__int__o *)dicKeyPutIndexValueTargetData_5__19,
                     (const MethodInfo_2ED9660 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0 )
              {
                v362 = 0x7FFFFFFFLL;
                if ( !v358 )
                  goto LABEL_266;
              }
              else
              {
                v360 = v734->fields._dicKeyPutIndexValueTargetData_5__19;
                if ( !v360 )
                  sub_B52A5C(0LL, v359);
                Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                           (System_Collections_Generic_Dictionary_uint__int__o *)v360,
                           (const MethodInfo_2ED9808 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
                v362 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
                if ( !v358 )
LABEL_266:
                  sub_B52A5C(v362, v359);
              }
              v358->fields.EnemyRangeMin = v362;
              if ( !*v336 )
                sub_B52A5C(v362, v359);
              if ( !_4__this )
                sub_B52A5C(0LL, v359);
              v363 = routeData;
              MoveByTargetDistance = (System_Int32_array **)WarBoardAIRoute__GetMoveByTargetDistance(
                                                              _4__this,
                                                              v323,
                                                              *v286,
                                                              (*v336)->fields.basePiece,
                                                              0LL);
              if ( !v363 )
                sub_B52A5C(MoveByTargetDistance, MoveByTargetDistance);
              v363->fields.dicPutIndexTargetData = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)MoveByTargetDistance;
              sub_B52920(
                (BattleServantConfConponent_o *)&v363->fields.dicPutIndexTargetData,
                MoveByTargetDistance,
                v365,
                v366,
                v367,
                v368,
                v369,
                v370);
              if ( !*v336 )
                sub_B52A5C(v371, v372);
              v373 = routeData;
              ActionPiece = (System_Int32_array **)WarBoardAIRoute__GetActionPiece(
                                                     _4__this,
                                                     (*v336)->fields.basePiece,
                                                     *v286,
                                                     v734->fields.piecePlaceData,
                                                     0LL);
              if ( !v373 )
                sub_B52A5C(ActionPiece, ActionPiece);
              v373->fields.actionPiece = (struct WarBoardPieceData_o *)ActionPiece;
              sub_B52920(
                (BattleServantConfConponent_o *)&v373->fields.actionPiece,
                ActionPiece,
                v375,
                v376,
                v377,
                v378,
                v379,
                v380);
              v389 = *v336;
              if ( !*v336 )
                sub_B52A5C(p_actionPiece, v382);
              v390 = v389->fields.basePiece;
              if ( !v390 )
                sub_B52A5C(p_actionPiece, v382);
              if ( v390->fields._nowSquareIndex_k__BackingField == *v286 )
              {
                if ( !routeData )
                  sub_B52A5C(0LL, v382);
                p_actionPiece = (BattleServantConfConponent_o *)&routeData->fields.actionPiece;
                v391 = routeData->fields.actionPiece;
                if ( v391 )
                {
                  if ( v391->fields._uniqueIndex_k__BackingField == v390->fields._uniqueIndex_k__BackingField )
                  {
                    p_actionPiece->klass = 0LL;
                    sub_B52920(p_actionPiece, 0LL, v383, v384, v385, v386, v387, v388);
                    v389 = *v336;
                    if ( !*v336 )
                      sub_B52A5C(p_actionPiece, v382);
                  }
                }
              }
              v392 = v389->fields.basePiece;
              if ( !v392 )
                sub_B52A5C(p_actionPiece, v382);
              v393 = UnityEngine_Mathf__Abs_41524992(
                       v392->fields._limitActionCount_k__BackingField - v392->fields._currentActionCount_k__BackingField,
                       0LL);
              v395 = routeData;
              if ( !routeData )
                sub_B52A5C(v393, v394);
              v396 = v734;
              routeData->fields.actionCountOnThisTurn = v393 + v734->fields._servantAndEnemyRange_5__14 + 1;
              baseSquare_5__11 = v396->fields._baseSquare_5__11;
              *(_QWORD *)&v395->fields.attackByLinkedEnemy = 0LL;
              v395->fields.flagNow = (int64_t)baseSquare_5__11;
              warBoardData_5__2 = v396->fields._warBoardData_5__2;
              if ( !warBoardData_5__2 )
                sub_B52A5C(0LL, v394);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardData__GetWall(warBoardData_5__2, *v286, 0, 0LL);
              v399 = this;
              if ( this )
              {
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                if ( !this )
                  sub_B52A5C(0LL, method);
                if ( this[2].fields._servantAndEnemyRange_5__14 < _4__this->fields.wallAttackCost
                                                                + v734->fields._requiredCost_5__3 )
                  goto LABEL_543;
                if ( !*v336 )
                  sub_B52A5C(this, method);
                v400 = (*v336)->fields.basePiece;
                if ( !v400 )
                  sub_B52A5C(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableWallAttack(
                                                                     v400,
                                                                     v734->fields._servantAndEnemyMasterRange_5__15,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_543;
                if ( !*v336 )
                  sub_B52A5C(this, method);
                v401 = (*v336)->fields.basePiece;
                if ( !v401 )
                  sub_B52A5C(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__CheckWallAttackCond(
                                                                     v401,
                                                                     (WarBoardWallData_o *)v399,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_543;
              }
              if ( !routeData )
                sub_B52A5C(this, method);
              v402 = routeData->fields.actionPiece;
              if ( v402 )
              {
                if ( !*v336 )
                  sub_B52A5C(this, method);
                v403 = (*v336)->fields.basePiece;
                if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                }
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsEnemyPiece(v403, v402, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !*v336 )
                    sub_B52A5C(this, method);
                  v404 = (*v336)->fields.basePiece;
                  if ( !v404 )
                    sub_B52A5C(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v404, 0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_251;
                  if ( !routeData )
                    sub_B52A5C(this, method);
                  v405 = routeData->fields.actionPiece;
                  if ( !v405 )
                    sub_B52A5C(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v405, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_251:
                    v406 = routeData;
                    if ( !routeData )
                      sub_B52A5C(this, method);
                    v407 = routeData->fields.basePiece;
                    routeData->fields.flagNow |= 2uLL;
                    if ( !v407 )
                      sub_B52A5C(this, method);
                    v408 = v406->fields.actionPiece;
                    v406->fields.attackCountOnThisTurn = v407->fields._attackCount_k__BackingField + 1;
                    if ( !v408 )
                      sub_B52A5C(0LL, method);
                    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isServant(v408, 0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v409 = routeData;
                      if ( !routeData )
                        sub_B52A5C(this, method);
                      if ( !*v336 )
                        sub_B52A5C(this, method);
                      v410 = (*v336)->fields.basePiece;
                      if ( !v410 )
                        sub_B52A5C(this, method);
                      battleServant_k__BackingField = v410->fields._battleServant_k__BackingField;
                      if ( !battleServant_k__BackingField )
                        sub_B52A5C(0LL, method);
                      v412 = p_basePieceBasePieceRouteList_5__23;
                      flagNow = routeData->fields.flagNow;
                      ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
                      if ( !routeData )
                        sub_B52A5C(ClassId, v415);
                      v416 = routeData->fields.actionPiece;
                      if ( !v416 )
                        sub_B52A5C(ClassId, v415);
                      v417 = ClassId;
                      v418 = v416->fields._battleServant_k__BackingField;
                      if ( !v418 )
                        sub_B52A5C(0LL, v415);
                      v419 = BattleServantData__getClassId(v418, 0LL);
                      FlagAdvantage = WarBoardAIRoute__GetFlagAdvantage(_4__this, v417, v419, 0LL);
                      v409->fields.flagNow = FlagAdvantage | flagNow;
                      if ( !routeData )
                        sub_B52A5C(FlagAdvantage, v421);
                      WarBoardAIRoute__LinkedCount(
                        _4__this,
                        *v286,
                        v734->fields.piecePlaceData,
                        &routeData->fields.attackByLinkedEnemy,
                        &routeData->fields.attackByLinkedAlly,
                        0LL);
                      p_basePieceBasePieceRouteList_5__23 = v412;
                    }
                    break;
                  }
LABEL_543:
                  v245 = *(_DWORD *)p__7__wrap23 + 1;
                  *(_DWORD *)p__7__wrap23 = v245;
                  continue;
                }
                if ( !routeData )
                  sub_B52A5C(this, method);
                v471 = routeData->fields.actionPiece;
                if ( !v471 )
                  sub_B52A5C(this, method);
                if ( v471->fields._roleType_k__BackingField == 1 )
                  goto LABEL_543;
                if ( !*v336 )
                  sub_B52A5C(this, method);
                v472 = (*v336)->fields.basePiece;
                if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                }
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsAllyPiece(v472, v471, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !routeData )
                    sub_B52A5C(this, method);
                  routeData->fields.flagNow |= 0x4000000uLL;
                }
              }
              break;
            }
            v473 = routeData;
            if ( !routeData )
              sub_B52A5C(this, method);
            if ( (routeData->fields.flagNow & 2) != 0 )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_B52A5C(0LL, method);
              if ( this[2].fields._servantAndEnemyRange_5__14 < _4__this->fields.attackCost
                                                              + v734->fields._requiredCost_5__3 )
                goto LABEL_543;
              if ( !*v336 )
                sub_B52A5C(this, method);
              v489 = (*v336)->fields.basePiece;
              if ( !v489 )
                sub_B52A5C(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableAttack(
                                                                   v489,
                                                                   v734->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_543;
              v473 = routeData;
              if ( !routeData )
                sub_B52A5C(this, method);
            }
            if ( (v473->fields.flagNow & 2) == 0 )
            {
              if ( !*v336 )
                sub_B52A5C(this, method);
              v474 = (*v336)->fields.basePiece;
              if ( !v474 )
                sub_B52A5C(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableMoveBySelf(
                                                                   v474,
                                                                   v734->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_543;
              v473 = routeData;
              if ( !routeData )
                sub_B52A5C(this, method);
            }
            if ( (v473->fields.flagNow & 0x4000000) != 0 )
            {
              if ( !*v336 )
                sub_B52A5C(this, method);
              v475 = v734;
              v476 = v734->fields.routeDataList;
              if ( !v476 )
                sub_B52A5C(0LL, method);
              v477 = (*v336)->fields.basePiece;
              v478 = v473->fields.actionPiece;
              requiredCost_5__3 = v734->fields._requiredCost_5__3;
              v480 = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                       v476,
                       (const MethodInfo_2FF1884 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIRoute__IsActableReplace(
                                                                   _4__this,
                                                                   v477,
                                                                   v478,
                                                                   requiredCost_5__3,
                                                                   (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v480,
                                                                   v475->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_543;
              v473 = routeData;
            }
            v713 = p__7__wrap23;
            v716 = p_basePieceBasePieceRouteList_5__23;
            piecePlaceData = WarBoardAIRoute__UpdatePiecePlaceData(
                               _4__this,
                               v734->fields.piecePlaceData,
                               v473,
                               v734->fields.__7__wrap8.fields.getEnumeratorRetType,
                               *v286,
                               0LL);
            MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
                                               _4__this,
                                               piecePlaceData,
                                               0LL);
            basePieceActionPieceRouteList_5__22 = (System_Collections_Generic_IEnumerable_TSource__o *)v734->fields._basePieceActionPieceRouteList_5__22;
            v483 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v483,
              (Il2CppObject *)v281,
              Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
              (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
            DefenseAreaData = (DefenseAreaData_o *)System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
                                                     basePieceActionPieceRouteList_5__22,
                                                     (System_Func_TSource__bool__o *)v483,
                                                     (const MethodInfo_1B52544 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)DefenseAreaData & 1) != 0
              || (advantagePieceData_5__21 = v734->fields._advantagePieceData_5__21,
                  v487 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo),
                  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                    v487,
                    (Il2CppObject *)v281,
                    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
                    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__),
                  DefenseAreaData = (DefenseAreaData_o *)System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)advantagePieceData_5__21,
                                                           (System_Func_TSource__bool__o *)v487,
                                                           (const MethodInfo_1B52544 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___),
                  ((unsigned __int8)DefenseAreaData & 1) != 0) )
            {
              if ( !routeData )
                sub_B52A5C(DefenseAreaData, v485);
              routeData->fields.flagNow |= 0x20000000000uLL;
            }
            if ( v734->fields._masterExists_5__8 )
            {
              if ( v734->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
                goto LABEL_306;
              if ( !routeData )
                sub_B52A5C(DefenseAreaData, v485);
              if ( (routeData->fields.flagNow & 0x400) != 0 )
              {
LABEL_306:
                v490 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                         _4__this,
                         piecePlaceData,
                         MasterSquareIndexFromPlaceData,
                         0LL);
                DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                                    _4__this,
                                    MasterSquareIndexFromPlaceData,
                                    v490,
                                    piecePlaceData,
                                    0LL);
                defenseAreaData_5__7 = DefenseAreaData;
                if ( !DefenseAreaData )
LABEL_672:
                  sub_B52A5C(DefenseAreaData, v485);
              }
              else
              {
                defenseAreaData_5__7 = v734->fields._defenseAreaData_5__7;
                if ( !defenseAreaData_5__7 )
                  goto LABEL_672;
              }
              v491 = _4__this->fields.aiRouteMasterData;
              if ( !v491 )
                sub_B52A5C(DefenseAreaData, v485);
              IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                                       defenseAreaData_5__7->fields._ShortestRoutes_k__BackingField,
                                                       piecePlaceData,
                                                       v491->fields.masterType == 1,
                                                       0LL);
              v494 = routeData;
              if ( IsAllBlockShortestRouteEnemyAndMastr )
              {
                if ( !routeData )
                  sub_B52A5C(IsAllBlockShortestRouteEnemyAndMastr, v493);
                routeData->fields.flagNow |= 0x40000000uLL;
              }
              else if ( !routeData )
              {
                sub_B52A5C(IsAllBlockShortestRouteEnemyAndMastr, v493);
              }
              v495 = v494->fields.flagNow;
              if ( (v495 & 0x400) != 0 && (defenseAreaData_5__7->fields._Flag_k__BackingField & 0x10000000000LL) != 0 )
                v494->fields.flagNow = v495 | 0x40000000000LL;
            }
            else
            {
              v494 = routeData;
            }
            v496 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v496,
              (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v494 )
              sub_B52A5C(v497, v498);
            v494->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v496;
            sub_B52920(
              (BattleServantConfConponent_o *)&v494->fields.moveByLinkedPiece,
              (System_Int32_array **)v496,
              v499,
              v500,
              v501,
              v502,
              v503,
              v504);
            v507 = routeData;
            if ( !routeData )
              sub_B52A5C(v505, v506);
            *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0LL;
            v508 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
            System_Collections_Generic_Dictionary_uint__int____ctor(
              v508,
              (const MethodInfo_2ED8EBC *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
            v507->fields.dicUniqueKeyRange = v508;
            sub_B52920(
              (BattleServantConfConponent_o *)&v507->fields.dicUniqueKeyRange,
              (System_Int32_array **)v508,
              v509,
              v510,
              v511,
              v512,
              v513,
              v514);
            v516 = v734->fields.piecePlaceData;
            if ( !v516 )
              sub_B52A5C(0LL, v515);
            System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
              &v718,
              v516,
              (const MethodInfo_2F2FA84 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
            *(_OWORD *)&v727.fields.dictionary = *(_OWORD *)&v718.fields.dictionary;
            v727.fields.current = v718.fields.current;
            while ( 1 )
            {
              v517 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                       &v727,
                       (const MethodInfo_288B664 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
              if ( !v517 )
                break;
              if ( !*v336 )
                sub_B52A5C(v517, v518);
              v519 = (*v336)->fields.basePiece;
              if ( !v519 )
                sub_B52A5C(v517, v518);
              key_high = HIDWORD(v727.fields.current.fields.key);
              if ( v519->fields._uniqueIndex_k__BackingField != HIDWORD(v727.fields.current.fields.key) )
              {
                if ( !routeData )
                  sub_B52A5C(v517, v518);
                v521 = (int32_t)v727.fields.current.fields.key;
                dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
                v523 = *v286;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v524 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v523,
                                                                              v521,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v525 = System_Linq_Enumerable__Count_int_(
                         v524,
                         (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !dicUniqueKeyRange )
                  sub_B52A5C(v525, v526);
                System_Collections_Generic_Dictionary_uint__int___Add(
                  dicUniqueKeyRange,
                  key_high,
                  v525,
                  (const MethodInfo_2ED9A60 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
              }
            }
            v721[v722++] = 2813;
            System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
              &v727,
              (const MethodInfo_288B7AC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
            if ( v722 && v721[v722 - 1] == 2813 )
              --v722;
            v527 = routeData;
            v528 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v528,
              (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v527 )
              sub_B52A5C(v529, v530);
            v527->fields.listExistDesignationItem = v528;
            sub_B52920(
              (BattleServantConfConponent_o *)&v527->fields.listExistDesignationItem,
              (System_Int32_array **)v528,
              v531,
              v532,
              v533,
              v534,
              v535,
              v536);
            v537 = routeData;
            v538 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v538,
              (const MethodInfo_2EF75B8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( !v537 )
              sub_B52A5C(v539, v540);
            v537->fields.dicMoveByServantGetDesignationItem = v538;
            sub_B52920(
              (BattleServantConfConponent_o *)&v537->fields.dicMoveByServantGetDesignationItem,
              (System_Int32_array **)v538,
              v541,
              v542,
              v543,
              v544,
              v545,
              v546);
            v547 = routeData;
            v548 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType____ctor(
              v548,
              (const MethodInfo_2F1F90C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
            if ( !v547 )
              sub_B52A5C(v549, v550);
            v547->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = v548;
            sub_B52920(
              (BattleServantConfConponent_o *)&v547->fields.dicItemIdKeyIsMoveByServantDesignationItemRange,
              (System_Int32_array **)v548,
              v551,
              v552,
              v553,
              v554,
              v555,
              v556);
            v559 = routeData;
            if ( !routeData )
              sub_B52A5C(v557, v558);
            routeData->fields.isMoveByOutOfWarningArea = 0;
            *(_QWORD *)&v559->fields.isMoveByServantAndEnemyRange = 0LL;
            *(_QWORD *)&v559->fields.isMoveByMasterAndEnemyRange = 0LL;
            *(_QWORD *)&v559->fields.isMoveByServantAndAttackAdvantageServantRange = 0LL;
            *(_QWORD *)&v559->fields.isMoveByServantAndDefenseAdvantageServantRange = 0LL;
            *(_QWORD *)&v559->fields.isMoveByServantAndClassAdvantageServantRange = 0LL;
            if ( !*v336 )
              sub_B52A5C(v557, v558);
            v560 = (*v336)->fields.basePiece;
            if ( !v560 )
              sub_B52A5C(0LL, v558);
            IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isServant(v560, 0LL);
            if ( IsBlockShortestRouteEnemyAndMaster )
            {
              if ( v734->fields._masterExists_5__8 )
              {
                if ( !*v336 )
                  sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                v563 = (*v336)->fields.basePiece;
                if ( !v563 )
                  sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                v564 = _4__this->fields.aiRouteMasterData;
                if ( !v564 )
                  sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                if ( v564->fields.masterType != 2
                  || v564->fields.masterPieceIndex != v563->fields._index_k__BackingField )
                {
                  v565 = v734->fields._defenseAreaData_5__7;
                  if ( !v565 )
                    sub_B52A5C(0LL, v562);
                  IsBlockShortestRouteEnemyAndMaster = DefenseAreaData__IsInDefenseArea(v565, *v286, 0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                    routeData->fields.flagNow |= 0x4000000000uLL;
                  }
                }
                if ( !*v336 )
                  sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                v566 = (*v336)->fields.basePiece;
                if ( !v566 )
                  sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                v567 = _4__this->fields.aiRouteMasterData;
                if ( !v567 )
                  sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                v568 = v567->fields.masterType;
                if ( v568 != 2 || v567->fields.masterPieceIndex != v566->fields._index_k__BackingField )
                {
                  IsBlockShortestRouteEnemyAndMaster = WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                                                         v734->fields._defenseAreaData_5__7,
                                                         *v286,
                                                         v568 == 1,
                                                         0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                    routeData->fields.flagNow |= 0x100000000uLL;
                  }
                }
                if ( !*v336 )
                  sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                v569 = (*v336)->fields.basePiece;
                if ( !v569 )
                  sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                v570 = _4__this->fields.aiRouteMasterData;
                if ( !v570 )
                  sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                if ( v570->fields.masterType != 2
                  || v570->fields.masterPieceIndex != v569->fields._index_k__BackingField )
                {
                  v571 = *v286;
                  if ( *v286 == MasterSquareIndexFromPlaceData )
                  {
                    if ( !routeData )
                      sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                    routeData->fields.isMoveByServantAndMasterRange = 2;
                  }
                  else
                  {
                    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AStarSearch_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                    }
                    v572 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                                  0LL,
                                                                                  v571,
                                                                                  MasterSquareIndexFromPlaceData,
                                                                                  0,
                                                                                  0LL,
                                                                                  0LL);
                    v573 = System_Linq_Enumerable__Count_int_(
                             v572,
                             (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
                    v574 = routeData;
                    v575 = WarBoardAIRoute__CalcurateDistanceType(v573, v734->fields._tmpFlagNow_5__12, 0LL);
                    if ( !v574 )
                      sub_B52A5C(v575, v562);
                    v574->fields.isMoveByServantAndMasterRange = v575;
                  }
                }
              }
              v576 = *(System_Collections_Generic_Dictionary_int__int__o **)&v734->fields._sumPieceActionCost_5__17;
              if ( !v576 )
                sub_B52A5C(0LL, v562);
              System_Collections_Generic_Dictionary_int__int___GetEnumerator(
                &v718,
                v576,
                (const MethodInfo_2F00010 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
              v725 = *(_OWORD *)&v718.fields.dictionary;
              endSquare = v718.fields.current;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
                        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v725,
                        (const MethodInfo_2886FC0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
              {
                v577 = (int32_t)endSquare.fields.key;
                v578 = HIDWORD(endSquare.fields.key);
                v579 = *v286;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v580 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v579,
                                                                              v577,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                v581 = System_Linq_Enumerable__Count_int_(
                         v580,
                         (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !routeData )
                  sub_B52A5C(v581, v582);
                dicItemIdKeyIsMoveByServantDesignationItemRange = routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
                v584 = WarBoardAIRoute__CalcurateDistanceType(v581, v578, 0LL);
                if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
                  sub_B52A5C(v584, v585);
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___set_Item(
                  dicItemIdKeyIsMoveByServantDesignationItemRange,
                  v577,
                  v584,
                  (const MethodInfo_2F20488 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
                if ( !routeData )
                  sub_B52A5C(v586, v587);
                dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
                if ( !dicMoveByServantGetDesignationItem )
                  sub_B52A5C(0LL, v587);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  dicMoveByServantGetDesignationItem,
                  v577,
                  *v286 == v577,
                  (const MethodInfo_2EF8168 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
                if ( !routeData )
                  sub_B52A5C(v589, v590);
                listExistDesignationItem = routeData->fields.listExistDesignationItem;
                if ( !listExistDesignationItem )
                  sub_B52A5C(0LL, v590);
                System_Collections_Generic_List_int___Add(
                  listExistDesignationItem,
                  v577,
                  (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
              }
              v721[v722++] = 3406;
              System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v725,
                (const MethodInfo_2887108 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
              if ( v722 && v721[v722 - 1] == 3406 )
                --v722;
              v592 = *v286;
              enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
              if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AStarSearch_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
              }
              v594 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                            0LL,
                                                                            v592,
                                                                            enemyMasterSquareIndex,
                                                                            0,
                                                                            0LL,
                                                                            0LL);
              v595 = System_Linq_Enumerable__Count_int_(
                       v594,
                       (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
              v596 = routeData;
              v597 = WarBoardAIRoute__CalcurateDistanceType(v595, v734->fields._servantAndMasterRange_5__13, 0LL);
              if ( !v596 )
                sub_B52A5C(v597, v598);
              v596->fields.isMoveByServantAndEnemyMasterRange = v597;
              v599 = routeData;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_42AE0E3 )
              {
                sub_B52984(&WarBoardAIManager_TypeInfo);
                byte_42AE0E3 = 1;
              }
              v600 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v600 = WarBoardAIManager_TypeInfo;
              }
              v601 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v600->static_fields->dicSquareIndexEnemyPiece,
                       HIDWORD(v734->fields._tmpFlagNow_5__12),
                       *v286,
                       0LL);
              if ( !v599 )
                sub_B52A5C(v601, v602);
              v603 = v734;
              v599->fields.isMoveByServantAndEnemyRange = v601;
              WarBoardAIRoute__ClassAdvantageDistance(
                _4__this,
                &routeData,
                (WarBoardAIRoute_AdvantagePieceData_o *)v603->fields._dicEnemyRange_5__20,
                *v286,
                0LL);
            }
            v604 = _4__this->fields.aiRouteMasterData;
            if ( !v604 )
              sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
            if ( v604->fields.masterType )
            {
LABEL_407:
              if ( v604->fields.masterType == 2 )
              {
                if ( !*v336 )
                  sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                v606 = (*v336)->fields.basePiece;
                if ( !v606 )
                  sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                if ( v606->fields._index_k__BackingField == v604->fields.masterPieceIndex )
                  goto LABEL_411;
              }
            }
            else
            {
              if ( !*v336 )
                sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
              v605 = (*v336)->fields.basePiece;
              if ( !v605 )
                sub_B52A5C(0LL, v562);
              IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isMaster(v605, 0LL);
              if ( !IsBlockShortestRouteEnemyAndMaster )
              {
                v604 = _4__this->fields.aiRouteMasterData;
                if ( !v604 )
                  sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                goto LABEL_407;
              }
LABEL_411:
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_42AE0E3 )
              {
                sub_B52984(&WarBoardAIManager_TypeInfo);
                byte_42AE0E3 = 1;
              }
              v607 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v607 = WarBoardAIManager_TypeInfo;
              }
              dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v607->static_fields->dicSquareIndexEnemyPiece;
              if ( !dicSquareIndexEnemyPiece )
                sub_B52A5C(0LL, v562);
              Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                       dicSquareIndexEnemyPiece,
                       (const MethodInfo_2F27914 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
              if ( !Keys )
                sub_B52A5C(0LL, v610);
              System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData___GetEnumerator(
                (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v718,
                Keys,
                (const MethodInfo_23A5B38 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
              v724.fields.currentKey = v718.fields.current.fields.key;
              *(_OWORD *)&v724.fields.dictionary = *(_OWORD *)&v718.fields.dictionary;
              while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___MoveNext(
                        &v724,
                        (const MethodInfo_288A4B8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                currentKey = (int32_t)v724.fields.currentKey;
                v612 = *v286;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v613 = AStarSearch__RouteSearch(0LL, v612, currentKey, 0, 0LL, 0LL);
                if ( !v613 )
                  sub_B52A5C(0LL, v614);
                v615 = _4__this->fields.npcData;
                if ( !v615 )
                  sub_B52A5C(v613, v614);
                if ( (signed int)(v613->max_length - 1) <= v615->fields.defenseArea )
                {
                  if ( !routeData )
                    sub_B52A5C(v613, v614);
                  routeData->fields.flagNow |= 0x8000000000uLL;
                  break;
                }
              }
              v721[v722++] = 3697;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData___Dispose(
                &v724,
                (const MethodInfo_288A4B4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( v722 && v721[v722 - 1] == 3697 )
                --v722;
              v617 = routeData;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              }
              if ( !byte_42AE0E3 )
              {
                sub_B52984(&WarBoardAIManager_TypeInfo);
                byte_42AE0E3 = 1;
              }
              v618 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v618 = WarBoardAIManager_TypeInfo;
              }
              v619 = v734->fields._defenseAreaData_5__7;
              if ( !v619 )
                sub_B52A5C(v618, v616);
              v620 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v618->static_fields->dicSquareIndexEnemyPiece,
                       v619->fields._MasterAndEnemyRange_k__BackingField,
                       *v286,
                       0LL);
              if ( !v617 )
                sub_B52A5C(v620, v621);
              v617->fields.isMoveByMasterAndEnemyRange = v620;
              p_basePieceBasePieceRouteList_5__23 = v716;
              if ( !byte_42AE0E3 )
              {
                sub_B52984(&WarBoardAIManager_TypeInfo);
                byte_42AE0E3 = 1;
              }
              v622 = WarBoardAIManager_TypeInfo;
              if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v622 = WarBoardAIManager_TypeInfo;
              }
              v623 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v622->static_fields->dicSquareIndexEnemyPiece;
              if ( !v623 )
                sub_B52A5C(0LL, v621);
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
                &v718,
                v623,
                (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
              v723 = v718;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                        &v723,
                        (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                v624 = (int32_t)v723.fields.current.fields.key;
                v625 = *v286;
                if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AStarSearch_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                }
                v626 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v625,
                                                                              v624,
                                                                              0,
                                                                              0LL,
                                                                              0LL);
                System_Linq_Enumerable__Count_int_(
                  v626,
                  (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !WarBoardAIRoute__IsDetour((System_Int32_array *)v626, v734->fields._allyPieceIndexs_5__5, 0LL) )
                {
                  v627 = 0;
                  goto LABEL_458;
                }
              }
              v627 = 1;
LABEL_458:
              v721[v722++] = 3829;
              System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
                &v723,
                (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( v722 && v721[v722 - 1] == 3829 )
                --v722;
              if ( v627 )
              {
                if ( !routeData )
                  sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
                routeData->fields.flagNow |= 0x1000000000uLL;
              }
            }
            v628 = routeData;
            if ( !routeData )
              sub_B52A5C(IsBlockShortestRouteEnemyAndMaster, v562);
            v629 = piecePlaceData;
            if ( !routeData->fields.actionPiece || (routeData->fields.flagNow & 0x4000000) != 0 )
            {
              v630 = v734->fields._warBoardData_5__2;
              if ( !v630 )
                sub_B52A5C(0LL, v562);
              Effect = WarBoardData__GetEffect(v630, *v286, 0LL);
              if ( Effect )
              {
                if ( !routeData )
                  sub_B52A5C(Effect, v632);
                routeData->fields.flagNow |= 0x200000000uLL;
              }
              v633 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v633,
                (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
              v635 = v734->fields.routeDataList;
              if ( !v635 )
                sub_B52A5C(0LL, v634);
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v718,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v635,
                (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
              v731.fields.current = v718.fields.current.fields.key;
              *(_OWORD *)&v731.fields.list = *(_OWORD *)&v718.fields.dictionary;
              while ( 1 )
              {
                v636 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v731,
                         (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
                if ( !v636 )
                  break;
                v638 = v731.fields.current;
                if ( !v731.fields.current )
                  sub_B52A5C(v636, v637);
                if ( (BYTE3(v731.fields.current[1].klass) & 8) != 0 )
                {
                  v639 = v731.fields.current[3].klass;
                  if ( !v639 )
                    sub_B52A5C(0LL, v637);
                  v640 = WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v639, 0LL);
                  if ( v640 )
                  {
                    if ( !v633 )
                      sub_B52A5C(v640, v641);
                    System_Collections_Generic_List_int___Add(
                      v633,
                      HIDWORD(v638[1].monitor),
                      (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
                  }
                  if ( (BYTE3(v638[1].klass) & 4) != 0 )
                  {
                    v642 = (WarBoardPieceData_o *)v638[3].klass;
                    if ( !v642 )
                      sub_B52A5C(0LL, v641);
                    if ( WarBoardPieceData__get_isMaster(v642, 0LL) )
                    {
                      v644 = (WarBoardPieceData_o *)v638[3].monitor;
                      if ( !v644 )
                        sub_B52A5C(0LL, v643);
                      v645 = WarBoardPieceData__get_isServant(v644, 0LL);
                      if ( v645 )
                      {
                        if ( !v633 )
                          sub_B52A5C(v645, v646);
                        System_Collections_Generic_List_int___Add(
                          v633,
                          (int32_t)v638[1].monitor,
                          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
                      }
                    }
                  }
                }
              }
              v721[v722++] = 4082;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v731,
                (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
              p_basePieceBasePieceRouteList_5__23 = v716;
              v629 = piecePlaceData;
              if ( v722 && v721[v722 - 1] == 4082 )
                --v722;
              if ( !routeData )
                sub_B52A5C(v647, v648);
              v649 = routeData->fields.basePiece;
              if ( !v649 )
                sub_B52A5C(0LL, v648);
              v650 = WarBoardPieceData__get_isServant(v649, 0LL);
              if ( v650 )
              {
                if ( !routeData )
                  sub_B52A5C(v650, v651);
                CanAcquireItem = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v633, 0LL);
                if ( CanAcquireItem )
                {
                  v654 = routeData;
                  if ( !routeData )
                    sub_B52A5C(CanAcquireItem, v653);
                  v655 = routeData->fields.flagNow | 0x18000000;
                  goto LABEL_497;
                }
              }
              else
              {
                if ( !routeData )
                  sub_B52A5C(v650, v651);
                v656 = routeData->fields.basePiece;
                if ( !v656 )
                  sub_B52A5C(0LL, v651);
                isMaster = WarBoardPieceData__get_isMaster(v656, 0LL);
                if ( isMaster )
                {
                  if ( !routeData )
                    sub_B52A5C(isMaster, v658);
                  v659 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v633, 0LL);
                  v661 = routeData;
                  if ( v659 )
                  {
                    if ( !routeData )
                      sub_B52A5C(v659, v660);
                    routeData->fields.flagNow |= 0x10000000uLL;
                  }
                  else if ( !routeData )
                  {
                    sub_B52A5C(v659, v660);
                  }
                  if ( (v661->fields.flagNow & 0x4000000) != 0 )
                  {
                    v662 = v661->fields.actionPiece;
                    if ( !v662 )
                      sub_B52A5C(0LL, v660);
                    v663 = WarBoardPieceData__get_isServant(v662, 0LL);
                    if ( v663 )
                    {
                      if ( !routeData )
                        sub_B52A5C(v663, v664);
                      v665 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.baseIndex, v633, 0LL);
                      if ( v665 )
                      {
                        v654 = routeData;
                        if ( !routeData )
                          sub_B52A5C(v665, v666);
                        v655 = routeData->fields.flagNow | 0x8000000;
LABEL_497:
                        v654->fields.flagNow = v655;
                      }
                    }
                  }
                }
              }
              WarBoardAIRoute__LinkedPieceCount(_4__this, &routeData, piecePlaceData, v633, 0LL);
              v628 = routeData;
              if ( !routeData )
                sub_B52A5C(v667, v668);
            }
            FlagOutOfWarningAreaToDistance = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                               _4__this,
                                               v628->fields.baseIndex,
                                               v628->fields.actionIndex,
                                               0LL);
            v628->fields.isMoveByOutOfWarningArea = FlagOutOfWarningAreaToDistance;
            v671 = routeData;
            p__7__wrap23 = v713;
            if ( !routeData )
              sub_B52A5C(FlagOutOfWarningAreaToDistance, v670);
            evalOffsetMagnification = routeData->fields.evalOffsetMagnification;
            if ( !evalOffsetMagnification )
              sub_B52A5C(FlagOutOfWarningAreaToDistance, v670);
            evalOffsetMagnification->fields.isAttack = (routeData->fields.flagNow & 2) != 0;
            v673 = v671->fields.basePiece;
            if ( !v673 )
              sub_B52A5C(FlagOutOfWarningAreaToDistance, v670);
            piecePersonalityDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)_4__this->fields.piecePersonalityDic;
            if ( !piecePersonalityDic )
              sub_B52A5C(0LL, v670);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                 piecePersonalityDic,
                                                                 v673->fields._index_k__BackingField,
                                                                 &value,
                                                                 (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v675 = (WarBoardAIRoute_PiecePersonality_o *)value;
              v676 = (WarBoardAIEvalCalcurater_o *)sub_B52A54(WarBoardAIEvalCalcurater_TypeInfo);
              WarBoardAIEvalCalcurater___ctor(v676, v675, 0LL);
              if ( !v676 )
                sub_B52A5C(v677, v678);
              WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v676, &routeData, 0LL);
              WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
                v676,
                &routeData,
                _4__this->fields.averageBenefitValue,
                0LL);
              if ( !routeData )
                sub_B52A5C(0LL, v679);
              WarBoardAIRoute_RouteData__CalcEvalValue(routeData, v679);
              v680 = WarBoardAIRoute___c_TypeInfo;
              v681 = v734->fields.routeDataList;
              if ( (BYTE3(WarBoardAIRoute___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v680 = WarBoardAIRoute___c_TypeInfo;
              }
              v682 = v680->static_fields;
              _9__47_5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v682->__9__47_5;
              if ( !_9__47_5 )
              {
                if ( (BYTE3(v680->vtable._0_Equals.methodPtr) & 4) != 0 && !v680->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v680);
                  v629 = piecePlaceData;
                  v682 = WarBoardAIRoute___c_TypeInfo->static_fields;
                }
                v684 = (Il2CppObject *)v682->__9;
                _9__47_5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
                  _9__47_5,
                  v684,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__,
                  (const MethodInfo_2BCA808 *)Method_System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___ctor__);
                v685 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v685->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
                sub_B52920(
                  (BattleServantConfConponent_o *)&v685->__9__47_5,
                  (System_Int32_array **)_9__47_5,
                  v686,
                  v687,
                  v688,
                  v689,
                  v690,
                  v691);
                p__7__wrap23 = v713;
              }
              v692 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v681,
                                                                      (System_Func_TSource__TResult__o *)_9__47_5,
                                                                      (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
              v693 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
              System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
                v693,
                v692,
                (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___68536144);
              if ( !v693 )
                sub_B52A5C(v694, v695);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v693,
                (EventMissionProgressRequest_Argument_ProgressData_o *)routeData,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__);
              v696 = BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                       (System_Collections_Generic_List_T__o *)v693,
                       v693->fields._size - 2,
                       0LL,
                       (const MethodInfo_1A43F54 *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
              route = v696;
              if ( v696 )
              {
                if ( !routeData )
                  sub_B52A5C(v696, v697);
                if ( routeData->fields.basePiece == v696->fields.basePiece )
                {
                  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
                    v676,
                    &route,
                    routeData,
                    0LL);
                  if ( !route )
                    sub_B52A5C(0LL, v698);
                  WarBoardAIRoute_RouteData__CalcEvalValue(route, v698);
                }
              }
              allRouteList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.allRouteList;
              if ( !allRouteList )
                sub_B52A5C(0LL, v697);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                allRouteList,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v693,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
              if ( !routeData )
                sub_B52A5C(this, method);
              if ( routeData->fields.baseIndex != routeData->fields.actionIndex && (routeData->fields.flagNow & 2) == 0 )
              {
                searchCount = v734->fields.searchCount;
                if ( searchCount != 1 )
                {
                  v703 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(_4__this, v629, searchCount, v693, 0LL);
                  v704 = v734;
                  v734->fields.__2__current = v703;
                  sub_B52920(
                    (BattleServantConfConponent_o *)&v704->fields.__2__current,
                    (System_Int32_array **)v703,
                    v705,
                    v706,
                    v707,
                    v708,
                    v709,
                    v710);
                  result = 1;
                  v734->fields.__1__state = 1;
                  return result;
                }
                dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
                v702 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(_4__this, v629, 1, v693, 0LL);
                if ( !routeData )
                  sub_B52A5C(v702, v702);
                if ( !dictionaryCreateRouteDataEvalValue )
                  sub_B52A5C(v702, v702);
                System_Collections_Generic_Dictionary_object__float___Add(
                  dictionaryCreateRouteDataEvalValue,
                  v702,
                  routeData->fields.evalValue,
                  (const MethodInfo_2EBB74C *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
              }
            }
            goto LABEL_543;
          }
        }
        v204 = v734;
        WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v734, v82);
        *(_OWORD *)&p__7__wrap8->fields.dictionary = 0u;
        p__7__wrap8->fields.current = 0u;
        if ( v204->fields.searchCount != 1 )
          return 0;
        if ( !_4__this )
          sub_B52A5C(v205, v206);
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
          _9__47_6 = (System_Func_T__TResult__o *)sub_B52A54(System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v211,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            (const MethodInfo_277F934 *)Method_System_Func_KeyValuePair_IEnumerator__float___float___ctor__);
          v212 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v212->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_B52920(
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
                 (const MethodInfo_1B6650C *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v734->fields._servantAndEnemyMasterRange_5__15 = 0;
        v221 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v221 )
          sub_B52A5C(0LL, v219);
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v221,
                  (const MethodInfo_2EBB348 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v225 = _4__this->fields.npcData;
        if ( !v225 )
          sub_B52A5C(Count, v223);
        v226 = (float)((float)v225->fields.calcEllipsis / 100.0) * (float)(int)Count;
        v227 = v734;
        if ( v226 == INFINITY )
          v228 = -v226;
        else
          v228 = v226;
        v229 = (int)v228;
        v734->fields._servantAndEnemyRange_5__14 = (int)v228;
        v230 = _4__this->fields.npcData;
        if ( !v230 )
          sub_B52A5C(Count, v223);
        calcEllipsisMin = v230->fields.calcEllipsisMin;
        if ( calcEllipsisMin > v229 )
          v229 = calcEllipsisMin;
        v227->fields._servantAndEnemyRange_5__14 = v229;
        if ( !v220 )
          sub_B52A5C(Count, v223);
        v232 = v220->klass;
        if ( *(_WORD *)&v220->klass->_2.bitflags1 )
        {
          v233 = 0LL;
          p_offset = &v232->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            ++v233;
            p_offset += 4;
            if ( v233 >= *(unsigned __int16 *)&v220->klass->_2.bitflags1 )
              goto LABEL_118;
          }
          p_method = (__int64)&v232->vtable[*p_offset].method;
        }
        else
        {
LABEL_118:
          p_method = sub_AEB880(
                       v220,
                       System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo,
                       0LL,
                       v224);
        }
        v246 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                                        v220,
                                        *(_QWORD *)(p_method + 8));
        p__7__wrap24 = &v734->fields.__7__wrap24;
        *(_QWORD *)&v734->fields.__7__wrap24 = v246;
        sub_B52920((BattleServantConfConponent_o *)p__7__wrap24, v246, v247, v248, v249, v250, v251, v252);
        v734->fields.__1__state = -4;
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
    sub_B52920(p_defenseAreaData_5__7, v60, v61, v62, v63, v64, v65, v66);
    v69 = p_defenseAreaData_5__7->klass;
    if ( !p_defenseAreaData_5__7->klass )
      sub_B52A5C(v67, v68);
    v734->fields._baseFlag_5__6 |= (int64_t)v69->_1.name;
    v70 = _4__this->fields.aiRouteMasterData;
    if ( !v70 )
      sub_B52A5C(v67, v68);
    if ( WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
           (System_Collections_Generic_List_int____o *)v69->_1.this_arg.data,
           *p_piecePlaceData,
           v70->fields.masterType == 1,
           0LL) )
    {
      v734->fields._baseFlag_5__6 |= 0x20000000uLL;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  if ( (byte_42AE5E3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    byte_42AE5E3 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &this->fields.__7__wrap8,
    (const MethodInfo_288B7AC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
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

  if ( (byte_42AE5E4 & 1) == 0 )
  {
    sub_B52984(&System_IDisposable_TypeInfo);
    byte_42AE5E4 = 1;
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
      v8 = sub_AEB880(v4, System_IDisposable_TypeInfo, 0LL, v2);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v8)(v4, *(_QWORD *)(v8 + 8));
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

  if ( (byte_42AE5D3 & 1) == 0 )
  {
    sub_B52984(&WarBoardAIRoute___c_TypeInfo);
    byte_42AE5D3 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardAIRoute___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIRoute___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42AE5D4 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_B52984(&IWarBoardObjectData_TypeInfo);
    byte_42AE5D4 = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
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
    p_method = sub_AEB880(x, IWarBoardObjectData_TypeInfo, 2LL, v3);
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
  if ( (byte_42AE5D5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    byte_42AE5D5 = 1;
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
  if ( (byte_42AE5D6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    byte_42AE5D6 = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, (const MethodInfo *)x.fields.key);
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return WarBoardAIRoute_RouteData__ShallowCopy(x, (const MethodInfo *)x);
}


float __fastcall WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // s8

  value = x.fields.value;
  if ( (byte_42AE5D7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__);
    byte_42AE5D7 = 1;
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

  if ( (byte_42AE5D8 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_B52984(&IWarBoardObjectData_TypeInfo);
    byte_42AE5D8 = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
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
    p_method = sub_AEB880(x, IWarBoardObjectData_TypeInfo, 4LL, v3);
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

  if ( (byte_42AE5D9 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_B52984(&IWarBoardObjectData_TypeInfo);
    byte_42AE5D9 = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
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
    p_method = sub_AEB880(x, IWarBoardObjectData_TypeInfo, 5LL, v3);
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
  if ( (byte_42AE5DA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__);
    byte_42AE5DA = 1;
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
    sub_B52A5C(this, 0LL);
  return !WarBoardItemData__get_Acquired(z, 0LL) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_B52A5C(this, 0LL);
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
  if ( (byte_42AE5DB & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_B52984(&IWarBoardObjectData_TypeInfo);
    byte_42AE5DB = 1;
  }
  if ( !z )
    sub_B52A5C(this, z);
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
    p_method = sub_AEB880(z, IWarBoardObjectData_TypeInfo, 0LL, v3);
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
    v14 = sub_AEB880(z, IWarBoardObjectData_TypeInfo, 3LL, v10);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, 0LL);
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
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

  if ( (byte_42AE5DC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    byte_42AE5DC = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_B52A5C(0LL, *(_QWORD *)&square);
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_2F2F774 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
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
    sub_B52A5C(this, x);
  i = this->fields.i;
  if ( (unsigned int)i >= route->max_length )
  {
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
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

  if ( (byte_42AE5DD & 1) == 0 )
  {
    sub_B52984(&Method_System_Func_IWarBoardObjectData__bool__Invoke__);
    byte_42AE5DD = 1;
  }
  excludeCond = this->fields.excludeCond;
  if ( !excludeCond )
    sub_B52A5C(0LL, x);
  return !System_Func_BattleBuffData_BuffData__bool___Invoke(
            (System_Func_BattleBuffData_BuffData__bool__o *)excludeCond,
            (BattleBuffData_BuffData_o *)x,
            (const MethodInfo_2BC90D0 *)Method_System_Func_IWarBoardObjectData__bool__Invoke__)
      && this->fields.basePiece != (struct WarBoardPieceData_o *)x;
}


int32_t __fastcall WarBoardAIRoute___c__DisplayClass64_0___GetTargetToDistanceUsingIndividuality_b__1(
        WarBoardAIRoute___c__DisplayClass64_0_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardAIRoute___c__DisplayClass64_0_o *v5; // x20
  IWarBoardObjectData_c *klass; // x8
  int32_t baseSquareIndex; // w20
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v11; // w19

  v5 = this;
  if ( (byte_42AE5DE & 1) == 0 )
  {
    sub_B52984(&AStarSearch_TypeInfo);
    this = (WarBoardAIRoute___c__DisplayClass64_0_o *)sub_B52984(&IWarBoardObjectData_TypeInfo);
    byte_42AE5DE = 1;
  }
  if ( !x )
    goto LABEL_15;
  klass = x->klass;
  baseSquareIndex = v5->fields.baseSquareIndex;
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
    p_method = sub_AEB880(x, IWarBoardObjectData_TypeInfo, 1LL, v3);
  }
  v11 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  this = (WarBoardAIRoute___c__DisplayClass64_0_o *)AStarSearch__RouteSearch(0LL, baseSquareIndex, v11, 0, 0LL, 0LL);
  if ( !this )
LABEL_15:
    sub_B52A5C(this, x);
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

  if ( (byte_42AE5DF & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_B52984(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_B52984(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__);
    sub_B52984(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
    byte_42AE5DF = 1;
  }
  v5 = sub_B52A54(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 16) = targetObject;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)targetObject, v8, v9, v10, v11, v12, v13);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           routeDataList,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
  struct IWarBoardObjectData_o *targetObject; // x21
  IWarBoardObjectData_c *klass; // x8
  __int64 v8; // x10
  int32_t baseIndex; // w23
  unsigned __int64 v11; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x3
  struct IWarBoardObjectData_o *v15; // x20
  IWarBoardObjectData_c *v16; // x8
  int32_t actionIndex; // w19
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0

  v5 = this;
  if ( (byte_42AE5E0 & 1) == 0 )
  {
    sub_B52984(&IWarBoardObjectData_TypeInfo);
    this = (WarBoardAIRoute___c__DisplayClass65_1_o *)sub_B52984(&WarBoardItemData_TypeInfo);
    byte_42AE5E0 = 1;
  }
  targetObject = v5->fields.targetObject;
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
    p_method = sub_AEB880(v5->fields.targetObject, IWarBoardObjectData_TypeInfo, 0LL, v3);
  }
  this = (WarBoardAIRoute___c__DisplayClass65_1_o *)(*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                                      targetObject,
                                                      *(_QWORD *)(p_method + 8));
  if ( baseIndex == (_DWORD)this )
    return 1;
  v15 = v5->fields.targetObject;
  if ( !v15 )
LABEL_25:
    sub_B52A5C(this, x);
  v16 = v15->klass;
  actionIndex = x->fields.actionIndex;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    v19 = &v16->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v19 - 1) != IWarBoardObjectData_TypeInfo )
    {
      ++v18;
      v19 += 4;
      if ( v18 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v20 = (__int64)&v16->vtable[*v19].method;
  }
  else
  {
LABEL_22:
    v20 = sub_AEB880(v15, IWarBoardObjectData_TypeInfo, 0LL, v14);
  }
  return actionIndex == (*(unsigned int (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v20)(
                          v15,
                          *(_QWORD *)(v20 + 8));
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
  if ( (byte_42AE5E1 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass66_0_o *)sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__);
    byte_42AE5E1 = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  value = v4->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, x);
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
      sub_B52A5C(this, x);
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