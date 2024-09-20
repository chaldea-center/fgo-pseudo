void __fastcall WarBoardAIRoute___ctor(
        WarBoardAIRoute_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  WarBoardAIRoute_o *v15; // x23
  System_Collections_Generic_Dictionary_TKey__TValue__o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_Dictionary_int__object__o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *Instance; // x24
  int32_t v32; // w2
  int32_t v33; // w3
  WarBoardData_o *playedStageReinforcementsList; // x0
  Il2CppObject *v35; // x1
  const MethodInfo *v36; // x1
  struct System_Collections_Generic_List_WarBoardRatingBase__o *v37; // x8
  int32_t size; // w2
  int v39; // w9
  struct System_Int32_array *aiIds; // x19
  ServantStatusBattleListViewItem_o *p_aiIds; // x20
  System_Array_o *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x8
  unsigned __int64 v46; // x26
  int v47; // w21
  WarBoardAIRoute_PiecePersonality_o *v48; // x27
  int32_t squares; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *stageNpcMaster; // x8
  WarBoardData_o *v52; // x29
  unsigned __int64 v53; // x23
  System_Collections_Generic_List_object__o *actionTrandList; // x20
  Il2CppObject *v55; // x22
  WarBoardAIRoute_ActionTrendInfo_o *v56; // x21
  int32_t v57; // w2
  int32_t v58; // w3
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v64; // x8
  WarBoardData_o *v65; // x20
  unsigned __int64 v66; // x21
  int32_t v67; // w2
  int32_t v68; // w3
  struct System_Int32_array *stageEntity; // x8
  _QWORD *v70; // x9
  __int64 stageNpcMaster_low; // x10
  Il2CppClass **v72; // x8
  Il2CppObject *Master_object; // x27
  Il2CppObject *v74; // x28
  WarBoardData_o *v75; // x29
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x20
  System_Func_object__bool__o *v77; // x21
  System_Collections_Generic_Dictionary_int__object__c *klass; // x8
  WarBoardData_o *v79; // x20
  __int64 v80; // x9
  int32_t *p_offset; // x10
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x26
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  __int64 v89; // x8
  __int64 v90; // x9
  int *v91; // x10
  __int64 v92; // x0
  __int64 v93; // x1
  int32_t *v94; // x20
  __int64 id; // x0
  __int64 v96; // x1
  _BOOL8 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x0
  __int64 v100; // x1
  _BOOL8 v101; // x0
  __int64 v102; // x1
  const MethodInfo *v103; // x3
  __int64 v104; // x8
  __int64 v105; // x9
  int *v106; // x10
  __int64 v107; // x0
  ServantStatusBattleListViewItem_o *p_ratingBaseIds; // x20
  struct System_Int32_array *ratingBaseIds; // x22
  System_Array_o *v110; // x21
  int32_t v111; // w2
  int32_t v112; // w3
  __int64 v113; // x8
  unsigned __int64 v114; // x24
  int32_t v115; // w20
  WarBoardData_o *v116; // x25
  _QWORD *v117; // x8
  __int64 v118; // x20
  int32_t v119; // w2
  int32_t v120; // w3
  int32_t v121; // w2
  int32_t v122; // w3
  struct System_Int32_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  Il2CppClass **v126; // x8
  int32_t v127; // w21
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicRatingbaseCalcValue; // x20
  WarBoardEvalValueSquare_CalcEval_o *v129; // x25
  struct System_Int32_array *tacticalIds; // x19
  ServantStatusBattleListViewItem_o *p_tacticalIds; // x21
  System_Array_o *v132; // x20
  int32_t v133; // w2
  int32_t v134; // w3
  __int64 v135; // x8
  unsigned __int64 v136; // x21
  int32_t v137; // w20
  int32_t v138; // w2
  int32_t v139; // w3
  System_Collections_Generic_List_object__o *v140; // x8
  struct System_Object_array *v141; // x9
  _QWORD *v142; // x10
  __int64 v143; // x11
  WarBoardData_o *v144; // x1
  Il2CppClass **v145; // x0
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v148; // x22
  int32_t v149; // w2
  int32_t v150; // w3
  struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o **p_tacticalTrendList; // [xsp+0h] [xbp-C0h]
  struct System_Collections_Generic_List_WarBoardRatingBase__o **p_ratingBaseList; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_Dictionary_int__object__o **p_piecePersonalityDic; // [xsp+28h] [xbp-98h]
  DataManager_o *v156; // [xsp+30h] [xbp-90h]
  WarBoardReinforcementsEntity_o *v157; // [xsp+38h] [xbp-88h] BYREF
  WarBoardStageReinforcementsEntity_o *v158; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *item; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v160; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  System_RuntimeFieldHandle_o v162; // 0:w1.4
  System_RuntimeFieldHandle_o v163; // 0:w1.4
  System_RuntimeFieldHandle_o v164; // 0:w1.4

  if ( (byte_4A58D59 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_IndexValue_int____76090680);
    sub_1B885B0(&WarBoardEvalValueSquare_CalcEval_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardAIMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1B885B0(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
    sub_1B885B0(&WarBoardAIRoute_PiecePersonality_TypeInfo);
    sub_1B885B0(&ShortestDistanceFromAllyMaster_TypeInfo);
    sub_1B885B0(&ShortestDistanceFromAllyServant_TypeInfo);
    sub_1B885B0(&ShortestDistanceFromEnemyMaster_TypeInfo);
    sub_1B885B0(&ShortestDistanceFromEnemyServant_TypeInfo);
    sub_1B885B0(&ShortestDistanceFromItem_TypeInfo);
    sub_1B885B0(&ShortestDistanceFromPrioritySpace_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384);
    sub_1B885B0(&Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49);
    sub_1B885B0(&Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72);
    sub_1B885B0(&Method_WarBoardAIRoute___ctor_b__42_0__);
    sub_1B885B0(&WarBoardAiTargetCacher_TypeInfo);
    byte_4A58D59 = 1;
  }
  v160 = 0LL;
  entity = 0LL;
  v158 = 0LL;
  item = 0LL;
  v157 = 0LL;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v3;
  p_tacticalTrendList = &this->fields.tacticalTrendList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tacticalTrendList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v6;
  p_ratingBaseList = &this->fields.ratingBaseList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.ratingBaseList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.piecePersonalityDic, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.allRouteList, (int32_t)v12, v13, v14);
  v15 = this;
  v16 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v16,
    (const MethodInfo_31FF45C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicUniqueKeyAdvantagePieceData, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v19,
    (const MethodInfo_31CF91C *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v19;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.dictionaryCreateRouteDataEvalValue,
    (int32_t)v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v22,
    (const MethodInfo_31FF45C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicUniqueKeyDesignationItem, (int32_t)v22, v23, v24);
  v25 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v25,
    (const MethodInfo_31FF45C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicUniqueKeyTarget, (int32_t)v25, v26, v27);
  v28 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v28,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicRatingbaseCalcValue, (int32_t)v28, v29, v30);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.npcData, (int32_t)npc, v32, v33);
  if ( !npc )
    goto LABEL_137;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&npc->fields.forceId;
  this->fields.pickValue = npc->fields.pickValue;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  this->fields.moveCost = WarBoardData__GetMoveCost(
                            playedStageReinforcementsList,
                            this->fields.forceId,
                            this->fields.groupId,
                            0,
                            0,
                            0LL);
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  this->fields.masterMoveCost = WarBoardData__GetMoveCost(
                                  playedStageReinforcementsList,
                                  this->fields.forceId,
                                  this->fields.groupId,
                                  0,
                                  1,
                                  0LL);
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  this->fields.attackCost = WarBoardData__GetAttackCost(
                              playedStageReinforcementsList,
                              this->fields.forceId,
                              this->fields.groupId,
                              0LL);
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  this->fields.wallAttackCost = WarBoardData__GetWallAttackCost(
                                  playedStageReinforcementsList,
                                  this->fields.forceId,
                                  this->fields.groupId,
                                  0LL);
  WarBoardAIRoute__Clear(this, v36);
  playedStageReinforcementsList = (WarBoardData_o *)this->fields.piecePersonalityDic;
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)playedStageReinforcementsList,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  v37 = *p_ratingBaseList;
  if ( !*p_ratingBaseList )
    goto LABEL_137;
  size = v37->fields._size;
  v39 = v37->fields._version + 1;
  v37->fields._size = 0;
  v37->fields._version = v39;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v37->fields._items, 0, size, 0LL);
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.piecePersonalityDic;
  p_aiIds = (ServantStatusBattleListViewItem_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v42 = (System_Array_o *)sub_1B88658(int___TypeInfo, 4LL);
    v162.fields.value = Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v42, v162, 0LL);
    p_aiIds->klass = (ServantStatusBattleListViewItem_c *)v42;
    sub_1B88554(p_aiIds, (int32_t)v42, v43, v44);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_137;
  }
  v45 = *(_QWORD *)&aiIds->max_length;
  v156 = (DataManager_o *)Instance;
  if ( (int)v45 >= 1 )
  {
    v46 = 0LL;
    do
    {
      if ( v46 >= (unsigned int)v45 )
        goto LABEL_138;
      v47 = aiIds->m_Items[v46 + 1];
      v48 = (WarBoardAIRoute_PiecePersonality_o *)sub_1B887FC(WarBoardAIRoute_PiecePersonality_TypeInfo);
      WarBoardAIRoute_PiecePersonality___ctor(v48, 0LL);
      playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !playedStageReinforcementsList )
        goto LABEL_137;
      playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
      if ( !playedStageReinforcementsList )
        goto LABEL_137;
      playedStageReinforcementsList = (WarBoardData_o *)WarBoardData__GetPiece(
                                                          playedStageReinforcementsList,
                                                          v15->fields.forceId,
                                                          v15->fields.groupId,
                                                          v46,
                                                          1,
                                                          0LL);
      if ( playedStageReinforcementsList
        && (squares = (int32_t)playedStageReinforcementsList[1].fields.squares, squares > 0)
        || (squares = v47, v47 >= 1) )
      {
        if ( !Instance )
          goto LABEL_137;
        playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !playedStageReinforcementsList )
          goto LABEL_137;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
               &entity,
               squares,
               (const MethodInfo_311D988 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
          if ( !entity )
            goto LABEL_137;
          v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList;
          playedStageReinforcementsList = (WarBoardData_o *)WarBoardAIEntity__GetActionTrendIds(
                                                              (WarBoardAIEntity_o *)entity,
                                                              0LL);
          if ( !playedStageReinforcementsList )
            goto LABEL_137;
          stageNpcMaster = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)playedStageReinforcementsList->fields.stageNpcMaster;
          v52 = playedStageReinforcementsList;
          if ( (int)stageNpcMaster >= 1 )
          {
            v53 = 0LL;
            while ( v53 < (unsigned int)stageNpcMaster )
            {
              if ( !v50 )
                goto LABEL_137;
              playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v50,
                                                                  &v160,
                                                                  *((_DWORD *)&v52->fields.npcEntityDict + v53),
                                                                  (const MethodInfo_311D988 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)playedStageReinforcementsList & 1) != 0 )
              {
                if ( !v48 )
                  goto LABEL_137;
                actionTrandList = (System_Collections_Generic_List_object__o *)v48->fields.actionTrandList;
                v55 = v160;
                v56 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1B887FC(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
                WarBoardAIRoute_ActionTrendInfo___ctor(v56, (WarBoardActionTrendEntity_o *)v55, 0LL);
                if ( !actionTrandList )
                  goto LABEL_137;
                items = actionTrandList->fields._items;
                v60 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
                ++actionTrandList->fields._version;
                if ( !items )
                  goto LABEL_137;
                v61 = actionTrandList->fields._size;
                if ( (unsigned int)v61 >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    actionTrandList,
                    (Il2CppObject *)v56,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
                }
                else
                {
                  v62 = &items->obj.klass + v61;
                  actionTrandList->fields._size = v61 + 1;
                  v62[4] = (Il2CppClass *)v56;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v62 + 4), (int32_t)v56, v57, v58);
                }
              }
              LODWORD(stageNpcMaster) = v52->fields.stageNpcMaster;
              if ( (__int64)++v53 >= (int)stageNpcMaster )
                goto LABEL_43;
            }
LABEL_138:
            sub_1B88814(playedStageReinforcementsList, v35);
          }
LABEL_43:
          Instance = (Il2CppObject *)v156;
          playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                              v156,
                                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_137;
          v63 = (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList;
          playedStageReinforcementsList = (WarBoardData_o *)WarBoardAIEntity__GetRatingOffsetIds(
                                                              (WarBoardAIEntity_o *)entity,
                                                              0LL);
          v15 = this;
          if ( !playedStageReinforcementsList )
            goto LABEL_137;
          v64 = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)playedStageReinforcementsList->fields.stageNpcMaster;
          v65 = playedStageReinforcementsList;
          if ( (int)v64 >= 1 )
          {
            v66 = 0LL;
            while ( v66 < (unsigned int)v64 )
            {
              if ( !v63 )
                goto LABEL_137;
              playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v63,
                                                                  &item,
                                                                  *((_DWORD *)&v65->fields.npcEntityDict + v66),
                                                                  (const MethodInfo_311D988 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)playedStageReinforcementsList & 1) != 0 )
              {
                if ( !v48 )
                  goto LABEL_137;
                playedStageReinforcementsList = (WarBoardData_o *)v48->fields.ratingOffsetList;
                if ( !playedStageReinforcementsList )
                  goto LABEL_137;
                v35 = item;
                stageEntity = (struct System_Int32_array *)playedStageReinforcementsList->fields.stageEntity;
                v70 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
                ++HIDWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( !stageEntity )
                  goto LABEL_137;
                stageNpcMaster_low = SLODWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( (unsigned int)stageNpcMaster_low >= stageEntity->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)playedStageReinforcementsList,
                    v35,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
                }
                else
                {
                  v72 = &stageEntity->obj.klass + stageNpcMaster_low;
                  LODWORD(playedStageReinforcementsList->fields.stageNpcMaster) = stageNpcMaster_low + 1;
                  v72[4] = (Il2CppClass *)v35;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v72 + 4), (int32_t)v35, v67, v68);
                }
              }
              LODWORD(v64) = v65->fields.stageNpcMaster;
              if ( (__int64)++v66 >= (int)v64 )
                goto LABEL_57;
            }
            goto LABEL_138;
          }
        }
      }
LABEL_57:
      playedStageReinforcementsList = (WarBoardData_o *)*p_piecePersonalityDic;
      if ( !*p_piecePersonalityDic )
        goto LABEL_137;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)playedStageReinforcementsList,
        v46,
        (Il2CppObject *)v48,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      LODWORD(v45) = aiIds->max_length;
    }
    while ( (__int64)++v46 < (int)v45 );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v74 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  v75 = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !v75 )
    goto LABEL_137;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)v75->fields.pieces;
  v77 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(v77, (Il2CppObject *)v15, Method_WarBoardAIRoute___ctor_b__42_0__, 0LL);
  playedStageReinforcementsList = (WarBoardData_o *)System_Linq_Enumerable__Where_object_(
                                                      pieces,
                                                      (System_Func_TSource__bool__o *)v77,
                                                      (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  klass = (System_Collections_Generic_Dictionary_int__object__c *)playedStageReinforcementsList->klass;
  v79 = playedStageReinforcementsList;
  v80 = *(unsigned __int16 *)(&playedStageReinforcementsList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&playedStageReinforcementsList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      --v80;
      p_offset += 4;
      if ( !v80 )
        goto LABEL_68;
    }
    v82 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_68:
    v82 = sub_1BDA590(
            playedStageReinforcementsList,
            System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo,
            0LL);
  }
  v84 = (*(__int64 (__fastcall **)(WarBoardData_o *, _QWORD))v82)(v79, *(_QWORD *)(v82 + 8));
  if ( !v84 )
    sub_1B8880C(0LL, v83);
  while ( 1 )
  {
    v85 = *(_QWORD *)v84;
    v86 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
    {
      v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v87 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v86;
        v87 += 4;
        if ( !v86 )
          goto LABEL_75;
      }
      v88 = v85 + 16LL * *v87 + 312;
    }
    else
    {
LABEL_75:
      v88 = sub_1BDA590(v84, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v84, *(_QWORD *)(v88 + 8)) & 1) == 0 )
      break;
    v89 = *(_QWORD *)v84;
    v90 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
    {
      v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v91 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        --v90;
        v91 += 4;
        if ( !v90 )
          goto LABEL_82;
      }
      v92 = v89 + 16LL * *v91 + 312;
    }
    else
    {
LABEL_82:
      v92 = sub_1BDA590(v84, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL);
    }
    v94 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v92)(v84, *(_QWORD *)(v92 + 8));
    if ( !v94 )
      sub_1B8880C(0LL, v93);
    if ( !*p_piecePersonalityDic )
      sub_1B8880C(0LL, v93);
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            *p_piecePersonalityDic,
            v94[7],
            (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__) )
    {
      id = WarBoardData__get_id(v75, 0LL);
      if ( !Master_object )
        sub_1B8880C(id, v96);
      v97 = WarBoardStageReinforcementsMaster__TryGetEntity(
              (WarBoardStageReinforcementsMaster_o *)Master_object,
              &v158,
              id,
              v94[72],
              0LL);
      if ( v97 )
      {
        if ( !v158 )
          sub_1B8880C(v97, v98);
        v99 = BasicHelper__IndexValue_int_(
                v158->fields.reinforcementsIds,
                v94[73],
                -1,
                (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
        if ( !v74 )
          sub_1B8880C(v99, v100);
        v101 = WarBoardReinforcementsMaster__TryGetEntity((WarBoardReinforcementsMaster_o *)v74, &v157, v99, 0LL);
        if ( v101 )
        {
          if ( !v157 )
            sub_1B8880C(v101, v102);
          WarBoardAIRoute__AddPiecePersonalityDic(this, v157->fields.aiId, v94[7], v103);
        }
      }
    }
  }
  v104 = *(_QWORD *)v84;
  v105 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
  {
    v106 = (int *)(*(_QWORD *)(v104 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v106 - 1) != System_IDisposable_TypeInfo )
    {
      --v105;
      v106 += 4;
      if ( !v105 )
        goto LABEL_98;
    }
    v107 = v104 + 16LL * *v106 + 312;
  }
  else
  {
LABEL_98:
    v107 = sub_1BDA590(v84, System_IDisposable_TypeInfo, 0LL);
  }
  playedStageReinforcementsList = (WarBoardData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v107)(
                                                      v84,
                                                      *(_QWORD *)(v107 + 8));
  p_ratingBaseIds = (ServantStatusBattleListViewItem_o *)&npc->fields.ratingBaseIds;
  ratingBaseIds = npc->fields.ratingBaseIds;
  if ( !ratingBaseIds )
  {
    v110 = (System_Array_o *)sub_1B88658(int___TypeInfo, 6LL);
    v163.fields.value = Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v110, v163, 0LL);
    p_ratingBaseIds->klass = (ServantStatusBattleListViewItem_c *)v110;
    sub_1B88554(p_ratingBaseIds, (int32_t)v110, v111, v112);
    ratingBaseIds = (struct System_Int32_array *)p_ratingBaseIds->klass;
    if ( !p_ratingBaseIds->klass )
LABEL_137:
      sub_1B8880C(playedStageReinforcementsList, v35);
  }
  v113 = *(_QWORD *)&ratingBaseIds->max_length;
  if ( (int)v113 >= 1 )
  {
    v114 = 0LL;
    while ( 2 )
    {
      if ( v114 >= (unsigned int)v113 )
        goto LABEL_138;
      playedStageReinforcementsList = (WarBoardData_o *)v156;
      if ( v156 )
      {
        v115 = ratingBaseIds->m_Items[v114 + 1];
        playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                            v156,
                                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
        if ( playedStageReinforcementsList )
        {
          playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___GetEntity(
                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
                                                              v115,
                                                              (const MethodInfo_311D934 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
          if ( playedStageReinforcementsList )
          {
            v116 = playedStageReinforcementsList;
            switch ( HIDWORD(playedStageReinforcementsList->fields.stageEntity) )
            {
              case 0:
                v117 = &ShortestDistanceFromAllyServant_TypeInfo;
                goto LABEL_115;
              case 1:
                v117 = &ShortestDistanceFromEnemyServant_TypeInfo;
                goto LABEL_115;
              case 2:
                v117 = &ShortestDistanceFromAllyMaster_TypeInfo;
                goto LABEL_115;
              case 3:
                v117 = &ShortestDistanceFromEnemyMaster_TypeInfo;
                goto LABEL_115;
              case 4:
                v117 = &ShortestDistanceFromItem_TypeInfo;
                goto LABEL_115;
              case 5:
                v117 = &ShortestDistanceFromPrioritySpace_TypeInfo;
LABEL_115:
                v118 = sub_1B887FC(*v117);
                System_Object___ctor((Il2CppObject *)v118, 0LL);
                if ( !v118 )
                  goto LABEL_137;
                *(_QWORD *)(v118 + 16) = v116;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v118 + 16), (int32_t)v116, v119, v120);
                playedStageReinforcementsList = (WarBoardData_o *)*p_ratingBaseList;
                if ( !*p_ratingBaseList )
                  goto LABEL_137;
                v123 = (struct System_Int32_array *)playedStageReinforcementsList->fields.stageEntity;
                v124 = Method_System_Collections_Generic_List_WarBoardRatingBase__Add__;
                ++HIDWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( !v123 )
                  goto LABEL_137;
                v125 = SLODWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( (unsigned int)v125 >= v123->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)playedStageReinforcementsList,
                    (Il2CppObject *)v118,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
                }
                else
                {
                  v126 = &v123->obj.klass + v125;
                  LODWORD(playedStageReinforcementsList->fields.stageNpcMaster) = v125 + 1;
                  v126[4] = (Il2CppClass *)v118;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v126 + 4), v118, v121, v122);
                }
LABEL_121:
                v127 = (int32_t)v116->fields.stageEntity;
                dicRatingbaseCalcValue = this->fields.dicRatingbaseCalcValue;
                v129 = (WarBoardEvalValueSquare_CalcEval_o *)sub_1B887FC(WarBoardEvalValueSquare_CalcEval_TypeInfo);
                WarBoardEvalValueSquare_CalcEval___ctor(v129, 0LL);
                if ( !dicRatingbaseCalcValue )
                  goto LABEL_137;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                  v127,
                  (Il2CppObject *)v129,
                  (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
                LODWORD(v113) = ratingBaseIds->max_length;
                if ( (__int64)++v114 >= (int)v113 )
                  goto LABEL_123;
                continue;
              default:
                goto LABEL_121;
            }
          }
        }
      }
      goto LABEL_137;
    }
  }
LABEL_123:
  p_tacticalIds = (ServantStatusBattleListViewItem_o *)&npc->fields.tacticalIds;
  tacticalIds = npc->fields.tacticalIds;
  if ( !tacticalIds )
  {
    v132 = (System_Array_o *)sub_1B88658(int___TypeInfo, 5LL);
    v164.fields.value = Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v132, v164, 0LL);
    p_tacticalIds->klass = (ServantStatusBattleListViewItem_c *)v132;
    sub_1B88554(p_tacticalIds, (int32_t)v132, v133, v134);
    tacticalIds = (struct System_Int32_array *)p_tacticalIds->klass;
    if ( !p_tacticalIds->klass )
      goto LABEL_137;
  }
  v135 = *(_QWORD *)&tacticalIds->max_length;
  if ( (int)v135 >= 1 )
  {
    v136 = 0LL;
    while ( v136 < (unsigned int)v135 )
    {
      if ( !v156 )
        goto LABEL_137;
      v137 = tacticalIds->m_Items[v136 + 1];
      playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                          v156,
                                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !playedStageReinforcementsList )
        goto LABEL_137;
      playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
                                                          v137,
                                                          (const MethodInfo_311D934 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      v140 = (System_Collections_Generic_List_object__o *)*p_tacticalTrendList;
      if ( !*p_tacticalTrendList )
        goto LABEL_137;
      v141 = v140->fields._items;
      v142 = Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__;
      ++v140->fields._version;
      if ( !v141 )
        goto LABEL_137;
      v143 = v140->fields._size;
      v144 = playedStageReinforcementsList;
      if ( (unsigned int)v143 >= v141->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v140,
          (Il2CppObject *)playedStageReinforcementsList,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
      }
      else
      {
        v145 = &v141->obj.klass + v143;
        v140->fields._size = v143 + 1;
        v145[4] = (Il2CppClass *)v144;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v145 + 4), (int32_t)v144, v138, v139);
      }
      LODWORD(v135) = tacticalIds->max_length;
      if ( (__int64)++v136 >= (int)v135 )
        goto LABEL_136;
    }
    goto LABEL_138;
  }
LABEL_136:
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v148 = (WarBoardAiTargetCacher_o *)sub_1B887FC(WarBoardAiTargetCacher_TypeInfo);
  WarBoardAiTargetCacher___ctor(v148, forceId, groupId, 0LL);
  this->fields.aiTargetCacher = v148;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aiTargetCacher, (int32_t)v148, v149, v150);
}


void __fastcall WarBoardAIRoute__AddPiecePersonalityDic(
        WarBoardAIRoute_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute___c__DisplayClass43_0_o *v7; // x25
  System_Int32_array *Entity; // x0
  Il2CppObject *p_obj; // x1
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x21
  System_Func_T__TResult__o *v11; // x22
  Il2CppObject *Master_object; // x25
  Il2CppObject *v13; // x24
  Il2CppObject *v14; // x22
  WarBoardAIRoute_PiecePersonality_o *v15; // x21
  __int64 v16; // x8
  System_Int32_array *v17; // x25
  unsigned __int64 v18; // x29
  System_Collections_Generic_List_object__o *actionTrandList; // x26
  WarBoardActionTrendEntity_o *v20; // x28
  WarBoardAIRoute_ActionTrendInfo_o *v21; // x27
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  __int64 v28; // x8
  System_Int32_array *v29; // x23
  unsigned __int64 v30; // x19
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v34; // x9
  __int64 max_length; // x10
  Il2CppArrayBounds *v36; // x8
  WarBoardAIRoute___c__DisplayClass43_0_o *v37; // [xsp+8h] [xbp-78h]
  WarBoardAIRoute_o *v38; // [xsp+10h] [xbp-70h]
  WarBoardAIEntity_o *v39; // [xsp+18h] [xbp-68h]

  if ( (byte_4A58D5A & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardAIMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____);
    sub_1B885B0(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__);
    sub_1B885B0(&WarBoardAIRoute_PiecePersonality_TypeInfo);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__);
    sub_1B885B0(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
    byte_4A58D5A = 1;
  }
  v7 = (WarBoardAIRoute___c__DisplayClass43_0_o *)sub_1B887FC(WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass43_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_37;
  v7->fields.pieceIndex = pieceIndex;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  v11 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
  System_Func_KeyValuePair_int__object___bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    0LL);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__object___48815732(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v11,
         (const MethodInfo_2E8DE74 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  v37 = v7;
  v38 = this;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v15 = (WarBoardAIRoute_PiecePersonality_o *)sub_1B887FC(WarBoardAIRoute_PiecePersonality_TypeInfo);
  WarBoardAIRoute_PiecePersonality___ctor(v15, 0LL);
  if ( !Master_object )
    goto LABEL_37;
  Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   aiId,
                                   (const MethodInfo_311D934 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_37;
  v39 = (WarBoardAIEntity_o *)Entity;
  Entity = WarBoardAIEntity__GetActionTrendIds((WarBoardAIEntity_o *)Entity, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v16 = *(_QWORD *)&Entity->max_length;
  v17 = Entity;
  if ( (int)v16 >= 1 )
  {
    v18 = 0LL;
    while ( v18 < (unsigned int)v16 )
    {
      if ( !v13 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                                       v17->m_Items[v18 + 1],
                                       (const MethodInfo_311D934 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v15 )
          goto LABEL_37;
        actionTrandList = (System_Collections_Generic_List_object__o *)v15->fields.actionTrandList;
        v20 = (WarBoardActionTrendEntity_o *)Entity;
        v21 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1B887FC(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v21, v20, 0LL);
        if ( !actionTrandList )
          goto LABEL_37;
        items = actionTrandList->fields._items;
        v25 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++actionTrandList->fields._version;
        if ( !items )
          goto LABEL_37;
        size = actionTrandList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            actionTrandList,
            (Il2CppObject *)v21,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          actionTrandList->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v21;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v21, v22, v23);
        }
      }
      LODWORD(v16) = v17->max_length;
      if ( (__int64)++v18 >= (int)v16 )
        goto LABEL_22;
    }
LABEL_38:
    sub_1B88814(Entity, p_obj);
  }
LABEL_22:
  Entity = WarBoardAIEntity__GetRatingOffsetIds(v39, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v28 = *(_QWORD *)&Entity->max_length;
  v29 = Entity;
  if ( (int)v28 >= 1 )
  {
    v30 = 0LL;
    while ( v30 < (unsigned int)v28 )
    {
      if ( !v14 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
                                       v29->m_Items[v30 + 1],
                                       (const MethodInfo_311D934 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v15 )
          goto LABEL_37;
        p_obj = &Entity->obj;
        Entity = (System_Int32_array *)v15->fields.ratingOffsetList;
        if ( !Entity )
          goto LABEL_37;
        bounds = Entity->bounds;
        v34 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
        ++Entity->m_Items[0];
        if ( !bounds )
          goto LABEL_37;
        max_length = (int)Entity->max_length;
        if ( (unsigned int)max_length >= bounds[3].length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Entity,
            p_obj,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &bounds[max_length];
          Entity->max_length = max_length + 1;
          v36[4] = (Il2CppArrayBounds)p_obj;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v36[4], (int32_t)p_obj, v31, v32);
        }
      }
      LODWORD(v28) = v29->max_length;
      if ( (__int64)++v30 >= (int)v28 )
        goto LABEL_35;
    }
    goto LABEL_38;
  }
LABEL_35:
  Entity = (System_Int32_array *)v38->fields.piecePersonalityDic;
  if ( !Entity )
LABEL_37:
    sub_1B8880C(Entity, p_obj);
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)Entity,
    v37->fields.pieceIndex,
    (Il2CppObject *)v15,
    (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
}


void __fastcall WarBoardAIRoute__BeforeCreateRouteData(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *Instance; // x0
  __int64 v3; // x1
  _QWORD *v4; // x19
  System_Collections_Generic_List_object__o *v5; // x22
  System_Collections_Generic_List_object__o *v6; // x21
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
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
  int32_t v29; // w3
  System_Object_array *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  struct WarBoardSquareData_array *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  struct WarBoardItemData_array *v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  struct WarBoardTreasureData_array *v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  struct WarBoardWallData_array *v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_List_object__o *v45; // x25
  int32_t forceId; // w19
  int32_t groupId; // w20
  WarBoardAIRoute_AIRouteMasterData_o *v48; // x0
  int32_t v49; // w2
  struct WarBoardAIRoute_AIRouteMasterData_o *v50; // x21
  WarBoardAIRoute_o *v51; // x20
  int32_t v52; // w2
  int32_t v53; // w3
  System_Collections_Generic_Dictionary_int__uint__o *v54; // x19
  int32_t v55; // w2
  int32_t v56; // w3
  struct WarBoardPieceData_array *allAllyPiece; // x9
  int max_length; // w8
  unsigned int v59; // w10
  int32_t forceId_k__BackingField; // w8
  int32_t v61; // w9
  int32_t v62; // w1
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v64; // x20
  __int64 v65; // x9
  int *p_offset; // x10
  __int64 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v77; // x0
  __int64 v78; // x1
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x20
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  __int64 v81; // x1
  int v82; // w8
  unsigned int v83; // w9
  WarBoardActionTrendConditionEntity_o *v84; // x25
  struct System_Int32_array *conditionTypes; // x24
  __int64 v86; // x8
  unsigned __int64 v87; // x28
  int32_t v88; // w26
  WarBoardAIRoute___c__DisplayClass45_0_o *v89; // x29
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 ConditionType; // x0
  __int64 squareIndex; // x1
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexKeyItemData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_object__bool__o *v96; // x21
  __int64 v97; // x1
  Il2CppObject *v98; // x2
  System_Collections_Generic_Dictionary_int__object__o *v99; // x0
  int32_t v100; // w21
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x0
  _BOOL8 IsRegisteredTrendId; // x0
  __int64 v104; // x1
  System_Func_T__TResult__o *v105; // x19
  WarBoardAiTargetCacher_o *v106; // x19
  int64_t v107; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicIndividualityPutSqareIndex; // x21
  int64_t v109; // x19
  int64_t v110; // x23
  WarBoardAIRoute_TargetData_o *v111; // x22
  __int64 v112; // x0
  __int64 v113; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x19
  WarBoardAIRoute_o *v115; // x0
  const MethodInfo *v116; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicSquarePutSqareIndex; // x19
  int64_t v118; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_object__bool__o *v120; // x21
  WarBoardSquareData_o *v121; // x21
  int64_t v122; // x22
  WarBoardAIRoute_TargetData_o *v123; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *v124; // x21
  int64_t v125; // x0
  __int64 v126; // x8
  __int64 v127; // x9
  int *v128; // x10
  __int64 v129; // x21
  __int64 v130; // x0
  WarBoardAiTargetCacher_o *v131; // x20
  WarBoardAIRoute___c_c *v132; // x8
  System_Func_object__bool__o *_9__45_0; // x19
  Il2CppObject *v134; // x21
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v136; // w2
  int32_t v137; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v138; // x0
  WarBoardAIRoute_AdvantagePieceData_o *v139; // x20
  struct WarBoardPieceData_array *v140; // x22
  int v141; // w8
  int32_t v142; // w21
  unsigned int v143; // w23
  Il2CppClass **v144; // x8
  Il2CppClass *v145; // x25
  int32_t ClassId; // w19
  float Magnification; // s10
  float v148; // s11
  float v149; // s8
  float v150; // s9
  const MethodInfo *v151; // x1
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+10h] [xbp-110h]
  struct WarBoardAIRoute_AIRouteMasterData_o **p_aiRouteMasterData; // [xsp+18h] [xbp-108h]
  struct WarBoardPieceData_array *v154; // [xsp+20h] [xbp-100h]
  struct System_Collections_Generic_Dictionary_int__uint__o **p_placePieceData; // [xsp+28h] [xbp-F8h]
  unsigned int v156; // [xsp+34h] [xbp-ECh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-E8h]
  __int64 v158; // [xsp+40h] [xbp-E0h]
  unsigned int v159; // [xsp+4Ch] [xbp-D4h]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_IWarBoardObjectData__o *objectList; // [xsp+70h] [xbp-B0h]
  WarBoardAIRoute_DesignationItemData_o *v163; // [xsp+78h] [xbp-A8h]
  WarBoardAIRoute_PutSquareTarget_o *v164; // [xsp+80h] [xbp-A0h]
  bool notSquareTarget; // [xsp+88h] [xbp-98h] BYREF
  int32_t condType; // [xsp+8Ch] [xbp-94h] BYREF
  Il2CppObject *value; // [xsp+98h] [xbp-88h] BYREF

  if ( (byte_4A58D5C & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIRoute_AIRouteMasterData_TypeInfo);
    sub_1B885B0(&WarBoardAIRoute_AdvantagePieceData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&WarBoardAIRoute_DesignationItemData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__uint__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
    sub_1B885B0(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_1B885B0(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
    sub_1B885B0(&System_Func_WarBoardItemData__bool__TypeInfo);
    sub_1B885B0(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
    sub_1B885B0(&WarBoardAIRoute_PutSquareTarget_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&SvtClassAttri_TypeInfo);
    sub_1B885B0(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_1B885B0(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__);
    sub_1B885B0(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
    sub_1B885B0(&WarBoardAIRoute___c_TypeInfo);
    sub_1B885B0(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__);
    byte_4A58D5C = 1;
  }
  value = 0LL;
  condType = 0;
  notSquareTarget = 0;
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_223;
  v4 = *(_QWORD **)&Instance[5].fields._freeCount;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v4 )
    goto LABEL_223;
  v10 = v4[6];
  if ( !v10 )
    goto LABEL_223;
  v11 = *(_DWORD *)(v10 + 24);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v11 )
LABEL_224:
        sub_1B88814(Instance, v3);
      if ( !v7 )
        break;
      v13 = *(_QWORD *)(v10 + 8LL * (int)v12 + 32);
      items = v7->fields._items;
      v15 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v13,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v13;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), v13, v8, v9);
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
          if ( (unsigned int)v21 >= v19->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v13,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &v19->obj.klass + v21;
            v5->fields._size = v21 + 1;
            v22[4] = (Il2CppClass *)v13;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), v13, v8, v9);
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
          if ( (unsigned int)v25 >= v23->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v13,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &v23->obj.klass + v25;
            v6->fields._size = v25 + 1;
            v26[4] = (Il2CppClass *)v13;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), v13, v8, v9);
          }
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                (WarBoardPieceData_o *)v13,
                                                                                0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            this->fields.enemyMasterSquareIndex = *(_DWORD *)(v13 + 64);
        }
      }
      v11 = *(_DWORD *)(v10 + 24);
      if ( (int)++v12 >= v11 )
        goto LABEL_33;
    }
LABEL_223:
    sub_1B8880C(Instance, v3);
  }
LABEL_33:
  if ( !v5 )
    goto LABEL_223;
  v27 = System_Collections_Generic_List_object___ToArray(
          v5,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allAllyPiece = (struct WarBoardPieceData_array *)v27;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.allAllyPiece, (int32_t)v27, v28, v29);
  if ( !v6 )
    goto LABEL_223;
  v30 = System_Collections_Generic_List_object___ToArray(
          v6,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v30;
  p_allEnemyPiece = &this->fields.allEnemyPiece;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.allEnemyPiece, (int32_t)v30, v31, v32);
  v33 = (struct WarBoardSquareData_array *)v4[7];
  this->fields.allSquare = v33;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.allSquare, (int32_t)v33, v34, v35);
  v36 = (struct WarBoardItemData_array *)v4[9];
  this->fields.allItemData = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.allItemData, (int32_t)v36, v37, v38);
  v39 = (struct WarBoardTreasureData_array *)v4[10];
  this->fields.allTreasureData = v39;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.allTreasureData, (int32_t)v39, v40, v41);
  v42 = (struct WarBoardWallData_array *)v4[11];
  this->fields.allWallData = v42;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.allWallData, (int32_t)v42, v43, v44);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictionaryCreateRouteDataEvalValue;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_object__float___Clear(
    Instance,
    (const MethodInfo_31D045C *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_31FFFB8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_31FFFB8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_31FFFB8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_223;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v45 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v45 )
    goto LABEL_223;
  System_Collections_Generic_List_object___AddRange(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allItemData,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allTreasureData,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWallData,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  objectList = (System_Collections_Generic_List_IWarBoardObjectData__o *)v45;
  System_Collections_Generic_List_object___AddRange(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)v7,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v48 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_1B887FC(WarBoardAIRoute_AIRouteMasterData_TypeInfo);
  v49 = groupId;
  v50 = v48;
  v51 = this;
  WarBoardAIRoute_AIRouteMasterData___ctor(v48, forceId, v49, 0LL);
  this->fields.aiRouteMasterData = v50;
  p_aiRouteMasterData = &this->fields.aiRouteMasterData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aiRouteMasterData, (int32_t)v50, v52, v53);
  v54 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v54,
    (const MethodInfo_3178BF8 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  this->fields.placePieceData = v54;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.placePieceData, (int32_t)v54, v55, v56);
  allAllyPiece = this->fields.allAllyPiece;
  p_placePieceData = &this->fields.placePieceData;
  if ( !allAllyPiece )
    goto LABEL_223;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v59 = 0;
    v154 = this->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v59 >= max_length )
        goto LABEL_224;
      pieceData = allAllyPiece->m_Items[v59];
      if ( !pieceData )
        goto LABEL_223;
      v156 = v59;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_223;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
                                                                            pieceData->fields._nowSquareIndex_k__BackingField,
                                                                            (const MethodInfo_31797A8 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_199;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_223;
      System_Collections_Generic_Dictionary_int__uint___Add(
        (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
        pieceData->fields._nowSquareIndex_k__BackingField,
        pieceData->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_31795BC *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
      forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
      v61 = v51->fields.forceId;
      if ( forceId_k__BackingField != v61 )
        goto LABEL_57;
      if ( pieceData->fields._groupId_k__BackingField == v51->fields.groupId )
        break;
LABEL_58:
      if ( pieceData->fields._groupId_k__BackingField == v51->fields.groupId )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
        if ( !*p_aiRouteMasterData )
          goto LABEL_223;
        v62 = 2;
        goto LABEL_61;
      }
LABEL_62:
      v163 = (WarBoardAIRoute_DesignationItemData_o *)sub_1B887FC(WarBoardAIRoute_DesignationItemData_TypeInfo);
      WarBoardAIRoute_DesignationItemData___ctor(v163, 0LL);
      v164 = (WarBoardAIRoute_PutSquareTarget_o *)sub_1B887FC(WarBoardAIRoute_PutSquareTarget_TypeInfo);
      WarBoardAIRoute_PutSquareTarget___ctor(v164, 0LL);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v51->fields.piecePersonalityDic;
      if ( !Instance )
        goto LABEL_223;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                                                            pieceData->fields._index_k__BackingField,
                                                                            &value,
                                                                            (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)value;
        if ( !value )
          goto LABEL_223;
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
                                                                              (WarBoardAIRoute_PiecePersonality_o *)value,
                                                                              0LL);
        if ( !Instance )
          goto LABEL_223;
        klass = Instance->klass;
        v64 = Instance;
        v65 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
          {
            --v65;
            p_offset += 4;
            if ( !v65 )
              goto LABEL_70;
          }
          v67 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_70:
          v67 = sub_1BDA590(
                  Instance,
                  System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                  0LL);
        }
        v158 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v67)(
                 v64,
                 *(_QWORD *)(v67 + 8));
        if ( !v158 )
          sub_1B8880C(0LL, v68);
        while ( 1 )
        {
LABEL_73:
          v69 = *(_QWORD *)v158;
          v70 = *(unsigned __int16 *)(*(_QWORD *)v158 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v158 + 302LL) )
          {
            v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v71 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v70;
              v71 += 4;
              if ( !v70 )
                goto LABEL_77;
            }
            v72 = v69 + 16LL * *v71 + 312;
          }
          else
          {
LABEL_77:
            v72 = sub_1BDA590(v158, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v158, *(_QWORD *)(v72 + 8)) & 1) == 0 )
            break;
          v73 = *(_QWORD *)v158;
          v74 = *(unsigned __int16 *)(*(_QWORD *)v158 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v158 + 302LL) )
          {
            v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__c **)v75 - 1) != System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
            {
              --v74;
              v75 += 4;
              if ( !v74 )
                goto LABEL_84;
            }
            v76 = v73 + 16LL * *v75 + 312;
          }
          else
          {
LABEL_84:
            v76 = sub_1BDA590(
                    v158,
                    System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                    0LL);
          }
          v77 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v76)(
                                                       v158,
                                                       *(_QWORD *)(v76 + 8));
          if ( !v77 )
            sub_1B8880C(0LL, v78);
          Entity_k__BackingField = v77->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v77, 0LL);
          if ( !ConditionEntityArray )
            sub_1B8880C(0LL, v81);
          v82 = ConditionEntityArray->max_length;
          if ( v82 >= 1 )
          {
            v83 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v83 >= v82 )
                sub_1B88814(ConditionEntityArray, v81);
              v84 = ConditionEntityArray->m_Items[v83];
              if ( !v84 )
                sub_1B8880C(ConditionEntityArray, v81);
              conditionTypes = v84->fields.conditionTypes;
              if ( !conditionTypes )
                sub_1B8880C(ConditionEntityArray, v81);
              v86 = *(_QWORD *)&conditionTypes->max_length;
              v159 = v83;
              if ( (int)v86 >= 1 )
                break;
LABEL_137:
              ConditionEntityArray = condEntityArray;
              v82 = condEntityArray->max_length;
              v83 = v159 + 1;
              if ( (int)(v159 + 1) >= v82 )
                goto LABEL_73;
            }
            v87 = 0LL;
            while ( 2 )
            {
              if ( v87 >= (unsigned int)v86 )
                sub_1B88814(ConditionEntityArray, v81);
              v88 = conditionTypes->m_Items[v87 + 1];
              v89 = (WarBoardAIRoute___c__DisplayClass45_0_o *)sub_1B887FC(WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
              WarBoardAIRoute___c__DisplayClass45_0___ctor(v89, 0LL);
              if ( !v89 )
                sub_1B8880C(v90, v91);
              v89->fields.squareIndex = -1;
              ConditionType = WarBoardActionTrendConditionEntity__GetConditionType(v84, v88, 0LL);
              if ( (int)ConditionType <= 39 )
              {
                if ( (_DWORD)ConditionType == 23 || (_DWORD)ConditionType == 24 )
                  goto LABEL_104;
LABEL_136:
                squareIndex = (unsigned int)v89->fields.squareIndex;
              }
              else
              {
                if ( (_DWORD)ConditionType != 40 && (_DWORD)ConditionType != 41 && (_DWORD)ConditionType != 42 )
                  goto LABEL_136;
LABEL_104:
                squareIndex = (unsigned int)v84->fields.value;
                v89->fields.squareIndex = squareIndex;
              }
              if ( (_DWORD)squareIndex != -1 )
              {
                if ( !v163 )
                  sub_1B8880C(ConditionType, squareIndex);
                dicSquareIndexKeyItemData = (System_Collections_Generic_Dictionary_int__object__o *)v163->fields.dicSquareIndexKeyItemData;
                if ( !dicSquareIndexKeyItemData )
                  sub_1B8880C(0LL, squareIndex);
                if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                        dicSquareIndexKeyItemData,
                        squareIndex,
                        (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__) )
                {
                  allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allItemData;
                  v96 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardItemData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v96,
                    (Il2CppObject *)v89,
                    Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                    0LL);
                  v98 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
                          allItemData,
                          (System_Func_TSource__bool__o *)v96,
                          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                  if ( v98 )
                  {
                    v99 = (System_Collections_Generic_Dictionary_int__object__o *)v163->fields.dicSquareIndexKeyItemData;
                    if ( !v99 )
                      sub_1B8880C(0LL, v97);
                    System_Collections_Generic_Dictionary_int__object___Add(
                      v99,
                      v89->fields.squareIndex,
                      v98,
                      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                  }
                }
              }
              v89->fields.squareIndex = -1;
              ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)WarBoardActionTrendConditionEntity__GetConditionType(
                                                                                   v84,
                                                                                   v88,
                                                                                   0LL);
              if ( (_DWORD)ConditionEntityArray == 74 || (_DWORD)ConditionEntityArray == 75 )
              {
                v100 = v84->fields.value;
                v89->fields.squareIndex = v100;
              }
              else
              {
                if ( (unsigned int)((_DWORD)ConditionEntityArray - 127) <= 1 )
                {
                  if ( !Entity_k__BackingField )
                    sub_1B8880C(ConditionEntityArray, v81);
                  aiTargetCacher = this->fields.aiTargetCacher;
                  TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  if ( !aiTargetCacher )
                    sub_1B8880C(TrendKey, TrendKey);
                  IsRegisteredTrendId = WarBoardAiTargetCacher__IsRegisteredTrendId(aiTargetCacher, TrendKey, 0LL);
                  if ( !IsRegisteredTrendId )
                  {
                    v105 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
                    System_Func_Int32Enum__bool____ctor(
                      v105,
                      0LL,
                      Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                      0LL);
                    WarBoardActionTrendConditionMaster__HasMatchCondition(
                      condEntityArray,
                      (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v105,
                      &condType,
                      0LL);
                    v106 = this->fields.aiTargetCacher;
                    v107 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                    if ( !v106 )
                      sub_1B8880C(v107, v107);
                    WarBoardAiTargetCacher__Register(v106, v107, v84, condType, 0LL);
                  }
                  if ( !v164 )
                    sub_1B8880C(IsRegisteredTrendId, v104);
                  dicIndividualityPutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v164->fields.dicIndividualityPutSqareIndex;
                  v109 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  v110 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  v111 = (WarBoardAIRoute_TargetData_o *)sub_1B887FC(WarBoardAIRoute_TargetData_TypeInfo);
                  WarBoardAIRoute_TargetData___ctor(v111, v110, v88, 0LL);
                  if ( !dicIndividualityPutSqareIndex )
                    sub_1B8880C(v112, v113);
                  System_Collections_Generic_Dictionary_long__object___set_Item(
                    dicIndividualityPutSqareIndex,
                    v109,
                    (Il2CppObject *)v111,
                    (const MethodInfo_31AC188 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                }
                v100 = v89->fields.squareIndex;
              }
              if ( v100 != -1 )
              {
                if ( !v164 )
                  sub_1B8880C(ConditionEntityArray, v81);
                if ( !Entity_k__BackingField )
                  sub_1B8880C(ConditionEntityArray, v81);
                dicObjectPutSquareIndex = v164->fields.dicObjectPutSquareIndex;
                v115 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                WarBoardAIRoute__RegisterTargetObjectToDic(
                  v115,
                  dicObjectPutSquareIndex,
                  objectList,
                  v100,
                  (int64_t)v115,
                  v88,
                  &notSquareTarget,
                  v116);
                if ( !notSquareTarget )
                {
                  dicSquarePutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v164->fields.dicSquarePutSqareIndex;
                  v118 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  if ( !dicSquarePutSqareIndex )
                    sub_1B8880C(v118, v118);
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__object___ContainsKey(
                                                                                       dicSquarePutSqareIndex,
                                                                                       v118,
                                                                                       (const MethodInfo_31AC390 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allSquare;
                    v120 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardSquareData__bool__TypeInfo);
                    System_Func_object__bool____ctor(
                      v120,
                      (Il2CppObject *)v89,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                      0LL);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                                                                                         allSquare,
                                                                                         (System_Func_TSource__bool__o *)v120,
                                                                                         (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                    v121 = (WarBoardSquareData_o *)ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v122 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                      v123 = (WarBoardAIRoute_TargetData_o *)sub_1B887FC(WarBoardAIRoute_TargetData_TypeInfo);
                      WarBoardAIRoute_TargetData___ctor_35302408(v123, v121, v122, v88, 0LL);
                      v124 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v164->fields.dicSquarePutSqareIndex;
                      v125 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                      if ( !v124 )
                        sub_1B8880C(v125, v125);
                      System_Collections_Generic_Dictionary_long__object___Add(
                        v124,
                        v125,
                        (Il2CppObject *)v123,
                        (const MethodInfo_31AC19C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                    }
                  }
                }
              }
              LODWORD(v86) = conditionTypes->max_length;
              if ( (__int64)++v87 >= (int)v86 )
                goto LABEL_137;
              continue;
            }
          }
        }
        v126 = *(_QWORD *)v158;
        v127 = *(unsigned __int16 *)(*(_QWORD *)v158 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v158 + 302LL) )
        {
          v128 = (int *)(*(_QWORD *)(v126 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v128 - 1) != System_IDisposable_TypeInfo )
          {
            --v127;
            v128 += 4;
            if ( !v127 )
              goto LABEL_143;
          }
          v129 = v158;
          v130 = v126 + 16LL * *v128 + 312;
        }
        else
        {
LABEL_143:
          v129 = v158;
          v130 = sub_1BDA590(v158, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v130)(v129, *(_QWORD *)(v130 + 8));
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.aiTargetCacher;
        if ( !Instance )
          goto LABEL_223;
        WarBoardAiTargetCacher__ClearTargetObject((WarBoardAiTargetCacher_o *)Instance, 0LL);
        v131 = this->fields.aiTargetCacher;
        v132 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v132 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__45_0 = (System_Func_object__bool__o *)v132->static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !v132->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v132);
            v132 = WarBoardAIRoute___c_TypeInfo;
          }
          v134 = (Il2CppObject *)v132->static_fields->__9;
          _9__45_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__45_0,
            v134,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            0LL);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v136, v137);
        }
        v138 = System_Linq_Enumerable__Where_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_object_(
                                                                              v138,
                                                                              (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v131 )
          goto LABEL_223;
        WarBoardAiTargetCacher__AggregateTargetObject(v131, (IWarBoardObjectData_array *)Instance, 0LL);
        v51 = this;
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
        if ( !Instance )
          goto LABEL_223;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v163,
          (const MethodInfo_31FFE30 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
        if ( !Instance )
          goto LABEL_223;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v164,
          (const MethodInfo_31FFE30 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isServant(
                                                                              pieceData,
                                                                              0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v139 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_1B887FC(WarBoardAIRoute_AdvantagePieceData_TypeInfo);
          WarBoardAIRoute_AdvantagePieceData___ctor(v139, 0LL);
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pieceData->fields._battleServant_k__BackingField;
          if ( !Instance )
            goto LABEL_223;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleServantData__getClassId(
                                                                                (BattleServantData_o *)Instance,
                                                                                0LL);
          v140 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_223;
          v141 = v140->max_length;
          if ( v141 >= 1 )
          {
            v142 = (int)Instance;
            v143 = 0;
            while ( 2 )
            {
              if ( v143 >= v141 )
                goto LABEL_224;
              v144 = &v140->obj.klass + (int)v143;
              v145 = v144[4];
              if ( !v145 )
                goto LABEL_223;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                    (WarBoardPieceData_o *)v144[4],
                                                                                    0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_196;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v145->_1.fields;
              if ( !Instance )
                goto LABEL_223;
              ClassId = BattleServantData__getClassId((BattleServantData_o *)Instance, 0LL);
              if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
              Magnification = SvtClassAttri__getMagnification(v142, ClassId, 0LL);
              v148 = SvtClassAttri__getMagnification(ClassId, v142, 0LL);
              v149 = SvtClassAttri__getMagnification(v142, ClassId, 0LL);
              v150 = SvtClassAttri__getMagnification(ClassId, v142, 0LL);
              if ( Magnification <= 1.0 )
              {
                if ( v148 >= 1.0 )
                  goto LABEL_175;
                if ( !v139 )
                  goto LABEL_223;
              }
              else
              {
                if ( !v139 )
                  goto LABEL_223;
                Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v139->fields.dicAttackAdvantageServant;
                if ( !Instance )
                  goto LABEL_223;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                  (int32_t)v145->_1.element_class,
                  (Il2CppObject *)v145,
                  (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                v139->fields.flagNow |= 0x4000uLL;
                if ( v148 >= 1.0 )
                {
LABEL_175:
                  if ( v149 >= 1.0 )
                  {
                    if ( v150 > 1.0 )
                    {
                      if ( !v139 )
                        goto LABEL_223;
                      goto LABEL_182;
                    }
                  }
                  else
                  {
                    if ( !v139 )
                      goto LABEL_223;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v139->fields.dicAttackDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_223;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v145->_1.element_class,
                      (Il2CppObject *)v145,
                      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v139->fields.flagNow |= 0x8000uLL;
                    if ( v150 <= 1.0 )
                      goto LABEL_184;
LABEL_182:
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v139->fields.dicDefenseDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_223;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v145->_1.element_class,
                      (Il2CppObject *)v145,
                      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v139->fields.flagNow |= 0x20000uLL;
                  }
LABEL_184:
                  if ( Magnification <= 1.0 || v148 >= 1.0 )
                  {
                    if ( v149 < 1.0 && v150 > 1.0 )
                    {
                      if ( !v139 )
                        goto LABEL_223;
LABEL_194:
                      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v139->fields.dicClassDisAdvantageServant;
                      if ( !Instance )
                        goto LABEL_223;
                      System_Collections_Generic_Dictionary_int__object___Add(
                        (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                        (int32_t)v145->_1.element_class,
                        (Il2CppObject *)v145,
                        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                      v139->fields.flagNow |= 0x2000uLL;
                    }
                  }
                  else
                  {
                    if ( !v139 )
                      goto LABEL_223;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v139->fields.dicClassAdvantageServant;
                    if ( !Instance )
                      goto LABEL_223;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v145->_1.element_class,
                      (Il2CppObject *)v145,
                      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v139->fields.flagNow |= 0x1000uLL;
                    if ( v149 < 1.0 && v150 > 1.0 )
                      goto LABEL_194;
                  }
LABEL_196:
                  v141 = v140->max_length;
                  if ( (int)++v143 >= v141 )
                    goto LABEL_197;
                  continue;
                }
              }
              break;
            }
            Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v139->fields.dicDefenseAdvantageServant;
            if ( !Instance )
              goto LABEL_223;
            System_Collections_Generic_Dictionary_int__object___Add(
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              (int32_t)v145->_1.element_class,
              (Il2CppObject *)v145,
              (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
            v139->fields.flagNow |= 0x10000uLL;
            goto LABEL_175;
          }
LABEL_197:
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
          if ( !Instance )
            goto LABEL_223;
          System_Collections_Generic_Dictionary_uint__object___Add(
            Instance,
            pieceData->fields._uniqueIndex_k__BackingField,
            (Il2CppObject *)v139,
            (const MethodInfo_31FFE30 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          v51 = this;
        }
      }
LABEL_199:
      allAllyPiece = v154;
      max_length = v154->max_length;
      v59 = v156 + 1;
      if ( (int)(v156 + 1) >= max_length )
        goto LABEL_221;
    }
    if ( WarBoardPieceData__get_isMaster(pieceData, 0LL) )
    {
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_223;
      v62 = 0;
LABEL_61:
      WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        (WarBoardAIRoute_AIRouteMasterData_o *)Instance,
        v62,
        pieceData,
        0LL);
      goto LABEL_62;
    }
    forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
    v61 = v51->fields.forceId;
LABEL_57:
    if ( forceId_k__BackingField != v61 )
      goto LABEL_62;
    goto LABEL_58;
  }
LABEL_221:
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
  if ( !*p_aiRouteMasterData )
    goto LABEL_223;
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData((WarBoardAIRoute_AIRouteMasterData_o *)Instance, 1, 0LL, 0LL);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(v51, v151);
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

  if ( (byte_4A58D66 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    this = (WarBoardAIRoute_o *)sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D66 = 1;
  }
  if ( !alreadyGetItemList )
    sub_1B8880C(this, *(_QWORD *)&targetSquare);
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 0;
  }
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
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
  WarBoardAIRoute_RouteData_o *v5; // x0
  const MethodInfo *v9; // x3
  WarBoardAIRoute_RouteData_o *v10; // x22
  const MethodInfo *v11; // x3
  WarBoardAIRoute_RouteData_o *v12; // x22
  const MethodInfo *v13; // x3
  WarBoardAIRoute_RouteData_o *v14; // x22
  const MethodInfo *v15; // x3
  WarBoardAIRoute_RouteData_o *v16; // x22
  const MethodInfo *v17; // x3
  WarBoardAIRoute_RouteData_o *v18; // x22
  const MethodInfo *v19; // x3
  WarBoardAIRoute_RouteData_o *v20; // x21

  v5 = *routeData;
  if ( !*routeData || !advantagePieceData )
    goto LABEL_27;
  v5->fields.flagNow |= advantagePieceData->fields.flagNow;
  if ( WarBoardAIRoute_RouteData__HasFlag(v5, 4096LL, 0LL) )
  {
    v10 = *routeData;
    v5 = (WarBoardAIRoute_RouteData_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                          advantagePieceData->fields.dicClassAdvantageServant,
                                          advantagePieceData->fields.baseCARange,
                                          actionSquareIndex,
                                          v9);
    if ( !v10 )
      goto LABEL_27;
    v10->fields.isMoveByServantAndClassAdvantageServantRange = (int)v5;
  }
  v5 = *routeData;
  if ( !*routeData )
    goto LABEL_27;
  if ( WarBoardAIRoute_RouteData__HasFlag(v5, 0x2000LL, 0LL) )
  {
    v12 = *routeData;
    v5 = (WarBoardAIRoute_RouteData_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                          advantagePieceData->fields.dicClassDisAdvantageServant,
                                          advantagePieceData->fields.baseCDARange,
                                          actionSquareIndex,
                                          v11);
    if ( !v12 )
      goto LABEL_27;
    v12->fields.isMoveByServantAndClassDisAdvantageServantRange = (int)v5;
  }
  v5 = *routeData;
  if ( !*routeData )
    goto LABEL_27;
  if ( WarBoardAIRoute_RouteData__HasFlag(v5, 0x4000LL, 0LL) )
  {
    v14 = *routeData;
    v5 = (WarBoardAIRoute_RouteData_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                          advantagePieceData->fields.dicAttackAdvantageServant,
                                          advantagePieceData->fields.baseAARange,
                                          actionSquareIndex,
                                          v13);
    if ( !v14 )
      goto LABEL_27;
    v14->fields.isMoveByServantAndAttackAdvantageServantRange = (int)v5;
  }
  v5 = *routeData;
  if ( !*routeData )
    goto LABEL_27;
  if ( WarBoardAIRoute_RouteData__HasFlag(v5, 0x8000LL, 0LL) )
  {
    v16 = *routeData;
    v5 = (WarBoardAIRoute_RouteData_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                          advantagePieceData->fields.dicAttackDisAdvantageServant,
                                          advantagePieceData->fields.baseADARange,
                                          actionSquareIndex,
                                          v15);
    if ( !v16 )
      goto LABEL_27;
    v16->fields.isMoveByServantAndAttackDisAdvantageServantRange = (int)v5;
  }
  v5 = *routeData;
  if ( !*routeData )
    goto LABEL_27;
  if ( WarBoardAIRoute_RouteData__HasFlag(v5, 0x10000LL, 0LL) )
  {
    v18 = *routeData;
    v5 = (WarBoardAIRoute_RouteData_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                          advantagePieceData->fields.dicDefenseAdvantageServant,
                                          advantagePieceData->fields.baseDARange,
                                          actionSquareIndex,
                                          v17);
    if ( !v18 )
      goto LABEL_27;
    v18->fields.isMoveByServantAndDefenseAdvantageServantRange = (int)v5;
  }
  v5 = *routeData;
  if ( !*routeData )
    goto LABEL_27;
  if ( !WarBoardAIRoute_RouteData__HasFlag(v5, 0x20000LL, 0LL) )
    return;
  v20 = *routeData;
  v5 = (WarBoardAIRoute_RouteData_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                        advantagePieceData->fields.dicDefenseDisAdvantageServant,
                                        advantagePieceData->fields.baseDDARange,
                                        actionSquareIndex,
                                        v19);
  if ( !v20 )
LABEL_27:
    sub_1B8880C(v5, routeData);
  v20->fields.isMoveByServantAndDefenseDisAdvantageServantRange = (int)v5;
}


void __fastcall WarBoardAIRoute__Clear(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *v2; // x19
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4A58D58 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1B885B0(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__);
    byte_4A58D58 = 1;
  }
  allRouteList = v2->fields.allRouteList;
  if ( !allRouteList )
    sub_1B8880C(this, method);
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
  int32_t v7; // w19
  int32_t key; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  int32_t v10; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+0h] [xbp-80h] BYREF

  v6 = dicPieceList;
  if ( (byte_4A58D65 & 1) == 0 )
  {
    sub_1B885B0(&AStarSearch_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    dicPieceList = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    byte_4A58D65 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !v6 )
    sub_1B8880C(dicPieceList, *(_QWORD *)&baseRange);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v7 = 3;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v12,
            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v12.fields._current.fields.key;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                0LL,
                                                                actionIndex,
                                                                key,
                                                                0,
                                                                0LL,
                                                                0LL);
    v10 = System_Linq_Enumerable__Count_int_(v9, (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v10 < baseRange )
    {
      v7 = 1;
      break;
    }
    if ( v10 == baseRange )
      v7 = 2;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v12,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  return v7;
}


void __fastcall WarBoardAIRoute__CreateOutOfWarningAreaToDistance(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v2; // x21
  struct System_Collections_Generic_Dictionary_int__int__o **p_dicOutOfWarningAreaRange; // x20
  int32_t v4; // w2
  int32_t v5; // w3
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
  int32_t name; // w24
  int32_t v20; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  int32_t v23; // w1
  const MethodInfo_3164E88 *v24; // x3
  int32_t v25; // w2
  struct System_Collections_Generic_Dictionary_int__int__o **v26; // [xsp+0h] [xbp-70h]

  if ( (byte_4A58D71 & 1) == 0 )
  {
    sub_1B885B0(&AStarSearch_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    byte_4A58D71 = 1;
  }
  v2 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v2,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v2;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicOutOfWarningAreaRange, (int32_t)v2, v4, v5);
  allSquare = this->fields.allSquare;
  if ( !allSquare )
LABEL_33:
    sub_1B8880C(IsFlag, v7);
  max_length = allSquare->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    v26 = &this->fields.dicOutOfWarningAreaRange;
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
                                                                      0LL);
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
                                                                            0LL);
            if ( ((unsigned __int8)IsFlag & 1) != 0 )
              goto LABEL_37;
            name = (int32_t)v12->_1.name;
            v20 = (int32_t)v18->_1.name;
            if ( !AStarSearch_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
            v21 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                         0LL,
                                                                         name,
                                                                         v20,
                                                                         0,
                                                                         0LL,
                                                                         0LL);
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__Count_int_(
                                                                            v21,
                                                                            (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
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
          sub_1B88814(IsFlag, v7);
        }
        v16 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        IsFlag = *v26;
        if ( !*v26 )
          goto LABEL_33;
        v23 = (int32_t)v12->_1.name;
        v24 = (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v25 = v16;
      }
      else
      {
        IsFlag = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v23 = (int32_t)v12->_1.name;
        v24 = (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v25 = 0;
      }
      System_Collections_Generic_Dictionary_int__int___Add(IsFlag, v23, v25, v24);
      max_length = allSquare->max_length;
      ++v10;
    }
    while ( v10 < max_length );
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
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A58D5E & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
    byte_4A58D5E = 1;
  }
  v9 = sub_1B887FC(WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
  WarBoardAIRoute__CreateRouteData_d__47___ctor((WarBoardAIRoute__CreateRouteData_d__47_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 56), (int32_t)piecePlaceData, v14, v15);
  *(_DWORD *)(v9 + 40) = searchCount;
  *(_QWORD *)(v9 + 48) = routeDataList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)routeDataList, v16, v17);
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
  uint32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A58D76 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    this = (WarBoardAIRoute_o *)sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D76 = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_1B8880C(this, basePiece);
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_317AC54 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
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


WarBoardAIRoute_AdvantagePieceData_o *__fastcall WarBoardAIRoute__GetAdvantagePieceData(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v6; // x21
  WarBoardAIRoute_AdvantagePieceData_o *v7; // x20
  _BOOL8 HasFlag_35300500; // x0
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
  if ( (byte_4A58D74 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__);
    byte_4A58D74 = 1;
  }
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v6->fields.dicUniqueKeyAdvantagePieceData) == 0LL
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_uint__object___get_Item(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                      basePiece->fields._uniqueIndex_k__BackingField,
                                      (const MethodInfo_31FFD90 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0LL )
  {
    sub_1B8880C(this, basePiece);
  }
  v7 = (WarBoardAIRoute_AdvantagePieceData_o *)this;
  HasFlag_35300500 = WarBoardAIRoute_RouteData__HasFlag_35300500(
                       *(_QWORD *)&this->fields.TEMP_SEARCH_DEPTH,
                       4096LL,
                       0LL);
  if ( HasFlag_35300500 )
    v7->fields.baseCARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)HasFlag_35300500,
                               v7->fields.dicClassAdvantageServant,
                               baseSquareIndex,
                               v9);
  v10 = WarBoardAIRoute_RouteData__HasFlag_35300500(v7->fields.flagNow, 0x2000LL, 0LL);
  if ( v10 )
    v7->fields.baseCDARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v10,
                                v7->fields.dicClassDisAdvantageServant,
                                baseSquareIndex,
                                v11);
  v12 = WarBoardAIRoute_RouteData__HasFlag_35300500(v7->fields.flagNow, 0x4000LL, 0LL);
  if ( v12 )
    v7->fields.baseAARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v12,
                               v7->fields.dicAttackAdvantageServant,
                               baseSquareIndex,
                               v13);
  v14 = WarBoardAIRoute_RouteData__HasFlag_35300500(v7->fields.flagNow, 0x8000LL, 0LL);
  if ( v14 )
    v7->fields.baseADARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v14,
                                v7->fields.dicAttackDisAdvantageServant,
                                baseSquareIndex,
                                v15);
  v16 = WarBoardAIRoute_RouteData__HasFlag_35300500(v7->fields.flagNow, 0x10000LL, 0LL);
  if ( v16 )
    v7->fields.baseDARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v16,
                               v7->fields.dicDefenseAdvantageServant,
                               baseSquareIndex,
                               v17);
  v18 = WarBoardAIRoute_RouteData__HasFlag_35300500(v7->fields.flagNow, 0x20000LL, 0LL);
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

  if ( (byte_4A58D70 & 1) == 0 )
  {
    sub_1B885B0(&AStarSearch_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    byte_4A58D70 = 1;
  }
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v10 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v10,
    (const MethodInfo_31F6294 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
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
        sub_1B88814(isMaster, v12);
      v16 = allEnemyPiece->m_Items[v15];
      if ( !v16 )
        break;
      nowSquareIndex_k__BackingField = v16->fields._nowSquareIndex_k__BackingField;
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   nowSquareIndex_k__BackingField,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      isMaster = System_Linq_Enumerable__Count_int_(
                   v18,
                   (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v10 )
        break;
      v19 = isMaster;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v10,
        v16->fields._uniqueIndex_k__BackingField,
        isMaster,
        (const MethodInfo_31F6C58 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
      if ( *servantAndEnemyRange == -1 || v19 < *servantAndEnemyRange )
        *servantAndEnemyRange = v19;
      isMaster = WarBoardPieceData__get_isMaster(v16, 0LL);
      if ( (isMaster & 1) != 0 && (*servantAndEnemyMasterRange == -1 || v19 < *servantAndEnemyMasterRange) )
        *servantAndEnemyMasterRange = v19;
      max_length = allEnemyPiece->max_length;
      if ( (int)++v15 >= max_length )
        return v10;
    }
LABEL_20:
    sub_1B8880C(isMaster, v12);
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

  if ( (byte_4A58D61 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__);
    sub_1B885B0(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
    byte_4A58D61 = 1;
  }
  v7 = (WarBoardAIRoute___c__DisplayClass51_0_o *)sub_1B887FC(WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass51_0___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.masterSquareIndex = masterSquareIndex, (aiRouteMasterData = this->fields.aiRouteMasterData) == 0LL)
    || !piecePlaceData )
  {
    sub_1B8880C(v8, v9);
  }
  masterType = aiRouteMasterData->fields.masterType;
  Keys = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                                piecePlaceData,
                                                                (const MethodInfo_3179280 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  if ( masterType != 1 )
  {
    v13 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      0LL);
    Keys = System_Linq_Enumerable__Where_int_(
             Keys,
             (System_Func_TSource__bool__o *)v13,
             (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
  }
  return System_Linq_Enumerable__ToArray_int_(
           Keys,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


DefenseAreaData_o *__fastcall WarBoardAIRoute__GetDefenseAreaData(
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
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t defenseArea; // w20
  DefenseAreaData_o *v15; // x19
  const MethodInfo *v16; // x3
  System_Collections_Generic_Dictionary_int__object__o *v17; // x20
  WarBoardAIManager_c *v18; // x0
  char v19; // w10
  bool v20; // w8
  bool IsDetour; // w25
  int32_t key; // w26
  Il2CppObject *value; // x27
  System_Int32_array *v24; // x28
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w25
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  int32_t MasterAndEnemyRange_k__BackingField; // w8
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x3
  BalanceConfig_c *v35; // x0
  System_Func_int__bool__o *klass; // x28
  int32_t v37; // w2
  int32_t v38; // w3
  const MethodInfo *v39; // x2
  __int64 v40; // x8
  __int64 v41; // x21
  const MethodInfo *v42; // x2
  BalanceConfig_c *v43; // x0
  __int64 v44; // x8
  Il2CppObject *object; // [xsp+0h] [xbp-E0h]
  ServantStatusBattleListViewItem_o *v47; // [xsp+8h] [xbp-D8h]
  bool v49; // [xsp+1Ch] [xbp-C4h]
  char v50; // [xsp+20h] [xbp-C0h]
  bool v51; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v52; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v53; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4A58D62 & 1) == 0 )
  {
    sub_1B885B0(&AStarSearch_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&DefenseAreaData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__);
    sub_1B885B0(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
    sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D62 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v8 = sub_1B887FC(WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass52_0___ctor((WarBoardAIRoute___c__DisplayClass52_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_52;
  *(_QWORD *)(v8 + 16) = piecePlaceData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)piecePlaceData, v11, v12);
  npcData = this->fields.npcData;
  if ( !npcData )
    goto LABEL_52;
  defenseArea = npcData->fields.defenseArea;
  v15 = (DefenseAreaData_o *)sub_1B887FC(DefenseAreaData_TypeInfo);
  DefenseAreaData___ctor(v15, masterSquareIndex, defenseArea, v16);
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  if ( !byte_4A58D81 )
  {
    sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D81 = 1;
  }
  v18 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v18 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v18->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v52,
    dicSquareIndexEnemyPiece,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v19 = 0;
  object = (Il2CppObject *)v8;
  v47 = (ServantStatusBattleListViewItem_o *)(v8 + 24);
  v20 = 1;
  IsDetour = 1;
  v53 = v52;
LABEL_13:
  v49 = v20;
LABEL_14:
  v50 = v19;
  v51 = IsDetour;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v53,
            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v53.fields._current.fields.key;
    value = v53.fields._current.fields.value;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v24 = AStarSearch__RouteSearch(0LL, masterSquareIndex, key, 0, 0LL, 0LL);
    v25 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v24,
            (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v17 )
      sub_1B8880C(v25, v26);
    v27 = v25;
    System_Collections_Generic_Dictionary_int__object___Add(
      v17,
      key,
      &v24->obj,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v15 )
      sub_1B8880C(v28, v29);
    MasterAndEnemyRange_k__BackingField = v15->fields._MasterAndEnemyRange_k__BackingField;
    if ( MasterAndEnemyRange_k__BackingField == -1 || MasterAndEnemyRange_k__BackingField > v27 )
      v15->fields._MasterAndEnemyRange_k__BackingField = v27;
    if ( DefenseAreaData__IsInDefenseArea(v15, key, v30) )
    {
      v35 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v35 = BalanceConfig_TypeInfo;
      }
      if ( !v35->static_fields->IsEnableOldBlockShortestRoute )
      {
        if ( !v24 )
          sub_1B8880C(v35, v32);
        if ( (int)v24->max_length >= 2 )
          DefenseAreaData__SetComparisonAllMasterAndEnemyRange(v15, v24->m_Items[2], v27, v34);
      }
      IsDetour = 0;
      v19 = 1;
      if ( v51 )
      {
        IsDetour = WarBoardAIRoute__IsDetour(v24, allyPieces, v33);
        v20 = 0;
        v19 = 1;
        if ( v49 )
        {
          klass = (System_Func_int__bool__o *)v47->klass;
          if ( !v47->klass )
          {
            klass = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              klass,
              object,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              0LL);
            v47->klass = (ServantStatusBattleListViewItem_c *)klass;
            sub_1B88554(v47, (int32_t)klass, v37, v38);
          }
          if ( !AStarSearch_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          v20 = AStarSearch__RouteSearch((WarBoardPieceData_o *)value, key, masterSquareIndex, 0, klass, 0LL) == 0LL;
          v19 = 1;
        }
        goto LABEL_13;
      }
      goto LABEL_14;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v53,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  v40 = 1025LL;
  if ( (v50 & 1) == 0 )
    v40 = 1LL;
  v41 = v51 ? v40 | 0x2000000000LL : v40;
  if ( !v15 )
LABEL_52:
    sub_1B8880C(dicSquareIndexEnemyPiece, v10);
  DefenseAreaData__CreateShortestRoutes(v15, (System_Collections_Generic_Dictionary_int__int____o *)v17, v39);
  v43 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v43 = BalanceConfig_TypeInfo;
  }
  if ( !v43->static_fields->IsEnableOldBlockShortestRoute )
    DefenseAreaData__CreateAllShortestRoutes(v15, (System_Collections_Generic_Dictionary_int__int____o *)v17, v42);
  v44 = v41 | 0x10000000000LL;
  if ( !v49 )
    v44 = v41;
  v15->fields._Flag_k__BackingField = v44;
  return v15;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall WarBoardAIRoute__GetDesignationItemToDistance(
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
  __int64 v16; // x23
  System_Func_object__bool__o *v17; // x24
  _BOOL8 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+30h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_4A58D6F & 1) == 0 )
  {
    sub_1B885B0(&AStarSearch_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__);
    sub_1B885B0(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__);
    this = (WarBoardAIRoute_o *)sub_1B885B0(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    byte_4A58D6F = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v8->fields.dicUniqueKeyDesignationItem) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_31FFD90 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v10,
          (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (this = (WarBoardAIRoute_o *)Item[1].klass) == 0LL )
  {
    sub_1B8880C(this, basePiece);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v26,
            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v11 = sub_1B887FC(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    WarBoardAIRoute___c__DisplayClass66_0___ctor((WarBoardAIRoute___c__DisplayClass66_0_o *)v11, 0LL);
    if ( !v11 )
      sub_1B8880C(v12, v13);
    v16 = v11 + 24;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v11 + 16) = v26.fields._current;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 24), 0, v14, v15);
    v17 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v11,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      0LL);
    v18 = BasicHelper__Any_object_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v17,
            (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    if ( !v18 )
    {
      if ( !*(_QWORD *)v16 )
        sub_1B8880C(v18, v19);
      v20 = *(_DWORD *)(*(_QWORD *)v16 + 16LL);
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   v20,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v22 = System_Linq_Enumerable__Count_int_(
              v21,
              (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v10 )
        sub_1B8880C(v22, v23);
      System_Collections_Generic_Dictionary_int__int___Add(
        v10,
        *(_DWORD *)(v11 + 16),
        v22,
        (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v26,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v10;
}


WarBoardEvalValueSquare_EvalValueSquare_o *__fastcall WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4A58D63 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
    byte_4A58D63 = 1;
  }
  if ( !evalValueSquareList )
    sub_1B8880C(this, evalValueSquareList);
  return (WarBoardEvalValueSquare_EvalValueSquare_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_int__object__o *)evalValueSquareList,
                                                        index,
                                                        (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
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

  if ( (byte_4A58D77 & 1) == 0 )
  {
    sub_1B885B0(&SvtClassAttri_TypeInfo);
    byte_4A58D77 = 1;
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
  if ( WarBoardAIRoute_RouteData__HasFlag_35300500(v8, 0x80000LL, 0LL)
    && WarBoardAIRoute_RouteData__HasFlag_35300500(v8, 0x100000LL, 0LL) )
  {
    v8 |= 0x40000uLL;
  }
  if ( !WarBoardAIRoute_RouteData__HasFlag_35300500(v8, 0x400000LL, 0LL) )
    return v8;
  if ( WarBoardAIRoute_RouteData__HasFlag_35300500(v8, 0x800000LL, 0LL) )
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
  struct System_Int32_array *linkedSquares; // x29
  __int64 v12; // x8
  const MethodInfo_317AC54 **v13; // x26
  unsigned __int64 v14; // x19
  __int64 v15; // x23
  int32_t v16; // w24
  const MethodInfo *v17; // x2
  WarBoardPieceData_o *v18; // x25
  const MethodInfo_317AC54 **v19; // x29
  __int64 v20; // x26
  int32_t v21; // w22
  int32_t v22; // w27
  int32_t ClassId; // w28
  float Magnification; // s0
  uint32_t v25; // w24
  const MethodInfo *v26; // x2
  WarBoardAIRoute_o *v27; // x24
  WarBoardAIRoute_o *v29; // [xsp+8h] [xbp-88h]
  struct System_Int32_array *v30; // [xsp+10h] [xbp-80h]
  int32_t *v31; // [xsp+18h] [xbp-78h]
  uint32_t value; // [xsp+2Ch] [xbp-64h] BYREF

  v10 = this;
  if ( (byte_4A58D73 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&SvtClassAttri_TypeInfo);
    this = (WarBoardAIRoute_o *)sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D73 = 1;
  }
  value = 0;
  if ( !baseSquare )
    goto LABEL_48;
  linkedSquares = baseSquare->fields.linkedSquares;
  if ( !linkedSquares )
    goto LABEL_48;
  v12 = *(_QWORD *)&linkedSquares->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = (const MethodInfo_317AC54 **)&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__;
    v14 = 0LL;
    v15 = 1LL;
    v30 = linkedSquares;
    v31 = &linkedSquares->m_Items[1];
    v29 = v10;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
        sub_1B88814(this, baseSquare);
      v16 = v31[v14];
      this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_35359972((WarBoardData_o *)this, v16, 0LL);
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
        if ( WarBoardPieceData__get_isServant(basePiece, 0LL) || WarBoardPieceData__get_isMaster(v18, 0LL) )
        {
          v19 = v13;
          v20 = v15 | 0x10;
          if ( WarBoardPieceData__get_isServant(v18, 0LL)
            && !WarBoardAIRoute_RouteData__HasFlag_35300500(v15 | 0x10, 0x1000000LL, 0LL) )
          {
            this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
            if ( !this )
              break;
            v21 = masterSquareIndex;
            this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
            if ( !v18->fields._battleServant_k__BackingField )
              break;
            v22 = (int)this;
            ClassId = BattleServantData__getClassId(v18->fields._battleServant_k__BackingField, 0LL);
            if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            Magnification = SvtClassAttri__getMagnification(v22, ClassId, 0LL);
            masterSquareIndex = v21;
            v10 = v29;
            if ( Magnification > 1.0 )
              v20 = v15 | 0x1000010;
          }
          if ( WarBoardPieceData__get_isMaster(v18, 0LL) )
            v15 = v20 | 0x20;
          else
            v15 = v20;
          v13 = v19;
          linkedSquares = v30;
        }
      }
      else
      {
LABEL_29:
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
                                    *v13);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v25 = value;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        this = (WarBoardAIRoute_o *)WarBoardAIManager__GetPieceUnique(v25, (const MethodInfo *)baseSquare);
        if ( basePiece->fields._uniqueIndex_k__BackingField != value )
        {
          v27 = this;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
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
      if ( (__int64)++v14 >= (int)v12 )
        return v15;
    }
LABEL_48:
    sub_1B8880C(this, baseSquare);
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

  if ( (byte_4A58D72 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4A58D72 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0LL) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          actionSquareIndex,
          (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                    dicOutOfWarningAreaRange,
                                                                                    baseSquareIndex,
                                                                                    (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( (int)dicOutOfWarningAreaRange > System_Collections_Generic_Dictionary_int__int___get_Item(
                                         this->fields.dicOutOfWarningAreaRange,
                                         actionSquareIndex,
                                         (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange
    || (dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                          dicOutOfWarningAreaRange,
                                                                                          baseSquareIndex,
                                                                                          (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v10 = this->fields.dicOutOfWarningAreaRange) == 0LL) )
  {
LABEL_18:
    sub_1B8880C(dicOutOfWarningAreaRange, v7);
  }
  if ( (_DWORD)dicOutOfWarningAreaRange == System_Collections_Generic_Dictionary_int__int___get_Item(
                                             v10,
                                             actionSquareIndex,
                                             (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
  int32_t key; // w20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *v10; // x8
  __int128 v12[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v13; // [xsp+20h] [xbp-40h] BYREF

  v4 = this;
  if ( (byte_4A58D60 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    this = (WarBoardAIRoute_o *)sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    byte_4A58D60 = 1;
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
        (const MethodInfo_3179994 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
      *(_OWORD *)&v13.fields._dictionary = v12[0];
      v13.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v12[1];
      while ( 1 )
      {
        v8 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
               &v13,
               (const MethodInfo_32B9C68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
        if ( !v8 )
          break;
        v10 = v4->fields.aiRouteMasterData;
        if ( !v10 )
          sub_1B8880C(v8, v9);
        key = (int32_t)v13.fields._current.fields.key;
        if ( v10->fields.masterUniqueIndex == HIDWORD(v13.fields._current.fields.key) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
            &v13,
            (const MethodInfo_32B9D68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
          return key;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
        &v13,
        (const MethodInfo_32B9D68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
      return 0;
    }
LABEL_18:
    sub_1B8880C(this, piecePlaceData);
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
  Il2CppClass *klass; // x8
  System_Func_KeyValuePair_int__uint___bool__o *v7; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4A58D7B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____);
    sub_1B885B0(&System_Func_KeyValuePair_int__uint___bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    this = (WarBoardAIRoute_o *)sub_1B885B0(&Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__);
    byte_4A58D7B = 1;
  }
  klass = v4[13].klass;
  if ( !klass )
    sub_1B8880C(this, piecePlaceData);
  if ( LODWORD(klass->_1.name) == 1 )
    return HIDWORD(klass->_1.name);
  v7 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_1B887FC(System_Func_KeyValuePair_int__uint___bool__TypeInfo);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v7,
    v4,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v7,
           (const MethodInfo_2EA3F88 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetMoveByTargetDistance(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData,
        int32_t actionSquareIndex,
        WarBoardPieceData_o *basePiece,
        const MethodInfo *method)
{
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  Il2CppObject *currentValue; // x24
  WarBoardPieceData_o *monitor; // x22
  int32_t v13; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  int32_t v15; // w22
  int32_t v16; // w0
  int32_t v17; // w2
  int v18; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  int32_t v21; // w23
  int32_t v22; // w0
  int v23; // w8
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A58D7D & 1) == 0 )
  {
    sub_1B885B0(&AStarSearch_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    this = (WarBoardAIRoute_o *)sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D7D = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !dicKeyPutIndexValueTargetData
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_long__object___get_Values(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicKeyPutIndexValueTargetData,
                                      (const MethodInfo_31ABFAC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0LL )
  {
    sub_1B8880C(this, dicKeyPutIndexValueTargetData);
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_382AE48 *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___MoveNext(
           &v26,
           (const MethodInfo_32BFA34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v8 )
      break;
    currentValue = v26.fields._currentValue;
    if ( !v26.fields._currentValue )
      sub_1B8880C(v8, v9);
    monitor = (WarBoardPieceData_o *)v26.fields._currentValue[1].monitor;
    if ( !monitor || LODWORD(v26.fields._currentValue[4].monitor) != actionSquareIndex )
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
      v13 = (int32_t)currentValue[4].monitor;
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v14 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v13,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v15 = System_Linq_Enumerable__Count_int_(
              v14,
              (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
      v16 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
      v17 = (int32_t)currentValue[4].monitor;
      if ( v15 == v16 )
        v18 = 2;
      else
        v18 = 3;
      if ( v15 < v16 )
        v18 = 1;
      LODWORD(currentValue[4].klass) = v18;
      v19 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v17,
                                                                   1,
                                                                   0LL,
                                                                   0LL);
      if ( v19 && (klass = (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[6].klass) != 0LL )
      {
        v21 = System_Linq_Enumerable__Count_int_(
                klass,
                (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
        v22 = System_Linq_Enumerable__Count_int_(
                v19,
                (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
        if ( v22 >= v21 )
        {
          if ( v22 == v21 )
            v23 = 2;
          else
            v23 = 3;
        }
        else
        {
          v23 = 1;
        }
      }
      else
      {
        v23 = 0;
      }
      HIDWORD(currentValue[4].klass) = v23;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___Dispose(
    &v26,
    (const MethodInfo_32BFA30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
  return dicKeyPutIndexValueTargetData;
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
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+0h] [xbp-80h] BYREF

  if ( (byte_4A58D64 & 1) == 0 )
  {
    sub_1B885B0(&AStarSearch_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    this = (WarBoardAIRoute_o *)sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    byte_4A58D64 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !dicPieceList )
    sub_1B8880C(this, dicPieceList);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_int__object__o *)dicPieceList,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v6 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v12,
            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v12.fields._current.fields.key;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                0LL,
                                                                baseSquareIndex,
                                                                key,
                                                                0,
                                                                0LL,
                                                                0LL);
    v9 = System_Linq_Enumerable__Count_int_(v8, (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v6 > v9 || v6 == -1 )
      v6 = v9;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v12,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
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
  int32_t type_k__BackingField; // w9
  int32_t *v22; // x9
  uint32_t uniqueIndex_k__BackingField; // w24
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-80h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4A58D5F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    byte_4A58D5F = 1;
  }
  memset(&v26, 0, sizeof(v26));
  value = 0;
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  v12 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v12,
    (const MethodInfo_31F6294 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_1B8880C(v13, v14);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)routeDataList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v15 )
      break;
    current = (WarBoardAIRoute_RouteData_o *)v26.fields._current;
    if ( !v26.fields._current )
      sub_1B8880C(v15, v16);
    if ( !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v26.fields._current, 0LL) )
    {
      value = 0;
      HasFlag = WarBoardAIRoute_RouteData__HasFlag(current, 0x4000000LL, 0LL);
      basePiece = current->fields.basePiece;
      if ( !HasFlag )
      {
        if ( !basePiece )
          sub_1B8880C(HasFlag, v19);
        if ( basePiece->fields._type_k__BackingField == 1 )
          v22 = masterActionCount;
        else
          v22 = actionCount;
        goto LABEL_21;
      }
      if ( !basePiece )
        sub_1B8880C(HasFlag, v19);
      type_k__BackingField = basePiece->fields._type_k__BackingField;
      basePiece = current->fields.actionPiece;
      if ( type_k__BackingField != 1 )
      {
        if ( !basePiece )
          sub_1B8880C(HasFlag, v19);
        if ( basePiece->fields._type_k__BackingField == 1 )
          v22 = masterReplaceCount;
        else
          v22 = replaceCount;
LABEL_21:
        ++*v22;
        goto LABEL_22;
      }
      ++*masterReplaceCount;
      if ( !basePiece )
        sub_1B8880C(HasFlag, v19);
LABEL_22:
      if ( !v12 )
        sub_1B8880C(HasFlag, v19);
      uniqueIndex_k__BackingField = basePiece->fields._uniqueIndex_k__BackingField;
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v12,
        uniqueIndex_k__BackingField,
        &value,
        (const MethodInfo_31F82F0 *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v12,
        uniqueIndex_k__BackingField,
        value + 1,
        (const MethodInfo_31F6C44 *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_Func_object__int__o *v11; // x20

  if ( (byte_4A58D7E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76132688);
    sub_1B885B0(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__);
    sub_1B885B0(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
    byte_4A58D7E = 1;
  }
  v6 = sub_1B887FC(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass84_0___ctor((WarBoardAIRoute___c__DisplayClass84_0_o *)v6, 0LL);
  if ( !v6 )
    sub_1B8880C(v7, v8);
  *(_QWORD *)(v6 + 16) = targetPiece;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)targetPiece, v9, v10);
  v11 = (System_Func_object__int__o *)sub_1B887FC(System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
  System_Func_object__int____ctor(
    v11,
    (Il2CppObject *)v6,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    0LL);
  return System_Linq_Enumerable__Sum_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v11,
           (const MethodInfo_2EB7264 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76132688);
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
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+30h] [xbp-90h] BYREF

  v12 = this;
  if ( (byte_4A58D6C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    this = (WarBoardAIRoute_o *)sub_1B885B0(&WarBoardAIRoute_TargetData_TypeInfo);
    byte_4A58D6C = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !dicPutSquareIndex )
    sub_1B8880C(this, dicPutSquareIndex);
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v20,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicPutSquareIndex,
    (const MethodInfo_31AC5D0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v13 = System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v21,
            (const MethodInfo_32BF3D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v13 )
      break;
    key = v21.fields._current.fields.key;
    value = v21.fields._current.fields.value;
    if ( excludeCond )
    {
      if ( !v21.fields._current.fields.value )
        sub_1B8880C(v13, v14);
      if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, void *, _QWORD))excludeCond->fields.m_target)(
              excludeCond->fields.original_method_info,
              v21.fields._current.fields.value[3].monitor,
              *(_QWORD *)&excludeCond->fields.extra_arg) & 1) != 0 )
        continue;
    }
    allEnemyPiece = v12->fields.allEnemyPiece;
    v18 = (WarBoardAIRoute_TargetData_o *)sub_1B887FC(WarBoardAIRoute_TargetData_TypeInfo);
    WarBoardAIRoute_TargetData___ctor_35303068(
      v18,
      (WarBoardAIRoute_TargetData_o *)value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      0LL);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_1B8880C(0LL, v19);
    System_Collections_Generic_Dictionary_long__object___Add(
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
      (int64_t)key,
      (Il2CppObject *)v18,
      (const MethodInfo_31AC19C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v21,
    (const MethodInfo_32BF4F4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_Dictionary_int__object__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  __int64 v21; // x1
  WarBoardAiTargetCacher_o *aiTargetCacher; // x0
  Il2CppObject *key; // x25
  Il2CppObject *value; // x26
  __int64 TargetDetectorId; // x0
  __int64 v26; // x1
  int32_t v27; // w27
  __int64 v28; // x1
  Il2CppObject *Item; // x29
  WarBoardAiTargetCacher_o *v30; // x0
  IWarBoardObjectData_array *TargetObjectsByTrendId; // x0
  IWarBoardObjectData_array *v32; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x29
  System_Func_object__bool__o *klass; // x23
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x29
  System_Func_object__int__o *v38; // x23
  int32_t v39; // w2
  int32_t v40; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v41; // x0
  WarBoardAIRoute___c_c *v42; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x29
  System_Func_object__int__o *_9__64_2; // x23
  Il2CppObject *v45; // x24
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v49; // x0
  WarBoardAIRoute___c_c *v50; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v51; // x29
  System_Func_object__int__o *_9__64_3; // x23
  Il2CppObject *v53; // x24
  struct WarBoardAIRoute___c_StaticFields *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  __int64 v58; // x1
  WarBoardPieceData_o *v59; // x27
  int32_t v60; // w28
  WarBoardPieceData_array *allEnemyPiece; // x24
  WarBoardAIRoute_TargetData_o *v62; // x23
  __int64 v63; // x1
  ServantStatusBattleListViewItem_o *v64; // [xsp+0h] [xbp-D0h]
  ServantStatusBattleListViewItem_o *v65; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v67; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v68; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4A58D6D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__);
    sub_1B885B0(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_1B885B0(&System_Func_IWarBoardObjectData__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    sub_1B885B0(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_1B885B0(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__);
    sub_1B885B0(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__);
    sub_1B885B0(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
    sub_1B885B0(&WarBoardAIRoute___c_TypeInfo);
    byte_4A58D6D = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v12 = sub_1B887FC(WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass64_0___ctor((WarBoardAIRoute___c__DisplayClass64_0_o *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = excludeCond,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)excludeCond, v15, v16),
        *(_QWORD *)(v12 + 24) = basePiece,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)basePiece, v17, v18),
        *(_DWORD *)(v12 + 32) = baseSquareIndex,
        v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo),
        System_Collections_Generic_Dictionary_int__object____ctor(
          v19,
          (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__),
        !dicIndividualityPutSqareIndex) )
  {
    sub_1B8880C(v13, v14);
  }
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v67,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicIndividualityPutSqareIndex,
    (const MethodInfo_31AC5D0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v68 = v67;
  v20 = 0LL;
  v64 = (ServantStatusBattleListViewItem_o *)(v12 + 48);
  v65 = (ServantStatusBattleListViewItem_o *)(v12 + 40);
  while ( System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v68,
            (const MethodInfo_32BF3D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_1B8880C(0LL, v21);
    key = v68.fields._current.fields.key;
    value = v68.fields._current.fields.value;
    TargetDetectorId = WarBoardAiTargetCacher__GetTargetDetectorId(
                         aiTargetCacher,
                         (int64_t)v68.fields._current.fields.key,
                         0LL);
    if ( !v19 )
      sub_1B8880C(TargetDetectorId, v26);
    v27 = TargetDetectorId;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           v19,
           TargetDetectorId,
           (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               v19,
               v27,
               (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    }
    else
    {
      v30 = this->fields.aiTargetCacher;
      if ( !v30 )
        sub_1B8880C(0LL, v28);
      TargetObjectsByTrendId = WarBoardAiTargetCacher__GetTargetObjectsByTrendId(v30, (int64_t)key, 0LL);
      v32 = TargetObjectsByTrendId;
      if ( TargetObjectsByTrendId )
        v33 = (System_Collections_Generic_IEnumerable_TSource__o *)TargetObjectsByTrendId;
      else
        v33 = v20;
      if ( TargetObjectsByTrendId )
      {
        klass = (System_Func_object__bool__o *)v65->klass;
        if ( !v65->klass )
        {
          klass = (System_Func_object__bool__o *)sub_1B887FC(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            klass,
            (Il2CppObject *)v12,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
            0LL);
          v65->klass = (ServantStatusBattleListViewItem_c *)klass;
          sub_1B88554(v65, (int32_t)klass, v35, v36);
        }
        v37 = System_Linq_Enumerable__Where_object_(
                v33,
                (System_Func_TSource__bool__o *)klass,
                (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        v38 = (System_Func_object__int__o *)v64->klass;
        if ( !v64->klass )
        {
          v38 = (System_Func_object__int__o *)sub_1B887FC(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            v38,
            (Il2CppObject *)v12,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
            0LL);
          v64->klass = (ServantStatusBattleListViewItem_c *)v38;
          sub_1B88554(v64, (int32_t)v38, v39, v40);
        }
        v41 = System_Linq_Enumerable__OrderBy_object__int_(
                v37,
                (System_Func_TSource__TKey__o *)v38,
                (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
        v42 = WarBoardAIRoute___c_TypeInfo;
        v43 = v41;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v42 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_2 = (System_Func_object__int__o *)v42->static_fields->__9__64_2;
        if ( !_9__64_2 )
        {
          if ( !v42->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v42);
            v42 = WarBoardAIRoute___c_TypeInfo;
          }
          v45 = (Il2CppObject *)v42->static_fields->__9;
          _9__64_2 = (System_Func_object__int__o *)sub_1B887FC(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__64_2,
            v45,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
            0LL);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__64_2, (int32_t)_9__64_2, v47, v48);
        }
        v49 = System_Linq_Enumerable__ThenBy_object__int_(
                v43,
                (System_Func_TSource__TKey__o *)_9__64_2,
                (const MethodInfo_2EB7B78 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        v50 = WarBoardAIRoute___c_TypeInfo;
        v51 = v49;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v50 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_3 = (System_Func_object__int__o *)v50->static_fields->__9__64_3;
        if ( !_9__64_3 )
        {
          if ( !v50->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v50);
            v50 = WarBoardAIRoute___c_TypeInfo;
          }
          v53 = (Il2CppObject *)v50->static_fields->__9;
          _9__64_3 = (System_Func_object__int__o *)sub_1B887FC(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__64_3,
            v53,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
            0LL);
          v54 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v54->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v54->__9__64_3, (int32_t)_9__64_3, v55, v56);
        }
        v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                     v51,
                                                                     (System_Func_TSource__TKey__o *)_9__64_3,
                                                                     (const MethodInfo_2EB7B78 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        Item = System_Linq_Enumerable__FirstOrDefault_object_(
                 v57,
                 (const MethodInfo_2EA3600 *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
        v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v32;
      }
      else
      {
        Item = 0LL;
      }
    }
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v19,
      v27,
      Item,
      (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( Item )
    {
      v59 = *(WarBoardPieceData_o **)(v12 + 24);
      v60 = *(_DWORD *)(v12 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v62 = (WarBoardAIRoute_TargetData_o *)sub_1B887FC(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_35304100(
        v62,
        (WarBoardAIRoute_TargetData_o *)value,
        (IWarBoardObjectData_o *)Item,
        v59,
        v60,
        allEnemyPiece,
        0LL);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1B8880C(0LL, v63);
      System_Collections_Generic_Dictionary_long__object___Add(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)key,
        (Il2CppObject *)v62,
        (const MethodInfo_31AC19C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1B8880C(0LL, v58);
      System_Collections_Generic_Dictionary_long__object___Remove(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)key,
        (const MethodInfo_31AD610 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v68,
    (const MethodInfo_32BF4F4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetTargetToDistance_35288840(
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

  if ( (byte_4A58D6E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
    sub_1B885B0(&System_Func_IWarBoardObjectData__bool__TypeInfo);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__);
    sub_1B885B0(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
    byte_4A58D6E = 1;
  }
  v9 = sub_1B887FC(WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass65_0___ctor((WarBoardAIRoute___c__DisplayClass65_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = routeDataList,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)routeDataList, v12, v13),
        !basePiece)
    || (dicUniqueKeyTarget = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 dicUniqueKeyTarget,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_31FFD90 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo),
        System_Collections_Generic_Dictionary_long__object____ctor(
          v15,
          (const MethodInfo_31AB7CC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v15,
        !Item) )
  {
    sub_1B8880C(dicUniqueKeyTarget, v11);
  }
  monitor = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].monitor;
  v17 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0LL);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    monitor,
    (System_Func_IWarBoardObjectData__bool__o *)v17,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v18);
  klass = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[2].klass;
  v20 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_IWarBoardObjectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0LL);
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
    0LL,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v22);
  return (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v15;
}


float __fastcall WarBoardAIRoute__GetThinkingThreshold(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1B8880C(this, method);
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
  if ( (byte_4A58D75 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58D75 = 1;
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
    this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
      return SHIDWORD(this[3].fields.allSquare) >= v13 + requiredCost;
LABEL_13:
    sub_1B8880C(this, basePiece);
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
  int32_t v16; // w2
  int32_t v17; // w3
  WarBoardPieceData_o **v18; // x25
  bool v19; // w8
  const MethodInfo *v20; // x3
  int32_t RouteSumPieceActionCost; // w23
  System_Func_object__bool__o *v22; // x21
  __int64 v23; // x8

  if ( (byte_4A58D79 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    sub_1B885B0(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__);
    sub_1B885B0(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
    byte_4A58D79 = 1;
  }
  v13 = sub_1B887FC(WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass76_0___ctor((WarBoardAIRoute___c__DisplayClass76_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_25;
  *(_QWORD *)(v13 + 16) = actionPiece;
  v18 = (WarBoardPieceData_o **)(v13 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)actionPiece, v16, v17);
  Instance = *(WarBoardPieceData_o **)(v13 + 16);
  if ( !Instance )
    goto LABEL_25;
  v19 = WarBoardPieceData__EnableSwapByOther(Instance, 0, 0LL);
  Instance = 0LL;
  if ( !v19 )
    return (char)Instance;
  if ( !basePiece )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(basePiece, 0LL) )
    goto LABEL_10;
  Instance = *v18;
  if ( !*v18 )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(Instance, 0LL) )
  {
LABEL_10:
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < this->fields.moveCost
                                                               + requiredCost
                                                               + this->fields.masterMoveCost )
      goto LABEL_23;
  }
  else
  {
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  if ( !WarBoardPieceData__EnableMoveBySelf(basePiece, sumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v18;
  if ( !*v18 )
    goto LABEL_25;
  if ( !WarBoardPieceData__EnableSwapByOther(Instance, RouteSumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v18;
  if ( !*v18 )
LABEL_25:
    sub_1B8880C(Instance, v15);
  if ( !WarBoardPieceData__get_isInfinitelyActable(Instance, 0LL) )
  {
    v22 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v13,
      Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
      0LL);
    Instance = (WarBoardPieceData_o *)System_Linq_Enumerable__Count_object__48881560(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
                                        (System_Func_TSource__bool__o *)v22,
                                        (const MethodInfo_2E9DF98 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
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


bool __fastcall WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
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
  if ( (byte_4A58D6B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1B885B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4A58D6B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !v6 )
    sub_1B8880C(shortestEnemyRoute, piecePlaceData);
  v7 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v8 = 0;
  v17 = v16;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v9 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1B8880C(v9, v10);
    monitor = v17.fields._current[1].monitor;
    if ( (int)monitor - 1 <= (int)v7 )
    {
LABEL_16:
      v8 = 0;
      break;
    }
    if ( (unsigned int)v17.fields._current[1].monitor <= (unsigned __int64)v7 )
LABEL_18:
      sub_1B88814(v9, v10);
    v13 = (unsigned int)((_DWORD)monitor - 1) - 1LL;
    v14 = v7;
    while ( 1 )
    {
      if ( !piecePlaceData )
        sub_1B8880C(v9, v10);
      v9 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
             piecePlaceData,
             *((_DWORD *)&current[2].klass + v14),
             (const MethodInfo_31797A8 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v8 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
        DefenseAreaData_o *defenseArea,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0

  if ( (byte_4A58D68 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A58D68 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !defenseArea )
    sub_1B8880C(v7, *(_QWORD *)&index);
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
  if ( (byte_4A58D6A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__);
    allShortestRoute = (System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *)sub_1B885B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4A58D6A = 1;
  }
  memset(&v20, 0, sizeof(v20));
  memset(&v21, 0, sizeof(v21));
  if ( !v6 )
    sub_1B8880C(allShortestRoute, *(_QWORD *)&index);
  v7 = !isDefenseSquare;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v8 = 0;
  v21 = v19;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v21,
           (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v21.fields._current.fields.value )
      sub_1B8880C(v9, v10);
    klass = v21.fields._current.fields.value[1].klass;
    if ( !klass )
      sub_1B8880C(0LL, v10);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)klass,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    *(_OWORD *)&v20.fields._list = *(_OWORD *)&v19.fields._dictionary;
    v20.fields._current = v19.fields._current.fields.key;
    do
    {
LABEL_9:
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v12 )
      {
        v17 = 4;
        goto LABEL_20;
      }
      if ( !v20.fields._current )
        sub_1B8880C(v12, v13);
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
        sub_1B88814(v12, v13);
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
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( (v17 | 4) != 4 )
      goto LABEL_26;
  }
  v17 = 12;
LABEL_26:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v21,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
  return v8 & (v17 == 11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsBlockShortestRouteEnemyAndMasterOld(
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
  if ( (byte_4A58D69 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1B885B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4A58D69 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !v6 )
    sub_1B8880C(shortestEnemyRoute, *(_QWORD *)&index);
  v7 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v17 = v16;
  do
  {
LABEL_5:
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    v10 = v8;
    if ( !v8 )
    {
      v14 = 10;
      goto LABEL_16;
    }
    if ( !v17.fields._current )
      sub_1B8880C(v8, v9);
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
      sub_1B88814(v8, v9);
    if ( *((_DWORD *)&v17.fields._current[2].klass + (int)v13) == index )
      break;
    if ( v12 == ++v13 )
      goto LABEL_5;
  }
  v14 = 9;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v10 && v14 == 9;
}


bool __fastcall WarBoardAIRoute__IsDetour(
        System_Int32_array *route,
        System_Int32_array *blockPieces,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w0
  bool v11; // w0
  int v13; // w23
  System_Func_int__bool__o **v14; // x21
  System_Func_int__bool__o *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  int v18; // w8

  if ( (byte_4A58D67 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__);
    sub_1B885B0(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
    byte_4A58D67 = 1;
  }
  v5 = sub_1B887FC(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass58_0___ctor((WarBoardAIRoute___c__DisplayClass58_0_o *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = route;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)route, v8, v9);
  v10 = System_Linq_Enumerable__Count_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 16),
          (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
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
        v15 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
          0LL);
        *(_QWORD *)(v5 + 32) = v15;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v15, v16, v17);
      }
      v11 = BasicHelper__Any_int__48671312(
              blockPieces,
              (System_Func_T__bool__o *)v15,
              (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
      if ( v11 )
        break;
      v18 = *(_DWORD *)(v5 + 24) + 1;
      *(_DWORD *)(v5 + 24) = v18;
    }
    while ( v18 < v13 );
  }
  return v11;
}


bool __fastcall WarBoardAIRoute__IsThinkingThreshold(WarBoardAIRoute_o *this, float v, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1B8880C(this, method);
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
  uint32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A58D78 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D78 = 1;
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
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)entries )
        sub_1B88814(Square, v11);
      if ( !piecePlaceData )
        break;
      v15 = *(&npcEntityDict->fields._count + v14);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v15,
             &value,
             (const MethodInfo_317AC54 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Square = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)Square[1].fields.playedStageReinforcementsList;
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardData__GetPiece_35360184(Square, value, 1, 0LL);
        if ( !Square )
          break;
        if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0LL) )
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
        Square = (WarBoardData_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0LL);
        if ( ((unsigned __int8)Square & 1) != 0 )
          ++*attackByLinkEnemy;
      }
      LODWORD(entries) = npcEntityDict->fields._entries;
      if ( (__int64)++v14 >= (int)entries )
        return;
    }
LABEL_27:
    sub_1B8880C(Square, v11);
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
  int32_t v14; // w25
  const MethodInfo *v15; // x4
  System_Collections_Generic_List_object__o *moveByLinkedPiece; // x24
  WarBoardPieceData_o *v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  WarBoardAIRoute_o *v23; // x1
  Il2CppClass **v24; // x0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  int32_t v27; // w24
  int32_t ClassId; // w25

  if ( (byte_4A58D7C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&SvtClassAttri_TypeInfo);
    this = (WarBoardAIRoute_o *)sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D7C = 1;
  }
  v8 = *routeData;
  if ( !*routeData
    || (actionSquare = v8->fields.actionSquare) == 0LL
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0LL )
  {
LABEL_51:
    sub_1B8880C(this, routeData);
  }
  if ( (int)*(_QWORD *)&linkedSquares->max_length >= 1 )
  {
    basePiece = v8->fields.basePiece;
    v12 = 0LL;
    max_length = *(_QWORD *)&linkedSquares->max_length;
    do
    {
      if ( v12 >= max_length )
        sub_1B88814(this, routeData);
      v14 = linkedSquares->m_Items[v12 + 1];
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
        this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_35359972((WarBoardData_o *)this, v14, 0LL);
        if ( !moveByLinkedPiece )
          goto LABEL_51;
        items = moveByLinkedPiece->fields._items;
        v21 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        ++moveByLinkedPiece->fields._version;
        if ( !items )
          goto LABEL_51;
        size = moveByLinkedPiece->fields._size;
        v23 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            moveByLinkedPiece,
            (Il2CppObject *)this,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          moveByLinkedPiece->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v23;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v23, v18, v19);
        }
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        if ( WarBoardAIManager__IsAllyPiece(basePiece, v17, v25)
          && (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v17, 0LL), ((unsigned __int8)this & 1) != 0) )
        {
          if ( !*routeData )
            goto LABEL_51;
          ++(*routeData)->fields.moveByLinkedAlly;
        }
        else
        {
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v17, v26);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*routeData )
              goto LABEL_51;
            (*routeData)->fields.flagNow |= 0x40uLL;
            if ( WarBoardPieceData__get_isServant(v17, 0LL) )
            {
              this = (WarBoardAIRoute_o *)*routeData;
              if ( !*routeData )
                goto LABEL_51;
              this = (WarBoardAIRoute_o *)WarBoardAIRoute_RouteData__HasFlag(
                                            (WarBoardAIRoute_RouteData_o *)this,
                                            0x2000000LL,
                                            0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_34;
              if ( !basePiece )
                goto LABEL_51;
              this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(basePiece, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v17, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
                  if ( !this )
                    goto LABEL_51;
                  this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
                  if ( !v17->fields._battleServant_k__BackingField )
                    goto LABEL_51;
                  v27 = (int)this;
                  ClassId = BattleServantData__getClassId(v17->fields._battleServant_k__BackingField, 0LL);
                  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                  if ( SvtClassAttri__getMagnification(v27, ClassId, 0LL) > 1.0 )
                  {
LABEL_34:
                    if ( !*routeData )
                      goto LABEL_51;
                    (*routeData)->fields.flagNow |= 0x2000000uLL;
                  }
                }
              }
              if ( !*routeData )
                goto LABEL_51;
              ++(*routeData)->fields.moveByLinkedEnemy;
            }
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v17, 0LL);
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
  System_Predicate_object__o *v17; // x24
  Il2CppObject *v18; // x0
  Il2CppClass *klass; // x8
  IWarBoardObjectData_o *v20; // x23
  __int64 v21; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 p_method; // x0
  WarBoardAIRoute_TargetData_o *v24; // x22

  if ( (byte_4A58D5D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    sub_1B885B0(&IWarBoardObjectData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
    sub_1B885B0(&System_Predicate_IWarBoardObjectData__TypeInfo);
    sub_1B885B0(&WarBoardAIRoute_TargetData_TypeInfo);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__);
    sub_1B885B0(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
    byte_4A58D5D = 1;
  }
  v14 = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_1B887FC(WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass46_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_17;
  v14->fields.squareIndex = squareIndex;
  *notSquareTarget = 0;
  if ( !targetDic )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_long__object___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
         v14->fields.squareIndex,
         (const MethodInfo_31AC390 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v17 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_IWarBoardObjectData__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v14,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    0LL);
  if ( !objectList )
LABEL_17:
    sub_1B8880C(v15, v16);
  v18 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
  if ( v18 )
  {
    *notSquareTarget = 1;
    klass = v18->klass;
    v20 = (IWarBoardObjectData_o *)v18;
    v21 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v21;
        p_offset += 2;
        if ( !v21 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BDA590(v18, IWarBoardObjectData_TypeInfo, 2LL);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(v20, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      v24 = (WarBoardAIRoute_TargetData_o *)sub_1B887FC(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_35302488(v24, v20, trendKey, conditionId, 0LL);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
        trendKey,
        (Il2CppObject *)v24,
        (const MethodInfo_31AC188 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
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

  if ( (byte_4A58D5B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
    byte_4A58D5B = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_1B8880C(0LL, *(_QWORD *)&aiId);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_316EDE0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
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

  if ( (byte_4A58D7A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___75990296);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__uint__TypeInfo);
    byte_4A58D7A = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor_51875032(
    v10,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_3178CD8 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___75990296);
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
        (const MethodInfo_31795A8 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_1B8880C(HasFlag, v12);
  }
  if ( !v10 )
    goto LABEL_12;
  HasFlag = System_Collections_Generic_Dictionary_int__uint___Remove(
              v10,
              baseSquareIndex,
              (const MethodInfo_317A974 *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v10,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_31795A8 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v10;
}


bool __fastcall WarBoardAIRoute____ctor_b__42_0(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
  if ( (byte_4A58D7F & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    byte_4A58D7F = 1;
  }
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B8880C)(this, x);
  return aiRouteMasterData->fields.masterUniqueIndex == value;
}


void __fastcall WarBoardAIRoute_AIRouteMasterData___ctor(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  struct System_Collections_Generic_List_int____o **p_replaceDataList; // x19
  int32_t v9; // w2
  int32_t v10; // w3
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
  int32_t v22; // w3
  int stageNpcMaster; // w8
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Int32_array *data; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A58D9D & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int____TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58D9D = 1;
  }
  data = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_OWORD *)&this->fields.masterType = xmmword_BB5520;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v7;
  p_replaceDataList = &this->fields.replaceDataList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_replaceDataList, (int32_t)v7, v9, v10);
  *((_DWORD *)p_replaceDataList + 2) = -1;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B8880C(Instance, v12);
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
    v19 = v14->m_Items[v15 + 1];
    v20 = v14->m_Items[v17 + 1];
    Instance = (WarBoardData_o *)sub_1B88658(int___TypeInfo, 2LL);
    if ( !Instance )
      goto LABEL_20;
    stageNpcMaster = (int)Instance->fields.stageNpcMaster;
    v12 = Instance;
    if ( !stageNpcMaster || (LODWORD(Instance->fields.npcEntityDict) = v19, stageNpcMaster == 1) )
LABEL_22:
      sub_1B88814(Instance, v12);
    HIDWORD(Instance->fields.npcEntityDict) = v20;
    if ( v18 )
    {
      items = v18->fields._items;
      v25 = Method_System_Collections_Generic_List_int____Add__;
      ++v18->fields._version;
      if ( items )
      {
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)Instance,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v12;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v12, v21, v22);
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
  void *replaceDataList; // x0
  uint32_t uniqueIndex_k__BackingField; // w8
  int32_t v9; // w22
  int32_t replacePriority; // w8
  __int64 v11; // x8
  unsigned int v12; // w8
  int32_t v13; // w8
  int32_t v14; // w8

  if ( (byte_4A58D9E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____get_Item__);
    byte_4A58D9E = 1;
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
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_int____get_Item__);
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
            this->fields.replacePriority = v9;
            goto LABEL_34;
          }
        }
        if ( type != 2 || pieceData == 0LL )
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
                sub_1B88814(replaceDataList, *(_QWORD *)&type);
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
    sub_1B8880C(replaceDataList, *(_QWORD *)&type);
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
  System_Collections_Generic_List_object__o *v5; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o **p_FutureTrendInfoList_k__BackingField; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x22
  System_Func_T__TResult__o *v13; // x23
  WarBoardActionTrendEntity_array *HasMatchCondition; // x0
  __int64 v15; // x1
  __int64 v16; // x8
  WarBoardActionTrendEntity_array *v17; // x20
  unsigned __int64 i; // x24
  WarBoardActionTrendEntity_o *v19; // x23
  System_Collections_Generic_List_object__o *v20; // x21
  WarBoardAIRoute_ActionTrendInfo_o *v21; // x22
  const MethodInfo *v22; // x2
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  int32_t condType; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A58D8C & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIRoute_ActionTrendInfo_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1B885B0(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__);
    byte_4A58D8C = 1;
  }
  condType = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v5;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._FutureTrendInfoList_k__BackingField,
    (int32_t)v5,
    v7,
    v8);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Entity_k__BackingField = entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)entity, v9, v10);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v11);
  v13 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v13,
    0LL,
    Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__,
    0LL);
  HasMatchCondition = (WarBoardActionTrendEntity_array *)WarBoardActionTrendConditionMaster__HasMatchCondition(
                                                           ConditionEntityArray,
                                                           (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v13,
                                                           &condType,
                                                           0LL);
  this->fields._HasTargetIndividualityCond_k__BackingField = (unsigned __int8)HasMatchCondition & 1;
  if ( !entity )
    goto LABEL_20;
  if ( !WarBoardActionTrendEntity__get_HasFutureTrend(entity, 0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  HasMatchCondition = (WarBoardActionTrendEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !HasMatchCondition
    || (HasMatchCondition = WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                              (WarBoardActionTrendMaster_o *)HasMatchCondition,
                              entity,
                              0LL)) == 0LL )
  {
LABEL_20:
    sub_1B8880C(HasMatchCondition, v15);
  }
  v16 = *(_QWORD *)&HasMatchCondition->max_length;
  v17 = HasMatchCondition;
  if ( (int)v16 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v16; ++i )
    {
      if ( i >= (unsigned int)v16 )
        sub_1B88814(HasMatchCondition, v15);
      v19 = v17->m_Items[i];
      if ( v19 )
      {
        v20 = (System_Collections_Generic_List_object__o *)*p_FutureTrendInfoList_k__BackingField;
        v21 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1B887FC(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v21, v19, v22);
        if ( !v20 )
          goto LABEL_20;
        items = v20->fields._items;
        v26 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)v21,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v21;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v21, v23, v24);
        }
      }
      LODWORD(v16) = v17->max_length;
    }
  }
}


WarBoardActionTrendConditionEntity_array *__fastcall WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  WarBoardAIRoute_ActionTrendInfo_o *v2; // x20
  ServantStatusBattleListViewItem_o *p_conditionEntityArray; // x19
  System_Object_array *conditionEntityArray; // x21
  struct WarBoardActionTrendEntity_o *Entity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *conditionIds; // x20
  WarBoardAIRoute_ActionTrendInfo___c_c *v7; // x0
  System_Func_T__TResult__o *_9__8_0; // x21
  Il2CppObject *v9; // x22
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IEnumerable_T__o *v13; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  v2 = this;
  if ( (byte_4A58D8B & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    sub_1B885B0(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
    sub_1B885B0(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__);
    this = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1B885B0(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
    byte_4A58D8B = 1;
  }
  p_conditionEntityArray = (ServantStatusBattleListViewItem_o *)&v2->fields.conditionEntityArray;
  conditionEntityArray = (System_Object_array *)v2->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = v2->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_1B8880C(this, method);
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
      _9__8_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__8_0,
        v9,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        0LL);
      static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v11, v12);
    }
    v13 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           conditionIds,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v14 = BasicHelper__ExcludeNull_object_(
            v13,
            (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = System_Linq_Enumerable__ToArray_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                             (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    p_conditionEntityArray->klass = (ServantStatusBattleListViewItem_c *)conditionEntityArray;
    sub_1B88554(p_conditionEntityArray, (int32_t)conditionEntityArray, v15, v16);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A58D8D & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
    byte_4A58D8D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_ActionTrendInfo___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4A58D8E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
    byte_4A58D8E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v5);
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   x,
                                                   (const MethodInfo_311D934 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
}


void __fastcall WarBoardAIRoute_AdvantagePieceData___ctor(
        WarBoardAIRoute_AdvantagePieceData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_Dictionary_int__object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_Dictionary_int__object__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_Dictionary_int__object__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A58D96 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
    byte_4A58D96 = 1;
  }
  this->fields.flagNow = 1LL;
  *(_QWORD *)&this->fields.baseCARange = -1LL;
  *(_QWORD *)&this->fields.baseAARange = -1LL;
  *(_QWORD *)&this->fields.baseDARange = -1LL;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicClassAdvantageServant, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicClassDisAdvantageServant, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicAttackAdvantageServant, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicAttackDisAdvantageServant, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicDefenseAdvantageServant, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicDefenseDisAdvantageServant, (int32_t)v18, v19, v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_DesignationItemData___ctor(
        WarBoardAIRoute_DesignationItemData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A58D97 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
    byte_4A58D97 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_PiecePersonality___ctor(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A58D85 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
    byte_4A58D85 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.ratingOffsetList, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__AttackOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  ServantStatusBattleListViewItem_o *p_attackOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v6; // x0
  System_Func_object__bool__o *_9__4_0; // x21
  Il2CppObject *v8; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Collections_Generic_List_TSource__o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A58D82 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    sub_1B885B0(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
    sub_1B885B0(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__);
    sub_1B885B0(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_4A58D82 = 1;
  }
  p_attackOffset = (ServantStatusBattleListViewItem_o *)&this->fields.attackOffset;
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
      _9__4_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__4_0,
        v8,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        0LL);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v10, v11);
    }
    v12 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__4_0,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v13 = System_Linq_Enumerable__ToList_object_(
            v12,
            (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_attackOffset->klass = (ServantStatusBattleListViewItem_c *)v13;
    sub_1B88554(p_attackOffset, (int32_t)v13, v14, v15);
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
  int32_t v5; // w3

  if ( (byte_4A58D84 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    byte_4A58D84 = 1;
  }
  v3 = sub_1B887FC(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 40), (int32_t)this, v4, v5);
  return (System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *)v3;
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__MoveOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  ServantStatusBattleListViewItem_o *p_moveOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v6; // x0
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v8; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Collections_Generic_List_TSource__o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A58D83 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    sub_1B885B0(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
    sub_1B885B0(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__);
    sub_1B885B0(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_4A58D83 = 1;
  }
  p_moveOffset = (ServantStatusBattleListViewItem_o *)&this->fields.moveOffset;
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
      _9__5_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__5_0,
        v8,
        Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__,
        0LL);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v10, v11);
    }
    v12 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v13 = System_Linq_Enumerable__ToList_object_(
            v12,
            (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_moveOffset->klass = (ServantStatusBattleListViewItem_c *)v13;
    sub_1B88554(p_moveOffset, (int32_t)v13, v14, v15);
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
  System_Collections_Generic_List_object__o *actionTrandList; // x0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v6; // x9
  __int128 v7; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap1; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v11; // x8
  struct WarBoardAIRoute_ActionTrendInfo_o *trendInfo_5__3; // x8
  System_Collections_Generic_List_object__o *FutureTrendInfoList_k__BackingField; // x0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v14; // x9
  __int128 v15; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap3; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  bool v22; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v23; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *current; // x1
  bool result; // w0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  bool v32; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v33; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v34; // x1
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v35; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v39; // x8
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-50h]
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o **v42; // [xsp+48h] [xbp-28h]
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v43; // [xsp+58h] [xbp-18h] BYREF

  v43 = this;
  v2 = this;
  if ( (byte_4A58D87 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    this = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    byte_4A58D87 = 1;
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
      sub_1B8880C(this, method);
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_1B8880C(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      &v40,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v14 = v43;
    v15 = *(_OWORD *)&v40.fields._list;
    p__7__wrap3 = (ServantStatusBattleListViewItem_o *)&v43->fields.__7__wrap3;
    v41 = v40;
    v43->fields.__7__wrap3.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v40.fields._current;
    *(_OWORD *)&v14->fields.__7__wrap3.fields._list = v15;
    sub_1B88554(p__7__wrap3, 0, v17, v18);
    v2 = v43;
LABEL_12:
    v2->fields.__1__state = -4;
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap3,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    v23 = v43;
    if ( v22 )
    {
      current = v43->fields.__7__wrap3.fields._current;
      v43->fields.__2__current = current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->fields.__2__current, (int32_t)current, v20, v21);
      result = 1;
      v43->fields.__1__state = 2;
      return result;
    }
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(v43, v19);
    v26 = v43;
    *(_OWORD *)&v43->fields._trendInfo_5__3 = 0u;
    v26 = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)((char *)v26 + 72);
    *(_OWORD *)&v26->fields.__1__state = 0u;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v26, 0, v27, v28);
    v11 = v43;
    goto LABEL_15;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1B8880C(this, method);
  actionTrandList = (System_Collections_Generic_List_object__o *)_4__this->fields.actionTrandList;
  if ( !actionTrandList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    &v40,
    actionTrandList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v6 = v43;
  v7 = *(_OWORD *)&v40.fields._list;
  p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v43->fields.__7__wrap1;
  v41 = v40;
  v43->fields.__7__wrap1.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v40.fields._current;
  *(_OWORD *)&v6->fields.__7__wrap1.fields._list = v7;
  sub_1B88554(p__7__wrap1, 0, v9, v10);
  v11 = v43;
  v43->fields.__1__state = -3;
LABEL_15:
  v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v11->fields.__7__wrap1,
          (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
  v33 = v43;
  if ( v32 )
  {
    v34 = v43->fields.__7__wrap1.fields._current;
    v43->fields._trendInfo_5__3 = v34;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v33->fields._trendInfo_5__3, (int32_t)v34, v30, v31);
    v35 = v43;
    v36 = v43->fields._trendInfo_5__3;
    v43->fields.__2__current = v36;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v35->fields.__2__current, (int32_t)v36, v37, v38);
    result = 1;
    v43->fields.__1__state = 1;
  }
  else
  {
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(v43, v29);
    v39 = v43;
    result = 0;
    v43->fields.__7__wrap1.fields._list = 0LL;
    *(_QWORD *)&v39->fields.__7__wrap1.fields._index = 0LL;
    v39->fields.__7__wrap1.fields._current = 0LL;
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
  int32_t v7; // w3

  if ( (byte_4A58D8A & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    byte_4A58D8A = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1B887FC(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  if ( (byte_4A58D88 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    byte_4A58D88 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A58D89 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    byte_4A58D89 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A58D86 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIRoute_PiecePersonality___c_TypeInfo);
    byte_4A58D86 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_PiecePersonality___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return x->fields.type == 0;
}


bool __fastcall WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.type == 1;
}


void __fastcall WarBoardAIRoute_PutSquareTarget___ctor(
        WarBoardAIRoute_PutSquareTarget_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A58D98 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
    byte_4A58D98 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v3,
    (const MethodInfo_31AB7CC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v6,
    (const MethodInfo_31AB7CC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicObjectPutSquareIndex, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v9,
    (const MethodInfo_31AB7CC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicIndividualityPutSqareIndex, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData___ctor(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A58D91 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
    byte_4A58D91 = 1;
  }
  this->fields.flagNow = 1LL;
  v3 = (Il2CppObject *)sub_1B887FC(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.evalOffsetMagnification = (struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.evalOffsetMagnification, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData__CalcEvalValue(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
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

  if ( (byte_4A58D93 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&System_Decimal_TypeInfo);
    byte_4A58D93 = 1;
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
  v7 = System_Decimal__op_Implicit_62914408((System_Decimal_o *)v4, WarBoardEvalFactorsAffectRatio, 0LL);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_1B8880C(0LL, v6);
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
  v25 = System_Decimal__op_Implicit_62914408(cctor_finished, attackEvalOffsetAddValue, 0LL);
  v28 = System_Decimal__op_Division(v27, v25, v26, (const MethodInfo *)v7);
  v30 = System_Decimal__op_Addition(v29, AttackValue, v20, (const MethodInfo *)v28);
  this->fields.evalValue = System_Decimal__op_Explicit_62914912(v30, v31);
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


bool __fastcall WarBoardAIRoute_RouteData__HasFlag_35300500(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_4A58D90 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__);
    byte_4A58D90 = 1;
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

  if ( (byte_4A58D92 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIRoute_RouteData_TypeInfo);
    byte_4A58D92 = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0LL);
  if ( result )
  {
    methodPtr_low = LOBYTE(WarBoardAIRoute_RouteData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      sub_1B88ACC(result);
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
  ServantStatusBattleListViewItem_o *p_futureLookingTrendHashSet; // x19
  System_Collections_Generic_HashSet_T__o *v4; // x20
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // t1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A58D8F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    byte_4A58D8F = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = (ServantStatusBattleListViewItem_o *)&this->fields.futureLookingTrendHashSet;
  v4 = (System_Collections_Generic_HashSet_T__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v4 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v4,
      (const MethodInfo_33B9184 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    p_futureLookingTrendHashSet->klass = (ServantStatusBattleListViewItem_c *)v4;
    sub_1B88554(p_futureLookingTrendHashSet, (int32_t)v4, v6, v7);
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


System_Decimal_o *__fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(
        System_Decimal_o *retstr,
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  float warAttack; // s8
  float benAttack; // s9
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4A58D94 & 1) == 0 )
  {
    sub_1B885B0(&System_Decimal_TypeInfo);
    byte_4A58D94 = 1;
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

  if ( (byte_4A58D95 & 1) == 0 )
  {
    sub_1B885B0(&System_Decimal_TypeInfo);
    byte_4A58D95 = 1;
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


void __fastcall WarBoardAIRoute_TargetData___ctor_35302408(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardSquareData_o *targetSquare,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  WarBoardAIRoute_TargetData_o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3

  v8 = this;
  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields.targetSquare = targetSquare;
  v8 = (WarBoardAIRoute_TargetData_o *)((char *)v8 + 48);
  v8->fields.targetObject = (struct IWarBoardObjectData_o *)actionTrendKey;
  v8->fields.moveByDistanceType = conditionId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v8, (int32_t)targetSquare, v9, v10);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35302488(
        WarBoardAIRoute_TargetData_o *this,
        IWarBoardObjectData_o *targetObject,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actionTrendKey = actionTrendKey;
  this->fields.conditionId = conditionId;
  this->fields.targetObject = targetObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)targetObject, v9, v10);
  WarBoardAIRoute_TargetData__DetectObject(this, v11);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35303068(
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
  struct IWarBoardObjectData_o *targetObject; // x1
  struct WarBoardSquareData_o *targetSquare; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseTargetData )
    sub_1B8880C(v11, v12);
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)targetObject, v13, v14);
  targetSquare = baseTargetData->fields.targetSquare;
  this->fields.targetSquare = targetSquare;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetSquare, (int32_t)targetSquare, v17, v18);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v19);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35304100(
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
  const MethodInfo *v15; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.targetObject = targetObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)targetObject, v13, v14);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v15);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35304212(
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
  if ( (byte_4A58D99 & 1) == 0 )
  {
    b = (WarBoardAIRoute_TargetData_o *)sub_1B885B0(&WarBoardAIRoute_TargetData_TypeInfo);
    byte_4A58D99 = 1;
  }
  if ( !v2 )
LABEL_9:
    sub_1B8880C(b, method);
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone(v2, 0LL);
  if ( result )
  {
    methodPtr_low = LOBYTE(WarBoardAIRoute_TargetData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      sub_1B88ACC(result);
      goto LABEL_9;
    }
  }
  return result;
}


void __fastcall WarBoardAIRoute_TargetData__DetectObject(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct IWarBoardObjectData_o *targetObject; // x8
  WarBoardPieceData_c *v6; // x9
  __int64 methodPtr_low; // x10
  struct IWarBoardObjectData_o *v8; // x11
  int32_t v9; // w1
  struct WarBoardPieceData_o **p_targetPiece; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct IWarBoardObjectData_o *v13; // x8
  WarBoardItemData_c *v14; // x9
  __int64 v15; // x10
  struct IWarBoardObjectData_o *v16; // x11
  int32_t v17; // w1
  struct WarBoardItemData_o **p_targetItem; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct IWarBoardObjectData_o *v21; // x8
  WarBoardTreasureData_c *v22; // x9
  __int64 v23; // x10
  struct IWarBoardObjectData_o *v24; // x11
  int32_t v25; // w1
  struct WarBoardTreasureData_o **p_targetTreasure; // x19

  if ( (byte_4A58D9B & 1) == 0 )
  {
    sub_1B885B0(&WarBoardItemData_TypeInfo);
    sub_1B885B0(&WarBoardPieceData_TypeInfo);
    sub_1B885B0(&WarBoardTreasureData_TypeInfo);
    byte_4A58D9B = 1;
  }
  targetObject = this->fields.targetObject;
  if ( targetObject )
  {
    v6 = WarBoardPieceData_TypeInfo;
    methodPtr_low = LOBYTE(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(targetObject->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardPieceData_TypeInfo )
        v8 = this->fields.targetObject;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    this->fields.targetPiece = (struct WarBoardPieceData_o *)v8;
    p_targetPiece = &this->fields.targetPiece;
    if ( LOBYTE(targetObject->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[methodPtr_low - 1] == v6 )
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
    this->fields.targetPiece = 0LL;
    p_targetPiece = &this->fields.targetPiece;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_targetPiece, v9, v2, v3);
  v13 = this->fields.targetObject;
  if ( v13 )
  {
    v14 = WarBoardItemData_TypeInfo;
    v15 = LOBYTE(WarBoardItemData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v13->klass->vtable[0].methodPtr) >= (unsigned int)v15 )
    {
      if ( (WarBoardItemData_c *)v13->klass->_2.typeHierarchy[v15 - 1] == WarBoardItemData_TypeInfo )
        v16 = this->fields.targetObject;
      else
        v16 = 0LL;
    }
    else
    {
      v16 = 0LL;
    }
    this->fields.targetItem = (struct WarBoardItemData_o *)v16;
    p_targetItem = &this->fields.targetItem;
    if ( LOBYTE(v13->klass->vtable[0].methodPtr) >= (unsigned int)v15 )
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
    this->fields.targetItem = 0LL;
    p_targetItem = &this->fields.targetItem;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_targetItem, v17, v11, v12);
  v21 = this->fields.targetObject;
  if ( v21 )
  {
    v22 = WarBoardTreasureData_TypeInfo;
    v23 = LOBYTE(WarBoardTreasureData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v21->klass->vtable[0].methodPtr) >= (unsigned int)v23 )
    {
      if ( (WarBoardTreasureData_c *)v21->klass->_2.typeHierarchy[v23 - 1] == WarBoardTreasureData_TypeInfo )
        v24 = this->fields.targetObject;
      else
        v24 = 0LL;
    }
    else
    {
      v24 = 0LL;
    }
    this->fields.targetTreasure = (struct WarBoardTreasureData_o *)v24;
    p_targetTreasure = &this->fields.targetTreasure;
    if ( LOBYTE(v21->klass->vtable[0].methodPtr) >= (unsigned int)v23 )
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
    this->fields.targetTreasure = 0LL;
    p_targetTreasure = &this->fields.targetTreasure;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_targetTreasure, v25, v19, v20);
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
  const MethodInfo *v11; // x5
  struct IWarBoardObjectData_o *targetObject; // x24
  WarBoardAIRoute_TargetData_o *v13; // x25
  IWarBoardObjectData_c *klass; // x8
  __int64 v15; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 p_method; // x0
  struct WarBoardSquareData_o *targetSquare; // x8
  __int64 squareIndex_k__BackingField; // x0
  int32_t nowSquareIndex; // w24
  struct System_Int32_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  WarBoardAIRoute_TargetData___c_c *v24; // x0
  System_Int32_array *baseRoute; // x24
  WarBoardPieceData_o *v26; // x21
  System_Func_object__int__o *_9__7_0; // x25
  Il2CppObject *v28; // x26
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Int32_array *v33; // x0
  bool IsDetour; // w0
  const MethodInfo *v35; // x5
  int32_t v36; // w23
  struct System_Int32_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w0
  struct IWarBoardObjectData_o *v41; // x21
  WarBoardAIRoute_TargetData_o *v42; // x22
  IWarBoardObjectData_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  struct WarBoardSquareData_o *v47; // x8

  if ( (byte_4A58D9A & 1) == 0 )
  {
    sub_1B885B0(&AStarSearch_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_WarBoardPieceData__int__TypeInfo);
    sub_1B885B0(&IWarBoardObjectData_TypeInfo);
    sub_1B885B0(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__);
    sub_1B885B0(&WarBoardAIRoute_TargetData___c_TypeInfo);
    byte_4A58D9A = 1;
  }
  WarBoardAIRoute_TargetData__DetectObject(this, (const MethodInfo *)baseTargetData);
  targetObject = this->fields.targetObject;
  if ( targetObject )
    v13 = this;
  else
    v13 = 0LL;
  if ( targetObject )
  {
    klass = targetObject->klass;
    v15 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v15;
        p_offset += 2;
        if ( !v15 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1LL);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                    targetObject,
                                    *(_QWORD *)(p_method + 8));
    if ( !v13 )
LABEL_49:
      sub_1B8880C(squareIndex_k__BackingField, v10);
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
  v21 = AStarSearch__RouteSearch(0LL, baseSquareIndex, nowSquareIndex, 0, 0LL, v11);
  this->fields.baseRoute = v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseRoute, (int32_t)v21, v22, v23);
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
    _9__7_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v28, Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, 0LL);
    static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v33 = System_Linq_Enumerable__ToArray_int_(
          v32,
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v33, 0LL);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    v36 = this->fields.nowSquareIndex;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v37 = AStarSearch__RouteSearch(v26, baseSquareIndex, v36, 1, 0LL, v35);
    this->fields.detourRoute = v37;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.detourRoute, (int32_t)v37, v38, v39);
  }
  v40 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
  v41 = this->fields.targetObject;
  this->fields.isAround = v40 == 2;
  if ( v41 )
    v42 = this;
  else
    v42 = 0LL;
  if ( v41 )
  {
    v43 = v41->klass;
    v44 = *(unsigned __int16 *)(&v41->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v41->klass->_2.bitflags2 + 3) )
    {
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((IWarBoardObjectData_c **)v45 - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_39;
      }
      v46 = (__int64)&v43->vtable[*v45].method;
    }
    else
    {
LABEL_39:
      v46 = sub_1BDA590(v41, IWarBoardObjectData_TypeInfo, 0LL);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A58D9C & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIRoute_TargetData___c_TypeInfo);
    byte_4A58D9C = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardAIRoute_TargetData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardAIRoute_TargetData___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_TargetData___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardAIRoute_TargetData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
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
  int32_t v2; // w2
  int32_t v3; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v4; // x20
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct WarBoardData_o *monitor; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  struct WarBoardStageNpcEntity_o *npcData; // x9
  int32_t searchDepth; // w8
  WarBoardAIRoute__CreateRouteData_d__47_o *v17; // x9
  int32_t v18; // w10
  int32_t RequiredCost; // w20
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  int32_t MasterSquareIndex; // w2
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // x1
  struct System_Int32_array *AllyPutSquareIndicesWithoutMaster; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  ServantStatusBattleListViewItem_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x0
  __int64 v32; // x1
  struct WarBoardData_o *warBoardData_5__2; // x8
  System_Collections_Generic_List_int__o *masterExistsForce; // x0
  _BOOL8 v35; // x0
  __int64 v36; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v37; // x8
  int32_t servantAndEnemyRange_5__14; // w8
  int32_t servantAndEnemyMasterRange_5__15; // w9
  struct WarBoardAIRoute_AIRouteMasterData_o *v40; // x9
  int32_t v41; // w9
  struct DefenseAreaData_o *DefenseAreaData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x0
  __int64 v47; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v48; // x8
  struct DefenseAreaData_o *defenseAreaData_5__7; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x10
  bool IsAllBlockShortestRouteEnemyAndMastr; // w0
  System_Collections_Generic_Dictionary_int__uint__o *v52; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v53; // x8
  __int128 v54; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap8; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  const MethodInfo *v58; // x1
  Il2CppObject *key; // x20
  Il2CppObject *v60; // x21
  WarBoardAIRoute__CreateRouteData_d__47_o *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  WarBoardSquareData_o *Square; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *_8__1; // x21
  WarBoardPieceData_o *PieceUnique; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  __int64 v72; // x0
  __int64 v73; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v74; // x8
  int64_t baseFlag_5__6; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v76; // x9
  int64_t v77; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v78; // x8
  System_Collections_Generic_IEnumerable_TSource__o *routeDataList; // x21
  Il2CppObject *v80; // x23
  System_Func_object__bool__o *v81; // x22
  __int64 v82; // x1
  int32_t v83; // w8
  System_Collections_Generic_List_object__o *v84; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v86; // x8
  __int64 RouteSumPieceActionCost; // x0
  __int64 v88; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v89; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v90; // x9
  _BOOL8 IsActable; // x0
  __int64 v92; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v93; // x9
  System_Collections_Generic_Dictionary_int__int__o *DesignationItemToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v95; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  __int64 v98; // x0
  __int64 v99; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v100; // x9
  struct System_Collections_Generic_Dictionary_int__int__o *TargetToDistance_35288840; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v102; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  System_Collections_Generic_Dictionary_uint__int__o *AllEnemyToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v109; // x0
  int32_t v110; // w2
  int32_t v111; // w3
  __int64 v112; // x0
  __int64 v113; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v114; // x8
  WarBoardPieceData_o *basePiece; // x0
  _BOOL8 isServant; // x0
  __int64 v117; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v118; // x9
  WarBoardAIRoute_AdvantagePieceData_o *AdvantagePieceData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v120; // x0
  int32_t v121; // w2
  int32_t v122; // w3
  const MethodInfo *v123; // x5
  int32_t masterSquareIndex_5__4; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x0
  __int64 v126; // x0
  __int64 v127; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v128; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v129; // x9
  struct WarBoardPieceData_o *v130; // x11
  struct WarBoardAIRoute_AIRouteMasterData_o *v131; // x9
  int32_t masterType; // w10
  int32_t index_k__BackingField; // w11
  struct WarBoardStageNpcEntity_o *v134; // x12
  System_Collections_Generic_HashSet_T__o *v135; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v136; // x0
  int32_t v137; // w2
  int32_t v138; // w3
  System_Collections_Generic_HashSet_T__o *v139; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v140; // x0
  int32_t v141; // w2
  int32_t v142; // w3
  __int64 v143; // x1
  System_Collections_Generic_List_object__o *v144; // x0
  _BOOL8 v145; // x0
  __int64 v146; // x1
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
  __int64 v157; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v158; // x8
  int32_t v159; // w9
  System_Collections_Generic_IEnumerable_TSource__o *v160; // x20
  WarBoardAIRoute___c_c *v161; // x8
  System_Func_T__TResult__o *_9__47_6; // x21
  Il2CppObject *v163; // x22
  struct WarBoardAIRoute___c_StaticFields *v164; // x0
  int32_t v165; // w2
  int32_t v166; // w3
  __int64 v167; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v168; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v169; // x0
  __int64 Count; // x0
  __int64 v171; // x1
  struct WarBoardStageNpcEntity_o *v172; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v173; // x11
  float v174; // s0
  int32_t v175; // w9
  int32_t calcEllipsisMin; // w8
  System_Linq_IOrderedEnumerable_TSource__c *v177; // x8
  __int64 v178; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v181; // x1
  ServantStatusBattleListViewItem_o *v182; // x0
  int32_t v183; // w2
  int32_t v184; // w3
  __int64 *v185; // x19
  __int64 v186; // x8
  __int64 v187; // x9
  int *v188; // x10
  __int64 v189; // x0
  __int64 v190; // x0
  __int64 *v191; // x19
  __int64 v192; // x8
  __int64 v193; // x9
  int *v194; // x10
  __int64 v195; // x0
  ServantStatusBattleListViewItem_o *p__7__wrap24; // x0
  int32_t v197; // w2
  int32_t v198; // w3
  Il2CppObject *v199; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v200; // x0
  int32_t v201; // w2
  int32_t v202; // w3
  __int64 v203; // x1
  WarBoardSquareData_o *v204; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *MyAndLinkedSquareIndecies; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v206; // x0
  int32_t v207; // w2
  int32_t v208; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v209; // x8
  int v210; // w9
  __int64 v211; // x21
  __int64 v212; // x0
  __int64 v213; // x1
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v214; // x8
  __int64 _7__wrap23_low; // x9
  int32_t *v216; // x27
  WarBoardAIRoute_RouteData_o *v217; // x20
  const MethodInfo *v218; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v219; // x9
  int32_t getEnumeratorRetType; // w8
  int32_t v221; // w10
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v222; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dicBaseDIRange_5__18; // x20
  WarBoardAIRoute___c_c *v224; // x8
  System_Func_T__TResult__o *_9__47_1; // x22
  Il2CppObject *v226; // x23
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v228; // w2
  int32_t v229; // w3
  System_Func_T__TResult__o *_9__47_2; // x23
  Il2CppObject *v231; // x24
  struct WarBoardAIRoute___c_StaticFields *v232; // x0
  int32_t v233; // w2
  int32_t v234; // w3
  __int64 v235; // x1
  int32_t v236; // w2
  int32_t v237; // w3
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v238; // x20
  WarBoardAIRoute_RouteData_o *v239; // x0
  struct WarBoardSquareData_o *v240; // x1
  __int64 v241; // x0
  __int64 v242; // x1
  int32_t v243; // w2
  int32_t v244; // w3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v245; // x8
  WarBoardAIRoute_RouteData_o *v246; // x0
  struct WarBoardPieceData_o *v247; // x1
  __int64 v248; // x1
  int32_t v249; // w2
  int32_t v250; // w3
  WarBoardAIRoute_RouteData_o *v251; // x0
  WarBoardAIRoute_RouteData_o *v252; // x22
  int32_t v253; // w23
  WarBoardSquareData_o *v254; // x0
  int32_t v255; // w2
  int32_t v256; // w3
  __int64 v257; // x1
  System_Collections_Generic_Dictionary_uint__int__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v259; // x19
  __int64 v260; // x1
  System_Collections_Generic_Dictionary_uint__int__o *v261; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v263; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v264; // x8
  WarBoardAIRoute_RouteData_o *v265; // x22
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *MoveByTargetDistance; // x0
  int32_t v267; // w2
  int32_t v268; // w3
  __int64 v269; // x0
  __int64 v270; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v271; // x9
  WarBoardAIRoute_RouteData_o *v272; // x20
  WarBoardPieceData_o *ActionPiece; // x0
  int32_t v274; // w2
  int32_t v275; // w3
  ServantStatusBattleListViewItem_o *p_actionPiece; // x0
  __int64 v277; // x1
  int32_t v278; // w2
  const MethodInfo *v279; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v280; // x8
  struct WarBoardPieceData_o *v281; // x9
  struct WarBoardPieceData_o *v282; // x10
  struct WarBoardPieceData_o *v283; // x8
  int32_t limitActionCount_k__BackingField; // w19
  int32_t currentActionCount_k__BackingField; // w20
  System_Math_c *v286; // x0
  WarBoardAIRoute_RouteData_o *v287; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v288; // x9
  int v289; // w11
  struct WarBoardSquareData_o *baseSquare_5__11; // x10
  WarBoardData_o *v291; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v292; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v293; // x9
  WarBoardPieceData_o *v294; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v295; // x8
  WarBoardPieceData_o *v296; // x0
  WarBoardPieceData_o *v297; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v298; // x8
  WarBoardPieceData_o *v299; // x22
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v300; // x8
  WarBoardPieceData_o *v301; // x0
  WarBoardPieceData_o *v302; // x0
  WarBoardAIRoute_RouteData_o *v303; // x8
  struct WarBoardPieceData_o *v304; // x9
  WarBoardPieceData_o *v305; // x0
  WarBoardAIRoute_RouteData_o *v306; // x19
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v307; // x8
  struct WarBoardPieceData_o *v308; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  int64_t flagNow; // x22
  __int64 ClassId; // x0
  __int64 v312; // x1
  struct WarBoardPieceData_o *v313; // x8
  int32_t v314; // w20
  BattleServantData_o *v315; // x0
  int32_t v316; // w2
  int64_t FlagAdvantage; // x0
  __int64 v318; // x1
  struct WarBoardPieceData_o *v319; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v320; // x8
  WarBoardPieceData_o *v321; // x22
  WarBoardAIRoute_RouteData_o *v322; // x2
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v323; // x9
  WarBoardPieceData_o *v324; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v325; // x9
  System_Collections_Generic_List_object__o *v326; // x0
  int32_t requiredCost_5__3; // w23
  WarBoardPieceData_o *v328; // x20
  WarBoardPieceData_o *v329; // x22
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v330; // x4
  System_Collections_Generic_Dictionary_int__uint__o *updated; // x25
  int32_t MasterSquareIndexFromPlaceData; // w22
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v333; // x23
  System_Func_object__bool__o *v334; // x24
  DefenseAreaData_o *v335; // x0
  __int64 v336; // x1
  struct WarBoardAIRoute_AdvantagePieceData_o *v337; // x23
  System_Func_object__bool__o *v338; // x24
  struct DefenseAreaData_o *v339; // x23
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v340; // x9
  WarBoardPieceData_o *v341; // x0
  System_Int32_array *v342; // x2
  struct WarBoardAIRoute_AIRouteMasterData_o *v343; // x8
  _BOOL8 v344; // x0
  __int64 v345; // x1
  WarBoardAIRoute_RouteData_o *v346; // x21
  int64_t v347; // x8
  System_Collections_Generic_List_object__o *v348; // x23
  __int64 v349; // x0
  __int64 v350; // x1
  int32_t v351; // w2
  int32_t v352; // w3
  __int64 v353; // x0
  __int64 v354; // x1
  WarBoardAIRoute_RouteData_o *v355; // x21
  System_Collections_Generic_Dictionary_uint__int__o *v356; // x23
  int32_t v357; // w2
  int32_t v358; // w3
  __int64 v359; // x1
  System_Collections_Generic_Dictionary_int__uint__o *v360; // x0
  _BOOL8 v361; // x0
  __int64 v362; // x1
  const MethodInfo *v363; // x5
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v364; // x8
  struct WarBoardPieceData_o *v365; // x8
  uint32_t key_high; // w21
  int32_t v367; // w24
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x23
  int32_t v369; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v370; // x0
  __int64 v371; // x0
  __int64 v372; // x1
  WarBoardAIRoute_RouteData_o *v373; // x21
  System_Collections_Generic_List_int__o *v374; // x23
  __int64 v375; // x0
  __int64 v376; // x1
  int32_t v377; // w2
  int32_t v378; // w3
  WarBoardAIRoute_RouteData_o *v379; // x21
  System_Collections_Generic_Dictionary_int__bool__o *v380; // x23
  __int64 v381; // x0
  __int64 v382; // x1
  int32_t v383; // w2
  int32_t v384; // w3
  WarBoardAIRoute_RouteData_o *v385; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v386; // x23
  __int64 v387; // x0
  __int64 v388; // x1
  int32_t v389; // w2
  int32_t v390; // w3
  __int64 v391; // x0
  __int64 v392; // x1
  WarBoardAIRoute_RouteData_o *v393; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v394; // x8
  WarBoardPieceData_o *v395; // x0
  _BOOL8 IsBlockShortestRouteEnemyAndMaster; // x0
  __int64 v397; // x1
  const MethodInfo *v398; // x2
  const MethodInfo *v399; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v400; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v401; // x9
  struct WarBoardPieceData_o *v402; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v403; // x10
  DefenseAreaData_o *v404; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v405; // x9
  struct WarBoardPieceData_o *v406; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v407; // x11
  int32_t v408; // w10
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v409; // x9
  struct WarBoardPieceData_o *v410; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v411; // x10
  int32_t v412; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v413; // x0
  int32_t v414; // w0
  WarBoardAIRoute_RouteData_o *v415; // x19
  __int64 v416; // x0
  System_Collections_Generic_Dictionary_int__int__o *v417; // x0
  const MethodInfo *v418; // x5
  int32_t v419; // w21
  int32_t v420; // w22
  int32_t v421; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v422; // x0
  __int64 v423; // x0
  __int64 v424; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x23
  __int64 v426; // x0
  __int64 v427; // x1
  __int64 v428; // x0
  __int64 v429; // x1
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  __int64 v431; // x0
  __int64 v432; // x1
  struct System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v435; // x9
  __int64 size; // x10
  const MethodInfo *v437; // x5
  int32_t v438; // w21
  int32_t enemyMasterSquareIndex; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v440; // x0
  int32_t v441; // w0
  WarBoardAIRoute_RouteData_o *v442; // x19
  __int64 v443; // x0
  __int64 v444; // x1
  WarBoardAIRoute_RouteData_o *v445; // x19
  WarBoardAIManager_c *v446; // x0
  __int64 v447; // x0
  __int64 v448; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *v449; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v450; // x8
  WarBoardPieceData_o *v451; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v452; // x9
  struct WarBoardPieceData_o *v453; // x9
  WarBoardAIManager_c *v454; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v457; // x1
  const MethodInfo *v458; // x5
  int32_t currentKey; // w21
  int32_t v460; // w22
  System_Int32_array *v461; // x0
  __int64 v462; // x1
  struct WarBoardStageNpcEntity_o *v463; // x8
  __int64 v464; // x1
  WarBoardAIRoute_RouteData_o *v465; // x19
  WarBoardAIManager_c *v466; // x0
  struct DefenseAreaData_o *v467; // x8
  __int64 v468; // x0
  __int64 v469; // x1
  WarBoardAIManager_c *v470; // x0
  System_Collections_Generic_Dictionary_int__object__o *v471; // x0
  const MethodInfo *v472; // x5
  bool v473; // w21
  int32_t v474; // w22
  int32_t v475; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v476; // x22
  WarBoardAIRoute_RouteData_o *v477; // x19
  System_Collections_Generic_Dictionary_int__uint__o *v478; // x25
  WarBoardData_o *v479; // x0
  WarBoardEffectData_o *Effect; // x0
  __int64 v481; // x1
  System_Collections_Generic_List_int__o *v482; // x22
  __int64 v483; // x1
  System_Collections_Generic_List_object__o *v484; // x0
  _BOOL8 v485; // x0
  __int64 v486; // x1
  Il2CppObject *v487; // x21
  Il2CppClass *v488; // x0
  _BOOL8 v489; // x0
  __int64 monitor_high; // x1
  struct System_Int32_array *v491; // x8
  _QWORD *v492; // x9
  __int64 v493; // x10
  WarBoardPieceData_o *v494; // x0
  __int64 v495; // x1
  WarBoardPieceData_o *v496; // x0
  _BOOL8 v497; // x0
  __int64 v498; // x1
  __int64 monitor_low; // x1
  struct System_Int32_array *v500; // x8
  _QWORD *v501; // x9
  __int64 v502; // x10
  __int64 v503; // x0
  __int64 v504; // x1
  WarBoardPieceData_o *v505; // x0
  _BOOL8 v506; // x0
  __int64 v507; // x1
  _BOOL8 CanAcquireItem; // x0
  __int64 v509; // x1
  WarBoardAIRoute_RouteData_o *v510; // x8
  int64_t v511; // x9
  WarBoardPieceData_o *v512; // x0
  _BOOL8 isMaster; // x0
  __int64 v514; // x1
  _BOOL8 v515; // x0
  __int64 v516; // x1
  WarBoardAIRoute_RouteData_o *v517; // x8
  WarBoardPieceData_o *v518; // x0
  _BOOL8 v519; // x0
  __int64 v520; // x1
  _BOOL8 v521; // x0
  __int64 v522; // x1
  __int64 v523; // x0
  __int64 v524; // x1
  __int64 FlagOutOfWarningAreaToDistance; // x0
  __int64 v526; // x1
  WarBoardAIRoute_RouteData_o *v527; // x8
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x9
  struct WarBoardPieceData_o *v529; // x8
  System_Collections_Generic_Dictionary_int__object__o *piecePersonalityDic; // x0
  Il2CppObject *v531; // x22
  WarBoardAIEvalCalcurater_o *v532; // x21
  __int64 v533; // x0
  __int64 v534; // x1
  const MethodInfo *v535; // x1
  WarBoardAIRoute___c_c *v536; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v537; // x22
  System_Func_object__object__o *_9__47_5; // x23
  Il2CppObject *v539; // x24
  struct WarBoardAIRoute___c_StaticFields *v540; // x0
  int32_t v541; // w2
  int32_t v542; // w3
  System_Collections_Generic_IEnumerable_T__o *v543; // x23
  System_Collections_Generic_List_object__o *v544; // x22
  __int64 v545; // x0
  __int64 v546; // x1
  int32_t v547; // w2
  int32_t v548; // w3
  Il2CppObject *v549; // x1
  struct System_Object_array *v550; // x8
  _QWORD *v551; // x9
  __int64 v552; // x10
  Il2CppClass **v553; // x0
  WarBoardAIRoute_RouteData_o *v554; // x0
  __int64 v555; // x1
  int32_t v556; // w2
  int32_t v557; // w3
  const MethodInfo *v558; // x1
  System_Collections_Generic_List_object__o *allRouteList; // x0
  struct System_Object_array *v560; // x8
  _QWORD *v561; // x9
  __int64 v562; // x10
  Il2CppClass **v563; // x8
  int32_t searchCount; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x21
  Il2CppObject *v566; // x0
  ServantStatusBattleListViewItem_o *p_basePieceBasePieceRouteList_5__23; // x8
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v568; // x10
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *basePieceBasePieceRouteList_5__23; // t1
  WarBoardAIRoute__CreateRouteData_d__47_o *v570; // x0
  int32_t v571; // w2
  int32_t v572; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v573; // x0
  int32_t v574; // w2
  int32_t v575; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v576; // x0
  int32_t v577; // w2
  int32_t v578; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v579; // x0
  int32_t v580; // w2
  int32_t v581; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v582; // x0
  int32_t v583; // w2
  int32_t v584; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v585; // x0
  int32_t v586; // w2
  int32_t v587; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v588; // x0
  int32_t v589; // w2
  int32_t v590; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v591; // x0
  int32_t v592; // w2
  int32_t v593; // w3
  Il2CppObject *v594; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v595; // x0
  int32_t v596; // w2
  int32_t v597; // w3
  System_Collections_Generic_Dictionary_int__uint__o *v598; // [xsp+10h] [xbp-1B0h]
  WarBoardAIRoute_o *_4__this; // [xsp+18h] [xbp-1A8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v600; // [xsp+20h] [xbp-1A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v601; // [xsp+50h] [xbp-170h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o **v602; // [xsp+78h] [xbp-148h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v603; // [xsp+80h] [xbp-140h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v604; // [xsp+B0h] [xbp-110h] BYREF
  __int128 v605; // [xsp+D0h] [xbp-F0h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v606; // [xsp+E0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v607; // [xsp+F0h] [xbp-D0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+118h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+120h] [xbp-A0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+128h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v611; // [xsp+130h] [xbp-90h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+148h] [xbp-78h] BYREF
  __int64 actionCount; // [xsp+150h] [xbp-70h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v614; // [xsp+158h] [xbp-68h] BYREF

  v4 = this;
  v614 = this;
  if ( (byte_4A58DAD & 1) == 0 )
  {
    sub_1B885B0(&AStarSearch_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_uint__int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1B885B0(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
    sub_1B885B0(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1B885B0(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
    sub_1B885B0(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
    sub_1B885B0(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___76063688);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_1B885B0(&WarBoardAIRoute_RouteData_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__);
    sub_1B885B0(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__);
    sub_1B885B0(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__);
    sub_1B885B0(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__);
    sub_1B885B0(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__);
    sub_1B885B0(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
    sub_1B885B0(&WarBoardAIRoute___c_TypeInfo);
    sub_1B885B0(&WarBoardAIEvalCalcurater_TypeInfo);
    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58DAD = 1;
  }
  *(_QWORD *)masterReplaceCount = 0LL;
  actionCount = 0LL;
  memset(&v611, 0, sizeof(v611));
  value = 0LL;
  routeData = 0LL;
  route = 0LL;
  memset(&v604, 0, sizeof(v604));
  memset(&v607, 0, 32);
  v605 = 0u;
  v606 = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v603, 0, sizeof(v603));
  *(_QWORD *)&v601.fields._getEnumeratorRetType = 0LL;
  v602 = &v614;
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
      p__7__wrap24 = (ServantStatusBattleListViewItem_o *)&v614->fields.__7__wrap24;
      *(_QWORD *)&v614->fields.__7__wrap24 = 0LL;
      sub_1B88554(p__7__wrap24, 0, v197, v198);
      return 0;
    }
LABEL_117:
    v185 = *(__int64 **)&v4->fields.__7__wrap24;
    if ( !v185 )
      sub_1B8880C(this, method);
    v186 = *v185;
    v187 = *(unsigned __int16 *)(*v185 + 302);
    if ( *(_WORD *)(*v185 + 302) )
    {
      v188 = (int *)(*(_QWORD *)(v186 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v188 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v187;
        v188 += 4;
        if ( !v187 )
          goto LABEL_122;
      }
      v189 = v186 + 16LL * *v188 + 312;
    }
    else
    {
LABEL_122:
      v189 = sub_1BDA590(*(_QWORD *)&v4->fields.__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v190 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v189)(v185, *(_QWORD *)(v189 + 8));
    v4 = v614;
    if ( (v190 & 1) != 0 )
    {
      v191 = *(__int64 **)&v614->fields.__7__wrap24;
      if ( !v191 )
        sub_1B8880C(v190, method);
      v192 = *v191;
      v193 = *(unsigned __int16 *)(*v191 + 302);
      if ( *(_WORD *)(*v191 + 302) )
      {
        v194 = (int *)(*(_QWORD *)(v192 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v194 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          --v193;
          v194 += 4;
          if ( !v193 )
            goto LABEL_130;
        }
        v195 = v192 + 16LL * *v194 + 312;
      }
      else
      {
LABEL_130:
        v195 = sub_1BDA590(
                 *(_QWORD *)&v614->fields.__7__wrap24,
                 System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo,
                 0LL);
      }
      v199 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v195)(v191, *(_QWORD *)(v195 + 8));
      v200 = v614;
      v614->fields.__2__current = v199;
      v200 = (WarBoardAIRoute__CreateRouteData_d__47_o *)((char *)v200 + 24);
      ++LODWORD(v200->fields._baseSquare_5__11);
      sub_1B88554((ServantStatusBattleListViewItem_o *)v200, (int32_t)v199, v201, v202);
      result = 1;
      v614->fields.__1__state = 2;
      return result;
    }
    goto LABEL_131;
  }
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -3;
    goto LABEL_648;
  }
  result = 0;
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v8);
    monitor = (struct WarBoardData_o *)Instance[27].monitor;
    v12 = v614;
    v614->fields._warBoardData_5__2 = monitor;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->fields._warBoardData_5__2, (int32_t)monitor, v9, v10);
    if ( !_4__this )
      sub_1B8880C(v13, v14);
    npcData = _4__this->fields.npcData;
    if ( !npcData )
      sub_1B8880C(v13, v14);
    searchDepth = npcData->fields.searchDepth;
    if ( !searchDepth )
    {
      searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
      npcData->fields.searchDepth = searchDepth;
    }
    v17 = v614;
    v18 = v614->fields.searchCount + 1;
    v614->fields.searchCount = v18;
    if ( v18 > searchDepth )
      return 0;
    *(_QWORD *)masterReplaceCount = 0LL;
    actionCount = 0LL;
    WarBoardAIRoute__GetRouteDataActionList(
      _4__this,
      v17->fields.routeDataList,
      (int32_t *)&actionCount + 1,
      (int32_t *)&actionCount,
      &masterReplaceCount[1],
      masterReplaceCount,
      0LL);
    RequiredCost = WarBoardAIRoute__GetRequiredCost(
                     _4__this,
                     _4__this->fields.moveCost,
                     _4__this->fields.masterMoveCost,
                     SHIDWORD(actionCount),
                     actionCount,
                     masterReplaceCount[1],
                     masterReplaceCount[0],
                     0LL);
    v614->fields._requiredCost_5__3 = RequiredCost;
    v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v20 )
      sub_1B8880C(0LL, v21);
    if ( RequiredCost >= SHIDWORD(v20[47].klass) )
      return 0;
    MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v614->fields.piecePlaceData, 0LL);
    piecePlaceData = v614->fields.piecePlaceData;
    v614->fields._masterSquareIndex_5__4 = MasterSquareIndex;
    AllyPutSquareIndicesWithoutMaster = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                          _4__this,
                                          piecePlaceData,
                                          MasterSquareIndex,
                                          0LL);
    v25 = v614;
    v614->fields._allyPieceIndexs_5__5 = AllyPutSquareIndicesWithoutMaster;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v25->fields._allyPieceIndexs_5__5,
      (int32_t)AllyPutSquareIndicesWithoutMaster,
      v26,
      v27);
    v28 = (ServantStatusBattleListViewItem_o *)v614;
    v614->fields._defenseAreaData_5__7 = 0LL;
    v28 = (ServantStatusBattleListViewItem_o *)((char *)v28 + 104);
    *(_QWORD *)&v28[-1].fields.isMine = 1LL;
    sub_1B88554(v28, 0, v29, v30);
    warBoardData_5__2 = v614->fields._warBoardData_5__2;
    if ( !warBoardData_5__2 )
      sub_1B8880C(v31, v32);
    masterExistsForce = warBoardData_5__2->fields.masterExistsForce;
    if ( !masterExistsForce )
      sub_1B8880C(0LL, v32);
    v35 = System_Collections_Generic_List_int___Contains(
            masterExistsForce,
            _4__this->fields.forceId,
            (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
    v37 = v614;
    if ( v35 )
    {
      if ( v614 )
      {
        v614->fields._masterExists_5__8 = 1;
LABEL_25:
        DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                            _4__this,
                            v37->fields._masterSquareIndex_5__4,
                            v37->fields._allyPieceIndexs_5__5,
                            v37->fields.piecePlaceData,
                            0LL);
        v43 = v614;
        v614->fields._defenseAreaData_5__7 = DefenseAreaData;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v43->fields._defenseAreaData_5__7,
          (int32_t)DefenseAreaData,
          v44,
          v45);
        v48 = v614;
        defenseAreaData_5__7 = v614->fields._defenseAreaData_5__7;
        if ( !defenseAreaData_5__7 )
          sub_1B8880C(v46, v47);
        v614->fields._baseFlag_5__6 |= defenseAreaData_5__7->fields._Flag_k__BackingField;
        aiRouteMasterData = _4__this->fields.aiRouteMasterData;
        if ( !aiRouteMasterData )
          sub_1B8880C(v46, v47);
        IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                                 defenseAreaData_5__7->fields._ShortestRoutes_k__BackingField,
                                                 v48->fields.piecePlaceData,
                                                 aiRouteMasterData->fields.masterType == 1,
                                                 0LL);
        v37 = v614;
        if ( IsAllBlockShortestRouteEnemyAndMastr )
          v614->fields._baseFlag_5__6 |= 0x20000000uLL;
LABEL_29:
        v52 = v37->fields.piecePlaceData;
        if ( !v52 )
          sub_1B8880C(0LL, v36);
        System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
          &v601,
          v52,
          (const MethodInfo_3179994 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
        v53 = v614;
        v54 = *(_OWORD *)&v601.fields._dictionary;
        p__7__wrap8 = (ServantStatusBattleListViewItem_o *)&v614->fields.__7__wrap8;
        *(_OWORD *)&v600.fields._dictionary = *(_OWORD *)&v601.fields._dictionary;
        v600.fields._current = v601.fields._current;
        v614->fields.__7__wrap8.fields._current = v601.fields._current;
        *(_OWORD *)&v53->fields.__7__wrap8.fields._dictionary = v54;
        sub_1B88554(p__7__wrap8, 0, v56, v57);
        v614->fields.__1__state = -3;
LABEL_44:
        while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                  &v614->fields.__7__wrap8,
                  (const MethodInfo_32B9C68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
        {
          key = v614->fields.__7__wrap8.fields._current.fields.key;
          v60 = (Il2CppObject *)sub_1B887FC(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
          System_Object___ctor(v60, 0LL);
          v61 = v614;
          v614->fields.__8__1 = (struct WarBoardAIRoute___c__DisplayClass47_0_o *)v60;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v61->fields.__8__1, (int32_t)v60, v62, v63);
          v614->fields.__7__wrap8.fields._getEnumeratorRetType = (int)key;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          Square = WarBoardAIManager__GetSquare((int32_t)key, 0LL);
          v65 = v614;
          *(_QWORD *)&v614->fields._baseSquareIndex_5__10 = Square;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v65->fields._baseSquareIndex_5__10,
            (int32_t)Square,
            v66,
            v67);
          _8__1 = v614->fields.__8__1;
          PieceUnique = WarBoardAIManager__GetPieceUnique(HIDWORD(key), 0LL);
          if ( !_8__1 )
            sub_1B8880C(PieceUnique, PieceUnique);
          _8__1->fields.basePiece = PieceUnique;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&_8__1->fields, (int32_t)PieceUnique, v70, v71);
          v74 = v614;
          baseFlag_5__6 = v614->fields._baseFlag_5__6;
          v76 = v614->fields.__8__1;
          v614->fields._tmpFlagNow_5__12 = -1LL;
          v74->fields._servantAndMasterRange_5__13 = -1;
          v74->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
          if ( !v76 )
            sub_1B8880C(v72, v73);
          if ( !_4__this )
            sub_1B8880C(0LL, v73);
          v77 = WarBoardAIRoute__GetFlagAroundSquareCheck(
                  _4__this,
                  *(WarBoardSquareData_o **)&v74->fields._baseSquareIndex_5__10,
                  v76->fields.basePiece,
                  v74->fields.piecePlaceData,
                  v74->fields._masterSquareIndex_5__4,
                  0LL);
          v78 = v614;
          v614->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)(v77 | baseFlag_5__6);
          routeDataList = (System_Collections_Generic_IEnumerable_TSource__o *)v78->fields.routeDataList;
          v80 = (Il2CppObject *)v78->fields.__8__1;
          v81 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v81,
            v80,
            Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
            0LL);
          v83 = System_Linq_Enumerable__Count_object__48881560(
                  routeDataList,
                  (System_Func_TSource__bool__o *)v81,
                  (const MethodInfo_2E9DF98 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
          v84 = (System_Collections_Generic_List_object__o *)v614->fields.routeDataList;
          v614->fields._servantAndEnemyRange_5__14 = v83;
          if ( !v84 )
            sub_1B8880C(0LL, v82);
          Only = System_Collections_Generic_List_object___AsReadOnly(
                   v84,
                   (const MethodInfo_34FDA5C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
          v86 = v614->fields.__8__1;
          if ( !v86 )
            sub_1B8880C(Only, Only);
          RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                      _4__this,
                                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                      v86->fields.basePiece,
                                      0LL);
          v89 = v614;
          v90 = v614->fields.__8__1;
          v614->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
          if ( !v90 )
            sub_1B8880C(RouteSumPieceActionCost, v88);
          IsActable = WarBoardAIRoute__IsActable(
                        _4__this,
                        v90->fields.basePiece,
                        v89->fields._servantAndEnemyRange_5__14,
                        v89->fields._requiredCost_5__3,
                        RouteSumPieceActionCost,
                        0LL);
          if ( IsActable )
          {
            v93 = v614->fields.__8__1;
            if ( !v93 )
              sub_1B8880C(IsActable, v92);
            DesignationItemToDistance = WarBoardAIRoute__GetDesignationItemToDistance(
                                          _4__this,
                                          v93->fields.basePiece,
                                          v614->fields.routeDataList,
                                          v614->fields.__7__wrap8.fields._getEnumeratorRetType,
                                          0LL);
            v95 = v614;
            *(_QWORD *)&v614->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&v95->fields._sumPieceActionCost_5__17,
              (int32_t)DesignationItemToDistance,
              v96,
              v97);
            v100 = v614->fields.__8__1;
            if ( !v100 )
              sub_1B8880C(v98, v99);
            TargetToDistance_35288840 = (struct System_Collections_Generic_Dictionary_int__int__o *)WarBoardAIRoute__GetTargetToDistance_35288840(_4__this, v100->fields.basePiece, v614->fields.routeDataList, v614->fields.__7__wrap8.fields._getEnumeratorRetType, 0LL);
            v102 = v614;
            v614->fields._dicBaseDIRange_5__18 = TargetToDistance_35288840;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&v102->fields._dicBaseDIRange_5__18,
              (int32_t)TargetToDistance_35288840,
              v103,
              v104);
            AllEnemyToDistance = WarBoardAIRoute__GetAllEnemyToDistance(
                                   _4__this,
                                   v614->fields.routeDataList,
                                   v614->fields.__7__wrap8.fields._getEnumeratorRetType,
                                   (int32_t *)&v614->fields._tmpFlagNow_5__12 + 1,
                                   &v614->fields._servantAndMasterRange_5__13,
                                   0LL);
            v106 = v614;
            v614->fields._dicKeyPutIndexValueTargetData_5__19 = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)AllEnemyToDistance;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&v106->fields._dicKeyPutIndexValueTargetData_5__19,
              (int32_t)AllEnemyToDistance,
              v107,
              v108);
            v109 = v614;
            v614->fields._dicEnemyRange_5__20 = 0LL;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v109->fields._dicEnemyRange_5__20, 0, v110, v111);
            v114 = v614->fields.__8__1;
            if ( !v114 )
              sub_1B8880C(v112, v113);
            basePiece = v114->fields.basePiece;
            if ( !basePiece )
              sub_1B8880C(0LL, v113);
            isServant = WarBoardPieceData__get_isServant(basePiece, 0LL);
            if ( isServant )
            {
              v118 = v614->fields.__8__1;
              if ( !v118 )
                sub_1B8880C(isServant, v117);
              AdvantagePieceData = WarBoardAIRoute__GetAdvantagePieceData(
                                     _4__this,
                                     v118->fields.basePiece,
                                     v614->fields.__7__wrap8.fields._getEnumeratorRetType,
                                     0LL);
              v120 = v614;
              v614->fields._dicEnemyRange_5__20 = (struct System_Collections_Generic_Dictionary_uint__int__o *)AdvantagePieceData;
              sub_1B88554(
                (ServantStatusBattleListViewItem_o *)&v120->fields._dicEnemyRange_5__20,
                (int32_t)AdvantagePieceData,
                v121,
                v122);
              if ( v614->fields._masterExists_5__8 )
              {
                masterSquareIndex_5__4 = v614->fields._masterSquareIndex_5__4;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v125 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              (int32_t)key,
                                                                              masterSquareIndex_5__4,
                                                                              0,
                                                                              0LL,
                                                                              v123);
                v126 = System_Linq_Enumerable__Count_int_(
                         v125,
                         (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
                v128 = v614;
                v129 = v614->fields.__8__1;
                LODWORD(v614->fields._tmpFlagNow_5__12) = v126;
                if ( !v129 )
                  sub_1B8880C(v126, v127);
                v130 = v129->fields.basePiece;
                if ( !v130 )
                  sub_1B8880C(v126, v127);
                v131 = _4__this->fields.aiRouteMasterData;
                if ( !v131 )
                  sub_1B8880C(v126, v127);
                masterType = v131->fields.masterType;
                index_k__BackingField = v130->fields._index_k__BackingField;
                if ( masterType != 2 || v131->fields.masterPieceIndex != index_k__BackingField )
                {
                  v134 = _4__this->fields.npcData;
                  if ( !v134 )
                    sub_1B8880C(v126, v127);
                  if ( v134->fields.defenseArea > (int)v126 )
                    v128->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v128->fields._baseSquare_5__11 | 0x800);
                  if ( (masterType != 2 || v131->fields.masterPieceIndex != index_k__BackingField)
                    && WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                         v128->fields._defenseAreaData_5__7,
                         v128->fields.__7__wrap8.fields._getEnumeratorRetType,
                         masterType == 1,
                         0LL) )
                  {
                    v614->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v614->fields._baseSquare_5__11 | 0x80000000);
                  }
                }
              }
            }
            v135 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_object____ctor(
              v135,
              (const MethodInfo_33B9184 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v136 = v614;
            v614->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v135;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&v136->fields._advantagePieceData_5__21,
              (int32_t)v135,
              v137,
              v138);
            v139 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_object____ctor(
              v139,
              (const MethodInfo_33B9184 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v140 = v614;
            v614->fields._basePieceActionPieceRouteList_5__22 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)v139;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&v140->fields._basePieceActionPieceRouteList_5__22,
              (int32_t)v139,
              v141,
              v142);
            v144 = (System_Collections_Generic_List_object__o *)v614->fields.routeDataList;
            if ( !v144 )
              sub_1B8880C(0LL, v143);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v600,
              v144,
              (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
            *(_OWORD *)&v611.fields._list = *(_OWORD *)&v600.fields._dictionary;
            v611.fields._current = v600.fields._current.fields.key;
            while ( 1 )
            {
              v145 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v611,
                       (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
              if ( !v145 )
                break;
              current = v611.fields._current;
              if ( !v611.fields._current )
                sub_1B8880C(v145, v146);
              if ( LODWORD(v611.fields._current[1].monitor) != HIDWORD(v611.fields._current[1].monitor) )
              {
                klass = v611.fields._current[3].klass;
                if ( !klass )
                  sub_1B8880C(v145, v146);
                v149 = v614->fields.__8__1;
                if ( !v149 )
                  sub_1B8880C(v145, v146);
                v150 = v149->fields.basePiece;
                if ( !v150 )
                  sub_1B8880C(v145, v146);
                if ( HIDWORD(klass->_1.namespaze) == v150->fields._index_k__BackingField )
                {
                  basePieceActionPieceRouteList_5__22 = (System_Collections_Generic_HashSet_T__o *)v614->fields._basePieceActionPieceRouteList_5__22;
                  if ( !basePieceActionPieceRouteList_5__22 )
                    sub_1B8880C(0LL, v146);
                  v145 = System_Collections_Generic_HashSet_object___Add(
                           basePieceActionPieceRouteList_5__22,
                           v611.fields._current,
                           (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                }
                if ( (BYTE3(current[1].klass) & 4) != 0 )
                {
                  v152 = current[3].monitor;
                  if ( !v152 )
                    sub_1B8880C(v145, v146);
                  v153 = v614->fields.__8__1;
                  if ( !v153 )
                    sub_1B8880C(v145, v146);
                  v154 = v153->fields.basePiece;
                  if ( !v154 )
                    sub_1B8880C(v145, v146);
                  if ( v152[7] == v154->fields._index_k__BackingField )
                  {
                    advantagePieceData_5__21 = v614->fields._advantagePieceData_5__21;
                    if ( !advantagePieceData_5__21 )
                      sub_1B8880C(0LL, v146);
                    System_Collections_Generic_HashSet_object___Add(
                      (System_Collections_Generic_HashSet_T__o *)advantagePieceData_5__21,
                      current,
                      (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                  }
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v611,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
            v204 = *(WarBoardSquareData_o **)&v614->fields._baseSquareIndex_5__10;
            if ( !v204 )
              sub_1B8880C(0LL, v203);
            MyAndLinkedSquareIndecies = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)WarBoardSquareData__GetMyAndLinkedSquareIndecies(v204, 0LL);
            v206 = v614;
            v614->fields._basePieceBasePieceRouteList_5__23 = MyAndLinkedSquareIndecies;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&v206->fields._basePieceBasePieceRouteList_5__23,
              (int32_t)MyAndLinkedSquareIndecies,
              v207,
              v208);
            v209 = v614;
            v210 = 0;
            LODWORD(v614->fields.__7__wrap23) = 0;
            while ( 2 )
            {
              basePieceBasePieceRouteList_5__23 = v209->fields._basePieceBasePieceRouteList_5__23;
              p_basePieceBasePieceRouteList_5__23 = (ServantStatusBattleListViewItem_o *)&v209->fields._basePieceBasePieceRouteList_5__23;
              v568 = basePieceBasePieceRouteList_5__23;
              if ( !basePieceBasePieceRouteList_5__23 )
                sub_1B8880C(this, method);
              if ( v210 >= SLODWORD(v568->fields._slots) )
              {
                p_basePieceBasePieceRouteList_5__23->klass = 0LL;
                sub_1B88554(p_basePieceBasePieceRouteList_5__23, 0, v2, v3);
                v570 = v614;
                v614->fields.__8__1 = 0LL;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v570->fields.__8__1, 0, v571, v572);
                v573 = v614;
                *(_QWORD *)&v614->fields._baseSquareIndex_5__10 = 0LL;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v573->fields._baseSquareIndex_5__10, 0, v574, v575);
                v576 = v614;
                *(_QWORD *)&v614->fields._sumPieceActionCost_5__17 = 0LL;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v576->fields._sumPieceActionCost_5__17, 0, v577, v578);
                v579 = v614;
                v614->fields._dicBaseDIRange_5__18 = 0LL;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v579->fields._dicBaseDIRange_5__18, 0, v580, v581);
                v582 = v614;
                v614->fields._dicKeyPutIndexValueTargetData_5__19 = 0LL;
                sub_1B88554(
                  (ServantStatusBattleListViewItem_o *)&v582->fields._dicKeyPutIndexValueTargetData_5__19,
                  0,
                  v583,
                  v584);
                v585 = v614;
                v614->fields._dicEnemyRange_5__20 = 0LL;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v585->fields._dicEnemyRange_5__20, 0, v586, v587);
                v588 = v614;
                v614->fields._advantagePieceData_5__21 = 0LL;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v588->fields._advantagePieceData_5__21, 0, v589, v590);
                v591 = v614;
                v614->fields._basePieceActionPieceRouteList_5__22 = 0LL;
                sub_1B88554(
                  (ServantStatusBattleListViewItem_o *)&v591->fields._basePieceActionPieceRouteList_5__22,
                  0,
                  v592,
                  v593);
                goto LABEL_44;
              }
              v211 = sub_1B887FC(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v211, 0LL);
              v214 = v614->fields._basePieceBasePieceRouteList_5__23;
              if ( !v214 )
                sub_1B8880C(v212, v213);
              _7__wrap23_low = SLODWORD(v614->fields.__7__wrap23);
              if ( (unsigned int)_7__wrap23_low >= LODWORD(v214->fields._slots) )
                sub_1B88814(v212, v213);
              if ( !v211 )
                sub_1B8880C(v212, v213);
              *(_DWORD *)(v211 + 16) = *(&v214->fields._count + _7__wrap23_low);
              v216 = (int32_t *)(v211 + 16);
              v217 = (WarBoardAIRoute_RouteData_o *)sub_1B887FC(WarBoardAIRoute_RouteData_TypeInfo);
              WarBoardAIRoute_RouteData___ctor(v217, v218);
              routeData = v217;
              if ( !v217 )
                sub_1B8880C(this, method);
              v219 = v614;
              getEnumeratorRetType = v614->fields.__7__wrap8.fields._getEnumeratorRetType;
              v217->fields.baseIndex = getEnumeratorRetType;
              v221 = *v216;
              v217->fields.actionIndex = *v216;
              if ( getEnumeratorRetType == v221 )
              {
                v222 = v219->fields.routeDataList;
                if ( !v222 )
                  sub_1B8880C(this, method);
                if ( v222->fields._size > 0 )
                  goto LABEL_648;
              }
              dicBaseDIRange_5__18 = (System_Collections_Generic_IEnumerable_TSource__o *)v219->fields._dicBaseDIRange_5__18;
              v224 = WarBoardAIRoute___c_TypeInfo;
              if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v224 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_1 = (System_Func_T__TResult__o *)v224->static_fields->__9__47_1;
              if ( !_9__47_1 )
              {
                if ( !v224->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v224);
                  v224 = WarBoardAIRoute___c_TypeInfo;
                }
                v226 = (Il2CppObject *)v224->static_fields->__9;
                _9__47_1 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
                System_Func_KeyValuePair_long__object___long____ctor(
                  _9__47_1,
                  v226,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
                  0LL);
                static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
                static_fields->__9__47_1 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)_9__47_1;
                sub_1B88554(
                  (ServantStatusBattleListViewItem_o *)&static_fields->__9__47_1,
                  (int32_t)_9__47_1,
                  v228,
                  v229);
                v224 = WarBoardAIRoute___c_TypeInfo;
              }
              if ( !v224->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v224);
                v224 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_2 = (System_Func_T__TResult__o *)v224->static_fields->__9__47_2;
              if ( !_9__47_2 )
              {
                if ( !v224->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v224);
                  v224 = WarBoardAIRoute___c_TypeInfo;
                }
                v231 = (Il2CppObject *)v224->static_fields->__9;
                _9__47_2 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
                System_Func_KeyValuePair_long__object___object____ctor(
                  _9__47_2,
                  v231,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
                  0LL);
                v232 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v232->__9__47_2 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)_9__47_2;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v232->__9__47_2, (int32_t)_9__47_2, v233, v234);
              }
              v238 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__object___long__object_(
                                                                                                    dicBaseDIRange_5__18,
                                                                                                    (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                                    (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                                    (const MethodInfo_2EB8BC4 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
              v239 = routeData;
              if ( !routeData )
                sub_1B8880C(0LL, v235);
              v240 = *(struct WarBoardSquareData_o **)&v614->fields._baseSquareIndex_5__10;
              routeData->fields.baseSquare = v240;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v239->fields.baseSquare, (int32_t)v240, v236, v237);
              v245 = v614->fields.__8__1;
              if ( !v245 )
                sub_1B8880C(v241, v242);
              v246 = routeData;
              if ( !routeData )
                sub_1B8880C(0LL, v242);
              v247 = v245->fields.basePiece;
              routeData->fields.basePiece = v247;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v246->fields.basePiece, (int32_t)v247, v243, v244);
              v251 = routeData;
              if ( !routeData )
                sub_1B8880C(0LL, v248);
              routeData->fields.actionPiece = 0LL;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v251->fields.actionPiece, 0, v249, v250);
              v252 = routeData;
              v253 = *v216;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              v254 = WarBoardAIManager__GetSquare(v253, 0LL);
              if ( !v252 )
                sub_1B8880C(v254, v254);
              v252->fields.actionSquare = v254;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v252->fields.actionSquare, (int32_t)v254, v255, v256);
              dicKeyPutIndexValueTargetData_5__19 = (System_Collections_Generic_Dictionary_uint__int__o *)v614->fields._dicKeyPutIndexValueTargetData_5__19;
              if ( !dicKeyPutIndexValueTargetData_5__19 )
                sub_1B8880C(0LL, v257);
              v259 = routeData;
              if ( System_Collections_Generic_Dictionary_uint__int___get_Count(
                     dicKeyPutIndexValueTargetData_5__19,
                     (const MethodInfo_31F690C *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0 )
              {
                v263 = 0x7FFFFFFFLL;
                if ( !v259 )
                  goto LABEL_253;
              }
              else
              {
                v261 = (System_Collections_Generic_Dictionary_uint__int__o *)v614->fields._dicKeyPutIndexValueTargetData_5__19;
                if ( !v261 )
                  sub_1B8880C(0LL, v260);
                Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                           v261,
                           (const MethodInfo_31F6A6C *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
                v263 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
                if ( !v259 )
LABEL_253:
                  sub_1B8880C(v263, v260);
              }
              v259->fields.EnemyRangeMin = v263;
              v264 = v614->fields.__8__1;
              if ( !v264 )
                sub_1B8880C(v263, v260);
              if ( !_4__this )
                sub_1B8880C(0LL, v260);
              v265 = routeData;
              MoveByTargetDistance = WarBoardAIRoute__GetMoveByTargetDistance(
                                       _4__this,
                                       v238,
                                       *v216,
                                       v264->fields.basePiece,
                                       0LL);
              if ( !v265 )
                sub_1B8880C(MoveByTargetDistance, MoveByTargetDistance);
              v265->fields.dicPutIndexTargetData = MoveByTargetDistance;
              sub_1B88554(
                (ServantStatusBattleListViewItem_o *)&v265->fields.dicPutIndexTargetData,
                (int32_t)MoveByTargetDistance,
                v267,
                v268);
              v271 = v614->fields.__8__1;
              if ( !v271 )
                sub_1B8880C(v269, v270);
              v272 = routeData;
              ActionPiece = WarBoardAIRoute__GetActionPiece(
                              _4__this,
                              v271->fields.basePiece,
                              *v216,
                              v614->fields.piecePlaceData,
                              0LL);
              if ( !v272 )
                sub_1B8880C(ActionPiece, ActionPiece);
              v272->fields.actionPiece = ActionPiece;
              sub_1B88554(
                (ServantStatusBattleListViewItem_o *)&v272->fields.actionPiece,
                (int32_t)ActionPiece,
                v274,
                v275);
              v280 = v614->fields.__8__1;
              if ( !v280 )
                sub_1B8880C(p_actionPiece, v277);
              v281 = v280->fields.basePiece;
              if ( !v281 )
                sub_1B8880C(p_actionPiece, v277);
              if ( v281->fields._nowSquareIndex_k__BackingField == *v216 )
              {
                if ( !routeData )
                  sub_1B8880C(0LL, v277);
                p_actionPiece = (ServantStatusBattleListViewItem_o *)&routeData->fields.actionPiece;
                v282 = routeData->fields.actionPiece;
                if ( v282 )
                {
                  if ( v282->fields._uniqueIndex_k__BackingField == v281->fields._uniqueIndex_k__BackingField )
                  {
                    p_actionPiece->klass = 0LL;
                    sub_1B88554(p_actionPiece, 0, v278, (int32_t)v279);
                    v280 = v614->fields.__8__1;
                    if ( !v280 )
                      sub_1B8880C(p_actionPiece, v277);
                  }
                }
              }
              v283 = v280->fields.basePiece;
              if ( !v283 )
                sub_1B8880C(p_actionPiece, v277);
              limitActionCount_k__BackingField = v283->fields._limitActionCount_k__BackingField;
              currentActionCount_k__BackingField = v283->fields._currentActionCount_k__BackingField;
              if ( !byte_4A5638F )
              {
                sub_1B885B0(&System_Math_TypeInfo);
                byte_4A5638F = 1;
              }
              v286 = System_Math_TypeInfo;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v287 = routeData;
              if ( !routeData )
                sub_1B8880C(v286, v277);
              v288 = v614;
              v289 = limitActionCount_k__BackingField - currentActionCount_k__BackingField;
              if ( limitActionCount_k__BackingField - currentActionCount_k__BackingField < 0 )
                v289 = currentActionCount_k__BackingField - limitActionCount_k__BackingField;
              routeData->fields.actionCountOnThisTurn = v289 + v614->fields._servantAndEnemyRange_5__14 + 1;
              baseSquare_5__11 = v288->fields._baseSquare_5__11;
              *(_QWORD *)&v287->fields.attackByLinkedEnemy = 0LL;
              v287->fields.flagNow = (int64_t)baseSquare_5__11;
              v291 = v288->fields._warBoardData_5__2;
              if ( !v291 )
                sub_1B8880C(0LL, v277);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardData__GetWall(v291, *v216, 0, v279);
              v292 = this;
              if ( this )
              {
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                if ( !this )
                  sub_1B8880C(0LL, method);
                if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.wallAttackCost
                                                                + v614->fields._requiredCost_5__3 )
                  goto LABEL_648;
                v293 = v614->fields.__8__1;
                if ( !v293 )
                  sub_1B8880C(this, method);
                v294 = v293->fields.basePiece;
                if ( !v294 )
                  sub_1B8880C(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableWallAttack(
                                                                     v294,
                                                                     v614->fields._servantAndEnemyMasterRange_5__15,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_648;
                v295 = v614->fields.__8__1;
                if ( !v295 )
                  sub_1B8880C(this, method);
                v296 = v295->fields.basePiece;
                if ( !v296 )
                  sub_1B8880C(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__CheckWallAttackCond(
                                                                     v296,
                                                                     (WarBoardWallData_o *)v292,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_648;
              }
              if ( !routeData )
                sub_1B8880C(this, method);
              v297 = routeData->fields.actionPiece;
              if ( v297 )
              {
                v298 = v614->fields.__8__1;
                if ( !v298 )
                  sub_1B8880C(this, method);
                v299 = v298->fields.basePiece;
                if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsEnemyPiece(v299, v297, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v300 = v614->fields.__8__1;
                  if ( !v300 )
                    sub_1B8880C(this, method);
                  v301 = v300->fields.basePiece;
                  if ( !v301 )
                    sub_1B8880C(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v301, 0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_239;
                  if ( !routeData )
                    sub_1B8880C(this, method);
                  v302 = routeData->fields.actionPiece;
                  if ( !v302 )
                    sub_1B8880C(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v302, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_239:
                    v303 = routeData;
                    if ( !routeData )
                      sub_1B8880C(this, method);
                    v304 = routeData->fields.basePiece;
                    routeData->fields.flagNow |= 2uLL;
                    if ( !v304 )
                      sub_1B8880C(this, method);
                    v305 = v303->fields.actionPiece;
                    v303->fields.attackCountOnThisTurn = v304->fields._attackCount_k__BackingField + 1;
                    if ( !v305 )
                      sub_1B8880C(0LL, method);
                    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isServant(v305, 0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v306 = routeData;
                      if ( !routeData )
                        sub_1B8880C(this, method);
                      v307 = v614->fields.__8__1;
                      if ( !v307 )
                        sub_1B8880C(this, method);
                      v308 = v307->fields.basePiece;
                      if ( !v308 )
                        sub_1B8880C(this, method);
                      battleServant_k__BackingField = v308->fields._battleServant_k__BackingField;
                      if ( !battleServant_k__BackingField )
                        sub_1B8880C(0LL, method);
                      flagNow = routeData->fields.flagNow;
                      ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
                      if ( !routeData )
                        sub_1B8880C(ClassId, v312);
                      v313 = routeData->fields.actionPiece;
                      if ( !v313 )
                        sub_1B8880C(ClassId, v312);
                      v314 = ClassId;
                      v315 = v313->fields._battleServant_k__BackingField;
                      if ( !v315 )
                        sub_1B8880C(0LL, v312);
                      v316 = BattleServantData__getClassId(v315, 0LL);
                      FlagAdvantage = WarBoardAIRoute__GetFlagAdvantage(_4__this, v314, v316, 0LL);
                      v306->fields.flagNow = FlagAdvantage | flagNow;
                      if ( !routeData )
                        sub_1B8880C(FlagAdvantage, v318);
                      WarBoardAIRoute__LinkedCount(
                        _4__this,
                        *v216,
                        v614->fields.piecePlaceData,
                        &routeData->fields.attackByLinkedEnemy,
                        &routeData->fields.attackByLinkedAlly,
                        0LL);
                    }
                    break;
                  }
LABEL_648:
                  v209 = v614;
                  v210 = LODWORD(v614->fields.__7__wrap23) + 1;
                  LODWORD(v614->fields.__7__wrap23) = v210;
                  continue;
                }
                if ( !routeData )
                  sub_1B8880C(this, method);
                v319 = routeData->fields.actionPiece;
                if ( !v319 )
                  sub_1B8880C(this, method);
                if ( v319->fields._roleType_k__BackingField == 1 )
                  goto LABEL_648;
                v320 = v614->fields.__8__1;
                if ( !v320 )
                  sub_1B8880C(this, method);
                v321 = v320->fields.basePiece;
                if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsAllyPiece(v321, v319, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !routeData )
                    sub_1B8880C(this, method);
                  routeData->fields.flagNow |= 0x4000000uLL;
                }
              }
              break;
            }
            v322 = routeData;
            if ( !routeData )
              sub_1B8880C(this, method);
            if ( (routeData->fields.flagNow & 2) != 0 )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_1B8880C(0LL, method);
              if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.attackCost
                                                              + v614->fields._requiredCost_5__3 )
                goto LABEL_648;
              v340 = v614->fields.__8__1;
              if ( !v340 )
                sub_1B8880C(this, method);
              v341 = v340->fields.basePiece;
              if ( !v341 )
                sub_1B8880C(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableAttack(
                                                                   v341,
                                                                   v614->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_648;
              v322 = routeData;
              if ( !routeData )
                sub_1B8880C(this, method);
            }
            if ( (v322->fields.flagNow & 2) == 0 )
            {
              v323 = v614->fields.__8__1;
              if ( !v323 )
                sub_1B8880C(this, method);
              v324 = v323->fields.basePiece;
              if ( !v324 )
                sub_1B8880C(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableMoveBySelf(
                                                                   v324,
                                                                   v614->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_648;
              v322 = routeData;
              if ( !routeData )
                sub_1B8880C(this, method);
            }
            if ( (v322->fields.flagNow & 0x4000000) != 0 )
            {
              v325 = v614->fields.__8__1;
              if ( !v325 )
                sub_1B8880C(this, method);
              v326 = (System_Collections_Generic_List_object__o *)v614->fields.routeDataList;
              if ( !v326 )
                sub_1B8880C(0LL, method);
              requiredCost_5__3 = v614->fields._requiredCost_5__3;
              v328 = v325->fields.basePiece;
              v329 = v322->fields.actionPiece;
              v330 = System_Collections_Generic_List_object___AsReadOnly(
                       v326,
                       (const MethodInfo_34FDA5C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIRoute__IsActableReplace(
                                                                   _4__this,
                                                                   v328,
                                                                   v329,
                                                                   requiredCost_5__3,
                                                                   (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v330,
                                                                   v614->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_648;
              v322 = routeData;
            }
            updated = WarBoardAIRoute__UpdatePiecePlaceData(
                        _4__this,
                        v614->fields.piecePlaceData,
                        v322,
                        v614->fields.__7__wrap8.fields._getEnumeratorRetType,
                        *v216,
                        0LL);
            MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(_4__this, updated, 0LL);
            v333 = v614->fields._basePieceActionPieceRouteList_5__22;
            v334 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v334,
              (Il2CppObject *)v211,
              Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
              0LL);
            v335 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__48820656(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v333,
                                          (System_Func_TSource__bool__o *)v334,
                                          (const MethodInfo_2E8F1B0 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)v335 & 1) != 0
              || (v337 = v614->fields._advantagePieceData_5__21,
                  v338 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo),
                  System_Func_object__bool____ctor(
                    v338,
                    (Il2CppObject *)v211,
                    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
                    0LL),
                  v335 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__48820656(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)v337,
                                                (System_Func_TSource__bool__o *)v338,
                                                (const MethodInfo_2E8F1B0 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___),
                  ((unsigned __int8)v335 & 1) != 0) )
            {
              if ( !routeData )
                sub_1B8880C(v335, v336);
              routeData->fields.flagNow |= 0x20000000000uLL;
            }
            if ( v614->fields._masterExists_5__8 )
            {
              if ( v614->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
                goto LABEL_291;
              if ( !routeData )
                sub_1B8880C(v335, v336);
              if ( (routeData->fields.flagNow & 0x400) != 0 )
              {
LABEL_291:
                v342 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                         _4__this,
                         updated,
                         MasterSquareIndexFromPlaceData,
                         0LL);
                v335 = WarBoardAIRoute__GetDefenseAreaData(_4__this, MasterSquareIndexFromPlaceData, v342, updated, 0LL);
                v339 = v335;
              }
              else
              {
                v339 = v614->fields._defenseAreaData_5__7;
              }
              if ( !v339 )
                sub_1B8880C(v335, v336);
              v343 = _4__this->fields.aiRouteMasterData;
              if ( !v343 )
                sub_1B8880C(v335, v336);
              v344 = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                       v339->fields._ShortestRoutes_k__BackingField,
                       updated,
                       v343->fields.masterType == 1,
                       0LL);
              v346 = routeData;
              if ( v344 )
              {
                if ( !routeData )
                  sub_1B8880C(v344, v345);
                routeData->fields.flagNow |= 0x40000000uLL;
              }
              else if ( !routeData )
              {
                sub_1B8880C(v344, v345);
              }
              v347 = v346->fields.flagNow;
              if ( (v347 & 0x400) != 0 && (v339->fields._Flag_k__BackingField & 0x10000000000LL) != 0 )
                v346->fields.flagNow = v347 | 0x40000000000LL;
            }
            else
            {
              v346 = routeData;
            }
            v348 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v348,
              (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v346 )
              sub_1B8880C(v349, v350);
            v346->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v348;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v346->fields.moveByLinkedPiece, (int32_t)v348, v351, v352);
            v355 = routeData;
            if ( !routeData )
              sub_1B8880C(v353, v354);
            *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0LL;
            v356 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
            System_Collections_Generic_Dictionary_uint__int____ctor(
              v356,
              (const MethodInfo_31F6294 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
            v355->fields.dicUniqueKeyRange = v356;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v355->fields.dicUniqueKeyRange, (int32_t)v356, v357, v358);
            v360 = v614->fields.piecePlaceData;
            if ( !v360 )
              sub_1B8880C(0LL, v359);
            v598 = updated;
            System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
              &v600,
              v360,
              (const MethodInfo_3179994 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
            *(_OWORD *)&v607.fields._dictionary = *(_OWORD *)&v600.fields._dictionary;
            v607.fields._current = v600.fields._current;
            while ( 1 )
            {
              v361 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                       &v607,
                       (const MethodInfo_32B9C68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
              if ( !v361 )
                break;
              v364 = v614->fields.__8__1;
              if ( !v364 )
                sub_1B8880C(v361, v362);
              v365 = v364->fields.basePiece;
              if ( !v365 )
                sub_1B8880C(v361, v362);
              key_high = HIDWORD(v607.fields._current.fields.key);
              if ( v365->fields._uniqueIndex_k__BackingField != HIDWORD(v607.fields._current.fields.key) )
              {
                if ( !routeData )
                  sub_1B8880C(v361, v362);
                v367 = (int32_t)v607.fields._current.fields.key;
                dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
                v369 = *v216;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v370 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v369,
                                                                              v367,
                                                                              0,
                                                                              0LL,
                                                                              v363);
                v371 = System_Linq_Enumerable__Count_int_(
                         v370,
                         (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !dicUniqueKeyRange )
                  sub_1B8880C(v371, v372);
                System_Collections_Generic_Dictionary_uint__int___Add(
                  dicUniqueKeyRange,
                  key_high,
                  v371,
                  (const MethodInfo_31F6C58 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
              &v607,
              (const MethodInfo_32B9D68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
            v373 = routeData;
            v374 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v374,
              (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v373 )
              sub_1B8880C(v375, v376);
            v373->fields.listExistDesignationItem = v374;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&v373->fields.listExistDesignationItem,
              (int32_t)v374,
              v377,
              v378);
            v379 = routeData;
            v380 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v380,
              (const MethodInfo_315E6FC *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( !v379 )
              sub_1B8880C(v381, v382);
            v379->fields.dicMoveByServantGetDesignationItem = v380;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&v379->fields.dicMoveByServantGetDesignationItem,
              (int32_t)v380,
              v383,
              v384);
            v385 = routeData;
            v386 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
            System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
              v386,
              (const MethodInfo_31672C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
            if ( !v385 )
              sub_1B8880C(v387, v388);
            v385->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)v386;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&v385->fields.dicItemIdKeyIsMoveByServantDesignationItemRange,
              (int32_t)v386,
              v389,
              v390);
            v393 = routeData;
            if ( !routeData )
              sub_1B8880C(v391, v392);
            routeData->fields.isMoveByOutOfWarningArea = 0;
            *(_QWORD *)&v393->fields.isMoveByServantAndEnemyRange = 0LL;
            *(_QWORD *)&v393->fields.isMoveByMasterAndEnemyRange = 0LL;
            *(_QWORD *)&v393->fields.isMoveByServantAndAttackAdvantageServantRange = 0LL;
            *(_QWORD *)&v393->fields.isMoveByServantAndDefenseAdvantageServantRange = 0LL;
            *(_QWORD *)&v393->fields.isMoveByServantAndClassAdvantageServantRange = 0LL;
            v394 = v614->fields.__8__1;
            if ( !v394 )
              sub_1B8880C(v391, v392);
            v395 = v394->fields.basePiece;
            if ( !v395 )
              sub_1B8880C(0LL, v392);
            IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isServant(v395, 0LL);
            if ( IsBlockShortestRouteEnemyAndMaster )
            {
              v400 = v614;
              if ( v614->fields._masterExists_5__8 )
              {
                v401 = v614->fields.__8__1;
                if ( !v401 )
                  sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                v402 = v401->fields.basePiece;
                if ( !v402 )
                  sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                v403 = _4__this->fields.aiRouteMasterData;
                if ( !v403 )
                  sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                if ( v403->fields.masterType != 2
                  || v403->fields.masterPieceIndex != v402->fields._index_k__BackingField )
                {
                  v404 = v614->fields._defenseAreaData_5__7;
                  if ( !v404 )
                    sub_1B8880C(0LL, v397);
                  IsBlockShortestRouteEnemyAndMaster = DefenseAreaData__IsInDefenseArea(v404, *v216, 0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                    routeData->fields.flagNow |= 0x4000000000uLL;
                  }
                }
                v405 = v614->fields.__8__1;
                if ( !v405 )
                  sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                v406 = v405->fields.basePiece;
                if ( !v406 )
                  sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                v407 = _4__this->fields.aiRouteMasterData;
                if ( !v407 )
                  sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                v408 = v407->fields.masterType;
                if ( v408 != 2 || v407->fields.masterPieceIndex != v406->fields._index_k__BackingField )
                {
                  IsBlockShortestRouteEnemyAndMaster = WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                                                         v614->fields._defenseAreaData_5__7,
                                                         *v216,
                                                         v408 == 1,
                                                         0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                    routeData->fields.flagNow |= 0x100000000uLL;
                  }
                }
                v400 = v614;
                v409 = v614->fields.__8__1;
                if ( !v409 )
                  sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                v410 = v409->fields.basePiece;
                if ( !v410 )
                  sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                v411 = _4__this->fields.aiRouteMasterData;
                if ( !v411 )
                  sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                if ( v411->fields.masterType != 2
                  || v411->fields.masterPieceIndex != v410->fields._index_k__BackingField )
                {
                  v412 = *v216;
                  if ( *v216 == MasterSquareIndexFromPlaceData )
                  {
                    if ( !routeData )
                      sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                    routeData->fields.isMoveByServantAndMasterRange = 2;
                  }
                  else
                  {
                    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                    v413 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                                  0LL,
                                                                                  v412,
                                                                                  MasterSquareIndexFromPlaceData,
                                                                                  0,
                                                                                  0LL,
                                                                                  v399);
                    v414 = System_Linq_Enumerable__Count_int_(
                             v413,
                             (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
                    v415 = routeData;
                    v416 = WarBoardAIRoute__CalcurateDistanceType(v414, v614->fields._tmpFlagNow_5__12, 0LL);
                    if ( !v415 )
                      sub_1B8880C(v416, v397);
                    v415->fields.isMoveByServantAndMasterRange = v416;
                    v400 = v614;
                  }
                }
              }
              v417 = *(System_Collections_Generic_Dictionary_int__int__o **)&v400->fields._sumPieceActionCost_5__17;
              if ( !v417 )
                sub_1B8880C(0LL, v397);
              System_Collections_Generic_Dictionary_int__int___GetEnumerator(
                &v600,
                v417,
                (const MethodInfo_3165260 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
              v605 = *(_OWORD *)&v600.fields._dictionary;
              v606 = v600.fields._current;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
                        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v605,
                        (const MethodInfo_32B5A9C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
              {
                v419 = (int32_t)v606.fields.key;
                v420 = HIDWORD(v606.fields.key);
                v421 = *v216;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v422 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v421,
                                                                              v419,
                                                                              0,
                                                                              0LL,
                                                                              v418);
                v423 = System_Linq_Enumerable__Count_int_(
                         v422,
                         (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !routeData )
                  sub_1B8880C(v423, v424);
                dicItemIdKeyIsMoveByServantDesignationItemRange = (System_Collections_Generic_Dictionary_TKey__TValue__o *)routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
                v426 = WarBoardAIRoute__CalcurateDistanceType(v423, v420, 0LL);
                if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
                  sub_1B8880C(v426, v427);
                System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
                  dicItemIdKeyIsMoveByServantDesignationItemRange,
                  v419,
                  v426,
                  (const MethodInfo_3167C74 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
                if ( !routeData )
                  sub_1B8880C(v428, v429);
                dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
                if ( !dicMoveByServantGetDesignationItem )
                  sub_1B8880C(0LL, v429);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  dicMoveByServantGetDesignationItem,
                  v419,
                  *v216 == v419,
                  (const MethodInfo_315F0D4 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
                if ( !routeData )
                  sub_1B8880C(v431, v432);
                listExistDesignationItem = routeData->fields.listExistDesignationItem;
                if ( !listExistDesignationItem )
                  sub_1B8880C(0LL, v432);
                items = listExistDesignationItem->fields._items;
                v435 = Method_System_Collections_Generic_List_int__Add__;
                ++listExistDesignationItem->fields._version;
                if ( !items )
                  sub_1B8880C(listExistDesignationItem, v432);
                size = listExistDesignationItem->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    listExistDesignationItem,
                    v419,
                    *(const MethodInfo_34E0810 **)(*(_QWORD *)(v435[4] + 192LL) + 112LL));
                }
                else
                {
                  listExistDesignationItem->fields._size = size + 1;
                  items->m_Items[size + 1] = v419;
                }
              }
              System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v605,
                (const MethodInfo_32B5B9C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
              v438 = *v216;
              enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
              if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
              v440 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                            0LL,
                                                                            v438,
                                                                            enemyMasterSquareIndex,
                                                                            0,
                                                                            0LL,
                                                                            v437);
              v441 = System_Linq_Enumerable__Count_int_(
                       v440,
                       (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
              v442 = routeData;
              v443 = WarBoardAIRoute__CalcurateDistanceType(v441, v614->fields._servantAndMasterRange_5__13, 0LL);
              if ( !v442 )
                sub_1B8880C(v443, v444);
              v442->fields.isMoveByServantAndEnemyMasterRange = v443;
              v445 = routeData;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4A58D81 )
              {
                sub_1B885B0(&WarBoardAIManager_TypeInfo);
                byte_4A58D81 = 1;
              }
              v446 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v446 = WarBoardAIManager_TypeInfo;
              }
              v447 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v446->static_fields->dicSquareIndexEnemyPiece,
                       HIDWORD(v614->fields._tmpFlagNow_5__12),
                       *v216,
                       0LL);
              if ( !v445 )
                sub_1B8880C(v447, v448);
              v445->fields.isMoveByServantAndEnemyRange = v447;
              WarBoardAIRoute__ClassAdvantageDistance(
                _4__this,
                &routeData,
                (WarBoardAIRoute_AdvantagePieceData_o *)v614->fields._dicEnemyRange_5__20,
                *v216,
                0LL);
            }
            v449 = _4__this->fields.aiRouteMasterData;
            if ( !v449 )
              sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
            if ( v449->fields.masterType )
            {
LABEL_486:
              if ( v449->fields.masterType == 2 )
              {
                v452 = v614->fields.__8__1;
                if ( !v452 )
                  sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                v453 = v452->fields.basePiece;
                if ( !v453 )
                  sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                if ( v453->fields._index_k__BackingField == v449->fields.masterPieceIndex )
                  goto LABEL_490;
              }
            }
            else
            {
              v450 = v614->fields.__8__1;
              if ( !v450 )
                sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
              v451 = v450->fields.basePiece;
              if ( !v451 )
                sub_1B8880C(0LL, v397);
              IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isMaster(v451, 0LL);
              if ( !IsBlockShortestRouteEnemyAndMaster )
              {
                v449 = _4__this->fields.aiRouteMasterData;
                if ( !v449 )
                  sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                goto LABEL_486;
              }
LABEL_490:
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4A58D81 )
              {
                sub_1B885B0(&WarBoardAIManager_TypeInfo);
                byte_4A58D81 = 1;
              }
              v454 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v454 = WarBoardAIManager_TypeInfo;
              }
              dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v454->static_fields->dicSquareIndexEnemyPiece;
              if ( !dicSquareIndexEnemyPiece )
                sub_1B8880C(0LL, v397);
              Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                       dicSquareIndexEnemyPiece,
                       (const MethodInfo_316D618 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
              if ( !Keys )
                sub_1B8880C(0LL, v457);
              System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
                (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v600,
                Keys,
                (const MethodInfo_341A1A0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
              *(_OWORD *)&v604.fields._dictionary = *(_OWORD *)&v600.fields._dictionary;
              v604.fields._currentKey = v600.fields._current.fields.key;
              while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
                        &v604,
                        (const MethodInfo_32B7EE8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                currentKey = (int32_t)v604.fields._currentKey;
                v460 = *v216;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v461 = AStarSearch__RouteSearch(0LL, v460, currentKey, 0, 0LL, v458);
                if ( !v461 )
                  sub_1B8880C(0LL, v462);
                v463 = _4__this->fields.npcData;
                if ( !v463 )
                  sub_1B8880C(v461, v462);
                if ( (signed int)(v461->max_length - 1) <= v463->fields.defenseArea )
                {
                  if ( !routeData )
                    sub_1B8880C(v461, v462);
                  routeData->fields.flagNow |= 0x8000000000uLL;
                  break;
                }
              }
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
                &v604,
                (const MethodInfo_32B7EE4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
              v465 = routeData;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4A58D81 )
              {
                sub_1B885B0(&WarBoardAIManager_TypeInfo);
                byte_4A58D81 = 1;
              }
              v466 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v466 = WarBoardAIManager_TypeInfo;
              }
              v467 = v614->fields._defenseAreaData_5__7;
              if ( !v467 )
                sub_1B8880C(v466, v464);
              v468 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v466->static_fields->dicSquareIndexEnemyPiece,
                       v467->fields._MasterAndEnemyRange_k__BackingField,
                       *v216,
                       0LL);
              if ( !v465 )
                sub_1B8880C(v468, v469);
              v465->fields.isMoveByMasterAndEnemyRange = v468;
              if ( !byte_4A58D81 )
              {
                sub_1B885B0(&WarBoardAIManager_TypeInfo);
                byte_4A58D81 = 1;
              }
              v470 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v470 = WarBoardAIManager_TypeInfo;
              }
              v471 = (System_Collections_Generic_Dictionary_int__object__o *)v470->static_fields->dicSquareIndexEnemyPiece;
              if ( !v471 )
                sub_1B8880C(0LL, v469);
              System_Collections_Generic_Dictionary_int__object___GetEnumerator(
                &v600,
                v471,
                (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
              v603 = v600;
              do
              {
                v473 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                         &v603,
                         (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
                if ( !v473 )
                  break;
                v474 = (int32_t)v603.fields._current.fields.key;
                v475 = *v216;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v476 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v475,
                                                                              v474,
                                                                              0,
                                                                              0LL,
                                                                              v472);
                System_Linq_Enumerable__Count_int_(
                  v476,
                  (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
              }
              while ( WarBoardAIRoute__IsDetour((System_Int32_array *)v476, v614->fields._allyPieceIndexs_5__5, 0LL) );
              System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
                &v603,
                (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( !v473 )
              {
                if ( !routeData )
                  sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
                routeData->fields.flagNow |= 0x1000000000uLL;
              }
            }
            v477 = routeData;
            if ( !routeData )
              sub_1B8880C(IsBlockShortestRouteEnemyAndMaster, v397);
            v478 = v598;
            if ( !routeData->fields.actionPiece || (routeData->fields.flagNow & 0x4000000) != 0 )
            {
              v479 = v614->fields._warBoardData_5__2;
              if ( !v479 )
                sub_1B8880C(0LL, v397);
              Effect = WarBoardData__GetEffect(v479, *v216, v398);
              if ( Effect )
              {
                if ( !routeData )
                  sub_1B8880C(Effect, v481);
                routeData->fields.flagNow |= 0x200000000uLL;
              }
              v482 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v482,
                (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
              v484 = (System_Collections_Generic_List_object__o *)v614->fields.routeDataList;
              if ( !v484 )
                sub_1B8880C(0LL, v483);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v600,
                v484,
                (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
              *(_OWORD *)&v611.fields._list = *(_OWORD *)&v600.fields._dictionary;
              v611.fields._current = v600.fields._current.fields.key;
              while ( 1 )
              {
                v485 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v611,
                         (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
                if ( !v485 )
                  break;
                v487 = v611.fields._current;
                if ( !v611.fields._current )
                  sub_1B8880C(v485, v486);
                if ( (BYTE3(v611.fields._current[1].klass) & 8) != 0 )
                {
                  v488 = v611.fields._current[3].klass;
                  if ( !v488 )
                    sub_1B8880C(0LL, v486);
                  v489 = WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v488, 0LL);
                  if ( v489 )
                  {
                    if ( !v482 )
                      sub_1B8880C(v489, monitor_high);
                    monitor_high = HIDWORD(v487[1].monitor);
                    v491 = v482->fields._items;
                    v492 = Method_System_Collections_Generic_List_int__Add__;
                    ++v482->fields._version;
                    if ( !v491 )
                      sub_1B8880C(v489, monitor_high);
                    v493 = v482->fields._size;
                    if ( (unsigned int)v493 >= v491->max_length )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v482,
                        monitor_high,
                        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v492[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v482->fields._size = v493 + 1;
                      v491->m_Items[v493 + 1] = monitor_high;
                    }
                  }
                  if ( (BYTE3(v487[1].klass) & 4) != 0 )
                  {
                    v494 = (WarBoardPieceData_o *)v487[3].klass;
                    if ( !v494 )
                      sub_1B8880C(0LL, monitor_high);
                    if ( WarBoardPieceData__get_isMaster(v494, 0LL) )
                    {
                      v496 = (WarBoardPieceData_o *)v487[3].monitor;
                      if ( !v496 )
                        sub_1B8880C(0LL, v495);
                      v497 = WarBoardPieceData__get_isServant(v496, 0LL);
                      if ( v497 )
                      {
                        if ( !v482 )
                          sub_1B8880C(v497, v498);
                        monitor_low = LODWORD(v487[1].monitor);
                        v500 = v482->fields._items;
                        v501 = Method_System_Collections_Generic_List_int__Add__;
                        ++v482->fields._version;
                        if ( !v500 )
                          sub_1B8880C(v497, monitor_low);
                        v502 = v482->fields._size;
                        if ( (unsigned int)v502 >= v500->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v482,
                            monitor_low,
                            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v501[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v482->fields._size = v502 + 1;
                          v500->m_Items[v502 + 1] = monitor_low;
                        }
                      }
                    }
                  }
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v611,
                (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
              if ( !routeData )
                sub_1B8880C(v503, v504);
              v505 = routeData->fields.basePiece;
              if ( !v505 )
                sub_1B8880C(0LL, v504);
              v506 = WarBoardPieceData__get_isServant(v505, 0LL);
              if ( v506 )
              {
                if ( !routeData )
                  sub_1B8880C(v506, v507);
                CanAcquireItem = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v482, 0LL);
                if ( CanAcquireItem )
                {
                  v510 = routeData;
                  if ( !routeData )
                    sub_1B8880C(CanAcquireItem, v509);
                  v511 = routeData->fields.flagNow | 0x18000000;
                  goto LABEL_596;
                }
              }
              else
              {
                if ( !routeData )
                  sub_1B8880C(v506, v507);
                v512 = routeData->fields.basePiece;
                if ( !v512 )
                  sub_1B8880C(0LL, v507);
                isMaster = WarBoardPieceData__get_isMaster(v512, 0LL);
                if ( isMaster )
                {
                  if ( !routeData )
                    sub_1B8880C(isMaster, v514);
                  v515 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v482, 0LL);
                  v517 = routeData;
                  if ( v515 )
                  {
                    if ( !routeData )
                      sub_1B8880C(v515, v516);
                    routeData->fields.flagNow |= 0x10000000uLL;
                  }
                  else if ( !routeData )
                  {
                    sub_1B8880C(v515, v516);
                  }
                  if ( (v517->fields.flagNow & 0x4000000) != 0 )
                  {
                    v518 = v517->fields.actionPiece;
                    if ( !v518 )
                      sub_1B8880C(0LL, v516);
                    v519 = WarBoardPieceData__get_isServant(v518, 0LL);
                    if ( v519 )
                    {
                      if ( !routeData )
                        sub_1B8880C(v519, v520);
                      v521 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.baseIndex, v482, 0LL);
                      if ( v521 )
                      {
                        v510 = routeData;
                        if ( !routeData )
                          sub_1B8880C(v521, v522);
                        v511 = routeData->fields.flagNow | 0x8000000;
LABEL_596:
                        v510->fields.flagNow = v511;
                      }
                    }
                  }
                }
              }
              WarBoardAIRoute__LinkedPieceCount(_4__this, &routeData, v598, v482, 0LL);
              v477 = routeData;
              if ( !routeData )
                sub_1B8880C(v523, v524);
            }
            FlagOutOfWarningAreaToDistance = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                               _4__this,
                                               v477->fields.baseIndex,
                                               v477->fields.actionIndex,
                                               0LL);
            v477->fields.isMoveByOutOfWarningArea = FlagOutOfWarningAreaToDistance;
            v527 = routeData;
            if ( !routeData )
              sub_1B8880C(FlagOutOfWarningAreaToDistance, v526);
            evalOffsetMagnification = routeData->fields.evalOffsetMagnification;
            if ( !evalOffsetMagnification )
              sub_1B8880C(FlagOutOfWarningAreaToDistance, v526);
            evalOffsetMagnification->fields.isAttack = (routeData->fields.flagNow & 2) != 0;
            v529 = v527->fields.basePiece;
            if ( !v529 )
              sub_1B8880C(FlagOutOfWarningAreaToDistance, v526);
            piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields.piecePersonalityDic;
            if ( !piecePersonalityDic )
              sub_1B8880C(0LL, v526);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                 piecePersonalityDic,
                                                                 v529->fields._index_k__BackingField,
                                                                 &value,
                                                                 (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v531 = value;
              v532 = (WarBoardAIEvalCalcurater_o *)sub_1B887FC(WarBoardAIEvalCalcurater_TypeInfo);
              WarBoardAIEvalCalcurater___ctor(v532, (WarBoardAIRoute_PiecePersonality_o *)v531, 0LL);
              if ( !v532 )
                sub_1B8880C(v533, v534);
              WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v532, &routeData, 0LL);
              WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
                v532,
                &routeData,
                _4__this->fields.averageBenefitValue,
                0LL);
              if ( !routeData )
                sub_1B8880C(0LL, v535);
              WarBoardAIRoute_RouteData__CalcEvalValue(routeData, v535);
              v536 = WarBoardAIRoute___c_TypeInfo;
              v537 = v614->fields.routeDataList;
              if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v536 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_5 = (System_Func_object__object__o *)v536->static_fields->__9__47_5;
              if ( !_9__47_5 )
              {
                if ( !v536->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v536);
                  v536 = WarBoardAIRoute___c_TypeInfo;
                  v478 = v598;
                }
                v539 = (Il2CppObject *)v536->static_fields->__9;
                _9__47_5 = (System_Func_object__object__o *)sub_1B887FC(System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
                System_Func_object__object____ctor(
                  _9__47_5,
                  v539,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__,
                  0LL);
                v540 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v540->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v540->__9__47_5, (int32_t)_9__47_5, v541, v542);
              }
              v543 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v537,
                                                                      (System_Func_TSource__TResult__o *)_9__47_5,
                                                                      (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
              v544 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
              System_Collections_Generic_List_object____ctor_55562536(
                v544,
                v543,
                (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___76063688);
              if ( !v544 )
                sub_1B8880C(v545, v546);
              v549 = (Il2CppObject *)routeData;
              v550 = v544->fields._items;
              v551 = Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__;
              ++v544->fields._version;
              if ( !v550 )
                sub_1B8880C(v545, v549);
              v552 = v544->fields._size;
              if ( (unsigned int)v552 >= v550->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v544,
                  v549,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v551[4] + 192LL) + 112LL));
              }
              else
              {
                v553 = &v550->obj.klass + v552;
                v544->fields._size = v552 + 1;
                v553[4] = (Il2CppClass *)v549;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v553 + 4), (int32_t)v549, v547, v548);
              }
              v554 = (WarBoardAIRoute_RouteData_o *)BasicHelper__IndexValue_object__48686808(
                                                      (System_Collections_Generic_List_T__o *)v544,
                                                      v544->fields._size - 2,
                                                      0LL,
                                                      (const MethodInfo_2E6E6D8 *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
              route = v554;
              if ( v554 )
              {
                v556 = (int)routeData;
                if ( !routeData )
                  sub_1B8880C(v554, v555);
                if ( routeData->fields.basePiece == v554->fields.basePiece )
                {
                  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
                    v532,
                    &route,
                    routeData,
                    0LL);
                  if ( !route )
                    sub_1B8880C(0LL, v558);
                  WarBoardAIRoute_RouteData__CalcEvalValue(route, v558);
                }
              }
              allRouteList = (System_Collections_Generic_List_object__o *)_4__this->fields.allRouteList;
              if ( !allRouteList )
                sub_1B8880C(0LL, v555);
              v560 = allRouteList->fields._items;
              v561 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++allRouteList->fields._version;
              if ( !v560 )
                sub_1B8880C(allRouteList, v555);
              v562 = allRouteList->fields._size;
              if ( (unsigned int)v562 >= v560->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  allRouteList,
                  (Il2CppObject *)v544,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v561[4] + 192LL) + 112LL));
              }
              else
              {
                v563 = &v560->obj.klass + v562;
                allRouteList->fields._size = v562 + 1;
                v563[4] = (Il2CppClass *)v544;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v563 + 4), (int32_t)v544, v556, v557);
              }
              if ( !routeData )
                sub_1B8880C(this, method);
              if ( routeData->fields.baseIndex != routeData->fields.actionIndex && (routeData->fields.flagNow & 2) == 0 )
              {
                searchCount = v614->fields.searchCount;
                if ( searchCount != 1 )
                {
                  v594 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                           _4__this,
                                           v478,
                                           searchCount,
                                           (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v544,
                                           0LL);
                  v595 = v614;
                  v614->fields.__2__current = v594;
                  sub_1B88554(
                    (ServantStatusBattleListViewItem_o *)&v595->fields.__2__current,
                    (int32_t)v594,
                    v596,
                    v597);
                  result = 1;
                  v614->fields.__1__state = 1;
                  return result;
                }
                dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
                v566 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                         _4__this,
                                         v478,
                                         1,
                                         (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v544,
                                         0LL);
                if ( !routeData )
                  sub_1B8880C(v566, v566);
                if ( !dictionaryCreateRouteDataEvalValue )
                  sub_1B8880C(v566, v566);
                System_Collections_Generic_Dictionary_object__float___Add(
                  dictionaryCreateRouteDataEvalValue,
                  v566,
                  routeData->fields.evalValue,
                  (const MethodInfo_31D02CC *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
              }
            }
            goto LABEL_648;
          }
        }
        WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v614, v58);
        v158 = v614;
        v159 = v614->fields.searchCount;
        v614->fields.__7__wrap8.fields._current = 0u;
        *(_OWORD *)&v158->fields.__7__wrap8.fields._dictionary = 0u;
        if ( v159 != 1 )
          return 0;
        if ( !_4__this )
          sub_1B8880C(v156, v157);
        v160 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        v161 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v161 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__47_6 = (System_Func_T__TResult__o *)v161->static_fields->__9__47_6;
        if ( !_9__47_6 )
        {
          if ( !v161->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v161);
            v161 = WarBoardAIRoute___c_TypeInfo;
          }
          v163 = (Il2CppObject *)v161->static_fields->__9;
          _9__47_6 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v163,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            0LL);
          v164 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v164->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v164->__9__47_6, (int32_t)_9__47_6, v165, v166);
        }
        v168 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__float___float_(
                 v160,
                 (System_Func_TSource__TKey__o *)_9__47_6,
                 (const MethodInfo_2EAA0D4 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v614->fields._servantAndEnemyMasterRange_5__15 = 0;
        v169 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v169 )
          sub_1B8880C(0LL, v167);
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v169,
                  (const MethodInfo_31CFF9C *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v172 = _4__this->fields.npcData;
        if ( !v172 )
          sub_1B8880C(Count, v171);
        v173 = v614;
        v174 = (float)((float)v172->fields.calcEllipsis / 100.0) * (float)(int)Count;
        v175 = (int)v174;
        if ( v174 == INFINITY )
          v175 = 0x80000000;
        v614->fields._servantAndEnemyRange_5__14 = v175;
        calcEllipsisMin = v172->fields.calcEllipsisMin;
        if ( calcEllipsisMin <= v175 )
          calcEllipsisMin = v175;
        v173->fields._servantAndEnemyRange_5__14 = calcEllipsisMin;
        if ( !v168 )
          sub_1B8880C(Count, v171);
        v177 = v168->klass;
        v178 = *(unsigned __int16 *)(&v168->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v168->klass->_2.bitflags2 + 3) )
        {
          p_offset = &v177->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            --v178;
            p_offset += 4;
            if ( !v178 )
              goto LABEL_112;
          }
          p_method = (__int64)&v177->vtable[*p_offset].method;
        }
        else
        {
LABEL_112:
          p_method = sub_1BDA590(
                       v168,
                       System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo,
                       0LL);
        }
        v181 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                 v168,
                 *(_QWORD *)(p_method + 8));
        v182 = (ServantStatusBattleListViewItem_o *)&v614->fields.__7__wrap24;
        *(_QWORD *)&v614->fields.__7__wrap24 = v181;
        sub_1B88554(v182, v181, v183, v184);
        v4 = v614;
        v614->fields.__1__state = -4;
        goto LABEL_117;
      }
    }
    else
    {
      v40 = _4__this->fields.aiRouteMasterData;
      if ( !v40 )
        sub_1B8880C(v35, v36);
      if ( v614 )
      {
        v41 = v40->fields.masterType;
        v614->fields._masterExists_5__8 = v41 != 3;
        if ( v41 == 3 )
          goto LABEL_29;
        goto LABEL_25;
      }
    }
    sub_1B8880C(v35, v36);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  if ( (byte_4A58DAE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
    byte_4A58DAE = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &this->fields.__7__wrap8,
    (const MethodInfo_32B9D68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
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

  if ( (byte_4A58DAF & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    byte_4A58DAF = 1;
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
      v7 = sub_1BDA590(v3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v7)(v3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall WarBoardAIRoute___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A58D9F & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIRoute___c_TypeInfo);
    byte_4A58D9F = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardAIRoute___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardAIRoute___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)WarBoardAIRoute___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4A58DA0 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1B885B0(&IWarBoardObjectData_TypeInfo);
    byte_4A58DA0 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
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
    p_method = sub_1BDA590(x, IWarBoardObjectData_TypeInfo, 2LL);
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
  if ( (byte_4A58DA1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__);
    byte_4A58DA1 = 1;
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
  if ( (byte_4A58DA2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__);
    byte_4A58DA2 = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, (const MethodInfo *)x.fields.key);
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return WarBoardAIRoute_RouteData__ShallowCopy(x, (const MethodInfo *)x);
}


float __fastcall WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // w19

  value = x.fields.value;
  if ( (byte_4A58DA3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__);
    byte_4A58DA3 = 1;
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

  if ( (byte_4A58DA4 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1B885B0(&IWarBoardObjectData_TypeInfo);
    byte_4A58DA4 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
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
    p_method = sub_1BDA590(x, IWarBoardObjectData_TypeInfo, 4LL);
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

  if ( (byte_4A58DA5 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1B885B0(&IWarBoardObjectData_TypeInfo);
    byte_4A58DA5 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
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
    p_method = sub_1BDA590(x, IWarBoardObjectData_TypeInfo, 5LL);
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
  if ( (byte_4A58DA6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__);
    byte_4A58DA6 = 1;
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
    sub_1B8880C(this, 0LL);
  return !WarBoardItemData__get_Acquired(z, 0LL) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_1B8880C(this, 0LL);
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
  if ( (byte_4A58DA7 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_1B885B0(&IWarBoardObjectData_TypeInfo);
    byte_4A58DA7 = 1;
  }
  if ( !z )
    sub_1B8880C(this, z);
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
    p_method = sub_1BDA590(z, IWarBoardObjectData_TypeInfo, 0LL);
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
    v12 = sub_1BDA590(z, IWarBoardObjectData_TypeInfo, 3LL);
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
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, 0LL);
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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

  if ( (byte_4A58DA8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    byte_4A58DA8 = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_1B8880C(0LL, *(_QWORD *)&square);
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_31797A8 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
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

  route = this->fields.route;
  if ( !route )
    sub_1B8880C(this, x);
  i = this->fields.i;
  if ( (unsigned int)i >= route->max_length )
    sub_1B88814(this, x);
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
    sub_1B8880C(this, x);
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
  IWarBoardObjectData_c *klass; // x8
  int32_t baseSquareIndex; // w20
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  const MethodInfo *v10; // x5
  int32_t v11; // w19

  v4 = this;
  if ( (byte_4A58DA9 & 1) == 0 )
  {
    sub_1B885B0(&AStarSearch_TypeInfo);
    this = (WarBoardAIRoute___c__DisplayClass64_0_o *)sub_1B885B0(&IWarBoardObjectData_TypeInfo);
    byte_4A58DA9 = 1;
  }
  if ( !x )
    goto LABEL_14;
  klass = x->klass;
  baseSquareIndex = v4->fields.baseSquareIndex;
  v7 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(x, IWarBoardObjectData_TypeInfo, 1LL);
  }
  v11 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  if ( !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  this = (WarBoardAIRoute___c__DisplayClass64_0_o *)AStarSearch__RouteSearch(0LL, baseSquareIndex, v11, 0, 0LL, v10);
  if ( !this )
LABEL_14:
    sub_1B8880C(this, x);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_T__o *routeDataList; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4A58DAA & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1B885B0(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1B885B0(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__);
    sub_1B885B0(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
    byte_4A58DAA = 1;
  }
  v5 = sub_1B887FC(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = targetObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)targetObject, v8, v9);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    0LL);
  return BasicHelper__Any_object_(
           routeDataList,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
  __int64 methodPtr_low; // x10
  int32_t baseIndex; // w23
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  struct IWarBoardObjectData_o *v13; // x20
  IWarBoardObjectData_c *v14; // x8
  int32_t actionIndex; // w19
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0

  v4 = this;
  if ( (byte_4A58DAB & 1) == 0 )
  {
    sub_1B885B0(&IWarBoardObjectData_TypeInfo);
    this = (WarBoardAIRoute___c__DisplayClass65_1_o *)sub_1B885B0(&WarBoardItemData_TypeInfo);
    byte_4A58DAB = 1;
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
  v10 = *(unsigned __int16 *)(&klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_1BDA590(v4->fields.targetObject, IWarBoardObjectData_TypeInfo, 0LL);
  }
  this = (WarBoardAIRoute___c__DisplayClass65_1_o *)(*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                                      targetObject,
                                                      *(_QWORD *)(p_method + 8));
  if ( baseIndex == (_DWORD)this )
    return 1;
  v13 = v4->fields.targetObject;
  if ( !v13 )
LABEL_25:
    sub_1B8880C(this, x);
  v14 = v13->klass;
  actionIndex = x->fields.actionIndex;
  v16 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v17 = &v14->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v17 - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v16;
      v17 += 4;
      if ( !v16 )
        goto LABEL_22;
    }
    v18 = (__int64)&v14->vtable[*v17].method;
  }
  else
  {
LABEL_22:
    v18 = sub_1BDA590(v13, IWarBoardObjectData_TypeInfo, 0LL);
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
  if ( (byte_4A58DAC & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass66_0_o *)sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__);
    byte_4A58DAC = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  value = v4->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, x);
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