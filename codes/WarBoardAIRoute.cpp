void WarBoardAIRoute___ctor(WarBoardAIRoute_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_Dictionary_int__object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  WarBoardAIRoute_o *v31; // x23
  System_Collections_Generic_Dictionary_TKey__TValue__o *v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v46; // x20
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v53; // x20
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  System_Collections_Generic_Dictionary_int__object__o *v60; // x20
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  WarBoardData_o *playedStageReinforcementsList; // x0
  Il2CppObject *v74; // x1
  const MethodInfo *v75; // x3
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  int32_t v77; // w8
  const MethodInfo *v78; // x3
  WarBoardActionPointEntity_o *v79; // x0
  int32_t v80; // w8
  const MethodInfo *v81; // x3
  WarBoardActionPointEntity_o *v82; // x0
  int32_t v83; // w8
  const MethodInfo *v84; // x3
  WarBoardActionPointEntity_o *v85; // x0
  const MethodInfo *v86; // x1
  int32_t v87; // w8
  struct System_Collections_Generic_List_WarBoardRatingBase__o *v88; // x8
  int32_t size; // w2
  int32_t version; // w9
  GrandQuestFolderBoardItem_o *p_aiIds; // x20
  struct System_Int32_array *aiIds; // x24
  System_Array_o *v93; // x21
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v101; // x26
  int v102; // w21
  WarBoardAIRoute_PiecePersonality_o *v103; // x27
  const MethodInfo *v104; // x1
  const MethodInfo *v105; // x5
  WarBoardPieceData_o *Piece; // x0
  int32_t overwriteAiId_k__BackingField; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *v108; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *stageNpcMaster; // x8
  WarBoardData_o *v110; // x29
  unsigned __int64 v111; // x23
  System_Collections_Generic_List_object__o *actionTrandList; // x20
  Il2CppObject *v113; // x22
  WarBoardAIRoute_ActionTrendInfo_o *v114; // x21
  const MethodInfo *v115; // x2
  int32_t v116; // w2
  int32_t v117; // w3
  System_String_o *v118; // x4
  int32_t v119; // w5
  int64_t v120; // x6
  System_String_o *v121; // x7
  struct System_Object_array *items; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  Il2CppClass **v125; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v126; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v127; // x8
  WarBoardData_o *v128; // x29
  unsigned __int64 v129; // x20
  int32_t v130; // w2
  int32_t v131; // w3
  System_String_o *v132; // x4
  int32_t v133; // w5
  int64_t v134; // x6
  System_String_o *v135; // x7
  struct System_Int32_array *stageEntity; // x8
  _QWORD *v137; // x9
  __int64 stageNpcMaster_low; // x10
  Il2CppClass **v139; // x8
  Il2CppObject *Master_object; // x27
  Il2CppObject *v141; // x28
  struct System_Collections_Generic_List_int__o *v142; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x20
  System_Func_object__bool__o *v144; // x21
  System_Collections_Generic_Dictionary_int__object__c *klass; // x8
  WarBoardData_o *v146; // x26
  __int64 v147; // x9
  int32_t *p_offset; // x10
  __int64 v149; // x0
  __int64 v150; // x1
  __int64 v151; // x26
  __int64 v152; // x8
  __int64 v153; // x9
  int *v154; // x10
  __int64 v155; // x0
  __int64 v156; // x8
  __int64 v157; // x9
  int *v158; // x10
  __int64 v159; // x0
  __int64 v160; // x1
  int32_t *v161; // x29
  _BOOL8 v162; // x0
  __int64 v163; // x1
  struct System_Int32_array *v164; // x8
  _BOOL8 v165; // x0
  __int64 v166; // x1
  __int64 v167; // x0
  __int64 v168; // x1
  _BOOL8 v169; // x0
  __int64 v170; // x1
  const MethodInfo *v171; // x3
  __int64 v172; // x8
  __int64 v173; // x9
  int *v174; // x10
  __int64 v175; // x0
  GrandQuestFolderBoardItem_o *p_ratingBaseIds; // x20
  struct System_Int32_array *ratingBaseIds; // x22
  System_Array_o *v178; // x21
  int32_t v179; // w2
  int32_t v180; // w3
  System_String_o *v181; // x4
  int32_t v182; // w5
  int64_t v183; // x6
  System_String_o *v184; // x7
  il2cpp_array_size_t v185; // x8
  unsigned __int64 v186; // x24
  int32_t v187; // w20
  WarBoardData_o *v188; // x25
  __int64 v189; // x26
  int32_t v190; // w2
  int32_t v191; // w3
  System_String_o *v192; // x4
  int32_t v193; // w5
  int64_t v194; // x6
  System_String_o *v195; // x7
  int32_t v196; // w2
  int32_t v197; // w3
  System_String_o *v198; // x4
  int32_t v199; // w5
  int64_t v200; // x6
  System_String_o *v201; // x7
  struct System_Int32_array *v202; // x8
  _QWORD *v203; // x9
  __int64 v204; // x10
  Il2CppClass **v205; // x8
  int32_t v206; // w21
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicRatingbaseCalcValue; // x20
  Il2CppObject *v208; // x25
  struct System_Int32_array *tacticalIds; // x19
  GrandQuestFolderBoardItem_o *p_tacticalIds; // x21
  System_Array_o *v211; // x20
  int32_t v212; // w2
  int32_t v213; // w3
  System_String_o *v214; // x4
  int32_t v215; // w5
  int64_t v216; // x6
  System_String_o *v217; // x7
  il2cpp_array_size_t v218; // x8
  unsigned __int64 v219; // x21
  int32_t v220; // w20
  int32_t v221; // w2
  int32_t v222; // w3
  System_String_o *v223; // x4
  int32_t v224; // w5
  int64_t v225; // x6
  System_String_o *v226; // x7
  System_Collections_Generic_List_object__o *v227; // x8
  struct System_Object_array *v228; // x9
  _QWORD *v229; // x10
  __int64 v230; // x11
  WarBoardData_o *v231; // x1
  Il2CppClass **v232; // x0
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v235; // x22
  const MethodInfo *v236; // x3
  int32_t v237; // w2
  int32_t v238; // w3
  System_String_o *v239; // x4
  int32_t v240; // w5
  int64_t v241; // x6
  System_String_o *v242; // x7
  struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o **p_tacticalTrendList; // [xsp+8h] [xbp-C8h]
  struct System_Collections_Generic_List_WarBoardRatingBase__o **p_ratingBaseList; // [xsp+18h] [xbp-B8h]
  struct System_Int32_array *v246; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_Dictionary_int__object__o **p_piecePersonalityDic; // [xsp+38h] [xbp-98h]
  DataManager_o *Instance; // [xsp+40h] [xbp-90h]
  WarBoardReinforcementsEntity_o *v250; // [xsp+48h] [xbp-88h] BYREF
  WarBoardStageReinforcementsEntity_o *v251; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *item; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *v253; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4D2E2AB & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_IndexValue_int____79063232);
    sub_1C93AD4(&WarBoardEvalValueSquare_CalcEval_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_WarBoardAIMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
    sub_1C93AD4(&WarBoardAIRoute_PiecePersonality_TypeInfo);
    sub_1C93AD4(&ShortestDistanceFromAllyMaster_TypeInfo);
    sub_1C93AD4(&ShortestDistanceFromAllyServant_TypeInfo);
    sub_1C93AD4(&ShortestDistanceFromEnemyMaster_TypeInfo);
    sub_1C93AD4(&ShortestDistanceFromEnemyServant_TypeInfo);
    sub_1C93AD4(&ShortestDistanceFromItem_TypeInfo);
    sub_1C93AD4(&ShortestDistanceFromPrioritySpace_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384);
    sub_1C93AD4(&Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49);
    sub_1C93AD4(&Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72);
    sub_1C93AD4(&Method_WarBoardAIRoute___ctor_b__42_0__);
    sub_1C93AD4(&WarBoardAiTargetCacher_TypeInfo);
    byte_4D2E2AB = 1;
  }
  v253 = 0;
  entity = 0;
  v251 = 0;
  item = 0;
  v250 = 0;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v3;
  p_tacticalTrendList = &this->fields.tacticalTrendList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.tacticalTrendList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v10;
  p_ratingBaseList = &this->fields.ratingBaseList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.ratingBaseList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v17;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.piecePersonalityDic,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.allRouteList, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = this;
  v32 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v32,
    (const MethodInfo_3566DA4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v32;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dicUniqueKeyAdvantagePieceData,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v39,
    (const MethodInfo_35372E4 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v39;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dictionaryCreateRouteDataEvalValue,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v46,
    (const MethodInfo_3566DA4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v46;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dicUniqueKeyDesignationItem,
    (int32_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v53,
    (const MethodInfo_3566DA4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v53;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dicUniqueKeyTarget,
    (int32_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v60,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v60;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dicRatingbaseCalcValue,
    (int32_t)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.npcData, (int32_t)npc, v67, v68, v69, v70, v71, v72);
  if ( !npc )
    goto LABEL_154;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&npc->fields.forceId;
  this->fields.pickValue = npc->fields.pickValue;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  ActionPointEntity = WarBoardData__GetActionPointEntity(
                        playedStageReinforcementsList,
                        this->fields.forceId,
                        this->fields.groupId,
                        v75);
  v77 = ActionPointEntity ? ActionPointEntity->fields.moveCost : 0;
  this->fields.moveCost = v77;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v79 = WarBoardData__GetActionPointEntity(
          playedStageReinforcementsList,
          this->fields.forceId,
          this->fields.groupId,
          v78);
  v80 = v79 ? v79->fields.masterMoveCost : 0;
  this->fields.masterMoveCost = v80;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v82 = WarBoardData__GetActionPointEntity(
          playedStageReinforcementsList,
          this->fields.forceId,
          this->fields.groupId,
          v81);
  v83 = v82 ? v82->fields.attackCost : 0;
  this->fields.attackCost = v83;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v85 = WarBoardData__GetActionPointEntity(
          playedStageReinforcementsList,
          this->fields.forceId,
          this->fields.groupId,
          v84);
  v87 = v85 ? v85->fields.wallAttackCost : 0;
  this->fields.wallAttackCost = v87;
  WarBoardAIRoute__Clear(this, v86);
  playedStageReinforcementsList = (WarBoardData_o *)this->fields.piecePersonalityDic;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)playedStageReinforcementsList,
    (const MethodInfo_34BCF0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  v88 = *p_ratingBaseList;
  if ( !*p_ratingBaseList )
    goto LABEL_154;
  size = v88->fields._size;
  version = v88->fields._version;
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.piecePersonalityDic;
  v88->fields._size = 0;
  v88->fields._version = version + 1;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v88->fields._items, 0, size, 0);
  p_aiIds = (GrandQuestFolderBoardItem_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v93 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 4);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
      v93,
      (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72,
      0);
    p_aiIds->klass = (GrandQuestFolderBoardItem_c *)v93;
    sub_1C93A78(p_aiIds, (int32_t)v93, v94, v95, v96, v97, v98, v99);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_154;
  }
  max_length = aiIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v101 = 0;
    v246 = aiIds;
    do
    {
      if ( v101 >= (unsigned int)max_length )
        goto LABEL_155;
      v102 = aiIds->m_Items[v101];
      v103 = (WarBoardAIRoute_PiecePersonality_o *)sub_1C93D20(WarBoardAIRoute_PiecePersonality_TypeInfo);
      WarBoardAIRoute_PiecePersonality___ctor(v103, v104);
      playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !playedStageReinforcementsList )
        goto LABEL_154;
      playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
      if ( !playedStageReinforcementsList )
        goto LABEL_154;
      Piece = WarBoardData__GetPiece(
                playedStageReinforcementsList,
                v31->fields.forceId,
                v31->fields.groupId,
                v101,
                1,
                v105);
      if ( Piece
        && (overwriteAiId_k__BackingField = Piece->fields._overwriteAiId_k__BackingField,
            overwriteAiId_k__BackingField > 0)
        || (overwriteAiId_k__BackingField = v102, v102 >= 1) )
      {
        playedStageReinforcementsList = (WarBoardData_o *)Instance;
        if ( !Instance )
          goto LABEL_154;
        playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                            Instance,
                                                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !playedStageReinforcementsList )
          goto LABEL_154;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
               &entity,
               overwriteAiId_k__BackingField,
               (const MethodInfo_34632C0 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                              Instance,
                                                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
          if ( !entity )
            goto LABEL_154;
          v108 = (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList;
          playedStageReinforcementsList = (WarBoardData_o *)WarBoardAIEntity__GetActionTrendIds(
                                                              (WarBoardAIEntity_o *)entity,
                                                              0);
          if ( !playedStageReinforcementsList )
            goto LABEL_154;
          stageNpcMaster = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)playedStageReinforcementsList->fields.stageNpcMaster;
          v110 = playedStageReinforcementsList;
          if ( (int)stageNpcMaster >= 1 )
          {
            v111 = 0;
            while ( v111 < (unsigned int)stageNpcMaster )
            {
              if ( !v108 )
                goto LABEL_154;
              playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v108,
                                                                  &v253,
                                                                  *((_DWORD *)&v110->fields.npcEntityDict + v111),
                                                                  (const MethodInfo_34632C0 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)playedStageReinforcementsList & 1) != 0 )
              {
                if ( !v103 )
                  goto LABEL_154;
                actionTrandList = (System_Collections_Generic_List_object__o *)v103->fields.actionTrandList;
                v113 = v253;
                v114 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C93D20(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
                WarBoardAIRoute_ActionTrendInfo___ctor(v114, (WarBoardActionTrendEntity_o *)v113, v115);
                if ( !actionTrandList )
                  goto LABEL_154;
                items = actionTrandList->fields._items;
                v123 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
                ++actionTrandList->fields._version;
                if ( !items )
                  goto LABEL_154;
                v124 = actionTrandList->fields._size;
                if ( (unsigned int)v124 >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    actionTrandList,
                    (Il2CppObject *)v114,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
                }
                else
                {
                  v125 = &items->obj.klass + v124;
                  actionTrandList->fields._size = v124 + 1;
                  v125[4] = (Il2CppClass *)v114;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)(v125 + 4),
                    (int32_t)v114,
                    v116,
                    v117,
                    v118,
                    v119,
                    v120,
                    v121);
                }
              }
              LODWORD(stageNpcMaster) = v110->fields.stageNpcMaster;
              if ( (__int64)++v111 >= (int)stageNpcMaster )
                goto LABEL_55;
            }
LABEL_155:
            sub_1C93D34(playedStageReinforcementsList);
          }
LABEL_55:
          playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                              Instance,
                                                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_154;
          v126 = (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList;
          playedStageReinforcementsList = (WarBoardData_o *)WarBoardAIEntity__GetRatingOffsetIds(
                                                              (WarBoardAIEntity_o *)entity,
                                                              0);
          aiIds = v246;
          v31 = this;
          if ( !playedStageReinforcementsList )
            goto LABEL_154;
          v127 = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)playedStageReinforcementsList->fields.stageNpcMaster;
          v128 = playedStageReinforcementsList;
          if ( (int)v127 >= 1 )
          {
            v129 = 0;
            while ( v129 < (unsigned int)v127 )
            {
              if ( !v126 )
                goto LABEL_154;
              playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v126,
                                                                  &item,
                                                                  *((_DWORD *)&v128->fields.npcEntityDict + v129),
                                                                  (const MethodInfo_34632C0 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)playedStageReinforcementsList & 1) != 0 )
              {
                if ( !v103 )
                  goto LABEL_154;
                playedStageReinforcementsList = (WarBoardData_o *)v103->fields.ratingOffsetList;
                if ( !playedStageReinforcementsList )
                  goto LABEL_154;
                v74 = item;
                stageEntity = (struct System_Int32_array *)playedStageReinforcementsList->fields.stageEntity;
                v137 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
                ++HIDWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( !stageEntity )
                  goto LABEL_154;
                stageNpcMaster_low = SLODWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( (unsigned int)stageNpcMaster_low >= LODWORD(stageEntity->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)playedStageReinforcementsList,
                    v74,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
                }
                else
                {
                  v139 = &stageEntity->obj.klass + stageNpcMaster_low;
                  LODWORD(playedStageReinforcementsList->fields.stageNpcMaster) = stageNpcMaster_low + 1;
                  v139[4] = (Il2CppClass *)v74;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)(v139 + 4),
                    (int32_t)v74,
                    v130,
                    v131,
                    v132,
                    v133,
                    v134,
                    v135);
                }
              }
              LODWORD(v127) = v128->fields.stageNpcMaster;
              if ( (__int64)++v129 >= (int)v127 )
                goto LABEL_69;
            }
            goto LABEL_155;
          }
        }
      }
LABEL_69:
      playedStageReinforcementsList = (WarBoardData_o *)*p_piecePersonalityDic;
      if ( !*p_piecePersonalityDic )
        goto LABEL_154;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)playedStageReinforcementsList,
        v101,
        (Il2CppObject *)v103,
        (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      LODWORD(max_length) = aiIds->max_length;
    }
    while ( (__int64)++v101 < (int)max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v141 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v142 = playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !v142 )
    goto LABEL_154;
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v142[1].monitor;
  v144 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(v144, (Il2CppObject *)v31, Method_WarBoardAIRoute___ctor_b__42_0__, 0);
  playedStageReinforcementsList = (WarBoardData_o *)System_Linq_Enumerable__Where_object_(
                                                      monitor,
                                                      (System_Func_TSource__bool__o *)v144,
                                                      (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  klass = (System_Collections_Generic_Dictionary_int__object__c *)playedStageReinforcementsList->klass;
  v146 = playedStageReinforcementsList;
  v147 = *(unsigned __int16 *)&playedStageReinforcementsList->klass->_2.rank;
  if ( *(_WORD *)&playedStageReinforcementsList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      --v147;
      p_offset += 4;
      if ( !v147 )
        goto LABEL_80;
    }
    v149 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_80:
    v149 = sub_1C69E5C(
             playedStageReinforcementsList,
             System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo,
             0);
  }
  v151 = (*(__int64 (__fastcall **)(WarBoardData_o *, _QWORD))v149)(v146, *(_QWORD *)(v149 + 8));
  if ( !v151 )
    sub_1C93D2C(0, v150);
  while ( 1 )
  {
    v152 = *(_QWORD *)v151;
    v153 = *(unsigned __int16 *)(*(_QWORD *)v151 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v151 + 302LL) )
    {
      v154 = (int *)(*(_QWORD *)(v152 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v154 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v153;
        v154 += 4;
        if ( !v153 )
          goto LABEL_87;
      }
      v155 = v152 + 16LL * *v154 + 312;
    }
    else
    {
LABEL_87:
      v155 = sub_1C69E5C(v151, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v155)(v151, *(_QWORD *)(v155 + 8)) & 1) == 0 )
      break;
    v156 = *(_QWORD *)v151;
    v157 = *(unsigned __int16 *)(*(_QWORD *)v151 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v151 + 302LL) )
    {
      v158 = (int *)(*(_QWORD *)(v156 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v158 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        --v157;
        v158 += 4;
        if ( !v157 )
          goto LABEL_94;
      }
      v159 = v156 + 16LL * *v158 + 312;
    }
    else
    {
LABEL_94:
      v159 = sub_1C69E5C(v151, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0);
    }
    v161 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v159)(v151, *(_QWORD *)(v159 + 8));
    if ( !v161 )
      sub_1C93D2C(0, v160);
    if ( !*p_piecePersonalityDic )
      sub_1C93D2C(0, v160);
    v162 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
             *p_piecePersonalityDic,
             v161[7],
             (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__);
    if ( !v162 )
    {
      v164 = v142->fields._items;
      if ( !v164 )
        sub_1C93D2C(v162, v163);
      if ( !Master_object )
        sub_1C93D2C(v162, v163);
      v165 = WarBoardStageReinforcementsMaster__TryGetEntity(
               (WarBoardStageReinforcementsMaster_o *)Master_object,
               &v251,
               (int32_t)v164->bounds,
               v161[72],
               0);
      if ( v165 )
      {
        if ( !v251 )
          sub_1C93D2C(v165, v166);
        v167 = BasicHelper__IndexValue_int_(
                 v251->fields.reinforcementsIds,
                 v161[73],
                 -1,
                 (const MethodInfo_3192C94 *)Method_BasicHelper_IndexValue_int____79063232);
        if ( !v141 )
          sub_1C93D2C(v167, v168);
        v169 = WarBoardReinforcementsMaster__TryGetEntity((WarBoardReinforcementsMaster_o *)v141, &v250, v167, 0);
        if ( v169 )
        {
          if ( !v250 )
            sub_1C93D2C(v169, v170);
          WarBoardAIRoute__AddPiecePersonalityDic(this, v250->fields.aiId, v161[7], v171);
        }
      }
    }
  }
  v172 = *(_QWORD *)v151;
  v173 = *(unsigned __int16 *)(*(_QWORD *)v151 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v151 + 302LL) )
  {
    v174 = (int *)(*(_QWORD *)(v172 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v174 - 1) != System_IDisposable_TypeInfo )
    {
      --v173;
      v174 += 4;
      if ( !v173 )
        goto LABEL_111;
    }
    v175 = v172 + 16LL * *v174 + 312;
  }
  else
  {
LABEL_111:
    v175 = sub_1C69E5C(v151, System_IDisposable_TypeInfo, 0);
  }
  playedStageReinforcementsList = (WarBoardData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v175)(
                                                      v151,
                                                      *(_QWORD *)(v175 + 8));
  p_ratingBaseIds = (GrandQuestFolderBoardItem_o *)&npc->fields.ratingBaseIds;
  ratingBaseIds = npc->fields.ratingBaseIds;
  if ( !ratingBaseIds )
  {
    v178 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 6);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
      v178,
      (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49,
      0);
    p_ratingBaseIds->klass = (GrandQuestFolderBoardItem_c *)v178;
    sub_1C93A78(p_ratingBaseIds, (int32_t)v178, v179, v180, v181, v182, v183, v184);
    ratingBaseIds = (struct System_Int32_array *)p_ratingBaseIds->klass;
    if ( !p_ratingBaseIds->klass )
LABEL_154:
      sub_1C93D2C(playedStageReinforcementsList, v74);
  }
  v185 = ratingBaseIds->max_length;
  if ( (int)v185 >= 1 )
  {
    v186 = 0;
    while ( 2 )
    {
      if ( v186 >= (unsigned int)v185 )
        goto LABEL_155;
      playedStageReinforcementsList = (WarBoardData_o *)Instance;
      if ( Instance )
      {
        v187 = ratingBaseIds->m_Items[v186];
        playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                            Instance,
                                                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
        if ( playedStageReinforcementsList )
        {
          playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___GetEntity(
                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
                                                              v187,
                                                              (const MethodInfo_3463274 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
          if ( playedStageReinforcementsList )
          {
            v188 = playedStageReinforcementsList;
            switch ( HIDWORD(playedStageReinforcementsList->fields.stageEntity) )
            {
              case 0:
                v189 = sub_1C93D20(ShortestDistanceFromAllyServant_TypeInfo);
                ShortestDistanceFromAllyServant___ctor((ShortestDistanceFromAllyServant_o *)v189, 0);
                if ( !v189 )
                  goto LABEL_154;
                goto LABEL_133;
              case 1:
                v189 = sub_1C93D20(ShortestDistanceFromEnemyServant_TypeInfo);
                ShortestDistanceFromEnemyServant___ctor((ShortestDistanceFromEnemyServant_o *)v189, 0);
                if ( !v189 )
                  goto LABEL_154;
                goto LABEL_133;
              case 2:
                v189 = sub_1C93D20(ShortestDistanceFromAllyMaster_TypeInfo);
                ShortestDistanceFromAllyMaster___ctor((ShortestDistanceFromAllyMaster_o *)v189, 0);
                if ( !v189 )
                  goto LABEL_154;
                goto LABEL_133;
              case 3:
                v189 = sub_1C93D20(ShortestDistanceFromEnemyMaster_TypeInfo);
                ShortestDistanceFromEnemyMaster___ctor((ShortestDistanceFromEnemyMaster_o *)v189, 0);
                if ( !v189 )
                  goto LABEL_154;
                goto LABEL_133;
              case 4:
                v189 = sub_1C93D20(ShortestDistanceFromItem_TypeInfo);
                ShortestDistanceFromItem___ctor((ShortestDistanceFromItem_o *)v189, 0);
                if ( !v189 )
                  goto LABEL_154;
                goto LABEL_133;
              case 5:
                v189 = sub_1C93D20(ShortestDistanceFromPrioritySpace_TypeInfo);
                ShortestDistanceFromPrioritySpace___ctor((ShortestDistanceFromPrioritySpace_o *)v189, 0);
                if ( !v189 )
                  goto LABEL_154;
LABEL_133:
                *(_QWORD *)(v189 + 16) = v188;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v189 + 16),
                  (int32_t)v188,
                  v190,
                  v191,
                  v192,
                  v193,
                  v194,
                  v195);
                playedStageReinforcementsList = (WarBoardData_o *)*p_ratingBaseList;
                if ( !*p_ratingBaseList )
                  goto LABEL_154;
                v202 = (struct System_Int32_array *)playedStageReinforcementsList->fields.stageEntity;
                v203 = Method_System_Collections_Generic_List_WarBoardRatingBase__Add__;
                ++HIDWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( !v202 )
                  goto LABEL_154;
                v204 = SLODWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( (unsigned int)v204 >= LODWORD(v202->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)playedStageReinforcementsList,
                    (Il2CppObject *)v189,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
                }
                else
                {
                  v205 = &v202->obj.klass + v204;
                  LODWORD(playedStageReinforcementsList->fields.stageNpcMaster) = v204 + 1;
                  v205[4] = (Il2CppClass *)v189;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v205 + 4), v189, v196, v197, v198, v199, v200, v201);
                }
LABEL_138:
                v206 = (int32_t)v188->fields.stageEntity;
                dicRatingbaseCalcValue = this->fields.dicRatingbaseCalcValue;
                v208 = (Il2CppObject *)sub_1C93D20(WarBoardEvalValueSquare_CalcEval_TypeInfo);
                System_Object___ctor(v208, 0);
                if ( !dicRatingbaseCalcValue )
                  goto LABEL_154;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                  v206,
                  v208,
                  (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
                LODWORD(v185) = ratingBaseIds->max_length;
                if ( (__int64)++v186 >= (int)v185 )
                  goto LABEL_140;
                continue;
              default:
                goto LABEL_138;
            }
          }
        }
      }
      goto LABEL_154;
    }
  }
LABEL_140:
  p_tacticalIds = (GrandQuestFolderBoardItem_o *)&npc->fields.tacticalIds;
  tacticalIds = npc->fields.tacticalIds;
  if ( !tacticalIds )
  {
    v211 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 5);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
      v211,
      (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384,
      0);
    p_tacticalIds->klass = (GrandQuestFolderBoardItem_c *)v211;
    sub_1C93A78(p_tacticalIds, (int32_t)v211, v212, v213, v214, v215, v216, v217);
    tacticalIds = (struct System_Int32_array *)p_tacticalIds->klass;
    if ( !p_tacticalIds->klass )
      goto LABEL_154;
  }
  v218 = tacticalIds->max_length;
  if ( (int)v218 >= 1 )
  {
    v219 = 0;
    while ( v219 < (unsigned int)v218 )
    {
      playedStageReinforcementsList = (WarBoardData_o *)Instance;
      if ( !Instance )
        goto LABEL_154;
      v220 = tacticalIds->m_Items[v219];
      playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                          Instance,
                                                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !playedStageReinforcementsList )
        goto LABEL_154;
      playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
                                                          v220,
                                                          (const MethodInfo_3463274 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      v227 = (System_Collections_Generic_List_object__o *)*p_tacticalTrendList;
      if ( !*p_tacticalTrendList )
        goto LABEL_154;
      v228 = v227->fields._items;
      v229 = Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__;
      ++v227->fields._version;
      if ( !v228 )
        goto LABEL_154;
      v230 = v227->fields._size;
      v231 = playedStageReinforcementsList;
      if ( (unsigned int)v230 >= LODWORD(v228->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v227,
          (Il2CppObject *)playedStageReinforcementsList,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
      }
      else
      {
        v232 = &v228->obj.klass + v230;
        v227->fields._size = v230 + 1;
        v232[4] = (Il2CppClass *)v231;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v232 + 4), (int32_t)v231, v221, v222, v223, v224, v225, v226);
      }
      LODWORD(v218) = tacticalIds->max_length;
      if ( (__int64)++v219 >= (int)v218 )
        goto LABEL_153;
    }
    goto LABEL_155;
  }
LABEL_153:
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v235 = (WarBoardAiTargetCacher_o *)sub_1C93D20(WarBoardAiTargetCacher_TypeInfo);
  WarBoardAiTargetCacher___ctor(v235, forceId, groupId, v236);
  this->fields.aiTargetCacher = v235;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.aiTargetCacher,
    (int32_t)v235,
    v237,
    v238,
    v239,
    v240,
    v241,
    v242);
}


void WarBoardAIRoute__AddPiecePersonalityDic(
        WarBoardAIRoute_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  __int64 v7; // x25
  System_Int32_array *Entity; // x0
  Il2CppObject *p_obj; // x1
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x21
  System_Func_T__TResult__o *v11; // x22
  Il2CppObject *Master_object; // x25
  Il2CppObject *v13; // x24
  Il2CppObject *v14; // x22
  WarBoardAIRoute_PiecePersonality_o *v15; // x21
  const MethodInfo *v16; // x1
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v18; // x25
  unsigned __int64 v19; // x29
  System_Collections_Generic_List_object__o *actionTrandList; // x26
  WarBoardActionTrendEntity_o *v21; // x28
  WarBoardAIRoute_ActionTrendInfo_o *v22; // x27
  const MethodInfo *v23; // x2
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  il2cpp_array_size_t v34; // x8
  System_Int32_array *v35; // x23
  unsigned __int64 v36; // x19
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v44; // x9
  __int64 max_length_low; // x10
  il2cpp_array_size_t *v46; // x8
  __int64 v47; // [xsp+8h] [xbp-78h]
  WarBoardAIRoute_o *v48; // [xsp+10h] [xbp-70h]
  WarBoardAIEntity_o *v49; // [xsp+18h] [xbp-68h]

  if ( (byte_4D2E2AC & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardAIMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____);
    sub_1C93AD4(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
    sub_1C93AD4(&WarBoardAIRoute_PiecePersonality_TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__);
    sub_1C93AD4(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
    byte_4D2E2AC = 1;
  }
  v7 = sub_1C93D20(WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_37;
  *(_DWORD *)(v7 + 16) = pieceIndex;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  v11 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
  System_Func_KeyValuePair_int__object___bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    0);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__object___52105900(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v11,
         (const MethodInfo_31B12AC *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  v47 = v7;
  v48 = this;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v15 = (WarBoardAIRoute_PiecePersonality_o *)sub_1C93D20(WarBoardAIRoute_PiecePersonality_TypeInfo);
  WarBoardAIRoute_PiecePersonality___ctor(v15, v16);
  if ( !Master_object )
    goto LABEL_37;
  Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   aiId,
                                   (const MethodInfo_3463274 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_37;
  v49 = (WarBoardAIEntity_o *)Entity;
  Entity = WarBoardAIEntity__GetActionTrendIds((WarBoardAIEntity_o *)Entity, 0);
  if ( !Entity )
    goto LABEL_37;
  max_length = Entity->max_length;
  v18 = Entity;
  if ( (int)max_length >= 1 )
  {
    v19 = 0;
    while ( v19 < (unsigned int)max_length )
    {
      if ( !v13 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                                       v18->m_Items[v19],
                                       (const MethodInfo_3463274 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v15 )
          goto LABEL_37;
        actionTrandList = (System_Collections_Generic_List_object__o *)v15->fields.actionTrandList;
        v21 = (WarBoardActionTrendEntity_o *)Entity;
        v22 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C93D20(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v22, v21, v23);
        if ( !actionTrandList )
          goto LABEL_37;
        items = actionTrandList->fields._items;
        v31 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++actionTrandList->fields._version;
        if ( !items )
          goto LABEL_37;
        size = actionTrandList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            actionTrandList,
            (Il2CppObject *)v22,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          actionTrandList->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v22;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v22, v24, v25, v26, v27, v28, v29);
        }
      }
      LODWORD(max_length) = v18->max_length;
      if ( (__int64)++v19 >= (int)max_length )
        goto LABEL_22;
    }
LABEL_38:
    sub_1C93D34(Entity);
  }
LABEL_22:
  Entity = WarBoardAIEntity__GetRatingOffsetIds(v49, 0);
  if ( !Entity )
    goto LABEL_37;
  v34 = Entity->max_length;
  v35 = Entity;
  if ( (int)v34 >= 1 )
  {
    v36 = 0;
    while ( v36 < (unsigned int)v34 )
    {
      if ( !v14 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
                                       v35->m_Items[v36],
                                       (const MethodInfo_3463274 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v15 )
          goto LABEL_37;
        p_obj = &Entity->obj;
        Entity = (System_Int32_array *)v15->fields.ratingOffsetList;
        if ( !Entity )
          goto LABEL_37;
        bounds = Entity->bounds;
        v44 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
        ++HIDWORD(Entity->max_length);
        if ( !bounds )
          goto LABEL_37;
        max_length_low = SLODWORD(Entity->max_length);
        if ( (unsigned int)max_length_low >= bounds[1].lower_bound )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Entity,
            p_obj,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &bounds->length + max_length_low;
          LODWORD(Entity->max_length) = max_length_low + 1;
          v46[4] = (il2cpp_array_size_t)p_obj;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v46 + 4), (int32_t)p_obj, v37, v38, v39, v40, v41, v42);
        }
      }
      LODWORD(v34) = v35->max_length;
      if ( (__int64)++v36 >= (int)v34 )
        goto LABEL_35;
    }
    goto LABEL_38;
  }
LABEL_35:
  Entity = (System_Int32_array *)v48->fields.piecePersonalityDic;
  if ( !Entity )
LABEL_37:
    sub_1C93D2C(Entity, p_obj);
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)Entity,
    *(_DWORD *)(v47 + 16),
    (Il2CppObject *)v15,
    (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
}


void WarBoardAIRoute__BeforeCreateRouteData(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *Instance; // x0
  const MethodInfo *v3; // x1
  _QWORD *v4; // x19
  System_Collections_Generic_List_object__o *v5; // x22
  System_Collections_Generic_List_object__o *v6; // x21
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x24
  int v15; // w8
  unsigned int v16; // w25
  __int64 v17; // x23
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  WarBoardAIRoute_o *v22; // x10
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  System_Object_array *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Object_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct WarBoardSquareData_array *v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct WarBoardItemData_array *v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  struct WarBoardTreasureData_array *v59; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  struct WarBoardWallData_array *v66; // x1
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  System_Collections_Generic_List_object__o *v73; // x25
  int32_t forceId; // w19
  int32_t groupId; // w20
  WarBoardAIRoute_AIRouteMasterData_o *v76; // x21
  const MethodInfo *v77; // x3
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  System_Collections_Generic_Dictionary_int__uint__o *v84; // x19
  struct System_Collections_Generic_Dictionary_int__uint__o **p_placePieceData; // x24
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  const MethodInfo *v92; // x3
  struct WarBoardPieceData_array *allAllyPiece; // x19
  int max_length; // w8
  unsigned int v95; // w20
  WarBoardPieceData_o *v96; // x21
  const MethodInfo *v97; // x3
  int32_t forceId_k__BackingField; // w8
  int32_t v99; // w9
  int32_t v100; // w1
  const MethodInfo *v101; // x1
  const MethodInfo *v102; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v104; // x20
  __int64 v105; // x9
  int *p_offset; // x10
  __int64 v107; // x0
  __int64 v108; // x1
  __int64 v109; // x22
  __int64 v110; // x8
  __int64 v111; // x9
  int *v112; // x10
  __int64 v113; // x0
  __int64 v114; // x8
  __int64 v115; // x9
  int *v116; // x10
  __int64 v117; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v118; // x0
  const MethodInfo *v119; // x1
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x20
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  __int64 v122; // x1
  int v123; // w8
  unsigned int v124; // w9
  WarBoardActionTrendConditionEntity_o *v125; // x25
  struct System_Int32_array *conditionTypes; // x23
  il2cpp_array_size_t v127; // x8
  unsigned __int64 v128; // x28
  int32_t v129; // w26
  __int64 v130; // x29
  __int64 v131; // x0
  __int64 v132; // x1
  __int64 ConditionType; // x0
  __int64 v134; // x1
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexKeyItemData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_object__bool__o *v137; // x21
  __int64 v138; // x1
  Il2CppObject *v139; // x2
  System_Collections_Generic_Dictionary_int__object__o *v140; // x0
  int32_t v141; // w19
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x0
  const MethodInfo *v144; // x2
  TargetDetector_o *DetectorByTrendKey; // x0
  __int64 v146; // x1
  System_Func_T__TResult__o *v147; // x19
  WarBoardAiTargetCacher_o *v148; // x19
  int64_t v149; // x0
  const MethodInfo *v150; // x4
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicIndividualityPutSqareIndex; // x21
  int64_t v152; // x19
  int64_t v153; // x24
  __int64 v154; // x22
  __int64 v155; // x0
  __int64 v156; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x21
  WarBoardAIRoute_o *v158; // x0
  const MethodInfo *v159; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicSquarePutSqareIndex; // x19
  int64_t v161; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_object__bool__o *v163; // x21
  WarBoardActionTrendConditionEntity_array *v164; // x29
  int64_t v165; // x19
  __int64 v166; // x21
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o *v169; // x4
  int32_t v170; // w5
  int64_t v171; // x6
  System_String_o *v172; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v173; // x19
  int64_t v174; // x0
  __int64 v175; // x8
  __int64 v176; // x9
  int *v177; // x10
  __int64 v178; // x0
  WarBoardAiTargetCacher_o *v179; // x20
  WarBoardAIRoute___c_c *v180; // x8
  System_Func_object__bool__o *_9__45_0; // x19
  Il2CppObject *v182; // x21
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v184; // w2
  int32_t v185; // w3
  System_String_o *v186; // x4
  int32_t v187; // w5
  int64_t v188; // x6
  System_String_o *v189; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v190; // x0
  const MethodInfo *v191; // x2
  WarBoardAIRoute_AdvantagePieceData_o *v192; // x20
  const MethodInfo *v193; // x1
  struct WarBoardPieceData_array *v194; // x21
  int v195; // w8
  int32_t v196; // w24
  unsigned int v197; // w22
  Il2CppClass **v198; // x8
  Il2CppClass *v199; // x25
  int32_t ClassId; // w19
  float Magnification; // s10
  float v202; // s11
  float v203; // s8
  float v204; // s9
  const MethodInfo *v205; // x1
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+10h] [xbp-110h]
  struct WarBoardAIRoute_AIRouteMasterData_o **p_aiRouteMasterData; // [xsp+18h] [xbp-108h]
  struct WarBoardPieceData_array *v208; // [xsp+20h] [xbp-100h]
  unsigned int v209; // [xsp+34h] [xbp-ECh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-E8h]
  unsigned int v211; // [xsp+44h] [xbp-DCh]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+48h] [xbp-D8h]
  __int64 v214; // [xsp+68h] [xbp-B8h]
  System_Collections_Generic_List_IWarBoardObjectData__o *objectList; // [xsp+70h] [xbp-B0h]
  WarBoardAIRoute_DesignationItemData_o *v216; // [xsp+78h] [xbp-A8h]
  WarBoardAIRoute_PutSquareTarget_o *v217; // [xsp+80h] [xbp-A0h]
  bool notSquareTarget; // [xsp+88h] [xbp-98h] BYREF
  int32_t condType; // [xsp+8Ch] [xbp-94h] BYREF
  Il2CppObject *value; // [xsp+98h] [xbp-88h] BYREF

  if ( (byte_4D2E2AE & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIRoute_AIRouteMasterData_TypeInfo);
    sub_1C93AD4(&WarBoardAIRoute_AdvantagePieceData_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&WarBoardAIRoute_DesignationItemData_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__uint__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__uint__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
    sub_1C93AD4(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardItemData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
    sub_1C93AD4(&WarBoardAIRoute_PutSquareTarget_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&SvtClassAttri_TypeInfo);
    sub_1C93AD4(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__);
    sub_1C93AD4(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
    sub_1C93AD4(&WarBoardAIRoute___c_TypeInfo);
    sub_1C93AD4(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__);
    byte_4D2E2AE = 1;
  }
  value = 0;
  condType = 0;
  notSquareTarget = 0;
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_225;
  v4 = *(_QWORD **)&Instance[5].fields._freeCount;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v4 )
    goto LABEL_225;
  v14 = v4[6];
  if ( !v14 )
    goto LABEL_225;
  v15 = *(_DWORD *)(v14 + 24);
  if ( v15 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= v15 )
LABEL_226:
        sub_1C93D34(Instance);
      if ( !v7 )
        break;
      v17 = *(_QWORD *)(v14 + 8LL * (int)v16 + 32);
      items = v7->fields._items;
      v19 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v17,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 4), v17, v8, v9, v10, v11, v12, v13);
      }
      if ( !v17 )
        break;
      if ( !*(_BYTE *)(v17 + 60) )
      {
        v22 = this;
        if ( *(_DWORD *)(v17 + 20) == this->fields.forceId && *(_DWORD *)(v17 + 24) == this->fields.groupId )
        {
          if ( !v5 )
            break;
          v23 = v5->fields._items;
          v24 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v5->fields._version;
          if ( !v23 )
            break;
          v25 = v5->fields._size;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v17,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &v23->obj.klass + v25;
            v5->fields._size = v25 + 1;
            v26[4] = (Il2CppClass *)v17;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v26 + 4), v17, v8, v9, v10, v11, v12, v13);
          }
          v22 = this;
        }
        if ( *(_DWORD *)(v17 + 20) != v22->fields.forceId )
        {
          if ( !v6 )
            break;
          v27 = v6->fields._items;
          v28 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v6->fields._version;
          if ( !v27 )
            break;
          v29 = v6->fields._size;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v17,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &v27->obj.klass + v29;
            v6->fields._size = v29 + 1;
            v30[4] = (Il2CppClass *)v17;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 4), v17, v8, v9, v10, v11, v12, v13);
          }
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                (WarBoardPieceData_o *)v17,
                                                                                0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            this->fields.enemyMasterSquareIndex = *(_DWORD *)(v17 + 64);
        }
      }
      v15 = *(_DWORD *)(v14 + 24);
      if ( (int)++v16 >= v15 )
        goto LABEL_33;
    }
LABEL_225:
    sub_1C93D2C(Instance, v3);
  }
LABEL_33:
  if ( !v5 )
    goto LABEL_225;
  v31 = System_Collections_Generic_List_object___ToArray(
          v5,
          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allAllyPiece = (struct WarBoardPieceData_array *)v31;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.allAllyPiece, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  if ( !v6 )
    goto LABEL_225;
  v38 = System_Collections_Generic_List_object___ToArray(
          v6,
          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v38;
  p_allEnemyPiece = &this->fields.allEnemyPiece;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.allEnemyPiece, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (struct WarBoardSquareData_array *)v4[7];
  this->fields.allSquare = v45;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.allSquare, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  v52 = (struct WarBoardItemData_array *)v4[9];
  this->fields.allItemData = v52;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.allItemData, (int32_t)v52, v53, v54, v55, v56, v57, v58);
  v59 = (struct WarBoardTreasureData_array *)v4[10];
  this->fields.allTreasureData = v59;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.allTreasureData, (int32_t)v59, v60, v61, v62, v63, v64, v65);
  v66 = (struct WarBoardWallData_array *)v4[11];
  this->fields.allWallData = v66;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.allWallData, (int32_t)v66, v67, v68, v69, v70, v71, v72);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictionaryCreateRouteDataEvalValue;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_object__float___Clear(
    Instance,
    (const MethodInfo_3537E24 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_3567900 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_3567900 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_3567900 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_225;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v73 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v73,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v73 )
    goto LABEL_225;
  System_Collections_Generic_List_object___AddRange(
    v73,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allItemData,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v73,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allTreasureData,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v73,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWallData,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  objectList = (System_Collections_Generic_List_IWarBoardObjectData__o *)v73;
  System_Collections_Generic_List_object___AddRange(
    v73,
    (System_Collections_Generic_IEnumerable_T__o *)v7,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v76 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_1C93D20(WarBoardAIRoute_AIRouteMasterData_TypeInfo);
  WarBoardAIRoute_AIRouteMasterData___ctor(v76, forceId, groupId, v77);
  this->fields.aiRouteMasterData = v76;
  p_aiRouteMasterData = &this->fields.aiRouteMasterData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.aiRouteMasterData,
    (int32_t)v76,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  v84 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v84,
    (const MethodInfo_34E08AC *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  this->fields.placePieceData = v84;
  p_placePieceData = &this->fields.placePieceData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.placePieceData, (int32_t)v84, v86, v87, v88, v89, v90, v91);
  allAllyPiece = this->fields.allAllyPiece;
  if ( !allAllyPiece )
    goto LABEL_225;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v95 = 0;
    v208 = this->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v95 >= max_length )
        goto LABEL_226;
      v96 = allAllyPiece->m_Items[v95];
      if ( !v96 )
        goto LABEL_225;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_225;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
                                                                            v96->fields._nowSquareIndex_k__BackingField,
                                                                            (const MethodInfo_34E145C *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_201;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      pieceData = v96;
      if ( !*p_placePieceData )
        goto LABEL_225;
      System_Collections_Generic_Dictionary_int__uint___Add(
        (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
        v96->fields._nowSquareIndex_k__BackingField,
        v96->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_34E1270 *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
      forceId_k__BackingField = v96->fields._forceId_k__BackingField;
      v99 = this->fields.forceId;
      if ( forceId_k__BackingField != v99 )
        goto LABEL_57;
      if ( v96->fields._groupId_k__BackingField == this->fields.groupId )
        break;
LABEL_58:
      if ( v96->fields._groupId_k__BackingField == this->fields.groupId )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
        if ( !*p_aiRouteMasterData )
          goto LABEL_225;
        v100 = 2;
        goto LABEL_61;
      }
LABEL_62:
      v216 = (WarBoardAIRoute_DesignationItemData_o *)sub_1C93D20(WarBoardAIRoute_DesignationItemData_TypeInfo);
      WarBoardAIRoute_DesignationItemData___ctor(v216, v101);
      v217 = (WarBoardAIRoute_PutSquareTarget_o *)sub_1C93D20(WarBoardAIRoute_PutSquareTarget_TypeInfo);
      WarBoardAIRoute_PutSquareTarget___ctor(v217, v102);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.piecePersonalityDic;
      if ( !Instance )
        goto LABEL_225;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                                                            v96->fields._index_k__BackingField,
                                                                            &value,
                                                                            (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)value;
        v209 = v95;
        if ( !value )
          goto LABEL_225;
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
                                                                              (WarBoardAIRoute_PiecePersonality_o *)value,
                                                                              v3);
        if ( !Instance )
          goto LABEL_225;
        klass = Instance->klass;
        v104 = Instance;
        v105 = *(unsigned __int16 *)&Instance->klass->_2.rank;
        if ( *(_WORD *)&Instance->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
          {
            --v105;
            p_offset += 4;
            if ( !v105 )
              goto LABEL_70;
          }
          v107 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_70:
          v107 = sub_1C69E5C(
                   Instance,
                   System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                   0);
        }
        v109 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v107)(
                 v104,
                 *(_QWORD *)(v107 + 8));
        v214 = v109;
        if ( !v109 )
          sub_1C93D2C(0, v108);
        while ( 1 )
        {
LABEL_73:
          v110 = *(_QWORD *)v109;
          v111 = *(unsigned __int16 *)(*(_QWORD *)v109 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v109 + 302LL) )
          {
            v112 = (int *)(*(_QWORD *)(v110 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v112 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v111;
              v112 += 4;
              if ( !v111 )
                goto LABEL_77;
            }
            v113 = v110 + 16LL * *v112 + 312;
          }
          else
          {
LABEL_77:
            v113 = sub_1C69E5C(v109, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v113)(v109, *(_QWORD *)(v113 + 8)) & 1) == 0 )
            break;
          v114 = *(_QWORD *)v109;
          v115 = *(unsigned __int16 *)(*(_QWORD *)v109 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v109 + 302LL) )
          {
            v116 = (int *)(*(_QWORD *)(v114 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__c **)v116 - 1) != System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
            {
              --v115;
              v116 += 4;
              if ( !v115 )
                goto LABEL_84;
            }
            v117 = v114 + 16LL * *v116 + 312;
          }
          else
          {
LABEL_84:
            v117 = sub_1C69E5C(
                     v109,
                     System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                     0);
          }
          v118 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v117)(
                                                        v109,
                                                        *(_QWORD *)(v117 + 8));
          if ( !v118 )
            sub_1C93D2C(0, v119);
          Entity_k__BackingField = v118->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v118, v119);
          if ( !ConditionEntityArray )
            sub_1C93D2C(0, v122);
          v123 = ConditionEntityArray->max_length;
          if ( v123 >= 1 )
          {
            v124 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v124 >= v123 )
                sub_1C93D34(ConditionEntityArray);
              v125 = ConditionEntityArray->m_Items[v124];
              if ( !v125 )
                sub_1C93D2C(ConditionEntityArray, v122);
              conditionTypes = v125->fields.conditionTypes;
              if ( !conditionTypes )
                sub_1C93D2C(ConditionEntityArray, v122);
              v127 = conditionTypes->max_length;
              v211 = v124;
              if ( (int)v127 >= 1 )
                break;
LABEL_137:
              ConditionEntityArray = condEntityArray;
              v123 = condEntityArray->max_length;
              v124 = v211 + 1;
              if ( (int)(v211 + 1) >= v123 )
                goto LABEL_73;
            }
            v128 = 0;
            while ( 2 )
            {
              if ( v128 >= (unsigned int)v127 )
                sub_1C93D34(ConditionEntityArray);
              v129 = conditionTypes->m_Items[v128];
              v130 = sub_1C93D20(WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v130, 0);
              if ( !v130 )
                sub_1C93D2C(v131, v132);
              *(_DWORD *)(v130 + 16) = -1;
              ConditionType = WarBoardActionTrendConditionEntity__GetConditionType(v125, v129, 0);
              if ( (int)ConditionType <= 39 )
              {
                if ( (_DWORD)ConditionType == 23 || (_DWORD)ConditionType == 24 )
                  goto LABEL_104;
LABEL_136:
                v134 = *(unsigned int *)(v130 + 16);
              }
              else
              {
                if ( (_DWORD)ConditionType != 40 && (_DWORD)ConditionType != 41 && (_DWORD)ConditionType != 42 )
                  goto LABEL_136;
LABEL_104:
                v134 = (unsigned int)v125->fields.value;
                *(_DWORD *)(v130 + 16) = v134;
              }
              if ( (_DWORD)v134 != -1 )
              {
                if ( !v216 )
                  sub_1C93D2C(ConditionType, v134);
                dicSquareIndexKeyItemData = (System_Collections_Generic_Dictionary_int__object__o *)v216->fields.dicSquareIndexKeyItemData;
                if ( !dicSquareIndexKeyItemData )
                  sub_1C93D2C(0, v134);
                if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                        dicSquareIndexKeyItemData,
                        v134,
                        (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__) )
                {
                  allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allItemData;
                  v137 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardItemData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v137,
                    (Il2CppObject *)v130,
                    Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                    0);
                  v139 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
                           allItemData,
                           (System_Func_TSource__bool__o *)v137,
                           (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                  if ( v139 )
                  {
                    v140 = (System_Collections_Generic_Dictionary_int__object__o *)v216->fields.dicSquareIndexKeyItemData;
                    if ( !v140 )
                      sub_1C93D2C(0, v138);
                    System_Collections_Generic_Dictionary_int__object___Add(
                      v140,
                      *(_DWORD *)(v130 + 16),
                      v139,
                      (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                  }
                }
              }
              *(_DWORD *)(v130 + 16) = -1;
              ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)WarBoardActionTrendConditionEntity__GetConditionType(
                                                                                   v125,
                                                                                   v129,
                                                                                   0);
              if ( (_DWORD)ConditionEntityArray == 74 || (_DWORD)ConditionEntityArray == 75 )
              {
                v141 = v125->fields.value;
                *(_DWORD *)(v130 + 16) = v141;
              }
              else
              {
                if ( (unsigned int)((_DWORD)ConditionEntityArray - 127) <= 1 )
                {
                  if ( !Entity_k__BackingField )
                    sub_1C93D2C(ConditionEntityArray, v122);
                  aiTargetCacher = this->fields.aiTargetCacher;
                  TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  if ( !aiTargetCacher )
                    sub_1C93D2C(TrendKey, TrendKey);
                  DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(aiTargetCacher, TrendKey, v144);
                  if ( !DetectorByTrendKey )
                  {
                    v147 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
                    System_Func_Int32Enum__bool____ctor(
                      v147,
                      0,
                      Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                      0);
                    WarBoardActionTrendConditionMaster__HasMatchCondition(
                      condEntityArray,
                      (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v147,
                      &condType,
                      0);
                    v148 = this->fields.aiTargetCacher;
                    v149 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                    if ( !v148 )
                      sub_1C93D2C(v149, v149);
                    WarBoardAiTargetCacher__Register(v148, v149, v125, condType, v150);
                  }
                  if ( !v217 )
                    sub_1C93D2C(DetectorByTrendKey, v146);
                  dicIndividualityPutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v217->fields.dicIndividualityPutSqareIndex;
                  v152 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  v153 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  v154 = sub_1C93D20(WarBoardAIRoute_TargetData_TypeInfo);
                  *(_DWORD *)(v154 + 64) = 2;
                  System_Object___ctor((Il2CppObject *)v154, 0);
                  *(_QWORD *)(v154 + 104) = v153;
                  *(_DWORD *)(v154 + 112) = v129;
                  if ( !dicIndividualityPutSqareIndex )
                    sub_1C93D2C(v155, v156);
                  System_Collections_Generic_Dictionary_long__object___set_Item(
                    dicIndividualityPutSqareIndex,
                    v152,
                    (Il2CppObject *)v154,
                    (const MethodInfo_3507B1C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                }
                v141 = *(_DWORD *)(v130 + 16);
                v109 = v214;
              }
              if ( v141 != -1 )
              {
                if ( !v217 )
                  sub_1C93D2C(ConditionEntityArray, v122);
                if ( !Entity_k__BackingField )
                  sub_1C93D2C(ConditionEntityArray, v122);
                dicObjectPutSquareIndex = v217->fields.dicObjectPutSquareIndex;
                v158 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                WarBoardAIRoute__RegisterTargetObjectToDic(
                  v158,
                  dicObjectPutSquareIndex,
                  objectList,
                  v141,
                  (int64_t)v158,
                  v129,
                  &notSquareTarget,
                  v159);
                if ( !notSquareTarget )
                {
                  dicSquarePutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v217->fields.dicSquarePutSqareIndex;
                  v161 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  if ( !dicSquarePutSqareIndex )
                    sub_1C93D2C(v161, v161);
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__object___ContainsKey(
                                                                                       dicSquarePutSqareIndex,
                                                                                       v161,
                                                                                       (const MethodInfo_3507D24 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allSquare;
                    v163 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardSquareData__bool__TypeInfo);
                    System_Func_object__bool____ctor(
                      v163,
                      (Il2CppObject *)v130,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                      0);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                                                                         allSquare,
                                                                                         (System_Func_TSource__bool__o *)v163,
                                                                                         (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                    v164 = ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v165 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                      v166 = sub_1C93D20(WarBoardAIRoute_TargetData_TypeInfo);
                      *(_DWORD *)(v166 + 64) = 2;
                      System_Object___ctor((Il2CppObject *)v166, 0);
                      *(_QWORD *)(v166 + 48) = v164;
                      *(_QWORD *)(v166 + 104) = v165;
                      *(_DWORD *)(v166 + 112) = v129;
                      sub_1C93A78(
                        (GrandQuestFolderBoardItem_o *)(v166 + 48),
                        (int32_t)v164,
                        v167,
                        v168,
                        v169,
                        v170,
                        v171,
                        v172);
                      v173 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v217->fields.dicSquarePutSqareIndex;
                      v174 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                      if ( !v173 )
                        sub_1C93D2C(v174, v174);
                      System_Collections_Generic_Dictionary_long__object___Add(
                        v173,
                        v174,
                        (Il2CppObject *)v166,
                        (const MethodInfo_3507B30 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                    }
                  }
                }
              }
              LODWORD(v127) = conditionTypes->max_length;
              if ( (__int64)++v128 >= (int)v127 )
                goto LABEL_137;
              continue;
            }
          }
        }
        if ( v109 )
        {
          v175 = *(_QWORD *)v109;
          v176 = *(unsigned __int16 *)(*(_QWORD *)v109 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v109 + 302LL) )
          {
            v177 = (int *)(*(_QWORD *)(v175 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v177 - 1) != System_IDisposable_TypeInfo )
            {
              --v176;
              v177 += 4;
              if ( !v176 )
                goto LABEL_144;
            }
            v178 = v175 + 16LL * *v177 + 312;
          }
          else
          {
LABEL_144:
            v178 = sub_1C69E5C(v109, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v178)(v109, *(_QWORD *)(v178 + 8));
        }
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.aiTargetCacher;
        if ( !Instance )
          goto LABEL_225;
        WarBoardAiTargetCacher__ClearTargetObject((WarBoardAiTargetCacher_o *)Instance, v3);
        v179 = this->fields.aiTargetCacher;
        v180 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v180 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__45_0 = (System_Func_object__bool__o *)v180->static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !v180->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v180);
            v180 = WarBoardAIRoute___c_TypeInfo;
          }
          v182 = (Il2CppObject *)v180->static_fields->__9;
          _9__45_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__45_0,
            v182,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            0);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__45_0,
            (int32_t)_9__45_0,
            v184,
            v185,
            v186,
            v187,
            v188,
            v189);
        }
        v190 = System_Linq_Enumerable__Where_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_object_(
                                                                              v190,
                                                                              (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v179 )
          goto LABEL_225;
        WarBoardAiTargetCacher__AggregateTargetObject(v179, (IWarBoardObjectData_array *)Instance, v191);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
        if ( !Instance )
          goto LABEL_225;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v216,
          (const MethodInfo_3567778 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
        allAllyPiece = v208;
        p_placePieceData = &this->fields.placePieceData;
        v95 = v209;
        if ( !Instance )
          goto LABEL_225;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v217,
          (const MethodInfo_3567778 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isServant(
                                                                              pieceData,
                                                                              0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v192 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_1C93D20(WarBoardAIRoute_AdvantagePieceData_TypeInfo);
          WarBoardAIRoute_AdvantagePieceData___ctor(v192, v193);
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pieceData->fields._battleServant_k__BackingField;
          if ( !Instance )
            goto LABEL_225;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleServantData__getClassId(
                                                                                (BattleServantData_o *)Instance,
                                                                                0,
                                                                                0);
          v194 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_225;
          v195 = v194->max_length;
          if ( v195 >= 1 )
          {
            v196 = (int)Instance;
            v197 = 0;
            while ( 2 )
            {
              if ( v197 >= v195 )
                goto LABEL_226;
              v198 = &v194->obj.klass + (int)v197;
              v199 = v198[4];
              if ( !v199 )
                goto LABEL_225;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                    (WarBoardPieceData_o *)v198[4],
                                                                                    0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_198;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v199->_1.fields;
              if ( !Instance )
                goto LABEL_225;
              ClassId = BattleServantData__getClassId((BattleServantData_o *)Instance, 0, 0);
              if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
              Magnification = SvtClassAttri__getMagnification(v196, ClassId, 0);
              v202 = SvtClassAttri__getMagnification(ClassId, v196, 0);
              v203 = SvtClassAttri__getMagnification(v196, ClassId, 0);
              v204 = SvtClassAttri__getMagnification(ClassId, v196, 0);
              if ( Magnification <= 1.0 )
              {
                if ( v202 >= 1.0 )
                  goto LABEL_177;
                if ( !v192 )
                  goto LABEL_225;
              }
              else
              {
                if ( !v192 )
                  goto LABEL_225;
                Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v192->fields.dicAttackAdvantageServant;
                if ( !Instance )
                  goto LABEL_225;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                  (int32_t)v199->_1.element_class,
                  (Il2CppObject *)v199,
                  (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                v192->fields.flagNow |= 0x4000uLL;
                if ( v202 >= 1.0 )
                {
LABEL_177:
                  if ( v203 >= 1.0 )
                  {
                    if ( v204 > 1.0 )
                    {
                      if ( !v192 )
                        goto LABEL_225;
                      goto LABEL_184;
                    }
                  }
                  else
                  {
                    if ( !v192 )
                      goto LABEL_225;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v192->fields.dicAttackDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_225;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v199->_1.element_class,
                      (Il2CppObject *)v199,
                      (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v192->fields.flagNow |= 0x8000uLL;
                    if ( v204 <= 1.0 )
                      goto LABEL_186;
LABEL_184:
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v192->fields.dicDefenseDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_225;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v199->_1.element_class,
                      (Il2CppObject *)v199,
                      (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v192->fields.flagNow |= 0x20000uLL;
                  }
LABEL_186:
                  if ( Magnification <= 1.0 || v202 >= 1.0 )
                  {
                    if ( v203 < 1.0 && v204 > 1.0 )
                    {
                      if ( !v192 )
                        goto LABEL_225;
LABEL_196:
                      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v192->fields.dicClassDisAdvantageServant;
                      if ( !Instance )
                        goto LABEL_225;
                      System_Collections_Generic_Dictionary_int__object___Add(
                        (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                        (int32_t)v199->_1.element_class,
                        (Il2CppObject *)v199,
                        (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                      v192->fields.flagNow |= 0x2000uLL;
                    }
                  }
                  else
                  {
                    if ( !v192 )
                      goto LABEL_225;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v192->fields.dicClassAdvantageServant;
                    if ( !Instance )
                      goto LABEL_225;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v199->_1.element_class,
                      (Il2CppObject *)v199,
                      (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v192->fields.flagNow |= 0x1000uLL;
                    if ( v203 < 1.0 && v204 > 1.0 )
                      goto LABEL_196;
                  }
LABEL_198:
                  v195 = v194->max_length;
                  if ( (int)++v197 >= v195 )
                    goto LABEL_199;
                  continue;
                }
              }
              break;
            }
            Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v192->fields.dicDefenseAdvantageServant;
            if ( !Instance )
              goto LABEL_225;
            System_Collections_Generic_Dictionary_int__object___Add(
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              (int32_t)v199->_1.element_class,
              (Il2CppObject *)v199,
              (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
            v192->fields.flagNow |= 0x10000uLL;
            goto LABEL_177;
          }
LABEL_199:
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
          if ( !Instance )
            goto LABEL_225;
          System_Collections_Generic_Dictionary_uint__object___Add(
            Instance,
            pieceData->fields._uniqueIndex_k__BackingField,
            (Il2CppObject *)v192,
            (const MethodInfo_3567778 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          allAllyPiece = v208;
          p_placePieceData = &this->fields.placePieceData;
          v95 = v209;
        }
      }
LABEL_201:
      max_length = allAllyPiece->max_length;
      if ( (int)++v95 >= max_length )
        goto LABEL_223;
    }
    if ( WarBoardPieceData__get_isMaster(v96, 0) )
    {
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_225;
      v100 = 0;
LABEL_61:
      WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        (WarBoardAIRoute_AIRouteMasterData_o *)Instance,
        v100,
        v96,
        v97);
      goto LABEL_62;
    }
    forceId_k__BackingField = v96->fields._forceId_k__BackingField;
    v99 = this->fields.forceId;
LABEL_57:
    if ( forceId_k__BackingField != v99 )
      goto LABEL_62;
    goto LABEL_58;
  }
LABEL_223:
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
  if ( !*p_aiRouteMasterData )
    goto LABEL_225;
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData((WarBoardAIRoute_AIRouteMasterData_o *)Instance, 1, 0, v92);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(this, v205);
}


int32_t WarBoardAIRoute__CalcurateDistanceType(int32_t newDistance, int32_t oldDistance, const MethodInfo *method)
{
  if ( newDistance == oldDistance )
    return 2;
  if ( newDistance < oldDistance )
    return 1;
  return 3;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardAIRoute__CanAcquireItem(
        WarBoardAIRoute_o *this,
        int32_t targetSquare,
        System_Collections_Generic_List_int__o *alreadyGetItemList,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1
  WarBoardItemData_o *Item; // x0

  if ( (byte_4D2E2B8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    this = (WarBoardAIRoute_o *)sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E2B8 = 1;
  }
  if ( !alreadyGetItemList )
    sub_1C93D2C(this, *(_QWORD *)&targetSquare);
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 0;
  }
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  Item = WarBoardAIManager__GetItem(targetSquare, v6);
  return Item && !WarBoardItemData__get_Acquired(Item, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardAIRoute__ClassAdvantageDistance(
        WarBoardAIRoute_o *this,
        WarBoardAIRoute_RouteData_o **routeData,
        WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *v5; // x22
  int64_t v9; // x8

  v5 = *routeData;
  if ( !*routeData )
    goto LABEL_16;
  if ( !advantagePieceData )
    goto LABEL_16;
  v9 = advantagePieceData->fields.flagNow | v5->fields.flagNow;
  v5->fields.flagNow = v9;
  if ( (v9 & 0x1000) != 0 )
  {
    this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                  advantagePieceData->fields.dicClassAdvantageServant,
                                  advantagePieceData->fields.baseCARange,
                                  actionSquareIndex,
                                  *(const MethodInfo **)&actionSquareIndex);
    v5->fields.isMoveByServantAndClassAdvantageServantRange = (int)this;
    v5 = *routeData;
    if ( !*routeData )
      goto LABEL_16;
  }
  if ( (v5->fields.flagNow & 0x2000) != 0 )
  {
    this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                  advantagePieceData->fields.dicClassDisAdvantageServant,
                                  advantagePieceData->fields.baseCDARange,
                                  actionSquareIndex,
                                  *(const MethodInfo **)&actionSquareIndex);
    v5->fields.isMoveByServantAndClassDisAdvantageServantRange = (int)this;
    v5 = *routeData;
    if ( !*routeData )
      goto LABEL_16;
  }
  if ( (v5->fields.flagNow & 0x4000) != 0 )
  {
    this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                  advantagePieceData->fields.dicAttackAdvantageServant,
                                  advantagePieceData->fields.baseAARange,
                                  actionSquareIndex,
                                  *(const MethodInfo **)&actionSquareIndex);
    v5->fields.isMoveByServantAndAttackAdvantageServantRange = (int)this;
    v5 = *routeData;
    if ( !*routeData )
      goto LABEL_16;
  }
  if ( (v5->fields.flagNow & 0x8000) != 0
    && (this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                      advantagePieceData->fields.dicAttackDisAdvantageServant,
                                      advantagePieceData->fields.baseADARange,
                                      actionSquareIndex,
                                      *(const MethodInfo **)&actionSquareIndex),
        v5->fields.isMoveByServantAndAttackDisAdvantageServantRange = (int)this,
        (v5 = *routeData) == 0)
    || (v5->fields.flagNow & 0x10000) != 0
    && (this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                      advantagePieceData->fields.dicDefenseAdvantageServant,
                                      advantagePieceData->fields.baseDARange,
                                      actionSquareIndex,
                                      *(const MethodInfo **)&actionSquareIndex),
        v5->fields.isMoveByServantAndDefenseAdvantageServantRange = (int)this,
        (v5 = *routeData) == 0) )
  {
LABEL_16:
    sub_1C93D2C(this, routeData);
  }
  if ( (v5->fields.flagNow & 0x20000) != 0 )
    v5->fields.isMoveByServantAndDefenseDisAdvantageServantRange = WarBoardAIRoute__CompareBaseRangeToActionRange(
                                                                     advantagePieceData->fields.dicDefenseDisAdvantageServant,
                                                                     advantagePieceData->fields.baseDDARange,
                                                                     actionSquareIndex,
                                                                     *(const MethodInfo **)&actionSquareIndex);
}


void WarBoardAIRoute__Clear(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *v2; // x19
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4D2E2AA & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__);
    byte_4D2E2AA = 1;
  }
  allRouteList = v2->fields.allRouteList;
  if ( !allRouteList )
    sub_1C93D2C(this, method);
  size = allRouteList->fields._size;
  v5 = allRouteList->fields._version + 1;
  allRouteList->fields._size = 0;
  allRouteList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)allRouteList->fields._items, 0, size, 0);
}


int32_t WarBoardAIRoute__CompareBaseRange(int32_t baseRange, int32_t actionRange, const MethodInfo *method)
{
  if ( actionRange < baseRange )
    return 1;
  if ( actionRange == baseRange )
    return 2;
  return 3;
}


// local variable allocation has failed, the output may be wrong!
int32_t WarBoardAIRoute__CompareBaseRangeToActionRange(
        System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *dicPieceList,
        int32_t baseRange,
        int32_t actionIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *v6; // x19
  int32_t v7; // w19
  const MethodInfo *v8; // x5
  int32_t key; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  int32_t v11; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+0h] [xbp-80h] BYREF

  v6 = dicPieceList;
  if ( (byte_4D2E2B7 & 1) == 0 )
  {
    sub_1C93AD4(&AStarSearch_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    dicPieceList = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    byte_4D2E2B7 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !v6 )
    sub_1C93D2C(dicPieceList, *(_QWORD *)&baseRange);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_34BD1BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v7 = 3;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v13,
            (const MethodInfo_361DC10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v13.fields._current.fields.key;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(0, actionIndex, key, 0, 0, v8);
    v11 = System_Linq_Enumerable__Count_int_(
            v10,
            (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
    if ( v11 < baseRange )
    {
      v7 = 1;
      break;
    }
    if ( v11 == baseRange )
      v7 = 2;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v13,
    (const MethodInfo_361DD34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  return v7;
}


void WarBoardAIRoute__CreateOutOfWarningAreaToDistance(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v2; // x21
  struct System_Collections_Generic_Dictionary_int__int__o **p_dicOutOfWarningAreaRange; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_int__int__o *IsFlag; // x0
  __int64 v11; // x1
  struct WarBoardSquareData_array *allSquare; // x25
  int max_length; // w8
  int v14; // w26
  Il2CppClass **v15; // x8
  Il2CppClass *v16; // x21
  struct WarBoardSquareData_array *v17; // x29
  int v18; // w8
  unsigned int v19; // w20
  int v20; // w22
  Il2CppClass **v21; // x8
  Il2CppClass *v22; // x23
  const MethodInfo *v23; // x5
  int32_t name; // w24
  int32_t v25; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  int32_t v28; // w1
  const MethodInfo_34B42CC *v29; // x3
  int32_t v30; // w2
  struct System_Collections_Generic_Dictionary_int__int__o **v31; // [xsp+0h] [xbp-70h]

  if ( (byte_4D2E2C3 & 1) == 0 )
  {
    sub_1C93AD4(&AStarSearch_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    byte_4D2E2C3 = 1;
  }
  v2 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v2,
    (const MethodInfo_34B3908 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v2;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dicOutOfWarningAreaRange,
    (int32_t)v2,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  allSquare = this->fields.allSquare;
  if ( !allSquare )
LABEL_33:
    sub_1C93D2C(IsFlag, v11);
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
                                                                      0);
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
                                                                            0);
            if ( ((unsigned __int8)IsFlag & 1) != 0 )
              goto LABEL_37;
            name = (int32_t)v16->_1.name;
            v25 = (int32_t)v22->_1.name;
            if ( !AStarSearch_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
            v26 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(0, name, v25, 0, 0, v23);
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__Count_int_(
                                                                            v26,
                                                                            (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
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
          sub_1C93D34(IsFlag);
        }
        v20 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        IsFlag = *v31;
        if ( !*v31 )
          goto LABEL_33;
        v28 = (int32_t)v16->_1.name;
        v29 = (const MethodInfo_34B42CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v30 = v20;
      }
      else
      {
        IsFlag = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v28 = (int32_t)v16->_1.name;
        v29 = (const MethodInfo_34B42CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v30 = 0;
      }
      System_Collections_Generic_Dictionary_int__int___Add(IsFlag, v28, v30, v29);
      max_length = allSquare->max_length;
      ++v14;
    }
    while ( v14 < max_length );
  }
}


System_Collections_IEnumerator_o *WarBoardAIRoute__CreateRouteData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t searchCount,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        const MethodInfo *method)
{
  __int64 v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4D2E2B0 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
    byte_4D2E2B0 = 1;
  }
  v9 = sub_1C93D20(WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 56), (int32_t)piecePlaceData, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v9 + 40) = searchCount;
  *(_QWORD *)(v9 + 48) = routeDataList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)routeDataList, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v9;
}


WarBoardPieceData_o *WarBoardAIRoute__GetActionPiece(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        int32_t actionSquareIndex,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  uint32_t v8; // w19
  uint32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2E2C8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    this = (WarBoardAIRoute_o *)sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E2C8 = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_1C93D2C(this, basePiece);
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_34E2908 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
  {
    v8 = value;
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    return WarBoardAIManager__GetPieceUnique(v8, v7);
  }
  else
  {
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    return WarBoardAIManager__GetEnemyPieceSquareIndex(actionSquareIndex, v7);
  }
}


WarBoardAIRoute_AdvantagePieceData_o *WarBoardAIRoute__GetAdvantagePieceData(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v6; // x21
  const MethodInfo *v7; // x3
  int64_t flagNow; // x8
  WarBoardAIRoute_AdvantagePieceData_o *v9; // x20
  int64_t v11; // x8

  v6 = this;
  if ( (byte_4D2E2C6 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__);
    byte_4D2E2C6 = 1;
  }
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v6->fields.dicUniqueKeyAdvantagePieceData) == 0
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_uint__object___get_Item(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                      basePiece->fields._uniqueIndex_k__BackingField,
                                      (const MethodInfo_35676D8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0 )
  {
    sub_1C93D2C(this, basePiece);
  }
  flagNow = *(_QWORD *)&this->fields.TEMP_SEARCH_DEPTH;
  v9 = (WarBoardAIRoute_AdvantagePieceData_o *)this;
  if ( (flagNow & 0x1000) != 0 )
  {
    this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetRangeShortMost(
                                  this,
                                  (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)this->fields.allAllyPiece,
                                  baseSquareIndex,
                                  v7);
    flagNow = v9->fields.flagNow;
    v9->fields.baseCARange = (int)this;
    if ( (flagNow & 0x2000) == 0 )
    {
LABEL_8:
      if ( (flagNow & 0x4000) == 0 )
        goto LABEL_9;
      goto LABEL_16;
    }
  }
  else if ( (flagNow & 0x2000) == 0 )
  {
    goto LABEL_8;
  }
  this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetRangeShortMost(
                                this,
                                v9->fields.dicClassDisAdvantageServant,
                                baseSquareIndex,
                                v7);
  flagNow = v9->fields.flagNow;
  v9->fields.baseCDARange = (int)this;
  if ( (flagNow & 0x4000) == 0 )
  {
LABEL_9:
    if ( (flagNow & 0x8000) == 0 )
      goto LABEL_10;
    goto LABEL_17;
  }
LABEL_16:
  this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetRangeShortMost(
                                this,
                                v9->fields.dicAttackAdvantageServant,
                                baseSquareIndex,
                                v7);
  flagNow = v9->fields.flagNow;
  v9->fields.baseAARange = (int)this;
  if ( (flagNow & 0x8000) == 0 )
  {
LABEL_10:
    if ( (flagNow & 0x10000) == 0 )
      goto LABEL_11;
LABEL_18:
    this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetRangeShortMost(
                                  this,
                                  v9->fields.dicDefenseAdvantageServant,
                                  baseSquareIndex,
                                  v7);
    v11 = v9->fields.flagNow;
    v9->fields.baseDARange = (int)this;
    if ( (v11 & 0x20000) == 0 )
      return v9;
    goto LABEL_12;
  }
LABEL_17:
  this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetRangeShortMost(
                                this,
                                v9->fields.dicAttackDisAdvantageServant,
                                baseSquareIndex,
                                v7);
  flagNow = v9->fields.flagNow;
  v9->fields.baseADARange = (int)this;
  if ( (flagNow & 0x10000) != 0 )
    goto LABEL_18;
LABEL_11:
  if ( (flagNow & 0x20000) != 0 )
LABEL_12:
    v9->fields.baseDDARange = WarBoardAIRoute__GetRangeShortMost(
                                this,
                                v9->fields.dicDefenseDisAdvantageServant,
                                baseSquareIndex,
                                v7);
  return v9;
}


System_Collections_Generic_Dictionary_uint__int__o *WarBoardAIRoute__GetAllEnemyToDistance(
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
  const MethodInfo *v13; // x5
  struct WarBoardPieceData_array *allEnemyPiece; // x25
  int max_length; // w8
  unsigned int v16; // w26
  WarBoardPieceData_o *v17; // x23
  int32_t nowSquareIndex_k__BackingField; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  int32_t v20; // w24

  if ( (byte_4D2E2C2 & 1) == 0 )
  {
    sub_1C93AD4(&AStarSearch_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    byte_4D2E2C2 = 1;
  }
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v10 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v10,
    (const MethodInfo_355DBF4 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  allEnemyPiece = this->fields.allEnemyPiece;
  if ( !allEnemyPiece )
    goto LABEL_20;
  max_length = allEnemyPiece->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1C93D34(isMaster);
      v17 = allEnemyPiece->m_Items[v16];
      if ( !v17 )
        break;
      nowSquareIndex_k__BackingField = v17->fields._nowSquareIndex_k__BackingField;
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v19 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0,
                                                                   baseSquareIndex,
                                                                   nowSquareIndex_k__BackingField,
                                                                   0,
                                                                   0,
                                                                   v13);
      isMaster = System_Linq_Enumerable__Count_int_(
                   v19,
                   (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v10 )
        break;
      v20 = isMaster;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v10,
        v17->fields._uniqueIndex_k__BackingField,
        isMaster,
        (const MethodInfo_355E5B8 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
      if ( *servantAndEnemyRange == -1 || v20 < *servantAndEnemyRange )
        *servantAndEnemyRange = v20;
      isMaster = WarBoardPieceData__get_isMaster(v17, 0);
      if ( (isMaster & 1) != 0 && (*servantAndEnemyMasterRange == -1 || v20 < *servantAndEnemyMasterRange) )
        *servantAndEnemyMasterRange = v20;
      max_length = allEnemyPiece->max_length;
      if ( (int)++v16 >= max_length )
        return v10;
    }
LABEL_20:
    sub_1C93D2C(isMaster, v12);
  }
  return v10;
}


System_Int32_array *WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t masterSquareIndex,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w20
  System_Collections_Generic_IEnumerable_TSource__o *Keys; // x19
  System_Func_int__bool__o *v13; // x20

  if ( (byte_4D2E2B3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__);
    sub_1C93AD4(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
    byte_4D2E2B3 = 1;
  }
  v7 = sub_1C93D20(WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = masterSquareIndex, (aiRouteMasterData = this->fields.aiRouteMasterData) == 0)
    || !piecePlaceData )
  {
    sub_1C93D2C(v8, v9);
  }
  masterType = aiRouteMasterData->fields.masterType;
  Keys = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                                piecePlaceData,
                                                                (const MethodInfo_34E0F34 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  if ( masterType != 1 )
  {
    v13 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      0);
    Keys = System_Linq_Enumerable__Where_int_(
             Keys,
             (System_Func_TSource__bool__o *)v13,
             (const MethodInfo_31EAD14 *)Method_System_Linq_Enumerable_Where_int___);
  }
  return System_Linq_Enumerable__ToArray_int_(
           Keys,
           (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
}


DefenseAreaData_o *WarBoardAIRoute__GetDefenseAreaData(
        WarBoardAIRoute_o *this,
        int32_t masterSquareIndex,
        System_Int32_array *allyPieces,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  __int64 v8; // x25
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t defenseArea; // w20
  DefenseAreaData_o *v19; // x19
  System_Collections_Generic_Dictionary_int__object__o *v20; // x20
  WarBoardAIManager_c *v21; // x0
  char v22; // w10
  bool v23; // w8
  bool IsDetour; // w25
  const MethodInfo *v25; // x5
  int32_t key; // w26
  Il2CppObject *value; // x27
  System_Int32_array *v28; // x28
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w25
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  BalanceConfig_c *v36; // x0
  const MethodInfo *v37; // x5
  System_Func_int__bool__o *klass; // x28
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  __int64 v45; // x8
  __int64 v46; // x21
  BalanceConfig_c *v47; // x0
  int64_t v48; // x1
  Il2CppObject *object; // [xsp+0h] [xbp-E0h]
  GrandQuestFolderBoardItem_o *v51; // [xsp+8h] [xbp-D8h]
  bool v53; // [xsp+1Ch] [xbp-C4h]
  char v54; // [xsp+20h] [xbp-C0h]
  bool v55; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v56; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v57; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4D2E2B4 & 1) == 0 )
  {
    sub_1C93AD4(&AStarSearch_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&DefenseAreaData_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__);
    sub_1C93AD4(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
    sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E2B4 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  v8 = sub_1C93D20(WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_50;
  *(_QWORD *)(v8 + 16) = piecePlaceData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 16), (int32_t)piecePlaceData, v11, v12, v13, v14, v15, v16);
  npcData = this->fields.npcData;
  if ( !npcData )
    goto LABEL_50;
  defenseArea = npcData->fields.defenseArea;
  v19 = (DefenseAreaData_o *)sub_1C93D20(DefenseAreaData_TypeInfo);
  DefenseAreaData___ctor(v19, masterSquareIndex, defenseArea, 0);
  v20 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v20,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  if ( !byte_4D2E378 )
  {
    sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E378 = 1;
  }
  v21 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v21 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v21->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_50;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v56,
    dicSquareIndexEnemyPiece,
    (const MethodInfo_34BD1BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v22 = 0;
  object = (Il2CppObject *)v8;
  v51 = (GrandQuestFolderBoardItem_o *)(v8 + 24);
  v23 = 1;
  IsDetour = 1;
  v57 = v56;
LABEL_13:
  v53 = v23;
LABEL_14:
  v54 = v22;
  v55 = IsDetour;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v57,
            (const MethodInfo_361DC10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v57.fields._current.fields.key;
    value = v57.fields._current.fields.value;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v28 = AStarSearch__RouteSearch(0, masterSquareIndex, key, 0, 0, v25);
    v29 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v28,
            (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v20 )
      sub_1C93D2C(v29, v30);
    v31 = v29;
    System_Collections_Generic_Dictionary_int__object___Add(
      v20,
      key,
      &v28->obj,
      (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v19 )
      sub_1C93D2C(v32, v33);
    DefenseAreaData__SetComparisonMasterAndEnemyRange(v19, v31, 0);
    if ( DefenseAreaData__IsInDefenseArea(v19, key, 0) )
    {
      v36 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v36 = BalanceConfig_TypeInfo;
      }
      if ( !v36->static_fields->IsEnableOldBlockShortestRoute )
      {
        if ( !v28 )
          sub_1C93D2C(v36, v34);
        if ( SLODWORD(v28->max_length) >= 2 )
          DefenseAreaData__SetComparisonAllMasterAndEnemyRange(v19, v28->m_Items[1], v31, 0);
      }
      IsDetour = 0;
      v22 = 1;
      if ( v55 )
      {
        IsDetour = WarBoardAIRoute__IsDetour(v28, allyPieces, v35);
        v23 = 0;
        v22 = 1;
        if ( v53 )
        {
          klass = (System_Func_int__bool__o *)v51->klass;
          if ( !v51->klass )
          {
            klass = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              klass,
              object,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              0);
            v51->klass = (GrandQuestFolderBoardItem_c *)klass;
            sub_1C93A78(v51, (int32_t)klass, v39, v40, v41, v42, v43, v44);
          }
          if ( !AStarSearch_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          v23 = AStarSearch__RouteSearch((WarBoardPieceData_o *)value, key, masterSquareIndex, 0, klass, v37) == 0;
          v22 = 1;
        }
        goto LABEL_13;
      }
      goto LABEL_14;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v57,
    (const MethodInfo_361DD34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  v45 = 1025;
  if ( (v54 & 1) == 0 )
    v45 = 1;
  v46 = v55 ? v45 | 0x2000000000LL : v45;
  if ( !v19 )
LABEL_50:
    sub_1C93D2C(dicSquareIndexEnemyPiece, v10);
  DefenseAreaData__CreateShortestRoutes(v19, (System_Collections_Generic_Dictionary_int__int____o *)v20, 0);
  v47 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v47 = BalanceConfig_TypeInfo;
  }
  if ( !v47->static_fields->IsEnableOldBlockShortestRoute )
    DefenseAreaData__CreateAllShortestRoutes(v19, (System_Collections_Generic_Dictionary_int__int____o *)v20, 0);
  if ( v53 )
    v48 = v46 | 0x10000000000LL;
  else
    v48 = v46;
  DefenseAreaData__SetFlag(v19, v48, 0);
  return v19;
}


System_Collections_Generic_Dictionary_int__int__o *WarBoardAIRoute__GetDesignationItemToDistance(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v8; // x22
  Il2CppObject *Item; // x22
  System_Collections_Generic_Dictionary_int__int__o *v10; // x19
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x23
  System_Func_object__bool__o *v21; // x24
  _BOOL8 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x5
  int32_t v25; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+30h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_4D2E2C1 & 1) == 0 )
  {
    sub_1C93AD4(&AStarSearch_TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__);
    sub_1C93AD4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__);
    this = (WarBoardAIRoute_o *)sub_1C93AD4(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    byte_4D2E2C1 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v8->fields.dicUniqueKeyDesignationItem) == 0
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_35676D8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int__TypeInfo),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v10,
          (const MethodInfo_34B3908 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (this = (WarBoardAIRoute_o *)Item[1].klass) == 0 )
  {
    sub_1C93D2C(this, basePiece);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v30,
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    (const MethodInfo_34BD1BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v31,
            (const MethodInfo_361DC10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v11 = sub_1C93D20(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0);
    if ( !v11 )
      sub_1C93D2C(v12, v13);
    v20 = v11 + 24;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v11 + 16) = v31.fields._current;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 24), 0, v14, v15, v16, v17, v18, v19);
    v21 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v21,
      (Il2CppObject *)v11,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      0);
    v22 = BasicHelper__Any_object_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v21,
            (const MethodInfo_318DB78 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    if ( !v22 )
    {
      if ( !*(_QWORD *)v20 )
        sub_1C93D2C(v22, v23);
      v25 = *(_DWORD *)(*(_QWORD *)v20 + 16LL);
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0,
                                                                   baseSquareIndex,
                                                                   v25,
                                                                   0,
                                                                   0,
                                                                   v24);
      v27 = System_Linq_Enumerable__Count_int_(
              v26,
              (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v10 )
        sub_1C93D2C(v27, v28);
      System_Collections_Generic_Dictionary_int__int___Add(
        v10,
        *(_DWORD *)(v11 + 16),
        v27,
        (const MethodInfo_34B42CC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v31,
    (const MethodInfo_361DD34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v10;
}


WarBoardEvalValueSquare_EvalValueSquare_o *WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4D2E2B5 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
    byte_4D2E2B5 = 1;
  }
  if ( !evalValueSquareList )
    sub_1C93D2C(this, evalValueSquareList);
  return (WarBoardEvalValueSquare_EvalValueSquare_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_int__object__o *)evalValueSquareList,
                                                        index,
                                                        (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
}


int64_t WarBoardAIRoute__GetFlagAdvantage(
        WarBoardAIRoute_o *this,
        int32_t baseClassId,
        int32_t actionClassId,
        const MethodInfo *method)
{
  __int64 v6; // x22
  __int64 v7; // x21
  unsigned __int64 v8; // x9
  int64_t result; // x0

  if ( (byte_4D2E2C9 & 1) == 0 )
  {
    sub_1C93AD4(&SvtClassAttri_TypeInfo);
    byte_4D2E2C9 = 1;
  }
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__getMagnification(baseClassId, actionClassId, 0) <= 1.0 )
    v6 = 1;
  else
    v6 = 524289;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__getMagnification(baseClassId, actionClassId, 0) < 1.0 )
    v6 |= 0x400000uLL;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__getMagnification(actionClassId, baseClassId, 0) >= 1.0 )
    v7 = v6;
  else
    v7 = v6 | 0x100000;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__getMagnification(actionClassId, baseClassId, 0) <= 1.0 )
    v8 = v7;
  else
    v8 = v7 | 0x800000;
  result = (unsigned int)(v8 >> 2) & ((unsigned int)v8 >> 1) & 0x40000 | v8;
  if ( (v8 & 0x400000) != 0 )
    return result | (v8 >> 2) & 0x200000;
  return result;
}


int64_t WarBoardAIRoute__GetFlagAroundSquareCheck(
        WarBoardAIRoute_o *this,
        WarBoardSquareData_o *baseSquare,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t masterSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v10; // x27
  struct System_Int32_array *linkedSquares; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x29
  int64_t v14; // x23
  int32_t v15; // w24
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  WarBoardPieceData_o *v18; // x25
  __int64 v19; // x22
  bool isServant; // w0
  System_Collections_Generic_Dictionary_int__uint__o *v21; // x28
  struct System_Int32_array *v22; // x20
  int32_t v23; // w19
  int32_t v24; // w26
  int32_t ClassId; // w1
  float Magnification; // s0
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  _BOOL4 v28; // w8
  const MethodInfo *v29; // x1
  uint32_t v30; // w24
  const MethodInfo *v31; // x2
  WarBoardAIRoute_o *v32; // x24
  int32_t *m_Items; // [xsp+8h] [xbp-78h]
  int32_t defense; // [xsp+18h] [xbp-68h]
  uint32_t value; // [xsp+1Ch] [xbp-64h] BYREF

  v10 = this;
  if ( (byte_4D2E2C5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&SvtClassAttri_TypeInfo);
    this = (WarBoardAIRoute_o *)sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E2C5 = 1;
  }
  value = 0;
  if ( !baseSquare )
    goto LABEL_51;
  linkedSquares = baseSquare->fields.linkedSquares;
  if ( !linkedSquares )
    goto LABEL_51;
  max_length = linkedSquares->max_length;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    v14 = 1;
    m_Items = linkedSquares->m_Items;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
        sub_1C93D34(this);
      v15 = m_Items[v13];
      this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)*((_QWORD *)this + 55);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_38493796((WarBoardData_o *)this, v15, v16);
      if ( !this )
        goto LABEL_29;
      v18 = (WarBoardPieceData_o *)this;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v18, v17);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !basePiece )
          break;
        if ( WarBoardPieceData__get_isServant(basePiece, 0)
          || (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v18, 0), ((unsigned __int8)this & 1) != 0) )
        {
          v19 = v14 | 0x10;
          isServant = WarBoardPieceData__get_isServant(v18, 0);
          if ( (v14 & 0x1000000) == 0 && isServant )
          {
            this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
            if ( !this )
              break;
            v21 = piecePlaceData;
            v22 = linkedSquares;
            v23 = masterSquareIndex;
            this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0, 0);
            if ( !v18->fields._battleServant_k__BackingField )
              break;
            v24 = (int)this;
            ClassId = BattleServantData__getClassId(v18->fields._battleServant_k__BackingField, 0, 0);
            if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
            {
              defense = ClassId;
              j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
              ClassId = defense;
            }
            Magnification = SvtClassAttri__getMagnification(v24, ClassId, 0);
            masterSquareIndex = v23;
            linkedSquares = v22;
            piecePlaceData = v21;
            if ( Magnification > 1.0 )
              v19 = v14 | 0x1000010;
          }
          this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v18, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
            v14 = v19 | 0x20;
          else
            v14 = v19;
        }
      }
      else
      {
LABEL_29:
        if ( !basePiece )
          break;
      }
      aiRouteMasterData = v10->fields.aiRouteMasterData;
      if ( !aiRouteMasterData )
        break;
      v28 = aiRouteMasterData->fields.masterType == 2
         && aiRouteMasterData->fields.masterPieceIndex == basePiece->fields._index_k__BackingField;
      if ( v15 == masterSquareIndex && !v28 )
        v14 |= 0x400000000uLL;
      if ( !piecePlaceData )
        break;
      this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_int__uint___TryGetValue(
                                    piecePlaceData,
                                    v15,
                                    &value,
                                    (const MethodInfo_34E2908 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v30 = value;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        this = (WarBoardAIRoute_o *)WarBoardAIManager__GetPieceUnique(v30, v29);
        if ( basePiece->fields._uniqueIndex_k__BackingField != value )
        {
          v32 = this;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsAllyPiece(basePiece, (WarBoardPieceData_o *)v32, v31);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v32 )
              break;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v32, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
              v14 |= 0x800000000uLL;
          }
        }
      }
      LODWORD(max_length) = linkedSquares->max_length;
      if ( (__int64)++v13 >= (int)max_length )
        return v14;
    }
LABEL_51:
    sub_1C93D2C(this, baseSquare);
  }
  return 1;
}


int32_t WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
        WarBoardAIRoute_o *this,
        int32_t baseSquareIndex,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicOutOfWarningAreaRange; // x0
  System_Collections_Generic_Dictionary_int__int__o *v10; // x8

  if ( (byte_4D2E2C4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4D2E2C4 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_34B44B8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          actionSquareIndex,
          (const MethodInfo_34B44B8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                    dicOutOfWarningAreaRange,
                                                                                    baseSquareIndex,
                                                                                    (const MethodInfo_34B4230 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( (int)dicOutOfWarningAreaRange > System_Collections_Generic_Dictionary_int__int___get_Item(
                                         this->fields.dicOutOfWarningAreaRange,
                                         actionSquareIndex,
                                         (const MethodInfo_34B4230 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange
    || (dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                          dicOutOfWarningAreaRange,
                                                                                          baseSquareIndex,
                                                                                          (const MethodInfo_34B4230 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v10 = this->fields.dicOutOfWarningAreaRange) == 0) )
  {
LABEL_18:
    sub_1C93D2C(dicOutOfWarningAreaRange, v7);
  }
  if ( (_DWORD)dicOutOfWarningAreaRange == System_Collections_Generic_Dictionary_int__int___get_Item(
                                             v10,
                                             actionSquareIndex,
                                             (const MethodInfo_34B4230 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 2;
  else
    return 3;
}


int32_t WarBoardAIRoute__GetMasterSquareIndex(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v4; // x19
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w9
  int32_t key; // w20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *v10; // x8
  _OWORD v12[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v13; // [xsp+20h] [xbp-40h] BYREF

  v4 = this;
  if ( (byte_4D2E2B2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    this = (WarBoardAIRoute_o *)sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    byte_4D2E2B2 = 1;
  }
  memset(&v13, 0, 32);
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    goto LABEL_18;
  masterType = aiRouteMasterData->fields.masterType;
  if ( !masterType || masterType == 2 )
  {
    if ( piecePlaceData )
    {
      System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v12,
        piecePlaceData,
        (const MethodInfo_34E1648 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
      *(_OWORD *)&v13.fields._dictionary = v12[0];
      v13.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v12[1];
      while ( 1 )
      {
        v8 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
               &v13,
               (const MethodInfo_3620460 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
        if ( !v8 )
          break;
        v10 = v4->fields.aiRouteMasterData;
        if ( !v10 )
          sub_1C93D2C(v8, v9);
        key = (int32_t)v13.fields._current.fields.key;
        if ( v10->fields.masterUniqueIndex == HIDWORD(v13.fields._current.fields.key) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
            &v13,
            (const MethodInfo_3620560 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
          return key;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
        &v13,
        (const MethodInfo_3620560 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
      return 0;
    }
LABEL_18:
    sub_1C93D2C(this, piecePlaceData);
  }
  if ( masterType != 1 )
    return 0;
  return aiRouteMasterData->fields.masterSquareIndex;
}


int32_t WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  Il2CppClass *klass; // x8
  System_Func_KeyValuePair_int__uint___bool__o *v7; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4D2E2CD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____);
    sub_1C93AD4(&System_Func_KeyValuePair_int__uint___bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    this = (WarBoardAIRoute_o *)sub_1C93AD4(&Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__);
    byte_4D2E2CD = 1;
  }
  klass = v4[13].klass;
  if ( !klass )
    sub_1C93D2C(this, piecePlaceData);
  if ( LODWORD(klass->_1.name) == 1 )
    return HIDWORD(klass->_1.name);
  v7 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_1C93D20(System_Func_KeyValuePair_int__uint___bool__TypeInfo);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v7,
    v4,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v7,
           (const MethodInfo_31CCD00 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *WarBoardAIRoute__GetMoveByTargetDistance(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData,
        int32_t actionSquareIndex,
        WarBoardPieceData_o *basePiece,
        const MethodInfo *method)
{
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x5
  Il2CppObject *currentValue; // x24
  WarBoardPieceData_o *monitor; // x22
  int32_t v14; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w22
  int32_t v17; // w0
  const MethodInfo *v18; // x5
  int32_t v19; // w2
  int v20; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x22
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  int32_t v23; // w23
  int32_t v24; // w0
  int v25; // w8
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v28; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2E2CF & 1) == 0 )
  {
    sub_1C93AD4(&AStarSearch_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    this = (WarBoardAIRoute_o *)sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E2CF = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !dicKeyPutIndexValueTargetData
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_long__object___get_Values(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicKeyPutIndexValueTargetData,
                                      (const MethodInfo_3507940 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0 )
  {
    sub_1C93D2C(this, dicKeyPutIndexValueTargetData);
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__object___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3BB9AAC *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___MoveNext(
           &v28,
           (const MethodInfo_3627C24 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v8 )
      break;
    currentValue = v28.fields._currentValue;
    if ( !v28.fields._currentValue )
      sub_1C93D2C(v8, v9);
    monitor = (WarBoardPieceData_o *)v28.fields._currentValue[1].monitor;
    if ( !monitor || LODWORD(v28.fields._currentValue[4].monitor) != actionSquareIndex )
      goto LABEL_14;
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    if ( WarBoardAIManager__IsAllyPiece(basePiece, monitor, v10) )
    {
      LODWORD(currentValue[4].klass) = 2;
    }
    else
    {
LABEL_14:
      v14 = (int32_t)currentValue[4].monitor;
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0,
                                                                   actionSquareIndex,
                                                                   v14,
                                                                   0,
                                                                   0,
                                                                   v11);
      v16 = System_Linq_Enumerable__Count_int_(
              v15,
              (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
      v17 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
      v19 = (int32_t)currentValue[4].monitor;
      if ( v16 == v17 )
        v20 = 2;
      else
        v20 = 3;
      if ( v16 < v17 )
        v20 = 1;
      LODWORD(currentValue[4].klass) = v20;
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0,
                                                                   actionSquareIndex,
                                                                   v19,
                                                                   1,
                                                                   0,
                                                                   v18);
      if ( v21 && (klass = (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[6].klass) != 0 )
      {
        v23 = System_Linq_Enumerable__Count_int_(
                klass,
                (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
        v24 = System_Linq_Enumerable__Count_int_(
                v21,
                (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
        if ( v24 >= v23 )
        {
          if ( v24 == v23 )
            v25 = 2;
          else
            v25 = 3;
        }
        else
        {
          v25 = 1;
        }
      }
      else
      {
        v25 = 0;
      }
      HIDWORD(currentValue[4].klass) = v25;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___Dispose(
    &v28,
    (const MethodInfo_3627C20 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
  return dicKeyPutIndexValueTargetData;
}


int32_t WarBoardAIRoute__GetRangeShortMost(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *dicPieceList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  int32_t v6; // w19
  const MethodInfo *v7; // x5
  int32_t key; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  int32_t v10; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+0h] [xbp-80h] BYREF

  if ( (byte_4D2E2B6 & 1) == 0 )
  {
    sub_1C93AD4(&AStarSearch_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    this = (WarBoardAIRoute_o *)sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    byte_4D2E2B6 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !dicPieceList )
    sub_1C93D2C(this, dicPieceList);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_int__object__o *)dicPieceList,
    (const MethodInfo_34BD1BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v6 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v13,
            (const MethodInfo_361DC10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v13.fields._current.fields.key;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                0,
                                                                baseSquareIndex,
                                                                key,
                                                                0,
                                                                0,
                                                                v7);
    v10 = System_Linq_Enumerable__Count_int_(v9, (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
    if ( v6 > v10 || v6 == -1 )
      v6 = v10;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v13,
    (const MethodInfo_361DD34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  return v6;
}


int32_t WarBoardAIRoute__GetRequiredCost(
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


System_Collections_Generic_Dictionary_uint__int__o *WarBoardAIRoute__GetRouteDataActionList(
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
  _DWORD *klass; // x8
  int32_t *v18; // x9
  int v19; // w10
  uint32_t v20; // w24
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-80h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4D2E2B1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    byte_4D2E2B1 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  value = 0;
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  v12 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v12,
    (const MethodInfo_355DBF4 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_1C93D2C(v13, v14);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)routeDataList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v15 )
      break;
    if ( !v23.fields._current )
      sub_1C93D2C(v15, v16);
    if ( LODWORD(v23.fields._current[1].monitor) != HIDWORD(v23.fields._current[1].monitor) )
    {
      value = 0;
      klass = v23.fields._current[3].klass;
      if ( (BYTE3(v23.fields._current[1].klass) & 4) == 0 )
      {
        if ( !klass )
          sub_1C93D2C(v15, v16);
        if ( klass[4] == 1 )
          v18 = masterActionCount;
        else
          v18 = actionCount;
LABEL_21:
        ++*v18;
        goto LABEL_22;
      }
      if ( !klass )
        sub_1C93D2C(v15, v16);
      v19 = klass[4];
      klass = v23.fields._current[3].monitor;
      if ( v19 != 1 )
      {
        if ( !klass )
          sub_1C93D2C(v15, v16);
        if ( klass[4] == 1 )
          v18 = masterReplaceCount;
        else
          v18 = replaceCount;
        goto LABEL_21;
      }
      ++*masterReplaceCount;
      if ( !klass )
        sub_1C93D2C(v15, v16);
LABEL_22:
      if ( !v12 )
        sub_1C93D2C(v15, v16);
      v20 = klass[11];
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v12,
        v20,
        &value,
        (const MethodInfo_355FC50 *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v12,
        v20,
        value + 1,
        (const MethodInfo_355E5A4 *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
  return v12;
}


int32_t WarBoardAIRoute__GetRouteSumPieceActionCost(
        WarBoardAIRoute_o *this,
        System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *routeDataList,
        WarBoardPieceData_o *targetPiece,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Func_object__int__o *v15; // x20

  if ( (byte_4D2E2D0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____79106024);
    sub_1C93AD4(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__);
    sub_1C93AD4(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
    byte_4D2E2D0 = 1;
  }
  v6 = sub_1C93D20(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_1C93D2C(v7, v8);
  *(_QWORD *)(v6 + 16) = targetPiece;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)targetPiece, v9, v10, v11, v12, v13, v14);
  v15 = (System_Func_object__int__o *)sub_1C93D20(System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
  System_Func_object__int____ctor(
    v15,
    (Il2CppObject *)v6,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    0);
  return System_Linq_Enumerable__Sum_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v15,
           (const MethodInfo_31E23D0 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____79106024);
}


void WarBoardAIRoute__GetTargetToDistance(
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
  const MethodInfo *v19; // x5
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+30h] [xbp-90h] BYREF

  v12 = this;
  if ( (byte_4D2E2BE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    this = (WarBoardAIRoute_o *)sub_1C93AD4(&WarBoardAIRoute_TargetData_TypeInfo);
    byte_4D2E2BE = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !dicPutSquareIndex )
    sub_1C93D2C(this, dicPutSquareIndex);
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v21,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicPutSquareIndex,
    (const MethodInfo_3507F64 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v13 = System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v22,
            (const MethodInfo_36275C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v13 )
      break;
    key = v22.fields._current.fields.key;
    value = v22.fields._current.fields.value;
    if ( excludeCond )
    {
      if ( !v22.fields._current.fields.value )
        sub_1C93D2C(v13, v14);
      if ( (((__int64 (__fastcall *)(intptr_t, void *, intptr_t))excludeCond->fields.invoke_impl)(
              excludeCond->fields.method_code,
              v22.fields._current.fields.value[3].monitor,
              excludeCond->fields.method)
          & 1) != 0 )
        continue;
    }
    allEnemyPiece = v12->fields.allEnemyPiece;
    v18 = (WarBoardAIRoute_TargetData_o *)sub_1C93D20(WarBoardAIRoute_TargetData_TypeInfo);
    WarBoardAIRoute_TargetData___ctor_38488744(
      v18,
      (WarBoardAIRoute_TargetData_o *)value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      v19);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_1C93D2C(0, v20);
    System_Collections_Generic_Dictionary_long__object___Add(
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
      (int64_t)key,
      (Il2CppObject *)v18,
      (const MethodInfo_3507B30 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v22,
    (const MethodInfo_36276E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


void WarBoardAIRoute__GetTargetToDistanceUsingIndividuality(
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
  System_Collections_Generic_Dictionary_int__object__o *v27; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x19
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  WarBoardAiTargetCacher_o *aiTargetCacher; // x0
  Il2CppObject *key; // x25
  Il2CppObject *value; // x26
  TargetDetector_o *DetectorByTrendKey; // x0
  __int64 v35; // x1
  int32_t Id_k__BackingField; // w27
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  Il2CppObject *Item; // x29
  WarBoardAiTargetCacher_o *v40; // x0
  IWarBoardObjectData_array *TargetObjectsByTrendId; // x0
  IWarBoardObjectData_array *v42; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x29
  System_Func_object__bool__o *klass; // x23
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x29
  System_Func_object__int__o *v52; // x23
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v59; // x0
  WarBoardAIRoute___c_c *v60; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v61; // x29
  System_Func_object__int__o *_9__64_2; // x23
  Il2CppObject *v63; // x24
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v71; // x0
  WarBoardAIRoute___c_c *v72; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v73; // x29
  System_Func_object__int__o *_9__64_3; // x23
  Il2CppObject *v75; // x24
  struct WarBoardAIRoute___c_StaticFields *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  __int64 v84; // x1
  WarBoardPieceData_o *v85; // x27
  int32_t v86; // w28
  WarBoardPieceData_array *allEnemyPiece; // x24
  WarBoardAIRoute_TargetData_o *v88; // x23
  const MethodInfo *v89; // x6
  __int64 v90; // x1
  GrandQuestFolderBoardItem_o *v91; // [xsp+0h] [xbp-D0h]
  GrandQuestFolderBoardItem_o *v92; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v94; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v95; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4D2E2BF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_1C93AD4(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_IWarBoardObjectData__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    sub_1C93AD4(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__);
    sub_1C93AD4(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
    sub_1C93AD4(&WarBoardAIRoute___c_TypeInfo);
    byte_4D2E2BF = 1;
  }
  memset(&v95, 0, sizeof(v95));
  v12 = sub_1C93D20(WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = excludeCond,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v12 + 16), (int32_t)excludeCond, v15, v16, v17, v18, v19, v20),
        *(_QWORD *)(v12 + 24) = basePiece,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v12 + 24), (int32_t)basePiece, v21, v22, v23, v24, v25, v26),
        *(_DWORD *)(v12 + 32) = baseSquareIndex,
        v27 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo),
        System_Collections_Generic_Dictionary_int__object____ctor(
          v27,
          (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__),
        !dicIndividualityPutSqareIndex) )
  {
    sub_1C93D2C(v13, v14);
  }
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v94,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicIndividualityPutSqareIndex,
    (const MethodInfo_3507F64 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v95 = v94;
  v28 = 0;
  v91 = (GrandQuestFolderBoardItem_o *)(v12 + 48);
  v92 = (GrandQuestFolderBoardItem_o *)(v12 + 40);
  while ( System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v95,
            (const MethodInfo_36275C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_1C93D2C(0, v29);
    key = v95.fields._current.fields.key;
    value = v95.fields._current.fields.value;
    DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(
                           aiTargetCacher,
                           (int64_t)v95.fields._current.fields.key,
                           v30);
    if ( DetectorByTrendKey )
    {
      Id_k__BackingField = DetectorByTrendKey->fields._Id_k__BackingField;
      if ( !v27 )
        goto LABEL_44;
    }
    else
    {
      Id_k__BackingField = 0;
      if ( !v27 )
LABEL_44:
        sub_1C93D2C(DetectorByTrendKey, v35);
    }
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           v27,
           Id_k__BackingField,
           (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               v27,
               Id_k__BackingField,
               (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    }
    else
    {
      v40 = this->fields.aiTargetCacher;
      if ( !v40 )
        sub_1C93D2C(0, v37);
      TargetObjectsByTrendId = WarBoardAiTargetCacher__GetTargetObjectsByTrendId(v40, (int64_t)key, v38);
      v42 = TargetObjectsByTrendId;
      if ( TargetObjectsByTrendId )
        v43 = (System_Collections_Generic_IEnumerable_TSource__o *)TargetObjectsByTrendId;
      else
        v43 = v28;
      if ( TargetObjectsByTrendId )
      {
        klass = (System_Func_object__bool__o *)v92->klass;
        if ( !v92->klass )
        {
          klass = (System_Func_object__bool__o *)sub_1C93D20(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            klass,
            (Il2CppObject *)v12,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
            0);
          v92->klass = (GrandQuestFolderBoardItem_c *)klass;
          sub_1C93A78(v92, (int32_t)klass, v45, v46, v47, v48, v49, v50);
        }
        v51 = System_Linq_Enumerable__Where_object_(
                v43,
                (System_Func_TSource__bool__o *)klass,
                (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        v52 = (System_Func_object__int__o *)v91->klass;
        if ( !v91->klass )
        {
          v52 = (System_Func_object__int__o *)sub_1C93D20(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            v52,
            (Il2CppObject *)v12,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
            0);
          v91->klass = (GrandQuestFolderBoardItem_c *)v52;
          sub_1C93A78(v91, (int32_t)v52, v53, v54, v55, v56, v57, v58);
        }
        v59 = System_Linq_Enumerable__OrderBy_object__int_(
                v51,
                (System_Func_TSource__TKey__o *)v52,
                (const MethodInfo_31D38D0 *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
        v60 = WarBoardAIRoute___c_TypeInfo;
        v61 = v59;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v60 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_2 = (System_Func_object__int__o *)v60->static_fields->__9__64_2;
        if ( !_9__64_2 )
        {
          if ( !v60->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v60);
            v60 = WarBoardAIRoute___c_TypeInfo;
          }
          v63 = (Il2CppObject *)v60->static_fields->__9;
          _9__64_2 = (System_Func_object__int__o *)sub_1C93D20(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__64_2,
            v63,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
            0);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__64_2,
            (int32_t)_9__64_2,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70);
        }
        v71 = System_Linq_Enumerable__ThenBy_object__int_(
                v61,
                (System_Func_TSource__TKey__o *)_9__64_2,
                (const MethodInfo_31E2E7C *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        v72 = WarBoardAIRoute___c_TypeInfo;
        v73 = v71;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v72 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_3 = (System_Func_object__int__o *)v72->static_fields->__9__64_3;
        if ( !_9__64_3 )
        {
          if ( !v72->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v72);
            v72 = WarBoardAIRoute___c_TypeInfo;
          }
          v75 = (Il2CppObject *)v72->static_fields->__9;
          _9__64_3 = (System_Func_object__int__o *)sub_1C93D20(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__64_3,
            v75,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
            0);
          v76 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v76->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v76->__9__64_3, (int32_t)_9__64_3, v77, v78, v79, v80, v81, v82);
        }
        v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                     v73,
                                                                     (System_Func_TSource__TKey__o *)_9__64_3,
                                                                     (const MethodInfo_31E2E7C *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        Item = System_Linq_Enumerable__FirstOrDefault_object_(
                 v83,
                 (const MethodInfo_31CC378 *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
        v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v42;
      }
      else
      {
        Item = 0;
      }
    }
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v27,
      Id_k__BackingField,
      Item,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( Item )
    {
      v85 = *(WarBoardPieceData_o **)(v12 + 24);
      v86 = *(_DWORD *)(v12 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v88 = (WarBoardAIRoute_TargetData_o *)sub_1C93D20(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_38490752(
        v88,
        (WarBoardAIRoute_TargetData_o *)value,
        (IWarBoardObjectData_o *)Item,
        v85,
        v86,
        allEnemyPiece,
        v89);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1C93D2C(0, v90);
      System_Collections_Generic_Dictionary_long__object___Add(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)key,
        (Il2CppObject *)v88,
        (const MethodInfo_3507B30 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1C93D2C(0, v84);
      System_Collections_Generic_Dictionary_long__object___Remove(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)key,
        (const MethodInfo_3508FA4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v95,
    (const MethodInfo_36276E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *WarBoardAIRoute__GetTargetToDistance_38490864(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  __int64 v9; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicUniqueKeyTarget; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *Item; // x24
  System_Collections_Generic_Dictionary_TKey__TValue__o *v19; // x23
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *monitor; // x25
  System_Func_object__bool__o *v21; // x26
  const MethodInfo *v22; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *klass; // x25
  System_Func_object__bool__o *v24; // x26
  const MethodInfo *v25; // x6
  const MethodInfo *v26; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2E2C0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
    sub_1C93AD4(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__);
    sub_1C93AD4(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
    byte_4D2E2C0 = 1;
  }
  v9 = sub_1C93D20(WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = routeDataList,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)routeDataList, v12, v13, v14, v15, v16, v17),
        !basePiece)
    || (dicUniqueKeyTarget = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget) == 0
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 dicUniqueKeyTarget,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_35676D8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo),
        System_Collections_Generic_Dictionary_long__object____ctor(
          v19,
          (const MethodInfo_3507160 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v19,
        !Item) )
  {
    sub_1C93D2C(dicUniqueKeyTarget, v11);
  }
  monitor = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].monitor;
  v21 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    monitor,
    (System_Func_IWarBoardObjectData__bool__o *)v21,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v22);
  klass = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[2].klass;
  v24 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0);
  WarBoardAIRoute__GetTargetToDistanceUsingIndividuality(
    this,
    klass,
    (System_Func_IWarBoardObjectData__bool__o *)v24,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v25);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].klass,
    0,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v26);
  return (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v19;
}


float WarBoardAIRoute__GetThinkingThreshold(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1C93D2C(this, method);
  return (float)npcData->fields.lowerThinkingValue / 100.0;
}


bool WarBoardAIRoute__IsActable(
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
  if ( (byte_4D2E2C7 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E2C7 = 1;
  }
  if ( !basePiece )
    goto LABEL_13;
  if ( (WarBoardPieceData__EnableMoveBySelf(basePiece, sumPieceActionCost, 0)
     || WarBoardPieceData__EnableAttack(basePiece, sumPieceActionCost, 0))
    && (WarBoardPieceData__get_isInfinitelyActable(basePiece, 0)
     || basePiece->fields._currentActionCount_k__BackingField > basePieceActionCount) )
  {
    isMaster = WarBoardPieceData__get_isMaster(basePiece, 0);
    v12 = 32;
    if ( isMaster )
      v12 = 36;
    v13 = *(_DWORD *)((char *)&v10->klass + v12);
    this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
      return *((_DWORD *)this + 189) >= v13 + requiredCost;
LABEL_13:
    sub_1C93D2C(this, basePiece);
  }
  return 0;
}


bool WarBoardAIRoute__IsActableReplace(
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  WarBoardPieceData_o **v22; // x25
  bool v23; // w8
  const MethodInfo *v24; // x3
  int32_t RouteSumPieceActionCost; // w23
  System_Func_object__bool__o *v26; // x21
  __int64 v27; // x8

  if ( (byte_4D2E2CB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    sub_1C93AD4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__);
    sub_1C93AD4(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
    byte_4D2E2CB = 1;
  }
  v13 = sub_1C93D20(WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_25;
  *(_QWORD *)(v13 + 16) = actionPiece;
  v22 = (WarBoardPieceData_o **)(v13 + 16);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)actionPiece, v16, v17, v18, v19, v20, v21);
  Instance = *(WarBoardPieceData_o **)(v13 + 16);
  if ( !Instance )
    goto LABEL_25;
  v23 = WarBoardPieceData__EnableSwapByOther(Instance, 0, 0);
  Instance = 0;
  if ( !v23 )
    return (char)Instance;
  if ( !basePiece )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(basePiece, 0) )
    goto LABEL_10;
  Instance = *v22;
  if ( !*v22 )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(Instance, 0) )
  {
LABEL_10:
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < this->fields.moveCost
                                                               + requiredCost
                                                               + this->fields.masterMoveCost )
      goto LABEL_23;
  }
  else
  {
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < requiredCost + 2 * this->fields.moveCost )
      goto LABEL_23;
  }
  RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                              (WarBoardAIRoute_o *)Instance,
                              routeDataList,
                              *v22,
                              v24);
  if ( !WarBoardPieceData__EnableMoveBySelf(basePiece, sumPieceActionCost, 0) )
    goto LABEL_23;
  Instance = *v22;
  if ( !*v22 )
    goto LABEL_25;
  if ( !WarBoardPieceData__EnableSwapByOther(Instance, RouteSumPieceActionCost, 0) )
    goto LABEL_23;
  Instance = *v22;
  if ( !*v22 )
LABEL_25:
    sub_1C93D2C(Instance, v15);
  if ( !WarBoardPieceData__get_isInfinitelyActable(Instance, 0) )
  {
    v26 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v26,
      (Il2CppObject *)v13,
      Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
      0);
    Instance = (WarBoardPieceData_o *)System_Linq_Enumerable__Count_object__52190488(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
                                        (System_Func_TSource__bool__o *)v26,
                                        (const MethodInfo_31C5D18 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
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


bool WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
        System_Collections_Generic_List_int____o *shortestEnemyRoute,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int____o *v6; // x21
  unsigned int v7; // w20
  char v8; // w21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  void *monitor; // x9
  __int64 v13; // x26
  __int64 v14; // x28
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-80h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4D2E2BD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1C93AD4(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4D2E2BD = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !v6 )
    sub_1C93D2C(shortestEnemyRoute, piecePlaceData);
  v7 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v8 = 0;
  v17 = v16;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v9 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C93D2C(v9, v10);
    monitor = v17.fields._current[1].monitor;
    if ( (int)monitor - 1 <= (int)v7 )
    {
LABEL_16:
      v8 = 0;
      break;
    }
    if ( (unsigned int)v17.fields._current[1].monitor <= (unsigned __int64)v7 )
LABEL_18:
      sub_1C93D34(v9);
    v13 = (unsigned int)((_DWORD)monitor - 1) - 1LL;
    v14 = v7;
    while ( 1 )
    {
      if ( !piecePlaceData )
        sub_1C93D2C(v9, v10);
      v9 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
             piecePlaceData,
             *((_DWORD *)&current[2].klass + v14),
             (const MethodInfo_34E145C *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( v9 )
        break;
      if ( v13 == v14 )
        goto LABEL_16;
      if ( ++v14 >= (unsigned __int64)LODWORD(current[1].monitor) )
        goto LABEL_18;
    }
    v8 = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v8 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
        DefenseAreaData_o *defenseArea,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0

  if ( (byte_4D2E2BA & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2E2BA = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !defenseArea )
    sub_1C93D2C(v7, *(_QWORD *)&index);
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
bool WarBoardAIRoute__IsBlockShortestRouteEnemyAndMasterAll(
        System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *allShortestRoute,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *v6; // x21
  unsigned int v7; // w28
  char v8; // w22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppClass *klass; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  unsigned int monitor; // w10
  unsigned int v15; // w9
  int v16; // w11
  int v17; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+50h] [xbp-90h] BYREF

  v6 = allShortestRoute;
  if ( (byte_4D2E2BC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__);
    allShortestRoute = (System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *)sub_1C93AD4(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4D2E2BC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  memset(&v21, 0, sizeof(v21));
  if ( !v6 )
    sub_1C93D2C(allShortestRoute, *(_QWORD *)&index);
  v7 = !isDefenseSquare;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_34BD1BC *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v8 = 0;
  v21 = v19;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v21,
           (const MethodInfo_361DC10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v21.fields._current.fields.value )
      sub_1C93D2C(v9, v10);
    klass = v21.fields._current.fields.value[1].klass;
    if ( !klass )
      sub_1C93D2C(0, v10);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)klass,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v20 = *(System_Collections_Generic_List_Enumerator_object__o *)&v19.fields._dictionary;
    do
    {
LABEL_9:
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v12 )
      {
        v17 = 4;
        goto LABEL_20;
      }
      if ( !v20.fields._current )
        sub_1C93D2C(v12, v13);
      monitor = (unsigned int)v20.fields._current[1].monitor;
      v15 = monitor - 1;
    }
    while ( (int)(monitor - 1) <= (int)v7 );
    if ( v7 > monitor )
      monitor = !isDefenseSquare;
    v16 = !isDefenseSquare;
    while ( 1 )
    {
      if ( monitor == v16 )
        sub_1C93D34(v12);
      if ( *((_DWORD *)&v20.fields._current[2].klass + v16) == index )
        break;
      if ( v15 == ++v16 )
        goto LABEL_9;
    }
    v8 = 1;
    v17 = 11;
LABEL_20:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( (v17 | 4) != 4 )
      goto LABEL_26;
  }
  v17 = 12;
LABEL_26:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v21,
    (const MethodInfo_361DD34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
  return v8 & (v17 == 11);
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardAIRoute__IsBlockShortestRouteEnemyAndMasterOld(
        System_Collections_Generic_List_int____o *shortestEnemyRoute,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int____o *v6; // x21
  unsigned int v7; // w24
  _BOOL8 v8; // x0
  __int64 v9; // x1
  bool v10; // w20
  unsigned int monitor; // w10
  unsigned int v12; // w9
  unsigned int v13; // w11
  int v14; // w19
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4D2E2BB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1C93AD4(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4D2E2BB = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !v6 )
    sub_1C93D2C(shortestEnemyRoute, *(_QWORD *)&index);
  v7 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v17 = v16;
  do
  {
LABEL_5:
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    v10 = v8;
    if ( !v8 )
    {
      v14 = 10;
      goto LABEL_16;
    }
    if ( !v17.fields._current )
      sub_1C93D2C(v8, v9);
    monitor = (unsigned int)v17.fields._current[1].monitor;
    v12 = monitor - 1;
  }
  while ( (int)(monitor - 1) <= (int)v7 );
  if ( v7 > monitor )
    monitor = v7;
  v13 = v7;
  while ( 1 )
  {
    if ( monitor == v13 )
      sub_1C93D34(v8);
    if ( *((_DWORD *)&v17.fields._current[2].klass + (int)v13) == index )
      break;
    if ( v12 == ++v13 )
      goto LABEL_5;
  }
  v14 = 9;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v10 && v14 == 9;
}


bool WarBoardAIRoute__IsDetour(System_Int32_array *route, System_Int32_array *blockPieces, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w0
  bool v15; // w0
  int v17; // w23
  System_Func_int__bool__o **v18; // x21
  System_Func_int__bool__o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int v26; // w8

  if ( (byte_4D2E2B9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__);
    sub_1C93AD4(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
    byte_4D2E2B9 = 1;
  }
  v5 = sub_1C93D20(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = route;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)route, v8, v9, v10, v11, v12, v13);
  v14 = System_Linq_Enumerable__Count_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 16),
          (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
  if ( v14 < 2 )
    return 0;
  *(_DWORD *)(v5 + 24) = 1;
  if ( v14 == 2 )
  {
    return 0;
  }
  else
  {
    v17 = v14 - 1;
    v18 = (System_Func_int__bool__o **)(v5 + 32);
    do
    {
      v19 = *v18;
      if ( !*v18 )
      {
        v19 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v19,
          (Il2CppObject *)v5,
          Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
          0);
        *(_QWORD *)(v5 + 32) = v19;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v19, v20, v21, v22, v23, v24, v25);
      }
      v15 = BasicHelper__Any_int__51960056(
              blockPieces,
              (System_Func_T__bool__o *)v19,
              (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720);
      if ( v15 )
        break;
      v26 = *(_DWORD *)(v5 + 24) + 1;
      *(_DWORD *)(v5 + 24) = v26;
    }
    while ( v26 < v17 );
  }
  return v15;
}


bool WarBoardAIRoute__IsThinkingThreshold(WarBoardAIRoute_o *this, float v, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1C93D2C(this, method);
  return (float)((float)npcData->fields.lowerThinkingValue / 100.0) > v;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardAIRoute__LinkedCount(
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
  const MethodInfo *v17; // x3
  uint32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D2E2CA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E2CA = 1;
  }
  value = 0;
  ++*attackByLinkEnemy;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  Square = (WarBoardData_o *)WarBoardAIManager__GetSquare(actionSquareIndex, *(const MethodInfo **)&actionSquareIndex);
  if ( !Square )
    goto LABEL_27;
  npcEntityDict = Square->fields.npcEntityDict;
  if ( !npcEntityDict )
    goto LABEL_27;
  entries = npcEntityDict->fields._entries;
  if ( (int)entries >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)entries )
        sub_1C93D34(Square);
      if ( !piecePlaceData )
        break;
      v15 = *(&npcEntityDict->fields._count + v14);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v15,
             &value,
             (const MethodInfo_34E2908 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Square = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)Square[1].fields.playedStageReinforcementsList;
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardData__GetPiece_38495500(Square, value, 1, v17);
        if ( !Square )
          break;
        if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0) )
          ++*attackByLinkAlly;
      }
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v15, v16);
      if ( Square )
      {
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v15, v11);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0);
        if ( ((unsigned __int8)Square & 1) != 0 )
          ++*attackByLinkEnemy;
      }
      LODWORD(entries) = npcEntityDict->fields._entries;
      if ( (__int64)++v14 >= (int)entries )
        return;
    }
LABEL_27:
    sub_1C93D2C(Square, v11);
  }
}


void WarBoardAIRoute__LinkedPieceCount(
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
  unsigned int max_length; // w8
  int32_t v14; // w25
  const MethodInfo *v15; // x4
  System_Collections_Generic_List_object__o *moveByLinkedPiece; // x24
  WarBoardPieceData_o *v17; // x23
  const MethodInfo *v18; // x2
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  WarBoardAIRoute_o *v28; // x1
  Il2CppClass **v29; // x0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  WarBoardAIRoute_RouteData_o *v32; // x8
  int32_t v33; // w24
  int32_t ClassId; // w25

  if ( (byte_4D2E2CE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&SvtClassAttri_TypeInfo);
    this = (WarBoardAIRoute_o *)sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E2CE = 1;
  }
  v8 = *routeData;
  if ( !*routeData
    || (actionSquare = v8->fields.actionSquare) == 0
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0 )
  {
LABEL_51:
    sub_1C93D2C(this, routeData);
  }
  if ( (int)linkedSquares->max_length >= 1 )
  {
    basePiece = v8->fields.basePiece;
    v12 = 0;
    max_length = linkedSquares->max_length;
    do
    {
      if ( v12 >= max_length )
        sub_1C93D34(this);
      v14 = linkedSquares->m_Items[v12];
      this = (WarBoardAIRoute_o *)WarBoardAIRoute__CanAcquireItem(
                                    this,
                                    v14,
                                    alreadyGetItemSquares,
                                    (const MethodInfo *)alreadyGetItemSquares);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*routeData )
          goto LABEL_51;
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
          goto LABEL_51;
        moveByLinkedPiece = (System_Collections_Generic_List_object__o *)(*routeData)->fields.moveByLinkedPiece;
        v17 = (WarBoardPieceData_o *)this;
        this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)*((_QWORD *)this + 55);
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_38493796((WarBoardData_o *)this, v14, v18);
        if ( !moveByLinkedPiece )
          goto LABEL_51;
        items = moveByLinkedPiece->fields._items;
        v26 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        ++moveByLinkedPiece->fields._version;
        if ( !items )
          goto LABEL_51;
        size = moveByLinkedPiece->fields._size;
        v28 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            moveByLinkedPiece,
            (Il2CppObject *)this,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          moveByLinkedPiece->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v28;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v29 + 4), (int32_t)v28, v19, v20, v21, v22, v23, v24);
        }
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        if ( WarBoardAIManager__IsAllyPiece(basePiece, v17, v30)
          && (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v17, 0), ((unsigned __int8)this & 1) != 0) )
        {
          if ( !*routeData )
            goto LABEL_51;
          ++(*routeData)->fields.moveByLinkedAlly;
        }
        else
        {
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v17, v31);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*routeData )
              goto LABEL_51;
            (*routeData)->fields.flagNow |= 0x40uLL;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v17, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v32 = *routeData;
              if ( !*routeData )
                goto LABEL_51;
              if ( (v32->fields.flagNow & 0x2000000) != 0 )
                goto LABEL_43;
              if ( !basePiece )
                goto LABEL_51;
              this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(basePiece, 0);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v17, 0);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
                  if ( !this )
                    goto LABEL_51;
                  this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0, 0);
                  if ( !v17->fields._battleServant_k__BackingField )
                    goto LABEL_51;
                  v33 = (int)this;
                  ClassId = BattleServantData__getClassId(v17->fields._battleServant_k__BackingField, 0, 0);
                  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                  if ( SvtClassAttri__getMagnification(v33, ClassId, 0) > 1.0 )
                  {
                    v32 = *routeData;
                    if ( !*routeData )
                      goto LABEL_51;
LABEL_43:
                    v32->fields.flagNow |= 0x2000000uLL;
                  }
                }
              }
              if ( !*routeData )
                goto LABEL_51;
              ++(*routeData)->fields.moveByLinkedEnemy;
            }
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v17, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !*routeData )
                goto LABEL_51;
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


void WarBoardAIRoute__RegisterTargetObjectToDic(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *targetDic,
        System_Collections_Generic_List_IWarBoardObjectData__o *objectList,
        int32_t squareIndex,
        int64_t trendKey,
        int32_t conditionId,
        bool *notSquareTarget,
        const MethodInfo *method)
{
  __int64 v14; // x25
  __int64 v15; // x0
  __int64 v16; // x1
  System_Predicate_object__o *v17; // x24
  Il2CppObject *v18; // x0
  Il2CppClass *klass; // x8
  IWarBoardObjectData_o *v20; // x23
  __int64 v21; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 v23; // x0
  WarBoardAIRoute_TargetData_o *v24; // x22
  const MethodInfo *v25; // x4

  if ( (byte_4D2E2AF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    sub_1C93AD4(&IWarBoardObjectData_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
    sub_1C93AD4(&System_Predicate_IWarBoardObjectData__TypeInfo);
    sub_1C93AD4(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__);
    sub_1C93AD4(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
    byte_4D2E2AF = 1;
  }
  v14 = sub_1C93D20(WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  if ( !v14 )
    goto LABEL_17;
  *(_DWORD *)(v14 + 16) = squareIndex;
  *notSquareTarget = 0;
  if ( !targetDic )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_long__object___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
         *(int *)(v14 + 16),
         (const MethodInfo_3507D24 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v17 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_IWarBoardObjectData__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v14,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    0);
  if ( !objectList )
LABEL_17:
    sub_1C93D2C(v15, v16);
  v18 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
  if ( v18 )
  {
    *notSquareTarget = 1;
    klass = v18->klass;
    v20 = (IWarBoardObjectData_o *)v18;
    v21 = *(unsigned __int16 *)&v18->klass->_2.rank;
    if ( *(_WORD *)&v18->klass->_2.rank )
    {
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v21;
        p_offset += 2;
        if ( !v21 )
          goto LABEL_12;
      }
      v23 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
    }
    else
    {
LABEL_12:
      v23 = sub_1C69E5C(v18, IWarBoardObjectData_TypeInfo, 2);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8)) & 1) != 0 )
    {
      v24 = (WarBoardAIRoute_TargetData_o *)sub_1C93D20(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_38478328(v24, v20, trendKey, conditionId, v25);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
        trendKey,
        (Il2CppObject *)v24,
        (const MethodInfo_3507B1C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardAIRoute__UpdatePiecePersonalityDic(
        WarBoardAIRoute_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4D2E2AD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
    byte_4D2E2AD = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_1C93D2C(0, *(_QWORD *)&aiId);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_34BE20C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
  WarBoardAIRoute__AddPiecePersonalityDic(this, aiId, pieceIndex, v8);
}


System_Collections_Generic_Dictionary_int__uint__o *WarBoardAIRoute__UpdatePiecePlaceData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        WarBoardAIRoute_RouteData_o *routeData,
        int32_t baseSquareIndex,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__uint__o *v10; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *basePiece; // x8

  if ( (byte_4D2E2CC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___78959088);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__uint__TypeInfo);
    byte_4D2E2CC = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor_55445900(
    v10,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_34E098C *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___78959088);
  if ( !routeData )
    goto LABEL_12;
  if ( (routeData->fields.flagNow & 0x4000000) != 0 )
  {
    actionPiece = routeData->fields.actionPiece;
    if ( actionPiece && v10 )
    {
      System_Collections_Generic_Dictionary_int__uint___set_Item(
        v10,
        baseSquareIndex,
        actionPiece->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_34E125C *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_1C93D2C(v11, v12);
  }
  if ( !v10 )
    goto LABEL_12;
  v11 = System_Collections_Generic_Dictionary_int__uint___Remove(
          v10,
          baseSquareIndex,
          (const MethodInfo_34E2628 *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v10,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_34E125C *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v10;
}


bool WarBoardAIRoute____ctor_b__42_0(WarBoardAIRoute_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return WarBoardPieceData__get_IsReinforcement(x, 0)
      && x->fields._forceId_k__BackingField == this->fields.forceId
      && x->fields._groupId_k__BackingField == this->fields.groupId;
}


bool WarBoardAIRoute___GetMasterSquareIndexFromPlaceData_b__78_0(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_KeyValuePair_int__uint__o x,
        const MethodInfo *method)
{
  uint32_t value; // x19^4
  WarBoardAIRoute_o *v4; // x20
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8

  value = x.fields.value;
  v4 = this;
  if ( (byte_4D2E2D1 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    byte_4D2E2D1 = 1;
  }
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C93D2C)(this, x);
  return aiRouteMasterData->fields.masterUniqueIndex == value;
}


void WarBoardAIRoute_AIRouteMasterData___ctor(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  struct System_Collections_Generic_List_int____o **p_replaceDataList; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  WarBoardData_o *Instance; // x0
  WarBoardData_o *v16; // x1
  const MethodInfo *v17; // x4
  System_Int32_array *v18; // x8
  unsigned int v19; // w9
  unsigned int max_length; // w10
  unsigned int v21; // w23
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t v23; // w25
  int32_t v24; // w24
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int stageNpcMaster; // w8
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Int32_array *data; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2E2ED & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E2ED = 1;
  }
  data = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_OWORD *)&this->fields.masterType = xmmword_D019F0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v7;
  p_replaceDataList = &this->fields.replaceDataList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_replaceDataList, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  *((_DWORD *)p_replaceDataList + 2) = -1;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_20;
  Instance = (WarBoardData_o *)WarBoardData__IsDefenseTarget(Instance, &data, forceId, groupId, v17);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  v18 = data;
  if ( !data )
LABEL_20:
    sub_1C93D2C(Instance, v16);
  v19 = 0;
  while ( 1 )
  {
    max_length = v18->max_length;
    if ( (int)v19 >= (int)max_length )
      break;
    if ( v19 >= max_length )
      goto LABEL_22;
    v21 = v19 + 1;
    if ( v19 + 1 >= max_length )
      goto LABEL_22;
    v22 = (System_Collections_Generic_List_object__o *)*p_replaceDataList;
    v23 = v18->m_Items[v19];
    v24 = v18->m_Items[v21];
    Instance = (WarBoardData_o *)sub_1C93B7C(int___TypeInfo, 2);
    if ( !Instance )
      goto LABEL_20;
    stageNpcMaster = (int)Instance->fields.stageNpcMaster;
    v16 = Instance;
    if ( !stageNpcMaster || (LODWORD(Instance->fields.npcEntityDict) = v23, stageNpcMaster == 1) )
LABEL_22:
      sub_1C93D34(Instance);
    HIDWORD(Instance->fields.npcEntityDict) = v24;
    if ( v22 )
    {
      items = v22->fields._items;
      v33 = Method_System_Collections_Generic_List_int____Add__;
      ++v22->fields._version;
      if ( items )
      {
        size = v22->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)Instance,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v16;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v16, v25, v26, v27, v28, v29, v30);
        }
        v18 = data;
        v19 = v21 + 1;
        if ( data )
          continue;
      }
    }
    goto LABEL_20;
  }
}


bool WarBoardAIRoute_AIRouteMasterData__IsMasterServant(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  return this->fields.masterType == 2 && this->fields.masterPieceIndex == pieceIndex;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        int32_t type,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  void *replaceDataList; // x0
  uint32_t uniqueIndex_k__BackingField; // w8
  int32_t v9; // w22
  int32_t replacePriority; // w8
  __int64 v11; // x8
  unsigned int v12; // w8
  int32_t v13; // w8
  int32_t v14; // w8

  if ( (byte_4D2E2EE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int____get_Item__);
    byte_4D2E2EE = 1;
  }
  if ( type
    || (replaceDataList = (void *)BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)this->fields.replaceDataList,
                                    0),
        ((unsigned __int8)replaceDataList & 1) == 0) )
  {
    replaceDataList = this->fields.replaceDataList;
    if ( replaceDataList )
    {
      v9 = 0;
      do
      {
        if ( v9 >= *((_DWORD *)replaceDataList + 6) )
          return;
        replacePriority = this->fields.replacePriority;
        if ( replacePriority != -1 && replacePriority < v9 )
          return;
        replaceDataList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)replaceDataList,
                            v9,
                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_int____get_Item__);
        if ( pieceData != 0 && type == 0 )
        {
          if ( !replaceDataList )
            break;
          if ( !*((_DWORD *)replaceDataList + 6) )
            goto LABEL_36;
          if ( !*((_DWORD *)replaceDataList + 8) )
          {
            this->fields.masterType = 0;
LABEL_33:
            uniqueIndex_k__BackingField = pieceData->fields._uniqueIndex_k__BackingField;
            this->fields.replacePriority = v9;
            goto LABEL_34;
          }
        }
        if ( type != 2 || pieceData == 0 )
        {
          if ( type == 1 )
          {
            if ( !replaceDataList )
              break;
            v11 = *((_QWORD *)replaceDataList + 3);
            if ( !(_DWORD)v11 )
              goto LABEL_36;
            if ( *((_DWORD *)replaceDataList + 8) == 1 )
            {
              this->fields.masterType = 1;
              if ( (unsigned int)v11 <= 1 )
LABEL_36:
                sub_1C93D34(replaceDataList);
              v14 = *((_DWORD *)replaceDataList + 9);
              this->fields.replacePriority = v9;
              this->fields.masterSquareIndex = v14;
              return;
            }
          }
        }
        else
        {
          if ( !replaceDataList )
            break;
          v12 = *((_DWORD *)replaceDataList + 6);
          if ( !v12 )
            goto LABEL_36;
          if ( *((_DWORD *)replaceDataList + 8) == 2 )
          {
            if ( v12 <= 1 )
              goto LABEL_36;
            v13 = *((_DWORD *)replaceDataList + 9);
            if ( v13 == pieceData->fields._index_k__BackingField )
            {
              this->fields.masterPieceIndex = v13;
              this->fields.masterType = 2;
              goto LABEL_33;
            }
          }
        }
        replaceDataList = this->fields.replaceDataList;
        ++v9;
      }
      while ( replaceDataList );
    }
LABEL_28:
    sub_1C93D2C(replaceDataList, *(_QWORD *)&type);
  }
  this->fields.masterType = 0;
  if ( !pieceData )
    goto LABEL_28;
  uniqueIndex_k__BackingField = pieceData->fields._uniqueIndex_k__BackingField;
  this->fields.replacePriority = 0;
LABEL_34:
  this->fields.masterUniqueIndex = uniqueIndex_k__BackingField;
}


bool WarBoardAIRoute_AIRouteMasterData__get_IsServant(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        const MethodInfo *method)
{
  return this->fields.masterType == 2;
}


bool WarBoardAIRoute_AIRouteMasterData__get_IsSquare(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        const MethodInfo *method)
{
  return this->fields.masterType == 1;
}


void WarBoardAIRoute_ActionTrendInfo___ctor(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        WarBoardActionTrendEntity_o *entity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o **p_FutureTrendInfoList_k__BackingField; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x22
  System_Func_T__TResult__o *v21; // x23
  WarBoardActionTrendEntity_array *HasMatchCondition; // x0
  __int64 v23; // x1
  il2cpp_array_size_t max_length; // x8
  WarBoardActionTrendEntity_array *v25; // x20
  unsigned __int64 i; // x24
  WarBoardActionTrendEntity_o *v27; // x23
  System_Collections_Generic_List_object__o *v28; // x21
  WarBoardAIRoute_ActionTrendInfo_o *v29; // x22
  const MethodInfo *v30; // x2
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  int32_t condType; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D2E2DC & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1C93AD4(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__);
    byte_4D2E2DC = 1;
  }
  condType = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v5;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._FutureTrendInfoList_k__BackingField,
    (int32_t)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Entity_k__BackingField = entity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)entity, v13, v14, v15, v16, v17, v18);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v19);
  v21 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(v21, 0, Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__, 0);
  HasMatchCondition = (WarBoardActionTrendEntity_array *)WarBoardActionTrendConditionMaster__HasMatchCondition(
                                                           ConditionEntityArray,
                                                           (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v21,
                                                           &condType,
                                                           0);
  this->fields._HasTargetIndividualityCond_k__BackingField = (unsigned __int8)HasMatchCondition & 1;
  if ( !entity )
    goto LABEL_20;
  if ( !WarBoardActionTrendEntity__get_HasFutureTrend(entity, 0) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  HasMatchCondition = (WarBoardActionTrendEntity_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !HasMatchCondition
    || (HasMatchCondition = WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                              (WarBoardActionTrendMaster_o *)HasMatchCondition,
                              entity,
                              0)) == 0 )
  {
LABEL_20:
    sub_1C93D2C(HasMatchCondition, v23);
  }
  max_length = HasMatchCondition->max_length;
  v25 = HasMatchCondition;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C93D34(HasMatchCondition);
      v27 = v25->m_Items[i];
      if ( v27 )
      {
        v28 = (System_Collections_Generic_List_object__o *)*p_FutureTrendInfoList_k__BackingField;
        v29 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C93D20(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v29, v27, v30);
        if ( !v28 )
          goto LABEL_20;
        items = v28->fields._items;
        v38 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++v28->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v28->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            (Il2CppObject *)v29,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v28->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v29;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 4), (int32_t)v29, v31, v32, v33, v34, v35, v36);
        }
      }
      LODWORD(max_length) = v25->max_length;
    }
  }
}


WarBoardActionTrendConditionEntity_array *WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  WarBoardAIRoute_ActionTrendInfo_o *v2; // x20
  GrandQuestFolderBoardItem_o *p_conditionEntityArray; // x19
  System_Object_array *conditionEntityArray; // x21
  struct WarBoardActionTrendEntity_o *Entity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *conditionIds; // x20
  WarBoardAIRoute_ActionTrendInfo___c_c *v7; // x0
  System_Func_T__TResult__o *_9__8_0; // x21
  Il2CppObject *v9; // x22
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  v2 = this;
  if ( (byte_4D2E2DB & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    sub_1C93AD4(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__);
    this = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C93AD4(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
    byte_4D2E2DB = 1;
  }
  p_conditionEntityArray = (GrandQuestFolderBoardItem_o *)&v2->fields.conditionEntityArray;
  conditionEntityArray = (System_Object_array *)v2->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = v2->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_1C93D2C(this, method);
    conditionIds = (System_Collections_Generic_IEnumerable_TSource__o *)Entity_k__BackingField->fields.conditionIds;
    v7 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    if ( !WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
      v7 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    }
    _9__8_0 = (System_Func_T__TResult__o *)v7->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__8_0 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__8_0,
        v9,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        0);
      static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0,
        (int32_t)_9__8_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    v17 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           conditionIds,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_31D7E14 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v18 = BasicHelper__ExcludeNull_object_(
            v17,
            (const MethodInfo_318E4CC *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = System_Linq_Enumerable__ToArray_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                             (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    p_conditionEntityArray->klass = (GrandQuestFolderBoardItem_c *)conditionEntityArray;
    sub_1C93A78(p_conditionEntityArray, (int32_t)conditionEntityArray, v19, v20, v21, v22, v23, v24);
  }
  return (WarBoardActionTrendConditionEntity_array *)conditionEntityArray;
}


WarBoardActionTrendEntity_o *WarBoardAIRoute_ActionTrendInfo__get_Entity(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Entity_k__BackingField;
}


System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *WarBoardAIRoute_ActionTrendInfo__get_FutureTrendInfoList(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._FutureTrendInfoList_k__BackingField;
}


bool WarBoardAIRoute_ActionTrendInfo__get_HasTargetIndividualityCond(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._HasTargetIndividualityCond_k__BackingField;
}


void WarBoardAIRoute_ActionTrendInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E2DD & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
    byte_4D2E2DD = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_ActionTrendInfo___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardAIRoute_ActionTrendInfo___c___ctor(WarBoardAIRoute_ActionTrendInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarBoardActionTrendConditionEntity_o *WarBoardAIRoute_ActionTrendInfo___c___get_ConditionEntityArray_b__8_0(
        WarBoardAIRoute_ActionTrendInfo___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4D2E2DE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
    byte_4D2E2DE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_object )
    sub_1C93D2C(0, v5);
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   x,
                                                   (const MethodInfo_3463274 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
}


void WarBoardAIRoute_AdvantagePieceData___ctor(WarBoardAIRoute_AdvantagePieceData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_Dictionary_int__object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_Dictionary_int__object__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_Dictionary_int__object__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7

  if ( (byte_4D2E2E6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
    byte_4D2E2E6 = 1;
  }
  this->fields.flagNow = 1;
  *(_QWORD *)&this->fields.baseCARange = -1;
  *(_QWORD *)&this->fields.baseAARange = -1;
  *(_QWORD *)&this->fields.baseDARange = -1;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dicClassAdvantageServant,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dicClassDisAdvantageServant,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v17;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dicAttackAdvantageServant,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v24;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dicAttackDisAdvantageServant,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v31,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v31;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dicDefenseAdvantageServant,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v38,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v38;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dicDefenseDisAdvantageServant,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIRoute_DesignationItemData___ctor(WarBoardAIRoute_DesignationItemData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2E2E7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
    byte_4D2E2E7 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIRoute_PiecePersonality___ctor(WarBoardAIRoute_PiecePersonality_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D2E2D5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
    byte_4D2E2D5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.ratingOffsetList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *WarBoardAIRoute_PiecePersonality__AttackOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  GrandQuestFolderBoardItem_o *p_attackOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v6; // x0
  System_Func_object__bool__o *_9__4_0; // x21
  Il2CppObject *v8; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_TSource__o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2E2D2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    sub_1C93AD4(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__);
    sub_1C93AD4(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_4D2E2D2 = 1;
  }
  p_attackOffset = (GrandQuestFolderBoardItem_o *)&this->fields.attackOffset;
  result = this->fields.attackOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v6 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v6 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    _9__4_0 = (System_Func_object__bool__o *)v6->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__4_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__4_0,
        v8,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        0);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0,
        (int32_t)_9__4_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    v16 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__4_0,
            (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v17 = System_Linq_Enumerable__ToList_object_(
            v16,
            (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_attackOffset->klass = (GrandQuestFolderBoardItem_c *)v17;
    sub_1C93A78(p_attackOffset, (int32_t)v17, v18, v19, v20, v21, v22, v23);
    return (System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)p_attackOffset->klass;
  }
  return result;
}


System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2E2D4 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    byte_4D2E2D4 = 1;
  }
  v3 = sub_1C93D20(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *)v3;
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *WarBoardAIRoute_PiecePersonality__MoveOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  GrandQuestFolderBoardItem_o *p_moveOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v6; // x0
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v8; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_TSource__o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2E2D3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    sub_1C93AD4(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__);
    sub_1C93AD4(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_4D2E2D3 = 1;
  }
  p_moveOffset = (GrandQuestFolderBoardItem_o *)&this->fields.moveOffset;
  result = this->fields.moveOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v6 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v6 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__bool__o *)v6->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__5_0, v8, Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__, 0);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0,
        (int32_t)_9__5_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    v16 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v17 = System_Linq_Enumerable__ToList_object_(
            v16,
            (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_moveOffset->klass = (GrandQuestFolderBoardItem_c *)v17;
    sub_1C93A78(p_moveOffset, (int32_t)v17, v18, v19, v20, v21, v22, v23);
    return (System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)p_moveOffset->klass;
  }
  return result;
}


void WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6___ctor(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__MoveNext(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v2; // x19
  int32_t _1__state; // w8
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x8
  System_Collections_Generic_List_object__o *actionTrandList; // x0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v6; // x9
  __int128 v7; // q0
  GrandQuestFolderBoardItem_o *p__7__wrap1; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v15; // x8
  struct WarBoardAIRoute_ActionTrendInfo_o *trendInfo_5__3; // x8
  System_Collections_Generic_List_object__o *FutureTrendInfoList_k__BackingField; // x0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v18; // x9
  __int128 v19; // q0
  GrandQuestFolderBoardItem_o *p__7__wrap3; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  const MethodInfo *v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  bool v34; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v35; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *current; // x1
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  const MethodInfo *v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  bool v52; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v53; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v54; // x1
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v55; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v63; // x8
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+20h] [xbp-50h]
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o **v66; // [xsp+48h] [xbp-28h]
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v67; // [xsp+58h] [xbp-18h] BYREF

  v67 = this;
  v2 = this;
  if ( (byte_4D2E2D7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    this = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    byte_4D2E2D7 = 1;
  }
  v66 = &v67;
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
    goto LABEL_12;
  if ( _1__state == 1 )
  {
    trendInfo_5__3 = v2->fields._trendInfo_5__3;
    v2->fields.__1__state = -3;
    if ( !trendInfo_5__3 )
      sub_1C93D2C(this, method);
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_1C93D2C(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      &v64,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v18 = v67;
    v19 = *(_OWORD *)&v64.fields._list;
    p__7__wrap3 = (GrandQuestFolderBoardItem_o *)&v67->fields.__7__wrap3;
    v65 = v64;
    v67->fields.__7__wrap3.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v64.fields._current;
    *(_OWORD *)&v18->fields.__7__wrap3.fields._list = v19;
    sub_1C93A78(p__7__wrap3, 0, v21, v22, v23, v24, v25, v26);
    v2 = v67;
LABEL_12:
    v2->fields.__1__state = -4;
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap3,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    v35 = v67;
    if ( v34 )
    {
      current = v67->fields.__7__wrap3.fields._current;
      v67->fields.__2__current = current;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v35->fields.__2__current,
        (int32_t)current,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v67->fields.__1__state = 2;
      return 1;
    }
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(v67, v27);
    v38 = v67;
    *(_OWORD *)&v67->fields._trendInfo_5__3 = 0u;
    v38 = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)((char *)v38 + 72);
    *(_OWORD *)&v38->fields.__1__state = 0u;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)v38, 0, v39, v40, v41, v42, v43, v44);
    v15 = v67;
    goto LABEL_15;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C93D2C(this, method);
  actionTrandList = (System_Collections_Generic_List_object__o *)_4__this->fields.actionTrandList;
  if ( !actionTrandList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    &v64,
    actionTrandList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v6 = v67;
  v7 = *(_OWORD *)&v64.fields._list;
  p__7__wrap1 = (GrandQuestFolderBoardItem_o *)&v67->fields.__7__wrap1;
  v65 = v64;
  v67->fields.__7__wrap1.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v64.fields._current;
  *(_OWORD *)&v6->fields.__7__wrap1.fields._list = v7;
  sub_1C93A78(p__7__wrap1, 0, v9, v10, v11, v12, v13, v14);
  v15 = v67;
  v67->fields.__1__state = -3;
LABEL_15:
  v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v15->fields.__7__wrap1,
          (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
  v53 = v67;
  if ( v52 )
  {
    v54 = v67->fields.__7__wrap1.fields._current;
    v67->fields._trendInfo_5__3 = v54;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v53->fields._trendInfo_5__3, (int32_t)v54, v46, v47, v48, v49, v50, v51);
    v55 = v67;
    v56 = v67->fields._trendInfo_5__3;
    v67->fields.__2__current = v56;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v55->fields.__2__current, (int32_t)v56, v57, v58, v59, v60, v61, v62);
    v67->fields.__1__state = 1;
    return 1;
  }
  else
  {
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(v67, v45);
    v63 = v67;
    v67->fields.__7__wrap1.fields._list = 0;
    *(_QWORD *)&v63->fields.__7__wrap1.fields._index = 0;
    v63->fields.__7__wrap1.fields._current = 0;
    return 0;
  }
}


System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__GetEnumerator(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2E2DA & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    byte_4D2E2DA = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C93D20(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7, v8, v9, v10, v11);
    return (System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *)this;
}


WarBoardAIRoute_ActionTrendInfo_o *WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__get_Current(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_IEnumerator_Reset(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_IEnumerator_get_Current(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_IDisposable_Dispose(
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


void WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2E2D8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    byte_4D2E2D8 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2E2D9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    byte_4D2E2D9 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void WarBoardAIRoute_PiecePersonality___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E2D6 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_4D2E2D6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_PiecePersonality___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardAIRoute_PiecePersonality___c___ctor(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIRoute_PiecePersonality___c___AttackOffset_b__4_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.type == 0;
}


bool WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.type == 1;
}


void WarBoardAIRoute_PutSquareTarget___ctor(WarBoardAIRoute_PutSquareTarget_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2E2E8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
    byte_4D2E2E8 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v3,
    (const MethodInfo_3507160 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v10,
    (const MethodInfo_3507160 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dicObjectPutSquareIndex,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v17,
    (const MethodInfo_3507160 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v17;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dicIndividualityPutSqareIndex,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIRoute_RouteData___ctor(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2E2E1 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
    byte_4D2E2E1 = 1;
  }
  this->fields.flagNow = 1;
  v3 = (Il2CppObject *)sub_1C93D20(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.evalOffsetMagnification = (struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.evalOffsetMagnification, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIRoute_RouteData__CalcEvalValue(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  System_Decimal_c *v4; // x8
  int32_t WarBoardEvalFactorsAffectRatio; // w20
  const MethodInfo *v6; // x1
  System_Decimal_o *v7; // x20
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x0
  System_Decimal_o *flagNow_low; // x8
  const MethodInfo *v10; // x1
  System_Decimal_o *v11; // x8
  System_Decimal_o *MoveValue; // x22
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *futureEvalOffsetMag; // x0
  System_Decimal_o *v14; // x23
  System_Decimal_o *Value; // x24
  System_Decimal_c *v16; // x0
  System_Decimal_o *AttackValue; // x22
  int32_t attackEvalOffsetAddValue; // w24
  System_Decimal_o *v19; // x1
  System_Decimal_o *v20; // x23
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v22; // x8
  System_Decimal_o *v23; // x0
  System_Decimal_o *v24; // x1
  System_Decimal_o *v25; // x0
  System_Decimal_o *v26; // x1
  System_Decimal_o *v27; // x8
  System_Decimal_o *v28; // x0
  System_Decimal_o *v29; // x8
  System_Decimal_o *v30; // x0
  const MethodInfo *v31; // x1

  if ( (byte_4D2E2E3 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&System_Decimal_TypeInfo);
    byte_4D2E2E3 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = System_Decimal_TypeInfo;
  WarBoardEvalFactorsAffectRatio = v3->static_fields->WarBoardEvalFactorsAffectRatio;
  if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v7 = System_Decimal__op_Implicit_66335012((System_Decimal_o *)v4, WarBoardEvalFactorsAffectRatio, 0);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_1C93D2C(0, v6);
  flagNow_low = (System_Decimal_o *)LOBYTE(this->fields.flagNow);
  if ( ((unsigned __int8)flagNow_low & 2) != 0 )
  {
    AttackValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(
                    flagNow_low,
                    evalOffsetMagnification,
                    v6);
    attackEvalOffsetAddValue = this->fields.attackEvalOffsetAddValue;
    v20 = v19;
    cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  else
  {
    MoveValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(
                  flagNow_low,
                  evalOffsetMagnification,
                  v6);
    futureEvalOffsetMag = this->fields.futureEvalOffsetMag;
    v14 = (System_Decimal_o *)v10;
    if ( futureEvalOffsetMag )
    {
      Value = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetValue(v11, futureEvalOffsetMag, v10);
      v16 = System_Decimal_TypeInfo;
    }
    else
    {
      v16 = System_Decimal_TypeInfo;
      if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
        v16 = System_Decimal_TypeInfo;
      }
      Value = *(System_Decimal_o **)v16->static_fields;
    }
    v22 = (System_Decimal_o *)v16->_2.cctor_finished;
    if ( !(_DWORD)v22 )
      j_il2cpp_runtime_class_init_0(v16);
    v23 = System_Decimal__op_Addition(v22, MoveValue, v14, (const MethodInfo *)Value);
    attackEvalOffsetAddValue = this->fields.moveEvalOffsetAddValue;
    AttackValue = v23;
    v20 = v24;
  }
  v25 = System_Decimal__op_Implicit_66335012(cctor_finished, attackEvalOffsetAddValue, 0);
  v28 = System_Decimal__op_Division(v27, v25, v26, (const MethodInfo *)v7);
  v30 = System_Decimal__op_Addition(v29, AttackValue, v20, (const MethodInfo *)v28);
  this->fields.evalValue = System_Decimal__op_Explicit_66335516(v30, v31);
}


bool WarBoardAIRoute_RouteData__HasActionPiece(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return this->fields.actionPiece != 0;
}


bool WarBoardAIRoute_RouteData__HasFlag(WarBoardAIRoute_RouteData_o *this, int64_t flag, const MethodInfo *method)
{
  return (flag & ~this->fields.flagNow) == 0;
}


bool WarBoardAIRoute_RouteData__HasFlag_38494008(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_4D2E2E0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__);
    byte_4D2E2E0 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  return futureLookingTrendHashSet && futureLookingTrendHashSet->fields._count > 0;
}


WarBoardAIRoute_RouteData_o *WarBoardAIRoute_RouteData__ShallowCopy(
        WarBoardAIRoute_RouteData_o *this,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *result; // x0
  __int64 naturalAligment; // x9
  WarBoardAIRoute_RouteData_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4D2E2E2 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIRoute_RouteData_TypeInfo);
    byte_4D2E2E2 = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0);
  if ( result )
  {
    naturalAligment = WarBoardAIRoute_RouteData_TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      sub_1C940C8(result);
      WarBoardAIRoute_RouteData__CalcEvalValue(v5, v6);
    }
  }
  return result;
}


int32_t WarBoardAIRoute_RouteData__get_ActionIndex(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return this->fields.actionIndex;
}


int32_t WarBoardAIRoute_RouteData__get_BaseIndex(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return this->fields.baseIndex;
}


int64_t WarBoardAIRoute_RouteData__get_FlagNow(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return this->fields.flagNow;
}


System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *WarBoardAIRoute_RouteData__get_FutureLookingTrendHashSet(
        WarBoardAIRoute_RouteData_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_futureLookingTrendHashSet; // x19
  System_Collections_Generic_HashSet_T__o *v4; // x20
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2E2DF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    byte_4D2E2DF = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = (GrandQuestFolderBoardItem_o *)&this->fields.futureLookingTrendHashSet;
  v4 = (System_Collections_Generic_HashSet_T__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v4 = (System_Collections_Generic_HashSet_T__o *)sub_1C93D20(System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v4,
      (const MethodInfo_372B7CC *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    p_futureLookingTrendHashSet->klass = (GrandQuestFolderBoardItem_c *)v4;
    sub_1C93A78(p_futureLookingTrendHashSet, (int32_t)v4, v6, v7, v8, v9, v10, v11);
  }
  return (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)v4;
}


bool WarBoardAIRoute_RouteData__get_IsAttack(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flagNow) >> 1) & 1;
}


bool WarBoardAIRoute_RouteData__get_notAction(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return this->fields.baseIndex == this->fields.actionIndex;
}


void WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Decimal_o *WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(
        System_Decimal_o *__return_ptr retstr,
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  float warAttack; // s8
  float benAttack; // s9
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4D2E2E4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Decimal_TypeInfo);
    byte_4D2E2E4 = 1;
  }
  warAttack = this->fields.warAttack;
  benAttack = this->fields.benAttack;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, warAttack + benAttack, 0);
}


System_Decimal_o *WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(
        System_Decimal_o *__return_ptr retstr,
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  float warMove; // s8
  float benMove; // s9
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4D2E2E5 & 1) == 0 )
  {
    sub_1C93AD4(&System_Decimal_TypeInfo);
    byte_4D2E2E5 = 1;
  }
  warMove = this->fields.warMove;
  benMove = this->fields.benMove;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, warMove + benMove, 0);
}


System_Decimal_o *WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetValue(
        System_Decimal_o *__return_ptr retstr,
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  _BOOL8 isAttack; // x8

  isAttack = this->fields.isAttack;
  if ( this->fields.isAttack )
    return WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue((System_Decimal_o *)isAttack, this, method);
  else
    return WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue((System_Decimal_o *)isAttack, this, method);
}


void WarBoardAIRoute_TargetData___ctor(
        WarBoardAIRoute_TargetData_o *this,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.actionTrendKey = actionTrendKey;
  this->fields.conditionId = conditionId;
}


void WarBoardAIRoute_TargetData___ctor_38476872(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardSquareData_o *targetSquare,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  WarBoardAIRoute_TargetData_o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  v8 = this;
  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.targetSquare = targetSquare;
  v8 = (WarBoardAIRoute_TargetData_o *)((char *)v8 + 48);
  v8->fields.targetObject = (struct IWarBoardObjectData_o *)actionTrendKey;
  v8->fields.moveByDistanceType = conditionId;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v8, (int32_t)targetSquare, v9, v10, v11, v12, v13, v14);
}


void WarBoardAIRoute_TargetData___ctor_38478328(
        WarBoardAIRoute_TargetData_o *this,
        IWarBoardObjectData_o *targetObject,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x1

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.actionTrendKey = actionTrendKey;
  this->fields.conditionId = conditionId;
  this->fields.targetObject = targetObject;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetObject,
    (int32_t)targetObject,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarBoardAIRoute_TargetData__DetectObject(this, v15);
}


void WarBoardAIRoute_TargetData___ctor_38488744(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct IWarBoardObjectData_o *targetObject; // x1
  struct WarBoardSquareData_o *targetSquare; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  const MethodInfo *v27; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !baseTargetData )
    sub_1C93D2C(v11, v12);
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetObject,
    (int32_t)targetObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  targetSquare = baseTargetData->fields.targetSquare;
  this->fields.targetSquare = targetSquare;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetSquare,
    (int32_t)targetSquare,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v27);
}


void WarBoardAIRoute_TargetData___ctor_38490752(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        IWarBoardObjectData_o *targetObject,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.targetObject = targetObject;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetObject,
    (int32_t)targetObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v19);
}


void WarBoardAIRoute_TargetData___ctor_38504036(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
{
  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarBoardAIRoute_TargetData_o *WarBoardAIRoute_TargetData__Clone(
        WarBoardAIRoute_TargetData_o *b,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  WarBoardAIRoute_TargetData_o *result; // x0
  __int64 naturalAligment; // x9

  v2 = (Il2CppObject *)b;
  if ( (byte_4D2E2E9 & 1) == 0 )
  {
    b = (WarBoardAIRoute_TargetData_o *)sub_1C93AD4(&WarBoardAIRoute_TargetData_TypeInfo);
    byte_4D2E2E9 = 1;
  }
  if ( !v2 )
LABEL_9:
    sub_1C93D2C(b, method);
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone(v2, 0);
  if ( result )
  {
    naturalAligment = WarBoardAIRoute_TargetData_TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      sub_1C940C8(result);
      goto LABEL_9;
    }
  }
  return result;
}


void WarBoardAIRoute_TargetData__DetectObject(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct IWarBoardObjectData_o *targetObject; // x8
  WarBoardPieceData_c *v10; // x9
  __int64 naturalAligment; // x10
  struct IWarBoardObjectData_o *v12; // x11
  int32_t v13; // w1
  struct WarBoardPieceData_o **p_targetPiece; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct IWarBoardObjectData_o *v21; // x8
  WarBoardItemData_c *v22; // x9
  __int64 v23; // x10
  struct IWarBoardObjectData_o *v24; // x11
  int32_t v25; // w1
  struct WarBoardItemData_o **p_targetItem; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct IWarBoardObjectData_o *v33; // x8
  WarBoardTreasureData_c *v34; // x9
  __int64 v35; // x10
  struct IWarBoardObjectData_o *v36; // x11
  int32_t v37; // w1
  struct WarBoardTreasureData_o **p_targetTreasure; // x19

  if ( (byte_4D2E2EB & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardItemData_TypeInfo);
    sub_1C93AD4(&WarBoardPieceData_TypeInfo);
    sub_1C93AD4(&WarBoardTreasureData_TypeInfo);
    byte_4D2E2EB = 1;
  }
  targetObject = this->fields.targetObject;
  if ( targetObject )
  {
    v10 = WarBoardPieceData_TypeInfo;
    naturalAligment = WarBoardPieceData_TypeInfo->_2.naturalAligment;
    if ( targetObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardPieceData_TypeInfo )
        v12 = this->fields.targetObject;
      else
        v12 = 0;
    }
    else
    {
      v12 = 0;
    }
    this->fields.targetPiece = (struct WarBoardPieceData_o *)v12;
    p_targetPiece = &this->fields.targetPiece;
    if ( targetObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[naturalAligment - 1] == v10 )
        v13 = (int)targetObject;
      else
        v13 = 0;
    }
    else
    {
      v13 = 0;
    }
  }
  else
  {
    v13 = 0;
    this->fields.targetPiece = 0;
    p_targetPiece = &this->fields.targetPiece;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_targetPiece, v13, v2, v3, v4, v5, v6, v7);
  v21 = this->fields.targetObject;
  if ( v21 )
  {
    v22 = WarBoardItemData_TypeInfo;
    v23 = WarBoardItemData_TypeInfo->_2.naturalAligment;
    if ( v21->klass->_2.naturalAligment >= (unsigned int)v23 )
    {
      if ( (WarBoardItemData_c *)v21->klass->_2.typeHierarchy[v23 - 1] == WarBoardItemData_TypeInfo )
        v24 = this->fields.targetObject;
      else
        v24 = 0;
    }
    else
    {
      v24 = 0;
    }
    this->fields.targetItem = (struct WarBoardItemData_o *)v24;
    p_targetItem = &this->fields.targetItem;
    if ( v21->klass->_2.naturalAligment >= (unsigned int)v23 )
    {
      if ( (WarBoardItemData_c *)v21->klass->_2.typeHierarchy[v23 - 1] == v22 )
        v25 = (int)v21;
      else
        v25 = 0;
    }
    else
    {
      v25 = 0;
    }
  }
  else
  {
    v25 = 0;
    this->fields.targetItem = 0;
    p_targetItem = &this->fields.targetItem;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_targetItem, v25, v15, v16, v17, v18, v19, v20);
  v33 = this->fields.targetObject;
  if ( v33 )
  {
    v34 = WarBoardTreasureData_TypeInfo;
    v35 = WarBoardTreasureData_TypeInfo->_2.naturalAligment;
    if ( v33->klass->_2.naturalAligment >= (unsigned int)v35 )
    {
      if ( (WarBoardTreasureData_c *)v33->klass->_2.typeHierarchy[v35 - 1] == WarBoardTreasureData_TypeInfo )
        v36 = this->fields.targetObject;
      else
        v36 = 0;
    }
    else
    {
      v36 = 0;
    }
    this->fields.targetTreasure = (struct WarBoardTreasureData_o *)v36;
    p_targetTreasure = &this->fields.targetTreasure;
    if ( v33->klass->_2.naturalAligment >= (unsigned int)v35 )
    {
      if ( (WarBoardTreasureData_c *)v33->klass->_2.typeHierarchy[v35 - 1] == v34 )
        v37 = (int)v33;
      else
        v37 = 0;
    }
    else
    {
      v37 = 0;
    }
  }
  else
  {
    v37 = 0;
    this->fields.targetTreasure = 0;
    p_targetTreasure = &this->fields.targetTreasure;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_targetTreasure, v37, v27, v28, v29, v30, v31, v32);
}


void WarBoardAIRoute_TargetData__Init(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  __int64 v10; // x1
  const MethodInfo *v11; // x5
  struct IWarBoardObjectData_o *targetObject; // x24
  WarBoardAIRoute_TargetData_o *v13; // x25
  IWarBoardObjectData_c *klass; // x8
  __int64 v15; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 v17; // x0
  struct WarBoardSquareData_o *targetSquare; // x8
  __int64 squareIndex_k__BackingField; // x0
  int32_t nowSquareIndex; // w24
  struct System_Int32_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  WarBoardAIRoute_TargetData___c_c *v28; // x0
  System_Int32_array *baseRoute; // x24
  WarBoardPieceData_o *v30; // x21
  System_Func_object__int__o *_9__7_0; // x25
  Il2CppObject *v32; // x26
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Int32_array *v41; // x0
  const MethodInfo *v42; // x2
  bool IsDetour; // w0
  const MethodInfo *v44; // x5
  int32_t v45; // w23
  struct System_Int32_array *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int32_t v53; // w0
  struct IWarBoardObjectData_o *v54; // x21
  WarBoardAIRoute_TargetData_o *v55; // x22
  IWarBoardObjectData_c *v56; // x8
  __int64 v57; // x9
  int32_t *v58; // x10
  __int64 v59; // x0
  struct WarBoardSquareData_o *v60; // x8

  if ( (byte_4D2E2EA & 1) == 0 )
  {
    sub_1C93AD4(&AStarSearch_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__int__TypeInfo);
    sub_1C93AD4(&IWarBoardObjectData_TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__);
    sub_1C93AD4(&WarBoardAIRoute_TargetData___c_TypeInfo);
    byte_4D2E2EA = 1;
  }
  WarBoardAIRoute_TargetData__DetectObject(this, (const MethodInfo *)baseTargetData);
  targetObject = this->fields.targetObject;
  if ( targetObject )
    v13 = this;
  else
    v13 = 0;
  if ( targetObject )
  {
    klass = targetObject->klass;
    v15 = *(unsigned __int16 *)&targetObject->klass->_2.rank;
    if ( *(_WORD *)&targetObject->klass->_2.rank )
    {
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v15;
        p_offset += 2;
        if ( !v15 )
          goto LABEL_11;
      }
      v17 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
    }
    else
    {
LABEL_11:
      v17 = sub_1C69E5C(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v17)(
                                    targetObject,
                                    *(_QWORD *)(v17 + 8));
    if ( !v13 )
LABEL_49:
      sub_1C93D2C(squareIndex_k__BackingField, v10);
  }
  else
  {
    targetSquare = this->fields.targetSquare;
    if ( targetSquare )
      squareIndex_k__BackingField = (unsigned int)targetSquare->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = 0xFFFFFFFFLL;
    v13 = this;
    if ( !this )
      goto LABEL_49;
  }
  v13->fields.nowSquareIndex = squareIndex_k__BackingField;
  nowSquareIndex = this->fields.nowSquareIndex;
  if ( !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  v21 = AStarSearch__RouteSearch(0, baseSquareIndex, nowSquareIndex, 0, 0, v11);
  this->fields.baseRoute = v21;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.baseRoute, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = WarBoardAIRoute_TargetData___c_TypeInfo;
  baseRoute = this->fields.baseRoute;
  if ( !WarBoardAIRoute_TargetData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIRoute_TargetData___c_TypeInfo);
    v28 = WarBoardAIRoute_TargetData___c_TypeInfo;
  }
  v30 = piece;
  _9__7_0 = (System_Func_object__int__o *)v28->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = WarBoardAIRoute_TargetData___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v28->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v32, Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, 0);
    static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v34, v35, v36, v37, v38, v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v41 = System_Linq_Enumerable__ToArray_int_(
          v40,
          (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v41, v42);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    v45 = this->fields.nowSquareIndex;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v46 = AStarSearch__RouteSearch(v30, baseSquareIndex, v45, 1, 0, v44);
    this->fields.detourRoute = v46;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.detourRoute, (int32_t)v46, v47, v48, v49, v50, v51, v52);
  }
  v53 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
  v54 = this->fields.targetObject;
  this->fields.isAround = v53 == 2;
  if ( v54 )
    v55 = this;
  else
    v55 = 0;
  if ( v54 )
  {
    v56 = v54->klass;
    v57 = *(unsigned __int16 *)&v54->klass->_2.rank;
    if ( *(_WORD *)&v54->klass->_2.rank )
    {
      v58 = &v56->_1.interfaceOffsets->offset;
      while ( *((IWarBoardObjectData_c **)v58 - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_39;
      }
      v59 = (__int64)&v56->vtable[*v58];
    }
    else
    {
LABEL_39:
      v59 = sub_1C69E5C(v54, IWarBoardObjectData_TypeInfo, 0);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v59)(
                                    v54,
                                    *(_QWORD *)(v59 + 8));
    if ( !v55 )
      goto LABEL_49;
  }
  else
  {
    v60 = this->fields.targetSquare;
    if ( v60 )
      squareIndex_k__BackingField = (unsigned int)v60->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = 0xFFFFFFFFLL;
    v55 = this;
    if ( !this )
      goto LABEL_49;
  }
  v55->fields.putSquareIndex = squareIndex_k__BackingField;
  if ( !baseTargetData )
    goto LABEL_49;
  this->fields.actionTrendKey = baseTargetData->fields.actionTrendKey;
  this->fields.conditionId = baseTargetData->fields.conditionId;
}


bool WarBoardAIRoute_TargetData__get_ExistEnemyOnBaseRoute(
        WarBoardAIRoute_TargetData_o *this,
        const MethodInfo *method)
{
  return this->fields._ExistEnemyOnBaseRoute_k__BackingField;
}


bool WarBoardAIRoute_TargetData__get_IsItem(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
{
  return this->fields.targetItem != 0;
}


void WarBoardAIRoute_TargetData__set_ExistEnemyOnBaseRoute(
        WarBoardAIRoute_TargetData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = value;
}


void WarBoardAIRoute_TargetData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E2EC & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIRoute_TargetData___c_TypeInfo);
    byte_4D2E2EC = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(WarBoardAIRoute_TargetData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute_TargetData___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_TargetData___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarBoardAIRoute_TargetData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardAIRoute_TargetData___c___ctor(WarBoardAIRoute_TargetData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarBoardAIRoute_TargetData___c___Init_b__7_0(
        WarBoardAIRoute_TargetData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._nowSquareIndex_k__BackingField;
}


void WarBoardAIRoute__CreateRouteData_d__47___ctor(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardAIRoute__CreateRouteData_d__47__MoveNext(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  const MethodInfo *v5; // x5
  int64_t v6; // x6
  System_String_o *v7; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v8; // x20
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct WarBoardData_o *monitor; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v20; // x0
  WarBoardAIRoute_o *v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x6
  struct WarBoardStageNpcEntity_o *npcData; // x9
  int32_t searchDepth; // w8
  WarBoardAIRoute__CreateRouteData_d__47_o *v26; // x9
  int32_t v27; // w10
  int32_t v28; // w20
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  int32_t MasterSquareIndex; // w2
  System_Collections_Generic_Dictionary_int__uint__o *v33; // x1
  const MethodInfo *v34; // x3
  struct System_Int32_array *AllyPutSquareIndicesWithoutMaster; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  GrandQuestFolderBoardItem_o *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  __int64 v50; // x0
  __int64 v51; // x1
  struct WarBoardData_o *warBoardData_5__2; // x8
  System_Collections_Generic_List_int__o *masterExistsForce; // x0
  _BOOL8 v54; // x0
  __int64 v55; // x1
  const MethodInfo *v56; // x4
  WarBoardAIRoute__CreateRouteData_d__47_o *v57; // x8
  int32_t servantAndEnemyRange_5__14; // w8
  int32_t servantAndEnemyMasterRange_5__15; // w9
  struct WarBoardAIRoute_AIRouteMasterData_o *v60; // x9
  int32_t v61; // w9
  struct DefenseAreaData_o *DefenseAreaData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  __int64 v70; // x0
  __int64 v71; // x1
  const MethodInfo *v72; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v73; // x8
  struct DefenseAreaData_o *defenseAreaData_5__7; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x10
  bool IsAllBlockShortestRouteEnemyAndMastr; // w0
  System_Collections_Generic_Dictionary_int__uint__o *v77; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v78; // x8
  __int128 v79; // q0
  GrandQuestFolderBoardItem_o *p__7__wrap8; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  const MethodInfo *v87; // x1
  Il2CppObject *key; // x20
  Il2CppObject *v89; // x21
  WarBoardAIRoute__CreateRouteData_d__47_o *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  const MethodInfo *v97; // x1
  WarBoardSquareData_o *Square; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *_8__1; // x21
  const MethodInfo *v107; // x1
  WarBoardPieceData_o *PieceUnique; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  __int64 v115; // x0
  __int64 v116; // x1
  const MethodInfo *v117; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v118; // x8
  int64_t baseFlag_5__6; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v120; // x9
  int64_t v121; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v122; // x8
  System_Collections_Generic_IEnumerable_TSource__o *routeDataList; // x21
  Il2CppObject *v124; // x23
  System_Func_object__bool__o *v125; // x22
  __int64 v126; // x1
  int32_t v127; // w8
  System_Collections_Generic_List_object__o *v128; // x0
  WarBoardAIRoute_o *Only; // x0
  __int64 v130; // x1
  const MethodInfo *v131; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v132; // x8
  __int64 RouteSumPieceActionCost; // x0
  __int64 v134; // x1
  const MethodInfo *v135; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v136; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v137; // x9
  _BOOL8 IsActable; // x0
  __int64 v139; // x1
  const MethodInfo *v140; // x4
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v141; // x9
  System_Collections_Generic_Dictionary_int__int__o *DesignationItemToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v143; // x0
  int32_t v144; // w2
  int32_t v145; // w3
  System_String_o *v146; // x4
  int32_t v147; // w5
  int64_t v148; // x6
  System_String_o *v149; // x7
  __int64 v150; // x0
  __int64 v151; // x1
  const MethodInfo *v152; // x4
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v153; // x9
  struct System_Collections_Generic_Dictionary_int__int__o *TargetToDistance_38490864; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v155; // x0
  int32_t v156; // w2
  int32_t v157; // w3
  System_String_o *v158; // x4
  int32_t v159; // w5
  int64_t v160; // x6
  System_String_o *v161; // x7
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v162; // x1
  const MethodInfo *v163; // x5
  System_Collections_Generic_Dictionary_uint__int__o *AllEnemyToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v165; // x0
  int32_t v166; // w2
  int32_t v167; // w3
  System_String_o *v168; // x4
  int32_t v169; // w5
  int64_t v170; // x6
  System_String_o *v171; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v172; // x0
  int32_t v173; // w2
  int32_t v174; // w3
  System_String_o *v175; // x4
  int32_t v176; // w5
  int64_t v177; // x6
  System_String_o *v178; // x7
  __int64 v179; // x0
  __int64 v180; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v181; // x8
  WarBoardPieceData_o *basePiece; // x0
  _BOOL8 isServant; // x0
  __int64 v184; // x1
  const MethodInfo *v185; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v186; // x9
  WarBoardAIRoute_AdvantagePieceData_o *AdvantagePieceData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v188; // x0
  int32_t v189; // w2
  int32_t v190; // w3
  System_String_o *v191; // x4
  int32_t v192; // w5
  int64_t v193; // x6
  System_String_o *v194; // x7
  const MethodInfo *v195; // x5
  int32_t masterSquareIndex_5__4; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v197; // x0
  __int64 v198; // x0
  __int64 v199; // x1
  const MethodInfo *v200; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v201; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v202; // x9
  struct WarBoardPieceData_o *v203; // x11
  struct WarBoardAIRoute_AIRouteMasterData_o *v204; // x9
  int32_t masterType; // w10
  int32_t index_k__BackingField; // w11
  struct WarBoardStageNpcEntity_o *v207; // x12
  System_Collections_Generic_HashSet_T__o *v208; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v209; // x0
  int32_t v210; // w2
  int32_t v211; // w3
  System_String_o *v212; // x4
  int32_t v213; // w5
  int64_t v214; // x6
  System_String_o *v215; // x7
  System_Collections_Generic_HashSet_T__o *v216; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v217; // x0
  int32_t v218; // w2
  int32_t v219; // w3
  System_String_o *v220; // x4
  int32_t v221; // w5
  int64_t v222; // x6
  System_String_o *v223; // x7
  __int64 v224; // x1
  System_Collections_Generic_List_object__o *v225; // x0
  _BOOL8 v226; // x0
  __int64 v227; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v230; // x10
  struct WarBoardPieceData_o *v231; // x10
  System_Collections_Generic_HashSet_T__o *basePieceActionPieceRouteList_5__22; // x0
  _DWORD *v233; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v234; // x10
  struct WarBoardPieceData_o *v235; // x10
  struct WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData_5__21; // x0
  __int64 v237; // x0
  __int64 v238; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v239; // x8
  int32_t v240; // w9
  System_Collections_Generic_IEnumerable_TSource__o *v241; // x20
  WarBoardAIRoute___c_c *v242; // x8
  System_Func_T__TResult__o *_9__47_6; // x21
  Il2CppObject *v244; // x22
  struct WarBoardAIRoute___c_StaticFields *v245; // x0
  int32_t v246; // w2
  int32_t v247; // w3
  System_String_o *v248; // x4
  int32_t v249; // w5
  int64_t v250; // x6
  System_String_o *v251; // x7
  __int64 v252; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v253; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v254; // x0
  __int64 Count; // x0
  __int64 v256; // x1
  struct WarBoardStageNpcEntity_o *v257; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v258; // x11
  float v259; // s0
  int32_t v260; // w9
  int32_t calcEllipsisMin; // w8
  System_Linq_IOrderedEnumerable_TSource__c *v262; // x8
  __int64 v263; // x9
  int32_t *p_offset; // x10
  __int64 v265; // x0
  __int64 v266; // x1
  int32_t *v267; // x0
  int32_t v268; // w2
  int32_t v269; // w3
  System_String_o *v270; // x4
  int32_t v271; // w5
  int64_t v272; // x6
  System_String_o *v273; // x7
  __int64 *v274; // x19
  __int64 v275; // x8
  __int64 v276; // x9
  int *v277; // x10
  __int64 v278; // x0
  __int64 v279; // x0
  __int64 *v280; // x19
  __int64 v281; // x8
  __int64 v282; // x9
  int *v283; // x10
  __int64 v284; // x0
  int32_t *p__7__wrap24; // x0
  int32_t v286; // w2
  int32_t v287; // w3
  System_String_o *v288; // x4
  int32_t v289; // w5
  int64_t v290; // x6
  System_String_o *v291; // x7
  Il2CppObject *v292; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v293; // x0
  int32_t v294; // w2
  int32_t v295; // w3
  System_String_o *v296; // x4
  int32_t v297; // w5
  int64_t v298; // x6
  System_String_o *v299; // x7
  __int64 v300; // x1
  WarBoardSquareData_o *v301; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *MyAndLinkedSquareIndecies; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v303; // x0
  int32_t v304; // w2
  int32_t v305; // w3
  System_String_o *v306; // x4
  int32_t v307; // w5
  int64_t v308; // x6
  System_String_o *v309; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v310; // x8
  int v311; // w9
  __int64 v312; // x21
  __int64 v313; // x0
  __int64 v314; // x1
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v315; // x8
  __int64 _7__wrap23_low; // x9
  int32_t *v317; // x27
  WarBoardAIRoute_RouteData_o *v318; // x20
  const MethodInfo *v319; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v320; // x9
  int32_t getEnumeratorRetType; // w8
  int32_t v322; // w10
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v323; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dicBaseDIRange_5__18; // x20
  WarBoardAIRoute___c_c *v325; // x8
  System_Func_T__TResult__o *_9__47_1; // x22
  Il2CppObject *v327; // x23
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v329; // w2
  int32_t v330; // w3
  System_String_o *v331; // x4
  int32_t v332; // w5
  int64_t v333; // x6
  System_String_o *v334; // x7
  System_Func_T__TResult__o *_9__47_2; // x23
  Il2CppObject *v336; // x24
  struct WarBoardAIRoute___c_StaticFields *v337; // x0
  int32_t v338; // w2
  int32_t v339; // w3
  System_String_o *v340; // x4
  int32_t v341; // w5
  int64_t v342; // x6
  System_String_o *v343; // x7
  __int64 v344; // x1
  int32_t v345; // w2
  int32_t v346; // w3
  System_String_o *v347; // x4
  int32_t v348; // w5
  int64_t v349; // x6
  System_String_o *v350; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v351; // x20
  WarBoardAIRoute_RouteData_o *v352; // x0
  struct WarBoardSquareData_o *v353; // x1
  __int64 v354; // x0
  __int64 v355; // x1
  int32_t v356; // w2
  int32_t v357; // w3
  System_String_o *v358; // x4
  int32_t v359; // w5
  int64_t v360; // x6
  System_String_o *v361; // x7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v362; // x8
  WarBoardAIRoute_RouteData_o *v363; // x0
  struct WarBoardPieceData_o *v364; // x1
  __int64 v365; // x1
  int32_t v366; // w2
  int32_t v367; // w3
  System_String_o *v368; // x4
  int32_t v369; // w5
  int64_t v370; // x6
  System_String_o *v371; // x7
  WarBoardAIRoute_RouteData_o *v372; // x0
  const MethodInfo *v373; // x1
  WarBoardAIRoute_RouteData_o *v374; // x22
  int32_t v375; // w23
  WarBoardSquareData_o *v376; // x0
  int32_t v377; // w2
  int32_t v378; // w3
  System_String_o *v379; // x4
  int32_t v380; // w5
  int64_t v381; // x6
  System_String_o *v382; // x7
  __int64 v383; // x1
  System_Collections_Generic_Dictionary_uint__int__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v385; // x19
  __int64 v386; // x1
  const MethodInfo *v387; // x4
  System_Collections_Generic_Dictionary_uint__int__o *v388; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v390; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v391; // x8
  WarBoardAIRoute_RouteData_o *v392; // x22
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *MoveByTargetDistance; // x0
  __int64 v394; // x1
  int32_t v395; // w2
  int32_t v396; // w3
  System_String_o *v397; // x4
  int32_t v398; // w5
  int64_t v399; // x6
  System_String_o *v400; // x7
  WarBoardAIRoute_o *v401; // x0
  WarBoardPieceData_o *v402; // x1
  const MethodInfo *v403; // x4
  WarBoardAIRoute_RouteData_o *v404; // x20
  WarBoardPieceData_o *ActionPiece; // x0
  int32_t v406; // w2
  int32_t v407; // w3
  System_String_o *v408; // x4
  int32_t v409; // w5
  int64_t v410; // x6
  System_String_o *v411; // x7
  GrandQuestFolderBoardItem_o *p_actionPiece; // x0
  __int64 v413; // x1
  int32_t v414; // w2
  const MethodInfo *v415; // x3
  System_String_o *v416; // x4
  int32_t v417; // w5
  int64_t v418; // x6
  System_String_o *v419; // x7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v420; // x8
  struct WarBoardPieceData_o *v421; // x9
  struct WarBoardPieceData_o *v422; // x10
  struct WarBoardPieceData_o *v423; // x8
  int32_t limitActionCount_k__BackingField; // w19
  int32_t currentActionCount_k__BackingField; // w20
  System_Math_c *v426; // x0
  WarBoardAIRoute_RouteData_o *v427; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v428; // x9
  int v429; // w11
  struct WarBoardSquareData_o *baseSquare_5__11; // x10
  WarBoardData_o *v431; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v432; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v433; // x9
  WarBoardPieceData_o *v434; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v435; // x8
  WarBoardPieceData_o *v436; // x0
  WarBoardPieceData_o *v437; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v438; // x8
  WarBoardPieceData_o *v439; // x22
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v440; // x8
  WarBoardPieceData_o *v441; // x0
  WarBoardPieceData_o *v442; // x0
  WarBoardAIRoute_RouteData_o *v443; // x8
  struct WarBoardPieceData_o *v444; // x9
  WarBoardPieceData_o *v445; // x0
  WarBoardAIRoute_RouteData_o *v446; // x19
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v447; // x8
  struct WarBoardPieceData_o *v448; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  int64_t flagNow; // x22
  __int64 ClassId; // x0
  __int64 v452; // x1
  struct WarBoardPieceData_o *v453; // x8
  int32_t v454; // w20
  BattleServantData_o *v455; // x0
  WarBoardAIRoute_o *v456; // x0
  const MethodInfo *v457; // x3
  int64_t FlagAdvantage; // x0
  __int64 v459; // x1
  const MethodInfo *v460; // x5
  struct WarBoardPieceData_o *v461; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v462; // x8
  WarBoardPieceData_o *v463; // x22
  WarBoardAIRoute_RouteData_o *v464; // x2
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v465; // x9
  WarBoardPieceData_o *v466; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v467; // x9
  System_Collections_Generic_List_object__o *v468; // x0
  int32_t requiredCost_5__3; // w23
  WarBoardPieceData_o *v470; // x20
  WarBoardPieceData_o *v471; // x22
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v472; // x4
  const MethodInfo *v473; // x6
  const MethodInfo *v474; // x2
  int32_t MasterSquareIndexFromPlaceData; // w22
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v476; // x23
  System_Func_object__bool__o *v477; // x24
  DefenseAreaData_o *v478; // x0
  __int64 v479; // x1
  const MethodInfo *v480; // x3
  struct WarBoardAIRoute_AdvantagePieceData_o *v481; // x23
  System_Func_object__bool__o *v482; // x24
  struct DefenseAreaData_o *v483; // x23
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v484; // x9
  WarBoardPieceData_o *v485; // x0
  System_Int32_array *v486; // x2
  const MethodInfo *v487; // x4
  struct WarBoardAIRoute_AIRouteMasterData_o *v488; // x8
  _BOOL8 v489; // x0
  __int64 v490; // x1
  WarBoardAIRoute_RouteData_o *v491; // x21
  int64_t v492; // x8
  System_Collections_Generic_List_object__o *v493; // x23
  __int64 v494; // x0
  __int64 v495; // x1
  int32_t v496; // w2
  int32_t v497; // w3
  System_String_o *v498; // x4
  int32_t v499; // w5
  int64_t v500; // x6
  System_String_o *v501; // x7
  __int64 v502; // x0
  __int64 v503; // x1
  WarBoardAIRoute_RouteData_o *v504; // x21
  System_Collections_Generic_Dictionary_uint__int__o *v505; // x23
  int32_t v506; // w2
  int32_t v507; // w3
  System_String_o *v508; // x4
  int32_t v509; // w5
  int64_t v510; // x6
  System_String_o *v511; // x7
  __int64 v512; // x1
  System_Collections_Generic_Dictionary_int__uint__o *v513; // x0
  _BOOL8 v514; // x0
  __int64 v515; // x1
  const MethodInfo *v516; // x5
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v517; // x8
  struct WarBoardPieceData_o *v518; // x8
  uint32_t key_high; // w21
  int32_t v520; // w24
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x23
  int32_t v522; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v523; // x0
  __int64 v524; // x0
  __int64 v525; // x1
  WarBoardAIRoute_RouteData_o *v526; // x21
  System_Collections_Generic_List_int__o *v527; // x23
  __int64 v528; // x0
  __int64 v529; // x1
  int32_t v530; // w2
  int32_t v531; // w3
  System_String_o *v532; // x4
  int32_t v533; // w5
  int64_t v534; // x6
  System_String_o *v535; // x7
  GrandQuestFolderBoardItem_o *v536; // x21
  System_Collections_Generic_Dictionary_int__bool__o *v537; // x23
  __int64 v538; // x0
  __int64 v539; // x1
  int32_t v540; // w2
  int32_t v541; // w3
  System_String_o *v542; // x4
  int32_t v543; // w5
  int64_t v544; // x6
  System_String_o *v545; // x7
  WarBoardAIRoute_RouteData_o *v546; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v547; // x23
  __int64 v548; // x0
  __int64 v549; // x1
  int32_t v550; // w2
  int32_t v551; // w3
  System_String_o *v552; // x4
  int32_t v553; // w5
  int64_t v554; // x6
  System_String_o *v555; // x7
  __int64 v556; // x0
  __int64 v557; // x1
  WarBoardAIRoute_RouteData_o *v558; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v559; // x8
  WarBoardPieceData_o *v560; // x0
  _BOOL8 IsBlockShortestRouteEnemyAndMaster; // x0
  __int64 v562; // x1
  const MethodInfo *v563; // x2
  const MethodInfo *v564; // x3
  const MethodInfo *v565; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v566; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v567; // x9
  struct WarBoardPieceData_o *v568; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v569; // x10
  DefenseAreaData_o *v570; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v571; // x9
  struct WarBoardPieceData_o *v572; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v573; // x11
  int32_t v574; // w10
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v575; // x9
  struct WarBoardPieceData_o *v576; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v577; // x10
  int32_t v578; // w21
  WarBoardAIRoute_RouteData_o *v579; // x9
  int v580; // w10
  System_Collections_Generic_IEnumerable_TSource__o *v581; // x0
  __int64 v582; // x0
  int tmpFlagNow_5__12; // w10
  bool v584; // zf
  System_Collections_Generic_Dictionary_int__int__o *v585; // x0
  const MethodInfo *v586; // x5
  int32_t v587; // w21
  int v588; // w29
  int32_t v589; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v590; // x0
  __int64 v591; // x0
  __int64 v592; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x8
  int v594; // w9
  int32_t v595; // w2
  __int64 v596; // x0
  __int64 v597; // x1
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  __int64 v599; // x0
  __int64 v600; // x1
  struct System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v603; // x9
  __int64 size; // x10
  const MethodInfo *v605; // x5
  int32_t v606; // w21
  int32_t enemyMasterSquareIndex; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v608; // x0
  __int64 v609; // x0
  __int64 v610; // x1
  const MethodInfo *v611; // x3
  WarBoardAIRoute_RouteData_o *v612; // x19
  int32_t servantAndMasterRange_5__13; // w8
  bool v614; // zf
  int32_t v615; // w8
  WarBoardAIManager_c *v616; // x0
  WarBoardAIRoute_o *v617; // x0
  const MethodInfo *v618; // x4
  struct WarBoardAIRoute_AIRouteMasterData_o *v619; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v620; // x8
  WarBoardPieceData_o *v621; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v622; // x9
  struct WarBoardPieceData_o *v623; // x9
  WarBoardAIManager_c *v624; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v627; // x1
  const MethodInfo *v628; // x5
  int32_t currentKey; // w21
  int32_t v630; // w22
  System_Int32_array *v631; // x0
  __int64 v632; // x1
  struct WarBoardStageNpcEntity_o *v633; // x8
  __int64 v634; // x1
  const MethodInfo *v635; // x3
  WarBoardAIRoute_RouteData_o *v636; // x19
  WarBoardAIManager_c *v637; // x0
  struct DefenseAreaData_o *v638; // x8
  __int64 v639; // x0
  __int64 v640; // x1
  WarBoardAIManager_c *v641; // x0
  System_Collections_Generic_Dictionary_int__object__o *v642; // x0
  const MethodInfo *v643; // x5
  bool v644; // w21
  int32_t v645; // w22
  int32_t v646; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v647; // x22
  const MethodInfo *v648; // x2
  WarBoardAIRoute_RouteData_o *v649; // x19
  WarBoardData_o *v650; // x0
  WarBoardEffectData_o *Effect; // x0
  __int64 v652; // x1
  System_Collections_Generic_List_int__o *v653; // x22
  __int64 v654; // x1
  System_Collections_Generic_List_object__o *v655; // x0
  _BOOL8 v656; // x0
  __int64 v657; // x1
  Il2CppObject *v658; // x21
  Il2CppClass *v659; // x0
  _BOOL8 v660; // x0
  __int64 monitor_high; // x1
  struct System_Int32_array *v662; // x8
  _QWORD *v663; // x9
  __int64 v664; // x10
  WarBoardPieceData_o *v665; // x0
  __int64 v666; // x1
  WarBoardPieceData_o *v667; // x0
  _BOOL8 v668; // x0
  __int64 v669; // x1
  __int64 monitor_low; // x1
  struct System_Int32_array *v671; // x8
  _QWORD *v672; // x9
  __int64 v673; // x10
  __int64 v674; // x0
  __int64 v675; // x1
  WarBoardPieceData_o *v676; // x0
  _BOOL8 v677; // x0
  __int64 v678; // x1
  const MethodInfo *v679; // x3
  _BOOL8 CanAcquireItem; // x0
  __int64 v681; // x1
  const MethodInfo *v682; // x4
  WarBoardAIRoute_RouteData_o *v683; // x8
  int64_t v684; // x9
  WarBoardPieceData_o *v685; // x0
  __int64 v686; // x1
  const MethodInfo *v687; // x3
  __int64 v688; // x1
  WarBoardAIRoute_RouteData_o *v689; // x8
  WarBoardPieceData_o *v690; // x0
  __int64 v691; // x1
  const MethodInfo *v692; // x3
  __int64 v693; // x1
  __int64 v694; // x0
  __int64 v695; // x1
  __int64 FlagOutOfWarningAreaToDistance; // x0
  __int64 v697; // x1
  WarBoardAIRoute_RouteData_o *v698; // x8
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x9
  struct WarBoardPieceData_o *v700; // x8
  System_Collections_Generic_Dictionary_int__object__o *piecePersonalityDic; // x0
  Il2CppObject *v702; // x22
  WarBoardAIEvalCalcurater_o *v703; // x21
  __int64 v704; // x0
  __int64 v705; // x1
  const MethodInfo *v706; // x1
  WarBoardAIRoute___c_c *v707; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v708; // x22
  System_Func_object__object__o *_9__47_5; // x23
  Il2CppObject *v710; // x24
  struct WarBoardAIRoute___c_StaticFields *v711; // x0
  int32_t v712; // w2
  int32_t v713; // w3
  System_String_o *v714; // x4
  int32_t v715; // w5
  int64_t v716; // x6
  System_String_o *v717; // x7
  System_Collections_Generic_IEnumerable_T__o *v718; // x23
  System_Collections_Generic_List_object__o *v719; // x22
  __int64 v720; // x0
  __int64 v721; // x1
  int32_t v722; // w2
  int32_t v723; // w3
  System_String_o *v724; // x4
  int32_t v725; // w5
  int64_t v726; // x6
  System_String_o *v727; // x7
  Il2CppObject *v728; // x1
  struct System_Object_array *v729; // x8
  _QWORD *v730; // x9
  __int64 v731; // x10
  Il2CppClass **v732; // x0
  WarBoardAIRoute_RouteData_o *v733; // x0
  __int64 v734; // x1
  int32_t v735; // w2
  int32_t v736; // w3
  System_String_o *v737; // x4
  int32_t v738; // w5
  int64_t v739; // x6
  System_String_o *v740; // x7
  const MethodInfo *v741; // x1
  System_Collections_Generic_List_object__o *allRouteList; // x0
  struct System_Object_array *v743; // x8
  _QWORD *v744; // x9
  __int64 v745; // x10
  Il2CppClass **v746; // x8
  int32_t searchCount; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x21
  Il2CppObject *v749; // x0
  GrandQuestFolderBoardItem_o *p_basePieceBasePieceRouteList_5__23; // x8
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v751; // x10
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *basePieceBasePieceRouteList_5__23; // t1
  WarBoardAIRoute__CreateRouteData_d__47_o *v753; // x0
  int32_t v754; // w2
  int32_t v755; // w3
  System_String_o *v756; // x4
  int32_t v757; // w5
  int64_t v758; // x6
  System_String_o *v759; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v760; // x0
  int32_t v761; // w2
  int32_t v762; // w3
  System_String_o *v763; // x4
  int32_t v764; // w5
  int64_t v765; // x6
  System_String_o *v766; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v767; // x0
  int32_t v768; // w2
  int32_t v769; // w3
  System_String_o *v770; // x4
  int32_t v771; // w5
  int64_t v772; // x6
  System_String_o *v773; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v774; // x0
  int32_t v775; // w2
  int32_t v776; // w3
  System_String_o *v777; // x4
  int32_t v778; // w5
  int64_t v779; // x6
  System_String_o *v780; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v781; // x0
  int32_t v782; // w2
  int32_t v783; // w3
  System_String_o *v784; // x4
  int32_t v785; // w5
  int64_t v786; // x6
  System_String_o *v787; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v788; // x0
  int32_t v789; // w2
  int32_t v790; // w3
  System_String_o *v791; // x4
  int32_t v792; // w5
  int64_t v793; // x6
  System_String_o *v794; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v795; // x0
  int32_t v796; // w2
  int32_t v797; // w3
  System_String_o *v798; // x4
  int32_t v799; // w5
  int64_t v800; // x6
  System_String_o *v801; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v802; // x0
  int32_t v803; // w2
  int32_t v804; // w3
  System_String_o *v805; // x4
  int32_t v806; // w5
  int64_t v807; // x6
  System_String_o *v808; // x7
  Il2CppObject *v809; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v810; // x0
  int32_t v811; // w2
  int32_t v812; // w3
  System_String_o *v813; // x4
  int32_t v814; // w5
  int64_t v815; // x6
  System_String_o *v816; // x7
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // [xsp+10h] [xbp-1B0h]
  WarBoardAIRoute_o *_4__this; // [xsp+18h] [xbp-1A8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v819; // [xsp+20h] [xbp-1A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v820; // [xsp+50h] [xbp-170h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o **v821; // [xsp+78h] [xbp-148h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v822; // [xsp+80h] [xbp-140h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v823; // [xsp+B0h] [xbp-110h] BYREF
  __int128 v824; // [xsp+D0h] [xbp-F0h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v825; // [xsp+E0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v826; // [xsp+F0h] [xbp-D0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+118h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+120h] [xbp-A0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+128h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v830; // [xsp+130h] [xbp-90h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+148h] [xbp-78h] BYREF
  __int64 actionCount; // [xsp+150h] [xbp-70h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v833; // [xsp+158h] [xbp-68h] BYREF

  v8 = this;
  v833 = this;
  if ( (byte_4D2E2FD & 1) == 0 )
  {
    sub_1C93AD4(&AStarSearch_TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C93AD4(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
    sub_1C93AD4(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___79037208);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C93AD4(&WarBoardAIRoute_RouteData_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__);
    sub_1C93AD4(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__);
    sub_1C93AD4(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
    sub_1C93AD4(&WarBoardAIRoute___c_TypeInfo);
    sub_1C93AD4(&WarBoardAIEvalCalcurater_TypeInfo);
    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E2FD = 1;
  }
  *(_QWORD *)masterReplaceCount = 0;
  actionCount = 0;
  memset(&v830, 0, sizeof(v830));
  value = 0;
  routeData = 0;
  route = 0;
  memset(&v823, 0, sizeof(v823));
  memset(&v826, 0, 32);
  v824 = 0u;
  v825 = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v822, 0, sizeof(v822));
  *(_QWORD *)&v820.fields._getEnumeratorRetType = 0;
  v821 = &v833;
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    servantAndEnemyRange_5__14 = v8->fields._servantAndEnemyRange_5__14;
    servantAndEnemyMasterRange_5__15 = v8->fields._servantAndEnemyMasterRange_5__15;
    v8->fields.__1__state = -4;
    if ( servantAndEnemyRange_5__14 < servantAndEnemyMasterRange_5__15 )
    {
LABEL_131:
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(v8, method);
      p__7__wrap24 = &v833->fields.__7__wrap24;
      *(_QWORD *)&v833->fields.__7__wrap24 = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)p__7__wrap24, 0, v286, v287, v288, v289, v290, v291);
      return 0;
    }
LABEL_117:
    v274 = *(__int64 **)&v8->fields.__7__wrap24;
    if ( !v274 )
      sub_1C93D2C(this, method);
    v275 = *v274;
    v276 = *(unsigned __int16 *)(*v274 + 302);
    if ( *(_WORD *)(*v274 + 302) )
    {
      v277 = (int *)(*(_QWORD *)(v275 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v277 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v276;
        v277 += 4;
        if ( !v276 )
          goto LABEL_122;
      }
      v278 = v275 + 16LL * *v277 + 312;
    }
    else
    {
LABEL_122:
      v278 = sub_1C69E5C(*(_QWORD *)&v8->fields.__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v279 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v278)(v274, *(_QWORD *)(v278 + 8));
    v8 = v833;
    if ( (v279 & 1) != 0 )
    {
      v280 = *(__int64 **)&v833->fields.__7__wrap24;
      if ( !v280 )
        sub_1C93D2C(v279, method);
      v281 = *v280;
      v282 = *(unsigned __int16 *)(*v280 + 302);
      if ( *(_WORD *)(*v280 + 302) )
      {
        v283 = (int *)(*(_QWORD *)(v281 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v283 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          --v282;
          v283 += 4;
          if ( !v282 )
            goto LABEL_130;
        }
        v284 = v281 + 16LL * *v283 + 312;
      }
      else
      {
LABEL_130:
        v284 = sub_1C69E5C(
                 *(_QWORD *)&v833->fields.__7__wrap24,
                 System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo,
                 0);
      }
      v292 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v284)(v280, *(_QWORD *)(v284 + 8));
      v293 = v833;
      v833->fields.__2__current = v292;
      v293 = (WarBoardAIRoute__CreateRouteData_d__47_o *)((char *)v293 + 24);
      ++LODWORD(v293->fields._baseSquare_5__11);
      sub_1C93A78((GrandQuestFolderBoardItem_o *)v293, (int32_t)v292, v294, v295, v296, v297, v298, v299);
      v833->fields.__1__state = 2;
      return 1;
    }
    goto LABEL_131;
  }
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -3;
    goto LABEL_662;
  }
  result = 0;
  if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      sub_1C93D2C(0, v12);
    monitor = (struct WarBoardData_o *)Instance[27].monitor;
    v20 = v833;
    v833->fields._warBoardData_5__2 = monitor;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v20->fields._warBoardData_5__2,
      (int32_t)monitor,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    if ( !_4__this )
      sub_1C93D2C(v21, v22);
    npcData = _4__this->fields.npcData;
    if ( !npcData )
      sub_1C93D2C(v21, v22);
    searchDepth = npcData->fields.searchDepth;
    if ( !searchDepth )
    {
      searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
      npcData->fields.searchDepth = searchDepth;
    }
    v26 = v833;
    v27 = v833->fields.searchCount + 1;
    v833->fields.searchCount = v27;
    if ( v27 > searchDepth )
      return 0;
    *(_QWORD *)masterReplaceCount = 0;
    actionCount = 0;
    WarBoardAIRoute__GetRouteDataActionList(
      v21,
      v26->fields.routeDataList,
      (int32_t *)&actionCount + 1,
      (int32_t *)&actionCount,
      &masterReplaceCount[1],
      masterReplaceCount,
      v23);
    v28 = masterReplaceCount[1] * _4__this->fields.masterMoveCost
        + (actionCount + 2 * HIDWORD(actionCount)) * _4__this->fields.moveCost
        + masterReplaceCount[0] * (_4__this->fields.masterMoveCost + _4__this->fields.moveCost);
    v833->fields._requiredCost_5__3 = v28;
    v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v29 )
      sub_1C93D2C(0, v30);
    if ( v28 >= SHIDWORD(v29[47].klass) )
      return 0;
    MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v833->fields.piecePlaceData, v31);
    v33 = v833->fields.piecePlaceData;
    v833->fields._masterSquareIndex_5__4 = MasterSquareIndex;
    AllyPutSquareIndicesWithoutMaster = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                          _4__this,
                                          v33,
                                          MasterSquareIndex,
                                          v34);
    v36 = v833;
    v833->fields._allyPieceIndexs_5__5 = AllyPutSquareIndicesWithoutMaster;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v36->fields._allyPieceIndexs_5__5,
      (int32_t)AllyPutSquareIndicesWithoutMaster,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    v43 = (GrandQuestFolderBoardItem_o *)v833;
    v833->fields._defenseAreaData_5__7 = 0;
    v43 = (GrandQuestFolderBoardItem_o *)((char *)v43 + 104);
    v43[-1].fields._ClosedMessage_k__BackingField = (struct System_String_o *)(&dword_0 + 1);
    sub_1C93A78(v43, 0, v44, v45, v46, v47, v48, v49);
    warBoardData_5__2 = v833->fields._warBoardData_5__2;
    if ( !warBoardData_5__2 )
      sub_1C93D2C(v50, v51);
    masterExistsForce = warBoardData_5__2->fields.masterExistsForce;
    if ( !masterExistsForce )
      sub_1C93D2C(0, v51);
    v54 = System_Collections_Generic_List_int___Contains(
            masterExistsForce,
            _4__this->fields.forceId,
            (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
    v57 = v833;
    if ( v54 )
    {
      if ( v833 )
      {
        v833->fields._masterExists_5__8 = 1;
LABEL_25:
        DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                            _4__this,
                            v57->fields._masterSquareIndex_5__4,
                            v57->fields._allyPieceIndexs_5__5,
                            v57->fields.piecePlaceData,
                            v56);
        v63 = v833;
        v833->fields._defenseAreaData_5__7 = DefenseAreaData;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v63->fields._defenseAreaData_5__7,
          (int32_t)DefenseAreaData,
          v64,
          v65,
          v66,
          v67,
          v68,
          v69);
        v73 = v833;
        defenseAreaData_5__7 = v833->fields._defenseAreaData_5__7;
        if ( !defenseAreaData_5__7 )
          sub_1C93D2C(v70, v71);
        v833->fields._baseFlag_5__6 |= defenseAreaData_5__7->fields._Flag_k__BackingField;
        aiRouteMasterData = _4__this->fields.aiRouteMasterData;
        if ( !aiRouteMasterData )
          sub_1C93D2C(v70, v71);
        IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                                 defenseAreaData_5__7->fields._ShortestRoutes_k__BackingField,
                                                 v73->fields.piecePlaceData,
                                                 aiRouteMasterData->fields.masterType == 1,
                                                 v72);
        v57 = v833;
        if ( IsAllBlockShortestRouteEnemyAndMastr )
          v833->fields._baseFlag_5__6 |= 0x20000000uLL;
LABEL_29:
        v77 = v57->fields.piecePlaceData;
        if ( !v77 )
          sub_1C93D2C(0, v55);
        System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
          &v820,
          v77,
          (const MethodInfo_34E1648 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
        v78 = v833;
        v79 = *(_OWORD *)&v820.fields._dictionary;
        p__7__wrap8 = (GrandQuestFolderBoardItem_o *)&v833->fields.__7__wrap8;
        *(_OWORD *)&v819.fields._dictionary = *(_OWORD *)&v820.fields._dictionary;
        v819.fields._current = v820.fields._current;
        v833->fields.__7__wrap8.fields._current = v820.fields._current;
        *(_OWORD *)&v78->fields.__7__wrap8.fields._dictionary = v79;
        sub_1C93A78(p__7__wrap8, 0, v81, v82, v83, v84, v85, v86);
        v833->fields.__1__state = -3;
        while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                  &v833->fields.__7__wrap8,
                  (const MethodInfo_3620460 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
        {
          key = v833->fields.__7__wrap8.fields._current.fields.key;
          v89 = (Il2CppObject *)sub_1C93D20(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
          System_Object___ctor(v89, 0);
          v90 = v833;
          v833->fields.__8__1 = (struct WarBoardAIRoute___c__DisplayClass47_0_o *)v89;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v90->fields.__8__1, (int32_t)v89, v91, v92, v93, v94, v95, v96);
          v833->fields.__7__wrap8.fields._getEnumeratorRetType = (int)key;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          Square = WarBoardAIManager__GetSquare((int32_t)key, v97);
          v99 = v833;
          *(_QWORD *)&v833->fields._baseSquareIndex_5__10 = Square;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v99->fields._baseSquareIndex_5__10,
            (int32_t)Square,
            v100,
            v101,
            v102,
            v103,
            v104,
            v105);
          _8__1 = v833->fields.__8__1;
          PieceUnique = WarBoardAIManager__GetPieceUnique(HIDWORD(key), v107);
          if ( !_8__1 )
            sub_1C93D2C(PieceUnique, PieceUnique);
          _8__1->fields.basePiece = PieceUnique;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&_8__1->fields,
            (int32_t)PieceUnique,
            v109,
            v110,
            v111,
            v112,
            v113,
            v114);
          v118 = v833;
          baseFlag_5__6 = v833->fields._baseFlag_5__6;
          v120 = v833->fields.__8__1;
          v833->fields._tmpFlagNow_5__12 = -1;
          v118->fields._servantAndMasterRange_5__13 = -1;
          v118->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
          if ( !v120 )
            sub_1C93D2C(v115, v116);
          if ( !_4__this )
            sub_1C93D2C(0, v116);
          v121 = WarBoardAIRoute__GetFlagAroundSquareCheck(
                   _4__this,
                   *(WarBoardSquareData_o **)&v118->fields._baseSquareIndex_5__10,
                   v120->fields.basePiece,
                   v118->fields.piecePlaceData,
                   v118->fields._masterSquareIndex_5__4,
                   v117);
          v122 = v833;
          v833->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)(v121 | baseFlag_5__6);
          routeDataList = (System_Collections_Generic_IEnumerable_TSource__o *)v122->fields.routeDataList;
          v124 = (Il2CppObject *)v122->fields.__8__1;
          v125 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v125,
            v124,
            Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
            0);
          v127 = System_Linq_Enumerable__Count_object__52190488(
                   routeDataList,
                   (System_Func_TSource__bool__o *)v125,
                   (const MethodInfo_31C5D18 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
          v128 = (System_Collections_Generic_List_object__o *)v833->fields.routeDataList;
          v833->fields._servantAndEnemyRange_5__14 = v127;
          if ( !v128 )
            sub_1C93D2C(0, v126);
          Only = (WarBoardAIRoute_o *)System_Collections_Generic_List_object___AsReadOnly(
                                        v128,
                                        (const MethodInfo_3879BC4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
          v132 = v833->fields.__8__1;
          if ( !v132 )
            sub_1C93D2C(Only, v130);
          RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                      Only,
                                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                      v132->fields.basePiece,
                                      v131);
          v136 = v833;
          v137 = v833->fields.__8__1;
          v833->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
          if ( !v137 )
            sub_1C93D2C(RouteSumPieceActionCost, v134);
          IsActable = WarBoardAIRoute__IsActable(
                        _4__this,
                        v137->fields.basePiece,
                        v136->fields._servantAndEnemyRange_5__14,
                        v136->fields._requiredCost_5__3,
                        RouteSumPieceActionCost,
                        v135);
          if ( IsActable )
          {
            v141 = v833->fields.__8__1;
            if ( !v141 )
              sub_1C93D2C(IsActable, v139);
            DesignationItemToDistance = WarBoardAIRoute__GetDesignationItemToDistance(
                                          _4__this,
                                          v141->fields.basePiece,
                                          v833->fields.routeDataList,
                                          v833->fields.__7__wrap8.fields._getEnumeratorRetType,
                                          v140);
            v143 = v833;
            *(_QWORD *)&v833->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v143->fields._sumPieceActionCost_5__17,
              (int32_t)DesignationItemToDistance,
              v144,
              v145,
              v146,
              v147,
              v148,
              v149);
            v153 = v833->fields.__8__1;
            if ( !v153 )
              sub_1C93D2C(v150, v151);
            TargetToDistance_38490864 = (struct System_Collections_Generic_Dictionary_int__int__o *)WarBoardAIRoute__GetTargetToDistance_38490864(_4__this, v153->fields.basePiece, v833->fields.routeDataList, v833->fields.__7__wrap8.fields._getEnumeratorRetType, v152);
            v155 = v833;
            v833->fields._dicBaseDIRange_5__18 = TargetToDistance_38490864;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v155->fields._dicBaseDIRange_5__18,
              (int32_t)TargetToDistance_38490864,
              v156,
              v157,
              v158,
              v159,
              v160,
              v161);
            AllEnemyToDistance = WarBoardAIRoute__GetAllEnemyToDistance(
                                   _4__this,
                                   v162,
                                   v833->fields.__7__wrap8.fields._getEnumeratorRetType,
                                   (int32_t *)&v833->fields._tmpFlagNow_5__12 + 1,
                                   &v833->fields._servantAndMasterRange_5__13,
                                   v163);
            v165 = v833;
            v833->fields._dicKeyPutIndexValueTargetData_5__19 = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)AllEnemyToDistance;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v165->fields._dicKeyPutIndexValueTargetData_5__19,
              (int32_t)AllEnemyToDistance,
              v166,
              v167,
              v168,
              v169,
              v170,
              v171);
            v172 = v833;
            v833->fields._dicEnemyRange_5__20 = 0;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v172->fields._dicEnemyRange_5__20,
              0,
              v173,
              v174,
              v175,
              v176,
              v177,
              v178);
            v181 = v833->fields.__8__1;
            if ( !v181 )
              sub_1C93D2C(v179, v180);
            basePiece = v181->fields.basePiece;
            if ( !basePiece )
              sub_1C93D2C(0, v180);
            isServant = WarBoardPieceData__get_isServant(basePiece, 0);
            if ( isServant )
            {
              v186 = v833->fields.__8__1;
              if ( !v186 )
                sub_1C93D2C(isServant, v184);
              AdvantagePieceData = WarBoardAIRoute__GetAdvantagePieceData(
                                     _4__this,
                                     v186->fields.basePiece,
                                     v833->fields.__7__wrap8.fields._getEnumeratorRetType,
                                     v185);
              v188 = v833;
              v833->fields._dicEnemyRange_5__20 = (struct System_Collections_Generic_Dictionary_uint__int__o *)AdvantagePieceData;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v188->fields._dicEnemyRange_5__20,
                (int32_t)AdvantagePieceData,
                v189,
                v190,
                v191,
                v192,
                v193,
                v194);
              if ( v833->fields._masterExists_5__8 )
              {
                masterSquareIndex_5__4 = v833->fields._masterSquareIndex_5__4;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v197 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0,
                                                                              (int32_t)key,
                                                                              masterSquareIndex_5__4,
                                                                              0,
                                                                              0,
                                                                              v195);
                v198 = System_Linq_Enumerable__Count_int_(
                         v197,
                         (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
                v201 = v833;
                v202 = v833->fields.__8__1;
                LODWORD(v833->fields._tmpFlagNow_5__12) = v198;
                if ( !v202 )
                  sub_1C93D2C(v198, v199);
                v203 = v202->fields.basePiece;
                if ( !v203 )
                  sub_1C93D2C(v198, v199);
                v204 = _4__this->fields.aiRouteMasterData;
                if ( !v204 )
                  sub_1C93D2C(v198, v199);
                masterType = v204->fields.masterType;
                index_k__BackingField = v203->fields._index_k__BackingField;
                if ( masterType != 2 || v204->fields.masterPieceIndex != index_k__BackingField )
                {
                  v207 = _4__this->fields.npcData;
                  if ( !v207 )
                    sub_1C93D2C(v198, v199);
                  if ( v207->fields.defenseArea > (int)v198 )
                    v201->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v201->fields._baseSquare_5__11
                                                                                   | 0x800);
                  if ( (masterType != 2 || v204->fields.masterPieceIndex != index_k__BackingField)
                    && WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                         v201->fields._defenseAreaData_5__7,
                         v201->fields.__7__wrap8.fields._getEnumeratorRetType,
                         masterType == 1,
                         v200) )
                  {
                    v833->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v833->fields._baseSquare_5__11
                                                                                   | 0x80000000);
                  }
                }
              }
            }
            v208 = (System_Collections_Generic_HashSet_T__o *)sub_1C93D20(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_object____ctor(
              v208,
              (const MethodInfo_372B7CC *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v209 = v833;
            v833->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v208;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v209->fields._advantagePieceData_5__21,
              (int32_t)v208,
              v210,
              v211,
              v212,
              v213,
              v214,
              v215);
            v216 = (System_Collections_Generic_HashSet_T__o *)sub_1C93D20(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_object____ctor(
              v216,
              (const MethodInfo_372B7CC *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v217 = v833;
            v833->fields._basePieceActionPieceRouteList_5__22 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)v216;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v217->fields._basePieceActionPieceRouteList_5__22,
              (int32_t)v216,
              v218,
              v219,
              v220,
              v221,
              v222,
              v223);
            v225 = (System_Collections_Generic_List_object__o *)v833->fields.routeDataList;
            if ( !v225 )
              sub_1C93D2C(0, v224);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v819,
              v225,
              (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
            v830 = *(System_Collections_Generic_List_Enumerator_object__o *)&v819.fields._dictionary;
            while ( 1 )
            {
              v226 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v830,
                       (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
              if ( !v226 )
                break;
              current = v830.fields._current;
              if ( !v830.fields._current )
                sub_1C93D2C(v226, v227);
              if ( LODWORD(v830.fields._current[1].monitor) != HIDWORD(v830.fields._current[1].monitor) )
              {
                klass = v830.fields._current[3].klass;
                if ( !klass )
                  sub_1C93D2C(v226, v227);
                v230 = v833->fields.__8__1;
                if ( !v230 )
                  sub_1C93D2C(v226, v227);
                v231 = v230->fields.basePiece;
                if ( !v231 )
                  sub_1C93D2C(v226, v227);
                if ( HIDWORD(klass->_1.namespaze) == v231->fields._index_k__BackingField )
                {
                  basePieceActionPieceRouteList_5__22 = (System_Collections_Generic_HashSet_T__o *)v833->fields._basePieceActionPieceRouteList_5__22;
                  if ( !basePieceActionPieceRouteList_5__22 )
                    sub_1C93D2C(0, v227);
                  v226 = System_Collections_Generic_HashSet_object___Add(
                           basePieceActionPieceRouteList_5__22,
                           v830.fields._current,
                           (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                }
                if ( (BYTE3(current[1].klass) & 4) != 0 )
                {
                  v233 = current[3].monitor;
                  if ( !v233 )
                    sub_1C93D2C(v226, v227);
                  v234 = v833->fields.__8__1;
                  if ( !v234 )
                    sub_1C93D2C(v226, v227);
                  v235 = v234->fields.basePiece;
                  if ( !v235 )
                    sub_1C93D2C(v226, v227);
                  if ( v233[7] == v235->fields._index_k__BackingField )
                  {
                    advantagePieceData_5__21 = v833->fields._advantagePieceData_5__21;
                    if ( !advantagePieceData_5__21 )
                      sub_1C93D2C(0, v227);
                    System_Collections_Generic_HashSet_object___Add(
                      (System_Collections_Generic_HashSet_T__o *)advantagePieceData_5__21,
                      current,
                      (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                  }
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v830,
              (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
            v301 = *(WarBoardSquareData_o **)&v833->fields._baseSquareIndex_5__10;
            if ( !v301 )
              sub_1C93D2C(0, v300);
            MyAndLinkedSquareIndecies = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)WarBoardSquareData__GetMyAndLinkedSquareIndecies(v301, 0);
            v303 = v833;
            v833->fields._basePieceBasePieceRouteList_5__23 = MyAndLinkedSquareIndecies;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v303->fields._basePieceBasePieceRouteList_5__23,
              (int32_t)MyAndLinkedSquareIndecies,
              v304,
              v305,
              v306,
              v307,
              v308,
              v309);
            v310 = v833;
            v311 = 0;
            LODWORD(v833->fields.__7__wrap23) = 0;
LABEL_663:
            basePieceBasePieceRouteList_5__23 = v310->fields._basePieceBasePieceRouteList_5__23;
            p_basePieceBasePieceRouteList_5__23 = (GrandQuestFolderBoardItem_o *)&v310->fields._basePieceBasePieceRouteList_5__23;
            v751 = basePieceBasePieceRouteList_5__23;
            if ( !basePieceBasePieceRouteList_5__23 )
              sub_1C93D2C(this, method);
            if ( v311 >= SLODWORD(v751->fields._slots) )
            {
              p_basePieceBasePieceRouteList_5__23->klass = 0;
              sub_1C93A78(p_basePieceBasePieceRouteList_5__23, 0, (int32_t)v2, v3, v4, (int32_t)v5, v6, v7);
              v753 = v833;
              v833->fields.__8__1 = 0;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)&v753->fields.__8__1, 0, v754, v755, v756, v757, v758, v759);
              v760 = v833;
              *(_QWORD *)&v833->fields._baseSquareIndex_5__10 = 0;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v760->fields._baseSquareIndex_5__10,
                0,
                v761,
                v762,
                v763,
                v764,
                v765,
                v766);
              v767 = v833;
              *(_QWORD *)&v833->fields._sumPieceActionCost_5__17 = 0;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v767->fields._sumPieceActionCost_5__17,
                0,
                v768,
                v769,
                v770,
                v771,
                v772,
                v773);
              v774 = v833;
              v833->fields._dicBaseDIRange_5__18 = 0;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v774->fields._dicBaseDIRange_5__18,
                0,
                v775,
                v776,
                v777,
                v778,
                v779,
                v780);
              v781 = v833;
              v833->fields._dicKeyPutIndexValueTargetData_5__19 = 0;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v781->fields._dicKeyPutIndexValueTargetData_5__19,
                0,
                v782,
                v783,
                v784,
                v785,
                v786,
                v787);
              v788 = v833;
              v833->fields._dicEnemyRange_5__20 = 0;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v788->fields._dicEnemyRange_5__20,
                0,
                v789,
                v790,
                v791,
                v792,
                v793,
                v794);
              v795 = v833;
              v833->fields._advantagePieceData_5__21 = 0;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v795->fields._advantagePieceData_5__21,
                0,
                v796,
                v797,
                v798,
                v799,
                v800,
                v801);
              v802 = v833;
              v833->fields._basePieceActionPieceRouteList_5__22 = 0;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v802->fields._basePieceActionPieceRouteList_5__22,
                0,
                v803,
                v804,
                v805,
                v806,
                v807,
                v808);
              continue;
            }
            v312 = sub_1C93D20(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
            System_Object___ctor((Il2CppObject *)v312, 0);
            v315 = v833->fields._basePieceBasePieceRouteList_5__23;
            if ( !v315 )
              sub_1C93D2C(v313, v314);
            _7__wrap23_low = SLODWORD(v833->fields.__7__wrap23);
            if ( (unsigned int)_7__wrap23_low >= LODWORD(v315->fields._slots) )
              sub_1C93D34(v313);
            if ( !v312 )
              sub_1C93D2C(v313, v314);
            *(_DWORD *)(v312 + 16) = *(&v315->fields._count + _7__wrap23_low);
            v317 = (int32_t *)(v312 + 16);
            v318 = (WarBoardAIRoute_RouteData_o *)sub_1C93D20(WarBoardAIRoute_RouteData_TypeInfo);
            WarBoardAIRoute_RouteData___ctor(v318, v319);
            routeData = v318;
            if ( !v318 )
              sub_1C93D2C(this, method);
            v320 = v833;
            getEnumeratorRetType = v833->fields.__7__wrap8.fields._getEnumeratorRetType;
            v318->fields.baseIndex = getEnumeratorRetType;
            v322 = *v317;
            v318->fields.actionIndex = *v317;
            if ( getEnumeratorRetType == v322 )
            {
              v323 = v320->fields.routeDataList;
              if ( !v323 )
                sub_1C93D2C(this, method);
              if ( v323->fields._size > 0 )
                goto LABEL_662;
            }
            dicBaseDIRange_5__18 = (System_Collections_Generic_IEnumerable_TSource__o *)v320->fields._dicBaseDIRange_5__18;
            v325 = WarBoardAIRoute___c_TypeInfo;
            if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
              v325 = WarBoardAIRoute___c_TypeInfo;
            }
            _9__47_1 = (System_Func_T__TResult__o *)v325->static_fields->__9__47_1;
            if ( !_9__47_1 )
            {
              if ( !v325->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v325);
                v325 = WarBoardAIRoute___c_TypeInfo;
              }
              v327 = (Il2CppObject *)v325->static_fields->__9;
              _9__47_1 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
              System_Func_KeyValuePair_long__object___long____ctor(
                _9__47_1,
                v327,
                Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
                0);
              static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
              static_fields->__9__47_1 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)_9__47_1;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&static_fields->__9__47_1,
                (int32_t)_9__47_1,
                v329,
                v330,
                v331,
                v332,
                v333,
                v334);
              v325 = WarBoardAIRoute___c_TypeInfo;
            }
            if ( !v325->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v325);
              v325 = WarBoardAIRoute___c_TypeInfo;
            }
            _9__47_2 = (System_Func_T__TResult__o *)v325->static_fields->__9__47_2;
            if ( !_9__47_2 )
            {
              if ( !v325->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v325);
                v325 = WarBoardAIRoute___c_TypeInfo;
              }
              v336 = (Il2CppObject *)v325->static_fields->__9;
              _9__47_2 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
              System_Func_KeyValuePair_long__object___object____ctor(
                _9__47_2,
                v336,
                Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
                0);
              v337 = WarBoardAIRoute___c_TypeInfo->static_fields;
              v337->__9__47_2 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)_9__47_2;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v337->__9__47_2,
                (int32_t)_9__47_2,
                v338,
                v339,
                v340,
                v341,
                v342,
                v343);
            }
            v351 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__object___long__object_(
                                                                                                  dicBaseDIRange_5__18,
                                                                                                  (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                                  (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                                  (const MethodInfo_31E4390 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
            v352 = routeData;
            if ( !routeData )
              sub_1C93D2C(0, v344);
            v353 = *(struct WarBoardSquareData_o **)&v833->fields._baseSquareIndex_5__10;
            routeData->fields.baseSquare = v353;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v352->fields.baseSquare,
              (int32_t)v353,
              v345,
              v346,
              v347,
              v348,
              v349,
              v350);
            v362 = v833->fields.__8__1;
            if ( !v362 )
              sub_1C93D2C(v354, v355);
            v363 = routeData;
            if ( !routeData )
              sub_1C93D2C(0, v355);
            v364 = v362->fields.basePiece;
            routeData->fields.basePiece = v364;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v363->fields.basePiece,
              (int32_t)v364,
              v356,
              v357,
              v358,
              v359,
              v360,
              v361);
            v372 = routeData;
            if ( !routeData )
              sub_1C93D2C(0, v365);
            routeData->fields.actionPiece = 0;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)&v372->fields.actionPiece, 0, v366, v367, v368, v369, v370, v371);
            v374 = routeData;
            v375 = *v317;
            if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            v376 = WarBoardAIManager__GetSquare(v375, v373);
            if ( !v374 )
              sub_1C93D2C(v376, v376);
            v374->fields.actionSquare = v376;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v374->fields.actionSquare,
              (int32_t)v376,
              v377,
              v378,
              v379,
              v380,
              v381,
              v382);
            dicKeyPutIndexValueTargetData_5__19 = (System_Collections_Generic_Dictionary_uint__int__o *)v833->fields._dicKeyPutIndexValueTargetData_5__19;
            if ( !dicKeyPutIndexValueTargetData_5__19 )
              sub_1C93D2C(0, v383);
            v385 = routeData;
            if ( System_Collections_Generic_Dictionary_uint__int___get_Count(
                   dicKeyPutIndexValueTargetData_5__19,
                   (const MethodInfo_355E26C *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0 )
            {
              v390 = 0x7FFFFFFF;
              if ( !v385 )
                goto LABEL_253;
            }
            else
            {
              v388 = (System_Collections_Generic_Dictionary_uint__int__o *)v833->fields._dicKeyPutIndexValueTargetData_5__19;
              if ( !v388 )
                sub_1C93D2C(0, v386);
              Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                         v388,
                         (const MethodInfo_355E3CC *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
              v390 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0);
              if ( !v385 )
LABEL_253:
                sub_1C93D2C(v390, v386);
            }
            v385->fields.EnemyRangeMin = v390;
            v391 = v833->fields.__8__1;
            if ( !v391 )
              sub_1C93D2C(v390, v386);
            if ( !_4__this )
              sub_1C93D2C(v390, v386);
            v392 = routeData;
            MoveByTargetDistance = WarBoardAIRoute__GetMoveByTargetDistance(
                                     (WarBoardAIRoute_o *)v390,
                                     v351,
                                     *v317,
                                     v391->fields.basePiece,
                                     v387);
            if ( !v392 )
              sub_1C93D2C(MoveByTargetDistance, v394);
            v392->fields.dicPutIndexTargetData = v351;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v392->fields.dicPutIndexTargetData,
              (int32_t)v351,
              v395,
              v396,
              v397,
              v398,
              v399,
              v400);
            if ( !v833->fields.__8__1 )
              sub_1C93D2C(v401, v402);
            v404 = routeData;
            ActionPiece = WarBoardAIRoute__GetActionPiece(v401, v402, *v317, v833->fields.piecePlaceData, v403);
            if ( !v404 )
              sub_1C93D2C(ActionPiece, ActionPiece);
            v404->fields.actionPiece = ActionPiece;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v404->fields.actionPiece,
              (int32_t)ActionPiece,
              v406,
              v407,
              v408,
              v409,
              v410,
              v411);
            v420 = v833->fields.__8__1;
            if ( !v420 )
              sub_1C93D2C(p_actionPiece, v413);
            v421 = v420->fields.basePiece;
            if ( !v421 )
              sub_1C93D2C(p_actionPiece, v413);
            if ( v421->fields._nowSquareIndex_k__BackingField == *v317 )
            {
              if ( !routeData )
                sub_1C93D2C(0, v413);
              p_actionPiece = (GrandQuestFolderBoardItem_o *)&routeData->fields.actionPiece;
              v422 = routeData->fields.actionPiece;
              if ( v422 )
              {
                if ( v422->fields._uniqueIndex_k__BackingField == v421->fields._uniqueIndex_k__BackingField )
                {
                  p_actionPiece->klass = 0;
                  sub_1C93A78(p_actionPiece, 0, v414, (int32_t)v415, v416, v417, v418, v419);
                  v420 = v833->fields.__8__1;
                  if ( !v420 )
                    sub_1C93D2C(p_actionPiece, v413);
                }
              }
            }
            v423 = v420->fields.basePiece;
            if ( !v423 )
              sub_1C93D2C(p_actionPiece, v413);
            limitActionCount_k__BackingField = v423->fields._limitActionCount_k__BackingField;
            currentActionCount_k__BackingField = v423->fields._currentActionCount_k__BackingField;
            if ( !byte_4D2B979 )
            {
              sub_1C93AD4(&System_Math_TypeInfo);
              byte_4D2B979 = 1;
            }
            v426 = System_Math_TypeInfo;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v427 = routeData;
            if ( !routeData )
              sub_1C93D2C(v426, v413);
            v428 = v833;
            v429 = limitActionCount_k__BackingField - currentActionCount_k__BackingField;
            if ( limitActionCount_k__BackingField - currentActionCount_k__BackingField < 0 )
              v429 = currentActionCount_k__BackingField - limitActionCount_k__BackingField;
            routeData->fields.actionCountOnThisTurn = v429 + v833->fields._servantAndEnemyRange_5__14 + 1;
            baseSquare_5__11 = v428->fields._baseSquare_5__11;
            *(_QWORD *)&v427->fields.attackByLinkedEnemy = 0;
            v427->fields.flagNow = (int64_t)baseSquare_5__11;
            v431 = v428->fields._warBoardData_5__2;
            if ( !v431 )
              sub_1C93D2C(0, v413);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardData__GetWall(v431, *v317, 0, v415);
            v432 = this;
            if ( this )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_1C93D2C(0, method);
              if ( *((_DWORD *)this + 189) < _4__this->fields.wallAttackCost + v833->fields._requiredCost_5__3 )
                goto LABEL_662;
              v433 = v833->fields.__8__1;
              if ( !v433 )
                sub_1C93D2C(this, method);
              v434 = v433->fields.basePiece;
              if ( !v434 )
                sub_1C93D2C(0, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableWallAttack(
                                                                   v434,
                                                                   v833->fields._servantAndEnemyMasterRange_5__15,
                                                                   0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v435 = v833->fields.__8__1;
              if ( !v435 )
                sub_1C93D2C(this, method);
              v436 = v435->fields.basePiece;
              if ( !v436 )
                sub_1C93D2C(0, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__CheckWallAttackCond(
                                                                   v436,
                                                                   (WarBoardWallData_o *)v432,
                                                                   0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
            }
            if ( !routeData )
              sub_1C93D2C(this, method);
            v437 = routeData->fields.actionPiece;
            if ( v437 )
            {
              v438 = v833->fields.__8__1;
              if ( !v438 )
                sub_1C93D2C(this, method);
              v439 = v438->fields.basePiece;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsEnemyPiece(v439, v437, v2);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v440 = v833->fields.__8__1;
                if ( !v440 )
                  sub_1C93D2C(this, method);
                v441 = v440->fields.basePiece;
                if ( !v441 )
                  sub_1C93D2C(0, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v441, 0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_239;
                if ( !routeData )
                  sub_1C93D2C(this, method);
                v442 = routeData->fields.actionPiece;
                if ( !v442 )
                  sub_1C93D2C(0, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v442, 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
LABEL_239:
                  v443 = routeData;
                  if ( !routeData )
                    sub_1C93D2C(this, method);
                  v444 = routeData->fields.basePiece;
                  routeData->fields.flagNow |= 2uLL;
                  if ( !v444 )
                    sub_1C93D2C(this, method);
                  v445 = v443->fields.actionPiece;
                  v443->fields.attackCountOnThisTurn = v444->fields._attackCount_k__BackingField + 1;
                  if ( !v445 )
                    sub_1C93D2C(0, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isServant(v445, 0);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    v446 = routeData;
                    if ( !routeData )
                      sub_1C93D2C(this, method);
                    v447 = v833->fields.__8__1;
                    if ( !v447 )
                      sub_1C93D2C(this, method);
                    v448 = v447->fields.basePiece;
                    if ( !v448 )
                      sub_1C93D2C(this, method);
                    battleServant_k__BackingField = v448->fields._battleServant_k__BackingField;
                    if ( !battleServant_k__BackingField )
                      sub_1C93D2C(0, method);
                    flagNow = routeData->fields.flagNow;
                    ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0, 0);
                    if ( !routeData )
                      sub_1C93D2C(ClassId, v452);
                    v453 = routeData->fields.actionPiece;
                    if ( !v453 )
                      sub_1C93D2C(ClassId, v452);
                    v454 = ClassId;
                    v455 = v453->fields._battleServant_k__BackingField;
                    if ( !v455 )
                      sub_1C93D2C(0, v452);
                    v456 = (WarBoardAIRoute_o *)BattleServantData__getClassId(v455, 0, 0);
                    FlagAdvantage = WarBoardAIRoute__GetFlagAdvantage(v456, v454, (int32_t)v456, v457);
                    v446->fields.flagNow = FlagAdvantage | flagNow;
                    if ( !routeData )
                      sub_1C93D2C(FlagAdvantage, v459);
                    WarBoardAIRoute__LinkedCount(
                      (WarBoardAIRoute_o *)FlagAdvantage,
                      *v317,
                      v833->fields.piecePlaceData,
                      &routeData->fields.attackByLinkedEnemy,
                      &routeData->fields.attackByLinkedAlly,
                      v460);
                  }
                  goto LABEL_263;
                }
LABEL_662:
                v310 = v833;
                v311 = LODWORD(v833->fields.__7__wrap23) + 1;
                LODWORD(v833->fields.__7__wrap23) = v311;
                goto LABEL_663;
              }
              if ( !routeData )
                sub_1C93D2C(this, method);
              v461 = routeData->fields.actionPiece;
              if ( !v461 )
                sub_1C93D2C(this, method);
              if ( v461->fields._roleType_k__BackingField == 1 )
                goto LABEL_662;
              v462 = v833->fields.__8__1;
              if ( !v462 )
                sub_1C93D2C(this, method);
              v463 = v462->fields.basePiece;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsAllyPiece(v463, v461, v2);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !routeData )
                  sub_1C93D2C(this, method);
                routeData->fields.flagNow |= 0x4000000uLL;
              }
            }
LABEL_263:
            v464 = routeData;
            if ( !routeData )
              sub_1C93D2C(this, method);
            if ( (routeData->fields.flagNow & 2) != 0 )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_1C93D2C(0, method);
              if ( *((_DWORD *)this + 189) < _4__this->fields.attackCost + v833->fields._requiredCost_5__3 )
                goto LABEL_662;
              v484 = v833->fields.__8__1;
              if ( !v484 )
                sub_1C93D2C(this, method);
              v485 = v484->fields.basePiece;
              if ( !v485 )
                sub_1C93D2C(0, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableAttack(
                                                                   v485,
                                                                   v833->fields._servantAndEnemyMasterRange_5__15,
                                                                   0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v464 = routeData;
              if ( !routeData )
                sub_1C93D2C(this, method);
            }
            if ( (v464->fields.flagNow & 2) == 0 )
            {
              v465 = v833->fields.__8__1;
              if ( !v465 )
                sub_1C93D2C(this, method);
              v466 = v465->fields.basePiece;
              if ( !v466 )
                sub_1C93D2C(0, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableMoveBySelf(
                                                                   v466,
                                                                   v833->fields._servantAndEnemyMasterRange_5__15,
                                                                   0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v464 = routeData;
              if ( !routeData )
                sub_1C93D2C(this, method);
            }
            if ( (v464->fields.flagNow & 0x4000000) != 0 )
            {
              v467 = v833->fields.__8__1;
              if ( !v467 )
                sub_1C93D2C(this, method);
              v468 = (System_Collections_Generic_List_object__o *)v833->fields.routeDataList;
              if ( !v468 )
                sub_1C93D2C(0, method);
              requiredCost_5__3 = v833->fields._requiredCost_5__3;
              v470 = v467->fields.basePiece;
              v471 = v464->fields.actionPiece;
              v472 = System_Collections_Generic_List_object___AsReadOnly(
                       v468,
                       (const MethodInfo_3879BC4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIRoute__IsActableReplace(
                                                                   _4__this,
                                                                   v470,
                                                                   v471,
                                                                   requiredCost_5__3,
                                                                   (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v472,
                                                                   v833->fields._servantAndEnemyMasterRange_5__15,
                                                                   v473);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v464 = routeData;
            }
            piecePlaceData = WarBoardAIRoute__UpdatePiecePlaceData(
                               (WarBoardAIRoute_o *)this,
                               v833->fields.piecePlaceData,
                               v464,
                               v833->fields.__7__wrap8.fields._getEnumeratorRetType,
                               *v317,
                               v5);
            MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
                                               _4__this,
                                               piecePlaceData,
                                               v474);
            v476 = v833->fields._basePieceActionPieceRouteList_5__22;
            v477 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v477,
              (Il2CppObject *)v312,
              Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
              0);
            v478 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__52110824(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v476,
                                          (System_Func_TSource__bool__o *)v477,
                                          (const MethodInfo_31B25E8 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)v478 & 1) != 0
              || (v481 = v833->fields._advantagePieceData_5__21,
                  v482 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo),
                  System_Func_object__bool____ctor(
                    v482,
                    (Il2CppObject *)v312,
                    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
                    0),
                  v478 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__52110824(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)v481,
                                                (System_Func_TSource__bool__o *)v482,
                                                (const MethodInfo_31B25E8 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___),
                  ((unsigned __int8)v478 & 1) != 0) )
            {
              if ( !routeData )
                sub_1C93D2C(v478, v479);
              routeData->fields.flagNow |= 0x20000000000uLL;
            }
            if ( v833->fields._masterExists_5__8 )
            {
              if ( v833->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
                goto LABEL_291;
              if ( !routeData )
                sub_1C93D2C(v478, v479);
              if ( (routeData->fields.flagNow & 0x400) != 0 )
              {
LABEL_291:
                v486 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                         _4__this,
                         piecePlaceData,
                         MasterSquareIndexFromPlaceData,
                         v480);
                v478 = WarBoardAIRoute__GetDefenseAreaData(
                         _4__this,
                         MasterSquareIndexFromPlaceData,
                         v486,
                         piecePlaceData,
                         v487);
                v483 = v478;
              }
              else
              {
                v483 = v833->fields._defenseAreaData_5__7;
              }
              if ( !v483 )
                sub_1C93D2C(v478, v479);
              v488 = _4__this->fields.aiRouteMasterData;
              if ( !v488 )
                sub_1C93D2C(v478, v479);
              v489 = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                       v483->fields._ShortestRoutes_k__BackingField,
                       piecePlaceData,
                       v488->fields.masterType == 1,
                       v480);
              v491 = routeData;
              if ( v489 )
              {
                if ( !routeData )
                  sub_1C93D2C(v489, v490);
                routeData->fields.flagNow |= 0x40000000uLL;
              }
              else if ( !routeData )
              {
                sub_1C93D2C(v489, v490);
              }
              v492 = v491->fields.flagNow;
              if ( (v492 & 0x400) != 0 && (v483->fields._Flag_k__BackingField & 0x10000000000LL) != 0 )
                v491->fields.flagNow = v492 | 0x40000000000LL;
            }
            else
            {
              v491 = routeData;
            }
            v493 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v493,
              (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v491 )
              sub_1C93D2C(v494, v495);
            v491->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v493;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v491->fields.moveByLinkedPiece,
              (int32_t)v493,
              v496,
              v497,
              v498,
              v499,
              v500,
              v501);
            v504 = routeData;
            if ( !routeData )
              sub_1C93D2C(v502, v503);
            *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0;
            v505 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
            System_Collections_Generic_Dictionary_uint__int____ctor(
              v505,
              (const MethodInfo_355DBF4 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
            v504->fields.dicUniqueKeyRange = v505;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v504->fields.dicUniqueKeyRange,
              (int32_t)v505,
              v506,
              v507,
              v508,
              v509,
              v510,
              v511);
            v513 = v833->fields.piecePlaceData;
            if ( !v513 )
              sub_1C93D2C(0, v512);
            System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
              &v819,
              v513,
              (const MethodInfo_34E1648 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
            *(_OWORD *)&v826.fields._dictionary = *(_OWORD *)&v819.fields._dictionary;
            v826.fields._current = v819.fields._current;
            while ( 1 )
            {
              v514 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                       &v826,
                       (const MethodInfo_3620460 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
              if ( !v514 )
                break;
              v517 = v833->fields.__8__1;
              if ( !v517 )
                sub_1C93D2C(v514, v515);
              v518 = v517->fields.basePiece;
              if ( !v518 )
                sub_1C93D2C(v514, v515);
              key_high = HIDWORD(v826.fields._current.fields.key);
              if ( v518->fields._uniqueIndex_k__BackingField != HIDWORD(v826.fields._current.fields.key) )
              {
                if ( !routeData )
                  sub_1C93D2C(v514, v515);
                v520 = (int32_t)v826.fields._current.fields.key;
                dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
                v522 = *v317;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v523 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0,
                                                                              v522,
                                                                              v520,
                                                                              0,
                                                                              0,
                                                                              v516);
                v524 = System_Linq_Enumerable__Count_int_(
                         v523,
                         (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
                if ( !dicUniqueKeyRange )
                  sub_1C93D2C(v524, v525);
                System_Collections_Generic_Dictionary_uint__int___Add(
                  dicUniqueKeyRange,
                  key_high,
                  v524,
                  (const MethodInfo_355E5B8 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
              &v826,
              (const MethodInfo_3620560 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
            v526 = routeData;
            v527 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v527,
              (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v526 )
              sub_1C93D2C(v528, v529);
            v526->fields.listExistDesignationItem = v527;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v526->fields.listExistDesignationItem,
              (int32_t)v527,
              v530,
              v531,
              v532,
              v533,
              v534,
              v535);
            v536 = (GrandQuestFolderBoardItem_o *)routeData;
            v537 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v537,
              (const MethodInfo_34ADB50 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( !v536 )
              sub_1C93D2C(v538, v539);
            v536[1].klass = (GrandQuestFolderBoardItem_c *)v537;
            sub_1C93A78(v536 + 1, (int32_t)v537, v540, v541, v542, v543, v544, v545);
            v546 = routeData;
            v547 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
            System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
              v547,
              (const MethodInfo_34B6700 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
            if ( !v546 )
              sub_1C93D2C(v548, v549);
            v546->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)v547;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v546->fields.dicItemIdKeyIsMoveByServantDesignationItemRange,
              (int32_t)v547,
              v550,
              v551,
              v552,
              v553,
              v554,
              v555);
            v558 = routeData;
            if ( !routeData )
              sub_1C93D2C(v556, v557);
            routeData->fields.isMoveByOutOfWarningArea = 0;
            *(_QWORD *)&v558->fields.isMoveByServantAndEnemyRange = 0;
            *(_QWORD *)&v558->fields.isMoveByMasterAndEnemyRange = 0;
            *(_QWORD *)&v558->fields.isMoveByServantAndAttackAdvantageServantRange = 0;
            *(_QWORD *)&v558->fields.isMoveByServantAndDefenseAdvantageServantRange = 0;
            *(_QWORD *)&v558->fields.isMoveByServantAndClassAdvantageServantRange = 0;
            v559 = v833->fields.__8__1;
            if ( !v559 )
              sub_1C93D2C(v556, v557);
            v560 = v559->fields.basePiece;
            if ( !v560 )
              sub_1C93D2C(0, v557);
            IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isServant(v560, 0);
            if ( IsBlockShortestRouteEnemyAndMaster )
            {
              v566 = v833;
              if ( v833->fields._masterExists_5__8 )
              {
                v567 = v833->fields.__8__1;
                if ( !v567 )
                  sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                v568 = v567->fields.basePiece;
                if ( !v568 )
                  sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                v569 = _4__this->fields.aiRouteMasterData;
                if ( !v569 )
                  sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                if ( v569->fields.masterType != 2
                  || v569->fields.masterPieceIndex != v568->fields._index_k__BackingField )
                {
                  v570 = v833->fields._defenseAreaData_5__7;
                  if ( !v570 )
                    sub_1C93D2C(0, v562);
                  IsBlockShortestRouteEnemyAndMaster = DefenseAreaData__IsInDefenseArea(v570, *v317, 0);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                    routeData->fields.flagNow |= 0x4000000000uLL;
                  }
                }
                v571 = v833->fields.__8__1;
                if ( !v571 )
                  sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                v572 = v571->fields.basePiece;
                if ( !v572 )
                  sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                v573 = _4__this->fields.aiRouteMasterData;
                if ( !v573 )
                  sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                v574 = v573->fields.masterType;
                if ( v574 != 2 || v573->fields.masterPieceIndex != v572->fields._index_k__BackingField )
                {
                  IsBlockShortestRouteEnemyAndMaster = WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                                                         v833->fields._defenseAreaData_5__7,
                                                         *v317,
                                                         v574 == 1,
                                                         v564);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                    routeData->fields.flagNow |= 0x100000000uLL;
                  }
                }
                v566 = v833;
                v575 = v833->fields.__8__1;
                if ( !v575 )
                  sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                v576 = v575->fields.basePiece;
                if ( !v576 )
                  sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                v577 = _4__this->fields.aiRouteMasterData;
                if ( !v577 )
                  sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                if ( v577->fields.masterType != 2
                  || v577->fields.masterPieceIndex != v576->fields._index_k__BackingField )
                {
                  v578 = *v317;
                  if ( *v317 == MasterSquareIndexFromPlaceData )
                  {
                    v579 = routeData;
                    if ( !routeData )
                      sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                    v580 = 2;
                  }
                  else
                  {
                    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                    v581 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                                  0,
                                                                                  v578,
                                                                                  MasterSquareIndexFromPlaceData,
                                                                                  0,
                                                                                  0,
                                                                                  v565);
                    v582 = System_Linq_Enumerable__Count_int_(
                             v581,
                             (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
                    v579 = routeData;
                    if ( !routeData )
                      sub_1C93D2C(v582, v562);
                    v566 = v833;
                    tmpFlagNow_5__12 = v833->fields._tmpFlagNow_5__12;
                    v584 = (_DWORD)v582 == tmpFlagNow_5__12;
                    if ( (int)v582 < tmpFlagNow_5__12 )
                      v580 = 1;
                    else
                      v580 = 3;
                    if ( v584 )
                      v580 = 2;
                  }
                  v579->fields.isMoveByServantAndMasterRange = v580;
                }
              }
              v585 = *(System_Collections_Generic_Dictionary_int__int__o **)&v566->fields._sumPieceActionCost_5__17;
              if ( !v585 )
                sub_1C93D2C(0, v562);
              System_Collections_Generic_Dictionary_int__int___GetEnumerator(
                &v819,
                v585,
                (const MethodInfo_34B46A4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
              v824 = *(_OWORD *)&v819.fields._dictionary;
              v825 = v819.fields._current;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
                        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v824,
                        (const MethodInfo_361C294 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
              {
                v587 = (int32_t)v825.fields.key;
                v588 = HIDWORD(v825.fields.key);
                v589 = *v317;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v590 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0,
                                                                              v589,
                                                                              v587,
                                                                              0,
                                                                              0,
                                                                              v586);
                v591 = System_Linq_Enumerable__Count_int_(
                         v590,
                         (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
                if ( !routeData )
                  sub_1C93D2C(v591, v592);
                dicItemIdKeyIsMoveByServantDesignationItemRange = (System_Collections_Generic_Dictionary_TKey__TValue__o *)routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
                if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
                  sub_1C93D2C(v591, v592);
                if ( (int)v591 < v588 )
                  v594 = 1;
                else
                  v594 = 3;
                if ( (_DWORD)v591 == v588 )
                  v595 = 2;
                else
                  v595 = v594;
                System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
                  dicItemIdKeyIsMoveByServantDesignationItemRange,
                  v587,
                  v595,
                  (const MethodInfo_34B70B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
                if ( !routeData )
                  sub_1C93D2C(v596, v597);
                dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
                if ( !dicMoveByServantGetDesignationItem )
                  sub_1C93D2C(0, v597);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  dicMoveByServantGetDesignationItem,
                  v587,
                  *v317 == v587,
                  (const MethodInfo_34AE528 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
                if ( !routeData )
                  sub_1C93D2C(v599, v600);
                listExistDesignationItem = routeData->fields.listExistDesignationItem;
                if ( !listExistDesignationItem )
                  sub_1C93D2C(0, v600);
                items = listExistDesignationItem->fields._items;
                v603 = Method_System_Collections_Generic_List_int__Add__;
                ++listExistDesignationItem->fields._version;
                if ( !items )
                  sub_1C93D2C(listExistDesignationItem, v600);
                size = listExistDesignationItem->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    listExistDesignationItem,
                    v587,
                    *(const MethodInfo_385C978 **)(*(_QWORD *)(v603[4] + 192LL) + 112LL));
                }
                else
                {
                  listExistDesignationItem->fields._size = size + 1;
                  items->m_Items[size] = v587;
                }
              }
              System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v824,
                (const MethodInfo_361C394 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
              v606 = *v317;
              enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
              if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
              v608 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                            0,
                                                                            v606,
                                                                            enemyMasterSquareIndex,
                                                                            0,
                                                                            0,
                                                                            v605);
              v609 = System_Linq_Enumerable__Count_int_(
                       v608,
                       (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
              v612 = routeData;
              if ( !routeData )
                sub_1C93D2C(v609, v610);
              servantAndMasterRange_5__13 = v833->fields._servantAndMasterRange_5__13;
              v614 = (_DWORD)v609 == servantAndMasterRange_5__13;
              if ( (int)v609 < servantAndMasterRange_5__13 )
                v615 = 1;
              else
                v615 = 3;
              if ( v614 )
                v615 = 2;
              routeData->fields.isMoveByServantAndEnemyMasterRange = v615;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4D2E378 )
              {
                sub_1C93AD4(&WarBoardAIManager_TypeInfo);
                byte_4D2E378 = 1;
              }
              v616 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v616 = WarBoardAIManager_TypeInfo;
              }
              v617 = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                            v616->static_fields->dicSquareIndexEnemyPiece,
                                            HIDWORD(v833->fields._tmpFlagNow_5__12),
                                            *v317,
                                            v611);
              v612->fields.isMoveByServantAndEnemyRange = (int)v617;
              WarBoardAIRoute__ClassAdvantageDistance(
                v617,
                &routeData,
                (WarBoardAIRoute_AdvantagePieceData_o *)v833->fields._dicEnemyRange_5__20,
                *v317,
                v618);
            }
            v619 = _4__this->fields.aiRouteMasterData;
            if ( !v619 )
              sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
            if ( v619->fields.masterType )
            {
LABEL_501:
              if ( v619->fields.masterType == 2 )
              {
                v622 = v833->fields.__8__1;
                if ( !v622 )
                  sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                v623 = v622->fields.basePiece;
                if ( !v623 )
                  sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                if ( v623->fields._index_k__BackingField == v619->fields.masterPieceIndex )
                  goto LABEL_505;
              }
            }
            else
            {
              v620 = v833->fields.__8__1;
              if ( !v620 )
                sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
              v621 = v620->fields.basePiece;
              if ( !v621 )
                sub_1C93D2C(0, v562);
              IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isMaster(v621, 0);
              if ( !IsBlockShortestRouteEnemyAndMaster )
              {
                v619 = _4__this->fields.aiRouteMasterData;
                if ( !v619 )
                  sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                goto LABEL_501;
              }
LABEL_505:
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4D2E378 )
              {
                sub_1C93AD4(&WarBoardAIManager_TypeInfo);
                byte_4D2E378 = 1;
              }
              v624 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v624 = WarBoardAIManager_TypeInfo;
              }
              dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v624->static_fields->dicSquareIndexEnemyPiece;
              if ( !dicSquareIndexEnemyPiece )
                sub_1C93D2C(0, v562);
              Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                       dicSquareIndexEnemyPiece,
                       (const MethodInfo_34BCA44 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
              if ( !Keys )
                sub_1C93D2C(0, v627);
              System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
                (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v819,
                Keys,
                (const MethodInfo_37910CC *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
              v823 = *(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v819.fields._dictionary;
              while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
                        &v823,
                        (const MethodInfo_361E6E0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                currentKey = (int32_t)v823.fields._currentKey;
                v630 = *v317;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v631 = AStarSearch__RouteSearch(0, v630, currentKey, 0, 0, v628);
                if ( !v631 )
                  sub_1C93D2C(0, v632);
                v633 = _4__this->fields.npcData;
                if ( !v633 )
                  sub_1C93D2C(v631, v632);
                if ( LODWORD(v631->max_length) - 1 <= v633->fields.defenseArea )
                {
                  if ( !routeData )
                    sub_1C93D2C(v631, v632);
                  routeData->fields.flagNow |= 0x8000000000uLL;
                  break;
                }
              }
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
                &v823,
                (const MethodInfo_361E6DC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
              v636 = routeData;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4D2E378 )
              {
                sub_1C93AD4(&WarBoardAIManager_TypeInfo);
                byte_4D2E378 = 1;
              }
              v637 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v637 = WarBoardAIManager_TypeInfo;
              }
              v638 = v833->fields._defenseAreaData_5__7;
              if ( !v638 )
                sub_1C93D2C(v637, v634);
              v639 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v637->static_fields->dicSquareIndexEnemyPiece,
                       v638->fields._MasterAndEnemyRange_k__BackingField,
                       *v317,
                       v635);
              if ( !v636 )
                sub_1C93D2C(v639, v640);
              v636->fields.isMoveByMasterAndEnemyRange = v639;
              if ( !byte_4D2E378 )
              {
                sub_1C93AD4(&WarBoardAIManager_TypeInfo);
                byte_4D2E378 = 1;
              }
              v641 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v641 = WarBoardAIManager_TypeInfo;
              }
              v642 = (System_Collections_Generic_Dictionary_int__object__o *)v641->static_fields->dicSquareIndexEnemyPiece;
              if ( !v642 )
                sub_1C93D2C(0, v640);
              System_Collections_Generic_Dictionary_int__object___GetEnumerator(
                &v819,
                v642,
                (const MethodInfo_34BD1BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
              v822 = v819;
              do
              {
                v644 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                         &v822,
                         (const MethodInfo_361DC10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
                if ( !v644 )
                  break;
                v645 = (int32_t)v822.fields._current.fields.key;
                v646 = *v317;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v647 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0,
                                                                              v646,
                                                                              v645,
                                                                              0,
                                                                              0,
                                                                              v643);
                System_Linq_Enumerable__Count_int_(
                  v647,
                  (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
              }
              while ( WarBoardAIRoute__IsDetour((System_Int32_array *)v647, v833->fields._allyPieceIndexs_5__5, v648) );
              System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
                &v822,
                (const MethodInfo_361DD34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( !v644 )
              {
                if ( !routeData )
                  sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
                routeData->fields.flagNow |= 0x1000000000uLL;
              }
            }
            v649 = routeData;
            if ( !routeData )
              sub_1C93D2C(IsBlockShortestRouteEnemyAndMaster, v562);
            if ( !routeData->fields.actionPiece || (routeData->fields.flagNow & 0x4000000) != 0 )
            {
              v650 = v833->fields._warBoardData_5__2;
              if ( !v650 )
                sub_1C93D2C(0, v562);
              Effect = WarBoardData__GetEffect(v650, *v317, v563);
              if ( Effect )
              {
                if ( !routeData )
                  sub_1C93D2C(Effect, v652);
                routeData->fields.flagNow |= 0x200000000uLL;
              }
              v653 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v653,
                (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
              v655 = (System_Collections_Generic_List_object__o *)v833->fields.routeDataList;
              if ( !v655 )
                sub_1C93D2C(0, v654);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v819,
                v655,
                (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
              v830 = *(System_Collections_Generic_List_Enumerator_object__o *)&v819.fields._dictionary;
              while ( 1 )
              {
                v656 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v830,
                         (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
                if ( !v656 )
                  break;
                v658 = v830.fields._current;
                if ( !v830.fields._current )
                  sub_1C93D2C(v656, v657);
                if ( (BYTE3(v830.fields._current[1].klass) & 8) != 0 )
                {
                  v659 = v830.fields._current[3].klass;
                  if ( !v659 )
                    sub_1C93D2C(0, v657);
                  v660 = WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v659, 0);
                  if ( v660 )
                  {
                    if ( !v653 )
                      sub_1C93D2C(v660, monitor_high);
                    monitor_high = HIDWORD(v658[1].monitor);
                    v662 = v653->fields._items;
                    v663 = Method_System_Collections_Generic_List_int__Add__;
                    ++v653->fields._version;
                    if ( !v662 )
                      sub_1C93D2C(v660, monitor_high);
                    v664 = v653->fields._size;
                    if ( (unsigned int)v664 >= LODWORD(v662->max_length) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v653,
                        monitor_high,
                        *(const MethodInfo_385C978 **)(*(_QWORD *)(v663[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v653->fields._size = v664 + 1;
                      v662->m_Items[v664] = monitor_high;
                    }
                  }
                  if ( (BYTE3(v658[1].klass) & 4) != 0 )
                  {
                    v665 = (WarBoardPieceData_o *)v658[3].klass;
                    if ( !v665 )
                      sub_1C93D2C(0, monitor_high);
                    if ( WarBoardPieceData__get_isMaster(v665, 0) )
                    {
                      v667 = (WarBoardPieceData_o *)v658[3].monitor;
                      if ( !v667 )
                        sub_1C93D2C(0, v666);
                      v668 = WarBoardPieceData__get_isServant(v667, 0);
                      if ( v668 )
                      {
                        if ( !v653 )
                          sub_1C93D2C(v668, v669);
                        monitor_low = LODWORD(v658[1].monitor);
                        v671 = v653->fields._items;
                        v672 = Method_System_Collections_Generic_List_int__Add__;
                        ++v653->fields._version;
                        if ( !v671 )
                          sub_1C93D2C(v668, monitor_low);
                        v673 = v653->fields._size;
                        if ( (unsigned int)v673 >= LODWORD(v671->max_length) )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v653,
                            monitor_low,
                            *(const MethodInfo_385C978 **)(*(_QWORD *)(v672[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v653->fields._size = v673 + 1;
                          v671->m_Items[v673] = monitor_low;
                        }
                      }
                    }
                  }
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v830,
                (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
              if ( !routeData )
                sub_1C93D2C(v674, v675);
              v676 = routeData->fields.basePiece;
              if ( !v676 )
                sub_1C93D2C(0, v675);
              v677 = WarBoardPieceData__get_isServant(v676, 0);
              if ( v677 )
              {
                if ( !routeData )
                  sub_1C93D2C(v677, v678);
                CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                                   (WarBoardAIRoute_o *)v677,
                                   routeData->fields.actionIndex,
                                   v653,
                                   v679);
                if ( CanAcquireItem )
                {
                  v683 = routeData;
                  if ( !routeData )
                    sub_1C93D2C(CanAcquireItem, v681);
                  v684 = routeData->fields.flagNow | 0x18000000;
                  goto LABEL_610;
                }
              }
              else
              {
                if ( !routeData )
                  sub_1C93D2C(v677, v678);
                v685 = routeData->fields.basePiece;
                if ( !v685 )
                  sub_1C93D2C(0, v678);
                CanAcquireItem = WarBoardPieceData__get_isMaster(v685, 0);
                if ( CanAcquireItem )
                {
                  if ( !routeData )
                    sub_1C93D2C(CanAcquireItem, v686);
                  CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                                     (WarBoardAIRoute_o *)CanAcquireItem,
                                     routeData->fields.actionIndex,
                                     v653,
                                     v687);
                  v689 = routeData;
                  if ( CanAcquireItem )
                  {
                    if ( !routeData )
                      sub_1C93D2C(CanAcquireItem, v688);
                    routeData->fields.flagNow |= 0x10000000uLL;
                  }
                  else if ( !routeData )
                  {
                    sub_1C93D2C(CanAcquireItem, v688);
                  }
                  if ( (v689->fields.flagNow & 0x4000000) != 0 )
                  {
                    v690 = v689->fields.actionPiece;
                    if ( !v690 )
                      sub_1C93D2C(0, v688);
                    CanAcquireItem = WarBoardPieceData__get_isServant(v690, 0);
                    if ( CanAcquireItem )
                    {
                      if ( !routeData )
                        sub_1C93D2C(CanAcquireItem, v691);
                      CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                                         (WarBoardAIRoute_o *)CanAcquireItem,
                                         routeData->fields.baseIndex,
                                         v653,
                                         v692);
                      if ( CanAcquireItem )
                      {
                        v683 = routeData;
                        if ( !routeData )
                          sub_1C93D2C(CanAcquireItem, v693);
                        v684 = routeData->fields.flagNow | 0x8000000;
LABEL_610:
                        v683->fields.flagNow = v684;
                      }
                    }
                  }
                }
              }
              WarBoardAIRoute__LinkedPieceCount(
                (WarBoardAIRoute_o *)CanAcquireItem,
                &routeData,
                piecePlaceData,
                v653,
                v682);
              v649 = routeData;
              if ( !routeData )
                sub_1C93D2C(v694, v695);
            }
            FlagOutOfWarningAreaToDistance = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                               _4__this,
                                               v649->fields.baseIndex,
                                               v649->fields.actionIndex,
                                               v564);
            v649->fields.isMoveByOutOfWarningArea = FlagOutOfWarningAreaToDistance;
            v698 = routeData;
            if ( !routeData )
              sub_1C93D2C(FlagOutOfWarningAreaToDistance, v697);
            evalOffsetMagnification = routeData->fields.evalOffsetMagnification;
            if ( !evalOffsetMagnification )
              sub_1C93D2C(FlagOutOfWarningAreaToDistance, v697);
            evalOffsetMagnification->fields.isAttack = (routeData->fields.flagNow & 2) != 0;
            v700 = v698->fields.basePiece;
            if ( !v700 )
              sub_1C93D2C(FlagOutOfWarningAreaToDistance, v697);
            piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields.piecePersonalityDic;
            if ( !piecePersonalityDic )
              sub_1C93D2C(0, v697);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                 piecePersonalityDic,
                                                                 v700->fields._index_k__BackingField,
                                                                 &value,
                                                                 (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v702 = value;
              v703 = (WarBoardAIEvalCalcurater_o *)sub_1C93D20(WarBoardAIEvalCalcurater_TypeInfo);
              WarBoardAIEvalCalcurater___ctor(v703, (WarBoardAIRoute_PiecePersonality_o *)v702, 0);
              if ( !v703 )
                sub_1C93D2C(v704, v705);
              WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v703, &routeData, 0);
              WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
                v703,
                &routeData,
                _4__this->fields.averageBenefitValue,
                0);
              if ( !routeData )
                sub_1C93D2C(0, v706);
              WarBoardAIRoute_RouteData__CalcEvalValue(routeData, v706);
              v707 = WarBoardAIRoute___c_TypeInfo;
              v708 = v833->fields.routeDataList;
              if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v707 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_5 = (System_Func_object__object__o *)v707->static_fields->__9__47_5;
              if ( !_9__47_5 )
              {
                if ( !v707->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v707);
                  v707 = WarBoardAIRoute___c_TypeInfo;
                }
                v710 = (Il2CppObject *)v707->static_fields->__9;
                _9__47_5 = (System_Func_object__object__o *)sub_1C93D20(System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
                System_Func_object__object____ctor(
                  _9__47_5,
                  v710,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__,
                  0);
                v711 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v711->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)&v711->__9__47_5,
                  (int32_t)_9__47_5,
                  v712,
                  v713,
                  v714,
                  v715,
                  v716,
                  v717);
              }
              v718 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v708,
                                                                      (System_Func_TSource__TResult__o *)_9__47_5,
                                                                      (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
              v719 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
              System_Collections_Generic_List_object____ctor_59216528(
                v719,
                v718,
                (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___79037208);
              if ( !v719 )
                sub_1C93D2C(v720, v721);
              v728 = (Il2CppObject *)routeData;
              v729 = v719->fields._items;
              v730 = Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__;
              ++v719->fields._version;
              if ( !v729 )
                sub_1C93D2C(v720, v728);
              v731 = v719->fields._size;
              if ( (unsigned int)v731 >= LODWORD(v729->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v719,
                  v728,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v730[4] + 192LL) + 112LL));
              }
              else
              {
                v732 = &v729->obj.klass + v731;
                v719->fields._size = v731 + 1;
                v732[4] = (Il2CppClass *)v728;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v732 + 4),
                  (int32_t)v728,
                  v722,
                  v723,
                  v724,
                  v725,
                  v726,
                  v727);
              }
              v733 = (WarBoardAIRoute_RouteData_o *)BasicHelper__IndexValue_object__51981564(
                                                      (System_Collections_Generic_List_T__o *)v719,
                                                      v719->fields._size - 2,
                                                      0,
                                                      (const MethodInfo_3192CFC *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
              route = v733;
              if ( v733 )
              {
                v735 = (int)routeData;
                if ( !routeData )
                  sub_1C93D2C(v733, v734);
                if ( routeData->fields.basePiece == v733->fields.basePiece )
                {
                  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
                    v703,
                    &route,
                    routeData,
                    0);
                  if ( !route )
                    sub_1C93D2C(0, v741);
                  WarBoardAIRoute_RouteData__CalcEvalValue(route, v741);
                }
              }
              allRouteList = (System_Collections_Generic_List_object__o *)_4__this->fields.allRouteList;
              if ( !allRouteList )
                sub_1C93D2C(0, v734);
              v743 = allRouteList->fields._items;
              v744 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++allRouteList->fields._version;
              if ( !v743 )
                sub_1C93D2C(allRouteList, v734);
              v745 = allRouteList->fields._size;
              if ( (unsigned int)v745 >= LODWORD(v743->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  allRouteList,
                  (Il2CppObject *)v719,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v744[4] + 192LL) + 112LL));
              }
              else
              {
                v746 = &v743->obj.klass + v745;
                allRouteList->fields._size = v745 + 1;
                v746[4] = (Il2CppClass *)v719;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v746 + 4),
                  (int32_t)v719,
                  v735,
                  v736,
                  v737,
                  v738,
                  v739,
                  v740);
              }
              if ( !routeData )
                sub_1C93D2C(this, method);
              if ( routeData->fields.baseIndex != routeData->fields.actionIndex && (routeData->fields.flagNow & 2) == 0 )
              {
                searchCount = v833->fields.searchCount;
                if ( searchCount != 1 )
                {
                  v809 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                           _4__this,
                                           piecePlaceData,
                                           searchCount,
                                           (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v719,
                                           (const MethodInfo *)v4);
                  v810 = v833;
                  v833->fields.__2__current = v809;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)&v810->fields.__2__current,
                    (int32_t)v809,
                    v811,
                    v812,
                    v813,
                    v814,
                    v815,
                    v816);
                  v833->fields.__1__state = 1;
                  return 1;
                }
                dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
                v749 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                         _4__this,
                                         piecePlaceData,
                                         1,
                                         (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v719,
                                         (const MethodInfo *)v4);
                if ( !routeData )
                  sub_1C93D2C(v749, v749);
                if ( !dictionaryCreateRouteDataEvalValue )
                  sub_1C93D2C(v749, v749);
                System_Collections_Generic_Dictionary_object__float___Add(
                  dictionaryCreateRouteDataEvalValue,
                  v749,
                  routeData->fields.evalValue,
                  (const MethodInfo_3537C94 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
              }
            }
            goto LABEL_662;
          }
        }
        WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v833, v87);
        v239 = v833;
        v240 = v833->fields.searchCount;
        v833->fields.__7__wrap8.fields._current = 0u;
        *(_OWORD *)&v239->fields.__7__wrap8.fields._dictionary = 0u;
        if ( v240 != 1 )
          return 0;
        if ( !_4__this )
          sub_1C93D2C(v237, v238);
        v241 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        v242 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v242 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__47_6 = (System_Func_T__TResult__o *)v242->static_fields->__9__47_6;
        if ( !_9__47_6 )
        {
          if ( !v242->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v242);
            v242 = WarBoardAIRoute___c_TypeInfo;
          }
          v244 = (Il2CppObject *)v242->static_fields->__9;
          _9__47_6 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v244,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            0);
          v245 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v245->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v245->__9__47_6,
            (int32_t)_9__47_6,
            v246,
            v247,
            v248,
            v249,
            v250,
            v251);
        }
        v253 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__float___float_(
                 v241,
                 (System_Func_TSource__TKey__o *)_9__47_6,
                 (const MethodInfo_31D3B5C *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v833->fields._servantAndEnemyMasterRange_5__15 = 0;
        v254 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v254 )
          sub_1C93D2C(0, v252);
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v254,
                  (const MethodInfo_3537964 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v257 = _4__this->fields.npcData;
        if ( !v257 )
          sub_1C93D2C(Count, v256);
        v258 = v833;
        v259 = (float)((float)v257->fields.calcEllipsis / 100.0) * (float)(int)Count;
        v260 = (int)v259;
        if ( v259 == INFINITY )
          v260 = 0x80000000;
        v833->fields._servantAndEnemyRange_5__14 = v260;
        calcEllipsisMin = v257->fields.calcEllipsisMin;
        if ( calcEllipsisMin <= v260 )
          calcEllipsisMin = v260;
        v258->fields._servantAndEnemyRange_5__14 = calcEllipsisMin;
        if ( !v253 )
          sub_1C93D2C(Count, v256);
        v262 = v253->klass;
        v263 = *(unsigned __int16 *)&v253->klass->_2.rank;
        if ( *(_WORD *)&v253->klass->_2.rank )
        {
          p_offset = &v262->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            --v263;
            p_offset += 4;
            if ( !v263 )
              goto LABEL_112;
          }
          v265 = (__int64)&v262->vtable[*p_offset];
        }
        else
        {
LABEL_112:
          v265 = sub_1C69E5C(v253, System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo, 0);
        }
        v266 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v265)(
                 v253,
                 *(_QWORD *)(v265 + 8));
        v267 = &v833->fields.__7__wrap24;
        *(_QWORD *)&v833->fields.__7__wrap24 = v266;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)v267, v266, v268, v269, v270, v271, v272, v273);
        v8 = v833;
        v833->fields.__1__state = -4;
        goto LABEL_117;
      }
    }
    else
    {
      v60 = _4__this->fields.aiRouteMasterData;
      if ( !v60 )
        sub_1C93D2C(v54, v55);
      if ( v833 )
      {
        v61 = v60->fields.masterType;
        v833->fields._masterExists_5__8 = v61 != 3;
        if ( v61 == 3 )
          goto LABEL_29;
        goto LABEL_25;
      }
    }
    sub_1C93D2C(v54, v55);
  }
  return result;
}


Il2CppObject *WarBoardAIRoute__CreateRouteData_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardAIRoute__CreateRouteData_d__47__System_Collections_IEnumerator_Reset(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *WarBoardAIRoute__CreateRouteData_d__47__System_Collections_IEnumerator_get_Current(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardAIRoute__CreateRouteData_d__47__System_IDisposable_Dispose(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  switch ( this->fields.__1__state )
  {
    case 0xFFFFFFFC:
    case 2:
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(this, method);
      break;
    case 0xFFFFFFFD:
    case 1:
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(this, method);
      break;
    default:
      return;
  }
}


void WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2E2FE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    byte_4D2E2FE = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &this->fields.__7__wrap8,
    (const MethodInfo_3620560 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
}


void WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  __int64 *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x9
  int *v6; // x10
  __int64 v7; // x0

  if ( (byte_4D2E2FF & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    byte_4D2E2FF = 1;
  }
  v3 = *(__int64 **)&this->fields.__7__wrap24;
  this->fields.__1__state = -1;
  if ( v3 )
  {
    v4 = *v3;
    v5 = *(unsigned __int16 *)(*v3 + 302);
    if ( *(_WORD *)(*v3 + 302) )
    {
      v6 = (int *)(*(_QWORD *)(v4 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v6 - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        v6 += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = v4 + 16LL * *v6 + 312;
    }
    else
    {
LABEL_8:
      v7 = sub_1C69E5C(v3, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v7)(v3, *(_QWORD *)(v7 + 8));
  }
}


void WarBoardAIRoute___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E2EF & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIRoute___c_TypeInfo);
    byte_4D2E2EF = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(WarBoardAIRoute___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarBoardAIRoute___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardAIRoute___c___ctor(WarBoardAIRoute___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIRoute___c___BeforeCreateRouteData_b__45_0(
        WarBoardAIRoute___c_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  IWarBoardObjectData_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4D2E2F0 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1C93AD4(&IWarBoardObjectData_TypeInfo);
    byte_4D2E2F0 = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset + 2];
  }
  else
  {
LABEL_8:
    v7 = sub_1C69E5C(x, IWarBoardObjectData_TypeInfo, 2);
  }
  return (*(bool (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v7)(x, *(_QWORD *)(v7 + 8));
}


int64_t WarBoardAIRoute___c___CreateRouteData_b__47_1(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__o x,
        const MethodInfo *method)
{
  int64_t key; // x19

  key = x.fields.key;
  if ( (byte_4D2E2F1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    byte_4D2E2F1 = 1;
  }
  return key;
}


WarBoardAIRoute_TargetData_o *WarBoardAIRoute___c___CreateRouteData_b__47_2(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__o x,
        const MethodInfo *method)
{
  WarBoardAIRoute_TargetData_o *value; // x19

  value = x.fields.value;
  if ( (byte_4D2E2F2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    byte_4D2E2F2 = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, (const MethodInfo *)x.fields.key);
}


WarBoardAIRoute_RouteData_o *WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return WarBoardAIRoute_RouteData__ShallowCopy(x, (const MethodInfo *)x);
}


float WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // w19

  value = x.fields.value;
  if ( (byte_4D2E2F3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__);
    byte_4D2E2F3 = 1;
  }
  return value;
}


int32_t WarBoardAIRoute___c___GetTargetToDistanceUsingIndividuality_b__64_2(
        WarBoardAIRoute___c_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  IWarBoardObjectData_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4D2E2F4 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1C93AD4(&IWarBoardObjectData_TypeInfo);
    byte_4D2E2F4 = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset + 4];
  }
  else
  {
LABEL_8:
    v7 = sub_1C69E5C(x, IWarBoardObjectData_TypeInfo, 4);
  }
  return (*(int32_t (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v7)(x, *(_QWORD *)(v7 + 8));
}


int32_t WarBoardAIRoute___c___GetTargetToDistanceUsingIndividuality_b__64_3(
        WarBoardAIRoute___c_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  IWarBoardObjectData_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4D2E2F5 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1C93AD4(&IWarBoardObjectData_TypeInfo);
    byte_4D2E2F5 = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset + 5];
  }
  else
  {
LABEL_8:
    v7 = sub_1C69E5C(x, IWarBoardObjectData_TypeInfo, 5);
  }
  return (*(int32_t (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v7)(x, *(_QWORD *)(v7 + 8));
}


void WarBoardAIRoute___c__DisplayClass43_0___ctor(
        WarBoardAIRoute___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIRoute___c__DisplayClass43_0___AddPiecePersonalityDic_b__0(
        WarBoardAIRoute___c__DisplayClass43_0_o *this,
        System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key;
  if ( (byte_4D2E2F6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__);
    byte_4D2E2F6 = 1;
  }
  return this->fields.pieceIndex == key;
}


void WarBoardAIRoute___c__DisplayClass45_0___ctor(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__1(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardItemData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_1C93D2C(this, 0);
  return !WarBoardItemData__get_Acquired(z, 0) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_1C93D2C(this, 0);
  return z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardAIRoute___c__DisplayClass46_0___ctor(
        WarBoardAIRoute___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIRoute___c__DisplayClass46_0___RegisterTargetObjectToDic_b__0(
        WarBoardAIRoute___c__DisplayClass46_0_o *this,
        IWarBoardObjectData_o *z,
        const MethodInfo *method)
{
  WarBoardAIRoute___c__DisplayClass46_0_o *v4; // x20
  IWarBoardObjectData_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  IWarBoardObjectData_c *v9; // x8
  __int64 v10; // x9
  int32_t *v11; // x10
  __int64 v12; // x0

  v4 = this;
  if ( (byte_4D2E2F7 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_1C93AD4(&IWarBoardObjectData_TypeInfo);
    byte_4D2E2F7 = 1;
  }
  if ( !z )
    sub_1C93D2C(this, z);
  klass = z->klass;
  v6 = *(unsigned __int16 *)&z->klass->_2.rank;
  if ( *(_WORD *)&z->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v8 = sub_1C69E5C(z, IWarBoardObjectData_TypeInfo, 0);
  }
  if ( (*(unsigned int (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v8)(z, *(_QWORD *)(v8 + 8)) != v4->fields.squareIndex )
    return 0;
  v9 = z->klass;
  v10 = *(unsigned __int16 *)&z->klass->_2.rank;
  if ( *(_WORD *)&z->klass->_2.rank )
  {
    v11 = &v9->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v11 - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v10;
      v11 += 4;
      if ( !v10 )
        goto LABEL_15;
    }
    v12 = (__int64)&v9->vtable[*v11 + 3];
  }
  else
  {
LABEL_15:
    v12 = sub_1C69E5C(z, IWarBoardObjectData_TypeInfo, 3);
  }
  return (*(bool (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v12)(z, *(_QWORD *)(v12 + 8));
}


void WarBoardAIRoute___c__DisplayClass47_0___ctor(
        WarBoardAIRoute___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIRoute___c__DisplayClass47_0___CreateRouteData_b__0(
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
    goto LABEL_11;
  if ( x->fields.baseIndex == x->fields.actionIndex )
    return 0;
  basePiece = x->fields.basePiece;
  if ( !basePiece )
    goto LABEL_11;
  v5 = this->fields.basePiece;
  if ( !v5 )
    goto LABEL_11;
  index_k__BackingField = basePiece->fields._index_k__BackingField;
  v7 = v5->fields._index_k__BackingField;
  if ( index_k__BackingField == v7 )
    return 1;
  if ( (x->fields.flagNow & 0x4000000) == 0 )
    return 0;
  actionPiece = x->fields.actionPiece;
  if ( !actionPiece )
LABEL_11:
    sub_1C93D2C(this, x);
  return actionPiece->fields._index_k__BackingField == v7;
}


void WarBoardAIRoute___c__DisplayClass47_1___ctor(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__3(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return this->fields.actionSquareIndex == x->fields.actionIndex;
}


void WarBoardAIRoute___c__DisplayClass51_0___ctor(
        WarBoardAIRoute___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIRoute___c__DisplayClass51_0___GetAllyPutSquareIndicesWithoutMaster_b__0(
        WarBoardAIRoute___c__DisplayClass51_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.masterSquareIndex != x;
}


void WarBoardAIRoute___c__DisplayClass52_0___ctor(
        WarBoardAIRoute___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardAIRoute___c__DisplayClass52_0___GetDefenseAreaData_b__0(
        WarBoardAIRoute___c__DisplayClass52_0_o *this,
        int32_t square,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // x0

  if ( (byte_4D2E2F8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    byte_4D2E2F8 = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_1C93D2C(0, *(_QWORD *)&square);
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_34E145C *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
}


void WarBoardAIRoute___c__DisplayClass58_0___ctor(
        WarBoardAIRoute___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIRoute___c__DisplayClass58_0___IsDetour_b__0(
        WarBoardAIRoute___c__DisplayClass58_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct System_Int32_array *route; // x8
  __int64 i; // x9

  route = this->fields.route;
  if ( !route )
    sub_1C93D2C(this, x);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(route->max_length) )
    sub_1C93D34(this);
  return route->m_Items[i] == x;
}


void WarBoardAIRoute___c__DisplayClass64_0___ctor(
        WarBoardAIRoute___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIRoute___c__DisplayClass64_0___GetTargetToDistanceUsingIndividuality_b__0(
        WarBoardAIRoute___c__DisplayClass64_0_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  struct System_Func_IWarBoardObjectData__bool__o *excludeCond; // x8

  excludeCond = this->fields.excludeCond;
  if ( !excludeCond )
    sub_1C93D2C(this, x);
  return (((__int64 (__fastcall *)(intptr_t, IWarBoardObjectData_o *, intptr_t))excludeCond->fields.invoke_impl)(
            excludeCond->fields.method_code,
            x,
            excludeCond->fields.method)
        & 1) == 0
      && this->fields.basePiece != (struct WarBoardPieceData_o *)x;
}


int32_t WarBoardAIRoute___c__DisplayClass64_0___GetTargetToDistanceUsingIndividuality_b__1(
        WarBoardAIRoute___c__DisplayClass64_0_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  WarBoardAIRoute___c__DisplayClass64_0_o *v4; // x20
  IWarBoardObjectData_c *klass; // x8
  int32_t baseSquareIndex; // w20
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  const MethodInfo *v10; // x5
  int32_t v11; // w19

  v4 = this;
  if ( (byte_4D2E2F9 & 1) == 0 )
  {
    sub_1C93AD4(&AStarSearch_TypeInfo);
    this = (WarBoardAIRoute___c__DisplayClass64_0_o *)sub_1C93AD4(&IWarBoardObjectData_TypeInfo);
    byte_4D2E2F9 = 1;
  }
  if ( !x )
    goto LABEL_14;
  klass = x->klass;
  baseSquareIndex = v4->fields.baseSquareIndex;
  v7 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*p_offset + 1];
  }
  else
  {
LABEL_8:
    v9 = sub_1C69E5C(x, IWarBoardObjectData_TypeInfo, 1);
  }
  v11 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v9)(x, *(_QWORD *)(v9 + 8));
  if ( !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  this = (WarBoardAIRoute___c__DisplayClass64_0_o *)AStarSearch__RouteSearch(0, baseSquareIndex, v11, 0, 0, v10);
  if ( !this )
LABEL_14:
    sub_1C93D2C(this, x);
  return (int32_t)this->fields.basePiece;
}


void WarBoardAIRoute___c__DisplayClass65_0___ctor(
        WarBoardAIRoute___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIRoute___c__DisplayClass65_0___GetTargetToDistance_g__excludeCond_0(
        WarBoardAIRoute___c__DisplayClass65_0_o *this,
        IWarBoardObjectData_o *targetObject,
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
  System_Collections_Generic_List_T__o *routeDataList; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_4D2E2FA & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1C93AD4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__);
    sub_1C93AD4(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
    byte_4D2E2FA = 1;
  }
  v5 = sub_1C93D20(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = targetObject;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)targetObject, v8, v9, v10, v11, v12, v13);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v15 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    0);
  return BasicHelper__Any_object_(
           routeDataList,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_318DB78 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
}


void WarBoardAIRoute___c__DisplayClass65_1___ctor(
        WarBoardAIRoute___c__DisplayClass65_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIRoute___c__DisplayClass65_1___GetTargetToDistance_b__1(
        WarBoardAIRoute___c__DisplayClass65_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  WarBoardAIRoute___c__DisplayClass65_1_o *v4; // x20
  struct IWarBoardObjectData_o *targetObject; // x21
  IWarBoardObjectData_c *klass; // x8
  __int64 naturalAligment; // x10
  int32_t baseIndex; // w23
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  struct IWarBoardObjectData_o *v13; // x20
  IWarBoardObjectData_c *v14; // x8
  int32_t actionIndex; // w19
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0

  v4 = this;
  if ( (byte_4D2E2FB & 1) == 0 )
  {
    sub_1C93AD4(&IWarBoardObjectData_TypeInfo);
    this = (WarBoardAIRoute___c__DisplayClass65_1_o *)sub_1C93AD4(&WarBoardItemData_TypeInfo);
    byte_4D2E2FB = 1;
  }
  targetObject = v4->fields.targetObject;
  if ( !targetObject )
    return 0;
  klass = targetObject->klass;
  naturalAligment = WarBoardItemData_TypeInfo->_2.naturalAligment;
  if ( targetObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarBoardItemData_c *)klass->_2.typeHierarchy[naturalAligment - 1] != WarBoardItemData_TypeInfo )
  {
    return 0;
  }
  if ( !x )
    goto LABEL_25;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  baseIndex = x->fields.baseIndex;
  v10 = *(unsigned __int16 *)&klass->_2.rank;
  if ( *(_WORD *)&klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_13;
    }
    v12 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_13:
    v12 = sub_1C69E5C(v4->fields.targetObject, IWarBoardObjectData_TypeInfo, 0);
  }
  this = (WarBoardAIRoute___c__DisplayClass65_1_o *)(*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v12)(
                                                      targetObject,
                                                      *(_QWORD *)(v12 + 8));
  if ( baseIndex == (_DWORD)this )
    return 1;
  v13 = v4->fields.targetObject;
  if ( !v13 )
LABEL_25:
    sub_1C93D2C(this, x);
  v14 = v13->klass;
  actionIndex = x->fields.actionIndex;
  v16 = *(unsigned __int16 *)&v13->klass->_2.rank;
  if ( *(_WORD *)&v13->klass->_2.rank )
  {
    v17 = &v14->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v17 - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v16;
      v17 += 4;
      if ( !v16 )
        goto LABEL_22;
    }
    v18 = (__int64)&v14->vtable[*v17];
  }
  else
  {
LABEL_22:
    v18 = sub_1C69E5C(v13, IWarBoardObjectData_TypeInfo, 0);
  }
  return actionIndex == (*(unsigned int (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v18)(
                          v13,
                          *(_QWORD *)(v18 + 8));
}


void WarBoardAIRoute___c__DisplayClass66_0___ctor(
        WarBoardAIRoute___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIRoute___c__DisplayClass66_0___GetDesignationItemToDistance_b__0(
        WarBoardAIRoute___c__DisplayClass66_0_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  WarBoardAIRoute___c__DisplayClass66_0_o *v4; // x20
  struct WarBoardItemData_o *value; // x8
  int32_t squareIndex_k__BackingField; // w8

  v4 = this;
  if ( (byte_4D2E2FC & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass66_0_o *)sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__);
    byte_4D2E2FC = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  value = v4->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_1C93D2C(this, x);
  squareIndex_k__BackingField = value->fields._squareIndex_k__BackingField;
  return x->fields.baseIndex == squareIndex_k__BackingField || x->fields.actionIndex == squareIndex_k__BackingField;
}


void WarBoardAIRoute___c__DisplayClass76_0___ctor(
        WarBoardAIRoute___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIRoute___c__DisplayClass76_0___IsActableReplace_b__0(
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
    goto LABEL_10;
  basePiece = x->fields.basePiece;
  if ( !basePiece )
    goto LABEL_10;
  actionPiece = this->fields.actionPiece;
  if ( !actionPiece )
    goto LABEL_10;
  index_k__BackingField = basePiece->fields._index_k__BackingField;
  v6 = actionPiece->fields._index_k__BackingField;
  if ( index_k__BackingField == v6 )
    return 1;
  if ( (x->fields.flagNow & 0x4000000) == 0 )
    return 0;
  v8 = x->fields.actionPiece;
  if ( !v8 )
LABEL_10:
    sub_1C93D2C(this, x);
  return v8->fields._index_k__BackingField == v6;
}


void WarBoardAIRoute___c__DisplayClass84_0___ctor(
        WarBoardAIRoute___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarBoardAIRoute___c__DisplayClass84_0___GetRouteSumPieceActionCost_b__0(
        WarBoardAIRoute___c__DisplayClass84_0_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  int64_t flagNow; // x9
  struct WarBoardPieceData_o *basePiece; // x10
  struct WarBoardPieceData_o *targetPiece; // x8
  struct WarBoardCost_o *Cost_k__BackingField; // x8
  __int64 v8; // x10
  bool v9; // nf
  __int64 v10; // x9
  struct WarBoardPieceData_o *v11; // x8
  struct WarBoardPieceData_o *v12; // x9
  int32_t index_k__BackingField; // w10
  struct WarBoardPieceData_o *actionPiece; // x11

  if ( !x )
    goto LABEL_26;
  if ( x->fields.baseIndex == x->fields.actionIndex )
    return 0;
  flagNow = x->fields.flagNow;
  if ( (flagNow & 2) == 0 )
    goto LABEL_10;
  basePiece = x->fields.basePiece;
  if ( !basePiece )
    goto LABEL_26;
  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    goto LABEL_26;
  if ( basePiece->fields._index_k__BackingField != targetPiece->fields._index_k__BackingField )
  {
LABEL_10:
    v11 = x->fields.basePiece;
    if ( (flagNow & 0x4000000) != 0 )
    {
      if ( !v11 )
        goto LABEL_26;
      v12 = this->fields.targetPiece;
      if ( !v12 )
        goto LABEL_26;
      index_k__BackingField = v12->fields._index_k__BackingField;
      if ( v11->fields._index_k__BackingField == index_k__BackingField )
        goto LABEL_20;
      actionPiece = x->fields.actionPiece;
      if ( !actionPiece )
        goto LABEL_26;
      if ( actionPiece->fields._index_k__BackingField == index_k__BackingField )
        goto LABEL_20;
    }
    else if ( !v11 )
    {
      goto LABEL_26;
    }
    v12 = this->fields.targetPiece;
    if ( !v12 )
      goto LABEL_26;
    if ( v11->fields._index_k__BackingField != v12->fields._index_k__BackingField )
      return 0;
LABEL_20:
    Cost_k__BackingField = v12->fields._Cost_k__BackingField;
    if ( Cost_k__BackingField )
    {
      v8 = 28;
      v9 = Cost_k__BackingField->fields.overwirteMove < 0;
      v10 = 44;
      goto LABEL_22;
    }
LABEL_26:
    sub_1C93D2C(this, x);
  }
  Cost_k__BackingField = targetPiece->fields._Cost_k__BackingField;
  if ( !Cost_k__BackingField )
    goto LABEL_26;
  v8 = 32;
  v9 = Cost_k__BackingField->fields.overwirteAttack < 0;
  v10 = 48;
LABEL_22:
  if ( v9 )
    v10 = v8;
  return *(_DWORD *)((char *)&Cost_k__BackingField->klass + v10);
}