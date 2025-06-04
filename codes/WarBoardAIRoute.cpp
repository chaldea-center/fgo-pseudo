void __fastcall WarBoardAIRoute___ctor(
        WarBoardAIRoute_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
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
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  System_Collections_Generic_List_object__o *v66; // x20
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  System_Collections_Generic_List_object__o *v69; // x20
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  System_Collections_Generic_Dictionary_int__object__o *v72; // x20
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  System_Collections_Generic_List_object__o *v75; // x20
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  WarBoardAIRoute_o *v78; // x23
  System_Collections_Generic_Dictionary_TKey__TValue__o *v79; // x20
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v82; // x20
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v85; // x20
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v88; // x20
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  System_Collections_Generic_Dictionary_int__object__o *v91; // x20
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  WarBoardData_o *playedStageReinforcementsList; // x0
  Il2CppObject *v97; // x1
  const MethodInfo *v98; // x3
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  int32_t v100; // w8
  const MethodInfo *v101; // x3
  WarBoardActionPointEntity_o *v102; // x0
  int32_t v103; // w8
  const MethodInfo *v104; // x3
  WarBoardActionPointEntity_o *v105; // x0
  int32_t v106; // w8
  const MethodInfo *v107; // x3
  WarBoardActionPointEntity_o *v108; // x0
  const MethodInfo *v109; // x1
  int32_t v110; // w8
  struct System_Collections_Generic_List_WarBoardRatingBase__o *v111; // x8
  __int64 size; // x2
  int32_t version; // w9
  CGThumbnailListItem_o *p_aiIds; // x20
  struct System_Int32_array *aiIds; // x24
  System_Array_o *v116; // x21
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  __int64 v119; // x8
  unsigned __int64 v120; // x26
  int v121; // w21
  WarBoardAIRoute_PiecePersonality_o *v122; // x27
  const MethodInfo *v123; // x1
  const MethodInfo *v124; // x5
  WarBoardPieceData_o *Piece; // x0
  int32_t overwriteAiId_k__BackingField; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *v127; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *stageNpcMaster; // x8
  WarBoardData_o *v129; // x29
  unsigned __int64 v130; // x23
  System_Collections_Generic_List_object__o *actionTrandList; // x20
  Il2CppObject *v132; // x22
  WarBoardAIRoute_ActionTrendInfo_o *v133; // x21
  const MethodInfo *v134; // x2
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  struct System_Object_array *items; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v141; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v142; // x8
  WarBoardData_o *v143; // x29
  unsigned __int64 v144; // x20
  const MethodInfo *v145; // x3
  struct System_Int32_array *stageEntity; // x8
  _QWORD *v147; // x9
  __int64 stageNpcMaster_low; // x10
  Il2CppClass **v149; // x8
  Il2CppObject *Master_object; // x27
  Il2CppObject *v151; // x28
  struct System_Collections_Generic_List_int__o *v152; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x20
  System_Func_object__bool__o *v154; // x21
  System_Collections_Generic_Dictionary_int__object__c *klass; // x8
  WarBoardData_o *v156; // x26
  __int64 v157; // x9
  int32_t *p_offset; // x10
  __int64 v159; // x0
  __int64 v160; // x1
  __int64 v161; // x26
  __int64 v162; // x8
  __int64 v163; // x9
  int *v164; // x10
  __int64 v165; // x0
  __int64 v166; // x8
  __int64 v167; // x9
  int *v168; // x10
  __int64 v169; // x0
  __int64 v170; // x1
  int32_t *v171; // x29
  _BOOL8 v172; // x0
  __int64 v173; // x1
  struct System_Int32_array *v174; // x8
  _BOOL8 v175; // x0
  __int64 v176; // x1
  __int64 v177; // x0
  __int64 v178; // x1
  _BOOL8 v179; // x0
  __int64 v180; // x1
  const MethodInfo *v181; // x3
  __int64 v182; // x8
  __int64 v183; // x9
  int *v184; // x10
  __int64 v185; // x0
  CGThumbnailListItem_o *p_ratingBaseIds; // x20
  struct System_Int32_array *ratingBaseIds; // x22
  System_Array_o *v188; // x21
  int32_t v189; // w2
  const MethodInfo *v190; // x3
  __int64 v191; // x8
  unsigned __int64 v192; // x24
  int32_t v193; // w20
  WarBoardData_o *v194; // x25
  __int64 v195; // x26
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  struct System_Int32_array *v200; // x8
  _QWORD *v201; // x9
  __int64 v202; // x10
  Il2CppClass **v203; // x8
  int32_t v204; // w21
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicRatingbaseCalcValue; // x20
  Il2CppObject *v206; // x25
  struct System_Int32_array *tacticalIds; // x19
  CGThumbnailListItem_o *p_tacticalIds; // x21
  System_Array_o *v209; // x20
  int32_t v210; // w2
  const MethodInfo *v211; // x3
  __int64 v212; // x8
  unsigned __int64 v213; // x21
  int32_t v214; // w20
  int32_t v215; // w2
  const MethodInfo *v216; // x3
  System_Collections_Generic_List_object__o *v217; // x8
  struct System_Object_array *v218; // x9
  _QWORD *v219; // x10
  __int64 v220; // x11
  WarBoardData_o *v221; // x1
  Il2CppClass **v222; // x0
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v225; // x22
  const MethodInfo *v226; // x3
  int32_t v227; // w2
  const MethodInfo *v228; // x3
  struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o **p_tacticalTrendList; // [xsp+8h] [xbp-C8h]
  struct System_Collections_Generic_List_WarBoardRatingBase__o **p_ratingBaseList; // [xsp+18h] [xbp-B8h]
  struct System_Int32_array *v232; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_Dictionary_int__object__o **p_piecePersonalityDic; // [xsp+38h] [xbp-98h]
  DataManager_o *Instance; // [xsp+40h] [xbp-90h]
  WarBoardReinforcementsEntity_o *v236; // [xsp+48h] [xbp-88h] BYREF
  WarBoardStageReinforcementsEntity_o *v237; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *item; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *v239; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF
  System_RuntimeFieldHandle_o v241; // 0:w1.4
  System_RuntimeFieldHandle_o v242; // 0:w1.4
  System_RuntimeFieldHandle_o v243; // 0:w1.4

  if ( (byte_4AFF995 & 1) == 0 )
  {
    sub_1BC3008(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, npc);
    sub_1BC3008(&Method_BasicHelper_IndexValue_int____76814760, v3);
    sub_1BC3008(&WarBoardEvalValueSquare_CalcEval_TypeInfo, v4);
    sub_1BC3008(&Method_DataManager_GetMasterData_WarBoardAIMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v10);
    sub_1BC3008(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__, v13);
    sub_1BC3008(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__, v14);
    sub_1BC3008(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__, v15);
    sub_1BC3008(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__, v16);
    sub_1BC3008(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__, v23);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__, v24);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__, v25);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__, v26);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__, v27);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo, v28);
    sub_1BC3008(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo, v29);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo, v30);
    sub_1BC3008(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo, v31);
    sub_1BC3008(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo, v32);
    sub_1BC3008(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo, v33);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v34);
    sub_1BC3008(&System_Func_WarBoardPieceData__bool__TypeInfo, v35);
    sub_1BC3008(&System_IDisposable_TypeInfo, v36);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, v37);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, v38);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v39);
    sub_1BC3008(&int___TypeInfo, v40);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v41);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__, v42);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__, v43);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v44);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__, v45);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__, v46);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__, v47);
    sub_1BC3008(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v48);
    sub_1BC3008(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v49);
    sub_1BC3008(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo, v50);
    sub_1BC3008(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo, v51);
    sub_1BC3008(&WarBoardAIRoute_PiecePersonality_TypeInfo, v52);
    sub_1BC3008(&ShortestDistanceFromAllyMaster_TypeInfo, v53);
    sub_1BC3008(&ShortestDistanceFromAllyServant_TypeInfo, v54);
    sub_1BC3008(&ShortestDistanceFromEnemyMaster_TypeInfo, v55);
    sub_1BC3008(&ShortestDistanceFromEnemyServant_TypeInfo, v56);
    sub_1BC3008(&ShortestDistanceFromItem_TypeInfo, v57);
    sub_1BC3008(&ShortestDistanceFromPrioritySpace_TypeInfo, v58);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v59);
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v60);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384,
      v61);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49,
      v62);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72,
      v63);
    sub_1BC3008(&Method_WarBoardAIRoute___ctor_b__42_0__, v64);
    sub_1BC3008(&WarBoardAiTargetCacher_TypeInfo, v65);
    byte_4AFF995 = 1;
  }
  v239 = 0LL;
  entity = 0LL;
  v237 = 0LL;
  item = 0LL;
  v236 = 0LL;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v66 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v66,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v66;
  p_tacticalTrendList = &this->fields.tacticalTrendList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.tacticalTrendList, (int32_t)v66, v67, v68);
  v69 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v69,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v69;
  p_ratingBaseList = &this->fields.ratingBaseList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.ratingBaseList, (int32_t)v69, v70, v71);
  v72 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v72,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v72;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.piecePersonalityDic, (int32_t)v72, v73, v74);
  v75 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v75;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.allRouteList, (int32_t)v75, v76, v77);
  v78 = this;
  v79 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v79,
    (const MethodInfo_33A51E4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v79;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dicUniqueKeyAdvantagePieceData, (int32_t)v79, v80, v81);
  v82 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v82,
    (const MethodInfo_3375724 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v82;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dictionaryCreateRouteDataEvalValue, (int32_t)v82, v83, v84);
  v85 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v85,
    (const MethodInfo_33A51E4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v85;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dicUniqueKeyDesignationItem, (int32_t)v85, v86, v87);
  v88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v88,
    (const MethodInfo_33A51E4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v88;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dicUniqueKeyTarget, (int32_t)v88, v89, v90);
  v91 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v91,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v91;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dicRatingbaseCalcValue, (int32_t)v91, v92, v93);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.npcData, (int32_t)npc, v94, v95);
  if ( !npc )
    goto LABEL_154;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&npc->fields.forceId;
  this->fields.pickValue = npc->fields.pickValue;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  ActionPointEntity = WarBoardData__GetActionPointEntity(
                        playedStageReinforcementsList,
                        this->fields.forceId,
                        this->fields.groupId,
                        v98);
  v100 = ActionPointEntity ? ActionPointEntity->fields.moveCost : 0;
  this->fields.moveCost = v100;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v102 = WarBoardData__GetActionPointEntity(
           playedStageReinforcementsList,
           this->fields.forceId,
           this->fields.groupId,
           v101);
  v103 = v102 ? v102->fields.masterMoveCost : 0;
  this->fields.masterMoveCost = v103;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v105 = WarBoardData__GetActionPointEntity(
           playedStageReinforcementsList,
           this->fields.forceId,
           this->fields.groupId,
           v104);
  v106 = v105 ? v105->fields.attackCost : 0;
  this->fields.attackCost = v106;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v108 = WarBoardData__GetActionPointEntity(
           playedStageReinforcementsList,
           this->fields.forceId,
           this->fields.groupId,
           v107);
  v110 = v108 ? v108->fields.wallAttackCost : 0;
  this->fields.wallAttackCost = v110;
  WarBoardAIRoute__Clear(this, v109);
  playedStageReinforcementsList = (WarBoardData_o *)this->fields.piecePersonalityDic;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)playedStageReinforcementsList,
    (const MethodInfo_33086DC *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  v111 = *p_ratingBaseList;
  if ( !*p_ratingBaseList )
    goto LABEL_154;
  size = (unsigned int)v111->fields._size;
  version = v111->fields._version;
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.piecePersonalityDic;
  v111->fields._size = 0;
  v111->fields._version = version + 1;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v111->fields._items, 0, size, 0LL);
  p_aiIds = (CGThumbnailListItem_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v116 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 4LL);
    v241.fields.value = Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v116, v241, 0LL);
    p_aiIds->klass = (CGThumbnailListItem_c *)v116;
    sub_1BC2FAC(p_aiIds, (int32_t)v116, v117, v118);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_154;
  }
  v119 = *(_QWORD *)&aiIds->max_length;
  if ( (int)v119 >= 1 )
  {
    v120 = 0LL;
    v232 = aiIds;
    do
    {
      if ( v120 >= (unsigned int)v119 )
        goto LABEL_155;
      v121 = aiIds->m_Items[v120 + 1];
      v122 = (WarBoardAIRoute_PiecePersonality_o *)sub_1BC3254(WarBoardAIRoute_PiecePersonality_TypeInfo);
      WarBoardAIRoute_PiecePersonality___ctor(v122, v123);
      playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !playedStageReinforcementsList )
        goto LABEL_154;
      playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
      if ( !playedStageReinforcementsList )
        goto LABEL_154;
      Piece = WarBoardData__GetPiece(
                playedStageReinforcementsList,
                v78->fields.forceId,
                v78->fields.groupId,
                v120,
                1,
                v124);
      if ( Piece
        && (overwriteAiId_k__BackingField = Piece->fields._overwriteAiId_k__BackingField,
            overwriteAiId_k__BackingField > 0)
        || (overwriteAiId_k__BackingField = v121, v121 >= 1) )
      {
        playedStageReinforcementsList = (WarBoardData_o *)Instance;
        if ( !Instance )
          goto LABEL_154;
        playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                            Instance,
                                                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !playedStageReinforcementsList )
          goto LABEL_154;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
               &entity,
               overwriteAiId_k__BackingField,
               (const MethodInfo_32AF0BC *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                              Instance,
                                                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
          if ( !entity )
            goto LABEL_154;
          v127 = (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList;
          playedStageReinforcementsList = (WarBoardData_o *)WarBoardAIEntity__GetActionTrendIds(
                                                              (WarBoardAIEntity_o *)entity,
                                                              0LL);
          if ( !playedStageReinforcementsList )
            goto LABEL_154;
          stageNpcMaster = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)playedStageReinforcementsList->fields.stageNpcMaster;
          v129 = playedStageReinforcementsList;
          if ( (int)stageNpcMaster >= 1 )
          {
            v130 = 0LL;
            while ( v130 < (unsigned int)stageNpcMaster )
            {
              if ( !v127 )
                goto LABEL_154;
              playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v127,
                                                                  &v239,
                                                                  *((_DWORD *)&v129->fields.npcEntityDict + v130),
                                                                  (const MethodInfo_32AF0BC *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)playedStageReinforcementsList & 1) != 0 )
              {
                if ( !v122 )
                  goto LABEL_154;
                actionTrandList = (System_Collections_Generic_List_object__o *)v122->fields.actionTrandList;
                v132 = v239;
                v133 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1BC3254(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
                WarBoardAIRoute_ActionTrendInfo___ctor(v133, (WarBoardActionTrendEntity_o *)v132, v134);
                if ( !actionTrandList )
                  goto LABEL_154;
                items = actionTrandList->fields._items;
                v138 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
                ++actionTrandList->fields._version;
                if ( !items )
                  goto LABEL_154;
                v139 = actionTrandList->fields._size;
                if ( (unsigned int)v139 >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    actionTrandList,
                    (Il2CppObject *)v133,
                    *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
                }
                else
                {
                  v140 = &items->obj.klass + v139;
                  actionTrandList->fields._size = v139 + 1;
                  v140[4] = (Il2CppClass *)v133;
                  sub_1BC2FAC((CGThumbnailListItem_o *)(v140 + 4), (int32_t)v133, v135, v136);
                }
              }
              LODWORD(stageNpcMaster) = v129->fields.stageNpcMaster;
              if ( (__int64)++v130 >= (int)stageNpcMaster )
                goto LABEL_55;
            }
LABEL_155:
            sub_1BC326C(playedStageReinforcementsList, v97, size);
          }
LABEL_55:
          playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                              Instance,
                                                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_154;
          v141 = (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList;
          playedStageReinforcementsList = (WarBoardData_o *)WarBoardAIEntity__GetRatingOffsetIds(
                                                              (WarBoardAIEntity_o *)entity,
                                                              0LL);
          aiIds = v232;
          v78 = this;
          if ( !playedStageReinforcementsList )
            goto LABEL_154;
          v142 = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)playedStageReinforcementsList->fields.stageNpcMaster;
          v143 = playedStageReinforcementsList;
          if ( (int)v142 >= 1 )
          {
            v144 = 0LL;
            while ( v144 < (unsigned int)v142 )
            {
              if ( !v141 )
                goto LABEL_154;
              playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v141,
                                                                  &item,
                                                                  *((_DWORD *)&v143->fields.npcEntityDict + v144),
                                                                  (const MethodInfo_32AF0BC *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)playedStageReinforcementsList & 1) != 0 )
              {
                if ( !v122 )
                  goto LABEL_154;
                playedStageReinforcementsList = (WarBoardData_o *)v122->fields.ratingOffsetList;
                if ( !playedStageReinforcementsList )
                  goto LABEL_154;
                v97 = item;
                stageEntity = (struct System_Int32_array *)playedStageReinforcementsList->fields.stageEntity;
                v147 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
                ++HIDWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( !stageEntity )
                  goto LABEL_154;
                stageNpcMaster_low = SLODWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( (unsigned int)stageNpcMaster_low >= stageEntity->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)playedStageReinforcementsList,
                    v97,
                    *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
                }
                else
                {
                  v149 = &stageEntity->obj.klass + stageNpcMaster_low;
                  LODWORD(playedStageReinforcementsList->fields.stageNpcMaster) = stageNpcMaster_low + 1;
                  v149[4] = (Il2CppClass *)v97;
                  sub_1BC2FAC((CGThumbnailListItem_o *)(v149 + 4), (int32_t)v97, size, v145);
                }
              }
              LODWORD(v142) = v143->fields.stageNpcMaster;
              if ( (__int64)++v144 >= (int)v142 )
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
        v120,
        (Il2CppObject *)v122,
        (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      LODWORD(v119) = aiIds->max_length;
    }
    while ( (__int64)++v120 < (int)v119 );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v151 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v152 = playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !v152 )
    goto LABEL_154;
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v152[1].monitor;
  v154 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(v154, (Il2CppObject *)v78, Method_WarBoardAIRoute___ctor_b__42_0__, 0LL);
  playedStageReinforcementsList = (WarBoardData_o *)System_Linq_Enumerable__Where_object_(
                                                      monitor,
                                                      (System_Func_TSource__bool__o *)v154,
                                                      (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  klass = (System_Collections_Generic_Dictionary_int__object__c *)playedStageReinforcementsList->klass;
  v156 = playedStageReinforcementsList;
  v157 = *(unsigned __int16 *)(&playedStageReinforcementsList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&playedStageReinforcementsList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      --v157;
      p_offset += 4;
      if ( !v157 )
        goto LABEL_80;
    }
    v159 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_80:
    v159 = sub_1C13570(
             playedStageReinforcementsList,
             System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo,
             0LL);
  }
  v161 = (*(__int64 (__fastcall **)(WarBoardData_o *, _QWORD))v159)(v156, *(_QWORD *)(v159 + 8));
  if ( !v161 )
    sub_1BC3264(0LL, v160);
  while ( 1 )
  {
    v162 = *(_QWORD *)v161;
    v163 = *(unsigned __int16 *)(*(_QWORD *)v161 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v161 + 302LL) )
    {
      v164 = (int *)(*(_QWORD *)(v162 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v164 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v163;
        v164 += 4;
        if ( !v163 )
          goto LABEL_87;
      }
      v165 = v162 + 16LL * *v164 + 312;
    }
    else
    {
LABEL_87:
      v165 = sub_1C13570(v161, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v165)(v161, *(_QWORD *)(v165 + 8)) & 1) == 0 )
      break;
    v166 = *(_QWORD *)v161;
    v167 = *(unsigned __int16 *)(*(_QWORD *)v161 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v161 + 302LL) )
    {
      v168 = (int *)(*(_QWORD *)(v166 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v168 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        --v167;
        v168 += 4;
        if ( !v167 )
          goto LABEL_94;
      }
      v169 = v166 + 16LL * *v168 + 312;
    }
    else
    {
LABEL_94:
      v169 = sub_1C13570(v161, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL);
    }
    v171 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v169)(v161, *(_QWORD *)(v169 + 8));
    if ( !v171 )
      sub_1BC3264(0LL, v170);
    if ( !*p_piecePersonalityDic )
      sub_1BC3264(0LL, v170);
    v172 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
             *p_piecePersonalityDic,
             v171[7],
             (const MethodInfo_3308748 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__);
    if ( !v172 )
    {
      v174 = v152->fields._items;
      if ( !v174 )
        sub_1BC3264(v172, v173);
      if ( !Master_object )
        sub_1BC3264(v172, v173);
      v175 = WarBoardStageReinforcementsMaster__TryGetEntity(
               (WarBoardStageReinforcementsMaster_o *)Master_object,
               &v237,
               (int32_t)v174->bounds,
               v171[72],
               0LL);
      if ( v175 )
      {
        if ( !v237 )
          sub_1BC3264(v175, v176);
        v177 = BasicHelper__IndexValue_int_(
                 v237->fields.reinforcementsIds,
                 v171[73],
                 -1,
                 (const MethodInfo_2FF03F8 *)Method_BasicHelper_IndexValue_int____76814760);
        if ( !v151 )
          sub_1BC3264(v177, v178);
        v179 = WarBoardReinforcementsMaster__TryGetEntity((WarBoardReinforcementsMaster_o *)v151, &v236, v177, 0LL);
        if ( v179 )
        {
          if ( !v236 )
            sub_1BC3264(v179, v180);
          WarBoardAIRoute__AddPiecePersonalityDic(this, v236->fields.aiId, v171[7], v181);
        }
      }
    }
  }
  v182 = *(_QWORD *)v161;
  v183 = *(unsigned __int16 *)(*(_QWORD *)v161 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v161 + 302LL) )
  {
    v184 = (int *)(*(_QWORD *)(v182 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v184 - 1) != System_IDisposable_TypeInfo )
    {
      --v183;
      v184 += 4;
      if ( !v183 )
        goto LABEL_111;
    }
    v185 = v182 + 16LL * *v184 + 312;
  }
  else
  {
LABEL_111:
    v185 = sub_1C13570(v161, System_IDisposable_TypeInfo, 0LL);
  }
  playedStageReinforcementsList = (WarBoardData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v185)(
                                                      v161,
                                                      *(_QWORD *)(v185 + 8));
  p_ratingBaseIds = (CGThumbnailListItem_o *)&npc->fields.ratingBaseIds;
  ratingBaseIds = npc->fields.ratingBaseIds;
  if ( !ratingBaseIds )
  {
    v188 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 6LL);
    v242.fields.value = Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v188, v242, 0LL);
    p_ratingBaseIds->klass = (CGThumbnailListItem_c *)v188;
    sub_1BC2FAC(p_ratingBaseIds, (int32_t)v188, v189, v190);
    ratingBaseIds = (struct System_Int32_array *)p_ratingBaseIds->klass;
    if ( !p_ratingBaseIds->klass )
LABEL_154:
      sub_1BC3264(playedStageReinforcementsList, v97);
  }
  v191 = *(_QWORD *)&ratingBaseIds->max_length;
  if ( (int)v191 >= 1 )
  {
    v192 = 0LL;
    while ( 2 )
    {
      if ( v192 >= (unsigned int)v191 )
        goto LABEL_155;
      playedStageReinforcementsList = (WarBoardData_o *)Instance;
      if ( Instance )
      {
        v193 = ratingBaseIds->m_Items[v192 + 1];
        playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                            Instance,
                                                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
        if ( playedStageReinforcementsList )
        {
          playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___GetEntity(
                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
                                                              v193,
                                                              (const MethodInfo_32AF070 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
          if ( playedStageReinforcementsList )
          {
            v194 = playedStageReinforcementsList;
            switch ( HIDWORD(playedStageReinforcementsList->fields.stageEntity) )
            {
              case 0:
                v195 = sub_1BC3254(ShortestDistanceFromAllyServant_TypeInfo);
                ShortestDistanceFromAllyServant___ctor((ShortestDistanceFromAllyServant_o *)v195, 0LL);
                if ( !v195 )
                  goto LABEL_154;
                goto LABEL_133;
              case 1:
                v195 = sub_1BC3254(ShortestDistanceFromEnemyServant_TypeInfo);
                ShortestDistanceFromEnemyServant___ctor((ShortestDistanceFromEnemyServant_o *)v195, 0LL);
                if ( !v195 )
                  goto LABEL_154;
                goto LABEL_133;
              case 2:
                v195 = sub_1BC3254(ShortestDistanceFromAllyMaster_TypeInfo);
                ShortestDistanceFromAllyMaster___ctor((ShortestDistanceFromAllyMaster_o *)v195, 0LL);
                if ( !v195 )
                  goto LABEL_154;
                goto LABEL_133;
              case 3:
                v195 = sub_1BC3254(ShortestDistanceFromEnemyMaster_TypeInfo);
                ShortestDistanceFromEnemyMaster___ctor((ShortestDistanceFromEnemyMaster_o *)v195, 0LL);
                if ( !v195 )
                  goto LABEL_154;
                goto LABEL_133;
              case 4:
                v195 = sub_1BC3254(ShortestDistanceFromItem_TypeInfo);
                ShortestDistanceFromItem___ctor((ShortestDistanceFromItem_o *)v195, 0LL);
                if ( !v195 )
                  goto LABEL_154;
                goto LABEL_133;
              case 5:
                v195 = sub_1BC3254(ShortestDistanceFromPrioritySpace_TypeInfo);
                ShortestDistanceFromPrioritySpace___ctor((ShortestDistanceFromPrioritySpace_o *)v195, 0LL);
                if ( !v195 )
                  goto LABEL_154;
LABEL_133:
                *(_QWORD *)(v195 + 16) = v194;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v195 + 16), (int32_t)v194, v196, v197);
                playedStageReinforcementsList = (WarBoardData_o *)*p_ratingBaseList;
                if ( !*p_ratingBaseList )
                  goto LABEL_154;
                v200 = (struct System_Int32_array *)playedStageReinforcementsList->fields.stageEntity;
                v201 = Method_System_Collections_Generic_List_WarBoardRatingBase__Add__;
                ++HIDWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( !v200 )
                  goto LABEL_154;
                v202 = SLODWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( (unsigned int)v202 >= v200->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)playedStageReinforcementsList,
                    (Il2CppObject *)v195,
                    *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
                }
                else
                {
                  v203 = &v200->obj.klass + v202;
                  LODWORD(playedStageReinforcementsList->fields.stageNpcMaster) = v202 + 1;
                  v203[4] = (Il2CppClass *)v195;
                  sub_1BC2FAC((CGThumbnailListItem_o *)(v203 + 4), v195, v198, v199);
                }
LABEL_138:
                v204 = (int32_t)v194->fields.stageEntity;
                dicRatingbaseCalcValue = this->fields.dicRatingbaseCalcValue;
                v206 = (Il2CppObject *)sub_1BC3254(WarBoardEvalValueSquare_CalcEval_TypeInfo);
                System_Object___ctor(v206, 0LL);
                if ( !dicRatingbaseCalcValue )
                  goto LABEL_154;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                  v204,
                  v206,
                  (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
                LODWORD(v191) = ratingBaseIds->max_length;
                if ( (__int64)++v192 >= (int)v191 )
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
  p_tacticalIds = (CGThumbnailListItem_o *)&npc->fields.tacticalIds;
  tacticalIds = npc->fields.tacticalIds;
  if ( !tacticalIds )
  {
    v209 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 5LL);
    v243.fields.value = Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v209, v243, 0LL);
    p_tacticalIds->klass = (CGThumbnailListItem_c *)v209;
    sub_1BC2FAC(p_tacticalIds, (int32_t)v209, v210, v211);
    tacticalIds = (struct System_Int32_array *)p_tacticalIds->klass;
    if ( !p_tacticalIds->klass )
      goto LABEL_154;
  }
  v212 = *(_QWORD *)&tacticalIds->max_length;
  if ( (int)v212 >= 1 )
  {
    v213 = 0LL;
    while ( v213 < (unsigned int)v212 )
    {
      playedStageReinforcementsList = (WarBoardData_o *)Instance;
      if ( !Instance )
        goto LABEL_154;
      v214 = tacticalIds->m_Items[v213 + 1];
      playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                          Instance,
                                                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !playedStageReinforcementsList )
        goto LABEL_154;
      playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
                                                          v214,
                                                          (const MethodInfo_32AF070 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      v217 = (System_Collections_Generic_List_object__o *)*p_tacticalTrendList;
      if ( !*p_tacticalTrendList )
        goto LABEL_154;
      v218 = v217->fields._items;
      v219 = Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__;
      ++v217->fields._version;
      if ( !v218 )
        goto LABEL_154;
      v220 = v217->fields._size;
      v221 = playedStageReinforcementsList;
      if ( (unsigned int)v220 >= v218->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v217,
          (Il2CppObject *)playedStageReinforcementsList,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v219[4] + 192LL) + 112LL));
      }
      else
      {
        v222 = &v218->obj.klass + v220;
        v217->fields._size = v220 + 1;
        v222[4] = (Il2CppClass *)v221;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v222 + 4), (int32_t)v221, v215, v216);
      }
      LODWORD(v212) = tacticalIds->max_length;
      if ( (__int64)++v213 >= (int)v212 )
        goto LABEL_153;
    }
    goto LABEL_155;
  }
LABEL_153:
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v225 = (WarBoardAiTargetCacher_o *)sub_1BC3254(WarBoardAiTargetCacher_TypeInfo);
  WarBoardAiTargetCacher___ctor(v225, forceId, groupId, v226);
  this->fields.aiTargetCacher = v225;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.aiTargetCacher, (int32_t)v225, v227, v228);
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
  __int64 v22; // x25
  System_Int32_array *Entity; // x0
  Il2CppObject *p_obj; // x1
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x21
  System_Func_T__TResult__o *v26; // x22
  Il2CppObject *Master_object; // x25
  Il2CppObject *v28; // x24
  Il2CppObject *v29; // x22
  WarBoardAIRoute_PiecePersonality_o *v30; // x21
  const MethodInfo *v31; // x1
  __int64 v32; // x2
  __int64 v33; // x8
  System_Int32_array *v34; // x25
  unsigned __int64 v35; // x29
  System_Collections_Generic_List_object__o *actionTrandList; // x26
  WarBoardActionTrendEntity_o *v37; // x28
  WarBoardAIRoute_ActionTrendInfo_o *v38; // x27
  const MethodInfo *v39; // x2
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  __int64 v46; // x8
  System_Int32_array *v47; // x23
  unsigned __int64 v48; // x19
  const MethodInfo *v49; // x3
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v51; // x9
  __int64 max_length; // x10
  Il2CppArrayBounds *v53; // x8
  __int64 v54; // [xsp+8h] [xbp-78h]
  WarBoardAIRoute_o *v55; // [xsp+10h] [xbp-70h]
  WarBoardAIEntity_o *v56; // [xsp+18h] [xbp-68h]

  if ( (byte_4AFF996 & 1) == 0 )
  {
    sub_1BC3008(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, *(_QWORD *)&aiId);
    sub_1BC3008(&Method_DataManager_GetMaster_WarBoardAIMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__, v11);
    sub_1BC3008(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__, v12);
    sub_1BC3008(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v14);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____, v15);
    sub_1BC3008(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v18);
    sub_1BC3008(&WarBoardAIRoute_PiecePersonality_TypeInfo, v19);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__, v20);
    sub_1BC3008(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo, v21);
    byte_4AFF996 = 1;
  }
  v22 = sub_1BC3254(WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_37;
  *(_DWORD *)(v22 + 16) = pieceIndex;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  v26 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
  System_Func_KeyValuePair_int__object___bool____ctor(
    v26,
    (Il2CppObject *)v22,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    0LL);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__object___50390388(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v26,
         (const MethodInfo_300E574 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  v54 = v22;
  v55 = this;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v28 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v29 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v30 = (WarBoardAIRoute_PiecePersonality_o *)sub_1BC3254(WarBoardAIRoute_PiecePersonality_TypeInfo);
  WarBoardAIRoute_PiecePersonality___ctor(v30, v31);
  if ( !Master_object )
    goto LABEL_37;
  Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   aiId,
                                   (const MethodInfo_32AF070 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_37;
  v56 = (WarBoardAIEntity_o *)Entity;
  Entity = WarBoardAIEntity__GetActionTrendIds((WarBoardAIEntity_o *)Entity, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v33 = *(_QWORD *)&Entity->max_length;
  v34 = Entity;
  if ( (int)v33 >= 1 )
  {
    v35 = 0LL;
    while ( v35 < (unsigned int)v33 )
    {
      if ( !v28 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v28,
                                       v34->m_Items[v35 + 1],
                                       (const MethodInfo_32AF070 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v30 )
          goto LABEL_37;
        actionTrandList = (System_Collections_Generic_List_object__o *)v30->fields.actionTrandList;
        v37 = (WarBoardActionTrendEntity_o *)Entity;
        v38 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1BC3254(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v38, v37, v39);
        if ( !actionTrandList )
          goto LABEL_37;
        items = actionTrandList->fields._items;
        v43 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++actionTrandList->fields._version;
        if ( !items )
          goto LABEL_37;
        size = actionTrandList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            actionTrandList,
            (Il2CppObject *)v38,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &items->obj.klass + size;
          actionTrandList->fields._size = size + 1;
          v45[4] = (Il2CppClass *)v38;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v38, v40, v41);
        }
      }
      LODWORD(v33) = v34->max_length;
      if ( (__int64)++v35 >= (int)v33 )
        goto LABEL_22;
    }
LABEL_38:
    sub_1BC326C(Entity, p_obj, v32);
  }
LABEL_22:
  Entity = WarBoardAIEntity__GetRatingOffsetIds(v56, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v46 = *(_QWORD *)&Entity->max_length;
  v47 = Entity;
  if ( (int)v46 >= 1 )
  {
    v48 = 0LL;
    while ( v48 < (unsigned int)v46 )
    {
      if ( !v29 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v29,
                                       v47->m_Items[v48 + 1],
                                       (const MethodInfo_32AF070 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v30 )
          goto LABEL_37;
        p_obj = &Entity->obj;
        Entity = (System_Int32_array *)v30->fields.ratingOffsetList;
        if ( !Entity )
          goto LABEL_37;
        bounds = Entity->bounds;
        v51 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
        ++Entity->m_Items[0];
        if ( !bounds )
          goto LABEL_37;
        max_length = (int)Entity->max_length;
        if ( (unsigned int)max_length >= bounds[3].length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Entity,
            p_obj,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = &bounds[max_length];
          Entity->max_length = max_length + 1;
          v53[4] = (Il2CppArrayBounds)p_obj;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v53[4], (int32_t)p_obj, v32, v49);
        }
      }
      LODWORD(v46) = v47->max_length;
      if ( (__int64)++v48 >= (int)v46 )
        goto LABEL_35;
    }
    goto LABEL_38;
  }
LABEL_35:
  Entity = (System_Int32_array *)v55->fields.piecePersonalityDic;
  if ( !Entity )
LABEL_37:
    sub_1BC3264(Entity, p_obj);
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)Entity,
    *(_DWORD *)(v54 + 16),
    (Il2CppObject *)v30,
    (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
}


void __fastcall WarBoardAIRoute__BeforeCreateRouteData(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *Instance; // x0
  const MethodInfo *v56; // x1
  _QWORD *v57; // x19
  System_Collections_Generic_List_object__o *v58; // x22
  System_Collections_Generic_List_object__o *v59; // x21
  System_Collections_Generic_List_object__o *v60; // x20
  __int64 v61; // x2
  const MethodInfo *v62; // x3
  __int64 v63; // x24
  int v64; // w8
  unsigned int v65; // w25
  __int64 v66; // x23
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  WarBoardAIRoute_o *v71; // x10
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  System_Object_array *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_Object_array *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct WarBoardSquareData_array *v86; // x1
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  struct WarBoardItemData_array *v89; // x1
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  struct WarBoardTreasureData_array *v92; // x1
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  struct WarBoardWallData_array *v95; // x1
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  System_Collections_Generic_List_object__o *v98; // x25
  int32_t forceId; // w19
  int32_t groupId; // w20
  WarBoardAIRoute_AIRouteMasterData_o *v101; // x21
  const MethodInfo *v102; // x3
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  System_Collections_Generic_Dictionary_int__uint__o *v105; // x19
  struct System_Collections_Generic_Dictionary_int__uint__o **p_placePieceData; // x24
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  const MethodInfo *v109; // x3
  struct WarBoardPieceData_array *allAllyPiece; // x19
  int max_length; // w8
  unsigned int v112; // w20
  WarBoardPieceData_o *v113; // x21
  const MethodInfo *v114; // x3
  int32_t forceId_k__BackingField; // w8
  int32_t v116; // w9
  int32_t v117; // w1
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v121; // x20
  __int64 v122; // x9
  int *p_offset; // x10
  __int64 v124; // x0
  __int64 v125; // x1
  __int64 v126; // x22
  __int64 v127; // x8
  __int64 v128; // x9
  int *v129; // x10
  __int64 v130; // x0
  __int64 v131; // x8
  __int64 v132; // x9
  int *v133; // x10
  __int64 v134; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v135; // x0
  const MethodInfo *v136; // x1
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x20
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  __int64 v139; // x1
  __int64 v140; // x2
  int v141; // w8
  unsigned int v142; // w9
  WarBoardActionTrendConditionEntity_o *v143; // x25
  struct System_Int32_array *conditionTypes; // x23
  __int64 v145; // x8
  unsigned __int64 v146; // x28
  int32_t v147; // w26
  __int64 v148; // x29
  __int64 v149; // x0
  __int64 v150; // x1
  __int64 ConditionType; // x0
  __int64 v152; // x1
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexKeyItemData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_object__bool__o *v155; // x21
  __int64 v156; // x1
  Il2CppObject *v157; // x2
  System_Collections_Generic_Dictionary_int__object__o *v158; // x0
  int32_t v159; // w19
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x0
  const MethodInfo *v162; // x2
  TargetDetector_o *DetectorByTrendKey; // x0
  __int64 v164; // x1
  System_Func_T__TResult__o *v165; // x19
  WarBoardAiTargetCacher_o *v166; // x19
  int64_t v167; // x0
  const MethodInfo *v168; // x4
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicIndividualityPutSqareIndex; // x21
  int64_t v170; // x19
  int64_t v171; // x24
  __int64 v172; // x22
  __int64 v173; // x0
  __int64 v174; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x21
  WarBoardAIRoute_o *v176; // x0
  const MethodInfo *v177; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicSquarePutSqareIndex; // x19
  int64_t v179; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_object__bool__o *v181; // x21
  WarBoardActionTrendConditionEntity_array *v182; // x29
  int64_t v183; // x19
  __int64 v184; // x21
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v187; // x19
  int64_t v188; // x0
  __int64 v189; // x8
  __int64 v190; // x9
  int *v191; // x10
  __int64 v192; // x0
  WarBoardAiTargetCacher_o *v193; // x20
  WarBoardAIRoute___c_c *v194; // x8
  System_Func_object__bool__o *_9__45_0; // x19
  Il2CppObject *v196; // x21
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v200; // x0
  const MethodInfo *v201; // x2
  WarBoardAIRoute_AdvantagePieceData_o *v202; // x20
  const MethodInfo *v203; // x1
  struct WarBoardPieceData_array *v204; // x21
  int v205; // w8
  int32_t v206; // w24
  unsigned int v207; // w22
  Il2CppClass **v208; // x8
  Il2CppClass *v209; // x25
  int32_t ClassId; // w19
  float Magnification; // s10
  float v212; // s11
  float v213; // s8
  float v214; // s9
  const MethodInfo *v215; // x1
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+10h] [xbp-110h]
  struct WarBoardAIRoute_AIRouteMasterData_o **p_aiRouteMasterData; // [xsp+18h] [xbp-108h]
  struct WarBoardPieceData_array *v218; // [xsp+20h] [xbp-100h]
  unsigned int v219; // [xsp+34h] [xbp-ECh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-E8h]
  unsigned int v221; // [xsp+44h] [xbp-DCh]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+48h] [xbp-D8h]
  __int64 v224; // [xsp+68h] [xbp-B8h]
  System_Collections_Generic_List_IWarBoardObjectData__o *objectList; // [xsp+70h] [xbp-B0h]
  WarBoardAIRoute_DesignationItemData_o *v226; // [xsp+78h] [xbp-A8h]
  WarBoardAIRoute_PutSquareTarget_o *v227; // [xsp+80h] [xbp-A0h]
  bool notSquareTarget; // [xsp+88h] [xbp-98h] BYREF
  int32_t condType; // [xsp+8Ch] [xbp-94h] BYREF
  Il2CppObject *value; // [xsp+98h] [xbp-88h] BYREF

  if ( (byte_4AFF998 & 1) == 0 )
  {
    sub_1BC3008(&WarBoardAIRoute_AIRouteMasterData_TypeInfo, method);
    sub_1BC3008(&WarBoardAIRoute_AdvantagePieceData_TypeInfo, v2);
    sub_1BC3008(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&WarBoardAIRoute_DesignationItemData_TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__uint__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v23);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v24);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, v25);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, v26);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, v27);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v28);
    sub_1BC3008(&System_Func_IWarBoardObjectData__bool__TypeInfo, v29);
    sub_1BC3008(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v30);
    sub_1BC3008(&System_Func_WarBoardItemData__bool__TypeInfo, v31);
    sub_1BC3008(&System_Func_WarBoardSquareData__bool__TypeInfo, v32);
    sub_1BC3008(&System_IDisposable_TypeInfo, v33);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v34);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v35);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v36);
    sub_1BC3008(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__, v37);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v38);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v39);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v40);
    sub_1BC3008(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__, v41);
    sub_1BC3008(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v42);
    sub_1BC3008(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo, v43);
    sub_1BC3008(&WarBoardAIRoute_PutSquareTarget_TypeInfo, v44);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v46);
    sub_1BC3008(&SvtClassAttri_TypeInfo, v47);
    sub_1BC3008(&WarBoardAIRoute_TargetData_TypeInfo, v48);
    sub_1BC3008(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__, v49);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__, v50);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__, v51);
    sub_1BC3008(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo, v52);
    sub_1BC3008(&WarBoardAIRoute___c_TypeInfo, v53);
    sub_1BC3008(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__, v54);
    byte_4AFF998 = 1;
  }
  value = 0LL;
  condType = 0;
  notSquareTarget = 0;
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_225;
  v57 = *(_QWORD **)&Instance[5].fields._freeCount;
  v58 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v59 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v60 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v57 )
    goto LABEL_225;
  v63 = v57[6];
  if ( !v63 )
    goto LABEL_225;
  v64 = *(_DWORD *)(v63 + 24);
  if ( v64 >= 1 )
  {
    v65 = 0;
    while ( 1 )
    {
      if ( v65 >= v64 )
LABEL_226:
        sub_1BC326C(Instance, v56, v61);
      if ( !v60 )
        break;
      v66 = *(_QWORD *)(v63 + 8LL * (int)v65 + 32);
      items = v60->fields._items;
      v68 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v60->fields._version;
      if ( !items )
        break;
      size = v60->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v60,
          (Il2CppObject *)v66,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = &items->obj.klass + size;
        v60->fields._size = size + 1;
        v70[4] = (Il2CppClass *)v66;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v70 + 4), v66, v61, v62);
      }
      if ( !v66 )
        break;
      if ( !*(_BYTE *)(v66 + 60) )
      {
        v71 = this;
        if ( *(_DWORD *)(v66 + 20) == this->fields.forceId && *(_DWORD *)(v66 + 24) == this->fields.groupId )
        {
          if ( !v58 )
            break;
          v72 = v58->fields._items;
          v73 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v58->fields._version;
          if ( !v72 )
            break;
          v74 = v58->fields._size;
          if ( (unsigned int)v74 >= v72->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v58,
              (Il2CppObject *)v66,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = &v72->obj.klass + v74;
            v58->fields._size = v74 + 1;
            v75[4] = (Il2CppClass *)v66;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v75 + 4), v66, v61, v62);
          }
          v71 = this;
        }
        if ( *(_DWORD *)(v66 + 20) != v71->fields.forceId )
        {
          if ( !v59 )
            break;
          v76 = v59->fields._items;
          v77 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v59->fields._version;
          if ( !v76 )
            break;
          v78 = v59->fields._size;
          if ( (unsigned int)v78 >= v76->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v59,
              (Il2CppObject *)v66,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
          }
          else
          {
            v79 = &v76->obj.klass + v78;
            v59->fields._size = v78 + 1;
            v79[4] = (Il2CppClass *)v66;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v79 + 4), v66, v61, v62);
          }
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                (WarBoardPieceData_o *)v66,
                                                                                0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            this->fields.enemyMasterSquareIndex = *(_DWORD *)(v66 + 64);
        }
      }
      v64 = *(_DWORD *)(v63 + 24);
      if ( (int)++v65 >= v64 )
        goto LABEL_33;
    }
LABEL_225:
    sub_1BC3264(Instance, v56);
  }
LABEL_33:
  if ( !v58 )
    goto LABEL_225;
  v80 = System_Collections_Generic_List_object___ToArray(
          v58,
          (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allAllyPiece = (struct WarBoardPieceData_array *)v80;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.allAllyPiece, (int32_t)v80, v81, v82);
  if ( !v59 )
    goto LABEL_225;
  v83 = System_Collections_Generic_List_object___ToArray(
          v59,
          (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v83;
  p_allEnemyPiece = &this->fields.allEnemyPiece;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.allEnemyPiece, (int32_t)v83, v84, v85);
  v86 = (struct WarBoardSquareData_array *)v57[7];
  this->fields.allSquare = v86;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.allSquare, (int32_t)v86, v87, v88);
  v89 = (struct WarBoardItemData_array *)v57[9];
  this->fields.allItemData = v89;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.allItemData, (int32_t)v89, v90, v91);
  v92 = (struct WarBoardTreasureData_array *)v57[10];
  this->fields.allTreasureData = v92;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.allTreasureData, (int32_t)v92, v93, v94);
  v95 = (struct WarBoardWallData_array *)v57[11];
  this->fields.allWallData = v95;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.allWallData, (int32_t)v95, v96, v97);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictionaryCreateRouteDataEvalValue;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_object__float___Clear(
    Instance,
    (const MethodInfo_3376264 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_33A5D40 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_33A5D40 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_33A5D40 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_225;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v98 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v98,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v98 )
    goto LABEL_225;
  System_Collections_Generic_List_object___AddRange(
    v98,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allItemData,
    (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v98,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allTreasureData,
    (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v98,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWallData,
    (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  objectList = (System_Collections_Generic_List_IWarBoardObjectData__o *)v98;
  System_Collections_Generic_List_object___AddRange(
    v98,
    (System_Collections_Generic_IEnumerable_T__o *)v60,
    (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v101 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_1BC3254(WarBoardAIRoute_AIRouteMasterData_TypeInfo);
  WarBoardAIRoute_AIRouteMasterData___ctor(v101, forceId, groupId, v102);
  this->fields.aiRouteMasterData = v101;
  p_aiRouteMasterData = &this->fields.aiRouteMasterData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.aiRouteMasterData, (int32_t)v101, v103, v104);
  v105 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v105,
    (const MethodInfo_332A964 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  this->fields.placePieceData = v105;
  p_placePieceData = &this->fields.placePieceData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.placePieceData, (int32_t)v105, v107, v108);
  allAllyPiece = this->fields.allAllyPiece;
  if ( !allAllyPiece )
    goto LABEL_225;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v112 = 0;
    v218 = this->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v112 >= max_length )
        goto LABEL_226;
      v113 = allAllyPiece->m_Items[v112];
      if ( !v113 )
        goto LABEL_225;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_225;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
                                                                            v113->fields._nowSquareIndex_k__BackingField,
                                                                            (const MethodInfo_332B514 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_201;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      pieceData = v113;
      if ( !*p_placePieceData )
        goto LABEL_225;
      System_Collections_Generic_Dictionary_int__uint___Add(
        (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
        v113->fields._nowSquareIndex_k__BackingField,
        v113->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_332B328 *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
      forceId_k__BackingField = v113->fields._forceId_k__BackingField;
      v116 = this->fields.forceId;
      if ( forceId_k__BackingField != v116 )
        goto LABEL_57;
      if ( v113->fields._groupId_k__BackingField == this->fields.groupId )
        break;
LABEL_58:
      if ( v113->fields._groupId_k__BackingField == this->fields.groupId )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
        if ( !*p_aiRouteMasterData )
          goto LABEL_225;
        v117 = 2;
        goto LABEL_61;
      }
LABEL_62:
      v226 = (WarBoardAIRoute_DesignationItemData_o *)sub_1BC3254(WarBoardAIRoute_DesignationItemData_TypeInfo);
      WarBoardAIRoute_DesignationItemData___ctor(v226, v118);
      v227 = (WarBoardAIRoute_PutSquareTarget_o *)sub_1BC3254(WarBoardAIRoute_PutSquareTarget_TypeInfo);
      WarBoardAIRoute_PutSquareTarget___ctor(v227, v119);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.piecePersonalityDic;
      if ( !Instance )
        goto LABEL_225;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                                                            v113->fields._index_k__BackingField,
                                                                            &value,
                                                                            (const MethodInfo_3309CE0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)value;
        v219 = v112;
        if ( !value )
          goto LABEL_225;
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
                                                                              (WarBoardAIRoute_PiecePersonality_o *)value,
                                                                              v56);
        if ( !Instance )
          goto LABEL_225;
        klass = Instance->klass;
        v121 = Instance;
        v122 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
          {
            --v122;
            p_offset += 4;
            if ( !v122 )
              goto LABEL_70;
          }
          v124 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_70:
          v124 = sub_1C13570(
                   Instance,
                   System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                   0LL);
        }
        v126 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v124)(
                 v121,
                 *(_QWORD *)(v124 + 8));
        v224 = v126;
        if ( !v126 )
          sub_1BC3264(0LL, v125);
        while ( 1 )
        {
LABEL_73:
          v127 = *(_QWORD *)v126;
          v128 = *(unsigned __int16 *)(*(_QWORD *)v126 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v126 + 302LL) )
          {
            v129 = (int *)(*(_QWORD *)(v127 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v129 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v128;
              v129 += 4;
              if ( !v128 )
                goto LABEL_77;
            }
            v130 = v127 + 16LL * *v129 + 312;
          }
          else
          {
LABEL_77:
            v130 = sub_1C13570(v126, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v130)(v126, *(_QWORD *)(v130 + 8)) & 1) == 0 )
            break;
          v131 = *(_QWORD *)v126;
          v132 = *(unsigned __int16 *)(*(_QWORD *)v126 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v126 + 302LL) )
          {
            v133 = (int *)(*(_QWORD *)(v131 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__c **)v133 - 1) != System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
            {
              --v132;
              v133 += 4;
              if ( !v132 )
                goto LABEL_84;
            }
            v134 = v131 + 16LL * *v133 + 312;
          }
          else
          {
LABEL_84:
            v134 = sub_1C13570(
                     v126,
                     System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                     0LL);
          }
          v135 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v134)(
                                                        v126,
                                                        *(_QWORD *)(v134 + 8));
          if ( !v135 )
            sub_1BC3264(0LL, v136);
          Entity_k__BackingField = v135->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v135, v136);
          if ( !ConditionEntityArray )
            sub_1BC3264(0LL, v139);
          v141 = ConditionEntityArray->max_length;
          if ( v141 >= 1 )
          {
            v142 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v142 >= v141 )
                sub_1BC326C(ConditionEntityArray, v139, v140);
              v143 = ConditionEntityArray->m_Items[v142];
              if ( !v143 )
                sub_1BC3264(ConditionEntityArray, v139);
              conditionTypes = v143->fields.conditionTypes;
              if ( !conditionTypes )
                sub_1BC3264(ConditionEntityArray, v139);
              v145 = *(_QWORD *)&conditionTypes->max_length;
              v221 = v142;
              if ( (int)v145 >= 1 )
                break;
LABEL_137:
              ConditionEntityArray = condEntityArray;
              v141 = condEntityArray->max_length;
              v142 = v221 + 1;
              if ( (int)(v221 + 1) >= v141 )
                goto LABEL_73;
            }
            v146 = 0LL;
            while ( 2 )
            {
              if ( v146 >= (unsigned int)v145 )
                sub_1BC326C(ConditionEntityArray, v139, v140);
              v147 = conditionTypes->m_Items[v146 + 1];
              v148 = sub_1BC3254(WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v148, 0LL);
              if ( !v148 )
                sub_1BC3264(v149, v150);
              *(_DWORD *)(v148 + 16) = -1;
              ConditionType = WarBoardActionTrendConditionEntity__GetConditionType(v143, v147, 0LL);
              if ( (int)ConditionType <= 39 )
              {
                if ( (_DWORD)ConditionType == 23 || (_DWORD)ConditionType == 24 )
                  goto LABEL_104;
LABEL_136:
                v152 = *(unsigned int *)(v148 + 16);
              }
              else
              {
                if ( (_DWORD)ConditionType != 40 && (_DWORD)ConditionType != 41 && (_DWORD)ConditionType != 42 )
                  goto LABEL_136;
LABEL_104:
                v152 = (unsigned int)v143->fields.value;
                *(_DWORD *)(v148 + 16) = v152;
              }
              if ( (_DWORD)v152 != -1 )
              {
                if ( !v226 )
                  sub_1BC3264(ConditionType, v152);
                dicSquareIndexKeyItemData = (System_Collections_Generic_Dictionary_int__object__o *)v226->fields.dicSquareIndexKeyItemData;
                if ( !dicSquareIndexKeyItemData )
                  sub_1BC3264(0LL, v152);
                if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                        dicSquareIndexKeyItemData,
                        v152,
                        (const MethodInfo_3308748 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__) )
                {
                  allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allItemData;
                  v155 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_WarBoardItemData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v155,
                    (Il2CppObject *)v148,
                    Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                    0LL);
                  v157 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
                           allItemData,
                           (System_Func_TSource__bool__o *)v155,
                           (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                  if ( v157 )
                  {
                    v158 = (System_Collections_Generic_Dictionary_int__object__o *)v226->fields.dicSquareIndexKeyItemData;
                    if ( !v158 )
                      sub_1BC3264(0LL, v156);
                    System_Collections_Generic_Dictionary_int__object___Add(
                      v158,
                      *(_DWORD *)(v148 + 16),
                      v157,
                      (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                  }
                }
              }
              *(_DWORD *)(v148 + 16) = -1;
              ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)WarBoardActionTrendConditionEntity__GetConditionType(
                                                                                   v143,
                                                                                   v147,
                                                                                   0LL);
              if ( (_DWORD)ConditionEntityArray == 74 || (_DWORD)ConditionEntityArray == 75 )
              {
                v159 = v143->fields.value;
                *(_DWORD *)(v148 + 16) = v159;
              }
              else
              {
                if ( (unsigned int)((_DWORD)ConditionEntityArray - 127) <= 1 )
                {
                  if ( !Entity_k__BackingField )
                    sub_1BC3264(ConditionEntityArray, v139);
                  aiTargetCacher = this->fields.aiTargetCacher;
                  TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  if ( !aiTargetCacher )
                    sub_1BC3264(TrendKey, TrendKey);
                  DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(aiTargetCacher, TrendKey, v162);
                  if ( !DetectorByTrendKey )
                  {
                    v165 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
                    System_Func_Int32Enum__bool____ctor(
                      v165,
                      0LL,
                      Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                      0LL);
                    WarBoardActionTrendConditionMaster__HasMatchCondition(
                      condEntityArray,
                      (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v165,
                      &condType,
                      0LL);
                    v166 = this->fields.aiTargetCacher;
                    v167 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                    if ( !v166 )
                      sub_1BC3264(v167, v167);
                    WarBoardAiTargetCacher__Register(v166, v167, v143, condType, v168);
                  }
                  if ( !v227 )
                    sub_1BC3264(DetectorByTrendKey, v164);
                  dicIndividualityPutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v227->fields.dicIndividualityPutSqareIndex;
                  v170 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  v171 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  v172 = sub_1BC3254(WarBoardAIRoute_TargetData_TypeInfo);
                  *(_DWORD *)(v172 + 64) = 2;
                  System_Object___ctor((Il2CppObject *)v172, 0LL);
                  *(_QWORD *)(v172 + 104) = v171;
                  *(_DWORD *)(v172 + 112) = v147;
                  if ( !dicIndividualityPutSqareIndex )
                    sub_1BC3264(v173, v174);
                  System_Collections_Generic_Dictionary_long__object___set_Item(
                    dicIndividualityPutSqareIndex,
                    v170,
                    (Il2CppObject *)v172,
                    (const MethodInfo_334BD20 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                }
                v159 = *(_DWORD *)(v148 + 16);
                v126 = v224;
              }
              if ( v159 != -1 )
              {
                if ( !v227 )
                  sub_1BC3264(ConditionEntityArray, v139);
                if ( !Entity_k__BackingField )
                  sub_1BC3264(ConditionEntityArray, v139);
                dicObjectPutSquareIndex = v227->fields.dicObjectPutSquareIndex;
                v176 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                WarBoardAIRoute__RegisterTargetObjectToDic(
                  v176,
                  dicObjectPutSquareIndex,
                  objectList,
                  v159,
                  (int64_t)v176,
                  v147,
                  &notSquareTarget,
                  v177);
                if ( !notSquareTarget )
                {
                  dicSquarePutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v227->fields.dicSquarePutSqareIndex;
                  v179 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  if ( !dicSquarePutSqareIndex )
                    sub_1BC3264(v179, v179);
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__object___ContainsKey(
                                                                                       dicSquarePutSqareIndex,
                                                                                       v179,
                                                                                       (const MethodInfo_334BF28 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allSquare;
                    v181 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_WarBoardSquareData__bool__TypeInfo);
                    System_Func_object__bool____ctor(
                      v181,
                      (Il2CppObject *)v148,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                      0LL);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_object__50493748(
                                                                                         allSquare,
                                                                                         (System_Func_TSource__bool__o *)v181,
                                                                                         (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                    v182 = ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v183 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                      v184 = sub_1BC3254(WarBoardAIRoute_TargetData_TypeInfo);
                      *(_DWORD *)(v184 + 64) = 2;
                      System_Object___ctor((Il2CppObject *)v184, 0LL);
                      *(_QWORD *)(v184 + 48) = v182;
                      *(_QWORD *)(v184 + 104) = v183;
                      *(_DWORD *)(v184 + 112) = v147;
                      sub_1BC2FAC((CGThumbnailListItem_o *)(v184 + 48), (int32_t)v182, v185, v186);
                      v187 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v227->fields.dicSquarePutSqareIndex;
                      v188 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                      if ( !v187 )
                        sub_1BC3264(v188, v188);
                      System_Collections_Generic_Dictionary_long__object___Add(
                        v187,
                        v188,
                        (Il2CppObject *)v184,
                        (const MethodInfo_334BD34 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                    }
                  }
                }
              }
              LODWORD(v145) = conditionTypes->max_length;
              if ( (__int64)++v146 >= (int)v145 )
                goto LABEL_137;
              continue;
            }
          }
        }
        if ( v126 )
        {
          v189 = *(_QWORD *)v126;
          v190 = *(unsigned __int16 *)(*(_QWORD *)v126 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v126 + 302LL) )
          {
            v191 = (int *)(*(_QWORD *)(v189 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v191 - 1) != System_IDisposable_TypeInfo )
            {
              --v190;
              v191 += 4;
              if ( !v190 )
                goto LABEL_144;
            }
            v192 = v189 + 16LL * *v191 + 312;
          }
          else
          {
LABEL_144:
            v192 = sub_1C13570(v126, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v192)(v126, *(_QWORD *)(v192 + 8));
        }
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.aiTargetCacher;
        if ( !Instance )
          goto LABEL_225;
        WarBoardAiTargetCacher__ClearTargetObject((WarBoardAiTargetCacher_o *)Instance, v56);
        v193 = this->fields.aiTargetCacher;
        v194 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v194 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__45_0 = (System_Func_object__bool__o *)v194->static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !v194->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v194);
            v194 = WarBoardAIRoute___c_TypeInfo;
          }
          v196 = (Il2CppObject *)v194->static_fields->__9;
          _9__45_0 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__45_0,
            v196,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            0LL);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v198, v199);
        }
        v200 = System_Linq_Enumerable__Where_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_object_(
                                                                              v200,
                                                                              (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v193 )
          goto LABEL_225;
        WarBoardAiTargetCacher__AggregateTargetObject(v193, (IWarBoardObjectData_array *)Instance, v201);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
        if ( !Instance )
          goto LABEL_225;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v226,
          (const MethodInfo_33A5BB8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
        allAllyPiece = v218;
        p_placePieceData = &this->fields.placePieceData;
        v112 = v219;
        if ( !Instance )
          goto LABEL_225;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v227,
          (const MethodInfo_33A5BB8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isServant(
                                                                              pieceData,
                                                                              0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v202 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_1BC3254(WarBoardAIRoute_AdvantagePieceData_TypeInfo);
          WarBoardAIRoute_AdvantagePieceData___ctor(v202, v203);
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pieceData->fields._battleServant_k__BackingField;
          if ( !Instance )
            goto LABEL_225;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleServantData__getClassId(
                                                                                (BattleServantData_o *)Instance,
                                                                                0,
                                                                                0LL);
          v204 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_225;
          v205 = v204->max_length;
          if ( v205 >= 1 )
          {
            v206 = (int)Instance;
            v207 = 0;
            while ( 2 )
            {
              if ( v207 >= v205 )
                goto LABEL_226;
              v208 = &v204->obj.klass + (int)v207;
              v209 = v208[4];
              if ( !v209 )
                goto LABEL_225;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                    (WarBoardPieceData_o *)v208[4],
                                                                                    0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_198;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v209->_1.fields;
              if ( !Instance )
                goto LABEL_225;
              ClassId = BattleServantData__getClassId((BattleServantData_o *)Instance, 0, 0LL);
              if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
              Magnification = SvtClassAttri__getMagnification(v206, ClassId, 0LL);
              v212 = SvtClassAttri__getMagnification(ClassId, v206, 0LL);
              v213 = SvtClassAttri__getMagnification(v206, ClassId, 0LL);
              v214 = SvtClassAttri__getMagnification(ClassId, v206, 0LL);
              if ( Magnification <= 1.0 )
              {
                if ( v212 >= 1.0 )
                  goto LABEL_177;
                if ( !v202 )
                  goto LABEL_225;
              }
              else
              {
                if ( !v202 )
                  goto LABEL_225;
                Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v202->fields.dicAttackAdvantageServant;
                if ( !Instance )
                  goto LABEL_225;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                  (int32_t)v209->_1.element_class,
                  (Il2CppObject *)v209,
                  (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                v202->fields.flagNow |= 0x4000uLL;
                if ( v212 >= 1.0 )
                {
LABEL_177:
                  if ( v213 >= 1.0 )
                  {
                    if ( v214 > 1.0 )
                    {
                      if ( !v202 )
                        goto LABEL_225;
                      goto LABEL_184;
                    }
                  }
                  else
                  {
                    if ( !v202 )
                      goto LABEL_225;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v202->fields.dicAttackDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_225;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v209->_1.element_class,
                      (Il2CppObject *)v209,
                      (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v202->fields.flagNow |= 0x8000uLL;
                    if ( v214 <= 1.0 )
                      goto LABEL_186;
LABEL_184:
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v202->fields.dicDefenseDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_225;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v209->_1.element_class,
                      (Il2CppObject *)v209,
                      (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v202->fields.flagNow |= 0x20000uLL;
                  }
LABEL_186:
                  if ( Magnification <= 1.0 || v212 >= 1.0 )
                  {
                    if ( v213 < 1.0 && v214 > 1.0 )
                    {
                      if ( !v202 )
                        goto LABEL_225;
LABEL_196:
                      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v202->fields.dicClassDisAdvantageServant;
                      if ( !Instance )
                        goto LABEL_225;
                      System_Collections_Generic_Dictionary_int__object___Add(
                        (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                        (int32_t)v209->_1.element_class,
                        (Il2CppObject *)v209,
                        (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                      v202->fields.flagNow |= 0x2000uLL;
                    }
                  }
                  else
                  {
                    if ( !v202 )
                      goto LABEL_225;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v202->fields.dicClassAdvantageServant;
                    if ( !Instance )
                      goto LABEL_225;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v209->_1.element_class,
                      (Il2CppObject *)v209,
                      (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v202->fields.flagNow |= 0x1000uLL;
                    if ( v213 < 1.0 && v214 > 1.0 )
                      goto LABEL_196;
                  }
LABEL_198:
                  v205 = v204->max_length;
                  if ( (int)++v207 >= v205 )
                    goto LABEL_199;
                  continue;
                }
              }
              break;
            }
            Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v202->fields.dicDefenseAdvantageServant;
            if ( !Instance )
              goto LABEL_225;
            System_Collections_Generic_Dictionary_int__object___Add(
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              (int32_t)v209->_1.element_class,
              (Il2CppObject *)v209,
              (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
            v202->fields.flagNow |= 0x10000uLL;
            goto LABEL_177;
          }
LABEL_199:
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
          if ( !Instance )
            goto LABEL_225;
          System_Collections_Generic_Dictionary_uint__object___Add(
            Instance,
            pieceData->fields._uniqueIndex_k__BackingField,
            (Il2CppObject *)v202,
            (const MethodInfo_33A5BB8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          allAllyPiece = v218;
          p_placePieceData = &this->fields.placePieceData;
          v112 = v219;
        }
      }
LABEL_201:
      max_length = allAllyPiece->max_length;
      if ( (int)++v112 >= max_length )
        goto LABEL_223;
    }
    if ( WarBoardPieceData__get_isMaster(v113, 0LL) )
    {
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_225;
      v117 = 0;
LABEL_61:
      WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        (WarBoardAIRoute_AIRouteMasterData_o *)Instance,
        v117,
        v113,
        v114);
      goto LABEL_62;
    }
    forceId_k__BackingField = v113->fields._forceId_k__BackingField;
    v116 = this->fields.forceId;
LABEL_57:
    if ( forceId_k__BackingField != v116 )
      goto LABEL_62;
    goto LABEL_58;
  }
LABEL_223:
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
  if ( !*p_aiRouteMasterData )
    goto LABEL_225;
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData((WarBoardAIRoute_AIRouteMasterData_o *)Instance, 1, 0LL, v109);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(this, v215);
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

  if ( (byte_4AFF9A2 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&targetSquare);
    this = (WarBoardAIRoute_o *)sub_1BC3008(&WarBoardAIManager_TypeInfo, v6);
    byte_4AFF9A2 = 1;
  }
  if ( !alreadyGetItemList )
    sub_1BC3264(this, *(_QWORD *)&targetSquare);
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 0;
  }
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  Item = WarBoardAIManager__GetItem(targetSquare, v7);
  return Item && !WarBoardItemData__get_Acquired(Item, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute__ClassAdvantageDistance(
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
        (v5 = *routeData) == 0LL)
    || (v5->fields.flagNow & 0x10000) != 0
    && (this = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                      advantagePieceData->fields.dicDefenseAdvantageServant,
                                      advantagePieceData->fields.baseDARange,
                                      actionSquareIndex,
                                      *(const MethodInfo **)&actionSquareIndex),
        v5->fields.isMoveByServantAndDefenseAdvantageServantRange = (int)this,
        (v5 = *routeData) == 0LL) )
  {
LABEL_16:
    sub_1BC3264(this, routeData);
  }
  if ( (v5->fields.flagNow & 0x20000) != 0 )
    v5->fields.isMoveByServantAndDefenseDisAdvantageServantRange = WarBoardAIRoute__CompareBaseRangeToActionRange(
                                                                     advantagePieceData->fields.dicDefenseDisAdvantageServant,
                                                                     advantagePieceData->fields.baseDDARange,
                                                                     actionSquareIndex,
                                                                     *(const MethodInfo **)&actionSquareIndex);
}


void __fastcall WarBoardAIRoute__Clear(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *v2; // x19
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4AFF994 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1BC3008(
                                  &Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__,
                                  method);
    byte_4AFF994 = 1;
  }
  allRouteList = v2->fields.allRouteList;
  if ( !allRouteList )
    sub_1BC3264(this, method);
  size = allRouteList->fields._size;
  v5 = allRouteList->fields._version + 1;
  allRouteList->fields._size = 0;
  allRouteList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)allRouteList->fields._items, 0, size, 0LL);
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
  const MethodInfo *v14; // x5
  int32_t key; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  int32_t v17; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+0h] [xbp-80h] BYREF

  v6 = dicPieceList;
  if ( (byte_4AFF9A1 & 1) == 0 )
  {
    sub_1BC3008(&AStarSearch_TypeInfo, *(_QWORD *)&baseRange);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_int___, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v11);
    dicPieceList = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_1BC3008(
                                                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                                                                        v12);
    byte_4AFF9A1 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !v6 )
    sub_1BC3264(dicPieceList, *(_QWORD *)&baseRange);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v13 = 3;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v19,
            (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v19.fields._current.fields.key;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                 0LL,
                                                                 actionIndex,
                                                                 key,
                                                                 0,
                                                                 0LL,
                                                                 v14);
    v17 = System_Linq_Enumerable__Count_int_(
            v16,
            (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
    if ( v17 < baseRange )
    {
      v13 = 1;
      break;
    }
    if ( v17 == baseRange )
      v13 = 2;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  return v13;
}


void __fastcall WarBoardAIRoute__CreateOutOfWarningAreaToDistance(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__int__o *v6; // x21
  struct System_Collections_Generic_Dictionary_int__int__o **p_dicOutOfWarningAreaRange; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_Dictionary_int__int__o *IsFlag; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct WarBoardSquareData_array *allSquare; // x25
  int max_length; // w8
  int v15; // w26
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x21
  struct WarBoardSquareData_array *v18; // x29
  int v19; // w8
  unsigned int v20; // w20
  int v21; // w22
  Il2CppClass **v22; // x8
  Il2CppClass *v23; // x23
  const MethodInfo *v24; // x5
  int32_t name; // w24
  int32_t v26; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  int32_t v29; // w1
  const MethodInfo_32FFA9C *v30; // x3
  int32_t v31; // w2
  struct System_Collections_Generic_Dictionary_int__int__o **v32; // [xsp+0h] [xbp-70h]

  if ( (byte_4AFF9AD & 1) == 0 )
  {
    sub_1BC3008(&AStarSearch_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v2);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_int___, v5);
    byte_4AFF9AD = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_32FF0D8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v6;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dicOutOfWarningAreaRange, (int32_t)v6, v8, v9);
  allSquare = this->fields.allSquare;
  if ( !allSquare )
LABEL_33:
    sub_1BC3264(IsFlag, v11);
  max_length = allSquare->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    v32 = &this->fields.dicOutOfWarningAreaRange;
    do
    {
      if ( v15 >= (unsigned int)max_length )
        goto LABEL_34;
      v16 = &allSquare->obj.klass + v15;
      v17 = v16[4];
      if ( !v17 )
        goto LABEL_33;
      IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                      (WarBoardSquareData_o *)v16[4],
                                                                      1,
                                                                      0LL);
      if ( ((unsigned __int8)IsFlag & 1) != 0 )
      {
        v18 = this->fields.allSquare;
        if ( !v18 )
          goto LABEL_33;
        v19 = v18->max_length;
        if ( v19 >= 1 )
        {
          v20 = 0;
          v21 = -1;
          while ( v20 < v19 )
          {
            v22 = &v18->obj.klass + (int)v20;
            v23 = v22[4];
            if ( !v23 )
              goto LABEL_33;
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                            (WarBoardSquareData_o *)v22[4],
                                                                            1,
                                                                            0LL);
            if ( ((unsigned __int8)IsFlag & 1) != 0 )
              goto LABEL_37;
            name = (int32_t)v17->_1.name;
            v26 = (int32_t)v23->_1.name;
            if ( !AStarSearch_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
            v27 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                         0LL,
                                                                         name,
                                                                         v26,
                                                                         0,
                                                                         0LL,
                                                                         v24);
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__Count_int_(
                                                                            v27,
                                                                            (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
            if ( v21 > (int)IsFlag - 1 || v21 == -1 )
              v21 = (_DWORD)IsFlag - 1;
            if ( v21 >= 2 )
            {
LABEL_37:
              v19 = v18->max_length;
              if ( (int)++v20 < v19 )
                continue;
            }
            goto LABEL_29;
          }
LABEL_34:
          sub_1BC326C(IsFlag, v11, v12);
        }
        v21 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        IsFlag = *v32;
        if ( !*v32 )
          goto LABEL_33;
        v29 = (int32_t)v17->_1.name;
        v30 = (const MethodInfo_32FFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v31 = v21;
      }
      else
      {
        IsFlag = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v29 = (int32_t)v17->_1.name;
        v30 = (const MethodInfo_32FFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v31 = 0;
      }
      System_Collections_Generic_Dictionary_int__int___Add(IsFlag, v29, v31, v30);
      max_length = allSquare->max_length;
      ++v15;
    }
    while ( v15 < max_length );
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardAIRoute__CreateRouteData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t searchCount,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        const MethodInfo *method)
{
  __int64 v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4AFF99A & 1) == 0 )
  {
    sub_1BC3008(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo, piecePlaceData);
    byte_4AFF99A = 1;
  }
  v9 = sub_1BC3254(WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 56), (int32_t)piecePlaceData, v12, v13);
  *(_DWORD *)(v9 + 40) = searchCount;
  *(_QWORD *)(v9 + 48) = routeDataList;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)routeDataList, v14, v15);
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
  uint32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AFF9B2 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, basePiece);
    this = (WarBoardAIRoute_o *)sub_1BC3008(&WarBoardAIManager_TypeInfo, v7);
    byte_4AFF9B2 = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_1BC3264(this, basePiece);
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_332C9C0 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
  {
    v9 = value;
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    return WarBoardAIManager__GetPieceUnique(v9, v8);
  }
  else
  {
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
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
  const MethodInfo *v7; // x3
  int64_t flagNow; // x8
  WarBoardAIRoute_AdvantagePieceData_o *v9; // x20
  int64_t v11; // x8

  v6 = this;
  if ( (byte_4AFF9B0 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1BC3008(
                                  &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__,
                                  basePiece);
    byte_4AFF9B0 = 1;
  }
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v6->fields.dicUniqueKeyAdvantagePieceData) == 0LL
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_uint__object___get_Item(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                      basePiece->fields._uniqueIndex_k__BackingField,
                                      (const MethodInfo_33A5B18 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0LL )
  {
    sub_1BC3264(this, basePiece);
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
  __int64 v17; // x2
  const MethodInfo *v18; // x5
  struct WarBoardPieceData_array *allEnemyPiece; // x25
  int max_length; // w8
  unsigned int v21; // w26
  WarBoardPieceData_o *v22; // x23
  int32_t nowSquareIndex_k__BackingField; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  int32_t v25; // w24

  if ( (byte_4AFF9AC & 1) == 0 )
  {
    sub_1BC3008(&AStarSearch_TypeInfo, routeDataList);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v11);
    sub_1BC3008(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v12);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_int___, v13);
    byte_4AFF9AC = 1;
  }
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v14 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1BC3254(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v14,
    (const MethodInfo_339C034 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  allEnemyPiece = this->fields.allEnemyPiece;
  if ( !allEnemyPiece )
    goto LABEL_20;
  max_length = allEnemyPiece->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_1BC326C(isMaster, v16, v17);
      v22 = allEnemyPiece->m_Items[v21];
      if ( !v22 )
        break;
      nowSquareIndex_k__BackingField = v22->fields._nowSquareIndex_k__BackingField;
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v24 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   nowSquareIndex_k__BackingField,
                                                                   0,
                                                                   0LL,
                                                                   v18);
      isMaster = System_Linq_Enumerable__Count_int_(
                   v24,
                   (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v14 )
        break;
      v25 = isMaster;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v14,
        v22->fields._uniqueIndex_k__BackingField,
        isMaster,
        (const MethodInfo_339C9F8 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
      if ( *servantAndEnemyRange == -1 || v25 < *servantAndEnemyRange )
        *servantAndEnemyRange = v25;
      isMaster = WarBoardPieceData__get_isMaster(v22, 0LL);
      if ( (isMaster & 1) != 0 && (*servantAndEnemyMasterRange == -1 || v25 < *servantAndEnemyMasterRange) )
        *servantAndEnemyMasterRange = v25;
      max_length = allEnemyPiece->max_length;
      if ( (int)++v21 >= max_length )
        return v14;
    }
LABEL_20:
    sub_1BC3264(isMaster, v16);
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
  __int64 v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w20
  System_Collections_Generic_IEnumerable_TSource__o *Keys; // x19
  System_Func_int__bool__o *v18; // x20

  if ( (byte_4AFF99D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__, piecePlaceData);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_int___, v8);
    sub_1BC3008(&System_Func_int__bool__TypeInfo, v9);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__, v10);
    sub_1BC3008(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo, v11);
    byte_4AFF99D = 1;
  }
  v12 = sub_1BC3254(WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_DWORD *)(v12 + 16) = masterSquareIndex, (aiRouteMasterData = this->fields.aiRouteMasterData) == 0LL)
    || !piecePlaceData )
  {
    sub_1BC3264(v13, v14);
  }
  masterType = aiRouteMasterData->fields.masterType;
  Keys = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                                piecePlaceData,
                                                                (const MethodInfo_332AFEC *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  if ( masterType != 1 )
  {
    v18 = (System_Func_int__bool__o *)sub_1BC3254(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v18,
      (Il2CppObject *)v12,
      Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      0LL);
    Keys = System_Linq_Enumerable__Where_int_(
             Keys,
             (System_Func_TSource__bool__o *)v18,
             (const MethodInfo_3044C3C *)Method_System_Linq_Enumerable_Where_int___);
  }
  return System_Linq_Enumerable__ToArray_int_(
           Keys,
           (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v24; // x25
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t defenseArea; // w20
  DefenseAreaData_o *v31; // x19
  System_Collections_Generic_Dictionary_int__object__o *v32; // x20
  WarBoardAIManager_c *v33; // x0
  char v34; // w10
  bool v35; // w8
  bool IsDetour; // w25
  const MethodInfo *v37; // x5
  int32_t key; // w26
  Il2CppObject *value; // x27
  System_Int32_array *v40; // x28
  __int64 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w25
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  const MethodInfo *v47; // x2
  BalanceConfig_c *v48; // x0
  const MethodInfo *v49; // x5
  System_Func_int__bool__o *klass; // x28
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x8
  __int64 v54; // x21
  BalanceConfig_c *v55; // x0
  __int64 v56; // x1
  Il2CppObject *object; // [xsp+0h] [xbp-E0h]
  CGThumbnailListItem_o *v59; // [xsp+8h] [xbp-D8h]
  bool v61; // [xsp+1Ch] [xbp-C4h]
  char v62; // [xsp+20h] [xbp-C0h]
  bool v63; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v64; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v65; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4AFF99E & 1) == 0 )
  {
    sub_1BC3008(&AStarSearch_TypeInfo, *(_QWORD *)&masterSquareIndex);
    sub_1BC3008(&BalanceConfig_TypeInfo, v8);
    sub_1BC3008(&DefenseAreaData_TypeInfo, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v13);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_int___, v14);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v17);
    sub_1BC3008(&System_Func_int__bool__TypeInfo, v18);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__, v20);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__, v21);
    sub_1BC3008(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo, v22);
    sub_1BC3008(&WarBoardAIManager_TypeInfo, v23);
    byte_4AFF99E = 1;
  }
  memset(&v65, 0, sizeof(v65));
  v24 = sub_1BC3254(WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_50;
  *(_QWORD *)(v24 + 16) = piecePlaceData;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 16), (int32_t)piecePlaceData, v27, v28);
  npcData = this->fields.npcData;
  if ( !npcData )
    goto LABEL_50;
  defenseArea = npcData->fields.defenseArea;
  v31 = (DefenseAreaData_o *)sub_1BC3254(DefenseAreaData_TypeInfo);
  DefenseAreaData___ctor(v31, masterSquareIndex, defenseArea, 0LL);
  v32 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v32,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  if ( !byte_4AFFA62 )
  {
    sub_1BC3008(&WarBoardAIManager_TypeInfo, v26);
    byte_4AFFA62 = 1;
  }
  v33 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v33 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v33->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_50;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v64,
    dicSquareIndexEnemyPiece,
    (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v34 = 0;
  object = (Il2CppObject *)v24;
  v59 = (CGThumbnailListItem_o *)(v24 + 24);
  v35 = 1;
  IsDetour = 1;
  v65 = v64;
LABEL_13:
  v61 = v35;
LABEL_14:
  v62 = v34;
  v63 = IsDetour;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v65,
            (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v65.fields._current.fields.key;
    value = v65.fields._current.fields.value;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v40 = AStarSearch__RouteSearch(0LL, masterSquareIndex, key, 0, 0LL, v37);
    v41 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v40,
            (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v32 )
      sub_1BC3264(v41, v42);
    v43 = v41;
    System_Collections_Generic_Dictionary_int__object___Add(
      v32,
      key,
      &v40->obj,
      (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v31 )
      sub_1BC3264(v44, v45);
    DefenseAreaData__SetComparisonMasterAndEnemyRange(v31, v43, 0LL);
    if ( DefenseAreaData__IsInDefenseArea(v31, key, 0LL) )
    {
      v48 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v48 = BalanceConfig_TypeInfo;
      }
      if ( !v48->static_fields->IsEnableOldBlockShortestRoute )
      {
        if ( !v40 )
          sub_1BC3264(v48, v46);
        if ( (int)v40->max_length >= 2 )
          DefenseAreaData__SetComparisonAllMasterAndEnemyRange(v31, v40->m_Items[2], v43, 0LL);
      }
      IsDetour = 0;
      v34 = 1;
      if ( v63 )
      {
        IsDetour = WarBoardAIRoute__IsDetour(v40, allyPieces, v47);
        v35 = 0;
        v34 = 1;
        if ( v61 )
        {
          klass = (System_Func_int__bool__o *)v59->klass;
          if ( !v59->klass )
          {
            klass = (System_Func_int__bool__o *)sub_1BC3254(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              klass,
              object,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              0LL);
            v59->klass = (CGThumbnailListItem_c *)klass;
            sub_1BC2FAC(v59, (int32_t)klass, v51, v52);
          }
          if ( !AStarSearch_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          v35 = AStarSearch__RouteSearch((WarBoardPieceData_o *)value, key, masterSquareIndex, 0, klass, v49) == 0LL;
          v34 = 1;
        }
        goto LABEL_13;
      }
      goto LABEL_14;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v65,
    (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  v53 = 1025LL;
  if ( (v62 & 1) == 0 )
    v53 = 1LL;
  v54 = v63 ? v53 | 0x2000000000LL : v53;
  if ( !v31 )
LABEL_50:
    sub_1BC3264(dicSquareIndexEnemyPiece, v26);
  DefenseAreaData__CreateShortestRoutes(v31, (System_Collections_Generic_Dictionary_int__int____o *)v32, 0LL);
  v55 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v55 = BalanceConfig_TypeInfo;
  }
  if ( !v55->static_fields->IsEnableOldBlockShortestRoute )
    DefenseAreaData__CreateAllShortestRoutes(v31, (System_Collections_Generic_Dictionary_int__int____o *)v32, 0LL);
  if ( v61 )
    v56 = v54 | 0x10000000000LL;
  else
    v56 = v54;
  DefenseAreaData__SetFlag(v31, v56, 0LL);
  return v31;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall WarBoardAIRoute__GetDesignationItemToDistance(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v8; // x22
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
  Il2CppObject *Item; // x22
  System_Collections_Generic_Dictionary_int__int__o *v25; // x19
  __int64 v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x23
  System_Func_object__bool__o *v32; // x24
  _BOOL8 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x5
  int32_t v36; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v42; // [xsp+30h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_4AFF9AB & 1) == 0 )
  {
    sub_1BC3008(&AStarSearch_TypeInfo, basePiece);
    sub_1BC3008(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__,
      v13);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v14);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_int___, v15);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__, v18);
    sub_1BC3008(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v19);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__, v21);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__, v22);
    this = (WarBoardAIRoute_o *)sub_1BC3008(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo, v23);
    byte_4AFF9AB = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v8->fields.dicUniqueKeyDesignationItem) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_33A5B18 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v25 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__int__TypeInfo),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v25,
          (const MethodInfo_32FF0D8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (this = (WarBoardAIRoute_o *)Item[1].klass) == 0LL )
  {
    sub_1BC3264(this, basePiece);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v41,
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v42,
            (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v26 = sub_1BC3254(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v26, 0LL);
    if ( !v26 )
      sub_1BC3264(v27, v28);
    v31 = v26 + 24;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v26 + 16) = v42.fields._current;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + 24), 0, v29, v30);
    v32 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v32,
      (Il2CppObject *)v26,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      0LL);
    v33 = BasicHelper__Any_object_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v32,
            (const MethodInfo_2FEB2DC *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    if ( !v33 )
    {
      if ( !*(_QWORD *)v31 )
        sub_1BC3264(v33, v34);
      v36 = *(_DWORD *)(*(_QWORD *)v31 + 16LL);
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v37 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   v36,
                                                                   0,
                                                                   0LL,
                                                                   v35);
      v38 = System_Linq_Enumerable__Count_int_(
              v37,
              (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v25 )
        sub_1BC3264(v38, v39);
      System_Collections_Generic_Dictionary_int__int___Add(
        v25,
        *(_DWORD *)(v26 + 16),
        v38,
        (const MethodInfo_32FFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v42,
    (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v25;
}


WarBoardEvalValueSquare_EvalValueSquare_o *__fastcall WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4AFF99F & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1BC3008(
                                  &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__,
                                  evalValueSquareList);
    byte_4AFF99F = 1;
  }
  if ( !evalValueSquareList )
    sub_1BC3264(this, evalValueSquareList);
  return (WarBoardEvalValueSquare_EvalValueSquare_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_int__object__o *)evalValueSquareList,
                                                        index,
                                                        (const MethodInfo_33084B4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
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
  unsigned __int64 v8; // x9
  int64_t result; // x0

  if ( (byte_4AFF9B3 & 1) == 0 )
  {
    sub_1BC3008(&SvtClassAttri_TypeInfo, *(_QWORD *)&baseClassId);
    byte_4AFF9B3 = 1;
  }
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__getMagnification(baseClassId, actionClassId, 0LL) <= 1.0 )
    v6 = 1LL;
  else
    v6 = 524289LL;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__getMagnification(baseClassId, actionClassId, 0LL) < 1.0 )
    v6 |= 0x400000uLL;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__getMagnification(actionClassId, baseClassId, 0LL) >= 1.0 )
    v7 = v6;
  else
    v7 = v6 | 0x100000;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  if ( SvtClassAttri__getMagnification(actionClassId, baseClassId, 0LL) <= 1.0 )
    v8 = v7;
  else
    v8 = v7 | 0x800000;
  result = (unsigned int)(v8 >> 2) & ((unsigned int)v8 >> 1) & 0x40000 | v8;
  if ( (v8 & 0x400000) != 0 )
    return result | (v8 >> 2) & 0x200000;
  return result;
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
  unsigned __int64 v16; // x29
  __int64 v17; // x23
  int32_t v18; // w24
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  WarBoardPieceData_o *v21; // x25
  __int64 v22; // x22
  bool isServant; // w0
  System_Collections_Generic_Dictionary_int__uint__o *v24; // x28
  struct System_Int32_array *v25; // x20
  int32_t v26; // w19
  int32_t v27; // w26
  int32_t ClassId; // w1
  float Magnification; // s0
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  _BOOL4 v31; // w8
  uint32_t v32; // w24
  WarBoardAIRoute_o *v33; // x24
  int32_t *v35; // [xsp+8h] [xbp-78h]
  int32_t defense; // [xsp+18h] [xbp-68h]
  uint32_t value; // [xsp+1Ch] [xbp-64h] BYREF

  v10 = this;
  if ( (byte_4AFF9AF & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, baseSquare);
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1BC3008(&SvtClassAttri_TypeInfo, v12);
    this = (WarBoardAIRoute_o *)sub_1BC3008(&WarBoardAIManager_TypeInfo, v13);
    byte_4AFF9AF = 1;
  }
  value = 0;
  if ( !baseSquare )
    goto LABEL_51;
  linkedSquares = baseSquare->fields.linkedSquares;
  if ( !linkedSquares )
    goto LABEL_51;
  v15 = *(_QWORD *)&linkedSquares->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    v17 = 1LL;
    v35 = &linkedSquares->m_Items[1];
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
        sub_1BC326C(this, baseSquare, basePiece);
      v18 = v35[v16];
      this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_36875824((WarBoardData_o *)this, v18, v19);
      if ( !this )
        goto LABEL_29;
      v21 = (WarBoardPieceData_o *)this;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v21, v20);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !basePiece )
          break;
        if ( WarBoardPieceData__get_isServant(basePiece, 0LL)
          || (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v21, 0LL), ((unsigned __int8)this & 1) != 0) )
        {
          v22 = v17 | 0x10;
          isServant = WarBoardPieceData__get_isServant(v21, 0LL);
          if ( (v17 & 0x1000000) == 0 && isServant )
          {
            this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
            if ( !this )
              break;
            v24 = piecePlaceData;
            v25 = linkedSquares;
            v26 = masterSquareIndex;
            this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0, 0LL);
            if ( !v21->fields._battleServant_k__BackingField )
              break;
            v27 = (int)this;
            ClassId = BattleServantData__getClassId(v21->fields._battleServant_k__BackingField, 0, 0LL);
            if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
            {
              defense = ClassId;
              j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
              ClassId = defense;
            }
            Magnification = SvtClassAttri__getMagnification(v27, ClassId, 0LL);
            masterSquareIndex = v26;
            linkedSquares = v25;
            piecePlaceData = v24;
            if ( Magnification > 1.0 )
              v22 = v17 | 0x1000010;
          }
          this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v21, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            v17 = v22 | 0x20;
          else
            v17 = v22;
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
      v31 = aiRouteMasterData->fields.masterType == 2
         && aiRouteMasterData->fields.masterPieceIndex == basePiece->fields._index_k__BackingField;
      if ( v18 == masterSquareIndex && !v31 )
        v17 |= 0x400000000uLL;
      if ( !piecePlaceData )
        break;
      this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_int__uint___TryGetValue(
                                    piecePlaceData,
                                    v18,
                                    &value,
                                    (const MethodInfo_332C9C0 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v32 = value;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        this = (WarBoardAIRoute_o *)WarBoardAIManager__GetPieceUnique(v32, (const MethodInfo *)baseSquare);
        if ( basePiece->fields._uniqueIndex_k__BackingField != value )
        {
          v33 = this;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsAllyPiece(
                                        basePiece,
                                        (WarBoardPieceData_o *)v33,
                                        (const MethodInfo *)basePiece);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v33 )
              break;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v33, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              v17 |= 0x800000000uLL;
          }
        }
      }
      LODWORD(v15) = linkedSquares->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        return v17;
    }
LABEL_51:
    sub_1BC3264(this, baseSquare);
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

  if ( (byte_4AFF9AE & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&baseSquareIndex);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    byte_4AFF9AE = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0LL) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_32FFC88 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          actionSquareIndex,
          (const MethodInfo_32FFC88 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                    dicOutOfWarningAreaRange,
                                                                                    baseSquareIndex,
                                                                                    (const MethodInfo_32FFA00 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( (int)dicOutOfWarningAreaRange > System_Collections_Generic_Dictionary_int__int___get_Item(
                                         this->fields.dicOutOfWarningAreaRange,
                                         actionSquareIndex,
                                         (const MethodInfo_32FFA00 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange
    || (dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                          dicOutOfWarningAreaRange,
                                                                                          baseSquareIndex,
                                                                                          (const MethodInfo_32FFA00 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v11 = this->fields.dicOutOfWarningAreaRange) == 0LL) )
  {
LABEL_18:
    sub_1BC3264(dicOutOfWarningAreaRange, v8);
  }
  if ( (_DWORD)dicOutOfWarningAreaRange == System_Collections_Generic_Dictionary_int__int___get_Item(
                                             v11,
                                             actionSquareIndex,
                                             (const MethodInfo_32FFA00 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
  int32_t key; // w20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *v15; // x8
  __int128 v17[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v18; // [xsp+20h] [xbp-40h] BYREF

  v4 = this;
  if ( (byte_4AFF99C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, piecePlaceData);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v8);
    this = (WarBoardAIRoute_o *)sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v9);
    byte_4AFF99C = 1;
  }
  memset(&v18, 0, 32);
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    goto LABEL_18;
  masterType = aiRouteMasterData->fields.masterType;
  if ( !masterType || masterType == 2 )
  {
    if ( piecePlaceData )
    {
      System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v17,
        piecePlaceData,
        (const MethodInfo_332B700 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
      *(_OWORD *)&v18.fields._dictionary = v17[0];
      v18.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v17[1];
      while ( 1 )
      {
        v13 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                &v18,
                (const MethodInfo_345C7D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
        if ( !v13 )
          break;
        v15 = v4->fields.aiRouteMasterData;
        if ( !v15 )
          sub_1BC3264(v13, v14);
        key = (int32_t)v18.fields._current.fields.key;
        if ( v15->fields.masterUniqueIndex == HIDWORD(v18.fields._current.fields.key) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
            &v18,
            (const MethodInfo_345C8D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
          return key;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
        &v18,
        (const MethodInfo_345C8D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
      return 0;
    }
LABEL_18:
    sub_1BC3264(this, piecePlaceData);
  }
  if ( masterType != 1 )
    return 0;
  return aiRouteMasterData->fields.masterSquareIndex;
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
  Il2CppClass *klass; // x8
  System_Func_KeyValuePair_int__uint___bool__o *v10; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4AFF9B7 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____, piecePlaceData);
    sub_1BC3008(&System_Func_KeyValuePair_int__uint___bool__TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v6);
    this = (WarBoardAIRoute_o *)sub_1BC3008(&Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__, v7);
    byte_4AFF9B7 = 1;
  }
  klass = v4[13].klass;
  if ( !klass )
    sub_1BC3264(this, piecePlaceData);
  if ( LODWORD(klass->_1.name) == 1 )
    return HIDWORD(klass->_1.name);
  v10 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_1BC3254(System_Func_KeyValuePair_int__uint___bool__TypeInfo);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v10,
    v4,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_3026F18 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
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
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x5
  Il2CppObject *currentValue; // x24
  WarBoardPieceData_o *monitor; // x22
  int32_t v21; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  int32_t v23; // w22
  int32_t v24; // w0
  const MethodInfo *v25; // x5
  int32_t v26; // w2
  int v27; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x22
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  int32_t v30; // w23
  int32_t v31; // w0
  int v32; // w8
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4AFF9B9 & 1) == 0 )
  {
    sub_1BC3008(&AStarSearch_TypeInfo, dicKeyPutIndexValueTargetData);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__, v8);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v10);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v11);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v12);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__,
      v13);
    this = (WarBoardAIRoute_o *)sub_1BC3008(&WarBoardAIManager_TypeInfo, v14);
    byte_4AFF9B9 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !dicKeyPutIndexValueTargetData
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_long__object___get_Values(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicKeyPutIndexValueTargetData,
                                      (const MethodInfo_334BB44 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0LL )
  {
    sub_1BC3264(this, dicKeyPutIndexValueTargetData);
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__object___GetEnumerator(
    &v34,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_39CF37C *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v15 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___MoveNext(
            &v35,
            (const MethodInfo_3462E34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v15 )
      break;
    currentValue = v35.fields._currentValue;
    if ( !v35.fields._currentValue )
      sub_1BC3264(v15, v16);
    monitor = (WarBoardPieceData_o *)v35.fields._currentValue[1].monitor;
    if ( !monitor || LODWORD(v35.fields._currentValue[4].monitor) != actionSquareIndex )
      goto LABEL_14;
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    if ( WarBoardAIManager__IsAllyPiece(basePiece, monitor, v17) )
    {
      LODWORD(currentValue[4].klass) = 2;
    }
    else
    {
LABEL_14:
      v21 = (int32_t)currentValue[4].monitor;
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v21,
                                                                   0,
                                                                   0LL,
                                                                   v18);
      v23 = System_Linq_Enumerable__Count_int_(
              v22,
              (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
      v24 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
      v26 = (int32_t)currentValue[4].monitor;
      if ( v23 == v24 )
        v27 = 2;
      else
        v27 = 3;
      if ( v23 < v24 )
        v27 = 1;
      LODWORD(currentValue[4].klass) = v27;
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v26,
                                                                   1,
                                                                   0LL,
                                                                   v25);
      if ( v28 && (klass = (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[6].klass) != 0LL )
      {
        v30 = System_Linq_Enumerable__Count_int_(
                klass,
                (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
        v31 = System_Linq_Enumerable__Count_int_(
                v28,
                (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
        if ( v31 >= v30 )
        {
          if ( v31 == v30 )
            v32 = 2;
          else
            v32 = 3;
        }
        else
        {
          v32 = 1;
        }
      }
      else
      {
        v32 = 0;
      }
      HIDWORD(currentValue[4].klass) = v32;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___Dispose(
    &v35,
    (const MethodInfo_3462E30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
  return dicKeyPutIndexValueTargetData;
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
  const MethodInfo *v13; // x5
  int32_t key; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+0h] [xbp-80h] BYREF

  if ( (byte_4AFF9A0 & 1) == 0 )
  {
    sub_1BC3008(&AStarSearch_TypeInfo, dicPieceList);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_int___, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v10);
    this = (WarBoardAIRoute_o *)sub_1BC3008(
                                  &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                  v11);
    byte_4AFF9A0 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !dicPieceList )
    sub_1BC3264(this, dicPieceList);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_int__object__o *)dicPieceList,
    (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v12 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v19,
            (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v19.fields._current.fields.key;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                 0LL,
                                                                 baseSquareIndex,
                                                                 key,
                                                                 0,
                                                                 0LL,
                                                                 v13);
    v16 = System_Linq_Enumerable__Count_int_(
            v15,
            (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
    if ( v12 > v16 || v12 == -1 )
      v12 = v16;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
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
  _DWORD *klass; // x8
  int32_t *v25; // x9
  int v26; // w10
  uint32_t v27; // w24
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4AFF99B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__, routeDataList);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__, v13);
    sub_1BC3008(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v18);
    byte_4AFF99B = 1;
  }
  memset(&v30, 0, sizeof(v30));
  value = 0;
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  v19 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1BC3254(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v19,
    (const MethodInfo_339C034 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_1BC3264(v20, v21);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)routeDataList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v22 )
      break;
    if ( !v30.fields._current )
      sub_1BC3264(v22, v23);
    if ( LODWORD(v30.fields._current[1].monitor) != HIDWORD(v30.fields._current[1].monitor) )
    {
      value = 0;
      klass = v30.fields._current[3].klass;
      if ( (BYTE3(v30.fields._current[1].klass) & 4) == 0 )
      {
        if ( !klass )
          sub_1BC3264(v22, v23);
        if ( klass[4] == 1 )
          v25 = masterActionCount;
        else
          v25 = actionCount;
LABEL_21:
        ++*v25;
        goto LABEL_22;
      }
      if ( !klass )
        sub_1BC3264(v22, v23);
      v26 = klass[4];
      klass = v30.fields._current[3].monitor;
      if ( v26 != 1 )
      {
        if ( !klass )
          sub_1BC3264(v22, v23);
        if ( klass[4] == 1 )
          v25 = masterReplaceCount;
        else
          v25 = replaceCount;
        goto LABEL_21;
      }
      ++*masterReplaceCount;
      if ( !klass )
        sub_1BC3264(v22, v23);
LABEL_22:
      if ( !v19 )
        sub_1BC3264(v22, v23);
      v27 = klass[11];
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v19,
        v27,
        &value,
        (const MethodInfo_339E090 *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v19,
        v27,
        value + 1,
        (const MethodInfo_339C9E4 *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
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
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Func_object__int__o *v14; // x20

  if ( (byte_4AFF9BA & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76856272, routeDataList);
    sub_1BC3008(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo, v6);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__, v7);
    sub_1BC3008(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo, v8);
    byte_4AFF9BA = 1;
  }
  v9 = sub_1BC3254(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BC3264(v10, v11);
  *(_QWORD *)(v9 + 16) = targetPiece;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)targetPiece, v12, v13);
  v14 = (System_Func_object__int__o *)sub_1BC3254(System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
  System_Func_object__int____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    0LL);
  return System_Linq_Enumerable__Sum_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v14,
           (const MethodInfo_303D0CC *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76856272);
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
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *key; // x24
  Il2CppObject *value; // x25
  WarBoardPieceData_array *allEnemyPiece; // x27
  WarBoardAIRoute_TargetData_o *v25; // x26
  const MethodInfo *v26; // x5
  __int64 v27; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+30h] [xbp-90h] BYREF

  v12 = this;
  if ( (byte_4AFF9A8 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__,
      dicPutSquareIndex);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__, v13);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v14);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v15);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v16);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v18);
    this = (WarBoardAIRoute_o *)sub_1BC3008(&WarBoardAIRoute_TargetData_TypeInfo, v19);
    byte_4AFF9A8 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !dicPutSquareIndex )
    sub_1BC3264(this, dicPutSquareIndex);
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v28,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicPutSquareIndex,
    (const MethodInfo_334C168 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v20 = System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v29,
            (const MethodInfo_34627D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v20 )
      break;
    key = v29.fields._current.fields.key;
    value = v29.fields._current.fields.value;
    if ( excludeCond )
    {
      if ( !v29.fields._current.fields.value )
        sub_1BC3264(v20, v21);
      if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, void *, _QWORD))excludeCond->fields.m_target)(
              excludeCond->fields.original_method_info,
              v29.fields._current.fields.value[3].monitor,
              *(_QWORD *)&excludeCond->fields.extra_arg) & 1) != 0 )
        continue;
    }
    allEnemyPiece = v12->fields.allEnemyPiece;
    v25 = (WarBoardAIRoute_TargetData_o *)sub_1BC3254(WarBoardAIRoute_TargetData_TypeInfo);
    WarBoardAIRoute_TargetData___ctor_36870772(
      v25,
      (WarBoardAIRoute_TargetData_o *)value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      v26);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_1BC3264(0LL, v27);
    System_Collections_Generic_Dictionary_long__object___Add(
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
      (int64_t)key,
      (Il2CppObject *)v25,
      (const MethodInfo_334BD34 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v29,
    (const MethodInfo_34628F4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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
  __int64 v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_Dictionary_int__object__o *v44; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x19
  __int64 v46; // x1
  const MethodInfo *v47; // x2
  WarBoardAiTargetCacher_o *aiTargetCacher; // x0
  Il2CppObject *key; // x25
  Il2CppObject *value; // x26
  TargetDetector_o *DetectorByTrendKey; // x0
  __int64 v52; // x1
  int32_t Id_k__BackingField; // w27
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  Il2CppObject *Item; // x29
  WarBoardAiTargetCacher_o *v57; // x0
  IWarBoardObjectData_array *TargetObjectsByTrendId; // x0
  IWarBoardObjectData_array *v59; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x29
  System_Func_object__bool__o *klass; // x23
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x29
  System_Func_object__int__o *v65; // x23
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v68; // x0
  WarBoardAIRoute___c_c *v69; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v70; // x29
  System_Func_object__int__o *_9__64_2; // x23
  Il2CppObject *v72; // x24
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v76; // x0
  WarBoardAIRoute___c_c *v77; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v78; // x29
  System_Func_object__int__o *_9__64_3; // x23
  Il2CppObject *v80; // x24
  struct WarBoardAIRoute___c_StaticFields *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  __int64 v85; // x1
  WarBoardPieceData_o *v86; // x27
  int32_t v87; // w28
  WarBoardPieceData_array *allEnemyPiece; // x24
  WarBoardAIRoute_TargetData_o *v89; // x23
  const MethodInfo *v90; // x6
  __int64 v91; // x1
  CGThumbnailListItem_o *v92; // [xsp+0h] [xbp-D0h]
  CGThumbnailListItem_o *v93; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v95; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v96; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4AFF9A9 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__,
      dicIndividualityPutSqareIndex);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__, v17);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo, v18);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___, v19);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___, v20);
    sub_1BC3008(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___, v21);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v22);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v23);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v24);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v25);
    sub_1BC3008(&System_Func_IWarBoardObjectData__bool__TypeInfo, v26);
    sub_1BC3008(&System_Func_IWarBoardObjectData__int__TypeInfo, v27);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v28);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v29);
    sub_1BC3008(&WarBoardAIRoute_TargetData_TypeInfo, v30);
    sub_1BC3008(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__, v31);
    sub_1BC3008(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__, v32);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__, v33);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__, v34);
    sub_1BC3008(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo, v35);
    sub_1BC3008(&WarBoardAIRoute___c_TypeInfo, v36);
    byte_4AFF9A9 = 1;
  }
  memset(&v96, 0, sizeof(v96));
  v37 = sub_1BC3254(WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37
    || (*(_QWORD *)(v37 + 16) = excludeCond,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v37 + 16), (int32_t)excludeCond, v40, v41),
        *(_QWORD *)(v37 + 24) = basePiece,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v37 + 24), (int32_t)basePiece, v42, v43),
        *(_DWORD *)(v37 + 32) = baseSquareIndex,
        v44 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo),
        System_Collections_Generic_Dictionary_int__object____ctor(
          v44,
          (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__),
        !dicIndividualityPutSqareIndex) )
  {
    sub_1BC3264(v38, v39);
  }
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v95,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicIndividualityPutSqareIndex,
    (const MethodInfo_334C168 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v96 = v95;
  v45 = 0LL;
  v92 = (CGThumbnailListItem_o *)(v37 + 48);
  v93 = (CGThumbnailListItem_o *)(v37 + 40);
  while ( System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v96,
            (const MethodInfo_34627D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_1BC3264(0LL, v46);
    key = v96.fields._current.fields.key;
    value = v96.fields._current.fields.value;
    DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(
                           aiTargetCacher,
                           (int64_t)v96.fields._current.fields.key,
                           v47);
    if ( DetectorByTrendKey )
    {
      Id_k__BackingField = DetectorByTrendKey->fields._Id_k__BackingField;
      if ( !v44 )
        goto LABEL_44;
    }
    else
    {
      Id_k__BackingField = 0;
      if ( !v44 )
LABEL_44:
        sub_1BC3264(DetectorByTrendKey, v52);
    }
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           v44,
           Id_k__BackingField,
           (const MethodInfo_3308748 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               v44,
               Id_k__BackingField,
               (const MethodInfo_33084B4 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    }
    else
    {
      v57 = this->fields.aiTargetCacher;
      if ( !v57 )
        sub_1BC3264(0LL, v54);
      TargetObjectsByTrendId = WarBoardAiTargetCacher__GetTargetObjectsByTrendId(v57, (int64_t)key, v55);
      v59 = TargetObjectsByTrendId;
      if ( TargetObjectsByTrendId )
        v60 = (System_Collections_Generic_IEnumerable_TSource__o *)TargetObjectsByTrendId;
      else
        v60 = v45;
      if ( TargetObjectsByTrendId )
      {
        klass = (System_Func_object__bool__o *)v93->klass;
        if ( !v93->klass )
        {
          klass = (System_Func_object__bool__o *)sub_1BC3254(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            klass,
            (Il2CppObject *)v37,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
            0LL);
          v93->klass = (CGThumbnailListItem_c *)klass;
          sub_1BC2FAC(v93, (int32_t)klass, v62, v63);
        }
        v64 = System_Linq_Enumerable__Where_object_(
                v60,
                (System_Func_TSource__bool__o *)klass,
                (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        v65 = (System_Func_object__int__o *)v92->klass;
        if ( !v92->klass )
        {
          v65 = (System_Func_object__int__o *)sub_1BC3254(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            v65,
            (Il2CppObject *)v37,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
            0LL);
          v92->klass = (CGThumbnailListItem_c *)v65;
          sub_1BC2FAC(v92, (int32_t)v65, v66, v67);
        }
        v68 = System_Linq_Enumerable__OrderBy_object__int_(
                v64,
                (System_Func_TSource__TKey__o *)v65,
                (const MethodInfo_302D508 *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
        v69 = WarBoardAIRoute___c_TypeInfo;
        v70 = v68;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v69 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_2 = (System_Func_object__int__o *)v69->static_fields->__9__64_2;
        if ( !_9__64_2 )
        {
          if ( !v69->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v69);
            v69 = WarBoardAIRoute___c_TypeInfo;
          }
          v72 = (Il2CppObject *)v69->static_fields->__9;
          _9__64_2 = (System_Func_object__int__o *)sub_1BC3254(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__64_2,
            v72,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
            0LL);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
          sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__64_2, (int32_t)_9__64_2, v74, v75);
        }
        v76 = System_Linq_Enumerable__ThenBy_object__int_(
                v70,
                (System_Func_TSource__TKey__o *)_9__64_2,
                (const MethodInfo_303D9E0 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        v77 = WarBoardAIRoute___c_TypeInfo;
        v78 = v76;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v77 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_3 = (System_Func_object__int__o *)v77->static_fields->__9__64_3;
        if ( !_9__64_3 )
        {
          if ( !v77->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v77);
            v77 = WarBoardAIRoute___c_TypeInfo;
          }
          v80 = (Il2CppObject *)v77->static_fields->__9;
          _9__64_3 = (System_Func_object__int__o *)sub_1BC3254(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__64_3,
            v80,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
            0LL);
          v81 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v81->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v81->__9__64_3, (int32_t)_9__64_3, v82, v83);
        }
        v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                     v78,
                                                                     (System_Func_TSource__TKey__o *)_9__64_3,
                                                                     (const MethodInfo_303D9E0 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        Item = System_Linq_Enumerable__FirstOrDefault_object_(
                 v84,
                 (const MethodInfo_3026590 *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
        v45 = (System_Collections_Generic_IEnumerable_TSource__o *)v59;
      }
      else
      {
        Item = 0LL;
      }
    }
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v44,
      Id_k__BackingField,
      Item,
      (const MethodInfo_3308540 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( Item )
    {
      v86 = *(WarBoardPieceData_o **)(v37 + 24);
      v87 = *(_DWORD *)(v37 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v89 = (WarBoardAIRoute_TargetData_o *)sub_1BC3254(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_36872780(
        v89,
        (WarBoardAIRoute_TargetData_o *)value,
        (IWarBoardObjectData_o *)Item,
        v86,
        v87,
        allEnemyPiece,
        v90);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1BC3264(0LL, v91);
      System_Collections_Generic_Dictionary_long__object___Add(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)key,
        (Il2CppObject *)v89,
        (const MethodInfo_334BD34 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1BC3264(0LL, v85);
      System_Collections_Generic_Dictionary_long__object___Remove(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)key,
        (const MethodInfo_334D1A8 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v96,
    (const MethodInfo_34628F4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetTargetToDistance_36872892(
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
  __int64 v14; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicUniqueKeyTarget; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *Item; // x24
  System_Collections_Generic_Dictionary_TKey__TValue__o *v20; // x23
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *monitor; // x25
  System_Func_object__bool__o *v22; // x26
  const MethodInfo *v23; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *klass; // x25
  System_Func_object__bool__o *v25; // x26
  const MethodInfo *v26; // x6
  const MethodInfo *v27; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4AFF9AA & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__, basePiece);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__, v9);
    sub_1BC3008(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v10);
    sub_1BC3008(&System_Func_IWarBoardObjectData__bool__TypeInfo, v11);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__, v12);
    sub_1BC3008(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo, v13);
    byte_4AFF9AA = 1;
  }
  v14 = sub_1BC3254(WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_QWORD *)(v14 + 16) = routeDataList,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 16), (int32_t)routeDataList, v17, v18),
        !basePiece)
    || (dicUniqueKeyTarget = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 dicUniqueKeyTarget,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_33A5B18 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v20 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo),
        System_Collections_Generic_Dictionary_long__object____ctor(
          v20,
          (const MethodInfo_334B364 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v20,
        !Item) )
  {
    sub_1BC3264(dicUniqueKeyTarget, v16);
  }
  monitor = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].monitor;
  v22 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v14,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0LL);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    monitor,
    (System_Func_IWarBoardObjectData__bool__o *)v22,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v23);
  klass = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[2].klass;
  v25 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v14,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0LL);
  WarBoardAIRoute__GetTargetToDistanceUsingIndividuality(
    this,
    klass,
    (System_Func_IWarBoardObjectData__bool__o *)v25,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v26);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].klass,
    0LL,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v27);
  return (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v20;
}


float __fastcall WarBoardAIRoute__GetThinkingThreshold(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1BC3264(this, method);
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
  if ( (byte_4AFF9B1 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, basePiece);
    byte_4AFF9B1 = 1;
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
    this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
      return SHIDWORD(this[3].fields.allSquare) >= v13 + requiredCost;
LABEL_13:
    sub_1BC3264(this, basePiece);
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
  __int64 v17; // x20
  WarBoardPieceData_o *Instance; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  WarBoardPieceData_o **v22; // x25
  bool v23; // w8
  const MethodInfo *v24; // x3
  int32_t RouteSumPieceActionCost; // w23
  System_Func_object__bool__o *v26; // x21
  __int64 v27; // x8

  if ( (byte_4AFF9B5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, basePiece);
    sub_1BC3008(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__, v15);
    sub_1BC3008(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo, v16);
    byte_4AFF9B5 = 1;
  }
  v17 = sub_1BC3254(WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_25;
  *(_QWORD *)(v17 + 16) = actionPiece;
  v22 = (WarBoardPieceData_o **)(v17 + 16);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 16), (int32_t)actionPiece, v20, v21);
  Instance = *(WarBoardPieceData_o **)(v17 + 16);
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
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < this->fields.moveCost
                                                               + requiredCost
                                                               + this->fields.masterMoveCost )
      goto LABEL_23;
  }
  else
  {
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1BC3264(Instance, v19);
  if ( !WarBoardPieceData__get_isInfinitelyActable(Instance, 0LL) )
  {
    v26 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v26,
      (Il2CppObject *)v17,
      Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
      0LL);
    Instance = (WarBoardPieceData_o *)System_Linq_Enumerable__Count_object__50461416(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
                                        (System_Func_TSource__bool__o *)v26,
                                        (const MethodInfo_301FAE8 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    v27 = *(_QWORD *)(v17 + 16);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  unsigned int v11; // w20
  char v12; // w21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  void *monitor; // x9
  __int64 v18; // x26
  __int64 v19; // x28
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-80h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4AFF9A7 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, piecePlaceData);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v9);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1BC3008(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v10);
    byte_4AFF9A7 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !v6 )
    sub_1BC3264(shortestEnemyRoute, piecePlaceData);
  v11 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v12 = 0;
  v22 = v21;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1BC3264(v13, v14);
    monitor = v22.fields._current[1].monitor;
    if ( (int)monitor - 1 <= (int)v11 )
    {
LABEL_16:
      v12 = 0;
      break;
    }
    if ( (unsigned int)v22.fields._current[1].monitor <= (unsigned __int64)v11 )
LABEL_18:
      sub_1BC326C(v13, v14, v15);
    v18 = (unsigned int)((_DWORD)monitor - 1) - 1LL;
    v19 = v11;
    while ( 1 )
    {
      if ( !piecePlaceData )
        sub_1BC3264(v13, v14);
      v13 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
              piecePlaceData,
              *((_DWORD *)&current[2].klass + v19),
              (const MethodInfo_332B514 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( v13 )
        break;
      if ( v18 == v19 )
        goto LABEL_16;
      if ( ++v19 >= (unsigned __int64)LODWORD(current[1].monitor) )
        goto LABEL_18;
    }
    v12 = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v12 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
        DefenseAreaData_o *defenseArea,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0

  if ( (byte_4AFF9A4 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    byte_4AFF9A4 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !defenseArea )
    sub_1BC3264(v7, *(_QWORD *)&index);
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
  unsigned int v15; // w28
  char v16; // w22
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppClass *klass; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  unsigned int monitor; // w10
  unsigned int v24; // w9
  int v25; // w11
  int v26; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+50h] [xbp-90h] BYREF

  v6 = allShortestRoute;
  if ( (byte_4AFF9A6 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__,
      *(_QWORD *)&index);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__,
      v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v9);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__,
      v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v11);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__,
      v12);
    sub_1BC3008(
      &Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__,
      v13);
    allShortestRoute = (System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *)sub_1BC3008(&Method_System_Collections_Generic_List_int____GetEnumerator__, v14);
    byte_4AFF9A6 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  memset(&v30, 0, sizeof(v30));
  if ( !v6 )
    sub_1BC3264(allShortestRoute, *(_QWORD *)&index);
  v15 = !isDefenseSquare;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v28,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v16 = 0;
  v30 = v28;
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v30,
            (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    if ( !v17 )
      break;
    if ( !v30.fields._current.fields.value )
      sub_1BC3264(v17, v18);
    klass = v30.fields._current.fields.value[1].klass;
    if ( !klass )
      sub_1BC3264(0LL, v18);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      (System_Collections_Generic_List_object__o *)klass,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    *(_OWORD *)&v29.fields._list = *(_OWORD *)&v28.fields._dictionary;
    v29.fields._current = v28.fields._current.fields.key;
    do
    {
LABEL_9:
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v20 )
      {
        v26 = 4;
        goto LABEL_20;
      }
      if ( !v29.fields._current )
        sub_1BC3264(v20, v21);
      monitor = (unsigned int)v29.fields._current[1].monitor;
      v24 = monitor - 1;
    }
    while ( (int)(monitor - 1) <= (int)v15 );
    if ( v15 > monitor )
      monitor = !isDefenseSquare;
    v25 = !isDefenseSquare;
    while ( 1 )
    {
      if ( monitor == v25 )
        sub_1BC326C(v20, v21, v22);
      if ( *((_DWORD *)&v29.fields._current[2].klass + v25) == index )
        break;
      if ( v24 == ++v25 )
        goto LABEL_9;
    }
    v16 = 1;
    v26 = 11;
LABEL_20:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( (v26 | 4) != 4 )
      goto LABEL_26;
  }
  v26 = 12;
LABEL_26:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v30,
    (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
  return v16 & (v26 == 11);
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
  unsigned int v10; // w24
  _BOOL8 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  bool v14; // w20
  unsigned int monitor; // w10
  unsigned int v16; // w9
  unsigned int v17; // w11
  int v18; // w19
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4AFF9A5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&index);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1BC3008(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v9);
    byte_4AFF9A5 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !v6 )
    sub_1BC3264(shortestEnemyRoute, *(_QWORD *)&index);
  v10 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v21 = v20;
  do
  {
LABEL_5:
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    v14 = v11;
    if ( !v11 )
    {
      v18 = 10;
      goto LABEL_16;
    }
    if ( !v21.fields._current )
      sub_1BC3264(v11, v12);
    monitor = (unsigned int)v21.fields._current[1].monitor;
    v16 = monitor - 1;
  }
  while ( (int)(monitor - 1) <= (int)v10 );
  if ( v10 > monitor )
    monitor = v10;
  v17 = v10;
  while ( 1 )
  {
    if ( monitor == v17 )
      sub_1BC326C(v11, v12, v13);
    if ( *((_DWORD *)&v21.fields._current[2].klass + (int)v17) == index )
      break;
    if ( v16 == ++v17 )
      goto LABEL_5;
  }
  v18 = 9;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v14 && v18 == 9;
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
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w0
  bool v15; // w0
  int v17; // w23
  System_Func_int__bool__o **v18; // x21
  System_Func_int__bool__o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int v22; // w8

  if ( (byte_4AFF9A3 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_int____76812400, blockPieces);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_int___, v5);
    sub_1BC3008(&System_Func_int__bool__TypeInfo, v6);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__, v7);
    sub_1BC3008(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo, v8);
    byte_4AFF9A3 = 1;
  }
  v9 = sub_1BC3254(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BC3264(v10, v11);
  *(_QWORD *)(v9 + 16) = route;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)route, v12, v13);
  v14 = System_Linq_Enumerable__Count_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v9 + 16),
          (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
  if ( v14 < 2 )
    return 0;
  *(_DWORD *)(v9 + 24) = 1;
  if ( v14 == 2 )
  {
    return 0;
  }
  else
  {
    v17 = v14 - 1;
    v18 = (System_Func_int__bool__o **)(v9 + 32);
    do
    {
      v19 = *v18;
      if ( !*v18 )
      {
        v19 = (System_Func_int__bool__o *)sub_1BC3254(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v19,
          (Il2CppObject *)v9,
          Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
          0LL);
        *(_QWORD *)(v9 + 32) = v19;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v19, v20, v21);
      }
      v15 = BasicHelper__Any_int__50245724(
              blockPieces,
              (System_Func_T__bool__o *)v19,
              (const MethodInfo_2FEB05C *)Method_BasicHelper_Any_int____76812400);
      if ( v15 )
        break;
      v22 = *(_DWORD *)(v9 + 24) + 1;
      *(_DWORD *)(v9 + 24) = v22;
    }
    while ( v22 < v17 );
  }
  return v15;
}


bool __fastcall WarBoardAIRoute__IsThinkingThreshold(WarBoardAIRoute_o *this, float v, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1BC3264(this, method);
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
  __int64 v14; // x2
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  unsigned __int64 v17; // x25
  int32_t v18; // w22
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  uint32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4AFF9B4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, *(_QWORD *)&actionSquareIndex);
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1BC3008(&WarBoardAIManager_TypeInfo, v11);
    byte_4AFF9B4 = 1;
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
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)entries )
        sub_1BC326C(Square, v13, v14);
      if ( !piecePlaceData )
        break;
      v18 = *(&npcEntityDict->fields._count + v17);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v18,
             &value,
             (const MethodInfo_332C9C0 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Square = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)Square[1].fields.playedStageReinforcementsList;
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardData__GetPiece_36877528(Square, value, 1, v20);
        if ( !Square )
          break;
        if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0LL) )
          ++*attackByLinkAlly;
      }
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v18, v19);
      if ( Square )
      {
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v18, v13);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0LL);
        if ( ((unsigned __int8)Square & 1) != 0 )
          ++*attackByLinkEnemy;
      }
      LODWORD(entries) = npcEntityDict->fields._entries;
      if ( (__int64)++v17 >= (int)entries )
        return;
    }
LABEL_27:
    sub_1BC3264(Square, v13);
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
  int32_t v17; // w25
  const MethodInfo *v18; // x4
  System_Collections_Generic_List_object__o *moveByLinkedPiece; // x24
  WarBoardPieceData_o *v20; // x23
  const MethodInfo *v21; // x2
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  WarBoardAIRoute_o *v27; // x1
  Il2CppClass **v28; // x0
  const MethodInfo *v29; // x2
  WarBoardAIRoute_RouteData_o *v30; // x8
  int32_t v31; // w24
  int32_t ClassId; // w25

  if ( (byte_4AFF9B8 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, routeData);
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1BC3008(&SvtClassAttri_TypeInfo, v9);
    this = (WarBoardAIRoute_o *)sub_1BC3008(&WarBoardAIManager_TypeInfo, v10);
    byte_4AFF9B8 = 1;
  }
  v11 = *routeData;
  if ( !*routeData
    || (actionSquare = v11->fields.actionSquare) == 0LL
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0LL )
  {
LABEL_51:
    sub_1BC3264(this, routeData);
  }
  if ( (int)*(_QWORD *)&linkedSquares->max_length >= 1 )
  {
    basePiece = v11->fields.basePiece;
    v15 = 0LL;
    max_length = *(_QWORD *)&linkedSquares->max_length;
    do
    {
      if ( v15 >= max_length )
        sub_1BC326C(this, routeData, piecePlaceData);
      v17 = linkedSquares->m_Items[v15 + 1];
      this = (WarBoardAIRoute_o *)WarBoardAIRoute__CanAcquireItem(
                                    this,
                                    v17,
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
                                    v17,
                                    piecePlaceData,
                                    v18);
      if ( this )
      {
        if ( !*routeData )
          goto LABEL_51;
        moveByLinkedPiece = (System_Collections_Generic_List_object__o *)(*routeData)->fields.moveByLinkedPiece;
        v20 = (WarBoardPieceData_o *)this;
        this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_36875824((WarBoardData_o *)this, v17, v21);
        if ( !moveByLinkedPiece )
          goto LABEL_51;
        items = moveByLinkedPiece->fields._items;
        v25 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        ++moveByLinkedPiece->fields._version;
        if ( !items )
          goto LABEL_51;
        size = moveByLinkedPiece->fields._size;
        v27 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            moveByLinkedPiece,
            (Il2CppObject *)this,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          moveByLinkedPiece->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v27;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
        }
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        if ( WarBoardAIManager__IsAllyPiece(basePiece, v20, v29)
          && (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v20, 0LL), ((unsigned __int8)this & 1) != 0) )
        {
          if ( !*routeData )
            goto LABEL_51;
          ++(*routeData)->fields.moveByLinkedAlly;
        }
        else
        {
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(
                                        basePiece,
                                        v20,
                                        (const MethodInfo *)piecePlaceData);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*routeData )
              goto LABEL_51;
            (*routeData)->fields.flagNow |= 0x40uLL;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v20, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v30 = *routeData;
              if ( !*routeData )
                goto LABEL_51;
              if ( (v30->fields.flagNow & 0x2000000) != 0 )
                goto LABEL_43;
              if ( !basePiece )
                goto LABEL_51;
              this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(basePiece, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v20, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
                  if ( !this )
                    goto LABEL_51;
                  this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0, 0LL);
                  if ( !v20->fields._battleServant_k__BackingField )
                    goto LABEL_51;
                  v31 = (int)this;
                  ClassId = BattleServantData__getClassId(v20->fields._battleServant_k__BackingField, 0, 0LL);
                  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                  if ( SvtClassAttri__getMagnification(v31, ClassId, 0LL) > 1.0 )
                  {
                    v30 = *routeData;
                    if ( !*routeData )
                      goto LABEL_51;
LABEL_43:
                    v30->fields.flagNow |= 0x2000000uLL;
                  }
                }
              }
              if ( !*routeData )
                goto LABEL_51;
              ++(*routeData)->fields.moveByLinkedEnemy;
            }
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v20, 0LL);
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
  __int64 v21; // x25
  __int64 v22; // x0
  __int64 v23; // x1
  System_Predicate_object__o *v24; // x24
  Il2CppObject *v25; // x0
  Il2CppClass *klass; // x8
  IWarBoardObjectData_o *v27; // x23
  __int64 v28; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 p_method; // x0
  WarBoardAIRoute_TargetData_o *v31; // x22
  const MethodInfo *v32; // x4

  if ( (byte_4AFF999 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__,
      targetDic);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v14);
    sub_1BC3008(&IWarBoardObjectData_TypeInfo, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__, v16);
    sub_1BC3008(&System_Predicate_IWarBoardObjectData__TypeInfo, v17);
    sub_1BC3008(&WarBoardAIRoute_TargetData_TypeInfo, v18);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__, v19);
    sub_1BC3008(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo, v20);
    byte_4AFF999 = 1;
  }
  v21 = sub_1BC3254(WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_17;
  *(_DWORD *)(v21 + 16) = squareIndex;
  *notSquareTarget = 0;
  if ( !targetDic )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_long__object___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
         *(int *)(v21 + 16),
         (const MethodInfo_334BF28 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v24 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_IWarBoardObjectData__TypeInfo);
  System_Predicate_object____ctor(
    v24,
    (Il2CppObject *)v21,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    0LL);
  if ( !objectList )
LABEL_17:
    sub_1BC3264(v22, v23);
  v25 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Predicate_T__o *)v24,
          (const MethodInfo_36A14A8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
  if ( v25 )
  {
    *notSquareTarget = 1;
    klass = v25->klass;
    v27 = (IWarBoardObjectData_o *)v25;
    v28 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v28;
        p_offset += 2;
        if ( !v28 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C13570(v25, IWarBoardObjectData_TypeInfo, 2LL);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(v27, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      v31 = (WarBoardAIRoute_TargetData_o *)sub_1BC3254(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_36860356(v31, v27, trendKey, conditionId, v32);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
        trendKey,
        (Il2CppObject *)v31,
        (const MethodInfo_334BD20 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
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
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4AFF997 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__,
      *(_QWORD *)&aiId);
    byte_4AFF997 = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_1BC3264(0LL, *(_QWORD *)&aiId);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_33099DC *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
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
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *basePiece; // x8

  if ( (byte_4AFF9B6 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__uint__Remove__, piecePlaceData);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___76712800, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__, v11);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v12);
    byte_4AFF9B6 = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor_53652036(
    v13,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_332AA44 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___76712800);
  if ( !routeData )
    goto LABEL_12;
  if ( (routeData->fields.flagNow & 0x4000000) != 0 )
  {
    actionPiece = routeData->fields.actionPiece;
    if ( actionPiece && v13 )
    {
      System_Collections_Generic_Dictionary_int__uint___set_Item(
        v13,
        baseSquareIndex,
        actionPiece->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_332B314 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_1BC3264(v14, v15);
  }
  if ( !v13 )
    goto LABEL_12;
  v14 = System_Collections_Generic_Dictionary_int__uint___Remove(
          v13,
          baseSquareIndex,
          (const MethodInfo_332C6E0 *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v13,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_332B314 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v13;
}


bool __fastcall WarBoardAIRoute____ctor_b__42_0(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
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
  if ( (byte_4AFF9BB & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, x);
    byte_4AFF9BB = 1;
  }
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BC3264)(this, x);
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
  System_Collections_Generic_List_object__o *v11; // x22
  struct System_Collections_Generic_List_int____o **p_replaceDataList; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  WarBoardData_o *Instance; // x0
  WarBoardData_o *v16; // x1
  const MethodInfo *v17; // x4
  __int64 v18; // x2
  System_Int32_array *v19; // x8
  unsigned int v20; // w9
  unsigned int max_length; // w10
  unsigned int v22; // w23
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w25
  int32_t v25; // w24
  const MethodInfo *v26; // x3
  int stageNpcMaster; // w8
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Int32_array *data; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4AFF9D7 & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, *(_QWORD *)&forceId);
    sub_1BC3008(&Method_System_Collections_Generic_List_int____Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_int_____ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_int____TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_4AFF9D7 = 1;
  }
  data = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_OWORD *)&this->fields.masterType = xmmword_BDF420;
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v11;
  p_replaceDataList = &this->fields.replaceDataList;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_replaceDataList, (int32_t)v11, v13, v14);
  *((_DWORD *)p_replaceDataList + 2) = -1;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_20;
  Instance = (WarBoardData_o *)WarBoardData__IsDefenseTarget(Instance, &data, forceId, groupId, v17);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  v19 = data;
  if ( !data )
LABEL_20:
    sub_1BC3264(Instance, v16);
  v20 = 0;
  while ( 1 )
  {
    max_length = v19->max_length;
    if ( (int)v20 >= (int)max_length )
      break;
    if ( v20 >= max_length )
      goto LABEL_22;
    v22 = v20 + 1;
    if ( v20 + 1 >= max_length )
      goto LABEL_22;
    v23 = (System_Collections_Generic_List_object__o *)*p_replaceDataList;
    v24 = v19->m_Items[v20 + 1];
    v25 = v19->m_Items[v22 + 1];
    Instance = (WarBoardData_o *)sub_1BC30B0(int___TypeInfo, 2LL);
    if ( !Instance )
      goto LABEL_20;
    stageNpcMaster = (int)Instance->fields.stageNpcMaster;
    v16 = Instance;
    if ( !stageNpcMaster || (LODWORD(Instance->fields.npcEntityDict) = v24, stageNpcMaster == 1) )
LABEL_22:
      sub_1BC326C(Instance, v16, v18);
    HIDWORD(Instance->fields.npcEntityDict) = v25;
    if ( v23 )
    {
      items = v23->fields._items;
      v29 = Method_System_Collections_Generic_List_int____Add__;
      ++v23->fields._version;
      if ( items )
      {
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            (Il2CppObject *)Instance,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v16;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v16, v18, v26);
        }
        v19 = data;
        v20 = v22 + 1;
        if ( data )
          continue;
      }
    }
    goto LABEL_20;
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
  __int64 v7; // x1
  void *replaceDataList; // x0
  uint32_t uniqueIndex_k__BackingField; // w8
  int32_t v10; // w22
  int32_t replacePriority; // w8
  __int64 v12; // x2
  __int64 v13; // x8
  unsigned int v14; // w8
  int32_t v15; // w8
  int32_t v16; // w8

  if ( (byte_4AFF9D8 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int____get_Count__, *(_QWORD *)&type);
    sub_1BC3008(&Method_System_Collections_Generic_List_int____get_Item__, v7);
    byte_4AFF9D8 = 1;
  }
  if ( type
    || (replaceDataList = (void *)BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)this->fields.replaceDataList,
                                    0LL),
        ((unsigned __int8)replaceDataList & 1) == 0) )
  {
    replaceDataList = this->fields.replaceDataList;
    if ( replaceDataList )
    {
      v10 = 0;
      do
      {
        if ( v10 >= *((_DWORD *)replaceDataList + 6) )
          return;
        replacePriority = this->fields.replacePriority;
        if ( replacePriority != -1 && replacePriority < v10 )
          return;
        replaceDataList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)replaceDataList,
                            v10,
                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_int____get_Item__);
        if ( pieceData != 0LL && type == 0 )
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
            this->fields.replacePriority = v10;
            goto LABEL_34;
          }
        }
        if ( type != 2 || pieceData == 0LL )
        {
          if ( type == 1 )
          {
            if ( !replaceDataList )
              break;
            v13 = *((_QWORD *)replaceDataList + 3);
            if ( !(_DWORD)v13 )
              goto LABEL_36;
            if ( *((_DWORD *)replaceDataList + 8) == 1 )
            {
              this->fields.masterType = 1;
              if ( (unsigned int)v13 <= 1 )
LABEL_36:
                sub_1BC326C(replaceDataList, *(_QWORD *)&type, v12);
              v16 = *((_DWORD *)replaceDataList + 9);
              this->fields.replacePriority = v10;
              this->fields.masterSquareIndex = v16;
              return;
            }
          }
        }
        else
        {
          if ( !replaceDataList )
            break;
          v14 = *((_DWORD *)replaceDataList + 6);
          if ( !v14 )
            goto LABEL_36;
          if ( *((_DWORD *)replaceDataList + 8) == 2 )
          {
            if ( v14 <= 1 )
              goto LABEL_36;
            v15 = *((_DWORD *)replaceDataList + 9);
            if ( v15 == pieceData->fields._index_k__BackingField )
            {
              this->fields.masterPieceIndex = v15;
              this->fields.masterType = 2;
              goto LABEL_33;
            }
          }
        }
        replaceDataList = this->fields.replaceDataList;
        ++v10;
      }
      while ( replaceDataList );
    }
LABEL_28:
    sub_1BC3264(replaceDataList, *(_QWORD *)&type);
  }
  this->fields.masterType = 0;
  if ( !pieceData )
    goto LABEL_28;
  uniqueIndex_k__BackingField = pieceData->fields._uniqueIndex_k__BackingField;
  this->fields.replacePriority = 0;
LABEL_34:
  this->fields.masterUniqueIndex = uniqueIndex_k__BackingField;
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
  System_Collections_Generic_List_object__o *v12; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o **p_FutureTrendInfoList_k__BackingField; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x22
  System_Func_T__TResult__o *v20; // x23
  WarBoardActionTrendEntity_array *HasMatchCondition; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x8
  WarBoardActionTrendEntity_array *v25; // x20
  unsigned __int64 i; // x24
  WarBoardActionTrendEntity_o *v27; // x23
  System_Collections_Generic_List_object__o *v28; // x21
  WarBoardAIRoute_ActionTrendInfo_o *v29; // x22
  const MethodInfo *v30; // x2
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int32_t condType; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4AFF9C6 & 1) == 0 )
  {
    sub_1BC3008(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, entity);
    sub_1BC3008(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v10);
    sub_1BC3008(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__, v11);
    byte_4AFF9C6 = 1;
  }
  condType = 0;
  v12 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v12;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._FutureTrendInfoList_k__BackingField, (int32_t)v12, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Entity_k__BackingField = entity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)entity, v16, v17);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v18);
  v20 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v20,
    0LL,
    Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__,
    0LL);
  HasMatchCondition = (WarBoardActionTrendEntity_array *)WarBoardActionTrendConditionMaster__HasMatchCondition(
                                                           ConditionEntityArray,
                                                           (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v20,
                                                           &condType,
                                                           0LL);
  this->fields._HasTargetIndividualityCond_k__BackingField = (unsigned __int8)HasMatchCondition & 1;
  if ( !entity )
    goto LABEL_20;
  if ( !WarBoardActionTrendEntity__get_HasFutureTrend(entity, 0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  HasMatchCondition = (WarBoardActionTrendEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !HasMatchCondition
    || (HasMatchCondition = WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                              (WarBoardActionTrendMaster_o *)HasMatchCondition,
                              entity,
                              0LL)) == 0LL )
  {
LABEL_20:
    sub_1BC3264(HasMatchCondition, v22);
  }
  v24 = *(_QWORD *)&HasMatchCondition->max_length;
  v25 = HasMatchCondition;
  if ( (int)v24 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v24; ++i )
    {
      if ( i >= (unsigned int)v24 )
        sub_1BC326C(HasMatchCondition, v22, v23);
      v27 = v25->m_Items[i];
      if ( v27 )
      {
        v28 = (System_Collections_Generic_List_object__o *)*p_FutureTrendInfoList_k__BackingField;
        v29 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1BC3254(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v29, v27, v30);
        if ( !v28 )
          goto LABEL_20;
        items = v28->fields._items;
        v34 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++v28->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v28->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            (Il2CppObject *)v29,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v28->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v29;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v29, v31, v32);
        }
      }
      LODWORD(v24) = v25->max_length;
    }
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
  CGThumbnailListItem_o *p_conditionEntityArray; // x19
  System_Object_array *conditionEntityArray; // x21
  struct WarBoardActionTrendEntity_o *Entity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *conditionIds; // x20
  WarBoardAIRoute_ActionTrendInfo___c_c *v12; // x0
  System_Func_T__TResult__o *_9__8_0; // x21
  Il2CppObject *v14; // x22
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  v2 = this;
  if ( (byte_4AFF9C5 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___, v4);
    sub_1BC3008(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo, v5);
    sub_1BC3008(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__, v6);
    this = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1BC3008(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v7);
    byte_4AFF9C5 = 1;
  }
  p_conditionEntityArray = (CGThumbnailListItem_o *)&v2->fields.conditionEntityArray;
  conditionEntityArray = (System_Object_array *)v2->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = v2->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_1BC3264(this, method);
    conditionIds = (System_Collections_Generic_IEnumerable_TSource__o *)Entity_k__BackingField->fields.conditionIds;
    v12 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    if ( !WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
      v12 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    }
    _9__8_0 = (System_Func_T__TResult__o *)v12->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__8_0 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__8_0,
        v14,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        0LL);
      static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v16, v17);
    }
    v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           conditionIds,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_3033958 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v19 = BasicHelper__ExcludeNull_object_(
            v18,
            (const MethodInfo_2FEBC30 *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = System_Linq_Enumerable__ToArray_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                             (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    p_conditionEntityArray->klass = (CGThumbnailListItem_c *)conditionEntityArray;
    sub_1BC2FAC(p_conditionEntityArray, (int32_t)conditionEntityArray, v20, v21);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFF9C7 & 1) == 0 )
  {
    sub_1BC3008(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v1);
    byte_4AFF9C7 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_ActionTrendInfo___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4AFF9C8 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___, *(_QWORD *)&x);
    sub_1BC3008(&DataManager_TypeInfo, v4);
    sub_1BC3008(
      &Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__,
      v5);
    byte_4AFF9C8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_object )
    sub_1BC3264(0LL, v7);
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   x,
                                                   (const MethodInfo_32AF070 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
}


void __fastcall WarBoardAIRoute_AdvantagePieceData___ctor(
        WarBoardAIRoute_AdvantagePieceData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_int__object__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_Dictionary_int__object__o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_Dictionary_int__object__o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4AFF9D0 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v3);
    byte_4AFF9D0 = 1;
  }
  this->fields.flagNow = 1LL;
  *(_QWORD *)&this->fields.baseCARange = -1LL;
  *(_QWORD *)&this->fields.baseAARange = -1LL;
  *(_QWORD *)&this->fields.baseDARange = -1LL;
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dicClassAdvantageServant, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dicClassDisAdvantageServant, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v10;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dicAttackAdvantageServant, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dicAttackDisAdvantageServant, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v16,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v16;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dicDefenseAdvantageServant, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v19,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dicDefenseDisAdvantageServant, (int32_t)v19, v20, v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_DesignationItemData___ctor(
        WarBoardAIRoute_DesignationItemData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4AFF9D1 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v3);
    byte_4AFF9D1 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_PiecePersonality___ctor(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4AFF9BF & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v4);
    sub_1BC3008(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo, v5);
    byte_4AFF9BF = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v6;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v9;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.ratingOffsetList, (int32_t)v9, v10, v11);
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
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  CGThumbnailListItem_o *p_attackOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v10; // x0
  System_Func_object__bool__o *_9__4_0; // x21
  Il2CppObject *v12; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_TSource__o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4AFF9BC & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v3);
    sub_1BC3008(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v4);
    sub_1BC3008(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__, v5);
    sub_1BC3008(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v6);
    byte_4AFF9BC = 1;
  }
  p_attackOffset = (CGThumbnailListItem_o *)&this->fields.attackOffset;
  result = this->fields.attackOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    _9__4_0 = (System_Func_object__bool__o *)v10->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__4_0 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__4_0,
        v12,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        0LL);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v14, v15);
    }
    v16 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__4_0,
            (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v17 = System_Linq_Enumerable__ToList_object_(
            v16,
            (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_attackOffset->klass = (CGThumbnailListItem_c *)v17;
    sub_1BC2FAC(p_attackOffset, (int32_t)v17, v18, v19);
    return (System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)p_attackOffset->klass;
  }
  return result;
}


System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4AFF9BE & 1) == 0 )
  {
    sub_1BC3008(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method);
    byte_4AFF9BE = 1;
  }
  v3 = sub_1BC3254(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v4, v5);
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
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  CGThumbnailListItem_o *p_moveOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v10; // x0
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v12; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_TSource__o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4AFF9BD & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v3);
    sub_1BC3008(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v4);
    sub_1BC3008(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__, v5);
    sub_1BC3008(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v6);
    byte_4AFF9BD = 1;
  }
  p_moveOffset = (CGThumbnailListItem_o *)&this->fields.moveOffset;
  result = this->fields.moveOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__bool__o *)v10->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__5_0,
        v12,
        Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__,
        0LL);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v14, v15);
    }
    v16 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v17 = System_Linq_Enumerable__ToList_object_(
            v16,
            (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_moveOffset->klass = (CGThumbnailListItem_c *)v17;
    sub_1BC2FAC(p_moveOffset, (int32_t)v17, v18, v19);
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x8
  System_Collections_Generic_List_object__o *actionTrandList; // x0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v8; // x9
  __int128 v9; // q0
  CGThumbnailListItem_o *p__7__wrap1; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v13; // x8
  struct WarBoardAIRoute_ActionTrendInfo_o *trendInfo_5__3; // x8
  System_Collections_Generic_List_object__o *FutureTrendInfoList_k__BackingField; // x0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v16; // x9
  __int128 v17; // q0
  CGThumbnailListItem_o *p__7__wrap3; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  bool v24; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v25; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *current; // x1
  bool result; // w0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  bool v34; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v35; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v36; // x1
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v37; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v41; // x8
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-50h]
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o **v44; // [xsp+48h] [xbp-28h]
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v45; // [xsp+58h] [xbp-18h] BYREF

  v45 = this;
  v2 = this;
  if ( (byte_4AFF9C1 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__, v3);
    this = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_1BC3008(
                                                                                 &Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__,
                                                                                 v4);
    byte_4AFF9C1 = 1;
  }
  v44 = &v45;
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
    goto LABEL_12;
  if ( _1__state == 1 )
  {
    trendInfo_5__3 = v2->fields._trendInfo_5__3;
    v2->fields.__1__state = -3;
    if ( !trendInfo_5__3 )
      sub_1BC3264(this, method);
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_1BC3264(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      &v42,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v16 = v45;
    v17 = *(_OWORD *)&v42.fields._list;
    p__7__wrap3 = (CGThumbnailListItem_o *)&v45->fields.__7__wrap3;
    v43 = v42;
    v45->fields.__7__wrap3.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v42.fields._current;
    *(_OWORD *)&v16->fields.__7__wrap3.fields._list = v17;
    sub_1BC2FAC(p__7__wrap3, 0, v19, v20);
    v2 = v45;
LABEL_12:
    v2->fields.__1__state = -4;
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap3,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    v25 = v45;
    if ( v24 )
    {
      current = v45->fields.__7__wrap3.fields._current;
      v45->fields.__2__current = current;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v25->fields.__2__current, (int32_t)current, v22, v23);
      result = 1;
      v45->fields.__1__state = 2;
      return result;
    }
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(v45, v21);
    v28 = v45;
    *(_OWORD *)&v45->fields._trendInfo_5__3 = 0u;
    v28 = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)((char *)v28 + 72);
    *(_OWORD *)&v28->fields.__1__state = 0u;
    sub_1BC2FAC((CGThumbnailListItem_o *)v28, 0, v29, v30);
    v13 = v45;
    goto LABEL_15;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1BC3264(this, method);
  actionTrandList = (System_Collections_Generic_List_object__o *)_4__this->fields.actionTrandList;
  if ( !actionTrandList )
    sub_1BC3264(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    &v42,
    actionTrandList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v8 = v45;
  v9 = *(_OWORD *)&v42.fields._list;
  p__7__wrap1 = (CGThumbnailListItem_o *)&v45->fields.__7__wrap1;
  v43 = v42;
  v45->fields.__7__wrap1.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v42.fields._current;
  *(_OWORD *)&v8->fields.__7__wrap1.fields._list = v9;
  sub_1BC2FAC(p__7__wrap1, 0, v11, v12);
  v13 = v45;
  v45->fields.__1__state = -3;
LABEL_15:
  v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v13->fields.__7__wrap1,
          (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
  v35 = v45;
  if ( v34 )
  {
    v36 = v45->fields.__7__wrap1.fields._current;
    v45->fields._trendInfo_5__3 = v36;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v35->fields._trendInfo_5__3, (int32_t)v36, v32, v33);
    v37 = v45;
    v38 = v45->fields._trendInfo_5__3;
    v45->fields.__2__current = v38;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v37->fields.__2__current, (int32_t)v38, v39, v40);
    result = 1;
    v45->fields.__1__state = 1;
  }
  else
  {
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(v45, v31);
    v41 = v45;
    result = 0;
    v45->fields.__7__wrap1.fields._list = 0LL;
    *(_QWORD *)&v41->fields.__7__wrap1.fields._index = 0LL;
    v41->fields.__7__wrap1.fields._current = 0LL;
  }
  return result;
}


System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__GetEnumerator(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4AFF9C4 & 1) == 0 )
  {
    sub_1BC3008(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method);
    byte_4AFF9C4 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1BC3254(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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
  if ( (byte_4AFF9C2 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, method);
    byte_4AFF9C2 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFF9C3 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, method);
    byte_4AFF9C3 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFF9C0 & 1) == 0 )
  {
    sub_1BC3008(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v1);
    byte_4AFF9C0 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_PiecePersonality___c_o *)v2;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1BC3264(this, 0LL);
  return x->fields.type == 0;
}


bool __fastcall WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.type == 1;
}


void __fastcall WarBoardAIRoute_PutSquareTarget___ctor(
        WarBoardAIRoute_PutSquareTarget_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4AFF9D2 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v3);
    byte_4AFF9D2 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v4,
    (const MethodInfo_334B364 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v7,
    (const MethodInfo_334B364 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dicObjectPutSquareIndex, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v10,
    (const MethodInfo_334B364 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v10;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dicIndividualityPutSqareIndex, (int32_t)v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData___ctor(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4AFF9CB & 1) == 0 )
  {
    sub_1BC3008(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, method);
    byte_4AFF9CB = 1;
  }
  this->fields.flagNow = 1LL;
  v3 = (Il2CppObject *)sub_1BC3254(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.evalOffsetMagnification = (struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)v3;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.evalOffsetMagnification, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData__CalcEvalValue(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  System_Decimal_c *v5; // x8
  int32_t WarBoardEvalFactorsAffectRatio; // w20
  const MethodInfo *v7; // x1
  System_Decimal_o *v8; // x20
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x0
  System_Decimal_o *flagNow_low; // x8
  const MethodInfo *v11; // x1
  System_Decimal_o *v12; // x8
  System_Decimal_o *MoveValue; // x22
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *futureEvalOffsetMag; // x0
  System_Decimal_o *v15; // x23
  System_Decimal_o *Value; // x24
  System_Decimal_c *v17; // x0
  System_Decimal_o *AttackValue; // x22
  int32_t attackEvalOffsetAddValue; // w24
  System_Decimal_o *v20; // x1
  System_Decimal_o *v21; // x23
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v23; // x8
  System_Decimal_o *v24; // x0
  System_Decimal_o *v25; // x1
  System_Decimal_o *v26; // x0
  System_Decimal_o *v27; // x1
  System_Decimal_o *v28; // x8
  System_Decimal_o *v29; // x0
  System_Decimal_o *v30; // x8
  System_Decimal_o *v31; // x0
  const MethodInfo *v32; // x1

  if ( (byte_4AFF9CD & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&System_Decimal_TypeInfo, v3);
    byte_4AFF9CD = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = System_Decimal_TypeInfo;
  WarBoardEvalFactorsAffectRatio = v4->static_fields->WarBoardEvalFactorsAffectRatio;
  if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v8 = System_Decimal__op_Implicit_64258308((System_Decimal_o *)v5, WarBoardEvalFactorsAffectRatio, 0LL);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_1BC3264(0LL, v7);
  flagNow_low = (System_Decimal_o *)LOBYTE(this->fields.flagNow);
  if ( ((unsigned __int8)flagNow_low & 2) != 0 )
  {
    AttackValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(
                    flagNow_low,
                    evalOffsetMagnification,
                    v7);
    attackEvalOffsetAddValue = this->fields.attackEvalOffsetAddValue;
    v21 = v20;
    cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  else
  {
    MoveValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(
                  flagNow_low,
                  evalOffsetMagnification,
                  v7);
    futureEvalOffsetMag = this->fields.futureEvalOffsetMag;
    v15 = (System_Decimal_o *)v11;
    if ( futureEvalOffsetMag )
    {
      Value = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetValue(v12, futureEvalOffsetMag, v11);
      v17 = System_Decimal_TypeInfo;
    }
    else
    {
      v17 = System_Decimal_TypeInfo;
      if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
        v17 = System_Decimal_TypeInfo;
      }
      Value = *(System_Decimal_o **)v17->static_fields;
    }
    v23 = (System_Decimal_o *)v17->_2.cctor_finished;
    if ( !(_DWORD)v23 )
      j_il2cpp_runtime_class_init_0(v17);
    v24 = System_Decimal__op_Addition(v23, MoveValue, v15, (const MethodInfo *)Value);
    attackEvalOffsetAddValue = this->fields.moveEvalOffsetAddValue;
    AttackValue = v24;
    v21 = v25;
  }
  v26 = System_Decimal__op_Implicit_64258308(cctor_finished, attackEvalOffsetAddValue, 0LL);
  v29 = System_Decimal__op_Division(v28, v26, v27, (const MethodInfo *)v8);
  v31 = System_Decimal__op_Addition(v30, AttackValue, v21, (const MethodInfo *)v29);
  this->fields.evalValue = System_Decimal__op_Explicit_64258812(v31, v32);
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


bool __fastcall WarBoardAIRoute_RouteData__HasFlag_36876036(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_4AFF9CA & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__, method);
    byte_4AFF9CA = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  return futureLookingTrendHashSet && futureLookingTrendHashSet->fields._count > 0;
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute_RouteData__ShallowCopy(
        WarBoardAIRoute_RouteData_o *this,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *result; // x0
  __int64 methodPtr_low; // x9
  WarBoardAIRoute_RouteData_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4AFF9CC & 1) == 0 )
  {
    sub_1BC3008(&WarBoardAIRoute_RouteData_TypeInfo, method);
    byte_4AFF9CC = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0LL);
  if ( result )
  {
    methodPtr_low = LOBYTE(WarBoardAIRoute_RouteData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      sub_1BC3524(result);
      WarBoardAIRoute_RouteData__CalcEvalValue(v5, v6);
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
  CGThumbnailListItem_o *p_futureLookingTrendHashSet; // x19
  System_Collections_Generic_HashSet_T__o *v5; // x20
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // t1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4AFF9C9 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v3);
    byte_4AFF9C9 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = (CGThumbnailListItem_o *)&this->fields.futureLookingTrendHashSet;
  v5 = (System_Collections_Generic_HashSet_T__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v5 = (System_Collections_Generic_HashSet_T__o *)sub_1BC3254(System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v5,
      (const MethodInfo_355E2AC *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    p_futureLookingTrendHashSet->klass = (CGThumbnailListItem_c *)v5;
    sub_1BC2FAC(p_futureLookingTrendHashSet, (int32_t)v5, v7, v8);
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


System_Decimal_o *__fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(
        System_Decimal_o *retstr,
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  float warAttack; // s8
  float benAttack; // s9
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4AFF9CE & 1) == 0 )
  {
    sub_1BC3008(&System_Decimal_TypeInfo, method);
    byte_4AFF9CE = 1;
  }
  warAttack = this->fields.warAttack;
  benAttack = this->fields.benAttack;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, warAttack + benAttack, 0LL);
}


System_Decimal_o *__fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(
        System_Decimal_o *retstr,
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  float warMove; // s8
  float benMove; // s9
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4AFF9CF & 1) == 0 )
  {
    sub_1BC3008(&System_Decimal_TypeInfo, method);
    byte_4AFF9CF = 1;
  }
  warMove = this->fields.warMove;
  benMove = this->fields.benMove;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, warMove + benMove, 0LL);
}


System_Decimal_o *__fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetValue(
        System_Decimal_o *retstr,
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


void __fastcall WarBoardAIRoute_TargetData___ctor_36858900(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardSquareData_o *targetSquare,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  WarBoardAIRoute_TargetData_o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v8 = this;
  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields.targetSquare = targetSquare;
  v8 = (WarBoardAIRoute_TargetData_o *)((char *)v8 + 48);
  v8->fields.targetObject = (struct IWarBoardObjectData_o *)actionTrendKey;
  v8->fields.moveByDistanceType = conditionId;
  sub_1BC2FAC((CGThumbnailListItem_o *)v8, (int32_t)targetSquare, v9, v10);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_36860356(
        WarBoardAIRoute_TargetData_o *this,
        IWarBoardObjectData_o *targetObject,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actionTrendKey = actionTrendKey;
  this->fields.conditionId = conditionId;
  this->fields.targetObject = targetObject;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)targetObject, v9, v10);
  WarBoardAIRoute_TargetData__DetectObject(this, v11);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_36870772(
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
  const MethodInfo *v14; // x3
  struct IWarBoardObjectData_o *targetObject; // x1
  struct WarBoardSquareData_o *targetSquare; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseTargetData )
    sub_1BC3264(v11, v12);
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)targetObject, v13, v14);
  targetSquare = baseTargetData->fields.targetSquare;
  this->fields.targetSquare = targetSquare;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.targetSquare, (int32_t)targetSquare, v17, v18);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v19);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_36872780(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        IWarBoardObjectData_o *targetObject,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.targetObject = targetObject;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)targetObject, v13, v14);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v15);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_36886064(
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
  __int64 methodPtr_low; // x9

  v2 = (Il2CppObject *)b;
  if ( (byte_4AFF9D3 & 1) == 0 )
  {
    b = (WarBoardAIRoute_TargetData_o *)sub_1BC3008(&WarBoardAIRoute_TargetData_TypeInfo, method);
    byte_4AFF9D3 = 1;
  }
  if ( !v2 )
LABEL_9:
    sub_1BC3264(b, method);
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone(v2, 0LL);
  if ( result )
  {
    methodPtr_low = LOBYTE(WarBoardAIRoute_TargetData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      sub_1BC3524(result);
      goto LABEL_9;
    }
  }
  return result;
}


void __fastcall WarBoardAIRoute_TargetData__DetectObject(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  struct IWarBoardObjectData_o *targetObject; // x8
  WarBoardPieceData_c *v8; // x9
  __int64 methodPtr_low; // x10
  struct IWarBoardObjectData_o *v10; // x11
  int32_t v11; // w1
  struct WarBoardPieceData_o **p_targetPiece; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct IWarBoardObjectData_o *v15; // x8
  WarBoardItemData_c *v16; // x9
  __int64 v17; // x10
  struct IWarBoardObjectData_o *v18; // x11
  int32_t v19; // w1
  struct WarBoardItemData_o **p_targetItem; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct IWarBoardObjectData_o *v23; // x8
  WarBoardTreasureData_c *v24; // x9
  __int64 v25; // x10
  struct IWarBoardObjectData_o *v26; // x11
  int32_t v27; // w1
  struct WarBoardTreasureData_o **p_targetTreasure; // x19

  if ( (byte_4AFF9D5 & 1) == 0 )
  {
    sub_1BC3008(&WarBoardItemData_TypeInfo, method);
    sub_1BC3008(&WarBoardPieceData_TypeInfo, v5);
    sub_1BC3008(&WarBoardTreasureData_TypeInfo, v6);
    byte_4AFF9D5 = 1;
  }
  targetObject = this->fields.targetObject;
  if ( targetObject )
  {
    v8 = WarBoardPieceData_TypeInfo;
    methodPtr_low = LOBYTE(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(targetObject->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardPieceData_TypeInfo )
        v10 = this->fields.targetObject;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    this->fields.targetPiece = (struct WarBoardPieceData_o *)v10;
    p_targetPiece = &this->fields.targetPiece;
    if ( LOBYTE(targetObject->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[methodPtr_low - 1] == v8 )
        v11 = (int)targetObject;
      else
        v11 = 0;
    }
    else
    {
      v11 = 0;
    }
  }
  else
  {
    v11 = 0;
    this->fields.targetPiece = 0LL;
    p_targetPiece = &this->fields.targetPiece;
  }
  sub_1BC2FAC((CGThumbnailListItem_o *)p_targetPiece, v11, v2, v3);
  v15 = this->fields.targetObject;
  if ( v15 )
  {
    v16 = WarBoardItemData_TypeInfo;
    v17 = LOBYTE(WarBoardItemData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v15->klass->vtable[0].methodPtr) >= (unsigned int)v17 )
    {
      if ( (WarBoardItemData_c *)v15->klass->_2.typeHierarchy[v17 - 1] == WarBoardItemData_TypeInfo )
        v18 = this->fields.targetObject;
      else
        v18 = 0LL;
    }
    else
    {
      v18 = 0LL;
    }
    this->fields.targetItem = (struct WarBoardItemData_o *)v18;
    p_targetItem = &this->fields.targetItem;
    if ( LOBYTE(v15->klass->vtable[0].methodPtr) >= (unsigned int)v17 )
    {
      if ( (WarBoardItemData_c *)v15->klass->_2.typeHierarchy[v17 - 1] == v16 )
        v19 = (int)v15;
      else
        v19 = 0;
    }
    else
    {
      v19 = 0;
    }
  }
  else
  {
    v19 = 0;
    this->fields.targetItem = 0LL;
    p_targetItem = &this->fields.targetItem;
  }
  sub_1BC2FAC((CGThumbnailListItem_o *)p_targetItem, v19, v13, v14);
  v23 = this->fields.targetObject;
  if ( v23 )
  {
    v24 = WarBoardTreasureData_TypeInfo;
    v25 = LOBYTE(WarBoardTreasureData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v23->klass->vtable[0].methodPtr) >= (unsigned int)v25 )
    {
      if ( (WarBoardTreasureData_c *)v23->klass->_2.typeHierarchy[v25 - 1] == WarBoardTreasureData_TypeInfo )
        v26 = this->fields.targetObject;
      else
        v26 = 0LL;
    }
    else
    {
      v26 = 0LL;
    }
    this->fields.targetTreasure = (struct WarBoardTreasureData_o *)v26;
    p_targetTreasure = &this->fields.targetTreasure;
    if ( LOBYTE(v23->klass->vtable[0].methodPtr) >= (unsigned int)v25 )
    {
      if ( (WarBoardTreasureData_c *)v23->klass->_2.typeHierarchy[v25 - 1] == v24 )
        v27 = (int)v23;
      else
        v27 = 0;
    }
    else
    {
      v27 = 0;
    }
  }
  else
  {
    v27 = 0;
    this->fields.targetTreasure = 0LL;
    p_targetTreasure = &this->fields.targetTreasure;
  }
  sub_1BC2FAC((CGThumbnailListItem_o *)p_targetTreasure, v27, v21, v22);
}


void __fastcall WarBoardAIRoute_TargetData__Init(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  const MethodInfo *v18; // x5
  struct IWarBoardObjectData_o *targetObject; // x24
  WarBoardAIRoute_TargetData_o *v20; // x25
  IWarBoardObjectData_c *klass; // x8
  __int64 v22; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 p_method; // x0
  struct WarBoardSquareData_o *targetSquare; // x8
  __int64 squareIndex_k__BackingField; // x0
  int32_t nowSquareIndex; // w24
  struct System_Int32_array *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  WarBoardAIRoute_TargetData___c_c *v31; // x0
  System_Int32_array *baseRoute; // x24
  WarBoardPieceData_o *v33; // x21
  System_Func_object__int__o *_9__7_0; // x25
  Il2CppObject *v35; // x26
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Int32_array *v40; // x0
  const MethodInfo *v41; // x2
  bool IsDetour; // w0
  const MethodInfo *v43; // x5
  int32_t v44; // w23
  struct System_Int32_array *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w0
  struct IWarBoardObjectData_o *v49; // x21
  WarBoardAIRoute_TargetData_o *v50; // x22
  IWarBoardObjectData_c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  struct WarBoardSquareData_o *v55; // x8

  if ( (byte_4AFF9D4 & 1) == 0 )
  {
    sub_1BC3008(&AStarSearch_TypeInfo, baseTargetData);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_int___, v10);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___, v11);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1BC3008(&System_Func_WarBoardPieceData__int__TypeInfo, v13);
    sub_1BC3008(&IWarBoardObjectData_TypeInfo, v14);
    sub_1BC3008(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, v15);
    sub_1BC3008(&WarBoardAIRoute_TargetData___c_TypeInfo, v16);
    byte_4AFF9D4 = 1;
  }
  WarBoardAIRoute_TargetData__DetectObject(this, (const MethodInfo *)baseTargetData);
  targetObject = this->fields.targetObject;
  if ( targetObject )
    v20 = this;
  else
    v20 = 0LL;
  if ( targetObject )
  {
    klass = targetObject->klass;
    v22 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v22;
        p_offset += 2;
        if ( !v22 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C13570(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1LL);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                    targetObject,
                                    *(_QWORD *)(p_method + 8));
    if ( !v20 )
LABEL_49:
      sub_1BC3264(squareIndex_k__BackingField, v17);
  }
  else
  {
    targetSquare = this->fields.targetSquare;
    if ( targetSquare )
      squareIndex_k__BackingField = (unsigned int)targetSquare->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = 0xFFFFFFFFLL;
    v20 = this;
    if ( !this )
      goto LABEL_49;
  }
  v20->fields.nowSquareIndex = squareIndex_k__BackingField;
  nowSquareIndex = this->fields.nowSquareIndex;
  if ( !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  v28 = AStarSearch__RouteSearch(0LL, baseSquareIndex, nowSquareIndex, 0, 0LL, v18);
  this->fields.baseRoute = v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseRoute, (int32_t)v28, v29, v30);
  v31 = WarBoardAIRoute_TargetData___c_TypeInfo;
  baseRoute = this->fields.baseRoute;
  if ( !WarBoardAIRoute_TargetData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIRoute_TargetData___c_TypeInfo);
    v31 = WarBoardAIRoute_TargetData___c_TypeInfo;
  }
  v33 = piece;
  _9__7_0 = (System_Func_object__int__o *)v31->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = WarBoardAIRoute_TargetData___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v31->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v35, Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, 0LL);
    static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v40 = System_Linq_Enumerable__ToArray_int_(
          v39,
          (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v40, v41);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    v44 = this->fields.nowSquareIndex;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v45 = AStarSearch__RouteSearch(v33, baseSquareIndex, v44, 1, 0LL, v43);
    this->fields.detourRoute = v45;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.detourRoute, (int32_t)v45, v46, v47);
  }
  v48 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
  v49 = this->fields.targetObject;
  this->fields.isAround = v48 == 2;
  if ( v49 )
    v50 = this;
  else
    v50 = 0LL;
  if ( v49 )
  {
    v51 = v49->klass;
    v52 = *(unsigned __int16 *)(&v49->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v49->klass->_2.bitflags2 + 3) )
    {
      v53 = &v51->_1.interfaceOffsets->offset;
      while ( *((IWarBoardObjectData_c **)v53 - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_39;
      }
      v54 = (__int64)&v51->vtable[*v53].method;
    }
    else
    {
LABEL_39:
      v54 = sub_1C13570(v49, IWarBoardObjectData_TypeInfo, 0LL);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v54)(
                                    v49,
                                    *(_QWORD *)(v54 + 8));
    if ( !v50 )
      goto LABEL_49;
  }
  else
  {
    v55 = this->fields.targetSquare;
    if ( v55 )
      squareIndex_k__BackingField = (unsigned int)v55->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = 0xFFFFFFFFLL;
    v50 = this;
    if ( !this )
      goto LABEL_49;
  }
  v50->fields.putSquareIndex = squareIndex_k__BackingField;
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFF9D6 & 1) == 0 )
  {
    sub_1BC3008(&WarBoardAIRoute_TargetData___c_TypeInfo, v1);
    byte_4AFF9D6 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(WarBoardAIRoute_TargetData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAIRoute_TargetData___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_TargetData___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)WarBoardAIRoute_TargetData___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(this, 0LL);
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
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v4; // x20
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
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v93; // x1
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  struct WarBoardData_o *monitor; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v97; // x0
  WarBoardAIRoute_o *v98; // x0
  __int64 v99; // x1
  const MethodInfo *v100; // x6
  struct WarBoardStageNpcEntity_o *npcData; // x9
  int32_t searchDepth; // w8
  WarBoardAIRoute__CreateRouteData_d__47_o *v103; // x9
  int32_t v104; // w10
  int32_t v105; // w20
  Il2CppObject *v106; // x0
  __int64 v107; // x1
  const MethodInfo *v108; // x2
  int32_t MasterSquareIndex; // w2
  System_Collections_Generic_Dictionary_int__uint__o *v110; // x1
  const MethodInfo *v111; // x3
  struct System_Int32_array *AllyPutSquareIndicesWithoutMaster; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v113; // x0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  CGThumbnailListItem_o *v116; // x0
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  __int64 v119; // x0
  __int64 v120; // x1
  struct WarBoardData_o *warBoardData_5__2; // x8
  System_Collections_Generic_List_int__o *masterExistsForce; // x0
  _BOOL8 v123; // x0
  __int64 v124; // x1
  const MethodInfo *v125; // x4
  WarBoardAIRoute__CreateRouteData_d__47_o *v126; // x8
  int32_t servantAndEnemyRange_5__14; // w8
  int32_t servantAndEnemyMasterRange_5__15; // w9
  struct WarBoardAIRoute_AIRouteMasterData_o *v129; // x9
  int32_t v130; // w9
  struct DefenseAreaData_o *DefenseAreaData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v132; // x0
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  __int64 v135; // x0
  __int64 v136; // x1
  const MethodInfo *v137; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v138; // x8
  struct DefenseAreaData_o *defenseAreaData_5__7; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x10
  bool IsAllBlockShortestRouteEnemyAndMastr; // w0
  System_Collections_Generic_Dictionary_int__uint__o *v142; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v143; // x8
  __int128 v144; // q0
  CGThumbnailListItem_o *p__7__wrap8; // x0
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  const MethodInfo *v148; // x1
  Il2CppObject *key; // x20
  Il2CppObject *v150; // x21
  WarBoardAIRoute__CreateRouteData_d__47_o *v151; // x0
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  const MethodInfo *v154; // x1
  WarBoardSquareData_o *Square; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v156; // x0
  int32_t v157; // w2
  const MethodInfo *v158; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *_8__1; // x21
  const MethodInfo *v160; // x1
  WarBoardPieceData_o *PieceUnique; // x0
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  __int64 v164; // x0
  __int64 v165; // x1
  const MethodInfo *v166; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v167; // x8
  int64_t baseFlag_5__6; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v169; // x9
  int64_t v170; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v171; // x8
  System_Collections_Generic_IEnumerable_TSource__o *routeDataList; // x21
  Il2CppObject *v173; // x23
  System_Func_object__bool__o *v174; // x22
  __int64 v175; // x1
  int32_t v176; // w8
  System_Collections_Generic_List_object__o *v177; // x0
  WarBoardAIRoute_o *Only; // x0
  __int64 v179; // x1
  const MethodInfo *v180; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v181; // x8
  __int64 RouteSumPieceActionCost; // x0
  __int64 v183; // x1
  const MethodInfo *v184; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v185; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v186; // x9
  _BOOL8 IsActable; // x0
  __int64 v188; // x1
  const MethodInfo *v189; // x4
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v190; // x9
  System_Collections_Generic_Dictionary_int__int__o *DesignationItemToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v192; // x0
  int32_t v193; // w2
  const MethodInfo *v194; // x3
  __int64 v195; // x0
  __int64 v196; // x1
  const MethodInfo *v197; // x4
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v198; // x9
  struct System_Collections_Generic_Dictionary_int__int__o *TargetToDistance_36872892; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v200; // x0
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v203; // x1
  const MethodInfo *v204; // x5
  System_Collections_Generic_Dictionary_uint__int__o *AllEnemyToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v206; // x0
  int32_t v207; // w2
  const MethodInfo *v208; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v209; // x0
  int32_t v210; // w2
  const MethodInfo *v211; // x3
  __int64 v212; // x0
  __int64 v213; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v214; // x8
  WarBoardPieceData_o *basePiece; // x0
  _BOOL8 isServant; // x0
  __int64 v217; // x1
  const MethodInfo *v218; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v219; // x9
  WarBoardAIRoute_AdvantagePieceData_o *AdvantagePieceData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v221; // x0
  int32_t v222; // w2
  const MethodInfo *v223; // x3
  const MethodInfo *v224; // x5
  int32_t masterSquareIndex_5__4; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v226; // x0
  __int64 v227; // x0
  __int64 v228; // x1
  const MethodInfo *v229; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v230; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v231; // x9
  struct WarBoardPieceData_o *v232; // x11
  struct WarBoardAIRoute_AIRouteMasterData_o *v233; // x9
  int32_t masterType; // w10
  int32_t index_k__BackingField; // w11
  struct WarBoardStageNpcEntity_o *v236; // x12
  System_Collections_Generic_HashSet_T__o *v237; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v238; // x0
  int32_t v239; // w2
  const MethodInfo *v240; // x3
  System_Collections_Generic_HashSet_T__o *v241; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v242; // x0
  int32_t v243; // w2
  const MethodInfo *v244; // x3
  __int64 v245; // x1
  System_Collections_Generic_List_object__o *v246; // x0
  _BOOL8 v247; // x0
  __int64 v248; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v251; // x10
  struct WarBoardPieceData_o *v252; // x10
  System_Collections_Generic_HashSet_T__o *basePieceActionPieceRouteList_5__22; // x0
  _DWORD *v254; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v255; // x10
  struct WarBoardPieceData_o *v256; // x10
  struct WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData_5__21; // x0
  __int64 v258; // x0
  __int64 v259; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v260; // x8
  int32_t v261; // w9
  System_Collections_Generic_IEnumerable_TSource__o *v262; // x20
  WarBoardAIRoute___c_c *v263; // x8
  System_Func_T__TResult__o *_9__47_6; // x21
  Il2CppObject *v265; // x22
  struct WarBoardAIRoute___c_StaticFields *v266; // x0
  int32_t v267; // w2
  const MethodInfo *v268; // x3
  __int64 v269; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v270; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v271; // x0
  __int64 Count; // x0
  __int64 v273; // x1
  struct WarBoardStageNpcEntity_o *v274; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v275; // x11
  float v276; // s0
  int32_t v277; // w9
  int32_t calcEllipsisMin; // w8
  System_Linq_IOrderedEnumerable_TSource__c *v279; // x8
  __int64 v280; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v283; // x1
  CGThumbnailListItem_o *v284; // x0
  int32_t v285; // w2
  const MethodInfo *v286; // x3
  __int64 *v287; // x19
  __int64 v288; // x8
  __int64 v289; // x9
  int *v290; // x10
  __int64 v291; // x0
  __int64 v292; // x0
  __int64 *v293; // x19
  __int64 v294; // x8
  __int64 v295; // x9
  int *v296; // x10
  __int64 v297; // x0
  CGThumbnailListItem_o *p__7__wrap24; // x0
  int32_t v299; // w2
  const MethodInfo *v300; // x3
  Il2CppObject *v301; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v302; // x0
  int32_t v303; // w2
  const MethodInfo *v304; // x3
  __int64 v305; // x1
  WarBoardSquareData_o *v306; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *MyAndLinkedSquareIndecies; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v308; // x0
  int32_t v309; // w2
  const MethodInfo *v310; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v311; // x8
  int v312; // w9
  __int64 v313; // x21
  __int64 v314; // x0
  __int64 v315; // x1
  __int64 v316; // x2
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v317; // x8
  __int64 _7__wrap23_low; // x9
  int32_t *v319; // x27
  WarBoardAIRoute_RouteData_o *v320; // x20
  const MethodInfo *v321; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v322; // x9
  int32_t getEnumeratorRetType; // w8
  int32_t v324; // w10
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v325; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dicBaseDIRange_5__18; // x20
  WarBoardAIRoute___c_c *v327; // x8
  System_Func_T__TResult__o *_9__47_1; // x22
  Il2CppObject *v329; // x23
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v331; // w2
  const MethodInfo *v332; // x3
  System_Func_T__TResult__o *_9__47_2; // x23
  Il2CppObject *v334; // x24
  struct WarBoardAIRoute___c_StaticFields *v335; // x0
  int32_t v336; // w2
  const MethodInfo *v337; // x3
  __int64 v338; // x1
  int32_t v339; // w2
  const MethodInfo *v340; // x3
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v341; // x20
  WarBoardAIRoute_RouteData_o *v342; // x0
  struct WarBoardSquareData_o *v343; // x1
  __int64 v344; // x0
  __int64 v345; // x1
  int32_t v346; // w2
  const MethodInfo *v347; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v348; // x8
  WarBoardAIRoute_RouteData_o *v349; // x0
  struct WarBoardPieceData_o *v350; // x1
  __int64 v351; // x1
  int32_t v352; // w2
  const MethodInfo *v353; // x3
  WarBoardAIRoute_RouteData_o *v354; // x0
  const MethodInfo *v355; // x1
  WarBoardAIRoute_RouteData_o *v356; // x22
  int32_t v357; // w23
  WarBoardSquareData_o *v358; // x0
  int32_t v359; // w2
  const MethodInfo *v360; // x3
  __int64 v361; // x1
  System_Collections_Generic_Dictionary_uint__int__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v363; // x19
  __int64 v364; // x1
  const MethodInfo *v365; // x4
  System_Collections_Generic_Dictionary_uint__int__o *v366; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v368; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v369; // x8
  WarBoardAIRoute_RouteData_o *v370; // x22
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *MoveByTargetDistance; // x0
  __int64 v372; // x1
  int32_t v373; // w2
  const MethodInfo *v374; // x3
  WarBoardAIRoute_o *v375; // x0
  WarBoardPieceData_o *v376; // x1
  const MethodInfo *v377; // x4
  WarBoardAIRoute_RouteData_o *v378; // x20
  WarBoardPieceData_o *ActionPiece; // x0
  int32_t v380; // w2
  const MethodInfo *v381; // x3
  CGThumbnailListItem_o *p_actionPiece; // x0
  __int64 v383; // x1
  int32_t v384; // w2
  const MethodInfo *v385; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v386; // x8
  struct WarBoardPieceData_o *v387; // x9
  struct WarBoardPieceData_o *v388; // x10
  struct WarBoardPieceData_o *v389; // x8
  int32_t limitActionCount_k__BackingField; // w19
  int32_t currentActionCount_k__BackingField; // w20
  System_Math_c *v392; // x0
  WarBoardAIRoute_RouteData_o *v393; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v394; // x9
  int v395; // w11
  struct WarBoardSquareData_o *baseSquare_5__11; // x10
  WarBoardData_o *v397; // x0
  const MethodInfo *v398; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v399; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v400; // x9
  WarBoardPieceData_o *v401; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v402; // x8
  WarBoardPieceData_o *v403; // x0
  WarBoardPieceData_o *v404; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v405; // x8
  WarBoardPieceData_o *v406; // x22
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v407; // x8
  WarBoardPieceData_o *v408; // x0
  WarBoardPieceData_o *v409; // x0
  WarBoardAIRoute_RouteData_o *v410; // x8
  struct WarBoardPieceData_o *v411; // x9
  WarBoardPieceData_o *v412; // x0
  WarBoardAIRoute_RouteData_o *v413; // x19
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v414; // x8
  struct WarBoardPieceData_o *v415; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  int64_t flagNow; // x22
  __int64 ClassId; // x0
  __int64 v419; // x1
  struct WarBoardPieceData_o *v420; // x8
  int32_t v421; // w20
  BattleServantData_o *v422; // x0
  WarBoardAIRoute_o *v423; // x0
  const MethodInfo *v424; // x3
  int64_t FlagAdvantage; // x0
  __int64 v426; // x1
  const MethodInfo *v427; // x5
  struct WarBoardPieceData_o *v428; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v429; // x8
  WarBoardPieceData_o *v430; // x22
  WarBoardAIRoute_RouteData_o *v431; // x2
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v432; // x9
  WarBoardPieceData_o *v433; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v434; // x9
  System_Collections_Generic_List_object__o *v435; // x0
  int32_t requiredCost_5__3; // w23
  WarBoardPieceData_o *v437; // x20
  WarBoardPieceData_o *v438; // x22
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v439; // x4
  const MethodInfo *v440; // x6
  const MethodInfo *v441; // x2
  int32_t MasterSquareIndexFromPlaceData; // w22
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v443; // x23
  System_Func_object__bool__o *v444; // x24
  DefenseAreaData_o *v445; // x0
  __int64 v446; // x1
  const MethodInfo *v447; // x3
  struct WarBoardAIRoute_AdvantagePieceData_o *v448; // x23
  System_Func_object__bool__o *v449; // x24
  struct DefenseAreaData_o *v450; // x23
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v451; // x9
  WarBoardPieceData_o *v452; // x0
  System_Int32_array *v453; // x2
  const MethodInfo *v454; // x4
  struct WarBoardAIRoute_AIRouteMasterData_o *v455; // x8
  _BOOL8 v456; // x0
  __int64 v457; // x1
  WarBoardAIRoute_RouteData_o *v458; // x21
  int64_t v459; // x8
  System_Collections_Generic_List_object__o *v460; // x23
  __int64 v461; // x0
  __int64 v462; // x1
  int32_t v463; // w2
  const MethodInfo *v464; // x3
  __int64 v465; // x0
  __int64 v466; // x1
  WarBoardAIRoute_RouteData_o *v467; // x21
  System_Collections_Generic_Dictionary_uint__int__o *v468; // x23
  int32_t v469; // w2
  const MethodInfo *v470; // x3
  __int64 v471; // x1
  System_Collections_Generic_Dictionary_int__uint__o *v472; // x0
  _BOOL8 v473; // x0
  __int64 v474; // x1
  const MethodInfo *v475; // x5
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v476; // x8
  struct WarBoardPieceData_o *v477; // x8
  uint32_t key_high; // w21
  int32_t v479; // w24
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x23
  int32_t v481; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v482; // x0
  __int64 v483; // x0
  __int64 v484; // x1
  WarBoardAIRoute_RouteData_o *v485; // x21
  System_Collections_Generic_List_int__o *v486; // x23
  __int64 v487; // x0
  __int64 v488; // x1
  int32_t v489; // w2
  const MethodInfo *v490; // x3
  WarBoardAIRoute_RouteData_o *v491; // x21
  System_Collections_Generic_Dictionary_int__bool__o *v492; // x23
  __int64 v493; // x0
  __int64 v494; // x1
  int32_t v495; // w2
  const MethodInfo *v496; // x3
  WarBoardAIRoute_RouteData_o *v497; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v498; // x23
  __int64 v499; // x0
  __int64 v500; // x1
  int32_t v501; // w2
  const MethodInfo *v502; // x3
  __int64 v503; // x0
  __int64 v504; // x1
  WarBoardAIRoute_RouteData_o *v505; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v506; // x8
  WarBoardPieceData_o *v507; // x0
  _BOOL8 IsBlockShortestRouteEnemyAndMaster; // x0
  __int64 v509; // x1
  const MethodInfo *v510; // x2
  const MethodInfo *v511; // x3
  const MethodInfo *v512; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v513; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v514; // x9
  struct WarBoardPieceData_o *v515; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v516; // x10
  DefenseAreaData_o *v517; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v518; // x9
  struct WarBoardPieceData_o *v519; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v520; // x11
  int32_t v521; // w10
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v522; // x9
  struct WarBoardPieceData_o *v523; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v524; // x10
  int32_t v525; // w21
  WarBoardAIRoute_RouteData_o *v526; // x9
  int v527; // w10
  System_Collections_Generic_IEnumerable_TSource__o *v528; // x0
  __int64 v529; // x0
  int tmpFlagNow_5__12; // w10
  bool v531; // zf
  System_Collections_Generic_Dictionary_int__int__o *v532; // x0
  const MethodInfo *v533; // x5
  int32_t v534; // w21
  int v535; // w29
  int32_t v536; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v537; // x0
  __int64 v538; // x0
  __int64 v539; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x8
  int v541; // w9
  int32_t v542; // w2
  __int64 v543; // x0
  __int64 v544; // x1
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  __int64 v546; // x0
  __int64 v547; // x1
  struct System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v550; // x9
  __int64 size; // x10
  const MethodInfo *v552; // x5
  int32_t v553; // w21
  int32_t enemyMasterSquareIndex; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v555; // x0
  __int64 v556; // x0
  __int64 v557; // x1
  const MethodInfo *v558; // x3
  WarBoardAIRoute_RouteData_o *v559; // x19
  int32_t servantAndMasterRange_5__13; // w8
  bool v561; // zf
  int32_t v562; // w8
  WarBoardAIManager_c *v563; // x0
  WarBoardAIRoute_o *v564; // x0
  const MethodInfo *v565; // x4
  struct WarBoardAIRoute_AIRouteMasterData_o *v566; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v567; // x8
  WarBoardPieceData_o *v568; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v569; // x9
  struct WarBoardPieceData_o *v570; // x9
  WarBoardAIManager_c *v571; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v574; // x1
  const MethodInfo *v575; // x5
  int32_t currentKey; // w21
  int32_t v577; // w22
  System_Int32_array *v578; // x0
  __int64 v579; // x1
  struct WarBoardStageNpcEntity_o *v580; // x8
  __int64 v581; // x1
  const MethodInfo *v582; // x3
  WarBoardAIRoute_RouteData_o *v583; // x19
  WarBoardAIManager_c *v584; // x0
  struct DefenseAreaData_o *v585; // x8
  __int64 v586; // x0
  __int64 v587; // x1
  WarBoardAIManager_c *v588; // x0
  System_Collections_Generic_Dictionary_int__object__o *v589; // x0
  const MethodInfo *v590; // x5
  bool v591; // w21
  int32_t v592; // w22
  int32_t v593; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v594; // x22
  const MethodInfo *v595; // x2
  WarBoardAIRoute_RouteData_o *v596; // x19
  WarBoardData_o *v597; // x0
  WarBoardEffectData_o *Effect; // x0
  __int64 v599; // x1
  System_Collections_Generic_List_int__o *v600; // x22
  __int64 v601; // x1
  System_Collections_Generic_List_object__o *v602; // x0
  _BOOL8 v603; // x0
  __int64 v604; // x1
  Il2CppObject *v605; // x21
  Il2CppClass *v606; // x0
  _BOOL8 v607; // x0
  __int64 monitor_high; // x1
  struct System_Int32_array *v609; // x8
  _QWORD *v610; // x9
  __int64 v611; // x10
  WarBoardPieceData_o *v612; // x0
  __int64 v613; // x1
  WarBoardPieceData_o *v614; // x0
  _BOOL8 v615; // x0
  __int64 v616; // x1
  __int64 monitor_low; // x1
  struct System_Int32_array *v618; // x8
  _QWORD *v619; // x9
  __int64 v620; // x10
  __int64 v621; // x0
  __int64 v622; // x1
  WarBoardPieceData_o *v623; // x0
  _BOOL8 v624; // x0
  __int64 v625; // x1
  const MethodInfo *v626; // x3
  _BOOL8 CanAcquireItem; // x0
  __int64 v628; // x1
  const MethodInfo *v629; // x4
  WarBoardAIRoute_RouteData_o *v630; // x8
  int64_t v631; // x9
  WarBoardPieceData_o *v632; // x0
  __int64 v633; // x1
  const MethodInfo *v634; // x3
  __int64 v635; // x1
  WarBoardAIRoute_RouteData_o *v636; // x8
  WarBoardPieceData_o *v637; // x0
  __int64 v638; // x1
  const MethodInfo *v639; // x3
  __int64 v640; // x1
  __int64 v641; // x0
  __int64 v642; // x1
  __int64 FlagOutOfWarningAreaToDistance; // x0
  __int64 v644; // x1
  WarBoardAIRoute_RouteData_o *v645; // x8
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x9
  struct WarBoardPieceData_o *v647; // x8
  System_Collections_Generic_Dictionary_int__object__o *piecePersonalityDic; // x0
  Il2CppObject *v649; // x22
  WarBoardAIEvalCalcurater_o *v650; // x21
  __int64 v651; // x0
  __int64 v652; // x1
  const MethodInfo *v653; // x1
  WarBoardAIRoute___c_c *v654; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v655; // x22
  System_Func_object__object__o *_9__47_5; // x23
  Il2CppObject *v657; // x24
  struct WarBoardAIRoute___c_StaticFields *v658; // x0
  int32_t v659; // w2
  const MethodInfo *v660; // x3
  System_Collections_Generic_IEnumerable_T__o *v661; // x23
  System_Collections_Generic_List_object__o *v662; // x22
  __int64 v663; // x0
  __int64 v664; // x1
  int32_t v665; // w2
  const MethodInfo *v666; // x3
  Il2CppObject *v667; // x1
  struct System_Object_array *v668; // x8
  _QWORD *v669; // x9
  __int64 v670; // x10
  Il2CppClass **v671; // x0
  WarBoardAIRoute_RouteData_o *v672; // x0
  __int64 v673; // x1
  int32_t v674; // w2
  const MethodInfo *v675; // x3
  const MethodInfo *v676; // x1
  System_Collections_Generic_List_object__o *allRouteList; // x0
  struct System_Object_array *v678; // x8
  _QWORD *v679; // x9
  __int64 v680; // x10
  Il2CppClass **v681; // x8
  const MethodInfo *v682; // x4
  int32_t searchCount; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x21
  Il2CppObject *v685; // x0
  CGThumbnailListItem_o *p_basePieceBasePieceRouteList_5__23; // x8
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v687; // x10
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *basePieceBasePieceRouteList_5__23; // t1
  WarBoardAIRoute__CreateRouteData_d__47_o *v689; // x0
  int32_t v690; // w2
  const MethodInfo *v691; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v692; // x0
  int32_t v693; // w2
  const MethodInfo *v694; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v695; // x0
  int32_t v696; // w2
  const MethodInfo *v697; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v698; // x0
  int32_t v699; // w2
  const MethodInfo *v700; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v701; // x0
  int32_t v702; // w2
  const MethodInfo *v703; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v704; // x0
  int32_t v705; // w2
  const MethodInfo *v706; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v707; // x0
  int32_t v708; // w2
  const MethodInfo *v709; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v710; // x0
  int32_t v711; // w2
  const MethodInfo *v712; // x3
  Il2CppObject *v713; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v714; // x0
  int32_t v715; // w2
  const MethodInfo *v716; // x3
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // [xsp+10h] [xbp-1B0h]
  WarBoardAIRoute_o *_4__this; // [xsp+18h] [xbp-1A8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v719; // [xsp+20h] [xbp-1A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v720; // [xsp+50h] [xbp-170h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o **v721; // [xsp+78h] [xbp-148h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v722; // [xsp+80h] [xbp-140h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v723; // [xsp+B0h] [xbp-110h] BYREF
  __int128 v724; // [xsp+D0h] [xbp-F0h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v725; // [xsp+E0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v726; // [xsp+F0h] [xbp-D0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+118h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+120h] [xbp-A0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+128h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v730; // [xsp+130h] [xbp-90h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+148h] [xbp-78h] BYREF
  __int64 actionCount; // [xsp+150h] [xbp-70h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v733; // [xsp+158h] [xbp-68h] BYREF

  v4 = this;
  v733 = this;
  if ( (byte_4AFF9E7 & 1) == 0 )
  {
    sub_1BC3008(&AStarSearch_TypeInfo, method);
    sub_1BC3008(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__, v20);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v21);
    sub_1BC3008(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v22);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo, v23);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___, v24);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_int___, v25);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, v26);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___, v27);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___, v28);
    sub_1BC3008(
      &Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___,
      v29);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v30);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v31);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__,
      v32);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v33);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v34);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v35);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v36);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__,
      v37);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v38);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v39);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v40);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v41);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__,
      v42);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v43);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v44);
    sub_1BC3008(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo, v45);
    sub_1BC3008(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v46);
    sub_1BC3008(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo, v47);
    sub_1BC3008(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo, v48);
    sub_1BC3008(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo, v49);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__, v50);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__, v51);
    sub_1BC3008(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo, v52);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo, v53);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo, v54);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v55);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__,
      v56);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__, v57);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v58);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v59);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v60);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v61);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v62);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v63);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__, v64);
    sub_1BC3008(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v65);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__, v66);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v67);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v68);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v69);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v70);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___76789304, v71);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v72);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v73);
    sub_1BC3008(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v74);
    sub_1BC3008(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v75);
    sub_1BC3008(&WarBoardAIRoute_RouteData_TypeInfo, v76);
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v77);
    sub_1BC3008(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__, v78);
    sub_1BC3008(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__, v79);
    sub_1BC3008(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__, v80);
    sub_1BC3008(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__, v81);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__, v82);
    sub_1BC3008(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo, v83);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__, v84);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__, v85);
    sub_1BC3008(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo, v86);
    sub_1BC3008(&WarBoardAIRoute___c_TypeInfo, v87);
    sub_1BC3008(&WarBoardAIEvalCalcurater_TypeInfo, v88);
    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)sub_1BC3008(&WarBoardAIManager_TypeInfo, v89);
    byte_4AFF9E7 = 1;
  }
  *(_QWORD *)masterReplaceCount = 0LL;
  actionCount = 0LL;
  memset(&v730, 0, sizeof(v730));
  value = 0LL;
  routeData = 0LL;
  route = 0LL;
  memset(&v723, 0, sizeof(v723));
  memset(&v726, 0, 32);
  v724 = 0u;
  v725 = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v722, 0, sizeof(v722));
  *(_QWORD *)&v720.fields._getEnumeratorRetType = 0LL;
  v721 = &v733;
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    servantAndEnemyRange_5__14 = v4->fields._servantAndEnemyRange_5__14;
    servantAndEnemyMasterRange_5__15 = v4->fields._servantAndEnemyMasterRange_5__15;
    v4->fields.__1__state = -4;
    if ( servantAndEnemyRange_5__14 < servantAndEnemyMasterRange_5__15 )
    {
LABEL_131:
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(v4, method);
      p__7__wrap24 = (CGThumbnailListItem_o *)&v733->fields.__7__wrap24;
      *(_QWORD *)&v733->fields.__7__wrap24 = 0LL;
      sub_1BC2FAC(p__7__wrap24, 0, v299, v300);
      return 0;
    }
LABEL_117:
    v287 = *(__int64 **)&v4->fields.__7__wrap24;
    if ( !v287 )
      sub_1BC3264(this, method);
    v288 = *v287;
    v289 = *(unsigned __int16 *)(*v287 + 302);
    if ( *(_WORD *)(*v287 + 302) )
    {
      v290 = (int *)(*(_QWORD *)(v288 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v290 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v289;
        v290 += 4;
        if ( !v289 )
          goto LABEL_122;
      }
      v291 = v288 + 16LL * *v290 + 312;
    }
    else
    {
LABEL_122:
      v291 = sub_1C13570(*(_QWORD *)&v4->fields.__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v292 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v291)(v287, *(_QWORD *)(v291 + 8));
    v4 = v733;
    if ( (v292 & 1) != 0 )
    {
      v293 = *(__int64 **)&v733->fields.__7__wrap24;
      if ( !v293 )
        sub_1BC3264(v292, method);
      v294 = *v293;
      v295 = *(unsigned __int16 *)(*v293 + 302);
      if ( *(_WORD *)(*v293 + 302) )
      {
        v296 = (int *)(*(_QWORD *)(v294 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v296 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          --v295;
          v296 += 4;
          if ( !v295 )
            goto LABEL_130;
        }
        v297 = v294 + 16LL * *v296 + 312;
      }
      else
      {
LABEL_130:
        v297 = sub_1C13570(
                 *(_QWORD *)&v733->fields.__7__wrap24,
                 System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo,
                 0LL);
      }
      v301 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v297)(v293, *(_QWORD *)(v297 + 8));
      v302 = v733;
      v733->fields.__2__current = v301;
      v302 = (WarBoardAIRoute__CreateRouteData_d__47_o *)((char *)v302 + 24);
      ++LODWORD(v302->fields._baseSquare_5__11);
      sub_1BC2FAC((CGThumbnailListItem_o *)v302, (int32_t)v301, v303, v304);
      result = 1;
      v733->fields.__1__state = 2;
      return result;
    }
    goto LABEL_131;
  }
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -3;
    goto LABEL_662;
  }
  result = 0;
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      sub_1BC3264(0LL, v93);
    monitor = (struct WarBoardData_o *)Instance[27].monitor;
    v97 = v733;
    v733->fields._warBoardData_5__2 = monitor;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v97->fields._warBoardData_5__2, (int32_t)monitor, v94, v95);
    if ( !_4__this )
      sub_1BC3264(v98, v99);
    npcData = _4__this->fields.npcData;
    if ( !npcData )
      sub_1BC3264(v98, v99);
    searchDepth = npcData->fields.searchDepth;
    if ( !searchDepth )
    {
      searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
      npcData->fields.searchDepth = searchDepth;
    }
    v103 = v733;
    v104 = v733->fields.searchCount + 1;
    v733->fields.searchCount = v104;
    if ( v104 > searchDepth )
      return 0;
    *(_QWORD *)masterReplaceCount = 0LL;
    actionCount = 0LL;
    WarBoardAIRoute__GetRouteDataActionList(
      v98,
      v103->fields.routeDataList,
      (int32_t *)&actionCount + 1,
      (int32_t *)&actionCount,
      &masterReplaceCount[1],
      masterReplaceCount,
      v100);
    v105 = masterReplaceCount[1] * _4__this->fields.masterMoveCost
         + (actionCount + 2 * HIDWORD(actionCount)) * _4__this->fields.moveCost
         + masterReplaceCount[0] * (_4__this->fields.masterMoveCost + _4__this->fields.moveCost);
    v733->fields._requiredCost_5__3 = v105;
    v106 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v106 )
      sub_1BC3264(0LL, v107);
    if ( v105 >= SHIDWORD(v106[47].klass) )
      return 0;
    MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v733->fields.piecePlaceData, v108);
    v110 = v733->fields.piecePlaceData;
    v733->fields._masterSquareIndex_5__4 = MasterSquareIndex;
    AllyPutSquareIndicesWithoutMaster = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                          _4__this,
                                          v110,
                                          MasterSquareIndex,
                                          v111);
    v113 = v733;
    v733->fields._allyPieceIndexs_5__5 = AllyPutSquareIndicesWithoutMaster;
    sub_1BC2FAC(
      (CGThumbnailListItem_o *)&v113->fields._allyPieceIndexs_5__5,
      (int32_t)AllyPutSquareIndicesWithoutMaster,
      v114,
      v115);
    v116 = (CGThumbnailListItem_o *)v733;
    v733->fields._defenseAreaData_5__7 = 0LL;
    v116 = (CGThumbnailListItem_o *)((char *)v116 + 104);
    v116[-1].fields._ThumbnailSpritePath_k__BackingField = (struct System_String_o *)(&dword_0 + 1);
    sub_1BC2FAC(v116, 0, v117, v118);
    warBoardData_5__2 = v733->fields._warBoardData_5__2;
    if ( !warBoardData_5__2 )
      sub_1BC3264(v119, v120);
    masterExistsForce = warBoardData_5__2->fields.masterExistsForce;
    if ( !masterExistsForce )
      sub_1BC3264(0LL, v120);
    v123 = System_Collections_Generic_List_int___Contains(
             masterExistsForce,
             _4__this->fields.forceId,
             (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
    v126 = v733;
    if ( v123 )
    {
      if ( v733 )
      {
        v733->fields._masterExists_5__8 = 1;
LABEL_25:
        DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                            _4__this,
                            v126->fields._masterSquareIndex_5__4,
                            v126->fields._allyPieceIndexs_5__5,
                            v126->fields.piecePlaceData,
                            v125);
        v132 = v733;
        v733->fields._defenseAreaData_5__7 = DefenseAreaData;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v132->fields._defenseAreaData_5__7, (int32_t)DefenseAreaData, v133, v134);
        v138 = v733;
        defenseAreaData_5__7 = v733->fields._defenseAreaData_5__7;
        if ( !defenseAreaData_5__7 )
          sub_1BC3264(v135, v136);
        v733->fields._baseFlag_5__6 |= defenseAreaData_5__7->fields._Flag_k__BackingField;
        aiRouteMasterData = _4__this->fields.aiRouteMasterData;
        if ( !aiRouteMasterData )
          sub_1BC3264(v135, v136);
        IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                                 defenseAreaData_5__7->fields._ShortestRoutes_k__BackingField,
                                                 v138->fields.piecePlaceData,
                                                 aiRouteMasterData->fields.masterType == 1,
                                                 v137);
        v126 = v733;
        if ( IsAllBlockShortestRouteEnemyAndMastr )
          v733->fields._baseFlag_5__6 |= 0x20000000uLL;
LABEL_29:
        v142 = v126->fields.piecePlaceData;
        if ( !v142 )
          sub_1BC3264(0LL, v124);
        System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
          &v720,
          v142,
          (const MethodInfo_332B700 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
        v143 = v733;
        v144 = *(_OWORD *)&v720.fields._dictionary;
        p__7__wrap8 = (CGThumbnailListItem_o *)&v733->fields.__7__wrap8;
        *(_OWORD *)&v719.fields._dictionary = *(_OWORD *)&v720.fields._dictionary;
        v719.fields._current = v720.fields._current;
        v733->fields.__7__wrap8.fields._current = v720.fields._current;
        *(_OWORD *)&v143->fields.__7__wrap8.fields._dictionary = v144;
        sub_1BC2FAC(p__7__wrap8, 0, v146, v147);
        v733->fields.__1__state = -3;
LABEL_44:
        while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                  &v733->fields.__7__wrap8,
                  (const MethodInfo_345C7D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
        {
          key = v733->fields.__7__wrap8.fields._current.fields.key;
          v150 = (Il2CppObject *)sub_1BC3254(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
          System_Object___ctor(v150, 0LL);
          v151 = v733;
          v733->fields.__8__1 = (struct WarBoardAIRoute___c__DisplayClass47_0_o *)v150;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v151->fields.__8__1, (int32_t)v150, v152, v153);
          v733->fields.__7__wrap8.fields._getEnumeratorRetType = (int)key;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          Square = WarBoardAIManager__GetSquare((int32_t)key, v154);
          v156 = v733;
          *(_QWORD *)&v733->fields._baseSquareIndex_5__10 = Square;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v156->fields._baseSquareIndex_5__10, (int32_t)Square, v157, v158);
          _8__1 = v733->fields.__8__1;
          PieceUnique = WarBoardAIManager__GetPieceUnique(HIDWORD(key), v160);
          if ( !_8__1 )
            sub_1BC3264(PieceUnique, PieceUnique);
          _8__1->fields.basePiece = PieceUnique;
          sub_1BC2FAC((CGThumbnailListItem_o *)&_8__1->fields, (int32_t)PieceUnique, v162, v163);
          v167 = v733;
          baseFlag_5__6 = v733->fields._baseFlag_5__6;
          v169 = v733->fields.__8__1;
          v733->fields._tmpFlagNow_5__12 = -1LL;
          v167->fields._servantAndMasterRange_5__13 = -1;
          v167->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
          if ( !v169 )
            sub_1BC3264(v164, v165);
          if ( !_4__this )
            sub_1BC3264(0LL, v165);
          v170 = WarBoardAIRoute__GetFlagAroundSquareCheck(
                   _4__this,
                   *(WarBoardSquareData_o **)&v167->fields._baseSquareIndex_5__10,
                   v169->fields.basePiece,
                   v167->fields.piecePlaceData,
                   v167->fields._masterSquareIndex_5__4,
                   v166);
          v171 = v733;
          v733->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)(v170 | baseFlag_5__6);
          routeDataList = (System_Collections_Generic_IEnumerable_TSource__o *)v171->fields.routeDataList;
          v173 = (Il2CppObject *)v171->fields.__8__1;
          v174 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v174,
            v173,
            Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
            0LL);
          v176 = System_Linq_Enumerable__Count_object__50461416(
                   routeDataList,
                   (System_Func_TSource__bool__o *)v174,
                   (const MethodInfo_301FAE8 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
          v177 = (System_Collections_Generic_List_object__o *)v733->fields.routeDataList;
          v733->fields._servantAndEnemyRange_5__14 = v176;
          if ( !v177 )
            sub_1BC3264(0LL, v175);
          Only = (WarBoardAIRoute_o *)System_Collections_Generic_List_object___AsReadOnly(
                                        v177,
                                        (const MethodInfo_36A1068 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
          v181 = v733->fields.__8__1;
          if ( !v181 )
            sub_1BC3264(Only, v179);
          RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                      Only,
                                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                      v181->fields.basePiece,
                                      v180);
          v185 = v733;
          v186 = v733->fields.__8__1;
          v733->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
          if ( !v186 )
            sub_1BC3264(RouteSumPieceActionCost, v183);
          IsActable = WarBoardAIRoute__IsActable(
                        _4__this,
                        v186->fields.basePiece,
                        v185->fields._servantAndEnemyRange_5__14,
                        v185->fields._requiredCost_5__3,
                        RouteSumPieceActionCost,
                        v184);
          if ( IsActable )
          {
            v190 = v733->fields.__8__1;
            if ( !v190 )
              sub_1BC3264(IsActable, v188);
            DesignationItemToDistance = WarBoardAIRoute__GetDesignationItemToDistance(
                                          _4__this,
                                          v190->fields.basePiece,
                                          v733->fields.routeDataList,
                                          v733->fields.__7__wrap8.fields._getEnumeratorRetType,
                                          v189);
            v192 = v733;
            *(_QWORD *)&v733->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
            sub_1BC2FAC(
              (CGThumbnailListItem_o *)&v192->fields._sumPieceActionCost_5__17,
              (int32_t)DesignationItemToDistance,
              v193,
              v194);
            v198 = v733->fields.__8__1;
            if ( !v198 )
              sub_1BC3264(v195, v196);
            TargetToDistance_36872892 = (struct System_Collections_Generic_Dictionary_int__int__o *)WarBoardAIRoute__GetTargetToDistance_36872892(_4__this, v198->fields.basePiece, v733->fields.routeDataList, v733->fields.__7__wrap8.fields._getEnumeratorRetType, v197);
            v200 = v733;
            v733->fields._dicBaseDIRange_5__18 = TargetToDistance_36872892;
            sub_1BC2FAC(
              (CGThumbnailListItem_o *)&v200->fields._dicBaseDIRange_5__18,
              (int32_t)TargetToDistance_36872892,
              v201,
              v202);
            AllEnemyToDistance = WarBoardAIRoute__GetAllEnemyToDistance(
                                   _4__this,
                                   v203,
                                   v733->fields.__7__wrap8.fields._getEnumeratorRetType,
                                   (int32_t *)&v733->fields._tmpFlagNow_5__12 + 1,
                                   &v733->fields._servantAndMasterRange_5__13,
                                   v204);
            v206 = v733;
            v733->fields._dicKeyPutIndexValueTargetData_5__19 = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)AllEnemyToDistance;
            sub_1BC2FAC(
              (CGThumbnailListItem_o *)&v206->fields._dicKeyPutIndexValueTargetData_5__19,
              (int32_t)AllEnemyToDistance,
              v207,
              v208);
            v209 = v733;
            v733->fields._dicEnemyRange_5__20 = 0LL;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v209->fields._dicEnemyRange_5__20, 0, v210, v211);
            v214 = v733->fields.__8__1;
            if ( !v214 )
              sub_1BC3264(v212, v213);
            basePiece = v214->fields.basePiece;
            if ( !basePiece )
              sub_1BC3264(0LL, v213);
            isServant = WarBoardPieceData__get_isServant(basePiece, 0LL);
            if ( isServant )
            {
              v219 = v733->fields.__8__1;
              if ( !v219 )
                sub_1BC3264(isServant, v217);
              AdvantagePieceData = WarBoardAIRoute__GetAdvantagePieceData(
                                     _4__this,
                                     v219->fields.basePiece,
                                     v733->fields.__7__wrap8.fields._getEnumeratorRetType,
                                     v218);
              v221 = v733;
              v733->fields._dicEnemyRange_5__20 = (struct System_Collections_Generic_Dictionary_uint__int__o *)AdvantagePieceData;
              sub_1BC2FAC(
                (CGThumbnailListItem_o *)&v221->fields._dicEnemyRange_5__20,
                (int32_t)AdvantagePieceData,
                v222,
                v223);
              if ( v733->fields._masterExists_5__8 )
              {
                masterSquareIndex_5__4 = v733->fields._masterSquareIndex_5__4;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v226 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              (int32_t)key,
                                                                              masterSquareIndex_5__4,
                                                                              0,
                                                                              0LL,
                                                                              v224);
                v227 = System_Linq_Enumerable__Count_int_(
                         v226,
                         (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
                v230 = v733;
                v231 = v733->fields.__8__1;
                LODWORD(v733->fields._tmpFlagNow_5__12) = v227;
                if ( !v231 )
                  sub_1BC3264(v227, v228);
                v232 = v231->fields.basePiece;
                if ( !v232 )
                  sub_1BC3264(v227, v228);
                v233 = _4__this->fields.aiRouteMasterData;
                if ( !v233 )
                  sub_1BC3264(v227, v228);
                masterType = v233->fields.masterType;
                index_k__BackingField = v232->fields._index_k__BackingField;
                if ( masterType != 2 || v233->fields.masterPieceIndex != index_k__BackingField )
                {
                  v236 = _4__this->fields.npcData;
                  if ( !v236 )
                    sub_1BC3264(v227, v228);
                  if ( v236->fields.defenseArea > (int)v227 )
                    v230->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v230->fields._baseSquare_5__11 | 0x800);
                  if ( (masterType != 2 || v233->fields.masterPieceIndex != index_k__BackingField)
                    && WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                         v230->fields._defenseAreaData_5__7,
                         v230->fields.__7__wrap8.fields._getEnumeratorRetType,
                         masterType == 1,
                         v229) )
                  {
                    v733->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v733->fields._baseSquare_5__11 | 0x80000000);
                  }
                }
              }
            }
            v237 = (System_Collections_Generic_HashSet_T__o *)sub_1BC3254(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_object____ctor(
              v237,
              (const MethodInfo_355E2AC *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v238 = v733;
            v733->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v237;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v238->fields._advantagePieceData_5__21, (int32_t)v237, v239, v240);
            v241 = (System_Collections_Generic_HashSet_T__o *)sub_1BC3254(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_object____ctor(
              v241,
              (const MethodInfo_355E2AC *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v242 = v733;
            v733->fields._basePieceActionPieceRouteList_5__22 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)v241;
            sub_1BC2FAC(
              (CGThumbnailListItem_o *)&v242->fields._basePieceActionPieceRouteList_5__22,
              (int32_t)v241,
              v243,
              v244);
            v246 = (System_Collections_Generic_List_object__o *)v733->fields.routeDataList;
            if ( !v246 )
              sub_1BC3264(0LL, v245);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v719,
              v246,
              (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
            *(_OWORD *)&v730.fields._list = *(_OWORD *)&v719.fields._dictionary;
            v730.fields._current = v719.fields._current.fields.key;
            while ( 1 )
            {
              v247 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v730,
                       (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
              if ( !v247 )
                break;
              current = v730.fields._current;
              if ( !v730.fields._current )
                sub_1BC3264(v247, v248);
              if ( LODWORD(v730.fields._current[1].monitor) != HIDWORD(v730.fields._current[1].monitor) )
              {
                klass = v730.fields._current[3].klass;
                if ( !klass )
                  sub_1BC3264(v247, v248);
                v251 = v733->fields.__8__1;
                if ( !v251 )
                  sub_1BC3264(v247, v248);
                v252 = v251->fields.basePiece;
                if ( !v252 )
                  sub_1BC3264(v247, v248);
                if ( HIDWORD(klass->_1.namespaze) == v252->fields._index_k__BackingField )
                {
                  basePieceActionPieceRouteList_5__22 = (System_Collections_Generic_HashSet_T__o *)v733->fields._basePieceActionPieceRouteList_5__22;
                  if ( !basePieceActionPieceRouteList_5__22 )
                    sub_1BC3264(0LL, v248);
                  v247 = System_Collections_Generic_HashSet_object___Add(
                           basePieceActionPieceRouteList_5__22,
                           v730.fields._current,
                           (const MethodInfo_355F490 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                }
                if ( (BYTE3(current[1].klass) & 4) != 0 )
                {
                  v254 = current[3].monitor;
                  if ( !v254 )
                    sub_1BC3264(v247, v248);
                  v255 = v733->fields.__8__1;
                  if ( !v255 )
                    sub_1BC3264(v247, v248);
                  v256 = v255->fields.basePiece;
                  if ( !v256 )
                    sub_1BC3264(v247, v248);
                  if ( v254[7] == v256->fields._index_k__BackingField )
                  {
                    advantagePieceData_5__21 = v733->fields._advantagePieceData_5__21;
                    if ( !advantagePieceData_5__21 )
                      sub_1BC3264(0LL, v248);
                    System_Collections_Generic_HashSet_object___Add(
                      (System_Collections_Generic_HashSet_T__o *)advantagePieceData_5__21,
                      current,
                      (const MethodInfo_355F490 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                  }
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v730,
              (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
            v306 = *(WarBoardSquareData_o **)&v733->fields._baseSquareIndex_5__10;
            if ( !v306 )
              sub_1BC3264(0LL, v305);
            MyAndLinkedSquareIndecies = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)WarBoardSquareData__GetMyAndLinkedSquareIndecies(v306, 0LL);
            v308 = v733;
            v733->fields._basePieceBasePieceRouteList_5__23 = MyAndLinkedSquareIndecies;
            sub_1BC2FAC(
              (CGThumbnailListItem_o *)&v308->fields._basePieceBasePieceRouteList_5__23,
              (int32_t)MyAndLinkedSquareIndecies,
              v309,
              v310);
            v311 = v733;
            v312 = 0;
            LODWORD(v733->fields.__7__wrap23) = 0;
            while ( 2 )
            {
              basePieceBasePieceRouteList_5__23 = v311->fields._basePieceBasePieceRouteList_5__23;
              p_basePieceBasePieceRouteList_5__23 = (CGThumbnailListItem_o *)&v311->fields._basePieceBasePieceRouteList_5__23;
              v687 = basePieceBasePieceRouteList_5__23;
              if ( !basePieceBasePieceRouteList_5__23 )
                sub_1BC3264(this, method);
              if ( v312 >= SLODWORD(v687->fields._slots) )
              {
                p_basePieceBasePieceRouteList_5__23->klass = 0LL;
                sub_1BC2FAC(p_basePieceBasePieceRouteList_5__23, 0, (int32_t)v2, v3);
                v689 = v733;
                v733->fields.__8__1 = 0LL;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v689->fields.__8__1, 0, v690, v691);
                v692 = v733;
                *(_QWORD *)&v733->fields._baseSquareIndex_5__10 = 0LL;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v692->fields._baseSquareIndex_5__10, 0, v693, v694);
                v695 = v733;
                *(_QWORD *)&v733->fields._sumPieceActionCost_5__17 = 0LL;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v695->fields._sumPieceActionCost_5__17, 0, v696, v697);
                v698 = v733;
                v733->fields._dicBaseDIRange_5__18 = 0LL;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v698->fields._dicBaseDIRange_5__18, 0, v699, v700);
                v701 = v733;
                v733->fields._dicKeyPutIndexValueTargetData_5__19 = 0LL;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v701->fields._dicKeyPutIndexValueTargetData_5__19, 0, v702, v703);
                v704 = v733;
                v733->fields._dicEnemyRange_5__20 = 0LL;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v704->fields._dicEnemyRange_5__20, 0, v705, v706);
                v707 = v733;
                v733->fields._advantagePieceData_5__21 = 0LL;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v707->fields._advantagePieceData_5__21, 0, v708, v709);
                v710 = v733;
                v733->fields._basePieceActionPieceRouteList_5__22 = 0LL;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v710->fields._basePieceActionPieceRouteList_5__22, 0, v711, v712);
                goto LABEL_44;
              }
              v313 = sub_1BC3254(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v313, 0LL);
              v317 = v733->fields._basePieceBasePieceRouteList_5__23;
              if ( !v317 )
                sub_1BC3264(v314, v315);
              _7__wrap23_low = SLODWORD(v733->fields.__7__wrap23);
              if ( (unsigned int)_7__wrap23_low >= LODWORD(v317->fields._slots) )
                sub_1BC326C(v314, v315, v316);
              if ( !v313 )
                sub_1BC3264(v314, v315);
              *(_DWORD *)(v313 + 16) = *(&v317->fields._count + _7__wrap23_low);
              v319 = (int32_t *)(v313 + 16);
              v320 = (WarBoardAIRoute_RouteData_o *)sub_1BC3254(WarBoardAIRoute_RouteData_TypeInfo);
              WarBoardAIRoute_RouteData___ctor(v320, v321);
              routeData = v320;
              if ( !v320 )
                sub_1BC3264(this, method);
              v322 = v733;
              getEnumeratorRetType = v733->fields.__7__wrap8.fields._getEnumeratorRetType;
              v320->fields.baseIndex = getEnumeratorRetType;
              v324 = *v319;
              v320->fields.actionIndex = *v319;
              if ( getEnumeratorRetType == v324 )
              {
                v325 = v322->fields.routeDataList;
                if ( !v325 )
                  sub_1BC3264(this, method);
                if ( v325->fields._size > 0 )
                  goto LABEL_662;
              }
              dicBaseDIRange_5__18 = (System_Collections_Generic_IEnumerable_TSource__o *)v322->fields._dicBaseDIRange_5__18;
              v327 = WarBoardAIRoute___c_TypeInfo;
              if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v327 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_1 = (System_Func_T__TResult__o *)v327->static_fields->__9__47_1;
              if ( !_9__47_1 )
              {
                if ( !v327->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v327);
                  v327 = WarBoardAIRoute___c_TypeInfo;
                }
                v329 = (Il2CppObject *)v327->static_fields->__9;
                _9__47_1 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
                System_Func_KeyValuePair_long__object___long____ctor(
                  _9__47_1,
                  v329,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
                  0LL);
                static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
                static_fields->__9__47_1 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)_9__47_1;
                sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__47_1, (int32_t)_9__47_1, v331, v332);
                v327 = WarBoardAIRoute___c_TypeInfo;
              }
              if ( !v327->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v327);
                v327 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_2 = (System_Func_T__TResult__o *)v327->static_fields->__9__47_2;
              if ( !_9__47_2 )
              {
                if ( !v327->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v327);
                  v327 = WarBoardAIRoute___c_TypeInfo;
                }
                v334 = (Il2CppObject *)v327->static_fields->__9;
                _9__47_2 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
                System_Func_KeyValuePair_long__object___object____ctor(
                  _9__47_2,
                  v334,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
                  0LL);
                v335 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v335->__9__47_2 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)_9__47_2;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v335->__9__47_2, (int32_t)_9__47_2, v336, v337);
              }
              v341 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__object___long__object_(
                                                                                                    dicBaseDIRange_5__18,
                                                                                                    (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                                    (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                                    (const MethodInfo_303EBC4 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
              v342 = routeData;
              if ( !routeData )
                sub_1BC3264(0LL, v338);
              v343 = *(struct WarBoardSquareData_o **)&v733->fields._baseSquareIndex_5__10;
              routeData->fields.baseSquare = v343;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v342->fields.baseSquare, (int32_t)v343, v339, v340);
              v348 = v733->fields.__8__1;
              if ( !v348 )
                sub_1BC3264(v344, v345);
              v349 = routeData;
              if ( !routeData )
                sub_1BC3264(0LL, v345);
              v350 = v348->fields.basePiece;
              routeData->fields.basePiece = v350;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v349->fields.basePiece, (int32_t)v350, v346, v347);
              v354 = routeData;
              if ( !routeData )
                sub_1BC3264(0LL, v351);
              routeData->fields.actionPiece = 0LL;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v354->fields.actionPiece, 0, v352, v353);
              v356 = routeData;
              v357 = *v319;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              v358 = WarBoardAIManager__GetSquare(v357, v355);
              if ( !v356 )
                sub_1BC3264(v358, v358);
              v356->fields.actionSquare = v358;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v356->fields.actionSquare, (int32_t)v358, v359, v360);
              dicKeyPutIndexValueTargetData_5__19 = (System_Collections_Generic_Dictionary_uint__int__o *)v733->fields._dicKeyPutIndexValueTargetData_5__19;
              if ( !dicKeyPutIndexValueTargetData_5__19 )
                sub_1BC3264(0LL, v361);
              v363 = routeData;
              if ( System_Collections_Generic_Dictionary_uint__int___get_Count(
                     dicKeyPutIndexValueTargetData_5__19,
                     (const MethodInfo_339C6AC *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0 )
              {
                v368 = 0x7FFFFFFFLL;
                if ( !v363 )
                  goto LABEL_253;
              }
              else
              {
                v366 = (System_Collections_Generic_Dictionary_uint__int__o *)v733->fields._dicKeyPutIndexValueTargetData_5__19;
                if ( !v366 )
                  sub_1BC3264(0LL, v364);
                Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                           v366,
                           (const MethodInfo_339C80C *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
                v368 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
                if ( !v363 )
LABEL_253:
                  sub_1BC3264(v368, v364);
              }
              v363->fields.EnemyRangeMin = v368;
              v369 = v733->fields.__8__1;
              if ( !v369 )
                sub_1BC3264(v368, v364);
              if ( !_4__this )
                sub_1BC3264(v368, v364);
              v370 = routeData;
              MoveByTargetDistance = WarBoardAIRoute__GetMoveByTargetDistance(
                                       (WarBoardAIRoute_o *)v368,
                                       v341,
                                       *v319,
                                       v369->fields.basePiece,
                                       v365);
              if ( !v370 )
                sub_1BC3264(MoveByTargetDistance, v372);
              v370->fields.dicPutIndexTargetData = v341;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v370->fields.dicPutIndexTargetData, (int32_t)v341, v373, v374);
              if ( !v733->fields.__8__1 )
                sub_1BC3264(v375, v376);
              v378 = routeData;
              ActionPiece = WarBoardAIRoute__GetActionPiece(v375, v376, *v319, v733->fields.piecePlaceData, v377);
              if ( !v378 )
                sub_1BC3264(ActionPiece, ActionPiece);
              v378->fields.actionPiece = ActionPiece;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v378->fields.actionPiece, (int32_t)ActionPiece, v380, v381);
              v386 = v733->fields.__8__1;
              if ( !v386 )
                sub_1BC3264(p_actionPiece, v383);
              v387 = v386->fields.basePiece;
              if ( !v387 )
                sub_1BC3264(p_actionPiece, v383);
              if ( v387->fields._nowSquareIndex_k__BackingField == *v319 )
              {
                if ( !routeData )
                  sub_1BC3264(0LL, v383);
                p_actionPiece = (CGThumbnailListItem_o *)&routeData->fields.actionPiece;
                v388 = routeData->fields.actionPiece;
                if ( v388 )
                {
                  if ( v388->fields._uniqueIndex_k__BackingField == v387->fields._uniqueIndex_k__BackingField )
                  {
                    p_actionPiece->klass = 0LL;
                    sub_1BC2FAC(p_actionPiece, 0, v384, v385);
                    v386 = v733->fields.__8__1;
                    if ( !v386 )
                      sub_1BC3264(p_actionPiece, v383);
                  }
                }
              }
              v389 = v386->fields.basePiece;
              if ( !v389 )
                sub_1BC3264(p_actionPiece, v383);
              limitActionCount_k__BackingField = v389->fields._limitActionCount_k__BackingField;
              currentActionCount_k__BackingField = v389->fields._currentActionCount_k__BackingField;
              if ( !byte_4AFCDB5 )
              {
                sub_1BC3008(&System_Math_TypeInfo, v383);
                byte_4AFCDB5 = 1;
              }
              v392 = System_Math_TypeInfo;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v393 = routeData;
              if ( !routeData )
                sub_1BC3264(v392, v383);
              v394 = v733;
              v395 = limitActionCount_k__BackingField - currentActionCount_k__BackingField;
              if ( limitActionCount_k__BackingField - currentActionCount_k__BackingField < 0 )
                v395 = currentActionCount_k__BackingField - limitActionCount_k__BackingField;
              routeData->fields.actionCountOnThisTurn = v395 + v733->fields._servantAndEnemyRange_5__14 + 1;
              baseSquare_5__11 = v394->fields._baseSquare_5__11;
              *(_QWORD *)&v393->fields.attackByLinkedEnemy = 0LL;
              v393->fields.flagNow = (int64_t)baseSquare_5__11;
              v397 = v394->fields._warBoardData_5__2;
              if ( !v397 )
                sub_1BC3264(0LL, v383);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardData__GetWall(v397, *v319, 0, v385);
              v399 = this;
              if ( this )
              {
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                if ( !this )
                  sub_1BC3264(0LL, method);
                if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.wallAttackCost
                                                                + v733->fields._requiredCost_5__3 )
                  goto LABEL_662;
                v400 = v733->fields.__8__1;
                if ( !v400 )
                  sub_1BC3264(this, method);
                v401 = v400->fields.basePiece;
                if ( !v401 )
                  sub_1BC3264(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableWallAttack(
                                                                     v401,
                                                                     v733->fields._servantAndEnemyMasterRange_5__15,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_662;
                v402 = v733->fields.__8__1;
                if ( !v402 )
                  sub_1BC3264(this, method);
                v403 = v402->fields.basePiece;
                if ( !v403 )
                  sub_1BC3264(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__CheckWallAttackCond(
                                                                     v403,
                                                                     (WarBoardWallData_o *)v399,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_662;
              }
              if ( !routeData )
                sub_1BC3264(this, method);
              v404 = routeData->fields.actionPiece;
              if ( v404 )
              {
                v405 = v733->fields.__8__1;
                if ( !v405 )
                  sub_1BC3264(this, method);
                v406 = v405->fields.basePiece;
                if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsEnemyPiece(v406, v404, v2);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v407 = v733->fields.__8__1;
                  if ( !v407 )
                    sub_1BC3264(this, method);
                  v408 = v407->fields.basePiece;
                  if ( !v408 )
                    sub_1BC3264(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v408, 0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_239;
                  if ( !routeData )
                    sub_1BC3264(this, method);
                  v409 = routeData->fields.actionPiece;
                  if ( !v409 )
                    sub_1BC3264(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v409, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_239:
                    v410 = routeData;
                    if ( !routeData )
                      sub_1BC3264(this, method);
                    v411 = routeData->fields.basePiece;
                    routeData->fields.flagNow |= 2uLL;
                    if ( !v411 )
                      sub_1BC3264(this, method);
                    v412 = v410->fields.actionPiece;
                    v410->fields.attackCountOnThisTurn = v411->fields._attackCount_k__BackingField + 1;
                    if ( !v412 )
                      sub_1BC3264(0LL, method);
                    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isServant(v412, 0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v413 = routeData;
                      if ( !routeData )
                        sub_1BC3264(this, method);
                      v414 = v733->fields.__8__1;
                      if ( !v414 )
                        sub_1BC3264(this, method);
                      v415 = v414->fields.basePiece;
                      if ( !v415 )
                        sub_1BC3264(this, method);
                      battleServant_k__BackingField = v415->fields._battleServant_k__BackingField;
                      if ( !battleServant_k__BackingField )
                        sub_1BC3264(0LL, method);
                      flagNow = routeData->fields.flagNow;
                      ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0, 0LL);
                      if ( !routeData )
                        sub_1BC3264(ClassId, v419);
                      v420 = routeData->fields.actionPiece;
                      if ( !v420 )
                        sub_1BC3264(ClassId, v419);
                      v421 = ClassId;
                      v422 = v420->fields._battleServant_k__BackingField;
                      if ( !v422 )
                        sub_1BC3264(0LL, v419);
                      v423 = (WarBoardAIRoute_o *)BattleServantData__getClassId(v422, 0, 0LL);
                      FlagAdvantage = WarBoardAIRoute__GetFlagAdvantage(v423, v421, (int32_t)v423, v424);
                      v413->fields.flagNow = FlagAdvantage | flagNow;
                      if ( !routeData )
                        sub_1BC3264(FlagAdvantage, v426);
                      WarBoardAIRoute__LinkedCount(
                        (WarBoardAIRoute_o *)FlagAdvantage,
                        *v319,
                        v733->fields.piecePlaceData,
                        &routeData->fields.attackByLinkedEnemy,
                        &routeData->fields.attackByLinkedAlly,
                        v427);
                    }
                    break;
                  }
LABEL_662:
                  v311 = v733;
                  v312 = LODWORD(v733->fields.__7__wrap23) + 1;
                  LODWORD(v733->fields.__7__wrap23) = v312;
                  continue;
                }
                if ( !routeData )
                  sub_1BC3264(this, method);
                v428 = routeData->fields.actionPiece;
                if ( !v428 )
                  sub_1BC3264(this, method);
                if ( v428->fields._roleType_k__BackingField == 1 )
                  goto LABEL_662;
                v429 = v733->fields.__8__1;
                if ( !v429 )
                  sub_1BC3264(this, method);
                v430 = v429->fields.basePiece;
                if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsAllyPiece(v430, v428, v2);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !routeData )
                    sub_1BC3264(this, method);
                  routeData->fields.flagNow |= 0x4000000uLL;
                }
              }
              break;
            }
            v431 = routeData;
            if ( !routeData )
              sub_1BC3264(this, method);
            if ( (routeData->fields.flagNow & 2) != 0 )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_1BC3264(0LL, method);
              if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.attackCost
                                                              + v733->fields._requiredCost_5__3 )
                goto LABEL_662;
              v451 = v733->fields.__8__1;
              if ( !v451 )
                sub_1BC3264(this, method);
              v452 = v451->fields.basePiece;
              if ( !v452 )
                sub_1BC3264(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableAttack(
                                                                   v452,
                                                                   v733->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v431 = routeData;
              if ( !routeData )
                sub_1BC3264(this, method);
            }
            if ( (v431->fields.flagNow & 2) == 0 )
            {
              v432 = v733->fields.__8__1;
              if ( !v432 )
                sub_1BC3264(this, method);
              v433 = v432->fields.basePiece;
              if ( !v433 )
                sub_1BC3264(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableMoveBySelf(
                                                                   v433,
                                                                   v733->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v431 = routeData;
              if ( !routeData )
                sub_1BC3264(this, method);
            }
            if ( (v431->fields.flagNow & 0x4000000) != 0 )
            {
              v434 = v733->fields.__8__1;
              if ( !v434 )
                sub_1BC3264(this, method);
              v435 = (System_Collections_Generic_List_object__o *)v733->fields.routeDataList;
              if ( !v435 )
                sub_1BC3264(0LL, method);
              requiredCost_5__3 = v733->fields._requiredCost_5__3;
              v437 = v434->fields.basePiece;
              v438 = v431->fields.actionPiece;
              v439 = System_Collections_Generic_List_object___AsReadOnly(
                       v435,
                       (const MethodInfo_36A1068 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIRoute__IsActableReplace(
                                                                   _4__this,
                                                                   v437,
                                                                   v438,
                                                                   requiredCost_5__3,
                                                                   (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v439,
                                                                   v733->fields._servantAndEnemyMasterRange_5__15,
                                                                   v440);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v431 = routeData;
            }
            piecePlaceData = WarBoardAIRoute__UpdatePiecePlaceData(
                               (WarBoardAIRoute_o *)this,
                               v733->fields.piecePlaceData,
                               v431,
                               v733->fields.__7__wrap8.fields._getEnumeratorRetType,
                               *v319,
                               v398);
            MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
                                               _4__this,
                                               piecePlaceData,
                                               v441);
            v443 = v733->fields._basePieceActionPieceRouteList_5__22;
            v444 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v444,
              (Il2CppObject *)v313,
              Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
              0LL);
            v445 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__50395312(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v443,
                                          (System_Func_TSource__bool__o *)v444,
                                          (const MethodInfo_300F8B0 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)v445 & 1) != 0
              || (v448 = v733->fields._advantagePieceData_5__21,
                  v449 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo),
                  System_Func_object__bool____ctor(
                    v449,
                    (Il2CppObject *)v313,
                    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
                    0LL),
                  v445 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__50395312(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)v448,
                                                (System_Func_TSource__bool__o *)v449,
                                                (const MethodInfo_300F8B0 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___),
                  ((unsigned __int8)v445 & 1) != 0) )
            {
              if ( !routeData )
                sub_1BC3264(v445, v446);
              routeData->fields.flagNow |= 0x20000000000uLL;
            }
            if ( v733->fields._masterExists_5__8 )
            {
              if ( v733->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
                goto LABEL_291;
              if ( !routeData )
                sub_1BC3264(v445, v446);
              if ( (routeData->fields.flagNow & 0x400) != 0 )
              {
LABEL_291:
                v453 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                         _4__this,
                         piecePlaceData,
                         MasterSquareIndexFromPlaceData,
                         v447);
                v445 = WarBoardAIRoute__GetDefenseAreaData(
                         _4__this,
                         MasterSquareIndexFromPlaceData,
                         v453,
                         piecePlaceData,
                         v454);
                v450 = v445;
              }
              else
              {
                v450 = v733->fields._defenseAreaData_5__7;
              }
              if ( !v450 )
                sub_1BC3264(v445, v446);
              v455 = _4__this->fields.aiRouteMasterData;
              if ( !v455 )
                sub_1BC3264(v445, v446);
              v456 = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                       v450->fields._ShortestRoutes_k__BackingField,
                       piecePlaceData,
                       v455->fields.masterType == 1,
                       v447);
              v458 = routeData;
              if ( v456 )
              {
                if ( !routeData )
                  sub_1BC3264(v456, v457);
                routeData->fields.flagNow |= 0x40000000uLL;
              }
              else if ( !routeData )
              {
                sub_1BC3264(v456, v457);
              }
              v459 = v458->fields.flagNow;
              if ( (v459 & 0x400) != 0 && (v450->fields._Flag_k__BackingField & 0x10000000000LL) != 0 )
                v458->fields.flagNow = v459 | 0x40000000000LL;
            }
            else
            {
              v458 = routeData;
            }
            v460 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v460,
              (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v458 )
              sub_1BC3264(v461, v462);
            v458->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v460;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v458->fields.moveByLinkedPiece, (int32_t)v460, v463, v464);
            v467 = routeData;
            if ( !routeData )
              sub_1BC3264(v465, v466);
            *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0LL;
            v468 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1BC3254(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
            System_Collections_Generic_Dictionary_uint__int____ctor(
              v468,
              (const MethodInfo_339C034 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
            v467->fields.dicUniqueKeyRange = v468;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v467->fields.dicUniqueKeyRange, (int32_t)v468, v469, v470);
            v472 = v733->fields.piecePlaceData;
            if ( !v472 )
              sub_1BC3264(0LL, v471);
            System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
              &v719,
              v472,
              (const MethodInfo_332B700 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
            *(_OWORD *)&v726.fields._dictionary = *(_OWORD *)&v719.fields._dictionary;
            v726.fields._current = v719.fields._current;
            while ( 1 )
            {
              v473 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                       &v726,
                       (const MethodInfo_345C7D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
              if ( !v473 )
                break;
              v476 = v733->fields.__8__1;
              if ( !v476 )
                sub_1BC3264(v473, v474);
              v477 = v476->fields.basePiece;
              if ( !v477 )
                sub_1BC3264(v473, v474);
              key_high = HIDWORD(v726.fields._current.fields.key);
              if ( v477->fields._uniqueIndex_k__BackingField != HIDWORD(v726.fields._current.fields.key) )
              {
                if ( !routeData )
                  sub_1BC3264(v473, v474);
                v479 = (int32_t)v726.fields._current.fields.key;
                dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
                v481 = *v319;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v482 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v481,
                                                                              v479,
                                                                              0,
                                                                              0LL,
                                                                              v475);
                v483 = System_Linq_Enumerable__Count_int_(
                         v482,
                         (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
                if ( !dicUniqueKeyRange )
                  sub_1BC3264(v483, v484);
                System_Collections_Generic_Dictionary_uint__int___Add(
                  dicUniqueKeyRange,
                  key_high,
                  v483,
                  (const MethodInfo_339C9F8 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
              &v726,
              (const MethodInfo_345C8D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
            v485 = routeData;
            v486 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v486,
              (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v485 )
              sub_1BC3264(v487, v488);
            v485->fields.listExistDesignationItem = v486;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v485->fields.listExistDesignationItem, (int32_t)v486, v489, v490);
            v491 = routeData;
            v492 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v492,
              (const MethodInfo_32F8FE0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( !v491 )
              sub_1BC3264(v493, v494);
            v491->fields.dicMoveByServantGetDesignationItem = v492;
            sub_1BC2FAC(
              (CGThumbnailListItem_o *)&v491->fields.dicMoveByServantGetDesignationItem,
              (int32_t)v492,
              v495,
              v496);
            v497 = routeData;
            v498 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
            System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
              v498,
              (const MethodInfo_3301ED0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
            if ( !v497 )
              sub_1BC3264(v499, v500);
            v497->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)v498;
            sub_1BC2FAC(
              (CGThumbnailListItem_o *)&v497->fields.dicItemIdKeyIsMoveByServantDesignationItemRange,
              (int32_t)v498,
              v501,
              v502);
            v505 = routeData;
            if ( !routeData )
              sub_1BC3264(v503, v504);
            routeData->fields.isMoveByOutOfWarningArea = 0;
            *(_QWORD *)&v505->fields.isMoveByServantAndEnemyRange = 0LL;
            *(_QWORD *)&v505->fields.isMoveByMasterAndEnemyRange = 0LL;
            *(_QWORD *)&v505->fields.isMoveByServantAndAttackAdvantageServantRange = 0LL;
            *(_QWORD *)&v505->fields.isMoveByServantAndDefenseAdvantageServantRange = 0LL;
            *(_QWORD *)&v505->fields.isMoveByServantAndClassAdvantageServantRange = 0LL;
            v506 = v733->fields.__8__1;
            if ( !v506 )
              sub_1BC3264(v503, v504);
            v507 = v506->fields.basePiece;
            if ( !v507 )
              sub_1BC3264(0LL, v504);
            IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isServant(v507, 0LL);
            if ( IsBlockShortestRouteEnemyAndMaster )
            {
              v513 = v733;
              if ( v733->fields._masterExists_5__8 )
              {
                v514 = v733->fields.__8__1;
                if ( !v514 )
                  sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                v515 = v514->fields.basePiece;
                if ( !v515 )
                  sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                v516 = _4__this->fields.aiRouteMasterData;
                if ( !v516 )
                  sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                if ( v516->fields.masterType != 2
                  || v516->fields.masterPieceIndex != v515->fields._index_k__BackingField )
                {
                  v517 = v733->fields._defenseAreaData_5__7;
                  if ( !v517 )
                    sub_1BC3264(0LL, v509);
                  IsBlockShortestRouteEnemyAndMaster = DefenseAreaData__IsInDefenseArea(v517, *v319, 0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                    routeData->fields.flagNow |= 0x4000000000uLL;
                  }
                }
                v518 = v733->fields.__8__1;
                if ( !v518 )
                  sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                v519 = v518->fields.basePiece;
                if ( !v519 )
                  sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                v520 = _4__this->fields.aiRouteMasterData;
                if ( !v520 )
                  sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                v521 = v520->fields.masterType;
                if ( v521 != 2 || v520->fields.masterPieceIndex != v519->fields._index_k__BackingField )
                {
                  IsBlockShortestRouteEnemyAndMaster = WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                                                         v733->fields._defenseAreaData_5__7,
                                                         *v319,
                                                         v521 == 1,
                                                         v511);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                    routeData->fields.flagNow |= 0x100000000uLL;
                  }
                }
                v513 = v733;
                v522 = v733->fields.__8__1;
                if ( !v522 )
                  sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                v523 = v522->fields.basePiece;
                if ( !v523 )
                  sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                v524 = _4__this->fields.aiRouteMasterData;
                if ( !v524 )
                  sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                if ( v524->fields.masterType != 2
                  || v524->fields.masterPieceIndex != v523->fields._index_k__BackingField )
                {
                  v525 = *v319;
                  if ( *v319 == MasterSquareIndexFromPlaceData )
                  {
                    v526 = routeData;
                    if ( !routeData )
                      sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                    v527 = 2;
                  }
                  else
                  {
                    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                    v528 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                                  0LL,
                                                                                  v525,
                                                                                  MasterSquareIndexFromPlaceData,
                                                                                  0,
                                                                                  0LL,
                                                                                  v512);
                    v529 = System_Linq_Enumerable__Count_int_(
                             v528,
                             (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
                    v526 = routeData;
                    if ( !routeData )
                      sub_1BC3264(v529, v509);
                    v513 = v733;
                    tmpFlagNow_5__12 = v733->fields._tmpFlagNow_5__12;
                    v531 = (_DWORD)v529 == tmpFlagNow_5__12;
                    if ( (int)v529 < tmpFlagNow_5__12 )
                      v527 = 1;
                    else
                      v527 = 3;
                    if ( v531 )
                      v527 = 2;
                  }
                  v526->fields.isMoveByServantAndMasterRange = v527;
                }
              }
              v532 = *(System_Collections_Generic_Dictionary_int__int__o **)&v513->fields._sumPieceActionCost_5__17;
              if ( !v532 )
                sub_1BC3264(0LL, v509);
              System_Collections_Generic_Dictionary_int__int___GetEnumerator(
                &v719,
                v532,
                (const MethodInfo_32FFE74 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
              v724 = *(_OWORD *)&v719.fields._dictionary;
              v725 = v719.fields._current;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
                        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v724,
                        (const MethodInfo_3458604 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
              {
                v534 = (int32_t)v725.fields.key;
                v535 = HIDWORD(v725.fields.key);
                v536 = *v319;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v537 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v536,
                                                                              v534,
                                                                              0,
                                                                              0LL,
                                                                              v533);
                v538 = System_Linq_Enumerable__Count_int_(
                         v537,
                         (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
                if ( !routeData )
                  sub_1BC3264(v538, v539);
                dicItemIdKeyIsMoveByServantDesignationItemRange = (System_Collections_Generic_Dictionary_TKey__TValue__o *)routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
                if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
                  sub_1BC3264(v538, v539);
                if ( (int)v538 < v535 )
                  v541 = 1;
                else
                  v541 = 3;
                if ( (_DWORD)v538 == v535 )
                  v542 = 2;
                else
                  v542 = v541;
                System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
                  dicItemIdKeyIsMoveByServantDesignationItemRange,
                  v534,
                  v542,
                  (const MethodInfo_3302880 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
                if ( !routeData )
                  sub_1BC3264(v543, v544);
                dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
                if ( !dicMoveByServantGetDesignationItem )
                  sub_1BC3264(0LL, v544);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  dicMoveByServantGetDesignationItem,
                  v534,
                  *v319 == v534,
                  (const MethodInfo_32F99B8 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
                if ( !routeData )
                  sub_1BC3264(v546, v547);
                listExistDesignationItem = routeData->fields.listExistDesignationItem;
                if ( !listExistDesignationItem )
                  sub_1BC3264(0LL, v547);
                items = listExistDesignationItem->fields._items;
                v550 = Method_System_Collections_Generic_List_int__Add__;
                ++listExistDesignationItem->fields._version;
                if ( !items )
                  sub_1BC3264(listExistDesignationItem, v547);
                size = listExistDesignationItem->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    listExistDesignationItem,
                    v534,
                    *(const MethodInfo_3683E1C **)(*(_QWORD *)(v550[4] + 192LL) + 112LL));
                }
                else
                {
                  listExistDesignationItem->fields._size = size + 1;
                  items->m_Items[size + 1] = v534;
                }
              }
              System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v724,
                (const MethodInfo_3458704 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
              v553 = *v319;
              enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
              if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
              v555 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                            0LL,
                                                                            v553,
                                                                            enemyMasterSquareIndex,
                                                                            0,
                                                                            0LL,
                                                                            v552);
              v556 = System_Linq_Enumerable__Count_int_(
                       v555,
                       (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
              v559 = routeData;
              if ( !routeData )
                sub_1BC3264(v556, v557);
              servantAndMasterRange_5__13 = v733->fields._servantAndMasterRange_5__13;
              v561 = (_DWORD)v556 == servantAndMasterRange_5__13;
              if ( (int)v556 < servantAndMasterRange_5__13 )
                v562 = 1;
              else
                v562 = 3;
              if ( v561 )
                v562 = 2;
              routeData->fields.isMoveByServantAndEnemyMasterRange = v562;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4AFFA62 )
              {
                sub_1BC3008(&WarBoardAIManager_TypeInfo, v557);
                byte_4AFFA62 = 1;
              }
              v563 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v563 = WarBoardAIManager_TypeInfo;
              }
              v564 = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                            v563->static_fields->dicSquareIndexEnemyPiece,
                                            HIDWORD(v733->fields._tmpFlagNow_5__12),
                                            *v319,
                                            v558);
              v559->fields.isMoveByServantAndEnemyRange = (int)v564;
              WarBoardAIRoute__ClassAdvantageDistance(
                v564,
                &routeData,
                (WarBoardAIRoute_AdvantagePieceData_o *)v733->fields._dicEnemyRange_5__20,
                *v319,
                v565);
            }
            v566 = _4__this->fields.aiRouteMasterData;
            if ( !v566 )
              sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
            if ( v566->fields.masterType )
            {
LABEL_501:
              if ( v566->fields.masterType == 2 )
              {
                v569 = v733->fields.__8__1;
                if ( !v569 )
                  sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                v570 = v569->fields.basePiece;
                if ( !v570 )
                  sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                if ( v570->fields._index_k__BackingField == v566->fields.masterPieceIndex )
                  goto LABEL_505;
              }
            }
            else
            {
              v567 = v733->fields.__8__1;
              if ( !v567 )
                sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
              v568 = v567->fields.basePiece;
              if ( !v568 )
                sub_1BC3264(0LL, v509);
              IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isMaster(v568, 0LL);
              if ( !IsBlockShortestRouteEnemyAndMaster )
              {
                v566 = _4__this->fields.aiRouteMasterData;
                if ( !v566 )
                  sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                goto LABEL_501;
              }
LABEL_505:
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4AFFA62 )
              {
                sub_1BC3008(&WarBoardAIManager_TypeInfo, v509);
                byte_4AFFA62 = 1;
              }
              v571 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v571 = WarBoardAIManager_TypeInfo;
              }
              dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v571->static_fields->dicSquareIndexEnemyPiece;
              if ( !dicSquareIndexEnemyPiece )
                sub_1BC3264(0LL, v509);
              Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                       dicSquareIndexEnemyPiece,
                       (const MethodInfo_3308214 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
              if ( !Keys )
                sub_1BC3264(0LL, v574);
              System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
                (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v719,
                Keys,
                (const MethodInfo_35C1818 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
              *(_OWORD *)&v723.fields._dictionary = *(_OWORD *)&v719.fields._dictionary;
              v723.fields._currentKey = v719.fields._current.fields.key;
              while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
                        &v723,
                        (const MethodInfo_345AA50 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                currentKey = (int32_t)v723.fields._currentKey;
                v577 = *v319;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v578 = AStarSearch__RouteSearch(0LL, v577, currentKey, 0, 0LL, v575);
                if ( !v578 )
                  sub_1BC3264(0LL, v579);
                v580 = _4__this->fields.npcData;
                if ( !v580 )
                  sub_1BC3264(v578, v579);
                if ( (signed int)(v578->max_length - 1) <= v580->fields.defenseArea )
                {
                  if ( !routeData )
                    sub_1BC3264(v578, v579);
                  routeData->fields.flagNow |= 0x8000000000uLL;
                  break;
                }
              }
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
                &v723,
                (const MethodInfo_345AA4C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
              v583 = routeData;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4AFFA62 )
              {
                sub_1BC3008(&WarBoardAIManager_TypeInfo, v581);
                byte_4AFFA62 = 1;
              }
              v584 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v584 = WarBoardAIManager_TypeInfo;
              }
              v585 = v733->fields._defenseAreaData_5__7;
              if ( !v585 )
                sub_1BC3264(v584, v581);
              v586 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v584->static_fields->dicSquareIndexEnemyPiece,
                       v585->fields._MasterAndEnemyRange_k__BackingField,
                       *v319,
                       v582);
              if ( !v583 )
                sub_1BC3264(v586, v587);
              v583->fields.isMoveByMasterAndEnemyRange = v586;
              if ( !byte_4AFFA62 )
              {
                sub_1BC3008(&WarBoardAIManager_TypeInfo, v587);
                byte_4AFFA62 = 1;
              }
              v588 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v588 = WarBoardAIManager_TypeInfo;
              }
              v589 = (System_Collections_Generic_Dictionary_int__object__o *)v588->static_fields->dicSquareIndexEnemyPiece;
              if ( !v589 )
                sub_1BC3264(0LL, v587);
              System_Collections_Generic_Dictionary_int__object___GetEnumerator(
                &v719,
                v589,
                (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
              v722 = v719;
              do
              {
                v591 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                         &v722,
                         (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
                if ( !v591 )
                  break;
                v592 = (int32_t)v722.fields._current.fields.key;
                v593 = *v319;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v594 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v593,
                                                                              v592,
                                                                              0,
                                                                              0LL,
                                                                              v590);
                System_Linq_Enumerable__Count_int_(
                  v594,
                  (const MethodInfo_301DA7C *)Method_System_Linq_Enumerable_Count_int___);
              }
              while ( WarBoardAIRoute__IsDetour((System_Int32_array *)v594, v733->fields._allyPieceIndexs_5__5, v595) );
              System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
                &v722,
                (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( !v591 )
              {
                if ( !routeData )
                  sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
                routeData->fields.flagNow |= 0x1000000000uLL;
              }
            }
            v596 = routeData;
            if ( !routeData )
              sub_1BC3264(IsBlockShortestRouteEnemyAndMaster, v509);
            if ( !routeData->fields.actionPiece || (routeData->fields.flagNow & 0x4000000) != 0 )
            {
              v597 = v733->fields._warBoardData_5__2;
              if ( !v597 )
                sub_1BC3264(0LL, v509);
              Effect = WarBoardData__GetEffect(v597, *v319, v510);
              if ( Effect )
              {
                if ( !routeData )
                  sub_1BC3264(Effect, v599);
                routeData->fields.flagNow |= 0x200000000uLL;
              }
              v600 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v600,
                (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
              v602 = (System_Collections_Generic_List_object__o *)v733->fields.routeDataList;
              if ( !v602 )
                sub_1BC3264(0LL, v601);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v719,
                v602,
                (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
              *(_OWORD *)&v730.fields._list = *(_OWORD *)&v719.fields._dictionary;
              v730.fields._current = v719.fields._current.fields.key;
              while ( 1 )
              {
                v603 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v730,
                         (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
                if ( !v603 )
                  break;
                v605 = v730.fields._current;
                if ( !v730.fields._current )
                  sub_1BC3264(v603, v604);
                if ( (BYTE3(v730.fields._current[1].klass) & 8) != 0 )
                {
                  v606 = v730.fields._current[3].klass;
                  if ( !v606 )
                    sub_1BC3264(0LL, v604);
                  v607 = WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v606, 0LL);
                  if ( v607 )
                  {
                    if ( !v600 )
                      sub_1BC3264(v607, monitor_high);
                    monitor_high = HIDWORD(v605[1].monitor);
                    v609 = v600->fields._items;
                    v610 = Method_System_Collections_Generic_List_int__Add__;
                    ++v600->fields._version;
                    if ( !v609 )
                      sub_1BC3264(v607, monitor_high);
                    v611 = v600->fields._size;
                    if ( (unsigned int)v611 >= v609->max_length )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v600,
                        monitor_high,
                        *(const MethodInfo_3683E1C **)(*(_QWORD *)(v610[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v600->fields._size = v611 + 1;
                      v609->m_Items[v611 + 1] = monitor_high;
                    }
                  }
                  if ( (BYTE3(v605[1].klass) & 4) != 0 )
                  {
                    v612 = (WarBoardPieceData_o *)v605[3].klass;
                    if ( !v612 )
                      sub_1BC3264(0LL, monitor_high);
                    if ( WarBoardPieceData__get_isMaster(v612, 0LL) )
                    {
                      v614 = (WarBoardPieceData_o *)v605[3].monitor;
                      if ( !v614 )
                        sub_1BC3264(0LL, v613);
                      v615 = WarBoardPieceData__get_isServant(v614, 0LL);
                      if ( v615 )
                      {
                        if ( !v600 )
                          sub_1BC3264(v615, v616);
                        monitor_low = LODWORD(v605[1].monitor);
                        v618 = v600->fields._items;
                        v619 = Method_System_Collections_Generic_List_int__Add__;
                        ++v600->fields._version;
                        if ( !v618 )
                          sub_1BC3264(v615, monitor_low);
                        v620 = v600->fields._size;
                        if ( (unsigned int)v620 >= v618->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v600,
                            monitor_low,
                            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v619[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v600->fields._size = v620 + 1;
                          v618->m_Items[v620 + 1] = monitor_low;
                        }
                      }
                    }
                  }
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v730,
                (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
              if ( !routeData )
                sub_1BC3264(v621, v622);
              v623 = routeData->fields.basePiece;
              if ( !v623 )
                sub_1BC3264(0LL, v622);
              v624 = WarBoardPieceData__get_isServant(v623, 0LL);
              if ( v624 )
              {
                if ( !routeData )
                  sub_1BC3264(v624, v625);
                CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                                   (WarBoardAIRoute_o *)v624,
                                   routeData->fields.actionIndex,
                                   v600,
                                   v626);
                if ( CanAcquireItem )
                {
                  v630 = routeData;
                  if ( !routeData )
                    sub_1BC3264(CanAcquireItem, v628);
                  v631 = routeData->fields.flagNow | 0x18000000;
                  goto LABEL_610;
                }
              }
              else
              {
                if ( !routeData )
                  sub_1BC3264(v624, v625);
                v632 = routeData->fields.basePiece;
                if ( !v632 )
                  sub_1BC3264(0LL, v625);
                CanAcquireItem = WarBoardPieceData__get_isMaster(v632, 0LL);
                if ( CanAcquireItem )
                {
                  if ( !routeData )
                    sub_1BC3264(CanAcquireItem, v633);
                  CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                                     (WarBoardAIRoute_o *)CanAcquireItem,
                                     routeData->fields.actionIndex,
                                     v600,
                                     v634);
                  v636 = routeData;
                  if ( CanAcquireItem )
                  {
                    if ( !routeData )
                      sub_1BC3264(CanAcquireItem, v635);
                    routeData->fields.flagNow |= 0x10000000uLL;
                  }
                  else if ( !routeData )
                  {
                    sub_1BC3264(CanAcquireItem, v635);
                  }
                  if ( (v636->fields.flagNow & 0x4000000) != 0 )
                  {
                    v637 = v636->fields.actionPiece;
                    if ( !v637 )
                      sub_1BC3264(0LL, v635);
                    CanAcquireItem = WarBoardPieceData__get_isServant(v637, 0LL);
                    if ( CanAcquireItem )
                    {
                      if ( !routeData )
                        sub_1BC3264(CanAcquireItem, v638);
                      CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                                         (WarBoardAIRoute_o *)CanAcquireItem,
                                         routeData->fields.baseIndex,
                                         v600,
                                         v639);
                      if ( CanAcquireItem )
                      {
                        v630 = routeData;
                        if ( !routeData )
                          sub_1BC3264(CanAcquireItem, v640);
                        v631 = routeData->fields.flagNow | 0x8000000;
LABEL_610:
                        v630->fields.flagNow = v631;
                      }
                    }
                  }
                }
              }
              WarBoardAIRoute__LinkedPieceCount(
                (WarBoardAIRoute_o *)CanAcquireItem,
                &routeData,
                piecePlaceData,
                v600,
                v629);
              v596 = routeData;
              if ( !routeData )
                sub_1BC3264(v641, v642);
            }
            FlagOutOfWarningAreaToDistance = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                               _4__this,
                                               v596->fields.baseIndex,
                                               v596->fields.actionIndex,
                                               v511);
            v596->fields.isMoveByOutOfWarningArea = FlagOutOfWarningAreaToDistance;
            v645 = routeData;
            if ( !routeData )
              sub_1BC3264(FlagOutOfWarningAreaToDistance, v644);
            evalOffsetMagnification = routeData->fields.evalOffsetMagnification;
            if ( !evalOffsetMagnification )
              sub_1BC3264(FlagOutOfWarningAreaToDistance, v644);
            evalOffsetMagnification->fields.isAttack = (routeData->fields.flagNow & 2) != 0;
            v647 = v645->fields.basePiece;
            if ( !v647 )
              sub_1BC3264(FlagOutOfWarningAreaToDistance, v644);
            piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields.piecePersonalityDic;
            if ( !piecePersonalityDic )
              sub_1BC3264(0LL, v644);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                 piecePersonalityDic,
                                                                 v647->fields._index_k__BackingField,
                                                                 &value,
                                                                 (const MethodInfo_3309CE0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v649 = value;
              v650 = (WarBoardAIEvalCalcurater_o *)sub_1BC3254(WarBoardAIEvalCalcurater_TypeInfo);
              WarBoardAIEvalCalcurater___ctor(v650, (WarBoardAIRoute_PiecePersonality_o *)v649, 0LL);
              if ( !v650 )
                sub_1BC3264(v651, v652);
              WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v650, &routeData, 0LL);
              WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
                v650,
                &routeData,
                _4__this->fields.averageBenefitValue,
                0LL);
              if ( !routeData )
                sub_1BC3264(0LL, v653);
              WarBoardAIRoute_RouteData__CalcEvalValue(routeData, v653);
              v654 = WarBoardAIRoute___c_TypeInfo;
              v655 = v733->fields.routeDataList;
              if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v654 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_5 = (System_Func_object__object__o *)v654->static_fields->__9__47_5;
              if ( !_9__47_5 )
              {
                if ( !v654->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v654);
                  v654 = WarBoardAIRoute___c_TypeInfo;
                }
                v657 = (Il2CppObject *)v654->static_fields->__9;
                _9__47_5 = (System_Func_object__object__o *)sub_1BC3254(System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
                System_Func_object__object____ctor(
                  _9__47_5,
                  v657,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__,
                  0LL);
                v658 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v658->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v658->__9__47_5, (int32_t)_9__47_5, v659, v660);
              }
              v661 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v655,
                                                                      (System_Func_TSource__TResult__o *)_9__47_5,
                                                                      (const MethodInfo_3036320 *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
              v662 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
              System_Collections_Generic_List_object____ctor_57280308(
                v662,
                v661,
                (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___76789304);
              if ( !v662 )
                sub_1BC3264(v663, v664);
              v667 = (Il2CppObject *)routeData;
              v668 = v662->fields._items;
              v669 = Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__;
              ++v662->fields._version;
              if ( !v668 )
                sub_1BC3264(v663, v667);
              v670 = v662->fields._size;
              if ( (unsigned int)v670 >= v668->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v662,
                  v667,
                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v669[4] + 192LL) + 112LL));
              }
              else
              {
                v671 = &v668->obj.klass + v670;
                v662->fields._size = v670 + 1;
                v671[4] = (Il2CppClass *)v667;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v671 + 4), (int32_t)v667, v665, v666);
              }
              v672 = (WarBoardAIRoute_RouteData_o *)BasicHelper__IndexValue_object__50267232(
                                                      (System_Collections_Generic_List_T__o *)v662,
                                                      v662->fields._size - 2,
                                                      0LL,
                                                      (const MethodInfo_2FF0460 *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
              route = v672;
              if ( v672 )
              {
                v674 = (int)routeData;
                if ( !routeData )
                  sub_1BC3264(v672, v673);
                if ( routeData->fields.basePiece == v672->fields.basePiece )
                {
                  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
                    v650,
                    &route,
                    routeData,
                    0LL);
                  if ( !route )
                    sub_1BC3264(0LL, v676);
                  WarBoardAIRoute_RouteData__CalcEvalValue(route, v676);
                }
              }
              allRouteList = (System_Collections_Generic_List_object__o *)_4__this->fields.allRouteList;
              if ( !allRouteList )
                sub_1BC3264(0LL, v673);
              v678 = allRouteList->fields._items;
              v679 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++allRouteList->fields._version;
              if ( !v678 )
                sub_1BC3264(allRouteList, v673);
              v680 = allRouteList->fields._size;
              if ( (unsigned int)v680 >= v678->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  allRouteList,
                  (Il2CppObject *)v662,
                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v679[4] + 192LL) + 112LL));
              }
              else
              {
                v681 = &v678->obj.klass + v680;
                allRouteList->fields._size = v680 + 1;
                v681[4] = (Il2CppClass *)v662;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v681 + 4), (int32_t)v662, v674, v675);
              }
              if ( !routeData )
                sub_1BC3264(this, method);
              if ( routeData->fields.baseIndex != routeData->fields.actionIndex && (routeData->fields.flagNow & 2) == 0 )
              {
                searchCount = v733->fields.searchCount;
                if ( searchCount != 1 )
                {
                  v713 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                           _4__this,
                                           piecePlaceData,
                                           searchCount,
                                           (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v662,
                                           v682);
                  v714 = v733;
                  v733->fields.__2__current = v713;
                  sub_1BC2FAC((CGThumbnailListItem_o *)&v714->fields.__2__current, (int32_t)v713, v715, v716);
                  result = 1;
                  v733->fields.__1__state = 1;
                  return result;
                }
                dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
                v685 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                         _4__this,
                                         piecePlaceData,
                                         1,
                                         (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v662,
                                         v682);
                if ( !routeData )
                  sub_1BC3264(v685, v685);
                if ( !dictionaryCreateRouteDataEvalValue )
                  sub_1BC3264(v685, v685);
                System_Collections_Generic_Dictionary_object__float___Add(
                  dictionaryCreateRouteDataEvalValue,
                  v685,
                  routeData->fields.evalValue,
                  (const MethodInfo_33760D4 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
              }
            }
            goto LABEL_662;
          }
        }
        WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v733, v148);
        v260 = v733;
        v261 = v733->fields.searchCount;
        v733->fields.__7__wrap8.fields._current = 0u;
        *(_OWORD *)&v260->fields.__7__wrap8.fields._dictionary = 0u;
        if ( v261 != 1 )
          return 0;
        if ( !_4__this )
          sub_1BC3264(v258, v259);
        v262 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        v263 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v263 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__47_6 = (System_Func_T__TResult__o *)v263->static_fields->__9__47_6;
        if ( !_9__47_6 )
        {
          if ( !v263->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v263);
            v263 = WarBoardAIRoute___c_TypeInfo;
          }
          v265 = (Il2CppObject *)v263->static_fields->__9;
          _9__47_6 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v265,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            0LL);
          v266 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v266->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v266->__9__47_6, (int32_t)_9__47_6, v267, v268);
        }
        v270 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__float___float_(
                 v262,
                 (System_Func_TSource__TKey__o *)_9__47_6,
                 (const MethodInfo_302D794 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v733->fields._servantAndEnemyMasterRange_5__15 = 0;
        v271 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v271 )
          sub_1BC3264(0LL, v269);
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v271,
                  (const MethodInfo_3375DA4 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v274 = _4__this->fields.npcData;
        if ( !v274 )
          sub_1BC3264(Count, v273);
        v275 = v733;
        v276 = (float)((float)v274->fields.calcEllipsis / 100.0) * (float)(int)Count;
        v277 = (int)v276;
        if ( v276 == INFINITY )
          v277 = 0x80000000;
        v733->fields._servantAndEnemyRange_5__14 = v277;
        calcEllipsisMin = v274->fields.calcEllipsisMin;
        if ( calcEllipsisMin <= v277 )
          calcEllipsisMin = v277;
        v275->fields._servantAndEnemyRange_5__14 = calcEllipsisMin;
        if ( !v270 )
          sub_1BC3264(Count, v273);
        v279 = v270->klass;
        v280 = *(unsigned __int16 *)(&v270->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v270->klass->_2.bitflags2 + 3) )
        {
          p_offset = &v279->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            --v280;
            p_offset += 4;
            if ( !v280 )
              goto LABEL_112;
          }
          p_method = (__int64)&v279->vtable[*p_offset].method;
        }
        else
        {
LABEL_112:
          p_method = sub_1C13570(
                       v270,
                       System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo,
                       0LL);
        }
        v283 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                 v270,
                 *(_QWORD *)(p_method + 8));
        v284 = (CGThumbnailListItem_o *)&v733->fields.__7__wrap24;
        *(_QWORD *)&v733->fields.__7__wrap24 = v283;
        sub_1BC2FAC(v284, v283, v285, v286);
        v4 = v733;
        v733->fields.__1__state = -4;
        goto LABEL_117;
      }
    }
    else
    {
      v129 = _4__this->fields.aiRouteMasterData;
      if ( !v129 )
        sub_1BC3264(v123, v124);
      if ( v733 )
      {
        v130 = v129->fields.masterType;
        v733->fields._masterExists_5__8 = v130 != 3;
        if ( v130 == 3 )
          goto LABEL_29;
        goto LABEL_25;
      }
    }
    sub_1BC3264(v123, v124);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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


void __fastcall WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFF9E8 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, method);
    byte_4AFF9E8 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &this->fields.__7__wrap8,
    (const MethodInfo_345C8D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
}


void __fastcall WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  __int64 *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x9
  int *v6; // x10
  __int64 v7; // x0

  if ( (byte_4AFF9E9 & 1) == 0 )
  {
    sub_1BC3008(&System_IDisposable_TypeInfo, method);
    byte_4AFF9E9 = 1;
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
      v7 = sub_1C13570(v3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v7)(v3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall WarBoardAIRoute___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFF9D9 & 1) == 0 )
  {
    sub_1BC3008(&WarBoardAIRoute___c_TypeInfo, v1);
    byte_4AFF9D9 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(WarBoardAIRoute___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAIRoute___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)WarBoardAIRoute___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4AFF9DA & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1BC3008(&IWarBoardObjectData_TypeInfo, x);
    byte_4AFF9DA = 1;
  }
  if ( !x )
    sub_1BC3264(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C13570(x, IWarBoardObjectData_TypeInfo, 2LL);
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
  if ( (byte_4AFF9DB & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__,
      x.fields.key);
    byte_4AFF9DB = 1;
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
  if ( (byte_4AFF9DC & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__,
      x.fields.key);
    byte_4AFF9DC = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, (const MethodInfo *)x.fields.key);
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return WarBoardAIRoute_RouteData__ShallowCopy(x, (const MethodInfo *)x);
}


float __fastcall WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // w19

  value = x.fields.value;
  if ( (byte_4AFF9DD & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__, x.fields.key);
    byte_4AFF9DD = 1;
  }
  return value;
}


int32_t __fastcall WarBoardAIRoute___c___GetTargetToDistanceUsingIndividuality_b__64_2(
        WarBoardAIRoute___c_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  IWarBoardObjectData_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4AFF9DE & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1BC3008(&IWarBoardObjectData_TypeInfo, x);
    byte_4AFF9DE = 1;
  }
  if ( !x )
    sub_1BC3264(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 4].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C13570(x, IWarBoardObjectData_TypeInfo, 4LL);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


int32_t __fastcall WarBoardAIRoute___c___GetTargetToDistanceUsingIndividuality_b__64_3(
        WarBoardAIRoute___c_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  IWarBoardObjectData_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4AFF9DF & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1BC3008(&IWarBoardObjectData_TypeInfo, x);
    byte_4AFF9DF = 1;
  }
  if ( !x )
    sub_1BC3264(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C13570(x, IWarBoardObjectData_TypeInfo, 5LL);
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
  if ( (byte_4AFF9E0 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__,
      *(_QWORD *)&x.fields.key);
    byte_4AFF9E0 = 1;
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
    sub_1BC3264(this, 0LL);
  return !WarBoardItemData__get_Acquired(z, 0LL) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_1BC3264(this, 0LL);
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
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  IWarBoardObjectData_c *v9; // x8
  __int64 v10; // x9
  int32_t *v11; // x10
  __int64 v12; // x0

  v4 = this;
  if ( (byte_4AFF9E1 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_1BC3008(&IWarBoardObjectData_TypeInfo, z);
    byte_4AFF9E1 = 1;
  }
  if ( !z )
    sub_1BC3264(this, z);
  klass = z->klass;
  v6 = *(unsigned __int16 *)(&z->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&z->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C13570(z, IWarBoardObjectData_TypeInfo, 0LL);
  }
  if ( (*(unsigned int (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(z, *(_QWORD *)(p_method + 8)) != v4->fields.squareIndex )
    return 0;
  v9 = z->klass;
  v10 = *(unsigned __int16 *)(&z->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&z->klass->_2.bitflags2 + 3) )
  {
    v11 = &v9->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v11 - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v10;
      v11 += 4;
      if ( !v10 )
        goto LABEL_15;
    }
    v12 = (__int64)&v9->vtable[*v11 + 3].method;
  }
  else
  {
LABEL_15:
    v12 = sub_1C13570(z, IWarBoardObjectData_TypeInfo, 3LL);
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
    sub_1BC3264(this, x);
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
    sub_1BC3264(this, 0LL);
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
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

  if ( (byte_4AFF9E2 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, *(_QWORD *)&square);
    byte_4AFF9E2 = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_1BC3264(0LL, *(_QWORD *)&square);
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_332B514 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
}


void __fastcall WarBoardAIRoute___c__DisplayClass58_0___ctor(
        WarBoardAIRoute___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute___c__DisplayClass58_0___IsDetour_b__0(
        WarBoardAIRoute___c__DisplayClass58_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct System_Int32_array *route; // x8
  __int64 i; // x9

  route = this->fields.route;
  if ( !route )
    sub_1BC3264(this, x);
  i = this->fields.i;
  if ( (unsigned int)i >= route->max_length )
    sub_1BC326C(this, *(_QWORD *)&x, method);
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
  struct System_Func_IWarBoardObjectData__bool__o *excludeCond; // x8

  excludeCond = this->fields.excludeCond;
  if ( !excludeCond )
    sub_1BC3264(this, x);
  return (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, IWarBoardObjectData_o *, _QWORD))excludeCond->fields.m_target)(
            excludeCond->fields.original_method_info,
            x,
            *(_QWORD *)&excludeCond->fields.extra_arg) & 1) == 0
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
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  const MethodInfo *v11; // x5
  int32_t v12; // w19

  v4 = this;
  if ( (byte_4AFF9E3 & 1) == 0 )
  {
    sub_1BC3008(&AStarSearch_TypeInfo, x);
    this = (WarBoardAIRoute___c__DisplayClass64_0_o *)sub_1BC3008(&IWarBoardObjectData_TypeInfo, v5);
    byte_4AFF9E3 = 1;
  }
  if ( !x )
    goto LABEL_14;
  klass = x->klass;
  baseSquareIndex = v4->fields.baseSquareIndex;
  v8 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C13570(x, IWarBoardObjectData_TypeInfo, 1LL);
  }
  v12 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  if ( !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  this = (WarBoardAIRoute___c__DisplayClass64_0_o *)AStarSearch__RouteSearch(0LL, baseSquareIndex, v12, 0, 0LL, v11);
  if ( !this )
LABEL_14:
    sub_1BC3264(this, x);
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_T__o *routeDataList; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4AFF9E4 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, targetObject);
    sub_1BC3008(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v5);
    sub_1BC3008(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__, v6);
    sub_1BC3008(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo, v7);
    byte_4AFF9E4 = 1;
  }
  v8 = sub_1BC3254(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BC3264(v9, v10);
  *(_QWORD *)(v8 + 16) = targetObject;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 16), (int32_t)targetObject, v11, v12);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v14 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    0LL);
  return BasicHelper__Any_object_(
           routeDataList,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_2FEB2DC *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
  __int64 methodPtr_low; // x10
  int32_t baseIndex; // w23
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  struct IWarBoardObjectData_o *v14; // x20
  IWarBoardObjectData_c *v15; // x8
  int32_t actionIndex; // w19
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0

  v4 = this;
  if ( (byte_4AFF9E5 & 1) == 0 )
  {
    sub_1BC3008(&IWarBoardObjectData_TypeInfo, x);
    this = (WarBoardAIRoute___c__DisplayClass65_1_o *)sub_1BC3008(&WarBoardItemData_TypeInfo, v5);
    byte_4AFF9E5 = 1;
  }
  targetObject = v4->fields.targetObject;
  if ( !targetObject )
    return 0;
  klass = targetObject->klass;
  methodPtr_low = LOBYTE(WarBoardItemData_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(targetObject->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (WarBoardItemData_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardItemData_TypeInfo )
  {
    return 0;
  }
  if ( !x )
    goto LABEL_25;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  baseIndex = x->fields.baseIndex;
  v11 = *(unsigned __int16 *)(&klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_1C13570(v4->fields.targetObject, IWarBoardObjectData_TypeInfo, 0LL);
  }
  this = (WarBoardAIRoute___c__DisplayClass65_1_o *)(*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                                      targetObject,
                                                      *(_QWORD *)(p_method + 8));
  if ( baseIndex == (_DWORD)this )
    return 1;
  v14 = v4->fields.targetObject;
  if ( !v14 )
LABEL_25:
    sub_1BC3264(this, x);
  v15 = v14->klass;
  actionIndex = x->fields.actionIndex;
  v17 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v18 - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_22;
    }
    v19 = (__int64)&v15->vtable[*v18].method;
  }
  else
  {
LABEL_22:
    v19 = sub_1C13570(v14, IWarBoardObjectData_TypeInfo, 0LL);
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
  if ( (byte_4AFF9E6 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass66_0_o *)sub_1BC3008(
                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__,
                                                        x);
    byte_4AFF9E6 = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  value = v4->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_1BC3264(this, x);
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
    sub_1BC3264(this, x);
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
      v8 = 28LL;
      v9 = Cost_k__BackingField->fields.overwirteMove < 0;
      v10 = 44LL;
      goto LABEL_22;
    }
LABEL_26:
    sub_1BC3264(this, x);
  }
  Cost_k__BackingField = targetPiece->fields._Cost_k__BackingField;
  if ( !Cost_k__BackingField )
    goto LABEL_26;
  v8 = 32LL;
  v9 = Cost_k__BackingField->fields.overwirteAttack < 0;
  v10 = 48LL;
LABEL_22:
  if ( v9 )
    v10 = v8;
  return *(_DWORD *)((char *)&Cost_k__BackingField->klass + v10);
}