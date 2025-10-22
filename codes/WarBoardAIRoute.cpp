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
  Il2CppObject *v34; // x1
  const MethodInfo *v35; // x3
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  int32_t v37; // w8
  const MethodInfo *v38; // x3
  WarBoardActionPointEntity_o *v39; // x0
  int32_t v40; // w8
  const MethodInfo *v41; // x3
  WarBoardActionPointEntity_o *v42; // x0
  int32_t v43; // w8
  const MethodInfo *v44; // x3
  WarBoardActionPointEntity_o *v45; // x0
  const MethodInfo *v46; // x1
  int32_t v47; // w8
  struct System_Collections_Generic_List_WarBoardRatingBase__o *v48; // x8
  int32_t size; // w2
  int32_t version; // w9
  CGThumbnailListItem_o *p_aiIds; // x20
  struct System_Int32_array *aiIds; // x24
  System_Array_o *v53; // x21
  System_RuntimeFieldHandle_o v54; // x1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v58; // x26
  int v59; // w21
  WarBoardAIRoute_PiecePersonality_o *v60; // x27
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x5
  WarBoardPieceData_o *Piece; // x0
  int32_t overwriteAiId_k__BackingField; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *stageNpcMaster; // x8
  WarBoardData_o *v67; // x29
  unsigned __int64 v68; // x23
  System_Collections_Generic_List_object__o *actionTrandList; // x20
  Il2CppObject *v70; // x22
  WarBoardAIRoute_ActionTrendInfo_o *v71; // x21
  const MethodInfo *v72; // x2
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v79; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v80; // x8
  WarBoardData_o *v81; // x29
  unsigned __int64 v82; // x20
  int32_t v83; // w2
  const MethodInfo *v84; // x3
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
  __int64 v99; // x1
  __int64 v100; // x26
  __int64 v101; // x8
  __int64 v102; // x9
  int *v103; // x10
  __int64 v104; // x0
  __int64 v105; // x8
  __int64 v106; // x9
  int *v107; // x10
  __int64 v108; // x0
  __int64 v109; // x1
  int32_t *v110; // x29
  _BOOL8 v111; // x0
  __int64 v112; // x1
  struct System_Int32_array *v113; // x8
  _BOOL8 v114; // x0
  __int64 v115; // x1
  __int64 v116; // x0
  __int64 v117; // x1
  _BOOL8 v118; // x0
  __int64 v119; // x1
  const MethodInfo *v120; // x3
  __int64 v121; // x8
  __int64 v122; // x9
  int *v123; // x10
  __int64 v124; // x0
  CGThumbnailListItem_o *p_ratingBaseIds; // x20
  struct System_Int32_array *ratingBaseIds; // x22
  System_Array_o *v127; // x21
  System_RuntimeFieldHandle_o v128; // x1
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  il2cpp_array_size_t v131; // x8
  unsigned __int64 v132; // x24
  int32_t v133; // w20
  WarBoardData_o *v134; // x25
  __int64 v135; // x26
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  struct System_Int32_array *v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  Il2CppClass **v143; // x8
  int32_t v144; // w21
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicRatingbaseCalcValue; // x20
  Il2CppObject *v146; // x25
  struct System_Int32_array *tacticalIds; // x19
  CGThumbnailListItem_o *p_tacticalIds; // x21
  System_Array_o *v149; // x20
  System_RuntimeFieldHandle_o v150; // x1
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  il2cpp_array_size_t v153; // x8
  unsigned __int64 v154; // x21
  int32_t v155; // w20
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  System_Collections_Generic_List_object__o *v158; // x8
  struct System_Object_array *v159; // x9
  _QWORD *v160; // x10
  __int64 v161; // x11
  WarBoardData_o *v162; // x1
  Il2CppClass **v163; // x0
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v166; // x22
  const MethodInfo *v167; // x3
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o **p_tacticalTrendList; // [xsp+8h] [xbp-C8h]
  struct System_Collections_Generic_List_WarBoardRatingBase__o **p_ratingBaseList; // [xsp+18h] [xbp-B8h]
  struct System_Int32_array *v173; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_Dictionary_int__object__o **p_piecePersonalityDic; // [xsp+38h] [xbp-98h]
  DataManager_o *Instance; // [xsp+40h] [xbp-90h]
  WarBoardReinforcementsEntity_o *v177; // [xsp+48h] [xbp-88h] BYREF
  WarBoardStageReinforcementsEntity_o *v178; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *item; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *v180; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C546ED & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_IndexValue_int____78190416);
    sub_1C3E564(&WarBoardEvalValueSquare_CalcEval_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarBoardAIMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_1C3E564(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
    sub_1C3E564(&WarBoardAIRoute_PiecePersonality_TypeInfo);
    sub_1C3E564(&ShortestDistanceFromAllyMaster_TypeInfo);
    sub_1C3E564(&ShortestDistanceFromAllyServant_TypeInfo);
    sub_1C3E564(&ShortestDistanceFromEnemyMaster_TypeInfo);
    sub_1C3E564(&ShortestDistanceFromEnemyServant_TypeInfo);
    sub_1C3E564(&ShortestDistanceFromItem_TypeInfo);
    sub_1C3E564(&ShortestDistanceFromPrioritySpace_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384);
    sub_1C3E564(&Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49);
    sub_1C3E564(&Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72);
    sub_1C3E564(&Method_WarBoardAIRoute___ctor_b__42_0__);
    sub_1C3E564(&WarBoardAiTargetCacher_TypeInfo);
    byte_4C546ED = 1;
  }
  v180 = 0;
  entity = 0;
  v178 = 0;
  item = 0;
  v177 = 0;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v3;
  p_tacticalTrendList = &this->fields.tacticalTrendList;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.tacticalTrendList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v6;
  p_ratingBaseList = &this->fields.ratingBaseList;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.ratingBaseList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.piecePersonalityDic, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.allRouteList, (int32_t)v12, v13, v14);
  v15 = this;
  v16 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v16,
    (const MethodInfo_34AD9DC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v16;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dicUniqueKeyAdvantagePieceData, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v19,
    (const MethodInfo_347DFEC *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v19;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dictionaryCreateRouteDataEvalValue, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v22,
    (const MethodInfo_34AD9DC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v22;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dicUniqueKeyDesignationItem, (int32_t)v22, v23, v24);
  v25 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v25,
    (const MethodInfo_34AD9DC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v25;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dicUniqueKeyTarget, (int32_t)v25, v26, v27);
  v28 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v28,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v28;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dicRatingbaseCalcValue, (int32_t)v28, v29, v30);
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.npcData, (int32_t)npc, v31, v32);
  if ( !npc )
    goto LABEL_154;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&npc->fields.forceId;
  this->fields.pickValue = npc->fields.pickValue;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  ActionPointEntity = WarBoardData__GetActionPointEntity(
                        playedStageReinforcementsList,
                        this->fields.forceId,
                        this->fields.groupId,
                        v35);
  v37 = ActionPointEntity ? ActionPointEntity->fields.moveCost : 0;
  this->fields.moveCost = v37;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v39 = WarBoardData__GetActionPointEntity(
          playedStageReinforcementsList,
          this->fields.forceId,
          this->fields.groupId,
          v38);
  v40 = v39 ? v39->fields.masterMoveCost : 0;
  this->fields.masterMoveCost = v40;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v42 = WarBoardData__GetActionPointEntity(
          playedStageReinforcementsList,
          this->fields.forceId,
          this->fields.groupId,
          v41);
  v43 = v42 ? v42->fields.attackCost : 0;
  this->fields.attackCost = v43;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v45 = WarBoardData__GetActionPointEntity(
          playedStageReinforcementsList,
          this->fields.forceId,
          this->fields.groupId,
          v44);
  v47 = v45 ? v45->fields.wallAttackCost : 0;
  this->fields.wallAttackCost = v47;
  WarBoardAIRoute__Clear(this, v46);
  playedStageReinforcementsList = (WarBoardData_o *)this->fields.piecePersonalityDic;
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)playedStageReinforcementsList,
    (const MethodInfo_340C5C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  v48 = *p_ratingBaseList;
  if ( !*p_ratingBaseList )
    goto LABEL_154;
  size = v48->fields._size;
  version = v48->fields._version;
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.piecePersonalityDic;
  v48->fields._size = 0;
  v48->fields._version = version + 1;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v48->fields._items, 0, size, 0);
  p_aiIds = (CGThumbnailListItem_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v53 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 4);
    v54.fields.value = Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v53, v54, 0);
    p_aiIds->klass = (CGThumbnailListItem_c *)v53;
    sub_1C3E508(p_aiIds, (int32_t)v53, v55, v56);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_154;
  }
  max_length = aiIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v58 = 0;
    v173 = aiIds;
    do
    {
      if ( v58 >= (unsigned int)max_length )
        goto LABEL_155;
      v59 = aiIds->m_Items[v58];
      v60 = (WarBoardAIRoute_PiecePersonality_o *)sub_1C3E7B0(WarBoardAIRoute_PiecePersonality_TypeInfo);
      WarBoardAIRoute_PiecePersonality___ctor(v60, v61);
      playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !playedStageReinforcementsList )
        goto LABEL_154;
      playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
      if ( !playedStageReinforcementsList )
        goto LABEL_154;
      Piece = WarBoardData__GetPiece(
                playedStageReinforcementsList,
                v15->fields.forceId,
                v15->fields.groupId,
                v58,
                1,
                v62);
      if ( Piece
        && (overwriteAiId_k__BackingField = Piece->fields._overwriteAiId_k__BackingField,
            overwriteAiId_k__BackingField > 0)
        || (overwriteAiId_k__BackingField = v59, v59 >= 1) )
      {
        playedStageReinforcementsList = (WarBoardData_o *)Instance;
        if ( !Instance )
          goto LABEL_154;
        playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                            Instance,
                                                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !playedStageReinforcementsList )
          goto LABEL_154;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
               &entity,
               overwriteAiId_k__BackingField,
               (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                              Instance,
                                                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
          if ( !entity )
            goto LABEL_154;
          v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList;
          playedStageReinforcementsList = (WarBoardData_o *)WarBoardAIEntity__GetActionTrendIds(
                                                              (WarBoardAIEntity_o *)entity,
                                                              0);
          if ( !playedStageReinforcementsList )
            goto LABEL_154;
          stageNpcMaster = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)playedStageReinforcementsList->fields.stageNpcMaster;
          v67 = playedStageReinforcementsList;
          if ( (int)stageNpcMaster >= 1 )
          {
            v68 = 0;
            while ( v68 < (unsigned int)stageNpcMaster )
            {
              if ( !v65 )
                goto LABEL_154;
              playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v65,
                                                                  &v180,
                                                                  *((_DWORD *)&v67->fields.npcEntityDict + v68),
                                                                  (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)playedStageReinforcementsList & 1) != 0 )
              {
                if ( !v60 )
                  goto LABEL_154;
                actionTrandList = (System_Collections_Generic_List_object__o *)v60->fields.actionTrandList;
                v70 = v180;
                v71 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C3E7B0(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
                WarBoardAIRoute_ActionTrendInfo___ctor(v71, (WarBoardActionTrendEntity_o *)v70, v72);
                if ( !actionTrandList )
                  goto LABEL_154;
                items = actionTrandList->fields._items;
                v76 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
                ++actionTrandList->fields._version;
                if ( !items )
                  goto LABEL_154;
                v77 = actionTrandList->fields._size;
                if ( (unsigned int)v77 >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    actionTrandList,
                    (Il2CppObject *)v71,
                    *(const MethodInfo_37B5460 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
                }
                else
                {
                  v78 = &items->obj.klass + v77;
                  actionTrandList->fields._size = v77 + 1;
                  v78[4] = (Il2CppClass *)v71;
                  sub_1C3E508((CGThumbnailListItem_o *)(v78 + 4), (int32_t)v71, v73, v74);
                }
              }
              LODWORD(stageNpcMaster) = v67->fields.stageNpcMaster;
              if ( (__int64)++v68 >= (int)stageNpcMaster )
                goto LABEL_55;
            }
LABEL_155:
            sub_1C3E7C8(playedStageReinforcementsList, v34);
          }
LABEL_55:
          playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                              Instance,
                                                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_154;
          v79 = (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList;
          playedStageReinforcementsList = (WarBoardData_o *)WarBoardAIEntity__GetRatingOffsetIds(
                                                              (WarBoardAIEntity_o *)entity,
                                                              0);
          aiIds = v173;
          v15 = this;
          if ( !playedStageReinforcementsList )
            goto LABEL_154;
          v80 = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)playedStageReinforcementsList->fields.stageNpcMaster;
          v81 = playedStageReinforcementsList;
          if ( (int)v80 >= 1 )
          {
            v82 = 0;
            while ( v82 < (unsigned int)v80 )
            {
              if ( !v79 )
                goto LABEL_154;
              playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v79,
                                                                  &item,
                                                                  *((_DWORD *)&v81->fields.npcEntityDict + v82),
                                                                  (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)playedStageReinforcementsList & 1) != 0 )
              {
                if ( !v60 )
                  goto LABEL_154;
                playedStageReinforcementsList = (WarBoardData_o *)v60->fields.ratingOffsetList;
                if ( !playedStageReinforcementsList )
                  goto LABEL_154;
                v34 = item;
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
                    v34,
                    *(const MethodInfo_37B5460 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
                }
                else
                {
                  v88 = &stageEntity->obj.klass + stageNpcMaster_low;
                  LODWORD(playedStageReinforcementsList->fields.stageNpcMaster) = stageNpcMaster_low + 1;
                  v88[4] = (Il2CppClass *)v34;
                  sub_1C3E508((CGThumbnailListItem_o *)(v88 + 4), (int32_t)v34, v83, v84);
                }
              }
              LODWORD(v80) = v81->fields.stageNpcMaster;
              if ( (__int64)++v82 >= (int)v80 )
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
        v58,
        (Il2CppObject *)v60,
        (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      LODWORD(max_length) = aiIds->max_length;
    }
    while ( (__int64)++v58 < (int)max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v90 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_154;
  v91 = playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !v91 )
    goto LABEL_154;
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v91[1].monitor;
  v93 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(v93, (Il2CppObject *)v15, Method_WarBoardAIRoute___ctor_b__42_0__, 0);
  playedStageReinforcementsList = (WarBoardData_o *)System_Linq_Enumerable__Where_object_(
                                                      monitor,
                                                      (System_Func_TSource__bool__o *)v93,
                                                      (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
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
    v98 = sub_1C8ED7C(
            playedStageReinforcementsList,
            System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo,
            0);
  }
  v100 = (*(__int64 (__fastcall **)(WarBoardData_o *, _QWORD))v98)(v95, *(_QWORD *)(v98 + 8));
  if ( !v100 )
    sub_1C3E7C0(0, v99);
  while ( 1 )
  {
    v101 = *(_QWORD *)v100;
    v102 = *(unsigned __int16 *)(*(_QWORD *)v100 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v100 + 302LL) )
    {
      v103 = (int *)(*(_QWORD *)(v101 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v103 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v102;
        v103 += 4;
        if ( !v102 )
          goto LABEL_87;
      }
      v104 = v101 + 16LL * *v103 + 312;
    }
    else
    {
LABEL_87:
      v104 = sub_1C8ED7C(v100, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v104)(v100, *(_QWORD *)(v104 + 8)) & 1) == 0 )
      break;
    v105 = *(_QWORD *)v100;
    v106 = *(unsigned __int16 *)(*(_QWORD *)v100 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v100 + 302LL) )
    {
      v107 = (int *)(*(_QWORD *)(v105 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v107 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        --v106;
        v107 += 4;
        if ( !v106 )
          goto LABEL_94;
      }
      v108 = v105 + 16LL * *v107 + 312;
    }
    else
    {
LABEL_94:
      v108 = sub_1C8ED7C(v100, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0);
    }
    v110 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v108)(v100, *(_QWORD *)(v108 + 8));
    if ( !v110 )
      sub_1C3E7C0(0, v109);
    if ( !*p_piecePersonalityDic )
      sub_1C3E7C0(0, v109);
    v111 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
             *p_piecePersonalityDic,
             v110[7],
             (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__);
    if ( !v111 )
    {
      v113 = v91->fields._items;
      if ( !v113 )
        sub_1C3E7C0(v111, v112);
      if ( !Master_object )
        sub_1C3E7C0(v111, v112);
      v114 = WarBoardStageReinforcementsMaster__TryGetEntity(
               (WarBoardStageReinforcementsMaster_o *)Master_object,
               &v178,
               (int32_t)v113->bounds,
               v110[72],
               0);
      if ( v114 )
      {
        if ( !v178 )
          sub_1C3E7C0(v114, v115);
        v116 = BasicHelper__IndexValue_int_(
                 v178->fields.reinforcementsIds,
                 v110[73],
                 -1,
                 (const MethodInfo_30E7F2C *)Method_BasicHelper_IndexValue_int____78190416);
        if ( !v90 )
          sub_1C3E7C0(v116, v117);
        v118 = WarBoardReinforcementsMaster__TryGetEntity((WarBoardReinforcementsMaster_o *)v90, &v177, v116, 0);
        if ( v118 )
        {
          if ( !v177 )
            sub_1C3E7C0(v118, v119);
          WarBoardAIRoute__AddPiecePersonalityDic(this, v177->fields.aiId, v110[7], v120);
        }
      }
    }
  }
  v121 = *(_QWORD *)v100;
  v122 = *(unsigned __int16 *)(*(_QWORD *)v100 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v100 + 302LL) )
  {
    v123 = (int *)(*(_QWORD *)(v121 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v123 - 1) != System_IDisposable_TypeInfo )
    {
      --v122;
      v123 += 4;
      if ( !v122 )
        goto LABEL_111;
    }
    v124 = v121 + 16LL * *v123 + 312;
  }
  else
  {
LABEL_111:
    v124 = sub_1C8ED7C(v100, System_IDisposable_TypeInfo, 0);
  }
  playedStageReinforcementsList = (WarBoardData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v124)(
                                                      v100,
                                                      *(_QWORD *)(v124 + 8));
  p_ratingBaseIds = (CGThumbnailListItem_o *)&npc->fields.ratingBaseIds;
  ratingBaseIds = npc->fields.ratingBaseIds;
  if ( !ratingBaseIds )
  {
    v127 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 6);
    v128.fields.value = Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v127, v128, 0);
    p_ratingBaseIds->klass = (CGThumbnailListItem_c *)v127;
    sub_1C3E508(p_ratingBaseIds, (int32_t)v127, v129, v130);
    ratingBaseIds = (struct System_Int32_array *)p_ratingBaseIds->klass;
    if ( !p_ratingBaseIds->klass )
LABEL_154:
      sub_1C3E7C0(playedStageReinforcementsList, v34);
  }
  v131 = ratingBaseIds->max_length;
  if ( (int)v131 >= 1 )
  {
    v132 = 0;
    while ( 2 )
    {
      if ( v132 >= (unsigned int)v131 )
        goto LABEL_155;
      playedStageReinforcementsList = (WarBoardData_o *)Instance;
      if ( Instance )
      {
        v133 = ratingBaseIds->m_Items[v132];
        playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                            Instance,
                                                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
        if ( playedStageReinforcementsList )
        {
          playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___GetEntity(
                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
                                                              v133,
                                                              (const MethodInfo_33B2F58 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
          if ( playedStageReinforcementsList )
          {
            v134 = playedStageReinforcementsList;
            switch ( HIDWORD(playedStageReinforcementsList->fields.stageEntity) )
            {
              case 0:
                v135 = sub_1C3E7B0(ShortestDistanceFromAllyServant_TypeInfo);
                ShortestDistanceFromAllyServant___ctor((ShortestDistanceFromAllyServant_o *)v135, 0);
                if ( !v135 )
                  goto LABEL_154;
                goto LABEL_133;
              case 1:
                v135 = sub_1C3E7B0(ShortestDistanceFromEnemyServant_TypeInfo);
                ShortestDistanceFromEnemyServant___ctor((ShortestDistanceFromEnemyServant_o *)v135, 0);
                if ( !v135 )
                  goto LABEL_154;
                goto LABEL_133;
              case 2:
                v135 = sub_1C3E7B0(ShortestDistanceFromAllyMaster_TypeInfo);
                ShortestDistanceFromAllyMaster___ctor((ShortestDistanceFromAllyMaster_o *)v135, 0);
                if ( !v135 )
                  goto LABEL_154;
                goto LABEL_133;
              case 3:
                v135 = sub_1C3E7B0(ShortestDistanceFromEnemyMaster_TypeInfo);
                ShortestDistanceFromEnemyMaster___ctor((ShortestDistanceFromEnemyMaster_o *)v135, 0);
                if ( !v135 )
                  goto LABEL_154;
                goto LABEL_133;
              case 4:
                v135 = sub_1C3E7B0(ShortestDistanceFromItem_TypeInfo);
                ShortestDistanceFromItem___ctor((ShortestDistanceFromItem_o *)v135, 0);
                if ( !v135 )
                  goto LABEL_154;
                goto LABEL_133;
              case 5:
                v135 = sub_1C3E7B0(ShortestDistanceFromPrioritySpace_TypeInfo);
                ShortestDistanceFromPrioritySpace___ctor((ShortestDistanceFromPrioritySpace_o *)v135, 0);
                if ( !v135 )
                  goto LABEL_154;
LABEL_133:
                *(_QWORD *)(v135 + 16) = v134;
                sub_1C3E508((CGThumbnailListItem_o *)(v135 + 16), (int32_t)v134, v136, v137);
                playedStageReinforcementsList = (WarBoardData_o *)*p_ratingBaseList;
                if ( !*p_ratingBaseList )
                  goto LABEL_154;
                v140 = (struct System_Int32_array *)playedStageReinforcementsList->fields.stageEntity;
                v141 = Method_System_Collections_Generic_List_WarBoardRatingBase__Add__;
                ++HIDWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( !v140 )
                  goto LABEL_154;
                v142 = SLODWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( (unsigned int)v142 >= LODWORD(v140->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)playedStageReinforcementsList,
                    (Il2CppObject *)v135,
                    *(const MethodInfo_37B5460 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
                }
                else
                {
                  v143 = &v140->obj.klass + v142;
                  LODWORD(playedStageReinforcementsList->fields.stageNpcMaster) = v142 + 1;
                  v143[4] = (Il2CppClass *)v135;
                  sub_1C3E508((CGThumbnailListItem_o *)(v143 + 4), v135, v138, v139);
                }
LABEL_138:
                v144 = (int32_t)v134->fields.stageEntity;
                dicRatingbaseCalcValue = this->fields.dicRatingbaseCalcValue;
                v146 = (Il2CppObject *)sub_1C3E7B0(WarBoardEvalValueSquare_CalcEval_TypeInfo);
                System_Object___ctor(v146, 0);
                if ( !dicRatingbaseCalcValue )
                  goto LABEL_154;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                  v144,
                  v146,
                  (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
                LODWORD(v131) = ratingBaseIds->max_length;
                if ( (__int64)++v132 >= (int)v131 )
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
    v149 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 5);
    v150.fields.value = Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v149, v150, 0);
    p_tacticalIds->klass = (CGThumbnailListItem_c *)v149;
    sub_1C3E508(p_tacticalIds, (int32_t)v149, v151, v152);
    tacticalIds = (struct System_Int32_array *)p_tacticalIds->klass;
    if ( !p_tacticalIds->klass )
      goto LABEL_154;
  }
  v153 = tacticalIds->max_length;
  if ( (int)v153 >= 1 )
  {
    v154 = 0;
    while ( v154 < (unsigned int)v153 )
    {
      playedStageReinforcementsList = (WarBoardData_o *)Instance;
      if ( !Instance )
        goto LABEL_154;
      v155 = tacticalIds->m_Items[v154];
      playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                          Instance,
                                                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !playedStageReinforcementsList )
        goto LABEL_154;
      playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
                                                          v155,
                                                          (const MethodInfo_33B2F58 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      v158 = (System_Collections_Generic_List_object__o *)*p_tacticalTrendList;
      if ( !*p_tacticalTrendList )
        goto LABEL_154;
      v159 = v158->fields._items;
      v160 = Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__;
      ++v158->fields._version;
      if ( !v159 )
        goto LABEL_154;
      v161 = v158->fields._size;
      v162 = playedStageReinforcementsList;
      if ( (unsigned int)v161 >= LODWORD(v159->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v158,
          (Il2CppObject *)playedStageReinforcementsList,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
      }
      else
      {
        v163 = &v159->obj.klass + v161;
        v158->fields._size = v161 + 1;
        v163[4] = (Il2CppClass *)v162;
        sub_1C3E508((CGThumbnailListItem_o *)(v163 + 4), (int32_t)v162, v156, v157);
      }
      LODWORD(v153) = tacticalIds->max_length;
      if ( (__int64)++v154 >= (int)v153 )
        goto LABEL_153;
    }
    goto LABEL_155;
  }
LABEL_153:
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v166 = (WarBoardAiTargetCacher_o *)sub_1C3E7B0(WarBoardAiTargetCacher_TypeInfo);
  WarBoardAiTargetCacher___ctor(v166, forceId, groupId, v167);
  this->fields.aiTargetCacher = v166;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.aiTargetCacher, (int32_t)v166, v168, v169);
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
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  il2cpp_array_size_t v30; // x8
  System_Int32_array *v31; // x23
  unsigned __int64 v32; // x19
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v36; // x9
  __int64 max_length_low; // x10
  il2cpp_array_size_t *v38; // x8
  __int64 v39; // [xsp+8h] [xbp-78h]
  WarBoardAIRoute_o *v40; // [xsp+10h] [xbp-70h]
  WarBoardAIEntity_o *v41; // [xsp+18h] [xbp-68h]

  if ( (byte_4C546EE & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardAIMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____);
    sub_1C3E564(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
    sub_1C3E564(&WarBoardAIRoute_PiecePersonality_TypeInfo);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__);
    sub_1C3E564(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
    byte_4C546EE = 1;
  }
  v7 = sub_1C3E7B0(WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_37;
  *(_DWORD *)(v7 + 16) = pieceIndex;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  v11 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
  System_Func_KeyValuePair_int__object___bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    0);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__object___51405184(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v11,
         (const MethodInfo_3106180 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  v39 = v7;
  v40 = this;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v15 = (WarBoardAIRoute_PiecePersonality_o *)sub_1C3E7B0(WarBoardAIRoute_PiecePersonality_TypeInfo);
  WarBoardAIRoute_PiecePersonality___ctor(v15, v16);
  if ( !Master_object )
    goto LABEL_37;
  Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   aiId,
                                   (const MethodInfo_33B2F58 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_37;
  v41 = (WarBoardAIEntity_o *)Entity;
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
                                       (const MethodInfo_33B2F58 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v15 )
          goto LABEL_37;
        actionTrandList = (System_Collections_Generic_List_object__o *)v15->fields.actionTrandList;
        v21 = (WarBoardActionTrendEntity_o *)Entity;
        v22 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C3E7B0(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v22, v21, v23);
        if ( !actionTrandList )
          goto LABEL_37;
        items = actionTrandList->fields._items;
        v27 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++actionTrandList->fields._version;
        if ( !items )
          goto LABEL_37;
        size = actionTrandList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            actionTrandList,
            (Il2CppObject *)v22,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          actionTrandList->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v22;
          sub_1C3E508((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v22, v24, v25);
        }
      }
      LODWORD(max_length) = v18->max_length;
      if ( (__int64)++v19 >= (int)max_length )
        goto LABEL_22;
    }
LABEL_38:
    sub_1C3E7C8(Entity, p_obj);
  }
LABEL_22:
  Entity = WarBoardAIEntity__GetRatingOffsetIds(v41, 0);
  if ( !Entity )
    goto LABEL_37;
  v30 = Entity->max_length;
  v31 = Entity;
  if ( (int)v30 >= 1 )
  {
    v32 = 0;
    while ( v32 < (unsigned int)v30 )
    {
      if ( !v14 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
                                       v31->m_Items[v32],
                                       (const MethodInfo_33B2F58 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v15 )
          goto LABEL_37;
        p_obj = &Entity->obj;
        Entity = (System_Int32_array *)v15->fields.ratingOffsetList;
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
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &bounds->length + max_length_low;
          LODWORD(Entity->max_length) = max_length_low + 1;
          v38[4] = (il2cpp_array_size_t)p_obj;
          sub_1C3E508((CGThumbnailListItem_o *)(v38 + 4), (int32_t)p_obj, v33, v34);
        }
      }
      LODWORD(v30) = v31->max_length;
      if ( (__int64)++v32 >= (int)v30 )
        goto LABEL_35;
    }
    goto LABEL_38;
  }
LABEL_35:
  Entity = (System_Int32_array *)v40->fields.piecePersonalityDic;
  if ( !Entity )
LABEL_37:
    sub_1C3E7C0(Entity, p_obj);
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)Entity,
    *(_DWORD *)(v39 + 16),
    (Il2CppObject *)v15,
    (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
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
  const MethodInfo *v9; // x3
  __int64 v10; // x24
  int v11; // w8
  unsigned int v12; // w25
  __int64 v13; // x23
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  WarBoardAIRoute_o *v18; // x10
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  System_Object_array *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Object_array *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct WarBoardSquareData_array *v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct WarBoardItemData_array *v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct WarBoardTreasureData_array *v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct WarBoardWallData_array *v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_List_object__o *v45; // x25
  int32_t forceId; // w19
  int32_t groupId; // w20
  WarBoardAIRoute_AIRouteMasterData_o *v48; // x21
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_Dictionary_int__uint__o *v52; // x19
  struct System_Collections_Generic_Dictionary_int__uint__o **p_placePieceData; // x24
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x3
  struct WarBoardPieceData_array *allAllyPiece; // x19
  int max_length; // w8
  unsigned int v59; // w20
  WarBoardPieceData_o *v60; // x21
  const MethodInfo *v61; // x3
  int32_t forceId_k__BackingField; // w8
  int32_t v63; // w9
  int32_t v64; // w1
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v68; // x20
  __int64 v69; // x9
  int *p_offset; // x10
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x22
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v82; // x0
  const MethodInfo *v83; // x1
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x20
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  __int64 v86; // x1
  int v87; // w8
  unsigned int v88; // w9
  WarBoardActionTrendConditionEntity_o *v89; // x25
  struct System_Int32_array *conditionTypes; // x23
  il2cpp_array_size_t v91; // x8
  unsigned __int64 v92; // x28
  int32_t v93; // w26
  __int64 v94; // x29
  __int64 v95; // x0
  __int64 v96; // x1
  __int64 ConditionType; // x0
  __int64 v98; // x1
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexKeyItemData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_object__bool__o *v101; // x21
  __int64 v102; // x1
  Il2CppObject *v103; // x2
  System_Collections_Generic_Dictionary_int__object__o *v104; // x0
  int32_t v105; // w19
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x0
  const MethodInfo *v108; // x2
  TargetDetector_o *DetectorByTrendKey; // x0
  __int64 v110; // x1
  System_Func_T__TResult__o *v111; // x19
  WarBoardAiTargetCacher_o *v112; // x19
  int64_t v113; // x0
  const MethodInfo *v114; // x4
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicIndividualityPutSqareIndex; // x21
  int64_t v116; // x19
  int64_t v117; // x24
  __int64 v118; // x22
  __int64 v119; // x0
  __int64 v120; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x21
  WarBoardAIRoute_o *v122; // x0
  const MethodInfo *v123; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicSquarePutSqareIndex; // x19
  int64_t v125; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_object__bool__o *v127; // x21
  WarBoardActionTrendConditionEntity_array *v128; // x29
  int64_t v129; // x19
  __int64 v130; // x21
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v133; // x19
  int64_t v134; // x0
  __int64 v135; // x8
  __int64 v136; // x9
  int *v137; // x10
  __int64 v138; // x0
  WarBoardAiTargetCacher_o *v139; // x20
  WarBoardAIRoute___c_c *v140; // x8
  System_Func_object__bool__o *_9__45_0; // x19
  Il2CppObject *v142; // x21
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v146; // x0
  const MethodInfo *v147; // x2
  WarBoardAIRoute_AdvantagePieceData_o *v148; // x20
  const MethodInfo *v149; // x1
  struct WarBoardPieceData_array *v150; // x21
  int v151; // w8
  int32_t v152; // w24
  unsigned int v153; // w22
  Il2CppClass **v154; // x8
  Il2CppClass *v155; // x25
  int32_t ClassId; // w19
  float Magnification; // s10
  float v158; // s11
  float v159; // s8
  float v160; // s9
  const MethodInfo *v161; // x1
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+10h] [xbp-110h]
  struct WarBoardAIRoute_AIRouteMasterData_o **p_aiRouteMasterData; // [xsp+18h] [xbp-108h]
  struct WarBoardPieceData_array *v164; // [xsp+20h] [xbp-100h]
  unsigned int v165; // [xsp+34h] [xbp-ECh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-E8h]
  unsigned int v167; // [xsp+44h] [xbp-DCh]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+48h] [xbp-D8h]
  __int64 v170; // [xsp+68h] [xbp-B8h]
  System_Collections_Generic_List_IWarBoardObjectData__o *objectList; // [xsp+70h] [xbp-B0h]
  WarBoardAIRoute_DesignationItemData_o *v172; // [xsp+78h] [xbp-A8h]
  WarBoardAIRoute_PutSquareTarget_o *v173; // [xsp+80h] [xbp-A0h]
  bool notSquareTarget; // [xsp+88h] [xbp-98h] BYREF
  int32_t condType; // [xsp+8Ch] [xbp-94h] BYREF
  Il2CppObject *value; // [xsp+98h] [xbp-88h] BYREF

  if ( (byte_4C546F0 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAIRoute_AIRouteMasterData_TypeInfo);
    sub_1C3E564(&WarBoardAIRoute_AdvantagePieceData_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&WarBoardAIRoute_DesignationItemData_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__uint__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__uint__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
    sub_1C3E564(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardItemData__bool__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
    sub_1C3E564(&WarBoardAIRoute_PutSquareTarget_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&SvtClassAttri_TypeInfo);
    sub_1C3E564(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_1C3E564(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__);
    sub_1C3E564(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
    sub_1C3E564(&WarBoardAIRoute___c_TypeInfo);
    sub_1C3E564(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__);
    byte_4C546F0 = 1;
  }
  value = 0;
  condType = 0;
  notSquareTarget = 0;
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_225;
  v4 = *(_QWORD **)&Instance[5].fields._freeCount;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v4 )
    goto LABEL_225;
  v10 = v4[6];
  if ( !v10 )
    goto LABEL_225;
  v11 = *(_DWORD *)(v10 + 24);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v11 )
LABEL_226:
        sub_1C3E7C8(Instance, v3);
      if ( !v7 )
        break;
      v13 = *(_QWORD *)(v10 + 8LL * (int)v12 + 32);
      items = v7->fields._items;
      v15 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v13,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v13;
        sub_1C3E508((CGThumbnailListItem_o *)(v17 + 4), v13, v8, v9);
      }
      if ( !v13 )
        break;
      if ( !*(_BYTE *)(v13 + 60) )
      {
        v18 = this;
        if ( *(_DWORD *)(v13 + 20) == this->fields.forceId && *(_DWORD *)(v13 + 24) == this->fields.groupId )
        {
          if ( !v5 )
            break;
          v19 = v5->fields._items;
          v20 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v5->fields._version;
          if ( !v19 )
            break;
          v21 = v5->fields._size;
          if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v13,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &v19->obj.klass + v21;
            v5->fields._size = v21 + 1;
            v22[4] = (Il2CppClass *)v13;
            sub_1C3E508((CGThumbnailListItem_o *)(v22 + 4), v13, v8, v9);
          }
          v18 = this;
        }
        if ( *(_DWORD *)(v13 + 20) != v18->fields.forceId )
        {
          if ( !v6 )
            break;
          v23 = v6->fields._items;
          v24 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v6->fields._version;
          if ( !v23 )
            break;
          v25 = v6->fields._size;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v13,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &v23->obj.klass + v25;
            v6->fields._size = v25 + 1;
            v26[4] = (Il2CppClass *)v13;
            sub_1C3E508((CGThumbnailListItem_o *)(v26 + 4), v13, v8, v9);
          }
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                (WarBoardPieceData_o *)v13,
                                                                                0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            this->fields.enemyMasterSquareIndex = *(_DWORD *)(v13 + 64);
        }
      }
      v11 = *(_DWORD *)(v10 + 24);
      if ( (int)++v12 >= v11 )
        goto LABEL_33;
    }
LABEL_225:
    sub_1C3E7C0(Instance, v3);
  }
LABEL_33:
  if ( !v5 )
    goto LABEL_225;
  v27 = System_Collections_Generic_List_object___ToArray(
          v5,
          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allAllyPiece = (struct WarBoardPieceData_array *)v27;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.allAllyPiece, (int32_t)v27, v28, v29);
  if ( !v6 )
    goto LABEL_225;
  v30 = System_Collections_Generic_List_object___ToArray(
          v6,
          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v30;
  p_allEnemyPiece = &this->fields.allEnemyPiece;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.allEnemyPiece, (int32_t)v30, v31, v32);
  v33 = (struct WarBoardSquareData_array *)v4[7];
  this->fields.allSquare = v33;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.allSquare, (int32_t)v33, v34, v35);
  v36 = (struct WarBoardItemData_array *)v4[9];
  this->fields.allItemData = v36;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.allItemData, (int32_t)v36, v37, v38);
  v39 = (struct WarBoardTreasureData_array *)v4[10];
  this->fields.allTreasureData = v39;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.allTreasureData, (int32_t)v39, v40, v41);
  v42 = (struct WarBoardWallData_array *)v4[11];
  this->fields.allWallData = v42;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.allWallData, (int32_t)v42, v43, v44);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictionaryCreateRouteDataEvalValue;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_object__float___Clear(
    Instance,
    (const MethodInfo_347EB2C *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_34AE538 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_34AE538 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
  if ( !Instance )
    goto LABEL_225;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_34AE538 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_225;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v45 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v45 )
    goto LABEL_225;
  System_Collections_Generic_List_object___AddRange(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allItemData,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allTreasureData,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWallData,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  objectList = (System_Collections_Generic_List_IWarBoardObjectData__o *)v45;
  System_Collections_Generic_List_object___AddRange(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)v7,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v48 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_1C3E7B0(WarBoardAIRoute_AIRouteMasterData_TypeInfo);
  WarBoardAIRoute_AIRouteMasterData___ctor(v48, forceId, groupId, v49);
  this->fields.aiRouteMasterData = v48;
  p_aiRouteMasterData = &this->fields.aiRouteMasterData;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.aiRouteMasterData, (int32_t)v48, v50, v51);
  v52 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v52,
    (const MethodInfo_34301CC *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  this->fields.placePieceData = v52;
  p_placePieceData = &this->fields.placePieceData;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.placePieceData, (int32_t)v52, v54, v55);
  allAllyPiece = this->fields.allAllyPiece;
  if ( !allAllyPiece )
    goto LABEL_225;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v59 = 0;
    v164 = this->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v59 >= max_length )
        goto LABEL_226;
      v60 = allAllyPiece->m_Items[v59];
      if ( !v60 )
        goto LABEL_225;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_225;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
                                                                            v60->fields._nowSquareIndex_k__BackingField,
                                                                            (const MethodInfo_3430D7C *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_201;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      pieceData = v60;
      if ( !*p_placePieceData )
        goto LABEL_225;
      System_Collections_Generic_Dictionary_int__uint___Add(
        (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
        v60->fields._nowSquareIndex_k__BackingField,
        v60->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_3430B90 *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
      forceId_k__BackingField = v60->fields._forceId_k__BackingField;
      v63 = this->fields.forceId;
      if ( forceId_k__BackingField != v63 )
        goto LABEL_57;
      if ( v60->fields._groupId_k__BackingField == this->fields.groupId )
        break;
LABEL_58:
      if ( v60->fields._groupId_k__BackingField == this->fields.groupId )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
        if ( !*p_aiRouteMasterData )
          goto LABEL_225;
        v64 = 2;
        goto LABEL_61;
      }
LABEL_62:
      v172 = (WarBoardAIRoute_DesignationItemData_o *)sub_1C3E7B0(WarBoardAIRoute_DesignationItemData_TypeInfo);
      WarBoardAIRoute_DesignationItemData___ctor(v172, v65);
      v173 = (WarBoardAIRoute_PutSquareTarget_o *)sub_1C3E7B0(WarBoardAIRoute_PutSquareTarget_TypeInfo);
      WarBoardAIRoute_PutSquareTarget___ctor(v173, v66);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.piecePersonalityDic;
      if ( !Instance )
        goto LABEL_225;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                                                            v60->fields._index_k__BackingField,
                                                                            &value,
                                                                            (const MethodInfo_340DBC8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)value;
        v165 = v59;
        if ( !value )
          goto LABEL_225;
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
                                                                              (WarBoardAIRoute_PiecePersonality_o *)value,
                                                                              v3);
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
          v71 = sub_1C8ED7C(
                  Instance,
                  System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                  0);
        }
        v73 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v71)(
                v68,
                *(_QWORD *)(v71 + 8));
        v170 = v73;
        if ( !v73 )
          sub_1C3E7C0(0, v72);
        while ( 1 )
        {
LABEL_73:
          v74 = *(_QWORD *)v73;
          v75 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
          {
            v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v76 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v75;
              v76 += 4;
              if ( !v75 )
                goto LABEL_77;
            }
            v77 = v74 + 16LL * *v76 + 312;
          }
          else
          {
LABEL_77:
            v77 = sub_1C8ED7C(v73, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v73, *(_QWORD *)(v77 + 8)) & 1) == 0 )
            break;
          v78 = *(_QWORD *)v73;
          v79 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
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
            v81 = sub_1C8ED7C(v73, System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo, 0);
          }
          v82 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v81)(
                                                       v73,
                                                       *(_QWORD *)(v81 + 8));
          if ( !v82 )
            sub_1C3E7C0(0, v83);
          Entity_k__BackingField = v82->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v82, v83);
          if ( !ConditionEntityArray )
            sub_1C3E7C0(0, v86);
          v87 = ConditionEntityArray->max_length;
          if ( v87 >= 1 )
          {
            v88 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v88 >= v87 )
                sub_1C3E7C8(ConditionEntityArray, v86);
              v89 = ConditionEntityArray->m_Items[v88];
              if ( !v89 )
                sub_1C3E7C0(ConditionEntityArray, v86);
              conditionTypes = v89->fields.conditionTypes;
              if ( !conditionTypes )
                sub_1C3E7C0(ConditionEntityArray, v86);
              v91 = conditionTypes->max_length;
              v167 = v88;
              if ( (int)v91 >= 1 )
                break;
LABEL_137:
              ConditionEntityArray = condEntityArray;
              v87 = condEntityArray->max_length;
              v88 = v167 + 1;
              if ( (int)(v167 + 1) >= v87 )
                goto LABEL_73;
            }
            v92 = 0;
            while ( 2 )
            {
              if ( v92 >= (unsigned int)v91 )
                sub_1C3E7C8(ConditionEntityArray, v86);
              v93 = conditionTypes->m_Items[v92];
              v94 = sub_1C3E7B0(WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v94, 0);
              if ( !v94 )
                sub_1C3E7C0(v95, v96);
              *(_DWORD *)(v94 + 16) = -1;
              ConditionType = WarBoardActionTrendConditionEntity__GetConditionType(v89, v93, 0);
              if ( (int)ConditionType <= 39 )
              {
                if ( (_DWORD)ConditionType == 23 || (_DWORD)ConditionType == 24 )
                  goto LABEL_104;
LABEL_136:
                v98 = *(unsigned int *)(v94 + 16);
              }
              else
              {
                if ( (_DWORD)ConditionType != 40 && (_DWORD)ConditionType != 41 && (_DWORD)ConditionType != 42 )
                  goto LABEL_136;
LABEL_104:
                v98 = (unsigned int)v89->fields.value;
                *(_DWORD *)(v94 + 16) = v98;
              }
              if ( (_DWORD)v98 != -1 )
              {
                if ( !v172 )
                  sub_1C3E7C0(ConditionType, v98);
                dicSquareIndexKeyItemData = (System_Collections_Generic_Dictionary_int__object__o *)v172->fields.dicSquareIndexKeyItemData;
                if ( !dicSquareIndexKeyItemData )
                  sub_1C3E7C0(0, v98);
                if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                        dicSquareIndexKeyItemData,
                        v98,
                        (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__) )
                {
                  allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allItemData;
                  v101 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardItemData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v101,
                    (Il2CppObject *)v94,
                    Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                    0);
                  v103 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
                           allItemData,
                           (System_Func_TSource__bool__o *)v101,
                           (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                  if ( v103 )
                  {
                    v104 = (System_Collections_Generic_Dictionary_int__object__o *)v172->fields.dicSquareIndexKeyItemData;
                    if ( !v104 )
                      sub_1C3E7C0(0, v102);
                    System_Collections_Generic_Dictionary_int__object___Add(
                      v104,
                      *(_DWORD *)(v94 + 16),
                      v103,
                      (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                  }
                }
              }
              *(_DWORD *)(v94 + 16) = -1;
              ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)WarBoardActionTrendConditionEntity__GetConditionType(
                                                                                   v89,
                                                                                   v93,
                                                                                   0);
              if ( (_DWORD)ConditionEntityArray == 74 || (_DWORD)ConditionEntityArray == 75 )
              {
                v105 = v89->fields.value;
                *(_DWORD *)(v94 + 16) = v105;
              }
              else
              {
                if ( (unsigned int)((_DWORD)ConditionEntityArray - 127) <= 1 )
                {
                  if ( !Entity_k__BackingField )
                    sub_1C3E7C0(ConditionEntityArray, v86);
                  aiTargetCacher = this->fields.aiTargetCacher;
                  TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  if ( !aiTargetCacher )
                    sub_1C3E7C0(TrendKey, TrendKey);
                  DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(aiTargetCacher, TrendKey, v108);
                  if ( !DetectorByTrendKey )
                  {
                    v111 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
                    System_Func_Int32Enum__bool____ctor(
                      v111,
                      0,
                      Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                      0);
                    WarBoardActionTrendConditionMaster__HasMatchCondition(
                      condEntityArray,
                      (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v111,
                      &condType,
                      0);
                    v112 = this->fields.aiTargetCacher;
                    v113 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                    if ( !v112 )
                      sub_1C3E7C0(v113, v113);
                    WarBoardAiTargetCacher__Register(v112, v113, v89, condType, v114);
                  }
                  if ( !v173 )
                    sub_1C3E7C0(DetectorByTrendKey, v110);
                  dicIndividualityPutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v173->fields.dicIndividualityPutSqareIndex;
                  v116 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  v117 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  v118 = sub_1C3E7B0(WarBoardAIRoute_TargetData_TypeInfo);
                  *(_DWORD *)(v118 + 64) = 2;
                  System_Object___ctor((Il2CppObject *)v118, 0);
                  *(_QWORD *)(v118 + 104) = v117;
                  *(_DWORD *)(v118 + 112) = v93;
                  if ( !dicIndividualityPutSqareIndex )
                    sub_1C3E7C0(v119, v120);
                  System_Collections_Generic_Dictionary_long__object___set_Item(
                    dicIndividualityPutSqareIndex,
                    v116,
                    (Il2CppObject *)v118,
                    (const MethodInfo_3451588 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                }
                v105 = *(_DWORD *)(v94 + 16);
                v73 = v170;
              }
              if ( v105 != -1 )
              {
                if ( !v173 )
                  sub_1C3E7C0(ConditionEntityArray, v86);
                if ( !Entity_k__BackingField )
                  sub_1C3E7C0(ConditionEntityArray, v86);
                dicObjectPutSquareIndex = v173->fields.dicObjectPutSquareIndex;
                v122 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                WarBoardAIRoute__RegisterTargetObjectToDic(
                  v122,
                  dicObjectPutSquareIndex,
                  objectList,
                  v105,
                  (int64_t)v122,
                  v93,
                  &notSquareTarget,
                  v123);
                if ( !notSquareTarget )
                {
                  dicSquarePutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v173->fields.dicSquarePutSqareIndex;
                  v125 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                  if ( !dicSquarePutSqareIndex )
                    sub_1C3E7C0(v125, v125);
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__object___ContainsKey(
                                                                                       dicSquarePutSqareIndex,
                                                                                       v125,
                                                                                       (const MethodInfo_3451790 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allSquare;
                    v127 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardSquareData__bool__TypeInfo);
                    System_Func_object__bool____ctor(
                      v127,
                      (Il2CppObject *)v94,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                      0);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                                                                         allSquare,
                                                                                         (System_Func_TSource__bool__o *)v127,
                                                                                         (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                    v128 = ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v129 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                      v130 = sub_1C3E7B0(WarBoardAIRoute_TargetData_TypeInfo);
                      *(_DWORD *)(v130 + 64) = 2;
                      System_Object___ctor((Il2CppObject *)v130, 0);
                      *(_QWORD *)(v130 + 48) = v128;
                      *(_QWORD *)(v130 + 104) = v129;
                      *(_DWORD *)(v130 + 112) = v93;
                      sub_1C3E508((CGThumbnailListItem_o *)(v130 + 48), (int32_t)v128, v131, v132);
                      v133 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v173->fields.dicSquarePutSqareIndex;
                      v134 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0);
                      if ( !v133 )
                        sub_1C3E7C0(v134, v134);
                      System_Collections_Generic_Dictionary_long__object___Add(
                        v133,
                        v134,
                        (Il2CppObject *)v130,
                        (const MethodInfo_345159C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                    }
                  }
                }
              }
              LODWORD(v91) = conditionTypes->max_length;
              if ( (__int64)++v92 >= (int)v91 )
                goto LABEL_137;
              continue;
            }
          }
        }
        if ( v73 )
        {
          v135 = *(_QWORD *)v73;
          v136 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
          {
            v137 = (int *)(*(_QWORD *)(v135 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v137 - 1) != System_IDisposable_TypeInfo )
            {
              --v136;
              v137 += 4;
              if ( !v136 )
                goto LABEL_144;
            }
            v138 = v135 + 16LL * *v137 + 312;
          }
          else
          {
LABEL_144:
            v138 = sub_1C8ED7C(v73, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v138)(v73, *(_QWORD *)(v138 + 8));
        }
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.aiTargetCacher;
        if ( !Instance )
          goto LABEL_225;
        WarBoardAiTargetCacher__ClearTargetObject((WarBoardAiTargetCacher_o *)Instance, v3);
        v139 = this->fields.aiTargetCacher;
        v140 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v140 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__45_0 = (System_Func_object__bool__o *)v140->static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !v140->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v140);
            v140 = WarBoardAIRoute___c_TypeInfo;
          }
          v142 = (Il2CppObject *)v140->static_fields->__9;
          _9__45_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__45_0,
            v142,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            0);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v144, v145);
        }
        v146 = System_Linq_Enumerable__Where_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_object_(
                                                                              v146,
                                                                              (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v139 )
          goto LABEL_225;
        WarBoardAiTargetCacher__AggregateTargetObject(v139, (IWarBoardObjectData_array *)Instance, v147);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
        if ( !Instance )
          goto LABEL_225;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v172,
          (const MethodInfo_34AE3B0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
        allAllyPiece = v164;
        p_placePieceData = &this->fields.placePieceData;
        v59 = v165;
        if ( !Instance )
          goto LABEL_225;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v173,
          (const MethodInfo_34AE3B0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isServant(
                                                                              pieceData,
                                                                              0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v148 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_1C3E7B0(WarBoardAIRoute_AdvantagePieceData_TypeInfo);
          WarBoardAIRoute_AdvantagePieceData___ctor(v148, v149);
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pieceData->fields._battleServant_k__BackingField;
          if ( !Instance )
            goto LABEL_225;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleServantData__getClassId(
                                                                                (BattleServantData_o *)Instance,
                                                                                0,
                                                                                0);
          v150 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_225;
          v151 = v150->max_length;
          if ( v151 >= 1 )
          {
            v152 = (int)Instance;
            v153 = 0;
            while ( 2 )
            {
              if ( v153 >= v151 )
                goto LABEL_226;
              v154 = &v150->obj.klass + (int)v153;
              v155 = v154[4];
              if ( !v155 )
                goto LABEL_225;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                    (WarBoardPieceData_o *)v154[4],
                                                                                    0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_198;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v155->_1.fields;
              if ( !Instance )
                goto LABEL_225;
              ClassId = BattleServantData__getClassId((BattleServantData_o *)Instance, 0, 0);
              if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
              Magnification = SvtClassAttri__getMagnification(v152, ClassId, 0);
              v158 = SvtClassAttri__getMagnification(ClassId, v152, 0);
              v159 = SvtClassAttri__getMagnification(v152, ClassId, 0);
              v160 = SvtClassAttri__getMagnification(ClassId, v152, 0);
              if ( Magnification <= 1.0 )
              {
                if ( v158 >= 1.0 )
                  goto LABEL_177;
                if ( !v148 )
                  goto LABEL_225;
              }
              else
              {
                if ( !v148 )
                  goto LABEL_225;
                Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v148->fields.dicAttackAdvantageServant;
                if ( !Instance )
                  goto LABEL_225;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                  (int32_t)v155->_1.element_class,
                  (Il2CppObject *)v155,
                  (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                v148->fields.flagNow |= 0x4000uLL;
                if ( v158 >= 1.0 )
                {
LABEL_177:
                  if ( v159 >= 1.0 )
                  {
                    if ( v160 > 1.0 )
                    {
                      if ( !v148 )
                        goto LABEL_225;
                      goto LABEL_184;
                    }
                  }
                  else
                  {
                    if ( !v148 )
                      goto LABEL_225;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v148->fields.dicAttackDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_225;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v155->_1.element_class,
                      (Il2CppObject *)v155,
                      (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v148->fields.flagNow |= 0x8000uLL;
                    if ( v160 <= 1.0 )
                      goto LABEL_186;
LABEL_184:
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v148->fields.dicDefenseDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_225;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v155->_1.element_class,
                      (Il2CppObject *)v155,
                      (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v148->fields.flagNow |= 0x20000uLL;
                  }
LABEL_186:
                  if ( Magnification <= 1.0 || v158 >= 1.0 )
                  {
                    if ( v159 < 1.0 && v160 > 1.0 )
                    {
                      if ( !v148 )
                        goto LABEL_225;
LABEL_196:
                      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v148->fields.dicClassDisAdvantageServant;
                      if ( !Instance )
                        goto LABEL_225;
                      System_Collections_Generic_Dictionary_int__object___Add(
                        (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                        (int32_t)v155->_1.element_class,
                        (Il2CppObject *)v155,
                        (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                      v148->fields.flagNow |= 0x2000uLL;
                    }
                  }
                  else
                  {
                    if ( !v148 )
                      goto LABEL_225;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v148->fields.dicClassAdvantageServant;
                    if ( !Instance )
                      goto LABEL_225;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v155->_1.element_class,
                      (Il2CppObject *)v155,
                      (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v148->fields.flagNow |= 0x1000uLL;
                    if ( v159 < 1.0 && v160 > 1.0 )
                      goto LABEL_196;
                  }
LABEL_198:
                  v151 = v150->max_length;
                  if ( (int)++v153 >= v151 )
                    goto LABEL_199;
                  continue;
                }
              }
              break;
            }
            Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v148->fields.dicDefenseAdvantageServant;
            if ( !Instance )
              goto LABEL_225;
            System_Collections_Generic_Dictionary_int__object___Add(
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              (int32_t)v155->_1.element_class,
              (Il2CppObject *)v155,
              (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
            v148->fields.flagNow |= 0x10000uLL;
            goto LABEL_177;
          }
LABEL_199:
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
          if ( !Instance )
            goto LABEL_225;
          System_Collections_Generic_Dictionary_uint__object___Add(
            Instance,
            pieceData->fields._uniqueIndex_k__BackingField,
            (Il2CppObject *)v148,
            (const MethodInfo_34AE3B0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          allAllyPiece = v164;
          p_placePieceData = &this->fields.placePieceData;
          v59 = v165;
        }
      }
LABEL_201:
      max_length = allAllyPiece->max_length;
      if ( (int)++v59 >= max_length )
        goto LABEL_223;
    }
    if ( WarBoardPieceData__get_isMaster(v60, 0) )
    {
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_225;
      v64 = 0;
LABEL_61:
      WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        (WarBoardAIRoute_AIRouteMasterData_o *)Instance,
        v64,
        v60,
        v61);
      goto LABEL_62;
    }
    forceId_k__BackingField = v60->fields._forceId_k__BackingField;
    v63 = this->fields.forceId;
LABEL_57:
    if ( forceId_k__BackingField != v63 )
      goto LABEL_62;
    goto LABEL_58;
  }
LABEL_223:
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
  if ( !*p_aiRouteMasterData )
    goto LABEL_225;
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData((WarBoardAIRoute_AIRouteMasterData_o *)Instance, 1, 0, v56);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(this, v161);
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

  if ( (byte_4C546FA & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    this = (WarBoardAIRoute_o *)sub_1C3E564(&WarBoardAIManager_TypeInfo);
    byte_4C546FA = 1;
  }
  if ( !alreadyGetItemList )
    sub_1C3E7C0(this, *(_QWORD *)&targetSquare);
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__) )
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
    sub_1C3E7C0(this, routeData);
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
  if ( (byte_4C546EC & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C3E564(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__);
    byte_4C546EC = 1;
  }
  allRouteList = v2->fields.allRouteList;
  if ( !allRouteList )
    sub_1C3E7C0(this, method);
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
  if ( (byte_4C546F9 & 1) == 0 )
  {
    sub_1C3E564(&AStarSearch_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    dicPieceList = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    byte_4C546F9 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !v6 )
    sub_1C3E7C0(dicPieceList, *(_QWORD *)&baseRange);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v7 = 3;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v13,
            (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v13.fields._current.fields.key;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(0, actionIndex, key, 0, 0, v8);
    v11 = System_Linq_Enumerable__Count_int_(
            v10,
            (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
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
    (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  return v7;
}


void WarBoardAIRoute__CreateOutOfWarningAreaToDistance(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v2; // x21
  struct System_Collections_Generic_Dictionary_int__int__o **p_dicOutOfWarningAreaRange; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_int__int__o *IsFlag; // x0
  __int64 v7; // x1
  struct WarBoardSquareData_array *allSquare; // x25
  int max_length; // w8
  int v10; // w26
  Il2CppClass **v11; // x8
  Il2CppClass *v12; // x21
  struct WarBoardSquareData_array *v13; // x29
  int v14; // w8
  unsigned int v15; // w20
  int v16; // w22
  Il2CppClass **v17; // x8
  Il2CppClass *v18; // x23
  const MethodInfo *v19; // x5
  int32_t name; // w24
  int32_t v21; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  int32_t v24; // w1
  const MethodInfo_3403984 *v25; // x3
  int32_t v26; // w2
  struct System_Collections_Generic_Dictionary_int__int__o **v27; // [xsp+0h] [xbp-70h]

  if ( (byte_4C54705 & 1) == 0 )
  {
    sub_1C3E564(&AStarSearch_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_int___);
    byte_4C54705 = 1;
  }
  v2 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v2,
    (const MethodInfo_3402FC0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v2;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dicOutOfWarningAreaRange, (int32_t)v2, v4, v5);
  allSquare = this->fields.allSquare;
  if ( !allSquare )
LABEL_33:
    sub_1C3E7C0(IsFlag, v7);
  max_length = allSquare->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    v27 = &this->fields.dicOutOfWarningAreaRange;
    do
    {
      if ( v10 >= (unsigned int)max_length )
        goto LABEL_34;
      v11 = &allSquare->obj.klass + v10;
      v12 = v11[4];
      if ( !v12 )
        goto LABEL_33;
      IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                      (WarBoardSquareData_o *)v11[4],
                                                                      1,
                                                                      0);
      if ( ((unsigned __int8)IsFlag & 1) != 0 )
      {
        v13 = this->fields.allSquare;
        if ( !v13 )
          goto LABEL_33;
        v14 = v13->max_length;
        if ( v14 >= 1 )
        {
          v15 = 0;
          v16 = -1;
          while ( v15 < v14 )
          {
            v17 = &v13->obj.klass + (int)v15;
            v18 = v17[4];
            if ( !v18 )
              goto LABEL_33;
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                            (WarBoardSquareData_o *)v17[4],
                                                                            1,
                                                                            0);
            if ( ((unsigned __int8)IsFlag & 1) != 0 )
              goto LABEL_37;
            name = (int32_t)v12->_1.name;
            v21 = (int32_t)v18->_1.name;
            if ( !AStarSearch_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
            v22 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(0, name, v21, 0, 0, v19);
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__Count_int_(
                                                                            v22,
                                                                            (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
            if ( v16 > (int)IsFlag - 1 || v16 == -1 )
              v16 = (_DWORD)IsFlag - 1;
            if ( v16 >= 2 )
            {
LABEL_37:
              v14 = v13->max_length;
              if ( (int)++v15 < v14 )
                continue;
            }
            goto LABEL_29;
          }
LABEL_34:
          sub_1C3E7C8(IsFlag, v7);
        }
        v16 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        IsFlag = *v27;
        if ( !*v27 )
          goto LABEL_33;
        v24 = (int32_t)v12->_1.name;
        v25 = (const MethodInfo_3403984 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v26 = v16;
      }
      else
      {
        IsFlag = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v24 = (int32_t)v12->_1.name;
        v25 = (const MethodInfo_3403984 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v26 = 0;
      }
      System_Collections_Generic_Dictionary_int__int___Add(IsFlag, v24, v26, v25);
      max_length = allSquare->max_length;
      ++v10;
    }
    while ( v10 < max_length );
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

  if ( (byte_4C546F2 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
    byte_4C546F2 = 1;
  }
  v9 = sub_1C3E7B0(WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 56), (int32_t)piecePlaceData, v12, v13);
  *(_DWORD *)(v9 + 40) = searchCount;
  *(_QWORD *)(v9 + 48) = routeDataList;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 48), (int32_t)routeDataList, v14, v15);
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

  if ( (byte_4C5470A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    this = (WarBoardAIRoute_o *)sub_1C3E564(&WarBoardAIManager_TypeInfo);
    byte_4C5470A = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_1C3E7C0(this, basePiece);
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_3432228 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
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
  if ( (byte_4C54708 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__);
    byte_4C54708 = 1;
  }
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v6->fields.dicUniqueKeyAdvantagePieceData) == 0
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_uint__object___get_Item(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                      basePiece->fields._uniqueIndex_k__BackingField,
                                      (const MethodInfo_34AE310 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0 )
  {
    sub_1C3E7C0(this, basePiece);
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

  if ( (byte_4C54704 & 1) == 0 )
  {
    sub_1C3E564(&AStarSearch_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_int___);
    byte_4C54704 = 1;
  }
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v10 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v10,
    (const MethodInfo_34A482C *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
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
        sub_1C3E7C8(isMaster, v12);
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
                   (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v10 )
        break;
      v20 = isMaster;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v10,
        v17->fields._uniqueIndex_k__BackingField,
        isMaster,
        (const MethodInfo_34A51F0 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
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
    sub_1C3E7C0(isMaster, v12);
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

  if ( (byte_4C546F5 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__);
    sub_1C3E564(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
    byte_4C546F5 = 1;
  }
  v7 = sub_1C3E7B0(WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = masterSquareIndex, (aiRouteMasterData = this->fields.aiRouteMasterData) == 0)
    || !piecePlaceData )
  {
    sub_1C3E7C0(v8, v9);
  }
  masterType = aiRouteMasterData->fields.masterType;
  Keys = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                                piecePlaceData,
                                                                (const MethodInfo_3430854 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  if ( masterType != 1 )
  {
    v13 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      0);
    Keys = System_Linq_Enumerable__Where_int_(
             Keys,
             (System_Func_TSource__bool__o *)v13,
             (const MethodInfo_313FD5C *)Method_System_Linq_Enumerable_Where_int___);
  }
  return System_Linq_Enumerable__ToArray_int_(
           Keys,
           (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  const MethodInfo *v12; // x3
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t defenseArea; // w20
  DefenseAreaData_o *v15; // x19
  System_Collections_Generic_Dictionary_int__object__o *v16; // x20
  WarBoardAIManager_c *v17; // x0
  char v18; // w10
  bool v19; // w8
  bool IsDetour; // w25
  const MethodInfo *v21; // x5
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Int32_array *v23; // x28
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w25
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  BalanceConfig_c *v31; // x0
  const MethodInfo *v32; // x5
  System_Func_int__bool__o *klass; // x28
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x8
  __int64 v37; // x21
  BalanceConfig_c *v38; // x0
  int64_t v39; // x1
  Il2CppObject *object; // [xsp+0h] [xbp-E0h]
  CGThumbnailListItem_o *v42; // [xsp+8h] [xbp-D8h]
  bool v44; // [xsp+1Ch] [xbp-C4h]
  char v45; // [xsp+20h] [xbp-C0h]
  bool v46; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v48; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4C546F6 & 1) == 0 )
  {
    sub_1C3E564(&AStarSearch_TypeInfo);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&DefenseAreaData_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__);
    sub_1C3E564(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
    sub_1C3E564(&WarBoardAIManager_TypeInfo);
    byte_4C546F6 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v8 = sub_1C3E7B0(WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_50;
  *(_QWORD *)(v8 + 16) = piecePlaceData;
  sub_1C3E508((CGThumbnailListItem_o *)(v8 + 16), (int32_t)piecePlaceData, v11, v12);
  npcData = this->fields.npcData;
  if ( !npcData )
    goto LABEL_50;
  defenseArea = npcData->fields.defenseArea;
  v15 = (DefenseAreaData_o *)sub_1C3E7B0(DefenseAreaData_TypeInfo);
  DefenseAreaData___ctor(v15, masterSquareIndex, defenseArea, 0);
  v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v16,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  if ( !byte_4C547BA )
  {
    sub_1C3E564(&WarBoardAIManager_TypeInfo);
    byte_4C547BA = 1;
  }
  v17 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v17 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v17->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_50;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v47,
    dicSquareIndexEnemyPiece,
    (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v18 = 0;
  object = (Il2CppObject *)v8;
  v42 = (CGThumbnailListItem_o *)(v8 + 24);
  v19 = 1;
  IsDetour = 1;
  v48 = v47;
LABEL_13:
  v44 = v19;
LABEL_14:
  v45 = v18;
  v46 = IsDetour;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v48,
            (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    current = v48.fields._current;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v23 = AStarSearch__RouteSearch(0, masterSquareIndex, (int32_t)current.fields.key, 0, 0, v21);
    v24 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v23,
            (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v16 )
      sub_1C3E7C0(v24, v25);
    v26 = v24;
    System_Collections_Generic_Dictionary_int__object___Add(
      v16,
      (int32_t)current.fields.key,
      &v23->obj,
      (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v15 )
      sub_1C3E7C0(v27, v28);
    DefenseAreaData__SetComparisonMasterAndEnemyRange(v15, v26, 0);
    if ( DefenseAreaData__IsInDefenseArea(v15, (int32_t)current.fields.key, 0) )
    {
      v31 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v31 = BalanceConfig_TypeInfo;
      }
      if ( !v31->static_fields->IsEnableOldBlockShortestRoute )
      {
        if ( !v23 )
          sub_1C3E7C0(v31, v29);
        if ( SLODWORD(v23->max_length) >= 2 )
          DefenseAreaData__SetComparisonAllMasterAndEnemyRange(v15, v23->m_Items[1], v26, 0);
      }
      IsDetour = 0;
      v18 = 1;
      if ( v46 )
      {
        IsDetour = WarBoardAIRoute__IsDetour(v23, allyPieces, v30);
        v19 = 0;
        v18 = 1;
        if ( v44 )
        {
          klass = (System_Func_int__bool__o *)v42->klass;
          if ( !v42->klass )
          {
            klass = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              klass,
              object,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              0);
            v42->klass = (CGThumbnailListItem_c *)klass;
            sub_1C3E508(v42, (int32_t)klass, v34, v35);
          }
          if ( !AStarSearch_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          v19 = AStarSearch__RouteSearch(
                  (WarBoardPieceData_o *)current.fields.value,
                  (int32_t)current.fields.key,
                  masterSquareIndex,
                  0,
                  klass,
                  v32) == 0;
          v18 = 1;
        }
        goto LABEL_13;
      }
      goto LABEL_14;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v48,
    (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  v36 = 1025;
  if ( (v45 & 1) == 0 )
    v36 = 1;
  v37 = v46 ? v36 | 0x2000000000LL : v36;
  if ( !v15 )
LABEL_50:
    sub_1C3E7C0(dicSquareIndexEnemyPiece, v10);
  DefenseAreaData__CreateShortestRoutes(v15, (System_Collections_Generic_Dictionary_int__int____o *)v16, 0);
  v38 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v38 = BalanceConfig_TypeInfo;
  }
  if ( !v38->static_fields->IsEnableOldBlockShortestRoute )
    DefenseAreaData__CreateAllShortestRoutes(v15, (System_Collections_Generic_Dictionary_int__int____o *)v16, 0);
  if ( v44 )
    v39 = v37 | 0x10000000000LL;
  else
    v39 = v37;
  DefenseAreaData__SetFlag(v15, v39, 0);
  return v15;
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
  const MethodInfo *v15; // x3
  __int64 v16; // x23
  System_Func_object__bool__o *v17; // x24
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x5
  int32_t v21; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+30h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_4C54703 & 1) == 0 )
  {
    sub_1C3E564(&AStarSearch_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__);
    sub_1C3E564(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__);
    this = (WarBoardAIRoute_o *)sub_1C3E564(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    byte_4C54703 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v8->fields.dicUniqueKeyDesignationItem) == 0
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_34AE310 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int__TypeInfo),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v10,
          (const MethodInfo_3402FC0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (this = (WarBoardAIRoute_o *)Item[1].klass) == 0 )
  {
    sub_1C3E7C0(this, basePiece);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v27,
            (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v11 = sub_1C3E7B0(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0);
    if ( !v11 )
      sub_1C3E7C0(v12, v13);
    v16 = v11 + 24;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v11 + 16) = v27.fields._current;
    sub_1C3E508((CGThumbnailListItem_o *)(v11 + 24), 0, v14, v15);
    v17 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v11,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      0);
    v18 = BasicHelper__Any_object_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v17,
            (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    if ( !v18 )
    {
      if ( !*(_QWORD *)v16 )
        sub_1C3E7C0(v18, v19);
      v21 = *(_DWORD *)(*(_QWORD *)v16 + 16LL);
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0,
                                                                   baseSquareIndex,
                                                                   v21,
                                                                   0,
                                                                   0,
                                                                   v20);
      v23 = System_Linq_Enumerable__Count_int_(
              v22,
              (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v10 )
        sub_1C3E7C0(v23, v24);
      System_Collections_Generic_Dictionary_int__int___Add(
        v10,
        *(_DWORD *)(v11 + 16),
        v23,
        (const MethodInfo_3403984 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v27,
    (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v10;
}


WarBoardEvalValueSquare_EvalValueSquare_o *WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4C546F7 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
    byte_4C546F7 = 1;
  }
  if ( !evalValueSquareList )
    sub_1C3E7C0(this, evalValueSquareList);
  return (WarBoardEvalValueSquare_EvalValueSquare_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_int__object__o *)evalValueSquareList,
                                                        index,
                                                        (const MethodInfo_340C39C *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
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

  if ( (byte_4C5470B & 1) == 0 )
  {
    sub_1C3E564(&SvtClassAttri_TypeInfo);
    byte_4C5470B = 1;
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
  uint32_t v29; // w24
  const MethodInfo *v30; // x2
  WarBoardAIRoute_o *v31; // x24
  int32_t *m_Items; // [xsp+8h] [xbp-78h]
  int32_t defense; // [xsp+18h] [xbp-68h]
  uint32_t value; // [xsp+1Ch] [xbp-64h] BYREF

  v10 = this;
  if ( (byte_4C54707 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&SvtClassAttri_TypeInfo);
    this = (WarBoardAIRoute_o *)sub_1C3E564(&WarBoardAIManager_TypeInfo);
    byte_4C54707 = 1;
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
        sub_1C3E7C8(this, baseSquare);
      v15 = m_Items[v13];
      this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_37929548((WarBoardData_o *)this, v15, v16);
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
                                    (const MethodInfo_3432228 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v29 = value;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        this = (WarBoardAIRoute_o *)WarBoardAIManager__GetPieceUnique(v29, (const MethodInfo *)baseSquare);
        if ( basePiece->fields._uniqueIndex_k__BackingField != value )
        {
          v31 = this;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsAllyPiece(basePiece, (WarBoardPieceData_o *)v31, v30);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v31 )
              break;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v31, 0);
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
    sub_1C3E7C0(this, baseSquare);
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

  if ( (byte_4C54706 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4C54706 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_3403B70 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          actionSquareIndex,
          (const MethodInfo_3403B70 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                    dicOutOfWarningAreaRange,
                                                                                    baseSquareIndex,
                                                                                    (const MethodInfo_34038E8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( (int)dicOutOfWarningAreaRange > System_Collections_Generic_Dictionary_int__int___get_Item(
                                         this->fields.dicOutOfWarningAreaRange,
                                         actionSquareIndex,
                                         (const MethodInfo_34038E8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange
    || (dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                          dicOutOfWarningAreaRange,
                                                                                          baseSquareIndex,
                                                                                          (const MethodInfo_34038E8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v10 = this->fields.dicOutOfWarningAreaRange) == 0) )
  {
LABEL_18:
    sub_1C3E7C0(dicOutOfWarningAreaRange, v7);
  }
  if ( (_DWORD)dicOutOfWarningAreaRange == System_Collections_Generic_Dictionary_int__int___get_Item(
                                             v10,
                                             actionSquareIndex,
                                             (const MethodInfo_34038E8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
  if ( (byte_4C546F4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    this = (WarBoardAIRoute_o *)sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    byte_4C546F4 = 1;
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
        (const MethodInfo_3430F68 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
      *(_OWORD *)&v13.fields._dictionary = v12[0];
      v13.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v12[1];
      while ( 1 )
      {
        v8 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
               &v13,
               (const MethodInfo_3566084 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
        if ( !v8 )
          break;
        v10 = v4->fields.aiRouteMasterData;
        if ( !v10 )
          sub_1C3E7C0(v8, v9);
        key = (int32_t)v13.fields._current.fields.key;
        if ( v10->fields.masterUniqueIndex == HIDWORD(v13.fields._current.fields.key) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
            &v13,
            (const MethodInfo_3566184 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
          return key;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
        &v13,
        (const MethodInfo_3566184 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
      return 0;
    }
LABEL_18:
    sub_1C3E7C0(this, piecePlaceData);
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
  if ( (byte_4C5470F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____);
    sub_1C3E564(&System_Func_KeyValuePair_int__uint___bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    this = (WarBoardAIRoute_o *)sub_1C3E564(&Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__);
    byte_4C5470F = 1;
  }
  klass = v4[13].klass;
  if ( !klass )
    sub_1C3E7C0(this, piecePlaceData);
  if ( LODWORD(klass->_1.name) == 1 )
    return HIDWORD(klass->_1.name);
  v7 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_1C3E7B0(System_Func_KeyValuePair_int__uint___bool__TypeInfo);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v7,
    v4,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v7,
           (const MethodInfo_3122BD8 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
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

  if ( (byte_4C54711 & 1) == 0 )
  {
    sub_1C3E564(&AStarSearch_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    this = (WarBoardAIRoute_o *)sub_1C3E564(&WarBoardAIManager_TypeInfo);
    byte_4C54711 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !dicKeyPutIndexValueTargetData
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_long__object___get_Values(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicKeyPutIndexValueTargetData,
                                      (const MethodInfo_34513AC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0 )
  {
    sub_1C3E7C0(this, dicKeyPutIndexValueTargetData);
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__object___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3AF1A70 *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___MoveNext(
           &v28,
           (const MethodInfo_356C6E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v8 )
      break;
    currentValue = v28.fields._currentValue;
    if ( !v28.fields._currentValue )
      sub_1C3E7C0(v8, v9);
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
              (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
      v17 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
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
                (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
        v24 = System_Linq_Enumerable__Count_int_(
                v21,
                (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
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
    (const MethodInfo_356C6E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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

  if ( (byte_4C546F8 & 1) == 0 )
  {
    sub_1C3E564(&AStarSearch_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    this = (WarBoardAIRoute_o *)sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    byte_4C546F8 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !dicPieceList )
    sub_1C3E7C0(this, dicPieceList);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_int__object__o *)dicPieceList,
    (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v6 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v13,
            (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
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
    v10 = System_Linq_Enumerable__Count_int_(v9, (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
    if ( v6 > v10 || v6 == -1 )
      v6 = v10;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v13,
    (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
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

  if ( (byte_4C546F3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    byte_4C546F3 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  value = 0;
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  v12 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v12,
    (const MethodInfo_34A482C *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_1C3E7C0(v13, v14);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)routeDataList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v15 )
      break;
    if ( !v23.fields._current )
      sub_1C3E7C0(v15, v16);
    if ( LODWORD(v23.fields._current[1].monitor) != HIDWORD(v23.fields._current[1].monitor) )
    {
      value = 0;
      klass = v23.fields._current[3].klass;
      if ( (BYTE3(v23.fields._current[1].klass) & 4) == 0 )
      {
        if ( !klass )
          sub_1C3E7C0(v15, v16);
        if ( klass[4] == 1 )
          v18 = masterActionCount;
        else
          v18 = actionCount;
LABEL_21:
        ++*v18;
        goto LABEL_22;
      }
      if ( !klass )
        sub_1C3E7C0(v15, v16);
      v19 = klass[4];
      klass = v23.fields._current[3].monitor;
      if ( v19 != 1 )
      {
        if ( !klass )
          sub_1C3E7C0(v15, v16);
        if ( klass[4] == 1 )
          v18 = masterReplaceCount;
        else
          v18 = replaceCount;
        goto LABEL_21;
      }
      ++*masterReplaceCount;
      if ( !klass )
        sub_1C3E7C0(v15, v16);
LABEL_22:
      if ( !v12 )
        sub_1C3E7C0(v15, v16);
      v20 = klass[11];
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v12,
        v20,
        &value,
        (const MethodInfo_34A6888 *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v12,
        v20,
        value + 1,
        (const MethodInfo_34A51DC *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
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
  const MethodInfo *v10; // x3
  System_Func_object__int__o *v11; // x20

  if ( (byte_4C54712 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78232784);
    sub_1C3E564(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__);
    sub_1C3E564(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
    byte_4C54712 = 1;
  }
  v6 = sub_1C3E7B0(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_1C3E7C0(v7, v8);
  *(_QWORD *)(v6 + 16) = targetPiece;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 16), (int32_t)targetPiece, v9, v10);
  v11 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
  System_Func_object__int____ctor(
    v11,
    (Il2CppObject *)v6,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    0);
  return System_Linq_Enumerable__Sum_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v11,
           (const MethodInfo_31378A0 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78232784);
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
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+30h] [xbp-90h] BYREF

  v12 = this;
  if ( (byte_4C54700 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    this = (WarBoardAIRoute_o *)sub_1C3E564(&WarBoardAIRoute_TargetData_TypeInfo);
    byte_4C54700 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !dicPutSquareIndex )
    sub_1C3E7C0(this, dicPutSquareIndex);
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v20,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicPutSquareIndex,
    (const MethodInfo_34519D0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v13 = System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v21,
            (const MethodInfo_356C088 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v13 )
      break;
    current = v21.fields._current;
    if ( excludeCond )
    {
      if ( !v21.fields._current.fields.value )
        sub_1C3E7C0(v13, v14);
      if ( (((__int64 (__fastcall *)(intptr_t, void *, intptr_t))excludeCond->fields.invoke_impl)(
              excludeCond->fields.method_code,
              v21.fields._current.fields.value[3].monitor,
              excludeCond->fields.method)
          & 1) != 0 )
        continue;
    }
    allEnemyPiece = v12->fields.allEnemyPiece;
    v17 = (WarBoardAIRoute_TargetData_o *)sub_1C3E7B0(WarBoardAIRoute_TargetData_TypeInfo);
    WarBoardAIRoute_TargetData___ctor_37924496(
      v17,
      (WarBoardAIRoute_TargetData_o *)current.fields.value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      v18);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_1C3E7C0(0, v19);
    System_Collections_Generic_Dictionary_long__object___Add(
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
      (int64_t)current.fields.key,
      (Il2CppObject *)v17,
      (const MethodInfo_345159C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v21,
    (const MethodInfo_356C1A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_Dictionary_int__object__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  WarBoardAiTargetCacher_o *aiTargetCacher; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  TargetDetector_o *DetectorByTrendKey; // x0
  __int64 v26; // x1
  int32_t Id_k__BackingField; // w27
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  Il2CppObject *Item; // x29
  WarBoardAiTargetCacher_o *v31; // x0
  IWarBoardObjectData_array *TargetObjectsByTrendId; // x0
  IWarBoardObjectData_array *v33; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x29
  System_Func_object__bool__o *klass; // x23
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x29
  System_Func_object__int__o *v39; // x23
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x0
  WarBoardAIRoute___c_c *v43; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v44; // x29
  System_Func_object__int__o *_9__64_2; // x23
  Il2CppObject *v46; // x24
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v50; // x0
  WarBoardAIRoute___c_c *v51; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v52; // x29
  System_Func_object__int__o *_9__64_3; // x23
  Il2CppObject *v54; // x24
  struct WarBoardAIRoute___c_StaticFields *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  __int64 v59; // x1
  WarBoardPieceData_o *v60; // x27
  int32_t v61; // w28
  WarBoardPieceData_array *allEnemyPiece; // x24
  WarBoardAIRoute_TargetData_o *v63; // x23
  const MethodInfo *v64; // x6
  __int64 v65; // x1
  CGThumbnailListItem_o *v66; // [xsp+0h] [xbp-D0h]
  CGThumbnailListItem_o *v67; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v69; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v70; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4C54701 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_1C3E564(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_1C3E564(&System_Func_IWarBoardObjectData__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    sub_1C3E564(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_1C3E564(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__);
    sub_1C3E564(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__);
    sub_1C3E564(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
    sub_1C3E564(&WarBoardAIRoute___c_TypeInfo);
    byte_4C54701 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v12 = sub_1C3E7B0(WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = excludeCond,
        sub_1C3E508((CGThumbnailListItem_o *)(v12 + 16), (int32_t)excludeCond, v15, v16),
        *(_QWORD *)(v12 + 24) = basePiece,
        sub_1C3E508((CGThumbnailListItem_o *)(v12 + 24), (int32_t)basePiece, v17, v18),
        *(_DWORD *)(v12 + 32) = baseSquareIndex,
        v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo),
        System_Collections_Generic_Dictionary_int__object____ctor(
          v19,
          (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__),
        !dicIndividualityPutSqareIndex) )
  {
    sub_1C3E7C0(v13, v14);
  }
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v69,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicIndividualityPutSqareIndex,
    (const MethodInfo_34519D0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v70 = v69;
  v20 = 0;
  v66 = (CGThumbnailListItem_o *)(v12 + 48);
  v67 = (CGThumbnailListItem_o *)(v12 + 40);
  while ( System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v70,
            (const MethodInfo_356C088 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_1C3E7C0(0, v21);
    current = v70.fields._current;
    DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(
                           aiTargetCacher,
                           (int64_t)v70.fields._current.fields.key,
                           v22);
    if ( DetectorByTrendKey )
    {
      Id_k__BackingField = DetectorByTrendKey->fields._Id_k__BackingField;
      if ( !v19 )
        goto LABEL_44;
    }
    else
    {
      Id_k__BackingField = 0;
      if ( !v19 )
LABEL_44:
        sub_1C3E7C0(DetectorByTrendKey, v26);
    }
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           v19,
           Id_k__BackingField,
           (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               v19,
               Id_k__BackingField,
               (const MethodInfo_340C39C *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    }
    else
    {
      v31 = this->fields.aiTargetCacher;
      if ( !v31 )
        sub_1C3E7C0(0, v28);
      TargetObjectsByTrendId = WarBoardAiTargetCacher__GetTargetObjectsByTrendId(v31, (int64_t)current.fields.key, v29);
      v33 = TargetObjectsByTrendId;
      if ( TargetObjectsByTrendId )
        v34 = (System_Collections_Generic_IEnumerable_TSource__o *)TargetObjectsByTrendId;
      else
        v34 = v20;
      if ( TargetObjectsByTrendId )
      {
        klass = (System_Func_object__bool__o *)v67->klass;
        if ( !v67->klass )
        {
          klass = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            klass,
            (Il2CppObject *)v12,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
            0);
          v67->klass = (CGThumbnailListItem_c *)klass;
          sub_1C3E508(v67, (int32_t)klass, v36, v37);
        }
        v38 = System_Linq_Enumerable__Where_object_(
                v34,
                (System_Func_TSource__bool__o *)klass,
                (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        v39 = (System_Func_object__int__o *)v66->klass;
        if ( !v66->klass )
        {
          v39 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            v39,
            (Il2CppObject *)v12,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
            0);
          v66->klass = (CGThumbnailListItem_c *)v39;
          sub_1C3E508(v66, (int32_t)v39, v40, v41);
        }
        v42 = System_Linq_Enumerable__OrderBy_object__int_(
                v38,
                (System_Func_TSource__TKey__o *)v39,
                (const MethodInfo_31292A0 *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
        v43 = WarBoardAIRoute___c_TypeInfo;
        v44 = v42;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v43 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_2 = (System_Func_object__int__o *)v43->static_fields->__9__64_2;
        if ( !_9__64_2 )
        {
          if ( !v43->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v43);
            v43 = WarBoardAIRoute___c_TypeInfo;
          }
          v46 = (Il2CppObject *)v43->static_fields->__9;
          _9__64_2 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__64_2,
            v46,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
            0);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
          sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__64_2, (int32_t)_9__64_2, v48, v49);
        }
        v50 = System_Linq_Enumerable__ThenBy_object__int_(
                v44,
                (System_Func_TSource__TKey__o *)_9__64_2,
                (const MethodInfo_313834C *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        v51 = WarBoardAIRoute___c_TypeInfo;
        v52 = v50;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v51 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_3 = (System_Func_object__int__o *)v51->static_fields->__9__64_3;
        if ( !_9__64_3 )
        {
          if ( !v51->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v51);
            v51 = WarBoardAIRoute___c_TypeInfo;
          }
          v54 = (Il2CppObject *)v51->static_fields->__9;
          _9__64_3 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__64_3,
            v54,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
            0);
          v55 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v55->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
          sub_1C3E508((CGThumbnailListItem_o *)&v55->__9__64_3, (int32_t)_9__64_3, v56, v57);
        }
        v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                     v52,
                                                                     (System_Func_TSource__TKey__o *)_9__64_3,
                                                                     (const MethodInfo_313834C *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        Item = System_Linq_Enumerable__FirstOrDefault_object_(
                 v58,
                 (const MethodInfo_3122250 *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
        v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v33;
      }
      else
      {
        Item = 0;
      }
    }
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v19,
      Id_k__BackingField,
      Item,
      (const MethodInfo_340C428 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( Item )
    {
      v60 = *(WarBoardPieceData_o **)(v12 + 24);
      v61 = *(_DWORD *)(v12 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v63 = (WarBoardAIRoute_TargetData_o *)sub_1C3E7B0(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_37926504(
        v63,
        (WarBoardAIRoute_TargetData_o *)current.fields.value,
        (IWarBoardObjectData_o *)Item,
        v60,
        v61,
        allEnemyPiece,
        v64);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1C3E7C0(0, v65);
      System_Collections_Generic_Dictionary_long__object___Add(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        (Il2CppObject *)v63,
        (const MethodInfo_345159C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1C3E7C0(0, v59);
      System_Collections_Generic_Dictionary_long__object___Remove(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)current.fields.key,
        (const MethodInfo_3452A10 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v70,
    (const MethodInfo_356C1A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *WarBoardAIRoute__GetTargetToDistance_37926616(
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
  const MethodInfo *v13; // x3
  Il2CppObject *Item; // x24
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x23
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *monitor; // x25
  System_Func_object__bool__o *v17; // x26
  const MethodInfo *v18; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *klass; // x25
  System_Func_object__bool__o *v20; // x26
  const MethodInfo *v21; // x6
  const MethodInfo *v22; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C54702 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
    sub_1C3E564(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__);
    sub_1C3E564(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
    byte_4C54702 = 1;
  }
  v9 = sub_1C3E7B0(WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = routeDataList,
        sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)routeDataList, v12, v13),
        !basePiece)
    || (dicUniqueKeyTarget = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget) == 0
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 dicUniqueKeyTarget,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_34AE310 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo),
        System_Collections_Generic_Dictionary_long__object____ctor(
          v15,
          (const MethodInfo_3450BCC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v15,
        !Item) )
  {
    sub_1C3E7C0(dicUniqueKeyTarget, v11);
  }
  monitor = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].monitor;
  v17 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    monitor,
    (System_Func_IWarBoardObjectData__bool__o *)v17,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v18);
  klass = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[2].klass;
  v20 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0);
  WarBoardAIRoute__GetTargetToDistanceUsingIndividuality(
    this,
    klass,
    (System_Func_IWarBoardObjectData__bool__o *)v20,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v21);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].klass,
    0,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v22);
  return (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v15;
}


float WarBoardAIRoute__GetThinkingThreshold(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1C3E7C0(this, method);
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
  if ( (byte_4C54709 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C54709 = 1;
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
    this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
      return SHIDWORD(this[3].fields.allSquare) >= v13 + requiredCost;
LABEL_13:
    sub_1C3E7C0(this, basePiece);
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
  const MethodInfo *v17; // x3
  WarBoardPieceData_o **v18; // x25
  bool v19; // w8
  const MethodInfo *v20; // x3
  int32_t RouteSumPieceActionCost; // w23
  System_Func_object__bool__o *v22; // x21
  __int64 v23; // x8

  if ( (byte_4C5470D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    sub_1C3E564(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__);
    sub_1C3E564(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
    byte_4C5470D = 1;
  }
  v13 = sub_1C3E7B0(WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_25;
  *(_QWORD *)(v13 + 16) = actionPiece;
  v18 = (WarBoardPieceData_o **)(v13 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)(v13 + 16), (int32_t)actionPiece, v16, v17);
  Instance = *(WarBoardPieceData_o **)(v13 + 16);
  if ( !Instance )
    goto LABEL_25;
  v19 = WarBoardPieceData__EnableSwapByOther(Instance, 0, 0);
  Instance = 0;
  if ( !v19 )
    return (char)Instance;
  if ( !basePiece )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(basePiece, 0) )
    goto LABEL_10;
  Instance = *v18;
  if ( !*v18 )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(Instance, 0) )
  {
LABEL_10:
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < this->fields.moveCost
                                                               + requiredCost
                                                               + this->fields.masterMoveCost )
      goto LABEL_23;
  }
  else
  {
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < requiredCost + 2 * this->fields.moveCost )
      goto LABEL_23;
  }
  RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                              (WarBoardAIRoute_o *)Instance,
                              routeDataList,
                              *v18,
                              v20);
  if ( !WarBoardPieceData__EnableMoveBySelf(basePiece, sumPieceActionCost, 0) )
    goto LABEL_23;
  Instance = *v18;
  if ( !*v18 )
    goto LABEL_25;
  if ( !WarBoardPieceData__EnableSwapByOther(Instance, RouteSumPieceActionCost, 0) )
    goto LABEL_23;
  Instance = *v18;
  if ( !*v18 )
LABEL_25:
    sub_1C3E7C0(Instance, v15);
  if ( !WarBoardPieceData__get_isInfinitelyActable(Instance, 0) )
  {
    v22 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v13,
      Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
      0);
    Instance = (WarBoardPieceData_o *)System_Linq_Enumerable__Count_object__51492776(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
                                        (System_Func_TSource__bool__o *)v22,
                                        (const MethodInfo_311B7A8 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    v23 = *(_QWORD *)(v13 + 16);
    if ( v23 )
    {
      if ( *(_DWORD *)(v23 + 36) > (int)Instance )
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
  if ( (byte_4C546FF & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1C3E564(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4C546FF = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !v6 )
    sub_1C3E7C0(shortestEnemyRoute, piecePlaceData);
  v7 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v8 = 0;
  v17 = v16;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v9 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C3E7C0(v9, v10);
    monitor = v17.fields._current[1].monitor;
    if ( (int)monitor - 1 <= (int)v7 )
    {
LABEL_16:
      v8 = 0;
      break;
    }
    if ( (unsigned int)v17.fields._current[1].monitor <= (unsigned __int64)v7 )
LABEL_18:
      sub_1C3E7C8(v9, v10);
    v13 = (unsigned int)((_DWORD)monitor - 1) - 1LL;
    v14 = v7;
    while ( 1 )
    {
      if ( !piecePlaceData )
        sub_1C3E7C0(v9, v10);
      v9 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
             piecePlaceData,
             *((_DWORD *)&current[2].klass + v14),
             (const MethodInfo_3430D7C *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
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
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4C546FC & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C546FC = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !defenseArea )
    sub_1C3E7C0(v7, *(_QWORD *)&index);
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
  if ( (byte_4C546FE & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__);
    allShortestRoute = (System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *)sub_1C3E564(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4C546FE = 1;
  }
  memset(&v20, 0, sizeof(v20));
  memset(&v21, 0, sizeof(v21));
  if ( !v6 )
    sub_1C3E7C0(allShortestRoute, *(_QWORD *)&index);
  v7 = !isDefenseSquare;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v8 = 0;
  v21 = v19;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v21,
           (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v21.fields._current.fields.value )
      sub_1C3E7C0(v9, v10);
    klass = v21.fields._current.fields.value[1].klass;
    if ( !klass )
      sub_1C3E7C0(0, v10);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)klass,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    *(_OWORD *)&v20.fields._list = *(_OWORD *)&v19.fields._dictionary;
    v20.fields._current = v19.fields._current.fields.key;
    do
    {
LABEL_9:
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v12 )
      {
        v17 = 4;
        goto LABEL_20;
      }
      if ( !v20.fields._current )
        sub_1C3E7C0(v12, v13);
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
        sub_1C3E7C8(v12, v13);
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
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( (v17 | 4) != 4 )
      goto LABEL_26;
  }
  v17 = 12;
LABEL_26:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v21,
    (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
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
  if ( (byte_4C546FD & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1C3E564(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4C546FD = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !v6 )
    sub_1C3E7C0(shortestEnemyRoute, *(_QWORD *)&index);
  v7 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v17 = v16;
  do
  {
LABEL_5:
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    v10 = v8;
    if ( !v8 )
    {
      v14 = 10;
      goto LABEL_16;
    }
    if ( !v17.fields._current )
      sub_1C3E7C0(v8, v9);
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
      sub_1C3E7C8(v8, v9);
    if ( *((_DWORD *)&v17.fields._current[2].klass + (int)v13) == index )
      break;
    if ( v12 == ++v13 )
      goto LABEL_5;
  }
  v14 = 9;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v10 && v14 == 9;
}


bool WarBoardAIRoute__IsDetour(System_Int32_array *route, System_Int32_array *blockPieces, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w0
  bool v11; // w0
  int v13; // w23
  System_Func_int__bool__o **v14; // x21
  System_Func_int__bool__o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int v18; // w8

  if ( (byte_4C546FB & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_int____78187928);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__);
    sub_1C3E564(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
    byte_4C546FB = 1;
  }
  v5 = sub_1C3E7B0(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 16) = route;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)route, v8, v9);
  v10 = System_Linq_Enumerable__Count_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 16),
          (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
  if ( v10 < 2 )
    return 0;
  *(_DWORD *)(v5 + 24) = 1;
  if ( v10 == 2 )
  {
    return 0;
  }
  else
  {
    v13 = v10 - 1;
    v14 = (System_Func_int__bool__o **)(v5 + 32);
    do
    {
      v15 = *v14;
      if ( !*v14 )
      {
        v15 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
          0);
        *(_QWORD *)(v5 + 32) = v15;
        sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v15, v16, v17);
      }
      v11 = BasicHelper__Any_int__51260304(
              blockPieces,
              (System_Func_T__bool__o *)v15,
              (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928);
      if ( v11 )
        break;
      v18 = *(_DWORD *)(v5 + 24) + 1;
      *(_DWORD *)(v5 + 24) = v18;
    }
    while ( v18 < v13 );
  }
  return v11;
}


bool WarBoardAIRoute__IsThinkingThreshold(WarBoardAIRoute_o *this, float v, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1C3E7C0(this, method);
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

  if ( (byte_4C5470C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&WarBoardAIManager_TypeInfo);
    byte_4C5470C = 1;
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
        sub_1C3E7C8(Square, v11);
      if ( !piecePlaceData )
        break;
      v15 = *(&npcEntityDict->fields._count + v14);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v15,
             &value,
             (const MethodInfo_3432228 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Square = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)Square[1].fields.playedStageReinforcementsList;
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardData__GetPiece_37931252(Square, value, 1, v17);
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
    sub_1C3E7C0(Square, v11);
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
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  WarBoardAIRoute_o *v24; // x1
  Il2CppClass **v25; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  WarBoardAIRoute_RouteData_o *v28; // x8
  int32_t v29; // w24
  int32_t ClassId; // w25

  if ( (byte_4C54710 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&SvtClassAttri_TypeInfo);
    this = (WarBoardAIRoute_o *)sub_1C3E564(&WarBoardAIManager_TypeInfo);
    byte_4C54710 = 1;
  }
  v8 = *routeData;
  if ( !*routeData
    || (actionSquare = v8->fields.actionSquare) == 0
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0 )
  {
LABEL_51:
    sub_1C3E7C0(this, routeData);
  }
  if ( (int)linkedSquares->max_length >= 1 )
  {
    basePiece = v8->fields.basePiece;
    v12 = 0;
    max_length = linkedSquares->max_length;
    do
    {
      if ( v12 >= max_length )
        sub_1C3E7C8(this, routeData);
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
        this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_37929548((WarBoardData_o *)this, v14, v18);
        if ( !moveByLinkedPiece )
          goto LABEL_51;
        items = moveByLinkedPiece->fields._items;
        v22 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        ++moveByLinkedPiece->fields._version;
        if ( !items )
          goto LABEL_51;
        size = moveByLinkedPiece->fields._size;
        v24 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            moveByLinkedPiece,
            (Il2CppObject *)this,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          moveByLinkedPiece->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v24;
          sub_1C3E508((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
        }
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        if ( WarBoardAIManager__IsAllyPiece(basePiece, v17, v26)
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
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v17, v27);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*routeData )
              goto LABEL_51;
            (*routeData)->fields.flagNow |= 0x40uLL;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v17, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v28 = *routeData;
              if ( !*routeData )
                goto LABEL_51;
              if ( (v28->fields.flagNow & 0x2000000) != 0 )
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
                  v29 = (int)this;
                  ClassId = BattleServantData__getClassId(v17->fields._battleServant_k__BackingField, 0, 0);
                  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                  if ( SvtClassAttri__getMagnification(v29, ClassId, 0) > 1.0 )
                  {
                    v28 = *routeData;
                    if ( !*routeData )
                      goto LABEL_51;
LABEL_43:
                    v28->fields.flagNow |= 0x2000000uLL;
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

  if ( (byte_4C546F1 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    sub_1C3E564(&IWarBoardObjectData_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
    sub_1C3E564(&System_Predicate_IWarBoardObjectData__TypeInfo);
    sub_1C3E564(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__);
    sub_1C3E564(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
    byte_4C546F1 = 1;
  }
  v14 = sub_1C3E7B0(WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
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
         (const MethodInfo_3451790 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v17 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_IWarBoardObjectData__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v14,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    0);
  if ( !objectList )
LABEL_17:
    sub_1C3E7C0(v15, v16);
  v18 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
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
      v23 = sub_1C8ED7C(v18, IWarBoardObjectData_TypeInfo, 2);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8)) & 1) != 0 )
    {
      v24 = (WarBoardAIRoute_TargetData_o *)sub_1C3E7B0(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_37914080(v24, v20, trendKey, conditionId, v25);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
        trendKey,
        (Il2CppObject *)v24,
        (const MethodInfo_3451588 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
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

  if ( (byte_4C546EF & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
    byte_4C546EF = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_1C3E7C0(0, *(_QWORD *)&aiId);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_340D8C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
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

  if ( (byte_4C5470E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___78086960);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__uint__TypeInfo);
    byte_4C5470E = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor_54723244(
    v10,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_34302AC *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___78086960);
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
        (const MethodInfo_3430B7C *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_1C3E7C0(v11, v12);
  }
  if ( !v10 )
    goto LABEL_12;
  v11 = System_Collections_Generic_Dictionary_int__uint___Remove(
          v10,
          baseSquareIndex,
          (const MethodInfo_3431F48 *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v10,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_3430B7C *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v10;
}


bool WarBoardAIRoute____ctor_b__42_0(WarBoardAIRoute_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C54713 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    byte_4C54713 = 1;
  }
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    sub_1C3E7C0(this, x);
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
  WarBoardData_o *v12; // x1
  const MethodInfo *v13; // x4
  System_Int32_array *v14; // x8
  unsigned int v15; // w9
  unsigned int max_length; // w10
  unsigned int v17; // w23
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w25
  int32_t v20; // w24
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int stageNpcMaster; // w8
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Int32_array *data; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C5472F & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C5472F = 1;
  }
  data = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_OWORD *)&this->fields.masterType = xmmword_C12FB0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v7;
  p_replaceDataList = &this->fields.replaceDataList;
  sub_1C3E508((CGThumbnailListItem_o *)p_replaceDataList, (int32_t)v7, v9, v10);
  *((_DWORD *)p_replaceDataList + 2) = -1;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_20;
  Instance = (WarBoardData_o *)WarBoardData__IsDefenseTarget(Instance, &data, forceId, groupId, v13);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  v14 = data;
  if ( !data )
LABEL_20:
    sub_1C3E7C0(Instance, v12);
  v15 = 0;
  while ( 1 )
  {
    max_length = v14->max_length;
    if ( (int)v15 >= (int)max_length )
      break;
    if ( v15 >= max_length )
      goto LABEL_22;
    v17 = v15 + 1;
    if ( v15 + 1 >= max_length )
      goto LABEL_22;
    v18 = (System_Collections_Generic_List_object__o *)*p_replaceDataList;
    v19 = v14->m_Items[v15];
    v20 = v14->m_Items[v17];
    Instance = (WarBoardData_o *)sub_1C3E60C(int___TypeInfo, 2);
    if ( !Instance )
      goto LABEL_20;
    stageNpcMaster = (int)Instance->fields.stageNpcMaster;
    v12 = Instance;
    if ( !stageNpcMaster || (LODWORD(Instance->fields.npcEntityDict) = v19, stageNpcMaster == 1) )
LABEL_22:
      sub_1C3E7C8(Instance, v12);
    HIDWORD(Instance->fields.npcEntityDict) = v20;
    if ( v18 )
    {
      items = v18->fields._items;
      v25 = Method_System_Collections_Generic_List_int____Add__;
      ++v18->fields._version;
      if ( items )
      {
        size = v18->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)Instance,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v12;
          sub_1C3E508((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v12, v21, v22);
        }
        v14 = data;
        v15 = v17 + 1;
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

  if ( (byte_4C54730 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int____get_Item__);
    byte_4C54730 = 1;
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
                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_int____get_Item__);
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
                sub_1C3E7C8(replaceDataList, *(_QWORD *)&type);
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
    sub_1C3E7C0(replaceDataList, *(_QWORD *)&type);
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
  __int64 v15; // x1
  il2cpp_array_size_t max_length; // x8
  WarBoardActionTrendEntity_array *v17; // x20
  unsigned __int64 i; // x24
  WarBoardActionTrendEntity_o *v19; // x23
  System_Collections_Generic_List_object__o *v20; // x21
  WarBoardAIRoute_ActionTrendInfo_o *v21; // x22
  const MethodInfo *v22; // x2
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  int32_t condType; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C5471E & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1C3E564(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__);
    byte_4C5471E = 1;
  }
  condType = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v5;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._FutureTrendInfoList_k__BackingField, (int32_t)v5, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Entity_k__BackingField = entity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)entity, v9, v10);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v11);
  v13 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
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
  HasMatchCondition = (WarBoardActionTrendEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !HasMatchCondition
    || (HasMatchCondition = WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                              (WarBoardActionTrendMaster_o *)HasMatchCondition,
                              entity,
                              0)) == 0 )
  {
LABEL_20:
    sub_1C3E7C0(HasMatchCondition, v15);
  }
  max_length = HasMatchCondition->max_length;
  v17 = HasMatchCondition;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C3E7C8(HasMatchCondition, v15);
      v19 = v17->m_Items[i];
      if ( v19 )
      {
        v20 = (System_Collections_Generic_List_object__o *)*p_FutureTrendInfoList_k__BackingField;
        v21 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C3E7B0(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v21, v19, v22);
        if ( !v20 )
          goto LABEL_20;
        items = v20->fields._items;
        v26 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v20->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)v21,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v21;
          sub_1C3E508((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v21, v23, v24);
        }
      }
      LODWORD(max_length) = v17->max_length;
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
  if ( (byte_4C5471D & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    sub_1C3E564(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
    sub_1C3E564(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__);
    this = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1C3E564(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
    byte_4C5471D = 1;
  }
  p_conditionEntityArray = (CGThumbnailListItem_o *)&v2->fields.conditionEntityArray;
  conditionEntityArray = (System_Object_array *)v2->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = v2->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_1C3E7C0(this, method);
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
      _9__8_0 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__8_0,
        v9,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        0);
      static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v11, v12);
    }
    v13 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           conditionIds,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_312D55C *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v14 = BasicHelper__ExcludeNull_object_(
            v13,
            (const MethodInfo_30E3764 *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = System_Linq_Enumerable__ToArray_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                             (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    p_conditionEntityArray->klass = (CGThumbnailListItem_c *)conditionEntityArray;
    sub_1C3E508(p_conditionEntityArray, (int32_t)conditionEntityArray, v15, v16);
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

  if ( (byte_4C5471F & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
    byte_4C5471F = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_ActionTrendInfo___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C54720 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
    byte_4C54720 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v5);
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   x,
                                                   (const MethodInfo_33B2F58 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
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

  if ( (byte_4C54728 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
    byte_4C54728 = 1;
  }
  this->fields.flagNow = 1;
  *(_QWORD *)&this->fields.baseCARange = -1;
  *(_QWORD *)&this->fields.baseAARange = -1;
  *(_QWORD *)&this->fields.baseDARange = -1;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dicClassAdvantageServant, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dicClassDisAdvantageServant, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dicAttackAdvantageServant, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dicAttackDisAdvantageServant, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v15;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dicDefenseAdvantageServant, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v18;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dicDefenseDisAdvantageServant, (int32_t)v18, v19, v20);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIRoute_DesignationItemData___ctor(WarBoardAIRoute_DesignationItemData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C54729 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
    byte_4C54729 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
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

  if ( (byte_4C54717 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
    byte_4C54717 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.ratingOffsetList, (int32_t)v6, v7, v8);
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

  if ( (byte_4C54714 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    sub_1C3E564(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__);
    sub_1C3E564(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_4C54714 = 1;
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
      _9__4_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__4_0,
        v8,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        0);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v10, v11);
    }
    v12 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__4_0,
            (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v13 = System_Linq_Enumerable__ToList_object_(
            v12,
            (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_attackOffset->klass = (CGThumbnailListItem_c *)v13;
    sub_1C3E508(p_attackOffset, (int32_t)v13, v14, v15);
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

  if ( (byte_4C54716 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    byte_4C54716 = 1;
  }
  v3 = sub_1C3E7B0(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v4, v5);
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

  if ( (byte_4C54715 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    sub_1C3E564(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__);
    sub_1C3E564(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_4C54715 = 1;
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
      _9__5_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__5_0, v8, Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__, 0);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v10, v11);
    }
    v12 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v13 = System_Linq_Enumerable__ToList_object_(
            v12,
            (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_moveOffset->klass = (CGThumbnailListItem_c *)v13;
    sub_1C3E508(p_moveOffset, (int32_t)v13, v14, v15);
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
  if ( (byte_4C54719 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    this = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    byte_4C54719 = 1;
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
      sub_1C3E7C0(this, method);
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_1C3E7C0(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      &v40,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v14 = v43;
    v15 = *(_OWORD *)&v40.fields._list;
    p__7__wrap3 = (CGThumbnailListItem_o *)&v43->fields.__7__wrap3;
    v41 = v40;
    v43->fields.__7__wrap3.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v40.fields._current;
    *(_OWORD *)&v14->fields.__7__wrap3.fields._list = v15;
    sub_1C3E508(p__7__wrap3, 0, v17, v18);
    v2 = v43;
LABEL_12:
    v2->fields.__1__state = -4;
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap3,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    v23 = v43;
    if ( v22 )
    {
      current = v43->fields.__7__wrap3.fields._current;
      v43->fields.__2__current = current;
      sub_1C3E508((CGThumbnailListItem_o *)&v23->fields.__2__current, (int32_t)current, v20, v21);
      result = 1;
      v43->fields.__1__state = 2;
      return result;
    }
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(v43, v19);
    v26 = v43;
    *(_OWORD *)&v43->fields._trendInfo_5__3 = 0u;
    v26 = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)((char *)v26 + 72);
    *(_OWORD *)&v26->fields.__1__state = 0u;
    sub_1C3E508((CGThumbnailListItem_o *)v26, 0, v27, v28);
    v11 = v43;
    goto LABEL_15;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C3E7C0(this, method);
  actionTrandList = (System_Collections_Generic_List_object__o *)_4__this->fields.actionTrandList;
  if ( !actionTrandList )
    sub_1C3E7C0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    &v40,
    actionTrandList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v6 = v43;
  v7 = *(_OWORD *)&v40.fields._list;
  p__7__wrap1 = (CGThumbnailListItem_o *)&v43->fields.__7__wrap1;
  v41 = v40;
  v43->fields.__7__wrap1.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v40.fields._current;
  *(_OWORD *)&v6->fields.__7__wrap1.fields._list = v7;
  sub_1C3E508(p__7__wrap1, 0, v9, v10);
  v11 = v43;
  v43->fields.__1__state = -3;
LABEL_15:
  v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v11->fields.__7__wrap1,
          (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
  v33 = v43;
  if ( v32 )
  {
    v34 = v43->fields.__7__wrap1.fields._current;
    v43->fields._trendInfo_5__3 = v34;
    sub_1C3E508((CGThumbnailListItem_o *)&v33->fields._trendInfo_5__3, (int32_t)v34, v30, v31);
    v35 = v43;
    v36 = v43->fields._trendInfo_5__3;
    v43->fields.__2__current = v36;
    sub_1C3E508((CGThumbnailListItem_o *)&v35->fields.__2__current, (int32_t)v36, v37, v38);
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

  if ( (byte_4C5471C & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    byte_4C5471C = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C3E7B0(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C3E508((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  if ( (byte_4C5471A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    byte_4C5471A = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C5471B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    byte_4C5471B = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void WarBoardAIRoute_PiecePersonality___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C54718 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_4C54718 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_PiecePersonality___c_o *)v1;
  sub_1C3E508(
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
    sub_1C3E7C0(this, 0);
  return x->fields.type == 0;
}


bool WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C5472A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
    byte_4C5472A = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v3,
    (const MethodInfo_3450BCC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v6,
    (const MethodInfo_3450BCC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dicObjectPutSquareIndex, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v9,
    (const MethodInfo_3450BCC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dicIndividualityPutSqareIndex, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIRoute_RouteData___ctor(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C54723 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
    byte_4C54723 = 1;
  }
  this->fields.flagNow = 1;
  v3 = (Il2CppObject *)sub_1C3E7B0(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.evalOffsetMagnification = (struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.evalOffsetMagnification, (int32_t)v3, v4, v5);
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

  if ( (byte_4C54725 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&System_Decimal_TypeInfo);
    byte_4C54725 = 1;
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
  v7 = System_Decimal__op_Implicit_65547520((System_Decimal_o *)v4, WarBoardEvalFactorsAffectRatio, 0);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_1C3E7C0(0, v6);
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
  v25 = System_Decimal__op_Implicit_65547520(cctor_finished, attackEvalOffsetAddValue, 0);
  v28 = System_Decimal__op_Division(v27, v25, v26, (const MethodInfo *)v7);
  v30 = System_Decimal__op_Addition(v29, AttackValue, v20, (const MethodInfo *)v28);
  this->fields.evalValue = System_Decimal__op_Explicit_65548024(v30, v31);
}


bool WarBoardAIRoute_RouteData__HasActionPiece(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return this->fields.actionPiece != 0;
}


bool WarBoardAIRoute_RouteData__HasFlag(WarBoardAIRoute_RouteData_o *this, int64_t flag, const MethodInfo *method)
{
  return (flag & ~this->fields.flagNow) == 0;
}


bool WarBoardAIRoute_RouteData__HasFlag_37929760(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_4C54722 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__);
    byte_4C54722 = 1;
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

  if ( (byte_4C54724 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAIRoute_RouteData_TypeInfo);
    byte_4C54724 = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0);
  if ( result )
  {
    naturalAligment = WarBoardAIRoute_RouteData_TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      sub_1C3EA80(result);
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

  if ( (byte_4C54721 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    byte_4C54721 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = (CGThumbnailListItem_o *)&this->fields.futureLookingTrendHashSet;
  v4 = (System_Collections_Generic_HashSet_T__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v4 = (System_Collections_Generic_HashSet_T__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v4,
      (const MethodInfo_366C4CC *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    p_futureLookingTrendHashSet->klass = (CGThumbnailListItem_c *)v4;
    sub_1C3E508(p_futureLookingTrendHashSet, (int32_t)v4, v6, v7);
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

  if ( (byte_4C54726 & 1) == 0 )
  {
    sub_1C3E564(&System_Decimal_TypeInfo);
    byte_4C54726 = 1;
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

  if ( (byte_4C54727 & 1) == 0 )
  {
    sub_1C3E564(&System_Decimal_TypeInfo);
    byte_4C54727 = 1;
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


void WarBoardAIRoute_TargetData___ctor_37912624(
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
  sub_1C3E508((CGThumbnailListItem_o *)v8, (int32_t)targetSquare, v9, v10);
}


void WarBoardAIRoute_TargetData___ctor_37914080(
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)targetObject, v9, v10);
  WarBoardAIRoute_TargetData__DetectObject(this, v11);
}


void WarBoardAIRoute_TargetData___ctor_37924496(
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
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !baseTargetData )
    sub_1C3E7C0(v11, v12);
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)targetObject, v13, v14);
  targetSquare = baseTargetData->fields.targetSquare;
  this->fields.targetSquare = targetSquare;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetSquare, (int32_t)targetSquare, v17, v18);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v19);
}


void WarBoardAIRoute_TargetData___ctor_37926504(
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)targetObject, v13, v14);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v15);
}


void WarBoardAIRoute_TargetData___ctor_37939788(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
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
  if ( (byte_4C5472B & 1) == 0 )
  {
    b = (WarBoardAIRoute_TargetData_o *)sub_1C3E564(&WarBoardAIRoute_TargetData_TypeInfo);
    byte_4C5472B = 1;
  }
  if ( !v2 )
LABEL_9:
    sub_1C3E7C0(b, method);
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone(v2, 0);
  if ( result )
  {
    naturalAligment = WarBoardAIRoute_TargetData_TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      sub_1C3EA80(result);
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

  if ( (byte_4C5472D & 1) == 0 )
  {
    sub_1C3E564(&WarBoardItemData_TypeInfo);
    sub_1C3E564(&WarBoardPieceData_TypeInfo);
    sub_1C3E564(&WarBoardTreasureData_TypeInfo);
    byte_4C5472D = 1;
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
  sub_1C3E508((CGThumbnailListItem_o *)p_targetPiece, v9, v2, v3);
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
  sub_1C3E508((CGThumbnailListItem_o *)p_targetItem, v17, v11, v12);
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
  sub_1C3E508((CGThumbnailListItem_o *)p_targetTreasure, v25, v19, v20);
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
  const MethodInfo *v23; // x3
  WarBoardAIRoute_TargetData___c_c *v24; // x0
  System_Int32_array *baseRoute; // x24
  WarBoardPieceData_o *v26; // x21
  System_Func_object__int__o *_9__7_0; // x25
  Il2CppObject *v28; // x26
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Int32_array *v33; // x0
  const MethodInfo *v34; // x2
  bool IsDetour; // w0
  const MethodInfo *v36; // x5
  int32_t v37; // w23
  struct System_Int32_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w0
  struct IWarBoardObjectData_o *v42; // x21
  WarBoardAIRoute_TargetData_o *v43; // x22
  IWarBoardObjectData_c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  struct WarBoardSquareData_o *v48; // x8

  if ( (byte_4C5472C & 1) == 0 )
  {
    sub_1C3E564(&AStarSearch_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&System_Func_WarBoardPieceData__int__TypeInfo);
    sub_1C3E564(&IWarBoardObjectData_TypeInfo);
    sub_1C3E564(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__);
    sub_1C3E564(&WarBoardAIRoute_TargetData___c_TypeInfo);
    byte_4C5472C = 1;
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
      v17 = sub_1C8ED7C(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v17)(
                                    targetObject,
                                    *(_QWORD *)(v17 + 8));
    if ( !v13 )
LABEL_49:
      sub_1C3E7C0(squareIndex_k__BackingField, v10);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.baseRoute, (int32_t)v21, v22, v23);
  v24 = WarBoardAIRoute_TargetData___c_TypeInfo;
  baseRoute = this->fields.baseRoute;
  if ( !WarBoardAIRoute_TargetData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIRoute_TargetData___c_TypeInfo);
    v24 = WarBoardAIRoute_TargetData___c_TypeInfo;
  }
  v26 = piece;
  _9__7_0 = (System_Func_object__int__o *)v24->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = WarBoardAIRoute_TargetData___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v24->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v28, Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, 0);
    static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v33 = System_Linq_Enumerable__ToArray_int_(
          v32,
          (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v33, v34);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    v37 = this->fields.nowSquareIndex;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v38 = AStarSearch__RouteSearch(v26, baseSquareIndex, v37, 1, 0, v36);
    this->fields.detourRoute = v38;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.detourRoute, (int32_t)v38, v39, v40);
  }
  v41 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
  v42 = this->fields.targetObject;
  this->fields.isAround = v41 == 2;
  if ( v42 )
    v43 = this;
  else
    v43 = 0;
  if ( v42 )
  {
    v44 = v42->klass;
    v45 = *(unsigned __int16 *)&v42->klass->_2.rank;
    if ( *(_WORD *)&v42->klass->_2.rank )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((IWarBoardObjectData_c **)v46 - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_39;
      }
      v47 = (__int64)&v44->vtable[*v46];
    }
    else
    {
LABEL_39:
      v47 = sub_1C8ED7C(v42, IWarBoardObjectData_TypeInfo, 0);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v47)(
                                    v42,
                                    *(_QWORD *)(v47 + 8));
    if ( !v43 )
      goto LABEL_49;
  }
  else
  {
    v48 = this->fields.targetSquare;
    if ( v48 )
      squareIndex_k__BackingField = (unsigned int)v48->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = 0xFFFFFFFFLL;
    v43 = this;
    if ( !this )
      goto LABEL_49;
  }
  v43->fields.putSquareIndex = squareIndex_k__BackingField;
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

  if ( (byte_4C5472E & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAIRoute_TargetData___c_TypeInfo);
    byte_4C5472E = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(WarBoardAIRoute_TargetData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute_TargetData___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_TargetData___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)WarBoardAIRoute_TargetData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
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
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct WarBoardData_o *monitor; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v12; // x0
  WarBoardAIRoute_o *v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x6
  struct WarBoardStageNpcEntity_o *npcData; // x9
  int32_t searchDepth; // w8
  WarBoardAIRoute__CreateRouteData_d__47_o *v18; // x9
  int32_t v19; // w10
  int32_t v20; // w20
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  int32_t MasterSquareIndex; // w2
  System_Collections_Generic_Dictionary_int__uint__o *v25; // x1
  const MethodInfo *v26; // x3
  struct System_Int32_array *AllyPutSquareIndicesWithoutMaster; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  CGThumbnailListItem_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x0
  __int64 v35; // x1
  struct WarBoardData_o *warBoardData_5__2; // x8
  System_Collections_Generic_List_int__o *masterExistsForce; // x0
  _BOOL8 v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x4
  WarBoardAIRoute__CreateRouteData_d__47_o *v41; // x8
  int32_t servantAndEnemyRange_5__14; // w8
  int32_t servantAndEnemyMasterRange_5__15; // w9
  struct WarBoardAIRoute_AIRouteMasterData_o *v44; // x9
  int32_t v45; // w9
  struct DefenseAreaData_o *DefenseAreaData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v53; // x8
  struct DefenseAreaData_o *defenseAreaData_5__7; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x10
  bool IsAllBlockShortestRouteEnemyAndMastr; // w0
  System_Collections_Generic_Dictionary_int__uint__o *v57; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v58; // x8
  __int128 v59; // q0
  CGThumbnailListItem_o *p__7__wrap8; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x1
  Il2CppObject *key; // x20
  Il2CppObject *v65; // x21
  WarBoardAIRoute__CreateRouteData_d__47_o *v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x1
  WarBoardSquareData_o *Square; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v71; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *_8__1; // x21
  const MethodInfo *v75; // x1
  WarBoardPieceData_o *PieceUnique; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  __int64 v79; // x0
  __int64 v80; // x1
  const MethodInfo *v81; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v82; // x8
  int64_t baseFlag_5__6; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v84; // x9
  int64_t v85; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v86; // x8
  System_Collections_Generic_IEnumerable_TSource__o *routeDataList; // x21
  Il2CppObject *v88; // x23
  System_Func_object__bool__o *v89; // x22
  __int64 v90; // x1
  int32_t v91; // w8
  System_Collections_Generic_List_object__o *v92; // x0
  WarBoardAIRoute_o *Only; // x0
  __int64 v94; // x1
  const MethodInfo *v95; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v96; // x8
  __int64 RouteSumPieceActionCost; // x0
  __int64 v98; // x1
  const MethodInfo *v99; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v100; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v101; // x9
  _BOOL8 IsActable; // x0
  __int64 v103; // x1
  const MethodInfo *v104; // x4
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v105; // x9
  System_Collections_Generic_Dictionary_int__int__o *DesignationItemToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v107; // x0
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  __int64 v110; // x0
  __int64 v111; // x1
  const MethodInfo *v112; // x4
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v113; // x9
  struct System_Collections_Generic_Dictionary_int__int__o *TargetToDistance_37926616; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v115; // x0
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v118; // x1
  const MethodInfo *v119; // x5
  System_Collections_Generic_Dictionary_uint__int__o *AllEnemyToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v121; // x0
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v124; // x0
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  __int64 v127; // x0
  __int64 v128; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v129; // x8
  WarBoardPieceData_o *basePiece; // x0
  _BOOL8 isServant; // x0
  __int64 v132; // x1
  const MethodInfo *v133; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v134; // x9
  WarBoardAIRoute_AdvantagePieceData_o *AdvantagePieceData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v136; // x0
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  const MethodInfo *v139; // x5
  int32_t masterSquareIndex_5__4; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v141; // x0
  __int64 v142; // x0
  __int64 v143; // x1
  const MethodInfo *v144; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v145; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v146; // x9
  struct WarBoardPieceData_o *v147; // x11
  struct WarBoardAIRoute_AIRouteMasterData_o *v148; // x9
  int32_t masterType; // w10
  int32_t index_k__BackingField; // w11
  struct WarBoardStageNpcEntity_o *v151; // x12
  System_Collections_Generic_HashSet_T__o *v152; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v153; // x0
  int32_t v154; // w2
  const MethodInfo *v155; // x3
  System_Collections_Generic_HashSet_T__o *v156; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v157; // x0
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  __int64 v160; // x1
  System_Collections_Generic_List_object__o *v161; // x0
  _BOOL8 v162; // x0
  __int64 v163; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v166; // x10
  struct WarBoardPieceData_o *v167; // x10
  System_Collections_Generic_HashSet_T__o *basePieceActionPieceRouteList_5__22; // x0
  _DWORD *v169; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v170; // x10
  struct WarBoardPieceData_o *v171; // x10
  struct WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData_5__21; // x0
  __int64 v173; // x0
  __int64 v174; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v175; // x8
  int32_t v176; // w9
  System_Collections_Generic_IEnumerable_TSource__o *v177; // x20
  WarBoardAIRoute___c_c *v178; // x8
  System_Func_T__TResult__o *_9__47_6; // x21
  Il2CppObject *v180; // x22
  struct WarBoardAIRoute___c_StaticFields *v181; // x0
  int32_t v182; // w2
  const MethodInfo *v183; // x3
  __int64 v184; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v185; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v186; // x0
  __int64 Count; // x0
  __int64 v188; // x1
  struct WarBoardStageNpcEntity_o *v189; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v190; // x11
  float v191; // s0
  int32_t v192; // w9
  int32_t calcEllipsisMin; // w8
  System_Linq_IOrderedEnumerable_TSource__c *v194; // x8
  __int64 v195; // x9
  int32_t *p_offset; // x10
  __int64 v197; // x0
  __int64 v198; // x1
  int32_t *v199; // x0
  int32_t v200; // w2
  const MethodInfo *v201; // x3
  __int64 *v202; // x19
  __int64 v203; // x8
  __int64 v204; // x9
  int *v205; // x10
  __int64 v206; // x0
  __int64 v207; // x0
  __int64 *v208; // x19
  __int64 v209; // x8
  __int64 v210; // x9
  int *v211; // x10
  __int64 v212; // x0
  int32_t *p__7__wrap24; // x0
  int32_t v214; // w2
  const MethodInfo *v215; // x3
  Il2CppObject *v216; // x1
  CGThumbnailListItem_o *v217; // x0
  int32_t v218; // w2
  const MethodInfo *v219; // x3
  __int64 v220; // x1
  WarBoardSquareData_o *v221; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *MyAndLinkedSquareIndecies; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v223; // x0
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v226; // x8
  int v227; // w9
  __int64 v228; // x21
  __int64 v229; // x0
  __int64 v230; // x1
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v231; // x8
  __int64 _7__wrap23_low; // x9
  int32_t *v233; // x27
  WarBoardAIRoute_RouteData_o *v234; // x20
  const MethodInfo *v235; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v236; // x9
  int32_t getEnumeratorRetType; // w8
  int32_t v238; // w10
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v239; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dicBaseDIRange_5__18; // x20
  WarBoardAIRoute___c_c *v241; // x8
  System_Func_T__TResult__o *_9__47_1; // x22
  Il2CppObject *v243; // x23
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v245; // w2
  const MethodInfo *v246; // x3
  System_Func_T__TResult__o *_9__47_2; // x23
  Il2CppObject *v248; // x24
  struct WarBoardAIRoute___c_StaticFields *v249; // x0
  int32_t v250; // w2
  const MethodInfo *v251; // x3
  __int64 v252; // x1
  int32_t v253; // w2
  const MethodInfo *v254; // x3
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v255; // x20
  WarBoardAIRoute_RouteData_o *v256; // x0
  struct WarBoardSquareData_o *v257; // x1
  __int64 v258; // x0
  __int64 v259; // x1
  int32_t v260; // w2
  const MethodInfo *v261; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v262; // x8
  WarBoardAIRoute_RouteData_o *v263; // x0
  struct WarBoardPieceData_o *v264; // x1
  __int64 v265; // x1
  int32_t v266; // w2
  const MethodInfo *v267; // x3
  WarBoardAIRoute_RouteData_o *v268; // x0
  const MethodInfo *v269; // x1
  WarBoardAIRoute_RouteData_o *v270; // x22
  int32_t v271; // w23
  WarBoardSquareData_o *v272; // x0
  int32_t v273; // w2
  const MethodInfo *v274; // x3
  __int64 v275; // x1
  System_Collections_Generic_Dictionary_uint__int__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v277; // x19
  __int64 v278; // x1
  const MethodInfo *v279; // x4
  System_Collections_Generic_Dictionary_uint__int__o *v280; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v282; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v283; // x8
  WarBoardAIRoute_RouteData_o *v284; // x22
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *MoveByTargetDistance; // x0
  __int64 v286; // x1
  int32_t v287; // w2
  const MethodInfo *v288; // x3
  WarBoardAIRoute_o *v289; // x0
  WarBoardPieceData_o *v290; // x1
  const MethodInfo *v291; // x4
  WarBoardAIRoute_RouteData_o *v292; // x20
  WarBoardPieceData_o *ActionPiece; // x0
  int32_t v294; // w2
  const MethodInfo *v295; // x3
  CGThumbnailListItem_o *p_actionPiece; // x0
  __int64 v297; // x1
  int32_t v298; // w2
  const MethodInfo *v299; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v300; // x8
  struct WarBoardPieceData_o *v301; // x9
  struct WarBoardPieceData_o *v302; // x10
  struct WarBoardPieceData_o *v303; // x8
  int32_t limitActionCount_k__BackingField; // w19
  int32_t currentActionCount_k__BackingField; // w20
  System_Math_c *v306; // x0
  WarBoardAIRoute_RouteData_o *v307; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v308; // x9
  int v309; // w11
  struct WarBoardSquareData_o *baseSquare_5__11; // x10
  WarBoardData_o *v311; // x0
  const MethodInfo *v312; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v313; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v314; // x9
  WarBoardPieceData_o *v315; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v316; // x8
  WarBoardPieceData_o *v317; // x0
  WarBoardPieceData_o *v318; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v319; // x8
  WarBoardPieceData_o *v320; // x22
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v321; // x8
  WarBoardPieceData_o *v322; // x0
  WarBoardPieceData_o *v323; // x0
  WarBoardAIRoute_RouteData_o *v324; // x8
  struct WarBoardPieceData_o *v325; // x9
  WarBoardPieceData_o *v326; // x0
  WarBoardAIRoute_RouteData_o *v327; // x19
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v328; // x8
  struct WarBoardPieceData_o *v329; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  int64_t flagNow; // x22
  __int64 ClassId; // x0
  __int64 v333; // x1
  struct WarBoardPieceData_o *v334; // x8
  int32_t v335; // w20
  BattleServantData_o *v336; // x0
  WarBoardAIRoute_o *v337; // x0
  const MethodInfo *v338; // x3
  int64_t FlagAdvantage; // x0
  __int64 v340; // x1
  const MethodInfo *v341; // x5
  struct WarBoardPieceData_o *v342; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v343; // x8
  WarBoardPieceData_o *v344; // x22
  WarBoardAIRoute_RouteData_o *v345; // x2
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v346; // x9
  WarBoardPieceData_o *v347; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v348; // x9
  System_Collections_Generic_List_object__o *v349; // x0
  int32_t requiredCost_5__3; // w23
  WarBoardPieceData_o *v351; // x20
  WarBoardPieceData_o *v352; // x22
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v353; // x4
  const MethodInfo *v354; // x6
  const MethodInfo *v355; // x2
  int32_t MasterSquareIndexFromPlaceData; // w22
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v357; // x23
  System_Func_object__bool__o *v358; // x24
  DefenseAreaData_o *v359; // x0
  __int64 v360; // x1
  const MethodInfo *v361; // x3
  struct WarBoardAIRoute_AdvantagePieceData_o *v362; // x23
  System_Func_object__bool__o *v363; // x24
  struct DefenseAreaData_o *v364; // x23
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v365; // x9
  WarBoardPieceData_o *v366; // x0
  System_Int32_array *v367; // x2
  const MethodInfo *v368; // x4
  struct WarBoardAIRoute_AIRouteMasterData_o *v369; // x8
  _BOOL8 v370; // x0
  __int64 v371; // x1
  WarBoardAIRoute_RouteData_o *v372; // x21
  int64_t v373; // x8
  System_Collections_Generic_List_object__o *v374; // x23
  __int64 v375; // x0
  __int64 v376; // x1
  int32_t v377; // w2
  const MethodInfo *v378; // x3
  __int64 v379; // x0
  __int64 v380; // x1
  WarBoardAIRoute_RouteData_o *v381; // x21
  System_Collections_Generic_Dictionary_uint__int__o *v382; // x23
  int32_t v383; // w2
  const MethodInfo *v384; // x3
  __int64 v385; // x1
  System_Collections_Generic_Dictionary_int__uint__o *v386; // x0
  _BOOL8 v387; // x0
  __int64 v388; // x1
  const MethodInfo *v389; // x5
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v390; // x8
  struct WarBoardPieceData_o *v391; // x8
  uint32_t key_high; // w21
  int32_t v393; // w24
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x23
  int32_t v395; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v396; // x0
  __int64 v397; // x0
  __int64 v398; // x1
  CGThumbnailListItem_o *v399; // x21
  System_Collections_Generic_List_int__o *v400; // x23
  __int64 v401; // x0
  __int64 v402; // x1
  int32_t v403; // w2
  const MethodInfo *v404; // x3
  WarBoardAIRoute_RouteData_o *v405; // x21
  System_Collections_Generic_Dictionary_int__bool__o *v406; // x23
  __int64 v407; // x0
  __int64 v408; // x1
  int32_t v409; // w2
  const MethodInfo *v410; // x3
  WarBoardAIRoute_RouteData_o *v411; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v412; // x23
  __int64 v413; // x0
  __int64 v414; // x1
  int32_t v415; // w2
  const MethodInfo *v416; // x3
  __int64 v417; // x0
  __int64 v418; // x1
  WarBoardAIRoute_RouteData_o *v419; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v420; // x8
  WarBoardPieceData_o *v421; // x0
  _BOOL8 IsBlockShortestRouteEnemyAndMaster; // x0
  __int64 v423; // x1
  const MethodInfo *v424; // x2
  const MethodInfo *v425; // x3
  const MethodInfo *v426; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v427; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v428; // x9
  struct WarBoardPieceData_o *v429; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v430; // x10
  DefenseAreaData_o *v431; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v432; // x9
  struct WarBoardPieceData_o *v433; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v434; // x11
  int32_t v435; // w10
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v436; // x9
  struct WarBoardPieceData_o *v437; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v438; // x10
  int32_t v439; // w21
  WarBoardAIRoute_RouteData_o *v440; // x9
  int v441; // w10
  System_Collections_Generic_IEnumerable_TSource__o *v442; // x0
  __int64 v443; // x0
  int tmpFlagNow_5__12; // w10
  bool v445; // zf
  System_Collections_Generic_Dictionary_int__int__o *v446; // x0
  const MethodInfo *v447; // x5
  int32_t v448; // w21
  int v449; // w29
  int32_t v450; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v451; // x0
  __int64 v452; // x0
  __int64 v453; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x8
  int v455; // w9
  int32_t v456; // w2
  __int64 v457; // x0
  __int64 v458; // x1
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  __int64 v460; // x0
  __int64 v461; // x1
  struct System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v464; // x9
  __int64 size; // x10
  const MethodInfo *v466; // x5
  int32_t v467; // w21
  int32_t enemyMasterSquareIndex; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v469; // x0
  __int64 v470; // x0
  __int64 v471; // x1
  const MethodInfo *v472; // x3
  WarBoardAIRoute_RouteData_o *v473; // x19
  int32_t servantAndMasterRange_5__13; // w8
  bool v475; // zf
  int32_t v476; // w8
  WarBoardAIManager_c *v477; // x0
  WarBoardAIRoute_o *v478; // x0
  const MethodInfo *v479; // x4
  struct WarBoardAIRoute_AIRouteMasterData_o *v480; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v481; // x8
  WarBoardPieceData_o *v482; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v483; // x9
  struct WarBoardPieceData_o *v484; // x9
  WarBoardAIManager_c *v485; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v488; // x1
  const MethodInfo *v489; // x5
  int32_t currentKey; // w21
  int32_t v491; // w22
  System_Int32_array *v492; // x0
  __int64 v493; // x1
  struct WarBoardStageNpcEntity_o *v494; // x8
  __int64 v495; // x1
  const MethodInfo *v496; // x3
  WarBoardAIRoute_RouteData_o *v497; // x19
  WarBoardAIManager_c *v498; // x0
  struct DefenseAreaData_o *v499; // x8
  __int64 v500; // x0
  __int64 v501; // x1
  WarBoardAIManager_c *v502; // x0
  System_Collections_Generic_Dictionary_int__object__o *v503; // x0
  const MethodInfo *v504; // x5
  bool v505; // w21
  int32_t v506; // w22
  int32_t v507; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v508; // x22
  const MethodInfo *v509; // x2
  WarBoardAIRoute_RouteData_o *v510; // x19
  WarBoardData_o *v511; // x0
  WarBoardEffectData_o *Effect; // x0
  __int64 v513; // x1
  System_Collections_Generic_List_int__o *v514; // x22
  __int64 v515; // x1
  System_Collections_Generic_List_object__o *v516; // x0
  _BOOL8 v517; // x0
  __int64 v518; // x1
  Il2CppObject *v519; // x21
  Il2CppClass *v520; // x0
  _BOOL8 v521; // x0
  __int64 monitor_high; // x1
  struct System_Int32_array *v523; // x8
  _QWORD *v524; // x9
  __int64 v525; // x10
  WarBoardPieceData_o *v526; // x0
  __int64 v527; // x1
  WarBoardPieceData_o *v528; // x0
  _BOOL8 v529; // x0
  __int64 v530; // x1
  __int64 monitor_low; // x1
  struct System_Int32_array *v532; // x8
  _QWORD *v533; // x9
  __int64 v534; // x10
  __int64 v535; // x0
  __int64 v536; // x1
  WarBoardPieceData_o *v537; // x0
  _BOOL8 v538; // x0
  __int64 v539; // x1
  const MethodInfo *v540; // x3
  _BOOL8 CanAcquireItem; // x0
  __int64 v542; // x1
  const MethodInfo *v543; // x4
  WarBoardAIRoute_RouteData_o *v544; // x8
  int64_t v545; // x9
  WarBoardPieceData_o *v546; // x0
  __int64 v547; // x1
  const MethodInfo *v548; // x3
  __int64 v549; // x1
  WarBoardAIRoute_RouteData_o *v550; // x8
  WarBoardPieceData_o *v551; // x0
  __int64 v552; // x1
  const MethodInfo *v553; // x3
  __int64 v554; // x1
  __int64 v555; // x0
  __int64 v556; // x1
  __int64 FlagOutOfWarningAreaToDistance; // x0
  __int64 v558; // x1
  WarBoardAIRoute_RouteData_o *v559; // x8
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x9
  struct WarBoardPieceData_o *v561; // x8
  System_Collections_Generic_Dictionary_int__object__o *piecePersonalityDic; // x0
  Il2CppObject *v563; // x22
  WarBoardAIEvalCalcurater_o *v564; // x21
  __int64 v565; // x0
  __int64 v566; // x1
  const MethodInfo *v567; // x1
  WarBoardAIRoute___c_c *v568; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v569; // x22
  System_Func_object__object__o *_9__47_5; // x23
  Il2CppObject *v571; // x24
  struct WarBoardAIRoute___c_StaticFields *v572; // x0
  int32_t v573; // w2
  const MethodInfo *v574; // x3
  System_Collections_Generic_IEnumerable_T__o *v575; // x23
  System_Collections_Generic_List_object__o *v576; // x22
  __int64 v577; // x0
  __int64 v578; // x1
  int32_t v579; // w2
  const MethodInfo *v580; // x3
  Il2CppObject *v581; // x1
  struct System_Object_array *v582; // x8
  _QWORD *v583; // x9
  __int64 v584; // x10
  Il2CppClass **v585; // x0
  WarBoardAIRoute_RouteData_o *v586; // x0
  __int64 v587; // x1
  int32_t v588; // w2
  const MethodInfo *v589; // x3
  const MethodInfo *v590; // x1
  System_Collections_Generic_List_object__o *allRouteList; // x0
  struct System_Object_array *v592; // x8
  _QWORD *v593; // x9
  __int64 v594; // x10
  Il2CppClass **v595; // x8
  const MethodInfo *v596; // x4
  int32_t searchCount; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x21
  Il2CppObject *v599; // x0
  CGThumbnailListItem_o *p_basePieceBasePieceRouteList_5__23; // x8
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v601; // x10
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *basePieceBasePieceRouteList_5__23; // t1
  WarBoardAIRoute__CreateRouteData_d__47_o *v603; // x0
  int32_t v604; // w2
  const MethodInfo *v605; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v606; // x0
  int32_t v607; // w2
  const MethodInfo *v608; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v609; // x0
  int32_t v610; // w2
  const MethodInfo *v611; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v612; // x0
  int32_t v613; // w2
  const MethodInfo *v614; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v615; // x0
  int32_t v616; // w2
  const MethodInfo *v617; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v618; // x0
  int32_t v619; // w2
  const MethodInfo *v620; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v621; // x0
  int32_t v622; // w2
  const MethodInfo *v623; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v624; // x0
  int32_t v625; // w2
  const MethodInfo *v626; // x3
  Il2CppObject *v627; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v628; // x0
  int32_t v629; // w2
  const MethodInfo *v630; // x3
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // [xsp+10h] [xbp-1B0h]
  WarBoardAIRoute_o *_4__this; // [xsp+18h] [xbp-1A8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v633; // [xsp+20h] [xbp-1A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v634; // [xsp+50h] [xbp-170h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o **v635; // [xsp+78h] [xbp-148h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v636; // [xsp+80h] [xbp-140h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v637; // [xsp+B0h] [xbp-110h] BYREF
  __int128 v638; // [xsp+D0h] [xbp-F0h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v639; // [xsp+E0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v640; // [xsp+F0h] [xbp-D0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+118h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+120h] [xbp-A0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+128h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v644; // [xsp+130h] [xbp-90h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+148h] [xbp-78h] BYREF
  int32_t actionCount[2]; // [xsp+150h] [xbp-70h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v647; // [xsp+158h] [xbp-68h] BYREF

  v4 = this;
  v647 = this;
  if ( (byte_4C5473F & 1) == 0 )
  {
    sub_1C3E564(&AStarSearch_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C3E564(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C3E564(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
    sub_1C3E564(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___78164600);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C3E564(&WarBoardAIRoute_RouteData_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__);
    sub_1C3E564(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__);
    sub_1C3E564(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__);
    sub_1C3E564(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__);
    sub_1C3E564(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__);
    sub_1C3E564(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
    sub_1C3E564(&WarBoardAIRoute___c_TypeInfo);
    sub_1C3E564(&WarBoardAIEvalCalcurater_TypeInfo);
    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)sub_1C3E564(&WarBoardAIManager_TypeInfo);
    byte_4C5473F = 1;
  }
  *(_QWORD *)masterReplaceCount = 0;
  *(_QWORD *)actionCount = 0;
  memset(&v644, 0, sizeof(v644));
  value = 0;
  routeData = 0;
  route = 0;
  memset(&v637, 0, sizeof(v637));
  memset(&v640, 0, 32);
  v638 = 0u;
  v639 = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v636, 0, sizeof(v636));
  *(_QWORD *)&v634.fields._getEnumeratorRetType = 0;
  v635 = &v647;
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
      p__7__wrap24 = &v647->fields.__7__wrap24;
      *(_QWORD *)&v647->fields.__7__wrap24 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)p__7__wrap24, 0, v214, v215);
      return 0;
    }
LABEL_117:
    v202 = *(__int64 **)&v4->fields.__7__wrap24;
    if ( !v202 )
      sub_1C3E7C0(this, method);
    v203 = *v202;
    v204 = *(unsigned __int16 *)(*v202 + 302);
    if ( *(_WORD *)(*v202 + 302) )
    {
      v205 = (int *)(*(_QWORD *)(v203 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v205 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v204;
        v205 += 4;
        if ( !v204 )
          goto LABEL_122;
      }
      v206 = v203 + 16LL * *v205 + 312;
    }
    else
    {
LABEL_122:
      v206 = sub_1C8ED7C(*(_QWORD *)&v4->fields.__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v207 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v206)(v202, *(_QWORD *)(v206 + 8));
    v4 = v647;
    if ( (v207 & 1) != 0 )
    {
      v208 = *(__int64 **)&v647->fields.__7__wrap24;
      if ( !v208 )
        sub_1C3E7C0(v207, method);
      v209 = *v208;
      v210 = *(unsigned __int16 *)(*v208 + 302);
      if ( *(_WORD *)(*v208 + 302) )
      {
        v211 = (int *)(*(_QWORD *)(v209 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v211 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          --v210;
          v211 += 4;
          if ( !v210 )
            goto LABEL_130;
        }
        v212 = v209 + 16LL * *v211 + 312;
      }
      else
      {
LABEL_130:
        v212 = sub_1C8ED7C(
                 *(_QWORD *)&v647->fields.__7__wrap24,
                 System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo,
                 0);
      }
      v216 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v212)(v208, *(_QWORD *)(v212 + 8));
      v217 = (CGThumbnailListItem_o *)v647;
      v647->fields.__2__current = v216;
      v217 = (CGThumbnailListItem_o *)((char *)v217 + 24);
      ++v217[1].fields.sortIndex;
      sub_1C3E508(v217, (int32_t)v216, v218, v219);
      result = 1;
      v647->fields.__1__state = 2;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      sub_1C3E7C0(0, v8);
    monitor = (struct WarBoardData_o *)Instance[27].monitor;
    v12 = v647;
    v647->fields._warBoardData_5__2 = monitor;
    sub_1C3E508((CGThumbnailListItem_o *)&v12->fields._warBoardData_5__2, (int32_t)monitor, v9, v10);
    if ( !_4__this )
      sub_1C3E7C0(v13, v14);
    npcData = _4__this->fields.npcData;
    if ( !npcData )
      sub_1C3E7C0(v13, v14);
    searchDepth = npcData->fields.searchDepth;
    if ( !searchDepth )
    {
      searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
      npcData->fields.searchDepth = searchDepth;
    }
    v18 = v647;
    v19 = v647->fields.searchCount + 1;
    v647->fields.searchCount = v19;
    if ( v19 > searchDepth )
      return 0;
    *(_QWORD *)masterReplaceCount = 0;
    *(_QWORD *)actionCount = 0;
    WarBoardAIRoute__GetRouteDataActionList(
      v13,
      v18->fields.routeDataList,
      &actionCount[1],
      actionCount,
      &masterReplaceCount[1],
      masterReplaceCount,
      v15);
    v20 = masterReplaceCount[1] * _4__this->fields.masterMoveCost
        + (actionCount[0] + 2 * actionCount[1]) * _4__this->fields.moveCost
        + masterReplaceCount[0] * (_4__this->fields.masterMoveCost + _4__this->fields.moveCost);
    v647->fields._requiredCost_5__3 = v20;
    v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v21 )
      sub_1C3E7C0(0, v22);
    if ( v20 >= SHIDWORD(v21[47].klass) )
      return 0;
    MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v647->fields.piecePlaceData, v23);
    v25 = v647->fields.piecePlaceData;
    v647->fields._masterSquareIndex_5__4 = MasterSquareIndex;
    AllyPutSquareIndicesWithoutMaster = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                          _4__this,
                                          v25,
                                          MasterSquareIndex,
                                          v26);
    v28 = v647;
    v647->fields._allyPieceIndexs_5__5 = AllyPutSquareIndicesWithoutMaster;
    sub_1C3E508(
      (CGThumbnailListItem_o *)&v28->fields._allyPieceIndexs_5__5,
      (int32_t)AllyPutSquareIndicesWithoutMaster,
      v29,
      v30);
    v31 = (CGThumbnailListItem_o *)v647;
    v647->fields._defenseAreaData_5__7 = 0;
    v31 = (CGThumbnailListItem_o *)((char *)v31 + 104);
    v31[-1].fields._ThumbnailSpritePath_k__BackingField = (struct System_String_o *)(&dword_0 + 1);
    sub_1C3E508(v31, 0, v32, v33);
    warBoardData_5__2 = v647->fields._warBoardData_5__2;
    if ( !warBoardData_5__2 )
      sub_1C3E7C0(v34, v35);
    masterExistsForce = warBoardData_5__2->fields.masterExistsForce;
    if ( !masterExistsForce )
      sub_1C3E7C0(0, v35);
    v38 = System_Collections_Generic_List_int___Contains(
            masterExistsForce,
            _4__this->fields.forceId,
            (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
    v41 = v647;
    if ( v38 )
    {
      if ( v647 )
      {
        v647->fields._masterExists_5__8 = 1;
LABEL_25:
        DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                            _4__this,
                            v41->fields._masterSquareIndex_5__4,
                            v41->fields._allyPieceIndexs_5__5,
                            v41->fields.piecePlaceData,
                            v40);
        v47 = v647;
        v647->fields._defenseAreaData_5__7 = DefenseAreaData;
        sub_1C3E508((CGThumbnailListItem_o *)&v47->fields._defenseAreaData_5__7, (int32_t)DefenseAreaData, v48, v49);
        v53 = v647;
        defenseAreaData_5__7 = v647->fields._defenseAreaData_5__7;
        if ( !defenseAreaData_5__7 )
          sub_1C3E7C0(v50, v51);
        v647->fields._baseFlag_5__6 |= defenseAreaData_5__7->fields._Flag_k__BackingField;
        aiRouteMasterData = _4__this->fields.aiRouteMasterData;
        if ( !aiRouteMasterData )
          sub_1C3E7C0(v50, v51);
        IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                                 defenseAreaData_5__7->fields._ShortestRoutes_k__BackingField,
                                                 v53->fields.piecePlaceData,
                                                 aiRouteMasterData->fields.masterType == 1,
                                                 v52);
        v41 = v647;
        if ( IsAllBlockShortestRouteEnemyAndMastr )
          v647->fields._baseFlag_5__6 |= 0x20000000uLL;
LABEL_29:
        v57 = v41->fields.piecePlaceData;
        if ( !v57 )
          sub_1C3E7C0(0, v39);
        System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
          &v634,
          v57,
          (const MethodInfo_3430F68 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
        v58 = v647;
        v59 = *(_OWORD *)&v634.fields._dictionary;
        p__7__wrap8 = (CGThumbnailListItem_o *)&v647->fields.__7__wrap8;
        *(_OWORD *)&v633.fields._dictionary = *(_OWORD *)&v634.fields._dictionary;
        v633.fields._current = v634.fields._current;
        v647->fields.__7__wrap8.fields._current = v634.fields._current;
        *(_OWORD *)&v58->fields.__7__wrap8.fields._dictionary = v59;
        sub_1C3E508(p__7__wrap8, 0, v61, v62);
        v647->fields.__1__state = -3;
        while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                  &v647->fields.__7__wrap8,
                  (const MethodInfo_3566084 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
        {
          key = v647->fields.__7__wrap8.fields._current.fields.key;
          v65 = (Il2CppObject *)sub_1C3E7B0(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
          System_Object___ctor(v65, 0);
          v66 = v647;
          v647->fields.__8__1 = (struct WarBoardAIRoute___c__DisplayClass47_0_o *)v65;
          sub_1C3E508((CGThumbnailListItem_o *)&v66->fields.__8__1, (int32_t)v65, v67, v68);
          v647->fields.__7__wrap8.fields._getEnumeratorRetType = (int)key;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          Square = WarBoardAIManager__GetSquare((int32_t)key, v69);
          v71 = v647;
          *(_QWORD *)&v647->fields._baseSquareIndex_5__10 = Square;
          sub_1C3E508((CGThumbnailListItem_o *)&v71->fields._baseSquareIndex_5__10, (int32_t)Square, v72, v73);
          _8__1 = v647->fields.__8__1;
          PieceUnique = WarBoardAIManager__GetPieceUnique(HIDWORD(key), v75);
          if ( !_8__1 )
            sub_1C3E7C0(PieceUnique, PieceUnique);
          _8__1->fields.basePiece = PieceUnique;
          sub_1C3E508((CGThumbnailListItem_o *)&_8__1->fields, (int32_t)PieceUnique, v77, v78);
          v82 = v647;
          baseFlag_5__6 = v647->fields._baseFlag_5__6;
          v84 = v647->fields.__8__1;
          v647->fields._tmpFlagNow_5__12 = -1;
          v82->fields._servantAndMasterRange_5__13 = -1;
          v82->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
          if ( !v84 )
            sub_1C3E7C0(v79, v80);
          if ( !_4__this )
            sub_1C3E7C0(0, v80);
          v85 = WarBoardAIRoute__GetFlagAroundSquareCheck(
                  _4__this,
                  *(WarBoardSquareData_o **)&v82->fields._baseSquareIndex_5__10,
                  v84->fields.basePiece,
                  v82->fields.piecePlaceData,
                  v82->fields._masterSquareIndex_5__4,
                  v81);
          v86 = v647;
          v647->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)(v85 | baseFlag_5__6);
          routeDataList = (System_Collections_Generic_IEnumerable_TSource__o *)v86->fields.routeDataList;
          v88 = (Il2CppObject *)v86->fields.__8__1;
          v89 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v89,
            v88,
            Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
            0);
          v91 = System_Linq_Enumerable__Count_object__51492776(
                  routeDataList,
                  (System_Func_TSource__bool__o *)v89,
                  (const MethodInfo_311B7A8 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
          v92 = (System_Collections_Generic_List_object__o *)v647->fields.routeDataList;
          v647->fields._servantAndEnemyRange_5__14 = v91;
          if ( !v92 )
            sub_1C3E7C0(0, v90);
          Only = (WarBoardAIRoute_o *)System_Collections_Generic_List_object___AsReadOnly(
                                        v92,
                                        (const MethodInfo_37B5688 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
          v96 = v647->fields.__8__1;
          if ( !v96 )
            sub_1C3E7C0(Only, v94);
          RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                      Only,
                                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                      v96->fields.basePiece,
                                      v95);
          v100 = v647;
          v101 = v647->fields.__8__1;
          v647->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
          if ( !v101 )
            sub_1C3E7C0(RouteSumPieceActionCost, v98);
          IsActable = WarBoardAIRoute__IsActable(
                        _4__this,
                        v101->fields.basePiece,
                        v100->fields._servantAndEnemyRange_5__14,
                        v100->fields._requiredCost_5__3,
                        RouteSumPieceActionCost,
                        v99);
          if ( IsActable )
          {
            v105 = v647->fields.__8__1;
            if ( !v105 )
              sub_1C3E7C0(IsActable, v103);
            DesignationItemToDistance = WarBoardAIRoute__GetDesignationItemToDistance(
                                          _4__this,
                                          v105->fields.basePiece,
                                          v647->fields.routeDataList,
                                          v647->fields.__7__wrap8.fields._getEnumeratorRetType,
                                          v104);
            v107 = v647;
            *(_QWORD *)&v647->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
            sub_1C3E508(
              (CGThumbnailListItem_o *)&v107->fields._sumPieceActionCost_5__17,
              (int32_t)DesignationItemToDistance,
              v108,
              v109);
            v113 = v647->fields.__8__1;
            if ( !v113 )
              sub_1C3E7C0(v110, v111);
            TargetToDistance_37926616 = (struct System_Collections_Generic_Dictionary_int__int__o *)WarBoardAIRoute__GetTargetToDistance_37926616(_4__this, v113->fields.basePiece, v647->fields.routeDataList, v647->fields.__7__wrap8.fields._getEnumeratorRetType, v112);
            v115 = v647;
            v647->fields._dicBaseDIRange_5__18 = TargetToDistance_37926616;
            sub_1C3E508(
              (CGThumbnailListItem_o *)&v115->fields._dicBaseDIRange_5__18,
              (int32_t)TargetToDistance_37926616,
              v116,
              v117);
            AllEnemyToDistance = WarBoardAIRoute__GetAllEnemyToDistance(
                                   _4__this,
                                   v118,
                                   v647->fields.__7__wrap8.fields._getEnumeratorRetType,
                                   (int32_t *)&v647->fields._tmpFlagNow_5__12 + 1,
                                   &v647->fields._servantAndMasterRange_5__13,
                                   v119);
            v121 = v647;
            v647->fields._dicKeyPutIndexValueTargetData_5__19 = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)AllEnemyToDistance;
            sub_1C3E508(
              (CGThumbnailListItem_o *)&v121->fields._dicKeyPutIndexValueTargetData_5__19,
              (int32_t)AllEnemyToDistance,
              v122,
              v123);
            v124 = v647;
            v647->fields._dicEnemyRange_5__20 = 0;
            sub_1C3E508((CGThumbnailListItem_o *)&v124->fields._dicEnemyRange_5__20, 0, v125, v126);
            v129 = v647->fields.__8__1;
            if ( !v129 )
              sub_1C3E7C0(v127, v128);
            basePiece = v129->fields.basePiece;
            if ( !basePiece )
              sub_1C3E7C0(0, v128);
            isServant = WarBoardPieceData__get_isServant(basePiece, 0);
            if ( isServant )
            {
              v134 = v647->fields.__8__1;
              if ( !v134 )
                sub_1C3E7C0(isServant, v132);
              AdvantagePieceData = WarBoardAIRoute__GetAdvantagePieceData(
                                     _4__this,
                                     v134->fields.basePiece,
                                     v647->fields.__7__wrap8.fields._getEnumeratorRetType,
                                     v133);
              v136 = v647;
              v647->fields._dicEnemyRange_5__20 = (struct System_Collections_Generic_Dictionary_uint__int__o *)AdvantagePieceData;
              sub_1C3E508(
                (CGThumbnailListItem_o *)&v136->fields._dicEnemyRange_5__20,
                (int32_t)AdvantagePieceData,
                v137,
                v138);
              if ( v647->fields._masterExists_5__8 )
              {
                masterSquareIndex_5__4 = v647->fields._masterSquareIndex_5__4;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v141 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0,
                                                                              (int32_t)key,
                                                                              masterSquareIndex_5__4,
                                                                              0,
                                                                              0,
                                                                              v139);
                v142 = System_Linq_Enumerable__Count_int_(
                         v141,
                         (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
                v145 = v647;
                v146 = v647->fields.__8__1;
                LODWORD(v647->fields._tmpFlagNow_5__12) = v142;
                if ( !v146 )
                  sub_1C3E7C0(v142, v143);
                v147 = v146->fields.basePiece;
                if ( !v147 )
                  sub_1C3E7C0(v142, v143);
                v148 = _4__this->fields.aiRouteMasterData;
                if ( !v148 )
                  sub_1C3E7C0(v142, v143);
                masterType = v148->fields.masterType;
                index_k__BackingField = v147->fields._index_k__BackingField;
                if ( masterType != 2 || v148->fields.masterPieceIndex != index_k__BackingField )
                {
                  v151 = _4__this->fields.npcData;
                  if ( !v151 )
                    sub_1C3E7C0(v142, v143);
                  if ( v151->fields.defenseArea > (int)v142 )
                    v145->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v145->fields._baseSquare_5__11
                                                                                   | 0x800);
                  if ( (masterType != 2 || v148->fields.masterPieceIndex != index_k__BackingField)
                    && WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                         v145->fields._defenseAreaData_5__7,
                         v145->fields.__7__wrap8.fields._getEnumeratorRetType,
                         masterType == 1,
                         v144) )
                  {
                    v647->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v647->fields._baseSquare_5__11
                                                                                   | 0x80000000);
                  }
                }
              }
            }
            v152 = (System_Collections_Generic_HashSet_T__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_object____ctor(
              v152,
              (const MethodInfo_366C4CC *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v153 = v647;
            v647->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v152;
            sub_1C3E508((CGThumbnailListItem_o *)&v153->fields._advantagePieceData_5__21, (int32_t)v152, v154, v155);
            v156 = (System_Collections_Generic_HashSet_T__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_object____ctor(
              v156,
              (const MethodInfo_366C4CC *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v157 = v647;
            v647->fields._basePieceActionPieceRouteList_5__22 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)v156;
            sub_1C3E508(
              (CGThumbnailListItem_o *)&v157->fields._basePieceActionPieceRouteList_5__22,
              (int32_t)v156,
              v158,
              v159);
            v161 = (System_Collections_Generic_List_object__o *)v647->fields.routeDataList;
            if ( !v161 )
              sub_1C3E7C0(0, v160);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v633,
              v161,
              (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
            *(_OWORD *)&v644.fields._list = *(_OWORD *)&v633.fields._dictionary;
            v644.fields._current = v633.fields._current.fields.key;
            while ( 1 )
            {
              v162 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v644,
                       (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
              if ( !v162 )
                break;
              current = v644.fields._current;
              if ( !v644.fields._current )
                sub_1C3E7C0(v162, v163);
              if ( LODWORD(v644.fields._current[1].monitor) != HIDWORD(v644.fields._current[1].monitor) )
              {
                klass = v644.fields._current[3].klass;
                if ( !klass )
                  sub_1C3E7C0(v162, v163);
                v166 = v647->fields.__8__1;
                if ( !v166 )
                  sub_1C3E7C0(v162, v163);
                v167 = v166->fields.basePiece;
                if ( !v167 )
                  sub_1C3E7C0(v162, v163);
                if ( HIDWORD(klass->_1.namespaze) == v167->fields._index_k__BackingField )
                {
                  basePieceActionPieceRouteList_5__22 = (System_Collections_Generic_HashSet_T__o *)v647->fields._basePieceActionPieceRouteList_5__22;
                  if ( !basePieceActionPieceRouteList_5__22 )
                    sub_1C3E7C0(0, v163);
                  v162 = System_Collections_Generic_HashSet_object___Add(
                           basePieceActionPieceRouteList_5__22,
                           v644.fields._current,
                           (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                }
                if ( (BYTE3(current[1].klass) & 4) != 0 )
                {
                  v169 = current[3].monitor;
                  if ( !v169 )
                    sub_1C3E7C0(v162, v163);
                  v170 = v647->fields.__8__1;
                  if ( !v170 )
                    sub_1C3E7C0(v162, v163);
                  v171 = v170->fields.basePiece;
                  if ( !v171 )
                    sub_1C3E7C0(v162, v163);
                  if ( v169[7] == v171->fields._index_k__BackingField )
                  {
                    advantagePieceData_5__21 = v647->fields._advantagePieceData_5__21;
                    if ( !advantagePieceData_5__21 )
                      sub_1C3E7C0(0, v163);
                    System_Collections_Generic_HashSet_object___Add(
                      (System_Collections_Generic_HashSet_T__o *)advantagePieceData_5__21,
                      current,
                      (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                  }
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v644,
              (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
            v221 = *(WarBoardSquareData_o **)&v647->fields._baseSquareIndex_5__10;
            if ( !v221 )
              sub_1C3E7C0(0, v220);
            MyAndLinkedSquareIndecies = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)WarBoardSquareData__GetMyAndLinkedSquareIndecies(v221, 0);
            v223 = v647;
            v647->fields._basePieceBasePieceRouteList_5__23 = MyAndLinkedSquareIndecies;
            sub_1C3E508(
              (CGThumbnailListItem_o *)&v223->fields._basePieceBasePieceRouteList_5__23,
              (int32_t)MyAndLinkedSquareIndecies,
              v224,
              v225);
            v226 = v647;
            v227 = 0;
            LODWORD(v647->fields.__7__wrap23) = 0;
LABEL_663:
            basePieceBasePieceRouteList_5__23 = v226->fields._basePieceBasePieceRouteList_5__23;
            p_basePieceBasePieceRouteList_5__23 = (CGThumbnailListItem_o *)&v226->fields._basePieceBasePieceRouteList_5__23;
            v601 = basePieceBasePieceRouteList_5__23;
            if ( !basePieceBasePieceRouteList_5__23 )
              sub_1C3E7C0(this, method);
            if ( v227 >= SLODWORD(v601->fields._slots) )
            {
              p_basePieceBasePieceRouteList_5__23->klass = 0;
              sub_1C3E508(p_basePieceBasePieceRouteList_5__23, 0, (int32_t)v2, v3);
              v603 = v647;
              v647->fields.__8__1 = 0;
              sub_1C3E508((CGThumbnailListItem_o *)&v603->fields.__8__1, 0, v604, v605);
              v606 = v647;
              *(_QWORD *)&v647->fields._baseSquareIndex_5__10 = 0;
              sub_1C3E508((CGThumbnailListItem_o *)&v606->fields._baseSquareIndex_5__10, 0, v607, v608);
              v609 = v647;
              *(_QWORD *)&v647->fields._sumPieceActionCost_5__17 = 0;
              sub_1C3E508((CGThumbnailListItem_o *)&v609->fields._sumPieceActionCost_5__17, 0, v610, v611);
              v612 = v647;
              v647->fields._dicBaseDIRange_5__18 = 0;
              sub_1C3E508((CGThumbnailListItem_o *)&v612->fields._dicBaseDIRange_5__18, 0, v613, v614);
              v615 = v647;
              v647->fields._dicKeyPutIndexValueTargetData_5__19 = 0;
              sub_1C3E508((CGThumbnailListItem_o *)&v615->fields._dicKeyPutIndexValueTargetData_5__19, 0, v616, v617);
              v618 = v647;
              v647->fields._dicEnemyRange_5__20 = 0;
              sub_1C3E508((CGThumbnailListItem_o *)&v618->fields._dicEnemyRange_5__20, 0, v619, v620);
              v621 = v647;
              v647->fields._advantagePieceData_5__21 = 0;
              sub_1C3E508((CGThumbnailListItem_o *)&v621->fields._advantagePieceData_5__21, 0, v622, v623);
              v624 = v647;
              v647->fields._basePieceActionPieceRouteList_5__22 = 0;
              sub_1C3E508((CGThumbnailListItem_o *)&v624->fields._basePieceActionPieceRouteList_5__22, 0, v625, v626);
              continue;
            }
            v228 = sub_1C3E7B0(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
            System_Object___ctor((Il2CppObject *)v228, 0);
            v231 = v647->fields._basePieceBasePieceRouteList_5__23;
            if ( !v231 )
              sub_1C3E7C0(v229, v230);
            _7__wrap23_low = SLODWORD(v647->fields.__7__wrap23);
            if ( (unsigned int)_7__wrap23_low >= LODWORD(v231->fields._slots) )
              sub_1C3E7C8(v229, v230);
            if ( !v228 )
              sub_1C3E7C0(v229, v230);
            *(_DWORD *)(v228 + 16) = *(&v231->fields._count + _7__wrap23_low);
            v233 = (int32_t *)(v228 + 16);
            v234 = (WarBoardAIRoute_RouteData_o *)sub_1C3E7B0(WarBoardAIRoute_RouteData_TypeInfo);
            WarBoardAIRoute_RouteData___ctor(v234, v235);
            routeData = v234;
            if ( !v234 )
              sub_1C3E7C0(this, method);
            v236 = v647;
            getEnumeratorRetType = v647->fields.__7__wrap8.fields._getEnumeratorRetType;
            v234->fields.baseIndex = getEnumeratorRetType;
            v238 = *v233;
            v234->fields.actionIndex = *v233;
            if ( getEnumeratorRetType == v238 )
            {
              v239 = v236->fields.routeDataList;
              if ( !v239 )
                sub_1C3E7C0(this, method);
              if ( v239->fields._size > 0 )
                goto LABEL_662;
            }
            dicBaseDIRange_5__18 = (System_Collections_Generic_IEnumerable_TSource__o *)v236->fields._dicBaseDIRange_5__18;
            v241 = WarBoardAIRoute___c_TypeInfo;
            if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
              v241 = WarBoardAIRoute___c_TypeInfo;
            }
            _9__47_1 = (System_Func_T__TResult__o *)v241->static_fields->__9__47_1;
            if ( !_9__47_1 )
            {
              if ( !v241->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v241);
                v241 = WarBoardAIRoute___c_TypeInfo;
              }
              v243 = (Il2CppObject *)v241->static_fields->__9;
              _9__47_1 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
              System_Func_KeyValuePair_long__object___long____ctor(
                _9__47_1,
                v243,
                Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
                0);
              static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
              static_fields->__9__47_1 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)_9__47_1;
              sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__47_1, (int32_t)_9__47_1, v245, v246);
              v241 = WarBoardAIRoute___c_TypeInfo;
            }
            if ( !v241->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v241);
              v241 = WarBoardAIRoute___c_TypeInfo;
            }
            _9__47_2 = (System_Func_T__TResult__o *)v241->static_fields->__9__47_2;
            if ( !_9__47_2 )
            {
              if ( !v241->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v241);
                v241 = WarBoardAIRoute___c_TypeInfo;
              }
              v248 = (Il2CppObject *)v241->static_fields->__9;
              _9__47_2 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
              System_Func_KeyValuePair_long__object___object____ctor(
                _9__47_2,
                v248,
                Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
                0);
              v249 = WarBoardAIRoute___c_TypeInfo->static_fields;
              v249->__9__47_2 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)_9__47_2;
              sub_1C3E508((CGThumbnailListItem_o *)&v249->__9__47_2, (int32_t)_9__47_2, v250, v251);
            }
            v255 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__object___long__object_(
                                                                                                  dicBaseDIRange_5__18,
                                                                                                  (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                                  (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                                  (const MethodInfo_3139860 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
            v256 = routeData;
            if ( !routeData )
              sub_1C3E7C0(0, v252);
            v257 = *(struct WarBoardSquareData_o **)&v647->fields._baseSquareIndex_5__10;
            routeData->fields.baseSquare = v257;
            sub_1C3E508((CGThumbnailListItem_o *)&v256->fields.baseSquare, (int32_t)v257, v253, v254);
            v262 = v647->fields.__8__1;
            if ( !v262 )
              sub_1C3E7C0(v258, v259);
            v263 = routeData;
            if ( !routeData )
              sub_1C3E7C0(0, v259);
            v264 = v262->fields.basePiece;
            routeData->fields.basePiece = v264;
            sub_1C3E508((CGThumbnailListItem_o *)&v263->fields.basePiece, (int32_t)v264, v260, v261);
            v268 = routeData;
            if ( !routeData )
              sub_1C3E7C0(0, v265);
            routeData->fields.actionPiece = 0;
            sub_1C3E508((CGThumbnailListItem_o *)&v268->fields.actionPiece, 0, v266, v267);
            v270 = routeData;
            v271 = *v233;
            if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            v272 = WarBoardAIManager__GetSquare(v271, v269);
            if ( !v270 )
              sub_1C3E7C0(v272, v272);
            v270->fields.actionSquare = v272;
            sub_1C3E508((CGThumbnailListItem_o *)&v270->fields.actionSquare, (int32_t)v272, v273, v274);
            dicKeyPutIndexValueTargetData_5__19 = (System_Collections_Generic_Dictionary_uint__int__o *)v647->fields._dicKeyPutIndexValueTargetData_5__19;
            if ( !dicKeyPutIndexValueTargetData_5__19 )
              sub_1C3E7C0(0, v275);
            v277 = routeData;
            if ( System_Collections_Generic_Dictionary_uint__int___get_Count(
                   dicKeyPutIndexValueTargetData_5__19,
                   (const MethodInfo_34A4EA4 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0 )
            {
              v282 = 0x7FFFFFFF;
              if ( !v277 )
                goto LABEL_253;
            }
            else
            {
              v280 = (System_Collections_Generic_Dictionary_uint__int__o *)v647->fields._dicKeyPutIndexValueTargetData_5__19;
              if ( !v280 )
                sub_1C3E7C0(0, v278);
              Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                         v280,
                         (const MethodInfo_34A5004 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
              v282 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0);
              if ( !v277 )
LABEL_253:
                sub_1C3E7C0(v282, v278);
            }
            v277->fields.EnemyRangeMin = v282;
            v283 = v647->fields.__8__1;
            if ( !v283 )
              sub_1C3E7C0(v282, v278);
            if ( !_4__this )
              sub_1C3E7C0(v282, v278);
            v284 = routeData;
            MoveByTargetDistance = WarBoardAIRoute__GetMoveByTargetDistance(
                                     (WarBoardAIRoute_o *)v282,
                                     v255,
                                     *v233,
                                     v283->fields.basePiece,
                                     v279);
            if ( !v284 )
              sub_1C3E7C0(MoveByTargetDistance, v286);
            v284->fields.dicPutIndexTargetData = v255;
            sub_1C3E508((CGThumbnailListItem_o *)&v284->fields.dicPutIndexTargetData, (int32_t)v255, v287, v288);
            if ( !v647->fields.__8__1 )
              sub_1C3E7C0(v289, v290);
            v292 = routeData;
            ActionPiece = WarBoardAIRoute__GetActionPiece(v289, v290, *v233, v647->fields.piecePlaceData, v291);
            if ( !v292 )
              sub_1C3E7C0(ActionPiece, ActionPiece);
            v292->fields.actionPiece = ActionPiece;
            sub_1C3E508((CGThumbnailListItem_o *)&v292->fields.actionPiece, (int32_t)ActionPiece, v294, v295);
            v300 = v647->fields.__8__1;
            if ( !v300 )
              sub_1C3E7C0(p_actionPiece, v297);
            v301 = v300->fields.basePiece;
            if ( !v301 )
              sub_1C3E7C0(p_actionPiece, v297);
            if ( v301->fields._nowSquareIndex_k__BackingField == *v233 )
            {
              if ( !routeData )
                sub_1C3E7C0(0, v297);
              p_actionPiece = (CGThumbnailListItem_o *)&routeData->fields.actionPiece;
              v302 = routeData->fields.actionPiece;
              if ( v302 )
              {
                if ( v302->fields._uniqueIndex_k__BackingField == v301->fields._uniqueIndex_k__BackingField )
                {
                  p_actionPiece->klass = 0;
                  sub_1C3E508(p_actionPiece, 0, v298, v299);
                  v300 = v647->fields.__8__1;
                  if ( !v300 )
                    sub_1C3E7C0(p_actionPiece, v297);
                }
              }
            }
            v303 = v300->fields.basePiece;
            if ( !v303 )
              sub_1C3E7C0(p_actionPiece, v297);
            limitActionCount_k__BackingField = v303->fields._limitActionCount_k__BackingField;
            currentActionCount_k__BackingField = v303->fields._currentActionCount_k__BackingField;
            if ( !byte_4C51698 )
            {
              sub_1C3E564(&System_Math_TypeInfo);
              byte_4C51698 = 1;
            }
            v306 = System_Math_TypeInfo;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v307 = routeData;
            if ( !routeData )
              sub_1C3E7C0(v306, v297);
            v308 = v647;
            v309 = limitActionCount_k__BackingField - currentActionCount_k__BackingField;
            if ( limitActionCount_k__BackingField - currentActionCount_k__BackingField < 0 )
              v309 = currentActionCount_k__BackingField - limitActionCount_k__BackingField;
            routeData->fields.actionCountOnThisTurn = v309 + v647->fields._servantAndEnemyRange_5__14 + 1;
            baseSquare_5__11 = v308->fields._baseSquare_5__11;
            *(_QWORD *)&v307->fields.attackByLinkedEnemy = 0;
            v307->fields.flagNow = (int64_t)baseSquare_5__11;
            v311 = v308->fields._warBoardData_5__2;
            if ( !v311 )
              sub_1C3E7C0(0, v297);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardData__GetWall(v311, *v233, 0, v299);
            v313 = this;
            if ( this )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_1C3E7C0(0, method);
              if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.wallAttackCost
                                                              + v647->fields._requiredCost_5__3 )
                goto LABEL_662;
              v314 = v647->fields.__8__1;
              if ( !v314 )
                sub_1C3E7C0(this, method);
              v315 = v314->fields.basePiece;
              if ( !v315 )
                sub_1C3E7C0(0, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableWallAttack(
                                                                   v315,
                                                                   v647->fields._servantAndEnemyMasterRange_5__15,
                                                                   0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v316 = v647->fields.__8__1;
              if ( !v316 )
                sub_1C3E7C0(this, method);
              v317 = v316->fields.basePiece;
              if ( !v317 )
                sub_1C3E7C0(0, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__CheckWallAttackCond(
                                                                   v317,
                                                                   (WarBoardWallData_o *)v313,
                                                                   0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
            }
            if ( !routeData )
              sub_1C3E7C0(this, method);
            v318 = routeData->fields.actionPiece;
            if ( v318 )
            {
              v319 = v647->fields.__8__1;
              if ( !v319 )
                sub_1C3E7C0(this, method);
              v320 = v319->fields.basePiece;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsEnemyPiece(v320, v318, v2);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v321 = v647->fields.__8__1;
                if ( !v321 )
                  sub_1C3E7C0(this, method);
                v322 = v321->fields.basePiece;
                if ( !v322 )
                  sub_1C3E7C0(0, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v322, 0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_239;
                if ( !routeData )
                  sub_1C3E7C0(this, method);
                v323 = routeData->fields.actionPiece;
                if ( !v323 )
                  sub_1C3E7C0(0, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v323, 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
LABEL_239:
                  v324 = routeData;
                  if ( !routeData )
                    sub_1C3E7C0(this, method);
                  v325 = routeData->fields.basePiece;
                  routeData->fields.flagNow |= 2uLL;
                  if ( !v325 )
                    sub_1C3E7C0(this, method);
                  v326 = v324->fields.actionPiece;
                  v324->fields.attackCountOnThisTurn = v325->fields._attackCount_k__BackingField + 1;
                  if ( !v326 )
                    sub_1C3E7C0(0, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isServant(v326, 0);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    v327 = routeData;
                    if ( !routeData )
                      sub_1C3E7C0(this, method);
                    v328 = v647->fields.__8__1;
                    if ( !v328 )
                      sub_1C3E7C0(this, method);
                    v329 = v328->fields.basePiece;
                    if ( !v329 )
                      sub_1C3E7C0(this, method);
                    battleServant_k__BackingField = v329->fields._battleServant_k__BackingField;
                    if ( !battleServant_k__BackingField )
                      sub_1C3E7C0(0, method);
                    flagNow = routeData->fields.flagNow;
                    ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0, 0);
                    if ( !routeData )
                      sub_1C3E7C0(ClassId, v333);
                    v334 = routeData->fields.actionPiece;
                    if ( !v334 )
                      sub_1C3E7C0(ClassId, v333);
                    v335 = ClassId;
                    v336 = v334->fields._battleServant_k__BackingField;
                    if ( !v336 )
                      sub_1C3E7C0(0, v333);
                    v337 = (WarBoardAIRoute_o *)BattleServantData__getClassId(v336, 0, 0);
                    FlagAdvantage = WarBoardAIRoute__GetFlagAdvantage(v337, v335, (int32_t)v337, v338);
                    v327->fields.flagNow = FlagAdvantage | flagNow;
                    if ( !routeData )
                      sub_1C3E7C0(FlagAdvantage, v340);
                    WarBoardAIRoute__LinkedCount(
                      (WarBoardAIRoute_o *)FlagAdvantage,
                      *v233,
                      v647->fields.piecePlaceData,
                      &routeData->fields.attackByLinkedEnemy,
                      &routeData->fields.attackByLinkedAlly,
                      v341);
                  }
                  goto LABEL_263;
                }
LABEL_662:
                v226 = v647;
                v227 = LODWORD(v647->fields.__7__wrap23) + 1;
                LODWORD(v647->fields.__7__wrap23) = v227;
                goto LABEL_663;
              }
              if ( !routeData )
                sub_1C3E7C0(this, method);
              v342 = routeData->fields.actionPiece;
              if ( !v342 )
                sub_1C3E7C0(this, method);
              if ( v342->fields._roleType_k__BackingField == 1 )
                goto LABEL_662;
              v343 = v647->fields.__8__1;
              if ( !v343 )
                sub_1C3E7C0(this, method);
              v344 = v343->fields.basePiece;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsAllyPiece(v344, v342, v2);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !routeData )
                  sub_1C3E7C0(this, method);
                routeData->fields.flagNow |= 0x4000000uLL;
              }
            }
LABEL_263:
            v345 = routeData;
            if ( !routeData )
              sub_1C3E7C0(this, method);
            if ( (routeData->fields.flagNow & 2) != 0 )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_1C3E7C0(0, method);
              if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.attackCost
                                                              + v647->fields._requiredCost_5__3 )
                goto LABEL_662;
              v365 = v647->fields.__8__1;
              if ( !v365 )
                sub_1C3E7C0(this, method);
              v366 = v365->fields.basePiece;
              if ( !v366 )
                sub_1C3E7C0(0, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableAttack(
                                                                   v366,
                                                                   v647->fields._servantAndEnemyMasterRange_5__15,
                                                                   0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v345 = routeData;
              if ( !routeData )
                sub_1C3E7C0(this, method);
            }
            if ( (v345->fields.flagNow & 2) == 0 )
            {
              v346 = v647->fields.__8__1;
              if ( !v346 )
                sub_1C3E7C0(this, method);
              v347 = v346->fields.basePiece;
              if ( !v347 )
                sub_1C3E7C0(0, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableMoveBySelf(
                                                                   v347,
                                                                   v647->fields._servantAndEnemyMasterRange_5__15,
                                                                   0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v345 = routeData;
              if ( !routeData )
                sub_1C3E7C0(this, method);
            }
            if ( (v345->fields.flagNow & 0x4000000) != 0 )
            {
              v348 = v647->fields.__8__1;
              if ( !v348 )
                sub_1C3E7C0(this, method);
              v349 = (System_Collections_Generic_List_object__o *)v647->fields.routeDataList;
              if ( !v349 )
                sub_1C3E7C0(0, method);
              requiredCost_5__3 = v647->fields._requiredCost_5__3;
              v351 = v348->fields.basePiece;
              v352 = v345->fields.actionPiece;
              v353 = System_Collections_Generic_List_object___AsReadOnly(
                       v349,
                       (const MethodInfo_37B5688 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIRoute__IsActableReplace(
                                                                   _4__this,
                                                                   v351,
                                                                   v352,
                                                                   requiredCost_5__3,
                                                                   (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v353,
                                                                   v647->fields._servantAndEnemyMasterRange_5__15,
                                                                   v354);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_662;
              v345 = routeData;
            }
            piecePlaceData = WarBoardAIRoute__UpdatePiecePlaceData(
                               (WarBoardAIRoute_o *)this,
                               v647->fields.piecePlaceData,
                               v345,
                               v647->fields.__7__wrap8.fields._getEnumeratorRetType,
                               *v233,
                               v312);
            MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
                                               _4__this,
                                               piecePlaceData,
                                               v355);
            v357 = v647->fields._basePieceActionPieceRouteList_5__22;
            v358 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v358,
              (Il2CppObject *)v228,
              Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
              0);
            v359 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__51410108(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v357,
                                          (System_Func_TSource__bool__o *)v358,
                                          (const MethodInfo_31074BC *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)v359 & 1) != 0
              || (v362 = v647->fields._advantagePieceData_5__21,
                  v363 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo),
                  System_Func_object__bool____ctor(
                    v363,
                    (Il2CppObject *)v228,
                    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
                    0),
                  v359 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__51410108(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)v362,
                                                (System_Func_TSource__bool__o *)v363,
                                                (const MethodInfo_31074BC *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___),
                  ((unsigned __int8)v359 & 1) != 0) )
            {
              if ( !routeData )
                sub_1C3E7C0(v359, v360);
              routeData->fields.flagNow |= 0x20000000000uLL;
            }
            if ( v647->fields._masterExists_5__8 )
            {
              if ( v647->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
                goto LABEL_291;
              if ( !routeData )
                sub_1C3E7C0(v359, v360);
              if ( (routeData->fields.flagNow & 0x400) != 0 )
              {
LABEL_291:
                v367 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                         _4__this,
                         piecePlaceData,
                         MasterSquareIndexFromPlaceData,
                         v361);
                v359 = WarBoardAIRoute__GetDefenseAreaData(
                         _4__this,
                         MasterSquareIndexFromPlaceData,
                         v367,
                         piecePlaceData,
                         v368);
                v364 = v359;
              }
              else
              {
                v364 = v647->fields._defenseAreaData_5__7;
              }
              if ( !v364 )
                sub_1C3E7C0(v359, v360);
              v369 = _4__this->fields.aiRouteMasterData;
              if ( !v369 )
                sub_1C3E7C0(v359, v360);
              v370 = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                       v364->fields._ShortestRoutes_k__BackingField,
                       piecePlaceData,
                       v369->fields.masterType == 1,
                       v361);
              v372 = routeData;
              if ( v370 )
              {
                if ( !routeData )
                  sub_1C3E7C0(v370, v371);
                routeData->fields.flagNow |= 0x40000000uLL;
              }
              else if ( !routeData )
              {
                sub_1C3E7C0(v370, v371);
              }
              v373 = v372->fields.flagNow;
              if ( (v373 & 0x400) != 0 && (v364->fields._Flag_k__BackingField & 0x10000000000LL) != 0 )
                v372->fields.flagNow = v373 | 0x40000000000LL;
            }
            else
            {
              v372 = routeData;
            }
            v374 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v374,
              (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v372 )
              sub_1C3E7C0(v375, v376);
            v372->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v374;
            sub_1C3E508((CGThumbnailListItem_o *)&v372->fields.moveByLinkedPiece, (int32_t)v374, v377, v378);
            v381 = routeData;
            if ( !routeData )
              sub_1C3E7C0(v379, v380);
            *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0;
            v382 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
            System_Collections_Generic_Dictionary_uint__int____ctor(
              v382,
              (const MethodInfo_34A482C *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
            v381->fields.dicUniqueKeyRange = v382;
            sub_1C3E508((CGThumbnailListItem_o *)&v381->fields.dicUniqueKeyRange, (int32_t)v382, v383, v384);
            v386 = v647->fields.piecePlaceData;
            if ( !v386 )
              sub_1C3E7C0(0, v385);
            System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
              &v633,
              v386,
              (const MethodInfo_3430F68 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
            *(_OWORD *)&v640.fields._dictionary = *(_OWORD *)&v633.fields._dictionary;
            v640.fields._current = v633.fields._current;
            while ( 1 )
            {
              v387 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                       &v640,
                       (const MethodInfo_3566084 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
              if ( !v387 )
                break;
              v390 = v647->fields.__8__1;
              if ( !v390 )
                sub_1C3E7C0(v387, v388);
              v391 = v390->fields.basePiece;
              if ( !v391 )
                sub_1C3E7C0(v387, v388);
              key_high = HIDWORD(v640.fields._current.fields.key);
              if ( v391->fields._uniqueIndex_k__BackingField != HIDWORD(v640.fields._current.fields.key) )
              {
                if ( !routeData )
                  sub_1C3E7C0(v387, v388);
                v393 = (int32_t)v640.fields._current.fields.key;
                dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
                v395 = *v233;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v396 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0,
                                                                              v395,
                                                                              v393,
                                                                              0,
                                                                              0,
                                                                              v389);
                v397 = System_Linq_Enumerable__Count_int_(
                         v396,
                         (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
                if ( !dicUniqueKeyRange )
                  sub_1C3E7C0(v397, v398);
                System_Collections_Generic_Dictionary_uint__int___Add(
                  dicUniqueKeyRange,
                  key_high,
                  v397,
                  (const MethodInfo_34A51F0 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
              &v640,
              (const MethodInfo_3566184 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
            v399 = (CGThumbnailListItem_o *)routeData;
            v400 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v400,
              (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v399 )
              sub_1C3E7C0(v401, v402);
            v399[1].klass = (CGThumbnailListItem_c *)v400;
            sub_1C3E508(v399 + 1, (int32_t)v400, v403, v404);
            v405 = routeData;
            v406 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v406,
              (const MethodInfo_33FD208 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( !v405 )
              sub_1C3E7C0(v407, v408);
            v405->fields.dicMoveByServantGetDesignationItem = v406;
            sub_1C3E508(
              (CGThumbnailListItem_o *)&v405->fields.dicMoveByServantGetDesignationItem,
              (int32_t)v406,
              v409,
              v410);
            v411 = routeData;
            v412 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
            System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
              v412,
              (const MethodInfo_3405DB8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
            if ( !v411 )
              sub_1C3E7C0(v413, v414);
            v411->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)v412;
            sub_1C3E508(
              (CGThumbnailListItem_o *)&v411->fields.dicItemIdKeyIsMoveByServantDesignationItemRange,
              (int32_t)v412,
              v415,
              v416);
            v419 = routeData;
            if ( !routeData )
              sub_1C3E7C0(v417, v418);
            routeData->fields.isMoveByOutOfWarningArea = 0;
            *(_QWORD *)&v419->fields.isMoveByServantAndEnemyRange = 0;
            *(_QWORD *)&v419->fields.isMoveByMasterAndEnemyRange = 0;
            *(_QWORD *)&v419->fields.isMoveByServantAndAttackAdvantageServantRange = 0;
            *(_QWORD *)&v419->fields.isMoveByServantAndDefenseAdvantageServantRange = 0;
            *(_QWORD *)&v419->fields.isMoveByServantAndClassAdvantageServantRange = 0;
            v420 = v647->fields.__8__1;
            if ( !v420 )
              sub_1C3E7C0(v417, v418);
            v421 = v420->fields.basePiece;
            if ( !v421 )
              sub_1C3E7C0(0, v418);
            IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isServant(v421, 0);
            if ( IsBlockShortestRouteEnemyAndMaster )
            {
              v427 = v647;
              if ( v647->fields._masterExists_5__8 )
              {
                v428 = v647->fields.__8__1;
                if ( !v428 )
                  sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                v429 = v428->fields.basePiece;
                if ( !v429 )
                  sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                v430 = _4__this->fields.aiRouteMasterData;
                if ( !v430 )
                  sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                if ( v430->fields.masterType != 2
                  || v430->fields.masterPieceIndex != v429->fields._index_k__BackingField )
                {
                  v431 = v647->fields._defenseAreaData_5__7;
                  if ( !v431 )
                    sub_1C3E7C0(0, v423);
                  IsBlockShortestRouteEnemyAndMaster = DefenseAreaData__IsInDefenseArea(v431, *v233, 0);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                    routeData->fields.flagNow |= 0x4000000000uLL;
                  }
                }
                v432 = v647->fields.__8__1;
                if ( !v432 )
                  sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                v433 = v432->fields.basePiece;
                if ( !v433 )
                  sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                v434 = _4__this->fields.aiRouteMasterData;
                if ( !v434 )
                  sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                v435 = v434->fields.masterType;
                if ( v435 != 2 || v434->fields.masterPieceIndex != v433->fields._index_k__BackingField )
                {
                  IsBlockShortestRouteEnemyAndMaster = WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                                                         v647->fields._defenseAreaData_5__7,
                                                         *v233,
                                                         v435 == 1,
                                                         v425);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                    routeData->fields.flagNow |= 0x100000000uLL;
                  }
                }
                v427 = v647;
                v436 = v647->fields.__8__1;
                if ( !v436 )
                  sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                v437 = v436->fields.basePiece;
                if ( !v437 )
                  sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                v438 = _4__this->fields.aiRouteMasterData;
                if ( !v438 )
                  sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                if ( v438->fields.masterType != 2
                  || v438->fields.masterPieceIndex != v437->fields._index_k__BackingField )
                {
                  v439 = *v233;
                  if ( *v233 == MasterSquareIndexFromPlaceData )
                  {
                    v440 = routeData;
                    if ( !routeData )
                      sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                    v441 = 2;
                  }
                  else
                  {
                    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                    v442 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                                  0,
                                                                                  v439,
                                                                                  MasterSquareIndexFromPlaceData,
                                                                                  0,
                                                                                  0,
                                                                                  v426);
                    v443 = System_Linq_Enumerable__Count_int_(
                             v442,
                             (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
                    v440 = routeData;
                    if ( !routeData )
                      sub_1C3E7C0(v443, v423);
                    v427 = v647;
                    tmpFlagNow_5__12 = v647->fields._tmpFlagNow_5__12;
                    v445 = (_DWORD)v443 == tmpFlagNow_5__12;
                    if ( (int)v443 < tmpFlagNow_5__12 )
                      v441 = 1;
                    else
                      v441 = 3;
                    if ( v445 )
                      v441 = 2;
                  }
                  v440->fields.isMoveByServantAndMasterRange = v441;
                }
              }
              v446 = *(System_Collections_Generic_Dictionary_int__int__o **)&v427->fields._sumPieceActionCost_5__17;
              if ( !v446 )
                sub_1C3E7C0(0, v423);
              System_Collections_Generic_Dictionary_int__int___GetEnumerator(
                &v633,
                v446,
                (const MethodInfo_3403D5C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
              v638 = *(_OWORD *)&v633.fields._dictionary;
              v639 = v633.fields._current;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
                        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v638,
                        (const MethodInfo_3561EB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
              {
                v448 = (int32_t)v639.fields.key;
                v449 = HIDWORD(v639.fields.key);
                v450 = *v233;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v451 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0,
                                                                              v450,
                                                                              v448,
                                                                              0,
                                                                              0,
                                                                              v447);
                v452 = System_Linq_Enumerable__Count_int_(
                         v451,
                         (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
                if ( !routeData )
                  sub_1C3E7C0(v452, v453);
                dicItemIdKeyIsMoveByServantDesignationItemRange = (System_Collections_Generic_Dictionary_TKey__TValue__o *)routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
                if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
                  sub_1C3E7C0(v452, v453);
                if ( (int)v452 < v449 )
                  v455 = 1;
                else
                  v455 = 3;
                if ( (_DWORD)v452 == v449 )
                  v456 = 2;
                else
                  v456 = v455;
                System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
                  dicItemIdKeyIsMoveByServantDesignationItemRange,
                  v448,
                  v456,
                  (const MethodInfo_3406768 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
                if ( !routeData )
                  sub_1C3E7C0(v457, v458);
                dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
                if ( !dicMoveByServantGetDesignationItem )
                  sub_1C3E7C0(0, v458);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  dicMoveByServantGetDesignationItem,
                  v448,
                  *v233 == v448,
                  (const MethodInfo_33FDBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
                if ( !routeData )
                  sub_1C3E7C0(v460, v461);
                listExistDesignationItem = routeData->fields.listExistDesignationItem;
                if ( !listExistDesignationItem )
                  sub_1C3E7C0(0, v461);
                items = listExistDesignationItem->fields._items;
                v464 = Method_System_Collections_Generic_List_int__Add__;
                ++listExistDesignationItem->fields._version;
                if ( !items )
                  sub_1C3E7C0(listExistDesignationItem, v461);
                size = listExistDesignationItem->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    listExistDesignationItem,
                    v448,
                    *(const MethodInfo_379843C **)(*(_QWORD *)(v464[4] + 192LL) + 112LL));
                }
                else
                {
                  listExistDesignationItem->fields._size = size + 1;
                  items->m_Items[size] = v448;
                }
              }
              System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v638,
                (const MethodInfo_3561FB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
              v467 = *v233;
              enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
              if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
              v469 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                            0,
                                                                            v467,
                                                                            enemyMasterSquareIndex,
                                                                            0,
                                                                            0,
                                                                            v466);
              v470 = System_Linq_Enumerable__Count_int_(
                       v469,
                       (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
              v473 = routeData;
              if ( !routeData )
                sub_1C3E7C0(v470, v471);
              servantAndMasterRange_5__13 = v647->fields._servantAndMasterRange_5__13;
              v475 = (_DWORD)v470 == servantAndMasterRange_5__13;
              if ( (int)v470 < servantAndMasterRange_5__13 )
                v476 = 1;
              else
                v476 = 3;
              if ( v475 )
                v476 = 2;
              routeData->fields.isMoveByServantAndEnemyMasterRange = v476;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4C547BA )
              {
                sub_1C3E564(&WarBoardAIManager_TypeInfo);
                byte_4C547BA = 1;
              }
              v477 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v477 = WarBoardAIManager_TypeInfo;
              }
              v478 = (WarBoardAIRoute_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                            v477->static_fields->dicSquareIndexEnemyPiece,
                                            HIDWORD(v647->fields._tmpFlagNow_5__12),
                                            *v233,
                                            v472);
              v473->fields.isMoveByServantAndEnemyRange = (int)v478;
              WarBoardAIRoute__ClassAdvantageDistance(
                v478,
                &routeData,
                (WarBoardAIRoute_AdvantagePieceData_o *)v647->fields._dicEnemyRange_5__20,
                *v233,
                v479);
            }
            v480 = _4__this->fields.aiRouteMasterData;
            if ( !v480 )
              sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
            if ( v480->fields.masterType )
            {
LABEL_501:
              if ( v480->fields.masterType == 2 )
              {
                v483 = v647->fields.__8__1;
                if ( !v483 )
                  sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                v484 = v483->fields.basePiece;
                if ( !v484 )
                  sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                if ( v484->fields._index_k__BackingField == v480->fields.masterPieceIndex )
                  goto LABEL_505;
              }
            }
            else
            {
              v481 = v647->fields.__8__1;
              if ( !v481 )
                sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
              v482 = v481->fields.basePiece;
              if ( !v482 )
                sub_1C3E7C0(0, v423);
              IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isMaster(v482, 0);
              if ( !IsBlockShortestRouteEnemyAndMaster )
              {
                v480 = _4__this->fields.aiRouteMasterData;
                if ( !v480 )
                  sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                goto LABEL_501;
              }
LABEL_505:
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4C547BA )
              {
                sub_1C3E564(&WarBoardAIManager_TypeInfo);
                byte_4C547BA = 1;
              }
              v485 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v485 = WarBoardAIManager_TypeInfo;
              }
              dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v485->static_fields->dicSquareIndexEnemyPiece;
              if ( !dicSquareIndexEnemyPiece )
                sub_1C3E7C0(0, v423);
              Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                       dicSquareIndexEnemyPiece,
                       (const MethodInfo_340C0FC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
              if ( !Keys )
                sub_1C3E7C0(0, v488);
              System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
                (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v633,
                Keys,
                (const MethodInfo_36D05D4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
              *(_OWORD *)&v637.fields._dictionary = *(_OWORD *)&v633.fields._dictionary;
              v637.fields._currentKey = v633.fields._current.fields.key;
              while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
                        &v637,
                        (const MethodInfo_3564304 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                currentKey = (int32_t)v637.fields._currentKey;
                v491 = *v233;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v492 = AStarSearch__RouteSearch(0, v491, currentKey, 0, 0, v489);
                if ( !v492 )
                  sub_1C3E7C0(0, v493);
                v494 = _4__this->fields.npcData;
                if ( !v494 )
                  sub_1C3E7C0(v492, v493);
                if ( LODWORD(v492->max_length) - 1 <= v494->fields.defenseArea )
                {
                  if ( !routeData )
                    sub_1C3E7C0(v492, v493);
                  routeData->fields.flagNow |= 0x8000000000uLL;
                  break;
                }
              }
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
                &v637,
                (const MethodInfo_3564300 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
              v497 = routeData;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4C547BA )
              {
                sub_1C3E564(&WarBoardAIManager_TypeInfo);
                byte_4C547BA = 1;
              }
              v498 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v498 = WarBoardAIManager_TypeInfo;
              }
              v499 = v647->fields._defenseAreaData_5__7;
              if ( !v499 )
                sub_1C3E7C0(v498, v495);
              v500 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v498->static_fields->dicSquareIndexEnemyPiece,
                       v499->fields._MasterAndEnemyRange_k__BackingField,
                       *v233,
                       v496);
              if ( !v497 )
                sub_1C3E7C0(v500, v501);
              v497->fields.isMoveByMasterAndEnemyRange = v500;
              if ( !byte_4C547BA )
              {
                sub_1C3E564(&WarBoardAIManager_TypeInfo);
                byte_4C547BA = 1;
              }
              v502 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v502 = WarBoardAIManager_TypeInfo;
              }
              v503 = (System_Collections_Generic_Dictionary_int__object__o *)v502->static_fields->dicSquareIndexEnemyPiece;
              if ( !v503 )
                sub_1C3E7C0(0, v501);
              System_Collections_Generic_Dictionary_int__object___GetEnumerator(
                &v633,
                v503,
                (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
              v636 = v633;
              do
              {
                v505 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                         &v636,
                         (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
                if ( !v505 )
                  break;
                v506 = (int32_t)v636.fields._current.fields.key;
                v507 = *v233;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v508 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0,
                                                                              v507,
                                                                              v506,
                                                                              0,
                                                                              0,
                                                                              v504);
                System_Linq_Enumerable__Count_int_(
                  v508,
                  (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
              }
              while ( WarBoardAIRoute__IsDetour((System_Int32_array *)v508, v647->fields._allyPieceIndexs_5__5, v509) );
              System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
                &v636,
                (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( !v505 )
              {
                if ( !routeData )
                  sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
                routeData->fields.flagNow |= 0x1000000000uLL;
              }
            }
            v510 = routeData;
            if ( !routeData )
              sub_1C3E7C0(IsBlockShortestRouteEnemyAndMaster, v423);
            if ( !routeData->fields.actionPiece || (routeData->fields.flagNow & 0x4000000) != 0 )
            {
              v511 = v647->fields._warBoardData_5__2;
              if ( !v511 )
                sub_1C3E7C0(0, v423);
              Effect = WarBoardData__GetEffect(v511, *v233, v424);
              if ( Effect )
              {
                if ( !routeData )
                  sub_1C3E7C0(Effect, v513);
                routeData->fields.flagNow |= 0x200000000uLL;
              }
              v514 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v514,
                (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
              v516 = (System_Collections_Generic_List_object__o *)v647->fields.routeDataList;
              if ( !v516 )
                sub_1C3E7C0(0, v515);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v633,
                v516,
                (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
              *(_OWORD *)&v644.fields._list = *(_OWORD *)&v633.fields._dictionary;
              v644.fields._current = v633.fields._current.fields.key;
              while ( 1 )
              {
                v517 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v644,
                         (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
                if ( !v517 )
                  break;
                v519 = v644.fields._current;
                if ( !v644.fields._current )
                  sub_1C3E7C0(v517, v518);
                if ( (BYTE3(v644.fields._current[1].klass) & 8) != 0 )
                {
                  v520 = v644.fields._current[3].klass;
                  if ( !v520 )
                    sub_1C3E7C0(0, v518);
                  v521 = WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v520, 0);
                  if ( v521 )
                  {
                    if ( !v514 )
                      sub_1C3E7C0(v521, monitor_high);
                    monitor_high = HIDWORD(v519[1].monitor);
                    v523 = v514->fields._items;
                    v524 = Method_System_Collections_Generic_List_int__Add__;
                    ++v514->fields._version;
                    if ( !v523 )
                      sub_1C3E7C0(v521, monitor_high);
                    v525 = v514->fields._size;
                    if ( (unsigned int)v525 >= LODWORD(v523->max_length) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v514,
                        monitor_high,
                        *(const MethodInfo_379843C **)(*(_QWORD *)(v524[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v514->fields._size = v525 + 1;
                      v523->m_Items[v525] = monitor_high;
                    }
                  }
                  if ( (BYTE3(v519[1].klass) & 4) != 0 )
                  {
                    v526 = (WarBoardPieceData_o *)v519[3].klass;
                    if ( !v526 )
                      sub_1C3E7C0(0, monitor_high);
                    if ( WarBoardPieceData__get_isMaster(v526, 0) )
                    {
                      v528 = (WarBoardPieceData_o *)v519[3].monitor;
                      if ( !v528 )
                        sub_1C3E7C0(0, v527);
                      v529 = WarBoardPieceData__get_isServant(v528, 0);
                      if ( v529 )
                      {
                        if ( !v514 )
                          sub_1C3E7C0(v529, v530);
                        monitor_low = LODWORD(v519[1].monitor);
                        v532 = v514->fields._items;
                        v533 = Method_System_Collections_Generic_List_int__Add__;
                        ++v514->fields._version;
                        if ( !v532 )
                          sub_1C3E7C0(v529, monitor_low);
                        v534 = v514->fields._size;
                        if ( (unsigned int)v534 >= LODWORD(v532->max_length) )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v514,
                            monitor_low,
                            *(const MethodInfo_379843C **)(*(_QWORD *)(v533[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v514->fields._size = v534 + 1;
                          v532->m_Items[v534] = monitor_low;
                        }
                      }
                    }
                  }
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v644,
                (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
              if ( !routeData )
                sub_1C3E7C0(v535, v536);
              v537 = routeData->fields.basePiece;
              if ( !v537 )
                sub_1C3E7C0(0, v536);
              v538 = WarBoardPieceData__get_isServant(v537, 0);
              if ( v538 )
              {
                if ( !routeData )
                  sub_1C3E7C0(v538, v539);
                CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                                   (WarBoardAIRoute_o *)v538,
                                   routeData->fields.actionIndex,
                                   v514,
                                   v540);
                if ( CanAcquireItem )
                {
                  v544 = routeData;
                  if ( !routeData )
                    sub_1C3E7C0(CanAcquireItem, v542);
                  v545 = routeData->fields.flagNow | 0x18000000;
                  goto LABEL_610;
                }
              }
              else
              {
                if ( !routeData )
                  sub_1C3E7C0(v538, v539);
                v546 = routeData->fields.basePiece;
                if ( !v546 )
                  sub_1C3E7C0(0, v539);
                CanAcquireItem = WarBoardPieceData__get_isMaster(v546, 0);
                if ( CanAcquireItem )
                {
                  if ( !routeData )
                    sub_1C3E7C0(CanAcquireItem, v547);
                  CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                                     (WarBoardAIRoute_o *)CanAcquireItem,
                                     routeData->fields.actionIndex,
                                     v514,
                                     v548);
                  v550 = routeData;
                  if ( CanAcquireItem )
                  {
                    if ( !routeData )
                      sub_1C3E7C0(CanAcquireItem, v549);
                    routeData->fields.flagNow |= 0x10000000uLL;
                  }
                  else if ( !routeData )
                  {
                    sub_1C3E7C0(CanAcquireItem, v549);
                  }
                  if ( (v550->fields.flagNow & 0x4000000) != 0 )
                  {
                    v551 = v550->fields.actionPiece;
                    if ( !v551 )
                      sub_1C3E7C0(0, v549);
                    CanAcquireItem = WarBoardPieceData__get_isServant(v551, 0);
                    if ( CanAcquireItem )
                    {
                      if ( !routeData )
                        sub_1C3E7C0(CanAcquireItem, v552);
                      CanAcquireItem = WarBoardAIRoute__CanAcquireItem(
                                         (WarBoardAIRoute_o *)CanAcquireItem,
                                         routeData->fields.baseIndex,
                                         v514,
                                         v553);
                      if ( CanAcquireItem )
                      {
                        v544 = routeData;
                        if ( !routeData )
                          sub_1C3E7C0(CanAcquireItem, v554);
                        v545 = routeData->fields.flagNow | 0x8000000;
LABEL_610:
                        v544->fields.flagNow = v545;
                      }
                    }
                  }
                }
              }
              WarBoardAIRoute__LinkedPieceCount(
                (WarBoardAIRoute_o *)CanAcquireItem,
                &routeData,
                piecePlaceData,
                v514,
                v543);
              v510 = routeData;
              if ( !routeData )
                sub_1C3E7C0(v555, v556);
            }
            FlagOutOfWarningAreaToDistance = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                               _4__this,
                                               v510->fields.baseIndex,
                                               v510->fields.actionIndex,
                                               v425);
            v510->fields.isMoveByOutOfWarningArea = FlagOutOfWarningAreaToDistance;
            v559 = routeData;
            if ( !routeData )
              sub_1C3E7C0(FlagOutOfWarningAreaToDistance, v558);
            evalOffsetMagnification = routeData->fields.evalOffsetMagnification;
            if ( !evalOffsetMagnification )
              sub_1C3E7C0(FlagOutOfWarningAreaToDistance, v558);
            evalOffsetMagnification->fields.isAttack = (routeData->fields.flagNow & 2) != 0;
            v561 = v559->fields.basePiece;
            if ( !v561 )
              sub_1C3E7C0(FlagOutOfWarningAreaToDistance, v558);
            piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields.piecePersonalityDic;
            if ( !piecePersonalityDic )
              sub_1C3E7C0(0, v558);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                 piecePersonalityDic,
                                                                 v561->fields._index_k__BackingField,
                                                                 &value,
                                                                 (const MethodInfo_340DBC8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v563 = value;
              v564 = (WarBoardAIEvalCalcurater_o *)sub_1C3E7B0(WarBoardAIEvalCalcurater_TypeInfo);
              WarBoardAIEvalCalcurater___ctor(v564, (WarBoardAIRoute_PiecePersonality_o *)v563, 0);
              if ( !v564 )
                sub_1C3E7C0(v565, v566);
              WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v564, &routeData, 0);
              WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
                v564,
                &routeData,
                _4__this->fields.averageBenefitValue,
                0);
              if ( !routeData )
                sub_1C3E7C0(0, v567);
              WarBoardAIRoute_RouteData__CalcEvalValue(routeData, v567);
              v568 = WarBoardAIRoute___c_TypeInfo;
              v569 = v647->fields.routeDataList;
              if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v568 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_5 = (System_Func_object__object__o *)v568->static_fields->__9__47_5;
              if ( !_9__47_5 )
              {
                if ( !v568->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v568);
                  v568 = WarBoardAIRoute___c_TypeInfo;
                }
                v571 = (Il2CppObject *)v568->static_fields->__9;
                _9__47_5 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
                System_Func_object__object____ctor(
                  _9__47_5,
                  v571,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__,
                  0);
                v572 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v572->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
                sub_1C3E508((CGThumbnailListItem_o *)&v572->__9__47_5, (int32_t)_9__47_5, v573, v574);
              }
              v575 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v569,
                                                                      (System_Func_TSource__TResult__o *)_9__47_5,
                                                                      (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
              v576 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
              System_Collections_Generic_List_object____ctor_58412372(
                v576,
                v575,
                (const MethodInfo_37B4D54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___78164600);
              if ( !v576 )
                sub_1C3E7C0(v577, v578);
              v581 = (Il2CppObject *)routeData;
              v582 = v576->fields._items;
              v583 = Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__;
              ++v576->fields._version;
              if ( !v582 )
                sub_1C3E7C0(v577, v581);
              v584 = v576->fields._size;
              if ( (unsigned int)v584 >= LODWORD(v582->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v576,
                  v581,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v583[4] + 192LL) + 112LL));
              }
              else
              {
                v585 = &v582->obj.klass + v584;
                v576->fields._size = v584 + 1;
                v585[4] = (Il2CppClass *)v581;
                sub_1C3E508((CGThumbnailListItem_o *)(v585 + 4), (int32_t)v581, v579, v580);
              }
              v586 = (WarBoardAIRoute_RouteData_o *)BasicHelper__IndexValue_object__51281812(
                                                      (System_Collections_Generic_List_T__o *)v576,
                                                      v576->fields._size - 2,
                                                      0,
                                                      (const MethodInfo_30E7F94 *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
              route = v586;
              if ( v586 )
              {
                v588 = (int)routeData;
                if ( !routeData )
                  sub_1C3E7C0(v586, v587);
                if ( routeData->fields.basePiece == v586->fields.basePiece )
                {
                  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
                    v564,
                    &route,
                    routeData,
                    0);
                  if ( !route )
                    sub_1C3E7C0(0, v590);
                  WarBoardAIRoute_RouteData__CalcEvalValue(route, v590);
                }
              }
              allRouteList = (System_Collections_Generic_List_object__o *)_4__this->fields.allRouteList;
              if ( !allRouteList )
                sub_1C3E7C0(0, v587);
              v592 = allRouteList->fields._items;
              v593 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++allRouteList->fields._version;
              if ( !v592 )
                sub_1C3E7C0(allRouteList, v587);
              v594 = allRouteList->fields._size;
              if ( (unsigned int)v594 >= LODWORD(v592->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  allRouteList,
                  (Il2CppObject *)v576,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v593[4] + 192LL) + 112LL));
              }
              else
              {
                v595 = &v592->obj.klass + v594;
                allRouteList->fields._size = v594 + 1;
                v595[4] = (Il2CppClass *)v576;
                sub_1C3E508((CGThumbnailListItem_o *)(v595 + 4), (int32_t)v576, v588, v589);
              }
              if ( !routeData )
                sub_1C3E7C0(this, method);
              if ( routeData->fields.baseIndex != routeData->fields.actionIndex && (routeData->fields.flagNow & 2) == 0 )
              {
                searchCount = v647->fields.searchCount;
                if ( searchCount != 1 )
                {
                  v627 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                           _4__this,
                                           piecePlaceData,
                                           searchCount,
                                           (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v576,
                                           v596);
                  v628 = v647;
                  v647->fields.__2__current = v627;
                  sub_1C3E508((CGThumbnailListItem_o *)&v628->fields.__2__current, (int32_t)v627, v629, v630);
                  result = 1;
                  v647->fields.__1__state = 1;
                  return result;
                }
                dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
                v599 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                         _4__this,
                                         piecePlaceData,
                                         1,
                                         (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v576,
                                         v596);
                if ( !routeData )
                  sub_1C3E7C0(v599, v599);
                if ( !dictionaryCreateRouteDataEvalValue )
                  sub_1C3E7C0(v599, v599);
                System_Collections_Generic_Dictionary_object__float___Add(
                  dictionaryCreateRouteDataEvalValue,
                  v599,
                  routeData->fields.evalValue,
                  (const MethodInfo_347E99C *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
              }
            }
            goto LABEL_662;
          }
        }
        WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v647, v63);
        v175 = v647;
        v176 = v647->fields.searchCount;
        v647->fields.__7__wrap8.fields._current = 0u;
        *(_OWORD *)&v175->fields.__7__wrap8.fields._dictionary = 0u;
        if ( v176 != 1 )
          return 0;
        if ( !_4__this )
          sub_1C3E7C0(v173, v174);
        v177 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        v178 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v178 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__47_6 = (System_Func_T__TResult__o *)v178->static_fields->__9__47_6;
        if ( !_9__47_6 )
        {
          if ( !v178->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v178);
            v178 = WarBoardAIRoute___c_TypeInfo;
          }
          v180 = (Il2CppObject *)v178->static_fields->__9;
          _9__47_6 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v180,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            0);
          v181 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v181->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_1C3E508((CGThumbnailListItem_o *)&v181->__9__47_6, (int32_t)_9__47_6, v182, v183);
        }
        v185 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__float___float_(
                 v177,
                 (System_Func_TSource__TKey__o *)_9__47_6,
                 (const MethodInfo_3129598 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v647->fields._servantAndEnemyMasterRange_5__15 = 0;
        v186 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v186 )
          sub_1C3E7C0(0, v184);
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v186,
                  (const MethodInfo_347E66C *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v189 = _4__this->fields.npcData;
        if ( !v189 )
          sub_1C3E7C0(Count, v188);
        v190 = v647;
        v191 = (float)((float)v189->fields.calcEllipsis / 100.0) * (float)(int)Count;
        v192 = (int)v191;
        if ( v191 == INFINITY )
          v192 = 0x80000000;
        v647->fields._servantAndEnemyRange_5__14 = v192;
        calcEllipsisMin = v189->fields.calcEllipsisMin;
        if ( calcEllipsisMin <= v192 )
          calcEllipsisMin = v192;
        v190->fields._servantAndEnemyRange_5__14 = calcEllipsisMin;
        if ( !v185 )
          sub_1C3E7C0(Count, v188);
        v194 = v185->klass;
        v195 = *(unsigned __int16 *)&v185->klass->_2.rank;
        if ( *(_WORD *)&v185->klass->_2.rank )
        {
          p_offset = &v194->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            --v195;
            p_offset += 4;
            if ( !v195 )
              goto LABEL_112;
          }
          v197 = (__int64)&v194->vtable[*p_offset];
        }
        else
        {
LABEL_112:
          v197 = sub_1C8ED7C(v185, System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo, 0);
        }
        v198 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v197)(
                 v185,
                 *(_QWORD *)(v197 + 8));
        v199 = &v647->fields.__7__wrap24;
        *(_QWORD *)&v647->fields.__7__wrap24 = v198;
        sub_1C3E508((CGThumbnailListItem_o *)v199, v198, v200, v201);
        v4 = v647;
        v647->fields.__1__state = -4;
        goto LABEL_117;
      }
    }
    else
    {
      v44 = _4__this->fields.aiRouteMasterData;
      if ( !v44 )
        sub_1C3E7C0(v38, v39);
      if ( v647 )
      {
        v45 = v44->fields.masterType;
        v647->fields._masterExists_5__8 = v45 != 3;
        if ( v45 == 3 )
          goto LABEL_29;
        goto LABEL_25;
      }
    }
    sub_1C3E7C0(v38, v39);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  if ( (byte_4C54740 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    byte_4C54740 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &this->fields.__7__wrap8,
    (const MethodInfo_3566184 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
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

  if ( (byte_4C54741 & 1) == 0 )
  {
    sub_1C3E564(&System_IDisposable_TypeInfo);
    byte_4C54741 = 1;
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
      v7 = sub_1C8ED7C(v3, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v7)(v3, *(_QWORD *)(v7 + 8));
  }
}


void WarBoardAIRoute___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C54731 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAIRoute___c_TypeInfo);
    byte_4C54731 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(WarBoardAIRoute___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIRoute___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)WarBoardAIRoute___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C54732 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1C3E564(&IWarBoardObjectData_TypeInfo);
    byte_4C54732 = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
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
    v7 = sub_1C8ED7C(x, IWarBoardObjectData_TypeInfo, 2);
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
  if ( (byte_4C54733 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    byte_4C54733 = 1;
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
  if ( (byte_4C54734 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    byte_4C54734 = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, (const MethodInfo *)x.fields.key);
}


WarBoardAIRoute_RouteData_o *WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return WarBoardAIRoute_RouteData__ShallowCopy(x, (const MethodInfo *)x);
}


float WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // w19

  value = x.fields.value;
  if ( (byte_4C54735 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__);
    byte_4C54735 = 1;
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

  if ( (byte_4C54736 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1C3E564(&IWarBoardObjectData_TypeInfo);
    byte_4C54736 = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
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
    v7 = sub_1C8ED7C(x, IWarBoardObjectData_TypeInfo, 4);
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

  if ( (byte_4C54737 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1C3E564(&IWarBoardObjectData_TypeInfo);
    byte_4C54737 = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
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
    v7 = sub_1C8ED7C(x, IWarBoardObjectData_TypeInfo, 5);
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
  if ( (byte_4C54738 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__);
    byte_4C54738 = 1;
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
    sub_1C3E7C0(this, 0);
  return !WarBoardItemData__get_Acquired(z, 0) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C54739 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_1C3E564(&IWarBoardObjectData_TypeInfo);
    byte_4C54739 = 1;
  }
  if ( !z )
    sub_1C3E7C0(this, z);
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
    v8 = sub_1C8ED7C(z, IWarBoardObjectData_TypeInfo, 0);
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
    v12 = sub_1C8ED7C(z, IWarBoardObjectData_TypeInfo, 3);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, 0);
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C5473A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    byte_4C5473A = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_1C3E7C0(0, *(_QWORD *)&square);
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_3430D7C *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
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
    sub_1C3E7C0(this, *(_QWORD *)&x);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(route->max_length) )
    sub_1C3E7C8(this, *(_QWORD *)&x);
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
    sub_1C3E7C0(this, x);
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
  if ( (byte_4C5473B & 1) == 0 )
  {
    sub_1C3E564(&AStarSearch_TypeInfo);
    this = (WarBoardAIRoute___c__DisplayClass64_0_o *)sub_1C3E564(&IWarBoardObjectData_TypeInfo);
    byte_4C5473B = 1;
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
    v9 = sub_1C8ED7C(x, IWarBoardObjectData_TypeInfo, 1);
  }
  v11 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v9)(x, *(_QWORD *)(v9 + 8));
  if ( !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  this = (WarBoardAIRoute___c__DisplayClass64_0_o *)AStarSearch__RouteSearch(0, baseSquareIndex, v11, 0, 0, v10);
  if ( !this )
LABEL_14:
    sub_1C3E7C0(this, x);
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
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_T__o *routeDataList; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4C5473C & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1C3E564(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__);
    sub_1C3E564(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
    byte_4C5473C = 1;
  }
  v5 = sub_1C3E7B0(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 16) = targetObject;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)targetObject, v8, v9);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v11 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    0);
  return BasicHelper__Any_object_(
           routeDataList,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
  if ( (byte_4C5473D & 1) == 0 )
  {
    sub_1C3E564(&IWarBoardObjectData_TypeInfo);
    this = (WarBoardAIRoute___c__DisplayClass65_1_o *)sub_1C3E564(&WarBoardItemData_TypeInfo);
    byte_4C5473D = 1;
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
    v12 = sub_1C8ED7C(v4->fields.targetObject, IWarBoardObjectData_TypeInfo, 0);
  }
  this = (WarBoardAIRoute___c__DisplayClass65_1_o *)(*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v12)(
                                                      targetObject,
                                                      *(_QWORD *)(v12 + 8));
  if ( baseIndex == (_DWORD)this )
    return 1;
  v13 = v4->fields.targetObject;
  if ( !v13 )
LABEL_25:
    sub_1C3E7C0(this, x);
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
    v18 = sub_1C8ED7C(v13, IWarBoardObjectData_TypeInfo, 0);
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
  if ( (byte_4C5473E & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass66_0_o *)sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__);
    byte_4C5473E = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  value = v4->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, x);
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