void WarBoardAIRoute___ctor(WarBoardAIRoute_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  WarBoardAIRoute_o *v15; // x23
  System_Collections_Generic_Dictionary_TKey__TValue__o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_Dictionary_int__object__o *v28; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  WarBoardData_o *playedStageReinforcementsList; // x0
  const MethodInfo *v34; // x3
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  int32_t v36; // w8
  const MethodInfo *v37; // x3
  WarBoardActionPointEntity_o *v38; // x0
  int32_t v39; // w8
  const MethodInfo *v40; // x3
  WarBoardActionPointEntity_o *v41; // x0
  int32_t v42; // w8
  const MethodInfo *v43; // x3
  WarBoardActionPointEntity_o *v44; // x0
  const MethodInfo *v45; // x1
  int32_t v46; // w8
  struct System_Collections_Generic_List_WarBoardRatingBase__o *v47; // x8
  int32_t size; // w2
  int32_t version; // w9
  CGThumbnailListItem_o *p_aiIds; // x20
  struct System_Int32_array *aiIds; // x24
  System_Array_o *v52; // x21
  System_RuntimeFieldHandle_o v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v57; // x26
  int v58; // w21
  WarBoardAIRoute_PiecePersonality_o *v59; // x27
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x5
  WarBoardPieceData_o *Piece; // x0
  int32_t overwriteAiId_k__BackingField; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *stageNpcMaster; // x8
  WarBoardData_o *v66; // x29
  unsigned __int64 v67; // x23
  System_Collections_Generic_List_object__o *actionTrandList; // x20
  Il2CppObject *v69; // x22
  WarBoardAIRoute_ActionTrendInfo_o *v70; // x21
  const MethodInfo *v71; // x2
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v78; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v79; // x8
  WarBoardData_o *v80; // x29
  unsigned __int64 v81; // x20
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  Il2CppObject *v84; // x1
  struct System_Int32_array *stageEntity; // x8
  _QWORD *v86; // x9
  __int64 stageNpcMaster_low; // x10
  Il2CppClass **v88; // x8
  Il2CppObject *Master_object; // x27
  Il2CppObject *v90; // x28
  struct System_Collections_Generic_List_int__o *v91; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x20
  System_Func_object__bool__o *v93; // x21
  System_Collections_Generic_Dictionary_int__object__c *klass; // x8
  WarBoardData_o *v95; // x26
  __int64 v96; // x9
  int32_t *p_offset; // x10
  __int64 v98; // x0
  __int64 v99; // x26
  __int64 v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  __int64 v104; // x8
  __int64 v105; // x9
  int *v106; // x10
  __int64 v107; // x0
  int32_t *v108; // x29
  _BOOL8 v109; // x0
  struct System_Int32_array *v110; // x8
  _BOOL8 v111; // x0
  __int64 v112; // x0
  _BOOL8 v113; // x0
  const MethodInfo *v114; // x3
  __int64 v115; // x8
  __int64 v116; // x9
  int *v117; // x10
  __int64 v118; // x0
  CGThumbnailListItem_o *p_ratingBaseIds; // x20
  struct System_Int32_array *ratingBaseIds; // x22
  System_Array_o *v121; // x21
  System_RuntimeFieldHandle_o v122; // x1
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  il2cpp_array_size_t v125; // x8
  unsigned __int64 v126; // x24
  int32_t v127; // w20
  WarBoardData_o *v128; // x25
  __int64 v129; // x26
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  struct System_Int32_array *v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  Il2CppClass **v137; // x8
  int32_t v138; // w21
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicRatingbaseCalcValue; // x20
  Il2CppObject *v140; // x25
  struct System_Int32_array *tacticalIds; // x19
  CGThumbnailListItem_o *p_tacticalIds; // x21
  System_Array_o *v143; // x20
  System_RuntimeFieldHandle_o v144; // x1
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  il2cpp_array_size_t v147; // x8
  unsigned __int64 v148; // x21
  int32_t v149; // w20
  int32_t v150; // w2
  const MethodInfo *v151; // x3
  System_Collections_Generic_List_object__o *v152; // x8
  struct System_Object_array *v153; // x9
  _QWORD *v154; // x10
  __int64 v155; // x11
  WarBoardData_o *v156; // x1
  Il2CppClass **v157; // x0
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v160; // x22
  const MethodInfo *v161; // x3
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o **p_tacticalTrendList; // [xsp+8h] [xbp-C8h]
  struct System_Collections_Generic_List_WarBoardRatingBase__o **p_ratingBaseList; // [xsp+18h] [xbp-B8h]
  struct System_Int32_array *v167; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_Dictionary_int__object__o **p_piecePersonalityDic; // [xsp+38h] [xbp-98h]
  DataManager_o *Instance; // [xsp+40h] [xbp-90h]
  WarBoardReinforcementsEntity_o *v171; // [xsp+48h] [xbp-88h] BYREF
  WarBoardStageReinforcementsEntity_o *v172; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *item; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *v174; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C40950 & 1) == 0 )
  {
    sub_1C37058(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_1C37058(&Method_BasicHelper_IndexValue_int____78110424);
    sub_1C37058(&WarBoardEvalValueSquare_CalcEval_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_WarBoardAIMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C37058(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_1C37058(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
    sub_1C37058(&WarBoardAIRoute_PiecePersonality_TypeInfo);
    sub_1C37058(&ShortestDistanceFromAllyMaster_TypeInfo);
    sub_1C37058(&ShortestDistanceFromAllyServant_TypeInfo);
    sub_1C37058(&ShortestDistanceFromEnemyMaster_TypeInfo);
    sub_1C37058(&ShortestDistanceFromEnemyServant_TypeInfo);
    sub_1C37058(&ShortestDistanceFromItem_TypeInfo);
    sub_1C37058(&ShortestDistanceFromPrioritySpace_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384);
    sub_1C37058(&Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49);
    sub_1C37058(&Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72);
    sub_1C37058(&Method_WarBoardAIRoute___ctor_b__42_0__);
    sub_1C37058(&WarBoardAiTargetCacher_TypeInfo);
    byte_4C40950 = 1;
  }
  v174 = 0;
  entity = 0;
  v172 = 0;
  item = 0;
  v171 = 0;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v3;
  p_tacticalTrendList = &this->fields.tacticalTrendList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.tacticalTrendList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v6;
  p_ratingBaseList = &this->fields.ratingBaseList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.ratingBaseList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.piecePersonalityDic, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.allRouteList, (int32_t)v12, v13, v14);
  v15 = this;
  v16 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v16,
    (const MethodInfo_349B82C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dicUniqueKeyAdvantagePieceData, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v19,
    (const MethodInfo_346BE3C *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v19;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dictionaryCreateRouteDataEvalValue, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v22,
    (const MethodInfo_349B82C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v22;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dicUniqueKeyDesignationItem, (int32_t)v22, v23, v24);
  v25 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v25,
    (const MethodInfo_349B82C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v25;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dicUniqueKeyTarget, (int32_t)v25, v26, v27);
  v28 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v28,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v28;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dicRatingbaseCalcValue, (int32_t)v28, v29, v30);
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.npcData, (int32_t)npc, v31, v32);
  if ( !npc )
    goto LABEL_154;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&npc->fields.forceId;
  this->fields.pickValue = npc->fields.pickValue;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  ActionPointEntity = WarBoardData__GetActionPointEntity(
                        playedStageReinforcementsList,
                        this->fields.forceId,
                        this->fields.groupId,
                        v34);
  v36 = ActionPointEntity ? ActionPointEntity->fields.moveCost : 0;
  this->fields.moveCost = v36;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v38 = WarBoardData__GetActionPointEntity(
          playedStageReinforcementsList,
          this->fields.forceId,
          this->fields.groupId,
          v37);
  v39 = v38 ? v38->fields.masterMoveCost : 0;
  this->fields.masterMoveCost = v39;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v41 = WarBoardData__GetActionPointEntity(
          playedStageReinforcementsList,
          this->fields.forceId,
          this->fields.groupId,
          v40);
  v42 = v41 ? v41->fields.attackCost : 0;
  this->fields.attackCost = v42;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v44 = WarBoardData__GetActionPointEntity(
          playedStageReinforcementsList,
          this->fields.forceId,
          this->fields.groupId,
          v43);
  v46 = v44 ? v44->fields.wallAttackCost : 0;
  this->fields.wallAttackCost = v46;
  WarBoardAIRoute__Clear(this, v45);
  playedStageReinforcementsList = (WarBoardData_o *)this->fields.piecePersonalityDic;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)playedStageReinforcementsList,
    (const MethodInfo_33FA70C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  v47 = *p_ratingBaseList;
  if ( !*p_ratingBaseList )
    goto LABEL_154;
  size = v47->fields._size;
  version = v47->fields._version;
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.piecePersonalityDic;
  v47->fields._size = 0;
  v47->fields._version = version + 1;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v47->fields._items, 0, size, 0);
  p_aiIds = (CGThumbnailListItem_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v52 = (System_Array_o *)sub_1C37100(int___TypeInfo, 4);
    v53.fields.value = Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v52, v53, 0);
    p_aiIds->klass = (CGThumbnailListItem_c *)v52;
    sub_1C36FFC(p_aiIds, (int32_t)v52, v54, v55);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_154;
  }
  max_length = aiIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v57 = 0;
    v167 = aiIds;
    do
    {
      if ( v57 >= (unsigned int)max_length )
        goto LABEL_155;
      v58 = aiIds->m_Items[v57];
      v59 = (WarBoardAIRoute_PiecePersonality_o *)sub_1C372A4(WarBoardAIRoute_PiecePersonality_TypeInfo);
      WarBoardAIRoute_PiecePersonality___ctor(v59, v60);
      playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !playedStageReinforcementsList )
        goto LABEL_154;
      playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
      if ( !playedStageReinforcementsList )
        goto LABEL_154;
      Piece = WarBoardData__GetPiece(
                playedStageReinforcementsList,
                v15->fields.forceId,
                v15->fields.groupId,
                v57,
                1,
                v61);
      if ( Piece
        && (overwriteAiId_k__BackingField = Piece->fields._overwriteAiId_k__BackingField,
            overwriteAiId_k__BackingField > 0)
        || (overwriteAiId_k__BackingField = v58, v58 >= 1) )
      {
        playedStageReinforcementsList = (WarBoardData_o *)Instance;
        if ( !Instance )
          goto LABEL_154;
        playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                            Instance,
                                                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !playedStageReinforcementsList )
          goto LABEL_154;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
               &entity,
               overwriteAiId_k__BackingField,
               (const MethodInfo_33A10EC *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                              Instance,
                                                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
          if ( !entity )
            goto LABEL_154;
          v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList;
          playedStageReinforcementsList = (WarBoardData_o *)WarBoardAIEntity__GetActionTrendIds(
                                                              (WarBoardAIEntity_o *)entity,
                                                              0);
          if ( !playedStageReinforcementsList )
            goto LABEL_154;
          stageNpcMaster = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)playedStageReinforcementsList->fields.stageNpcMaster;
          v66 = playedStageReinforcementsList;
          if ( (int)stageNpcMaster >= 1 )
          {
            v67 = 0;
            while ( v67 < (unsigned int)stageNpcMaster )
            {
              if ( !v64 )
                goto LABEL_154;
              playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v64,
                                                                  &v174,
                                                                  *((_DWORD *)&v66->fields.npcEntityDict + v67),
                                                                  (const MethodInfo_33A10EC *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)playedStageReinforcementsList & 1) != 0 )
              {
                if ( !v59 )
                  goto LABEL_154;
                actionTrandList = (System_Collections_Generic_List_object__o *)v59->fields.actionTrandList;
                v69 = v174;
                v70 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C372A4(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
                WarBoardAIRoute_ActionTrendInfo___ctor(v70, (WarBoardActionTrendEntity_o *)v69, v71);
                if ( !actionTrandList )
                  goto LABEL_154;
                items = actionTrandList->fields._items;
                v75 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
                ++actionTrandList->fields._version;
                if ( !items )
                  goto LABEL_154;
                v76 = actionTrandList->fields._size;
                if ( (unsigned int)v76 >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    actionTrandList,
                    (Il2CppObject *)v70,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
                }
                else
                {
                  v77 = &items->obj.klass + v76;
                  actionTrandList->fields._size = v76 + 1;
                  v77[4] = (Il2CppClass *)v70;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v77 + 4), (int32_t)v70, v72, v73);
                }
              }
              LODWORD(stageNpcMaster) = v66->fields.stageNpcMaster;
              if ( (__int64)++v67 >= (int)stageNpcMaster )
                goto LABEL_55;
            }
LABEL_155:
            sub_1C372BC(playedStageReinforcementsList);
          }
LABEL_55:
          playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                              Instance,
                                                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_154;
          v78 = (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList;
          playedStageReinforcementsList = (WarBoardData_o *)WarBoardAIEntity__GetRatingOffsetIds(
                                                              (WarBoardAIEntity_o *)entity,
                                                              0);
          aiIds = v167;
          v15 = this;
          if ( !playedStageReinforcementsList )
            goto LABEL_154;
          v79 = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)playedStageReinforcementsList->fields.stageNpcMaster;
          v80 = playedStageReinforcementsList;
          if ( (int)v79 >= 1 )
          {
            v81 = 0;
            while ( v81 < (unsigned int)v79 )
            {
              if ( !v78 )
                goto LABEL_154;
              playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v78,
                                                                  &item,
                                                                  *((_DWORD *)&v80->fields.npcEntityDict + v81),
                                                                  (const MethodInfo_33A10EC *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)playedStageReinforcementsList & 1) != 0 )
              {
                if ( !v59 )
                  goto LABEL_154;
                playedStageReinforcementsList = (WarBoardData_o *)v59->fields.ratingOffsetList;
                if ( !playedStageReinforcementsList )
                  goto LABEL_154;
                v84 = item;
                stageEntity = (struct System_Int32_array *)playedStageReinforcementsList->fields.stageEntity;
                v86 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
                ++HIDWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( !stageEntity )
                  goto LABEL_154;
                stageNpcMaster_low = SLODWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( (unsigned int)stageNpcMaster_low >= LODWORD(stageEntity->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)playedStageReinforcementsList,
                    v84,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
                }
                else
                {
                  v88 = &stageEntity->obj.klass + stageNpcMaster_low;
                  LODWORD(playedStageReinforcementsList->fields.stageNpcMaster) = stageNpcMaster_low + 1;
                  v88[4] = (Il2CppClass *)v84;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v88 + 4), (int32_t)v84, v82, v83);
                }
              }
              LODWORD(v79) = v80->fields.stageNpcMaster;
              if ( (__int64)++v81 >= (int)v79 )
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
        v57,
        (Il2CppObject *)v59,
        (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      LODWORD(max_length) = aiIds->max_length;
    }
    while ( (__int64)++v57 < (int)max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v90 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v91 = playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !v91 )
    goto LABEL_154;
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v91[1].monitor;
  v93 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(v93, (Il2CppObject *)v15, Method_WarBoardAIRoute___ctor_b__42_0__, 0);
  playedStageReinforcementsList = (WarBoardData_o *)System_Linq_Enumerable__Where_object_(
                                                      monitor,
                                                      (System_Func_TSource__bool__o *)v93,
                                                      (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  klass = (System_Collections_Generic_Dictionary_int__object__c *)playedStageReinforcementsList->klass;
  v95 = playedStageReinforcementsList;
  v96 = *(unsigned __int16 *)&playedStageReinforcementsList->klass->_2.rank;
  if ( *(_WORD *)&playedStageReinforcementsList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      --v96;
      p_offset += 4;
      if ( !v96 )
        goto LABEL_80;
    }
    v98 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_80:
    v98 = sub_1C87870(
            playedStageReinforcementsList,
            System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo,
            0);
  }
  v99 = (*(__int64 (__fastcall **)(WarBoardData_o *, _QWORD))v98)(v95, *(_QWORD *)(v98 + 8));
  if ( !v99 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v100 = *(_QWORD *)v99;
    v101 = *(unsigned __int16 *)(*(_QWORD *)v99 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v99 + 302LL) )
    {
      v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v102 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v101;
        v102 += 4;
        if ( !v101 )
          goto LABEL_87;
      }
      v103 = v100 + 16LL * *v102 + 312;
    }
    else
    {
LABEL_87:
      v103 = sub_1C87870(v99, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v99, *(_QWORD *)(v103 + 8)) & 1) == 0 )
      break;
    v104 = *(_QWORD *)v99;
    v105 = *(unsigned __int16 *)(*(_QWORD *)v99 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v99 + 302LL) )
    {
      v106 = (int *)(*(_QWORD *)(v104 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v106 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        --v105;
        v106 += 4;
        if ( !v105 )
          goto LABEL_94;
      }
      v107 = v104 + 16LL * *v106 + 312;
    }
    else
    {
LABEL_94:
      v107 = sub_1C87870(v99, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0);
    }
    v108 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v107)(v99, *(_QWORD *)(v107 + 8));
    if ( !v108 )
      sub_1C372B4(0);
    if ( !*p_piecePersonalityDic )
      sub_1C372B4(0);
    v109 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
             *p_piecePersonalityDic,
             v108[7],
             (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__);
    if ( !v109 )
    {
      v110 = v91->fields._items;
      if ( !v110 )
        sub_1C372B4(v109);
      if ( !Master_object )
        sub_1C372B4(v109);
      v111 = WarBoardStageReinforcementsMaster__TryGetEntity(
               (WarBoardStageReinforcementsMaster_o *)Master_object,
               &v172,
               (int32_t)v110->bounds,
               v108[72],
               0);
      if ( v111 )
      {
        if ( !v172 )
          sub_1C372B4(v111);
        v112 = BasicHelper__IndexValue_int_(
                 v172->fields.reinforcementsIds,
                 v108[73],
                 -1,
                 (const MethodInfo_30D6114 *)Method_BasicHelper_IndexValue_int____78110424);
        if ( !v90 )
          sub_1C372B4(v112);
        v113 = WarBoardReinforcementsMaster__TryGetEntity((WarBoardReinforcementsMaster_o *)v90, &v171, v112, 0);
        if ( v113 )
        {
          if ( !v171 )
            sub_1C372B4(v113);
          WarBoardAIRoute__AddPiecePersonalityDic(this, v171->fields.aiId, v108[7], v114);
        }
      }
    }
  }
  v115 = *(_QWORD *)v99;
  v116 = *(unsigned __int16 *)(*(_QWORD *)v99 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v99 + 302LL) )
  {
    v117 = (int *)(*(_QWORD *)(v115 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v117 - 1) != System_IDisposable_TypeInfo )
    {
      --v116;
      v117 += 4;
      if ( !v116 )
        goto LABEL_111;
    }
    v118 = v115 + 16LL * *v117 + 312;
  }
  else
  {
LABEL_111:
    v118 = sub_1C87870(v99, System_IDisposable_TypeInfo, 0);
  }
  playedStageReinforcementsList = (WarBoardData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v118)(
                                                      v99,
                                                      *(_QWORD *)(v118 + 8));
  p_ratingBaseIds = (CGThumbnailListItem_o *)&npc->fields.ratingBaseIds;
  ratingBaseIds = npc->fields.ratingBaseIds;
  if ( !ratingBaseIds )
  {
    v121 = (System_Array_o *)sub_1C37100(int___TypeInfo, 6);
    v122.fields.value = Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v121, v122, 0);
    p_ratingBaseIds->klass = (CGThumbnailListItem_c *)v121;
    sub_1C36FFC(p_ratingBaseIds, (int32_t)v121, v123, v124);
    ratingBaseIds = (struct System_Int32_array *)p_ratingBaseIds->klass;
    if ( !p_ratingBaseIds->klass )
LABEL_154:
      sub_1C372B4(playedStageReinforcementsList);
  }
  v125 = ratingBaseIds->max_length;
  if ( (int)v125 >= 1 )
  {
    v126 = 0;
    while ( 2 )
    {
      if ( v126 >= (unsigned int)v125 )
        goto LABEL_155;
      playedStageReinforcementsList = (WarBoardData_o *)Instance;
      if ( Instance )
      {
        v127 = ratingBaseIds->m_Items[v126];
        playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                            Instance,
                                                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
        if ( playedStageReinforcementsList )
        {
          playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___GetEntity(
                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
                                                              v127,
                                                              (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
          if ( playedStageReinforcementsList )
          {
            v128 = playedStageReinforcementsList;
            switch ( HIDWORD(playedStageReinforcementsList->fields.stageEntity) )
            {
              case 0:
                v129 = sub_1C372A4(ShortestDistanceFromAllyServant_TypeInfo);
                ShortestDistanceFromAllyServant___ctor((ShortestDistanceFromAllyServant_o *)v129, 0);
                if ( !v129 )
                  goto LABEL_154;
                goto LABEL_133;
              case 1:
                v129 = sub_1C372A4(ShortestDistanceFromEnemyServant_TypeInfo);
                ShortestDistanceFromEnemyServant___ctor((ShortestDistanceFromEnemyServant_o *)v129, 0);
                if ( !v129 )
                  goto LABEL_154;
                goto LABEL_133;
              case 2:
                v129 = sub_1C372A4(ShortestDistanceFromAllyMaster_TypeInfo);
                ShortestDistanceFromAllyMaster___ctor((ShortestDistanceFromAllyMaster_o *)v129, 0);
                if ( !v129 )
                  goto LABEL_154;
                goto LABEL_133;
              case 3:
                v129 = sub_1C372A4(ShortestDistanceFromEnemyMaster_TypeInfo);
                ShortestDistanceFromEnemyMaster___ctor((ShortestDistanceFromEnemyMaster_o *)v129, 0);
                if ( !v129 )
                  goto LABEL_154;
                goto LABEL_133;
              case 4:
                v129 = sub_1C372A4(ShortestDistanceFromItem_TypeInfo);
                ShortestDistanceFromItem___ctor((ShortestDistanceFromItem_o *)v129, 0);
                if ( !v129 )
                  goto LABEL_154;
                goto LABEL_133;
              case 5:
                v129 = sub_1C372A4(ShortestDistanceFromPrioritySpace_TypeInfo);
                ShortestDistanceFromPrioritySpace___ctor((ShortestDistanceFromPrioritySpace_o *)v129, 0);
                if ( !v129 )
                  goto LABEL_154;
LABEL_133:
                *(_QWORD *)(v129 + 16) = v128;
                sub_1C36FFC((CGThumbnailListItem_o *)(v129 + 16), (int32_t)v128, v130, v131);
                playedStageReinforcementsList = (WarBoardData_o *)*p_ratingBaseList;
                if ( !*p_ratingBaseList )
                  goto LABEL_154;
                v134 = (struct System_Int32_array *)playedStageReinforcementsList->fields.stageEntity;
                v135 = Method_System_Collections_Generic_List_WarBoardRatingBase__Add__;
                ++HIDWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( !v134 )
                  goto LABEL_154;
                v136 = SLODWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( (unsigned int)v136 >= LODWORD(v134->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)playedStageReinforcementsList,
                    (Il2CppObject *)v129,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
                }
                else
                {
                  v137 = &v134->obj.klass + v136;
                  LODWORD(playedStageReinforcementsList->fields.stageNpcMaster) = v136 + 1;
                  v137[4] = (Il2CppClass *)v129;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v137 + 4), v129, v132, v133);
                }
LABEL_138:
                v138 = (int32_t)v128->fields.stageEntity;
                dicRatingbaseCalcValue = this->fields.dicRatingbaseCalcValue;
                v140 = (Il2CppObject *)sub_1C372A4(WarBoardEvalValueSquare_CalcEval_TypeInfo);
                System_Object___ctor(v140, 0);
                if ( !dicRatingbaseCalcValue )
                  goto LABEL_154;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                  v138,
                  v140,
                  (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
                LODWORD(v125) = ratingBaseIds->max_length;
                if ( (__int64)++v126 >= (int)v125 )
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
    v143 = (System_Array_o *)sub_1C37100(int___TypeInfo, 5);
    v144.fields.value = Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v143, v144, 0);
    p_tacticalIds->klass = (CGThumbnailListItem_c *)v143;
    sub_1C36FFC(p_tacticalIds, (int32_t)v143, v145, v146);
    tacticalIds = (struct System_Int32_array *)p_tacticalIds->klass;
    if ( !p_tacticalIds->klass )
      goto LABEL_154;
  }
  v147 = tacticalIds->max_length;
  if ( (int)v147 >= 1 )
  {
    v148 = 0;
    while ( v148 < (unsigned int)v147 )
    {
      playedStageReinforcementsList = (WarBoardData_o *)Instance;
      if ( !Instance )
        goto LABEL_154;
      v149 = tacticalIds->m_Items[v148];
      playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                          Instance,
                                                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !playedStageReinforcementsList )
        goto LABEL_154;
      playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
                                                          v149,
                                                          (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      v152 = (System_Collections_Generic_List_object__o *)*p_tacticalTrendList;
      if ( !*p_tacticalTrendList )
        goto LABEL_154;
      v153 = v152->fields._items;
      v154 = Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__;
      ++v152->fields._version;
      if ( !v153 )
        goto LABEL_154;
      v155 = v152->fields._size;
      v156 = playedStageReinforcementsList;
      if ( (unsigned int)v155 >= LODWORD(v153->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v152,
          (Il2CppObject *)playedStageReinforcementsList,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
      }
      else
      {
        v157 = &v153->obj.klass + v155;
        v152->fields._size = v155 + 1;
        v157[4] = (Il2CppClass *)v156;
        sub_1C36FFC((CGThumbnailListItem_o *)(v157 + 4), (int32_t)v156, v150, v151);
      }
      LODWORD(v147) = tacticalIds->max_length;
      if ( (__int64)++v148 >= (int)v147 )
        goto LABEL_153;
    }
    goto LABEL_155;
  }
LABEL_153:
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v160 = (WarBoardAiTargetCacher_o *)sub_1C372A4(WarBoardAiTargetCacher_TypeInfo);
  WarBoardAiTargetCacher___ctor(v160, forceId, groupId, v161);
  this->fields.aiTargetCacher = v160;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.aiTargetCacher, (int32_t)v160, v162, v163);
}


void WarBoardAIRoute__AddPiecePersonalityDic(
        WarBoardAIRoute_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  __int64 v7; // x25
  System_Int32_array *Entity; // x0
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x21
  System_Func_T__TResult__o *v10; // x22
  Il2CppObject *Master_object; // x25
  Il2CppObject *v12; // x24
  Il2CppObject *v13; // x22
  WarBoardAIRoute_PiecePersonality_o *v14; // x21
  const MethodInfo *v15; // x1
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v17; // x25
  unsigned __int64 v18; // x29
  System_Collections_Generic_List_object__o *actionTrandList; // x26
  WarBoardActionTrendEntity_o *v20; // x28
  WarBoardAIRoute_ActionTrendInfo_o *v21; // x27
  const MethodInfo *v22; // x2
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  il2cpp_array_size_t v29; // x8
  System_Int32_array *v30; // x23
  unsigned __int64 v31; // x19
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *p_obj; // x1
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v36; // x9
  __int64 max_length_low; // x10
  il2cpp_array_size_t *v38; // x8
  __int64 v39; // [xsp+8h] [xbp-78h]
  WarBoardAIRoute_o *v40; // [xsp+10h] [xbp-70h]
  WarBoardAIEntity_o *v41; // [xsp+18h] [xbp-68h]

  if ( (byte_4C40951 & 1) == 0 )
  {
    sub_1C37058(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_WarBoardAIMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____);
    sub_1C37058(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
    sub_1C37058(&WarBoardAIRoute_PiecePersonality_TypeInfo);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__);
    sub_1C37058(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
    byte_4C40951 = 1;
  }
  v7 = sub_1C372A4(WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_37;
  *(_DWORD *)(v7 + 16) = pieceIndex;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  v10 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
  System_Func_KeyValuePair_int__object___bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    0);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__object___51331944(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v10,
         (const MethodInfo_30F4368 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  v39 = v7;
  v40 = this;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v14 = (WarBoardAIRoute_PiecePersonality_o *)sub_1C372A4(WarBoardAIRoute_PiecePersonality_TypeInfo);
  WarBoardAIRoute_PiecePersonality___ctor(v14, v15);
  if ( !Master_object )
    goto LABEL_37;
  Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   aiId,
                                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_37;
  v41 = (WarBoardAIEntity_o *)Entity;
  Entity = WarBoardAIEntity__GetActionTrendIds((WarBoardAIEntity_o *)Entity, 0);
  if ( !Entity )
    goto LABEL_37;
  max_length = Entity->max_length;
  v17 = Entity;
  if ( (int)max_length >= 1 )
  {
    v18 = 0;
    while ( v18 < (unsigned int)max_length )
    {
      if ( !v12 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                                       v17->m_Items[v18],
                                       (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v14 )
          goto LABEL_37;
        actionTrandList = (System_Collections_Generic_List_object__o *)v14->fields.actionTrandList;
        v20 = (WarBoardActionTrendEntity_o *)Entity;
        v21 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C372A4(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v21, v20, v22);
        if ( !actionTrandList )
          goto LABEL_37;
        items = actionTrandList->fields._items;
        v26 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++actionTrandList->fields._version;
        if ( !items )
          goto LABEL_37;
        size = actionTrandList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            actionTrandList,
            (Il2CppObject *)v21,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          actionTrandList->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v21;
          sub_1C36FFC((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v21, v23, v24);
        }
      }
      LODWORD(max_length) = v17->max_length;
      if ( (__int64)++v18 >= (int)max_length )
        goto LABEL_22;
    }
LABEL_38:
    sub_1C372BC(Entity);
  }
LABEL_22:
  Entity = WarBoardAIEntity__GetRatingOffsetIds(v41, 0);
  if ( !Entity )
    goto LABEL_37;
  v29 = Entity->max_length;
  v30 = Entity;
  if ( (int)v29 >= 1 )
  {
    v31 = 0;
    while ( v31 < (unsigned int)v29 )
    {
      if ( !v13 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                                       v30->m_Items[v31],
                                       (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v14 )
          goto LABEL_37;
        p_obj = &Entity->obj;
        Entity = (System_Int32_array *)v14->fields.ratingOffsetList;
        if ( !Entity )
          goto LABEL_37;
        bounds = Entity->bounds;
        v36 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
        ++HIDWORD(Entity->max_length);
        if ( !bounds )
          goto LABEL_37;
        max_length_low = SLODWORD(Entity->max_length);
        if ( (unsigned int)max_length_low >= bounds[1].lower_bound )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Entity,
            p_obj,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &bounds->length + max_length_low;
          LODWORD(Entity->max_length) = max_length_low + 1;
          v38[4] = (il2cpp_array_size_t)p_obj;
          sub_1C36FFC((CGThumbnailListItem_o *)(v38 + 4), (int32_t)p_obj, v32, v33);
        }
      }
      LODWORD(v29) = v30->max_length;
      if ( (__int64)++v31 >= (int)v29 )
        goto LABEL_35;
    }
    goto LABEL_38;
  }
LABEL_35:
  Entity = (System_Int32_array *)v40->fields.piecePersonalityDic;
  if ( !Entity )
LABEL_37:
    sub_1C372B4(Entity);
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)Entity,
    *(_DWORD *)(v39 + 16),
    (Il2CppObject *)v14,
    (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
}


void WarBoardAIRoute__BeforeCreateRouteData(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *Instance; // x0
  _QWORD *v3; // x19
  System_Collections_Generic_List_object__o *v4; // x22
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x24
  int v10; // w8
  unsigned int v11; // w25
  __int64 v12; // x23
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  WarBoardAIRoute_o *v17; // x10
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  System_Object_array *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Object_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct WarBoardSquareData_array *v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct WarBoardItemData_array *v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct WarBoardTreasureData_array *v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct WarBoardWallData_array *v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_List_object__o *v44; // x25
  int32_t forceId; // w19
  int32_t groupId; // w20
  WarBoardAIRoute_AIRouteMasterData_o *v47; // x21
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Collections_Generic_Dictionary_int__uint__o *v51; // x19
  struct System_Collections_Generic_Dictionary_int__uint__o **p_placePieceData; // x24
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  struct WarBoardPieceData_array *allAllyPiece; // x19
  int max_length; // w8
  unsigned int v58; // w20
  WarBoardPieceData_o *v59; // x21
  const MethodInfo *v60; // x3
  int32_t forceId_k__BackingField; // w8
  int32_t v62; // w9
  int32_t v63; // w1
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v68; // x20
  __int64 v69; // x9
  int *p_offset; // x10
  __int64 v71; // x0
  __int64 v72; // x22
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  const MethodInfo *v77; // x1
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v82; // x0
  const MethodInfo *v83; // x1
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x20
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  int v86; // w8
  unsigned int v87; // w9
  WarBoardActionTrendConditionEntity_o *v88; // x25
  struct System_Int32_array *conditionTypes; // x23
  il2cpp_array_size_t v90; // x8
  unsigned __int64 v91; // x28
  int32_t v92; // w26
  __int64 v93; // x29
  __int64 v94; // x0
  __int64 ConditionType; // x0
  int32_t v96; // w1
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexKeyItemData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_object__bool__o *v99; // x21
  Il2CppObject *v100; // x2
  System_Collections_Generic_Dictionary_int__object__o *v101; // x0
  int32_t v102; // w19
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x0
  const MethodInfo *v105; // x2
  TargetDetector_o *DetectorByTrendKey; // x0
  System_Func_T__TResult__o *v107; // x19
  WarBoardAiTargetCacher_o *v108; // x19
  int64_t v109; // x0
  const MethodInfo *v110; // x4
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicIndividualityPutSqareIndex; // x21
  int64_t v112; // x19
  int64_t v113; // x24
  __int64 v114; // x22
  __int64 v115; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x21
  WarBoardAIRoute_o *v117; // x0
  const MethodInfo *v118; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicSquarePutSqareIndex; // x19
  int64_t v120; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_object__bool__o *v122; // x21
  WarBoardActionTrendConditionEntity_array *v123; // x29
  int64_t v124; // x19
  __int64 v125; // x21
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v128; // x19
  int64_t v129; // x0
  __int64 v130; // x8
  __int64 v131; // x9
  int *v132; // x10
  __int64 v133; // x0
  WarBoardAiTargetCacher_o *v134; // x20
  WarBoardAIRoute___c_c *v135; // x8
  System_Func_object__bool__o *_9__45_0; // x19
  Il2CppObject *v137; // x21
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v141; // x0
  const MethodInfo *v142; // x2
  WarBoardAIRoute_AdvantagePieceData_o *v143; // x20
  const MethodInfo *v144; // x1
  struct WarBoardPieceData_array *v145; // x21
  int v146; // w8
  int32_t v147; // w24
  unsigned int v148; // w22
  Il2CppClass **v149; // x8
  Il2CppClass *v150; // x25
  int32_t ClassId; // w19
  float Magnification; // s10
  float v153; // s11
  float v154; // s8
  float v155; // s9
  const MethodInfo *v156; // x1
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+10h] [xbp-110h]
  struct WarBoardAIRoute_AIRouteMasterData_o **p_aiRouteMasterData; // [xsp+18h] [xbp-108h]
  struct WarBoardPieceData_array *v159; // [xsp+20h] [xbp-100h]
  unsigned int v160; // [xsp+34h] [xbp-ECh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-E8h]
  unsigned int v162; // [xsp+44h] [xbp-DCh]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+48h] [xbp-D8h]
  __int64 v165; // [xsp+68h] [xbp-B8h]
  System_Collections_Generic_List_IWarBoardObjectData__o *objectList; // [xsp+70h] [xbp-B0h]
  WarBoardAIRoute_DesignationItemData_o *v167; // [xsp+78h] [xbp-A8h]
  WarBoardAIRoute_PutSquareTarget_o *v168; // [xsp+80h] [xbp-A0h]
  bool notSquareTarget; // [xsp+88h] [xbp-98h] BYREF
  int32_t condType; // [xsp+8Ch] [xbp-94h] BYREF
  Il2CppObject *value; // [xsp+98h] [xbp-88h] BYREF

  if ( (byte_4C40953 & 1) == 0 )
  {
    sub_1C37058(&WarBoardAIRoute_AIRouteMasterData_TypeInfo);
    sub_1C37058(&WarBoardAIRoute_AdvantagePieceData_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&WarBoardAIRoute_DesignationItemData_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__uint__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
    sub_1C37058(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_1C37058(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
    sub_1C37058(&System_Func_WarBoardItemData__bool__TypeInfo);
    sub_1C37058(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
    sub_1C37058(&WarBoardAIRoute_PutSquareTarget_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&SvtClassAttri_TypeInfo);
    sub_1C37058(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_1C37058(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__);
    sub_1C37058(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
    sub_1C37058(&WarBoardAIRoute___c_TypeInfo);
    sub_1C37058(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__);
    byte_4C40953 = 1;
  }
  value = 0;
  condType = 0;
  notSquareTarget = 0;
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_225;
  v3 = *(_QWORD **)&Instance[5].fields._freeCount;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v3 )
    goto LABEL_225;
  v9 = v3[6];
  if ( !v9 )
    goto LABEL_225;
  v10 = *(_DWORD *)(v9 + 24);
  if ( v10 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v10 )
LABEL_226:
        sub_1C372BC(Instance);
      if ( !v6 )
        break;
      v12 = *(_QWORD *)(v9 + 8LL * (int)v11 + 32);
      items = v6->fields._items;
      v14 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v6->fields._version;
      if ( !items )
        break;
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          (Il2CppObject *)v12,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), v12, v7, v8);
      }
      if ( !v12 )
        break;
      if ( !*(_BYTE *)(v12 + 60) )
      {
        v17 = this;
        if ( *(_DWORD *)(v12 + 20) == this->fields.forceId && *(_DWORD *)(v12 + 24) == this->fields.groupId )
        {
          if ( !v4 )
            break;
          v18 = v4->fields._items;
          v19 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v4->fields._version;
          if ( !v18 )
            break;
          v20 = v4->fields._size;
          if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v12,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &v18->obj.klass + v20;
            v4->fields._size = v20 + 1;
            v21[4] = (Il2CppClass *)v12;
            sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 4), v12, v7, v8);
          }
          v17 = this;
        }
        if ( *(_DWORD *)(v12 + 20) != v17->fields.forceId )
        {
          if ( !v5 )
            break;
          v22 = v5->fields._items;
          v23 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v5->fields._version;
          if ( !v22 )
            break;
          v24 = v5->fields._size;
          if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v12,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &v22->obj.klass + v24;
            v5->fields._size = v24 + 1;
            v25[4] = (Il2CppClass *)v12;
            sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 4), v12, v7, v8);
          }
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                (WarBoardPieceData_o *)v12,
                                                                                0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            this->fields.enemyMasterSquareIndex = *(_DWORD *)(v12 + 64);
        }
      }
      v10 = *(_DWORD *)(v9 + 24);
      if ( (int)++v11 >= v10 )
        goto LABEL_33;
    }
LABEL_225:
    sub_1C372B4(Instance);
  }
LABEL_33:
  if ( !v4 )
    goto LABEL_225;
  v26 = System_Collections_Generic_List_object___ToArray(
          v4,
          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allAllyPiece = (struct WarBoardPieceData_array *)v26;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.allAllyPiece, (int32_t)v26, v27, v28);
  if ( !v5 )
    goto LABEL_225;
  v29 = System_Collections_Generic_List_object___ToArray(
          v5,
          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v29;
  p_allEnemyPiece = &this->fields.allEnemyPiece;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.allEnemyPiece, (int32_t)v29, v30, v31);
  v32 = (struct WarBoardSquareData_array *)v3[7];
  this->fields.allSquare = v32;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.allSquare, (int32_t)v32, v33, v34);
  v35 = (struct WarBoardItemData_array *)v3[9];
  this->fields.allItemData = v35;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.allItemData, (int32_t)v35, v36, v37);
  v38 = (struct WarBoardTreasureData_array *)v3[10];
  this->fields.allTreasureData = v38;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.allTreasureData, (int32_t)v38, v39, v40);
  v41 = (struct WarBoardWallData_array *)v3[11];
  this->fields.allWallData = v41;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.allWallData, (int32_t)v41, v42, v43);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictionaryCreateRouteDataEvalValue;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_object__float___Clear(
    Instance,
    (const MethodInfo_346C97C *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_349C388 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_349C388 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_349C388 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_225;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v44 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v44 )
    goto LABEL_225;
  System_Collections_Generic_List_object___AddRange(
    v44,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allItemData,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v44,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allTreasureData,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v44,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWallData,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  objectList = (System_Collections_Generic_List_IWarBoardObjectData__o *)v44;
  System_Collections_Generic_List_object___AddRange(
    v44,
    (System_Collections_Generic_IEnumerable_T__o *)v6,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v47 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_1C372A4(WarBoardAIRoute_AIRouteMasterData_TypeInfo);
  WarBoardAIRoute_AIRouteMasterData___ctor(v47, forceId, groupId, v48);
  this->fields.aiRouteMasterData = v47;
  p_aiRouteMasterData = &this->fields.aiRouteMasterData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.aiRouteMasterData, (int32_t)v47, v49, v50);
  v51 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v51,
    (const MethodInfo_341E01C *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  this->fields.placePieceData = v51;
  p_placePieceData = &this->fields.placePieceData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.placePieceData, (int32_t)v51, v53, v54);
  allAllyPiece = this->fields.allAllyPiece;
  if ( !allAllyPiece )
    goto LABEL_225;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v58 = 0;
    v159 = this->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v58 >= max_length )
        goto LABEL_226;
      v59 = allAllyPiece->m_Items[v58];
      if ( !v59 )
        goto LABEL_225;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_225;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
                                                                            v59->fields._nowSquareIndex_k__BackingField,
                                                                            (const MethodInfo_341EBCC *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_201;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      pieceData = v59;
      if ( !*p_placePieceData )
        goto LABEL_225;
      System_Collections_Generic_Dictionary_int__uint___Add(
        (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
        v59->fields._nowSquareIndex_k__BackingField,
        v59->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_341E9E0 *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
      forceId_k__BackingField = v59->fields._forceId_k__BackingField;
      v62 = this->fields.forceId;
      if ( forceId_k__BackingField != v62 )
        goto LABEL_57;
      if ( v59->fields._groupId_k__BackingField == this->fields.groupId )
        break;
LABEL_58:
      if ( v59->fields._groupId_k__BackingField == this->fields.groupId )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
        if ( !*p_aiRouteMasterData )
          goto LABEL_225;
        v63 = 2;
        goto LABEL_61;
      }
LABEL_62:
      v167 = (WarBoardAIRoute_DesignationItemData_o *)sub_1C372A4(WarBoardAIRoute_DesignationItemData_TypeInfo);
      WarBoardAIRoute_DesignationItemData___ctor(v167, v64);
      v168 = (WarBoardAIRoute_PutSquareTarget_o *)sub_1C372A4(WarBoardAIRoute_PutSquareTarget_TypeInfo);
      WarBoardAIRoute_PutSquareTarget___ctor(v168, v65);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.piecePersonalityDic;
      if ( !Instance )
        goto LABEL_225;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                                                            v59->fields._index_k__BackingField,
                                                                            &value,
                                                                            (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)value;
        v160 = v58;
        if ( !value )
          goto LABEL_225;
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
                                                                              (WarBoardAIRoute_PiecePersonality_o *)value,
                                                                              v66);
        if ( !Instance )
          goto LABEL_225;
        klass = Instance->klass;
        v68 = Instance;
        v69 = *(unsigned __int16 *)&Instance->klass->_2.rank;
        if ( *(_WORD *)&Instance->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
          {
            --v69;
            p_offset += 4;
            if ( !v69 )
              goto LABEL_70;
          }
          v71 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_70:
          v71 = sub_1C87870(
                  Instance,
                  System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                  0);
        }
        v72 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v71)(
                v68,
                *(_QWORD *)(v71 + 8));
        v165 = v72;
        if ( !v72 )
          sub_1C372B4(0);
        while ( 1 )
        {
LABEL_73:
          v73 = *(_QWORD *)v72;
          v74 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
          {
            v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v75 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v74;
              v75 += 4;
              if ( !v74 )
                goto LABEL_77;
            }
            v76 = v73 + 16LL * *v75 + 312;
          }
          else
          {
LABEL_77:
            v76 = sub_1C87870(v72, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v76)(v72, *(_QWORD *)(v76 + 8)) & 1) == 0 )
            break;
          v78 = *(_QWORD *)v72;
          v79 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
          {
            v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__c **)v80 - 1) != System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
            {
              --v79;
              v80 += 4;
              if ( !v79 )
                goto LABEL_84;
            }
            v81 = v78 + 16LL * *v80 + 312;
          }
          else
          {
LABEL_84:
            v81 = sub_1C87870(v72, System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo, 0);
          }
          v82 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v81)(
                                                       v72,
                                                       *(_QWORD *)(v81 + 8));
          if ( !v82 )
            sub_1C372B4(0);
          Entity_k__BackingField = v82->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v82, v83);
          if ( !ConditionEntityArray )
            sub_1C372B4(0);
          v86 = ConditionEntityArray->max_length;
          if ( v86 >= 1 )
          {
            v87 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v87 >= v86 )
                sub_1C372BC(ConditionEntityArray);
              v88 = ConditionEntityArray->m_Items[v87];
              if ( !v88 )
                sub_1C372B4(ConditionEntityArray);
              conditionTypes = v88->fields.conditionTypes;
              if ( !conditionTypes )
                sub_1C372B4(ConditionEntityArray);
              v90 = conditionTypes->max_length;
              v162 = v87;
              if ( (int)v90 >= 1 )
                break;
LABEL_137:
              ConditionEntityArray = condEntityArray;
              v86 = condEntityArray->max_length;
              v87 = v162 + 1;
              if ( (int)(v162 + 1) >= v86 )
                goto LABEL_73;
            }
            v91 = 0;
            while ( 2 )
            {
              if ( v91 >= (unsigned int)v90 )
                sub_1C372BC(ConditionEntityArray);
              v92 = conditionTypes->m_Items[v91];
              v93 = sub_1C372A4(WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v93, 0);
              if ( !v93 )
                sub_1C372B4(v94);
              *(_DWORD *)(v93 + 16) = -1;
              ConditionType = WarBoardActionTrendConditionEntity__GetConditionType(v88, v92, 0);
              if ( (int)ConditionType <= 39 )
              {
                if ( (_DWORD)ConditionType == 23 || (_DWORD)ConditionType == 24 )
                  goto LABEL_104;
LABEL_136:
                v96 = *(_DWORD *)(v93 + 16);
              }
              else
              {
                if ( (_DWORD)ConditionType != 40 && (_DWORD)ConditionType != 41 && (_DWORD)ConditionType != 42 )
                  goto LABEL_136;
LABEL_104:
                v96 = v88->fields.value;
                *(_DWORD *)(v93 + 16) = v96;
              }
              if ( v96 != -1 )
              {
                if ( !v167 )
                  sub_1C372B4(ConditionType);
                dicSquareIndexKeyItemData = (System_Collections_Generic_Dictionary_int__object__o *)v167->fields.dicSquareIndexKeyItemData;
                if ( !dicSquareIndexKeyItemData )
                  sub_1C372B4(0);
                if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                        dicSquareIndexKeyItemData,
                        v96,
                        (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__) )
                {
                  allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allItemData;
                  v99 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardItemData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v99,
                    (Il2CppObject *)v93,
                    Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                    0);
                  v100 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
                           allItemData,
                           (System_Func_TSource__bool__o *)v99,
                           (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                  if ( v100 )
                  {
                    v101 = (System_Collections_Generic_Dictionary_int__object__o *)v167->fields.dicSquareIndexKeyItemData;
                    if ( !v101 )
                      sub_1C372B4(0);
                    System_Collections_Generic_Dictionary_int__object___Add(
                      v101,
                      *(_DWORD *)(v93 + 16),
                      v100,
                      (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                  }
                }
              }
              *(_DWORD *)(v93 + 16) = -1;
              ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)WarBoardActionTrendConditionEntity__GetConditionType(
                                                                                   v88,
                                                                                   v92,
                                                                                   0);
              if ( (_DWORD)ConditionEntityArray == 74 || (_DWORD)ConditionEntityArray == 75 )
              {
                v102 = v88->fields.value;
                *(_DWORD *)(v93 + 16) = v102;
              }
              else
              {
                if ( (unsigned int)((_DWORD)ConditionEntityArray - 127) <= 1 )
                {
                  if ( !Entity_k__BackingField )
                    sub_1C372B4(ConditionEntityArray);
                  aiTargetCacher = this->fields.aiTargetCacher;
                  TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  if ( !aiTargetCacher )
                    sub_1C372B4(TrendKey);
                  DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(aiTargetCacher, TrendKey, v105);
                  if ( !DetectorByTrendKey )
                  {
                    v107 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
                    System_Func_Int32Enum__bool____ctor(
                      v107,
                      0,
                      Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                      0);
                    WarBoardActionTrendConditionMaster__HasMatchCondition(
                      condEntityArray,
                      (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v107,
                      &condType,
                      0);
                    v108 = this->fields.aiTargetCacher;
                    v109 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                    if ( !v108 )
                      sub_1C372B4(v109);
                    WarBoardAiTargetCacher__Register(v108, v109, v88, condType, v110);
                  }
                  if ( !v168 )
                    sub_1C372B4(DetectorByTrendKey);
                  dicIndividualityPutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v168->fields.dicIndividualityPutSqareIndex;
                  v112 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  v113 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  v114 = sub_1C372A4(WarBoardAIRoute_TargetData_TypeInfo);
                  *(_DWORD *)(v114 + 64) = 2;
                  System_Object___ctor((Il2CppObject *)v114, 0);
                  *(_QWORD *)(v114 + 104) = v113;
                  *(_DWORD *)(v114 + 112) = v92;
                  if ( !dicIndividualityPutSqareIndex )
                    sub_1C372B4(v115);
                  System_Collections_Generic_Dictionary_long__object___set_Item(
                    dicIndividualityPutSqareIndex,
                    v112,
                    (Il2CppObject *)v114,
                    (const MethodInfo_343F3D8 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                }
                v102 = *(_DWORD *)(v93 + 16);
                v72 = v165;
              }
              if ( v102 != -1 )
              {
                if ( !v168 )
                  sub_1C372B4(ConditionEntityArray);
                if ( !Entity_k__BackingField )
                  sub_1C372B4(ConditionEntityArray);
                dicObjectPutSquareIndex = v168->fields.dicObjectPutSquareIndex;
                v117 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                WarBoardAIRoute__RegisterTargetObjectToDic(
                  v117,
                  dicObjectPutSquareIndex,
                  objectList,
                  v102,
                  (int64_t)v117,
                  v92,
                  &notSquareTarget,
                  v118);
                if ( !notSquareTarget )
                {
                  dicSquarePutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v168->fields.dicSquarePutSqareIndex;
                  v120 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  if ( !dicSquarePutSqareIndex )
                    sub_1C372B4(v120);
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__object___ContainsKey(
                                                                                       dicSquarePutSqareIndex,
                                                                                       v120,
                                                                                       (const MethodInfo_343F5E0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allSquare;
                    v122 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardSquareData__bool__TypeInfo);
                    System_Func_object__bool____ctor(
                      v122,
                      (Il2CppObject *)v93,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                      0);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_object__51451648(
                                                                                         allSquare,
                                                                                         (System_Func_TSource__bool__o *)v122,
                                                                                         (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                    v123 = ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v124 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                      v125 = sub_1C372A4(WarBoardAIRoute_TargetData_TypeInfo);
                      *(_DWORD *)(v125 + 64) = 2;
                      System_Object___ctor((Il2CppObject *)v125, 0);
                      *(_QWORD *)(v125 + 48) = v123;
                      *(_QWORD *)(v125 + 104) = v124;
                      *(_DWORD *)(v125 + 112) = v92;
                      sub_1C36FFC((CGThumbnailListItem_o *)(v125 + 48), (int32_t)v123, v126, v127);
                      v128 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v168->fields.dicSquarePutSqareIndex;
                      v129 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                      if ( !v128 )
                        sub_1C372B4(v129);
                      System_Collections_Generic_Dictionary_long__object___Add(
                        v128,
                        v129,
                        (Il2CppObject *)v125,
                        (const MethodInfo_343F3EC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                    }
                  }
                }
              }
              LODWORD(v90) = conditionTypes->max_length;
              if ( (__int64)++v91 >= (int)v90 )
                goto LABEL_137;
              continue;
            }
          }
        }
        if ( v72 )
        {
          v130 = *(_QWORD *)v72;
          v131 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
          {
            v132 = (int *)(*(_QWORD *)(v130 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v132 - 1) != System_IDisposable_TypeInfo )
            {
              --v131;
              v132 += 4;
              if ( !v131 )
                goto LABEL_144;
            }
            v133 = v130 + 16LL * *v132 + 312;
          }
          else
          {
LABEL_144:
            v133 = sub_1C87870(v72, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v133)(v72, *(_QWORD *)(v133 + 8));
        }
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.aiTargetCacher;
        if ( !Instance )
          goto LABEL_225;
        WarBoardAiTargetCacher__ClearTargetObject((WarBoardAiTargetCacher_o *)Instance, v77);
        v134 = this->fields.aiTargetCacher;
        v135 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v135 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__45_0 = (System_Func_object__bool__o *)v135->static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !v135->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v135);
            v135 = WarBoardAIRoute___c_TypeInfo;
          }
          v137 = (Il2CppObject *)v135->static_fields->__9;
          _9__45_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__45_0,
            v137,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            0);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v139, v140);
        }
        v141 = System_Linq_Enumerable__Where_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_object_(
                                                                              v141,
                                                                              (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v134 )
          goto LABEL_225;
        WarBoardAiTargetCacher__AggregateTargetObject(v134, (IWarBoardObjectData_array *)Instance, v142);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
        if ( !Instance )
          goto LABEL_225;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v167,
          (const MethodInfo_349C200 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
        allAllyPiece = v159;
        p_placePieceData = &this->fields.placePieceData;
        v58 = v160;
        if ( !Instance )
          goto LABEL_225;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v168,
          (const MethodInfo_349C200 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isServant(
                                                                              pieceData,
                                                                              0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v143 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_1C372A4(WarBoardAIRoute_AdvantagePieceData_TypeInfo);
          WarBoardAIRoute_AdvantagePieceData___ctor(v143, v144);
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pieceData->fields._battleServant_k__BackingField;
          if ( !Instance )
            goto LABEL_225;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleServantData__getClassId(
                                                                                (BattleServantData_o *)Instance,
                                                                                0,
                                                                                0);
          v145 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_225;
          v146 = v145->max_length;
          if ( v146 >= 1 )
          {
            v147 = (int)Instance;
            v148 = 0;
            while ( 2 )
            {
              if ( v148 >= v146 )
                goto LABEL_226;
              v149 = &v145->obj.klass + (int)v148;
              v150 = v149[4];
              if ( !v150 )
                goto LABEL_225;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                    (WarBoardPieceData_o *)v149[4],
                                                                                    0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_198;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v150->_1.fields;
              if ( !Instance )
                goto LABEL_225;
              ClassId = BattleServantData__getClassId((BattleServantData_o *)Instance, 0, 0);
              if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
              Magnification = SvtClassAttri__getMagnification(v147, ClassId, 0);
              v153 = SvtClassAttri__getMagnification(ClassId, v147, 0);
              v154 = SvtClassAttri__getMagnification(v147, ClassId, 0);
              v155 = SvtClassAttri__getMagnification(ClassId, v147, 0);
              if ( Magnification <= 1.0 )
              {
                if ( v153 >= 1.0 )
                  goto LABEL_177;
                if ( !v143 )
                  goto LABEL_225;
              }
              else
              {
                if ( !v143 )
                  goto LABEL_225;
                Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v143->fields.dicAttackAdvantageServant;
                if ( !Instance )
                  goto LABEL_225;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                  (int32_t)v150->_1.element_class,
                  (Il2CppObject *)v150,
                  (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                v143->fields.flagNow |= 0x4000uLL;
                if ( v153 >= 1.0 )
                {
LABEL_177:
                  if ( v154 >= 1.0 )
                  {
                    if ( v155 > 1.0 )
                    {
                      if ( !v143 )
                        goto LABEL_225;
                      goto LABEL_184;
                    }
                  }
                  else
                  {
                    if ( !v143 )
                      goto LABEL_225;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v143->fields.dicAttackDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_225;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v150->_1.element_class,
                      (Il2CppObject *)v150,
                      (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v143->fields.flagNow |= 0x8000uLL;
                    if ( v155 <= 1.0 )
                      goto LABEL_186;
LABEL_184:
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v143->fields.dicDefenseDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_225;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v150->_1.element_class,
                      (Il2CppObject *)v150,
                      (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v143->fields.flagNow |= 0x20000uLL;
                  }
LABEL_186:
                  if ( Magnification <= 1.0 || v153 >= 1.0 )
                  {
                    if ( v154 < 1.0 && v155 > 1.0 )
                    {
                      if ( !v143 )
                        goto LABEL_225;
LABEL_196:
                      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v143->fields.dicClassDisAdvantageServant;
                      if ( !Instance )
                        goto LABEL_225;
                      System_Collections_Generic_Dictionary_int__object___Add(
                        (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                        (int32_t)v150->_1.element_class,
                        (Il2CppObject *)v150,
                        (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                      v143->fields.flagNow |= 0x2000uLL;
                    }
                  }
                  else
                  {
                    if ( !v143 )
                      goto LABEL_225;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v143->fields.dicClassAdvantageServant;
                    if ( !Instance )
                      goto LABEL_225;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v150->_1.element_class,
                      (Il2CppObject *)v150,
                      (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v143->fields.flagNow |= 0x1000uLL;
                    if ( v154 < 1.0 && v155 > 1.0 )
                      goto LABEL_196;
                  }
LABEL_198:
                  v146 = v145->max_length;
                  if ( (int)++v148 >= v146 )
                    goto LABEL_199;
                  continue;
                }
              }
              break;
            }
            Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v143->fields.dicDefenseAdvantageServant;
            if ( !Instance )
              goto LABEL_225;
            System_Collections_Generic_Dictionary_int__object___Add(
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              (int32_t)v150->_1.element_class,
              (Il2CppObject *)v150,
              (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
            v143->fields.flagNow |= 0x10000uLL;
            goto LABEL_177;
          }
LABEL_199:
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
          if ( !Instance )
            goto LABEL_225;
          System_Collections_Generic_Dictionary_uint__object___Add(
            Instance,
            pieceData->fields._uniqueIndex_k__BackingField,
            (Il2CppObject *)v143,
            (const MethodInfo_349C200 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          allAllyPiece = v159;
          p_placePieceData = &this->fields.placePieceData;
          v58 = v160;
        }
      }
LABEL_201:
      max_length = allAllyPiece->max_length;
      if ( (int)++v58 >= max_length )
        goto LABEL_223;
    }
    if ( WarBoardPieceData__get_isMaster(v59, 0) )
    {
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_225;
      v63 = 0;
LABEL_61:
      WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        (WarBoardAIRoute_AIRouteMasterData_o *)Instance,
        v63,
        v59,
        v60);
      goto LABEL_62;
    }
    forceId_k__BackingField = v59->fields._forceId_k__BackingField;
    v62 = this->fields.forceId;
LABEL_57:
    if ( forceId_k__BackingField != v62 )
      goto LABEL_62;
    goto LABEL_58;
  }
LABEL_223:
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
  if ( !*p_aiRouteMasterData )
    goto LABEL_225;
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData((WarBoardAIRoute_AIRouteMasterData_o *)Instance, 1, 0, v55);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(this, v156);
}


int32_t WarBoardAIRoute__CalcurateDistanceType(int32_t newDistance, int32_t oldDistance, const MethodInfo *method)
{
  if ( newDistance == oldDistance )
    return 2;
  if ( newDistance < oldDistance )
    return 1;
  return 3;
}


bool WarBoardAIRoute__CanAcquireItem(
        WarBoardAIRoute_o *this,
        int32_t targetSquare,
        System_Collections_Generic_List_int__o *alreadyGetItemList,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1
  WarBoardItemData_o *Item; // x0

  if ( (byte_4C4095D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    this = (WarBoardAIRoute_o *)sub_1C37058(&WarBoardAIManager_TypeInfo);
    byte_4C4095D = 1;
  }
  if ( !alreadyGetItemList )
    sub_1C372B4(this);
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__) )
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
    sub_1C372B4(this);
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
  if ( (byte_4C4094F & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C37058(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__);
    byte_4C4094F = 1;
  }
  allRouteList = v2->fields.allRouteList;
  if ( !allRouteList )
    sub_1C372B4(this);
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
  if ( (byte_4C4095C & 1) == 0 )
  {
    sub_1C37058(&AStarSearch_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    dicPieceList = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    byte_4C4095C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !v6 )
    sub_1C372B4(dicPieceList);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v7 = 3;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v13,
            (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v13.fields._current.fields.key;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(0, actionIndex, key, 0, 0, v8);
    v11 = System_Linq_Enumerable__Count_int_(
            v10,
            (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
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
    (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  return v7;
}


void WarBoardAIRoute__CreateOutOfWarningAreaToDistance(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v2; // x21
  struct System_Collections_Generic_Dictionary_int__int__o **p_dicOutOfWarningAreaRange; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_int__int__o *IsFlag; // x0
  struct WarBoardSquareData_array *allSquare; // x25
  int max_length; // w8
  int v9; // w26
  Il2CppClass **v10; // x8
  Il2CppClass *v11; // x21
  struct WarBoardSquareData_array *v12; // x29
  int v13; // w8
  unsigned int v14; // w20
  int v15; // w22
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x23
  const MethodInfo *v18; // x5
  int32_t name; // w24
  int32_t v20; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  int32_t v23; // w1
  const MethodInfo_33F1ACC *v24; // x3
  int32_t v25; // w2
  struct System_Collections_Generic_Dictionary_int__int__o **v26; // [xsp+0h] [xbp-70h]

  if ( (byte_4C40968 & 1) == 0 )
  {
    sub_1C37058(&AStarSearch_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_int___);
    byte_4C40968 = 1;
  }
  v2 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v2,
    (const MethodInfo_33F1108 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v2;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dicOutOfWarningAreaRange, (int32_t)v2, v4, v5);
  allSquare = this->fields.allSquare;
  if ( !allSquare )
LABEL_33:
    sub_1C372B4(IsFlag);
  max_length = allSquare->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    v26 = &this->fields.dicOutOfWarningAreaRange;
    do
    {
      if ( v9 >= (unsigned int)max_length )
        goto LABEL_34;
      v10 = &allSquare->obj.klass + v9;
      v11 = v10[4];
      if ( !v11 )
        goto LABEL_33;
      IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                      (WarBoardSquareData_o *)v10[4],
                                                                      1,
                                                                      0);
      if ( ((unsigned __int8)IsFlag & 1) != 0 )
      {
        v12 = this->fields.allSquare;
        if ( !v12 )
          goto LABEL_33;
        v13 = v12->max_length;
        if ( v13 >= 1 )
        {
          v14 = 0;
          v15 = -1;
          while ( v14 < v13 )
          {
            v16 = &v12->obj.klass + (int)v14;
            v17 = v16[4];
            if ( !v17 )
              goto LABEL_33;
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                            (WarBoardSquareData_o *)v16[4],
                                                                            1,
                                                                            0);
            if ( ((unsigned __int8)IsFlag & 1) != 0 )
              goto LABEL_37;
            name = (int32_t)v11->_1.name;
            v20 = (int32_t)v17->_1.name;
            if ( !AStarSearch_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
            v21 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(0, name, v20, 0, 0, v18);
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__Count_int_(
                                                                            v21,
                                                                            (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
            if ( v15 > (int)IsFlag - 1 || v15 == -1 )
              v15 = (_DWORD)IsFlag - 1;
            if ( v15 >= 2 )
            {
LABEL_37:
              v13 = v12->max_length;
              if ( (int)++v14 < v13 )
                continue;
            }
            goto LABEL_29;
          }
LABEL_34:
          sub_1C372BC(IsFlag);
        }
        v15 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        IsFlag = *v26;
        if ( !*v26 )
          goto LABEL_33;
        v23 = (int32_t)v11->_1.name;
        v24 = (const MethodInfo_33F1ACC *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v25 = v15;
      }
      else
      {
        IsFlag = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v23 = (int32_t)v11->_1.name;
        v24 = (const MethodInfo_33F1ACC *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v25 = 0;
      }
      System_Collections_Generic_Dictionary_int__int___Add(IsFlag, v23, v25, v24);
      max_length = allSquare->max_length;
      ++v9;
    }
    while ( v9 < max_length );
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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C40955 & 1) == 0 )
  {
    sub_1C37058(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
    byte_4C40955 = 1;
  }
  v9 = sub_1C372A4(WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 56), (int32_t)piecePlaceData, v12, v13);
  *(_DWORD *)(v9 + 40) = searchCount;
  *(_QWORD *)(v9 + 48) = routeDataList;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)routeDataList, v14, v15);
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

  if ( (byte_4C4096D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    this = (WarBoardAIRoute_o *)sub_1C37058(&WarBoardAIManager_TypeInfo);
    byte_4C4096D = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_1C372B4(this);
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_3420078 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
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
  if ( (byte_4C4096B & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__);
    byte_4C4096B = 1;
  }
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v6->fields.dicUniqueKeyAdvantagePieceData) == 0
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_uint__object___get_Item(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                      basePiece->fields._uniqueIndex_k__BackingField,
                                      (const MethodInfo_349C160 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0 )
  {
    sub_1C372B4(this);
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
  const MethodInfo *v12; // x5
  struct WarBoardPieceData_array *allEnemyPiece; // x25
  int max_length; // w8
  unsigned int v15; // w26
  WarBoardPieceData_o *v16; // x23
  int32_t nowSquareIndex_k__BackingField; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  int32_t v19; // w24

  if ( (byte_4C40967 & 1) == 0 )
  {
    sub_1C37058(&AStarSearch_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_int___);
    byte_4C40967 = 1;
  }
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v10 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v10,
    (const MethodInfo_349267C *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  allEnemyPiece = this->fields.allEnemyPiece;
  if ( !allEnemyPiece )
    goto LABEL_20;
  max_length = allEnemyPiece->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1C372BC(isMaster);
      v16 = allEnemyPiece->m_Items[v15];
      if ( !v16 )
        break;
      nowSquareIndex_k__BackingField = v16->fields._nowSquareIndex_k__BackingField;
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0,
                                                                   baseSquareIndex,
                                                                   nowSquareIndex_k__BackingField,
                                                                   0,
                                                                   0,
                                                                   v12);
      isMaster = System_Linq_Enumerable__Count_int_(
                   v18,
                   (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v10 )
        break;
      v19 = isMaster;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v10,
        v16->fields._uniqueIndex_k__BackingField,
        isMaster,
        (const MethodInfo_3493040 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
      if ( *servantAndEnemyRange == -1 || v19 < *servantAndEnemyRange )
        *servantAndEnemyRange = v19;
      isMaster = WarBoardPieceData__get_isMaster(v16, 0);
      if ( (isMaster & 1) != 0 && (*servantAndEnemyMasterRange == -1 || v19 < *servantAndEnemyMasterRange) )
        *servantAndEnemyMasterRange = v19;
      max_length = allEnemyPiece->max_length;
      if ( (int)++v15 >= max_length )
        return v10;
    }
LABEL_20:
    sub_1C372B4(isMaster);
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
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w20
  System_Collections_Generic_IEnumerable_TSource__o *Keys; // x19
  System_Func_int__bool__o *v12; // x20

  if ( (byte_4C40958 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__);
    sub_1C37058(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
    byte_4C40958 = 1;
  }
  v7 = sub_1C372A4(WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = masterSquareIndex, (aiRouteMasterData = this->fields.aiRouteMasterData) == 0)
    || !piecePlaceData )
  {
    sub_1C372B4(v8);
  }
  masterType = aiRouteMasterData->fields.masterType;
  Keys = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                                piecePlaceData,
                                                                (const MethodInfo_341E6A4 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  if ( masterType != 1 )
  {
    v12 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v12,
      (Il2CppObject *)v7,
      Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      0);
    Keys = System_Linq_Enumerable__Where_int_(
             Keys,
             (System_Func_TSource__bool__o *)v12,
             (const MethodInfo_312DE68 *)Method_System_Linq_Enumerable_Where_int___);
  }
  return System_Linq_Enumerable__ToArray_int_(
           Keys,
           (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t defenseArea; // w20
  DefenseAreaData_o *v14; // x19
  System_Collections_Generic_Dictionary_int__object__o *v15; // x20
  WarBoardAIManager_c *v16; // x0
  char v17; // w10
  bool v18; // w8
  bool IsDetour; // w25
  const MethodInfo *v20; // x5
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Int32_array *v22; // x28
  __int64 v23; // x0
  int32_t v24; // w25
  __int64 v25; // x0
  const MethodInfo *v26; // x2
  BalanceConfig_c *v27; // x0
  const MethodInfo *v28; // x5
  System_Func_int__bool__o *klass; // x28
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x8
  __int64 v33; // x21
  BalanceConfig_c *v34; // x0
  int64_t v35; // x1
  Il2CppObject *object; // [xsp+0h] [xbp-E0h]
  CGThumbnailListItem_o *v38; // [xsp+8h] [xbp-D8h]
  bool v40; // [xsp+1Ch] [xbp-C4h]
  char v41; // [xsp+20h] [xbp-C0h]
  bool v42; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4C40959 & 1) == 0 )
  {
    sub_1C37058(&AStarSearch_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&DefenseAreaData_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__);
    sub_1C37058(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
    sub_1C37058(&WarBoardAIManager_TypeInfo);
    byte_4C40959 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v8 = sub_1C372A4(WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_50;
  *(_QWORD *)(v8 + 16) = piecePlaceData;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 16), (int32_t)piecePlaceData, v10, v11);
  npcData = this->fields.npcData;
  if ( !npcData )
    goto LABEL_50;
  defenseArea = npcData->fields.defenseArea;
  v14 = (DefenseAreaData_o *)sub_1C372A4(DefenseAreaData_TypeInfo);
  DefenseAreaData___ctor(v14, masterSquareIndex, defenseArea, 0);
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  if ( !byte_4C40A1D )
  {
    sub_1C37058(&WarBoardAIManager_TypeInfo);
    byte_4C40A1D = 1;
  }
  v16 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v16 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v16->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_50;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v43,
    dicSquareIndexEnemyPiece,
    (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v17 = 0;
  object = (Il2CppObject *)v8;
  v38 = (CGThumbnailListItem_o *)(v8 + 24);
  v18 = 1;
  IsDetour = 1;
  v44 = v43;
LABEL_13:
  v40 = v18;
LABEL_14:
  v41 = v17;
  v42 = IsDetour;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v44,
            (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    current = v44.fields._current;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v22 = AStarSearch__RouteSearch(0, masterSquareIndex, (int32_t)current.fields.key, 0, 0, v20);
    v23 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v22,
            (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v15 )
      sub_1C372B4(v23);
    v24 = v23;
    System_Collections_Generic_Dictionary_int__object___Add(
      v15,
      (int32_t)current.fields.key,
      &v22->obj,
      (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v14 )
      sub_1C372B4(v25);
    DefenseAreaData__SetComparisonMasterAndEnemyRange(v14, v24, 0);
    if ( DefenseAreaData__IsInDefenseArea(v14, (int32_t)current.fields.key, 0) )
    {
      v27 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
      }
      if ( !v27->static_fields->IsEnableOldBlockShortestRoute )
      {
        if ( !v22 )
          sub_1C372B4(v27);
        if ( SLODWORD(v22->max_length) >= 2 )
          DefenseAreaData__SetComparisonAllMasterAndEnemyRange(v14, v22->m_Items[1], v24, 0);
      }
      IsDetour = 0;
      v17 = 1;
      if ( v42 )
      {
        IsDetour = WarBoardAIRoute__IsDetour(v22, allyPieces, v26);
        v18 = 0;
        v17 = 1;
        if ( v40 )
        {
          klass = (System_Func_int__bool__o *)v38->klass;
          if ( !v38->klass )
          {
            klass = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              klass,
              object,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              0);
            v38->klass = (CGThumbnailListItem_c *)klass;
            sub_1C36FFC(v38, (int32_t)klass, v30, v31);
          }
          if ( !AStarSearch_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          v18 = AStarSearch__RouteSearch(
                  (WarBoardPieceData_o *)current.fields.value,
                  (int32_t)current.fields.key,
                  masterSquareIndex,
                  0,
                  klass,
                  v28) == 0;
          v17 = 1;
        }
        goto LABEL_13;
      }
      goto LABEL_14;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v44,
    (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  v32 = 1025;
  if ( (v41 & 1) == 0 )
    v32 = 1;
  v33 = v42 ? v32 | 0x2000000000LL : v32;
  if ( !v14 )
LABEL_50:
    sub_1C372B4(dicSquareIndexEnemyPiece);
  DefenseAreaData__CreateShortestRoutes(v14, (System_Collections_Generic_Dictionary_int__int____o *)v15, 0);
  v34 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v34 = BalanceConfig_TypeInfo;
  }
  if ( !v34->static_fields->IsEnableOldBlockShortestRoute )
    DefenseAreaData__CreateAllShortestRoutes(v14, (System_Collections_Generic_Dictionary_int__int____o *)v15, 0);
  if ( v40 )
    v35 = v33 | 0x10000000000LL;
  else
    v35 = v33;
  DefenseAreaData__SetFlag(v14, v35, 0);
  return v14;
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x23
  System_Func_object__bool__o *v16; // x24
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x5
  int32_t v19; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  __int64 v21; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+30h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_4C40966 & 1) == 0 )
  {
    sub_1C37058(&AStarSearch_TypeInfo);
    sub_1C37058(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__);
    sub_1C37058(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__);
    this = (WarBoardAIRoute_o *)sub_1C37058(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    byte_4C40966 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v8->fields.dicUniqueKeyDesignationItem) == 0
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_349C160 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v10,
          (const MethodInfo_33F1108 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (this = (WarBoardAIRoute_o *)Item[1].klass) == 0 )
  {
    sub_1C372B4(this);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v23,
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v24,
            (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v11 = sub_1C372A4(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0);
    if ( !v11 )
      sub_1C372B4(v12);
    v15 = v11 + 24;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v11 + 16) = v24.fields._current;
    sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 24), 0, v13, v14);
    v16 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v16,
      (Il2CppObject *)v11,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      0);
    v17 = BasicHelper__Any_object_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v16,
            (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    if ( !v17 )
    {
      if ( !*(_QWORD *)v15 )
        sub_1C372B4(v17);
      v19 = *(_DWORD *)(*(_QWORD *)v15 + 16LL);
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0,
                                                                   baseSquareIndex,
                                                                   v19,
                                                                   0,
                                                                   0,
                                                                   v18);
      v21 = System_Linq_Enumerable__Count_int_(
              v20,
              (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v10 )
        sub_1C372B4(v21);
      System_Collections_Generic_Dictionary_int__int___Add(
        v10,
        *(_DWORD *)(v11 + 16),
        v21,
        (const MethodInfo_33F1ACC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v24,
    (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v10;
}


WarBoardEvalValueSquare_EvalValueSquare_o *WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4C4095A & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
    byte_4C4095A = 1;
  }
  if ( !evalValueSquareList )
    sub_1C372B4(this);
  return (WarBoardEvalValueSquare_EvalValueSquare_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_int__object__o *)evalValueSquareList,
                                                        index,
                                                        (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
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

  if ( (byte_4C4096E & 1) == 0 )
  {
    sub_1C37058(&SvtClassAttri_TypeInfo);
    byte_4C4096E = 1;
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
  if ( (byte_4C4096A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&SvtClassAttri_TypeInfo);
    this = (WarBoardAIRoute_o *)sub_1C37058(&WarBoardAIManager_TypeInfo);
    byte_4C4096A = 1;
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
        sub_1C372BC(this);
      v15 = m_Items[v13];
      this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_37884744((WarBoardData_o *)this, v15, v16);
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
                                    (const MethodInfo_3420078 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
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
    sub_1C372B4(this);
  }
  return 1;
}


int32_t WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
        WarBoardAIRoute_o *this,
        int32_t baseSquareIndex,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *dicOutOfWarningAreaRange; // x0
  System_Collections_Generic_Dictionary_int__int__o *v9; // x8

  if ( (byte_4C40969 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4C40969 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_33F1CB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          actionSquareIndex,
          (const MethodInfo_33F1CB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                    dicOutOfWarningAreaRange,
                                                                                    baseSquareIndex,
                                                                                    (const MethodInfo_33F1A30 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( (int)dicOutOfWarningAreaRange > System_Collections_Generic_Dictionary_int__int___get_Item(
                                         this->fields.dicOutOfWarningAreaRange,
                                         actionSquareIndex,
                                         (const MethodInfo_33F1A30 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange
    || (dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                          dicOutOfWarningAreaRange,
                                                                                          baseSquareIndex,
                                                                                          (const MethodInfo_33F1A30 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v9 = this->fields.dicOutOfWarningAreaRange) == 0) )
  {
LABEL_18:
    sub_1C372B4(dicOutOfWarningAreaRange);
  }
  if ( (_DWORD)dicOutOfWarningAreaRange == System_Collections_Generic_Dictionary_int__int___get_Item(
                                             v9,
                                             actionSquareIndex,
                                             (const MethodInfo_33F1A30 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
  struct WarBoardAIRoute_AIRouteMasterData_o *v9; // x8
  _OWORD v11[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v12; // [xsp+20h] [xbp-40h] BYREF

  v4 = this;
  if ( (byte_4C40957 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    this = (WarBoardAIRoute_o *)sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    byte_4C40957 = 1;
  }
  memset(&v12, 0, 32);
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    goto LABEL_18;
  masterType = aiRouteMasterData->fields.masterType;
  if ( !masterType || masterType == 2 )
  {
    if ( piecePlaceData )
    {
      System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v11,
        piecePlaceData,
        (const MethodInfo_341EDB8 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
      *(_OWORD *)&v12.fields._dictionary = v11[0];
      v12.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v11[1];
      while ( 1 )
      {
        v8 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
               &v12,
               (const MethodInfo_3553C48 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
        if ( !v8 )
          break;
        v9 = v4->fields.aiRouteMasterData;
        if ( !v9 )
          sub_1C372B4(v8);
        key = (int32_t)v12.fields._current.fields.key;
        if ( v9->fields.masterUniqueIndex == HIDWORD(v12.fields._current.fields.key) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
            &v12,
            (const MethodInfo_3553D48 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
          return key;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
        &v12,
        (const MethodInfo_3553D48 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
      return 0;
    }
LABEL_18:
    sub_1C372B4(this);
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
  if ( (byte_4C40972 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____);
    sub_1C37058(&System_Func_KeyValuePair_int__uint___bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    this = (WarBoardAIRoute_o *)sub_1C37058(&Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__);
    byte_4C40972 = 1;
  }
  klass = v4[13].klass;
  if ( !klass )
    sub_1C372B4(this);
  if ( LODWORD(klass->_1.name) == 1 )
    return HIDWORD(klass->_1.name);
  v7 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_1C372A4(System_Func_KeyValuePair_int__uint___bool__TypeInfo);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v7,
    v4,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v7,
           (const MethodInfo_3110CE4 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *WarBoardAIRoute__GetMoveByTargetDistance(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData,
        int32_t actionSquareIndex,
        WarBoardPieceData_o *basePiece,
        const MethodInfo *method)
{
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x5
  Il2CppObject *currentValue; // x24
  WarBoardPieceData_o *monitor; // x22
  int32_t v13; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  int32_t v15; // w22
  int32_t v16; // w0
  const MethodInfo *v17; // x5
  int32_t v18; // w2
  int v19; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  int32_t v22; // w23
  int32_t v23; // w0
  int v24; // w8
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C40974 & 1) == 0 )
  {
    sub_1C37058(&AStarSearch_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    this = (WarBoardAIRoute_o *)sub_1C37058(&WarBoardAIManager_TypeInfo);
    byte_4C40974 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !dicKeyPutIndexValueTargetData
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_long__object___get_Values(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicKeyPutIndexValueTargetData,
                                      (const MethodInfo_343F1FC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0 )
  {
    sub_1C372B4(this);
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__object___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3ADF634 *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___MoveNext(
           &v27,
           (const MethodInfo_355A2AC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v8 )
      break;
    currentValue = v27.fields._currentValue;
    if ( !v27.fields._currentValue )
      sub_1C372B4(v8);
    monitor = (WarBoardPieceData_o *)v27.fields._currentValue[1].monitor;
    if ( !monitor || LODWORD(v27.fields._currentValue[4].monitor) != actionSquareIndex )
      goto LABEL_14;
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    if ( WarBoardAIManager__IsAllyPiece(basePiece, monitor, v9) )
    {
      LODWORD(currentValue[4].klass) = 2;
    }
    else
    {
LABEL_14:
      v13 = (int32_t)currentValue[4].monitor;
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v14 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0,
                                                                   actionSquareIndex,
                                                                   v13,
                                                                   0,
                                                                   0,
                                                                   v10);
      v15 = System_Linq_Enumerable__Count_int_(
              v14,
              (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
      v16 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
      v18 = (int32_t)currentValue[4].monitor;
      if ( v15 == v16 )
        v19 = 2;
      else
        v19 = 3;
      if ( v15 < v16 )
        v19 = 1;
      LODWORD(currentValue[4].klass) = v19;
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0,
                                                                   actionSquareIndex,
                                                                   v18,
                                                                   1,
                                                                   0,
                                                                   v17);
      if ( v20 && (klass = (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[6].klass) != 0 )
      {
        v22 = System_Linq_Enumerable__Count_int_(
                klass,
                (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
        v23 = System_Linq_Enumerable__Count_int_(
                v20,
                (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
        if ( v23 >= v22 )
        {
          if ( v23 == v22 )
            v24 = 2;
          else
            v24 = 3;
        }
        else
        {
          v24 = 1;
        }
      }
      else
      {
        v24 = 0;
      }
      HIDWORD(currentValue[4].klass) = v24;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___Dispose(
    &v27,
    (const MethodInfo_355A2A8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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

  if ( (byte_4C4095B & 1) == 0 )
  {
    sub_1C37058(&AStarSearch_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    this = (WarBoardAIRoute_o *)sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    byte_4C4095B = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !dicPieceList )
    sub_1C372B4(this);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_int__object__o *)dicPieceList,
    (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v6 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v13,
            (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
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
    v10 = System_Linq_Enumerable__Count_int_(v9, (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v6 > v10 || v6 == -1 )
      v6 = v10;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v13,
    (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
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
  _BOOL8 v14; // x0
  _DWORD *klass; // x8
  int32_t *v16; // x9
  int v17; // w10
  uint32_t v18; // w24
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-80h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4C40956 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    byte_4C40956 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  value = 0;
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  v12 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v12,
    (const MethodInfo_349267C *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_1C372B4(v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)routeDataList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v14 )
      break;
    if ( !v21.fields._current )
      sub_1C372B4(v14);
    if ( LODWORD(v21.fields._current[1].monitor) != HIDWORD(v21.fields._current[1].monitor) )
    {
      value = 0;
      klass = v21.fields._current[3].klass;
      if ( (BYTE3(v21.fields._current[1].klass) & 4) == 0 )
      {
        if ( !klass )
          sub_1C372B4(v14);
        if ( klass[4] == 1 )
          v16 = masterActionCount;
        else
          v16 = actionCount;
LABEL_21:
        ++*v16;
        goto LABEL_22;
      }
      if ( !klass )
        sub_1C372B4(v14);
      v17 = klass[4];
      klass = v21.fields._current[3].monitor;
      if ( v17 != 1 )
      {
        if ( !klass )
          sub_1C372B4(v14);
        if ( klass[4] == 1 )
          v16 = masterReplaceCount;
        else
          v16 = replaceCount;
        goto LABEL_21;
      }
      ++*masterReplaceCount;
      if ( !klass )
        sub_1C372B4(v14);
LABEL_22:
      if ( !v12 )
        sub_1C372B4(v14);
      v18 = klass[11];
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v12,
        v18,
        &value,
        (const MethodInfo_34946D8 *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v12,
        v18,
        value + 1,
        (const MethodInfo_349302C *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Func_object__int__o *v10; // x20

  if ( (byte_4C40975 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78152768);
    sub_1C37058(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__);
    sub_1C37058(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
    byte_4C40975 = 1;
  }
  v6 = sub_1C372A4(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_1C372B4(v7);
  *(_QWORD *)(v6 + 16) = targetPiece;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)targetPiece, v8, v9);
  v10 = (System_Func_object__int__o *)sub_1C372A4(System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
  System_Func_object__int____ctor(
    v10,
    (Il2CppObject *)v6,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    0);
  return System_Linq_Enumerable__Sum_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v10,
           (const MethodInfo_31259AC *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78152768);
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
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  WarBoardPieceData_array *allEnemyPiece; // x27
  WarBoardAIRoute_TargetData_o *v16; // x26
  const MethodInfo *v17; // x5
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+30h] [xbp-90h] BYREF

  v12 = this;
  if ( (byte_4C40963 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    this = (WarBoardAIRoute_o *)sub_1C37058(&WarBoardAIRoute_TargetData_TypeInfo);
    byte_4C40963 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !dicPutSquareIndex )
    sub_1C372B4(this);
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicPutSquareIndex,
    (const MethodInfo_343F820 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v13 = System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v19,
            (const MethodInfo_3559C4C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v13 )
      break;
    current = v19.fields._current;
    if ( excludeCond )
    {
      if ( !v19.fields._current.fields.value )
        sub_1C372B4(v13);
      if ( (((__int64 (__fastcall *)(intptr_t, void *, intptr_t))excludeCond->fields.invoke_impl)(
              excludeCond->fields.method_code,
              v19.fields._current.fields.value[3].monitor,
              excludeCond->fields.method)
          & 1) != 0 )
        continue;
    }
    allEnemyPiece = v12->fields.allEnemyPiece;
    v16 = (WarBoardAIRoute_TargetData_o *)sub_1C372A4(WarBoardAIRoute_TargetData_TypeInfo);
    WarBoardAIRoute_TargetData___ctor_37879692(
      v16,
      (WarBoardAIRoute_TargetData_o *)current.fields.value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      v17);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_1C372B4(0);
    System_Collections_Generic_Dictionary_long__object___Add(
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
      (int64_t)current.fields.key,
      (Il2CppObject *)v16,
      (const MethodInfo_343F3EC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v19,
    (const MethodInfo_3559D6C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_Dictionary_int__object__o *v18; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  const MethodInfo *v20; // x2
  WarBoardAiTargetCacher_o *aiTargetCacher; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  TargetDetector_o *DetectorByTrendKey; // x0
  int32_t Id_k__BackingField; // w27
  const MethodInfo *v25; // x2
  Il2CppObject *Item; // x29
  WarBoardAiTargetCacher_o *v27; // x0
  IWarBoardObjectData_array *TargetObjectsByTrendId; // x0
  IWarBoardObjectData_array *v29; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x29
  System_Func_object__bool__o *klass; // x23
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x29
  System_Func_object__int__o *v35; // x23
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v38; // x0
  WarBoardAIRoute___c_c *v39; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v40; // x29
  System_Func_object__int__o *_9__64_2; // x23
  Il2CppObject *v42; // x24
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v46; // x0
  WarBoardAIRoute___c_c *v47; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v48; // x29
  System_Func_object__int__o *_9__64_3; // x23
  Il2CppObject *v50; // x24
  struct WarBoardAIRoute___c_StaticFields *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  WarBoardPieceData_o *v55; // x27
  int32_t v56; // w28
  WarBoardPieceData_array *allEnemyPiece; // x24
  WarBoardAIRoute_TargetData_o *v58; // x23
  const MethodInfo *v59; // x6
  CGThumbnailListItem_o *v60; // [xsp+0h] [xbp-D0h]
  CGThumbnailListItem_o *v61; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v63; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v64; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4C40964 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_1C37058(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_1C37058(&System_Func_IWarBoardObjectData__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    sub_1C37058(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_1C37058(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__);
    sub_1C37058(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__);
    sub_1C37058(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
    sub_1C37058(&WarBoardAIRoute___c_TypeInfo);
    byte_4C40964 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  v12 = sub_1C372A4(WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = excludeCond,
        sub_1C36FFC((CGThumbnailListItem_o *)(v12 + 16), (int32_t)excludeCond, v14, v15),
        *(_QWORD *)(v12 + 24) = basePiece,
        sub_1C36FFC((CGThumbnailListItem_o *)(v12 + 24), (int32_t)basePiece, v16, v17),
        *(_DWORD *)(v12 + 32) = baseSquareIndex,
        v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo),
        System_Collections_Generic_Dictionary_int__object____ctor(
          v18,
          (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__),
        !dicIndividualityPutSqareIndex) )
  {
    sub_1C372B4(v13);
  }
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v63,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicIndividualityPutSqareIndex,
    (const MethodInfo_343F820 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v64 = v63;
  v19 = 0;
  v60 = (CGThumbnailListItem_o *)(v12 + 48);
  v61 = (CGThumbnailListItem_o *)(v12 + 40);
  while ( System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v64,
            (const MethodInfo_3559C4C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_1C372B4(0);
    current = v64.fields._current;
    DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(
                           aiTargetCacher,
                           (int64_t)v64.fields._current.fields.key,
                           v20);
    if ( DetectorByTrendKey )
    {
      Id_k__BackingField = DetectorByTrendKey->fields._Id_k__BackingField;
      if ( !v18 )
        goto LABEL_44;
    }
    else
    {
      Id_k__BackingField = 0;
      if ( !v18 )
LABEL_44:
        sub_1C372B4(DetectorByTrendKey);
    }
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           v18,
           Id_k__BackingField,
           (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               v18,
               Id_k__BackingField,
               (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    }
    else
    {
      v27 = this->fields.aiTargetCacher;
      if ( !v27 )
        sub_1C372B4(0);
      TargetObjectsByTrendId = WarBoardAiTargetCacher__GetTargetObjectsByTrendId(v27, (int64_t)current.fields.key, v25);
      v29 = TargetObjectsByTrendId;
      if ( TargetObjectsByTrendId )
        v30 = (System_Collections_Generic_IEnumerable_TSource__o *)TargetObjectsByTrendId;
      else
        v30 = v19;
      if ( TargetObjectsByTrendId )
      {
        klass = (System_Func_object__bool__o *)v61->klass;
        if ( !v61->klass )
        {
          klass = (System_Func_object__bool__o *)sub_1C372A4(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            klass,
            (Il2CppObject *)v12,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
            0);
          v61->klass = (CGThumbnailListItem_c *)klass;
          sub_1C36FFC(v61, (int32_t)klass, v32, v33);
        }
        v34 = System_Linq_Enumerable__Where_object_(
                v30,
                (System_Func_TSource__bool__o *)klass,
                (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        v35 = (System_Func_object__int__o *)v60->klass;
        if ( !v60->klass )
        {
          v35 = (System_Func_object__int__o *)sub_1C372A4(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            v35,
            (Il2CppObject *)v12,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
            0);
          v60->klass = (CGThumbnailListItem_c *)v35;
          sub_1C36FFC(v60, (int32_t)v35, v36, v37);
        }
        v38 = System_Linq_Enumerable__OrderBy_object__int_(
                v34,
                (System_Func_TSource__TKey__o *)v35,
                (const MethodInfo_31173AC *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
        v39 = WarBoardAIRoute___c_TypeInfo;
        v40 = v38;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v39 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_2 = (System_Func_object__int__o *)v39->static_fields->__9__64_2;
        if ( !_9__64_2 )
        {
          if ( !v39->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v39);
            v39 = WarBoardAIRoute___c_TypeInfo;
          }
          v42 = (Il2CppObject *)v39->static_fields->__9;
          _9__64_2 = (System_Func_object__int__o *)sub_1C372A4(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__64_2,
            v42,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
            0);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__64_2, (int32_t)_9__64_2, v44, v45);
        }
        v46 = System_Linq_Enumerable__ThenBy_object__int_(
                v40,
                (System_Func_TSource__TKey__o *)_9__64_2,
                (const MethodInfo_3126458 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        v47 = WarBoardAIRoute___c_TypeInfo;
        v48 = v46;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v47 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_3 = (System_Func_object__int__o *)v47->static_fields->__9__64_3;
        if ( !_9__64_3 )
        {
          if ( !v47->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v47);
            v47 = WarBoardAIRoute___c_TypeInfo;
          }
          v50 = (Il2CppObject *)v47->static_fields->__9;
          _9__64_3 = (System_Func_object__int__o *)sub_1C372A4(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__64_3,
            v50,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
            0);
          v51 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v51->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
          sub_1C36FFC((CGThumbnailListItem_o *)&v51->__9__64_3, (int32_t)_9__64_3, v52, v53);
        }
        v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                     v48,
                                                                     (System_Func_TSource__TKey__o *)_9__64_3,
                                                                     (const MethodInfo_3126458 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        Item = System_Linq_Enumerable__FirstOrDefault_object_(
                 v54,
                 (const MethodInfo_311035C *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
        v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
      }
      else
      {
        Item = 0;
      }
    }
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v18,
      Id_k__BackingField,
      Item,
      (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( Item )
    {
      v55 = *(WarBoardPieceData_o **)(v12 + 24);
      v56 = *(_DWORD *)(v12 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v58 = (WarBoardAIRoute_TargetData_o *)sub_1C372A4(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_37881700(
        v58,
        (WarBoardAIRoute_TargetData_o *)current.fields.value,
        (IWarBoardObjectData_o *)Item,
        v55,
        v56,
        allEnemyPiece,
        v59);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1C372B4(0);
      System_Collections_Generic_Dictionary_long__object___Add(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        (Il2CppObject *)v58,
        (const MethodInfo_343F3EC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1C372B4(0);
      System_Collections_Generic_Dictionary_long__object___Remove(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        (const MethodInfo_3440860 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v64,
    (const MethodInfo_3559D6C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *WarBoardAIRoute__GetTargetToDistance_37881812(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  __int64 v9; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicUniqueKeyTarget; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Item; // x24
  System_Collections_Generic_Dictionary_TKey__TValue__o *v14; // x23
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *monitor; // x25
  System_Func_object__bool__o *v16; // x26
  const MethodInfo *v17; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *klass; // x25
  System_Func_object__bool__o *v19; // x26
  const MethodInfo *v20; // x6
  const MethodInfo *v21; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C40965 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
    sub_1C37058(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__);
    sub_1C37058(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
    byte_4C40965 = 1;
  }
  v9 = sub_1C372A4(WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = routeDataList,
        sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)routeDataList, v11, v12),
        !basePiece)
    || (dicUniqueKeyTarget = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget) == 0
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 dicUniqueKeyTarget,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_349C160 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo),
        System_Collections_Generic_Dictionary_long__object____ctor(
          v14,
          (const MethodInfo_343EA1C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v14,
        !Item) )
  {
    sub_1C372B4(dicUniqueKeyTarget);
  }
  monitor = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].monitor;
  v16 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    monitor,
    (System_Func_IWarBoardObjectData__bool__o *)v16,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v17);
  klass = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[2].klass;
  v19 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0);
  WarBoardAIRoute__GetTargetToDistanceUsingIndividuality(
    this,
    klass,
    (System_Func_IWarBoardObjectData__bool__o *)v19,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v20);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].klass,
    0,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v21);
  return (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v14;
}


float WarBoardAIRoute__GetThinkingThreshold(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1C372B4(this);
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
  if ( (byte_4C4096C & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C4096C = 1;
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
    this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
      return SHIDWORD(this[3].fields.allSquare) >= v13 + requiredCost;
LABEL_13:
    sub_1C372B4(this);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  WarBoardPieceData_o **v17; // x25
  bool v18; // w8
  const MethodInfo *v19; // x3
  int32_t RouteSumPieceActionCost; // w23
  System_Func_object__bool__o *v21; // x21
  __int64 v22; // x8

  if ( (byte_4C40970 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    sub_1C37058(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__);
    sub_1C37058(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
    byte_4C40970 = 1;
  }
  v13 = sub_1C372A4(WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_25;
  *(_QWORD *)(v13 + 16) = actionPiece;
  v17 = (WarBoardPieceData_o **)(v13 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)actionPiece, v15, v16);
  Instance = *(WarBoardPieceData_o **)(v13 + 16);
  if ( !Instance )
    goto LABEL_25;
  v18 = WarBoardPieceData__EnableSwapByOther(Instance, 0, 0);
  Instance = 0;
  if ( !v18 )
    return (char)Instance;
  if ( !basePiece )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(basePiece, 0) )
    goto LABEL_10;
  Instance = *v17;
  if ( !*v17 )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(Instance, 0) )
  {
LABEL_10:
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < this->fields.moveCost
                                                               + requiredCost
                                                               + this->fields.masterMoveCost )
      goto LABEL_23;
  }
  else
  {
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < requiredCost + 2 * this->fields.moveCost )
      goto LABEL_23;
  }
  RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                              (WarBoardAIRoute_o *)Instance,
                              routeDataList,
                              *v17,
                              v19);
  if ( !WarBoardPieceData__EnableMoveBySelf(basePiece, sumPieceActionCost, 0) )
    goto LABEL_23;
  Instance = *v17;
  if ( !*v17 )
    goto LABEL_25;
  if ( !WarBoardPieceData__EnableSwapByOther(Instance, RouteSumPieceActionCost, 0) )
    goto LABEL_23;
  Instance = *v17;
  if ( !*v17 )
LABEL_25:
    sub_1C372B4(Instance);
  if ( !WarBoardPieceData__get_isInfinitelyActable(Instance, 0) )
  {
    v21 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v21,
      (Il2CppObject *)v13,
      Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
      0);
    Instance = (WarBoardPieceData_o *)System_Linq_Enumerable__Count_object__51419316(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
                                        (System_Func_TSource__bool__o *)v21,
                                        (const MethodInfo_31098B4 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    v22 = *(_QWORD *)(v13 + 16);
    if ( v22 )
    {
      if ( *(_DWORD *)(v22 + 36) > (int)Instance )
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
  Il2CppObject *current; // x21
  void *monitor; // x9
  __int64 v12; // x26
  __int64 v13; // x28
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-80h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4C40962 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1C37058(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4C40962 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !v6 )
    sub_1C372B4(shortestEnemyRoute);
  v7 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v8 = 0;
  v16 = v15;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v9 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C372B4(v9);
    monitor = v16.fields._current[1].monitor;
    if ( (int)monitor - 1 <= (int)v7 )
    {
LABEL_16:
      v8 = 0;
      break;
    }
    if ( (unsigned int)v16.fields._current[1].monitor <= (unsigned __int64)v7 )
LABEL_18:
      sub_1C372BC(v9);
    v12 = (unsigned int)((_DWORD)monitor - 1) - 1LL;
    v13 = v7;
    while ( 1 )
    {
      if ( !piecePlaceData )
        sub_1C372B4(v9);
      v9 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
             piecePlaceData,
             *((_DWORD *)&current[2].klass + v13),
             (const MethodInfo_341EBCC *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( v9 )
        break;
      if ( v12 == v13 )
        goto LABEL_16;
      if ( ++v13 >= (unsigned __int64)LODWORD(current[1].monitor) )
        goto LABEL_18;
    }
    v8 = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v8 & 1;
}


bool WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
        DefenseAreaData_o *defenseArea,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0

  if ( (byte_4C4095F & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C4095F = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !defenseArea )
    sub_1C372B4(v7);
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
  Il2CppClass *klass; // x0
  _BOOL8 v11; // x0
  unsigned int monitor; // w10
  unsigned int v13; // w9
  int v14; // w11
  int v15; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+50h] [xbp-90h] BYREF

  v6 = allShortestRoute;
  if ( (byte_4C40961 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__);
    allShortestRoute = (System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *)sub_1C37058(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4C40961 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  memset(&v19, 0, sizeof(v19));
  if ( !v6 )
    sub_1C372B4(allShortestRoute);
  v7 = !isDefenseSquare;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v8 = 0;
  v19 = v17;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v19,
           (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v19.fields._current.fields.value )
      sub_1C372B4(v9);
    klass = v19.fields._current.fields.value[1].klass;
    if ( !klass )
      sub_1C372B4(0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)klass,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    *(_OWORD *)&v18.fields._list = *(_OWORD *)&v17.fields._dictionary;
    v18.fields._current = v17.fields._current.fields.key;
    do
    {
LABEL_9:
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v11 )
      {
        v15 = 4;
        goto LABEL_20;
      }
      if ( !v18.fields._current )
        sub_1C372B4(v11);
      monitor = (unsigned int)v18.fields._current[1].monitor;
      v13 = monitor - 1;
    }
    while ( (int)(monitor - 1) <= (int)v7 );
    if ( v7 > monitor )
      monitor = !isDefenseSquare;
    v14 = !isDefenseSquare;
    while ( 1 )
    {
      if ( monitor == v14 )
        sub_1C372BC(v11);
      if ( *((_DWORD *)&v18.fields._current[2].klass + v14) == index )
        break;
      if ( v13 == ++v14 )
        goto LABEL_9;
    }
    v8 = 1;
    v15 = 11;
LABEL_20:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( (v15 | 4) != 4 )
      goto LABEL_26;
  }
  v15 = 12;
LABEL_26:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
  return v8 & (v15 == 11);
}


bool WarBoardAIRoute__IsBlockShortestRouteEnemyAndMasterOld(
        System_Collections_Generic_List_int____o *shortestEnemyRoute,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int____o *v6; // x21
  unsigned int v7; // w24
  _BOOL8 v8; // x0
  bool v9; // w20
  unsigned int monitor; // w10
  unsigned int v11; // w9
  unsigned int v12; // w11
  int v13; // w19
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4C40960 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1C37058(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4C40960 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !v6 )
    sub_1C372B4(shortestEnemyRoute);
  v7 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v16 = v15;
  do
  {
LABEL_5:
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    v9 = v8;
    if ( !v8 )
    {
      v13 = 10;
      goto LABEL_16;
    }
    if ( !v16.fields._current )
      sub_1C372B4(v8);
    monitor = (unsigned int)v16.fields._current[1].monitor;
    v11 = monitor - 1;
  }
  while ( (int)(monitor - 1) <= (int)v7 );
  if ( v7 > monitor )
    monitor = v7;
  v12 = v7;
  while ( 1 )
  {
    if ( monitor == v12 )
      sub_1C372BC(v8);
    if ( *((_DWORD *)&v16.fields._current[2].klass + (int)v12) == index )
      break;
    if ( v11 == ++v12 )
      goto LABEL_5;
  }
  v13 = 9;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v9 && v13 == 9;
}


bool WarBoardAIRoute__IsDetour(System_Int32_array *route, System_Int32_array *blockPieces, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w0
  bool v10; // w0
  int v12; // w23
  System_Func_int__bool__o **v13; // x21
  System_Func_int__bool__o *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int v17; // w8

  if ( (byte_4C4095E & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int____78107944);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__);
    sub_1C37058(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
    byte_4C4095E = 1;
  }
  v5 = sub_1C372A4(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = route;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)route, v7, v8);
  v9 = System_Linq_Enumerable__Count_int_(
         *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 16),
         (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v9 < 2 )
    return 0;
  *(_DWORD *)(v5 + 24) = 1;
  if ( v9 == 2 )
  {
    return 0;
  }
  else
  {
    v12 = v9 - 1;
    v13 = (System_Func_int__bool__o **)(v5 + 32);
    do
    {
      v14 = *v13;
      if ( !*v13 )
      {
        v14 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v14,
          (Il2CppObject *)v5,
          Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
          0);
        *(_QWORD *)(v5 + 32) = v14;
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v14, v15, v16);
      }
      v10 = BasicHelper__Any_int__51187064(
              blockPieces,
              (System_Func_T__bool__o *)v14,
              (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944);
      if ( v10 )
        break;
      v17 = *(_DWORD *)(v5 + 24) + 1;
      *(_DWORD *)(v5 + 24) = v17;
    }
    while ( v17 < v12 );
  }
  return v10;
}


bool WarBoardAIRoute__IsThinkingThreshold(WarBoardAIRoute_o *this, float v, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1C372B4(this);
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
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  unsigned __int64 v13; // x25
  int32_t v14; // w22
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  uint32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C4096F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&WarBoardAIManager_TypeInfo);
    byte_4C4096F = 1;
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
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)entries )
        sub_1C372BC(Square);
      if ( !piecePlaceData )
        break;
      v14 = *(&npcEntityDict->fields._count + v13);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v14,
             &value,
             (const MethodInfo_3420078 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Square = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)Square[1].fields.playedStageReinforcementsList;
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardData__GetPiece_37886448(Square, value, 1, v16);
        if ( !Square )
          break;
        if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0) )
          ++*attackByLinkAlly;
      }
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v14, v15);
      if ( Square )
      {
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v14, v17);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0);
        if ( ((unsigned __int8)Square & 1) != 0 )
          ++*attackByLinkEnemy;
      }
      LODWORD(entries) = npcEntityDict->fields._entries;
      if ( (__int64)++v13 >= (int)entries )
        return;
    }
LABEL_27:
    sub_1C372B4(Square);
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
  WarBoardPieceData_o *v15; // x1
  const MethodInfo *v16; // x4
  System_Collections_Generic_List_object__o *moveByLinkedPiece; // x24
  WarBoardPieceData_o *v18; // x23
  const MethodInfo *v19; // x2
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  WarBoardAIRoute_o *v25; // x1
  Il2CppClass **v26; // x0
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  WarBoardAIRoute_RouteData_o *v29; // x8
  int32_t v30; // w24
  int32_t ClassId; // w25

  if ( (byte_4C40973 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&SvtClassAttri_TypeInfo);
    this = (WarBoardAIRoute_o *)sub_1C37058(&WarBoardAIManager_TypeInfo);
    byte_4C40973 = 1;
  }
  v8 = *routeData;
  if ( !*routeData
    || (actionSquare = v8->fields.actionSquare) == 0
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0 )
  {
LABEL_51:
    sub_1C372B4(this);
  }
  if ( (int)linkedSquares->max_length >= 1 )
  {
    basePiece = v8->fields.basePiece;
    v12 = 0;
    max_length = linkedSquares->max_length;
    do
    {
      if ( v12 >= max_length )
        sub_1C372BC(this);
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
      this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetActionPiece(this, v15, v14, piecePlaceData, v16);
      if ( this )
      {
        if ( !*routeData )
          goto LABEL_51;
        moveByLinkedPiece = (System_Collections_Generic_List_object__o *)(*routeData)->fields.moveByLinkedPiece;
        v18 = (WarBoardPieceData_o *)this;
        this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_37884744((WarBoardData_o *)this, v14, v19);
        if ( !moveByLinkedPiece )
          goto LABEL_51;
        items = moveByLinkedPiece->fields._items;
        v23 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        ++moveByLinkedPiece->fields._version;
        if ( !items )
          goto LABEL_51;
        size = moveByLinkedPiece->fields._size;
        v25 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            moveByLinkedPiece,
            (Il2CppObject *)this,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          moveByLinkedPiece->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v25;
          sub_1C36FFC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v25, v20, v21);
        }
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        if ( WarBoardAIManager__IsAllyPiece(basePiece, v18, v27)
          && (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v18, 0), ((unsigned __int8)this & 1) != 0) )
        {
          if ( !*routeData )
            goto LABEL_51;
          ++(*routeData)->fields.moveByLinkedAlly;
        }
        else
        {
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v18, v28);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*routeData )
              goto LABEL_51;
            (*routeData)->fields.flagNow |= 0x40uLL;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v18, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v29 = *routeData;
              if ( !*routeData )
                goto LABEL_51;
              if ( (v29->fields.flagNow & 0x2000000) != 0 )
                goto LABEL_43;
              if ( !basePiece )
                goto LABEL_51;
              this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(basePiece, 0);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v18, 0);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
                  if ( !this )
                    goto LABEL_51;
                  this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0, 0);
                  if ( !v18->fields._battleServant_k__BackingField )
                    goto LABEL_51;
                  v30 = (int)this;
                  ClassId = BattleServantData__getClassId(v18->fields._battleServant_k__BackingField, 0, 0);
                  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                  if ( SvtClassAttri__getMagnification(v30, ClassId, 0) > 1.0 )
                  {
                    v29 = *routeData;
                    if ( !*routeData )
                      goto LABEL_51;
LABEL_43:
                    v29->fields.flagNow |= 0x2000000uLL;
                  }
                }
              }
              if ( !*routeData )
                goto LABEL_51;
              ++(*routeData)->fields.moveByLinkedEnemy;
            }
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v18, 0);
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
  System_Predicate_object__o *v16; // x24
  Il2CppObject *v17; // x0
  Il2CppClass *klass; // x8
  IWarBoardObjectData_o *v19; // x23
  __int64 v20; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 v22; // x0
  WarBoardAIRoute_TargetData_o *v23; // x22
  const MethodInfo *v24; // x4

  if ( (byte_4C40954 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    sub_1C37058(&IWarBoardObjectData_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
    sub_1C37058(&System_Predicate_IWarBoardObjectData__TypeInfo);
    sub_1C37058(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__);
    sub_1C37058(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
    byte_4C40954 = 1;
  }
  v14 = sub_1C372A4(WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
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
         (const MethodInfo_343F5E0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v16 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_IWarBoardObjectData__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v14,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    0);
  if ( !objectList )
LABEL_17:
    sub_1C372B4(v15);
  v17 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Predicate_T__o *)v16,
          (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
  if ( v17 )
  {
    *notSquareTarget = 1;
    klass = v17->klass;
    v19 = (IWarBoardObjectData_o *)v17;
    v20 = *(unsigned __int16 *)&v17->klass->_2.rank;
    if ( *(_WORD *)&v17->klass->_2.rank )
    {
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v20;
        p_offset += 2;
        if ( !v20 )
          goto LABEL_12;
      }
      v22 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
    }
    else
    {
LABEL_12:
      v22 = sub_1C87870(v17, IWarBoardObjectData_TypeInfo, 2);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8)) & 1) != 0 )
    {
      v23 = (WarBoardAIRoute_TargetData_o *)sub_1C372A4(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_37869276(v23, v19, trendKey, conditionId, v24);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
        trendKey,
        (Il2CppObject *)v23,
        (const MethodInfo_343F3D8 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    }
  }
}


void WarBoardAIRoute__UpdatePiecePersonalityDic(
        WarBoardAIRoute_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4C40952 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
    byte_4C40952 = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_33FBA0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
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
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *basePiece; // x8

  if ( (byte_4C40971 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___78007056);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__uint__TypeInfo);
    byte_4C40971 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor_54649084(
    v10,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_341E0FC *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___78007056);
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
        (const MethodInfo_341E9CC *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_1C372B4(v11);
  }
  if ( !v10 )
    goto LABEL_12;
  v11 = System_Collections_Generic_Dictionary_int__uint___Remove(
          v10,
          baseSquareIndex,
          (const MethodInfo_341FD98 *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v10,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_341E9CC *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v10;
}


bool WarBoardAIRoute____ctor_b__42_0(WarBoardAIRoute_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
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
  if ( (byte_4C40976 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    byte_4C40976 = 1;
  }
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    sub_1C372B4(this);
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
  const MethodInfo *v10; // x3
  WarBoardData_o *Instance; // x0
  const MethodInfo *v12; // x4
  System_Int32_array *v13; // x8
  unsigned int v14; // w9
  unsigned int max_length; // w10
  unsigned int v16; // w23
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w25
  int32_t v19; // w24
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int stageNpcMaster; // w8
  WarBoardData_o *v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Int32_array *data; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C40992 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C37058(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C40992 = 1;
  }
  data = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_OWORD *)&this->fields.masterType = xmmword_C0F940;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v7;
  p_replaceDataList = &this->fields.replaceDataList;
  sub_1C36FFC((CGThumbnailListItem_o *)p_replaceDataList, (int32_t)v7, v9, v10);
  *((_DWORD *)p_replaceDataList + 2) = -1;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_20;
  Instance = (WarBoardData_o *)WarBoardData__IsDefenseTarget(Instance, &data, forceId, groupId, v12);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  v13 = data;
  if ( !data )
LABEL_20:
    sub_1C372B4(Instance);
  v14 = 0;
  while ( 1 )
  {
    max_length = v13->max_length;
    if ( (int)v14 >= (int)max_length )
      break;
    if ( v14 >= max_length )
      goto LABEL_22;
    v16 = v14 + 1;
    if ( v14 + 1 >= max_length )
      goto LABEL_22;
    v17 = (System_Collections_Generic_List_object__o *)*p_replaceDataList;
    v18 = v13->m_Items[v14];
    v19 = v13->m_Items[v16];
    Instance = (WarBoardData_o *)sub_1C37100(int___TypeInfo, 2);
    if ( !Instance )
      goto LABEL_20;
    stageNpcMaster = (int)Instance->fields.stageNpcMaster;
    v23 = Instance;
    if ( !stageNpcMaster || (LODWORD(Instance->fields.npcEntityDict) = v18, stageNpcMaster == 1) )
LABEL_22:
      sub_1C372BC(Instance);
    HIDWORD(Instance->fields.npcEntityDict) = v19;
    if ( v17 )
    {
      items = v17->fields._items;
      v25 = Method_System_Collections_Generic_List_int____Add__;
      ++v17->fields._version;
      if ( items )
      {
        size = v17->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)Instance,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v23;
          sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v23, v20, v21);
        }
        v13 = data;
        v14 = v16 + 1;
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

  if ( (byte_4C40993 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int____get_Item__);
    byte_4C40993 = 1;
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
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_int____get_Item__);
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
                sub_1C372BC(replaceDataList);
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
    sub_1C372B4(replaceDataList);
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
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x22
  System_Func_T__TResult__o *v13; // x23
  WarBoardActionTrendEntity_array *HasMatchCondition; // x0
  il2cpp_array_size_t max_length; // x8
  WarBoardActionTrendEntity_array *v16; // x20
  unsigned __int64 i; // x24
  WarBoardActionTrendEntity_o *v18; // x23
  System_Collections_Generic_List_object__o *v19; // x21
  WarBoardAIRoute_ActionTrendInfo_o *v20; // x22
  const MethodInfo *v21; // x2
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  int32_t condType; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C40981 & 1) == 0 )
  {
    sub_1C37058(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1C37058(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__);
    byte_4C40981 = 1;
  }
  condType = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v5;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._FutureTrendInfoList_k__BackingField, (int32_t)v5, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Entity_k__BackingField = entity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)entity, v9, v10);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v11);
  v13 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(v13, 0, Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__, 0);
  HasMatchCondition = (WarBoardActionTrendEntity_array *)WarBoardActionTrendConditionMaster__HasMatchCondition(
                                                           ConditionEntityArray,
                                                           (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v13,
                                                           &condType,
                                                           0);
  this->fields._HasTargetIndividualityCond_k__BackingField = (unsigned __int8)HasMatchCondition & 1;
  if ( !entity )
    goto LABEL_20;
  if ( !WarBoardActionTrendEntity__get_HasFutureTrend(entity, 0) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  HasMatchCondition = (WarBoardActionTrendEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !HasMatchCondition
    || (HasMatchCondition = WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                              (WarBoardActionTrendMaster_o *)HasMatchCondition,
                              entity,
                              0)) == 0 )
  {
LABEL_20:
    sub_1C372B4(HasMatchCondition);
  }
  max_length = HasMatchCondition->max_length;
  v16 = HasMatchCondition;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C372BC(HasMatchCondition);
      v18 = v16->m_Items[i];
      if ( v18 )
      {
        v19 = (System_Collections_Generic_List_object__o *)*p_FutureTrendInfoList_k__BackingField;
        v20 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C372A4(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v20, v18, v21);
        if ( !v19 )
          goto LABEL_20;
        items = v19->fields._items;
        v25 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v19->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            (Il2CppObject *)v20,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v20;
          sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v20, v22, v23);
        }
      }
      LODWORD(max_length) = v16->max_length;
    }
  }
}


WarBoardActionTrendConditionEntity_array *WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  WarBoardAIRoute_ActionTrendInfo_o *v2; // x20
  CGThumbnailListItem_o *p_conditionEntityArray; // x19
  System_Object_array *conditionEntityArray; // x21
  struct WarBoardActionTrendEntity_o *Entity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *conditionIds; // x20
  WarBoardAIRoute_ActionTrendInfo___c_c *v7; // x0
  System_Func_T__TResult__o *_9__8_0; // x21
  Il2CppObject *v9; // x22
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_T__o *v13; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  v2 = this;
  if ( (byte_4C40980 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    sub_1C37058(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
    sub_1C37058(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__);
    this = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C37058(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
    byte_4C40980 = 1;
  }
  p_conditionEntityArray = (CGThumbnailListItem_o *)&v2->fields.conditionEntityArray;
  conditionEntityArray = (System_Object_array *)v2->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = v2->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_1C372B4(this);
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
      _9__8_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__8_0,
        v9,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        0);
      static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v11, v12);
    }
    v13 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           conditionIds,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_311B668 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v14 = BasicHelper__ExcludeNull_object_(
            v13,
            (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = System_Linq_Enumerable__ToArray_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                             (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    p_conditionEntityArray->klass = (CGThumbnailListItem_c *)conditionEntityArray;
    sub_1C36FFC(p_conditionEntityArray, (int32_t)conditionEntityArray, v15, v16);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C40982 & 1) == 0 )
  {
    sub_1C37058(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
    byte_4C40982 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_ActionTrendInfo___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C40983 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
    byte_4C40983 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   x,
                                                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
}


void WarBoardAIRoute_AdvantagePieceData___ctor(WarBoardAIRoute_AdvantagePieceData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_int__object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_Dictionary_int__object__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_Dictionary_int__object__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C4098B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
    byte_4C4098B = 1;
  }
  this->fields.flagNow = 1;
  *(_QWORD *)&this->fields.baseCARange = -1;
  *(_QWORD *)&this->fields.baseAARange = -1;
  *(_QWORD *)&this->fields.baseDARange = -1;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dicClassAdvantageServant, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dicClassDisAdvantageServant, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dicAttackAdvantageServant, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dicAttackDisAdvantageServant, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dicDefenseAdvantageServant, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v18;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dicDefenseDisAdvantageServant, (int32_t)v18, v19, v20);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIRoute_DesignationItemData___ctor(WarBoardAIRoute_DesignationItemData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C4098C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
    byte_4C4098C = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIRoute_PiecePersonality___ctor(WarBoardAIRoute_PiecePersonality_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C4097A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
    byte_4C4097A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.ratingOffsetList, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *WarBoardAIRoute_PiecePersonality__AttackOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  CGThumbnailListItem_o *p_attackOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v6; // x0
  System_Func_object__bool__o *_9__4_0; // x21
  Il2CppObject *v8; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Collections_Generic_List_TSource__o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C40977 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    sub_1C37058(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
    sub_1C37058(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__);
    sub_1C37058(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_4C40977 = 1;
  }
  p_attackOffset = (CGThumbnailListItem_o *)&this->fields.attackOffset;
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
      _9__4_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__4_0,
        v8,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        0);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v10, v11);
    }
    v12 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__4_0,
            (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v13 = System_Linq_Enumerable__ToList_object_(
            v12,
            (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_attackOffset->klass = (CGThumbnailListItem_c *)v13;
    sub_1C36FFC(p_attackOffset, (int32_t)v13, v14, v15);
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
  const MethodInfo *v5; // x3

  if ( (byte_4C40979 & 1) == 0 )
  {
    sub_1C37058(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    byte_4C40979 = 1;
  }
  v3 = sub_1C372A4(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v4, v5);
  return (System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *)v3;
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *WarBoardAIRoute_PiecePersonality__MoveOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  CGThumbnailListItem_o *p_moveOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v6; // x0
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v8; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Collections_Generic_List_TSource__o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C40978 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    sub_1C37058(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
    sub_1C37058(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__);
    sub_1C37058(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_4C40978 = 1;
  }
  p_moveOffset = (CGThumbnailListItem_o *)&this->fields.moveOffset;
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
      _9__5_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__5_0, v8, Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__, 0);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v10, v11);
    }
    v12 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v13 = System_Linq_Enumerable__ToList_object_(
            v12,
            (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_moveOffset->klass = (CGThumbnailListItem_c *)v13;
    sub_1C36FFC(p_moveOffset, (int32_t)v13, v14, v15);
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
  CGThumbnailListItem_o *p__7__wrap1; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v11; // x8
  struct WarBoardAIRoute_ActionTrendInfo_o *trendInfo_5__3; // x8
  System_Collections_Generic_List_object__o *FutureTrendInfoList_k__BackingField; // x0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v14; // x9
  __int128 v15; // q0
  CGThumbnailListItem_o *p__7__wrap3; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  bool v22; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v23; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *current; // x1
  bool result; // w0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  bool v32; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v33; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v34; // x1
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v35; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v39; // x8
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-50h]
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o **v42; // [xsp+48h] [xbp-28h]
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v43; // [xsp+58h] [xbp-18h] BYREF

  v43 = this;
  v2 = this;
  if ( (byte_4C4097C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    this = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    byte_4C4097C = 1;
  }
  v42 = &v43;
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
    goto LABEL_12;
  if ( _1__state == 1 )
  {
    trendInfo_5__3 = v2->fields._trendInfo_5__3;
    v2->fields.__1__state = -3;
    if ( !trendInfo_5__3 )
      sub_1C372B4(this);
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_1C372B4(0);
    System_Collections_Generic_List_object___GetEnumerator(
      &v40,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v14 = v43;
    v15 = *(_OWORD *)&v40.fields._list;
    p__7__wrap3 = (CGThumbnailListItem_o *)&v43->fields.__7__wrap3;
    v41 = v40;
    v43->fields.__7__wrap3.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v40.fields._current;
    *(_OWORD *)&v14->fields.__7__wrap3.fields._list = v15;
    sub_1C36FFC(p__7__wrap3, 0, v17, v18);
    v2 = v43;
LABEL_12:
    v2->fields.__1__state = -4;
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap3,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    v23 = v43;
    if ( v22 )
    {
      current = v43->fields.__7__wrap3.fields._current;
      v43->fields.__2__current = current;
      sub_1C36FFC((CGThumbnailListItem_o *)&v23->fields.__2__current, (int32_t)current, v20, v21);
      result = 1;
      v43->fields.__1__state = 2;
      return result;
    }
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(v43, v19);
    v26 = v43;
    *(_OWORD *)&v43->fields._trendInfo_5__3 = 0u;
    v26 = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)((char *)v26 + 72);
    *(_OWORD *)&v26->fields.__1__state = 0u;
    sub_1C36FFC((CGThumbnailListItem_o *)v26, 0, v27, v28);
    v11 = v43;
    goto LABEL_15;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C372B4(this);
  actionTrandList = (System_Collections_Generic_List_object__o *)_4__this->fields.actionTrandList;
  if ( !actionTrandList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    &v40,
    actionTrandList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v6 = v43;
  v7 = *(_OWORD *)&v40.fields._list;
  p__7__wrap1 = (CGThumbnailListItem_o *)&v43->fields.__7__wrap1;
  v41 = v40;
  v43->fields.__7__wrap1.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v40.fields._current;
  *(_OWORD *)&v6->fields.__7__wrap1.fields._list = v7;
  sub_1C36FFC(p__7__wrap1, 0, v9, v10);
  v11 = v43;
  v43->fields.__1__state = -3;
LABEL_15:
  v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v11->fields.__7__wrap1,
          (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
  v33 = v43;
  if ( v32 )
  {
    v34 = v43->fields.__7__wrap1.fields._current;
    v43->fields._trendInfo_5__3 = v34;
    sub_1C36FFC((CGThumbnailListItem_o *)&v33->fields._trendInfo_5__3, (int32_t)v34, v30, v31);
    v35 = v43;
    v36 = v43->fields._trendInfo_5__3;
    v43->fields.__2__current = v36;
    sub_1C36FFC((CGThumbnailListItem_o *)&v35->fields.__2__current, (int32_t)v36, v37, v38);
    result = 1;
    v43->fields.__1__state = 1;
  }
  else
  {
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(v43, v29);
    v39 = v43;
    result = 0;
    v43->fields.__7__wrap1.fields._list = 0;
    *(_QWORD *)&v39->fields.__7__wrap1.fields._index = 0;
    v39->fields.__7__wrap1.fields._current = 0;
  }
  return result;
}


System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__GetEnumerator(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C4097F & 1) == 0 )
  {
    sub_1C37058(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    byte_4C4097F = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C372A4(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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
  if ( (byte_4C4097D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    byte_4C4097D = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C4097E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    byte_4C4097E = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void WarBoardAIRoute_PiecePersonality___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4097B & 1) == 0 )
  {
    sub_1C37058(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_4C4097B = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_PiecePersonality___c_o *)v1;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C372B4(this);
  return x->fields.type == 0;
}


bool WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.type == 1;
}


void WarBoardAIRoute_PutSquareTarget___ctor(WarBoardAIRoute_PutSquareTarget_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C4098D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
    byte_4C4098D = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v3,
    (const MethodInfo_343EA1C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v6,
    (const MethodInfo_343EA1C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dicObjectPutSquareIndex, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v9,
    (const MethodInfo_343EA1C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dicIndividualityPutSqareIndex, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIRoute_RouteData___ctor(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C40986 & 1) == 0 )
  {
    sub_1C37058(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
    byte_4C40986 = 1;
  }
  this->fields.flagNow = 1;
  v3 = (Il2CppObject *)sub_1C372A4(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.evalOffsetMagnification = (struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.evalOffsetMagnification, (int32_t)v3, v4, v5);
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

  if ( (byte_4C40988 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&System_Decimal_TypeInfo);
    byte_4C40988 = 1;
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
  v7 = System_Decimal__op_Implicit_65472708((System_Decimal_o *)v4, WarBoardEvalFactorsAffectRatio, 0);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_1C372B4(0);
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
  v25 = System_Decimal__op_Implicit_65472708(cctor_finished, attackEvalOffsetAddValue, 0);
  v28 = System_Decimal__op_Division(v27, v25, v26, (const MethodInfo *)v7);
  v30 = System_Decimal__op_Addition(v29, AttackValue, v20, (const MethodInfo *)v28);
  this->fields.evalValue = System_Decimal__op_Explicit_65473212(v30, v31);
}


bool WarBoardAIRoute_RouteData__HasActionPiece(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return this->fields.actionPiece != 0;
}


bool WarBoardAIRoute_RouteData__HasFlag(WarBoardAIRoute_RouteData_o *this, int64_t flag, const MethodInfo *method)
{
  return (flag & ~this->fields.flagNow) == 0;
}


bool WarBoardAIRoute_RouteData__HasFlag_37884956(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_4C40985 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__);
    byte_4C40985 = 1;
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

  if ( (byte_4C40987 & 1) == 0 )
  {
    sub_1C37058(&WarBoardAIRoute_RouteData_TypeInfo);
    byte_4C40987 = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0);
  if ( result )
  {
    naturalAligment = WarBoardAIRoute_RouteData_TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      sub_1C37574(result);
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
  CGThumbnailListItem_o *p_futureLookingTrendHashSet; // x19
  System_Collections_Generic_HashSet_T__o *v4; // x20
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C40984 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    byte_4C40984 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = (CGThumbnailListItem_o *)&this->fields.futureLookingTrendHashSet;
  v4 = (System_Collections_Generic_HashSet_T__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v4 = (System_Collections_Generic_HashSet_T__o *)sub_1C372A4(System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v4,
      (const MethodInfo_365A090 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    p_futureLookingTrendHashSet->klass = (CGThumbnailListItem_c *)v4;
    sub_1C36FFC(p_futureLookingTrendHashSet, (int32_t)v4, v6, v7);
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

  if ( (byte_4C40989 & 1) == 0 )
  {
    sub_1C37058(&System_Decimal_TypeInfo);
    byte_4C40989 = 1;
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

  if ( (byte_4C4098A & 1) == 0 )
  {
    sub_1C37058(&System_Decimal_TypeInfo);
    byte_4C4098A = 1;
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


void WarBoardAIRoute_TargetData___ctor_37867820(
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
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.targetSquare = targetSquare;
  v8 = (WarBoardAIRoute_TargetData_o *)((char *)v8 + 48);
  v8->fields.targetObject = (struct IWarBoardObjectData_o *)actionTrendKey;
  v8->fields.moveByDistanceType = conditionId;
  sub_1C36FFC((CGThumbnailListItem_o *)v8, (int32_t)targetSquare, v9, v10);
}


void WarBoardAIRoute_TargetData___ctor_37869276(
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
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.actionTrendKey = actionTrendKey;
  this->fields.conditionId = conditionId;
  this->fields.targetObject = targetObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)targetObject, v9, v10);
  WarBoardAIRoute_TargetData__DetectObject(this, v11);
}


void WarBoardAIRoute_TargetData___ctor_37879692(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct IWarBoardObjectData_o *targetObject; // x1
  struct WarBoardSquareData_o *targetSquare; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !baseTargetData )
    sub_1C372B4(v11);
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)targetObject, v12, v13);
  targetSquare = baseTargetData->fields.targetSquare;
  this->fields.targetSquare = targetSquare;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.targetSquare, (int32_t)targetSquare, v16, v17);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v18);
}


void WarBoardAIRoute_TargetData___ctor_37881700(
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
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.targetObject = targetObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)targetObject, v13, v14);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v15);
}


void WarBoardAIRoute_TargetData___ctor_37894984(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
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
  if ( (byte_4C4098E & 1) == 0 )
  {
    b = (WarBoardAIRoute_TargetData_o *)sub_1C37058(&WarBoardAIRoute_TargetData_TypeInfo);
    byte_4C4098E = 1;
  }
  if ( !v2 )
LABEL_9:
    sub_1C372B4(b);
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone(v2, 0);
  if ( result )
  {
    naturalAligment = WarBoardAIRoute_TargetData_TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      sub_1C37574(result);
      goto LABEL_9;
    }
  }
  return result;
}


void WarBoardAIRoute_TargetData__DetectObject(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct IWarBoardObjectData_o *targetObject; // x8
  WarBoardPieceData_c *v6; // x9
  __int64 naturalAligment; // x10
  struct IWarBoardObjectData_o *v8; // x11
  int32_t v9; // w1
  struct WarBoardPieceData_o **p_targetPiece; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct IWarBoardObjectData_o *v13; // x8
  WarBoardItemData_c *v14; // x9
  __int64 v15; // x10
  struct IWarBoardObjectData_o *v16; // x11
  int32_t v17; // w1
  struct WarBoardItemData_o **p_targetItem; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct IWarBoardObjectData_o *v21; // x8
  WarBoardTreasureData_c *v22; // x9
  __int64 v23; // x10
  struct IWarBoardObjectData_o *v24; // x11
  int32_t v25; // w1
  struct WarBoardTreasureData_o **p_targetTreasure; // x19

  if ( (byte_4C40990 & 1) == 0 )
  {
    sub_1C37058(&WarBoardItemData_TypeInfo);
    sub_1C37058(&WarBoardPieceData_TypeInfo);
    sub_1C37058(&WarBoardTreasureData_TypeInfo);
    byte_4C40990 = 1;
  }
  targetObject = this->fields.targetObject;
  if ( targetObject )
  {
    v6 = WarBoardPieceData_TypeInfo;
    naturalAligment = WarBoardPieceData_TypeInfo->_2.naturalAligment;
    if ( targetObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardPieceData_TypeInfo )
        v8 = this->fields.targetObject;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    this->fields.targetPiece = (struct WarBoardPieceData_o *)v8;
    p_targetPiece = &this->fields.targetPiece;
    if ( targetObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[naturalAligment - 1] == v6 )
        v9 = (int)targetObject;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = 0;
    this->fields.targetPiece = 0;
    p_targetPiece = &this->fields.targetPiece;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)p_targetPiece, v9, v2, v3);
  v13 = this->fields.targetObject;
  if ( v13 )
  {
    v14 = WarBoardItemData_TypeInfo;
    v15 = WarBoardItemData_TypeInfo->_2.naturalAligment;
    if ( v13->klass->_2.naturalAligment >= (unsigned int)v15 )
    {
      if ( (WarBoardItemData_c *)v13->klass->_2.typeHierarchy[v15 - 1] == WarBoardItemData_TypeInfo )
        v16 = this->fields.targetObject;
      else
        v16 = 0;
    }
    else
    {
      v16 = 0;
    }
    this->fields.targetItem = (struct WarBoardItemData_o *)v16;
    p_targetItem = &this->fields.targetItem;
    if ( v13->klass->_2.naturalAligment >= (unsigned int)v15 )
    {
      if ( (WarBoardItemData_c *)v13->klass->_2.typeHierarchy[v15 - 1] == v14 )
        v17 = (int)v13;
      else
        v17 = 0;
    }
    else
    {
      v17 = 0;
    }
  }
  else
  {
    v17 = 0;
    this->fields.targetItem = 0;
    p_targetItem = &this->fields.targetItem;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)p_targetItem, v17, v11, v12);
  v21 = this->fields.targetObject;
  if ( v21 )
  {
    v22 = WarBoardTreasureData_TypeInfo;
    v23 = WarBoardTreasureData_TypeInfo->_2.naturalAligment;
    if ( v21->klass->_2.naturalAligment >= (unsigned int)v23 )
    {
      if ( (WarBoardTreasureData_c *)v21->klass->_2.typeHierarchy[v23 - 1] == WarBoardTreasureData_TypeInfo )
        v24 = this->fields.targetObject;
      else
        v24 = 0;
    }
    else
    {
      v24 = 0;
    }
    this->fields.targetTreasure = (struct WarBoardTreasureData_o *)v24;
    p_targetTreasure = &this->fields.targetTreasure;
    if ( v21->klass->_2.naturalAligment >= (unsigned int)v23 )
    {
      if ( (WarBoardTreasureData_c *)v21->klass->_2.typeHierarchy[v23 - 1] == v22 )
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
    this->fields.targetTreasure = 0;
    p_targetTreasure = &this->fields.targetTreasure;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)p_targetTreasure, v25, v19, v20);
}


void WarBoardAIRoute_TargetData__Init(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x5
  struct IWarBoardObjectData_o *targetObject; // x24
  WarBoardAIRoute_TargetData_o *v12; // x25
  IWarBoardObjectData_c *klass; // x8
  __int64 v14; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 v16; // x0
  struct WarBoardSquareData_o *targetSquare; // x8
  __int64 squareIndex_k__BackingField; // x0
  int32_t nowSquareIndex; // w24
  struct System_Int32_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  WarBoardAIRoute_TargetData___c_c *v23; // x0
  System_Int32_array *baseRoute; // x24
  WarBoardPieceData_o *v25; // x21
  System_Func_object__int__o *_9__7_0; // x25
  Il2CppObject *v27; // x26
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Int32_array *v32; // x0
  const MethodInfo *v33; // x2
  bool IsDetour; // w0
  const MethodInfo *v35; // x5
  int32_t v36; // w23
  struct System_Int32_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w0
  struct IWarBoardObjectData_o *v41; // x21
  WarBoardAIRoute_TargetData_o *v42; // x22
  IWarBoardObjectData_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  struct WarBoardSquareData_o *v47; // x8

  if ( (byte_4C4098F & 1) == 0 )
  {
    sub_1C37058(&AStarSearch_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_Func_WarBoardPieceData__int__TypeInfo);
    sub_1C37058(&IWarBoardObjectData_TypeInfo);
    sub_1C37058(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__);
    sub_1C37058(&WarBoardAIRoute_TargetData___c_TypeInfo);
    byte_4C4098F = 1;
  }
  WarBoardAIRoute_TargetData__DetectObject(this, (const MethodInfo *)baseTargetData);
  targetObject = this->fields.targetObject;
  if ( targetObject )
    v12 = this;
  else
    v12 = 0;
  if ( targetObject )
  {
    klass = targetObject->klass;
    v14 = *(unsigned __int16 *)&targetObject->klass->_2.rank;
    if ( *(_WORD *)&targetObject->klass->_2.rank )
    {
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v14;
        p_offset += 2;
        if ( !v14 )
          goto LABEL_11;
      }
      v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
    }
    else
    {
LABEL_11:
      v16 = sub_1C87870(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v16)(
                                    targetObject,
                                    *(_QWORD *)(v16 + 8));
    if ( !v12 )
LABEL_49:
      sub_1C372B4(squareIndex_k__BackingField);
  }
  else
  {
    targetSquare = this->fields.targetSquare;
    if ( targetSquare )
      squareIndex_k__BackingField = (unsigned int)targetSquare->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = 0xFFFFFFFFLL;
    v12 = this;
    if ( !this )
      goto LABEL_49;
  }
  v12->fields.nowSquareIndex = squareIndex_k__BackingField;
  nowSquareIndex = this->fields.nowSquareIndex;
  if ( !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  v20 = AStarSearch__RouteSearch(0, baseSquareIndex, nowSquareIndex, 0, 0, v10);
  this->fields.baseRoute = v20;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseRoute, (int32_t)v20, v21, v22);
  v23 = WarBoardAIRoute_TargetData___c_TypeInfo;
  baseRoute = this->fields.baseRoute;
  if ( !WarBoardAIRoute_TargetData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIRoute_TargetData___c_TypeInfo);
    v23 = WarBoardAIRoute_TargetData___c_TypeInfo;
  }
  v25 = piece;
  _9__7_0 = (System_Func_object__int__o *)v23->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = WarBoardAIRoute_TargetData___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v23->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v27, Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, 0);
    static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v32 = System_Linq_Enumerable__ToArray_int_(
          v31,
          (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v32, v33);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    v36 = this->fields.nowSquareIndex;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v37 = AStarSearch__RouteSearch(v25, baseSquareIndex, v36, 1, 0, v35);
    this->fields.detourRoute = v37;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.detourRoute, (int32_t)v37, v38, v39);
  }
  v40 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
  v41 = this->fields.targetObject;
  this->fields.isAround = v40 == 2;
  if ( v41 )
    v42 = this;
  else
    v42 = 0;
  if ( v41 )
  {
    v43 = v41->klass;
    v44 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((IWarBoardObjectData_c **)v45 - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_39;
      }
      v46 = (__int64)&v43->vtable[*v45];
    }
    else
    {
LABEL_39:
      v46 = sub_1C87870(v41, IWarBoardObjectData_TypeInfo, 0);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v46)(
                                    v41,
                                    *(_QWORD *)(v46 + 8));
    if ( !v42 )
      goto LABEL_49;
  }
  else
  {
    v47 = this->fields.targetSquare;
    if ( v47 )
      squareIndex_k__BackingField = (unsigned int)v47->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = 0xFFFFFFFFLL;
    v42 = this;
    if ( !this )
      goto LABEL_49;
  }
  v42->fields.putSquareIndex = squareIndex_k__BackingField;
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
  const MethodInfo *v3; // x3

  if ( (byte_4C40991 & 1) == 0 )
  {
    sub_1C37058(&WarBoardAIRoute_TargetData___c_TypeInfo);
    byte_4C40991 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(WarBoardAIRoute_TargetData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute_TargetData___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_TargetData___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)WarBoardAIRoute_TargetData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
  const MethodInfo *v3; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v4; // x20
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct WarBoardData_o *monitor; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v11; // x0
  WarBoardAIRoute_o *v12; // x0
  const MethodInfo *v13; // x6
  struct WarBoardStageNpcEntity_o *npcData; // x9
  int32_t searchDepth; // w8
  WarBoardAIRoute__CreateRouteData_d__47_o *v16; // x9
  int32_t v17; // w10
  int32_t v18; // w20
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x2
  int32_t MasterSquareIndex; // w2
  System_Collections_Generic_Dictionary_int__uint__o *v22; // x1
  const MethodInfo *v23; // x3
  struct System_Int32_array *AllyPutSquareIndicesWithoutMaster; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  CGThumbnailListItem_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x0
  struct WarBoardData_o *warBoardData_5__2; // x8
  System_Collections_Generic_List_int__o *masterExistsForce; // x0
  _BOOL8 v34; // x0
  const MethodInfo *v35; // x4
  WarBoardAIRoute__CreateRouteData_d__47_o *v36; // x8
  int32_t servantAndEnemyRange_5__14; // w8
  int32_t servantAndEnemyMasterRange_5__15; // w9
  struct WarBoardAIRoute_AIRouteMasterData_o *v39; // x9
  int32_t v40; // w9
  struct DefenseAreaData_o *DefenseAreaData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x0
  const MethodInfo *v46; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v47; // x8
  struct DefenseAreaData_o *defenseAreaData_5__7; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x10
  bool IsAllBlockShortestRouteEnemyAndMastr; // w0
  System_Collections_Generic_Dictionary_int__uint__o *v51; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v52; // x8
  __int128 v53; // q0
  CGThumbnailListItem_o *p__7__wrap8; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x1
  Il2CppObject *key; // x20
  Il2CppObject *v59; // x21
  WarBoardAIRoute__CreateRouteData_d__47_o *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x1
  WarBoardSquareData_o *Square; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *_8__1; // x21
  const MethodInfo *v69; // x1
  WarBoardPieceData_o *PieceUnique; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  __int64 v73; // x0
  const MethodInfo *v74; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v75; // x8
  int64_t baseFlag_5__6; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v77; // x9
  int64_t v78; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v79; // x8
  System_Collections_Generic_IEnumerable_TSource__o *routeDataList; // x21
  Il2CppObject *v81; // x23
  System_Func_object__bool__o *v82; // x22
  int32_t v83; // w8
  System_Collections_Generic_List_object__o *v84; // x0
  WarBoardAIRoute_o *Only; // x0
  const MethodInfo *v86; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v87; // x8
  __int64 RouteSumPieceActionCost; // x0
  const MethodInfo *v89; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v90; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v91; // x9
  _BOOL8 IsActable; // x0
  const MethodInfo *v93; // x4
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v94; // x9
  System_Collections_Generic_Dictionary_int__int__o *DesignationItemToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  __int64 v99; // x0
  const MethodInfo *v100; // x4
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v101; // x9
  struct System_Collections_Generic_Dictionary_int__int__o *TargetToDistance_37881812; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v103; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v106; // x1
  const MethodInfo *v107; // x5
  System_Collections_Generic_Dictionary_uint__int__o *AllEnemyToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v109; // x0
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v112; // x0
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  __int64 v115; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v116; // x8
  WarBoardPieceData_o *basePiece; // x0
  _BOOL8 isServant; // x0
  const MethodInfo *v119; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v120; // x9
  WarBoardAIRoute_AdvantagePieceData_o *AdvantagePieceData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v122; // x0
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  const MethodInfo *v125; // x5
  int32_t masterSquareIndex_5__4; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v127; // x0
  __int64 v128; // x0
  const MethodInfo *v129; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v130; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v131; // x9
  struct WarBoardPieceData_o *v132; // x11
  struct WarBoardAIRoute_AIRouteMasterData_o *v133; // x9
  int32_t masterType; // w10
  int32_t index_k__BackingField; // w11
  struct WarBoardStageNpcEntity_o *v136; // x12
  System_Collections_Generic_HashSet_T__o *v137; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v138; // x0
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  System_Collections_Generic_HashSet_T__o *v141; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v142; // x0
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  System_Collections_Generic_List_object__o *v145; // x0
  _BOOL8 v146; // x0
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v149; // x10
  struct WarBoardPieceData_o *v150; // x10
  System_Collections_Generic_HashSet_T__o *basePieceActionPieceRouteList_5__22; // x0
  _DWORD *v152; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v153; // x10
  struct WarBoardPieceData_o *v154; // x10
  struct WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData_5__21; // x0
  __int64 v156; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v157; // x8
  int32_t v158; // w9
  System_Collections_Generic_IEnumerable_TSource__o *v159; // x20
  WarBoardAIRoute___c_c *v160; // x8
  System_Func_T__TResult__o *_9__47_6; // x21
  Il2CppObject *v162; // x22
  struct WarBoardAIRoute___c_StaticFields *v163; // x0
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v166; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v167; // x0
  __int64 Count; // x0
  struct WarBoardStageNpcEntity_o *v169; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v170; // x11
  float v171; // s0
  int32_t v172; // w9
  int32_t calcEllipsisMin; // w8
  System_Linq_IOrderedEnumerable_TSource__c *v174; // x8
  __int64 v175; // x9
  int32_t *p_offset; // x10
  __int64 v177; // x0
  __int64 v178; // x1
  int32_t *v179; // x0
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  __int64 *v182; // x19
  __int64 v183; // x8
  __int64 v184; // x9
  int *v185; // x10
  __int64 v186; // x0
  __int64 v187; // x0
  __int64 *v188; // x19
  __int64 v189; // x8
  __int64 v190; // x9
  int *v191; // x10
  __int64 v192; // x0
  int32_t *p__7__wrap24; // x0
  int32_t v194; // w2
  const MethodInfo *v195; // x3
  Il2CppObject *v196; // x1
  CGThumbnailListItem_o *v197; // x0
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  WarBoardSquareData_o *v200; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *MyAndLinkedSquareIndecies; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v202; // x0
  int32_t v203; // w2
  const MethodInfo *v204; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v205; // x8
  int v206; // w9
  __int64 v207; // x21
  __int64 v208; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v209; // x8
  __int64 _7__wrap23_low; // x9
  int32_t *v211; // x27
  WarBoardAIRoute_RouteData_o *v212; // x20
  const MethodInfo *v213; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v214; // x9
  int32_t getEnumeratorRetType; // w8
  int32_t v216; // w10
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v217; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dicBaseDIRange_5__18; // x20
  WarBoardAIRoute___c_c *v219; // x8
  System_Func_T__TResult__o *_9__47_1; // x22
  Il2CppObject *v221; // x23
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v223; // w2
  const MethodInfo *v224; // x3
  System_Func_T__TResult__o *_9__47_2; // x23
  Il2CppObject *v226; // x24
  struct WarBoardAIRoute___c_StaticFields *v227; // x0
  int32_t v228; // w2
  const MethodInfo *v229; // x3
  int32_t v230; // w2
  const MethodInfo *v231; // x3
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v232; // x20
  WarBoardAIRoute_RouteData_o *v233; // x0
  struct WarBoardSquareData_o *v234; // x1
  __int64 v235; // x0
  int32_t v236; // w2
  const MethodInfo *v237; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v238; // x8
  WarBoardAIRoute_RouteData_o *v239; // x0
  struct WarBoardPieceData_o *v240; // x1
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  WarBoardAIRoute_RouteData_o *v243; // x0
  const MethodInfo *v244; // x1
  WarBoardAIRoute_RouteData_o *v245; // x22
  int32_t v246; // w23
  WarBoardSquareData_o *v247; // x0
  int32_t v248; // w2
  const MethodInfo *v249; // x3
  System_Collections_Generic_Dictionary_uint__int__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v251; // x19
  const MethodInfo *v252; // x4
  System_Collections_Generic_Dictionary_uint__int__o *v253; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v255; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v256; // x8
  WarBoardAIRoute_RouteData_o *v257; // x22
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *MoveByTargetDistance; // x0
  int32_t v259; // w2
  const MethodInfo *v260; // x3
  WarBoardAIRoute_o *v261; // x0
  WarBoardPieceData_o *v262; // x1
  const MethodInfo *v263; // x4
  WarBoardAIRoute_RouteData_o *v264; // x20
  WarBoardPieceData_o *ActionPiece; // x0
  int32_t v266; // w2
  const MethodInfo *v267; // x3
  CGThumbnailListItem_o *p_actionPiece; // x0
  int32_t v269; // w2
  const MethodInfo *v270; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v271; // x8
  struct WarBoardPieceData_o *v272; // x9
  struct WarBoardPieceData_o *v273; // x10
  struct WarBoardPieceData_o *v274; // x8
  int32_t limitActionCount_k__BackingField; // w19
  int32_t currentActionCount_k__BackingField; // w20
  System_Math_c *v277; // x0
  WarBoardAIRoute_RouteData_o *v278; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v279; // x9
  int v280; // w11
  struct WarBoardSquareData_o *baseSquare_5__11; // x10
  WarBoardData_o *v282; // x0
  const MethodInfo *v283; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v284; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v285; // x9
  WarBoardPieceData_o *v286; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v287; // x8
  WarBoardPieceData_o *v288; // x0
  WarBoardPieceData_o *v289; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v290; // x8
  WarBoardPieceData_o *v291; // x22
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v292; // x8
  WarBoardPieceData_o *v293; // x0
  WarBoardPieceData_o *v294; // x0
  WarBoardAIRoute_RouteData_o *v295; // x8
  struct WarBoardPieceData_o *v296; // x9
  WarBoardPieceData_o *v297; // x0
  WarBoardAIRoute_RouteData_o *v298; // x19
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v299; // x8
  struct WarBoardPieceData_o *v300; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  int64_t flagNow; // x22
  __int64 ClassId; // x0
  struct WarBoardPieceData_o *v304; // x8
  int32_t v305; // w20
  BattleServantData_o *v306; // x0
  WarBoardAIRoute_o *v307; // x0
  const MethodInfo *v308; // x3
  int64_t FlagAdvantage; // x0
  const MethodInfo *v310; // x5
  struct WarBoardPieceData_o *v311; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v312; // x8
  WarBoardPieceData_o *v313; // x22
  WarBoardAIRoute_RouteData_o *v314; // x2
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v315; // x9
  WarBoardPieceData_o *v316; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v317; // x9
  System_Collections_Generic_List_object__o *v318; // x0
  int32_t requiredCost_5__3; // w23
  WarBoardPieceData_o *v320; // x20
  WarBoardPieceData_o *v321; // x22
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v322; // x4
  const MethodInfo *v323; // x6
  const MethodInfo *v324; // x2
  int32_t MasterSquareIndexFromPlaceData; // w22
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v326; // x23
  System_Func_object__bool__o *v327; // x24
  DefenseAreaData_o *v328; // x0
  const MethodInfo *v329; // x3
  struct WarBoardAIRoute_AdvantagePieceData_o *v330; // x23
  System_Func_object__bool__o *v331; // x24
  struct DefenseAreaData_o *v332; // x23
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v333; // x9
  WarBoardPieceData_o *v334; // x0
  System_Int32_array *v335; // x2
  const MethodInfo *v336; // x4
  struct WarBoardAIRoute_AIRouteMasterData_o *v337; // x8
  _BOOL8 v338; // x0
  WarBoardAIRoute_RouteData_o *v339; // x21
  int64_t v340; // x8
  System_Collections_Generic_List_object__o *v341; // x23
  __int64 v342; // x0
  int32_t v343; // w2
  const MethodInfo *v344; // x3
  __int64 v345; // x0
  WarBoardAIRoute_RouteData_o *v346; // x21
  System_Collections_Generic_Dictionary_uint__int__o *v347; // x23
  int32_t v348; // w2
  const MethodInfo *v349; // x3
  System_Collections_Generic_Dictionary_int__uint__o *v350; // x0
  _BOOL8 v351; // x0
  const MethodInfo *v352; // x5
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v353; // x8
  struct WarBoardPieceData_o *v354; // x8
  uint32_t key_high; // w21
  int32_t v356; // w24
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x23
  int32_t v358; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v359; // x0
  __int64 v360; // x0
  CGThumbnailListItem_o *v361; // x21
  System_Collections_Generic_List_int__o *v362; // x23
  __int64 v363; // x0
  int32_t v364; // w2
  const MethodInfo *v365; // x3
  WarBoardAIRoute_RouteData_o *v366; // x21
  System_Collections_Generic_Dictionary_int__bool__o *v367; // x23
  __int64 v368; // x0
  int32_t v369; // w2
  const MethodInfo *v370; // x3
  WarBoardAIRoute_RouteData_o *v371; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v372; // x23
  __int64 v373; // x0
  int32_t v374; // w2
  const MethodInfo *v375; // x3
  __int64 v376; // x0
  WarBoardAIRoute_RouteData_o *v377; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v378; // x8
  WarBoardPieceData_o *v379; // x0
  _BOOL8 IsBlockShortestRouteEnemyAndMaster; // x0
  const MethodInfo *v381; // x2
  const MethodInfo *v382; // x3
  const MethodInfo *v383; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v384; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v385; // x9
  struct WarBoardPieceData_o *v386; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v387; // x10
  DefenseAreaData_o *v388; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v389; // x9
  struct WarBoardPieceData_o *v390; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v391; // x11
  int32_t v392; // w10
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v393; // x9
  struct WarBoardPieceData_o *v394; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v395; // x10
  int32_t v396; // w21
  WarBoardAIRoute_RouteData_o *v397; // x9
  int v398; // w10
  System_Collections_Generic_IEnumerable_TSource__o *v399; // x0
  __int64 v400; // x0
  int tmpFlagNow_5__12; // w10
  bool v402; // zf
  System_Collections_Generic_Dictionary_int__int__o *v403; // x0
  const MethodInfo *v404; // x5
  int32_t v405; // w21
  int v406; // w29
  int32_t v407; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v408; // x0
  __int64 v409; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x8
  int v411; // w9
  int32_t v412; // w2
  __int64 v413; // x0
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  __int64 v415; // x0
  struct System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v418; // x9
  __int64 size; // x10
  const MethodInfo *v420; // x5
  int32_t v421; // w21
  int32_t enemyMasterSquareIndex; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v423; // x0
  __int64 v424; // x0
  const MethodInfo *v425; // x3
  WarBoardAIRoute_RouteData_o *v426; // x19
  int32_t servantAndMasterRange_5__13; // w8
  bool v428; // zf
  int32_t v429; // w8
  WarBoardAIManager_c *v430; // x0
  WarBoardAIRoute_o *v431; // x0
  const MethodInfo *v432; // x4
  struct WarBoardAIRoute_AIRouteMasterData_o *v433; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v434; // x8
  WarBoardPieceData_o *v435; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v436; // x9
  struct WarBoardPieceData_o *v437; // x9
  WarBoardAIManager_c *v438; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v441; // x5
  int32_t currentKey; // w21
  int32_t v443; // w22
  System_Int32_array *v444; // x0
  struct WarBoardStageNpcEntity_o *v445; // x8
  const MethodInfo *v446; // x3
  WarBoardAIRoute_RouteData_o *v447; // x19
  WarBoardAIManager_c *v448; // x0
  struct DefenseAreaData_o *v449; // x8
  __int64 v450; // x0
  WarBoardAIManager_c *v451; // x0
  System_Collections_Generic_Dictionary_int__object__o *v452; // x0
  const MethodInfo *v453; // x5
  bool v454; // w21
  int32_t v455; // w22
  int32_t v456; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v457; // x22
  const MethodInfo *v458; // x2
  WarBoardAIRoute_RouteData_o *v459; // x19
  WarBoardData_o *v460; // x0
  WarBoardEffectData_o *Effect; // x0
  System_Collections_Generic_List_int__o *v462; // x22
  System_Collections_Generic_List_object__o *v463; // x0
  _BOOL8 v464; // x0
  Il2CppObject *v465; // x21
  Il2CppClass *v466; // x0
  _BOOL8 v467; // x0
  int32_t monitor_high; // w1
  struct System_Int32_array *v469; // x8
  _QWORD *v470; // x9
  __int64 v471; // x10
  WarBoardPieceData_o *v472; // x0
  WarBoardPieceData_o *v473; // x0
  _BOOL8 v474; // x0
  int32_t v475; // w1
  struct System_Int32_array *v476; // x8
  _QWORD *v477; // x9
  __int64 v478; // x10
  __int64 v479; // x0
  WarBoardPieceData_o *v480; // x0
  _BOOL8 v481; // x0
  const MethodInfo *v482; // x3
  _BOOL8 CanAcquireItem; // x0
  const MethodInfo *v484; // x4
  WarBoardAIRoute_RouteData_o *v485; // x8
  int64_t v486; // x9
  WarBoardPieceData_o *v487; // x0
  const MethodInfo *v488; // x3
  WarBoardAIRoute_RouteData_o *v489; // x8
  WarBoardPieceData_o *v490; // x0
  const MethodInfo *v491; // x3
  __int64 v492; // x0
  __int64 FlagOutOfWarningAreaToDistance; // x0
  WarBoardAIRoute_RouteData_o *v494; // x8
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x9
  struct WarBoardPieceData_o *v496; // x8
  System_Collections_Generic_Dictionary_int__object__o *piecePersonalityDic; // x0
  Il2CppObject *v498; // x22
  WarBoardAIEvalCalcurater_o *v499; // x21
  __int64 v500; // x0
  const MethodInfo *v501; // x1
  WarBoardAIRoute___c_c *v502; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v503; // x22
  System_Func_object__object__o *_9__47_5; // x23
  Il2CppObject *v505; // x24
  struct WarBoardAIRoute___c_StaticFields *v506; // x0
  int32_t v507; // w2
  const MethodInfo *v508; // x3
  System_Collections_Generic_IEnumerable_T__o *v509; // x23
  System_Collections_Generic_List_object__o *v510; // x22
  __int64 v511; // x0
  int32_t v512; // w2
  const MethodInfo *v513; // x3
  Il2CppObject *v514; // x1
  struct System_Object_array *v515; // x8
  _QWORD *v516; // x9
  __int64 v517; // x10
  Il2CppClass **v518; // x0
  WarBoardAIRoute_RouteData_o *v519; // x0
  int32_t v520; // w2
  const MethodInfo *v521; // x3
  const MethodInfo *v522; // x1
  System_Collections_Generic_List_object__o *allRouteList; // x0
  struct System_Object_array *v524; // x8
  _QWORD *v525; // x9
  __int64 v526; // x10
  Il2CppClass **v527; // x8
  const MethodInfo *v528; // x4
  int32_t searchCount; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x21
  Il2CppObject *v531; // x0
  CGThumbnailListItem_o *p_basePieceBasePieceRouteList_5__23; // x8
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v533; // x10
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *basePieceBasePieceRouteList_5__23; // t1
  WarBoardAIRoute__CreateRouteData_d__47_o *v535; // x0
  int32_t v536; // w2
  const MethodInfo *v537; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v538; // x0
  int32_t v539; // w2
  const MethodInfo *v540; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v541; // x0
  int32_t v542; // w2
  const MethodInfo *v543; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v544; // x0
  int32_t v545; // w2
  const MethodInfo *v546; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v547; // x0
  int32_t v548; // w2
  const MethodInfo *v549; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v550; // x0
  int32_t v551; // w2
  const MethodInfo *v552; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v553; // x0
  int32_t v554; // w2
  const MethodInfo *v555; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v556; // x0
  int32_t v557; // w2
  const MethodInfo *v558; // x3
  Il2CppObject *v559; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v560; // x0
  int32_t v561; // w2
  const MethodInfo *v562; // x3
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // [xsp+10h] [xbp-1B0h]
  WarBoardAIRoute_o *_4__this; // [xsp+18h] [xbp-1A8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v565; // [xsp+20h] [xbp-1A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v566; // [xsp+50h] [xbp-170h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o **v567; // [xsp+78h] [xbp-148h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v568; // [xsp+80h] [xbp-140h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v569; // [xsp+B0h] [xbp-110h] BYREF
  __int128 v570; // [xsp+D0h] [xbp-F0h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v571; // [xsp+E0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v572; // [xsp+F0h] [xbp-D0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+118h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+120h] [xbp-A0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+128h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v576; // [xsp+130h] [xbp-90h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+148h] [xbp-78h] BYREF
  int32_t actionCount[2]; // [xsp+150h] [xbp-70h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v579; // [xsp+158h] [xbp-68h] BYREF

  v4 = this;
  v579 = this;
  if ( (byte_4C409A2 & 1) == 0 )
  {
    sub_1C37058(&AStarSearch_TypeInfo);
    sub_1C37058(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C37058(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
    sub_1C37058(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C37058(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
    sub_1C37058(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
    sub_1C37058(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___78084616);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C37058(&WarBoardAIRoute_RouteData_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__);
    sub_1C37058(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__);
    sub_1C37058(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__);
    sub_1C37058(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__);
    sub_1C37058(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__);
    sub_1C37058(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
    sub_1C37058(&WarBoardAIRoute___c_TypeInfo);
    sub_1C37058(&WarBoardAIEvalCalcurater_TypeInfo);
    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)sub_1C37058(&WarBoardAIManager_TypeInfo);
    byte_4C409A2 = 1;
  }
  *(_QWORD *)masterReplaceCount = 0;
  *(_QWORD *)actionCount = 0;
  memset(&v576, 0, sizeof(v576));
  value = 0;
  routeData = 0;
  route = 0;
  memset(&v569, 0, sizeof(v569));
  memset(&v572, 0, 32);
  v570 = 0u;
  v571 = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v568, 0, sizeof(v568));
  *(_QWORD *)&v566.fields._getEnumeratorRetType = 0;
  v567 = &v579;
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
      p__7__wrap24 = &v579->fields.__7__wrap24;
      *(_QWORD *)&v579->fields.__7__wrap24 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)p__7__wrap24, 0, v194, v195);
      return 0;
    }
LABEL_117:
    v182 = *(__int64 **)&v4->fields.__7__wrap24;
    if ( !v182 )
      sub_1C372B4(this);
    v183 = *v182;
    v184 = *(unsigned __int16 *)(*v182 + 302);
    if ( *(_WORD *)(*v182 + 302) )
    {
      v185 = (int *)(*(_QWORD *)(v183 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v185 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v184;
        v185 += 4;
        if ( !v184 )
          goto LABEL_122;
      }
      v186 = v183 + 16LL * *v185 + 312;
    }
    else
    {
LABEL_122:
      v186 = sub_1C87870(*(_QWORD *)&v4->fields.__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v187 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v186)(v182, *(_QWORD *)(v186 + 8));
    v4 = v579;
    if ( (v187 & 1) != 0 )
    {
      v188 = *(__int64 **)&v579->fields.__7__wrap24;
      if ( !v188 )
        sub_1C372B4(v187);
      v189 = *v188;
      v190 = *(unsigned __int16 *)(*v188 + 302);
      if ( *(_WORD *)(*v188 + 302) )
      {
        v191 = (int *)(*(_QWORD *)(v189 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v191 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          --v190;
          v191 += 4;
          if ( !v190 )
            goto LABEL_130;
        }
        v192 = v189 + 16LL * *v191 + 312;
      }
      else
      {
LABEL_130:
        v192 = sub_1C87870(
                 *(_QWORD *)&v579->fields.__7__wrap24,
                 System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo,
                 0);
      }
      v196 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v192)(v188, *(_QWORD *)(v192 + 8));
      v197 = (CGThumbnailListItem_o *)v579;
      v579->fields.__2__current = v196;
      v197 = (CGThumbnailListItem_o *)((char *)v197 + 24);
      ++v197[1].fields.sortIndex;
      sub_1C36FFC(v197, (int32_t)v196, v198, v199);
      result = 1;
      v579->fields.__1__state = 2;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    monitor = (struct WarBoardData_o *)Instance[27].monitor;
    v11 = v579;
    v579->fields._warBoardData_5__2 = monitor;
    sub_1C36FFC((CGThumbnailListItem_o *)&v11->fields._warBoardData_5__2, (int32_t)monitor, v8, v9);
    if ( !_4__this )
      sub_1C372B4(v12);
    npcData = _4__this->fields.npcData;
    if ( !npcData )
      sub_1C372B4(v12);
    searchDepth = npcData->fields.searchDepth;
    if ( !searchDepth )
    {
      searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
      npcData->fields.searchDepth = searchDepth;
    }
    v16 = v579;
    v17 = v579->fields.searchCount + 1;
    v579->fields.searchCount = v17;
    if ( v17 > searchDepth )
      return 0;
    *(_QWORD *)masterReplaceCount = 0;
    *(_QWORD *)actionCount = 0;
    WarBoardAIRoute__GetRouteDataActionList(
      v12,
      v16->fields.routeDataList,
      &actionCount[1],
      actionCount,
      &masterReplaceCount[1],
      masterReplaceCount,
      v13);
    v18 = masterReplaceCount[1] * _4__this->fields.masterMoveCost
        + (actionCount[0] + 2 * actionCount[1]) * _4__this->fields.moveCost
        + masterReplaceCount[0] * (_4__this->fields.masterMoveCost + _4__this->fields.moveCost);
    v579->fields._requiredCost_5__3 = v18;
    v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v19 )
      sub_1C372B4(0);
    if ( v18 >= SHIDWORD(v19[47].klass) )
      return 0;
    MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v579->fields.piecePlaceData, v20);
    v22 = v579->fields.piecePlaceData;
    v579->fields._masterSquareIndex_5__4 = MasterSquareIndex;
    AllyPutSquareIndicesWithoutMaster = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                          _4__this,
                                          v22,
                                          MasterSquareIndex,
                                          v23);
    v25 = v579;
    v579->fields._allyPieceIndexs_5__5 = AllyPutSquareIndicesWithoutMaster;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&v25->fields._allyPieceIndexs_5__5,
      (int32_t)AllyPutSquareIndicesWithoutMaster,
      v26,
      v27);
    v28 = (CGThumbnailListItem_o *)v579;
    v579->fields._defenseAreaData_5__7 = 0;
    v28 = (CGThumbnailListItem_o *)((char *)v28 + 104);
    v28[-1].fields._ThumbnailSpritePath_k__BackingField = (struct System_String_o *)(&dword_0 + 1);
    sub_1C36FFC(v28, 0, v29, v30);
    warBoardData_5__2 = v579->fields._warBoardData_5__2;
    if ( !warBoardData_5__2 )
      sub_1C372B4(v31);
    masterExistsForce = warBoardData_5__2->fields.masterExistsForce;
    if ( !masterExistsForce )
      sub_1C372B4(0);
    v34 = System_Collections_Generic_List_int___Contains(
            masterExistsForce,
            _4__this->fields.forceId,
            (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
    v36 = v579;
    if ( v34 )
    {
      if ( v579 )
      {
        v579->fields._masterExists_5__8 = 1;
LABEL_25:
        DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                            _4__this,
                            v36->fields._masterSquareIndex_5__4,
                            v36->fields._allyPieceIndexs_5__5,
                            v36->fields.piecePlaceData,
                            v35);
        v42 = v579;
        v579->fields._defenseAreaData_5__7 = DefenseAreaData;
        sub_1C36FFC((CGThumbnailListItem_o *)&v42->fields._defenseAreaData_5__7, (int32_t)DefenseAreaData, v43, v44);
        v47 = v579;
        defenseAreaData_5__7 = v579->fields._defenseAreaData_5__7;
        if ( !defenseAreaData_5__7 )
          sub_1C372B4(v45);
        v579->fields._baseFlag_5__6 |= defenseAreaData_5__7->fields._Flag_k__BackingField;
        aiRouteMasterData = _4__this->fields.aiRouteMasterData;
        if ( !aiRouteMasterData )
          sub_1C372B4(v45);
        IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                                 defenseAreaData_5__7->fields._ShortestRoutes_k__BackingField,
                                                 v47->fields.piecePlaceData,
                                                 aiRouteMasterData->fields.masterType == 1,
                                                 v46);
        v36 = v579;
        if ( IsAllBlockShortestRouteEnemyAndMastr )
          v579->fields._baseFlag_5__6 |= 0x20000000uLL;
LABEL_29:
        v51 = v36->fields.piecePlaceData;
        if ( !v51 )
          sub_1C372B4(0);
        System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
          &v566,
          v51,
          (const MethodInfo_341EDB8 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
        v52 = v579;
        v53 = *(_OWORD *)&v566.fields._dictionary;
        p__7__wrap8 = (CGThumbnailListItem_o *)&v579->fields.__7__wrap8;
        *(_OWORD *)&v565.fields._dictionary = *(_OWORD *)&v566.fields._dictionary;
        v565.fields._current = v566.fields._current;
        v579->fields.__7__wrap8.fields._current = v566.fields._current;
        *(_OWORD *)&v52->fields.__7__wrap8.fields._dictionary = v53;
        sub_1C36FFC(p__7__wrap8, 0, v55, v56);
        v579->fields.__1__state = -3;
        while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                  &v579->fields.__7__wrap8,
                  (const MethodInfo_3553C48 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
        {
          key = v579->fields.__7__wrap8.fields._current.fields.key;
          v59 = (Il2CppObject *)sub_1C372A4(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
          System_Object___ctor(v59, 0);
          v60 = v579;
          v579->fields.__8__1 = (struct WarBoardAIRoute___c__DisplayClass47_0_o *)v59;
          sub_1C36FFC((CGThumbnailListItem_o *)&v60->fields.__8__1, (int32_t)v59, v61, v62);
          v579->fields.__7__wrap8.fields._getEnumeratorRetType = (int)key;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          Square = WarBoardAIManager__GetSquare((int32_t)key, v63);
          v65 = v579;
          *(_QWORD *)&v579->fields._baseSquareIndex_5__10 = Square;
          sub_1C36FFC((CGThumbnailListItem_o *)&v65->fields._baseSquareIndex_5__10, (int32_t)Square, v66, v67);
          _8__1 = v579->fields.__8__1;
          PieceUnique = WarBoardAIManager__GetPieceUnique(HIDWORD(key), v69);
          if ( !_8__1 )
            sub_1C372B4(PieceUnique);
          _8__1->fields.basePiece = PieceUnique;
          sub_1C36FFC((CGThumbnailListItem_o *)&_8__1->fields, (int32_t)PieceUnique, v71, v72);
          v75 = v579;
          baseFlag_5__6 = v579->fields._baseFlag_5__6;
          v77 = v579->fields.__8__1;
          v579->fields._tmpFlagNow_5__12 = -1;
          v75->fields._servantAndMasterRange_5__13 = -1;
          v75->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
          if ( !v77 )
            sub_1C372B4(v73);
          if ( !_4__this )
            sub_1C372B4(0);
          v78 = WarBoardAIRoute__GetFlagAroundSquareCheck(
                  _4__this,
                  *(WarBoardSquareData_o **)&v75->fields._baseSquareIndex_5__10,
                  v77->fields.basePiece,
                  v75->fields.piecePlaceData,
                  v75->fields._masterSquareIndex_5__4,
                  v74);
          v79 = v579;
          v579->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)(v78 | baseFlag_5__6);
          routeDataList = (System_Collections_Generic_IEnumerable_TSource__o *)v79->fields.routeDataList;
          v81 = (Il2CppObject *)v79->fields.__8__1;
          v82 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v82,
            v81,
            Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
            0);
          v83 = System_Linq_Enumerable__Count_object__51419316(
                  routeDataList,
                  (System_Func_TSource__bool__o *)v82,
                  (const MethodInfo_31098B4 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
          v84 = (System_Collections_Generic_List_object__o *)v579->fields.routeDataList;
          v579->fields._servantAndEnemyRange_5__14 = v83;
          if ( !v84 )
            sub_1C372B4(0);
          Only = (WarBoardAIRoute_o *)System_Collections_Generic_List_object___AsReadOnly(
                                        v84,
                                        (const MethodInfo_37A324C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
          v87 = v579->fields.__8__1;
          if ( !v87 )
            sub_1C372B4(Only);
          RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                      Only,
                                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                      v87->fields.basePiece,
                                      v86);
          v90 = v579;
          v91 = v579->fields.__8__1;
          v579->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
          if ( !v91 )
            sub_1C372B4(RouteSumPieceActionCost);
          IsActable = WarBoardAIRoute__IsActable(
                        _4__this,
                        v91->fields.basePiece,
                        v90->fields._servantAndEnemyRange_5__14,
                        v90->fields._requiredCost_5__3,
                        RouteSumPieceActionCost,
                        v89);
          if ( IsActable )
          {
            v94 = v579->fields.__8__1;
            if ( !v94 )
              sub_1C372B4(IsActable);
            DesignationItemToDistance = WarBoardAIRoute__GetDesignationItemToDistance(
                                          _4__this,
                                          v94->fields.basePiece,
                                          v579->fields.routeDataList,
                                          v579->fields.__7__wrap8.fields._getEnumeratorRetType,
                                          v93);
            v96 = v579;
            *(_QWORD *)&v579->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
            sub_1C36FFC(
              (CGThumbnailListItem_o *)&v96->fields._sumPieceActionCost_5__17,
              (int32_t)DesignationItemToDistance,
              v97,
              v98);
            v101 = v579->fields.__8__1;
            if ( !v101 )
              sub_1C372B4(v99);
            TargetToDistance_37881812 = (struct System_Collections_Generic_Dictionary_int__int__o *)WarBoardAIRoute__GetTargetToDistance_37881812(_4__this, v101->fields.basePiece, v579->fields.routeDataList, v579->fields.__7__wrap8.fields._getEnumeratorRetType, v100);
            v103 = v579;
            v579->fields._dicBaseDIRange_5__18 = TargetToDistance_37881812;
            sub_1C36FFC(
              (CGThumbnailListItem_o *)&v103->fields._dicBaseDIRange_5__18,
              (int32_t)TargetToDistance_37881812,
              v104,
              v105);
            AllEnemyToDistance = WarBoardAIRoute__GetAllEnemyToDistance(
                                   _4__this,
                                   v106,
                                   v579->fields.__7__wrap8.fields._getEnumeratorRetType,
                                   (int32_t *)&v579->fields._tmpFlagNow_5__12 + 1,
                                   &v579->fields._servantAndMasterRange_5__13,
                                   v107);
            v109 = v579;
            v579->fields._dicKeyPutIndexValueTargetData_5__19 = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)AllEnemyToDistance;
            sub_1C36FFC(
              (CGThumbnailListItem_o *)&v109->fields._dicKeyPutIndexValueTargetData_5__19,
              (int32_t)AllEnemyToDistance,
              v110,
              v111);
            v112 = v579;
            v579->fields._dicEnemyRange_5__20 = 0;
            sub_1C36FFC((CGThumbnailListItem_o *)&v112->fields._dicEnemyRange_5__20, 0, v113, v114);
            v116 = v579->fields.__8__1;
            if ( !v116 )
              sub_1C372B4(v115);
            basePiece = v116->fields.basePiece;
            if ( !basePiece )
              sub_1C372B4(0);
            isServant = WarBoardPieceData__get_isServant(basePiece, 0);
            if ( isServant )
            {
              v120 = v579->fields.__8__1;
              if ( !v120 )
                sub_1C372B4(isServant);
              AdvantagePieceData = WarBoardAIRoute__GetAdvantagePieceData(
                                     _4__this,
                                     v120->fields.basePiece,
                                     v579->fields.__7__wrap8.fields._getEnumeratorRetType,
                                     v119);
              v122 = v579;
              v579->fields._dicEnemyRange_5__20 = (struct System_Collections_Generic_Dictionary_uint__int__o *)AdvantagePieceData;
              sub_1C36FFC(
                (CGThumbnailListItem_o *)&v122->fields._dicEnemyRange_5__20,
                (int32_t)AdvantagePieceData,
                v123,
                v124);
              if ( v579->fields._masterExists_5__8 )
              {
                masterSquareIndex_5__4 = v579->fields._masterSquareIndex_5__4;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v127 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0,
                                                                              (int32_t)key,
                                                                              masterSquareIndex_5__4,
                                                                              0,
                                                                              0,
                                                                              v125);
                v128 = System_Linq_Enumerable__Count_int_(
                         v127,
                         (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
                v130 = v579;
                v131 = v579->fields.__8__1;
                LODWORD(v579->fields._tmpFlagNow_5__12) = v128;
                if ( !v131 )
                  sub_1C372B4(v128);
                v132 = v131->fields.basePiece;
                if ( !v132 )
                  sub_1C372B4(v128);
                v133 = _4__this->fields.aiRouteMasterData;
                if ( !v133 )
                  sub_1C372B4(v128);
                masterType = v133->fields.masterType;
                index_k__BackingField = v132->fields._index_k__BackingField;
                if ( masterType != 2 || v133->fields.masterPieceIndex != index_k__BackingField )
                {
                  v136 = _4__this->fields.npcData;
                  if ( !v136 )
                    sub_1C372B4(v128);
                  if ( v136->fields.defenseArea > (int)v128 )
                    v130->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v130->fields._baseSquare_5__11
                                                                                   | 0x800);
                  if ( (masterType != 2 || v133->fields.masterPieceIndex != index_k__BackingField)
                    && WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                         v130->fields._defenseAreaData_5__7,
                         v130->fields.__7__wrap8.fields._getEnumeratorRetType,
                         masterType == 1,
                         v129) )
                  {
                    v579->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v579->fields._baseSquare_5__11
                                                                                   | 0x80000000);
                  }
                }
              }
            }
            v137 = (System_Collections_Generic_HashSet_T__o *)sub_1C372A4(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_object____ctor(
              v137,
              (const MethodInfo_365A090 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v138 = v579;
            v579->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v137;
            sub_1C36FFC((CGThumbnailListItem_o *)&v138->fields._advantagePieceData_5__21, (int32_t)v137, v139, v140);
            v141 = (System_Collections_Generic_HashSet_T__o *)sub_1C372A4(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_object____ctor(
              v141,
              (const MethodInfo_365A090 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v142 = v579;
            v579->fields._basePieceActionPieceRouteList_5__22 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)v141;
            sub_1C36FFC(
              (CGThumbnailListItem_o *)&v142->fields._basePieceActionPieceRouteList_5__22,
              (int32_t)v141,
              v143,
              v144);
            v145 = (System_Collections_Generic_List_object__o *)v579->fields.routeDataList;
            if ( !v145 )
              sub_1C372B4(0);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v565,
              v145,
              (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
            *(_OWORD *)&v576.fields._list = *(_OWORD *)&v565.fields._dictionary;
            v576.fields._current = v565.fields._current.fields.key;
            while ( 1 )
            {
              v146 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v576,
                       (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
              if ( !v146 )
                break;
              current = v576.fields._current;
              if ( !v576.fields._current )
                sub_1C372B4(v146);
              if ( LODWORD(v576.fields._current[1].monitor) != HIDWORD(v576.fields._current[1].monitor) )
              {
                klass = v576.fields._current[3].klass;
                if ( !klass )
                  sub_1C372B4(v146);
                v149 = v579->fields.__8__1;
                if ( !v149 )
                  sub_1C372B4(v146);
                v150 = v149->fields.basePiece;
                if ( !v150 )
                  sub_1C372B4(v146);
                if ( HIDWORD(klass->_1.namespaze) == v150->fields._index_k__BackingField )
                {
                  basePieceActionPieceRouteList_5__22 = (System_Collections_Generic_HashSet_T__o *)v579->fields._basePieceActionPieceRouteList_5__22;
                  if ( !basePieceActionPieceRouteList_5__22 )
                    sub_1C372B4(0);
                  v146 = System_Collections_Generic_HashSet_object___Add(
                           basePieceActionPieceRouteList_5__22,
                           v576.fields._current,
                           (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                }
                if ( (BYTE3(current[1].klass) & 4) != 0 )
                {
                  v152 = current[3].monitor;
                  if ( !v152 )
                    sub_1C372B4(v146);
                  v153 = v579->fields.__8__1;
                  if ( !v153 )
                    sub_1C372B4(v146);
                  v154 = v153->fields.basePiece;
                  if ( !v154 )
                    sub_1C372B4(v146);
                  if ( v152[7] == v154->fields._index_k__BackingField )
                  {
                    advantagePieceData_5__21 = v579->fields._advantagePieceData_5__21;
                    if ( !advantagePieceData_5__21 )
                      sub_1C372B4(0);
                    System_Collections_Generic_HashSet_object___Add(
                      (System_Collections_Generic_HashSet_T__o *)advantagePieceData_5__21,
                      current,
                      (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                  }
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v576,
              (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
            v200 = *(WarBoardSquareData_o **)&v579->fields._baseSquareIndex_5__10;
            if ( !v200 )
              sub_1C372B4(0);
            MyAndLinkedSquareIndecies = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)WarBoardSquareData__GetMyAndLinkedSquareIndecies(v200, 0);
            v202 = v579;
            v579->fields._basePieceBasePieceRouteList_5__23 = MyAndLinkedSquareIndecies;
            sub_1C36FFC(
              (CGThumbnailListItem_o *)&v202->fields._basePieceBasePieceRouteList_5__23,
              (int32_t)MyAndLinkedSquareIndecies,
              v203,
              v204);
            v205 = v579;
            v206 = 0;
            LODWORD(v579->fields.__7__wrap23) = 0;
LABEL_663:
            basePieceBasePieceRouteList_5__23 = v205->fields._basePieceBasePieceRouteList_5__23;
            p_basePieceBasePieceRouteList_5__23 = (CGThumbnailListItem_o *)&v205->fields._basePieceBasePieceRouteList_5__23;
            v533 = basePieceBasePieceRouteList_5__23;
            if ( !basePieceBasePieceRouteList_5__23 )
              sub_1C372B4(this);
            if ( v206 >= SLODWORD(v533->fields._slots) )
            {
              p_basePieceBasePieceRouteList_5__23->klass = 0;
              sub_1C36FFC(p_basePieceBasePieceRouteList_5__23, 0, (int32_t)v2, v3);
              v535 = v579;
              v579->fields.__8__1 = 0;
              sub_1C36FFC((CGThumbnailListItem_o *)&v535->fields.__8__1, 0, v536, v537);
              v538 = v579;
              *(_QWORD *)&v579->fields._baseSquareIndex_5__10 = 0;
              sub_1C36FFC((CGThumbnailListItem_o *)&v538->fields._baseSquareIndex_5__10, 0, v539, v540);
              v541 = v579;
              *(_QWORD *)&v579->fields._sumPieceActionCost_5__17 = 0;
              sub_1C36FFC((CGThumbnailListItem_o *)&v541->fields._sumPieceActionCost_5__17, 0, v542, v543);
              v544 = v579;
              v579->fields._dicBaseDIRange_5__18 = 0;
              sub_1C36FFC((CGThumbnailListItem_o *)&v544->fields._dicBaseDIRange_5__18, 0, v545, v546);
              v547 = v579;
              v579->fields._dicKeyPutIndexValueTargetData_5__19 = 0;
              sub_1C36FFC((CGThumbnailListItem_o *)&v547->fields._dicKeyPutIndexValueTargetData_5__19, 0, v548, v549);
              v550 = v579;
              v579->fields._dicEnemyRange_5__20 = 0;
              sub_1C36FFC((CGThumbnailListItem_o *)&v550->fields._dicEnemyRange_5__20, 0, v551, v552);
              v553 = v579;
              v579->fields._advantagePieceData_5__21 = 0;
              sub_1C36FFC((CGThumbnailListItem_o *)&v553->fields._advantagePieceData_5__21, 0, v554, v555);
              v556 = v579;
              v579->fields._basePieceActionPieceRouteList_5__22 = 0;
              sub_1C36FFC((CGThumbnailListItem_o *)&v556->fields._basePieceActionPieceRouteList_5__22, 0, v557, v558);
              continue;
            }
            v207 = sub_1C372A4(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
            System_Object___ctor((Il2CppObject *)v207, 0);
            v209 = v579->fields._basePieceBasePieceRouteList_5__23;
            if ( !v209 )
              sub_1C372B4(v208);
            _7__wrap23_low = SLODWORD(v579->fields.__7__wrap23);
            if ( (unsigned int)_7__wrap23_low >= LODWORD(v209->fields._slots) )
              sub_1C372BC(v208);
            if ( !v207 )
              sub_1C372B4(v208);
            *(_DWORD *)(v207 + 16) = *(&v209->fields._count + _7__wrap23_low);
            v211 = (int32_t *)(v207 + 16);
            v212 = (WarBoardAIRoute_RouteData_o *)sub_1C372A4(WarBoardAIRoute_RouteData_TypeInfo);
            WarBoardAIRoute_RouteData___ctor(v212, v213);
            routeData = v212;
            if ( !v212 )
              sub_1C372B4(this);
            v214 = v579;
            getEnumeratorRetType = v579->fields.__7__wrap8.fields._getEnumeratorRetType;
            v212->fields.baseIndex = getEnumeratorRetType;
            v216 = *v211;
            v212->fields.actionIndex = *v211;
            if ( getEnumeratorRetType == v216 )
            {
              v217 = v214->fields.routeDataList;
              if ( !v217 )
                sub_1C372B4(this);
              if ( v217->fields._size > 0 )
                goto LABEL_662;
            }
            dicBaseDIRange_5__18 = (System_Collections_Generic_IEnumerable_TSource__o *)v214->fields._dicBaseDIRange_5__18;
            v219 = WarBoardAIRoute___c_TypeInfo;
            if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
              v219 = WarBoardAIRoute___c_TypeInfo;
            }
            _9__47_1 = (System_Func_T__TResult__o *)v219->static_fields->__9__47_1;
            if ( !_9__47_1 )
            {
              if ( !v219->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v219);
                v219 = WarBoardAIRoute___c_TypeInfo;
              }
              v221 = (Il2CppObject *)v219->static_fields->__9;
              _9__47_1 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
              System_Func_KeyValuePair_long__object___long____ctor(
                _9__47_1,
                v221,
                Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
                0);
              static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
              static_fields->__9__47_1 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)_9__47_1;
              sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__47_1, (int32_t)_9__47_1, v223, v224);
              v219 = WarBoardAIRoute___c_TypeInfo;
            }
            if ( !v219->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v219);
              v219 = WarBoardAIRoute___c_TypeInfo;
            }
            _9__47_2 = (System_Func_T__TResult__o *)v219->static_fields->__9__47_2;
            if ( !_9__47_2 )
            {
              if ( !v219->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v219);
                v219 = WarBoardAIRoute___c_TypeInfo;
              }
              v226 = (Il2CppObject *)v219->static_fields->__9;
              _9__47_2 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
              System_Func_KeyValuePair_long__object___object____ctor(
                _9__47_2,
                v226,
                Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
                0);
              v227 = WarBoardAIRoute___c_TypeInfo->static_fields;
              v227->__9__47_2 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)_9__47_2;
              sub_1C36FFC((CGThumbnailListItem_o *)&v227->__9__47_2, (int32_t)_9__47_2, v228, v229);
            }
            v232 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__object___long__object_(
                                                                                                  dicBaseDIRange_5__18,
                                                                                                  (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                                  (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                                  (const MethodInfo_312796C *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
            v233 = routeData;
            if ( !routeData )
              sub_1C372B4(0);
            v234 = *(struct WarBoardSquareData_o **)&v579->fields._baseSquareIndex_5__10;
            routeData->fields.baseSquare = v234;
            sub_1C36FFC((CGThumbnailListItem_o *)&v233->fields.baseSquare, (int32_t)v234, v230, v231);
            v238 = v579->fields.__8__1;
            if ( !v238 )
              sub_1C372B4(v235);
            v239 = routeData;
            if ( !routeData )
              sub_1C372B4(0);
            v240 = v238->fields.basePiece;
            routeData->fields.basePiece = v240;
            sub_1C36FFC((CGThumbnailListItem_o *)&v239->fields.basePiece, (int32_t)v240, v236, v237);
            v243 = routeData;
            if ( !routeData )
              sub_1C372B4(0);
            routeData->fields.actionPiece = 0;
            sub_1C36FFC((CGThumbnailListItem_o *)&v243->fields.actionPiece, 0, v241, v242);
            v245 = routeData;
            v246 = *v211;
            if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            v247 = WarBoardAIManager__GetSquare(v246, v244);
            if ( !v245 )
              sub_1C372B4(v247);
            v245->fields.actionSquare = v247;
            sub_1C36FFC((CGThumbnailListItem_o *)&v245->fields.actionSquare, (int32_t)v247, v248, v249);
            dicKeyPutIndexValueTargetData_5__19 = (System_Collections_Generic_Dictionary_uint__int__o *)v579->fields._dicKeyPutIndexValueTargetData_5__19;
            if ( !dicKeyPutIndexValueTargetData_5__19 )
              sub_1C372B4(0);
            v251 = routeData;
            if ( System_Collections_Generic_Dictionary_uint__int___get_Count(
                   dicKeyPutIndexValueTargetData_5__19,
                   (const MethodInfo_3492CF4 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0 )
            {
              v255 = 0x7FFFFFFF;
              if ( !v251 )
                goto LABEL_253;
            }
            else
            {
              v253 = (System_Collections_Generic_Dictionary_uint__int__o *)v579->fields._dicKeyPutIndexValueTargetData_5__19;
              if ( !v253 )
                sub_1C372B4(0);
              Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                         v253,
                         (const MethodInfo_3492E54 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
              v255 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0);
              if ( !v251 )
LABEL_253:
                sub_1C372B4(v255);
            }
            v251->fields.EnemyRangeMin = v255;
            v256 = v579->fields.__8__1;
            if ( !v256 )
              sub_1C372B4(v255);
            if ( !_4__this )
              sub_1C372B4(v255);
            v257 = routeData;
            MoveByTargetDistance = WarBoardAIRoute__GetMoveByTargetDistance(
                                     (WarBoardAIRoute_o *)v255,
                                     v232,
                                     *v211,
                                     v256->fields.basePiece,
                                     v252);
            if ( !v257 )
              sub_1C372B4(MoveByTargetDistance);
            v257->fields.dicPutIndexTargetData = v232;
            sub_1C36FFC((CGThumbnailListItem_o *)&v257->fields.dicPutIndexTargetData, (int32_t)v232, v259, v260);
            if ( !v579->fields.__8__1 )
              sub_1C372B4(v261);
            v264 = routeData;
            ActionPiece = WarBoardAIRoute__GetActionPiece(v261, v262, *v211, v579->fields.piecePlaceData, v263);
            if ( !v264 )
              sub_1C372B4(ActionPiece);
            v264->fields.actionPiece = ActionPiece;
            sub_1C36FFC((CGThumbnailListItem_o *)&v264->fields.actionPiece, (int32_t)ActionPiece, v266, v267);
            v271 = v579->fields.__8__1;
            if ( !v271 )
              sub_1C372B4(p_actionPiece);
            v272 = v271->fields.basePiece;
            if ( !v272 )
              sub_1C372B4(p_actionPiece);
            if ( v272->fields._nowSquareIndex_k__BackingField == *v211 )
            {
              if ( !routeData )
                sub_1C372B4(0);
              p_actionPiece = (CGThumbnailListItem_o *)&routeData->fields.actionPiece;
              v273 = routeData->fields.actionPiece;
              if ( v273 )
              {
                if ( v273->fields._uniqueIndex_k__BackingField == v272->fields._uniqueIndex_k__BackingField )
                {
                  p_actionPiece->klass = 0;
                  sub_1C36FFC(p_actionPiece, 0, v269, v270);
                  v271 = v579->fields.__8__1;
                  if ( !v271 )
                    sub_1C372B4(p_actionPiece);
                }
              }
            }
            v274 = v271->fields.basePiece;
            if ( !v274 )
              sub_1C372B4(p_actionPiece);
            limitActionCount_k__BackingField = v274->fields._limitActionCount_k__BackingField;
            currentActionCount_k__BackingField = v274->fields._currentActionCount_k__BackingField;
            if ( !byte_4C3D918 )
            {
              sub_1C37058(&System_Math_TypeInfo);
              byte_4C3D918 = 1;
            }
            v277 = System_Math_TypeInfo;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v278 = routeData;
            if ( !routeData )
              sub_1C372B4(v277);
            v279 = v579;
            v280 = limitActionCount_k__BackingField - currentActionCount_k__BackingField;
            if ( limitActionCount_k__BackingField - currentActionCount_k__BackingField < 0 )
              v280 = currentActionCount_k__BackingField - limitActionCount_k__BackingField;
            routeData->fields.actionCountOnThisTurn = v280 + v579->fields._servantAndEnemyRange_5__14 + 1;
            baseSquare_5__11 = v279->fields._baseSquare_5__11;
            *(_QWORD *)&v278->fields.attackByLinkedEnemy = 0;
            v278->fields.flagNow = (int64_t)baseSquare_5__11;
            v282 = v279->fields._warBoardData_5__2;
            if ( !v282 )
              sub_1C372B4(0);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardData__GetWall(v282, *v211, 0, v270);
            v284 = this;
            if ( this )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_1C372B4(0);
              if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.wallAttackCost
                                                              + v579->fields._requiredCost_5__3 )
                goto LABEL_662;
              v285 = v579->fields.__8__1;
              if ( !v285 )
                sub_1C372B4(this);
              v286 = v285->fields.basePiece;
              if ( !v286 )
                sub_1C372B4(0);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableWallAttack(
                                                                   v286,
                                                                   v579->fields._servantAndEnemyMasterRange_5__15,
                                                                   0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v287 = v579->fields.__8__1;
              if ( !v287 )
                sub_1C372B4(this);
              v288 = v287->fields.basePiece;
              if ( !v288 )
                sub_1C372B4(0);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__CheckWallAttackCond(
                                                                   v288,
                                                                   (WarBoardWallData_o *)v284,
                                                                   0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
            }
            if ( !routeData )
              sub_1C372B4(this);
            v289 = routeData->fields.actionPiece;
            if ( v289 )
            {
              v290 = v579->fields.__8__1;
              if ( !v290 )
                sub_1C372B4(this);
              v291 = v290->fields.basePiece;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsEnemyPiece(v291, v289, v2);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v292 = v579->fields.__8__1;
                if ( !v292 )
                  sub_1C372B4(this);
                v293 = v292->fields.basePiece;
                if ( !v293 )
                  sub_1C372B4(0);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v293, 0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_239;
                if ( !routeData )
                  sub_1C372B4(this);
                v294 = routeData->fields.actionPiece;
                if ( !v294 )
                  sub_1C372B4(0);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v294, 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
LABEL_239:
                  v295 = routeData;
                  if ( !routeData )
                    sub_1C372B4(this);
                  v296 = routeData->fields.basePiece;
                  routeData->fields.flagNow |= 2uLL;
                  if ( !v296 )
                    sub_1C372B4(this);
                  v297 = v295->fields.actionPiece;
                  v295->fields.attackCountOnThisTurn = v296->fields._attackCount_k__BackingField + 1;
                  if ( !v297 )
                    sub_1C372B4(0);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isServant(v297, 0);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    v298 = routeData;
                    if ( !routeData )
                      sub_1C372B4(this);
                    v299 = v579->fields.__8__1;
                    if ( !v299 )
                      sub_1C372B4(this);
                    v300 = v299->fields.basePiece;
                    if ( !v300 )
                      sub_1C372B4(this);
                    battleServant_k__BackingField = v300->fields._battleServant_k__BackingField;
                    if ( !battleServant_k__BackingField )
                      sub_1C372B4(0);
                    flagNow = routeData->fields.flagNow;
                    ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0, 0);
                    if ( !routeData )
                      sub_1C372B4(ClassId);
                    v304 = routeData->fields.actionPiece;
                    if ( !v304 )
                      sub_1C372B4(ClassId);
                    v305 = ClassId;
                    v306 = v304->fields._battleServant_k__BackingField;
                    if ( !v306 )
                      sub_1C372B4(0);
                    v307 = (WarBoardAIRoute_o *)BattleServantData__getClassId(v306, 0, 0);
                    FlagAdvantage = WarBoardAIRoute__GetFlagAdvantage(v307, v305, (int32_t)v307, v308);
                    v298->fields.flagNow = FlagAdvantage | flagNow;
                    if ( !routeData )
                      sub_1C372B4(FlagAdvantage);
                    WarBoardAIRoute__LinkedCount(
                      (WarBoardAIRoute_o *)FlagAdvantage,
                      *v211,
                      v579->fields.piecePlaceData,
                      &routeData->fields.attackByLinkedEnemy,
                      &routeData->fields.attackByLinkedAlly,
                      v310);
                  }
                  goto LABEL_263;
                }
LABEL_662:
                v205 = v579;
                v206 = LODWORD(v579->fields.__7__wrap23) + 1;
                LODWORD(v579->fields.__7__wrap23) = v206;
                goto LABEL_663;
              }
              if ( !routeData )
                sub_1C372B4(this);
              v311 = routeData->fields.actionPiece;
              if ( !v311 )
                sub_1C372B4(this);
              if ( v311->fields._roleType_k__BackingField == 1 )
                goto LABEL_662;
              v312 = v579->fields.__8__1;
              if ( !v312 )
                sub_1C372B4(this);
              v313 = v312->fields.basePiece;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsAllyPiece(v313, v311, v2);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !routeData )
                  sub_1C372B4(this);
                routeData->fields.flagNow |= 0x4000000uLL;
              }
            }
LABEL_263:
            v314 = routeData;
            if ( !routeData )
              sub_1C372B4(this);
            if ( (routeData->fields.flagNow & 2) != 0 )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_1C372B4(0);
              if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.attackCost
                                                              + v579->fields._requiredCost_5__3 )
                goto LABEL_662;
              v333 = v579->fields.__8__1;
              if ( !v333 )
                sub_1C372B4(this);
              v334 = v333->fields.basePiece;
              if ( !v334 )
                sub_1C372B4(0);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableAttack(
                                                                   v334,
                                                                   v579->fields._servantAndEnemyMasterRange_5__15,
                                                                   0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v314 = routeData;
              if ( !routeData )
                sub_1C372B4(this);
            }
            if ( (v314->fields.flagNow & 2) == 0 )
            {
              v315 = v579->fields.__8__1;
              if ( !v315 )
                sub_1C372B4(this);
              v316 = v315->fields.basePiece;
              if ( !v316 )
                sub_1C372B4(0);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableMoveBySelf(
                                                                   v316,
                                                                   v579->fields._servantAndEnemyMasterRange_5__15,
                                                                   0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v314 = routeData;
              if ( !routeData )
                sub_1C372B4(this);
            }
            if ( (v314->fields.flagNow & 0x4000000) != 0 )
            {
              v317 = v579->fields.__8__1;
              if ( !v317 )
                sub_1C372B4(this);
              v318 = (System_Collections_Generic_List_object__o *)v579->fields.routeDataList;
              if ( !v318 )
                sub_1C372B4(0);
              requiredCost_5__3 = v579->fields._requiredCost_5__3;
              v320 = v317->fields.basePiece;
              v321 = v314->fields.actionPiece;
              v322 = System_Collections_Generic_List_object___AsReadOnly(
                       v318,
                       (const MethodInfo_37A324C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIRoute__IsActableReplace(
                                                                   _4__this,
                                                                   v320,
                                                                   v321,
                                                                   requiredCost_5__3,
                                                                   (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v322,
                                                                   v579->fields._servantAndEnemyMasterRange_5__15,
                                                                   v323);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v314 = routeData;
            }
            piecePlaceData = WarBoardAIRoute__UpdatePiecePlaceData(
                               (WarBoardAIRoute_o *)this,
                               v579->fields.piecePlaceData,
                               v314,
                               v579->fields.__7__wrap8.fields._getEnumeratorRetType,
                               *v211,
                               v283);
            MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
                                               _4__this,
                                               piecePlaceData,
                                               v324);
            v326 = v579->fields._basePieceActionPieceRouteList_5__22;
            v327 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v327,
              (Il2CppObject *)v207,
              Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
              0);
            v328 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__51336868(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v326,
                                          (System_Func_TSource__bool__o *)v327,
                                          (const MethodInfo_30F56A4 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)v328 & 1) != 0
              || (v330 = v579->fields._advantagePieceData_5__21,
                  v331 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo),
                  System_Func_object__bool____ctor(
                    v331,
                    (Il2CppObject *)v207,
                    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
                    0),
                  v328 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__51336868(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)v330,
                                                (System_Func_TSource__bool__o *)v331,
                                                (const MethodInfo_30F56A4 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___),
                  ((unsigned __int8)v328 & 1) != 0) )
            {
              if ( !routeData )
                sub_1C372B4(v328);
              routeData->fields.flagNow |= 0x20000000000uLL;
            }
            if ( v579->fields._masterExists_5__8 )
            {
              if ( v579->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
                goto LABEL_291;
              if ( !routeData )
                sub_1C372B4(v328);
              if ( (routeData->fields.flagNow & 0x400) != 0 )
              {
LABEL_291:
                v335 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                         _4__this,
                         piecePlaceData,
                         MasterSquareIndexFromPlaceData,
                         v329);
                v328 = WarBoardAIRoute__GetDefenseAreaData(
                         _4__this,
                         MasterSquareIndexFromPlaceData,
                         v335,
                         piecePlaceData,
                         v336);
                v332 = v328;
              }
              else
              {
                v332 = v579->fields._defenseAreaData_5__7;
              }
              if ( !v332 )
                sub_1C372B4(v328);
              v337 = _4__this->fields.aiRouteMasterData;
              if ( !v337 )
                sub_1C372B4(v328);
              v338 = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                       v332->fields._ShortestRoutes_k__BackingField,
                       piecePlaceData,
                       v337->fields.masterType == 1,
                       v329);
              v339 = routeData;
              if ( v338 )
              {
                if ( !routeData )
                  sub_1C372B4(v338);
                routeData->fields.flagNow |= 0x40000000uLL;
              }
              else if ( !routeData )
              {
                sub_1C372B4(v338);
              }
              v340 = v339->fields.flagNow;
              if ( (v340 & 0x400) != 0 && (v332->fields._Flag_k__BackingField & 0x10000000000LL) != 0 )
                v339->fields.flagNow = v340 | 0x40000000000LL;
            }
            else
            {
              v339 = routeData;
            }
            v341 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v341,
              (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v339 )
              sub_1C372B4(v342);
            v339->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v341;
            sub_1C36FFC((CGThumbnailListItem_o *)&v339->fields.moveByLinkedPiece, (int32_t)v341, v343, v344);
            v346 = routeData;
            if ( !routeData )
              sub_1C372B4(v345);
            *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0;
            v347 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
            System_Collections_Generic_Dictionary_uint__int____ctor(
              v347,
              (const MethodInfo_349267C *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
            v346->fields.dicUniqueKeyRange = v347;
            sub_1C36FFC((CGThumbnailListItem_o *)&v346->fields.dicUniqueKeyRange, (int32_t)v347, v348, v349);
            v350 = v579->fields.piecePlaceData;
            if ( !v350 )
              sub_1C372B4(0);
            System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
              &v565,
              v350,
              (const MethodInfo_341EDB8 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
            *(_OWORD *)&v572.fields._dictionary = *(_OWORD *)&v565.fields._dictionary;
            v572.fields._current = v565.fields._current;
            while ( 1 )
            {
              v351 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                       &v572,
                       (const MethodInfo_3553C48 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
              if ( !v351 )
                break;
              v353 = v579->fields.__8__1;
              if ( !v353 )
                sub_1C372B4(v351);
              v354 = v353->fields.basePiece;
              if ( !v354 )
                sub_1C372B4(v351);
              key_high = HIDWORD(v572.fields._current.fields.key);
              if ( v354->fields._uniqueIndex_k__BackingField != HIDWORD(v572.fields._current.fields.key) )
              {
                if ( !routeData )
                  sub_1C372B4(v351);
                v356 = (int32_t)v572.fields._current.fields.key;
                dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
                v358 = *v211;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v359 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0,
                                                                              v358,
                                                                              v356,
                                                                              0,
                                                                              0,
                                                                              v352);
                v360 = System_Linq_Enumerable__Count_int_(
                         v359,
                         (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !dicUniqueKeyRange )
                  sub_1C372B4(v360);
                System_Collections_Generic_Dictionary_uint__int___Add(
                  dicUniqueKeyRange,
                  key_high,
                  v360,
                  (const MethodInfo_3493040 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
              &v572,
              (const MethodInfo_3553D48 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
            v361 = (CGThumbnailListItem_o *)routeData;
            v362 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v362,
              (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v361 )
              sub_1C372B4(v363);
            v361[1].klass = (CGThumbnailListItem_c *)v362;
            sub_1C36FFC(v361 + 1, (int32_t)v362, v364, v365);
            v366 = routeData;
            v367 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v367,
              (const MethodInfo_33EB350 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( !v366 )
              sub_1C372B4(v368);
            v366->fields.dicMoveByServantGetDesignationItem = v367;
            sub_1C36FFC(
              (CGThumbnailListItem_o *)&v366->fields.dicMoveByServantGetDesignationItem,
              (int32_t)v367,
              v369,
              v370);
            v371 = routeData;
            v372 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
            System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
              v372,
              (const MethodInfo_33F3F00 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
            if ( !v371 )
              sub_1C372B4(v373);
            v371->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)v372;
            sub_1C36FFC(
              (CGThumbnailListItem_o *)&v371->fields.dicItemIdKeyIsMoveByServantDesignationItemRange,
              (int32_t)v372,
              v374,
              v375);
            v377 = routeData;
            if ( !routeData )
              sub_1C372B4(v376);
            routeData->fields.isMoveByOutOfWarningArea = 0;
            *(_QWORD *)&v377->fields.isMoveByServantAndEnemyRange = 0;
            *(_QWORD *)&v377->fields.isMoveByMasterAndEnemyRange = 0;
            *(_QWORD *)&v377->fields.isMoveByServantAndAttackAdvantageServantRange = 0;
            *(_QWORD *)&v377->fields.isMoveByServantAndDefenseAdvantageServantRange = 0;
            *(_QWORD *)&v377->fields.isMoveByServantAndClassAdvantageServantRange = 0;
            v378 = v579->fields.__8__1;
            if ( !v378 )
              sub_1C372B4(v376);
            v379 = v378->fields.basePiece;
            if ( !v379 )
              sub_1C372B4(0);
            IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isServant(v379, 0);
            if ( IsBlockShortestRouteEnemyAndMaster )
            {
              v384 = v579;
              if ( v579->fields._masterExists_5__8 )
              {
                v385 = v579->fields.__8__1;
                if ( !v385 )
                  sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                v386 = v385->fields.basePiece;
                if ( !v386 )
                  sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                v387 = _4__this->fields.aiRouteMasterData;
                if ( !v387 )
                  sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                if ( v387->fields.masterType != 2
                  || v387->fields.masterPieceIndex != v386->fields._index_k__BackingField )
                {
                  v388 = v579->fields._defenseAreaData_5__7;
                  if ( !v388 )
                    sub_1C372B4(0);
                  IsBlockShortestRouteEnemyAndMaster = DefenseAreaData__IsInDefenseArea(v388, *v211, 0);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                    routeData->fields.flagNow |= 0x4000000000uLL;
                  }
                }
                v389 = v579->fields.__8__1;
                if ( !v389 )
                  sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                v390 = v389->fields.basePiece;
                if ( !v390 )
                  sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                v391 = _4__this->fields.aiRouteMasterData;
                if ( !v391 )
                  sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                v392 = v391->fields.masterType;
                if ( v392 != 2 || v391->fields.masterPieceIndex != v390->fields._index_k__BackingField )
                {
                  IsBlockShortestRouteEnemyAndMaster = WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                                                         v579->fields._defenseAreaData_5__7,
                                                         *v211,
                                                         v392 == 1,
                                                         v382);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                    routeData->fields.flagNow |= 0x100000000uLL;
                  }
                }
                v384 = v579;
                v393 = v579->fields.__8__1;
                if ( !v393 )
                  sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                v394 = v393->fields.basePiece;
                if ( !v394 )
                  sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                v395 = _4__this->fields.aiRouteMasterData;
                if ( !v395 )
                  sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                if ( v395->fields.masterType != 2
                  || v395->fields.masterPieceIndex != v394->fields._index_k__BackingField )
                {
                  v396 = *v211;
                  if ( *v211 == MasterSquareIndexFromPlaceData )
                  {
                    v397 = routeData;
                    if ( !routeData )
                      sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                    v398 = 2;
                  }
                  else
                  {
                    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                    v399 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                                  0,
                                                                                  v396,
                                                                                  MasterSquareIndexFromPlaceData,
                                                                                  0,
                                                                                  0,
                                                                                  v383);
                    v400 = System_Linq_Enumerable__Count_int_(
                             v399,
                             (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
                    v397 = routeData;
                    if ( !routeData )
                      sub_1C372B4(v400);
                    v384 = v579;
                    tmpFlagNow_5__12 = v579->fields._tmpFlagNow_5__12;
                    v402 = (_DWORD)v400 == tmpFlagNow_5__12;
                    if ( (int)v400 < tmpFlagNow_5__12 )
                      v398 = 1;
                    else
                      v398 = 3;
                    if ( v402 )
                      v398 = 2;
                  }
                  v397->fields.isMoveByServantAndMasterRange = v398;
                }
              }
              v403 = *(System_Collections_Generic_Dictionary_int__int__o **)&v384->fields._sumPieceActionCost_5__17;
              if ( !v403 )
                sub_1C372B4(0);
              System_Collections_Generic_Dictionary_int__int___GetEnumerator(
                &v565,
                v403,
                (const MethodInfo_33F1EA4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
              v570 = *(_OWORD *)&v565.fields._dictionary;
              v571 = v565.fields._current;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
                        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v570,
                        (const MethodInfo_354FA7C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
              {
                v405 = (int32_t)v571.fields.key;
                v406 = HIDWORD(v571.fields.key);
                v407 = *v211;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v408 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0,
                                                                              v407,
                                                                              v405,
                                                                              0,
                                                                              0,
                                                                              v404);
                v409 = System_Linq_Enumerable__Count_int_(
                         v408,
                         (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !routeData )
                  sub_1C372B4(v409);
                dicItemIdKeyIsMoveByServantDesignationItemRange = (System_Collections_Generic_Dictionary_TKey__TValue__o *)routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
                if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
                  sub_1C372B4(v409);
                if ( (int)v409 < v406 )
                  v411 = 1;
                else
                  v411 = 3;
                if ( (_DWORD)v409 == v406 )
                  v412 = 2;
                else
                  v412 = v411;
                System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
                  dicItemIdKeyIsMoveByServantDesignationItemRange,
                  v405,
                  v412,
                  (const MethodInfo_33F48B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
                if ( !routeData )
                  sub_1C372B4(v413);
                dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
                if ( !dicMoveByServantGetDesignationItem )
                  sub_1C372B4(0);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  dicMoveByServantGetDesignationItem,
                  v405,
                  *v211 == v405,
                  (const MethodInfo_33EBD28 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
                if ( !routeData )
                  sub_1C372B4(v415);
                listExistDesignationItem = routeData->fields.listExistDesignationItem;
                if ( !listExistDesignationItem )
                  sub_1C372B4(0);
                items = listExistDesignationItem->fields._items;
                v418 = Method_System_Collections_Generic_List_int__Add__;
                ++listExistDesignationItem->fields._version;
                if ( !items )
                  sub_1C372B4(listExistDesignationItem);
                size = listExistDesignationItem->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    listExistDesignationItem,
                    v405,
                    *(const MethodInfo_3786000 **)(*(_QWORD *)(v418[4] + 192LL) + 112LL));
                }
                else
                {
                  listExistDesignationItem->fields._size = size + 1;
                  items->m_Items[size] = v405;
                }
              }
              System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v570,
                (const MethodInfo_354FB7C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
              v421 = *v211;
              enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
              if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
              v423 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                            0,
                                                                            v421,
                                                                            enemyMasterSquareIndex,
                                                                            0,
                                                                            0,
                                                                            v420);
              v424 = System_Linq_Enumerable__Count_int_(
                       v423,
                       (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
              v426 = routeData;
              if ( !routeData )
                sub_1C372B4(v424);
              servantAndMasterRange_5__13 = v579->fields._servantAndMasterRange_5__13;
              v428 = (_DWORD)v424 == servantAndMasterRange_5__13;
              if ( (int)v424 < servantAndMasterRange_5__13 )
                v429 = 1;
              else
                v429 = 3;
              if ( v428 )
                v429 = 2;
              routeData->fields.isMoveByServantAndEnemyMasterRange = v429;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4C40A1D )
              {
                sub_1C37058(&WarBoardAIManager_TypeInfo);
                byte_4C40A1D = 1;
              }
              v430 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v430 = WarBoardAIManager_TypeInfo;
              }
              v431 = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                            v430->static_fields->dicSquareIndexEnemyPiece,
                                            HIDWORD(v579->fields._tmpFlagNow_5__12),
                                            *v211,
                                            v425);
              v426->fields.isMoveByServantAndEnemyRange = (int)v431;
              WarBoardAIRoute__ClassAdvantageDistance(
                v431,
                &routeData,
                (WarBoardAIRoute_AdvantagePieceData_o *)v579->fields._dicEnemyRange_5__20,
                *v211,
                v432);
            }
            v433 = _4__this->fields.aiRouteMasterData;
            if ( !v433 )
              sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
            if ( v433->fields.masterType )
            {
LABEL_501:
              if ( v433->fields.masterType == 2 )
              {
                v436 = v579->fields.__8__1;
                if ( !v436 )
                  sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                v437 = v436->fields.basePiece;
                if ( !v437 )
                  sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                if ( v437->fields._index_k__BackingField == v433->fields.masterPieceIndex )
                  goto LABEL_505;
              }
            }
            else
            {
              v434 = v579->fields.__8__1;
              if ( !v434 )
                sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
              v435 = v434->fields.basePiece;
              if ( !v435 )
                sub_1C372B4(0);
              IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isMaster(v435, 0);
              if ( !IsBlockShortestRouteEnemyAndMaster )
              {
                v433 = _4__this->fields.aiRouteMasterData;
                if ( !v433 )
                  sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                goto LABEL_501;
              }
LABEL_505:
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4C40A1D )
              {
                sub_1C37058(&WarBoardAIManager_TypeInfo);
                byte_4C40A1D = 1;
              }
              v438 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v438 = WarBoardAIManager_TypeInfo;
              }
              dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v438->static_fields->dicSquareIndexEnemyPiece;
              if ( !dicSquareIndexEnemyPiece )
                sub_1C372B4(0);
              Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                       dicSquareIndexEnemyPiece,
                       (const MethodInfo_33FA244 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
              if ( !Keys )
                sub_1C372B4(0);
              System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
                (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v565,
                Keys,
                (const MethodInfo_36BE198 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
              *(_OWORD *)&v569.fields._dictionary = *(_OWORD *)&v565.fields._dictionary;
              v569.fields._currentKey = v565.fields._current.fields.key;
              while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
                        &v569,
                        (const MethodInfo_3551EC8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                currentKey = (int32_t)v569.fields._currentKey;
                v443 = *v211;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v444 = AStarSearch__RouteSearch(0, v443, currentKey, 0, 0, v441);
                if ( !v444 )
                  sub_1C372B4(0);
                v445 = _4__this->fields.npcData;
                if ( !v445 )
                  sub_1C372B4(v444);
                if ( LODWORD(v444->max_length) - 1 <= v445->fields.defenseArea )
                {
                  if ( !routeData )
                    sub_1C372B4(v444);
                  routeData->fields.flagNow |= 0x8000000000uLL;
                  break;
                }
              }
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
                &v569,
                (const MethodInfo_3551EC4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
              v447 = routeData;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4C40A1D )
              {
                sub_1C37058(&WarBoardAIManager_TypeInfo);
                byte_4C40A1D = 1;
              }
              v448 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v448 = WarBoardAIManager_TypeInfo;
              }
              v449 = v579->fields._defenseAreaData_5__7;
              if ( !v449 )
                sub_1C372B4(v448);
              v450 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v448->static_fields->dicSquareIndexEnemyPiece,
                       v449->fields._MasterAndEnemyRange_k__BackingField,
                       *v211,
                       v446);
              if ( !v447 )
                sub_1C372B4(v450);
              v447->fields.isMoveByMasterAndEnemyRange = v450;
              if ( !byte_4C40A1D )
              {
                sub_1C37058(&WarBoardAIManager_TypeInfo);
                byte_4C40A1D = 1;
              }
              v451 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v451 = WarBoardAIManager_TypeInfo;
              }
              v452 = (System_Collections_Generic_Dictionary_int__object__o *)v451->static_fields->dicSquareIndexEnemyPiece;
              if ( !v452 )
                sub_1C372B4(0);
              System_Collections_Generic_Dictionary_int__object___GetEnumerator(
                &v565,
                v452,
                (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
              v568 = v565;
              do
              {
                v454 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                         &v568,
                         (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
                if ( !v454 )
                  break;
                v455 = (int32_t)v568.fields._current.fields.key;
                v456 = *v211;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v457 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0,
                                                                              v456,
                                                                              v455,
                                                                              0,
                                                                              0,
                                                                              v453);
                System_Linq_Enumerable__Count_int_(
                  v457,
                  (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
              }
              while ( WarBoardAIRoute__IsDetour((System_Int32_array *)v457, v579->fields._allyPieceIndexs_5__5, v458) );
              System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
                &v568,
                (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( !v454 )
              {
                if ( !routeData )
                  sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
                routeData->fields.flagNow |= 0x1000000000uLL;
              }
            }
            v459 = routeData;
            if ( !routeData )
              sub_1C372B4(IsBlockShortestRouteEnemyAndMaster);
            if ( !routeData->fields.actionPiece || (routeData->fields.flagNow & 0x4000000) != 0 )
            {
              v460 = v579->fields._warBoardData_5__2;
              if ( !v460 )
                sub_1C372B4(0);
              Effect = WarBoardData__GetEffect(v460, *v211, v381);
              if ( Effect )
              {
                if ( !routeData )
                  sub_1C372B4(Effect);
                routeData->fields.flagNow |= 0x200000000uLL;
              }
              v462 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v462,
                (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
              v463 = (System_Collections_Generic_List_object__o *)v579->fields.routeDataList;
              if ( !v463 )
                sub_1C372B4(0);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v565,
                v463,
                (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
              *(_OWORD *)&v576.fields._list = *(_OWORD *)&v565.fields._dictionary;
              v576.fields._current = v565.fields._current.fields.key;
              while ( 1 )
              {
                v464 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v576,
                         (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
                if ( !v464 )
                  break;
                v465 = v576.fields._current;
                if ( !v576.fields._current )
                  sub_1C372B4(v464);
                if ( (BYTE3(v576.fields._current[1].klass) & 8) != 0 )
                {
                  v466 = v576.fields._current[3].klass;
                  if ( !v466 )
                    sub_1C372B4(0);
                  v467 = WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v466, 0);
                  if ( v467 )
                  {
                    if ( !v462 )
                      sub_1C372B4(v467);
                    monitor_high = HIDWORD(v465[1].monitor);
                    v469 = v462->fields._items;
                    v470 = Method_System_Collections_Generic_List_int__Add__;
                    ++v462->fields._version;
                    if ( !v469 )
                      sub_1C372B4(v467);
                    v471 = v462->fields._size;
                    if ( (unsigned int)v471 >= LODWORD(v469->max_length) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v462,
                        monitor_high,
                        *(const MethodInfo_3786000 **)(*(_QWORD *)(v470[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v462->fields._size = v471 + 1;
                      v469->m_Items[v471] = monitor_high;
                    }
                  }
                  if ( (BYTE3(v465[1].klass) & 4) != 0 )
                  {
                    v472 = (WarBoardPieceData_o *)v465[3].klass;
                    if ( !v472 )
                      sub_1C372B4(0);
                    if ( WarBoardPieceData__get_isMaster(v472, 0) )
                    {
                      v473 = (WarBoardPieceData_o *)v465[3].monitor;
                      if ( !v473 )
                        sub_1C372B4(0);
                      v474 = WarBoardPieceData__get_isServant(v473, 0);
                      if ( v474 )
                      {
                        if ( !v462 )
                          sub_1C372B4(v474);
                        v475 = (int32_t)v465[1].monitor;
                        v476 = v462->fields._items;
                        v477 = Method_System_Collections_Generic_List_int__Add__;
                        ++v462->fields._version;
                        if ( !v476 )
                          sub_1C372B4(v474);
                        v478 = v462->fields._size;
                        if ( (unsigned int)v478 >= LODWORD(v476->max_length) )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v462,
                            v475,
                            *(const MethodInfo_3786000 **)(*(_QWORD *)(v477[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v462->fields._size = v478 + 1;
                          v476->m_Items[v478] = v475;
                        }
                      }
                    }
                  }
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v576,
                (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
              if ( !routeData )
                sub_1C372B4(v479);
              v480 = routeData->fields.basePiece;
              if ( !v480 )
                sub_1C372B4(0);
              v481 = WarBoardPieceData__get_isServant(v480, 0);
              if ( v481 )
              {
                if ( !routeData )
                  sub_1C372B4(v481);
                CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                                   (WarBoardAIRoute_o *)v481,
                                   routeData->fields.actionIndex,
                                   v462,
                                   v482);
                if ( CanAcquireItem )
                {
                  v485 = routeData;
                  if ( !routeData )
                    sub_1C372B4(CanAcquireItem);
                  v486 = routeData->fields.flagNow | 0x18000000;
                  goto LABEL_610;
                }
              }
              else
              {
                if ( !routeData )
                  sub_1C372B4(v481);
                v487 = routeData->fields.basePiece;
                if ( !v487 )
                  sub_1C372B4(0);
                CanAcquireItem = WarBoardPieceData__get_isMaster(v487, 0);
                if ( CanAcquireItem )
                {
                  if ( !routeData )
                    sub_1C372B4(CanAcquireItem);
                  CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                                     (WarBoardAIRoute_o *)CanAcquireItem,
                                     routeData->fields.actionIndex,
                                     v462,
                                     v488);
                  v489 = routeData;
                  if ( CanAcquireItem )
                  {
                    if ( !routeData )
                      sub_1C372B4(CanAcquireItem);
                    routeData->fields.flagNow |= 0x10000000uLL;
                  }
                  else if ( !routeData )
                  {
                    sub_1C372B4(CanAcquireItem);
                  }
                  if ( (v489->fields.flagNow & 0x4000000) != 0 )
                  {
                    v490 = v489->fields.actionPiece;
                    if ( !v490 )
                      sub_1C372B4(0);
                    CanAcquireItem = WarBoardPieceData__get_isServant(v490, 0);
                    if ( CanAcquireItem )
                    {
                      if ( !routeData )
                        sub_1C372B4(CanAcquireItem);
                      CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                                         (WarBoardAIRoute_o *)CanAcquireItem,
                                         routeData->fields.baseIndex,
                                         v462,
                                         v491);
                      if ( CanAcquireItem )
                      {
                        v485 = routeData;
                        if ( !routeData )
                          sub_1C372B4(CanAcquireItem);
                        v486 = routeData->fields.flagNow | 0x8000000;
LABEL_610:
                        v485->fields.flagNow = v486;
                      }
                    }
                  }
                }
              }
              WarBoardAIRoute__LinkedPieceCount(
                (WarBoardAIRoute_o *)CanAcquireItem,
                &routeData,
                piecePlaceData,
                v462,
                v484);
              v459 = routeData;
              if ( !routeData )
                sub_1C372B4(v492);
            }
            FlagOutOfWarningAreaToDistance = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                               _4__this,
                                               v459->fields.baseIndex,
                                               v459->fields.actionIndex,
                                               v382);
            v459->fields.isMoveByOutOfWarningArea = FlagOutOfWarningAreaToDistance;
            v494 = routeData;
            if ( !routeData )
              sub_1C372B4(FlagOutOfWarningAreaToDistance);
            evalOffsetMagnification = routeData->fields.evalOffsetMagnification;
            if ( !evalOffsetMagnification )
              sub_1C372B4(FlagOutOfWarningAreaToDistance);
            evalOffsetMagnification->fields.isAttack = (routeData->fields.flagNow & 2) != 0;
            v496 = v494->fields.basePiece;
            if ( !v496 )
              sub_1C372B4(FlagOutOfWarningAreaToDistance);
            piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields.piecePersonalityDic;
            if ( !piecePersonalityDic )
              sub_1C372B4(0);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                 piecePersonalityDic,
                                                                 v496->fields._index_k__BackingField,
                                                                 &value,
                                                                 (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v498 = value;
              v499 = (WarBoardAIEvalCalcurater_o *)sub_1C372A4(WarBoardAIEvalCalcurater_TypeInfo);
              WarBoardAIEvalCalcurater___ctor(v499, (WarBoardAIRoute_PiecePersonality_o *)v498, 0);
              if ( !v499 )
                sub_1C372B4(v500);
              WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v499, &routeData, 0);
              WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
                v499,
                &routeData,
                _4__this->fields.averageBenefitValue,
                0);
              if ( !routeData )
                sub_1C372B4(0);
              WarBoardAIRoute_RouteData__CalcEvalValue(routeData, v501);
              v502 = WarBoardAIRoute___c_TypeInfo;
              v503 = v579->fields.routeDataList;
              if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v502 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_5 = (System_Func_object__object__o *)v502->static_fields->__9__47_5;
              if ( !_9__47_5 )
              {
                if ( !v502->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v502);
                  v502 = WarBoardAIRoute___c_TypeInfo;
                }
                v505 = (Il2CppObject *)v502->static_fields->__9;
                _9__47_5 = (System_Func_object__object__o *)sub_1C372A4(System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
                System_Func_object__object____ctor(
                  _9__47_5,
                  v505,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__,
                  0);
                v506 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v506->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
                sub_1C36FFC((CGThumbnailListItem_o *)&v506->__9__47_5, (int32_t)_9__47_5, v507, v508);
              }
              v509 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v503,
                                                                      (System_Func_TSource__TResult__o *)_9__47_5,
                                                                      (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
              v510 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
              System_Collections_Generic_List_object____ctor_58337560(
                v510,
                v509,
                (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___78084616);
              if ( !v510 )
                sub_1C372B4(v511);
              v514 = (Il2CppObject *)routeData;
              v515 = v510->fields._items;
              v516 = Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__;
              ++v510->fields._version;
              if ( !v515 )
                sub_1C372B4(v511);
              v517 = v510->fields._size;
              if ( (unsigned int)v517 >= LODWORD(v515->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v510,
                  v514,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v516[4] + 192LL) + 112LL));
              }
              else
              {
                v518 = &v515->obj.klass + v517;
                v510->fields._size = v517 + 1;
                v518[4] = (Il2CppClass *)v514;
                sub_1C36FFC((CGThumbnailListItem_o *)(v518 + 4), (int32_t)v514, v512, v513);
              }
              v519 = (WarBoardAIRoute_RouteData_o *)BasicHelper__IndexValue_object__51208572(
                                                      (System_Collections_Generic_List_T__o *)v510,
                                                      v510->fields._size - 2,
                                                      0,
                                                      (const MethodInfo_30D617C *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
              route = v519;
              if ( v519 )
              {
                v520 = (int)routeData;
                if ( !routeData )
                  sub_1C372B4(v519);
                if ( routeData->fields.basePiece == v519->fields.basePiece )
                {
                  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
                    v499,
                    &route,
                    routeData,
                    0);
                  if ( !route )
                    sub_1C372B4(0);
                  WarBoardAIRoute_RouteData__CalcEvalValue(route, v522);
                }
              }
              allRouteList = (System_Collections_Generic_List_object__o *)_4__this->fields.allRouteList;
              if ( !allRouteList )
                sub_1C372B4(0);
              v524 = allRouteList->fields._items;
              v525 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++allRouteList->fields._version;
              if ( !v524 )
                sub_1C372B4(allRouteList);
              v526 = allRouteList->fields._size;
              if ( (unsigned int)v526 >= LODWORD(v524->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  allRouteList,
                  (Il2CppObject *)v510,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v525[4] + 192LL) + 112LL));
              }
              else
              {
                v527 = &v524->obj.klass + v526;
                allRouteList->fields._size = v526 + 1;
                v527[4] = (Il2CppClass *)v510;
                sub_1C36FFC((CGThumbnailListItem_o *)(v527 + 4), (int32_t)v510, v520, v521);
              }
              if ( !routeData )
                sub_1C372B4(this);
              if ( routeData->fields.baseIndex != routeData->fields.actionIndex && (routeData->fields.flagNow & 2) == 0 )
              {
                searchCount = v579->fields.searchCount;
                if ( searchCount != 1 )
                {
                  v559 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                           _4__this,
                                           piecePlaceData,
                                           searchCount,
                                           (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v510,
                                           v528);
                  v560 = v579;
                  v579->fields.__2__current = v559;
                  sub_1C36FFC((CGThumbnailListItem_o *)&v560->fields.__2__current, (int32_t)v559, v561, v562);
                  result = 1;
                  v579->fields.__1__state = 1;
                  return result;
                }
                dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
                v531 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                         _4__this,
                                         piecePlaceData,
                                         1,
                                         (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v510,
                                         v528);
                if ( !routeData )
                  sub_1C372B4(v531);
                if ( !dictionaryCreateRouteDataEvalValue )
                  sub_1C372B4(v531);
                System_Collections_Generic_Dictionary_object__float___Add(
                  dictionaryCreateRouteDataEvalValue,
                  v531,
                  routeData->fields.evalValue,
                  (const MethodInfo_346C7EC *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
              }
            }
            goto LABEL_662;
          }
        }
        WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v579, v57);
        v157 = v579;
        v158 = v579->fields.searchCount;
        v579->fields.__7__wrap8.fields._current = 0u;
        *(_OWORD *)&v157->fields.__7__wrap8.fields._dictionary = 0u;
        if ( v158 != 1 )
          return 0;
        if ( !_4__this )
          sub_1C372B4(v156);
        v159 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        v160 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v160 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__47_6 = (System_Func_T__TResult__o *)v160->static_fields->__9__47_6;
        if ( !_9__47_6 )
        {
          if ( !v160->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v160);
            v160 = WarBoardAIRoute___c_TypeInfo;
          }
          v162 = (Il2CppObject *)v160->static_fields->__9;
          _9__47_6 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v162,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            0);
          v163 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v163->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_1C36FFC((CGThumbnailListItem_o *)&v163->__9__47_6, (int32_t)_9__47_6, v164, v165);
        }
        v166 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__float___float_(
                 v159,
                 (System_Func_TSource__TKey__o *)_9__47_6,
                 (const MethodInfo_31176A4 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v579->fields._servantAndEnemyMasterRange_5__15 = 0;
        v167 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v167 )
          sub_1C372B4(0);
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v167,
                  (const MethodInfo_346C4BC *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v169 = _4__this->fields.npcData;
        if ( !v169 )
          sub_1C372B4(Count);
        v170 = v579;
        v171 = (float)((float)v169->fields.calcEllipsis / 100.0) * (float)(int)Count;
        v172 = (int)v171;
        if ( v171 == INFINITY )
          v172 = 0x80000000;
        v579->fields._servantAndEnemyRange_5__14 = v172;
        calcEllipsisMin = v169->fields.calcEllipsisMin;
        if ( calcEllipsisMin <= v172 )
          calcEllipsisMin = v172;
        v170->fields._servantAndEnemyRange_5__14 = calcEllipsisMin;
        if ( !v166 )
          sub_1C372B4(Count);
        v174 = v166->klass;
        v175 = *(unsigned __int16 *)&v166->klass->_2.rank;
        if ( *(_WORD *)&v166->klass->_2.rank )
        {
          p_offset = &v174->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            --v175;
            p_offset += 4;
            if ( !v175 )
              goto LABEL_112;
          }
          v177 = (__int64)&v174->vtable[*p_offset];
        }
        else
        {
LABEL_112:
          v177 = sub_1C87870(v166, System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo, 0);
        }
        v178 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v177)(
                 v166,
                 *(_QWORD *)(v177 + 8));
        v179 = &v579->fields.__7__wrap24;
        *(_QWORD *)&v579->fields.__7__wrap24 = v178;
        sub_1C36FFC((CGThumbnailListItem_o *)v179, v178, v180, v181);
        v4 = v579;
        v579->fields.__1__state = -4;
        goto LABEL_117;
      }
    }
    else
    {
      v39 = _4__this->fields.aiRouteMasterData;
      if ( !v39 )
        sub_1C372B4(v34);
      if ( v579 )
      {
        v40 = v39->fields.masterType;
        v579->fields._masterExists_5__8 = v40 != 3;
        if ( v40 == 3 )
          goto LABEL_29;
        goto LABEL_25;
      }
    }
    sub_1C372B4(v34);
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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
  if ( (byte_4C409A3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    byte_4C409A3 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &this->fields.__7__wrap8,
    (const MethodInfo_3553D48 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
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

  if ( (byte_4C409A4 & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    byte_4C409A4 = 1;
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
      v7 = sub_1C87870(v3, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v7)(v3, *(_QWORD *)(v7 + 8));
  }
}


void WarBoardAIRoute___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C40994 & 1) == 0 )
  {
    sub_1C37058(&WarBoardAIRoute___c_TypeInfo);
    byte_4C40994 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(WarBoardAIRoute___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)WarBoardAIRoute___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C40995 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1C37058(&IWarBoardObjectData_TypeInfo);
    byte_4C40995 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
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
    v7 = sub_1C87870(x, IWarBoardObjectData_TypeInfo, 2);
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
  if ( (byte_4C40996 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    byte_4C40996 = 1;
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
  if ( (byte_4C40997 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    byte_4C40997 = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, (const MethodInfo *)x.fields.key);
}


WarBoardAIRoute_RouteData_o *WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return WarBoardAIRoute_RouteData__ShallowCopy(x, (const MethodInfo *)x);
}


float WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // w19

  value = x.fields.value;
  if ( (byte_4C40998 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__);
    byte_4C40998 = 1;
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

  if ( (byte_4C40999 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1C37058(&IWarBoardObjectData_TypeInfo);
    byte_4C40999 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
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
    v7 = sub_1C87870(x, IWarBoardObjectData_TypeInfo, 4);
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

  if ( (byte_4C4099A & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1C37058(&IWarBoardObjectData_TypeInfo);
    byte_4C4099A = 1;
  }
  if ( !x )
    sub_1C372B4(this);
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
    v7 = sub_1C87870(x, IWarBoardObjectData_TypeInfo, 5);
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
  if ( (byte_4C4099B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__);
    byte_4C4099B = 1;
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
    sub_1C372B4(this);
  return !WarBoardItemData__get_Acquired(z, 0) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_1C372B4(this);
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
  if ( (byte_4C4099C & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_1C37058(&IWarBoardObjectData_TypeInfo);
    byte_4C4099C = 1;
  }
  if ( !z )
    sub_1C372B4(this);
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
    v8 = sub_1C87870(z, IWarBoardObjectData_TypeInfo, 0);
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
    v12 = sub_1C87870(z, IWarBoardObjectData_TypeInfo, 3);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
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


bool WarBoardAIRoute___c__DisplayClass52_0___GetDefenseAreaData_b__0(
        WarBoardAIRoute___c__DisplayClass52_0_o *this,
        int32_t square,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // x0

  if ( (byte_4C4099D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    byte_4C4099D = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_1C372B4(0);
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_341EBCC *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
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
    sub_1C372B4(this);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(route->max_length) )
    sub_1C372BC(this);
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
    sub_1C372B4(this);
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
  if ( (byte_4C4099E & 1) == 0 )
  {
    sub_1C37058(&AStarSearch_TypeInfo);
    this = (WarBoardAIRoute___c__DisplayClass64_0_o *)sub_1C37058(&IWarBoardObjectData_TypeInfo);
    byte_4C4099E = 1;
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
    v9 = sub_1C87870(x, IWarBoardObjectData_TypeInfo, 1);
  }
  v11 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v9)(x, *(_QWORD *)(v9 + 8));
  if ( !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  this = (WarBoardAIRoute___c__DisplayClass64_0_o *)AStarSearch__RouteSearch(0, baseSquareIndex, v11, 0, 0, v10);
  if ( !this )
LABEL_14:
    sub_1C372B4(this);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_T__o *routeDataList; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4C4099F & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1C37058(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C37058(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__);
    sub_1C37058(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
    byte_4C4099F = 1;
  }
  v5 = sub_1C372A4(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = targetObject;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)targetObject, v7, v8);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v10 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    0);
  return BasicHelper__Any_object_(
           routeDataList,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
  if ( (byte_4C409A0 & 1) == 0 )
  {
    sub_1C37058(&IWarBoardObjectData_TypeInfo);
    this = (WarBoardAIRoute___c__DisplayClass65_1_o *)sub_1C37058(&WarBoardItemData_TypeInfo);
    byte_4C409A0 = 1;
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
    v12 = sub_1C87870(v4->fields.targetObject, IWarBoardObjectData_TypeInfo, 0);
  }
  this = (WarBoardAIRoute___c__DisplayClass65_1_o *)(*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v12)(
                                                      targetObject,
                                                      *(_QWORD *)(v12 + 8));
  if ( baseIndex == (_DWORD)this )
    return 1;
  v13 = v4->fields.targetObject;
  if ( !v13 )
LABEL_25:
    sub_1C372B4(this);
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
    v18 = sub_1C87870(v13, IWarBoardObjectData_TypeInfo, 0);
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
  if ( (byte_4C409A1 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass66_0_o *)sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__);
    byte_4C409A1 = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  value = v4->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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