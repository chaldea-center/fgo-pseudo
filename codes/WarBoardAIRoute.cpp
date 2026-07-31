void WarBoardAIRoute___ctor(WarBoardAIRoute_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardTacticalTrendEntity__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_Dictionary_int__object__o *v18; // x20
  System_Collections_Generic_Dictionary_int__object__o **p_piecePersonalityDic; // x29
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  WarBoardAIRoute_o *v26; // x24
  System_Collections_Generic_List_object__o *v27; // x20
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v34; // x20
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v41; // x20
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v48; // x20
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v55; // x20
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_Collections_Generic_Dictionary_int__object__o *v62; // x20
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  Il2CppObject *Instance; // x22
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  __int64 piecePersonalityDic; // x0
  Il2CppObject *v77; // x1
  const MethodInfo_476E8C0 *v78; // x0
  const MethodInfo *v79; // x3
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  int32_t v81; // w8
  const MethodInfo_476E8C0 *v82; // x0
  const MethodInfo *v83; // x3
  WarBoardActionPointEntity_o *v84; // x0
  int32_t v85; // w8
  const MethodInfo_476E8C0 *v86; // x0
  const MethodInfo *v87; // x3
  WarBoardActionPointEntity_o *v88; // x0
  int32_t v89; // w8
  const MethodInfo_476E8C0 *v90; // x0
  const MethodInfo *v91; // x3
  WarBoardActionPointEntity_o *v92; // x0
  const MethodInfo *v93; // x1
  int32_t v94; // w8
  struct System_Collections_Generic_List_WarBoardRatingBase__o *v95; // x8
  __int64 size; // x2
  int v97; // w9
  MissionNaviTransitionBoardItem_o *p_aiIds; // x20
  struct System_Int32_array *aiIds; // x25
  System_Array_o *v100; // x21
  System_RuntimeFieldHandle_o v101; // x1
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v109; // x26
  __int64 *v110; // x19
  int v111; // w21
  WarBoardAIRoute_PiecePersonality_o *v112; // x27
  const MethodInfo *v113; // x1
  const MethodInfo *v114; // x5
  int32_t v115; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *v116; // x28
  __int64 v117; // x8
  __int64 v118; // x29
  unsigned __int64 v119; // x23
  System_Collections_Generic_List_object__o *actionTrandList; // x20
  Il2CppObject *v121; // x22
  WarBoardAIRoute_ActionTrendInfo_o *v122; // x21
  const MethodInfo *v123; // x2
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  struct System_Object_array *items; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v134; // x28
  __int64 v135; // x8
  __int64 v136; // x29
  unsigned __int64 v137; // x20
  System_String_o *v138; // x2
  System_String_o *v139; // x3
  int32_t v140; // w4
  int32_t v141; // w5
  bool v142; // w6
  bool v143; // w7
  __int64 v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  __int64 v147; // x8
  Il2CppObject *Master_object; // x26
  Il2CppObject *v149; // x27
  __int64 v150; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v151; // x20
  System_Func_object__bool__o *v152; // x21
  __int64 v153; // x8
  __int64 v154; // x28
  __int64 v155; // x9
  int *v156; // x10
  __int64 v157; // x0
  __int64 v158; // x0
  __int64 v159; // x1
  __int64 v160; // x28
  __int64 v161; // x8
  __int64 v162; // x9
  int *v163; // x10
  __int64 v164; // x0
  __int64 v165; // x28
  __int64 v166; // x8
  __int64 v167; // x9
  int *v168; // x10
  __int64 v169; // x0
  __int64 v170; // x1
  int32_t *v171; // x28
  __int64 v172; // x8
  __int64 v173; // x0
  __int64 v174; // x1
  const MethodInfo *v175; // x3
  __int64 v176; // x26
  __int64 v177; // x8
  __int64 v178; // x9
  int *v179; // x10
  __int64 v180; // x0
  MissionNaviTransitionBoardItem_o *p_ratingBaseIds; // x20
  struct System_Int32_array *ratingBaseIds; // x22
  System_Array_o *v183; // x21
  System_RuntimeFieldHandle_o v184; // x1
  System_String_o *v185; // x2
  System_String_o *v186; // x3
  int32_t v187; // w4
  int32_t v188; // w5
  bool v189; // w6
  bool v190; // w7
  il2cpp_array_size_t v191; // x8
  unsigned __int64 i; // x24
  int32_t v193; // w20
  int v194; // w8
  __int64 v195; // x25
  __int64 v196; // x26
  System_String_o *v197; // x2
  System_String_o *v198; // x3
  int32_t v199; // w4
  int32_t v200; // w5
  bool v201; // w6
  bool v202; // w7
  System_String_o *v203; // x2
  System_String_o *v204; // x3
  int32_t v205; // w4
  int32_t v206; // w5
  bool v207; // w6
  bool v208; // w7
  __int64 v209; // x8
  _QWORD *v210; // x9
  __int64 v211; // x10
  __int64 v212; // x8
  int32_t v213; // w21
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicRatingbaseCalcValue; // x20
  Il2CppObject *v215; // x25
  struct System_Int32_array *tacticalIds; // x19
  MissionNaviTransitionBoardItem_o *p_tacticalIds; // x21
  System_Array_o *v218; // x20
  System_RuntimeFieldHandle_o v219; // x1
  System_String_o *v220; // x2
  System_String_o *v221; // x3
  int32_t v222; // w4
  int32_t v223; // w5
  bool v224; // w6
  bool v225; // w7
  il2cpp_array_size_t v226; // x8
  unsigned __int64 v227; // x21
  int32_t v228; // w20
  System_String_o *v229; // x2
  System_String_o *v230; // x3
  int32_t v231; // w4
  int32_t v232; // w5
  bool v233; // w6
  bool v234; // w7
  System_Collections_Generic_List_object__o *v235; // x8
  struct System_Object_array *v236; // x9
  _QWORD *v237; // x10
  __int64 v238; // x11
  __int64 v239; // x1
  Il2CppClass **v240; // x0
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v243; // x22
  const MethodInfo *v244; // x3
  System_String_o *v245; // x2
  System_String_o *v246; // x3
  int32_t v247; // w4
  int32_t v248; // w5
  bool v249; // w6
  bool v250; // w7
  struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o **p_tacticalTrendList; // [xsp+0h] [xbp-D0h]
  struct System_Collections_Generic_List_WarBoardRatingBase__o **p_ratingBaseList; // [xsp+18h] [xbp-B8h]
  DataManager_o *v255; // [xsp+28h] [xbp-A8h]
  WarBoardReinforcementsEntity_o *v256; // [xsp+40h] [xbp-90h] BYREF
  WarBoardStageReinforcementsEntity_o *v257; // [xsp+48h] [xbp-88h] BYREF
  __int64 v258; // [xsp+50h] [xbp-80h]
  Il2CppObject *item; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *v260; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_5935F60 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_IndexValue_int____91487608);
    sub_21FFC50(&WarBoardEvalValueSquare_CalcEval_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardAIMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_21FFC50(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
    sub_21FFC50(&WarBoardAIRoute_PiecePersonality_TypeInfo);
    sub_21FFC50(&ShortestDistanceFromAllyMaster_TypeInfo);
    sub_21FFC50(&ShortestDistanceFromAllyServant_TypeInfo);
    sub_21FFC50(&ShortestDistanceFromEnemyMaster_TypeInfo);
    sub_21FFC50(&ShortestDistanceFromEnemyServant_TypeInfo);
    sub_21FFC50(&ShortestDistanceFromItem_TypeInfo);
    sub_21FFC50(&ShortestDistanceFromPrioritySpace_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384);
    sub_21FFC50(&Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49);
    sub_21FFC50(&Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72);
    sub_21FFC50(&Method_WarBoardAIRoute___ctor_b__42_0__);
    sub_21FFC50(&WarBoardAiTargetCacher_TypeInfo);
    byte_5935F60 = 1;
  }
  v3 = System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo;
  v260 = 0;
  entity = 0;
  v258 = 0;
  item = 0;
  v256 = 0;
  v257 = 0;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v4;
  p_tacticalTrendList = &this->fields.tacticalTrendList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.tacticalTrendList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v11;
  p_ratingBaseList = &this->fields.ratingBaseList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.ratingBaseList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v18;
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.piecePersonalityDic;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.piecePersonalityDic,
    (int32_t)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = this;
  v27 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v27;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.allRouteList,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v34,
    (const MethodInfo_4021A04 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v34;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicUniqueKeyAdvantagePieceData,
    (int32_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v41,
    (const MethodInfo_3FD37EC *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v41;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dictionaryCreateRouteDataEvalValue,
    (int32_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v48,
    (const MethodInfo_4021A04 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v48;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicUniqueKeyDesignationItem,
    (int32_t)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v55,
    (const MethodInfo_4021A04 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v55;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicUniqueKeyTarget,
    (int32_t)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v62,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v62;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicRatingbaseCalcValue,
    (int32_t)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.npcData, (int32_t)npc, v70, v71, v72, v73, v74, v75);
  if ( !npc )
    goto LABEL_166;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&npc->fields.forceId;
  v78 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
  this->fields.pickValue = npc->fields.pickValue;
  piecePersonalityDic = (__int64)SingletonMonoBehaviour_object___get_Instance(v78);
  if ( !piecePersonalityDic )
    goto LABEL_166;
  piecePersonalityDic = *(_QWORD *)(piecePersonalityDic + 440);
  if ( !piecePersonalityDic )
    goto LABEL_166;
  ActionPointEntity = WarBoardData__GetActionPointEntity(
                        (WarBoardData_o *)piecePersonalityDic,
                        this->fields.forceId,
                        this->fields.groupId,
                        v79);
  v81 = ActionPointEntity ? ActionPointEntity->fields.moveCost : 0;
  v82 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
  this->fields.moveCost = v81;
  piecePersonalityDic = (__int64)SingletonMonoBehaviour_object___get_Instance(v82);
  if ( !piecePersonalityDic )
    goto LABEL_166;
  piecePersonalityDic = *(_QWORD *)(piecePersonalityDic + 440);
  if ( !piecePersonalityDic )
    goto LABEL_166;
  v84 = WarBoardData__GetActionPointEntity(
          (WarBoardData_o *)piecePersonalityDic,
          this->fields.forceId,
          this->fields.groupId,
          v83);
  v85 = v84 ? v84->fields.masterMoveCost : 0;
  v86 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
  this->fields.masterMoveCost = v85;
  piecePersonalityDic = (__int64)SingletonMonoBehaviour_object___get_Instance(v86);
  if ( !piecePersonalityDic )
    goto LABEL_166;
  piecePersonalityDic = *(_QWORD *)(piecePersonalityDic + 440);
  if ( !piecePersonalityDic )
    goto LABEL_166;
  v88 = WarBoardData__GetActionPointEntity(
          (WarBoardData_o *)piecePersonalityDic,
          this->fields.forceId,
          this->fields.groupId,
          v87);
  v89 = v88 ? v88->fields.attackCost : 0;
  v90 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
  this->fields.attackCost = v89;
  piecePersonalityDic = (__int64)SingletonMonoBehaviour_object___get_Instance(v90);
  if ( !piecePersonalityDic )
    goto LABEL_166;
  piecePersonalityDic = *(_QWORD *)(piecePersonalityDic + 440);
  if ( !piecePersonalityDic )
    goto LABEL_166;
  v92 = WarBoardData__GetActionPointEntity(
          (WarBoardData_o *)piecePersonalityDic,
          this->fields.forceId,
          this->fields.groupId,
          v91);
  v94 = v92 ? v92->fields.wallAttackCost : 0;
  this->fields.wallAttackCost = v94;
  WarBoardAIRoute__Clear(this, v93);
  piecePersonalityDic = (__int64)this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    goto LABEL_166;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
    (const MethodInfo_3F68E90 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  v95 = *p_ratingBaseList;
  if ( !*p_ratingBaseList )
    goto LABEL_166;
  size = (unsigned int)v95->fields._size;
  v97 = v95->fields._version + 1;
  v95->fields._size = 0;
  v95->fields._version = v97;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v95->fields._items, 0, size, 0);
  p_aiIds = (MissionNaviTransitionBoardItem_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v100 = (System_Array_o *)sub_21FFD10(int___TypeInfo, 4);
    v101.fields.value = Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v100, v101, 0);
    p_aiIds->klass = (MissionNaviTransitionBoardItem_c *)v100;
    sub_21FFBF4(p_aiIds, (int32_t)v100, v102, v103, v104, v105, v106, v107);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_166;
  }
  max_length = aiIds->max_length;
  v255 = (DataManager_o *)Instance;
  if ( (int)max_length >= 1 )
  {
    v109 = 0;
    do
    {
      if ( v109 >= (unsigned int)max_length )
        goto LABEL_167;
      v110 = (__int64 *)p_piecePersonalityDic;
      v111 = aiIds->m_Items[v109];
      v112 = (WarBoardAIRoute_PiecePersonality_o *)sub_21FFEBC(WarBoardAIRoute_PiecePersonality_TypeInfo);
      WarBoardAIRoute_PiecePersonality___ctor(v112, v113);
      piecePersonalityDic = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !piecePersonalityDic )
        goto LABEL_166;
      piecePersonalityDic = *(_QWORD *)(piecePersonalityDic + 440);
      if ( !piecePersonalityDic )
        goto LABEL_166;
      piecePersonalityDic = (__int64)WarBoardData__GetPiece(
                                       (WarBoardData_o *)piecePersonalityDic,
                                       v26->fields.forceId,
                                       v26->fields.groupId,
                                       v109,
                                       1,
                                       v114);
      if ( piecePersonalityDic && (v115 = *(_DWORD *)(piecePersonalityDic + 304), v115 > 0) || (v115 = v111, v111 >= 1) )
      {
        if ( !Instance )
          goto LABEL_166;
        piecePersonalityDic = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !piecePersonalityDic )
          goto LABEL_166;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)piecePersonalityDic,
               &entity,
               v115,
               (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          piecePersonalityDic = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
          if ( !entity )
            goto LABEL_166;
          v116 = (DataMasterBase_TMaster__TEntity__PKType__o *)piecePersonalityDic;
          piecePersonalityDic = (__int64)WarBoardAIEntity__GetActionTrendIds((WarBoardAIEntity_o *)entity, 0);
          if ( !piecePersonalityDic )
            goto LABEL_166;
          v117 = *(_QWORD *)(piecePersonalityDic + 24);
          v118 = piecePersonalityDic;
          if ( (int)v117 >= 1 )
          {
            v119 = 0;
            while ( v119 < (unsigned int)v117 )
            {
              if ( !v116 )
                goto LABEL_166;
              piecePersonalityDic = DataMasterBase_object__object__int___TryGetEntity(
                                      v116,
                                      &v260,
                                      *(_DWORD *)(v118 + 32 + 4 * v119),
                                      (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( (piecePersonalityDic & 1) != 0 )
              {
                if ( !v112 )
                  goto LABEL_166;
                actionTrandList = (System_Collections_Generic_List_object__o *)v112->fields.actionTrandList;
                v121 = v260;
                v122 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_21FFEBC(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
                WarBoardAIRoute_ActionTrendInfo___ctor(v122, (WarBoardActionTrendEntity_o *)v121, v123);
                if ( !actionTrandList )
                  goto LABEL_166;
                items = actionTrandList->fields._items;
                v131 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
                ++actionTrandList->fields._version;
                if ( !items )
                  goto LABEL_166;
                v132 = actionTrandList->fields._size;
                if ( (unsigned int)v132 >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    actionTrandList,
                    (Il2CppObject *)v122,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
                }
                else
                {
                  v133 = &items->obj.klass + v132;
                  actionTrandList->fields._size = v132 + 1;
                  v133[4] = (Il2CppClass *)v122;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v133 + 4),
                    (int32_t)v122,
                    v124,
                    v125,
                    v126,
                    v127,
                    v128,
                    v129);
                }
              }
              LODWORD(v117) = *(_DWORD *)(v118 + 24);
              if ( (__int64)++v119 >= (int)v117 )
                goto LABEL_55;
            }
LABEL_167:
            sub_21FFED4(piecePersonalityDic);
          }
LABEL_55:
          Instance = (Il2CppObject *)v255;
          piecePersonalityDic = (__int64)DataManager__GetMasterData_object_(
                                           v255,
                                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_166;
          v134 = (DataMasterBase_TMaster__TEntity__PKType__o *)piecePersonalityDic;
          piecePersonalityDic = (__int64)WarBoardAIEntity__GetRatingOffsetIds((WarBoardAIEntity_o *)entity, 0);
          v26 = this;
          if ( !piecePersonalityDic )
            goto LABEL_166;
          v135 = *(_QWORD *)(piecePersonalityDic + 24);
          v136 = piecePersonalityDic;
          if ( (int)v135 >= 1 )
          {
            v137 = 0;
            while ( v137 < (unsigned int)v135 )
            {
              if ( !v134 )
                goto LABEL_166;
              piecePersonalityDic = DataMasterBase_object__object__int___TryGetEntity(
                                      v134,
                                      &item,
                                      *(_DWORD *)(v136 + 32 + 4 * v137),
                                      (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( (piecePersonalityDic & 1) != 0 )
              {
                if ( !v112 )
                  goto LABEL_166;
                piecePersonalityDic = (__int64)v112->fields.ratingOffsetList;
                if ( !piecePersonalityDic )
                  goto LABEL_166;
                v144 = *(_QWORD *)(piecePersonalityDic + 16);
                v77 = item;
                v145 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
                ++*(_DWORD *)(piecePersonalityDic + 28);
                if ( !v144 )
                  goto LABEL_166;
                v146 = *(int *)(piecePersonalityDic + 24);
                if ( (unsigned int)v146 >= *(_DWORD *)(v144 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)piecePersonalityDic,
                    v77,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
                }
                else
                {
                  v147 = v144 + 8 * v146;
                  *(_DWORD *)(piecePersonalityDic + 24) = v146 + 1;
                  *(_QWORD *)(v147 + 32) = v77;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v147 + 32),
                    (int32_t)v77,
                    v138,
                    v139,
                    v140,
                    v141,
                    v142,
                    v143);
                }
              }
              LODWORD(v135) = *(_DWORD *)(v136 + 24);
              if ( (__int64)++v137 >= (int)v135 )
                goto LABEL_69;
            }
            goto LABEL_167;
          }
        }
      }
LABEL_69:
      piecePersonalityDic = *v110;
      if ( !*v110 )
        goto LABEL_166;
      p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o **)v110;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
        v109,
        (Il2CppObject *)v112,
        (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      LODWORD(max_length) = aiIds->max_length;
    }
    while ( (__int64)++v109 < (int)max_length );
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v77, size);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v149 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  piecePersonalityDic = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !piecePersonalityDic )
    goto LABEL_166;
  v150 = *(_QWORD *)(piecePersonalityDic + 440);
  if ( !v150 )
    goto LABEL_166;
  v151 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v150 + 48);
  v152 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(v152, (Il2CppObject *)v26, Method_WarBoardAIRoute___ctor_b__42_0__, 0);
  piecePersonalityDic = (__int64)System_Linq_Enumerable__Where_object_(
                                   v151,
                                   (System_Func_TSource__bool__o *)v152,
                                   (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  if ( !piecePersonalityDic )
    goto LABEL_166;
  v153 = *(_QWORD *)piecePersonalityDic;
  v154 = piecePersonalityDic;
  v155 = *(unsigned __int16 *)(*(_QWORD *)piecePersonalityDic + 302LL);
  if ( *(_WORD *)(*(_QWORD *)piecePersonalityDic + 302LL) )
  {
    v156 = (int *)(*(_QWORD *)(v153 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)v156 - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      --v155;
      v156 += 4;
      if ( !v155 )
        goto LABEL_80;
    }
    v157 = v153 + 16LL * *v156 + 312;
  }
  else
  {
LABEL_80:
    v157 = sub_2237E2C(piecePersonalityDic, System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, 0);
  }
  v158 = (*(__int64 (__fastcall **)(__int64, _QWORD))v157)(v154, *(_QWORD *)(v157 + 8));
  v258 = v158;
  if ( !v158 )
LABEL_110:
    sub_21FFECC(v158, v159);
  v160 = v158;
  while ( 1 )
  {
    v161 = *(_QWORD *)v160;
    v162 = *(unsigned __int16 *)(*(_QWORD *)v160 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v160 + 302LL) )
    {
      v163 = (int *)(*(_QWORD *)(v161 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v163 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v162;
        v163 += 4;
        if ( !v162 )
          goto LABEL_88;
      }
      v164 = v161 + 16LL * *v163 + 312;
    }
    else
    {
LABEL_88:
      v164 = sub_2237E2C(v160, System_Collections_IEnumerator_TypeInfo, 0);
    }
    piecePersonalityDic = (*(__int64 (__fastcall **)(__int64, _QWORD))v164)(v160, *(_QWORD *)(v164 + 8));
    if ( (piecePersonalityDic & 1) == 0 )
      break;
    v165 = v258;
    if ( !v258 )
      sub_21FFECC(piecePersonalityDic, v77);
    v166 = *(_QWORD *)v258;
    v167 = *(unsigned __int16 *)(*(_QWORD *)v258 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v258 + 302LL) )
    {
      v168 = (int *)(*(_QWORD *)(v166 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v168 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        --v167;
        v168 += 4;
        if ( !v167 )
          goto LABEL_96;
      }
      v169 = v166 + 16LL * *v168 + 312;
    }
    else
    {
LABEL_96:
      v169 = sub_2237E2C(v258, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0);
    }
    v171 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v169)(v165, *(_QWORD *)(v169 + 8));
    if ( !v171 )
      sub_21FFECC(0, v170);
    if ( !*p_piecePersonalityDic )
      sub_21FFECC(0, v170);
    v158 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
             *p_piecePersonalityDic,
             v171[7],
             (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__);
    if ( (v158 & 1) == 0 )
    {
      v172 = *(_QWORD *)(v150 + 16);
      if ( !v172 )
        sub_21FFECC(v158, v159);
      if ( !Master_object )
        sub_21FFECC(v158, v159);
      v158 = WarBoardStageReinforcementsMaster__TryGetEntity(
               (WarBoardStageReinforcementsMaster_o *)Master_object,
               &v257,
               *(_DWORD *)(v172 + 16),
               v171[72],
               0);
      if ( (v158 & 1) != 0 )
      {
        if ( !v257 )
          sub_21FFECC(v158, v159);
        v173 = BasicHelper__IndexValue_int_(
                 v257->fields.reinforcementsIds,
                 v171[73],
                 -1,
                 (const MethodInfo_37E1834 *)Method_BasicHelper_IndexValue_int____91487608);
        if ( !v149 )
          sub_21FFECC(v173, v174);
        v158 = WarBoardReinforcementsMaster__TryGetEntity((WarBoardReinforcementsMaster_o *)v149, &v256, v173, 0);
        if ( (v158 & 1) != 0 )
        {
          if ( !v256 )
            sub_21FFECC(v158, v159);
          WarBoardAIRoute__AddPiecePersonalityDic(v26, v256->fields.aiId, v171[7], v175);
        }
      }
    }
    v160 = v258;
    if ( !v258 )
      goto LABEL_110;
  }
  v176 = v258;
  if ( v258 )
  {
    v177 = *(_QWORD *)v258;
    v178 = *(unsigned __int16 *)(*(_QWORD *)v258 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v258 + 302LL) )
    {
      v179 = (int *)(*(_QWORD *)(v177 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v179 - 1) != System_IDisposable_TypeInfo )
      {
        --v178;
        v179 += 4;
        if ( !v178 )
          goto LABEL_116;
      }
      v180 = v177 + 16LL * *v179 + 312;
    }
    else
    {
LABEL_116:
      v180 = sub_2237E2C(v258, System_IDisposable_TypeInfo, 0);
    }
    piecePersonalityDic = (*(__int64 (__fastcall **)(__int64, _QWORD))v180)(v176, *(_QWORD *)(v180 + 8));
  }
  p_ratingBaseIds = (MissionNaviTransitionBoardItem_o *)&npc->fields.ratingBaseIds;
  ratingBaseIds = npc->fields.ratingBaseIds;
  if ( !ratingBaseIds )
  {
    v183 = (System_Array_o *)sub_21FFD10(int___TypeInfo, 6);
    v184.fields.value = Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v183, v184, 0);
    p_ratingBaseIds->klass = (MissionNaviTransitionBoardItem_c *)v183;
    sub_21FFBF4(p_ratingBaseIds, (int32_t)v183, v185, v186, v187, v188, v189, v190);
    ratingBaseIds = (struct System_Int32_array *)p_ratingBaseIds->klass;
    if ( !p_ratingBaseIds->klass )
      goto LABEL_166;
  }
  v191 = ratingBaseIds->max_length;
  if ( (int)v191 >= 1 )
  {
    for ( i = 0; (__int64)i < (int)v191; ++i )
    {
      if ( i >= (unsigned int)v191 )
        goto LABEL_167;
      if ( !v255 )
        goto LABEL_166;
      v193 = ratingBaseIds->m_Items[i];
      piecePersonalityDic = (__int64)DataManager__GetMasterData_object_(
                                       v255,
                                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
      if ( !piecePersonalityDic )
        goto LABEL_166;
      piecePersonalityDic = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)piecePersonalityDic,
                                       v193,
                                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
      if ( !piecePersonalityDic )
        goto LABEL_166;
      v194 = *(_DWORD *)(piecePersonalityDic + 20);
      v195 = piecePersonalityDic;
      if ( v194 > 2 )
      {
        switch ( v194 )
        {
          case 3:
            v196 = sub_21FFEBC(ShortestDistanceFromEnemyMaster_TypeInfo);
            ShortestDistanceFromEnemyMaster___ctor((ShortestDistanceFromEnemyMaster_o *)v196, 0);
            if ( !v196 )
              goto LABEL_166;
            goto LABEL_145;
          case 4:
            v196 = sub_21FFEBC(ShortestDistanceFromItem_TypeInfo);
            ShortestDistanceFromItem___ctor((ShortestDistanceFromItem_o *)v196, 0);
            if ( !v196 )
              goto LABEL_166;
            goto LABEL_145;
          case 5:
            v196 = sub_21FFEBC(ShortestDistanceFromPrioritySpace_TypeInfo);
            ShortestDistanceFromPrioritySpace___ctor((ShortestDistanceFromPrioritySpace_o *)v196, 0);
            if ( !v196 )
              goto LABEL_166;
            goto LABEL_145;
        }
      }
      else
      {
        switch ( v194 )
        {
          case 0:
            v196 = sub_21FFEBC(ShortestDistanceFromAllyServant_TypeInfo);
            ShortestDistanceFromAllyServant___ctor((ShortestDistanceFromAllyServant_o *)v196, 0);
            if ( !v196 )
              goto LABEL_166;
            goto LABEL_145;
          case 1:
            v196 = sub_21FFEBC(ShortestDistanceFromEnemyServant_TypeInfo);
            ShortestDistanceFromEnemyServant___ctor((ShortestDistanceFromEnemyServant_o *)v196, 0);
            if ( !v196 )
              goto LABEL_166;
            goto LABEL_145;
          case 2:
            v196 = sub_21FFEBC(ShortestDistanceFromAllyMaster_TypeInfo);
            ShortestDistanceFromAllyMaster___ctor((ShortestDistanceFromAllyMaster_o *)v196, 0);
            if ( !v196 )
              goto LABEL_166;
LABEL_145:
            *(_QWORD *)(v196 + 16) = v195;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v196 + 16), v195, v197, v198, v199, v200, v201, v202);
            piecePersonalityDic = (__int64)*p_ratingBaseList;
            if ( !*p_ratingBaseList )
              goto LABEL_166;
            v209 = *(_QWORD *)(piecePersonalityDic + 16);
            v210 = Method_System_Collections_Generic_List_WarBoardRatingBase__Add__;
            ++*(_DWORD *)(piecePersonalityDic + 28);
            if ( !v209 )
              goto LABEL_166;
            v211 = *(int *)(piecePersonalityDic + 24);
            if ( (unsigned int)v211 >= *(_DWORD *)(v209 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)piecePersonalityDic,
                (Il2CppObject *)v196,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v210[4] + 192LL) + 112LL));
            }
            else
            {
              v212 = v209 + 8 * v211;
              *(_DWORD *)(piecePersonalityDic + 24) = v211 + 1;
              *(_QWORD *)(v212 + 32) = v196;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v212 + 32), v196, v203, v204, v205, v206, v207, v208);
            }
            break;
        }
      }
      v213 = *(_DWORD *)(v195 + 16);
      dicRatingbaseCalcValue = this->fields.dicRatingbaseCalcValue;
      v215 = (Il2CppObject *)sub_21FFEBC(WarBoardEvalValueSquare_CalcEval_TypeInfo);
      System_Object___ctor(v215, 0);
      if ( !dicRatingbaseCalcValue )
        goto LABEL_166;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
        v213,
        v215,
        (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
      LODWORD(v191) = ratingBaseIds->max_length;
    }
  }
  p_tacticalIds = (MissionNaviTransitionBoardItem_o *)&npc->fields.tacticalIds;
  tacticalIds = npc->fields.tacticalIds;
  if ( !tacticalIds )
  {
    v218 = (System_Array_o *)sub_21FFD10(int___TypeInfo, 5);
    v219.fields.value = Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v218, v219, 0);
    p_tacticalIds->klass = (MissionNaviTransitionBoardItem_c *)v218;
    sub_21FFBF4(p_tacticalIds, (int32_t)v218, v220, v221, v222, v223, v224, v225);
    tacticalIds = (struct System_Int32_array *)p_tacticalIds->klass;
    if ( !p_tacticalIds->klass )
LABEL_166:
      sub_21FFECC(piecePersonalityDic, v77);
  }
  v226 = tacticalIds->max_length;
  if ( (int)v226 >= 1 )
  {
    v227 = 0;
    while ( v227 < (unsigned int)v226 )
    {
      piecePersonalityDic = (__int64)v255;
      if ( !v255 )
        goto LABEL_166;
      v228 = tacticalIds->m_Items[v227];
      piecePersonalityDic = (__int64)DataManager__GetMasterData_object_(
                                       v255,
                                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !piecePersonalityDic )
        goto LABEL_166;
      piecePersonalityDic = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)piecePersonalityDic,
                                       v228,
                                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      v235 = (System_Collections_Generic_List_object__o *)*p_tacticalTrendList;
      if ( !*p_tacticalTrendList )
        goto LABEL_166;
      v236 = v235->fields._items;
      v237 = Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__;
      ++v235->fields._version;
      if ( !v236 )
        goto LABEL_166;
      v238 = v235->fields._size;
      v239 = piecePersonalityDic;
      if ( (unsigned int)v238 >= LODWORD(v236->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v235,
          (Il2CppObject *)piecePersonalityDic,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v237[4] + 192LL) + 112LL));
      }
      else
      {
        v240 = &v236->obj.klass + v238;
        v235->fields._size = v238 + 1;
        v240[4] = (Il2CppClass *)v239;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v240 + 4), v239, v229, v230, v231, v232, v233, v234);
      }
      LODWORD(v226) = tacticalIds->max_length;
      if ( (__int64)++v227 >= (int)v226 )
        goto LABEL_165;
    }
    goto LABEL_167;
  }
LABEL_165:
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v243 = (WarBoardAiTargetCacher_o *)sub_21FFEBC(WarBoardAiTargetCacher_TypeInfo);
  WarBoardAiTargetCacher___ctor(v243, forceId, groupId, v244);
  this->fields.aiTargetCacher = v243;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.aiTargetCacher,
    (int32_t)v243,
    v245,
    v246,
    v247,
    v248,
    v249,
    v250);
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
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x22
  System_Func_T__TResult__o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Master_object; // x25
  Il2CppObject *v15; // x24
  Il2CppObject *v16; // x22
  WarBoardAIRoute_PiecePersonality_o *v17; // x21
  const MethodInfo *v18; // x1
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v20; // x25
  unsigned __int64 v21; // x29
  System_Collections_Generic_List_object__o *actionTrandList; // x26
  WarBoardActionTrendEntity_o *v23; // x28
  WarBoardAIRoute_ActionTrendInfo_o *v24; // x27
  const MethodInfo *v25; // x2
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  il2cpp_array_size_t v36; // x8
  System_Int32_array *v37; // x23
  unsigned __int64 v38; // x19
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v46; // x9
  __int64 max_length_low; // x10
  il2cpp_array_size_t *v48; // x8
  __int64 v49; // [xsp+8h] [xbp-78h]
  WarBoardAIRoute_o *v50; // [xsp+10h] [xbp-70h]
  WarBoardAIEntity_o *v51; // [xsp+18h] [xbp-68h]

  if ( (byte_5935F61 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardAIMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____);
    sub_21FFC50(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
    sub_21FFC50(&WarBoardAIRoute_PiecePersonality_TypeInfo);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__);
    sub_21FFC50(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
    byte_5935F61 = 1;
  }
  v7 = sub_21FFEBC(WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_37;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  *(_DWORD *)(v7 + 16) = pieceIndex;
  v11 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
  System_Func_KeyValuePair_int__object___bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    0);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__object___58930812(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v11,
         (const MethodInfo_383367C *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  v49 = v7;
  v50 = this;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v16 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v17 = (WarBoardAIRoute_PiecePersonality_o *)sub_21FFEBC(WarBoardAIRoute_PiecePersonality_TypeInfo);
  WarBoardAIRoute_PiecePersonality___ctor(v17, v18);
  if ( !Master_object )
    goto LABEL_37;
  Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   aiId,
                                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_37;
  v51 = (WarBoardAIEntity_o *)Entity;
  Entity = WarBoardAIEntity__GetActionTrendIds((WarBoardAIEntity_o *)Entity, 0);
  if ( !Entity )
    goto LABEL_37;
  max_length = Entity->max_length;
  v20 = Entity;
  if ( (int)max_length >= 1 )
  {
    v21 = 0;
    while ( v21 < (unsigned int)max_length )
    {
      if ( !v15 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                                       v20->m_Items[v21],
                                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v17 )
          goto LABEL_37;
        actionTrandList = (System_Collections_Generic_List_object__o *)v17->fields.actionTrandList;
        v23 = (WarBoardActionTrendEntity_o *)Entity;
        v24 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_21FFEBC(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v24, v23, v25);
        if ( !actionTrandList )
          goto LABEL_37;
        items = actionTrandList->fields._items;
        v33 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++actionTrandList->fields._version;
        if ( !items )
          goto LABEL_37;
        size = actionTrandList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            actionTrandList,
            (Il2CppObject *)v24,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          actionTrandList->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v24;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v24, v26, v27, v28, v29, v30, v31);
        }
      }
      LODWORD(max_length) = v20->max_length;
      if ( (__int64)++v21 >= (int)max_length )
        goto LABEL_22;
    }
LABEL_38:
    sub_21FFED4(Entity);
  }
LABEL_22:
  Entity = WarBoardAIEntity__GetRatingOffsetIds(v51, 0);
  if ( !Entity )
    goto LABEL_37;
  v36 = Entity->max_length;
  v37 = Entity;
  if ( (int)v36 >= 1 )
  {
    v38 = 0;
    while ( v38 < (unsigned int)v36 )
    {
      if ( !v16 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v16,
                                       v37->m_Items[v38],
                                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v17 )
          goto LABEL_37;
        p_obj = &Entity->obj;
        Entity = (System_Int32_array *)v17->fields.ratingOffsetList;
        if ( !Entity )
          goto LABEL_37;
        bounds = Entity->bounds;
        v46 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
        ++HIDWORD(Entity->max_length);
        if ( !bounds )
          goto LABEL_37;
        max_length_low = SLODWORD(Entity->max_length);
        if ( (unsigned int)max_length_low >= bounds[1].lower_bound )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Entity,
            p_obj,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &bounds->length + max_length_low;
          LODWORD(Entity->max_length) = max_length_low + 1;
          v48[4] = (il2cpp_array_size_t)p_obj;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v48 + 4), (int32_t)p_obj, v39, v40, v41, v42, v43, v44);
        }
      }
      LODWORD(v36) = v37->max_length;
      if ( (__int64)++v38 >= (int)v36 )
        goto LABEL_35;
    }
    goto LABEL_38;
  }
LABEL_35:
  Entity = (System_Int32_array *)v50->fields.piecePersonalityDic;
  if ( !Entity )
LABEL_37:
    sub_21FFECC(Entity, p_obj);
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)Entity,
    *(_DWORD *)(v49 + 16),
    (Il2CppObject *)v17,
    (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
}


void WarBoardAIRoute__BeforeCreateRouteData(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *Instance; // x0
  const MethodInfo *v4; // x1
  _QWORD *v5; // x19
  System_Collections_Generic_List_object__o *v6; // x22
  System_Collections_Generic_List_object__o *v7; // x21
  System_Collections_Generic_List_object__o *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x24
  int v16; // w8
  unsigned int v17; // w26
  struct System_Object_array *items; // x8
  __int64 v19; // x23
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  WarBoardAIRoute_o *v23; // x10
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  System_Object_array *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Object_array *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct WarBoardSquareData_array *v46; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct WarBoardItemData_array *v53; // x1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct WarBoardTreasureData_array *v60; // x1
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  struct WarBoardWallData_array *v67; // x1
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  __int64 v74; // x1
  __int64 v75; // x2
  System_Collections_Generic_List_object__o *v76; // x25
  int32_t forceId; // w19
  int32_t groupId; // w20
  WarBoardAIRoute_AIRouteMasterData_o *v79; // x21
  const MethodInfo *v80; // x3
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  WarBoardAIRoute_o *v87; // x22
  System_Collections_Generic_Dictionary_int__uint__o *v88; // x19
  void **p_placePieceData; // x20
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  const MethodInfo *v96; // x3
  struct WarBoardPieceData_array *allAllyPiece; // x9
  int max_length; // w8
  unsigned int v99; // w10
  WarBoardPieceData_o *v100; // x19
  const MethodInfo *v101; // x3
  int32_t forceId_k__BackingField; // w8
  int32_t v103; // w9
  int32_t v104; // w1
  WarBoardAIRoute_DesignationItemData_o *v105; // x19
  const MethodInfo *v106; // x1
  WarBoardAIRoute_PutSquareTarget_o *v107; // x25
  const MethodInfo *v108; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v110; // x20
  __int64 v111; // x9
  int *p_offset; // x10
  __int64 v113; // x0
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  __int64 v115; // x1
  WarBoardActionTrendConditionEntity_array *v116; // x20
  WarBoardAIRoute_PutSquareTarget_o *v117; // x27
  Il2CppClass *v118; // x8
  __int64 v119; // x9
  int *v120; // x10
  __int64 v121; // x0
  __int64 v122; // x0
  WarBoardActionTrendConditionEntity_array *v123; // x20
  Il2CppClass *v124; // x8
  __int64 v125; // x9
  int *v126; // x10
  __int64 v127; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v128; // x0
  const MethodInfo *v129; // x1
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x29
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v132; // x9
  WarBoardActionTrendConditionEntity_o *v133; // x24
  struct System_Int32_array *conditionTypes; // x23
  il2cpp_array_size_t v135; // x8
  unsigned __int64 v136; // x28
  int32_t v137; // w25
  __int64 v138; // x26
  __int64 v139; // x0
  __int64 v140; // x1
  __int64 ConditionType; // x0
  __int64 v142; // x1
  System_Collections_Generic_Dictionary_int__object__o *v143; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_object__bool__o *v145; // x20
  __int64 v146; // x1
  Il2CppObject *v147; // x2
  System_Collections_Generic_Dictionary_int__object__o *v148; // x0
  int32_t v149; // w21
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x0
  const MethodInfo *v152; // x2
  TargetDetector_o *DetectorByTrendKey; // x0
  __int64 v154; // x1
  System_Func_T__TResult__o *v155; // x19
  WarBoardAiTargetCacher_o *v156; // x19
  int64_t v157; // x0
  const MethodInfo *v158; // x4
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicIndividualityPutSqareIndex; // x21
  int64_t v160; // x19
  int64_t v161; // x20
  __int64 v162; // x22
  __int64 v163; // x0
  __int64 v164; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x19
  WarBoardAIRoute_o *v166; // x0
  const MethodInfo *v167; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicSquarePutSqareIndex; // x19
  int64_t v169; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_object__bool__o *v171; // x20
  WarBoardActionTrendConditionEntity_array *v172; // x26
  int64_t v173; // x19
  __int64 v174; // x21
  System_String_o *v175; // x2
  System_String_o *v176; // x3
  int32_t v177; // w4
  int32_t v178; // w5
  bool v179; // w6
  bool v180; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v181; // x19
  int64_t v182; // x0
  WarBoardActionTrendConditionEntity_array *v183; // x24
  Il2CppClass *v184; // x8
  __int64 v185; // x9
  int *v186; // x10
  __int64 v187; // x0
  __int64 v188; // x1
  __int64 v189; // x2
  WarBoardAiTargetCacher_o *v190; // x20
  WarBoardAIRoute___c_c *v191; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__45_0; // x19
  Il2CppObject *v194; // x21
  struct WarBoardAIRoute___c_StaticFields *v195; // x0
  System_String_o *v196; // x2
  System_String_o *v197; // x3
  int32_t v198; // w4
  int32_t v199; // w5
  bool v200; // w6
  bool v201; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v202; // x0
  const MethodInfo *v203; // x2
  WarBoardAIRoute_AdvantagePieceData_o *v204; // x20
  const MethodInfo *v205; // x1
  struct WarBoardPieceData_array *v206; // x21
  int v207; // w8
  int32_t v208; // w24
  unsigned int v209; // w22
  __int64 v210; // x8
  __int64 v211; // x25
  __int64 v212; // x1
  __int64 v213; // x2
  int32_t ClassId; // w19
  float Magnification; // s10
  float v216; // s11
  float v217; // s9
  float v218; // s8
  const MethodInfo *v219; // x1
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+10h] [xbp-120h]
  void **p_aiRouteMasterData; // [xsp+18h] [xbp-118h]
  struct WarBoardPieceData_array *v222; // [xsp+28h] [xbp-108h]
  unsigned int v223; // [xsp+34h] [xbp-FCh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-F8h]
  unsigned __int64 v225; // [xsp+40h] [xbp-F0h]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+48h] [xbp-E8h]
  WarBoardAIRoute_o *v227; // [xsp+60h] [xbp-D0h]
  System_Collections_Generic_List_IWarBoardObjectData__o *objectList; // [xsp+68h] [xbp-C8h]
  Il2CppObject *v229; // [xsp+70h] [xbp-C0h]
  bool notSquareTarget; // [xsp+90h] [xbp-A0h] BYREF
  int32_t condType; // [xsp+94h] [xbp-9Ch] BYREF
  WarBoardActionTrendConditionEntity_array *v232; // [xsp+98h] [xbp-98h]
  Il2CppObject *value; // [xsp+A8h] [xbp-88h] BYREF

  if ( (byte_5935F63 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAIRoute_AIRouteMasterData_TypeInfo);
    sub_21FFC50(&WarBoardAIRoute_AdvantagePieceData_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&WarBoardAIRoute_DesignationItemData_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__uint__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
    sub_21FFC50(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardItemData__bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
    sub_21FFC50(&WarBoardAIRoute_PutSquareTarget_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&SvtClassAttri_TypeInfo);
    sub_21FFC50(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_21FFC50(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__);
    sub_21FFC50(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
    sub_21FFC50(&WarBoardAIRoute___c_TypeInfo);
    sub_21FFC50(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__);
    byte_5935F63 = 1;
  }
  v227 = this;
  value = 0;
  v232 = 0;
  condType = 0;
  notSquareTarget = 0;
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_227;
  v5 = *(_QWORD **)&Instance[5].fields._freeCount;
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v5 )
    goto LABEL_227;
  v15 = v5[6];
  if ( !v15 )
    goto LABEL_227;
  v16 = *(_DWORD *)(v15 + 24);
  if ( v16 >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= v16 )
LABEL_228:
        sub_21FFED4(Instance);
      if ( !v8 )
        break;
      items = v8->fields._items;
      v19 = *(_QWORD *)(v15 + 8LL * (int)v17 + 32);
      v20 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v19,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v19;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), v19, v9, v10, v11, v12, v13, v14);
      }
      if ( !v19 )
        break;
      if ( !*(_BYTE *)(v19 + 60) )
      {
        v23 = v227;
        if ( *(_DWORD *)(v19 + 20) == v227->fields.forceId && *(_DWORD *)(v19 + 24) == v227->fields.groupId )
        {
          if ( !v6 )
            break;
          v24 = v6->fields._items;
          v25 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v6->fields._version;
          if ( !v24 )
            break;
          v26 = v6->fields._size;
          if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v19,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &v24->obj.klass + v26;
            v6->fields._size = v26 + 1;
            v27[4] = (Il2CppClass *)v19;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 4), v19, v9, v10, v11, v12, v13, v14);
          }
          v23 = v227;
        }
        if ( *(_DWORD *)(v19 + 20) != v23->fields.forceId )
        {
          if ( !v7 )
            break;
          v28 = v7->fields._items;
          v29 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v7->fields._version;
          if ( !v28 )
            break;
          v30 = v7->fields._size;
          if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v19,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &v28->obj.klass + v30;
            v7->fields._size = v30 + 1;
            v31[4] = (Il2CppClass *)v19;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 4), v19, v9, v10, v11, v12, v13, v14);
          }
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                (WarBoardPieceData_o *)v19,
                                                                                0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            v227->fields.enemyMasterSquareIndex = *(_DWORD *)(v19 + 64);
        }
      }
      v16 = *(_DWORD *)(v15 + 24);
      if ( (int)++v17 >= v16 )
        goto LABEL_33;
    }
LABEL_227:
    sub_21FFECC(Instance, v4);
  }
LABEL_33:
  if ( !v6 )
    goto LABEL_227;
  v32 = System_Collections_Generic_List_object___ToArray(
          v6,
          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v227->fields.allAllyPiece = (struct WarBoardPieceData_array *)v32;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v227->fields.allAllyPiece,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !v7 )
    goto LABEL_227;
  v39 = System_Collections_Generic_List_object___ToArray(
          v7,
          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v227->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v39;
  p_allEnemyPiece = &v227->fields.allEnemyPiece;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v227->fields.allEnemyPiece,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (struct WarBoardSquareData_array *)v5[7];
  v227->fields.allSquare = v46;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v227->fields.allSquare, (int32_t)v46, v47, v48, v49, v50, v51, v52);
  v53 = (struct WarBoardItemData_array *)v5[9];
  v227->fields.allItemData = v53;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v227->fields.allItemData, (int32_t)v53, v54, v55, v56, v57, v58, v59);
  v60 = (struct WarBoardTreasureData_array *)v5[10];
  v227->fields.allTreasureData = v60;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v227->fields.allTreasureData,
    (int32_t)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = (struct WarBoardWallData_array *)v5[11];
  v227->fields.allWallData = v67;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v227->fields.allWallData, (int32_t)v67, v68, v69, v70, v71, v72, v73);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v227->fields.dictionaryCreateRouteDataEvalValue;
  if ( !Instance )
    goto LABEL_227;
  System_Collections_Generic_Dictionary_object__float___Clear(
    Instance,
    (const MethodInfo_3FD4308 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v227->fields.dicUniqueKeyDesignationItem;
  if ( !Instance )
    goto LABEL_227;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_4022540 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v227->fields.dicUniqueKeyTarget;
  if ( !Instance )
    goto LABEL_227;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_4022540 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v227->fields.dicUniqueKeyAdvantagePieceData;
  if ( !Instance )
    goto LABEL_227;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_4022540 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_227;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v74, v75);
  DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v76 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v76,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v76 )
    goto LABEL_227;
  System_Collections_Generic_List_object___AddRange(
    v76,
    (System_Collections_Generic_IEnumerable_T__o *)v227->fields.allItemData,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v76,
    (System_Collections_Generic_IEnumerable_T__o *)v227->fields.allTreasureData,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v76,
    (System_Collections_Generic_IEnumerable_T__o *)v227->fields.allWallData,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  objectList = (System_Collections_Generic_List_IWarBoardObjectData__o *)v76;
  System_Collections_Generic_List_object___AddRange(
    v76,
    (System_Collections_Generic_IEnumerable_T__o *)v8,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  forceId = v227->fields.forceId;
  groupId = v227->fields.groupId;
  v79 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_21FFEBC(WarBoardAIRoute_AIRouteMasterData_TypeInfo);
  WarBoardAIRoute_AIRouteMasterData___ctor(v79, forceId, groupId, v80);
  v227->fields.aiRouteMasterData = v79;
  p_aiRouteMasterData = (void **)&v227->fields.aiRouteMasterData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v227->fields.aiRouteMasterData,
    (int32_t)v79,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v87 = v227;
  v88 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v88,
    (const MethodInfo_3F71C18 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  v227->fields.placePieceData = v88;
  p_placePieceData = (void **)&v227->fields.placePieceData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v227->fields.placePieceData,
    (int32_t)v88,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  allAllyPiece = v227->fields.allAllyPiece;
  if ( !allAllyPiece )
    goto LABEL_227;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v99 = 0;
    v222 = v227->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v99 >= max_length )
        goto LABEL_228;
      v100 = allAllyPiece->m_Items[v99];
      if ( !v100 )
        goto LABEL_227;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      v223 = v99;
      if ( !*p_placePieceData )
        goto LABEL_227;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
                                                                            v100->fields._nowSquareIndex_k__BackingField,
                                                                            (const MethodInfo_3F727A8 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_203;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      pieceData = v100;
      if ( !*p_placePieceData )
        goto LABEL_227;
      System_Collections_Generic_Dictionary_int__uint___Add(
        (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
        v100->fields._nowSquareIndex_k__BackingField,
        v100->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_3F725BC *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
      forceId_k__BackingField = v100->fields._forceId_k__BackingField;
      v103 = v87->fields.forceId;
      if ( forceId_k__BackingField != v103 )
        goto LABEL_57;
      if ( v100->fields._groupId_k__BackingField == v87->fields.groupId )
        break;
LABEL_58:
      if ( v100->fields._groupId_k__BackingField == v87->fields.groupId )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
        if ( !*p_aiRouteMasterData )
          goto LABEL_227;
        v104 = 2;
        goto LABEL_61;
      }
LABEL_62:
      v105 = (WarBoardAIRoute_DesignationItemData_o *)sub_21FFEBC(WarBoardAIRoute_DesignationItemData_TypeInfo);
      WarBoardAIRoute_DesignationItemData___ctor(v105, v106);
      v107 = (WarBoardAIRoute_PutSquareTarget_o *)sub_21FFEBC(WarBoardAIRoute_PutSquareTarget_TypeInfo);
      WarBoardAIRoute_PutSquareTarget___ctor(v107, v108);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v87->fields.piecePersonalityDic;
      if ( !Instance )
        goto LABEL_227;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                                                            pieceData->fields._index_k__BackingField,
                                                                            &value,
                                                                            (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)value;
        if ( !value )
          goto LABEL_227;
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
                                                                              (WarBoardAIRoute_PiecePersonality_o *)value,
                                                                              v4);
        if ( !Instance )
          goto LABEL_227;
        klass = Instance->klass;
        v110 = Instance;
        v111 = *(unsigned __int16 *)&Instance->klass->_2.rank;
        v229 = (Il2CppObject *)v105;
        if ( *(_WORD *)&Instance->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
          {
            --v111;
            p_offset += 4;
            if ( !v111 )
              goto LABEL_70;
          }
          v113 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_70:
          v113 = sub_2237E2C(
                   Instance,
                   System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                   0);
        }
        ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)(*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v113)(
                                                                             v110,
                                                                             *(_QWORD *)(v113 + 8));
        v116 = ConditionEntityArray;
        v117 = v107;
        v232 = ConditionEntityArray;
        if ( !ConditionEntityArray )
LABEL_140:
          sub_21FFECC(ConditionEntityArray, v115);
        while ( 1 )
        {
          v118 = v116->obj.klass;
          v119 = *(unsigned __int16 *)&v116->obj.klass->_2.rank;
          if ( *(_WORD *)&v116->obj.klass->_2.rank )
          {
            v120 = &v118->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v120 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v119;
              v120 += 4;
              if ( !v119 )
                goto LABEL_77;
            }
            v121 = (__int64)&v118->vtable[*v120];
          }
          else
          {
LABEL_77:
            v121 = sub_2237E2C(v116, System_Collections_IEnumerator_TypeInfo, 0);
          }
          v122 = (*(__int64 (__fastcall **)(WarBoardActionTrendConditionEntity_array *, _QWORD))v121)(
                   v116,
                   *(_QWORD *)(v121 + 8));
          if ( (v122 & 1) == 0 )
            break;
          v123 = v232;
          if ( !v232 )
            sub_21FFECC(v122, v4);
          v124 = v232->obj.klass;
          v125 = *(unsigned __int16 *)&v232->obj.klass->_2.rank;
          if ( *(_WORD *)&v232->obj.klass->_2.rank )
          {
            v126 = &v124->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__c **)v126 - 1) != System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
            {
              --v125;
              v126 += 4;
              if ( !v125 )
                goto LABEL_85;
            }
            v127 = (__int64)&v124->vtable[*v126];
          }
          else
          {
LABEL_85:
            v127 = sub_2237E2C(
                     v232,
                     System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                     0);
          }
          v128 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(WarBoardActionTrendConditionEntity_array *, _QWORD))v127)(
                                                        v123,
                                                        *(_QWORD *)(v127 + 8));
          if ( !v128 )
            sub_21FFECC(0, v129);
          Entity_k__BackingField = v128->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v128, v129);
          if ( !ConditionEntityArray )
            sub_21FFECC(0, v115);
          max_length_low = LODWORD(ConditionEntityArray->max_length);
          if ( (int)max_length_low >= 1 )
          {
            v132 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v132 >= max_length_low )
                sub_21FFED4(ConditionEntityArray);
              v133 = ConditionEntityArray->m_Items[v132];
              if ( !v133 )
                sub_21FFECC(ConditionEntityArray, v115);
              conditionTypes = v133->fields.conditionTypes;
              if ( !conditionTypes )
                sub_21FFECC(ConditionEntityArray, v115);
              v135 = conditionTypes->max_length;
              v225 = v132;
              if ( (int)v135 >= 1 )
                break;
LABEL_138:
              ConditionEntityArray = condEntityArray;
              max_length_low = LODWORD(condEntityArray->max_length);
              v132 = v225 + 1;
              if ( (int)v225 + 1 >= (int)max_length_low )
                goto LABEL_139;
            }
            v136 = 0;
            while ( 2 )
            {
              if ( v136 >= (unsigned int)v135 )
                sub_21FFED4(ConditionEntityArray);
              v137 = conditionTypes->m_Items[v136];
              v138 = sub_21FFEBC(WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v138, 0);
              if ( !v138 )
                sub_21FFECC(v139, v140);
              *(_DWORD *)(v138 + 16) = -1;
              ConditionType = WarBoardActionTrendConditionEntity__GetConditionType(v133, v137, 0);
              if ( (int)ConditionType <= 39 )
              {
                if ( (_DWORD)ConditionType == 23 || (_DWORD)ConditionType == 24 )
                  goto LABEL_105;
LABEL_137:
                v142 = *(unsigned int *)(v138 + 16);
              }
              else
              {
                if ( (_DWORD)ConditionType != 40 && (_DWORD)ConditionType != 41 && (_DWORD)ConditionType != 42 )
                  goto LABEL_137;
LABEL_105:
                v142 = (unsigned int)v133->fields.value;
                *(_DWORD *)(v138 + 16) = v142;
              }
              if ( (_DWORD)v142 != -1 )
              {
                if ( !v229 )
                  sub_21FFECC(ConditionType, v142);
                v143 = (System_Collections_Generic_Dictionary_int__object__o *)v229[1].klass;
                if ( !v143 )
                  sub_21FFECC(0, v142);
                if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                        v143,
                        v142,
                        (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__) )
                {
                  allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)v227->fields.allItemData;
                  v145 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardItemData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v145,
                    (Il2CppObject *)v138,
                    Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                    0);
                  v147 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
                           allItemData,
                           (System_Func_TSource__bool__o *)v145,
                           (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                  if ( v147 )
                  {
                    v148 = (System_Collections_Generic_Dictionary_int__object__o *)v229[1].klass;
                    if ( !v148 )
                      sub_21FFECC(0, v146);
                    System_Collections_Generic_Dictionary_int__object___Add(
                      v148,
                      *(_DWORD *)(v138 + 16),
                      v147,
                      (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                  }
                }
              }
              *(_DWORD *)(v138 + 16) = -1;
              ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)WarBoardActionTrendConditionEntity__GetConditionType(
                                                                                   v133,
                                                                                   v137,
                                                                                   0);
              if ( (_DWORD)ConditionEntityArray == 74 || (_DWORD)ConditionEntityArray == 75 )
              {
                v149 = v133->fields.value;
                *(_DWORD *)(v138 + 16) = v149;
              }
              else
              {
                if ( (unsigned int)((_DWORD)ConditionEntityArray - 129) >= 0xFFFFFFFE )
                {
                  if ( !Entity_k__BackingField )
                    sub_21FFECC(ConditionEntityArray, v115);
                  aiTargetCacher = v227->fields.aiTargetCacher;
                  TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  if ( !aiTargetCacher )
                    sub_21FFECC(TrendKey, TrendKey);
                  DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(aiTargetCacher, TrendKey, v152);
                  if ( !DetectorByTrendKey )
                  {
                    v155 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
                    System_Func_Int32Enum__bool____ctor(
                      v155,
                      0,
                      Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                      0);
                    WarBoardActionTrendConditionMaster__HasMatchCondition(
                      condEntityArray,
                      (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v155,
                      &condType,
                      0);
                    v156 = v227->fields.aiTargetCacher;
                    v157 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                    if ( !v156 )
                      sub_21FFECC(v157, v157);
                    WarBoardAiTargetCacher__Register(v156, v157, v133, condType, v158);
                  }
                  if ( !v117 )
                    sub_21FFECC(DetectorByTrendKey, v154);
                  dicIndividualityPutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v117->fields.dicIndividualityPutSqareIndex;
                  v160 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  v161 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  v162 = sub_21FFEBC(WarBoardAIRoute_TargetData_TypeInfo);
                  *(_DWORD *)(v162 + 64) = 2;
                  System_Object___ctor((Il2CppObject *)v162, 0);
                  *(_QWORD *)(v162 + 104) = v161;
                  *(_DWORD *)(v162 + 112) = v137;
                  if ( !dicIndividualityPutSqareIndex )
                    sub_21FFECC(v163, v164);
                  System_Collections_Generic_Dictionary_long__object___set_Item(
                    dicIndividualityPutSqareIndex,
                    v160,
                    (Il2CppObject *)v162,
                    (const MethodInfo_3F9C300 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                }
                v149 = *(_DWORD *)(v138 + 16);
                v87 = v227;
              }
              if ( v149 != -1 )
              {
                if ( !v117 )
                  sub_21FFECC(ConditionEntityArray, v115);
                if ( !Entity_k__BackingField )
                  sub_21FFECC(ConditionEntityArray, v115);
                dicObjectPutSquareIndex = v117->fields.dicObjectPutSquareIndex;
                v166 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                WarBoardAIRoute__RegisterTargetObjectToDic(
                  v166,
                  dicObjectPutSquareIndex,
                  objectList,
                  v149,
                  (int64_t)v166,
                  v137,
                  &notSquareTarget,
                  v167);
                if ( !notSquareTarget )
                {
                  dicSquarePutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v117->fields.dicSquarePutSqareIndex;
                  v169 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  if ( !dicSquarePutSqareIndex )
                    sub_21FFECC(v169, v169);
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__object___ContainsKey(
                                                                                       dicSquarePutSqareIndex,
                                                                                       v169,
                                                                                       (const MethodInfo_3F9C508 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)v227->fields.allSquare;
                    v171 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardSquareData__bool__TypeInfo);
                    System_Func_object__bool____ctor(
                      v171,
                      (Il2CppObject *)v138,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                      0);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                                                                         allSquare,
                                                                                         (System_Func_TSource__bool__o *)v171,
                                                                                         (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                    v172 = ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v173 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                      v174 = sub_21FFEBC(WarBoardAIRoute_TargetData_TypeInfo);
                      *(_DWORD *)(v174 + 64) = 2;
                      System_Object___ctor((Il2CppObject *)v174, 0);
                      *(_QWORD *)(v174 + 48) = v172;
                      *(_QWORD *)(v174 + 104) = v173;
                      *(_DWORD *)(v174 + 112) = v137;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)(v174 + 48),
                        (int32_t)v172,
                        v175,
                        v176,
                        v177,
                        v178,
                        v179,
                        v180);
                      v181 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v117->fields.dicSquarePutSqareIndex;
                      v182 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                      if ( !v181 )
                        sub_21FFECC(v182, v182);
                      System_Collections_Generic_Dictionary_long__object___Add(
                        v181,
                        v182,
                        (Il2CppObject *)v174,
                        (const MethodInfo_3F9C314 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                    }
                  }
                }
              }
              LODWORD(v135) = conditionTypes->max_length;
              ++v136;
              v107 = v117;
              if ( (__int64)v136 >= (int)v135 )
                goto LABEL_138;
              continue;
            }
          }
LABEL_139:
          v116 = v232;
          if ( !v232 )
            goto LABEL_140;
        }
        v183 = v232;
        if ( v232 )
        {
          v184 = v232->obj.klass;
          v185 = *(unsigned __int16 *)&v232->obj.klass->_2.rank;
          if ( *(_WORD *)&v232->obj.klass->_2.rank )
          {
            v186 = &v184->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v186 - 1) != System_IDisposable_TypeInfo )
            {
              --v185;
              v186 += 4;
              if ( !v185 )
                goto LABEL_146;
            }
            v187 = (__int64)&v184->vtable[*v186];
          }
          else
          {
LABEL_146:
            v187 = sub_2237E2C(v232, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(WarBoardActionTrendConditionEntity_array *, _QWORD))v187)(v183, *(_QWORD *)(v187 + 8));
        }
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v87->fields.aiTargetCacher;
        if ( !Instance )
          goto LABEL_227;
        WarBoardAiTargetCacher__ClearTargetObject((WarBoardAiTargetCacher_o *)Instance, v4);
        v190 = v87->fields.aiTargetCacher;
        v191 = WarBoardAIRoute___c_TypeInfo;
        if ( !*(&WarBoardAIRoute___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo, v188, v189);
          v191 = WarBoardAIRoute___c_TypeInfo;
        }
        static_fields = v191->static_fields;
        _9__45_0 = (System_Func_object__bool__o *)static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !*(&v191->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v191, v188, v189);
            static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          }
          v194 = (Il2CppObject *)static_fields->__9;
          _9__45_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__45_0,
            v194,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            0);
          v195 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v195->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v195->__9__45_0,
            (int32_t)_9__45_0,
            v196,
            v197,
            v198,
            v199,
            v200,
            v201);
        }
        v202 = System_Linq_Enumerable__Where_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_object_(
                                                                              v202,
                                                                              (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v190 )
          goto LABEL_227;
        WarBoardAiTargetCacher__AggregateTargetObject(v190, (IWarBoardObjectData_array *)Instance, v203);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v87->fields.dicUniqueKeyDesignationItem;
        if ( !Instance )
          goto LABEL_227;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          v229,
          (const MethodInfo_40223B8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v87->fields.dicUniqueKeyTarget;
        p_placePieceData = (void **)&v227->fields.placePieceData;
        if ( !Instance )
          goto LABEL_227;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v107,
          (const MethodInfo_40223B8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isServant(
                                                                              pieceData,
                                                                              0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v204 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_21FFEBC(WarBoardAIRoute_AdvantagePieceData_TypeInfo);
          WarBoardAIRoute_AdvantagePieceData___ctor(v204, v205);
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pieceData->fields._battleServant_k__BackingField;
          if ( !Instance )
            goto LABEL_227;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleServantData__getClassId(
                                                                                (BattleServantData_o *)Instance,
                                                                                0,
                                                                                0);
          v206 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_227;
          v207 = v206->max_length;
          if ( v207 >= 1 )
          {
            v208 = (int)Instance;
            v209 = 0;
            while ( 2 )
            {
              if ( v209 >= v207 )
                goto LABEL_228;
              v210 = (__int64)v206 + 8 * (int)v209;
              v211 = *(_QWORD *)(v210 + 32);
              if ( !v211 )
                goto LABEL_227;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                    *(WarBoardPieceData_o **)(v210 + 32),
                                                                                    0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_200;
              Instance = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(v211 + 128);
              if ( !Instance )
                goto LABEL_227;
              ClassId = BattleServantData__getClassId((BattleServantData_o *)Instance, 0, 0);
              if ( !*(&SvtClassAttri_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v212, v213);
              Magnification = SvtClassAttri__getMagnification(v208, ClassId, 0);
              v216 = SvtClassAttri__getMagnification(ClassId, v208, 0);
              v217 = SvtClassAttri__getMagnification(v208, ClassId, 0);
              v218 = SvtClassAttri__getMagnification(ClassId, v208, 0);
              if ( Magnification > 1.0 )
              {
                if ( !v204 )
                  goto LABEL_227;
                Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v204->fields.dicAttackAdvantageServant;
                if ( !Instance )
                  goto LABEL_227;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                  *(_DWORD *)(v211 + 64),
                  (Il2CppObject *)v211,
                  (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                v204->fields.flagNow |= 0x4000uLL;
                if ( v216 < 1.0 )
                {
LABEL_177:
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v204->fields.dicDefenseAdvantageServant;
                  if ( !Instance )
                    goto LABEL_227;
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                    *(_DWORD *)(v211 + 64),
                    (Il2CppObject *)v211,
                    (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v204->fields.flagNow |= 0x10000uLL;
                }
              }
              else if ( v216 < 1.0 )
              {
                if ( !v204 )
                  goto LABEL_227;
                goto LABEL_177;
              }
              if ( v217 >= 1.0 )
              {
                if ( v218 > 1.0 )
                {
                  if ( !v204 )
                    goto LABEL_227;
                  goto LABEL_186;
                }
              }
              else
              {
                if ( !v204 )
                  goto LABEL_227;
                Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v204->fields.dicAttackDisAdvantageServant;
                if ( !Instance )
                  goto LABEL_227;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                  *(_DWORD *)(v211 + 64),
                  (Il2CppObject *)v211,
                  (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                v204->fields.flagNow |= 0x8000uLL;
                if ( v218 <= 1.0 )
                  goto LABEL_188;
LABEL_186:
                Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v204->fields.dicDefenseDisAdvantageServant;
                if ( !Instance )
                  goto LABEL_227;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                  *(_DWORD *)(v211 + 64),
                  (Il2CppObject *)v211,
                  (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                v204->fields.flagNow |= 0x20000uLL;
              }
LABEL_188:
              if ( Magnification <= 1.0 || v216 >= 1.0 )
              {
                if ( v217 < 1.0 && v218 > 1.0 )
                {
                  if ( !v204 )
                    goto LABEL_227;
LABEL_198:
                  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v204->fields.dicClassDisAdvantageServant;
                  if ( !Instance )
                    goto LABEL_227;
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                    *(_DWORD *)(v211 + 64),
                    (Il2CppObject *)v211,
                    (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                  v204->fields.flagNow |= 0x2000uLL;
                }
              }
              else
              {
                if ( !v204 )
                  goto LABEL_227;
                Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v204->fields.dicClassAdvantageServant;
                if ( !Instance )
                  goto LABEL_227;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                  *(_DWORD *)(v211 + 64),
                  (Il2CppObject *)v211,
                  (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                v204->fields.flagNow |= 0x1000uLL;
                if ( v217 < 1.0 && v218 > 1.0 )
                  goto LABEL_198;
              }
LABEL_200:
              v207 = v206->max_length;
              if ( (int)++v209 >= v207 )
                break;
              continue;
            }
          }
          v87 = v227;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v227->fields.dicUniqueKeyAdvantagePieceData;
          if ( !Instance )
            goto LABEL_227;
          System_Collections_Generic_Dictionary_uint__object___Add(
            Instance,
            pieceData->fields._uniqueIndex_k__BackingField,
            (Il2CppObject *)v204,
            (const MethodInfo_40223B8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          p_placePieceData = (void **)&v227->fields.placePieceData;
        }
      }
LABEL_203:
      allAllyPiece = v222;
      max_length = v222->max_length;
      v99 = v223 + 1;
      if ( (int)(v223 + 1) >= max_length )
        goto LABEL_225;
    }
    if ( WarBoardPieceData__get_isMaster(v100, 0) )
    {
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_227;
      v104 = 0;
LABEL_61:
      WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        (WarBoardAIRoute_AIRouteMasterData_o *)Instance,
        v104,
        v100,
        v101);
      goto LABEL_62;
    }
    forceId_k__BackingField = v100->fields._forceId_k__BackingField;
    v103 = v87->fields.forceId;
LABEL_57:
    if ( forceId_k__BackingField != v103 )
      goto LABEL_62;
    goto LABEL_58;
  }
LABEL_225:
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
  if ( !*p_aiRouteMasterData )
    goto LABEL_227;
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData((WarBoardAIRoute_AIRouteMasterData_o *)Instance, 1, 0, v96);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(v87, v219);
}


int32_t WarBoardAIRoute__CalcurateDistanceType(int32_t newDistance, int32_t oldDistance, const MethodInfo *method)
{
  int32_t v3; // w8

  if ( newDistance < oldDistance )
    v3 = 1;
  else
    v3 = 3;
  if ( newDistance == oldDistance )
    return 2;
  else
    return v3;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardAIRoute__CanAcquireItem(
        WarBoardAIRoute_o *this,
        int32_t targetSquare,
        System_Collections_Generic_List_int__o *alreadyGetItemList,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  WarBoardItemData_o *Item; // x0

  if ( (byte_5935F6D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    this = (WarBoardAIRoute_o *)sub_21FFC50(&WarBoardAIManager_TypeInfo);
    byte_5935F6D = 1;
  }
  if ( !alreadyGetItemList )
    sub_21FFECC(this, *(_QWORD *)&targetSquare);
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 0;
  }
  if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v6, v7);
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
    sub_21FFECC(this, routeData);
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
  if ( (byte_5935F5F & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_21FFC50(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__);
    byte_5935F5F = 1;
  }
  allRouteList = v2->fields.allRouteList;
  if ( !allRouteList )
    sub_21FFECC(this, method);
  size = allRouteList->fields._size;
  v5 = allRouteList->fields._version + 1;
  allRouteList->fields._size = 0;
  allRouteList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)allRouteList->fields._items, 0, size, 0);
}


int32_t WarBoardAIRoute__CompareBaseRange(int32_t baseRange, int32_t actionRange, const MethodInfo *method)
{
  int32_t v3; // w8

  if ( actionRange == baseRange )
    v3 = 2;
  else
    v3 = 3;
  if ( actionRange < baseRange )
    return 1;
  else
    return v3;
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
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x5
  int32_t key; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  int32_t v13; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+10h] [xbp-80h] BYREF

  v6 = dicPieceList;
  if ( (byte_5935F6C & 1) == 0 )
  {
    sub_21FFC50(&AStarSearch_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_int___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    dicPieceList = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    byte_5935F6C = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !v6 )
    sub_21FFECC(dicPieceList, *(_QWORD *)&baseRange);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v7 = 3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v15,
            (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v15,
        (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
      return v7;
    }
    key = (int32_t)v15.fields._current.fields.key;
    if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v8, v9);
    v12 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(0, actionIndex, key, 0, 0, v10);
    v13 = System_Linq_Enumerable__Count_int_(
            v12,
            (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
    if ( v13 < baseRange )
      break;
    if ( v13 == baseRange )
      v7 = 2;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v15,
    (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  return 1;
}


void WarBoardAIRoute__CreateOutOfWarningAreaToDistance(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v2; // x21
  struct System_Collections_Generic_Dictionary_int__int__o **p_dicOutOfWarningAreaRange; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
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
  __int64 v23; // x2
  const MethodInfo *v24; // x5
  int32_t name; // w24
  int32_t v26; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  int32_t v29; // w1
  const MethodInfo_3F5F478 *v30; // x3
  int32_t v31; // w2
  struct System_Collections_Generic_Dictionary_int__int__o **v32; // [xsp+0h] [xbp-70h]

  if ( (byte_5935F78 & 1) == 0 )
  {
    sub_21FFC50(&AStarSearch_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_int___);
    byte_5935F78 = 1;
  }
  v2 = (System_Collections_Generic_Dictionary_int__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v2,
    (const MethodInfo_3F5EAD4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v2;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicOutOfWarningAreaRange,
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
    sub_21FFECC(IsFlag, v11);
  max_length = allSquare->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v32 = &this->fields.dicOutOfWarningAreaRange;
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
            v26 = (int32_t)v22->_1.name;
            if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v11, v23);
            v27 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(0, name, v26, 0, 0, v24);
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__Count_int_(
                                                                            v27,
                                                                            (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
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
          sub_21FFED4(IsFlag);
        }
        v20 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        IsFlag = *v32;
        if ( !*v32 )
          goto LABEL_33;
        v29 = (int32_t)v16->_1.name;
        v30 = (const MethodInfo_3F5F478 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v31 = v20;
      }
      else
      {
        IsFlag = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v29 = (int32_t)v16->_1.name;
        v30 = (const MethodInfo_3F5F478 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v31 = 0;
      }
      System_Collections_Generic_Dictionary_int__int___Add(IsFlag, v29, v31, v30);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_5935F65 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
    byte_5935F65 = 1;
  }
  v9 = sub_21FFEBC(WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 56), (int32_t)piecePlaceData, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v9 + 40) = searchCount;
  *(_QWORD *)(v9 + 48) = routeDataList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 48), (int32_t)routeDataList, v22, v23, v24, v25, v26, v27);
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
  __int64 v8; // x2
  uint32_t v9; // w19
  uint32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5935F7D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    this = (WarBoardAIRoute_o *)sub_21FFC50(&WarBoardAIManager_TypeInfo);
    byte_5935F7D = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_21FFECC(this, basePiece);
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_3F73F28 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
  {
    v9 = value;
    if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v7, v8);
    return WarBoardAIManager__GetPieceUnique(v9, v7);
  }
  else
  {
    if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v7, v8);
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
  if ( (byte_5935F7B & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__);
    byte_5935F7B = 1;
  }
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v6->fields.dicUniqueKeyAdvantagePieceData) == 0
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_uint__object___get_Item(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                      basePiece->fields._uniqueIndex_k__BackingField,
                                      (const MethodInfo_4022318 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0 )
  {
    sub_21FFECC(this, basePiece);
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
  System_Collections_Generic_Dictionary_uint__int__c *v10; // x0
  System_Collections_Generic_Dictionary_uint__int__o *v11; // x22
  __int64 isMaster; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x5
  struct WarBoardPieceData_array *allEnemyPiece; // x25
  int max_length; // w8
  unsigned int v18; // w29
  WarBoardPieceData_o *v19; // x23
  int32_t nowSquareIndex_k__BackingField; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  int32_t v22; // w24

  if ( (byte_5935F77 & 1) == 0 )
  {
    sub_21FFC50(&AStarSearch_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_int___);
    byte_5935F77 = 1;
  }
  v10 = System_Collections_Generic_Dictionary_uint__int__TypeInfo;
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v11 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_21FFEBC(v10);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v11,
    (const MethodInfo_4017D08 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  allEnemyPiece = this->fields.allEnemyPiece;
  if ( !allEnemyPiece )
    goto LABEL_20;
  max_length = allEnemyPiece->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        sub_21FFED4(isMaster);
      v19 = allEnemyPiece->m_Items[v18];
      if ( !v19 )
        break;
      nowSquareIndex_k__BackingField = v19->fields._nowSquareIndex_k__BackingField;
      if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v13, v14);
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0,
                                                                   baseSquareIndex,
                                                                   nowSquareIndex_k__BackingField,
                                                                   0,
                                                                   0,
                                                                   v15);
      isMaster = System_Linq_Enumerable__Count_int_(
                   v21,
                   (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v11 )
        break;
      v22 = isMaster;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v11,
        v19->fields._uniqueIndex_k__BackingField,
        isMaster,
        (const MethodInfo_40186AC *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
      if ( *servantAndEnemyRange == -1 || v22 < *servantAndEnemyRange )
        *servantAndEnemyRange = v22;
      isMaster = WarBoardPieceData__get_isMaster(v19, 0);
      if ( (isMaster & 1) != 0 && (*servantAndEnemyMasterRange == -1 || v22 < *servantAndEnemyMasterRange) )
        *servantAndEnemyMasterRange = v22;
      max_length = allEnemyPiece->max_length;
      if ( (int)++v18 >= max_length )
        return v11;
    }
LABEL_20:
    sub_21FFECC(isMaster, v13);
  }
  return v11;
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
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  System_Func_int__bool__o *v13; // x20

  if ( (byte_5935F68 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_int___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__);
    sub_21FFC50(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
    byte_5935F68 = 1;
  }
  v7 = sub_21FFEBC(WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_11;
  aiRouteMasterData = this->fields.aiRouteMasterData;
  *(_DWORD *)(v7 + 16) = masterSquareIndex;
  if ( !aiRouteMasterData )
    goto LABEL_11;
  if ( aiRouteMasterData->fields.masterType != 1 )
  {
    if ( piecePlaceData )
    {
      Keys = System_Collections_Generic_Dictionary_int__uint___get_Keys(
               piecePlaceData,
               (const MethodInfo_3F72268 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
      v13 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v13,
        (Il2CppObject *)v7,
        Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
        0);
      v11 = System_Linq_Enumerable__Where_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
              (System_Func_TSource__bool__o *)v13,
              (const MethodInfo_386F9A8 *)Method_System_Linq_Enumerable_Where_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v11,
               (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_11:
    sub_21FFECC(v8, v9);
  }
  if ( !piecePlaceData )
    goto LABEL_11;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                               piecePlaceData,
                                                               (const MethodInfo_3F72268 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           v11,
           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t defenseArea; // w20
  DefenseAreaData_o *v19; // x19
  System_Collections_Generic_Dictionary_int__object__o *v20; // x20
  __int64 v21; // x2
  WarBoardAIManager_c *v22; // x0
  char v23; // w10
  bool IsDetour; // w24
  bool v25; // w8
  __int64 v26; // x1
  __int64 v27; // x2
  const MethodInfo *v28; // x5
  int32_t key; // w25
  Il2CppObject *value; // x26
  System_Int32_array *v31; // x27
  __int64 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w24
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  BalanceConfig_c *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  const MethodInfo *v42; // x5
  System_Func_int__bool__o *monitor; // x27
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Int32_array *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  BalanceConfig_c *v53; // x0
  __int64 v54; // x8
  int64_t v55; // x1
  Il2CppObject *object; // [xsp+8h] [xbp-D8h]
  bool v59; // [xsp+1Ch] [xbp-C4h]
  char v60; // [xsp+20h] [xbp-C0h]
  bool v61; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v62; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v63; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_5935F69 & 1) == 0 )
  {
    sub_21FFC50(&AStarSearch_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&DefenseAreaData_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_int___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__);
    sub_21FFC50(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
    sub_21FFC50(&WarBoardAIManager_TypeInfo);
    byte_5935F69 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  v8 = sub_21FFEBC(WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_49;
  *(_QWORD *)(v8 + 16) = piecePlaceData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)piecePlaceData, v11, v12, v13, v14, v15, v16);
  npcData = this->fields.npcData;
  if ( !npcData )
    goto LABEL_49;
  defenseArea = npcData->fields.defenseArea;
  v19 = (DefenseAreaData_o *)sub_21FFEBC(DefenseAreaData_TypeInfo);
  DefenseAreaData___ctor(v19, masterSquareIndex, defenseArea, 0);
  v20 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v20,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v10, v21);
  if ( !byte_593602D )
  {
    sub_21FFC50(&WarBoardAIManager_TypeInfo);
    byte_593602D = 1;
  }
  v22 = WarBoardAIManager_TypeInfo;
  if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v10, v21);
    v22 = WarBoardAIManager_TypeInfo;
  }
  object = (Il2CppObject *)v8;
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v22->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v62,
    dicSquareIndexEnemyPiece,
    (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v23 = 0;
  IsDetour = 1;
  v63 = v62;
  v25 = 1;
  v62.fields._dictionary = 0;
  *(_QWORD *)&v62.fields._version = &v63;
LABEL_13:
  v59 = v25;
LABEL_14:
  v60 = v23;
  v61 = IsDetour;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v63,
            (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v63.fields._current.fields.key;
    value = v63.fields._current.fields.value;
    if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v26, v27);
    v31 = AStarSearch__RouteSearch(0, masterSquareIndex, key, 0, 0, v28);
    v32 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v31,
            (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v20 )
      sub_21FFECC(v32, v33);
    v34 = v32;
    System_Collections_Generic_Dictionary_int__object___Add(
      v20,
      key,
      &v31->obj,
      (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v19 )
      sub_21FFECC(v35, v36);
    DefenseAreaData__SetComparisonMasterAndEnemyRange(v19, v34, 0);
    if ( DefenseAreaData__IsInDefenseArea(v19, key, 0) )
    {
      v39 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v37, v38);
        v39 = BalanceConfig_TypeInfo;
      }
      if ( !v39->static_fields->IsEnableOldBlockShortestRoute )
      {
        if ( !v31 )
          sub_21FFECC(v39, v37);
        if ( SLODWORD(v31->max_length) >= 2 )
          DefenseAreaData__SetComparisonAllMasterAndEnemyRange(v19, v31->m_Items[1], v34, 0);
      }
      IsDetour = 0;
      v23 = 1;
      if ( v61 )
      {
        IsDetour = WarBoardAIRoute__IsDetour(v31, allyPieces, v38);
        v25 = 0;
        v23 = 1;
        if ( v59 )
        {
          monitor = (System_Func_int__bool__o *)object[1].monitor;
          if ( !monitor )
          {
            monitor = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              monitor,
              object,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              0);
            object[1].monitor = monitor;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&object[1].monitor,
              (int32_t)monitor,
              v44,
              v45,
              v46,
              v47,
              v48,
              v49);
          }
          if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v40, v41);
          v50 = AStarSearch__RouteSearch((WarBoardPieceData_o *)value, key, masterSquareIndex, 0, monitor, v42);
          v23 = 1;
          v25 = v50 == 0;
        }
        goto LABEL_13;
      }
      goto LABEL_14;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v63,
    (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  if ( !v19 )
LABEL_49:
    sub_21FFECC(dicSquareIndexEnemyPiece, v10);
  DefenseAreaData__CreateShortestRoutes(v19, (System_Collections_Generic_Dictionary_int__int____o *)v20, 0);
  v53 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v51, v52);
    v53 = BalanceConfig_TypeInfo;
  }
  if ( !v53->static_fields->IsEnableOldBlockShortestRoute )
    DefenseAreaData__CreateAllShortestRoutes(v19, (System_Collections_Generic_Dictionary_int__int____o *)v20, 0);
  v54 = 1025;
  if ( (v60 & 1) == 0 )
    v54 = 1;
  if ( v61 )
    v54 |= 0x2000000000uLL;
  if ( v59 )
    v55 = v54 | 0x10000000000LL;
  else
    v55 = v54;
  DefenseAreaData__SetFlag(v19, v55, 0);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Func_object__bool__o *v20; // x23
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  const MethodInfo *v24; // x5
  __int64 v25; // x8
  int32_t v26; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+30h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_5935F76 & 1) == 0 )
  {
    sub_21FFC50(&AStarSearch_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_int___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__);
    sub_21FFC50(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__);
    this = (WarBoardAIRoute_o *)sub_21FFC50(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    byte_5935F76 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v8->fields.dicUniqueKeyDesignationItem) == 0
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_4022318 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int__TypeInfo),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v10,
          (const MethodInfo_3F5EAD4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (this = (WarBoardAIRoute_o *)Item[1].klass) == 0 )
  {
    sub_21FFECC(this, basePiece);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v31,
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v32 = v31;
  v31.fields._dictionary = 0;
  *(_QWORD *)&v31.fields._version = &v32;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v32,
            (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v11 = sub_21FFEBC(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0);
    if ( !v11 )
      sub_21FFECC(v12, v13);
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v11 + 16) = v32.fields._current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 24), 0, v14, v15, v16, v17, v18, v19);
    v20 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v11,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      0);
    v21 = BasicHelper__Any_object_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v20,
            (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    if ( !v21 )
    {
      v25 = *(_QWORD *)(v11 + 24);
      if ( !v25 )
        sub_21FFECC(v21, v22);
      v26 = *(_DWORD *)(v25 + 16);
      if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v22, v23);
      v27 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0,
                                                                   baseSquareIndex,
                                                                   v26,
                                                                   0,
                                                                   0,
                                                                   v24);
      v28 = System_Linq_Enumerable__Count_int_(
              v27,
              (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v10 )
        sub_21FFECC(v28, v29);
      System_Collections_Generic_Dictionary_int__int___Add(
        v10,
        *(_DWORD *)(v11 + 16),
        v28,
        (const MethodInfo_3F5F478 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v32,
    (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v10;
}


WarBoardEvalValueSquare_EvalValueSquare_o *WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_5935F6A & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
    byte_5935F6A = 1;
  }
  if ( !evalValueSquareList )
    sub_21FFECC(this, evalValueSquareList);
  return (WarBoardEvalValueSquare_EvalValueSquare_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_int__object__o *)evalValueSquareList,
                                                        index,
                                                        (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int64_t WarBoardAIRoute__GetFlagAdvantage(
        WarBoardAIRoute_o *this,
        int32_t baseClassId,
        int32_t actionClassId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  float Magnification; // s8
  __int64 v9; // x1
  __int64 v10; // x2
  float v11; // s9
  __int64 v12; // x1
  __int64 v13; // x2
  float v14; // s10
  __int64 v15; // x8
  __int64 v16; // x21
  float v17; // s0
  __int64 v18; // x8

  if ( (byte_5935F7E & 1) == 0 )
  {
    sub_21FFC50(&SvtClassAttri_TypeInfo);
    byte_5935F7E = 1;
  }
  if ( !*(&SvtClassAttri_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, *(_QWORD *)&baseClassId, *(_QWORD *)&actionClassId);
  Magnification = SvtClassAttri__getMagnification(baseClassId, actionClassId, 0);
  if ( !*(&SvtClassAttri_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v6, v7);
  v11 = SvtClassAttri__getMagnification(baseClassId, actionClassId, 0);
  if ( !*(&SvtClassAttri_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v9, v10);
  v14 = SvtClassAttri__getMagnification(actionClassId, baseClassId, 0);
  if ( !*(&SvtClassAttri_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v12, v13);
  v15 = 524289;
  if ( Magnification <= 1.0 )
    v15 = 1;
  if ( v11 < 1.0 )
    v15 |= 0x400000uLL;
  if ( v14 >= 1.0 )
    v16 = v15;
  else
    v16 = v15 | 0x100000;
  v17 = SvtClassAttri__getMagnification(actionClassId, baseClassId, 0);
  v18 = v16 | 0x800000;
  if ( v17 <= 1.0 )
    v18 = v16;
  return ((unsigned int)v18 >> 2) & ((unsigned int)v18 >> 1) & 0x240000LL | v18;
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
  System_Collections_Generic_Dictionary_int__uint__o *v20; // x28
  struct System_Int32_array *v21; // x20
  int32_t v22; // w19
  int32_t v23; // w26
  __int64 ClassId; // x1
  __int64 v25; // x2
  float Magnification; // s0
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  _BOOL4 v28; // w8
  const MethodInfo *v29; // x1
  __int64 v30; // x2
  uint32_t v31; // w24
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  WarBoardAIRoute_o *v34; // x24
  int32_t *m_Items; // [xsp+8h] [xbp-78h]
  int32_t defense; // [xsp+18h] [xbp-68h]
  uint32_t value; // [xsp+1Ch] [xbp-64h] BYREF

  v10 = this;
  if ( (byte_5935F7A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&SvtClassAttri_TypeInfo);
    this = (WarBoardAIRoute_o *)sub_21FFC50(&WarBoardAIManager_TypeInfo);
    byte_5935F7A = 1;
  }
  value = 0;
  if ( !baseSquare )
    goto LABEL_52;
  linkedSquares = baseSquare->fields.linkedSquares;
  if ( !linkedSquares )
    goto LABEL_52;
  max_length = linkedSquares->max_length;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    v14 = 1;
    m_Items = linkedSquares->m_Items;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
        sub_21FFED4(this);
      v15 = m_Items[v13];
      this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_44763860((WarBoardData_o *)this, v15, v16);
      if ( !this )
        goto LABEL_28;
      v18 = (WarBoardPieceData_o *)this;
      if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, baseSquare, v17);
      this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v18, v17);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !basePiece )
          break;
        if ( WarBoardPieceData__get_isServant(basePiece, 0)
          || (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v18, 0), ((unsigned __int8)this & 1) != 0) )
        {
          v19 = v14 | 0x10;
          if ( WarBoardPieceData__get_isServant(v18, 0) && (v14 & 0x1000000) == 0 )
          {
            this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
            if ( !this )
              break;
            v20 = piecePlaceData;
            v21 = linkedSquares;
            v22 = masterSquareIndex;
            this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0, 0);
            if ( !v18->fields._battleServant_k__BackingField )
              break;
            v23 = (int)this;
            ClassId = (unsigned int)BattleServantData__getClassId(v18->fields._battleServant_k__BackingField, 0, 0);
            if ( !*(&SvtClassAttri_TypeInfo->_2.cctor_finished + 1) )
            {
              defense = ClassId;
              j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, ClassId, v25);
              LODWORD(ClassId) = defense;
            }
            Magnification = SvtClassAttri__getMagnification(v23, ClassId, 0);
            masterSquareIndex = v22;
            linkedSquares = v21;
            piecePlaceData = v20;
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
LABEL_28:
        if ( !basePiece )
          break;
      }
      aiRouteMasterData = v10->fields.aiRouteMasterData;
      if ( !aiRouteMasterData )
        break;
      v28 = aiRouteMasterData->fields.masterType == 2
         && aiRouteMasterData->fields.masterPieceIndex == basePiece->fields._index_k__BackingField;
      if ( v15 != masterSquareIndex )
        v28 = 1;
      if ( !v28 )
        v14 |= 0x400000000uLL;
      if ( !piecePlaceData )
        break;
      this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_int__uint___TryGetValue(
                                    piecePlaceData,
                                    v15,
                                    &value,
                                    (const MethodInfo_3F73F28 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v31 = value;
        if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v29, v30);
        this = (WarBoardAIRoute_o *)WarBoardAIManager__GetPieceUnique(v31, v29);
        if ( basePiece->fields._uniqueIndex_k__BackingField != value )
        {
          v34 = this;
          if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v32, v33);
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsAllyPiece(basePiece, (WarBoardPieceData_o *)v34, v33);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v34 )
              break;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v34, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
              v14 |= 0x800000000uLL;
          }
        }
      }
      LODWORD(max_length) = linkedSquares->max_length;
      if ( (__int64)++v13 >= (int)max_length )
        return v14;
    }
LABEL_52:
    sub_21FFECC(this, baseSquare);
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

  if ( (byte_5935F79 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_5935F79 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_3F5F664 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          actionSquareIndex,
          (const MethodInfo_3F5F664 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                    dicOutOfWarningAreaRange,
                                                                                    baseSquareIndex,
                                                                                    (const MethodInfo_3F5F3DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( (int)dicOutOfWarningAreaRange > System_Collections_Generic_Dictionary_int__int___get_Item(
                                         this->fields.dicOutOfWarningAreaRange,
                                         actionSquareIndex,
                                         (const MethodInfo_3F5F3DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange
    || (dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                          dicOutOfWarningAreaRange,
                                                                                          baseSquareIndex,
                                                                                          (const MethodInfo_3F5F3DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v10 = this->fields.dicOutOfWarningAreaRange) == 0) )
  {
LABEL_18:
    sub_21FFECC(dicOutOfWarningAreaRange, v7);
  }
  if ( (_DWORD)dicOutOfWarningAreaRange == System_Collections_Generic_Dictionary_int__int___get_Item(
                                             v10,
                                             actionSquareIndex,
                                             (const MethodInfo_3F5F3DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
  __int64 v12; // [xsp+0h] [xbp-50h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o *v13; // [xsp+8h] [xbp-48h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v14; // [xsp+10h] [xbp-40h] BYREF

  v4 = this;
  if ( (byte_5935F67 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    this = (WarBoardAIRoute_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    byte_5935F67 = 1;
  }
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  memset(&v14, 0, 32);
  if ( !aiRouteMasterData )
    goto LABEL_17;
  masterType = aiRouteMasterData->fields.masterType;
  if ( masterType && masterType != 2 )
  {
    if ( masterType == 1 )
      return aiRouteMasterData->fields.masterSquareIndex;
    else
      return 0;
  }
  if ( !piecePlaceData )
LABEL_17:
    sub_21FFECC(this, piecePlaceData);
  System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v14,
    piecePlaceData,
    (const MethodInfo_3F72994 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
  v12 = 0;
  v13 = &v14;
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
           &v14,
           (const MethodInfo_41269B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    if ( !v8 )
      break;
    v10 = v4->fields.aiRouteMasterData;
    if ( !v10 )
      sub_21FFECC(v8, v9);
    key = (int32_t)v14.fields._current.fields.key;
    if ( v10->fields.masterUniqueIndex == HIDWORD(v14.fields._current.fields.key) )
      goto LABEL_15;
  }
  key = 0;
LABEL_15:
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &v14,
    (const MethodInfo_4126AB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
  return key;
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
  if ( (byte_5935F82 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____);
    sub_21FFC50(&System_Func_KeyValuePair_int__uint___bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    this = (WarBoardAIRoute_o *)sub_21FFC50(&Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__);
    byte_5935F82 = 1;
  }
  klass = v4[13].klass;
  if ( !klass )
    sub_21FFECC(this, piecePlaceData);
  if ( LODWORD(klass->_1.name) == 1 )
    return HIDWORD(klass->_1.name);
  v7 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_21FFEBC(System_Func_KeyValuePair_int__uint___bool__TypeInfo);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v7,
    v4,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v7,
           (const MethodInfo_384EA10 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
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

  if ( (byte_5935F84 & 1) == 0 )
  {
    sub_21FFC50(&AStarSearch_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_int___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    this = (WarBoardAIRoute_o *)sub_21FFC50(&WarBoardAIManager_TypeInfo);
    byte_5935F84 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !dicKeyPutIndexValueTargetData
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_long__object___get_Values(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicKeyPutIndexValueTargetData,
                                      (const MethodInfo_3F9C118 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0 )
  {
    sub_21FFECC(this, dicKeyPutIndexValueTargetData);
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__object___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3C962A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v28 = v27;
  v27.fields._dictionary = 0;
  *(_QWORD *)&v27.fields._index = &v28;
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___MoveNext(
           &v28,
           (const MethodInfo_412E358 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v8 )
      break;
    currentValue = v28.fields._currentValue;
    if ( !v28.fields._currentValue )
      sub_21FFECC(v8, v9);
    monitor = (WarBoardPieceData_o *)v28.fields._currentValue[1].monitor;
    if ( !monitor || LODWORD(v28.fields._currentValue[4].monitor) != actionSquareIndex )
      goto LABEL_14;
    if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v9, v10);
    if ( WarBoardAIManager__IsAllyPiece(basePiece, monitor, v10) )
    {
      LODWORD(currentValue[4].klass) = 2;
    }
    else
    {
LABEL_14:
      v14 = (int32_t)currentValue[4].monitor;
      if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v9, v10);
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0,
                                                                   actionSquareIndex,
                                                                   v14,
                                                                   0,
                                                                   0,
                                                                   v11);
      v16 = System_Linq_Enumerable__Count_int_(
              v15,
              (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
      v17 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
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
                (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
        v24 = System_Linq_Enumerable__Count_int_(
                v21,
                (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
        if ( v24 == v23 )
          v25 = 2;
        else
          v25 = 3;
        if ( v24 < v23 )
          v25 = 1;
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
    (const MethodInfo_412E354 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
  return dicKeyPutIndexValueTargetData;
}


int32_t WarBoardAIRoute__GetRangeShortMost(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *dicPieceList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  int32_t v6; // w19
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x5
  int32_t key; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  int32_t v12; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+10h] [xbp-80h] BYREF

  if ( (byte_5935F6B & 1) == 0 )
  {
    sub_21FFC50(&AStarSearch_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_int___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    this = (WarBoardAIRoute_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    byte_5935F6B = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !dicPieceList )
    sub_21FFECC(this, dicPieceList);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_int__object__o *)dicPieceList,
    (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v6 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v15,
            (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v15.fields._current.fields.key;
    if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v7, v8);
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                 0,
                                                                 baseSquareIndex,
                                                                 key,
                                                                 0,
                                                                 0,
                                                                 v9);
    v12 = System_Linq_Enumerable__Count_int_(
            v11,
            (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
    if ( v6 > v12 || v6 == -1 )
      v6 = v12;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v15,
    (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
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
  char v17; // w10
  _DWORD *klass; // x8
  int32_t *v19; // x9
  int v20; // w10
  uint32_t v21; // w24
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-80h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_5935F66 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    byte_5935F66 = 1;
  }
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  memset(&v24, 0, sizeof(v24));
  value = 0;
  v12 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v12,
    (const MethodInfo_4017D08 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_21FFECC(v13, v14);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)routeDataList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v24 = v23;
  v23.fields._list = 0;
  *(_QWORD *)&v23.fields._index = &v24;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v15 )
      break;
    if ( !v24.fields._current )
      sub_21FFECC(v15, v16);
    if ( LODWORD(v24.fields._current[1].monitor) != HIDWORD(v24.fields._current[1].monitor) )
    {
      v17 = BYTE3(v24.fields._current[1].klass);
      klass = v24.fields._current[3].klass;
      value = 0;
      if ( (v17 & 4) == 0 )
      {
        if ( !klass )
          sub_21FFECC(v15, v16);
        if ( klass[4] == 1 )
          v19 = masterActionCount;
        else
          v19 = actionCount;
LABEL_21:
        ++*v19;
        goto LABEL_22;
      }
      if ( !klass )
        sub_21FFECC(v15, v16);
      v20 = klass[4];
      klass = v24.fields._current[3].monitor;
      if ( v20 != 1 )
      {
        if ( !klass )
          sub_21FFECC(v15, v16);
        if ( klass[4] == 1 )
          v19 = masterReplaceCount;
        else
          v19 = replaceCount;
        goto LABEL_21;
      }
      ++*masterReplaceCount;
      if ( !klass )
        sub_21FFECC(v15, v16);
LABEL_22:
      if ( !v12 )
        sub_21FFECC(v15, v16);
      v21 = klass[11];
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v12,
        v21,
        &value,
        (const MethodInfo_401A018 *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v12,
        v21,
        value + 1,
        (const MethodInfo_4018698 *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Func_object__int__o *v15; // x20

  if ( (byte_5935F85 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____91531992);
    sub_21FFC50(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__);
    sub_21FFC50(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
    byte_5935F85 = 1;
  }
  v6 = sub_21FFEBC(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_21FFECC(v7, v8);
  *(_QWORD *)(v6 + 16) = targetPiece;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)targetPiece, v9, v10, v11, v12, v13, v14);
  v15 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
  System_Func_object__int____ctor(
    v15,
    (Il2CppObject *)v6,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    0);
  return System_Linq_Enumerable__Sum_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v15,
           (const MethodInfo_3866AE0 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____91531992);
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
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  WarBoardPieceData_array *allEnemyPiece; // x27
  WarBoardAIRoute_TargetData_o *v17; // x26
  const MethodInfo *v18; // x5
  __int64 v19; // x1
  __int64 v20; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *v21; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+10h] [xbp-90h] BYREF

  v12 = this;
  if ( (byte_5935F73 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    this = (WarBoardAIRoute_o *)sub_21FFC50(&WarBoardAIRoute_TargetData_TypeInfo);
    byte_5935F73 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !dicPutSquareIndex )
    sub_21FFECC(this, dicPutSquareIndex);
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v22,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicPutSquareIndex,
    (const MethodInfo_3F9C74C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v20 = 0;
  v21 = &v22;
  while ( 1 )
  {
    v13 = System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v22,
            (const MethodInfo_412DCD8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v13 )
      break;
    current = v22.fields._current;
    if ( excludeCond )
    {
      if ( !v22.fields._current.fields.value )
        sub_21FFECC(v13, v14);
      if ( (((__int64 (__fastcall *)(intptr_t, void *, intptr_t))excludeCond->fields.invoke_impl)(
              excludeCond->fields.method_code,
              v22.fields._current.fields.value[3].monitor,
              excludeCond->fields.method)
          & 1) != 0 )
        continue;
    }
    allEnemyPiece = v12->fields.allEnemyPiece;
    v17 = (WarBoardAIRoute_TargetData_o *)sub_21FFEBC(WarBoardAIRoute_TargetData_TypeInfo);
    WarBoardAIRoute_TargetData___ctor_44758868(
      v17,
      (WarBoardAIRoute_TargetData_o *)current.fields.value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      v18);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_21FFECC(0, v19);
    System_Collections_Generic_Dictionary_long__object___Add(
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
      (int64_t)current.fields.key,
      (Il2CppObject *)v17,
      (const MethodInfo_3F9C314 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v22,
    (const MethodInfo_412DDF8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_Dictionary_int__IWarBoardObjectData__c *v28; // x0
  System_Collections_Generic_Dictionary_int__object__o *v29; // x22
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  WarBoardAiTargetCacher_o *aiTargetCacher; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  TargetDetector_o *DetectorByTrendKey; // x0
  __int64 v35; // x1
  int32_t Id_k__BackingField; // w25
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  Il2CppObject *Item; // x0
  WarBoardAiTargetCacher_o *v40; // x0
  System_Collections_Generic_IEnumerable_TSource__o *TargetObjectsByTrendId; // x26
  System_Func_object__bool__o *v42; // x27
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Func_object__int__o *v50; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x26
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  __int64 v58; // x1
  __int64 v59; // x2
  System_Linq_IOrderedEnumerable_TSource__o *v60; // x26
  WarBoardAIRoute___c_c *v61; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__64_2; // x27
  Il2CppObject *v64; // x28
  struct WarBoardAIRoute___c_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  __int64 v72; // x1
  __int64 v73; // x2
  System_Linq_IOrderedEnumerable_TSource__o *v74; // x26
  WarBoardAIRoute___c_c *v75; // x0
  struct WarBoardAIRoute___c_StaticFields *v76; // x8
  System_Func_object__int__o *_9__64_3; // x27
  Il2CppObject *v78; // x28
  struct WarBoardAIRoute___c_StaticFields *v79; // x0
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  __int64 v87; // x1
  WarBoardPieceData_o *v88; // x27
  int32_t v89; // w28
  WarBoardPieceData_array *allEnemyPiece; // x29
  WarBoardAIRoute_TargetData_o *v91; // x25
  const MethodInfo *v92; // x6
  __int64 v93; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v94; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v95; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_5935F74 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_21FFC50(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_21FFC50(&System_Func_IWarBoardObjectData__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    sub_21FFC50(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_21FFC50(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__);
    sub_21FFC50(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__);
    sub_21FFC50(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
    sub_21FFC50(&WarBoardAIRoute___c_TypeInfo);
    byte_5935F74 = 1;
  }
  memset(&v95, 0, sizeof(v95));
  v13 = sub_21FFEBC(WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_45;
  *(_QWORD *)(v13 + 16) = excludeCond;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)excludeCond, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = basePiece;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)basePiece, v22, v23, v24, v25, v26, v27);
  v28 = System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo;
  *(_DWORD *)(v13 + 32) = baseSquareIndex;
  v29 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(v28);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v29,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__);
  if ( !dicIndividualityPutSqareIndex )
LABEL_45:
    sub_21FFECC(v14, v15);
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v94,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicIndividualityPutSqareIndex,
    (const MethodInfo_3F9C74C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v95 = v94;
  v94.fields._dictionary = 0;
  *(_QWORD *)&v94.fields._version = &v95;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v95,
            (const MethodInfo_412DCD8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_21FFECC(0, v30);
    current = v95.fields._current;
    DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(
                           aiTargetCacher,
                           (int64_t)v95.fields._current.fields.key,
                           v31);
    if ( DetectorByTrendKey )
    {
      Id_k__BackingField = DetectorByTrendKey->fields._Id_k__BackingField;
      if ( !v29 )
        goto LABEL_41;
    }
    else
    {
      Id_k__BackingField = 0;
      if ( !v29 )
LABEL_41:
        sub_21FFECC(DetectorByTrendKey, v35);
    }
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           v29,
           Id_k__BackingField,
           (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               v29,
               Id_k__BackingField,
               (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
LABEL_33:
      TargetObjectsByTrendId = (System_Collections_Generic_IEnumerable_TSource__o *)Item;
      goto LABEL_34;
    }
    v40 = this->fields.aiTargetCacher;
    if ( !v40 )
      sub_21FFECC(0, v37);
    TargetObjectsByTrendId = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardAiTargetCacher__GetTargetObjectsByTrendId(
                                                                                    v40,
                                                                                    (int64_t)current.fields.key,
                                                                                    v38);
    if ( TargetObjectsByTrendId )
    {
      v42 = *(System_Func_object__bool__o **)(v13 + 40);
      if ( !v42 )
      {
        v42 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_IWarBoardObjectData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v42,
          (Il2CppObject *)v13,
          Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
          0);
        *(_QWORD *)(v13 + 40) = v42;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 40), (int32_t)v42, v43, v44, v45, v46, v47, v48);
      }
      v49 = System_Linq_Enumerable__Where_object_(
              TargetObjectsByTrendId,
              (System_Func_TSource__bool__o *)v42,
              (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
      v50 = *(System_Func_object__int__o **)(v13 + 48);
      v51 = v49;
      if ( !v50 )
      {
        v50 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_IWarBoardObjectData__int__TypeInfo);
        System_Func_object__int____ctor(
          v50,
          (Il2CppObject *)v13,
          Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
          0);
        *(_QWORD *)(v13 + 48) = v50;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 48), (int32_t)v50, v52, v53, v54, v55, v56, v57);
      }
      v60 = System_Linq_Enumerable__OrderBy_object__int_(
              v51,
              (System_Func_TSource__TKey__o *)v50,
              (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
      v61 = WarBoardAIRoute___c_TypeInfo;
      if ( !*(&WarBoardAIRoute___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo, v58, v59);
        v61 = WarBoardAIRoute___c_TypeInfo;
      }
      static_fields = v61->static_fields;
      _9__64_2 = (System_Func_object__int__o *)static_fields->__9__64_2;
      if ( !_9__64_2 )
      {
        if ( !*(&v61->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v61, v58, v59);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
        }
        v64 = (Il2CppObject *)static_fields->__9;
        _9__64_2 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_IWarBoardObjectData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__64_2,
          v64,
          Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
          0);
        v65 = WarBoardAIRoute___c_TypeInfo->static_fields;
        v65->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v65->__9__64_2,
          (int32_t)_9__64_2,
          v66,
          v67,
          v68,
          v69,
          v70,
          v71);
      }
      v74 = System_Linq_Enumerable__ThenBy_object__int_(
              v60,
              (System_Func_TSource__TKey__o *)_9__64_2,
              (const MethodInfo_3867630 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
      v75 = WarBoardAIRoute___c_TypeInfo;
      if ( !*(&WarBoardAIRoute___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo, v72, v73);
        v75 = WarBoardAIRoute___c_TypeInfo;
      }
      v76 = v75->static_fields;
      _9__64_3 = (System_Func_object__int__o *)v76->__9__64_3;
      if ( !_9__64_3 )
      {
        if ( !*(&v75->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v75, v72, v73);
          v76 = WarBoardAIRoute___c_TypeInfo->static_fields;
        }
        v78 = (Il2CppObject *)v76->__9;
        _9__64_3 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_IWarBoardObjectData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__64_3,
          v78,
          Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
          0);
        v79 = WarBoardAIRoute___c_TypeInfo->static_fields;
        v79->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v79->__9__64_3,
          (int32_t)_9__64_3,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85);
      }
      v86 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                   v74,
                                                                   (System_Func_TSource__TKey__o *)_9__64_3,
                                                                   (const MethodInfo_3867630 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
      Item = System_Linq_Enumerable__FirstOrDefault_object_(
               v86,
               (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
      goto LABEL_33;
    }
LABEL_34:
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v29,
      Id_k__BackingField,
      (Il2CppObject *)TargetObjectsByTrendId,
      (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( TargetObjectsByTrendId )
    {
      v88 = *(WarBoardPieceData_o **)(v13 + 24);
      v89 = *(_DWORD *)(v13 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v91 = (WarBoardAIRoute_TargetData_o *)sub_21FFEBC(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_44760840(
        v91,
        (WarBoardAIRoute_TargetData_o *)current.fields.value,
        (IWarBoardObjectData_o *)TargetObjectsByTrendId,
        v88,
        v89,
        allEnemyPiece,
        v92);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_21FFECC(0, v93);
      System_Collections_Generic_Dictionary_long__object___Add(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        (Il2CppObject *)v91,
        (const MethodInfo_3F9C314 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_21FFECC(0, v87);
      System_Collections_Generic_Dictionary_long__object___Remove(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        (const MethodInfo_3F9D7A4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v95,
    (const MethodInfo_412DDF8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *WarBoardAIRoute__GetTargetToDistance_44760952(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  __int64 v9; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicUniqueKeyTarget; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
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

  if ( (byte_5935F75 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
    sub_21FFC50(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__);
    sub_21FFC50(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
    byte_5935F75 = 1;
  }
  dicKeyPutIndexValueTargetData = 0;
  v9 = sub_21FFEBC(WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = routeDataList,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)routeDataList, v12, v13, v14, v15, v16, v17),
        !basePiece)
    || (dicUniqueKeyTarget = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget) == 0
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 dicUniqueKeyTarget,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_4022318 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo),
        System_Collections_Generic_Dictionary_long__object____ctor(
          v19,
          (const MethodInfo_3F9B964 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v19,
        !Item) )
  {
    sub_21FFECC(dicUniqueKeyTarget, v11);
  }
  monitor = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].monitor;
  v21 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_IWarBoardObjectData__bool__TypeInfo);
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
  v24 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_IWarBoardObjectData__bool__TypeInfo);
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
    sub_21FFECC(this, method);
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
  if ( (byte_5935F7C & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935F7C = 1;
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
    this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
      return SHIDWORD(this[3].fields.allSquare) >= v13 + requiredCost;
LABEL_13:
    sub_21FFECC(this, basePiece);
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  WarBoardPieceData_o **v22; // x25
  bool v23; // w8
  const MethodInfo *v24; // x3
  int32_t RouteSumPieceActionCost; // w23
  System_Func_object__bool__o *v26; // x21
  __int64 v27; // x8

  if ( (byte_5935F80 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    sub_21FFC50(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__);
    sub_21FFC50(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
    byte_5935F80 = 1;
  }
  v13 = sub_21FFEBC(WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_25;
  *(_QWORD *)(v13 + 16) = actionPiece;
  v22 = (WarBoardPieceData_o **)(v13 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)actionPiece, v16, v17, v18, v19, v20, v21);
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
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < this->fields.moveCost
                                                               + requiredCost
                                                               + this->fields.masterMoveCost )
      goto LABEL_23;
  }
  else
  {
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_21FFECC(Instance, v15);
  if ( !WarBoardPieceData__get_isInfinitelyActable(Instance, 0) )
  {
    v26 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v26,
      (Il2CppObject *)v13,
      Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
      0);
    Instance = (WarBoardPieceData_o *)System_Linq_Enumerable__Count_object__59013780(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
                                        (System_Func_TSource__bool__o *)v26,
                                        (const MethodInfo_3847A94 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
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
  _BOOL8 v7; // x25
  char v8; // w20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x20
  __int64 v12; // x21
  unsigned __int64 v13; // x27
  __int64 v15; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v16; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+18h] [xbp-68h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_5935F72 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_21FFC50(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_5935F72 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !v6 )
    sub_21FFECC(shortestEnemyRoute, piecePlaceData);
  v7 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v8 = 0;
  v15 = 0;
  v16 = &v17;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v9 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_21FFECC(v9, v10);
    v12 = (unsigned int)(*(_DWORD *)((char *)&v17.fields._current->klass + (unsigned __int64)off_18) - 1);
    if ( (int)v12 <= v7 )
    {
LABEL_15:
      v8 = 0;
      break;
    }
    v13 = v7;
    while ( 1 )
    {
      if ( v13 >= *(unsigned int *)((char *)off_18 + (_QWORD)current) )
        sub_21FFED4(v9);
      if ( !piecePlaceData )
        sub_21FFECC(v9, v10);
      v9 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
             piecePlaceData,
             *((_DWORD *)&current[2].klass + v13),
             (const MethodInfo_3F727A8 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( v9 )
        break;
      if ( v12 == ++v13 )
        goto LABEL_15;
    }
    v8 = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_5935F6F & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5935F6F = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&index, isDefenseSquare);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( v7->static_fields->IsEnableOldBlockShortestRoute )
  {
    if ( defenseArea )
      return WarBoardAIRoute__IsBlockShortestRouteEnemyAndMasterOld(
               defenseArea->fields._ShortestRoutes_k__BackingField,
               index,
               isDefenseSquare,
               method);
LABEL_10:
    sub_21FFECC(v7, *(_QWORD *)&index);
  }
  if ( !defenseArea )
    goto LABEL_10;
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
  _BOOL8 v7; // x27
  char v8; // w21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppClass *klass; // x0
  __int128 v12; // q0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  unsigned int monitor; // w10
  _DWORD *v16; // x8
  unsigned int v17; // w9
  int v18; // w10
  int v19; // w9
  int v20; // w26
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+60h] [xbp-90h] BYREF

  v6 = allShortestRoute;
  if ( (byte_5935F71 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__);
    allShortestRoute = (System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *)sub_21FFC50(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_5935F71 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  memset(&v24, 0, sizeof(v24));
  if ( !v6 )
    sub_21FFECC(allShortestRoute, *(_QWORD *)&index);
  v7 = !isDefenseSquare;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v22,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v8 = 0;
  v24 = v22;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v24,
           (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v24.fields._current.fields.value )
      sub_21FFECC(v9, v10);
    klass = v24.fields._current.fields.value[1].klass;
    if ( !klass )
      sub_21FFECC(0, v10);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)klass,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v12 = *(_OWORD *)&v22.fields._dictionary;
    v22.fields._dictionary = 0;
    *(_QWORD *)&v22.fields._version = &v23;
    *(_OWORD *)&v23.fields._list = v12;
    v23.fields._current = v22.fields._current.fields.key;
    do
    {
LABEL_9:
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v13 )
      {
        v20 = 4;
        goto LABEL_21;
      }
      if ( !v23.fields._current )
        sub_21FFECC(v13, v14);
      monitor = (unsigned int)v23.fields._current[1].monitor;
    }
    while ( (int)(monitor - 1) <= v7 );
    v16 = (_DWORD *)((char *)v23.fields._current + ((4 * v7) | 0x20));
    if ( (unsigned int)v7 <= monitor )
      v17 = (unsigned int)v23.fields._current[1].monitor;
    else
      v17 = !isDefenseSquare;
    v18 = ~v7 + monitor;
    v19 = (__PAIR64__(v17, isDefenseSquare) - 1) >> 32;
    while ( 1 )
    {
      if ( !v19 )
        sub_21FFED4(v13);
      if ( *v16 == index )
        break;
      --v18;
      ++v16;
      --v19;
      if ( !v18 )
        goto LABEL_9;
    }
    v8 = 1;
    v20 = 11;
LABEL_21:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( (v20 | 4) != 4 )
      goto LABEL_27;
  }
  v20 = 12;
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v24,
    (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
  return (v20 == 11) & v8;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardAIRoute__IsBlockShortestRouteEnemyAndMasterOld(
        System_Collections_Generic_List_int____o *shortestEnemyRoute,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int____o *v6; // x21
  _BOOL8 v7; // x24
  _BOOL8 v8; // x0
  __int64 v9; // x1
  bool v10; // w20
  unsigned int v11; // w10
  _DWORD *v12; // x8
  int v13; // w9
  int v14; // w10
  int v15; // w9
  __int64 v17; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v18; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+18h] [xbp-68h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_5935F70 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_21FFC50(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_5935F70 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !v6 )
    sub_21FFECC(shortestEnemyRoute, *(_QWORD *)&index);
  v7 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v17 = 0;
  v18 = &v19;
LABEL_5:
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    v10 = v8;
    if ( !v8 )
      break;
    if ( !v19.fields._current )
      sub_21FFECC(v8, v9);
    v11 = *(_DWORD *)((char *)&v19.fields._current->klass + (unsigned __int64)off_18);
    if ( (int)(v11 - 1) > v7 )
    {
      v12 = (_DWORD *)((char *)v19.fields._current + ((4 * v7) | 0x20));
      if ( (unsigned int)v7 <= v11 )
        v13 = *(_DWORD *)((char *)&v19.fields._current->klass + (unsigned __int64)off_18);
      else
        v13 = v7;
      v14 = ~v7 + v11;
      v15 = v13 - v7;
      while ( 1 )
      {
        if ( !v15 )
          sub_21FFED4(v8);
        if ( *v12 == index )
          goto LABEL_16;
        --v14;
        ++v12;
        --v15;
        if ( !v14 )
          goto LABEL_5;
      }
    }
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v10;
}


bool WarBoardAIRoute__IsDetour(System_Int32_array *route, System_Int32_array *blockPieces, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w0
  bool v15; // w0
  int v17; // w25
  System_Func_int__bool__o *v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int v25; // w8

  if ( (byte_5935F6E & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_int___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__);
    sub_21FFC50(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
    byte_5935F6E = 1;
  }
  v5 = sub_21FFEBC(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = route;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)route, v8, v9, v10, v11, v12, v13);
  v14 = System_Linq_Enumerable__Count_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 16),
          (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
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
    do
    {
      v18 = *(System_Func_int__bool__o **)(v5 + 32);
      if ( !v18 )
      {
        v18 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v18,
          (Il2CppObject *)v5,
          Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
          0);
        *(_QWORD *)(v5 + 32) = v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v18, v19, v20, v21, v22, v23, v24);
      }
      v15 = BasicHelper__Any_int__58574768(
              blockPieces,
              (System_Func_T__bool__o *)v18,
              (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
      if ( v15 )
        break;
      v25 = *(_DWORD *)(v5 + 24) + 1;
      *(_DWORD *)(v5 + 24) = v25;
    }
    while ( v25 < v17 );
  }
  return v15;
}


bool WarBoardAIRoute__IsThinkingThreshold(WarBoardAIRoute_o *this, float v, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_21FFECC(this, method);
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
  int32_t v10; // w8
  WarBoardAIManager_c *v11; // x0
  WarBoardData_o *Square; // x0
  const MethodInfo *v13; // x1
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  unsigned __int64 v16; // x25
  int32_t v17; // w22
  const MethodInfo *v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  __int64 v21; // x2
  uint32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5935F7F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardAIManager_TypeInfo);
    byte_5935F7F = 1;
  }
  v10 = *attackByLinkEnemy;
  v11 = WarBoardAIManager_TypeInfo;
  value = 0;
  *attackByLinkEnemy = v10 + 1;
  if ( !*(&v11->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&actionSquareIndex, piecePlaceData);
  Square = (WarBoardData_o *)WarBoardAIManager__GetSquare(actionSquareIndex, *(const MethodInfo **)&actionSquareIndex);
  if ( !Square )
    goto LABEL_27;
  npcEntityDict = Square->fields.npcEntityDict;
  if ( !npcEntityDict )
    goto LABEL_27;
  entries = npcEntityDict->fields._entries;
  if ( (int)entries >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)entries )
        sub_21FFED4(Square);
      if ( !piecePlaceData )
        break;
      v17 = *(&npcEntityDict->fields._count + v16);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v17,
             &value,
             (const MethodInfo_3F73F28 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Square = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)Square[1].fields.playedStageReinforcementsList;
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardData__GetPiece_44765572(Square, value, 1, v20);
        if ( !Square )
          break;
        if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0) )
          ++*attackByLinkAlly;
      }
      if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v18, v19);
      Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v17, v18);
      if ( Square )
      {
        if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v13, v21);
        Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v17, v13);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0);
        if ( ((unsigned __int8)Square & 1) != 0 )
          ++*attackByLinkEnemy;
      }
      LODWORD(entries) = npcEntityDict->fields._entries;
      if ( (__int64)++v16 >= (int)entries )
        return;
    }
LABEL_27:
    sub_21FFECC(Square, v13);
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
  unsigned __int64 v11; // x27
  struct WarBoardPieceData_o *basePiece; // x22
  unsigned int max_length; // w8
  int32_t v14; // w25
  const MethodInfo *v15; // x4
  System_Collections_Generic_List_object__o *moveByLinkedPiece; // x24
  WarBoardPieceData_o *v17; // x23
  const MethodInfo *v18; // x2
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  WarBoardAIRoute_o *v28; // x1
  Il2CppClass **v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  WarBoardAIRoute_RouteData_o *v33; // x8
  int32_t v34; // w24
  __int64 v35; // x1
  __int64 v36; // x2
  int32_t ClassId; // w25

  if ( (byte_5935F83 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&SvtClassAttri_TypeInfo);
    this = (WarBoardAIRoute_o *)sub_21FFC50(&WarBoardAIManager_TypeInfo);
    byte_5935F83 = 1;
  }
  v8 = *routeData;
  if ( !*routeData
    || (actionSquare = v8->fields.actionSquare) == 0
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0 )
  {
LABEL_51:
    sub_21FFECC(this, routeData);
  }
  if ( (int)linkedSquares->max_length >= 1 )
  {
    v11 = 0;
    basePiece = v8->fields.basePiece;
    max_length = linkedSquares->max_length;
    do
    {
      if ( v11 >= max_length )
        sub_21FFED4(this);
      v14 = linkedSquares->m_Items[v11];
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
        this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_44763860((WarBoardData_o *)this, v14, v18);
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
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          moveByLinkedPiece->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v28;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v28, v19, v20, v21, v22, v23, v24);
        }
        if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v30, v31);
        if ( WarBoardAIManager__IsAllyPiece(basePiece, v17, v31)
          && (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v17, 0), ((unsigned __int8)this & 1) != 0) )
        {
          if ( !*routeData )
            goto LABEL_51;
          ++(*routeData)->fields.moveByLinkedAlly;
        }
        else
        {
          if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, routeData, v32);
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v17, v32);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*routeData )
              goto LABEL_51;
            (*routeData)->fields.flagNow |= 0x40uLL;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v17, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v33 = *routeData;
              if ( !*routeData )
                goto LABEL_51;
              if ( (v33->fields.flagNow & 0x2000000) != 0 )
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
                  v34 = (int)this;
                  ClassId = BattleServantData__getClassId(v17->fields._battleServant_k__BackingField, 0, 0);
                  if ( !*(&SvtClassAttri_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v35, v36);
                  if ( SvtClassAttri__getMagnification(v34, ClassId, 0) > 1.0 )
                  {
                    v33 = *routeData;
                    if ( !*routeData )
                      goto LABEL_51;
LABEL_43:
                    v33->fields.flagNow |= 0x2000000uLL;
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
      ++v11;
    }
    while ( (__int64)v11 < (int)max_length );
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
  IWarBoardObjectData_o *v19; // x23
  Il2CppClass *klass; // x8
  __int64 v21; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 v23; // x0
  WarBoardAIRoute_TargetData_o *v24; // x22
  const MethodInfo *v25; // x4

  if ( (byte_5935F64 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    sub_21FFC50(&IWarBoardObjectData_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
    sub_21FFC50(&System_Predicate_IWarBoardObjectData__TypeInfo);
    sub_21FFC50(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__);
    sub_21FFC50(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
    byte_5935F64 = 1;
  }
  v14 = sub_21FFEBC(WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
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
         (const MethodInfo_3F9C508 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v17 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_IWarBoardObjectData__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v14,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    0);
  if ( !objectList )
LABEL_17:
    sub_21FFECC(v15, v16);
  v18 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
  if ( v18 )
  {
    v19 = (IWarBoardObjectData_o *)v18;
    *notSquareTarget = 1;
    klass = v18->klass;
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
      v23 = sub_2237E2C(v18, IWarBoardObjectData_TypeInfo, 2);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) != 0 )
    {
      v24 = (WarBoardAIRoute_TargetData_o *)sub_21FFEBC(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_44748560(v24, v19, trendKey, conditionId, v25);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
        trendKey,
        (Il2CppObject *)v24,
        (const MethodInfo_3F9C300 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
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

  if ( (byte_5935F62 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
    byte_5935F62 = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_21FFECC(0, *(_QWORD *)&aiId);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_3F6A1B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
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

  if ( (byte_5935F81 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___91374008);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__uint__TypeInfo);
    byte_5935F81 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor_66526452(
    v10,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_3F71CF4 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___91374008);
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
        (const MethodInfo_3F725A8 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_21FFECC(v11, v12);
  }
  if ( !v10 )
    goto LABEL_12;
  v11 = System_Collections_Generic_Dictionary_int__uint___Remove(
          v10,
          baseSquareIndex,
          (const MethodInfo_3F73990 *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v10,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_3F725A8 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v10;
}


bool WarBoardAIRoute____ctor_b__42_0(WarBoardAIRoute_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
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
  if ( (byte_5935F86 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    byte_5935F86 = 1;
  }
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    sub_21FFECC(this, x);
  return aiRouteMasterData->fields.masterUniqueIndex == value;
}


void WarBoardAIRoute_AIRouteMasterData___ctor(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int____c *v7; // x0
  System_Collections_Generic_List_object__o *v8; // x22
  struct System_Collections_Generic_List_int____o **p_replaceDataList; // x19
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo_476E8C0 *v16; // x0
  WarBoardData_o *Instance; // x0
  WarBoardData_o *v18; // x1
  const MethodInfo *v19; // x4
  System_Int32_array *v20; // x8
  unsigned int v21; // w9
  unsigned int max_length; // w10
  unsigned int v23; // w23
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w25
  int32_t v26; // w24
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int stageNpcMaster; // w8
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Int32_array *data; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5935FA2 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int____Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int____TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935FA2 = 1;
  }
  data = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  v7 = System_Collections_Generic_List_int____TypeInfo;
  *(_OWORD *)&this->fields.masterType = xmmword_E94460;
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v7);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v8;
  p_replaceDataList = &this->fields.replaceDataList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_replaceDataList, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  v16 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
  *((_DWORD *)p_replaceDataList + 2) = -1;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance(v16);
  if ( !Instance )
    goto LABEL_20;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_20;
  Instance = (WarBoardData_o *)WarBoardData__IsDefenseTarget(Instance, &data, forceId, groupId, v19);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  v20 = data;
  if ( !data )
LABEL_20:
    sub_21FFECC(Instance, v18);
  v21 = 0;
  while ( 1 )
  {
    max_length = v20->max_length;
    if ( (int)v21 >= (int)max_length )
      break;
    if ( v21 >= max_length )
      goto LABEL_22;
    v23 = v21 + 1;
    if ( v21 + 1 >= max_length )
      goto LABEL_22;
    v24 = (System_Collections_Generic_List_object__o *)*p_replaceDataList;
    v25 = v20->m_Items[v21];
    v26 = v20->m_Items[v23];
    Instance = (WarBoardData_o *)sub_21FFD10(int___TypeInfo, 2);
    if ( !Instance )
      goto LABEL_20;
    stageNpcMaster = (int)Instance->fields.stageNpcMaster;
    v18 = Instance;
    if ( !stageNpcMaster || (LODWORD(Instance->fields.npcEntityDict) = v25, stageNpcMaster == 1) )
LABEL_22:
      sub_21FFED4(Instance);
    HIDWORD(Instance->fields.npcEntityDict) = v26;
    if ( v24 )
    {
      items = v24->fields._items;
      v35 = Method_System_Collections_Generic_List_int____Add__;
      ++v24->fields._version;
      if ( items )
      {
        size = v24->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v24,
            (Il2CppObject *)Instance,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v24->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v18;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 4), (int32_t)v18, v27, v28, v29, v30, v31, v32);
        }
        v20 = data;
        v21 = v23 + 1;
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
  void *IsNullOrEmpty; // x0
  uint32_t uniqueIndex_k__BackingField; // w8
  int32_t v9; // w22
  bool v10; // w24
  bool v11; // w25
  int32_t replacePriority; // w8
  int v13; // w8
  int v14; // w8
  int32_t v15; // w8
  int32_t v16; // w8
  uint32_t v17; // w10

  if ( (byte_5935FA3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int____get_Item__);
    byte_5935FA3 = 1;
  }
  if ( !type )
  {
    IsNullOrEmpty = (void *)BasicHelper__IsNullOrEmpty(
                              (System_Collections_ICollection_o *)this->fields.replaceDataList,
                              0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      this->fields.masterType = 0;
      if ( pieceData )
      {
        uniqueIndex_k__BackingField = pieceData->fields._uniqueIndex_k__BackingField;
        this->fields.replacePriority = 0;
LABEL_35:
        this->fields.masterUniqueIndex = uniqueIndex_k__BackingField;
        return;
      }
LABEL_34:
      sub_21FFECC(IsNullOrEmpty, *(_QWORD *)&type);
    }
  }
  IsNullOrEmpty = this->fields.replaceDataList;
  if ( !IsNullOrEmpty )
    goto LABEL_34;
  v9 = 0;
  if ( pieceData )
    v10 = type != 0;
  else
    v10 = 1;
  if ( pieceData )
    v11 = type != 2;
  else
    v11 = 1;
  while ( v9 < *((_DWORD *)IsNullOrEmpty + 6) )
  {
    replacePriority = this->fields.replacePriority;
    if ( replacePriority != -1 && replacePriority < v9 )
      break;
    IsNullOrEmpty = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                      v9,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_int____get_Item__);
    if ( v10 )
    {
      if ( v11 )
      {
        if ( type == 1 )
        {
          if ( !IsNullOrEmpty )
            goto LABEL_34;
          v13 = *((_DWORD *)IsNullOrEmpty + 6);
          if ( !v13 )
            goto LABEL_40;
          if ( *((_DWORD *)IsNullOrEmpty + 8) == 1 )
          {
            this->fields.masterType = 1;
            if ( v13 == 1 )
LABEL_40:
              sub_21FFED4(IsNullOrEmpty);
            v16 = *((_DWORD *)IsNullOrEmpty + 9);
            this->fields.replacePriority = v9;
            this->fields.masterSquareIndex = v16;
            return;
          }
        }
      }
      else
      {
        if ( !IsNullOrEmpty )
          goto LABEL_34;
        v14 = *((_DWORD *)IsNullOrEmpty + 6);
        if ( !v14 )
          goto LABEL_40;
        if ( *((_DWORD *)IsNullOrEmpty + 8) == 2 )
        {
          if ( v14 == 1 )
            goto LABEL_40;
          v15 = *((_DWORD *)IsNullOrEmpty + 9);
          if ( v15 == pieceData->fields._index_k__BackingField )
          {
            v17 = pieceData->fields._uniqueIndex_k__BackingField;
            this->fields.replacePriority = v9;
            this->fields.masterType = 2;
            this->fields.masterUniqueIndex = v17;
            this->fields.masterPieceIndex = v15;
            return;
          }
        }
      }
    }
    else
    {
      if ( !IsNullOrEmpty )
        goto LABEL_34;
      if ( !*((_DWORD *)IsNullOrEmpty + 6) )
        goto LABEL_40;
      if ( !*((_DWORD *)IsNullOrEmpty + 8) )
      {
        uniqueIndex_k__BackingField = pieceData->fields._uniqueIndex_k__BackingField;
        this->fields.masterType = 0;
        this->fields.replacePriority = v9;
        goto LABEL_35;
      }
    }
    IsNullOrEmpty = this->fields.replaceDataList;
    ++v9;
    if ( !IsNullOrEmpty )
      goto LABEL_34;
  }
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x22
  System_Func_T__TResult__o *v21; // x23
  WarBoardActionTrendEntity_array *HasMatchCondition; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  il2cpp_array_size_t max_length; // x8
  WarBoardActionTrendEntity_array *v27; // x20
  unsigned __int64 i; // x24
  WarBoardActionTrendEntity_o *v29; // x23
  System_Collections_Generic_List_object__o *v30; // x21
  WarBoardAIRoute_ActionTrendInfo_o *v31; // x22
  const MethodInfo *v32; // x2
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  int32_t condType; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5935F91 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_21FFC50(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__);
    byte_5935F91 = 1;
  }
  condType = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v5;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FutureTrendInfoList_k__BackingField,
    (int32_t)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Entity_k__BackingField = entity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)entity, v13, v14, v15, v16, v17, v18);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v19);
  v21 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
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
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24, v25);
  HasMatchCondition = (WarBoardActionTrendEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !HasMatchCondition
    || (HasMatchCondition = WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                              (WarBoardActionTrendMaster_o *)HasMatchCondition,
                              entity,
                              0)) == 0 )
  {
LABEL_20:
    sub_21FFECC(HasMatchCondition, v23);
  }
  max_length = HasMatchCondition->max_length;
  v27 = HasMatchCondition;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_21FFED4(HasMatchCondition);
      v29 = v27->m_Items[i];
      if ( v29 )
      {
        v30 = (System_Collections_Generic_List_object__o *)*p_FutureTrendInfoList_k__BackingField;
        v31 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_21FFEBC(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v31, v29, v32);
        if ( !v30 )
          goto LABEL_20;
        items = v30->fields._items;
        v40 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++v30->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v30->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)v31,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v31;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v42 + 4), (int32_t)v31, v33, v34, v35, v36, v37, v38);
        }
      }
      LODWORD(max_length) = v27->max_length;
    }
  }
}


WarBoardActionTrendConditionEntity_array *WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardAIRoute_ActionTrendInfo_o *v3; // x20
  MissionNaviTransitionBoardItem_o *p_conditionEntityArray; // x19
  System_Object_array *conditionEntityArray; // x21
  struct WarBoardActionTrendEntity_o *Entity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *conditionIds; // x20
  WarBoardAIRoute_ActionTrendInfo___c_c *v8; // x0
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__8_0; // x21
  Il2CppObject *v11; // x22
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_T__o *v19; // x0
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  v3 = this;
  if ( (byte_5935F90 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    sub_21FFC50(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
    sub_21FFC50(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__);
    this = (WarBoardAIRoute_ActionTrendInfo_o *)sub_21FFC50(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
    byte_5935F90 = 1;
  }
  p_conditionEntityArray = (MissionNaviTransitionBoardItem_o *)&v3->fields.conditionEntityArray;
  conditionEntityArray = (System_Object_array *)v3->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = v3->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_21FFECC(this, method);
    conditionIds = (System_Collections_Generic_IEnumerable_TSource__o *)Entity_k__BackingField->fields.conditionIds;
    v8 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    if ( !*(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, method, v2);
      v8 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__8_0 = (System_Func_T__TResult__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, method, v2);
        static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__8_0,
        v11,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        0);
      v12 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      v12->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__8_0, (int32_t)_9__8_0, v13, v14, v15, v16, v17, v18);
    }
    v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           conditionIds,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_385A9E0 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v20 = BasicHelper__ExcludeNull_object_(
            v19,
            (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = System_Linq_Enumerable__ToArray_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                             (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    p_conditionEntityArray->klass = (MissionNaviTransitionBoardItem_c *)conditionEntityArray;
    sub_21FFBF4(p_conditionEntityArray, (int32_t)conditionEntityArray, v21, v22, v23, v24, v25, v26);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5935F92 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
    byte_5935F92 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_ActionTrendInfo___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields,
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


// local variable allocation has failed, the output may be wrong!
WarBoardActionTrendConditionEntity_o *WarBoardAIRoute_ActionTrendInfo___c___get_ConditionEntityArray_b__8_0(
        WarBoardAIRoute_ActionTrendInfo___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_5935F93 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
    byte_5935F93 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&x, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v5);
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   x,
                                                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
}


void WarBoardAIRoute_AdvantagePieceData___ctor(WarBoardAIRoute_AdvantagePieceData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardPieceData__c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_Dictionary_int__object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_Dictionary_int__object__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_Dictionary_int__object__o *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_Dictionary_int__object__o *v32; // x20
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_Dictionary_int__object__o *v39; // x20
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7

  if ( (byte_5935F9B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
    byte_5935F9B = 1;
  }
  v3 = System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo;
  this->fields.flagNow = 1;
  *(_QWORD *)&this->fields.baseCARange = -1;
  *(_QWORD *)&this->fields.baseAARange = -1;
  *(_QWORD *)&this->fields.baseDARange = -1;
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicClassAdvantageServant,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicClassDisAdvantageServant,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v18;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicAttackAdvantageServant,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v25,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v25;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicAttackDisAdvantageServant,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v32,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v32;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicDefenseAdvantageServant,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v39,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v39;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicDefenseDisAdvantageServant,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIRoute_DesignationItemData___ctor(WarBoardAIRoute_DesignationItemData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5935F9C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
    byte_5935F9C = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIRoute_PiecePersonality___ctor(WarBoardAIRoute_PiecePersonality_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5935F8A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
    byte_5935F8A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.ratingOffsetList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *WarBoardAIRoute_PiecePersonality__AttackOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  MissionNaviTransitionBoardItem_o *p_attackOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v7; // x0
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__4_0; // x21
  Il2CppObject *v10; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_List_TSource__o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5935F87 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    sub_21FFC50(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__);
    sub_21FFC50(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_5935F87 = 1;
  }
  p_attackOffset = (MissionNaviTransitionBoardItem_o *)&this->fields.attackOffset;
  result = this->fields.attackOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v7 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( !*(&WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo, method, v2);
      v7 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__4_0 = (System_Func_object__bool__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, method, v2);
        static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__4_0,
        v10,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        0);
      v11 = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      v11->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__4_0, (int32_t)_9__4_0, v12, v13, v14, v15, v16, v17);
    }
    v18 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__4_0,
            (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v19 = System_Linq_Enumerable__ToList_object_(
            v18,
            (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_attackOffset->klass = (MissionNaviTransitionBoardItem_c *)v19;
    sub_21FFBF4(p_attackOffset, (int32_t)v19, v20, v21, v22, v23, v24, v25);
    return (System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)p_attackOffset->klass;
  }
  return result;
}


System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5935F89 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    byte_5935F89 = 1;
  }
  v3 = sub_21FFEBC(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *)v3;
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *WarBoardAIRoute_PiecePersonality__MoveOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  MissionNaviTransitionBoardItem_o *p_moveOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v7; // x0
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v10; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_List_TSource__o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5935F88 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    sub_21FFC50(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__);
    sub_21FFC50(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_5935F88 = 1;
  }
  p_moveOffset = (MissionNaviTransitionBoardItem_o *)&this->fields.moveOffset;
  result = this->fields.moveOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v7 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( !*(&WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo, method, v2);
      v7 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__5_0 = (System_Func_object__bool__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, method, v2);
        static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__5_0,
        v10,
        Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__,
        0);
      v11 = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      v11->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__5_0, (int32_t)_9__5_0, v12, v13, v14, v15, v16, v17);
    }
    v18 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v19 = System_Linq_Enumerable__ToList_object_(
            v18,
            (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_moveOffset->klass = (MissionNaviTransitionBoardItem_c *)v19;
    sub_21FFBF4(p_moveOffset, (int32_t)v19, v20, v21, v22, v23, v24, v25);
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
  Il2CppObject *current; // x8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v7; // x9
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v14; // x8
  struct WarBoardAIRoute_ActionTrendInfo_o *trendInfo_5__3; // x8
  System_Collections_Generic_List_object__o *FutureTrendInfoList_k__BackingField; // x0
  Il2CppObject *v17; // x8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v18; // x9
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  bool v32; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v33; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v34; // x1
  bool result; // w0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  const MethodInfo *v43; // x1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  bool v50; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v51; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v52; // x1
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v53; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v54; // x1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v61; // x8
  __int64 v62; // x19
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+20h] [xbp-50h]
  __int64 v65; // [xsp+40h] [xbp-30h]
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o **v66; // [xsp+48h] [xbp-28h] BYREF
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v67; // [xsp+58h] [xbp-18h] BYREF

  v67 = this;
  v2 = this;
  if ( (byte_5935F8C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    this = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    byte_5935F8C = 1;
  }
  _1__state = v2->fields.__1__state;
  v65 = 0;
  v66 = &v67;
  if ( _1__state != 2 )
  {
    if ( _1__state != 1 )
    {
      if ( !_1__state )
      {
        _4__this = v2->fields.__4__this;
        v2->fields.__1__state = -1;
        if ( !_4__this )
          sub_21FFECC(this, method);
        actionTrandList = (System_Collections_Generic_List_object__o *)_4__this->fields.actionTrandList;
        if ( !actionTrandList )
          sub_21FFECC(0, method);
        System_Collections_Generic_List_object___GetEnumerator(
          &v63,
          actionTrandList,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
        current = v63.fields._current;
        v7 = v67;
        v64 = v63;
        *(_OWORD *)&v67->fields.__7__wrap1.fields._list = *(_OWORD *)&v63.fields._list;
        v7->fields.__7__wrap1.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v7->fields.__7__wrap1, 0, v8, v9, v10, v11, v12, v13);
        v14 = v67;
        v67->fields.__1__state = -3;
        goto LABEL_16;
      }
      result = 0;
      goto LABEL_19;
    }
    trendInfo_5__3 = v2->fields._trendInfo_5__3;
    v2->fields.__1__state = -3;
    if ( !trendInfo_5__3 )
      sub_21FFECC(this, method);
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_21FFECC(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      &v63,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v17 = v63.fields._current;
    v18 = v67;
    v64 = v63;
    *(_OWORD *)&v67->fields.__7__wrap3.fields._list = *(_OWORD *)&v63.fields._list;
    v18->fields.__7__wrap3.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v17;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->fields.__7__wrap3, 0, v19, v20, v21, v22, v23, v24);
    v2 = v67;
  }
  v2->fields.__1__state = -4;
  v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap3,
          (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
  v33 = v67;
  if ( !v32 )
  {
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(v67, v25);
    v36 = v67;
    *(_OWORD *)&v67->fields._trendInfo_5__3 = 0u;
    v36 = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)((char *)v36 + 72);
    *(_OWORD *)&v36->fields.__1__state = 0u;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v36, 0, v37, v38, v39, v40, v41, v42);
    v14 = v67;
LABEL_16:
    v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v14->fields.__7__wrap1,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    v51 = v67;
    if ( v50 )
    {
      v52 = v67->fields.__7__wrap1.fields._current;
      v67->fields._trendInfo_5__3 = v52;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v51->fields._trendInfo_5__3,
        (int32_t)v52,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      v53 = v67;
      v54 = v67->fields._trendInfo_5__3;
      v67->fields.__2__current = v54;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v53->fields.__2__current,
        (int32_t)v54,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      result = 1;
      v67->fields.__1__state = 1;
    }
    else
    {
      WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(v67, v43);
      v61 = v67;
      result = 0;
      *(_QWORD *)&v67->fields.__7__wrap1.fields._index = 0;
      v61->fields.__7__wrap1.fields._current = 0;
      v61->fields.__7__wrap1.fields._list = 0;
    }
    goto LABEL_19;
  }
  v34 = v67->fields.__7__wrap3.fields._current;
  v67->fields.__2__current = v34;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v33->fields.__2__current, (int32_t)v34, v26, v27, v28, v29, v30, v31);
  result = 1;
  v67->fields.__1__state = 2;
LABEL_19:
  v62 = v65;
  if ( v65 )
  {
    sub_1FF68F0(&v66);
    sub_21FFEC4(v62);
  }
  return result;
}


System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__GetEnumerator(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  int32_t CurrentManagedThreadId; // w0
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5935F8F & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    byte_5935F8F = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_21FFEBC(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 40), (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state + 4) <= 6 && ((1 << (_1__state + 4)) & 0x63) != 0 )
  {
    if ( _1__state == 2 || _1__state == -4 )
      WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(this, method);
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(this, method);
  }
}


void WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  const MethodInfo_40C7F48 *v3; // x1

  if ( (byte_5935F8D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    byte_5935F8D = 1;
  }
  v3 = (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    v3);
}


void WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  const MethodInfo_40C7F48 *v3; // x1

  if ( (byte_5935F8E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    byte_5935F8E = 1;
  }
  v3 = (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__;
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    v3);
}


void WarBoardAIRoute_PiecePersonality___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5935F8B & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_5935F8B = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_PiecePersonality___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return x->fields.type == 0;
}


bool WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.type == 1;
}


void WarBoardAIRoute_PutSquareTarget___ctor(WarBoardAIRoute_PutSquareTarget_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5935F9D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
    byte_5935F9D = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v3,
    (const MethodInfo_3F9B964 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v10,
    (const MethodInfo_3F9B964 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicObjectPutSquareIndex,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v17,
    (const MethodInfo_3F9B964 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicIndividualityPutSqareIndex,
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
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_c *v3; // x0
  Il2CppObject *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5935F96 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
    byte_5935F96 = 1;
  }
  v3 = WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo;
  this->fields.flagNow = 1;
  v4 = (Il2CppObject *)sub_21FFEBC(v3);
  System_Object___ctor(v4, 0);
  this->fields.evalOffsetMagnification = (struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.evalOffsetMagnification,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIRoute_RouteData__CalcEvalValue(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  System_Decimal_c *v5; // x8
  int32_t WarBoardEvalFactorsAffectRatio; // w20
  const MethodInfo *v7; // x1
  System_Decimal_o *v8; // x20
  System_Decimal_o *flagNow_low; // x8
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x2
  System_Decimal_o *v13; // x8
  System_Decimal_o *MoveValue; // x22
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *futureEvalOffsetMag; // x0
  System_Decimal_o *v16; // x23
  System_Decimal_o *Value; // x24
  System_Decimal_c *v18; // x0
  System_Decimal_o *v19; // x1
  __int64 v20; // x2
  System_Decimal_o *AttackValue; // x22
  int32_t moveEvalOffsetAddValue; // w24
  System_Decimal_o *v23; // x23
  System_Decimal_o *v24; // x8
  System_Decimal_o *v25; // x8
  System_Decimal_o *v26; // x0
  System_Decimal_o *v27; // x1
  System_Decimal_o *v28; // x0
  System_Decimal_o *v29; // x1
  System_Decimal_o *v30; // x8
  System_Decimal_o *v31; // x0
  System_Decimal_o *v32; // x8
  System_Decimal_o *v33; // x0
  const MethodInfo *v34; // x1

  if ( (byte_5935F98 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&System_Decimal_TypeInfo);
    byte_5935F98 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = System_Decimal_TypeInfo;
  WarBoardEvalFactorsAffectRatio = v4->static_fields->WarBoardEvalFactorsAffectRatio;
  if ( !*(&System_Decimal_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, method, v2);
  v8 = System_Decimal__op_Implicit_77321204((System_Decimal_o *)v5, WarBoardEvalFactorsAffectRatio, 0);
  flagNow_low = (System_Decimal_o *)LOBYTE(this->fields.flagNow);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( ((unsigned __int8)flagNow_low & 2) == 0 )
  {
    if ( evalOffsetMagnification )
    {
      MoveValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(
                    flagNow_low,
                    evalOffsetMagnification,
                    v7);
      futureEvalOffsetMag = this->fields.futureEvalOffsetMag;
      v16 = (System_Decimal_o *)v11;
      if ( futureEvalOffsetMag )
      {
        Value = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetValue(v13, futureEvalOffsetMag, v11);
        v18 = System_Decimal_TypeInfo;
      }
      else
      {
        v18 = System_Decimal_TypeInfo;
        if ( !*(&System_Decimal_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v11, v12);
          v18 = System_Decimal_TypeInfo;
        }
        Value = *(System_Decimal_o **)v18->static_fields;
      }
      v25 = (System_Decimal_o *)*(&v18->_2.cctor_finished + 1);
      if ( !(_DWORD)v25 )
        j_il2cpp_runtime_class_init_0(v18, v11, v12);
      v26 = System_Decimal__op_Addition(v25, MoveValue, v16, (const MethodInfo *)Value);
      moveEvalOffsetAddValue = this->fields.moveEvalOffsetAddValue;
      AttackValue = v26;
      v23 = v27;
      goto LABEL_20;
    }
LABEL_21:
    sub_21FFECC(evalOffsetMagnification, v7);
  }
  if ( !evalOffsetMagnification )
    goto LABEL_21;
  AttackValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(
                  flagNow_low,
                  evalOffsetMagnification,
                  v7);
  moveEvalOffsetAddValue = this->fields.attackEvalOffsetAddValue;
  v23 = v19;
  v24 = (System_Decimal_o *)*(&System_Decimal_TypeInfo->_2.cctor_finished + 1);
  if ( !(_DWORD)v24 )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v19, v20);
LABEL_20:
  v28 = System_Decimal__op_Implicit_77321204(v24, moveEvalOffsetAddValue, 0);
  v31 = System_Decimal__op_Division(v30, v28, v29, (const MethodInfo *)v8);
  v33 = System_Decimal__op_Addition(v32, AttackValue, v23, (const MethodInfo *)v31);
  this->fields.evalValue = System_Decimal__op_Explicit_77321708(v33, v34);
}


bool WarBoardAIRoute_RouteData__HasActionPiece(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return this->fields.actionPiece != 0;
}


bool WarBoardAIRoute_RouteData__HasFlag(WarBoardAIRoute_RouteData_o *this, int64_t flag, const MethodInfo *method)
{
  return (flag & ~this->fields.flagNow) == 0;
}


bool WarBoardAIRoute_RouteData__HasFlag_44764072(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_5935F95 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__);
    byte_5935F95 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  return futureLookingTrendHashSet && futureLookingTrendHashSet->fields._count > 0;
}


WarBoardAIRoute_RouteData_o *WarBoardAIRoute_RouteData__ShallowCopy(
        WarBoardAIRoute_RouteData_o *this,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *result; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 naturalAligment; // x9
  WarBoardAIRoute_RouteData_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_5935F97 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAIRoute_RouteData_TypeInfo);
    byte_5935F97 = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0);
  if ( result )
  {
    naturalAligment = WarBoardAIRoute_RouteData_TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      sub_220024C(result, WarBoardAIRoute_RouteData_TypeInfo, v4, v5);
      WarBoardAIRoute_RouteData__CalcEvalValue(v7, v8);
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
  MissionNaviTransitionBoardItem_o *p_futureLookingTrendHashSet; // x19
  System_Collections_Generic_HashSet_object__o *v4; // x20
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // t1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5935F94 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    byte_5935F94 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = (MissionNaviTransitionBoardItem_o *)&this->fields.futureLookingTrendHashSet;
  v4 = (System_Collections_Generic_HashSet_object__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v4 = (System_Collections_Generic_HashSet_object__o *)sub_21FFEBC(System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v4,
      (const MethodInfo_4286740 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    p_futureLookingTrendHashSet->klass = (MissionNaviTransitionBoardItem_c *)v4;
    sub_21FFBF4(p_futureLookingTrendHashSet, (int32_t)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x2
  float warAttack; // s8
  float benAttack; // s9
  System_Decimal_o *v7; // x8

  if ( (byte_5935F99 & 1) == 0 )
  {
    sub_21FFC50(&System_Decimal_TypeInfo);
    byte_5935F99 = 1;
  }
  warAttack = this->fields.warAttack;
  benAttack = this->fields.benAttack;
  v7 = (System_Decimal_o *)*(&System_Decimal_TypeInfo->_2.cctor_finished + 1);
  if ( !(_DWORD)v7 )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, method, v3);
  return System_Decimal__op_Explicit(v7, warAttack + benAttack, 0);
}


System_Decimal_o *WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(
        System_Decimal_o *__return_ptr retstr,
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float warMove; // s8
  float benMove; // s9
  System_Decimal_o *v7; // x8

  if ( (byte_5935F9A & 1) == 0 )
  {
    sub_21FFC50(&System_Decimal_TypeInfo);
    byte_5935F9A = 1;
  }
  warMove = this->fields.warMove;
  benMove = this->fields.benMove;
  v7 = (System_Decimal_o *)*(&System_Decimal_TypeInfo->_2.cctor_finished + 1);
  if ( !(_DWORD)v7 )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, method, v3);
  return System_Decimal__op_Explicit(v7, warMove + benMove, 0);
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


void WarBoardAIRoute_TargetData___ctor_44747104(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardSquareData_o *targetSquare,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.targetSquare = targetSquare;
  this->fields.actionTrendKey = actionTrendKey;
  this->fields.conditionId = conditionId;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetSquare,
    (int32_t)targetSquare,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void WarBoardAIRoute_TargetData___ctor_44748560(
        WarBoardAIRoute_TargetData_o *this,
        IWarBoardObjectData_o *targetObject,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x1

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.actionTrendKey = actionTrendKey;
  this->fields.conditionId = conditionId;
  this->fields.targetObject = targetObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetObject,
    (int32_t)targetObject,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarBoardAIRoute_TargetData__DetectObject(this, v15);
}


void WarBoardAIRoute_TargetData___ctor_44758868(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct IWarBoardObjectData_o *targetObject; // x1
  struct WarBoardSquareData_o *targetSquare; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  const MethodInfo *v27; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !baseTargetData )
    sub_21FFECC(v11, v12);
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetObject,
    (int32_t)targetObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  targetSquare = baseTargetData->fields.targetSquare;
  this->fields.targetSquare = targetSquare;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetSquare,
    (int32_t)targetSquare,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v27);
}


void WarBoardAIRoute_TargetData___ctor_44760840(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        IWarBoardObjectData_o *targetObject,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.targetObject = targetObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetObject,
    (int32_t)targetObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v19);
}


void WarBoardAIRoute_TargetData___ctor_44774056(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
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
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 naturalAligment; // x9

  v2 = (Il2CppObject *)b;
  if ( (byte_5935F9E & 1) == 0 )
  {
    b = (WarBoardAIRoute_TargetData_o *)sub_21FFC50(&WarBoardAIRoute_TargetData_TypeInfo);
    byte_5935F9E = 1;
  }
  if ( !v2 )
LABEL_9:
    sub_21FFECC(b, method);
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone(v2, 0);
  if ( result )
  {
    naturalAligment = WarBoardAIRoute_TargetData_TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      sub_220024C(result, WarBoardAIRoute_TargetData_TypeInfo, v4, v5);
      goto LABEL_9;
    }
  }
  return result;
}


void WarBoardAIRoute_TargetData__DetectObject(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct IWarBoardObjectData_o *targetObject; // x8
  WarBoardPieceData_c *v10; // x9
  __int64 naturalAligment; // x10
  struct IWarBoardObjectData_o *v12; // x11
  int32_t v13; // w1
  struct WarBoardPieceData_o **p_targetPiece; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct IWarBoardObjectData_o *v21; // x8
  WarBoardItemData_c *v22; // x9
  __int64 v23; // x10
  struct IWarBoardObjectData_o *v24; // x11
  int32_t v25; // w1
  struct WarBoardItemData_o **p_targetItem; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct IWarBoardObjectData_o *v33; // x8
  WarBoardTreasureData_c *v34; // x9
  __int64 v35; // x10
  struct IWarBoardObjectData_o *v36; // x11
  int32_t v37; // w1
  struct WarBoardTreasureData_o **p_targetTreasure; // x19

  if ( (byte_5935FA0 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardItemData_TypeInfo);
    sub_21FFC50(&WarBoardPieceData_TypeInfo);
    sub_21FFC50(&WarBoardTreasureData_TypeInfo);
    byte_5935FA0 = 1;
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_targetPiece, v13, v2, v3, v4, v5, v6, v7);
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_targetItem, v25, v15, v16, v17, v18, v19, v20);
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_targetTreasure, v37, v27, v28, v29, v30, v31, v32);
}


void WarBoardAIRoute_TargetData__Init(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x5
  struct IWarBoardObjectData_o *targetObject; // x24
  IWarBoardObjectData_c *klass; // x8
  __int64 v16; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 v18; // x0
  struct WarBoardSquareData_o *targetSquare; // x8
  int32_t squareIndex_k__BackingField; // w25
  __int64 v21; // x0
  AStarSearch_c *v22; // x0
  int v23; // w8
  struct System_Int32_array *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  __int64 v32; // x2
  WarBoardAIRoute_TargetData___c_c *v33; // x0
  System_Int32_array *baseRoute; // x24
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__7_0; // x25
  Il2CppObject *v37; // x26
  struct WarBoardAIRoute_TargetData___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Int32_array *v46; // x0
  const MethodInfo *v47; // x2
  bool IsDetour; // w0
  __int64 v49; // x1
  __int64 v50; // x2
  const MethodInfo *v51; // x5
  int32_t nowSquareIndex; // w23
  struct System_Int32_array *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  int32_t v60; // w0
  struct IWarBoardObjectData_o *v61; // x21
  IWarBoardObjectData_c *v62; // x8
  __int64 v63; // x9
  int32_t *v64; // x10
  __int64 v65; // x0
  struct WarBoardSquareData_o *v66; // x8
  int32_t conditionId; // w9

  if ( (byte_5935F9F & 1) == 0 )
  {
    sub_21FFC50(&AStarSearch_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&System_Func_WarBoardPieceData__int__TypeInfo);
    sub_21FFC50(&IWarBoardObjectData_TypeInfo);
    sub_21FFC50(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__);
    sub_21FFC50(&WarBoardAIRoute_TargetData___c_TypeInfo);
    byte_5935F9F = 1;
  }
  WarBoardAIRoute_TargetData__DetectObject(this, (const MethodInfo *)baseTargetData);
  targetObject = this->fields.targetObject;
  if ( targetObject )
  {
    klass = targetObject->klass;
    v16 = *(unsigned __int16 *)&targetObject->klass->_2.rank;
    if ( *(_WORD *)&targetObject->klass->_2.rank )
    {
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v16;
        p_offset += 2;
        if ( !v16 )
          goto LABEL_8;
      }
      v18 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
    }
    else
    {
LABEL_8:
      v18 = sub_2237E2C(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1);
    }
    v21 = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v18)(targetObject, *(_QWORD *)(v18 + 8));
    squareIndex_k__BackingField = v21;
    if ( !this )
      goto LABEL_39;
  }
  else
  {
    targetSquare = this->fields.targetSquare;
    if ( targetSquare )
      squareIndex_k__BackingField = targetSquare->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = -1;
  }
  v22 = AStarSearch_TypeInfo;
  v23 = *(&AStarSearch_TypeInfo->_2.cctor_finished + 1);
  this->fields.nowSquareIndex = squareIndex_k__BackingField;
  if ( !v23 )
    j_il2cpp_runtime_class_init_0(v22, v11, v12);
  v24 = AStarSearch__RouteSearch(0, baseSquareIndex, squareIndex_k__BackingField, 0, 0, v13);
  this->fields.baseRoute = v24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.baseRoute, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v33 = WarBoardAIRoute_TargetData___c_TypeInfo;
  baseRoute = this->fields.baseRoute;
  if ( !*(&WarBoardAIRoute_TargetData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIRoute_TargetData___c_TypeInfo, v31, v32);
    v33 = WarBoardAIRoute_TargetData___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__7_0 = (System_Func_object__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*(&v33->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v33, v31, v32);
      static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v37, Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, 0);
    v38 = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    v38->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v38->__9__7_0, (int32_t)_9__7_0, v39, v40, v41, v42, v43, v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v46 = System_Linq_Enumerable__ToArray_int_(
          v45,
          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v46, v47);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    nowSquareIndex = this->fields.nowSquareIndex;
    if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v49, v50);
    v53 = AStarSearch__RouteSearch(piece, baseSquareIndex, nowSquareIndex, 1, 0, v51);
    this->fields.detourRoute = v53;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.detourRoute,
      (int32_t)v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  v60 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
  v61 = this->fields.targetObject;
  this->fields.isAround = v60 == 2;
  if ( !v61 )
  {
    v66 = this->fields.targetSquare;
    if ( v66 )
      v21 = (unsigned int)v66->fields._squareIndex_k__BackingField;
    else
      v21 = 0xFFFFFFFFLL;
    goto LABEL_35;
  }
  v62 = v61->klass;
  v63 = *(unsigned __int16 *)&v61->klass->_2.rank;
  if ( *(_WORD *)&v61->klass->_2.rank )
  {
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v64 - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_30;
    }
    v65 = (__int64)&v62->vtable[*v64];
  }
  else
  {
LABEL_30:
    v65 = sub_2237E2C(v61, IWarBoardObjectData_TypeInfo, 0);
  }
  v21 = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v65)(v61, *(_QWORD *)(v65 + 8));
  if ( !this )
LABEL_39:
    sub_21FFECC(v21, v11);
LABEL_35:
  this->fields.putSquareIndex = v21;
  if ( !baseTargetData )
    goto LABEL_39;
  conditionId = baseTargetData->fields.conditionId;
  this->fields.actionTrendKey = baseTargetData->fields.actionTrendKey;
  this->fields.conditionId = conditionId;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5935FA1 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAIRoute_TargetData___c_TypeInfo);
    byte_5935FA1 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardAIRoute_TargetData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute_TargetData___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_TargetData___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardAIRoute_TargetData___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x5
  bool v6; // w6
  bool v7; // w7
  WarBoardAIRoute__CreateRouteData_d__47_o *v8; // x20
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct WarBoardData_o *monitor; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v20; // x0
  WarBoardAIRoute_o *v21; // x0
  const MethodInfo *v22; // x6
  struct WarBoardStageNpcEntity_o *npcData; // x9
  int32_t searchDepth; // w8
  WarBoardAIRoute__CreateRouteData_d__47_o *v25; // x9
  int32_t v26; // w10
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList; // x1
  const MethodInfo_476E8C0 *v28; // x0
  int32_t v29; // w20
  Il2CppObject *v30; // x0
  const MethodInfo *v31; // x2
  int32_t MasterSquareIndex; // w2
  System_Collections_Generic_Dictionary_int__uint__o *v33; // x1
  const MethodInfo *v34; // x3
  struct System_Int32_array *AllyPutSquareIndicesWithoutMaster; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  MissionNaviTransitionBoardItem_o *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x0
  __int64 v51; // x1
  struct WarBoardData_o *warBoardData_5__2; // x8
  System_Collections_Generic_List_int__o *masterExistsForce; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  const MethodInfo *v56; // x4
  WarBoardAIRoute__CreateRouteData_d__47_o *v57; // x8
  int32_t servantAndEnemyRange_5__14; // w8
  int32_t servantAndEnemyMasterRange_5__15; // w9
  struct WarBoardAIRoute_AIRouteMasterData_o *v60; // x9
  int32_t masterType; // w9
  struct DefenseAreaData_o *DefenseAreaData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  __int64 v70; // x0
  __int64 v71; // x1
  const MethodInfo *v72; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v73; // x8
  struct DefenseAreaData_o *defenseAreaData_5__7; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x10
  bool IsAllBlockShortestRouteEnemyAndMastr; // w0
  System_Collections_Generic_Dictionary_int__uint__o *v77; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  WarBoardAIRoute__CreateRouteData_d__47_o *v79; // x8
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  WarBoardAIRoute__CreateRouteData_d__47_o *v86; // x0
  int v87; // w8
  const MethodInfo *v88; // x1
  int32_t key; // w20
  uint32_t key_high; // w21
  Il2CppObject *v91; // x22
  WarBoardAIRoute__CreateRouteData_d__47_o *v92; // x0
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  const MethodInfo *v99; // x1
  __int64 v100; // x2
  WarBoardAIManager_c *v101; // x0
  WarBoardSquareData_o *Square; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v103; // x0
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *_8__1; // x22
  const MethodInfo *v111; // x1
  WarBoardPieceData_o *PieceUnique; // x0
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  __int64 v119; // x0
  __int64 v120; // x1
  const MethodInfo *v121; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v122; // x8
  int64_t baseFlag_5__6; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v124; // x9
  struct WarBoardSquareData_o *v125; // x9
  System_Func_WarBoardAIRoute_RouteData__bool__c *v126; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v127; // x21
  Il2CppObject *v128; // x23
  System_Func_object__bool__o *v129; // x22
  __int64 v130; // x1
  int32_t v131; // w8
  System_Collections_Generic_List_object__o *v132; // x0
  WarBoardAIRoute_o *Only; // x0
  __int64 v134; // x1
  const MethodInfo *v135; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v136; // x8
  __int64 RouteSumPieceActionCost; // x0
  __int64 v138; // x1
  const MethodInfo *v139; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v140; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v141; // x9
  _BOOL8 IsActable; // x0
  __int64 v143; // x1
  const MethodInfo *v144; // x4
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v145; // x9
  System_Collections_Generic_Dictionary_int__int__o *DesignationItemToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v147; // x0
  System_String_o *v148; // x2
  System_String_o *v149; // x3
  int32_t v150; // w4
  int32_t v151; // w5
  bool v152; // w6
  bool v153; // w7
  __int64 v154; // x0
  __int64 v155; // x1
  const MethodInfo *v156; // x4
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v157; // x9
  struct System_Collections_Generic_Dictionary_int__int__o *TargetToDistance_44760952; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v159; // x0
  System_String_o *v160; // x2
  System_String_o *v161; // x3
  int32_t v162; // w4
  int32_t v163; // w5
  bool v164; // w6
  bool v165; // w7
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v166; // x1
  const MethodInfo *v167; // x5
  System_Collections_Generic_Dictionary_uint__int__o *AllEnemyToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v169; // x0
  System_String_o *v170; // x2
  System_String_o *v171; // x3
  int32_t v172; // w4
  int32_t v173; // w5
  bool v174; // w6
  bool v175; // w7
  WarBoardAIRoute__CreateRouteData_d__47_o *v176; // x0
  System_String_o *v177; // x2
  System_String_o *v178; // x3
  int32_t v179; // w4
  int32_t v180; // w5
  bool v181; // w6
  bool v182; // w7
  __int64 v183; // x0
  __int64 v184; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v185; // x8
  WarBoardPieceData_o *basePiece; // x0
  _BOOL8 isServant; // x0
  __int64 v188; // x1
  const MethodInfo *v189; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v190; // x9
  WarBoardAIRoute_AdvantagePieceData_o *AdvantagePieceData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v192; // x0
  System_String_o *v193; // x2
  System_String_o *v194; // x3
  int32_t v195; // w4
  int32_t v196; // w5
  bool v197; // w6
  bool v198; // w7
  __int64 v199; // x1
  __int64 v200; // x2
  const MethodInfo *v201; // x5
  int32_t masterSquareIndex_5__4; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v203; // x0
  __int64 v204; // x0
  __int64 v205; // x1
  const MethodInfo *v206; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v207; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v208; // x9
  struct WarBoardPieceData_o *v209; // x11
  struct WarBoardAIRoute_AIRouteMasterData_o *v210; // x9
  int32_t v211; // w10
  int32_t index_k__BackingField; // w11
  struct WarBoardStageNpcEntity_o *v213; // x12
  System_Collections_Generic_HashSet_object__o *v214; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v215; // x0
  System_String_o *v216; // x2
  System_String_o *v217; // x3
  int32_t v218; // w4
  int32_t v219; // w5
  bool v220; // w6
  bool v221; // w7
  System_Collections_Generic_HashSet_object__o *v222; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v223; // x0
  System_String_o *v224; // x2
  System_String_o *v225; // x3
  int32_t v226; // w4
  int32_t v227; // w5
  bool v228; // w6
  bool v229; // w7
  __int64 v230; // x1
  System_Collections_Generic_List_object__o *v231; // x0
  _BOOL8 v232; // x0
  __int64 v233; // x1
  Il2CppObject *v234; // x20
  Il2CppClass *v235; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v236; // x10
  struct WarBoardPieceData_o *v237; // x10
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *basePieceActionPieceRouteList_5__22; // x0
  _DWORD *v239; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v240; // x10
  struct WarBoardPieceData_o *v241; // x10
  struct WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData_5__21; // x0
  __int64 v243; // x0
  __int64 v244; // x2
  WarBoardAIRoute__CreateRouteData_d__47_o *v245; // x8
  int32_t searchCount; // w9
  System_Collections_Generic_IEnumerable_TSource__o *dictionaryCreateRouteDataEvalValue; // x20
  WarBoardAIRoute___c_c *v248; // x0
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__47_6; // x21
  Il2CppObject *v251; // x22
  struct WarBoardAIRoute___c_StaticFields *v252; // x0
  System_String_o *v253; // x2
  System_String_o *v254; // x3
  int32_t v255; // w4
  int32_t v256; // w5
  bool v257; // w6
  bool v258; // w7
  __int64 v259; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v260; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v261; // x0
  __int64 Count; // x0
  __int64 v263; // x1
  struct WarBoardStageNpcEntity_o *v264; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v265; // x11
  float v266; // s0
  int32_t v267; // w9
  int32_t calcEllipsisMin; // w8
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v270; // x9
  int32_t *p_offset; // x10
  __int64 v272; // x0
  __int64 v273; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v274; // x8
  System_String_o *v275; // x2
  System_String_o *v276; // x3
  int32_t v277; // w4
  int32_t v278; // w5
  bool v279; // w6
  bool v280; // w7
  __int64 *v281; // x19
  __int64 v282; // x8
  __int64 v283; // x9
  int *v284; // x10
  __int64 v285; // x0
  __int64 v286; // x0
  __int64 *v287; // x19
  __int64 v288; // x8
  __int64 v289; // x9
  int *v290; // x10
  __int64 v291; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v292; // x8
  System_String_o *v293; // x2
  System_String_o *v294; // x3
  int32_t v295; // w4
  int32_t v296; // w5
  bool v297; // w6
  bool v298; // w7
  __int64 v299; // x19
  Il2CppObject *v300; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v301; // x0
  System_String_o *v302; // x2
  System_String_o *v303; // x3
  int32_t v304; // w4
  int32_t v305; // w5
  bool v306; // w6
  bool v307; // w7
  int32_t v308; // w8
  __int64 v309; // x1
  WarBoardSquareData_o *v310; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *MyAndLinkedSquareIndecies; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v312; // x0
  System_String_o *v313; // x2
  System_String_o *v314; // x3
  int32_t v315; // w4
  int32_t v316; // w5
  bool v317; // w6
  bool v318; // w7
  MissionNaviTransitionBoardItem_o *p_basePieceBasePieceRouteList_5__23; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v320; // x9
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *basePieceBasePieceRouteList_5__23; // t1
  __int64 v322; // x20
  __int64 v323; // x0
  __int64 v324; // x1
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v325; // x8
  __int64 _7__wrap23_low; // x9
  WarBoardAIRoute_RouteData_c *v327; // x0
  WarBoardAIRoute_RouteData_o *v328; // x21
  const MethodInfo *v329; // x1
  __int64 v330; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v331; // x8
  int32_t getEnumeratorRetType; // w9
  int32_t v333; // w10
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v334; // x9
  System_Collections_Generic_IEnumerable_TSource__o *dicBaseDIRange_5__18; // x21
  WarBoardAIRoute___c_c *v336; // x0
  struct WarBoardAIRoute___c_StaticFields *v337; // x8
  System_Func_T__TResult__o *_9__47_1; // x22
  Il2CppObject *v339; // x23
  struct WarBoardAIRoute___c_StaticFields *v340; // x0
  System_String_o *v341; // x2
  System_String_o *v342; // x3
  int32_t v343; // w4
  int32_t v344; // w5
  bool v345; // w6
  bool v346; // w7
  struct WarBoardAIRoute___c_StaticFields *v347; // x8
  System_Func_T__TResult__o *_9__47_2; // x23
  Il2CppObject *v349; // x24
  struct WarBoardAIRoute___c_StaticFields *v350; // x0
  System_String_o *v351; // x2
  System_String_o *v352; // x3
  int32_t v353; // w4
  int32_t v354; // w5
  bool v355; // w6
  bool v356; // w7
  __int64 v357; // x1
  System_String_o *v358; // x2
  System_String_o *v359; // x3
  int32_t v360; // w4
  int32_t v361; // w5
  bool v362; // w6
  bool v363; // w7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v364; // x21
  WarBoardAIRoute_RouteData_o *v365; // x0
  struct WarBoardSquareData_o *v366; // x1
  __int64 v367; // x0
  __int64 v368; // x1
  System_String_o *v369; // x2
  System_String_o *v370; // x3
  int32_t v371; // w4
  int32_t v372; // w5
  bool v373; // w6
  bool v374; // w7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v375; // x8
  WarBoardAIRoute_RouteData_o *v376; // x0
  struct WarBoardPieceData_o *v377; // x1
  __int64 v378; // x1
  System_String_o *v379; // x2
  System_String_o *v380; // x3
  int32_t v381; // w4
  int32_t v382; // w5
  bool v383; // w6
  bool v384; // w7
  WarBoardAIRoute_RouteData_o *v385; // x0
  const MethodInfo *v386; // x1
  __int64 v387; // x2
  WarBoardAIRoute_RouteData_o *v388; // x22
  int32_t v389; // w23
  WarBoardSquareData_o *v390; // x0
  System_String_o *v391; // x2
  System_String_o *v392; // x3
  int32_t v393; // w4
  int32_t v394; // w5
  bool v395; // w6
  bool v396; // w7
  __int64 v397; // x1
  System_Collections_Generic_Dictionary_uint__int__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v399; // x19
  bool v400; // cc
  const MethodInfo *v401; // x4
  System_Collections_Generic_Dictionary_uint__int__o *v402; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v404; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v405; // x8
  WarBoardAIRoute_RouteData_o *v406; // x22
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *MoveByTargetDistance; // x0
  __int64 v408; // x1
  System_String_o *v409; // x2
  System_String_o *v410; // x3
  int32_t v411; // w4
  int32_t v412; // w5
  bool v413; // w6
  bool v414; // w7
  WarBoardAIRoute_o *v415; // x0
  WarBoardPieceData_o *v416; // x1
  const MethodInfo *v417; // x4
  WarBoardAIRoute_RouteData_o *v418; // x21
  WarBoardPieceData_o *ActionPiece; // x0
  System_String_o *v420; // x2
  System_String_o *v421; // x3
  int32_t v422; // w4
  int32_t v423; // w5
  bool v424; // w6
  bool v425; // w7
  MissionNaviTransitionBoardItem_o *p_actionPiece; // x0
  __int64 v427; // x1
  System_String_o *v428; // x2
  System_String_o *v429; // x3
  int32_t v430; // w4
  int32_t v431; // w5
  bool v432; // w6
  bool v433; // w7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v434; // x8
  struct WarBoardPieceData_o *v435; // x9
  struct WarBoardPieceData_o *v436; // x10
  struct WarBoardPieceData_o *v437; // x8
  int v438; // w19
  System_Math_c *v439; // x0
  WarBoardAIRoute_RouteData_o *v440; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v441; // x9
  int v442; // w11
  struct WarBoardSquareData_o *baseSquare_5__11; // x10
  WarBoardData_o *v444; // x0
  WarBoardWallData_o *Wall; // x0
  WarBoardWallData_o *v446; // x21
  Il2CppObject *v447; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v448; // x9
  WarBoardPieceData_o *v449; // x0
  _BOOL8 v450; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v451; // x8
  WarBoardPieceData_o *v452; // x0
  WarBoardAIRoute_RouteData_o *v453; // x21
  WarBoardPieceData_o *v454; // x22
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v455; // x8
  WarBoardPieceData_o *v456; // x21
  _BOOL8 IsEnemyPiece; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v458; // x8
  WarBoardPieceData_o *v459; // x0
  _BOOL8 isMaster; // x0
  WarBoardPieceData_o *v461; // x0
  WarBoardAIRoute_RouteData_o *v462; // x8
  struct WarBoardPieceData_o *v463; // x9
  WarBoardPieceData_o *v464; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v465; // x8
  struct WarBoardPieceData_o *v466; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  int64_t flagNow; // x19
  __int64 ClassId; // x0
  __int64 v470; // x1
  struct WarBoardPieceData_o *v471; // x8
  int32_t v472; // w22
  BattleServantData_o *v473; // x0
  WarBoardAIRoute_o *v474; // x0
  const MethodInfo *v475; // x3
  int64_t FlagAdvantage; // x0
  __int64 v477; // x1
  const MethodInfo *v478; // x5
  WarBoardAIRoute_RouteData_o *v479; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v480; // x0
  System_String_o *v481; // x2
  System_String_o *v482; // x3
  int32_t v483; // w4
  int32_t v484; // w5
  bool v485; // w6
  bool v486; // w7
  WarBoardAIRoute__CreateRouteData_d__47_o *v487; // x0
  System_String_o *v488; // x2
  System_String_o *v489; // x3
  int32_t v490; // w4
  int32_t v491; // w5
  bool v492; // w6
  bool v493; // w7
  WarBoardAIRoute__CreateRouteData_d__47_o *v494; // x0
  System_String_o *v495; // x2
  System_String_o *v496; // x3
  int32_t v497; // w4
  int32_t v498; // w5
  bool v499; // w6
  bool v500; // w7
  WarBoardAIRoute__CreateRouteData_d__47_o *v501; // x0
  System_String_o *v502; // x2
  System_String_o *v503; // x3
  int32_t v504; // w4
  int32_t v505; // w5
  bool v506; // w6
  bool v507; // w7
  WarBoardAIRoute__CreateRouteData_d__47_o *v508; // x0
  System_String_o *v509; // x2
  System_String_o *v510; // x3
  int32_t v511; // w4
  int32_t v512; // w5
  bool v513; // w6
  bool v514; // w7
  WarBoardAIRoute__CreateRouteData_d__47_o *v515; // x0
  System_String_o *v516; // x2
  System_String_o *v517; // x3
  int32_t v518; // w4
  int32_t v519; // w5
  bool v520; // w6
  bool v521; // w7
  WarBoardAIRoute__CreateRouteData_d__47_o *v522; // x0
  System_String_o *v523; // x2
  System_String_o *v524; // x3
  int32_t v525; // w4
  int32_t v526; // w5
  bool v527; // w6
  bool v528; // w7
  WarBoardAIRoute__CreateRouteData_d__47_o *v529; // x0
  System_String_o *v530; // x2
  System_String_o *v531; // x3
  int32_t v532; // w4
  int32_t v533; // w5
  bool v534; // w6
  bool v535; // w7
  struct WarBoardPieceData_o *v536; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v537; // x8
  WarBoardPieceData_o *v538; // x22
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v539; // x9
  WarBoardPieceData_o *v540; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v541; // x9
  System_Collections_Generic_List_object__o *v542; // x0
  WarBoardPieceData_o *v543; // x22
  WarBoardPieceData_o *v544; // x21
  int32_t requiredCost_5__3; // w23
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v546; // x4
  const MethodInfo *v547; // x6
  const MethodInfo *v548; // x2
  int32_t MasterSquareIndexFromPlaceData; // w23
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v550; // x22
  System_Func_object__bool__o *v551; // x24
  DefenseAreaData_o *v552; // x0
  __int64 v553; // x1
  const MethodInfo *v554; // x3
  struct WarBoardAIRoute_AdvantagePieceData_o *v555; // x22
  System_Func_object__bool__o *v556; // x24
  struct DefenseAreaData_o *v557; // x24
  System_Int32_array *v558; // x0
  const MethodInfo *v559; // x4
  struct WarBoardAIRoute_AIRouteMasterData_o *v560; // x8
  _BOOL8 v561; // x0
  __int64 v562; // x1
  WarBoardAIRoute_RouteData_o *v563; // x22
  Il2CppObject *v564; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v565; // x9
  WarBoardPieceData_o *v566; // x0
  int64_t v567; // x8
  System_Collections_Generic_List_object__o *v568; // x24
  __int64 v569; // x0
  __int64 v570; // x1
  System_String_o *v571; // x2
  System_String_o *v572; // x3
  int32_t v573; // w4
  int32_t v574; // w5
  bool v575; // w6
  bool v576; // w7
  __int64 v577; // x0
  __int64 v578; // x1
  WarBoardAIRoute_RouteData_o *v579; // x22
  System_Collections_Generic_Dictionary_uint__int__o *v580; // x24
  System_String_o *v581; // x2
  System_String_o *v582; // x3
  int32_t v583; // w4
  int32_t v584; // w5
  bool v585; // w6
  bool v586; // w7
  __int64 v587; // x1
  System_Collections_Generic_Dictionary_int__uint__o *v588; // x0
  _BOOL8 v589; // x0
  __int64 v590; // x1
  __int64 v591; // x2
  const MethodInfo *v592; // x5
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v593; // x8
  struct WarBoardPieceData_o *v594; // x8
  uint32_t v595; // w22
  int32_t v596; // w25
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x24
  int32_t v598; // w26
  System_Collections_Generic_IEnumerable_TSource__o *v599; // x0
  __int64 v600; // x0
  __int64 v601; // x1
  WarBoardAIRoute_RouteData_o *v602; // x22
  System_Collections_Generic_List_int__o *v603; // x24
  __int64 v604; // x0
  __int64 v605; // x1
  System_String_o *v606; // x2
  System_String_o *v607; // x3
  int32_t v608; // w4
  int32_t v609; // w5
  bool v610; // w6
  bool v611; // w7
  WarBoardAIRoute_RouteData_o *v612; // x22
  System_Collections_Generic_Dictionary_int__bool__o *v613; // x24
  __int64 v614; // x0
  __int64 v615; // x1
  System_String_o *v616; // x2
  System_String_o *v617; // x3
  int32_t v618; // w4
  int32_t v619; // w5
  bool v620; // w6
  bool v621; // w7
  WarBoardAIRoute_RouteData_o *v622; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *v623; // x24
  __int64 v624; // x0
  __int64 v625; // x1
  System_String_o *v626; // x2
  System_String_o *v627; // x3
  int32_t v628; // w4
  int32_t v629; // w5
  bool v630; // w6
  bool v631; // w7
  __int64 v632; // x0
  __int64 v633; // x1
  WarBoardAIRoute_RouteData_o *v634; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v635; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v636; // x8
  WarBoardPieceData_o *v637; // x0
  __int64 IsBlockShortestRouteEnemyAndMaster; // x0
  __int64 v639; // x1
  const MethodInfo *v640; // x2
  const MethodInfo *v641; // x3
  const MethodInfo *v642; // x5
  long double v643; // q0
  WarBoardAIRoute__CreateRouteData_d__47_o *v644; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v645; // x9
  struct WarBoardPieceData_o *v646; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v647; // x10
  DefenseAreaData_o *v648; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v649; // x9
  struct WarBoardPieceData_o *v650; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v651; // x11
  int32_t v652; // w10
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v653; // x9
  struct WarBoardPieceData_o *v654; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v655; // x10
  int32_t v656; // w22
  WarBoardAIRoute_RouteData_o *v657; // x9
  int v658; // w10
  System_Collections_Generic_IEnumerable_TSource__o *v659; // x0
  __int64 v660; // x0
  int tmpFlagNow_5__12; // w10
  bool v662; // zf
  System_Collections_Generic_Dictionary_int__int__o *v663; // x0
  __int64 v664; // x1
  __int64 v665; // x2
  const MethodInfo *v666; // x5
  int32_t v667; // w23
  unsigned int v668; // w22
  int v669; // w28
  System_Collections_Generic_IEnumerable_TSource__o *v670; // x0
  __int64 v671; // x0
  __int64 v672; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x8
  int v674; // w9
  int32_t v675; // w2
  __int64 v676; // x0
  __int64 v677; // x1
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  __int64 v679; // x0
  __int64 v680; // x1
  struct System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  __int64 v682; // x1
  __int64 v683; // x2
  const MethodInfo *v684; // x5
  int32_t v685; // w22
  int32_t enemyMasterSquareIndex; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v687; // x0
  __int64 v688; // x0
  __int64 v689; // x1
  __int64 v690; // x2
  long double v691; // q0
  WarBoardAIRoute_RouteData_o *v692; // x19
  int32_t servantAndMasterRange_5__13; // w8
  bool v694; // zf
  int32_t v695; // w8
  System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *v696; // x0
  const MethodInfo *v697; // x3
  WarBoardAIRoute_o *v698; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v699; // x8
  const MethodInfo *v700; // x4
  struct WarBoardAIRoute_AIRouteMasterData_o *v701; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v702; // x8
  WarBoardPieceData_o *v703; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v704; // x9
  struct WarBoardPieceData_o *v705; // x9
  System_Collections_Generic_Dictionary_int__object__o *v706; // x0
  __int64 v707; // x1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v709; // x1
  __int64 v710; // x1
  __int64 v711; // x2
  const MethodInfo *v712; // x5
  int32_t currentKey; // w22
  int32_t v714; // w23
  System_Int32_array *v715; // x0
  __int64 v716; // x1
  struct WarBoardStageNpcEntity_o *v717; // x8
  __int64 v718; // x1
  __int64 v719; // x2
  long double v720; // q0
  WarBoardAIRoute_RouteData_o *v721; // x19
  System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *v722; // x0
  __int64 v723; // x1
  const MethodInfo *v724; // x3
  struct DefenseAreaData_o *v725; // x8
  __int64 v726; // x0
  __int64 v727; // x1
  long double v728; // q0
  System_Collections_Generic_Dictionary_int__object__o *v729; // x0
  __int64 v730; // x1
  __int64 v731; // x1
  __int64 v732; // x2
  const MethodInfo *v733; // x5
  bool v734; // w22
  int32_t v735; // w23
  int32_t v736; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v737; // x23
  const MethodInfo *v738; // x2
  WarBoardAIRoute_RouteData_o *v739; // x19
  WarBoardData_o *v740; // x0
  WarBoardEffectData_o *Effect; // x0
  __int64 v742; // x1
  System_Collections_Generic_List_int__o *v743; // x20
  __int64 v744; // x1
  System_Collections_Generic_List_object__o *v745; // x0
  _BOOL8 v746; // x0
  __int64 v747; // x1
  Il2CppObject *v748; // x22
  Il2CppClass *v749; // x0
  _BOOL8 v750; // x0
  __int64 monitor_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v753; // x9
  __int64 size; // x10
  WarBoardPieceData_o *v755; // x0
  __int64 v756; // x1
  WarBoardPieceData_o *v757; // x0
  _BOOL8 v758; // x0
  __int64 v759; // x1
  __int64 v760; // x0
  __int64 v761; // x1
  WarBoardPieceData_o *v762; // x0
  _BOOL8 v763; // x0
  __int64 v764; // x1
  const MethodInfo *v765; // x3
  _BOOL8 CanAcquireItem; // x0
  __int64 v767; // x1
  const MethodInfo *v768; // x4
  WarBoardAIRoute_RouteData_o *v769; // x8
  __int64 v770; // x9
  WarBoardPieceData_o *v771; // x0
  __int64 v772; // x1
  const MethodInfo *v773; // x3
  __int64 v774; // x1
  WarBoardAIRoute_RouteData_o *v775; // x8
  WarBoardPieceData_o *v776; // x0
  __int64 v777; // x1
  const MethodInfo *v778; // x3
  __int64 v779; // x1
  __int64 v780; // x0
  __int64 v781; // x1
  __int64 FlagOutOfWarningAreaToDistance; // x0
  __int64 v783; // x1
  WarBoardAIRoute_RouteData_o *v784; // x8
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x9
  struct WarBoardPieceData_o *v786; // x8
  System_Collections_Generic_Dictionary_int__object__o *piecePersonalityDic; // x0
  Il2CppObject *v788; // x22
  WarBoardAIEvalCalcurater_o *v789; // x20
  __int64 v790; // x0
  __int64 v791; // x1
  const MethodInfo *v792; // x1
  __int64 v793; // x1
  __int64 v794; // x2
  WarBoardAIRoute___c_c *v795; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v796; // x22
  struct WarBoardAIRoute___c_StaticFields *v797; // x8
  System_Func_object__object__o *_9__47_5; // x23
  Il2CppObject *v799; // x24
  struct WarBoardAIRoute___c_StaticFields *v800; // x0
  System_String_o *v801; // x2
  System_String_o *v802; // x3
  int32_t v803; // w4
  int32_t v804; // w5
  bool v805; // w6
  bool v806; // w7
  System_Collections_Generic_IEnumerable_T__o *v807; // x23
  System_Collections_Generic_List_object__o *v808; // x22
  __int64 v809; // x0
  __int64 v810; // x1
  WarBoardAIRoute_RouteData_o *v811; // x0
  __int64 v812; // x1
  const MethodInfo *v813; // x1
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x0
  __int64 v815; // x0
  int32_t v816; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v817; // x20
  Il2CppObject *v818; // x0
  Il2CppObject *v819; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v820; // x0
  System_String_o *v821; // x2
  System_String_o *v822; // x3
  int32_t v823; // w4
  int32_t v824; // w5
  bool v825; // w6
  bool v826; // w7
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // [xsp+10h] [xbp-1B0h]
  WarBoardAIRoute_o *_4__this; // [xsp+18h] [xbp-1A8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v829; // [xsp+20h] [xbp-1A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v830; // [xsp+50h] [xbp-170h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o **v831; // [xsp+78h] [xbp-148h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v832; // [xsp+80h] [xbp-140h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v833; // [xsp+B0h] [xbp-110h] BYREF
  __int128 v834; // [xsp+D0h] [xbp-F0h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v835; // [xsp+E0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v836; // [xsp+F0h] [xbp-D0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+118h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+120h] [xbp-A0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+128h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v840; // [xsp+130h] [xbp-90h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+148h] [xbp-78h] BYREF
  int32_t actionCount[2]; // [xsp+150h] [xbp-70h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v843; // [xsp+158h] [xbp-68h] BYREF

  v8 = this;
  v843 = this;
  if ( (byte_5935FB2 & 1) == 0 )
  {
    sub_21FFC50(&AStarSearch_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_21FFC50(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_21FFC50(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
    sub_21FFC50(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___91457784);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_21FFC50(&WarBoardAIRoute_RouteData_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__);
    sub_21FFC50(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__);
    sub_21FFC50(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__);
    sub_21FFC50(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__);
    sub_21FFC50(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__);
    sub_21FFC50(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
    sub_21FFC50(&WarBoardAIRoute___c_TypeInfo);
    sub_21FFC50(&WarBoardAIEvalCalcurater_TypeInfo);
    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)sub_21FFC50(&WarBoardAIManager_TypeInfo);
    byte_5935FB2 = 1;
  }
  *(_QWORD *)masterReplaceCount = 0;
  *(_QWORD *)actionCount = 0;
  *(_QWORD *)&v830.fields._getEnumeratorRetType = 0;
  v831 = &v843;
  _1__state = v8->fields.__1__state;
  memset(&v840, 0, sizeof(v840));
  value = 0;
  routeData = 0;
  route = 0;
  v834 = 0u;
  v835 = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v836, 0, 32);
  memset(&v833, 0, sizeof(v833));
  memset(&v832, 0, sizeof(v832));
  if ( _1__state == 2 )
  {
    servantAndEnemyRange_5__14 = v8->fields._servantAndEnemyRange_5__14;
    servantAndEnemyMasterRange_5__15 = v8->fields._servantAndEnemyMasterRange_5__15;
    v8->fields.__1__state = -4;
    if ( servantAndEnemyRange_5__14 < servantAndEnemyMasterRange_5__15 )
    {
LABEL_130:
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(v8, method);
      v292 = v843;
      *(_QWORD *)&v843->fields.__7__wrap24 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v292->fields.__7__wrap24, 0, v293, v294, v295, v296, v297, v298);
      goto LABEL_131;
    }
LABEL_116:
    v281 = *(__int64 **)&v8->fields.__7__wrap24;
    if ( !v281 )
      sub_21FFECC(this, method);
    v282 = *v281;
    v283 = *(unsigned __int16 *)(*v281 + 302);
    if ( *(_WORD *)(*v281 + 302) )
    {
      v284 = (int *)(*(_QWORD *)(v282 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v284 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v283;
        v284 += 4;
        if ( !v283 )
          goto LABEL_121;
      }
      v285 = v282 + 16LL * *v284 + 312;
    }
    else
    {
LABEL_121:
      v285 = sub_2237E2C(*(_QWORD *)&v8->fields.__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v286 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v285)(v281, *(_QWORD *)(v285 + 8));
    v8 = v843;
    if ( (v286 & 1) != 0 )
    {
      v287 = *(__int64 **)&v843->fields.__7__wrap24;
      if ( !v287 )
        sub_21FFECC(v286, method);
      v288 = *v287;
      v289 = *(unsigned __int16 *)(*v287 + 302);
      if ( *(_WORD *)(*v287 + 302) )
      {
        v290 = (int *)(*(_QWORD *)(v288 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v290 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          --v289;
          v290 += 4;
          if ( !v289 )
            goto LABEL_129;
        }
        v291 = v288 + 16LL * *v290 + 312;
      }
      else
      {
LABEL_129:
        v291 = sub_2237E2C(
                 *(_QWORD *)&v843->fields.__7__wrap24,
                 System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo,
                 0);
      }
      v300 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v291)(v287, *(_QWORD *)(v291 + 8));
      v301 = v843;
      v843->fields.__2__current = v300;
      v301 = (WarBoardAIRoute__CreateRouteData_d__47_o *)((char *)v301 + 24);
      ++LODWORD(v301->fields._baseSquare_5__11);
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v301, (int32_t)v300, v302, v303, v304, v305, v306, v307);
      v308 = 2;
      goto LABEL_136;
    }
    goto LABEL_130;
  }
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -3;
    goto LABEL_41;
  }
  result = 0;
  if ( _1__state )
    goto LABEL_132;
  v8->fields.__1__state = -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v12);
  monitor = (struct WarBoardData_o *)Instance[27].monitor;
  v20 = v843;
  v843->fields._warBoardData_5__2 = monitor;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v20->fields._warBoardData_5__2,
    (int32_t)monitor,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !_4__this )
    sub_21FFECC(v21, method);
  npcData = _4__this->fields.npcData;
  if ( !npcData )
    sub_21FFECC(v21, method);
  searchDepth = npcData->fields.searchDepth;
  if ( !searchDepth )
  {
    searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
    npcData->fields.searchDepth = searchDepth;
  }
  v25 = v843;
  v26 = v843->fields.searchCount + 1;
  v843->fields.searchCount = v26;
  if ( v26 > searchDepth )
    goto LABEL_131;
  routeDataList = v25->fields.routeDataList;
  *(_QWORD *)masterReplaceCount = 0;
  *(_QWORD *)actionCount = 0;
  WarBoardAIRoute__GetRouteDataActionList(
    v21,
    routeDataList,
    &actionCount[1],
    actionCount,
    &masterReplaceCount[1],
    masterReplaceCount,
    v22);
  v28 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
  v29 = masterReplaceCount[1] * _4__this->fields.masterMoveCost
      + (actionCount[0] + 2 * actionCount[1]) * _4__this->fields.moveCost
      + masterReplaceCount[0] * (_4__this->fields.masterMoveCost + _4__this->fields.moveCost);
  v843->fields._requiredCost_5__3 = v29;
  v30 = SingletonMonoBehaviour_object___get_Instance(v28);
  if ( !v30 )
    sub_21FFECC(0, method);
  if ( v29 >= SHIDWORD(v30[47].klass) )
  {
LABEL_131:
    result = 0;
    goto LABEL_132;
  }
  MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v843->fields.piecePlaceData, v31);
  v33 = v843->fields.piecePlaceData;
  v843->fields._masterSquareIndex_5__4 = MasterSquareIndex;
  AllyPutSquareIndicesWithoutMaster = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                        _4__this,
                                        v33,
                                        MasterSquareIndex,
                                        v34);
  v36 = v843;
  v843->fields._allyPieceIndexs_5__5 = AllyPutSquareIndicesWithoutMaster;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v36->fields._allyPieceIndexs_5__5,
    (int32_t)AllyPutSquareIndicesWithoutMaster,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (MissionNaviTransitionBoardItem_o *)v843;
  v843->fields._defenseAreaData_5__7 = 0;
  v43 = (MissionNaviTransitionBoardItem_o *)((char *)v43 + 104);
  *(_QWORD *)&v43[-1].fields._BoardType_k__BackingField = 1;
  sub_21FFBF4(v43, 0, v44, v45, v46, v47, v48, v49);
  warBoardData_5__2 = v843->fields._warBoardData_5__2;
  if ( !warBoardData_5__2 )
    sub_21FFECC(v50, v51);
  masterExistsForce = warBoardData_5__2->fields.masterExistsForce;
  if ( !masterExistsForce )
    sub_21FFECC(0, v51);
  v54 = System_Collections_Generic_List_int___Contains(
          masterExistsForce,
          _4__this->fields.forceId,
          (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
  v57 = v843;
  if ( (v54 & 1) != 0 )
  {
    if ( v843 )
    {
      v843->fields._masterExists_5__8 = 1;
LABEL_25:
      DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                          _4__this,
                          v57->fields._masterSquareIndex_5__4,
                          v57->fields._allyPieceIndexs_5__5,
                          v57->fields.piecePlaceData,
                          v56);
      v63 = v843;
      v843->fields._defenseAreaData_5__7 = DefenseAreaData;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v63->fields._defenseAreaData_5__7,
        (int32_t)DefenseAreaData,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
      v73 = v843;
      defenseAreaData_5__7 = v843->fields._defenseAreaData_5__7;
      if ( !defenseAreaData_5__7 )
        sub_21FFECC(v70, v71);
      v843->fields._baseFlag_5__6 |= defenseAreaData_5__7->fields._Flag_k__BackingField;
      aiRouteMasterData = _4__this->fields.aiRouteMasterData;
      if ( !aiRouteMasterData )
        sub_21FFECC(v70, v71);
      IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                               defenseAreaData_5__7->fields._ShortestRoutes_k__BackingField,
                                               v73->fields.piecePlaceData,
                                               aiRouteMasterData->fields.masterType == 1,
                                               v72);
      v57 = v843;
      if ( IsAllBlockShortestRouteEnemyAndMastr )
        v843->fields._baseFlag_5__6 |= 0x20000000uLL;
      goto LABEL_29;
    }
LABEL_330:
    sub_21FFECC(v54, v55);
  }
  v60 = _4__this->fields.aiRouteMasterData;
  if ( !v60 )
    sub_21FFECC(v54, v55);
  if ( !v843 )
    goto LABEL_330;
  masterType = v60->fields.masterType;
  v843->fields._masterExists_5__8 = masterType != 3;
  if ( masterType != 3 )
    goto LABEL_25;
LABEL_29:
  v77 = v57->fields.piecePlaceData;
  if ( !v77 )
    sub_21FFECC(0, v55);
  System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
    &v830,
    v77,
    (const MethodInfo_3F72994 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
  current = v830.fields._current;
  v79 = v843;
  *(_OWORD *)&v829.fields._dictionary = *(_OWORD *)&v830.fields._dictionary;
  v829.fields._current = v830.fields._current;
  *(_OWORD *)&v843->fields.__7__wrap8.fields._dictionary = *(_OWORD *)&v830.fields._dictionary;
  v79->fields.__7__wrap8.fields._current = current;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v79->fields.__7__wrap8, 0, v80, v81, v82, v83, v84, v85);
  v843->fields.__1__state = -3;
  do
  {
LABEL_42:
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
            &v843->fields.__7__wrap8,
            (const MethodInfo_41269B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
    {
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v843, v88);
      v245 = v843;
      searchCount = v843->fields.searchCount;
      *(_OWORD *)&v843->fields.__7__wrap8.fields._dictionary = 0u;
      v245->fields.__7__wrap8.fields._current = 0u;
      if ( searchCount == 1 )
      {
        if ( !_4__this )
          sub_21FFECC(v243, method);
        dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        v248 = WarBoardAIRoute___c_TypeInfo;
        if ( !*(&WarBoardAIRoute___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo, method, v244);
          v248 = WarBoardAIRoute___c_TypeInfo;
        }
        static_fields = v248->static_fields;
        _9__47_6 = (System_Func_T__TResult__o *)static_fields->__9__47_6;
        if ( !_9__47_6 )
        {
          if ( !*(&v248->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v248, method, v244);
            static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          }
          v251 = (Il2CppObject *)static_fields->__9;
          _9__47_6 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v251,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            0);
          v252 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v252->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v252->__9__47_6,
            (int32_t)_9__47_6,
            v253,
            v254,
            v255,
            v256,
            v257,
            v258);
        }
        v260 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__float___float_(
                 dictionaryCreateRouteDataEvalValue,
                 (System_Func_TSource__TKey__o *)_9__47_6,
                 (const MethodInfo_38559EC *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v843->fields._servantAndEnemyMasterRange_5__15 = 0;
        v261 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v261 )
          sub_21FFECC(0, v259);
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v261,
                  (const MethodInfo_3FD3E34 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v264 = _4__this->fields.npcData;
        if ( !v264 )
          sub_21FFECC(Count, v263);
        v265 = v843;
        v266 = (float)((float)v264->fields.calcEllipsis / 100.0) * (float)(int)Count;
        if ( v266 == INFINITY )
          v267 = 0x80000000;
        else
          v267 = (int)v266;
        v843->fields._servantAndEnemyRange_5__14 = v267;
        calcEllipsisMin = v264->fields.calcEllipsisMin;
        if ( calcEllipsisMin <= v267 )
          calcEllipsisMin = v267;
        v265->fields._servantAndEnemyRange_5__14 = calcEllipsisMin;
        if ( !v260 )
          sub_21FFECC(Count, v263);
        klass = v260->klass;
        v270 = *(unsigned __int16 *)&v260->klass->_2.rank;
        if ( *(_WORD *)&v260->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            --v270;
            p_offset += 4;
            if ( !v270 )
              goto LABEL_111;
          }
          v272 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_111:
          v272 = sub_2237E2C(v260, System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo, 0);
        }
        v273 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v272)(
                 v260,
                 *(_QWORD *)(v272 + 8));
        v274 = v843;
        *(_QWORD *)&v843->fields.__7__wrap24 = v273;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v274->fields.__7__wrap24,
          v273,
          v275,
          v276,
          v277,
          v278,
          v279,
          v280);
        v8 = v843;
        v843->fields.__1__state = -4;
        goto LABEL_116;
      }
      goto LABEL_131;
    }
    key = (int32_t)v843->fields.__7__wrap8.fields._current.fields.key;
    key_high = HIDWORD(v843->fields.__7__wrap8.fields._current.fields.key);
    v91 = (Il2CppObject *)sub_21FFEBC(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
    System_Object___ctor(v91, 0);
    v92 = v843;
    v843->fields.__8__1 = (struct WarBoardAIRoute___c__DisplayClass47_0_o *)v91;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v92->fields.__8__1, (int32_t)v91, v93, v94, v95, v96, v97, v98);
    v101 = WarBoardAIManager_TypeInfo;
    v843->fields.__7__wrap8.fields._getEnumeratorRetType = key;
    if ( !*(&v101->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v101, v99, v100);
    Square = WarBoardAIManager__GetSquare(key, v99);
    v103 = v843;
    *(_QWORD *)&v843->fields._baseSquareIndex_5__10 = Square;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v103->fields._baseSquareIndex_5__10,
      (int32_t)Square,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
    _8__1 = v843->fields.__8__1;
    PieceUnique = WarBoardAIManager__GetPieceUnique(key_high, v111);
    if ( !_8__1 )
      sub_21FFECC(PieceUnique, PieceUnique);
    _8__1->fields.basePiece = PieceUnique;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&_8__1->fields,
      (int32_t)PieceUnique,
      v113,
      v114,
      v115,
      v116,
      v117,
      v118);
    v122 = v843;
    baseFlag_5__6 = v843->fields._baseFlag_5__6;
    v124 = v843->fields.__8__1;
    v843->fields._servantAndMasterRange_5__13 = -1;
    v122->fields._tmpFlagNow_5__12 = -1;
    v122->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
    if ( !v124 )
      sub_21FFECC(v119, v120);
    if ( !_4__this )
      sub_21FFECC(0, v120);
    v125 = (struct WarBoardSquareData_o *)(WarBoardAIRoute__GetFlagAroundSquareCheck(
                                             _4__this,
                                             *(WarBoardSquareData_o **)&v122->fields._baseSquareIndex_5__10,
                                             v124->fields.basePiece,
                                             v122->fields.piecePlaceData,
                                             v122->fields._masterSquareIndex_5__4,
                                             v121)
                                         | baseFlag_5__6);
    v126 = System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo;
    v127 = v843->fields.routeDataList;
    v128 = (Il2CppObject *)v843->fields.__8__1;
    v843->fields._baseSquare_5__11 = v125;
    v129 = (System_Func_object__bool__o *)sub_21FFEBC(v126);
    System_Func_object__bool____ctor(
      v129,
      v128,
      Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
      0);
    v131 = System_Linq_Enumerable__Count_object__59013780(
             (System_Collections_Generic_IEnumerable_TSource__o *)v127,
             (System_Func_TSource__bool__o *)v129,
             (const MethodInfo_3847A94 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    v132 = (System_Collections_Generic_List_object__o *)v843->fields.routeDataList;
    v843->fields._servantAndEnemyRange_5__14 = v131;
    if ( !v132 )
      sub_21FFECC(0, v130);
    Only = (WarBoardAIRoute_o *)System_Collections_Generic_List_object___AsReadOnly(
                                  v132,
                                  (const MethodInfo_444FD58 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
    v136 = v843->fields.__8__1;
    if ( !v136 )
      sub_21FFECC(Only, v134);
    RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                Only,
                                (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                v136->fields.basePiece,
                                v135);
    v140 = v843;
    v141 = v843->fields.__8__1;
    v843->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
    if ( !v141 )
      sub_21FFECC(RouteSumPieceActionCost, v138);
    IsActable = WarBoardAIRoute__IsActable(
                  _4__this,
                  v141->fields.basePiece,
                  v140->fields._servantAndEnemyRange_5__14,
                  v140->fields._requiredCost_5__3,
                  RouteSumPieceActionCost,
                  v139);
  }
  while ( !IsActable );
  v145 = v843->fields.__8__1;
  if ( !v145 )
    sub_21FFECC(IsActable, v143);
  DesignationItemToDistance = WarBoardAIRoute__GetDesignationItemToDistance(
                                _4__this,
                                v145->fields.basePiece,
                                v843->fields.routeDataList,
                                v843->fields.__7__wrap8.fields._getEnumeratorRetType,
                                v144);
  v147 = v843;
  *(_QWORD *)&v843->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v147->fields._sumPieceActionCost_5__17,
    (int32_t)DesignationItemToDistance,
    v148,
    v149,
    v150,
    v151,
    v152,
    v153);
  v157 = v843->fields.__8__1;
  if ( !v157 )
    sub_21FFECC(v154, v155);
  TargetToDistance_44760952 = (struct System_Collections_Generic_Dictionary_int__int__o *)WarBoardAIRoute__GetTargetToDistance_44760952(
                                                                                            _4__this,
                                                                                            v157->fields.basePiece,
                                                                                            v843->fields.routeDataList,
                                                                                            v843->fields.__7__wrap8.fields._getEnumeratorRetType,
                                                                                            v156);
  v159 = v843;
  v843->fields._dicBaseDIRange_5__18 = TargetToDistance_44760952;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v159->fields._dicBaseDIRange_5__18,
    (int32_t)TargetToDistance_44760952,
    v160,
    v161,
    v162,
    v163,
    v164,
    v165);
  AllEnemyToDistance = WarBoardAIRoute__GetAllEnemyToDistance(
                         _4__this,
                         v166,
                         v843->fields.__7__wrap8.fields._getEnumeratorRetType,
                         (int32_t *)&v843->fields._tmpFlagNow_5__12 + 1,
                         &v843->fields._servantAndMasterRange_5__13,
                         v167);
  v169 = v843;
  v843->fields._dicKeyPutIndexValueTargetData_5__19 = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)AllEnemyToDistance;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v169->fields._dicKeyPutIndexValueTargetData_5__19,
    (int32_t)AllEnemyToDistance,
    v170,
    v171,
    v172,
    v173,
    v174,
    v175);
  v176 = v843;
  v843->fields._dicEnemyRange_5__20 = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v176->fields._dicEnemyRange_5__20,
    0,
    v177,
    v178,
    v179,
    v180,
    v181,
    v182);
  v185 = v843->fields.__8__1;
  if ( !v185 )
    sub_21FFECC(v183, v184);
  basePiece = v185->fields.basePiece;
  if ( !basePiece )
    sub_21FFECC(0, v184);
  isServant = WarBoardPieceData__get_isServant(basePiece, 0);
  if ( isServant )
  {
    v190 = v843->fields.__8__1;
    if ( !v190 )
      sub_21FFECC(isServant, v188);
    AdvantagePieceData = WarBoardAIRoute__GetAdvantagePieceData(
                           _4__this,
                           v190->fields.basePiece,
                           v843->fields.__7__wrap8.fields._getEnumeratorRetType,
                           v189);
    v192 = v843;
    v843->fields._dicEnemyRange_5__20 = (struct System_Collections_Generic_Dictionary_uint__int__o *)AdvantagePieceData;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v192->fields._dicEnemyRange_5__20,
      (int32_t)AdvantagePieceData,
      v193,
      v194,
      v195,
      v196,
      v197,
      v198);
    if ( v843->fields._masterExists_5__8 )
    {
      masterSquareIndex_5__4 = v843->fields._masterSquareIndex_5__4;
      if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v199, v200);
      v203 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                    0,
                                                                    key,
                                                                    masterSquareIndex_5__4,
                                                                    0,
                                                                    0,
                                                                    v201);
      v204 = System_Linq_Enumerable__Count_int_(
               v203,
               (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
      v207 = v843;
      v208 = v843->fields.__8__1;
      LODWORD(v843->fields._tmpFlagNow_5__12) = v204;
      if ( !v208 )
        sub_21FFECC(v204, v205);
      v209 = v208->fields.basePiece;
      if ( !v209 )
        sub_21FFECC(v204, v205);
      v210 = _4__this->fields.aiRouteMasterData;
      if ( !v210 )
        sub_21FFECC(v204, v205);
      v211 = v210->fields.masterType;
      index_k__BackingField = v209->fields._index_k__BackingField;
      if ( v211 != 2 || v210->fields.masterPieceIndex != index_k__BackingField )
      {
        v213 = _4__this->fields.npcData;
        if ( !v213 )
          sub_21FFECC(v204, v205);
        if ( v213->fields.defenseArea > (int)v204 )
          v207->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v207->fields._baseSquare_5__11
                                                                         | 0x800);
        if ( (v211 != 2 || v210->fields.masterPieceIndex != index_k__BackingField)
          && WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
               v207->fields._defenseAreaData_5__7,
               v207->fields.__7__wrap8.fields._getEnumeratorRetType,
               v211 == 1,
               v206) )
        {
          v843->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v843->fields._baseSquare_5__11
                                                                         | 0x80000000);
        }
      }
    }
  }
  v214 = (System_Collections_Generic_HashSet_object__o *)sub_21FFEBC(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v214,
    (const MethodInfo_4286740 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
  v215 = v843;
  v843->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v214;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v215->fields._advantagePieceData_5__21,
    (int32_t)v214,
    v216,
    v217,
    v218,
    v219,
    v220,
    v221);
  v222 = (System_Collections_Generic_HashSet_object__o *)sub_21FFEBC(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v222,
    (const MethodInfo_4286740 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
  v223 = v843;
  v843->fields._basePieceActionPieceRouteList_5__22 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)v222;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v223->fields._basePieceActionPieceRouteList_5__22,
    (int32_t)v222,
    v224,
    v225,
    v226,
    v227,
    v228,
    v229);
  v231 = (System_Collections_Generic_List_object__o *)v843->fields.routeDataList;
  if ( !v231 )
    sub_21FFECC(0, v230);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v829,
    v231,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  *(_OWORD *)&v840.fields._list = *(_OWORD *)&v829.fields._dictionary;
  v840.fields._current = v829.fields._current.fields.key;
  v829.fields._dictionary = 0;
  *(_QWORD *)&v829.fields._version = &v840;
  while ( 1 )
  {
    v232 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v840,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v232 )
      break;
    v234 = v840.fields._current;
    if ( !v840.fields._current )
      sub_21FFECC(v232, v233);
    if ( LODWORD(v840.fields._current[1].monitor) != HIDWORD(v840.fields._current[1].monitor) )
    {
      v235 = v840.fields._current[3].klass;
      if ( !v235 )
        sub_21FFECC(v232, v233);
      v236 = v843->fields.__8__1;
      if ( !v236 )
        sub_21FFECC(v232, v233);
      v237 = v236->fields.basePiece;
      if ( !v237 )
        sub_21FFECC(v232, v233);
      if ( HIDWORD(v235->_1.namespaze) == v237->fields._index_k__BackingField )
      {
        basePieceActionPieceRouteList_5__22 = v843->fields._basePieceActionPieceRouteList_5__22;
        if ( !basePieceActionPieceRouteList_5__22 )
          sub_21FFECC(0, v233);
        v232 = System_Collections_Generic_HashSet_object___Add(
                 (System_Collections_Generic_HashSet_object__o *)basePieceActionPieceRouteList_5__22,
                 v840.fields._current,
                 (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
      }
      if ( (BYTE3(v234[1].klass) & 4) != 0 )
      {
        v239 = v234[3].monitor;
        if ( !v239 )
          sub_21FFECC(v232, v233);
        v240 = v843->fields.__8__1;
        if ( !v240 )
          sub_21FFECC(v232, v233);
        v241 = v240->fields.basePiece;
        if ( !v241 )
          sub_21FFECC(v232, v233);
        if ( v239[7] == v241->fields._index_k__BackingField )
        {
          advantagePieceData_5__21 = v843->fields._advantagePieceData_5__21;
          if ( !advantagePieceData_5__21 )
            sub_21FFECC(0, v233);
          System_Collections_Generic_HashSet_object___Add(
            (System_Collections_Generic_HashSet_object__o *)advantagePieceData_5__21,
            v234,
            (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v840,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
  v310 = *(WarBoardSquareData_o **)&v843->fields._baseSquareIndex_5__10;
  if ( !v310 )
    sub_21FFECC(0, v309);
  MyAndLinkedSquareIndecies = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)WarBoardSquareData__GetMyAndLinkedSquareIndecies(v310, 0);
  v312 = v843;
  v843->fields._basePieceBasePieceRouteList_5__23 = MyAndLinkedSquareIndecies;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v312->fields._basePieceBasePieceRouteList_5__23,
    (int32_t)MyAndLinkedSquareIndecies,
    v313,
    v314,
    v315,
    v316,
    v317,
    v318);
  v86 = v843;
  v87 = 0;
  LODWORD(v843->fields.__7__wrap23) = 0;
  while ( 2 )
  {
    basePieceBasePieceRouteList_5__23 = v86->fields._basePieceBasePieceRouteList_5__23;
    p_basePieceBasePieceRouteList_5__23 = (MissionNaviTransitionBoardItem_o *)&v86->fields._basePieceBasePieceRouteList_5__23;
    v320 = basePieceBasePieceRouteList_5__23;
    if ( !basePieceBasePieceRouteList_5__23 )
      sub_21FFECC(p_basePieceBasePieceRouteList_5__23, method);
    if ( v87 >= SLODWORD(v320->fields._slots) )
    {
      p_basePieceBasePieceRouteList_5__23->klass = 0;
      sub_21FFBF4(p_basePieceBasePieceRouteList_5__23, 0, v2, v3, (int32_t)v4, (int32_t)v5, v6, v7);
      v480 = v843;
      v843->fields.__8__1 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v480->fields.__8__1, 0, v481, v482, v483, v484, v485, v486);
      v487 = v843;
      *(_QWORD *)&v843->fields._baseSquareIndex_5__10 = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v487->fields._baseSquareIndex_5__10,
        0,
        v488,
        v489,
        v490,
        v491,
        v492,
        v493);
      v494 = v843;
      *(_QWORD *)&v843->fields._sumPieceActionCost_5__17 = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v494->fields._sumPieceActionCost_5__17,
        0,
        v495,
        v496,
        v497,
        v498,
        v499,
        v500);
      v501 = v843;
      v843->fields._dicBaseDIRange_5__18 = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v501->fields._dicBaseDIRange_5__18,
        0,
        v502,
        v503,
        v504,
        v505,
        v506,
        v507);
      v508 = v843;
      v843->fields._dicKeyPutIndexValueTargetData_5__19 = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v508->fields._dicKeyPutIndexValueTargetData_5__19,
        0,
        v509,
        v510,
        v511,
        v512,
        v513,
        v514);
      v515 = v843;
      v843->fields._dicEnemyRange_5__20 = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v515->fields._dicEnemyRange_5__20,
        0,
        v516,
        v517,
        v518,
        v519,
        v520,
        v521);
      v522 = v843;
      v843->fields._advantagePieceData_5__21 = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v522->fields._advantagePieceData_5__21,
        0,
        v523,
        v524,
        v525,
        v526,
        v527,
        v528);
      v529 = v843;
      v843->fields._basePieceActionPieceRouteList_5__22 = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v529->fields._basePieceActionPieceRouteList_5__22,
        0,
        v530,
        v531,
        v532,
        v533,
        v534,
        v535);
      goto LABEL_42;
    }
    v322 = sub_21FFEBC(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v322, 0);
    v325 = v843->fields._basePieceBasePieceRouteList_5__23;
    if ( !v325 )
      sub_21FFECC(v323, v324);
    _7__wrap23_low = SLODWORD(v843->fields.__7__wrap23);
    if ( (unsigned int)_7__wrap23_low >= LODWORD(v325->fields._slots) )
      sub_21FFED4(v323);
    if ( !v322 )
      sub_21FFECC(v323, v324);
    v327 = WarBoardAIRoute_RouteData_TypeInfo;
    *(_DWORD *)(v322 + 16) = *(&v325->fields._count + _7__wrap23_low);
    v328 = (WarBoardAIRoute_RouteData_o *)sub_21FFEBC(v327);
    WarBoardAIRoute_RouteData___ctor(v328, v329);
    routeData = v328;
    if ( !v328 )
      sub_21FFECC(v330, method);
    v331 = v843;
    getEnumeratorRetType = v843->fields.__7__wrap8.fields._getEnumeratorRetType;
    v328->fields.baseIndex = getEnumeratorRetType;
    v333 = *(_DWORD *)(v322 + 16);
    v328->fields.actionIndex = v333;
    if ( getEnumeratorRetType == v333 )
    {
      v334 = v331->fields.routeDataList;
      if ( !v334 )
        sub_21FFECC(v330, method);
      if ( v334->fields._size > 0 )
        goto LABEL_41;
    }
    dicBaseDIRange_5__18 = (System_Collections_Generic_IEnumerable_TSource__o *)v331->fields._dicBaseDIRange_5__18;
    v336 = WarBoardAIRoute___c_TypeInfo;
    if ( !*(&WarBoardAIRoute___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo, method, v2);
      v336 = WarBoardAIRoute___c_TypeInfo;
    }
    v337 = v336->static_fields;
    _9__47_1 = (System_Func_T__TResult__o *)v337->__9__47_1;
    if ( !_9__47_1 )
    {
      if ( !*(&v336->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v336, method, v2);
        v337 = WarBoardAIRoute___c_TypeInfo->static_fields;
      }
      v339 = (Il2CppObject *)v337->__9;
      _9__47_1 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
      System_Func_KeyValuePair_long__object___long____ctor(
        _9__47_1,
        v339,
        Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
        0);
      v340 = WarBoardAIRoute___c_TypeInfo->static_fields;
      v340->__9__47_1 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)_9__47_1;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v340->__9__47_1,
        (int32_t)_9__47_1,
        v341,
        v342,
        v343,
        v344,
        v345,
        v346);
      v336 = WarBoardAIRoute___c_TypeInfo;
    }
    if ( !*(&v336->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v336, method, v2);
      v336 = WarBoardAIRoute___c_TypeInfo;
    }
    v347 = v336->static_fields;
    _9__47_2 = (System_Func_T__TResult__o *)v347->__9__47_2;
    if ( !_9__47_2 )
    {
      if ( !*(&v336->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v336, method, v2);
        v347 = WarBoardAIRoute___c_TypeInfo->static_fields;
      }
      v349 = (Il2CppObject *)v347->__9;
      _9__47_2 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
      System_Func_KeyValuePair_long__object___object____ctor(
        _9__47_2,
        v349,
        Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
        0);
      v350 = WarBoardAIRoute___c_TypeInfo->static_fields;
      v350->__9__47_2 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)_9__47_2;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v350->__9__47_2,
        (int32_t)_9__47_2,
        v351,
        v352,
        v353,
        v354,
        v355,
        v356);
    }
    v364 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__object___long__object_(
                                                                                          dicBaseDIRange_5__18,
                                                                                          (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                          (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                          (const MethodInfo_3868D64 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
    v365 = routeData;
    if ( !routeData )
      sub_21FFECC(0, v357);
    v366 = *(struct WarBoardSquareData_o **)&v843->fields._baseSquareIndex_5__10;
    routeData->fields.baseSquare = v366;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v365->fields.baseSquare,
      (int32_t)v366,
      v358,
      v359,
      v360,
      v361,
      v362,
      v363);
    v375 = v843->fields.__8__1;
    if ( !v375 )
      sub_21FFECC(v367, v368);
    v376 = routeData;
    if ( !routeData )
      sub_21FFECC(0, v368);
    v377 = v375->fields.basePiece;
    routeData->fields.basePiece = v377;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v376->fields.basePiece,
      (int32_t)v377,
      v369,
      v370,
      v371,
      v372,
      v373,
      v374);
    v385 = routeData;
    if ( !routeData )
      sub_21FFECC(0, v378);
    routeData->fields.actionPiece = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v385->fields.actionPiece, 0, v379, v380, v381, v382, v383, v384);
    v388 = routeData;
    v389 = *(_DWORD *)(v322 + 16);
    if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v386, v387);
    v390 = WarBoardAIManager__GetSquare(v389, v386);
    if ( !v388 )
      sub_21FFECC(v390, v390);
    v388->fields.actionSquare = v390;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v388->fields.actionSquare,
      (int32_t)v390,
      v391,
      v392,
      v393,
      v394,
      v395,
      v396);
    dicKeyPutIndexValueTargetData_5__19 = (System_Collections_Generic_Dictionary_uint__int__o *)v843->fields._dicKeyPutIndexValueTargetData_5__19;
    if ( !dicKeyPutIndexValueTargetData_5__19 )
      sub_21FFECC(0, v397);
    v399 = routeData;
    v400 = System_Collections_Generic_Dictionary_uint__int___get_Count(
             dicKeyPutIndexValueTargetData_5__19,
             (const MethodInfo_4018348 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0;
    v54 = 0x7FFFFFFF;
    if ( !v400 )
    {
      v402 = (System_Collections_Generic_Dictionary_uint__int__o *)v843->fields._dicKeyPutIndexValueTargetData_5__19;
      if ( !v402 )
        sub_21FFECC(0, v55);
      Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                 v402,
                 (const MethodInfo_40184B4 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
      v54 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0);
    }
    if ( !v399 )
      goto LABEL_330;
    v404 = v843;
    v399->fields.EnemyRangeMin = v54;
    v405 = v404->fields.__8__1;
    if ( !v405 )
      sub_21FFECC(v54, v55);
    if ( !_4__this )
      sub_21FFECC(v54, v55);
    v406 = routeData;
    MoveByTargetDistance = WarBoardAIRoute__GetMoveByTargetDistance(
                             (WarBoardAIRoute_o *)v54,
                             v364,
                             *(_DWORD *)(v322 + 16),
                             v405->fields.basePiece,
                             v401);
    if ( !v406 )
      sub_21FFECC(MoveByTargetDistance, v408);
    v406->fields.dicPutIndexTargetData = v364;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v406->fields.dicPutIndexTargetData,
      (int32_t)v364,
      v409,
      v410,
      v411,
      v412,
      v413,
      v414);
    if ( !v843->fields.__8__1 )
      sub_21FFECC(v415, v416);
    v418 = routeData;
    ActionPiece = WarBoardAIRoute__GetActionPiece(v415, v416, *(_DWORD *)(v322 + 16), v843->fields.piecePlaceData, v417);
    if ( !v418 )
      sub_21FFECC(ActionPiece, ActionPiece);
    v418->fields.actionPiece = ActionPiece;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v418->fields.actionPiece,
      (int32_t)ActionPiece,
      v420,
      v421,
      v422,
      v423,
      v424,
      v425);
    v434 = v843->fields.__8__1;
    if ( !v434 )
      sub_21FFECC(p_actionPiece, v427);
    v435 = v434->fields.basePiece;
    if ( !v435 )
      sub_21FFECC(p_actionPiece, v427);
    if ( v435->fields._nowSquareIndex_k__BackingField == *(_DWORD *)(v322 + 16) )
    {
      if ( !routeData )
        sub_21FFECC(0, v427);
      p_actionPiece = (MissionNaviTransitionBoardItem_o *)&routeData->fields.actionPiece;
      v436 = routeData->fields.actionPiece;
      if ( v436 )
      {
        if ( v436->fields._uniqueIndex_k__BackingField == v435->fields._uniqueIndex_k__BackingField )
        {
          p_actionPiece->klass = 0;
          sub_21FFBF4(p_actionPiece, 0, v428, v429, v430, v431, v432, v433);
          v434 = v843->fields.__8__1;
          if ( !v434 )
            sub_21FFECC(p_actionPiece, v427);
        }
      }
    }
    v437 = v434->fields.basePiece;
    if ( !v437 )
      sub_21FFECC(p_actionPiece, v427);
    v438 = v437->fields._limitActionCount_k__BackingField - v437->fields._currentActionCount_k__BackingField;
    if ( !byte_5932DF6 )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_5932DF6 = 1;
    }
    v439 = System_Math_TypeInfo;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v427, v428);
    v440 = routeData;
    if ( !routeData )
      sub_21FFECC(v439, v427);
    v441 = v843;
    if ( v438 >= 0 )
      v442 = v438;
    else
      v442 = -v438;
    routeData->fields.actionCountOnThisTurn = v442 + v843->fields._servantAndEnemyRange_5__14 + 1;
    baseSquare_5__11 = v441->fields._baseSquare_5__11;
    *(_QWORD *)&v440->fields.attackByLinkedEnemy = 0;
    v440->fields.flagNow = (int64_t)baseSquare_5__11;
    v444 = v441->fields._warBoardData_5__2;
    if ( !v444 )
      sub_21FFECC(0, v427);
    Wall = WarBoardData__GetWall(v444, *(_DWORD *)(v322 + 16), 0, (const MethodInfo *)v429);
    v446 = Wall;
    if ( Wall )
    {
      v447 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !v447 )
        sub_21FFECC(0, method);
      if ( SHIDWORD(v447[47].klass) < _4__this->fields.wallAttackCost + v843->fields._requiredCost_5__3 )
        goto LABEL_41;
      v448 = v843->fields.__8__1;
      if ( !v448 )
        sub_21FFECC(v447, method);
      v449 = v448->fields.basePiece;
      if ( !v449 )
        sub_21FFECC(0, method);
      v450 = WarBoardPieceData__EnableWallAttack(v449, v843->fields._servantAndEnemyMasterRange_5__15, 0);
      if ( !v450 )
        goto LABEL_41;
      v451 = v843->fields.__8__1;
      if ( !v451 )
        sub_21FFECC(v450, method);
      v452 = v451->fields.basePiece;
      if ( !v452 )
        sub_21FFECC(0, method);
      Wall = (WarBoardWallData_o *)WarBoardPieceData__CheckWallAttackCond(v452, v446, 0);
      if ( ((unsigned __int8)Wall & 1) == 0 )
        goto LABEL_41;
    }
    v453 = routeData;
    if ( !routeData )
      sub_21FFECC(Wall, method);
    v454 = routeData->fields.actionPiece;
    if ( v454 )
    {
      v455 = v843->fields.__8__1;
      if ( !v455 )
        sub_21FFECC(Wall, method);
      v456 = v455->fields.basePiece;
      if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, method, v2);
      IsEnemyPiece = WarBoardAIManager__IsEnemyPiece(v456, v454, (const MethodInfo *)v2);
      if ( IsEnemyPiece )
      {
        v458 = v843->fields.__8__1;
        if ( !v458 )
          sub_21FFECC(IsEnemyPiece, method);
        v459 = v458->fields.basePiece;
        if ( !v459 )
          sub_21FFECC(0, method);
        isMaster = WarBoardPieceData__get_isMaster(v459, 0);
        if ( !isMaster )
          goto LABEL_245;
        if ( !routeData )
          sub_21FFECC(isMaster, method);
        v461 = routeData->fields.actionPiece;
        if ( !v461 )
          sub_21FFECC(0, method);
        isMaster = WarBoardPieceData__get_isMaster(v461, 0);
        if ( isMaster )
        {
LABEL_245:
          v462 = routeData;
          if ( !routeData )
            sub_21FFECC(isMaster, method);
          v463 = routeData->fields.basePiece;
          routeData->fields.flagNow |= 2uLL;
          if ( !v463 )
            sub_21FFECC(isMaster, method);
          v464 = v462->fields.actionPiece;
          v462->fields.attackCountOnThisTurn = v463->fields._attackCount_k__BackingField + 1;
          if ( !v464 )
            sub_21FFECC(0, method);
          Wall = (WarBoardWallData_o *)WarBoardPieceData__get_isServant(v464, 0);
          v453 = routeData;
          if ( ((unsigned __int8)Wall & 1) != 0 )
          {
            if ( !routeData )
              sub_21FFECC(Wall, method);
            v465 = v843->fields.__8__1;
            if ( !v465 )
              sub_21FFECC(Wall, method);
            v466 = v465->fields.basePiece;
            if ( !v466 )
              sub_21FFECC(Wall, method);
            battleServant_k__BackingField = v466->fields._battleServant_k__BackingField;
            if ( !battleServant_k__BackingField )
              sub_21FFECC(0, method);
            flagNow = routeData->fields.flagNow;
            ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0, 0);
            if ( !routeData )
              sub_21FFECC(ClassId, v470);
            v471 = routeData->fields.actionPiece;
            if ( !v471 )
              sub_21FFECC(ClassId, v470);
            v472 = ClassId;
            v473 = v471->fields._battleServant_k__BackingField;
            if ( !v473 )
              sub_21FFECC(0, v470);
            v474 = (WarBoardAIRoute_o *)BattleServantData__getClassId(v473, 0, 0);
            FlagAdvantage = WarBoardAIRoute__GetFlagAdvantage(v474, v472, (int32_t)v474, v475);
            v479 = routeData;
            v453->fields.flagNow = FlagAdvantage | flagNow;
            if ( !v479 )
              sub_21FFECC(FlagAdvantage, v477);
            WarBoardAIRoute__LinkedCount(
              (WarBoardAIRoute_o *)FlagAdvantage,
              *(_DWORD *)(v322 + 16),
              v843->fields.piecePlaceData,
              &v479->fields.attackByLinkedEnemy,
              &v479->fields.attackByLinkedAlly,
              v478);
            v453 = routeData;
          }
          goto LABEL_268;
        }
LABEL_41:
        v86 = v843;
        v87 = LODWORD(v843->fields.__7__wrap23) + 1;
        LODWORD(v843->fields.__7__wrap23) = v87;
        continue;
      }
      if ( !routeData )
        sub_21FFECC(IsEnemyPiece, method);
      v536 = routeData->fields.actionPiece;
      if ( !v536 )
        sub_21FFECC(IsEnemyPiece, method);
      if ( v536->fields._roleType_k__BackingField == 1 )
        goto LABEL_41;
      v537 = v843->fields.__8__1;
      if ( !v537 )
        sub_21FFECC(IsEnemyPiece, method);
      v538 = v537->fields.basePiece;
      if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, method, v2);
      Wall = (WarBoardWallData_o *)WarBoardAIManager__IsAllyPiece(v538, v536, (const MethodInfo *)v2);
      v453 = routeData;
      if ( ((unsigned __int8)Wall & 1) != 0 )
      {
        if ( !routeData )
          sub_21FFECC(Wall, method);
        routeData->fields.flagNow |= 0x4000000uLL;
      }
      else
      {
LABEL_268:
        if ( !v453 )
          sub_21FFECC(Wall, method);
      }
    }
    break;
  }
  if ( (v453->fields.flagNow & 2) != 0 )
  {
    v564 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v564 )
      sub_21FFECC(0, method);
    if ( SHIDWORD(v564[47].klass) < _4__this->fields.attackCost + v843->fields._requiredCost_5__3 )
      goto LABEL_41;
    v565 = v843->fields.__8__1;
    if ( !v565 )
      sub_21FFECC(v564, method);
    v566 = v565->fields.basePiece;
    if ( !v566 )
      sub_21FFECC(0, method);
    Wall = (WarBoardWallData_o *)WarBoardPieceData__EnableAttack(
                                   v566,
                                   v843->fields._servantAndEnemyMasterRange_5__15,
                                   0);
    if ( ((unsigned __int8)Wall & 1) == 0 )
      goto LABEL_41;
    v453 = routeData;
    if ( !routeData )
      sub_21FFECC(Wall, method);
  }
  if ( (v453->fields.flagNow & 2) == 0 )
  {
    v539 = v843->fields.__8__1;
    if ( !v539 )
      sub_21FFECC(Wall, method);
    v540 = v539->fields.basePiece;
    if ( !v540 )
      sub_21FFECC(0, method);
    Wall = (WarBoardWallData_o *)WarBoardPieceData__EnableMoveBySelf(
                                   v540,
                                   v843->fields._servantAndEnemyMasterRange_5__15,
                                   0);
    if ( ((unsigned __int8)Wall & 1) == 0 )
      goto LABEL_41;
    v453 = routeData;
    if ( !routeData )
      sub_21FFECC(Wall, method);
  }
  if ( (v453->fields.flagNow & 0x4000000) != 0 )
  {
    v541 = v843->fields.__8__1;
    if ( !v541 )
      sub_21FFECC(Wall, method);
    v542 = (System_Collections_Generic_List_object__o *)v843->fields.routeDataList;
    if ( !v542 )
      sub_21FFECC(0, method);
    v543 = v541->fields.basePiece;
    v544 = v453->fields.actionPiece;
    requiredCost_5__3 = v843->fields._requiredCost_5__3;
    v546 = System_Collections_Generic_List_object___AsReadOnly(
             v542,
             (const MethodInfo_444FD58 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
    Wall = (WarBoardWallData_o *)WarBoardAIRoute__IsActableReplace(
                                   _4__this,
                                   v543,
                                   v544,
                                   requiredCost_5__3,
                                   (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v546,
                                   v843->fields._servantAndEnemyMasterRange_5__15,
                                   v547);
    if ( ((unsigned __int8)Wall & 1) == 0 )
      goto LABEL_41;
    v453 = routeData;
  }
  piecePlaceData = WarBoardAIRoute__UpdatePiecePlaceData(
                     (WarBoardAIRoute_o *)Wall,
                     v843->fields.piecePlaceData,
                     v453,
                     v843->fields.__7__wrap8.fields._getEnumeratorRetType,
                     *(_DWORD *)(v322 + 16),
                     v5);
  MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(_4__this, piecePlaceData, v548);
  v550 = v843->fields._basePieceActionPieceRouteList_5__22;
  v551 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v551,
    (Il2CppObject *)v322,
    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
    0);
  v552 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__58935448(
                                (System_Collections_Generic_IEnumerable_TSource__o *)v550,
                                (System_Func_TSource__bool__o *)v551,
                                (const MethodInfo_3834898 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
  if ( ((unsigned __int8)v552 & 1) != 0
    || (v555 = v843->fields._advantagePieceData_5__21,
        v556 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v556,
          (Il2CppObject *)v322,
          Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
          0),
        v552 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__58935448(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)v555,
                                      (System_Func_TSource__bool__o *)v556,
                                      (const MethodInfo_3834898 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___),
        ((unsigned __int8)v552 & 1) != 0) )
  {
    if ( !routeData )
      sub_21FFECC(v552, v553);
    routeData->fields.flagNow |= 0x20000000000uLL;
  }
  if ( v843->fields._masterExists_5__8 )
  {
    if ( v843->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
      goto LABEL_288;
    if ( !routeData )
      sub_21FFECC(v552, v553);
    v557 = v843->fields._defenseAreaData_5__7;
    if ( (routeData->fields.flagNow & 0x400) != 0 )
    {
LABEL_288:
      v558 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
               _4__this,
               piecePlaceData,
               MasterSquareIndexFromPlaceData,
               v554);
      v552 = WarBoardAIRoute__GetDefenseAreaData(_4__this, MasterSquareIndexFromPlaceData, v558, piecePlaceData, v559);
      v557 = v552;
    }
    if ( !v557 )
      sub_21FFECC(v552, v553);
    v560 = _4__this->fields.aiRouteMasterData;
    if ( !v560 )
      sub_21FFECC(v552, v553);
    v561 = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
             v557->fields._ShortestRoutes_k__BackingField,
             piecePlaceData,
             v560->fields.masterType == 1,
             v554);
    v563 = routeData;
    if ( v561 )
    {
      if ( !routeData )
        sub_21FFECC(v561, v562);
      routeData->fields.flagNow |= 0x40000000uLL;
    }
    else if ( !routeData )
    {
      sub_21FFECC(v561, v562);
    }
    v567 = v563->fields.flagNow;
    if ( (v567 & 0x400) != 0 && (v557->fields._Flag_k__BackingField & 0x10000000000LL) != 0 )
      v563->fields.flagNow = v567 | 0x40000000000LL;
  }
  else
  {
    v563 = routeData;
  }
  v568 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v568,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v563 )
    sub_21FFECC(v569, v570);
  v563->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v568;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v563->fields.moveByLinkedPiece,
    (int32_t)v568,
    v571,
    v572,
    v573,
    v574,
    v575,
    v576);
  v579 = routeData;
  if ( !routeData )
    sub_21FFECC(v577, v578);
  *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0;
  v580 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v580,
    (const MethodInfo_4017D08 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  v579->fields.dicUniqueKeyRange = v580;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v579->fields.dicUniqueKeyRange,
    (int32_t)v580,
    v581,
    v582,
    v583,
    v584,
    v585,
    v586);
  v588 = v843->fields.piecePlaceData;
  if ( !v588 )
    sub_21FFECC(0, v587);
  System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
    &v829,
    v588,
    (const MethodInfo_3F72994 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
  *(_OWORD *)&v836.fields._dictionary = *(_OWORD *)&v829.fields._dictionary;
  v836.fields._current = v829.fields._current;
  v829.fields._dictionary = 0;
  *(_QWORD *)&v829.fields._version = &v836;
  while ( 1 )
  {
    v589 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
             &v836,
             (const MethodInfo_41269B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    if ( !v589 )
      break;
    v593 = v843->fields.__8__1;
    if ( !v593 )
      sub_21FFECC(v589, v590);
    v594 = v593->fields.basePiece;
    if ( !v594 )
      sub_21FFECC(v589, v590);
    v595 = HIDWORD(v836.fields._current.fields.key);
    if ( v594->fields._uniqueIndex_k__BackingField != HIDWORD(v836.fields._current.fields.key) )
    {
      if ( !routeData )
        sub_21FFECC(v589, v590);
      v596 = (int32_t)v836.fields._current.fields.key;
      dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
      v598 = *(_DWORD *)(v322 + 16);
      if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v590, v591);
      v599 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(0, v598, v596, 0, 0, v592);
      v600 = System_Linq_Enumerable__Count_int_(
               v599,
               (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
      if ( !dicUniqueKeyRange )
        sub_21FFECC(v600, v601);
      System_Collections_Generic_Dictionary_uint__int___Add(
        dicUniqueKeyRange,
        v595,
        v600,
        (const MethodInfo_40186AC *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &v836,
    (const MethodInfo_4126AB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
  v602 = routeData;
  v603 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v603,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v602 )
    sub_21FFECC(v604, v605);
  v602->fields.listExistDesignationItem = v603;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v602->fields.listExistDesignationItem,
    (int32_t)v603,
    v606,
    v607,
    v608,
    v609,
    v610,
    v611);
  v612 = routeData;
  v613 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v613,
    (const MethodInfo_3F551E8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !v612 )
    sub_21FFECC(v614, v615);
  v612->fields.dicMoveByServantGetDesignationItem = v613;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v612->fields.dicMoveByServantGetDesignationItem,
    (int32_t)v613,
    v616,
    v617,
    v618,
    v619,
    v620,
    v621);
  v622 = routeData;
  v623 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
  System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
    v623,
    (const MethodInfo_3F61E80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
  if ( !v622 )
    sub_21FFECC(v624, v625);
  v622->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)v623;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v622->fields.dicItemIdKeyIsMoveByServantDesignationItemRange,
    (int32_t)v623,
    v626,
    v627,
    v628,
    v629,
    v630,
    v631);
  v634 = routeData;
  if ( !routeData )
    sub_21FFECC(v632, v633);
  v635 = v843;
  routeData->fields.isMoveByOutOfWarningArea = 0;
  *(_QWORD *)&v634->fields.isMoveByServantAndEnemyRange = 0;
  *(_QWORD *)&v634->fields.isMoveByMasterAndEnemyRange = 0;
  *(_QWORD *)&v634->fields.isMoveByServantAndAttackAdvantageServantRange = 0;
  *(_QWORD *)&v634->fields.isMoveByServantAndDefenseAdvantageServantRange = 0;
  *(_QWORD *)&v634->fields.isMoveByServantAndClassAdvantageServantRange = 0;
  v636 = v635->fields.__8__1;
  if ( !v636 )
    sub_21FFECC(v632, v633);
  v637 = v636->fields.basePiece;
  if ( !v637 )
    sub_21FFECC(0, v633);
  IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isServant(v637, 0);
  if ( (IsBlockShortestRouteEnemyAndMaster & 1) != 0 )
  {
    v644 = v843;
    if ( v843->fields._masterExists_5__8 )
    {
      v645 = v843->fields.__8__1;
      if ( !v645 )
        sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
      v646 = v645->fields.basePiece;
      if ( !v646 )
        sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
      v647 = _4__this->fields.aiRouteMasterData;
      if ( !v647 )
        sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
      if ( v647->fields.masterType != 2 || v647->fields.masterPieceIndex != v646->fields._index_k__BackingField )
      {
        v648 = v843->fields._defenseAreaData_5__7;
        if ( !v648 )
          sub_21FFECC(0, v639);
        IsBlockShortestRouteEnemyAndMaster = DefenseAreaData__IsInDefenseArea(v648, *(_DWORD *)(v322 + 16), 0);
        if ( (IsBlockShortestRouteEnemyAndMaster & 1) != 0 )
        {
          if ( !routeData )
            sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
          routeData->fields.flagNow |= 0x4000000000uLL;
        }
      }
      v649 = v843->fields.__8__1;
      if ( !v649 )
        sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
      v650 = v649->fields.basePiece;
      if ( !v650 )
        sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
      v651 = _4__this->fields.aiRouteMasterData;
      if ( !v651 )
        sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
      v652 = v651->fields.masterType;
      if ( v652 != 2 || v651->fields.masterPieceIndex != v650->fields._index_k__BackingField )
      {
        IsBlockShortestRouteEnemyAndMaster = WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                                               v843->fields._defenseAreaData_5__7,
                                               *(_DWORD *)(v322 + 16),
                                               v652 == 1,
                                               v641);
        if ( (IsBlockShortestRouteEnemyAndMaster & 1) != 0 )
        {
          if ( !routeData )
            sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
          routeData->fields.flagNow |= 0x100000000uLL;
        }
      }
      v644 = v843;
      v653 = v843->fields.__8__1;
      if ( !v653 )
        sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
      v654 = v653->fields.basePiece;
      if ( !v654 )
        sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
      v655 = _4__this->fields.aiRouteMasterData;
      if ( !v655 )
        sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
      if ( v655->fields.masterType != 2 || v655->fields.masterPieceIndex != v654->fields._index_k__BackingField )
      {
        v656 = *(_DWORD *)(v322 + 16);
        if ( v656 == MasterSquareIndexFromPlaceData )
        {
          v657 = routeData;
          v658 = 2;
          if ( !routeData )
            sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
        }
        else
        {
          if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v639, v640);
          v659 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                        0,
                                                                        v656,
                                                                        MasterSquareIndexFromPlaceData,
                                                                        0,
                                                                        0,
                                                                        v642);
          v660 = System_Linq_Enumerable__Count_int_(
                   v659,
                   (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
          v657 = routeData;
          if ( !routeData )
            sub_21FFECC(v660, v639);
          v644 = v843;
          tmpFlagNow_5__12 = v843->fields._tmpFlagNow_5__12;
          v662 = (_DWORD)v660 == tmpFlagNow_5__12;
          if ( (int)v660 < tmpFlagNow_5__12 )
            v658 = 1;
          else
            v658 = 3;
          if ( v662 )
            v658 = 2;
        }
        v657->fields.isMoveByServantAndMasterRange = v658;
      }
    }
    v663 = *(System_Collections_Generic_Dictionary_int__int__o **)&v644->fields._sumPieceActionCost_5__17;
    if ( !v663 )
      sub_21FFECC(0, v639);
    System_Collections_Generic_Dictionary_int__int___GetEnumerator(
      &v829,
      v663,
      (const MethodInfo_3F5F850 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    v834 = *(_OWORD *)&v829.fields._dictionary;
    v835 = v829.fields._current;
    v829.fields._dictionary = 0;
    *(_QWORD *)&v829.fields._version = &v834;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v834,
              (const MethodInfo_4122FDC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
    {
      v667 = *(_DWORD *)(v322 + 16);
      v668 = (unsigned int)v835.fields.key;
      v669 = HIDWORD(v835.fields.key);
      if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v664, v665);
      v670 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(0, v667, v668, 0, 0, v666);
      v671 = System_Linq_Enumerable__Count_int_(
               v670,
               (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
      if ( !routeData )
        sub_21FFECC(v671, v672);
      dicItemIdKeyIsMoveByServantDesignationItemRange = (System_Collections_Generic_Dictionary_TKey__TValue__o *)routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
      if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
        sub_21FFECC(v671, v672);
      if ( (int)v671 < v669 )
        v674 = 1;
      else
        v674 = 3;
      if ( (_DWORD)v671 == v669 )
        v675 = 2;
      else
        v675 = v674;
      System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
        dicItemIdKeyIsMoveByServantDesignationItemRange,
        v668,
        v675,
        (const MethodInfo_3F62810 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
      if ( !routeData )
        sub_21FFECC(v676, v677);
      dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
      if ( !dicMoveByServantGetDesignationItem )
        sub_21FFECC(0, v677);
      System_Collections_Generic_Dictionary_int__bool___Add(
        dicMoveByServantGetDesignationItem,
        v668,
        *(_DWORD *)(v322 + 16) == v668,
        (const MethodInfo_3F55B9C *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
      if ( !routeData )
        sub_21FFECC(v679, v680);
      listExistDesignationItem = routeData->fields.listExistDesignationItem;
      if ( !listExistDesignationItem )
        sub_21FFECC(0, v680);
      sub_1FF1854(listExistDesignationItem, v668, Method_System_Collections_Generic_List_int__Add__);
    }
    sub_1FEE344(&v829);
    v685 = *(_DWORD *)(v322 + 16);
    enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
    if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v682, v683);
    v687 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                  0,
                                                                  v685,
                                                                  enemyMasterSquareIndex,
                                                                  0,
                                                                  0,
                                                                  v684);
    v688 = System_Linq_Enumerable__Count_int_(
             v687,
             (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
    v692 = routeData;
    if ( !routeData )
      sub_21FFECC(v688, v689);
    servantAndMasterRange_5__13 = v843->fields._servantAndMasterRange_5__13;
    v694 = (_DWORD)v688 == servantAndMasterRange_5__13;
    if ( (int)v688 < servantAndMasterRange_5__13 )
      v695 = 1;
    else
      v695 = 3;
    if ( v694 )
      v695 = 2;
    routeData->fields.isMoveByServantAndEnemyMasterRange = v695;
    if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
      *(__n128 *)&v691 = j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v689, v690);
    v696 = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_2AC6C38(0, v691);
    v698 = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                  v696,
                                  HIDWORD(v843->fields._tmpFlagNow_5__12),
                                  *(_DWORD *)(v322 + 16),
                                  v697);
    v699 = v843;
    v692->fields.isMoveByServantAndEnemyRange = (int)v698;
    WarBoardAIRoute__ClassAdvantageDistance(
      v698,
      &routeData,
      (WarBoardAIRoute_AdvantagePieceData_o *)v699->fields._dicEnemyRange_5__20,
      *(_DWORD *)(v322 + 16),
      v700);
  }
  v701 = _4__this->fields.aiRouteMasterData;
  if ( !v701 )
    sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
  if ( v701->fields.masterType )
  {
LABEL_500:
    if ( v701->fields.masterType == 2 )
    {
      v704 = v843->fields.__8__1;
      if ( !v704 )
        sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
      v705 = v704->fields.basePiece;
      if ( !v705 )
        sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
      if ( v705->fields._index_k__BackingField == v701->fields.masterPieceIndex )
        goto LABEL_504;
    }
  }
  else
  {
    v702 = v843->fields.__8__1;
    if ( !v702 )
      sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
    v703 = v702->fields.basePiece;
    if ( !v703 )
      sub_21FFECC(0, v639);
    IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isMaster(v703, 0);
    if ( (IsBlockShortestRouteEnemyAndMaster & 1) == 0 )
    {
      v701 = _4__this->fields.aiRouteMasterData;
      if ( !v701 )
        sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
      goto LABEL_500;
    }
LABEL_504:
    if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
      *(__n128 *)&v643 = j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v639, v640);
    v706 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2AC6C38(0, v643);
    if ( !v706 )
      sub_21FFECC(0, v707);
    Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
             v706,
             (const MethodInfo_3F689B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
    if ( !Keys )
      sub_21FFECC(0, v709);
    System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
      (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v829,
      Keys,
      (const MethodInfo_4349BA4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
    *(_OWORD *)&v833.fields._dictionary = *(_OWORD *)&v829.fields._dictionary;
    v833.fields._currentKey = v829.fields._current.fields.key;
    v829.fields._dictionary = 0;
    *(_QWORD *)&v829.fields._version = &v833;
    while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
              &v833,
              (const MethodInfo_41254C0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
    {
      currentKey = (int32_t)v833.fields._currentKey;
      v714 = *(_DWORD *)(v322 + 16);
      if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v710, v711);
      v715 = AStarSearch__RouteSearch(0, v714, currentKey, 0, 0, v712);
      if ( !v715 )
        sub_21FFECC(0, v716);
      v717 = _4__this->fields.npcData;
      if ( !v717 )
        sub_21FFECC(v715, v716);
      if ( LODWORD(v715->max_length) - 1 <= v717->fields.defenseArea )
      {
        if ( !routeData )
          sub_21FFECC(v715, v716);
        routeData->fields.flagNow |= 0x8000000000uLL;
        break;
      }
    }
    sub_1FF66A4(&v829);
    v721 = routeData;
    if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
      *(__n128 *)&v720 = j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v718, v719);
    v722 = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_2AC6C38(0, v720);
    v725 = v843->fields._defenseAreaData_5__7;
    if ( !v725 )
      sub_21FFECC(v722, v723);
    v726 = WarBoardAIRoute__CompareBaseRangeToActionRange(
             v722,
             v725->fields._MasterAndEnemyRange_k__BackingField,
             *(_DWORD *)(v322 + 16),
             v724);
    if ( !v721 )
      sub_21FFECC(v726, v727);
    v721->fields.isMoveByMasterAndEnemyRange = v726;
    v729 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2AC6C38(0, v728);
    if ( !v729 )
      sub_21FFECC(0, v730);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v829,
      v729,
      (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    v832 = v829;
    v829.fields._dictionary = 0;
    *(_QWORD *)&v829.fields._version = &v832;
    do
    {
      v734 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
               &v832,
               (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
      if ( !v734 )
        break;
      v735 = (int32_t)v832.fields._current.fields.key;
      v736 = *(_DWORD *)(v322 + 16);
      if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v731, v732);
      v737 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(0, v736, v735, 0, 0, v733);
      System_Linq_Enumerable__Count_int_(v737, (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
    }
    while ( WarBoardAIRoute__IsDetour((System_Int32_array *)v737, v843->fields._allyPieceIndexs_5__5, v738) );
    IsBlockShortestRouteEnemyAndMaster = sub_1FF6568(&v829);
    if ( !v734 )
    {
      if ( !routeData )
        sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
      routeData->fields.flagNow |= 0x1000000000uLL;
    }
  }
  v739 = routeData;
  if ( !routeData )
    sub_21FFECC(IsBlockShortestRouteEnemyAndMaster, v639);
  if ( !routeData->fields.actionPiece || (routeData->fields.flagNow & 0x4000000) != 0 )
  {
    v740 = v843->fields._warBoardData_5__2;
    if ( !v740 )
      sub_21FFECC(0, v639);
    Effect = WarBoardData__GetEffect(v740, *(_DWORD *)(v322 + 16), v640);
    if ( Effect )
    {
      if ( !routeData )
        sub_21FFECC(Effect, v742);
      routeData->fields.flagNow |= 0x200000000uLL;
    }
    v743 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v743,
      (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
    v745 = (System_Collections_Generic_List_object__o *)v843->fields.routeDataList;
    if ( !v745 )
      sub_21FFECC(0, v744);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v829,
      v745,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    *(_OWORD *)&v840.fields._list = *(_OWORD *)&v829.fields._dictionary;
    v840.fields._current = v829.fields._current.fields.key;
    v829.fields._dictionary = 0;
    *(_QWORD *)&v829.fields._version = &v840;
    while ( 1 )
    {
      v746 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v840,
               (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
      if ( !v746 )
        break;
      v748 = v840.fields._current;
      if ( !v840.fields._current )
        sub_21FFECC(v746, v747);
      if ( (BYTE3(v840.fields._current[1].klass) & 8) != 0 )
      {
        v749 = v840.fields._current[3].klass;
        if ( !v749 )
          sub_21FFECC(0, v747);
        v750 = WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v749, 0);
        if ( v750 )
        {
          if ( !v743
            || (items = v743->fields._items,
                monitor_high = HIDWORD(v748[1].monitor),
                v753 = Method_System_Collections_Generic_List_int__Add__,
                ++v743->fields._version,
                !items) )
          {
            sub_21FFECC(v750, monitor_high);
          }
          size = v743->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v743,
              monitor_high,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v753[4] + 192LL) + 112LL));
          }
          else
          {
            v743->fields._size = size + 1;
            items->m_Items[size] = monitor_high;
          }
        }
        if ( (BYTE3(v748[1].klass) & 4) != 0 )
        {
          v755 = (WarBoardPieceData_o *)v748[3].klass;
          if ( !v755 )
            sub_21FFECC(0, monitor_high);
          if ( WarBoardPieceData__get_isMaster(v755, 0) )
          {
            v757 = (WarBoardPieceData_o *)v748[3].monitor;
            if ( !v757 )
              sub_21FFECC(0, v756);
            v758 = WarBoardPieceData__get_isServant(v757, 0);
            if ( v758 )
            {
              if ( !v743 )
                sub_21FFECC(v758, v759);
              sub_1FF1854(v743, LODWORD(v748[1].monitor), Method_System_Collections_Generic_List_int__Add__);
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v840,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    if ( !routeData )
      sub_21FFECC(v760, v761);
    v762 = routeData->fields.basePiece;
    if ( !v762 )
      sub_21FFECC(0, v761);
    v763 = WarBoardPieceData__get_isServant(v762, 0);
    if ( v763 )
    {
      if ( !routeData )
        sub_21FFECC(v763, v764);
      CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                         (WarBoardAIRoute_o *)v763,
                         routeData->fields.actionIndex,
                         v743,
                         v765);
      if ( CanAcquireItem )
      {
        v769 = routeData;
        v770 = 402653184;
        if ( !routeData )
          sub_21FFECC(CanAcquireItem, v767);
        goto LABEL_591;
      }
    }
    else
    {
      if ( !routeData )
        sub_21FFECC(v763, v764);
      v771 = routeData->fields.basePiece;
      if ( !v771 )
        sub_21FFECC(0, v764);
      CanAcquireItem = WarBoardPieceData__get_isMaster(v771, 0);
      if ( CanAcquireItem )
      {
        if ( !routeData )
          sub_21FFECC(CanAcquireItem, v772);
        CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                           (WarBoardAIRoute_o *)CanAcquireItem,
                           routeData->fields.actionIndex,
                           v743,
                           v773);
        v775 = routeData;
        if ( CanAcquireItem )
        {
          if ( !routeData )
            sub_21FFECC(CanAcquireItem, v774);
          routeData->fields.flagNow |= 0x10000000uLL;
        }
        else if ( !routeData )
        {
          sub_21FFECC(CanAcquireItem, v774);
        }
        if ( (v775->fields.flagNow & 0x4000000) != 0 )
        {
          v776 = v775->fields.actionPiece;
          if ( !v776 )
            sub_21FFECC(0, v774);
          CanAcquireItem = WarBoardPieceData__get_isServant(v776, 0);
          if ( CanAcquireItem )
          {
            if ( !routeData )
              sub_21FFECC(CanAcquireItem, v777);
            CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                               (WarBoardAIRoute_o *)CanAcquireItem,
                               routeData->fields.baseIndex,
                               v743,
                               v778);
            if ( CanAcquireItem )
            {
              v769 = routeData;
              v770 = 0x8000000;
              if ( !routeData )
                sub_21FFECC(CanAcquireItem, v779);
LABEL_591:
              v769->fields.flagNow |= v770;
            }
          }
        }
      }
    }
    WarBoardAIRoute__LinkedPieceCount((WarBoardAIRoute_o *)CanAcquireItem, &routeData, piecePlaceData, v743, v768);
    v739 = routeData;
    if ( !routeData )
      sub_21FFECC(v780, v781);
  }
  FlagOutOfWarningAreaToDistance = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                     _4__this,
                                     v739->fields.baseIndex,
                                     v739->fields.actionIndex,
                                     v641);
  v784 = routeData;
  v739->fields.isMoveByOutOfWarningArea = FlagOutOfWarningAreaToDistance;
  if ( !v784 )
    sub_21FFECC(FlagOutOfWarningAreaToDistance, v783);
  evalOffsetMagnification = v784->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_21FFECC(FlagOutOfWarningAreaToDistance, v783);
  evalOffsetMagnification->fields.isAttack = (v784->fields.flagNow & 2) != 0;
  v786 = v784->fields.basePiece;
  if ( !v786 )
    sub_21FFECC(FlagOutOfWarningAreaToDistance, v783);
  piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_21FFECC(0, v783);
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          piecePersonalityDic,
          v786->fields._index_k__BackingField,
          &value,
          (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__) )
    goto LABEL_41;
  v788 = value;
  v789 = (WarBoardAIEvalCalcurater_o *)sub_21FFEBC(WarBoardAIEvalCalcurater_TypeInfo);
  WarBoardAIEvalCalcurater___ctor(v789, (WarBoardAIRoute_PiecePersonality_o *)v788, 0);
  if ( !v789 )
    sub_21FFECC(v790, v791);
  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v789, &routeData, 0);
  WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(v789, &routeData, _4__this->fields.averageBenefitValue, 0);
  if ( !routeData )
    sub_21FFECC(0, v792);
  WarBoardAIRoute_RouteData__CalcEvalValue(routeData, v792);
  v795 = WarBoardAIRoute___c_TypeInfo;
  v796 = v843->fields.routeDataList;
  if ( !*(&WarBoardAIRoute___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo, v793, v794);
    v795 = WarBoardAIRoute___c_TypeInfo;
  }
  v797 = v795->static_fields;
  _9__47_5 = (System_Func_object__object__o *)v797->__9__47_5;
  if ( !_9__47_5 )
  {
    if ( !*(&v795->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v795, v793, v794);
      v797 = WarBoardAIRoute___c_TypeInfo->static_fields;
    }
    v799 = (Il2CppObject *)v797->__9;
    _9__47_5 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
    System_Func_object__object____ctor(_9__47_5, v799, Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__, 0);
    v800 = WarBoardAIRoute___c_TypeInfo->static_fields;
    v800->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v800->__9__47_5,
      (int32_t)_9__47_5,
      v801,
      v802,
      v803,
      v804,
      v805,
      v806);
  }
  v807 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v796,
                                                          (System_Func_TSource__TResult__o *)_9__47_5,
                                                          (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
  v808 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627776(
    v808,
    v807,
    (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___91457784);
  if ( !v808 )
    sub_21FFECC(v809, v810);
  sub_1FEBF38(v808, routeData, Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__);
  v811 = (WarBoardAIRoute_RouteData_o *)BasicHelper__IndexValue_object__58595452(
                                          (System_Collections_Generic_List_T__o *)v808,
                                          v808->fields._size - 2,
                                          0,
                                          (const MethodInfo_37E187C *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
  route = v811;
  if ( v811 )
  {
    if ( !routeData )
      sub_21FFECC(v811, v812);
    if ( routeData->fields.basePiece == v811->fields.basePiece )
    {
      WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(v789, &route, routeData, 0);
      if ( !route )
        sub_21FFECC(0, v813);
      WarBoardAIRoute_RouteData__CalcEvalValue(route, v813);
    }
  }
  allRouteList = _4__this->fields.allRouteList;
  if ( !allRouteList )
    sub_21FFECC(0, v812);
  v815 = sub_1FEBF38(allRouteList, v808, Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
  if ( !routeData )
    sub_21FFECC(v815, method);
  if ( routeData->fields.baseIndex == routeData->fields.actionIndex || (routeData->fields.flagNow & 2) != 0 )
    goto LABEL_41;
  v816 = v843->fields.searchCount;
  if ( v816 == 1 )
  {
    v817 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
    v818 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                             _4__this,
                             piecePlaceData,
                             1,
                             (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v808,
                             v4);
    if ( !routeData )
      sub_21FFECC(v818, v818);
    if ( !v817 )
      sub_21FFECC(v818, v818);
    System_Collections_Generic_Dictionary_object__float___Add(
      v817,
      v818,
      routeData->fields.evalValue,
      (const MethodInfo_3FD417C *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
    goto LABEL_41;
  }
  v819 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                           _4__this,
                           piecePlaceData,
                           v816,
                           (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v808,
                           v4);
  v820 = v843;
  v843->fields.__2__current = v819;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v820->fields.__2__current,
    (int32_t)v819,
    v821,
    v822,
    v823,
    v824,
    v825,
    v826);
  v308 = 1;
LABEL_136:
  result = 1;
  v843->fields.__1__state = v308;
LABEL_132:
  v299 = *(_QWORD *)&v830.fields._getEnumeratorRetType;
  if ( *(_QWORD *)&v830.fields._getEnumeratorRetType )
  {
    sub_1FF68FC(&v831, method);
    sub_21FFEC4(v299);
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state <= 0 )
  {
    if ( _1__state != -4 )
    {
      if ( _1__state != -3 )
        return;
LABEL_7:
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(this, method);
      return;
    }
LABEL_8:
    WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(this, method);
    return;
  }
  if ( _1__state == 2 )
    goto LABEL_8;
  if ( _1__state == 1 )
    goto LABEL_7;
}


void WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  const MethodInfo_4126AB8 *v3; // x1

  if ( (byte_5935FB3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    byte_5935FB3 = 1;
  }
  v3 = (const MethodInfo_4126AB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(&this->fields.__7__wrap8, v3);
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

  if ( (byte_5935FB4 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    byte_5935FB4 = 1;
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
      v7 = sub_2237E2C(v3, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v7)(v3, *(_QWORD *)(v7 + 8));
  }
}


void WarBoardAIRoute___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5935FA4 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAIRoute___c_TypeInfo);
    byte_5935FA4 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardAIRoute___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardAIRoute___c_TypeInfo->static_fields,
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

  if ( (byte_5935FA5 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_21FFC50(&IWarBoardObjectData_TypeInfo);
    byte_5935FA5 = 1;
  }
  if ( !x )
    sub_21FFECC(this, x);
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
    v7 = sub_2237E2C(x, IWarBoardObjectData_TypeInfo, 2);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v7)(x, *(_QWORD *)(v7 + 8));
}


int64_t WarBoardAIRoute___c___CreateRouteData_b__47_1(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__o x,
        const MethodInfo *method)
{
  int64_t key; // x19

  key = x.fields.key;
  if ( (byte_5935FA6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    byte_5935FA6 = 1;
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
  if ( (byte_5935FA7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    byte_5935FA7 = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, (const MethodInfo *)x.fields.key);
}


WarBoardAIRoute_RouteData_o *WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return WarBoardAIRoute_RouteData__ShallowCopy(x, (const MethodInfo *)x);
}


float WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // w19

  value = x.fields.value;
  if ( (byte_5935FA8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__);
    byte_5935FA8 = 1;
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

  if ( (byte_5935FA9 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_21FFC50(&IWarBoardObjectData_TypeInfo);
    byte_5935FA9 = 1;
  }
  if ( !x )
    sub_21FFECC(this, x);
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
    v7 = sub_2237E2C(x, IWarBoardObjectData_TypeInfo, 4);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v7)(x, *(_QWORD *)(v7 + 8));
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

  if ( (byte_5935FAA & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_21FFC50(&IWarBoardObjectData_TypeInfo);
    byte_5935FAA = 1;
  }
  if ( !x )
    sub_21FFECC(this, x);
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
    v7 = sub_2237E2C(x, IWarBoardObjectData_TypeInfo, 5);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v7)(x, *(_QWORD *)(v7 + 8));
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
  if ( (byte_5935FAB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__);
    byte_5935FAB = 1;
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
    sub_21FFECC(this, 0);
  return !WarBoardItemData__get_Acquired(z, 0) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_21FFECC(this, 0);
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
  if ( (byte_5935FAC & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_21FFC50(&IWarBoardObjectData_TypeInfo);
    byte_5935FAC = 1;
  }
  if ( !z )
    sub_21FFECC(this, z);
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
    v8 = sub_2237E2C(z, IWarBoardObjectData_TypeInfo, 0);
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
    v12 = sub_2237E2C(z, IWarBoardObjectData_TypeInfo, 3);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v12)(z, *(_QWORD *)(v12 + 8));
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
    sub_21FFECC(this, x);
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
    sub_21FFECC(this, 0);
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
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

  if ( (byte_5935FAD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    byte_5935FAD = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_21FFECC(0, *(_QWORD *)&square);
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_3F727A8 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
}


void WarBoardAIRoute___c__DisplayClass58_0___ctor(
        WarBoardAIRoute___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardAIRoute___c__DisplayClass58_0___IsDetour_b__0(
        WarBoardAIRoute___c__DisplayClass58_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct System_Int32_array *route; // x8
  __int64 i; // x9

  route = this->fields.route;
  if ( !route )
    sub_21FFECC(this, *(_QWORD *)&x);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(route->max_length) )
    sub_21FFED4(this);
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
    sub_21FFECC(this, x);
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
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x5
  int32_t v13; // w19

  v4 = this;
  if ( (byte_5935FAE & 1) == 0 )
  {
    sub_21FFC50(&AStarSearch_TypeInfo);
    this = (WarBoardAIRoute___c__DisplayClass64_0_o *)sub_21FFC50(&IWarBoardObjectData_TypeInfo);
    byte_5935FAE = 1;
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
    v9 = sub_2237E2C(x, IWarBoardObjectData_TypeInfo, 1);
  }
  v13 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v9)(x, *(_QWORD *)(v9 + 8));
  if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v10, v11);
  this = (WarBoardAIRoute___c__DisplayClass64_0_o *)AStarSearch__RouteSearch(0, baseSquareIndex, v13, 0, 0, v12);
  if ( !this )
LABEL_14:
    sub_21FFECC(this, x);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_T__o *routeDataList; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_5935FAF & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_21FFC50(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__);
    sub_21FFC50(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
    byte_5935FAF = 1;
  }
  v5 = sub_21FFEBC(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = targetObject;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)targetObject, v8, v9, v10, v11, v12, v13);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v15 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    0);
  return BasicHelper__Any_object_(
           routeDataList,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
  __int64 v9; // x9
  int32_t baseIndex; // w23
  int *p_offset; // x10
  __int64 v12; // x0
  struct IWarBoardObjectData_o *v13; // x20
  IWarBoardObjectData_c *v14; // x8
  int32_t actionIndex; // w19
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0

  v4 = this;
  if ( (byte_5935FB0 & 1) == 0 )
  {
    sub_21FFC50(&IWarBoardObjectData_TypeInfo);
    this = (WarBoardAIRoute___c__DisplayClass65_1_o *)sub_21FFC50(&WarBoardItemData_TypeInfo);
    byte_5935FB0 = 1;
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
  v9 = *(unsigned __int16 *)&klass->_2.rank;
  baseIndex = x->fields.baseIndex;
  if ( *(_WORD *)&klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_13;
    }
    v12 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_13:
    v12 = sub_2237E2C(v4->fields.targetObject, IWarBoardObjectData_TypeInfo, 0);
  }
  this = (WarBoardAIRoute___c__DisplayClass65_1_o *)(*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v12)(
                                                      targetObject,
                                                      *(_QWORD *)(v12 + 8));
  if ( baseIndex == (_DWORD)this )
    return 1;
  v13 = v4->fields.targetObject;
  if ( !v13 )
LABEL_25:
    sub_21FFECC(this, x);
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
    v18 = sub_2237E2C(v13, IWarBoardObjectData_TypeInfo, 0);
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
  if ( (byte_5935FB1 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass66_0_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__);
    byte_5935FB1 = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  value = v4->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_21FFECC(this, x);
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
    sub_21FFECC(this, x);
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
    goto LABEL_25;
  if ( x->fields.baseIndex == x->fields.actionIndex )
    return 0;
  flagNow = x->fields.flagNow;
  if ( (flagNow & 2) == 0 )
    goto LABEL_10;
  basePiece = x->fields.basePiece;
  if ( !basePiece )
    goto LABEL_25;
  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    goto LABEL_25;
  if ( basePiece->fields._index_k__BackingField != targetPiece->fields._index_k__BackingField )
  {
LABEL_10:
    v11 = x->fields.basePiece;
    if ( (flagNow & 0x4000000) != 0 )
    {
      if ( !v11 )
        goto LABEL_25;
      v12 = this->fields.targetPiece;
      if ( !v12 )
        goto LABEL_25;
      index_k__BackingField = v12->fields._index_k__BackingField;
      if ( v11->fields._index_k__BackingField == index_k__BackingField )
        goto LABEL_20;
      actionPiece = x->fields.actionPiece;
      if ( !actionPiece )
        goto LABEL_25;
      if ( actionPiece->fields._index_k__BackingField == index_k__BackingField )
        goto LABEL_20;
    }
    else if ( !v11 )
    {
      goto LABEL_25;
    }
    v12 = this->fields.targetPiece;
    if ( !v12 )
      goto LABEL_25;
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
LABEL_25:
    sub_21FFECC(this, x);
  }
  Cost_k__BackingField = targetPiece->fields._Cost_k__BackingField;
  if ( !Cost_k__BackingField )
    goto LABEL_25;
  v8 = 32;
  v9 = Cost_k__BackingField->fields.overwirteAttack < 0;
  v10 = 48;
LABEL_22:
  if ( v9 )
    v10 = v8;
  return *(_DWORD *)((char *)&Cost_k__BackingField->klass + v10);
}