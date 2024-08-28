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
  int32_t v68; // w3
  System_Collections_Generic_List_object__o *v69; // x20
  int32_t v70; // w2
  int32_t v71; // w3
  System_Collections_Generic_Dictionary_int__object__o *v72; // x20
  int32_t v73; // w2
  int32_t v74; // w3
  System_Collections_Generic_List_object__o *v75; // x20
  int32_t v76; // w2
  int32_t v77; // w3
  WarBoardAIRoute_o *v78; // x23
  System_Collections_Generic_Dictionary_TKey__TValue__o *v79; // x20
  int32_t v80; // w2
  int32_t v81; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v82; // x20
  int32_t v83; // w2
  int32_t v84; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v85; // x20
  int32_t v86; // w2
  int32_t v87; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v88; // x20
  int32_t v89; // w2
  int32_t v90; // w3
  System_Collections_Generic_Dictionary_int__object__o *v91; // x20
  int32_t v92; // w2
  int32_t v93; // w3
  Il2CppObject *Instance; // x24
  int32_t v95; // w2
  int32_t v96; // w3
  WarBoardData_o *playedStageReinforcementsList; // x0
  Il2CppObject *v98; // x1
  const MethodInfo *v99; // x1
  struct System_Collections_Generic_List_WarBoardRatingBase__o *v100; // x8
  int32_t size; // w2
  int v102; // w9
  struct System_Int32_array *aiIds; // x19
  ServantStatusBattleListViewItem_o *p_aiIds; // x20
  System_Array_o *v105; // x21
  int32_t v106; // w2
  int32_t v107; // w3
  __int64 v108; // x8
  unsigned __int64 v109; // x26
  int v110; // w21
  WarBoardAIRoute_PiecePersonality_o *v111; // x27
  const MethodInfo *v112; // x1
  int32_t squares; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *v114; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *stageNpcMaster; // x8
  WarBoardData_o *v116; // x29
  unsigned __int64 v117; // x23
  System_Collections_Generic_List_object__o *actionTrandList; // x20
  Il2CppObject *v119; // x22
  WarBoardAIRoute_ActionTrendInfo_o *v120; // x21
  int32_t v121; // w2
  int32_t v122; // w3
  struct System_Object_array *items; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  Il2CppClass **v126; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v127; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v128; // x8
  WarBoardData_o *v129; // x20
  unsigned __int64 v130; // x21
  int32_t v131; // w2
  int32_t v132; // w3
  struct System_Int32_array *stageEntity; // x8
  _QWORD *v134; // x9
  __int64 stageNpcMaster_low; // x10
  Il2CppClass **v136; // x8
  Il2CppObject *Master_object; // x27
  Il2CppObject *v138; // x28
  WarBoardData_o *v139; // x29
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x20
  System_Func_object__bool__o *v141; // x21
  System_Collections_Generic_Dictionary_int__object__c *klass; // x8
  WarBoardData_o *v143; // x20
  __int64 v144; // x9
  int32_t *p_offset; // x10
  __int64 v146; // x0
  __int64 v147; // x1
  __int64 v148; // x26
  __int64 v149; // x8
  __int64 v150; // x9
  int *v151; // x10
  __int64 v152; // x0
  __int64 v153; // x8
  __int64 v154; // x9
  int *v155; // x10
  __int64 v156; // x0
  __int64 v157; // x1
  int32_t *v158; // x20
  __int64 id; // x0
  __int64 v160; // x1
  _BOOL8 v161; // x0
  __int64 v162; // x1
  __int64 v163; // x0
  __int64 v164; // x1
  _BOOL8 v165; // x0
  __int64 v166; // x1
  const MethodInfo *v167; // x3
  __int64 v168; // x8
  __int64 v169; // x9
  int *v170; // x10
  __int64 v171; // x0
  ServantStatusBattleListViewItem_o *p_ratingBaseIds; // x20
  struct System_Int32_array *ratingBaseIds; // x22
  System_Array_o *v174; // x21
  int32_t v175; // w2
  int32_t v176; // w3
  __int64 v177; // x8
  unsigned __int64 v178; // x24
  int32_t v179; // w20
  WarBoardData_o *v180; // x25
  _QWORD *v181; // x8
  __int64 v182; // x20
  int32_t v183; // w2
  int32_t v184; // w3
  int32_t v185; // w2
  int32_t v186; // w3
  struct System_Int32_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  Il2CppClass **v190; // x8
  int32_t v191; // w21
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicRatingbaseCalcValue; // x20
  WarBoardEvalValueSquare_CalcEval_o *v193; // x25
  struct System_Int32_array *tacticalIds; // x19
  ServantStatusBattleListViewItem_o *p_tacticalIds; // x21
  System_Array_o *v196; // x20
  int32_t v197; // w2
  int32_t v198; // w3
  __int64 v199; // x8
  unsigned __int64 v200; // x21
  int32_t v201; // w20
  int32_t v202; // w2
  int32_t v203; // w3
  System_Collections_Generic_List_object__o *v204; // x8
  struct System_Object_array *v205; // x9
  _QWORD *v206; // x10
  __int64 v207; // x11
  WarBoardData_o *v208; // x1
  Il2CppClass **v209; // x0
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v212; // x22
  int32_t v213; // w2
  int32_t v214; // w3
  struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o **p_tacticalTrendList; // [xsp+0h] [xbp-C0h]
  struct System_Collections_Generic_List_WarBoardRatingBase__o **p_ratingBaseList; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_Dictionary_int__object__o **p_piecePersonalityDic; // [xsp+28h] [xbp-98h]
  DataManager_o *v220; // [xsp+30h] [xbp-90h]
  WarBoardReinforcementsEntity_o *v221; // [xsp+38h] [xbp-88h] BYREF
  WarBoardStageReinforcementsEntity_o *v222; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *item; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v224; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  System_RuntimeFieldHandle_o v226; // 0:w1.4
  System_RuntimeFieldHandle_o v227; // 0:w1.4
  System_RuntimeFieldHandle_o v228; // 0:w1.4

  if ( (byte_4A1D6E2 & 1) == 0 )
  {
    sub_1B715CC(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, npc);
    sub_1B715CC(&Method_BasicHelper_IndexValue_int____75852288, v3);
    sub_1B715CC(&WarBoardEvalValueSquare_CalcEval_TypeInfo, v4);
    sub_1B715CC(&Method_DataManager_GetMasterData_WarBoardAIMaster___, v5);
    sub_1B715CC(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___, v6);
    sub_1B715CC(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___, v7);
    sub_1B715CC(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___, v8);
    sub_1B715CC(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___, v9);
    sub_1B715CC(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v10);
    sub_1B715CC(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v11);
    sub_1B715CC(&DataManager_TypeInfo, v12);
    sub_1B715CC(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__, v13);
    sub_1B715CC(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__, v14);
    sub_1B715CC(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__, v15);
    sub_1B715CC(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__, v16);
    sub_1B715CC(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v18);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__, v19);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__, v20);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__, v21);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__, v22);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__, v23);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__, v24);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__, v25);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__, v26);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__, v27);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo, v28);
    sub_1B715CC(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo, v29);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo, v30);
    sub_1B715CC(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo, v31);
    sub_1B715CC(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo, v32);
    sub_1B715CC(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo, v33);
    sub_1B715CC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v34);
    sub_1B715CC(&System_Func_WarBoardPieceData__bool__TypeInfo, v35);
    sub_1B715CC(&System_IDisposable_TypeInfo, v36);
    sub_1B715CC(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, v37);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, v38);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v39);
    sub_1B715CC(&int___TypeInfo, v40);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v41);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__, v42);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__, v43);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v44);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__, v45);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__, v46);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__, v47);
    sub_1B715CC(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v48);
    sub_1B715CC(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v49);
    sub_1B715CC(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo, v50);
    sub_1B715CC(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo, v51);
    sub_1B715CC(&WarBoardAIRoute_PiecePersonality_TypeInfo, v52);
    sub_1B715CC(&ShortestDistanceFromAllyMaster_TypeInfo, v53);
    sub_1B715CC(&ShortestDistanceFromAllyServant_TypeInfo, v54);
    sub_1B715CC(&ShortestDistanceFromEnemyMaster_TypeInfo, v55);
    sub_1B715CC(&ShortestDistanceFromEnemyServant_TypeInfo, v56);
    sub_1B715CC(&ShortestDistanceFromItem_TypeInfo, v57);
    sub_1B715CC(&ShortestDistanceFromPrioritySpace_TypeInfo, v58);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v59);
    sub_1B715CC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v60);
    sub_1B715CC(
      &Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384,
      v61);
    sub_1B715CC(
      &Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49,
      v62);
    sub_1B715CC(
      &Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72,
      v63);
    sub_1B715CC(&Method_WarBoardAIRoute___ctor_b__42_0__, v64);
    sub_1B715CC(&WarBoardAiTargetCacher_TypeInfo, v65);
    byte_4A1D6E2 = 1;
  }
  v224 = 0LL;
  entity = 0LL;
  v222 = 0LL;
  item = 0LL;
  v221 = 0LL;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v66 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v66,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v66;
  p_tacticalTrendList = &this->fields.tacticalTrendList;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.tacticalTrendList, (int32_t)v66, v67, v68);
  v69 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_WarBoardRatingBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v69,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v69;
  p_ratingBaseList = &this->fields.ratingBaseList;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.ratingBaseList, (int32_t)v69, v70, v71);
  v72 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v72,
    (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v72;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.piecePersonalityDic, (int32_t)v72, v73, v74);
  v75 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v75;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.allRouteList, (int32_t)v75, v76, v77);
  v78 = this;
  v79 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B71818(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v79,
    (const MethodInfo_31D6FA4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v79;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dicUniqueKeyAdvantagePieceData, (int32_t)v79, v80, v81);
  v82 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B71818(System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v82,
    (const MethodInfo_31A7464 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v82;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.dictionaryCreateRouteDataEvalValue,
    (int32_t)v82,
    v83,
    v84);
  v85 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B71818(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v85,
    (const MethodInfo_31D6FA4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v85;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dicUniqueKeyDesignationItem, (int32_t)v85, v86, v87);
  v88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B71818(System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v88,
    (const MethodInfo_31D6FA4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v88;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dicUniqueKeyTarget, (int32_t)v88, v89, v90);
  v91 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v91,
    (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v91;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dicRatingbaseCalcValue, (int32_t)v91, v92, v93);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.npcData, (int32_t)npc, v95, v96);
  if ( !npc )
    goto LABEL_137;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&npc->fields.forceId;
  this->fields.pickValue = npc->fields.pickValue;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  WarBoardAIRoute__Clear(this, v99);
  playedStageReinforcementsList = (WarBoardData_o *)this->fields.piecePersonalityDic;
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)playedStageReinforcementsList,
    (const MethodInfo_31489DC *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  v100 = *p_ratingBaseList;
  if ( !*p_ratingBaseList )
    goto LABEL_137;
  size = v100->fields._size;
  v102 = v100->fields._version + 1;
  v100->fields._size = 0;
  v100->fields._version = v102;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v100->fields._items, 0, size, 0LL);
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.piecePersonalityDic;
  p_aiIds = (ServantStatusBattleListViewItem_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v105 = (System_Array_o *)sub_1B71674(int___TypeInfo, 4LL);
    v226.fields.value = Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61413584(v105, v226, 0LL);
    p_aiIds->klass = (ServantStatusBattleListViewItem_c *)v105;
    sub_1B71570(p_aiIds, (int32_t)v105, v106, v107);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_137;
  }
  v108 = *(_QWORD *)&aiIds->max_length;
  v220 = (DataManager_o *)Instance;
  if ( (int)v108 >= 1 )
  {
    v109 = 0LL;
    do
    {
      if ( v109 >= (unsigned int)v108 )
        goto LABEL_138;
      v110 = aiIds->m_Items[v109 + 1];
      v111 = (WarBoardAIRoute_PiecePersonality_o *)sub_1B71818(WarBoardAIRoute_PiecePersonality_TypeInfo);
      WarBoardAIRoute_PiecePersonality___ctor(v111, v112);
      playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !playedStageReinforcementsList )
        goto LABEL_137;
      playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
      if ( !playedStageReinforcementsList )
        goto LABEL_137;
      playedStageReinforcementsList = (WarBoardData_o *)WarBoardData__GetPiece(
                                                          playedStageReinforcementsList,
                                                          v78->fields.forceId,
                                                          v78->fields.groupId,
                                                          v109,
                                                          1,
                                                          0LL);
      if ( playedStageReinforcementsList
        && (squares = (int32_t)playedStageReinforcementsList[1].fields.squares, squares > 0)
        || (squares = v110, v110 >= 1) )
      {
        if ( !Instance )
          goto LABEL_137;
        playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !playedStageReinforcementsList )
          goto LABEL_137;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
               &entity,
               squares,
               (const MethodInfo_30F87B4 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
          if ( !entity )
            goto LABEL_137;
          v114 = (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList;
          playedStageReinforcementsList = (WarBoardData_o *)WarBoardAIEntity__GetActionTrendIds(
                                                              (WarBoardAIEntity_o *)entity,
                                                              0LL);
          if ( !playedStageReinforcementsList )
            goto LABEL_137;
          stageNpcMaster = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)playedStageReinforcementsList->fields.stageNpcMaster;
          v116 = playedStageReinforcementsList;
          if ( (int)stageNpcMaster >= 1 )
          {
            v117 = 0LL;
            while ( v117 < (unsigned int)stageNpcMaster )
            {
              if ( !v114 )
                goto LABEL_137;
              playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v114,
                                                                  &v224,
                                                                  *((_DWORD *)&v116->fields.npcEntityDict + v117),
                                                                  (const MethodInfo_30F87B4 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)playedStageReinforcementsList & 1) != 0 )
              {
                if ( !v111 )
                  goto LABEL_137;
                actionTrandList = (System_Collections_Generic_List_object__o *)v111->fields.actionTrandList;
                v119 = v224;
                v120 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1B71818(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
                WarBoardAIRoute_ActionTrendInfo___ctor(v120, (WarBoardActionTrendEntity_o *)v119, 0LL);
                if ( !actionTrandList )
                  goto LABEL_137;
                items = actionTrandList->fields._items;
                v124 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
                ++actionTrandList->fields._version;
                if ( !items )
                  goto LABEL_137;
                v125 = actionTrandList->fields._size;
                if ( (unsigned int)v125 >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    actionTrandList,
                    (Il2CppObject *)v120,
                    *(const MethodInfo_34D0260 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
                }
                else
                {
                  v126 = &items->obj.klass + v125;
                  actionTrandList->fields._size = v125 + 1;
                  v126[4] = (Il2CppClass *)v120;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)(v126 + 4), (int32_t)v120, v121, v122);
                }
              }
              LODWORD(stageNpcMaster) = v116->fields.stageNpcMaster;
              if ( (__int64)++v117 >= (int)stageNpcMaster )
                goto LABEL_43;
            }
LABEL_138:
            sub_1B71830(playedStageReinforcementsList, v98);
          }
LABEL_43:
          Instance = (Il2CppObject *)v220;
          playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                              v220,
                                                              (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_137;
          v127 = (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList;
          playedStageReinforcementsList = (WarBoardData_o *)WarBoardAIEntity__GetRatingOffsetIds(
                                                              (WarBoardAIEntity_o *)entity,
                                                              0LL);
          v78 = this;
          if ( !playedStageReinforcementsList )
            goto LABEL_137;
          v128 = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)playedStageReinforcementsList->fields.stageNpcMaster;
          v129 = playedStageReinforcementsList;
          if ( (int)v128 >= 1 )
          {
            v130 = 0LL;
            while ( v130 < (unsigned int)v128 )
            {
              if ( !v127 )
                goto LABEL_137;
              playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v127,
                                                                  &item,
                                                                  *((_DWORD *)&v129->fields.npcEntityDict + v130),
                                                                  (const MethodInfo_30F87B4 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)playedStageReinforcementsList & 1) != 0 )
              {
                if ( !v111 )
                  goto LABEL_137;
                playedStageReinforcementsList = (WarBoardData_o *)v111->fields.ratingOffsetList;
                if ( !playedStageReinforcementsList )
                  goto LABEL_137;
                v98 = item;
                stageEntity = (struct System_Int32_array *)playedStageReinforcementsList->fields.stageEntity;
                v134 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
                ++HIDWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( !stageEntity )
                  goto LABEL_137;
                stageNpcMaster_low = SLODWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( (unsigned int)stageNpcMaster_low >= stageEntity->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)playedStageReinforcementsList,
                    v98,
                    *(const MethodInfo_34D0260 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
                }
                else
                {
                  v136 = &stageEntity->obj.klass + stageNpcMaster_low;
                  LODWORD(playedStageReinforcementsList->fields.stageNpcMaster) = stageNpcMaster_low + 1;
                  v136[4] = (Il2CppClass *)v98;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)(v136 + 4), (int32_t)v98, v131, v132);
                }
              }
              LODWORD(v128) = v129->fields.stageNpcMaster;
              if ( (__int64)++v130 >= (int)v128 )
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
        v109,
        (Il2CppObject *)v111,
        (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      LODWORD(v108) = aiIds->max_length;
    }
    while ( (__int64)++v109 < (int)v108 );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v138 = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  v139 = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !v139 )
    goto LABEL_137;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)v139->fields.pieces;
  v141 = (System_Func_object__bool__o *)sub_1B71818(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(v141, (Il2CppObject *)v78, Method_WarBoardAIRoute___ctor_b__42_0__, 0LL);
  playedStageReinforcementsList = (WarBoardData_o *)System_Linq_Enumerable__Where_object_(
                                                      pieces,
                                                      (System_Func_TSource__bool__o *)v141,
                                                      (const MethodInfo_2E99B5C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  klass = (System_Collections_Generic_Dictionary_int__object__c *)playedStageReinforcementsList->klass;
  v143 = playedStageReinforcementsList;
  v144 = *(unsigned __int16 *)(&playedStageReinforcementsList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&playedStageReinforcementsList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      --v144;
      p_offset += 4;
      if ( !v144 )
        goto LABEL_68;
    }
    v146 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_68:
    v146 = sub_1BC35AC(
             playedStageReinforcementsList,
             System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo,
             0LL);
  }
  v148 = (*(__int64 (__fastcall **)(WarBoardData_o *, _QWORD))v146)(v143, *(_QWORD *)(v146 + 8));
  if ( !v148 )
    sub_1B71828(0LL, v147);
  while ( 1 )
  {
    v149 = *(_QWORD *)v148;
    v150 = *(unsigned __int16 *)(*(_QWORD *)v148 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v148 + 302LL) )
    {
      v151 = (int *)(*(_QWORD *)(v149 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v151 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v150;
        v151 += 4;
        if ( !v150 )
          goto LABEL_75;
      }
      v152 = v149 + 16LL * *v151 + 312;
    }
    else
    {
LABEL_75:
      v152 = sub_1BC35AC(v148, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v152)(v148, *(_QWORD *)(v152 + 8)) & 1) == 0 )
      break;
    v153 = *(_QWORD *)v148;
    v154 = *(unsigned __int16 *)(*(_QWORD *)v148 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v148 + 302LL) )
    {
      v155 = (int *)(*(_QWORD *)(v153 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v155 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        --v154;
        v155 += 4;
        if ( !v154 )
          goto LABEL_82;
      }
      v156 = v153 + 16LL * *v155 + 312;
    }
    else
    {
LABEL_82:
      v156 = sub_1BC35AC(v148, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL);
    }
    v158 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v156)(v148, *(_QWORD *)(v156 + 8));
    if ( !v158 )
      sub_1B71828(0LL, v157);
    if ( !*p_piecePersonalityDic )
      sub_1B71828(0LL, v157);
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            *p_piecePersonalityDic,
            v158[7],
            (const MethodInfo_3148A48 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__) )
    {
      id = WarBoardData__get_id(v139, 0LL);
      if ( !Master_object )
        sub_1B71828(id, v160);
      v161 = WarBoardStageReinforcementsMaster__TryGetEntity(
               (WarBoardStageReinforcementsMaster_o *)Master_object,
               &v222,
               id,
               v158[72],
               0LL);
      if ( v161 )
      {
        if ( !v222 )
          sub_1B71828(v161, v162);
        v163 = BasicHelper__IndexValue_int_(
                 v222->fields.reinforcementsIds,
                 v158[73],
                 -1,
                 (const MethodInfo_2E4A150 *)Method_BasicHelper_IndexValue_int____75852288);
        if ( !v138 )
          sub_1B71828(v163, v164);
        v165 = WarBoardReinforcementsMaster__TryGetEntity((WarBoardReinforcementsMaster_o *)v138, &v221, v163, 0LL);
        if ( v165 )
        {
          if ( !v221 )
            sub_1B71828(v165, v166);
          WarBoardAIRoute__AddPiecePersonalityDic(this, v221->fields.aiId, v158[7], v167);
        }
      }
    }
  }
  v168 = *(_QWORD *)v148;
  v169 = *(unsigned __int16 *)(*(_QWORD *)v148 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v148 + 302LL) )
  {
    v170 = (int *)(*(_QWORD *)(v168 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v170 - 1) != System_IDisposable_TypeInfo )
    {
      --v169;
      v170 += 4;
      if ( !v169 )
        goto LABEL_98;
    }
    v171 = v168 + 16LL * *v170 + 312;
  }
  else
  {
LABEL_98:
    v171 = sub_1BC35AC(v148, System_IDisposable_TypeInfo, 0LL);
  }
  playedStageReinforcementsList = (WarBoardData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v171)(
                                                      v148,
                                                      *(_QWORD *)(v171 + 8));
  p_ratingBaseIds = (ServantStatusBattleListViewItem_o *)&npc->fields.ratingBaseIds;
  ratingBaseIds = npc->fields.ratingBaseIds;
  if ( !ratingBaseIds )
  {
    v174 = (System_Array_o *)sub_1B71674(int___TypeInfo, 6LL);
    v227.fields.value = Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61413584(v174, v227, 0LL);
    p_ratingBaseIds->klass = (ServantStatusBattleListViewItem_c *)v174;
    sub_1B71570(p_ratingBaseIds, (int32_t)v174, v175, v176);
    ratingBaseIds = (struct System_Int32_array *)p_ratingBaseIds->klass;
    if ( !p_ratingBaseIds->klass )
LABEL_137:
      sub_1B71828(playedStageReinforcementsList, v98);
  }
  v177 = *(_QWORD *)&ratingBaseIds->max_length;
  if ( (int)v177 >= 1 )
  {
    v178 = 0LL;
    while ( 2 )
    {
      if ( v178 >= (unsigned int)v177 )
        goto LABEL_138;
      playedStageReinforcementsList = (WarBoardData_o *)v220;
      if ( v220 )
      {
        v179 = ratingBaseIds->m_Items[v178 + 1];
        playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                            v220,
                                                            (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
        if ( playedStageReinforcementsList )
        {
          playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___GetEntity(
                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
                                                              v179,
                                                              (const MethodInfo_30F8760 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
          if ( playedStageReinforcementsList )
          {
            v180 = playedStageReinforcementsList;
            switch ( HIDWORD(playedStageReinforcementsList->fields.stageEntity) )
            {
              case 0:
                v181 = &ShortestDistanceFromAllyServant_TypeInfo;
                goto LABEL_115;
              case 1:
                v181 = &ShortestDistanceFromEnemyServant_TypeInfo;
                goto LABEL_115;
              case 2:
                v181 = &ShortestDistanceFromAllyMaster_TypeInfo;
                goto LABEL_115;
              case 3:
                v181 = &ShortestDistanceFromEnemyMaster_TypeInfo;
                goto LABEL_115;
              case 4:
                v181 = &ShortestDistanceFromItem_TypeInfo;
                goto LABEL_115;
              case 5:
                v181 = &ShortestDistanceFromPrioritySpace_TypeInfo;
LABEL_115:
                v182 = sub_1B71818(*v181);
                System_Object___ctor((Il2CppObject *)v182, 0LL);
                if ( !v182 )
                  goto LABEL_137;
                *(_QWORD *)(v182 + 16) = v180;
                sub_1B71570((ServantStatusBattleListViewItem_o *)(v182 + 16), (int32_t)v180, v183, v184);
                playedStageReinforcementsList = (WarBoardData_o *)*p_ratingBaseList;
                if ( !*p_ratingBaseList )
                  goto LABEL_137;
                v187 = (struct System_Int32_array *)playedStageReinforcementsList->fields.stageEntity;
                v188 = Method_System_Collections_Generic_List_WarBoardRatingBase__Add__;
                ++HIDWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( !v187 )
                  goto LABEL_137;
                v189 = SLODWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( (unsigned int)v189 >= v187->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)playedStageReinforcementsList,
                    (Il2CppObject *)v182,
                    *(const MethodInfo_34D0260 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
                }
                else
                {
                  v190 = &v187->obj.klass + v189;
                  LODWORD(playedStageReinforcementsList->fields.stageNpcMaster) = v189 + 1;
                  v190[4] = (Il2CppClass *)v182;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)(v190 + 4), v182, v185, v186);
                }
LABEL_121:
                v191 = (int32_t)v180->fields.stageEntity;
                dicRatingbaseCalcValue = this->fields.dicRatingbaseCalcValue;
                v193 = (WarBoardEvalValueSquare_CalcEval_o *)sub_1B71818(WarBoardEvalValueSquare_CalcEval_TypeInfo);
                WarBoardEvalValueSquare_CalcEval___ctor(v193, 0LL);
                if ( !dicRatingbaseCalcValue )
                  goto LABEL_137;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                  v191,
                  (Il2CppObject *)v193,
                  (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
                LODWORD(v177) = ratingBaseIds->max_length;
                if ( (__int64)++v178 >= (int)v177 )
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
    v196 = (System_Array_o *)sub_1B71674(int___TypeInfo, 5LL);
    v228.fields.value = Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61413584(v196, v228, 0LL);
    p_tacticalIds->klass = (ServantStatusBattleListViewItem_c *)v196;
    sub_1B71570(p_tacticalIds, (int32_t)v196, v197, v198);
    tacticalIds = (struct System_Int32_array *)p_tacticalIds->klass;
    if ( !p_tacticalIds->klass )
      goto LABEL_137;
  }
  v199 = *(_QWORD *)&tacticalIds->max_length;
  if ( (int)v199 >= 1 )
  {
    v200 = 0LL;
    while ( v200 < (unsigned int)v199 )
    {
      if ( !v220 )
        goto LABEL_137;
      v201 = tacticalIds->m_Items[v200 + 1];
      playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                          v220,
                                                          (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !playedStageReinforcementsList )
        goto LABEL_137;
      playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
                                                          v201,
                                                          (const MethodInfo_30F8760 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      v204 = (System_Collections_Generic_List_object__o *)*p_tacticalTrendList;
      if ( !*p_tacticalTrendList )
        goto LABEL_137;
      v205 = v204->fields._items;
      v206 = Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__;
      ++v204->fields._version;
      if ( !v205 )
        goto LABEL_137;
      v207 = v204->fields._size;
      v208 = playedStageReinforcementsList;
      if ( (unsigned int)v207 >= v205->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v204,
          (Il2CppObject *)playedStageReinforcementsList,
          *(const MethodInfo_34D0260 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
      }
      else
      {
        v209 = &v205->obj.klass + v207;
        v204->fields._size = v207 + 1;
        v209[4] = (Il2CppClass *)v208;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v209 + 4), (int32_t)v208, v202, v203);
      }
      LODWORD(v199) = tacticalIds->max_length;
      if ( (__int64)++v200 >= (int)v199 )
        goto LABEL_136;
    }
    goto LABEL_138;
  }
LABEL_136:
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v212 = (WarBoardAiTargetCacher_o *)sub_1B71818(WarBoardAiTargetCacher_TypeInfo);
  WarBoardAiTargetCacher___ctor(v212, forceId, groupId, 0LL);
  this->fields.aiTargetCacher = v212;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.aiTargetCacher, (int32_t)v212, v213, v214);
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
  WarBoardAIRoute___c__DisplayClass43_0_o *v22; // x25
  System_Int32_array *Entity; // x0
  Il2CppObject *p_obj; // x1
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x21
  System_Func_T__TResult__o *v26; // x22
  Il2CppObject *Master_object; // x25
  Il2CppObject *v28; // x24
  Il2CppObject *v29; // x22
  WarBoardAIRoute_PiecePersonality_o *v30; // x21
  const MethodInfo *v31; // x1
  __int64 v32; // x8
  System_Int32_array *v33; // x25
  unsigned __int64 v34; // x29
  System_Collections_Generic_List_object__o *actionTrandList; // x26
  WarBoardActionTrendEntity_o *v36; // x28
  WarBoardAIRoute_ActionTrendInfo_o *v37; // x27
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  __int64 v44; // x8
  System_Int32_array *v45; // x23
  unsigned __int64 v46; // x19
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v50; // x9
  __int64 max_length; // x10
  Il2CppArrayBounds *v52; // x8
  WarBoardAIRoute___c__DisplayClass43_0_o *v53; // [xsp+8h] [xbp-78h]
  WarBoardAIRoute_o *v54; // [xsp+10h] [xbp-70h]
  WarBoardAIEntity_o *v55; // [xsp+18h] [xbp-68h]

  if ( (byte_4A1D6E3 & 1) == 0 )
  {
    sub_1B715CC(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, *(_QWORD *)&aiId);
    sub_1B715CC(&Method_DataManager_GetMaster_WarBoardAIMaster___, v7);
    sub_1B715CC(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v8);
    sub_1B715CC(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___, v9);
    sub_1B715CC(&DataManager_TypeInfo, v10);
    sub_1B715CC(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__, v11);
    sub_1B715CC(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__, v12);
    sub_1B715CC(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v14);
    sub_1B715CC(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____, v15);
    sub_1B715CC(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo, v16);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v18);
    sub_1B715CC(&WarBoardAIRoute_PiecePersonality_TypeInfo, v19);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__, v20);
    sub_1B715CC(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo, v21);
    byte_4A1D6E3 = 1;
  }
  v22 = (WarBoardAIRoute___c__DisplayClass43_0_o *)sub_1B71818(WarBoardAIRoute___c__DisplayClass43_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass43_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_37;
  v22->fields.pieceIndex = pieceIndex;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  v26 = (System_Func_T__TResult__o *)sub_1B71818(System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo);
  System_Func_KeyValuePair_int__object___bool____ctor(
    v26,
    (Il2CppObject *)v22,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    0LL);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__object___48666964(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v26,
         (const MethodInfo_2E69954 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  v53 = v22;
  v54 = this;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v28 = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v29 = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v30 = (WarBoardAIRoute_PiecePersonality_o *)sub_1B71818(WarBoardAIRoute_PiecePersonality_TypeInfo);
  WarBoardAIRoute_PiecePersonality___ctor(v30, v31);
  if ( !Master_object )
    goto LABEL_37;
  Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   aiId,
                                   (const MethodInfo_30F8760 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_37;
  v55 = (WarBoardAIEntity_o *)Entity;
  Entity = WarBoardAIEntity__GetActionTrendIds((WarBoardAIEntity_o *)Entity, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v32 = *(_QWORD *)&Entity->max_length;
  v33 = Entity;
  if ( (int)v32 >= 1 )
  {
    v34 = 0LL;
    while ( v34 < (unsigned int)v32 )
    {
      if ( !v28 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v28,
                                       v33->m_Items[v34 + 1],
                                       (const MethodInfo_30F8760 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v30 )
          goto LABEL_37;
        actionTrandList = (System_Collections_Generic_List_object__o *)v30->fields.actionTrandList;
        v36 = (WarBoardActionTrendEntity_o *)Entity;
        v37 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1B71818(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v37, v36, 0LL);
        if ( !actionTrandList )
          goto LABEL_37;
        items = actionTrandList->fields._items;
        v41 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++actionTrandList->fields._version;
        if ( !items )
          goto LABEL_37;
        size = actionTrandList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            actionTrandList,
            (Il2CppObject *)v37,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          actionTrandList->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v37;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)v37, v38, v39);
        }
      }
      LODWORD(v32) = v33->max_length;
      if ( (__int64)++v34 >= (int)v32 )
        goto LABEL_22;
    }
LABEL_38:
    sub_1B71830(Entity, p_obj);
  }
LABEL_22:
  Entity = WarBoardAIEntity__GetRatingOffsetIds(v55, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v44 = *(_QWORD *)&Entity->max_length;
  v45 = Entity;
  if ( (int)v44 >= 1 )
  {
    v46 = 0LL;
    while ( v46 < (unsigned int)v44 )
    {
      if ( !v29 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v29,
                                       v45->m_Items[v46 + 1],
                                       (const MethodInfo_30F8760 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v30 )
          goto LABEL_37;
        p_obj = &Entity->obj;
        Entity = (System_Int32_array *)v30->fields.ratingOffsetList;
        if ( !Entity )
          goto LABEL_37;
        bounds = Entity->bounds;
        v50 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
        ++Entity->m_Items[0];
        if ( !bounds )
          goto LABEL_37;
        max_length = (int)Entity->max_length;
        if ( (unsigned int)max_length >= bounds[3].length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Entity,
            p_obj,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = &bounds[max_length];
          Entity->max_length = max_length + 1;
          v52[4] = (Il2CppArrayBounds)p_obj;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v52[4], (int32_t)p_obj, v47, v48);
        }
      }
      LODWORD(v44) = v45->max_length;
      if ( (__int64)++v46 >= (int)v44 )
        goto LABEL_35;
    }
    goto LABEL_38;
  }
LABEL_35:
  Entity = (System_Int32_array *)v54->fields.piecePersonalityDic;
  if ( !Entity )
LABEL_37:
    sub_1B71828(Entity, p_obj);
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)Entity,
    v53->fields.pieceIndex,
    (Il2CppObject *)v30,
    (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
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
  int32_t v61; // w2
  int32_t v62; // w3
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
  int32_t v82; // w3
  System_Object_array *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  struct WarBoardSquareData_array *v86; // x1
  int32_t v87; // w2
  int32_t v88; // w3
  struct WarBoardItemData_array *v89; // x1
  int32_t v90; // w2
  int32_t v91; // w3
  struct WarBoardTreasureData_array *v92; // x1
  int32_t v93; // w2
  int32_t v94; // w3
  struct WarBoardWallData_array *v95; // x1
  int32_t v96; // w2
  int32_t v97; // w3
  System_Collections_Generic_List_object__o *v98; // x25
  int32_t forceId; // w19
  int32_t groupId; // w20
  WarBoardAIRoute_AIRouteMasterData_o *v101; // x0
  int32_t v102; // w2
  struct WarBoardAIRoute_AIRouteMasterData_o *v103; // x21
  WarBoardAIRoute_o *v104; // x20
  int32_t v105; // w2
  int32_t v106; // w3
  System_Collections_Generic_Dictionary_int__uint__o *v107; // x19
  int32_t v108; // w2
  int32_t v109; // w3
  struct WarBoardPieceData_array *allAllyPiece; // x9
  int max_length; // w8
  unsigned int v112; // w10
  int32_t forceId_k__BackingField; // w8
  int32_t v114; // w9
  int32_t v115; // w1
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v117; // x20
  __int64 v118; // x9
  int *p_offset; // x10
  __int64 v120; // x0
  __int64 v121; // x1
  __int64 v122; // x8
  __int64 v123; // x9
  int *v124; // x10
  __int64 v125; // x0
  __int64 v126; // x8
  __int64 v127; // x9
  int *v128; // x10
  __int64 v129; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v130; // x0
  __int64 v131; // x1
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x20
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  __int64 v134; // x1
  int v135; // w8
  unsigned int v136; // w9
  WarBoardActionTrendConditionEntity_o *v137; // x25
  struct System_Int32_array *conditionTypes; // x24
  __int64 v139; // x8
  unsigned __int64 v140; // x28
  int32_t v141; // w26
  WarBoardAIRoute___c__DisplayClass45_0_o *v142; // x29
  __int64 v143; // x0
  __int64 v144; // x1
  __int64 ConditionType; // x0
  __int64 squareIndex; // x1
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexKeyItemData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_object__bool__o *v149; // x21
  __int64 v150; // x1
  Il2CppObject *v151; // x2
  System_Collections_Generic_Dictionary_int__object__o *v152; // x0
  int32_t v153; // w21
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x0
  _BOOL8 IsRegisteredTrendId; // x0
  __int64 v157; // x1
  System_Func_T__TResult__o *v158; // x19
  WarBoardAiTargetCacher_o *v159; // x19
  int64_t v160; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicIndividualityPutSqareIndex; // x21
  int64_t v162; // x19
  int64_t v163; // x23
  WarBoardAIRoute_TargetData_o *v164; // x22
  __int64 v165; // x0
  __int64 v166; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x19
  WarBoardAIRoute_o *v168; // x0
  const MethodInfo *v169; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicSquarePutSqareIndex; // x19
  int64_t v171; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_object__bool__o *v173; // x21
  WarBoardSquareData_o *v174; // x21
  int64_t v175; // x22
  WarBoardAIRoute_TargetData_o *v176; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *v177; // x21
  int64_t v178; // x0
  __int64 v179; // x8
  __int64 v180; // x9
  int *v181; // x10
  __int64 v182; // x21
  __int64 v183; // x0
  WarBoardAiTargetCacher_o *v184; // x20
  WarBoardAIRoute___c_c *v185; // x8
  System_Func_object__bool__o *_9__45_0; // x19
  Il2CppObject *v187; // x21
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v189; // w2
  int32_t v190; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v191; // x0
  WarBoardAIRoute_AdvantagePieceData_o *v192; // x20
  struct WarBoardPieceData_array *v193; // x22
  int v194; // w8
  int32_t v195; // w21
  unsigned int v196; // w23
  Il2CppClass **v197; // x8
  Il2CppClass *v198; // x25
  int32_t ClassId; // w19
  float Magnification; // s10
  float v201; // s11
  float v202; // s8
  float v203; // s9
  const MethodInfo *v204; // x1
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+10h] [xbp-110h]
  struct WarBoardAIRoute_AIRouteMasterData_o **p_aiRouteMasterData; // [xsp+18h] [xbp-108h]
  struct WarBoardPieceData_array *v207; // [xsp+20h] [xbp-100h]
  struct System_Collections_Generic_Dictionary_int__uint__o **p_placePieceData; // [xsp+28h] [xbp-F8h]
  unsigned int v209; // [xsp+34h] [xbp-ECh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-E8h]
  __int64 v211; // [xsp+40h] [xbp-E0h]
  unsigned int v212; // [xsp+4Ch] [xbp-D4h]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_IWarBoardObjectData__o *objectList; // [xsp+70h] [xbp-B0h]
  WarBoardAIRoute_DesignationItemData_o *v216; // [xsp+78h] [xbp-A8h]
  WarBoardAIRoute_PutSquareTarget_o *v217; // [xsp+80h] [xbp-A0h]
  bool notSquareTarget; // [xsp+88h] [xbp-98h] BYREF
  int32_t condType; // [xsp+8Ch] [xbp-94h] BYREF
  Il2CppObject *value; // [xsp+98h] [xbp-88h] BYREF

  if ( (byte_4A1D6E5 & 1) == 0 )
  {
    sub_1B715CC(&WarBoardAIRoute_AIRouteMasterData_TypeInfo, method);
    sub_1B715CC(&WarBoardAIRoute_AdvantagePieceData_TypeInfo, v2);
    sub_1B715CC(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___, v3);
    sub_1B715CC(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v4);
    sub_1B715CC(&DataManager_TypeInfo, v5);
    sub_1B715CC(&WarBoardAIRoute_DesignationItemData_TypeInfo, v6);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__uint__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__, v18);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__, v19);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, v20);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__, v21);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__, v22);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v23);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v24);
    sub_1B715CC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, v25);
    sub_1B715CC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, v26);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, v27);
    sub_1B715CC(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v28);
    sub_1B715CC(&System_Func_IWarBoardObjectData__bool__TypeInfo, v29);
    sub_1B715CC(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v30);
    sub_1B715CC(&System_Func_WarBoardItemData__bool__TypeInfo, v31);
    sub_1B715CC(&System_Func_WarBoardSquareData__bool__TypeInfo, v32);
    sub_1B715CC(&System_IDisposable_TypeInfo, v33);
    sub_1B715CC(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v34);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v35);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v36);
    sub_1B715CC(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__, v37);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v38);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v39);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v40);
    sub_1B715CC(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__, v41);
    sub_1B715CC(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v42);
    sub_1B715CC(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo, v43);
    sub_1B715CC(&WarBoardAIRoute_PutSquareTarget_TypeInfo, v44);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_1B715CC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v46);
    sub_1B715CC(&SvtClassAttri_TypeInfo, v47);
    sub_1B715CC(&WarBoardAIRoute_TargetData_TypeInfo, v48);
    sub_1B715CC(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__, v49);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__, v50);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__, v51);
    sub_1B715CC(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo, v52);
    sub_1B715CC(&WarBoardAIRoute___c_TypeInfo, v53);
    sub_1B715CC(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__, v54);
    byte_4A1D6E5 = 1;
  }
  value = 0LL;
  condType = 0;
  notSquareTarget = 0;
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_223;
  v57 = *(_QWORD **)&Instance[5].fields._freeCount;
  v58 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v59 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v60 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v57 )
    goto LABEL_223;
  v63 = v57[6];
  if ( !v63 )
    goto LABEL_223;
  v64 = *(_DWORD *)(v63 + 24);
  if ( v64 >= 1 )
  {
    v65 = 0;
    while ( 1 )
    {
      if ( v65 >= v64 )
LABEL_224:
        sub_1B71830(Instance, v56);
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
          *(const MethodInfo_34D0260 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = &items->obj.klass + size;
        v60->fields._size = size + 1;
        v70[4] = (Il2CppClass *)v66;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v70 + 4), v66, v61, v62);
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
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = &v72->obj.klass + v74;
            v58->fields._size = v74 + 1;
            v75[4] = (Il2CppClass *)v66;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v75 + 4), v66, v61, v62);
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
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
          }
          else
          {
            v79 = &v76->obj.klass + v78;
            v59->fields._size = v78 + 1;
            v79[4] = (Il2CppClass *)v66;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v79 + 4), v66, v61, v62);
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
LABEL_223:
    sub_1B71828(Instance, v56);
  }
LABEL_33:
  if ( !v58 )
    goto LABEL_223;
  v80 = System_Collections_Generic_List_object___ToArray(
          v58,
          (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allAllyPiece = (struct WarBoardPieceData_array *)v80;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.allAllyPiece, (int32_t)v80, v81, v82);
  if ( !v59 )
    goto LABEL_223;
  v83 = System_Collections_Generic_List_object___ToArray(
          v59,
          (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v83;
  p_allEnemyPiece = &this->fields.allEnemyPiece;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.allEnemyPiece, (int32_t)v83, v84, v85);
  v86 = (struct WarBoardSquareData_array *)v57[7];
  this->fields.allSquare = v86;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.allSquare, (int32_t)v86, v87, v88);
  v89 = (struct WarBoardItemData_array *)v57[9];
  this->fields.allItemData = v89;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.allItemData, (int32_t)v89, v90, v91);
  v92 = (struct WarBoardTreasureData_array *)v57[10];
  this->fields.allTreasureData = v92;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.allTreasureData, (int32_t)v92, v93, v94);
  v95 = (struct WarBoardWallData_array *)v57[11];
  this->fields.allWallData = v95;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.allWallData, (int32_t)v95, v96, v97);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictionaryCreateRouteDataEvalValue;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_object__float___Clear(
    Instance,
    (const MethodInfo_31A7FA4 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_31D7B00 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_31D7B00 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_31D7B00 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_223;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v98 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_IWarBoardObjectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v98,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v98 )
    goto LABEL_223;
  System_Collections_Generic_List_object___AddRange(
    v98,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allItemData,
    (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v98,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allTreasureData,
    (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v98,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWallData,
    (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  objectList = (System_Collections_Generic_List_IWarBoardObjectData__o *)v98;
  System_Collections_Generic_List_object___AddRange(
    v98,
    (System_Collections_Generic_IEnumerable_T__o *)v60,
    (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v101 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_1B71818(WarBoardAIRoute_AIRouteMasterData_TypeInfo);
  v102 = groupId;
  v103 = v101;
  v104 = this;
  WarBoardAIRoute_AIRouteMasterData___ctor(v101, forceId, v102, 0LL);
  this->fields.aiRouteMasterData = v103;
  p_aiRouteMasterData = &this->fields.aiRouteMasterData;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.aiRouteMasterData, (int32_t)v103, v105, v106);
  v107 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v107,
    (const MethodInfo_3153AF4 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  this->fields.placePieceData = v107;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.placePieceData, (int32_t)v107, v108, v109);
  allAllyPiece = this->fields.allAllyPiece;
  p_placePieceData = &this->fields.placePieceData;
  if ( !allAllyPiece )
    goto LABEL_223;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v112 = 0;
    v207 = this->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v112 >= max_length )
        goto LABEL_224;
      pieceData = allAllyPiece->m_Items[v112];
      if ( !pieceData )
        goto LABEL_223;
      v209 = v112;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_223;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
                                                                            pieceData->fields._nowSquareIndex_k__BackingField,
                                                                            (const MethodInfo_31546A4 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_199;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_223;
      System_Collections_Generic_Dictionary_int__uint___Add(
        (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
        pieceData->fields._nowSquareIndex_k__BackingField,
        pieceData->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_31544B8 *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
      forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
      v114 = v104->fields.forceId;
      if ( forceId_k__BackingField != v114 )
        goto LABEL_57;
      if ( pieceData->fields._groupId_k__BackingField == v104->fields.groupId )
        break;
LABEL_58:
      if ( pieceData->fields._groupId_k__BackingField == v104->fields.groupId )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
        if ( !*p_aiRouteMasterData )
          goto LABEL_223;
        v115 = 2;
        goto LABEL_61;
      }
LABEL_62:
      v216 = (WarBoardAIRoute_DesignationItemData_o *)sub_1B71818(WarBoardAIRoute_DesignationItemData_TypeInfo);
      WarBoardAIRoute_DesignationItemData___ctor(v216, 0LL);
      v217 = (WarBoardAIRoute_PutSquareTarget_o *)sub_1B71818(WarBoardAIRoute_PutSquareTarget_TypeInfo);
      WarBoardAIRoute_PutSquareTarget___ctor(v217, 0LL);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v104->fields.piecePersonalityDic;
      if ( !Instance )
        goto LABEL_223;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                                                            pieceData->fields._index_k__BackingField,
                                                                            &value,
                                                                            (const MethodInfo_3149FE0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)value;
        if ( !value )
          goto LABEL_223;
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
                                                                              (WarBoardAIRoute_PiecePersonality_o *)value,
                                                                              v56);
        if ( !Instance )
          goto LABEL_223;
        klass = Instance->klass;
        v117 = Instance;
        v118 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
          {
            --v118;
            p_offset += 4;
            if ( !v118 )
              goto LABEL_70;
          }
          v120 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_70:
          v120 = sub_1BC35AC(
                   Instance,
                   System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                   0LL);
        }
        v211 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v120)(
                 v117,
                 *(_QWORD *)(v120 + 8));
        if ( !v211 )
          sub_1B71828(0LL, v121);
        while ( 1 )
        {
LABEL_73:
          v122 = *(_QWORD *)v211;
          v123 = *(unsigned __int16 *)(*(_QWORD *)v211 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v211 + 302LL) )
          {
            v124 = (int *)(*(_QWORD *)(v122 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v124 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v123;
              v124 += 4;
              if ( !v123 )
                goto LABEL_77;
            }
            v125 = v122 + 16LL * *v124 + 312;
          }
          else
          {
LABEL_77:
            v125 = sub_1BC35AC(v211, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v125)(v211, *(_QWORD *)(v125 + 8)) & 1) == 0 )
            break;
          v126 = *(_QWORD *)v211;
          v127 = *(unsigned __int16 *)(*(_QWORD *)v211 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v211 + 302LL) )
          {
            v128 = (int *)(*(_QWORD *)(v126 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__c **)v128 - 1) != System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
            {
              --v127;
              v128 += 4;
              if ( !v127 )
                goto LABEL_84;
            }
            v129 = v126 + 16LL * *v128 + 312;
          }
          else
          {
LABEL_84:
            v129 = sub_1BC35AC(
                     v211,
                     System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                     0LL);
          }
          v130 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v129)(
                                                        v211,
                                                        *(_QWORD *)(v129 + 8));
          if ( !v130 )
            sub_1B71828(0LL, v131);
          Entity_k__BackingField = v130->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v130, 0LL);
          if ( !ConditionEntityArray )
            sub_1B71828(0LL, v134);
          v135 = ConditionEntityArray->max_length;
          if ( v135 >= 1 )
          {
            v136 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v136 >= v135 )
                sub_1B71830(ConditionEntityArray, v134);
              v137 = ConditionEntityArray->m_Items[v136];
              if ( !v137 )
                sub_1B71828(ConditionEntityArray, v134);
              conditionTypes = v137->fields.conditionTypes;
              if ( !conditionTypes )
                sub_1B71828(ConditionEntityArray, v134);
              v139 = *(_QWORD *)&conditionTypes->max_length;
              v212 = v136;
              if ( (int)v139 >= 1 )
                break;
LABEL_137:
              ConditionEntityArray = condEntityArray;
              v135 = condEntityArray->max_length;
              v136 = v212 + 1;
              if ( (int)(v212 + 1) >= v135 )
                goto LABEL_73;
            }
            v140 = 0LL;
            while ( 2 )
            {
              if ( v140 >= (unsigned int)v139 )
                sub_1B71830(ConditionEntityArray, v134);
              v141 = conditionTypes->m_Items[v140 + 1];
              v142 = (WarBoardAIRoute___c__DisplayClass45_0_o *)sub_1B71818(WarBoardAIRoute___c__DisplayClass45_0_TypeInfo);
              WarBoardAIRoute___c__DisplayClass45_0___ctor(v142, 0LL);
              if ( !v142 )
                sub_1B71828(v143, v144);
              v142->fields.squareIndex = -1;
              ConditionType = WarBoardActionTrendConditionEntity__GetConditionType(v137, v141, 0LL);
              if ( (int)ConditionType <= 39 )
              {
                if ( (_DWORD)ConditionType == 23 || (_DWORD)ConditionType == 24 )
                  goto LABEL_104;
LABEL_136:
                squareIndex = (unsigned int)v142->fields.squareIndex;
              }
              else
              {
                if ( (_DWORD)ConditionType != 40 && (_DWORD)ConditionType != 41 && (_DWORD)ConditionType != 42 )
                  goto LABEL_136;
LABEL_104:
                squareIndex = (unsigned int)v137->fields.value;
                v142->fields.squareIndex = squareIndex;
              }
              if ( (_DWORD)squareIndex != -1 )
              {
                if ( !v216 )
                  sub_1B71828(ConditionType, squareIndex);
                dicSquareIndexKeyItemData = (System_Collections_Generic_Dictionary_int__object__o *)v216->fields.dicSquareIndexKeyItemData;
                if ( !dicSquareIndexKeyItemData )
                  sub_1B71828(0LL, squareIndex);
                if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                        dicSquareIndexKeyItemData,
                        squareIndex,
                        (const MethodInfo_3148A48 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__) )
                {
                  allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allItemData;
                  v149 = (System_Func_object__bool__o *)sub_1B71818(System_Func_WarBoardItemData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v149,
                    (Il2CppObject *)v142,
                    Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                    0LL);
                  v151 = System_Linq_Enumerable__FirstOrDefault_object__48759088(
                           allItemData,
                           (System_Func_TSource__bool__o *)v149,
                           (const MethodInfo_2E80130 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                  if ( v151 )
                  {
                    v152 = (System_Collections_Generic_Dictionary_int__object__o *)v216->fields.dicSquareIndexKeyItemData;
                    if ( !v152 )
                      sub_1B71828(0LL, v150);
                    System_Collections_Generic_Dictionary_int__object___Add(
                      v152,
                      v142->fields.squareIndex,
                      v151,
                      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                  }
                }
              }
              v142->fields.squareIndex = -1;
              ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)WarBoardActionTrendConditionEntity__GetConditionType(
                                                                                   v137,
                                                                                   v141,
                                                                                   0LL);
              if ( (_DWORD)ConditionEntityArray == 74 || (_DWORD)ConditionEntityArray == 75 )
              {
                v153 = v137->fields.value;
                v142->fields.squareIndex = v153;
              }
              else
              {
                if ( (unsigned int)((_DWORD)ConditionEntityArray - 127) <= 1 )
                {
                  if ( !Entity_k__BackingField )
                    sub_1B71828(ConditionEntityArray, v134);
                  aiTargetCacher = this->fields.aiTargetCacher;
                  TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  if ( !aiTargetCacher )
                    sub_1B71828(TrendKey, TrendKey);
                  IsRegisteredTrendId = WarBoardAiTargetCacher__IsRegisteredTrendId(aiTargetCacher, TrendKey, 0LL);
                  if ( !IsRegisteredTrendId )
                  {
                    v158 = (System_Func_T__TResult__o *)sub_1B71818(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
                    System_Func_Int32Enum__bool____ctor(
                      v158,
                      0LL,
                      Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                      0LL);
                    WarBoardActionTrendConditionMaster__HasMatchCondition(
                      condEntityArray,
                      (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v158,
                      &condType,
                      0LL);
                    v159 = this->fields.aiTargetCacher;
                    v160 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                    if ( !v159 )
                      sub_1B71828(v160, v160);
                    WarBoardAiTargetCacher__Register(v159, v160, v137, condType, 0LL);
                  }
                  if ( !v217 )
                    sub_1B71828(IsRegisteredTrendId, v157);
                  dicIndividualityPutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v217->fields.dicIndividualityPutSqareIndex;
                  v162 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  v163 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  v164 = (WarBoardAIRoute_TargetData_o *)sub_1B71818(WarBoardAIRoute_TargetData_TypeInfo);
                  WarBoardAIRoute_TargetData___ctor(v164, v163, v141, 0LL);
                  if ( !dicIndividualityPutSqareIndex )
                    sub_1B71828(v165, v166);
                  System_Collections_Generic_Dictionary_long__object___set_Item(
                    dicIndividualityPutSqareIndex,
                    v162,
                    (Il2CppObject *)v164,
                    (const MethodInfo_3186FD0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                }
                v153 = v142->fields.squareIndex;
              }
              if ( v153 != -1 )
              {
                if ( !v217 )
                  sub_1B71828(ConditionEntityArray, v134);
                if ( !Entity_k__BackingField )
                  sub_1B71828(ConditionEntityArray, v134);
                dicObjectPutSquareIndex = v217->fields.dicObjectPutSquareIndex;
                v168 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                WarBoardAIRoute__RegisterTargetObjectToDic(
                  v168,
                  dicObjectPutSquareIndex,
                  objectList,
                  v153,
                  (int64_t)v168,
                  v141,
                  &notSquareTarget,
                  v169);
                if ( !notSquareTarget )
                {
                  dicSquarePutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v217->fields.dicSquarePutSqareIndex;
                  v171 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  if ( !dicSquarePutSqareIndex )
                    sub_1B71828(v171, v171);
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__object___ContainsKey(
                                                                                       dicSquarePutSqareIndex,
                                                                                       v171,
                                                                                       (const MethodInfo_31871D8 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allSquare;
                    v173 = (System_Func_object__bool__o *)sub_1B71818(System_Func_WarBoardSquareData__bool__TypeInfo);
                    System_Func_object__bool____ctor(
                      v173,
                      (Il2CppObject *)v142,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                      0LL);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_object__48759088(
                                                                                         allSquare,
                                                                                         (System_Func_TSource__bool__o *)v173,
                                                                                         (const MethodInfo_2E80130 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                    v174 = (WarBoardSquareData_o *)ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v175 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                      v176 = (WarBoardAIRoute_TargetData_o *)sub_1B71818(WarBoardAIRoute_TargetData_TypeInfo);
                      WarBoardAIRoute_TargetData___ctor_35106700(v176, v174, v175, v141, 0LL);
                      v177 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v217->fields.dicSquarePutSqareIndex;
                      v178 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                      if ( !v177 )
                        sub_1B71828(v178, v178);
                      System_Collections_Generic_Dictionary_long__object___Add(
                        v177,
                        v178,
                        (Il2CppObject *)v176,
                        (const MethodInfo_3186FE4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                    }
                  }
                }
              }
              LODWORD(v139) = conditionTypes->max_length;
              if ( (__int64)++v140 >= (int)v139 )
                goto LABEL_137;
              continue;
            }
          }
        }
        v179 = *(_QWORD *)v211;
        v180 = *(unsigned __int16 *)(*(_QWORD *)v211 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v211 + 302LL) )
        {
          v181 = (int *)(*(_QWORD *)(v179 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v181 - 1) != System_IDisposable_TypeInfo )
          {
            --v180;
            v181 += 4;
            if ( !v180 )
              goto LABEL_143;
          }
          v182 = v211;
          v183 = v179 + 16LL * *v181 + 312;
        }
        else
        {
LABEL_143:
          v182 = v211;
          v183 = sub_1BC35AC(v211, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v183)(v182, *(_QWORD *)(v183 + 8));
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.aiTargetCacher;
        if ( !Instance )
          goto LABEL_223;
        WarBoardAiTargetCacher__ClearTargetObject((WarBoardAiTargetCacher_o *)Instance, 0LL);
        v184 = this->fields.aiTargetCacher;
        v185 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v185 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__45_0 = (System_Func_object__bool__o *)v185->static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !v185->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v185);
            v185 = WarBoardAIRoute___c_TypeInfo;
          }
          v187 = (Il2CppObject *)v185->static_fields->__9;
          _9__45_0 = (System_Func_object__bool__o *)sub_1B71818(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__45_0,
            v187,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            0LL);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v189, v190);
        }
        v191 = System_Linq_Enumerable__Where_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_2E99B5C *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_object_(
                                                                              v191,
                                                                              (const MethodInfo_2E93E84 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v184 )
          goto LABEL_223;
        WarBoardAiTargetCacher__AggregateTargetObject(v184, (IWarBoardObjectData_array *)Instance, 0LL);
        v104 = this;
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
        if ( !Instance )
          goto LABEL_223;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v216,
          (const MethodInfo_31D7978 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
        if ( !Instance )
          goto LABEL_223;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v217,
          (const MethodInfo_31D7978 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isServant(
                                                                              pieceData,
                                                                              0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v192 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_1B71818(WarBoardAIRoute_AdvantagePieceData_TypeInfo);
          WarBoardAIRoute_AdvantagePieceData___ctor(v192, 0LL);
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pieceData->fields._battleServant_k__BackingField;
          if ( !Instance )
            goto LABEL_223;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleServantData__getClassId(
                                                                                (BattleServantData_o *)Instance,
                                                                                0LL);
          v193 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_223;
          v194 = v193->max_length;
          if ( v194 >= 1 )
          {
            v195 = (int)Instance;
            v196 = 0;
            while ( 2 )
            {
              if ( v196 >= v194 )
                goto LABEL_224;
              v197 = &v193->obj.klass + (int)v196;
              v198 = v197[4];
              if ( !v198 )
                goto LABEL_223;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                    (WarBoardPieceData_o *)v197[4],
                                                                                    0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_196;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v198->_1.fields;
              if ( !Instance )
                goto LABEL_223;
              ClassId = BattleServantData__getClassId((BattleServantData_o *)Instance, 0LL);
              if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
              Magnification = SvtClassAttri__getMagnification(v195, ClassId, 0LL);
              v201 = SvtClassAttri__getMagnification(ClassId, v195, 0LL);
              v202 = SvtClassAttri__getMagnification(v195, ClassId, 0LL);
              v203 = SvtClassAttri__getMagnification(ClassId, v195, 0LL);
              if ( Magnification <= 1.0 )
              {
                if ( v201 >= 1.0 )
                  goto LABEL_175;
                if ( !v192 )
                  goto LABEL_223;
              }
              else
              {
                if ( !v192 )
                  goto LABEL_223;
                Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v192->fields.dicAttackAdvantageServant;
                if ( !Instance )
                  goto LABEL_223;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                  (int32_t)v198->_1.element_class,
                  (Il2CppObject *)v198,
                  (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                v192->fields.flagNow |= 0x4000uLL;
                if ( v201 >= 1.0 )
                {
LABEL_175:
                  if ( v202 >= 1.0 )
                  {
                    if ( v203 > 1.0 )
                    {
                      if ( !v192 )
                        goto LABEL_223;
                      goto LABEL_182;
                    }
                  }
                  else
                  {
                    if ( !v192 )
                      goto LABEL_223;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v192->fields.dicAttackDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_223;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v198->_1.element_class,
                      (Il2CppObject *)v198,
                      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v192->fields.flagNow |= 0x8000uLL;
                    if ( v203 <= 1.0 )
                      goto LABEL_184;
LABEL_182:
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v192->fields.dicDefenseDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_223;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v198->_1.element_class,
                      (Il2CppObject *)v198,
                      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v192->fields.flagNow |= 0x20000uLL;
                  }
LABEL_184:
                  if ( Magnification <= 1.0 || v201 >= 1.0 )
                  {
                    if ( v202 < 1.0 && v203 > 1.0 )
                    {
                      if ( !v192 )
                        goto LABEL_223;
LABEL_194:
                      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v192->fields.dicClassDisAdvantageServant;
                      if ( !Instance )
                        goto LABEL_223;
                      System_Collections_Generic_Dictionary_int__object___Add(
                        (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                        (int32_t)v198->_1.element_class,
                        (Il2CppObject *)v198,
                        (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                      v192->fields.flagNow |= 0x2000uLL;
                    }
                  }
                  else
                  {
                    if ( !v192 )
                      goto LABEL_223;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v192->fields.dicClassAdvantageServant;
                    if ( !Instance )
                      goto LABEL_223;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v198->_1.element_class,
                      (Il2CppObject *)v198,
                      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v192->fields.flagNow |= 0x1000uLL;
                    if ( v202 < 1.0 && v203 > 1.0 )
                      goto LABEL_194;
                  }
LABEL_196:
                  v194 = v193->max_length;
                  if ( (int)++v196 >= v194 )
                    goto LABEL_197;
                  continue;
                }
              }
              break;
            }
            Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v192->fields.dicDefenseAdvantageServant;
            if ( !Instance )
              goto LABEL_223;
            System_Collections_Generic_Dictionary_int__object___Add(
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              (int32_t)v198->_1.element_class,
              (Il2CppObject *)v198,
              (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
            v192->fields.flagNow |= 0x10000uLL;
            goto LABEL_175;
          }
LABEL_197:
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
          if ( !Instance )
            goto LABEL_223;
          System_Collections_Generic_Dictionary_uint__object___Add(
            Instance,
            pieceData->fields._uniqueIndex_k__BackingField,
            (Il2CppObject *)v192,
            (const MethodInfo_31D7978 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          v104 = this;
        }
      }
LABEL_199:
      allAllyPiece = v207;
      max_length = v207->max_length;
      v112 = v209 + 1;
      if ( (int)(v209 + 1) >= max_length )
        goto LABEL_221;
    }
    if ( WarBoardPieceData__get_isMaster(pieceData, 0LL) )
    {
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_223;
      v115 = 0;
LABEL_61:
      WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        (WarBoardAIRoute_AIRouteMasterData_o *)Instance,
        v115,
        pieceData,
        0LL);
      goto LABEL_62;
    }
    forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
    v114 = v104->fields.forceId;
LABEL_57:
    if ( forceId_k__BackingField != v114 )
      goto LABEL_62;
    goto LABEL_58;
  }
LABEL_221:
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
  if ( !*p_aiRouteMasterData )
    goto LABEL_223;
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData((WarBoardAIRoute_AIRouteMasterData_o *)Instance, 1, 0LL, 0LL);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(v104, v204);
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

  if ( (byte_4A1D6EF & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&targetSquare);
    this = (WarBoardAIRoute_o *)sub_1B715CC(&WarBoardAIManager_TypeInfo, v6);
    byte_4A1D6EF = 1;
  }
  if ( !alreadyGetItemList )
    sub_1B71828(this, *(_QWORD *)&targetSquare);
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 0;
  }
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
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
    sub_1B71828(v5, routeData);
  v20->fields.isMoveByServantAndDefenseDisAdvantageServantRange = (int)v5;
}


void __fastcall WarBoardAIRoute__Clear(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *v2; // x19
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4A1D6E1 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1B715CC(
                                  &Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__,
                                  method);
    byte_4A1D6E1 = 1;
  }
  allRouteList = v2->fields.allRouteList;
  if ( !allRouteList )
    sub_1B71828(this, method);
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
  int32_t key; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+0h] [xbp-80h] BYREF

  v6 = dicPieceList;
  if ( (byte_4A1D6EE & 1) == 0 )
  {
    sub_1B715CC(&AStarSearch_TypeInfo, *(_QWORD *)&baseRange);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v7);
    sub_1B715CC(&Method_System_Linq_Enumerable_Count_int___, v8);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v11);
    dicPieceList = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_1B715CC(
                                                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                                                                        v12);
    byte_4A1D6EE = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !v6 )
    sub_1B71828(dicPieceList, *(_QWORD *)&baseRange);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_3148C8C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v13 = 3;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v18,
            (const MethodInfo_328E9CC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v18.fields._current.fields.key;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
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
            (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v16 < baseRange )
    {
      v13 = 1;
      break;
    }
    if ( v16 == baseRange )
      v13 = 2;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v18,
    (const MethodInfo_328EAF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
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
  int32_t v9; // w3
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
  int32_t name; // w24
  int32_t v24; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  int32_t v27; // w1
  const MethodInfo_313FD84 *v28; // x3
  int32_t v29; // w2
  struct System_Collections_Generic_Dictionary_int__int__o **v30; // [xsp+0h] [xbp-70h]

  if ( (byte_4A1D6FA & 1) == 0 )
  {
    sub_1B715CC(&AStarSearch_TypeInfo, method);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v2);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v3);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_1B715CC(&Method_System_Linq_Enumerable_Count_int___, v5);
    byte_4A1D6FA = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_313F3C0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v6;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dicOutOfWarningAreaRange, (int32_t)v6, v8, v9);
  allSquare = this->fields.allSquare;
  if ( !allSquare )
LABEL_33:
    sub_1B71828(IsFlag, v11);
  max_length = allSquare->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v30 = &this->fields.dicOutOfWarningAreaRange;
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
            if ( !AStarSearch_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
            v25 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                         0LL,
                                                                         name,
                                                                         v24,
                                                                         0,
                                                                         0LL,
                                                                         0LL);
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__Count_int_(
                                                                            v25,
                                                                            (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
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
          sub_1B71830(IsFlag, v11);
        }
        v20 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        IsFlag = *v30;
        if ( !*v30 )
          goto LABEL_33;
        v27 = (int32_t)v16->_1.name;
        v28 = (const MethodInfo_313FD84 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v29 = v20;
      }
      else
      {
        IsFlag = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v27 = (int32_t)v16->_1.name;
        v28 = (const MethodInfo_313FD84 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
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
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A1D6E7 & 1) == 0 )
  {
    sub_1B715CC(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo, piecePlaceData);
    byte_4A1D6E7 = 1;
  }
  v9 = sub_1B71818(WarBoardAIRoute__CreateRouteData_d__47_TypeInfo);
  WarBoardAIRoute__CreateRouteData_d__47___ctor((WarBoardAIRoute__CreateRouteData_d__47_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_1B71828(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 56), (int32_t)piecePlaceData, v14, v15);
  *(_DWORD *)(v9 + 40) = searchCount;
  *(_QWORD *)(v9 + 48) = routeDataList;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)routeDataList, v16, v17);
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

  if ( (byte_4A1D6FF & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, basePiece);
    this = (WarBoardAIRoute_o *)sub_1B715CC(&WarBoardAIManager_TypeInfo, v7);
    byte_4A1D6FF = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_1B71828(this, basePiece);
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_3155B50 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
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
  WarBoardAIRoute_AdvantagePieceData_o *v7; // x20
  _BOOL8 HasFlag_35104792; // x0
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
  if ( (byte_4A1D6FD & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1B715CC(
                                  &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__,
                                  basePiece);
    byte_4A1D6FD = 1;
  }
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v6->fields.dicUniqueKeyAdvantagePieceData) == 0LL
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_uint__object___get_Item(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                      basePiece->fields._uniqueIndex_k__BackingField,
                                      (const MethodInfo_31D78D8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0LL )
  {
    sub_1B71828(this, basePiece);
  }
  v7 = (WarBoardAIRoute_AdvantagePieceData_o *)this;
  HasFlag_35104792 = WarBoardAIRoute_RouteData__HasFlag_35104792(
                       *(_QWORD *)&this->fields.TEMP_SEARCH_DEPTH,
                       4096LL,
                       0LL);
  if ( HasFlag_35104792 )
    v7->fields.baseCARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)HasFlag_35104792,
                               v7->fields.dicClassAdvantageServant,
                               baseSquareIndex,
                               v9);
  v10 = WarBoardAIRoute_RouteData__HasFlag_35104792(v7->fields.flagNow, 0x2000LL, 0LL);
  if ( v10 )
    v7->fields.baseCDARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v10,
                                v7->fields.dicClassDisAdvantageServant,
                                baseSquareIndex,
                                v11);
  v12 = WarBoardAIRoute_RouteData__HasFlag_35104792(v7->fields.flagNow, 0x4000LL, 0LL);
  if ( v12 )
    v7->fields.baseAARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v12,
                               v7->fields.dicAttackAdvantageServant,
                               baseSquareIndex,
                               v13);
  v14 = WarBoardAIRoute_RouteData__HasFlag_35104792(v7->fields.flagNow, 0x8000LL, 0LL);
  if ( v14 )
    v7->fields.baseADARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v14,
                                v7->fields.dicAttackDisAdvantageServant,
                                baseSquareIndex,
                                v15);
  v16 = WarBoardAIRoute_RouteData__HasFlag_35104792(v7->fields.flagNow, 0x10000LL, 0LL);
  if ( v16 )
    v7->fields.baseDARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v16,
                               v7->fields.dicDefenseAdvantageServant,
                               baseSquareIndex,
                               v17);
  v18 = WarBoardAIRoute_RouteData__HasFlag_35104792(v7->fields.flagNow, 0x20000LL, 0LL);
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

  if ( (byte_4A1D6F9 & 1) == 0 )
  {
    sub_1B715CC(&AStarSearch_TypeInfo, routeDataList);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v11);
    sub_1B715CC(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v12);
    sub_1B715CC(&Method_System_Linq_Enumerable_Count_int___, v13);
    byte_4A1D6F9 = 1;
  }
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v14 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1B71818(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v14,
    (const MethodInfo_31CDDDC *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  allEnemyPiece = this->fields.allEnemyPiece;
  if ( !allEnemyPiece )
    goto LABEL_20;
  max_length = allEnemyPiece->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1B71830(isMaster, v16);
      v20 = allEnemyPiece->m_Items[v19];
      if ( !v20 )
        break;
      nowSquareIndex_k__BackingField = v20->fields._nowSquareIndex_k__BackingField;
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   nowSquareIndex_k__BackingField,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      isMaster = System_Linq_Enumerable__Count_int_(
                   v22,
                   (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v14 )
        break;
      v23 = isMaster;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v14,
        v20->fields._uniqueIndex_k__BackingField,
        isMaster,
        (const MethodInfo_31CE7A0 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
      if ( *servantAndEnemyRange == -1 || v23 < *servantAndEnemyRange )
        *servantAndEnemyRange = v23;
      isMaster = WarBoardPieceData__get_isMaster(v20, 0LL);
      if ( (isMaster & 1) != 0 && (*servantAndEnemyMasterRange == -1 || v23 < *servantAndEnemyMasterRange) )
        *servantAndEnemyMasterRange = v23;
      max_length = allEnemyPiece->max_length;
      if ( (int)++v19 >= max_length )
        return v14;
    }
LABEL_20:
    sub_1B71828(isMaster, v16);
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
  WarBoardAIRoute___c__DisplayClass51_0_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w20
  System_Collections_Generic_IEnumerable_TSource__o *Keys; // x19
  System_Func_int__bool__o *v18; // x20

  if ( (byte_4A1D6EA & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__, piecePlaceData);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B715CC(&Method_System_Linq_Enumerable_Where_int___, v8);
    sub_1B715CC(&System_Func_int__bool__TypeInfo, v9);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__, v10);
    sub_1B715CC(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo, v11);
    byte_4A1D6EA = 1;
  }
  v12 = (WarBoardAIRoute___c__DisplayClass51_0_o *)sub_1B71818(WarBoardAIRoute___c__DisplayClass51_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass51_0___ctor(v12, 0LL);
  if ( !v12
    || (v12->fields.masterSquareIndex = masterSquareIndex, (aiRouteMasterData = this->fields.aiRouteMasterData) == 0LL)
    || !piecePlaceData )
  {
    sub_1B71828(v13, v14);
  }
  masterType = aiRouteMasterData->fields.masterType;
  Keys = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                                piecePlaceData,
                                                                (const MethodInfo_315417C *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  if ( masterType != 1 )
  {
    v18 = (System_Func_int__bool__o *)sub_1B71818(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v18,
      (Il2CppObject *)v12,
      Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      0LL);
    Keys = System_Linq_Enumerable__Where_int_(
             Keys,
             (System_Func_TSource__bool__o *)v18,
             (const MethodInfo_2E99888 *)Method_System_Linq_Enumerable_Where_int___);
  }
  return System_Linq_Enumerable__ToArray_int_(
           Keys,
           (const MethodInfo_2E93CEC *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int32_t v28; // w3
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t defenseArea; // w20
  DefenseAreaData_o *v31; // x19
  const MethodInfo *v32; // x3
  System_Collections_Generic_Dictionary_int__object__o *v33; // x20
  WarBoardAIManager_c *v34; // x0
  char v35; // w10
  bool v36; // w8
  bool IsDetour; // w25
  int32_t key; // w26
  Il2CppObject *value; // x27
  System_Int32_array *v40; // x28
  __int64 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w25
  __int64 v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x2
  int32_t MasterAndEnemyRange_k__BackingField; // w8
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x3
  BalanceConfig_c *v51; // x0
  System_Func_int__bool__o *klass; // x28
  int32_t v53; // w2
  int32_t v54; // w3
  const MethodInfo *v55; // x2
  __int64 v56; // x8
  __int64 v57; // x21
  const MethodInfo *v58; // x2
  BalanceConfig_c *v59; // x0
  __int64 v60; // x8
  Il2CppObject *object; // [xsp+0h] [xbp-E0h]
  ServantStatusBattleListViewItem_o *v63; // [xsp+8h] [xbp-D8h]
  bool v65; // [xsp+1Ch] [xbp-C4h]
  char v66; // [xsp+20h] [xbp-C0h]
  bool v67; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v68; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v69; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4A1D6EB & 1) == 0 )
  {
    sub_1B715CC(&AStarSearch_TypeInfo, *(_QWORD *)&masterSquareIndex);
    sub_1B715CC(&BalanceConfig_TypeInfo, v8);
    sub_1B715CC(&DefenseAreaData_TypeInfo, v9);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v12);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v13);
    sub_1B715CC(&Method_System_Linq_Enumerable_Count_int___, v14);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v17);
    sub_1B715CC(&System_Func_int__bool__TypeInfo, v18);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v19);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__, v20);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__, v21);
    sub_1B715CC(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo, v22);
    sub_1B715CC(&WarBoardAIManager_TypeInfo, v23);
    byte_4A1D6EB = 1;
  }
  memset(&v69, 0, sizeof(v69));
  v24 = sub_1B71818(WarBoardAIRoute___c__DisplayClass52_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass52_0___ctor((WarBoardAIRoute___c__DisplayClass52_0_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_52;
  *(_QWORD *)(v24 + 16) = piecePlaceData;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)piecePlaceData, v27, v28);
  npcData = this->fields.npcData;
  if ( !npcData )
    goto LABEL_52;
  defenseArea = npcData->fields.defenseArea;
  v31 = (DefenseAreaData_o *)sub_1B71818(DefenseAreaData_TypeInfo);
  DefenseAreaData___ctor(v31, masterSquareIndex, defenseArea, v32);
  v33 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v33,
    (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  if ( !byte_4A1D70E )
  {
    sub_1B715CC(&WarBoardAIManager_TypeInfo, v26);
    byte_4A1D70E = 1;
  }
  v34 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v34 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v34->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v68,
    dicSquareIndexEnemyPiece,
    (const MethodInfo_3148C8C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v35 = 0;
  object = (Il2CppObject *)v24;
  v63 = (ServantStatusBattleListViewItem_o *)(v24 + 24);
  v36 = 1;
  IsDetour = 1;
  v69 = v68;
LABEL_13:
  v65 = v36;
LABEL_14:
  v66 = v35;
  v67 = IsDetour;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v69,
            (const MethodInfo_328E9CC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v69.fields._current.fields.key;
    value = v69.fields._current.fields.value;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v40 = AStarSearch__RouteSearch(0LL, masterSquareIndex, key, 0, 0LL, 0LL);
    v41 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v40,
            (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v33 )
      sub_1B71828(v41, v42);
    v43 = v41;
    System_Collections_Generic_Dictionary_int__object___Add(
      v33,
      key,
      &v40->obj,
      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v31 )
      sub_1B71828(v44, v45);
    MasterAndEnemyRange_k__BackingField = v31->fields._MasterAndEnemyRange_k__BackingField;
    if ( MasterAndEnemyRange_k__BackingField == -1 || MasterAndEnemyRange_k__BackingField > v43 )
      v31->fields._MasterAndEnemyRange_k__BackingField = v43;
    if ( DefenseAreaData__IsInDefenseArea(v31, key, v46) )
    {
      v51 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v51 = BalanceConfig_TypeInfo;
      }
      if ( !v51->static_fields->IsEnableOldBlockShortestRoute )
      {
        if ( !v40 )
          sub_1B71828(v51, v48);
        if ( (int)v40->max_length >= 2 )
          DefenseAreaData__SetComparisonAllMasterAndEnemyRange(v31, v40->m_Items[2], v43, v50);
      }
      IsDetour = 0;
      v35 = 1;
      if ( v67 )
      {
        IsDetour = WarBoardAIRoute__IsDetour(v40, allyPieces, v49);
        v36 = 0;
        v35 = 1;
        if ( v65 )
        {
          klass = (System_Func_int__bool__o *)v63->klass;
          if ( !v63->klass )
          {
            klass = (System_Func_int__bool__o *)sub_1B71818(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              klass,
              object,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              0LL);
            v63->klass = (ServantStatusBattleListViewItem_c *)klass;
            sub_1B71570(v63, (int32_t)klass, v53, v54);
          }
          if ( !AStarSearch_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          v36 = AStarSearch__RouteSearch((WarBoardPieceData_o *)value, key, masterSquareIndex, 0, klass, 0LL) == 0LL;
          v35 = 1;
        }
        goto LABEL_13;
      }
      goto LABEL_14;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v69,
    (const MethodInfo_328EAF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  v56 = 1025LL;
  if ( (v66 & 1) == 0 )
    v56 = 1LL;
  v57 = v67 ? v56 | 0x2000000000LL : v56;
  if ( !v31 )
LABEL_52:
    sub_1B71828(dicSquareIndexEnemyPiece, v26);
  DefenseAreaData__CreateShortestRoutes(v31, (System_Collections_Generic_Dictionary_int__int____o *)v33, v55);
  v59 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v59 = BalanceConfig_TypeInfo;
  }
  if ( !v59->static_fields->IsEnableOldBlockShortestRoute )
    DefenseAreaData__CreateAllShortestRoutes(v31, (System_Collections_Generic_Dictionary_int__int____o *)v33, v58);
  v60 = v57 | 0x10000000000LL;
  if ( !v65 )
    v60 = v57;
  v31->fields._Flag_k__BackingField = v60;
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
  int32_t v30; // w3
  __int64 v31; // x23
  System_Func_object__bool__o *v32; // x24
  _BOOL8 v33; // x0
  __int64 v34; // x1
  int32_t v35; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v40; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+30h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_4A1D6F8 & 1) == 0 )
  {
    sub_1B715CC(&AStarSearch_TypeInfo, basePiece);
    sub_1B715CC(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v9);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__,
      v13);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v14);
    sub_1B715CC(&Method_System_Linq_Enumerable_Count_int___, v15);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__, v18);
    sub_1B715CC(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v19);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__, v20);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__, v21);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__, v22);
    this = (WarBoardAIRoute_o *)sub_1B715CC(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo, v23);
    byte_4A1D6F8 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v8->fields.dicUniqueKeyDesignationItem) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_31D78D8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v25 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__int__TypeInfo),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v25,
          (const MethodInfo_313F3C0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (this = (WarBoardAIRoute_o *)Item[1].klass) == 0LL )
  {
    sub_1B71828(this, basePiece);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v40,
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    (const MethodInfo_3148C8C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v41,
            (const MethodInfo_328E9CC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v26 = sub_1B71818(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo);
    WarBoardAIRoute___c__DisplayClass66_0___ctor((WarBoardAIRoute___c__DisplayClass66_0_o *)v26, 0LL);
    if ( !v26 )
      sub_1B71828(v27, v28);
    v31 = v26 + 24;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v26 + 16) = v41.fields._current;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v26 + 24), 0, v29, v30);
    v32 = (System_Func_object__bool__o *)sub_1B71818(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v32,
      (Il2CppObject *)v26,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      0LL);
    v33 = BasicHelper__Any_object_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v32,
            (const MethodInfo_2E467B0 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    if ( !v33 )
    {
      if ( !*(_QWORD *)v31 )
        sub_1B71828(v33, v34);
      v35 = *(_DWORD *)(*(_QWORD *)v31 + 16LL);
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v36 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   v35,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v37 = System_Linq_Enumerable__Count_int_(
              v36,
              (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v25 )
        sub_1B71828(v37, v38);
      System_Collections_Generic_Dictionary_int__int___Add(
        v25,
        *(_DWORD *)(v26 + 16),
        v37,
        (const MethodInfo_313FD84 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v41,
    (const MethodInfo_328EAF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v25;
}


WarBoardEvalValueSquare_EvalValueSquare_o *__fastcall WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4A1D6EC & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1B715CC(
                                  &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__,
                                  evalValueSquareList);
    byte_4A1D6EC = 1;
  }
  if ( !evalValueSquareList )
    sub_1B71828(this, evalValueSquareList);
  return (WarBoardEvalValueSquare_EvalValueSquare_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_int__object__o *)evalValueSquareList,
                                                        index,
                                                        (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
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

  if ( (byte_4A1D700 & 1) == 0 )
  {
    sub_1B715CC(&SvtClassAttri_TypeInfo, *(_QWORD *)&baseClassId);
    byte_4A1D700 = 1;
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
  if ( WarBoardAIRoute_RouteData__HasFlag_35104792(v8, 0x80000LL, 0LL)
    && WarBoardAIRoute_RouteData__HasFlag_35104792(v8, 0x100000LL, 0LL) )
  {
    v8 |= 0x40000uLL;
  }
  if ( !WarBoardAIRoute_RouteData__HasFlag_35104792(v8, 0x400000LL, 0LL) )
    return v8;
  if ( WarBoardAIRoute_RouteData__HasFlag_35104792(v8, 0x800000LL, 0LL) )
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
  struct System_Int32_array *linkedSquares; // x29
  __int64 v15; // x8
  const MethodInfo_3155B50 **v16; // x26
  unsigned __int64 v17; // x19
  __int64 v18; // x23
  int32_t v19; // w24
  const MethodInfo *v20; // x2
  WarBoardPieceData_o *v21; // x25
  const MethodInfo_3155B50 **v22; // x29
  __int64 v23; // x26
  int32_t v24; // w22
  int32_t v25; // w27
  int32_t ClassId; // w28
  float Magnification; // s0
  uint32_t v28; // w24
  const MethodInfo *v29; // x2
  WarBoardAIRoute_o *v30; // x24
  WarBoardAIRoute_o *v32; // [xsp+8h] [xbp-88h]
  struct System_Int32_array *v33; // [xsp+10h] [xbp-80h]
  int32_t *v34; // [xsp+18h] [xbp-78h]
  uint32_t value; // [xsp+2Ch] [xbp-64h] BYREF

  v10 = this;
  if ( (byte_4A1D6FC & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, baseSquare);
    sub_1B715CC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1B715CC(&SvtClassAttri_TypeInfo, v12);
    this = (WarBoardAIRoute_o *)sub_1B715CC(&WarBoardAIManager_TypeInfo, v13);
    byte_4A1D6FC = 1;
  }
  value = 0;
  if ( !baseSquare )
    goto LABEL_48;
  linkedSquares = baseSquare->fields.linkedSquares;
  if ( !linkedSquares )
    goto LABEL_48;
  v15 = *(_QWORD *)&linkedSquares->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = (const MethodInfo_3155B50 **)&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__;
    v17 = 0LL;
    v18 = 1LL;
    v33 = linkedSquares;
    v34 = &linkedSquares->m_Items[1];
    v32 = v10;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v15 )
        sub_1B71830(this, baseSquare);
      v19 = v34[v17];
      this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_35164264((WarBoardData_o *)this, v19, 0LL);
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
        if ( WarBoardPieceData__get_isServant(basePiece, 0LL) || WarBoardPieceData__get_isMaster(v21, 0LL) )
        {
          v22 = v16;
          v23 = v18 | 0x10;
          if ( WarBoardPieceData__get_isServant(v21, 0LL)
            && !WarBoardAIRoute_RouteData__HasFlag_35104792(v18 | 0x10, 0x1000000LL, 0LL) )
          {
            this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
            if ( !this )
              break;
            v24 = masterSquareIndex;
            this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
            if ( !v21->fields._battleServant_k__BackingField )
              break;
            v25 = (int)this;
            ClassId = BattleServantData__getClassId(v21->fields._battleServant_k__BackingField, 0LL);
            if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            Magnification = SvtClassAttri__getMagnification(v25, ClassId, 0LL);
            masterSquareIndex = v24;
            v10 = v32;
            if ( Magnification > 1.0 )
              v23 = v18 | 0x1000010;
          }
          if ( WarBoardPieceData__get_isMaster(v21, 0LL) )
            v18 = v23 | 0x20;
          else
            v18 = v23;
          v16 = v22;
          linkedSquares = v33;
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
      if ( ((v19 == masterSquareIndex) & ((unsigned int)this ^ 1)) != 0 )
        v18 |= 0x400000000uLL;
      if ( !piecePlaceData )
        break;
      this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_int__uint___TryGetValue(
                                    piecePlaceData,
                                    v19,
                                    &value,
                                    *v16);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v28 = value;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        this = (WarBoardAIRoute_o *)WarBoardAIManager__GetPieceUnique(v28, (const MethodInfo *)baseSquare);
        if ( basePiece->fields._uniqueIndex_k__BackingField != value )
        {
          v30 = this;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
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
      if ( (__int64)++v17 >= (int)v15 )
        return v18;
    }
LABEL_48:
    sub_1B71828(this, baseSquare);
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

  if ( (byte_4A1D6FB & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&baseSquareIndex);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    byte_4A1D6FB = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0LL) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_313FF70 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          actionSquareIndex,
          (const MethodInfo_313FF70 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                    dicOutOfWarningAreaRange,
                                                                                    baseSquareIndex,
                                                                                    (const MethodInfo_313FCE8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( (int)dicOutOfWarningAreaRange > System_Collections_Generic_Dictionary_int__int___get_Item(
                                         this->fields.dicOutOfWarningAreaRange,
                                         actionSquareIndex,
                                         (const MethodInfo_313FCE8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange
    || (dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                          dicOutOfWarningAreaRange,
                                                                                          baseSquareIndex,
                                                                                          (const MethodInfo_313FCE8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v11 = this->fields.dicOutOfWarningAreaRange) == 0LL) )
  {
LABEL_18:
    sub_1B71828(dicOutOfWarningAreaRange, v8);
  }
  if ( (_DWORD)dicOutOfWarningAreaRange == System_Collections_Generic_Dictionary_int__int___get_Item(
                                             v11,
                                             actionSquareIndex,
                                             (const MethodInfo_313FCE8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
  if ( (byte_4A1D6E9 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, piecePlaceData);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v8);
    this = (WarBoardAIRoute_o *)sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v9);
    byte_4A1D6E9 = 1;
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
        (const MethodInfo_3154890 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
      *(_OWORD *)&v18.fields._dictionary = v17[0];
      v18.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v17[1];
      while ( 1 )
      {
        v13 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                &v18,
                (const MethodInfo_329121C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
        if ( !v13 )
          break;
        v15 = v4->fields.aiRouteMasterData;
        if ( !v15 )
          sub_1B71828(v13, v14);
        key = (int32_t)v18.fields._current.fields.key;
        if ( v15->fields.masterUniqueIndex == HIDWORD(v18.fields._current.fields.key) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
            &v18,
            (const MethodInfo_329131C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
          return key;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
        &v18,
        (const MethodInfo_329131C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
      return 0;
    }
LABEL_18:
    sub_1B71828(this, piecePlaceData);
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
  if ( (byte_4A1D704 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____, piecePlaceData);
    sub_1B715CC(&System_Func_KeyValuePair_int__uint___bool__TypeInfo, v5);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v6);
    this = (WarBoardAIRoute_o *)sub_1B715CC(&Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__, v7);
    byte_4A1D704 = 1;
  }
  klass = v4[13].klass;
  if ( !klass )
    sub_1B71828(this, piecePlaceData);
  if ( LODWORD(klass->_1.name) == 1 )
    return HIDWORD(klass->_1.name);
  v10 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_1B71818(System_Func_KeyValuePair_int__uint___bool__TypeInfo);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v10,
    v4,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_2E7FA68 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
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
  Il2CppObject *currentValue; // x24
  WarBoardPieceData_o *monitor; // x22
  int32_t v20; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  int32_t v22; // w22
  int32_t v23; // w0
  int32_t v24; // w2
  int v25; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x22
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  int32_t v28; // w23
  int32_t v29; // w0
  int v30; // w8
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v33; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A1D706 & 1) == 0 )
  {
    sub_1B715CC(&AStarSearch_TypeInfo, dicKeyPutIndexValueTargetData);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__, v8);
    sub_1B715CC(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v10);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v11);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v12);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__,
      v13);
    this = (WarBoardAIRoute_o *)sub_1B715CC(&WarBoardAIManager_TypeInfo, v14);
    byte_4A1D706 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !dicKeyPutIndexValueTargetData
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_long__object___get_Values(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicKeyPutIndexValueTargetData,
                                      (const MethodInfo_3186DF4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0LL )
  {
    sub_1B71828(this, dicKeyPutIndexValueTargetData);
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__object___GetEnumerator(
    &v32,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_37DA97C *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v15 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___MoveNext(
            &v33,
            (const MethodInfo_3296FE8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v15 )
      break;
    currentValue = v33.fields._currentValue;
    if ( !v33.fields._currentValue )
      sub_1B71828(v15, v16);
    monitor = (WarBoardPieceData_o *)v33.fields._currentValue[1].monitor;
    if ( !monitor || LODWORD(v33.fields._currentValue[4].monitor) != actionSquareIndex )
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
      v20 = (int32_t)currentValue[4].monitor;
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v20,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v22 = System_Linq_Enumerable__Count_int_(
              v21,
              (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
      v23 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
      v24 = (int32_t)currentValue[4].monitor;
      if ( v22 == v23 )
        v25 = 2;
      else
        v25 = 3;
      if ( v22 < v23 )
        v25 = 1;
      LODWORD(currentValue[4].klass) = v25;
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v24,
                                                                   1,
                                                                   0LL,
                                                                   0LL);
      if ( v26 && (klass = (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[6].klass) != 0LL )
      {
        v28 = System_Linq_Enumerable__Count_int_(
                klass,
                (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
        v29 = System_Linq_Enumerable__Count_int_(
                v26,
                (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
        if ( v29 >= v28 )
        {
          if ( v29 == v28 )
            v30 = 2;
          else
            v30 = 3;
        }
        else
        {
          v30 = 1;
        }
      }
      else
      {
        v30 = 0;
      }
      HIDWORD(currentValue[4].klass) = v30;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___Dispose(
    &v33,
    (const MethodInfo_3296FE4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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
  int32_t key; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  int32_t v15; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+0h] [xbp-80h] BYREF

  if ( (byte_4A1D6ED & 1) == 0 )
  {
    sub_1B715CC(&AStarSearch_TypeInfo, dicPieceList);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v6);
    sub_1B715CC(&Method_System_Linq_Enumerable_Count_int___, v7);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v10);
    this = (WarBoardAIRoute_o *)sub_1B715CC(
                                  &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                  v11);
    byte_4A1D6ED = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !dicPieceList )
    sub_1B71828(this, dicPieceList);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__object__o *)dicPieceList,
    (const MethodInfo_3148C8C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v12 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v18,
            (const MethodInfo_328E9CC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v18.fields._current.fields.key;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
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
            (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v12 > v15 || v12 == -1 )
      v12 = v15;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v18,
    (const MethodInfo_328EAF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
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
  int32_t type_k__BackingField; // w9
  int32_t *v29; // x9
  uint32_t uniqueIndex_k__BackingField; // w24
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4A1D6E8 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__, routeDataList);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__, v13);
    sub_1B715CC(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v18);
    byte_4A1D6E8 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  value = 0;
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  v19 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1B71818(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v19,
    (const MethodInfo_31CDDDC *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_1B71828(v20, v21);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)routeDataList,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v22 )
      break;
    current = (WarBoardAIRoute_RouteData_o *)v33.fields._current;
    if ( !v33.fields._current )
      sub_1B71828(v22, v23);
    if ( !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v33.fields._current, 0LL) )
    {
      value = 0;
      HasFlag = WarBoardAIRoute_RouteData__HasFlag(current, 0x4000000LL, 0LL);
      basePiece = current->fields.basePiece;
      if ( !HasFlag )
      {
        if ( !basePiece )
          sub_1B71828(HasFlag, v26);
        if ( basePiece->fields._type_k__BackingField == 1 )
          v29 = masterActionCount;
        else
          v29 = actionCount;
        goto LABEL_21;
      }
      if ( !basePiece )
        sub_1B71828(HasFlag, v26);
      type_k__BackingField = basePiece->fields._type_k__BackingField;
      basePiece = current->fields.actionPiece;
      if ( type_k__BackingField != 1 )
      {
        if ( !basePiece )
          sub_1B71828(HasFlag, v26);
        if ( basePiece->fields._type_k__BackingField == 1 )
          v29 = masterReplaceCount;
        else
          v29 = replaceCount;
LABEL_21:
        ++*v29;
        goto LABEL_22;
      }
      ++*masterReplaceCount;
      if ( !basePiece )
        sub_1B71828(HasFlag, v26);
LABEL_22:
      if ( !v19 )
        sub_1B71828(HasFlag, v26);
      uniqueIndex_k__BackingField = basePiece->fields._uniqueIndex_k__BackingField;
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v19,
        uniqueIndex_k__BackingField,
        &value,
        (const MethodInfo_31CFE38 *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v19,
        uniqueIndex_k__BackingField,
        value + 1,
        (const MethodInfo_31CE78C *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
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
  int32_t v13; // w3
  System_Func_object__int__o *v14; // x20

  if ( (byte_4A1D707 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____75894160, routeDataList);
    sub_1B715CC(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo, v6);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__, v7);
    sub_1B715CC(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo, v8);
    byte_4A1D707 = 1;
  }
  v9 = sub_1B71818(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass84_0___ctor((WarBoardAIRoute___c__DisplayClass84_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1B71828(v10, v11);
  *(_QWORD *)(v9 + 16) = targetPiece;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)targetPiece, v12, v13);
  v14 = (System_Func_object__int__o *)sub_1B71818(System_Func_WarBoardAIRoute_RouteData__int__TypeInfo);
  System_Func_object__int____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    0LL);
  return System_Linq_Enumerable__Sum_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v14,
           (const MethodInfo_2E92A04 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____75894160);
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
  __int64 v26; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+30h] [xbp-90h] BYREF

  v12 = this;
  if ( (byte_4A1D6F5 & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__,
      dicPutSquareIndex);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__, v13);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v14);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v15);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v16);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v18);
    this = (WarBoardAIRoute_o *)sub_1B715CC(&WarBoardAIRoute_TargetData_TypeInfo, v19);
    byte_4A1D6F5 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !dicPutSquareIndex )
    sub_1B71828(this, dicPutSquareIndex);
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicPutSquareIndex,
    (const MethodInfo_3187418 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v20 = System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v28,
            (const MethodInfo_3296988 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v20 )
      break;
    key = v28.fields._current.fields.key;
    value = v28.fields._current.fields.value;
    if ( excludeCond )
    {
      if ( !v28.fields._current.fields.value )
        sub_1B71828(v20, v21);
      if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, void *, _QWORD))excludeCond->fields.m_target)(
              excludeCond->fields.original_method_info,
              v28.fields._current.fields.value[3].monitor,
              *(_QWORD *)&excludeCond->fields.extra_arg) & 1) != 0 )
        continue;
    }
    allEnemyPiece = v12->fields.allEnemyPiece;
    v25 = (WarBoardAIRoute_TargetData_o *)sub_1B71818(WarBoardAIRoute_TargetData_TypeInfo);
    WarBoardAIRoute_TargetData___ctor_35107360(
      v25,
      (WarBoardAIRoute_TargetData_o *)value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      0LL);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_1B71828(0LL, v26);
    System_Collections_Generic_Dictionary_long__object___Add(
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
      (int64_t)key,
      (Il2CppObject *)v25,
      (const MethodInfo_3186FE4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v28,
    (const MethodInfo_3296AA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Generic_Dictionary_int__object__o *v44; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x19
  __int64 v46; // x1
  WarBoardAiTargetCacher_o *aiTargetCacher; // x0
  Il2CppObject *key; // x25
  Il2CppObject *value; // x26
  __int64 TargetDetectorId; // x0
  __int64 v51; // x1
  int32_t v52; // w27
  __int64 v53; // x1
  Il2CppObject *Item; // x29
  WarBoardAiTargetCacher_o *v55; // x0
  IWarBoardObjectData_array *TargetObjectsByTrendId; // x0
  IWarBoardObjectData_array *v57; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x29
  System_Func_object__bool__o *klass; // x23
  int32_t v60; // w2
  int32_t v61; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x29
  System_Func_object__int__o *v63; // x23
  int32_t v64; // w2
  int32_t v65; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v66; // x0
  WarBoardAIRoute___c_c *v67; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v68; // x29
  System_Func_object__int__o *_9__64_2; // x23
  Il2CppObject *v70; // x24
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v74; // x0
  WarBoardAIRoute___c_c *v75; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v76; // x29
  System_Func_object__int__o *_9__64_3; // x23
  Il2CppObject *v78; // x24
  struct WarBoardAIRoute___c_StaticFields *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  __int64 v83; // x1
  WarBoardPieceData_o *v84; // x27
  int32_t v85; // w28
  WarBoardPieceData_array *allEnemyPiece; // x24
  WarBoardAIRoute_TargetData_o *v87; // x23
  __int64 v88; // x1
  ServantStatusBattleListViewItem_o *v89; // [xsp+0h] [xbp-D0h]
  ServantStatusBattleListViewItem_o *v90; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v92; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v93; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4A1D6F6 & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__,
      dicIndividualityPutSqareIndex);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__, v17);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo, v18);
    sub_1B715CC(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___, v19);
    sub_1B715CC(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___, v20);
    sub_1B715CC(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___, v21);
    sub_1B715CC(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v22);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v23);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v24);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v25);
    sub_1B715CC(&System_Func_IWarBoardObjectData__bool__TypeInfo, v26);
    sub_1B715CC(&System_Func_IWarBoardObjectData__int__TypeInfo, v27);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v28);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v29);
    sub_1B715CC(&WarBoardAIRoute_TargetData_TypeInfo, v30);
    sub_1B715CC(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__, v31);
    sub_1B715CC(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__, v32);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__, v33);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__, v34);
    sub_1B715CC(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo, v35);
    sub_1B715CC(&WarBoardAIRoute___c_TypeInfo, v36);
    byte_4A1D6F6 = 1;
  }
  memset(&v93, 0, sizeof(v93));
  v37 = sub_1B71818(WarBoardAIRoute___c__DisplayClass64_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass64_0___ctor((WarBoardAIRoute___c__DisplayClass64_0_o *)v37, 0LL);
  if ( !v37
    || (*(_QWORD *)(v37 + 16) = excludeCond,
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v37 + 16), (int32_t)excludeCond, v40, v41),
        *(_QWORD *)(v37 + 24) = basePiece,
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v37 + 24), (int32_t)basePiece, v42, v43),
        *(_DWORD *)(v37 + 32) = baseSquareIndex,
        v44 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo),
        System_Collections_Generic_Dictionary_int__object____ctor(
          v44,
          (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__),
        !dicIndividualityPutSqareIndex) )
  {
    sub_1B71828(v38, v39);
  }
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v92,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicIndividualityPutSqareIndex,
    (const MethodInfo_3187418 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v93 = v92;
  v45 = 0LL;
  v89 = (ServantStatusBattleListViewItem_o *)(v37 + 48);
  v90 = (ServantStatusBattleListViewItem_o *)(v37 + 40);
  while ( System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v93,
            (const MethodInfo_3296988 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_1B71828(0LL, v46);
    key = v93.fields._current.fields.key;
    value = v93.fields._current.fields.value;
    TargetDetectorId = WarBoardAiTargetCacher__GetTargetDetectorId(
                         aiTargetCacher,
                         (int64_t)v93.fields._current.fields.key,
                         0LL);
    if ( !v44 )
      sub_1B71828(TargetDetectorId, v51);
    v52 = TargetDetectorId;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           v44,
           TargetDetectorId,
           (const MethodInfo_3148A48 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               v44,
               v52,
               (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    }
    else
    {
      v55 = this->fields.aiTargetCacher;
      if ( !v55 )
        sub_1B71828(0LL, v53);
      TargetObjectsByTrendId = WarBoardAiTargetCacher__GetTargetObjectsByTrendId(v55, (int64_t)key, 0LL);
      v57 = TargetObjectsByTrendId;
      if ( TargetObjectsByTrendId )
        v58 = (System_Collections_Generic_IEnumerable_TSource__o *)TargetObjectsByTrendId;
      else
        v58 = v45;
      if ( TargetObjectsByTrendId )
      {
        klass = (System_Func_object__bool__o *)v90->klass;
        if ( !v90->klass )
        {
          klass = (System_Func_object__bool__o *)sub_1B71818(System_Func_IWarBoardObjectData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            klass,
            (Il2CppObject *)v37,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
            0LL);
          v90->klass = (ServantStatusBattleListViewItem_c *)klass;
          sub_1B71570(v90, (int32_t)klass, v60, v61);
        }
        v62 = System_Linq_Enumerable__Where_object_(
                v58,
                (System_Func_TSource__bool__o *)klass,
                (const MethodInfo_2E99B5C *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        v63 = (System_Func_object__int__o *)v89->klass;
        if ( !v89->klass )
        {
          v63 = (System_Func_object__int__o *)sub_1B71818(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            v63,
            (Il2CppObject *)v37,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
            0LL);
          v89->klass = (ServantStatusBattleListViewItem_c *)v63;
          sub_1B71570(v89, (int32_t)v63, v64, v65);
        }
        v66 = System_Linq_Enumerable__OrderBy_object__int_(
                v62,
                (System_Func_TSource__TKey__o *)v63,
                (const MethodInfo_2E8590C *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
        v67 = WarBoardAIRoute___c_TypeInfo;
        v68 = v66;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v67 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_2 = (System_Func_object__int__o *)v67->static_fields->__9__64_2;
        if ( !_9__64_2 )
        {
          if ( !v67->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v67);
            v67 = WarBoardAIRoute___c_TypeInfo;
          }
          v70 = (Il2CppObject *)v67->static_fields->__9;
          _9__64_2 = (System_Func_object__int__o *)sub_1B71818(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__64_2,
            v70,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
            0LL);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__64_2, (int32_t)_9__64_2, v72, v73);
        }
        v74 = System_Linq_Enumerable__ThenBy_object__int_(
                v68,
                (System_Func_TSource__TKey__o *)_9__64_2,
                (const MethodInfo_2E93318 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        v75 = WarBoardAIRoute___c_TypeInfo;
        v76 = v74;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v75 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_3 = (System_Func_object__int__o *)v75->static_fields->__9__64_3;
        if ( !_9__64_3 )
        {
          if ( !v75->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v75);
            v75 = WarBoardAIRoute___c_TypeInfo;
          }
          v78 = (Il2CppObject *)v75->static_fields->__9;
          _9__64_3 = (System_Func_object__int__o *)sub_1B71818(System_Func_IWarBoardObjectData__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__64_3,
            v78,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
            0LL);
          v79 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v79->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v79->__9__64_3, (int32_t)_9__64_3, v80, v81);
        }
        v82 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                     v76,
                                                                     (System_Func_TSource__TKey__o *)_9__64_3,
                                                                     (const MethodInfo_2E93318 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        Item = System_Linq_Enumerable__FirstOrDefault_object_(
                 v82,
                 (const MethodInfo_2E7F0E0 *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
        v45 = (System_Collections_Generic_IEnumerable_TSource__o *)v57;
      }
      else
      {
        Item = 0LL;
      }
    }
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v44,
      v52,
      Item,
      (const MethodInfo_3148840 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( Item )
    {
      v84 = *(WarBoardPieceData_o **)(v37 + 24);
      v85 = *(_DWORD *)(v37 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v87 = (WarBoardAIRoute_TargetData_o *)sub_1B71818(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_35108392(
        v87,
        (WarBoardAIRoute_TargetData_o *)value,
        (IWarBoardObjectData_o *)Item,
        v84,
        v85,
        allEnemyPiece,
        0LL);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1B71828(0LL, v88);
      System_Collections_Generic_Dictionary_long__object___Add(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)key,
        (Il2CppObject *)v87,
        (const MethodInfo_3186FE4 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1B71828(0LL, v83);
      System_Collections_Generic_Dictionary_long__object___Remove(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)key,
        (const MethodInfo_3188458 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v93,
    (const MethodInfo_3296AA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetTargetToDistance_35093476(
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
  int32_t v18; // w3
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

  if ( (byte_4A1D6F7 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__, basePiece);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__, v9);
    sub_1B715CC(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v10);
    sub_1B715CC(&System_Func_IWarBoardObjectData__bool__TypeInfo, v11);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__, v12);
    sub_1B715CC(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo, v13);
    byte_4A1D6F7 = 1;
  }
  v14 = sub_1B71818(WarBoardAIRoute___c__DisplayClass65_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass65_0___ctor((WarBoardAIRoute___c__DisplayClass65_0_o *)v14, 0LL);
  if ( !v14
    || (*(_QWORD *)(v14 + 16) = routeDataList,
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)routeDataList, v17, v18),
        !basePiece)
    || (dicUniqueKeyTarget = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 dicUniqueKeyTarget,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_31D78D8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v20 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B71818(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo),
        System_Collections_Generic_Dictionary_long__object____ctor(
          v20,
          (const MethodInfo_3186614 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v20,
        !Item) )
  {
    sub_1B71828(dicUniqueKeyTarget, v16);
  }
  monitor = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].monitor;
  v22 = (System_Func_object__bool__o *)sub_1B71818(System_Func_IWarBoardObjectData__bool__TypeInfo);
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
  v25 = (System_Func_object__bool__o *)sub_1B71818(System_Func_IWarBoardObjectData__bool__TypeInfo);
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
    sub_1B71828(this, method);
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
  if ( (byte_4A1D6FE & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1B715CC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, basePiece);
    byte_4A1D6FE = 1;
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
    this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
      return SHIDWORD(this[3].fields.allSquare) >= v13 + requiredCost;
LABEL_13:
    sub_1B71828(this, basePiece);
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
  int32_t v21; // w3
  WarBoardPieceData_o **v22; // x25
  bool v23; // w8
  const MethodInfo *v24; // x3
  int32_t RouteSumPieceActionCost; // w23
  System_Func_object__bool__o *v26; // x21
  __int64 v27; // x8

  if ( (byte_4A1D702 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, basePiece);
    sub_1B715CC(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v13);
    sub_1B715CC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__, v15);
    sub_1B715CC(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo, v16);
    byte_4A1D702 = 1;
  }
  v17 = sub_1B71818(WarBoardAIRoute___c__DisplayClass76_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass76_0___ctor((WarBoardAIRoute___c__DisplayClass76_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_25;
  *(_QWORD *)(v17 + 16) = actionPiece;
  v22 = (WarBoardPieceData_o **)(v17 + 16);
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)actionPiece, v20, v21);
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
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < this->fields.moveCost
                                                               + requiredCost
                                                               + this->fields.masterMoveCost )
      goto LABEL_23;
  }
  else
  {
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B71828(Instance, v19);
  if ( !WarBoardPieceData__get_isInfinitelyActable(Instance, 0LL) )
  {
    v26 = (System_Func_object__bool__o *)sub_1B71818(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v26,
      (Il2CppObject *)v17,
      Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
      0LL);
    Instance = (WarBoardPieceData_o *)System_Linq_Enumerable__Count_object__48732792(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
                                        (System_Func_TSource__bool__o *)v26,
                                        (const MethodInfo_2E79A78 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
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
  Il2CppObject *current; // x21
  void *monitor; // x9
  __int64 v17; // x26
  __int64 v18; // x28
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-80h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4A1D6F4 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, piecePlaceData);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v9);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1B715CC(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v10);
    byte_4A1D6F4 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !v6 )
    sub_1B71828(shortestEnemyRoute, piecePlaceData);
  v11 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v12 = 0;
  v21 = v20;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1B71828(v13, v14);
    monitor = v21.fields._current[1].monitor;
    if ( (int)monitor - 1 <= (int)v11 )
    {
LABEL_16:
      v12 = 0;
      break;
    }
    if ( (unsigned int)v21.fields._current[1].monitor <= (unsigned __int64)v11 )
LABEL_18:
      sub_1B71830(v13, v14);
    v17 = (unsigned int)((_DWORD)monitor - 1) - 1LL;
    v18 = v11;
    while ( 1 )
    {
      if ( !piecePlaceData )
        sub_1B71828(v13, v14);
      v13 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
              piecePlaceData,
              *((_DWORD *)&current[2].klass + v18),
              (const MethodInfo_31546A4 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( v13 )
        break;
      if ( v17 == v18 )
        goto LABEL_16;
      if ( ++v18 >= (unsigned __int64)LODWORD(current[1].monitor) )
        goto LABEL_18;
    }
    v12 = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4A1D6F1 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    byte_4A1D6F1 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !defenseArea )
    sub_1B71828(v7, *(_QWORD *)&index);
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
  unsigned int monitor; // w10
  unsigned int v23; // w9
  int v24; // w11
  int v25; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+50h] [xbp-90h] BYREF

  v6 = allShortestRoute;
  if ( (byte_4A1D6F3 & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__,
      *(_QWORD *)&index);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__,
      v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v9);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__,
      v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v11);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__,
      v12);
    sub_1B715CC(
      &Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__,
      v13);
    allShortestRoute = (System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *)sub_1B715CC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v14);
    byte_4A1D6F3 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  memset(&v29, 0, sizeof(v29));
  if ( !v6 )
    sub_1B71828(allShortestRoute, *(_QWORD *)&index);
  v15 = !isDefenseSquare;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_3148C8C *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v16 = 0;
  v29 = v27;
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v29,
            (const MethodInfo_328E9CC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    if ( !v17 )
      break;
    if ( !v29.fields._current.fields.value )
      sub_1B71828(v17, v18);
    klass = v29.fields._current.fields.value[1].klass;
    if ( !klass )
      sub_1B71828(0LL, v18);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)klass,
      (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    *(_OWORD *)&v28.fields._list = *(_OWORD *)&v27.fields._dictionary;
    v28.fields._current = v27.fields._current.fields.key;
    do
    {
LABEL_9:
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v20 )
      {
        v25 = 4;
        goto LABEL_20;
      }
      if ( !v28.fields._current )
        sub_1B71828(v20, v21);
      monitor = (unsigned int)v28.fields._current[1].monitor;
      v23 = monitor - 1;
    }
    while ( (int)(monitor - 1) <= (int)v15 );
    if ( v15 > monitor )
      monitor = !isDefenseSquare;
    v24 = !isDefenseSquare;
    while ( 1 )
    {
      if ( monitor == v24 )
        sub_1B71830(v20, v21);
      if ( *((_DWORD *)&v28.fields._current[2].klass + v24) == index )
        break;
      if ( v23 == ++v24 )
        goto LABEL_9;
    }
    v16 = 1;
    v25 = 11;
LABEL_20:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( (v25 | 4) != 4 )
      goto LABEL_26;
  }
  v25 = 12;
LABEL_26:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v29,
    (const MethodInfo_328EAF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
  return v16 & (v25 == 11);
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
  bool v13; // w20
  unsigned int monitor; // w10
  unsigned int v15; // w9
  unsigned int v16; // w11
  int v17; // w19
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4A1D6F2 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&index);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1B715CC(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v9);
    byte_4A1D6F2 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !v6 )
    sub_1B71828(shortestEnemyRoute, *(_QWORD *)&index);
  v10 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v20 = v19;
  do
  {
LABEL_5:
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    v13 = v11;
    if ( !v11 )
    {
      v17 = 10;
      goto LABEL_16;
    }
    if ( !v20.fields._current )
      sub_1B71828(v11, v12);
    monitor = (unsigned int)v20.fields._current[1].monitor;
    v15 = monitor - 1;
  }
  while ( (int)(monitor - 1) <= (int)v10 );
  if ( v10 > monitor )
    monitor = v10;
  v16 = v10;
  while ( 1 )
  {
    if ( monitor == v16 )
      sub_1B71830(v11, v12);
    if ( *((_DWORD *)&v20.fields._current[2].klass + (int)v16) == index )
      break;
    if ( v15 == ++v16 )
      goto LABEL_5;
  }
  v17 = 9;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v13 && v17 == 9;
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
  int32_t v13; // w3
  int32_t v14; // w0
  bool v15; // w0
  int v17; // w23
  System_Func_int__bool__o **v18; // x21
  System_Func_int__bool__o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  int v22; // w8

  if ( (byte_4A1D6F0 & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Any_int____75850432, blockPieces);
    sub_1B715CC(&Method_System_Linq_Enumerable_Count_int___, v5);
    sub_1B715CC(&System_Func_int__bool__TypeInfo, v6);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__, v7);
    sub_1B715CC(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo, v8);
    byte_4A1D6F0 = 1;
  }
  v9 = sub_1B71818(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass58_0___ctor((WarBoardAIRoute___c__DisplayClass58_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1B71828(v10, v11);
  *(_QWORD *)(v9 + 16) = route;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)route, v12, v13);
  v14 = System_Linq_Enumerable__Count_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v9 + 16),
          (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
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
        v19 = (System_Func_int__bool__o *)sub_1B71818(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v19,
          (Il2CppObject *)v9,
          Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
          0LL);
        *(_QWORD *)(v9 + 32) = v19;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)v19, v20, v21);
      }
      v15 = BasicHelper__Any_int__48522544(
              blockPieces,
              (System_Func_T__bool__o *)v19,
              (const MethodInfo_2E46530 *)Method_BasicHelper_Any_int____75850432);
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
    sub_1B71828(this, method);
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
  uint32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A1D701 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, *(_QWORD *)&actionSquareIndex);
    sub_1B715CC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1B715CC(&WarBoardAIManager_TypeInfo, v11);
    byte_4A1D701 = 1;
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
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)entries )
        sub_1B71830(Square, v13);
      if ( !piecePlaceData )
        break;
      v17 = *(&npcEntityDict->fields._count + v16);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v17,
             &value,
             (const MethodInfo_3155B50 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Square = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)Square[1].fields.playedStageReinforcementsList;
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardData__GetPiece_35164476(Square, value, 1, 0LL);
        if ( !Square )
          break;
        if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0LL) )
          ++*attackByLinkAlly;
      }
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v17, v18);
      if ( Square )
      {
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v17, v13);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0LL);
        if ( ((unsigned __int8)Square & 1) != 0 )
          ++*attackByLinkEnemy;
      }
      LODWORD(entries) = npcEntityDict->fields._entries;
      if ( (__int64)++v16 >= (int)entries )
        return;
    }
LABEL_27:
    sub_1B71828(Square, v13);
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
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  WarBoardAIRoute_o *v26; // x1
  Il2CppClass **v27; // x0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  int32_t v30; // w24
  int32_t ClassId; // w25

  if ( (byte_4A1D705 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, routeData);
    sub_1B715CC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1B715CC(&SvtClassAttri_TypeInfo, v9);
    this = (WarBoardAIRoute_o *)sub_1B715CC(&WarBoardAIManager_TypeInfo, v10);
    byte_4A1D705 = 1;
  }
  v11 = *routeData;
  if ( !*routeData
    || (actionSquare = v11->fields.actionSquare) == 0LL
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0LL )
  {
LABEL_51:
    sub_1B71828(this, routeData);
  }
  if ( (int)*(_QWORD *)&linkedSquares->max_length >= 1 )
  {
    basePiece = v11->fields.basePiece;
    v15 = 0LL;
    max_length = *(_QWORD *)&linkedSquares->max_length;
    do
    {
      if ( v15 >= max_length )
        sub_1B71830(this, routeData);
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
        this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_35164264((WarBoardData_o *)this, v17, 0LL);
        if ( !moveByLinkedPiece )
          goto LABEL_51;
        items = moveByLinkedPiece->fields._items;
        v24 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        ++moveByLinkedPiece->fields._version;
        if ( !items )
          goto LABEL_51;
        size = moveByLinkedPiece->fields._size;
        v26 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            moveByLinkedPiece,
            (Il2CppObject *)this,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          moveByLinkedPiece->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v26;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v26, v21, v22);
        }
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        if ( WarBoardAIManager__IsAllyPiece(basePiece, v20, v28)
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
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v20, v29);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*routeData )
              goto LABEL_51;
            (*routeData)->fields.flagNow |= 0x40uLL;
            if ( WarBoardPieceData__get_isServant(v20, 0LL) )
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
                this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v20, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
                  if ( !this )
                    goto LABEL_51;
                  this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
                  if ( !v20->fields._battleServant_k__BackingField )
                    goto LABEL_51;
                  v30 = (int)this;
                  ClassId = BattleServantData__getClassId(v20->fields._battleServant_k__BackingField, 0LL);
                  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                  if ( SvtClassAttri__getMagnification(v30, ClassId, 0LL) > 1.0 )
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
  WarBoardAIRoute___c__DisplayClass46_0_o *v21; // x25
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

  if ( (byte_4A1D6E6 & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__,
      targetDic);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v14);
    sub_1B715CC(&IWarBoardObjectData_TypeInfo, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__, v16);
    sub_1B715CC(&System_Predicate_IWarBoardObjectData__TypeInfo, v17);
    sub_1B715CC(&WarBoardAIRoute_TargetData_TypeInfo, v18);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__, v19);
    sub_1B715CC(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo, v20);
    byte_4A1D6E6 = 1;
  }
  v21 = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_1B71818(WarBoardAIRoute___c__DisplayClass46_0_TypeInfo);
  WarBoardAIRoute___c__DisplayClass46_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_17;
  v21->fields.squareIndex = squareIndex;
  *notSquareTarget = 0;
  if ( !targetDic )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_long__object___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
         v21->fields.squareIndex,
         (const MethodInfo_31871D8 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v24 = (System_Predicate_object__o *)sub_1B71818(System_Predicate_IWarBoardObjectData__TypeInfo);
  System_Predicate_object____ctor(
    v24,
    (Il2CppObject *)v21,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    0LL);
  if ( !objectList )
LABEL_17:
    sub_1B71828(v22, v23);
  v25 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Predicate_T__o *)v24,
          (const MethodInfo_34D08C8 *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
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
      p_method = sub_1BC35AC(v25, IWarBoardObjectData_TypeInfo, 2LL);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(v27, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      v31 = (WarBoardAIRoute_TargetData_o *)sub_1B71818(WarBoardAIRoute_TargetData_TypeInfo);
      WarBoardAIRoute_TargetData___ctor_35106780(v31, v27, trendKey, conditionId, 0LL);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
        trendKey,
        (Il2CppObject *)v31,
        (const MethodInfo_3186FD0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
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

  if ( (byte_4A1D6E4 & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__,
      *(_QWORD *)&aiId);
    byte_4A1D6E4 = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_1B71828(0LL, *(_QWORD *)&aiId);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_3149CDC *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
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

  if ( (byte_4A1D703 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__uint__Remove__, piecePlaceData);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___75751992, v10);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__, v11);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v12);
    byte_4A1D703 = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__uint__TypeInfo);
  System_Collections_Generic_Dictionary_int__uint____ctor_51723220(
    v13,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_3153BD4 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___75751992);
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
        (const MethodInfo_31544A4 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_1B71828(HasFlag, v15);
  }
  if ( !v13 )
    goto LABEL_12;
  HasFlag = System_Collections_Generic_Dictionary_int__uint___Remove(
              v13,
              baseSquareIndex,
              (const MethodInfo_3155870 *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v13,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_31544A4 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v13;
}


bool __fastcall WarBoardAIRoute____ctor_b__42_0(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
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
  if ( (byte_4A1D708 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, x);
    byte_4A1D708 = 1;
  }
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B71828)(this, x);
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
  int32_t v14; // w3
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
  int stageNpcMaster; // w8
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Int32_array *data; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A1D726 & 1) == 0 )
  {
    sub_1B715CC(&int___TypeInfo, *(_QWORD *)&forceId);
    sub_1B715CC(&Method_System_Collections_Generic_List_int____Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_int_____ctor__, v8);
    sub_1B715CC(&System_Collections_Generic_List_int____TypeInfo, v9);
    sub_1B715CC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_4A1D726 = 1;
  }
  data = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_OWORD *)&this->fields.masterType = xmmword_BAB9E0;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v11;
  p_replaceDataList = &this->fields.replaceDataList;
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_replaceDataList, (int32_t)v11, v13, v14);
  *((_DWORD *)p_replaceDataList + 2) = -1;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B71828(Instance, v16);
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
    v23 = v18->m_Items[v19 + 1];
    v24 = v18->m_Items[v21 + 1];
    Instance = (WarBoardData_o *)sub_1B71674(int___TypeInfo, 2LL);
    if ( !Instance )
      goto LABEL_20;
    stageNpcMaster = (int)Instance->fields.stageNpcMaster;
    v16 = Instance;
    if ( !stageNpcMaster || (LODWORD(Instance->fields.npcEntityDict) = v23, stageNpcMaster == 1) )
LABEL_22:
      sub_1B71830(Instance, v16);
    HIDWORD(Instance->fields.npcEntityDict) = v24;
    if ( v22 )
    {
      items = v22->fields._items;
      v29 = Method_System_Collections_Generic_List_int____Add__;
      ++v22->fields._version;
      if ( items )
      {
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)Instance,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v16;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v16, v25, v26);
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
  __int64 v12; // x8
  unsigned int v13; // w8
  int32_t v14; // w8
  int32_t v15; // w8

  if ( (byte_4A1D727 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int____get_Count__, *(_QWORD *)&type);
    sub_1B715CC(&Method_System_Collections_Generic_List_int____get_Item__, v7);
    byte_4A1D727 = 1;
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
                            (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_int____get_Item__);
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
            v12 = *((_QWORD *)replaceDataList + 3);
            if ( !(_DWORD)v12 )
              goto LABEL_36;
            if ( *((_DWORD *)replaceDataList + 8) == 1 )
            {
              this->fields.masterType = 1;
              if ( (unsigned int)v12 <= 1 )
LABEL_36:
                sub_1B71830(replaceDataList, *(_QWORD *)&type);
              v15 = *((_DWORD *)replaceDataList + 9);
              this->fields.replacePriority = v10;
              this->fields.masterSquareIndex = v15;
              return;
            }
          }
        }
        else
        {
          if ( !replaceDataList )
            break;
          v13 = *((_DWORD *)replaceDataList + 6);
          if ( !v13 )
            goto LABEL_36;
          if ( *((_DWORD *)replaceDataList + 8) == 2 )
          {
            if ( v13 <= 1 )
              goto LABEL_36;
            v14 = *((_DWORD *)replaceDataList + 9);
            if ( v14 == pieceData->fields._index_k__BackingField )
            {
              this->fields.masterPieceIndex = v14;
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
    sub_1B71828(replaceDataList, *(_QWORD *)&type);
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
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x22
  System_Func_T__TResult__o *v20; // x23
  WarBoardActionTrendEntity_array *HasMatchCondition; // x0
  __int64 v22; // x1
  __int64 v23; // x8
  WarBoardActionTrendEntity_array *v24; // x20
  unsigned __int64 i; // x24
  WarBoardActionTrendEntity_o *v26; // x23
  System_Collections_Generic_List_object__o *v27; // x21
  WarBoardAIRoute_ActionTrendInfo_o *v28; // x22
  const MethodInfo *v29; // x2
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int32_t condType; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A1D715 & 1) == 0 )
  {
    sub_1B715CC(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, entity);
    sub_1B715CC(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v5);
    sub_1B715CC(&DataManager_TypeInfo, v6);
    sub_1B715CC(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v9);
    sub_1B715CC(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v10);
    sub_1B715CC(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__, v11);
    byte_4A1D715 = 1;
  }
  condType = 0;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v12;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._FutureTrendInfoList_k__BackingField,
    (int32_t)v12,
    v14,
    v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Entity_k__BackingField = entity;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)entity, v16, v17);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v18);
  v20 = (System_Func_T__TResult__o *)sub_1B71818(System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo);
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
  HasMatchCondition = (WarBoardActionTrendEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !HasMatchCondition
    || (HasMatchCondition = WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                              (WarBoardActionTrendMaster_o *)HasMatchCondition,
                              entity,
                              0LL)) == 0LL )
  {
LABEL_20:
    sub_1B71828(HasMatchCondition, v22);
  }
  v23 = *(_QWORD *)&HasMatchCondition->max_length;
  v24 = HasMatchCondition;
  if ( (int)v23 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v23; ++i )
    {
      if ( i >= (unsigned int)v23 )
        sub_1B71830(HasMatchCondition, v22);
      v26 = v24->m_Items[i];
      if ( v26 )
      {
        v27 = (System_Collections_Generic_List_object__o *)*p_FutureTrendInfoList_k__BackingField;
        v28 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1B71818(WarBoardAIRoute_ActionTrendInfo_TypeInfo);
        WarBoardAIRoute_ActionTrendInfo___ctor(v28, v26, v29);
        if ( !v27 )
          goto LABEL_20;
        items = v27->fields._items;
        v33 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++v27->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v27->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)v28,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v27->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v28;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v28, v30, v31);
        }
      }
      LODWORD(v23) = v24->max_length;
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
  ServantStatusBattleListViewItem_o *p_conditionEntityArray; // x19
  System_Object_array *conditionEntityArray; // x21
  struct WarBoardActionTrendEntity_o *Entity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *conditionIds; // x20
  WarBoardAIRoute_ActionTrendInfo___c_c *v12; // x0
  System_Func_T__TResult__o *_9__8_0; // x21
  Il2CppObject *v14; // x22
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  v2 = this;
  if ( (byte_4A1D714 & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___, method);
    sub_1B715CC(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___, v3);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___, v4);
    sub_1B715CC(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo, v5);
    sub_1B715CC(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__, v6);
    this = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1B715CC(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v7);
    byte_4A1D714 = 1;
  }
  p_conditionEntityArray = (ServantStatusBattleListViewItem_o *)&v2->fields.conditionEntityArray;
  conditionEntityArray = (System_Object_array *)v2->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = v2->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_1B71828(this, method);
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
      _9__8_0 = (System_Func_T__TResult__o *)sub_1B71818(System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__8_0,
        v14,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        0LL);
      static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v16, v17);
    }
    v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           conditionIds,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_2E89818 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v19 = BasicHelper__ExcludeNull_object_(
            v18,
            (const MethodInfo_2E47104 *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = System_Linq_Enumerable__ToArray_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                             (const MethodInfo_2E93E84 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    p_conditionEntityArray->klass = (ServantStatusBattleListViewItem_c *)conditionEntityArray;
    sub_1B71570(p_conditionEntityArray, (int32_t)conditionEntityArray, v20, v21);
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
  int32_t v4; // w3

  if ( (byte_4A1D716 & 1) == 0 )
  {
    sub_1B715CC(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v1);
    byte_4A1D716 = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_ActionTrendInfo___c_o *)v2;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_4A1D717 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___, *(_QWORD *)&x);
    sub_1B715CC(&DataManager_TypeInfo, v4);
    sub_1B715CC(
      &Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__,
      v5);
    byte_4A1D717 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_object )
    sub_1B71828(0LL, v7);
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   x,
                                                   (const MethodInfo_30F8760 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
}


void __fastcall WarBoardAIRoute_AdvantagePieceData___ctor(
        WarBoardAIRoute_AdvantagePieceData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_Dictionary_int__object__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_Dictionary_int__object__o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_Dictionary_int__object__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A1D71F & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, method);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v3);
    byte_4A1D71F = 1;
  }
  this->fields.flagNow = 1LL;
  *(_QWORD *)&this->fields.baseCARange = -1LL;
  *(_QWORD *)&this->fields.baseAARange = -1LL;
  *(_QWORD *)&this->fields.baseDARange = -1LL;
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v4;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dicClassAdvantageServant, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v7;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dicClassDisAdvantageServant, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v10;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dicAttackAdvantageServant, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v13;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dicAttackDisAdvantageServant, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v16,
    (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v16;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dicDefenseAdvantageServant, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v19,
    (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v19;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dicDefenseDisAdvantageServant, (int32_t)v19, v20, v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_DesignationItemData___ctor(
        WarBoardAIRoute_DesignationItemData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A1D720 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, method);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v3);
    byte_4A1D720 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v4;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
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
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A1D70C & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v3);
    sub_1B715CC(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v4);
    sub_1B715CC(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo, v5);
    byte_4A1D70C = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v6;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v9;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.ratingOffsetList, (int32_t)v9, v10, v11);
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
  ServantStatusBattleListViewItem_o *p_attackOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v10; // x0
  System_Func_object__bool__o *_9__4_0; // x21
  Il2CppObject *v12; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_TSource__o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A1D709 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method);
    sub_1B715CC(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v3);
    sub_1B715CC(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v4);
    sub_1B715CC(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__, v5);
    sub_1B715CC(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v6);
    byte_4A1D709 = 1;
  }
  p_attackOffset = (ServantStatusBattleListViewItem_o *)&this->fields.attackOffset;
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
      _9__4_0 = (System_Func_object__bool__o *)sub_1B71818(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__4_0,
        v12,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        0LL);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v14, v15);
    }
    v16 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__4_0,
            (const MethodInfo_2E99B5C *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v17 = System_Linq_Enumerable__ToList_object_(
            v16,
            (const MethodInfo_2E97ADC *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_attackOffset->klass = (ServantStatusBattleListViewItem_c *)v17;
    sub_1B71570(p_attackOffset, (int32_t)v17, v18, v19);
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A1D70B & 1) == 0 )
  {
    sub_1B715CC(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method);
    byte_4A1D70B = 1;
  }
  v3 = sub_1B71818(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6___ctor(
    (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)v3,
    -2,
    0LL);
  if ( !v3 )
    sub_1B71828(v4, v5);
  *(_QWORD *)(v3 + 40) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v3 + 40), (int32_t)this, v6, v7);
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
  ServantStatusBattleListViewItem_o *p_moveOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v10; // x0
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v12; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_TSource__o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A1D70A & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method);
    sub_1B715CC(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v3);
    sub_1B715CC(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v4);
    sub_1B715CC(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__, v5);
    sub_1B715CC(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v6);
    byte_4A1D70A = 1;
  }
  p_moveOffset = (ServantStatusBattleListViewItem_o *)&this->fields.moveOffset;
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
      _9__5_0 = (System_Func_object__bool__o *)sub_1B71818(System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__5_0,
        v12,
        Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__,
        0LL);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v14, v15);
    }
    v16 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_2E99B5C *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v17 = System_Linq_Enumerable__ToList_object_(
            v16,
            (const MethodInfo_2E97ADC *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_moveOffset->klass = (ServantStatusBattleListViewItem_c *)v17;
    sub_1B71570(p_moveOffset, (int32_t)v17, v18, v19);
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
  ServantStatusBattleListViewItem_o *p__7__wrap1; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v13; // x8
  struct WarBoardAIRoute_ActionTrendInfo_o *trendInfo_5__3; // x8
  System_Collections_Generic_List_object__o *FutureTrendInfoList_k__BackingField; // x0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v16; // x9
  __int128 v17; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap3; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  bool v24; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v25; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *current; // x1
  bool result; // w0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  bool v34; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v35; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v36; // x1
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v37; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v41; // x8
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-50h]
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o **v44; // [xsp+48h] [xbp-28h]
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v45; // [xsp+58h] [xbp-18h] BYREF

  v45 = this;
  v2 = this;
  if ( (byte_4A1D710 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__, v3);
    this = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_1B715CC(
                                                                                 &Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__,
                                                                                 v4);
    byte_4A1D710 = 1;
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
      sub_1B71828(this, method);
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_1B71828(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      &v42,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v16 = v45;
    v17 = *(_OWORD *)&v42.fields._list;
    p__7__wrap3 = (ServantStatusBattleListViewItem_o *)&v45->fields.__7__wrap3;
    v43 = v42;
    v45->fields.__7__wrap3.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v42.fields._current;
    *(_OWORD *)&v16->fields.__7__wrap3.fields._list = v17;
    sub_1B71570(p__7__wrap3, 0, v19, v20);
    v2 = v45;
LABEL_12:
    v2->fields.__1__state = -4;
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap3,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    v25 = v45;
    if ( v24 )
    {
      current = v45->fields.__7__wrap3.fields._current;
      v45->fields.__2__current = current;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v25->fields.__2__current, (int32_t)current, v22, v23);
      result = 1;
      v45->fields.__1__state = 2;
      return result;
    }
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(v45, v21);
    v28 = v45;
    *(_OWORD *)&v45->fields._trendInfo_5__3 = 0u;
    v28 = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)((char *)v28 + 72);
    *(_OWORD *)&v28->fields.__1__state = 0u;
    sub_1B71570((ServantStatusBattleListViewItem_o *)v28, 0, v29, v30);
    v13 = v45;
    goto LABEL_15;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1B71828(this, method);
  actionTrandList = (System_Collections_Generic_List_object__o *)_4__this->fields.actionTrandList;
  if ( !actionTrandList )
    sub_1B71828(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    &v42,
    actionTrandList,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v8 = v45;
  v9 = *(_OWORD *)&v42.fields._list;
  p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v45->fields.__7__wrap1;
  v43 = v42;
  v45->fields.__7__wrap1.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v42.fields._current;
  *(_OWORD *)&v8->fields.__7__wrap1.fields._list = v9;
  sub_1B71570(p__7__wrap1, 0, v11, v12);
  v13 = v45;
  v45->fields.__1__state = -3;
LABEL_15:
  v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v13->fields.__7__wrap1,
          (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
  v35 = v45;
  if ( v34 )
  {
    v36 = v45->fields.__7__wrap1.fields._current;
    v45->fields._trendInfo_5__3 = v36;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v35->fields._trendInfo_5__3, (int32_t)v36, v32, v33);
    v37 = v45;
    v38 = v45->fields._trendInfo_5__3;
    v45->fields.__2__current = v38;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v37->fields.__2__current, (int32_t)v38, v39, v40);
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
  int32_t v7; // w3

  if ( (byte_4A1D713 & 1) == 0 )
  {
    sub_1B715CC(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method);
    byte_4A1D713 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1B71818(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
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

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
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
  if ( (byte_4A1D711 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, method);
    byte_4A1D711 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A1D712 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, method);
    byte_4A1D712 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A1D70F & 1) == 0 )
  {
    sub_1B715CC(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v1);
    byte_4A1D70F = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_PiecePersonality___c_o *)v2;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields,
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
    sub_1B71828(this, 0LL);
  return x->fields.type == 0;
}


bool __fastcall WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
  return x->fields.type == 1;
}


void __fastcall WarBoardAIRoute_PutSquareTarget___ctor(
        WarBoardAIRoute_PutSquareTarget_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A1D721 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__, method);
    sub_1B715CC(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v3);
    byte_4A1D721 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B71818(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v4,
    (const MethodInfo_3186614 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v4;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B71818(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v7,
    (const MethodInfo_3186614 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v7;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dicObjectPutSquareIndex, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B71818(System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v10,
    (const MethodInfo_3186614 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v10;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dicIndividualityPutSqareIndex, (int32_t)v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData___ctor(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A1D71A & 1) == 0 )
  {
    sub_1B715CC(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, method);
    byte_4A1D71A = 1;
  }
  this->fields.flagNow = 1LL;
  v3 = (Il2CppObject *)sub_1B71818(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.evalOffsetMagnification = (struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)v3;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.evalOffsetMagnification, (int32_t)v3, v4, v5);
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

  if ( (byte_4A1D71C & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, method);
    sub_1B715CC(&System_Decimal_TypeInfo, v3);
    byte_4A1D71C = 1;
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
  v8 = System_Decimal__op_Implicit_62712880((System_Decimal_o *)v5, WarBoardEvalFactorsAffectRatio, 0LL);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_1B71828(0LL, v7);
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
  v26 = System_Decimal__op_Implicit_62712880(cctor_finished, attackEvalOffsetAddValue, 0LL);
  v29 = System_Decimal__op_Division(v28, v26, v27, (const MethodInfo *)v8);
  v31 = System_Decimal__op_Addition(v30, AttackValue, v21, (const MethodInfo *)v29);
  this->fields.evalValue = System_Decimal__op_Explicit_62713384(v31, v32);
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


bool __fastcall WarBoardAIRoute_RouteData__HasFlag_35104792(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_4A1D719 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__, method);
    byte_4A1D719 = 1;
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

  if ( (byte_4A1D71B & 1) == 0 )
  {
    sub_1B715CC(&WarBoardAIRoute_RouteData_TypeInfo, method);
    byte_4A1D71B = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0LL);
  if ( result )
  {
    methodPtr_low = LOBYTE(WarBoardAIRoute_RouteData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      sub_1B71AE8(result);
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
  ServantStatusBattleListViewItem_o *p_futureLookingTrendHashSet; // x19
  System_Collections_Generic_HashSet_T__o *v5; // x20
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // t1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A1D718 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__, method);
    sub_1B715CC(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v3);
    byte_4A1D718 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = (ServantStatusBattleListViewItem_o *)&this->fields.futureLookingTrendHashSet;
  v5 = (System_Collections_Generic_HashSet_T__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v5 = (System_Collections_Generic_HashSet_T__o *)sub_1B71818(System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v5,
      (const MethodInfo_338EE34 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    p_futureLookingTrendHashSet->klass = (ServantStatusBattleListViewItem_c *)v5;
    sub_1B71570(p_futureLookingTrendHashSet, (int32_t)v5, v7, v8);
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

  if ( (byte_4A1D71D & 1) == 0 )
  {
    sub_1B715CC(&System_Decimal_TypeInfo, method);
    byte_4A1D71D = 1;
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

  if ( (byte_4A1D71E & 1) == 0 )
  {
    sub_1B715CC(&System_Decimal_TypeInfo, method);
    byte_4A1D71E = 1;
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


void __fastcall WarBoardAIRoute_TargetData___ctor_35106700(
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)v8, (int32_t)targetSquare, v9, v10);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35106780(
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)targetObject, v9, v10);
  WarBoardAIRoute_TargetData__DetectObject(this, v11);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35107360(
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
    sub_1B71828(v11, v12);
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)targetObject, v13, v14);
  targetSquare = baseTargetData->fields.targetSquare;
  this->fields.targetSquare = targetSquare;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.targetSquare, (int32_t)targetSquare, v17, v18);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v19);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35108392(
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)targetObject, v13, v14);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v15);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35108504(
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
  if ( (byte_4A1D722 & 1) == 0 )
  {
    b = (WarBoardAIRoute_TargetData_o *)sub_1B715CC(&WarBoardAIRoute_TargetData_TypeInfo, method);
    byte_4A1D722 = 1;
  }
  if ( !v2 )
LABEL_9:
    sub_1B71828(b, method);
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone(v2, 0LL);
  if ( result )
  {
    methodPtr_low = LOBYTE(WarBoardAIRoute_TargetData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      sub_1B71AE8(result);
      goto LABEL_9;
    }
  }
  return result;
}


void __fastcall WarBoardAIRoute_TargetData__DetectObject(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  struct IWarBoardObjectData_o *targetObject; // x8
  WarBoardPieceData_c *v8; // x9
  __int64 methodPtr_low; // x10
  struct IWarBoardObjectData_o *v10; // x11
  int32_t v11; // w1
  struct WarBoardPieceData_o **p_targetPiece; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct IWarBoardObjectData_o *v15; // x8
  WarBoardItemData_c *v16; // x9
  __int64 v17; // x10
  struct IWarBoardObjectData_o *v18; // x11
  int32_t v19; // w1
  struct WarBoardItemData_o **p_targetItem; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct IWarBoardObjectData_o *v23; // x8
  WarBoardTreasureData_c *v24; // x9
  __int64 v25; // x10
  struct IWarBoardObjectData_o *v26; // x11
  int32_t v27; // w1
  struct WarBoardTreasureData_o **p_targetTreasure; // x19

  if ( (byte_4A1D724 & 1) == 0 )
  {
    sub_1B715CC(&WarBoardItemData_TypeInfo, method);
    sub_1B715CC(&WarBoardPieceData_TypeInfo, v5);
    sub_1B715CC(&WarBoardTreasureData_TypeInfo, v6);
    byte_4A1D724 = 1;
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_targetPiece, v11, v2, v3);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_targetItem, v19, v13, v14);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_targetTreasure, v27, v21, v22);
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
  int32_t v30; // w3
  WarBoardAIRoute_TargetData___c_c *v31; // x0
  System_Int32_array *baseRoute; // x24
  WarBoardPieceData_o *v33; // x21
  System_Func_object__int__o *_9__7_0; // x25
  Il2CppObject *v35; // x26
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Int32_array *v40; // x0
  bool IsDetour; // w0
  const MethodInfo *v42; // x5
  int32_t v43; // w23
  struct System_Int32_array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w0
  struct IWarBoardObjectData_o *v48; // x21
  WarBoardAIRoute_TargetData_o *v49; // x22
  IWarBoardObjectData_c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  struct WarBoardSquareData_o *v54; // x8

  if ( (byte_4A1D723 & 1) == 0 )
  {
    sub_1B715CC(&AStarSearch_TypeInfo, baseTargetData);
    sub_1B715CC(&Method_System_Linq_Enumerable_Count_int___, v10);
    sub_1B715CC(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___, v11);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1B715CC(&System_Func_WarBoardPieceData__int__TypeInfo, v13);
    sub_1B715CC(&IWarBoardObjectData_TypeInfo, v14);
    sub_1B715CC(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, v15);
    sub_1B715CC(&WarBoardAIRoute_TargetData___c_TypeInfo, v16);
    byte_4A1D723 = 1;
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
      p_method = sub_1BC35AC(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1LL);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                    targetObject,
                                    *(_QWORD *)(p_method + 8));
    if ( !v20 )
LABEL_49:
      sub_1B71828(squareIndex_k__BackingField, v17);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.baseRoute, (int32_t)v28, v29, v30);
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
    _9__7_0 = (System_Func_object__int__o *)sub_1B71818(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v35, Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, 0LL);
    static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_2E8B610 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v40 = System_Linq_Enumerable__ToArray_int_(
          v39,
          (const MethodInfo_2E93CEC *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v40, 0LL);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    v43 = this->fields.nowSquareIndex;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v44 = AStarSearch__RouteSearch(v33, baseSquareIndex, v43, 1, 0LL, v42);
    this->fields.detourRoute = v44;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.detourRoute, (int32_t)v44, v45, v46);
  }
  v47 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
  v48 = this->fields.targetObject;
  this->fields.isAround = v47 == 2;
  if ( v48 )
    v49 = this;
  else
    v49 = 0LL;
  if ( v48 )
  {
    v50 = v48->klass;
    v51 = *(unsigned __int16 *)(&v48->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v48->klass->_2.bitflags2 + 3) )
    {
      v52 = &v50->_1.interfaceOffsets->offset;
      while ( *((IWarBoardObjectData_c **)v52 - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_39;
      }
      v53 = (__int64)&v50->vtable[*v52].method;
    }
    else
    {
LABEL_39:
      v53 = sub_1BC35AC(v48, IWarBoardObjectData_TypeInfo, 0LL);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v53)(
                                    v48,
                                    *(_QWORD *)(v53 + 8));
    if ( !v49 )
      goto LABEL_49;
  }
  else
  {
    v54 = this->fields.targetSquare;
    if ( v54 )
      squareIndex_k__BackingField = (unsigned int)v54->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = 0xFFFFFFFFLL;
    v49 = this;
    if ( !this )
      goto LABEL_49;
  }
  v49->fields.putSquareIndex = squareIndex_k__BackingField;
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
  int32_t v4; // w3

  if ( (byte_4A1D725 & 1) == 0 )
  {
    sub_1B715CC(&WarBoardAIRoute_TargetData___c_TypeInfo, v1);
    byte_4A1D725 = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(WarBoardAIRoute_TargetData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAIRoute_TargetData___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_TargetData___c_o *)v2;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)WarBoardAIRoute_TargetData___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B71828(this, 0LL);
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
  int32_t v95; // w3
  struct WarBoardData_o *monitor; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v97; // x0
  __int64 v98; // x0
  __int64 v99; // x1
  struct WarBoardStageNpcEntity_o *npcData; // x9
  int32_t searchDepth; // w8
  WarBoardAIRoute__CreateRouteData_d__47_o *v102; // x9
  int32_t v103; // w10
  int32_t RequiredCost; // w20
  Il2CppObject *v105; // x0
  __int64 v106; // x1
  int32_t MasterSquareIndex; // w2
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // x1
  struct System_Int32_array *AllyPutSquareIndicesWithoutMaster; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  ServantStatusBattleListViewItem_o *v113; // x0
  int32_t v114; // w2
  int32_t v115; // w3
  __int64 v116; // x0
  __int64 v117; // x1
  struct WarBoardData_o *warBoardData_5__2; // x8
  System_Collections_Generic_List_int__o *masterExistsForce; // x0
  _BOOL8 v120; // x0
  __int64 v121; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v122; // x8
  int32_t servantAndEnemyRange_5__14; // w8
  int32_t servantAndEnemyMasterRange_5__15; // w9
  struct WarBoardAIRoute_AIRouteMasterData_o *v125; // x9
  int32_t v126; // w9
  struct DefenseAreaData_o *DefenseAreaData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v128; // x0
  int32_t v129; // w2
  int32_t v130; // w3
  __int64 v131; // x0
  __int64 v132; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v133; // x8
  struct DefenseAreaData_o *defenseAreaData_5__7; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x10
  bool IsAllBlockShortestRouteEnemyAndMastr; // w0
  System_Collections_Generic_Dictionary_int__uint__o *v137; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v138; // x8
  __int128 v139; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap8; // x0
  int32_t v141; // w2
  int32_t v142; // w3
  const MethodInfo *v143; // x1
  Il2CppObject *key; // x20
  Il2CppObject *v145; // x21
  WarBoardAIRoute__CreateRouteData_d__47_o *v146; // x0
  int32_t v147; // w2
  int32_t v148; // w3
  WarBoardSquareData_o *Square; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v150; // x0
  int32_t v151; // w2
  int32_t v152; // w3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *_8__1; // x21
  WarBoardPieceData_o *PieceUnique; // x0
  int32_t v155; // w2
  int32_t v156; // w3
  __int64 v157; // x0
  __int64 v158; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v159; // x8
  int64_t baseFlag_5__6; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v161; // x9
  int64_t v162; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v163; // x8
  System_Collections_Generic_IEnumerable_TSource__o *routeDataList; // x21
  Il2CppObject *v165; // x23
  System_Func_object__bool__o *v166; // x22
  __int64 v167; // x1
  int32_t v168; // w8
  System_Collections_Generic_List_object__o *v169; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v171; // x8
  __int64 RouteSumPieceActionCost; // x0
  __int64 v173; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v174; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v175; // x9
  _BOOL8 IsActable; // x0
  __int64 v177; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v178; // x9
  System_Collections_Generic_Dictionary_int__int__o *DesignationItemToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v180; // x0
  int32_t v181; // w2
  int32_t v182; // w3
  __int64 v183; // x0
  __int64 v184; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v185; // x9
  struct System_Collections_Generic_Dictionary_int__int__o *TargetToDistance_35093476; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v187; // x0
  int32_t v188; // w2
  int32_t v189; // w3
  System_Collections_Generic_Dictionary_uint__int__o *AllEnemyToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v191; // x0
  int32_t v192; // w2
  int32_t v193; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v194; // x0
  int32_t v195; // w2
  int32_t v196; // w3
  __int64 v197; // x0
  __int64 v198; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v199; // x8
  WarBoardPieceData_o *basePiece; // x0
  _BOOL8 isServant; // x0
  __int64 v202; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v203; // x9
  WarBoardAIRoute_AdvantagePieceData_o *AdvantagePieceData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v205; // x0
  int32_t v206; // w2
  int32_t v207; // w3
  const MethodInfo *v208; // x5
  int32_t masterSquareIndex_5__4; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v210; // x0
  __int64 v211; // x0
  __int64 v212; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v213; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v214; // x9
  struct WarBoardPieceData_o *v215; // x11
  struct WarBoardAIRoute_AIRouteMasterData_o *v216; // x9
  int32_t masterType; // w10
  int32_t index_k__BackingField; // w11
  struct WarBoardStageNpcEntity_o *v219; // x12
  System_Collections_Generic_HashSet_T__o *v220; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v221; // x0
  int32_t v222; // w2
  int32_t v223; // w3
  System_Collections_Generic_HashSet_T__o *v224; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v225; // x0
  int32_t v226; // w2
  int32_t v227; // w3
  __int64 v228; // x1
  System_Collections_Generic_List_object__o *v229; // x0
  _BOOL8 v230; // x0
  __int64 v231; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v234; // x10
  struct WarBoardPieceData_o *v235; // x10
  System_Collections_Generic_HashSet_T__o *basePieceActionPieceRouteList_5__22; // x0
  _DWORD *v237; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v238; // x10
  struct WarBoardPieceData_o *v239; // x10
  struct WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData_5__21; // x0
  __int64 v241; // x0
  __int64 v242; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v243; // x8
  int32_t v244; // w9
  System_Collections_Generic_IEnumerable_TSource__o *v245; // x20
  WarBoardAIRoute___c_c *v246; // x8
  System_Func_T__TResult__o *_9__47_6; // x21
  Il2CppObject *v248; // x22
  struct WarBoardAIRoute___c_StaticFields *v249; // x0
  int32_t v250; // w2
  int32_t v251; // w3
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
  __int64 p_method; // x0
  __int64 v266; // x1
  ServantStatusBattleListViewItem_o *v267; // x0
  int32_t v268; // w2
  int32_t v269; // w3
  __int64 *v270; // x19
  __int64 v271; // x8
  __int64 v272; // x9
  int *v273; // x10
  __int64 v274; // x0
  __int64 v275; // x0
  __int64 *v276; // x19
  __int64 v277; // x8
  __int64 v278; // x9
  int *v279; // x10
  __int64 v280; // x0
  ServantStatusBattleListViewItem_o *p__7__wrap24; // x0
  int32_t v282; // w2
  int32_t v283; // w3
  Il2CppObject *v284; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v285; // x0
  int32_t v286; // w2
  int32_t v287; // w3
  __int64 v288; // x1
  WarBoardSquareData_o *v289; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *MyAndLinkedSquareIndecies; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v291; // x0
  int32_t v292; // w2
  int32_t v293; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v294; // x8
  int v295; // w9
  __int64 v296; // x21
  __int64 v297; // x0
  __int64 v298; // x1
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v299; // x8
  __int64 _7__wrap23_low; // x9
  int32_t *v301; // x27
  WarBoardAIRoute_RouteData_o *v302; // x20
  const MethodInfo *v303; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v304; // x9
  int32_t getEnumeratorRetType; // w8
  int32_t v306; // w10
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v307; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dicBaseDIRange_5__18; // x20
  WarBoardAIRoute___c_c *v309; // x8
  System_Func_T__TResult__o *_9__47_1; // x22
  Il2CppObject *v311; // x23
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v313; // w2
  int32_t v314; // w3
  System_Func_T__TResult__o *_9__47_2; // x23
  Il2CppObject *v316; // x24
  struct WarBoardAIRoute___c_StaticFields *v317; // x0
  int32_t v318; // w2
  int32_t v319; // w3
  __int64 v320; // x1
  int32_t v321; // w2
  int32_t v322; // w3
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v323; // x20
  WarBoardAIRoute_RouteData_o *v324; // x0
  struct WarBoardSquareData_o *v325; // x1
  __int64 v326; // x0
  __int64 v327; // x1
  int32_t v328; // w2
  int32_t v329; // w3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v330; // x8
  WarBoardAIRoute_RouteData_o *v331; // x0
  struct WarBoardPieceData_o *v332; // x1
  __int64 v333; // x1
  int32_t v334; // w2
  int32_t v335; // w3
  WarBoardAIRoute_RouteData_o *v336; // x0
  WarBoardAIRoute_RouteData_o *v337; // x22
  int32_t v338; // w23
  WarBoardSquareData_o *v339; // x0
  int32_t v340; // w2
  int32_t v341; // w3
  __int64 v342; // x1
  System_Collections_Generic_Dictionary_uint__int__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v344; // x19
  __int64 v345; // x1
  System_Collections_Generic_Dictionary_uint__int__o *v346; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v348; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v349; // x8
  WarBoardAIRoute_RouteData_o *v350; // x22
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *MoveByTargetDistance; // x0
  int32_t v352; // w2
  int32_t v353; // w3
  __int64 v354; // x0
  __int64 v355; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v356; // x9
  WarBoardAIRoute_RouteData_o *v357; // x20
  WarBoardPieceData_o *ActionPiece; // x0
  int32_t v359; // w2
  int32_t v360; // w3
  ServantStatusBattleListViewItem_o *p_actionPiece; // x0
  __int64 v362; // x1
  int32_t v363; // w2
  const MethodInfo *v364; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v365; // x8
  struct WarBoardPieceData_o *v366; // x9
  struct WarBoardPieceData_o *v367; // x10
  struct WarBoardPieceData_o *v368; // x8
  int32_t limitActionCount_k__BackingField; // w19
  int32_t currentActionCount_k__BackingField; // w20
  System_Math_c *v371; // x0
  WarBoardAIRoute_RouteData_o *v372; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v373; // x9
  int v374; // w11
  struct WarBoardSquareData_o *baseSquare_5__11; // x10
  WarBoardData_o *v376; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v377; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v378; // x9
  WarBoardPieceData_o *v379; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v380; // x8
  WarBoardPieceData_o *v381; // x0
  WarBoardPieceData_o *v382; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v383; // x8
  WarBoardPieceData_o *v384; // x22
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v385; // x8
  WarBoardPieceData_o *v386; // x0
  WarBoardPieceData_o *v387; // x0
  WarBoardAIRoute_RouteData_o *v388; // x8
  struct WarBoardPieceData_o *v389; // x9
  WarBoardPieceData_o *v390; // x0
  WarBoardAIRoute_RouteData_o *v391; // x19
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v392; // x8
  struct WarBoardPieceData_o *v393; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  int64_t flagNow; // x22
  __int64 ClassId; // x0
  __int64 v397; // x1
  struct WarBoardPieceData_o *v398; // x8
  int32_t v399; // w20
  BattleServantData_o *v400; // x0
  int32_t v401; // w2
  int64_t FlagAdvantage; // x0
  __int64 v403; // x1
  struct WarBoardPieceData_o *v404; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v405; // x8
  WarBoardPieceData_o *v406; // x22
  WarBoardAIRoute_RouteData_o *v407; // x2
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v408; // x9
  WarBoardPieceData_o *v409; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v410; // x9
  System_Collections_Generic_List_object__o *v411; // x0
  int32_t requiredCost_5__3; // w23
  WarBoardPieceData_o *v413; // x20
  WarBoardPieceData_o *v414; // x22
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v415; // x4
  System_Collections_Generic_Dictionary_int__uint__o *updated; // x25
  int32_t MasterSquareIndexFromPlaceData; // w22
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v418; // x23
  System_Func_object__bool__o *v419; // x24
  DefenseAreaData_o *v420; // x0
  __int64 v421; // x1
  struct WarBoardAIRoute_AdvantagePieceData_o *v422; // x23
  System_Func_object__bool__o *v423; // x24
  struct DefenseAreaData_o *v424; // x23
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v425; // x9
  WarBoardPieceData_o *v426; // x0
  System_Int32_array *v427; // x2
  struct WarBoardAIRoute_AIRouteMasterData_o *v428; // x8
  _BOOL8 v429; // x0
  __int64 v430; // x1
  WarBoardAIRoute_RouteData_o *v431; // x21
  int64_t v432; // x8
  System_Collections_Generic_List_object__o *v433; // x23
  __int64 v434; // x0
  __int64 v435; // x1
  int32_t v436; // w2
  int32_t v437; // w3
  __int64 v438; // x0
  __int64 v439; // x1
  WarBoardAIRoute_RouteData_o *v440; // x21
  System_Collections_Generic_Dictionary_uint__int__o *v441; // x23
  int32_t v442; // w2
  int32_t v443; // w3
  __int64 v444; // x1
  System_Collections_Generic_Dictionary_int__uint__o *v445; // x0
  _BOOL8 v446; // x0
  __int64 v447; // x1
  const MethodInfo *v448; // x5
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v449; // x8
  struct WarBoardPieceData_o *v450; // x8
  uint32_t key_high; // w21
  int32_t v452; // w24
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x23
  int32_t v454; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v455; // x0
  __int64 v456; // x0
  __int64 v457; // x1
  WarBoardAIRoute_RouteData_o *v458; // x21
  System_Collections_Generic_List_int__o *v459; // x23
  __int64 v460; // x0
  __int64 v461; // x1
  int32_t v462; // w2
  int32_t v463; // w3
  WarBoardAIRoute_RouteData_o *v464; // x21
  System_Collections_Generic_Dictionary_int__bool__o *v465; // x23
  __int64 v466; // x0
  __int64 v467; // x1
  int32_t v468; // w2
  int32_t v469; // w3
  WarBoardAIRoute_RouteData_o *v470; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v471; // x23
  __int64 v472; // x0
  __int64 v473; // x1
  int32_t v474; // w2
  int32_t v475; // w3
  __int64 v476; // x0
  __int64 v477; // x1
  WarBoardAIRoute_RouteData_o *v478; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v479; // x8
  WarBoardPieceData_o *v480; // x0
  _BOOL8 IsBlockShortestRouteEnemyAndMaster; // x0
  __int64 v482; // x1
  const MethodInfo *v483; // x2
  const MethodInfo *v484; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v485; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v486; // x9
  struct WarBoardPieceData_o *v487; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v488; // x10
  DefenseAreaData_o *v489; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v490; // x9
  struct WarBoardPieceData_o *v491; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v492; // x11
  int32_t v493; // w10
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v494; // x9
  struct WarBoardPieceData_o *v495; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v496; // x10
  int32_t v497; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v498; // x0
  int32_t v499; // w0
  WarBoardAIRoute_RouteData_o *v500; // x19
  __int64 v501; // x0
  System_Collections_Generic_Dictionary_int__int__o *v502; // x0
  const MethodInfo *v503; // x5
  int32_t v504; // w21
  int32_t v505; // w22
  int32_t v506; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v507; // x0
  __int64 v508; // x0
  __int64 v509; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x23
  __int64 v511; // x0
  __int64 v512; // x1
  __int64 v513; // x0
  __int64 v514; // x1
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  __int64 v516; // x0
  __int64 v517; // x1
  struct System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v520; // x9
  __int64 size; // x10
  const MethodInfo *v522; // x5
  int32_t v523; // w21
  int32_t enemyMasterSquareIndex; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v525; // x0
  int32_t v526; // w0
  WarBoardAIRoute_RouteData_o *v527; // x19
  __int64 v528; // x0
  __int64 v529; // x1
  WarBoardAIRoute_RouteData_o *v530; // x19
  WarBoardAIManager_c *v531; // x0
  __int64 v532; // x0
  __int64 v533; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *v534; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v535; // x8
  WarBoardPieceData_o *v536; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v537; // x9
  struct WarBoardPieceData_o *v538; // x9
  WarBoardAIManager_c *v539; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v542; // x1
  const MethodInfo *v543; // x5
  int32_t currentKey; // w21
  int32_t v545; // w22
  System_Int32_array *v546; // x0
  __int64 v547; // x1
  struct WarBoardStageNpcEntity_o *v548; // x8
  __int64 v549; // x1
  WarBoardAIRoute_RouteData_o *v550; // x19
  WarBoardAIManager_c *v551; // x0
  struct DefenseAreaData_o *v552; // x8
  __int64 v553; // x0
  __int64 v554; // x1
  WarBoardAIManager_c *v555; // x0
  System_Collections_Generic_Dictionary_int__object__o *v556; // x0
  const MethodInfo *v557; // x5
  bool v558; // w21
  int32_t v559; // w22
  int32_t v560; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v561; // x22
  WarBoardAIRoute_RouteData_o *v562; // x19
  System_Collections_Generic_Dictionary_int__uint__o *v563; // x25
  WarBoardData_o *v564; // x0
  WarBoardEffectData_o *Effect; // x0
  __int64 v566; // x1
  System_Collections_Generic_List_int__o *v567; // x22
  __int64 v568; // x1
  System_Collections_Generic_List_object__o *v569; // x0
  _BOOL8 v570; // x0
  __int64 v571; // x1
  Il2CppObject *v572; // x21
  Il2CppClass *v573; // x0
  _BOOL8 v574; // x0
  __int64 monitor_high; // x1
  struct System_Int32_array *v576; // x8
  _QWORD *v577; // x9
  __int64 v578; // x10
  WarBoardPieceData_o *v579; // x0
  __int64 v580; // x1
  WarBoardPieceData_o *v581; // x0
  _BOOL8 v582; // x0
  __int64 v583; // x1
  __int64 monitor_low; // x1
  struct System_Int32_array *v585; // x8
  _QWORD *v586; // x9
  __int64 v587; // x10
  __int64 v588; // x0
  __int64 v589; // x1
  WarBoardPieceData_o *v590; // x0
  _BOOL8 v591; // x0
  __int64 v592; // x1
  _BOOL8 CanAcquireItem; // x0
  __int64 v594; // x1
  WarBoardAIRoute_RouteData_o *v595; // x8
  int64_t v596; // x9
  WarBoardPieceData_o *v597; // x0
  _BOOL8 isMaster; // x0
  __int64 v599; // x1
  _BOOL8 v600; // x0
  __int64 v601; // x1
  WarBoardAIRoute_RouteData_o *v602; // x8
  WarBoardPieceData_o *v603; // x0
  _BOOL8 v604; // x0
  __int64 v605; // x1
  _BOOL8 v606; // x0
  __int64 v607; // x1
  __int64 v608; // x0
  __int64 v609; // x1
  __int64 FlagOutOfWarningAreaToDistance; // x0
  __int64 v611; // x1
  WarBoardAIRoute_RouteData_o *v612; // x8
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x9
  struct WarBoardPieceData_o *v614; // x8
  System_Collections_Generic_Dictionary_int__object__o *piecePersonalityDic; // x0
  Il2CppObject *v616; // x22
  WarBoardAIEvalCalcurater_o *v617; // x21
  __int64 v618; // x0
  __int64 v619; // x1
  const MethodInfo *v620; // x1
  WarBoardAIRoute___c_c *v621; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v622; // x22
  System_Func_object__object__o *_9__47_5; // x23
  Il2CppObject *v624; // x24
  struct WarBoardAIRoute___c_StaticFields *v625; // x0
  int32_t v626; // w2
  int32_t v627; // w3
  System_Collections_Generic_IEnumerable_T__o *v628; // x23
  System_Collections_Generic_List_object__o *v629; // x22
  __int64 v630; // x0
  __int64 v631; // x1
  int32_t v632; // w2
  int32_t v633; // w3
  Il2CppObject *v634; // x1
  struct System_Object_array *v635; // x8
  _QWORD *v636; // x9
  __int64 v637; // x10
  Il2CppClass **v638; // x0
  WarBoardAIRoute_RouteData_o *v639; // x0
  __int64 v640; // x1
  int32_t v641; // w2
  int32_t v642; // w3
  const MethodInfo *v643; // x1
  System_Collections_Generic_List_object__o *allRouteList; // x0
  struct System_Object_array *v645; // x8
  _QWORD *v646; // x9
  __int64 v647; // x10
  Il2CppClass **v648; // x8
  int32_t searchCount; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x21
  Il2CppObject *v651; // x0
  ServantStatusBattleListViewItem_o *p_basePieceBasePieceRouteList_5__23; // x8
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v653; // x10
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *basePieceBasePieceRouteList_5__23; // t1
  WarBoardAIRoute__CreateRouteData_d__47_o *v655; // x0
  int32_t v656; // w2
  int32_t v657; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v658; // x0
  int32_t v659; // w2
  int32_t v660; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v661; // x0
  int32_t v662; // w2
  int32_t v663; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v664; // x0
  int32_t v665; // w2
  int32_t v666; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v667; // x0
  int32_t v668; // w2
  int32_t v669; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v670; // x0
  int32_t v671; // w2
  int32_t v672; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v673; // x0
  int32_t v674; // w2
  int32_t v675; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v676; // x0
  int32_t v677; // w2
  int32_t v678; // w3
  Il2CppObject *v679; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v680; // x0
  int32_t v681; // w2
  int32_t v682; // w3
  System_Collections_Generic_Dictionary_int__uint__o *v683; // [xsp+10h] [xbp-1B0h]
  WarBoardAIRoute_o *_4__this; // [xsp+18h] [xbp-1A8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v685; // [xsp+20h] [xbp-1A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v686; // [xsp+50h] [xbp-170h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o **v687; // [xsp+78h] [xbp-148h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v688; // [xsp+80h] [xbp-140h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v689; // [xsp+B0h] [xbp-110h] BYREF
  __int128 v690; // [xsp+D0h] [xbp-F0h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v691; // [xsp+E0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v692; // [xsp+F0h] [xbp-D0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+118h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+120h] [xbp-A0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+128h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v696; // [xsp+130h] [xbp-90h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+148h] [xbp-78h] BYREF
  __int64 actionCount; // [xsp+150h] [xbp-70h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v699; // [xsp+158h] [xbp-68h] BYREF

  v4 = this;
  v699 = this;
  if ( (byte_4A1D736 & 1) == 0 )
  {
    sub_1B715CC(&AStarSearch_TypeInfo, method);
    sub_1B715CC(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___, v5);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__, v18);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__, v19);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__, v20);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v21);
    sub_1B715CC(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v22);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo, v23);
    sub_1B715CC(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___, v24);
    sub_1B715CC(&Method_System_Linq_Enumerable_Count_int___, v25);
    sub_1B715CC(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, v26);
    sub_1B715CC(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___, v27);
    sub_1B715CC(&Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___, v28);
    sub_1B715CC(
      &Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___,
      v29);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v30);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v31);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__,
      v32);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v33);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v34);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v35);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v36);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__,
      v37);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v38);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v39);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v40);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v41);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__,
      v42);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v43);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v44);
    sub_1B715CC(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo, v45);
    sub_1B715CC(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v46);
    sub_1B715CC(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo, v47);
    sub_1B715CC(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo, v48);
    sub_1B715CC(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo, v49);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__, v50);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__, v51);
    sub_1B715CC(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo, v52);
    sub_1B715CC(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo, v53);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo, v54);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v55);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__,
      v56);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__, v57);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v58);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v59);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v60);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v61);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v62);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v63);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__, v64);
    sub_1B715CC(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v65);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__, v66);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Contains__, v67);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v68);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v69);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v70);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___75825304, v71);
    sub_1B715CC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v72);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v73);
    sub_1B715CC(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v74);
    sub_1B715CC(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v75);
    sub_1B715CC(&WarBoardAIRoute_RouteData_TypeInfo, v76);
    sub_1B715CC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v77);
    sub_1B715CC(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__, v78);
    sub_1B715CC(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__, v79);
    sub_1B715CC(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__, v80);
    sub_1B715CC(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__, v81);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__, v82);
    sub_1B715CC(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo, v83);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__, v84);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__, v85);
    sub_1B715CC(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo, v86);
    sub_1B715CC(&WarBoardAIRoute___c_TypeInfo, v87);
    sub_1B715CC(&WarBoardAIEvalCalcurater_TypeInfo, v88);
    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)sub_1B715CC(&WarBoardAIManager_TypeInfo, v89);
    byte_4A1D736 = 1;
  }
  *(_QWORD *)masterReplaceCount = 0LL;
  actionCount = 0LL;
  memset(&v696, 0, sizeof(v696));
  value = 0LL;
  routeData = 0LL;
  route = 0LL;
  memset(&v689, 0, sizeof(v689));
  memset(&v692, 0, 32);
  v690 = 0u;
  v691 = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v688, 0, sizeof(v688));
  *(_QWORD *)&v686.fields._getEnumeratorRetType = 0LL;
  v687 = &v699;
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
      p__7__wrap24 = (ServantStatusBattleListViewItem_o *)&v699->fields.__7__wrap24;
      *(_QWORD *)&v699->fields.__7__wrap24 = 0LL;
      sub_1B71570(p__7__wrap24, 0, v282, v283);
      return 0;
    }
LABEL_117:
    v270 = *(__int64 **)&v4->fields.__7__wrap24;
    if ( !v270 )
      sub_1B71828(this, method);
    v271 = *v270;
    v272 = *(unsigned __int16 *)(*v270 + 302);
    if ( *(_WORD *)(*v270 + 302) )
    {
      v273 = (int *)(*(_QWORD *)(v271 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v273 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v272;
        v273 += 4;
        if ( !v272 )
          goto LABEL_122;
      }
      v274 = v271 + 16LL * *v273 + 312;
    }
    else
    {
LABEL_122:
      v274 = sub_1BC35AC(*(_QWORD *)&v4->fields.__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v275 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v274)(v270, *(_QWORD *)(v274 + 8));
    v4 = v699;
    if ( (v275 & 1) != 0 )
    {
      v276 = *(__int64 **)&v699->fields.__7__wrap24;
      if ( !v276 )
        sub_1B71828(v275, method);
      v277 = *v276;
      v278 = *(unsigned __int16 *)(*v276 + 302);
      if ( *(_WORD *)(*v276 + 302) )
      {
        v279 = (int *)(*(_QWORD *)(v277 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v279 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          --v278;
          v279 += 4;
          if ( !v278 )
            goto LABEL_130;
        }
        v280 = v277 + 16LL * *v279 + 312;
      }
      else
      {
LABEL_130:
        v280 = sub_1BC35AC(
                 *(_QWORD *)&v699->fields.__7__wrap24,
                 System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo,
                 0LL);
      }
      v284 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v280)(v276, *(_QWORD *)(v280 + 8));
      v285 = v699;
      v699->fields.__2__current = v284;
      v285 = (WarBoardAIRoute__CreateRouteData_d__47_o *)((char *)v285 + 24);
      ++LODWORD(v285->fields._baseSquare_5__11);
      sub_1B71570((ServantStatusBattleListViewItem_o *)v285, (int32_t)v284, v286, v287);
      result = 1;
      v699->fields.__1__state = 2;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      sub_1B71828(0LL, v93);
    monitor = (struct WarBoardData_o *)Instance[27].monitor;
    v97 = v699;
    v699->fields._warBoardData_5__2 = monitor;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v97->fields._warBoardData_5__2, (int32_t)monitor, v94, v95);
    if ( !_4__this )
      sub_1B71828(v98, v99);
    npcData = _4__this->fields.npcData;
    if ( !npcData )
      sub_1B71828(v98, v99);
    searchDepth = npcData->fields.searchDepth;
    if ( !searchDepth )
    {
      searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
      npcData->fields.searchDepth = searchDepth;
    }
    v102 = v699;
    v103 = v699->fields.searchCount + 1;
    v699->fields.searchCount = v103;
    if ( v103 > searchDepth )
      return 0;
    *(_QWORD *)masterReplaceCount = 0LL;
    actionCount = 0LL;
    WarBoardAIRoute__GetRouteDataActionList(
      _4__this,
      v102->fields.routeDataList,
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
    v699->fields._requiredCost_5__3 = RequiredCost;
    v105 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v105 )
      sub_1B71828(0LL, v106);
    if ( RequiredCost >= SHIDWORD(v105[47].klass) )
      return 0;
    MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v699->fields.piecePlaceData, 0LL);
    piecePlaceData = v699->fields.piecePlaceData;
    v699->fields._masterSquareIndex_5__4 = MasterSquareIndex;
    AllyPutSquareIndicesWithoutMaster = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                          _4__this,
                                          piecePlaceData,
                                          MasterSquareIndex,
                                          0LL);
    v110 = v699;
    v699->fields._allyPieceIndexs_5__5 = AllyPutSquareIndicesWithoutMaster;
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)&v110->fields._allyPieceIndexs_5__5,
      (int32_t)AllyPutSquareIndicesWithoutMaster,
      v111,
      v112);
    v113 = (ServantStatusBattleListViewItem_o *)v699;
    v699->fields._defenseAreaData_5__7 = 0LL;
    v113 = (ServantStatusBattleListViewItem_o *)((char *)v113 + 104);
    *(_QWORD *)&v113[-1].fields.isMine = 1LL;
    sub_1B71570(v113, 0, v114, v115);
    warBoardData_5__2 = v699->fields._warBoardData_5__2;
    if ( !warBoardData_5__2 )
      sub_1B71828(v116, v117);
    masterExistsForce = warBoardData_5__2->fields.masterExistsForce;
    if ( !masterExistsForce )
      sub_1B71828(0LL, v117);
    v120 = System_Collections_Generic_List_int___Contains(
             masterExistsForce,
             _4__this->fields.forceId,
             (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__);
    v122 = v699;
    if ( v120 )
    {
      if ( v699 )
      {
        v699->fields._masterExists_5__8 = 1;
LABEL_25:
        DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                            _4__this,
                            v122->fields._masterSquareIndex_5__4,
                            v122->fields._allyPieceIndexs_5__5,
                            v122->fields.piecePlaceData,
                            0LL);
        v128 = v699;
        v699->fields._defenseAreaData_5__7 = DefenseAreaData;
        sub_1B71570(
          (ServantStatusBattleListViewItem_o *)&v128->fields._defenseAreaData_5__7,
          (int32_t)DefenseAreaData,
          v129,
          v130);
        v133 = v699;
        defenseAreaData_5__7 = v699->fields._defenseAreaData_5__7;
        if ( !defenseAreaData_5__7 )
          sub_1B71828(v131, v132);
        v699->fields._baseFlag_5__6 |= defenseAreaData_5__7->fields._Flag_k__BackingField;
        aiRouteMasterData = _4__this->fields.aiRouteMasterData;
        if ( !aiRouteMasterData )
          sub_1B71828(v131, v132);
        IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                                 defenseAreaData_5__7->fields._ShortestRoutes_k__BackingField,
                                                 v133->fields.piecePlaceData,
                                                 aiRouteMasterData->fields.masterType == 1,
                                                 0LL);
        v122 = v699;
        if ( IsAllBlockShortestRouteEnemyAndMastr )
          v699->fields._baseFlag_5__6 |= 0x20000000uLL;
LABEL_29:
        v137 = v122->fields.piecePlaceData;
        if ( !v137 )
          sub_1B71828(0LL, v121);
        System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
          &v686,
          v137,
          (const MethodInfo_3154890 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
        v138 = v699;
        v139 = *(_OWORD *)&v686.fields._dictionary;
        p__7__wrap8 = (ServantStatusBattleListViewItem_o *)&v699->fields.__7__wrap8;
        *(_OWORD *)&v685.fields._dictionary = *(_OWORD *)&v686.fields._dictionary;
        v685.fields._current = v686.fields._current;
        v699->fields.__7__wrap8.fields._current = v686.fields._current;
        *(_OWORD *)&v138->fields.__7__wrap8.fields._dictionary = v139;
        sub_1B71570(p__7__wrap8, 0, v141, v142);
        v699->fields.__1__state = -3;
LABEL_44:
        while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                  &v699->fields.__7__wrap8,
                  (const MethodInfo_329121C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
        {
          key = v699->fields.__7__wrap8.fields._current.fields.key;
          v145 = (Il2CppObject *)sub_1B71818(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo);
          System_Object___ctor(v145, 0LL);
          v146 = v699;
          v699->fields.__8__1 = (struct WarBoardAIRoute___c__DisplayClass47_0_o *)v145;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v146->fields.__8__1, (int32_t)v145, v147, v148);
          v699->fields.__7__wrap8.fields._getEnumeratorRetType = (int)key;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          Square = WarBoardAIManager__GetSquare((int32_t)key, 0LL);
          v150 = v699;
          *(_QWORD *)&v699->fields._baseSquareIndex_5__10 = Square;
          sub_1B71570(
            (ServantStatusBattleListViewItem_o *)&v150->fields._baseSquareIndex_5__10,
            (int32_t)Square,
            v151,
            v152);
          _8__1 = v699->fields.__8__1;
          PieceUnique = WarBoardAIManager__GetPieceUnique(HIDWORD(key), 0LL);
          if ( !_8__1 )
            sub_1B71828(PieceUnique, PieceUnique);
          _8__1->fields.basePiece = PieceUnique;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&_8__1->fields, (int32_t)PieceUnique, v155, v156);
          v159 = v699;
          baseFlag_5__6 = v699->fields._baseFlag_5__6;
          v161 = v699->fields.__8__1;
          v699->fields._tmpFlagNow_5__12 = -1LL;
          v159->fields._servantAndMasterRange_5__13 = -1;
          v159->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
          if ( !v161 )
            sub_1B71828(v157, v158);
          if ( !_4__this )
            sub_1B71828(0LL, v158);
          v162 = WarBoardAIRoute__GetFlagAroundSquareCheck(
                   _4__this,
                   *(WarBoardSquareData_o **)&v159->fields._baseSquareIndex_5__10,
                   v161->fields.basePiece,
                   v159->fields.piecePlaceData,
                   v159->fields._masterSquareIndex_5__4,
                   0LL);
          v163 = v699;
          v699->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)(v162 | baseFlag_5__6);
          routeDataList = (System_Collections_Generic_IEnumerable_TSource__o *)v163->fields.routeDataList;
          v165 = (Il2CppObject *)v163->fields.__8__1;
          v166 = (System_Func_object__bool__o *)sub_1B71818(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v166,
            v165,
            Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
            0LL);
          v168 = System_Linq_Enumerable__Count_object__48732792(
                   routeDataList,
                   (System_Func_TSource__bool__o *)v166,
                   (const MethodInfo_2E79A78 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
          v169 = (System_Collections_Generic_List_object__o *)v699->fields.routeDataList;
          v699->fields._servantAndEnemyRange_5__14 = v168;
          if ( !v169 )
            sub_1B71828(0LL, v167);
          Only = System_Collections_Generic_List_object___AsReadOnly(
                   v169,
                   (const MethodInfo_34D0488 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
          v171 = v699->fields.__8__1;
          if ( !v171 )
            sub_1B71828(Only, Only);
          RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                      _4__this,
                                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                      v171->fields.basePiece,
                                      0LL);
          v174 = v699;
          v175 = v699->fields.__8__1;
          v699->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
          if ( !v175 )
            sub_1B71828(RouteSumPieceActionCost, v173);
          IsActable = WarBoardAIRoute__IsActable(
                        _4__this,
                        v175->fields.basePiece,
                        v174->fields._servantAndEnemyRange_5__14,
                        v174->fields._requiredCost_5__3,
                        RouteSumPieceActionCost,
                        0LL);
          if ( IsActable )
          {
            v178 = v699->fields.__8__1;
            if ( !v178 )
              sub_1B71828(IsActable, v177);
            DesignationItemToDistance = WarBoardAIRoute__GetDesignationItemToDistance(
                                          _4__this,
                                          v178->fields.basePiece,
                                          v699->fields.routeDataList,
                                          v699->fields.__7__wrap8.fields._getEnumeratorRetType,
                                          0LL);
            v180 = v699;
            *(_QWORD *)&v699->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
            sub_1B71570(
              (ServantStatusBattleListViewItem_o *)&v180->fields._sumPieceActionCost_5__17,
              (int32_t)DesignationItemToDistance,
              v181,
              v182);
            v185 = v699->fields.__8__1;
            if ( !v185 )
              sub_1B71828(v183, v184);
            TargetToDistance_35093476 = (struct System_Collections_Generic_Dictionary_int__int__o *)WarBoardAIRoute__GetTargetToDistance_35093476(_4__this, v185->fields.basePiece, v699->fields.routeDataList, v699->fields.__7__wrap8.fields._getEnumeratorRetType, 0LL);
            v187 = v699;
            v699->fields._dicBaseDIRange_5__18 = TargetToDistance_35093476;
            sub_1B71570(
              (ServantStatusBattleListViewItem_o *)&v187->fields._dicBaseDIRange_5__18,
              (int32_t)TargetToDistance_35093476,
              v188,
              v189);
            AllEnemyToDistance = WarBoardAIRoute__GetAllEnemyToDistance(
                                   _4__this,
                                   v699->fields.routeDataList,
                                   v699->fields.__7__wrap8.fields._getEnumeratorRetType,
                                   (int32_t *)&v699->fields._tmpFlagNow_5__12 + 1,
                                   &v699->fields._servantAndMasterRange_5__13,
                                   0LL);
            v191 = v699;
            v699->fields._dicKeyPutIndexValueTargetData_5__19 = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)AllEnemyToDistance;
            sub_1B71570(
              (ServantStatusBattleListViewItem_o *)&v191->fields._dicKeyPutIndexValueTargetData_5__19,
              (int32_t)AllEnemyToDistance,
              v192,
              v193);
            v194 = v699;
            v699->fields._dicEnemyRange_5__20 = 0LL;
            sub_1B71570((ServantStatusBattleListViewItem_o *)&v194->fields._dicEnemyRange_5__20, 0, v195, v196);
            v199 = v699->fields.__8__1;
            if ( !v199 )
              sub_1B71828(v197, v198);
            basePiece = v199->fields.basePiece;
            if ( !basePiece )
              sub_1B71828(0LL, v198);
            isServant = WarBoardPieceData__get_isServant(basePiece, 0LL);
            if ( isServant )
            {
              v203 = v699->fields.__8__1;
              if ( !v203 )
                sub_1B71828(isServant, v202);
              AdvantagePieceData = WarBoardAIRoute__GetAdvantagePieceData(
                                     _4__this,
                                     v203->fields.basePiece,
                                     v699->fields.__7__wrap8.fields._getEnumeratorRetType,
                                     0LL);
              v205 = v699;
              v699->fields._dicEnemyRange_5__20 = (struct System_Collections_Generic_Dictionary_uint__int__o *)AdvantagePieceData;
              sub_1B71570(
                (ServantStatusBattleListViewItem_o *)&v205->fields._dicEnemyRange_5__20,
                (int32_t)AdvantagePieceData,
                v206,
                v207);
              if ( v699->fields._masterExists_5__8 )
              {
                masterSquareIndex_5__4 = v699->fields._masterSquareIndex_5__4;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v210 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              (int32_t)key,
                                                                              masterSquareIndex_5__4,
                                                                              0,
                                                                              0LL,
                                                                              v208);
                v211 = System_Linq_Enumerable__Count_int_(
                         v210,
                         (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
                v213 = v699;
                v214 = v699->fields.__8__1;
                LODWORD(v699->fields._tmpFlagNow_5__12) = v211;
                if ( !v214 )
                  sub_1B71828(v211, v212);
                v215 = v214->fields.basePiece;
                if ( !v215 )
                  sub_1B71828(v211, v212);
                v216 = _4__this->fields.aiRouteMasterData;
                if ( !v216 )
                  sub_1B71828(v211, v212);
                masterType = v216->fields.masterType;
                index_k__BackingField = v215->fields._index_k__BackingField;
                if ( masterType != 2 || v216->fields.masterPieceIndex != index_k__BackingField )
                {
                  v219 = _4__this->fields.npcData;
                  if ( !v219 )
                    sub_1B71828(v211, v212);
                  if ( v219->fields.defenseArea > (int)v211 )
                    v213->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v213->fields._baseSquare_5__11 | 0x800);
                  if ( (masterType != 2 || v216->fields.masterPieceIndex != index_k__BackingField)
                    && WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                         v213->fields._defenseAreaData_5__7,
                         v213->fields.__7__wrap8.fields._getEnumeratorRetType,
                         masterType == 1,
                         0LL) )
                  {
                    v699->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v699->fields._baseSquare_5__11 | 0x80000000);
                  }
                }
              }
            }
            v220 = (System_Collections_Generic_HashSet_T__o *)sub_1B71818(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_object____ctor(
              v220,
              (const MethodInfo_338EE34 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v221 = v699;
            v699->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v220;
            sub_1B71570(
              (ServantStatusBattleListViewItem_o *)&v221->fields._advantagePieceData_5__21,
              (int32_t)v220,
              v222,
              v223);
            v224 = (System_Collections_Generic_HashSet_T__o *)sub_1B71818(System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo);
            System_Collections_Generic_HashSet_object____ctor(
              v224,
              (const MethodInfo_338EE34 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v225 = v699;
            v699->fields._basePieceActionPieceRouteList_5__22 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)v224;
            sub_1B71570(
              (ServantStatusBattleListViewItem_o *)&v225->fields._basePieceActionPieceRouteList_5__22,
              (int32_t)v224,
              v226,
              v227);
            v229 = (System_Collections_Generic_List_object__o *)v699->fields.routeDataList;
            if ( !v229 )
              sub_1B71828(0LL, v228);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v685,
              v229,
              (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
            *(_OWORD *)&v696.fields._list = *(_OWORD *)&v685.fields._dictionary;
            v696.fields._current = v685.fields._current.fields.key;
            while ( 1 )
            {
              v230 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v696,
                       (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
              if ( !v230 )
                break;
              current = v696.fields._current;
              if ( !v696.fields._current )
                sub_1B71828(v230, v231);
              if ( LODWORD(v696.fields._current[1].monitor) != HIDWORD(v696.fields._current[1].monitor) )
              {
                klass = v696.fields._current[3].klass;
                if ( !klass )
                  sub_1B71828(v230, v231);
                v234 = v699->fields.__8__1;
                if ( !v234 )
                  sub_1B71828(v230, v231);
                v235 = v234->fields.basePiece;
                if ( !v235 )
                  sub_1B71828(v230, v231);
                if ( HIDWORD(klass->_1.namespaze) == v235->fields._index_k__BackingField )
                {
                  basePieceActionPieceRouteList_5__22 = (System_Collections_Generic_HashSet_T__o *)v699->fields._basePieceActionPieceRouteList_5__22;
                  if ( !basePieceActionPieceRouteList_5__22 )
                    sub_1B71828(0LL, v231);
                  v230 = System_Collections_Generic_HashSet_object___Add(
                           basePieceActionPieceRouteList_5__22,
                           v696.fields._current,
                           (const MethodInfo_3390018 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                }
                if ( (BYTE3(current[1].klass) & 4) != 0 )
                {
                  v237 = current[3].monitor;
                  if ( !v237 )
                    sub_1B71828(v230, v231);
                  v238 = v699->fields.__8__1;
                  if ( !v238 )
                    sub_1B71828(v230, v231);
                  v239 = v238->fields.basePiece;
                  if ( !v239 )
                    sub_1B71828(v230, v231);
                  if ( v237[7] == v239->fields._index_k__BackingField )
                  {
                    advantagePieceData_5__21 = v699->fields._advantagePieceData_5__21;
                    if ( !advantagePieceData_5__21 )
                      sub_1B71828(0LL, v231);
                    System_Collections_Generic_HashSet_object___Add(
                      (System_Collections_Generic_HashSet_T__o *)advantagePieceData_5__21,
                      current,
                      (const MethodInfo_3390018 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                  }
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v696,
              (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
            v289 = *(WarBoardSquareData_o **)&v699->fields._baseSquareIndex_5__10;
            if ( !v289 )
              sub_1B71828(0LL, v288);
            MyAndLinkedSquareIndecies = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)WarBoardSquareData__GetMyAndLinkedSquareIndecies(v289, 0LL);
            v291 = v699;
            v699->fields._basePieceBasePieceRouteList_5__23 = MyAndLinkedSquareIndecies;
            sub_1B71570(
              (ServantStatusBattleListViewItem_o *)&v291->fields._basePieceBasePieceRouteList_5__23,
              (int32_t)MyAndLinkedSquareIndecies,
              v292,
              v293);
            v294 = v699;
            v295 = 0;
            LODWORD(v699->fields.__7__wrap23) = 0;
            while ( 2 )
            {
              basePieceBasePieceRouteList_5__23 = v294->fields._basePieceBasePieceRouteList_5__23;
              p_basePieceBasePieceRouteList_5__23 = (ServantStatusBattleListViewItem_o *)&v294->fields._basePieceBasePieceRouteList_5__23;
              v653 = basePieceBasePieceRouteList_5__23;
              if ( !basePieceBasePieceRouteList_5__23 )
                sub_1B71828(this, method);
              if ( v295 >= SLODWORD(v653->fields._slots) )
              {
                p_basePieceBasePieceRouteList_5__23->klass = 0LL;
                sub_1B71570(p_basePieceBasePieceRouteList_5__23, 0, v2, v3);
                v655 = v699;
                v699->fields.__8__1 = 0LL;
                sub_1B71570((ServantStatusBattleListViewItem_o *)&v655->fields.__8__1, 0, v656, v657);
                v658 = v699;
                *(_QWORD *)&v699->fields._baseSquareIndex_5__10 = 0LL;
                sub_1B71570((ServantStatusBattleListViewItem_o *)&v658->fields._baseSquareIndex_5__10, 0, v659, v660);
                v661 = v699;
                *(_QWORD *)&v699->fields._sumPieceActionCost_5__17 = 0LL;
                sub_1B71570((ServantStatusBattleListViewItem_o *)&v661->fields._sumPieceActionCost_5__17, 0, v662, v663);
                v664 = v699;
                v699->fields._dicBaseDIRange_5__18 = 0LL;
                sub_1B71570((ServantStatusBattleListViewItem_o *)&v664->fields._dicBaseDIRange_5__18, 0, v665, v666);
                v667 = v699;
                v699->fields._dicKeyPutIndexValueTargetData_5__19 = 0LL;
                sub_1B71570(
                  (ServantStatusBattleListViewItem_o *)&v667->fields._dicKeyPutIndexValueTargetData_5__19,
                  0,
                  v668,
                  v669);
                v670 = v699;
                v699->fields._dicEnemyRange_5__20 = 0LL;
                sub_1B71570((ServantStatusBattleListViewItem_o *)&v670->fields._dicEnemyRange_5__20, 0, v671, v672);
                v673 = v699;
                v699->fields._advantagePieceData_5__21 = 0LL;
                sub_1B71570((ServantStatusBattleListViewItem_o *)&v673->fields._advantagePieceData_5__21, 0, v674, v675);
                v676 = v699;
                v699->fields._basePieceActionPieceRouteList_5__22 = 0LL;
                sub_1B71570(
                  (ServantStatusBattleListViewItem_o *)&v676->fields._basePieceActionPieceRouteList_5__22,
                  0,
                  v677,
                  v678);
                goto LABEL_44;
              }
              v296 = sub_1B71818(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v296, 0LL);
              v299 = v699->fields._basePieceBasePieceRouteList_5__23;
              if ( !v299 )
                sub_1B71828(v297, v298);
              _7__wrap23_low = SLODWORD(v699->fields.__7__wrap23);
              if ( (unsigned int)_7__wrap23_low >= LODWORD(v299->fields._slots) )
                sub_1B71830(v297, v298);
              if ( !v296 )
                sub_1B71828(v297, v298);
              *(_DWORD *)(v296 + 16) = *(&v299->fields._count + _7__wrap23_low);
              v301 = (int32_t *)(v296 + 16);
              v302 = (WarBoardAIRoute_RouteData_o *)sub_1B71818(WarBoardAIRoute_RouteData_TypeInfo);
              WarBoardAIRoute_RouteData___ctor(v302, v303);
              routeData = v302;
              if ( !v302 )
                sub_1B71828(this, method);
              v304 = v699;
              getEnumeratorRetType = v699->fields.__7__wrap8.fields._getEnumeratorRetType;
              v302->fields.baseIndex = getEnumeratorRetType;
              v306 = *v301;
              v302->fields.actionIndex = *v301;
              if ( getEnumeratorRetType == v306 )
              {
                v307 = v304->fields.routeDataList;
                if ( !v307 )
                  sub_1B71828(this, method);
                if ( v307->fields._size > 0 )
                  goto LABEL_648;
              }
              dicBaseDIRange_5__18 = (System_Collections_Generic_IEnumerable_TSource__o *)v304->fields._dicBaseDIRange_5__18;
              v309 = WarBoardAIRoute___c_TypeInfo;
              if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v309 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_1 = (System_Func_T__TResult__o *)v309->static_fields->__9__47_1;
              if ( !_9__47_1 )
              {
                if ( !v309->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v309);
                  v309 = WarBoardAIRoute___c_TypeInfo;
                }
                v311 = (Il2CppObject *)v309->static_fields->__9;
                _9__47_1 = (System_Func_T__TResult__o *)sub_1B71818(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo);
                System_Func_KeyValuePair_long__object___long____ctor(
                  _9__47_1,
                  v311,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
                  0LL);
                static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
                static_fields->__9__47_1 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)_9__47_1;
                sub_1B71570(
                  (ServantStatusBattleListViewItem_o *)&static_fields->__9__47_1,
                  (int32_t)_9__47_1,
                  v313,
                  v314);
                v309 = WarBoardAIRoute___c_TypeInfo;
              }
              if ( !v309->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v309);
                v309 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_2 = (System_Func_T__TResult__o *)v309->static_fields->__9__47_2;
              if ( !_9__47_2 )
              {
                if ( !v309->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v309);
                  v309 = WarBoardAIRoute___c_TypeInfo;
                }
                v316 = (Il2CppObject *)v309->static_fields->__9;
                _9__47_2 = (System_Func_T__TResult__o *)sub_1B71818(System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo);
                System_Func_KeyValuePair_long__object___object____ctor(
                  _9__47_2,
                  v316,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
                  0LL);
                v317 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v317->__9__47_2 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)_9__47_2;
                sub_1B71570((ServantStatusBattleListViewItem_o *)&v317->__9__47_2, (int32_t)_9__47_2, v318, v319);
              }
              v323 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__object___long__object_(
                                                                                                    dicBaseDIRange_5__18,
                                                                                                    (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                                    (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                                    (const MethodInfo_2E946A4 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
              v324 = routeData;
              if ( !routeData )
                sub_1B71828(0LL, v320);
              v325 = *(struct WarBoardSquareData_o **)&v699->fields._baseSquareIndex_5__10;
              routeData->fields.baseSquare = v325;
              sub_1B71570((ServantStatusBattleListViewItem_o *)&v324->fields.baseSquare, (int32_t)v325, v321, v322);
              v330 = v699->fields.__8__1;
              if ( !v330 )
                sub_1B71828(v326, v327);
              v331 = routeData;
              if ( !routeData )
                sub_1B71828(0LL, v327);
              v332 = v330->fields.basePiece;
              routeData->fields.basePiece = v332;
              sub_1B71570((ServantStatusBattleListViewItem_o *)&v331->fields.basePiece, (int32_t)v332, v328, v329);
              v336 = routeData;
              if ( !routeData )
                sub_1B71828(0LL, v333);
              routeData->fields.actionPiece = 0LL;
              sub_1B71570((ServantStatusBattleListViewItem_o *)&v336->fields.actionPiece, 0, v334, v335);
              v337 = routeData;
              v338 = *v301;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              v339 = WarBoardAIManager__GetSquare(v338, 0LL);
              if ( !v337 )
                sub_1B71828(v339, v339);
              v337->fields.actionSquare = v339;
              sub_1B71570((ServantStatusBattleListViewItem_o *)&v337->fields.actionSquare, (int32_t)v339, v340, v341);
              dicKeyPutIndexValueTargetData_5__19 = (System_Collections_Generic_Dictionary_uint__int__o *)v699->fields._dicKeyPutIndexValueTargetData_5__19;
              if ( !dicKeyPutIndexValueTargetData_5__19 )
                sub_1B71828(0LL, v342);
              v344 = routeData;
              if ( System_Collections_Generic_Dictionary_uint__int___get_Count(
                     dicKeyPutIndexValueTargetData_5__19,
                     (const MethodInfo_31CE454 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0 )
              {
                v348 = 0x7FFFFFFFLL;
                if ( !v344 )
                  goto LABEL_253;
              }
              else
              {
                v346 = (System_Collections_Generic_Dictionary_uint__int__o *)v699->fields._dicKeyPutIndexValueTargetData_5__19;
                if ( !v346 )
                  sub_1B71828(0LL, v345);
                Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                           v346,
                           (const MethodInfo_31CE5B4 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
                v348 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
                if ( !v344 )
LABEL_253:
                  sub_1B71828(v348, v345);
              }
              v344->fields.EnemyRangeMin = v348;
              v349 = v699->fields.__8__1;
              if ( !v349 )
                sub_1B71828(v348, v345);
              if ( !_4__this )
                sub_1B71828(0LL, v345);
              v350 = routeData;
              MoveByTargetDistance = WarBoardAIRoute__GetMoveByTargetDistance(
                                       _4__this,
                                       v323,
                                       *v301,
                                       v349->fields.basePiece,
                                       0LL);
              if ( !v350 )
                sub_1B71828(MoveByTargetDistance, MoveByTargetDistance);
              v350->fields.dicPutIndexTargetData = MoveByTargetDistance;
              sub_1B71570(
                (ServantStatusBattleListViewItem_o *)&v350->fields.dicPutIndexTargetData,
                (int32_t)MoveByTargetDistance,
                v352,
                v353);
              v356 = v699->fields.__8__1;
              if ( !v356 )
                sub_1B71828(v354, v355);
              v357 = routeData;
              ActionPiece = WarBoardAIRoute__GetActionPiece(
                              _4__this,
                              v356->fields.basePiece,
                              *v301,
                              v699->fields.piecePlaceData,
                              0LL);
              if ( !v357 )
                sub_1B71828(ActionPiece, ActionPiece);
              v357->fields.actionPiece = ActionPiece;
              sub_1B71570(
                (ServantStatusBattleListViewItem_o *)&v357->fields.actionPiece,
                (int32_t)ActionPiece,
                v359,
                v360);
              v365 = v699->fields.__8__1;
              if ( !v365 )
                sub_1B71828(p_actionPiece, v362);
              v366 = v365->fields.basePiece;
              if ( !v366 )
                sub_1B71828(p_actionPiece, v362);
              if ( v366->fields._nowSquareIndex_k__BackingField == *v301 )
              {
                if ( !routeData )
                  sub_1B71828(0LL, v362);
                p_actionPiece = (ServantStatusBattleListViewItem_o *)&routeData->fields.actionPiece;
                v367 = routeData->fields.actionPiece;
                if ( v367 )
                {
                  if ( v367->fields._uniqueIndex_k__BackingField == v366->fields._uniqueIndex_k__BackingField )
                  {
                    p_actionPiece->klass = 0LL;
                    sub_1B71570(p_actionPiece, 0, v363, (int32_t)v364);
                    v365 = v699->fields.__8__1;
                    if ( !v365 )
                      sub_1B71828(p_actionPiece, v362);
                  }
                }
              }
              v368 = v365->fields.basePiece;
              if ( !v368 )
                sub_1B71828(p_actionPiece, v362);
              limitActionCount_k__BackingField = v368->fields._limitActionCount_k__BackingField;
              currentActionCount_k__BackingField = v368->fields._currentActionCount_k__BackingField;
              if ( !byte_4A1ADDE )
              {
                sub_1B715CC(&System_Math_TypeInfo, v362);
                byte_4A1ADDE = 1;
              }
              v371 = System_Math_TypeInfo;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v372 = routeData;
              if ( !routeData )
                sub_1B71828(v371, v362);
              v373 = v699;
              v374 = limitActionCount_k__BackingField - currentActionCount_k__BackingField;
              if ( limitActionCount_k__BackingField - currentActionCount_k__BackingField < 0 )
                v374 = currentActionCount_k__BackingField - limitActionCount_k__BackingField;
              routeData->fields.actionCountOnThisTurn = v374 + v699->fields._servantAndEnemyRange_5__14 + 1;
              baseSquare_5__11 = v373->fields._baseSquare_5__11;
              *(_QWORD *)&v372->fields.attackByLinkedEnemy = 0LL;
              v372->fields.flagNow = (int64_t)baseSquare_5__11;
              v376 = v373->fields._warBoardData_5__2;
              if ( !v376 )
                sub_1B71828(0LL, v362);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardData__GetWall(v376, *v301, 0, v364);
              v377 = this;
              if ( this )
              {
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                if ( !this )
                  sub_1B71828(0LL, method);
                if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.wallAttackCost
                                                                + v699->fields._requiredCost_5__3 )
                  goto LABEL_648;
                v378 = v699->fields.__8__1;
                if ( !v378 )
                  sub_1B71828(this, method);
                v379 = v378->fields.basePiece;
                if ( !v379 )
                  sub_1B71828(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableWallAttack(
                                                                     v379,
                                                                     v699->fields._servantAndEnemyMasterRange_5__15,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_648;
                v380 = v699->fields.__8__1;
                if ( !v380 )
                  sub_1B71828(this, method);
                v381 = v380->fields.basePiece;
                if ( !v381 )
                  sub_1B71828(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__CheckWallAttackCond(
                                                                     v381,
                                                                     (WarBoardWallData_o *)v377,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_648;
              }
              if ( !routeData )
                sub_1B71828(this, method);
              v382 = routeData->fields.actionPiece;
              if ( v382 )
              {
                v383 = v699->fields.__8__1;
                if ( !v383 )
                  sub_1B71828(this, method);
                v384 = v383->fields.basePiece;
                if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsEnemyPiece(v384, v382, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v385 = v699->fields.__8__1;
                  if ( !v385 )
                    sub_1B71828(this, method);
                  v386 = v385->fields.basePiece;
                  if ( !v386 )
                    sub_1B71828(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v386, 0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_239;
                  if ( !routeData )
                    sub_1B71828(this, method);
                  v387 = routeData->fields.actionPiece;
                  if ( !v387 )
                    sub_1B71828(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v387, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_239:
                    v388 = routeData;
                    if ( !routeData )
                      sub_1B71828(this, method);
                    v389 = routeData->fields.basePiece;
                    routeData->fields.flagNow |= 2uLL;
                    if ( !v389 )
                      sub_1B71828(this, method);
                    v390 = v388->fields.actionPiece;
                    v388->fields.attackCountOnThisTurn = v389->fields._attackCount_k__BackingField + 1;
                    if ( !v390 )
                      sub_1B71828(0LL, method);
                    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isServant(v390, 0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v391 = routeData;
                      if ( !routeData )
                        sub_1B71828(this, method);
                      v392 = v699->fields.__8__1;
                      if ( !v392 )
                        sub_1B71828(this, method);
                      v393 = v392->fields.basePiece;
                      if ( !v393 )
                        sub_1B71828(this, method);
                      battleServant_k__BackingField = v393->fields._battleServant_k__BackingField;
                      if ( !battleServant_k__BackingField )
                        sub_1B71828(0LL, method);
                      flagNow = routeData->fields.flagNow;
                      ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
                      if ( !routeData )
                        sub_1B71828(ClassId, v397);
                      v398 = routeData->fields.actionPiece;
                      if ( !v398 )
                        sub_1B71828(ClassId, v397);
                      v399 = ClassId;
                      v400 = v398->fields._battleServant_k__BackingField;
                      if ( !v400 )
                        sub_1B71828(0LL, v397);
                      v401 = BattleServantData__getClassId(v400, 0LL);
                      FlagAdvantage = WarBoardAIRoute__GetFlagAdvantage(_4__this, v399, v401, 0LL);
                      v391->fields.flagNow = FlagAdvantage | flagNow;
                      if ( !routeData )
                        sub_1B71828(FlagAdvantage, v403);
                      WarBoardAIRoute__LinkedCount(
                        _4__this,
                        *v301,
                        v699->fields.piecePlaceData,
                        &routeData->fields.attackByLinkedEnemy,
                        &routeData->fields.attackByLinkedAlly,
                        0LL);
                    }
                    break;
                  }
LABEL_648:
                  v294 = v699;
                  v295 = LODWORD(v699->fields.__7__wrap23) + 1;
                  LODWORD(v699->fields.__7__wrap23) = v295;
                  continue;
                }
                if ( !routeData )
                  sub_1B71828(this, method);
                v404 = routeData->fields.actionPiece;
                if ( !v404 )
                  sub_1B71828(this, method);
                if ( v404->fields._roleType_k__BackingField == 1 )
                  goto LABEL_648;
                v405 = v699->fields.__8__1;
                if ( !v405 )
                  sub_1B71828(this, method);
                v406 = v405->fields.basePiece;
                if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsAllyPiece(v406, v404, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !routeData )
                    sub_1B71828(this, method);
                  routeData->fields.flagNow |= 0x4000000uLL;
                }
              }
              break;
            }
            v407 = routeData;
            if ( !routeData )
              sub_1B71828(this, method);
            if ( (routeData->fields.flagNow & 2) != 0 )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_1B71828(0LL, method);
              if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.attackCost
                                                              + v699->fields._requiredCost_5__3 )
                goto LABEL_648;
              v425 = v699->fields.__8__1;
              if ( !v425 )
                sub_1B71828(this, method);
              v426 = v425->fields.basePiece;
              if ( !v426 )
                sub_1B71828(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableAttack(
                                                                   v426,
                                                                   v699->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_648;
              v407 = routeData;
              if ( !routeData )
                sub_1B71828(this, method);
            }
            if ( (v407->fields.flagNow & 2) == 0 )
            {
              v408 = v699->fields.__8__1;
              if ( !v408 )
                sub_1B71828(this, method);
              v409 = v408->fields.basePiece;
              if ( !v409 )
                sub_1B71828(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableMoveBySelf(
                                                                   v409,
                                                                   v699->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_648;
              v407 = routeData;
              if ( !routeData )
                sub_1B71828(this, method);
            }
            if ( (v407->fields.flagNow & 0x4000000) != 0 )
            {
              v410 = v699->fields.__8__1;
              if ( !v410 )
                sub_1B71828(this, method);
              v411 = (System_Collections_Generic_List_object__o *)v699->fields.routeDataList;
              if ( !v411 )
                sub_1B71828(0LL, method);
              requiredCost_5__3 = v699->fields._requiredCost_5__3;
              v413 = v410->fields.basePiece;
              v414 = v407->fields.actionPiece;
              v415 = System_Collections_Generic_List_object___AsReadOnly(
                       v411,
                       (const MethodInfo_34D0488 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIRoute__IsActableReplace(
                                                                   _4__this,
                                                                   v413,
                                                                   v414,
                                                                   requiredCost_5__3,
                                                                   (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v415,
                                                                   v699->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_648;
              v407 = routeData;
            }
            updated = WarBoardAIRoute__UpdatePiecePlaceData(
                        _4__this,
                        v699->fields.piecePlaceData,
                        v407,
                        v699->fields.__7__wrap8.fields._getEnumeratorRetType,
                        *v301,
                        0LL);
            MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(_4__this, updated, 0LL);
            v418 = v699->fields._basePieceActionPieceRouteList_5__22;
            v419 = (System_Func_object__bool__o *)sub_1B71818(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v419,
              (Il2CppObject *)v296,
              Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
              0LL);
            v420 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__48671888(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v418,
                                          (System_Func_TSource__bool__o *)v419,
                                          (const MethodInfo_2E6AC90 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)v420 & 1) != 0
              || (v422 = v699->fields._advantagePieceData_5__21,
                  v423 = (System_Func_object__bool__o *)sub_1B71818(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo),
                  System_Func_object__bool____ctor(
                    v423,
                    (Il2CppObject *)v296,
                    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
                    0LL),
                  v420 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__48671888(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)v422,
                                                (System_Func_TSource__bool__o *)v423,
                                                (const MethodInfo_2E6AC90 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___),
                  ((unsigned __int8)v420 & 1) != 0) )
            {
              if ( !routeData )
                sub_1B71828(v420, v421);
              routeData->fields.flagNow |= 0x20000000000uLL;
            }
            if ( v699->fields._masterExists_5__8 )
            {
              if ( v699->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
                goto LABEL_291;
              if ( !routeData )
                sub_1B71828(v420, v421);
              if ( (routeData->fields.flagNow & 0x400) != 0 )
              {
LABEL_291:
                v427 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                         _4__this,
                         updated,
                         MasterSquareIndexFromPlaceData,
                         0LL);
                v420 = WarBoardAIRoute__GetDefenseAreaData(_4__this, MasterSquareIndexFromPlaceData, v427, updated, 0LL);
                v424 = v420;
              }
              else
              {
                v424 = v699->fields._defenseAreaData_5__7;
              }
              if ( !v424 )
                sub_1B71828(v420, v421);
              v428 = _4__this->fields.aiRouteMasterData;
              if ( !v428 )
                sub_1B71828(v420, v421);
              v429 = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                       v424->fields._ShortestRoutes_k__BackingField,
                       updated,
                       v428->fields.masterType == 1,
                       0LL);
              v431 = routeData;
              if ( v429 )
              {
                if ( !routeData )
                  sub_1B71828(v429, v430);
                routeData->fields.flagNow |= 0x40000000uLL;
              }
              else if ( !routeData )
              {
                sub_1B71828(v429, v430);
              }
              v432 = v431->fields.flagNow;
              if ( (v432 & 0x400) != 0 && (v424->fields._Flag_k__BackingField & 0x10000000000LL) != 0 )
                v431->fields.flagNow = v432 | 0x40000000000LL;
            }
            else
            {
              v431 = routeData;
            }
            v433 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v433,
              (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v431 )
              sub_1B71828(v434, v435);
            v431->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v433;
            sub_1B71570((ServantStatusBattleListViewItem_o *)&v431->fields.moveByLinkedPiece, (int32_t)v433, v436, v437);
            v440 = routeData;
            if ( !routeData )
              sub_1B71828(v438, v439);
            *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0LL;
            v441 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1B71818(System_Collections_Generic_Dictionary_uint__int__TypeInfo);
            System_Collections_Generic_Dictionary_uint__int____ctor(
              v441,
              (const MethodInfo_31CDDDC *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
            v440->fields.dicUniqueKeyRange = v441;
            sub_1B71570((ServantStatusBattleListViewItem_o *)&v440->fields.dicUniqueKeyRange, (int32_t)v441, v442, v443);
            v445 = v699->fields.piecePlaceData;
            if ( !v445 )
              sub_1B71828(0LL, v444);
            v683 = updated;
            System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
              &v685,
              v445,
              (const MethodInfo_3154890 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
            *(_OWORD *)&v692.fields._dictionary = *(_OWORD *)&v685.fields._dictionary;
            v692.fields._current = v685.fields._current;
            while ( 1 )
            {
              v446 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                       &v692,
                       (const MethodInfo_329121C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
              if ( !v446 )
                break;
              v449 = v699->fields.__8__1;
              if ( !v449 )
                sub_1B71828(v446, v447);
              v450 = v449->fields.basePiece;
              if ( !v450 )
                sub_1B71828(v446, v447);
              key_high = HIDWORD(v692.fields._current.fields.key);
              if ( v450->fields._uniqueIndex_k__BackingField != HIDWORD(v692.fields._current.fields.key) )
              {
                if ( !routeData )
                  sub_1B71828(v446, v447);
                v452 = (int32_t)v692.fields._current.fields.key;
                dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
                v454 = *v301;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v455 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v454,
                                                                              v452,
                                                                              0,
                                                                              0LL,
                                                                              v448);
                v456 = System_Linq_Enumerable__Count_int_(
                         v455,
                         (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !dicUniqueKeyRange )
                  sub_1B71828(v456, v457);
                System_Collections_Generic_Dictionary_uint__int___Add(
                  dicUniqueKeyRange,
                  key_high,
                  v456,
                  (const MethodInfo_31CE7A0 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
              &v692,
              (const MethodInfo_329131C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
            v458 = routeData;
            v459 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v459,
              (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v458 )
              sub_1B71828(v460, v461);
            v458->fields.listExistDesignationItem = v459;
            sub_1B71570(
              (ServantStatusBattleListViewItem_o *)&v458->fields.listExistDesignationItem,
              (int32_t)v459,
              v462,
              v463);
            v464 = routeData;
            v465 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v465,
              (const MethodInfo_31395F8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( !v464 )
              sub_1B71828(v466, v467);
            v464->fields.dicMoveByServantGetDesignationItem = v465;
            sub_1B71570(
              (ServantStatusBattleListViewItem_o *)&v464->fields.dicMoveByServantGetDesignationItem,
              (int32_t)v465,
              v468,
              v469);
            v470 = routeData;
            v471 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo);
            System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
              v471,
              (const MethodInfo_31421C0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
            if ( !v470 )
              sub_1B71828(v472, v473);
            v470->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)v471;
            sub_1B71570(
              (ServantStatusBattleListViewItem_o *)&v470->fields.dicItemIdKeyIsMoveByServantDesignationItemRange,
              (int32_t)v471,
              v474,
              v475);
            v478 = routeData;
            if ( !routeData )
              sub_1B71828(v476, v477);
            routeData->fields.isMoveByOutOfWarningArea = 0;
            *(_QWORD *)&v478->fields.isMoveByServantAndEnemyRange = 0LL;
            *(_QWORD *)&v478->fields.isMoveByMasterAndEnemyRange = 0LL;
            *(_QWORD *)&v478->fields.isMoveByServantAndAttackAdvantageServantRange = 0LL;
            *(_QWORD *)&v478->fields.isMoveByServantAndDefenseAdvantageServantRange = 0LL;
            *(_QWORD *)&v478->fields.isMoveByServantAndClassAdvantageServantRange = 0LL;
            v479 = v699->fields.__8__1;
            if ( !v479 )
              sub_1B71828(v476, v477);
            v480 = v479->fields.basePiece;
            if ( !v480 )
              sub_1B71828(0LL, v477);
            IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isServant(v480, 0LL);
            if ( IsBlockShortestRouteEnemyAndMaster )
            {
              v485 = v699;
              if ( v699->fields._masterExists_5__8 )
              {
                v486 = v699->fields.__8__1;
                if ( !v486 )
                  sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                v487 = v486->fields.basePiece;
                if ( !v487 )
                  sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                v488 = _4__this->fields.aiRouteMasterData;
                if ( !v488 )
                  sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                if ( v488->fields.masterType != 2
                  || v488->fields.masterPieceIndex != v487->fields._index_k__BackingField )
                {
                  v489 = v699->fields._defenseAreaData_5__7;
                  if ( !v489 )
                    sub_1B71828(0LL, v482);
                  IsBlockShortestRouteEnemyAndMaster = DefenseAreaData__IsInDefenseArea(v489, *v301, 0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                    routeData->fields.flagNow |= 0x4000000000uLL;
                  }
                }
                v490 = v699->fields.__8__1;
                if ( !v490 )
                  sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                v491 = v490->fields.basePiece;
                if ( !v491 )
                  sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                v492 = _4__this->fields.aiRouteMasterData;
                if ( !v492 )
                  sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                v493 = v492->fields.masterType;
                if ( v493 != 2 || v492->fields.masterPieceIndex != v491->fields._index_k__BackingField )
                {
                  IsBlockShortestRouteEnemyAndMaster = WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                                                         v699->fields._defenseAreaData_5__7,
                                                         *v301,
                                                         v493 == 1,
                                                         0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                    routeData->fields.flagNow |= 0x100000000uLL;
                  }
                }
                v485 = v699;
                v494 = v699->fields.__8__1;
                if ( !v494 )
                  sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                v495 = v494->fields.basePiece;
                if ( !v495 )
                  sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                v496 = _4__this->fields.aiRouteMasterData;
                if ( !v496 )
                  sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                if ( v496->fields.masterType != 2
                  || v496->fields.masterPieceIndex != v495->fields._index_k__BackingField )
                {
                  v497 = *v301;
                  if ( *v301 == MasterSquareIndexFromPlaceData )
                  {
                    if ( !routeData )
                      sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                    routeData->fields.isMoveByServantAndMasterRange = 2;
                  }
                  else
                  {
                    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                    v498 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                                  0LL,
                                                                                  v497,
                                                                                  MasterSquareIndexFromPlaceData,
                                                                                  0,
                                                                                  0LL,
                                                                                  v484);
                    v499 = System_Linq_Enumerable__Count_int_(
                             v498,
                             (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
                    v500 = routeData;
                    v501 = WarBoardAIRoute__CalcurateDistanceType(v499, v699->fields._tmpFlagNow_5__12, 0LL);
                    if ( !v500 )
                      sub_1B71828(v501, v482);
                    v500->fields.isMoveByServantAndMasterRange = v501;
                    v485 = v699;
                  }
                }
              }
              v502 = *(System_Collections_Generic_Dictionary_int__int__o **)&v485->fields._sumPieceActionCost_5__17;
              if ( !v502 )
                sub_1B71828(0LL, v482);
              System_Collections_Generic_Dictionary_int__int___GetEnumerator(
                &v685,
                v502,
                (const MethodInfo_314015C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
              v690 = *(_OWORD *)&v685.fields._dictionary;
              v691 = v685.fields._current;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
                        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v690,
                        (const MethodInfo_328D050 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
              {
                v504 = (int32_t)v691.fields.key;
                v505 = HIDWORD(v691.fields.key);
                v506 = *v301;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v507 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v506,
                                                                              v504,
                                                                              0,
                                                                              0LL,
                                                                              v503);
                v508 = System_Linq_Enumerable__Count_int_(
                         v507,
                         (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !routeData )
                  sub_1B71828(v508, v509);
                dicItemIdKeyIsMoveByServantDesignationItemRange = (System_Collections_Generic_Dictionary_TKey__TValue__o *)routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
                v511 = WarBoardAIRoute__CalcurateDistanceType(v508, v505, 0LL);
                if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
                  sub_1B71828(v511, v512);
                System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
                  dicItemIdKeyIsMoveByServantDesignationItemRange,
                  v504,
                  v511,
                  (const MethodInfo_3142B70 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
                if ( !routeData )
                  sub_1B71828(v513, v514);
                dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
                if ( !dicMoveByServantGetDesignationItem )
                  sub_1B71828(0LL, v514);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  dicMoveByServantGetDesignationItem,
                  v504,
                  *v301 == v504,
                  (const MethodInfo_3139FD0 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
                if ( !routeData )
                  sub_1B71828(v516, v517);
                listExistDesignationItem = routeData->fields.listExistDesignationItem;
                if ( !listExistDesignationItem )
                  sub_1B71828(0LL, v517);
                items = listExistDesignationItem->fields._items;
                v520 = Method_System_Collections_Generic_List_int__Add__;
                ++listExistDesignationItem->fields._version;
                if ( !items )
                  sub_1B71828(listExistDesignationItem, v517);
                size = listExistDesignationItem->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    listExistDesignationItem,
                    v504,
                    *(const MethodInfo_34B323C **)(*(_QWORD *)(v520[4] + 192LL) + 112LL));
                }
                else
                {
                  listExistDesignationItem->fields._size = size + 1;
                  items->m_Items[size + 1] = v504;
                }
              }
              System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v690,
                (const MethodInfo_328D150 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
              v523 = *v301;
              enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
              if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
              v525 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                            0LL,
                                                                            v523,
                                                                            enemyMasterSquareIndex,
                                                                            0,
                                                                            0LL,
                                                                            v522);
              v526 = System_Linq_Enumerable__Count_int_(
                       v525,
                       (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
              v527 = routeData;
              v528 = WarBoardAIRoute__CalcurateDistanceType(v526, v699->fields._servantAndMasterRange_5__13, 0LL);
              if ( !v527 )
                sub_1B71828(v528, v529);
              v527->fields.isMoveByServantAndEnemyMasterRange = v528;
              v530 = routeData;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4A1D70E )
              {
                sub_1B715CC(&WarBoardAIManager_TypeInfo, v529);
                byte_4A1D70E = 1;
              }
              v531 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v531 = WarBoardAIManager_TypeInfo;
              }
              v532 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v531->static_fields->dicSquareIndexEnemyPiece,
                       HIDWORD(v699->fields._tmpFlagNow_5__12),
                       *v301,
                       0LL);
              if ( !v530 )
                sub_1B71828(v532, v533);
              v530->fields.isMoveByServantAndEnemyRange = v532;
              WarBoardAIRoute__ClassAdvantageDistance(
                _4__this,
                &routeData,
                (WarBoardAIRoute_AdvantagePieceData_o *)v699->fields._dicEnemyRange_5__20,
                *v301,
                0LL);
            }
            v534 = _4__this->fields.aiRouteMasterData;
            if ( !v534 )
              sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
            if ( v534->fields.masterType )
            {
LABEL_486:
              if ( v534->fields.masterType == 2 )
              {
                v537 = v699->fields.__8__1;
                if ( !v537 )
                  sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                v538 = v537->fields.basePiece;
                if ( !v538 )
                  sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                if ( v538->fields._index_k__BackingField == v534->fields.masterPieceIndex )
                  goto LABEL_490;
              }
            }
            else
            {
              v535 = v699->fields.__8__1;
              if ( !v535 )
                sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
              v536 = v535->fields.basePiece;
              if ( !v536 )
                sub_1B71828(0LL, v482);
              IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isMaster(v536, 0LL);
              if ( !IsBlockShortestRouteEnemyAndMaster )
              {
                v534 = _4__this->fields.aiRouteMasterData;
                if ( !v534 )
                  sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                goto LABEL_486;
              }
LABEL_490:
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4A1D70E )
              {
                sub_1B715CC(&WarBoardAIManager_TypeInfo, v482);
                byte_4A1D70E = 1;
              }
              v539 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v539 = WarBoardAIManager_TypeInfo;
              }
              dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v539->static_fields->dicSquareIndexEnemyPiece;
              if ( !dicSquareIndexEnemyPiece )
                sub_1B71828(0LL, v482);
              Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                       dicSquareIndexEnemyPiece,
                       (const MethodInfo_3148514 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
              if ( !Keys )
                sub_1B71828(0LL, v542);
              System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
                (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v685,
                Keys,
                (const MethodInfo_33EF7A8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
              *(_OWORD *)&v689.fields._dictionary = *(_OWORD *)&v685.fields._dictionary;
              v689.fields._currentKey = v685.fields._current.fields.key;
              while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
                        &v689,
                        (const MethodInfo_328F49C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                currentKey = (int32_t)v689.fields._currentKey;
                v545 = *v301;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v546 = AStarSearch__RouteSearch(0LL, v545, currentKey, 0, 0LL, v543);
                if ( !v546 )
                  sub_1B71828(0LL, v547);
                v548 = _4__this->fields.npcData;
                if ( !v548 )
                  sub_1B71828(v546, v547);
                if ( (signed int)(v546->max_length - 1) <= v548->fields.defenseArea )
                {
                  if ( !routeData )
                    sub_1B71828(v546, v547);
                  routeData->fields.flagNow |= 0x8000000000uLL;
                  break;
                }
              }
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
                &v689,
                (const MethodInfo_328F498 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
              v550 = routeData;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_4A1D70E )
              {
                sub_1B715CC(&WarBoardAIManager_TypeInfo, v549);
                byte_4A1D70E = 1;
              }
              v551 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v551 = WarBoardAIManager_TypeInfo;
              }
              v552 = v699->fields._defenseAreaData_5__7;
              if ( !v552 )
                sub_1B71828(v551, v549);
              v553 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v551->static_fields->dicSquareIndexEnemyPiece,
                       v552->fields._MasterAndEnemyRange_k__BackingField,
                       *v301,
                       0LL);
              if ( !v550 )
                sub_1B71828(v553, v554);
              v550->fields.isMoveByMasterAndEnemyRange = v553;
              if ( !byte_4A1D70E )
              {
                sub_1B715CC(&WarBoardAIManager_TypeInfo, v554);
                byte_4A1D70E = 1;
              }
              v555 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v555 = WarBoardAIManager_TypeInfo;
              }
              v556 = (System_Collections_Generic_Dictionary_int__object__o *)v555->static_fields->dicSquareIndexEnemyPiece;
              if ( !v556 )
                sub_1B71828(0LL, v554);
              System_Collections_Generic_Dictionary_int__object___GetEnumerator(
                &v685,
                v556,
                (const MethodInfo_3148C8C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
              v688 = v685;
              do
              {
                v558 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                         &v688,
                         (const MethodInfo_328E9CC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
                if ( !v558 )
                  break;
                v559 = (int32_t)v688.fields._current.fields.key;
                v560 = *v301;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v561 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v560,
                                                                              v559,
                                                                              0,
                                                                              0LL,
                                                                              v557);
                System_Linq_Enumerable__Count_int_(
                  v561,
                  (const MethodInfo_2E78134 *)Method_System_Linq_Enumerable_Count_int___);
              }
              while ( WarBoardAIRoute__IsDetour((System_Int32_array *)v561, v699->fields._allyPieceIndexs_5__5, 0LL) );
              System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
                &v688,
                (const MethodInfo_328EAF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( !v558 )
              {
                if ( !routeData )
                  sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
                routeData->fields.flagNow |= 0x1000000000uLL;
              }
            }
            v562 = routeData;
            if ( !routeData )
              sub_1B71828(IsBlockShortestRouteEnemyAndMaster, v482);
            v563 = v683;
            if ( !routeData->fields.actionPiece || (routeData->fields.flagNow & 0x4000000) != 0 )
            {
              v564 = v699->fields._warBoardData_5__2;
              if ( !v564 )
                sub_1B71828(0LL, v482);
              Effect = WarBoardData__GetEffect(v564, *v301, v483);
              if ( Effect )
              {
                if ( !routeData )
                  sub_1B71828(Effect, v566);
                routeData->fields.flagNow |= 0x200000000uLL;
              }
              v567 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v567,
                (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
              v569 = (System_Collections_Generic_List_object__o *)v699->fields.routeDataList;
              if ( !v569 )
                sub_1B71828(0LL, v568);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v685,
                v569,
                (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
              *(_OWORD *)&v696.fields._list = *(_OWORD *)&v685.fields._dictionary;
              v696.fields._current = v685.fields._current.fields.key;
              while ( 1 )
              {
                v570 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v696,
                         (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
                if ( !v570 )
                  break;
                v572 = v696.fields._current;
                if ( !v696.fields._current )
                  sub_1B71828(v570, v571);
                if ( (BYTE3(v696.fields._current[1].klass) & 8) != 0 )
                {
                  v573 = v696.fields._current[3].klass;
                  if ( !v573 )
                    sub_1B71828(0LL, v571);
                  v574 = WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v573, 0LL);
                  if ( v574 )
                  {
                    if ( !v567 )
                      sub_1B71828(v574, monitor_high);
                    monitor_high = HIDWORD(v572[1].monitor);
                    v576 = v567->fields._items;
                    v577 = Method_System_Collections_Generic_List_int__Add__;
                    ++v567->fields._version;
                    if ( !v576 )
                      sub_1B71828(v574, monitor_high);
                    v578 = v567->fields._size;
                    if ( (unsigned int)v578 >= v576->max_length )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v567,
                        monitor_high,
                        *(const MethodInfo_34B323C **)(*(_QWORD *)(v577[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v567->fields._size = v578 + 1;
                      v576->m_Items[v578 + 1] = monitor_high;
                    }
                  }
                  if ( (BYTE3(v572[1].klass) & 4) != 0 )
                  {
                    v579 = (WarBoardPieceData_o *)v572[3].klass;
                    if ( !v579 )
                      sub_1B71828(0LL, monitor_high);
                    if ( WarBoardPieceData__get_isMaster(v579, 0LL) )
                    {
                      v581 = (WarBoardPieceData_o *)v572[3].monitor;
                      if ( !v581 )
                        sub_1B71828(0LL, v580);
                      v582 = WarBoardPieceData__get_isServant(v581, 0LL);
                      if ( v582 )
                      {
                        if ( !v567 )
                          sub_1B71828(v582, v583);
                        monitor_low = LODWORD(v572[1].monitor);
                        v585 = v567->fields._items;
                        v586 = Method_System_Collections_Generic_List_int__Add__;
                        ++v567->fields._version;
                        if ( !v585 )
                          sub_1B71828(v582, monitor_low);
                        v587 = v567->fields._size;
                        if ( (unsigned int)v587 >= v585->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v567,
                            monitor_low,
                            *(const MethodInfo_34B323C **)(*(_QWORD *)(v586[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v567->fields._size = v587 + 1;
                          v585->m_Items[v587 + 1] = monitor_low;
                        }
                      }
                    }
                  }
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v696,
                (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
              if ( !routeData )
                sub_1B71828(v588, v589);
              v590 = routeData->fields.basePiece;
              if ( !v590 )
                sub_1B71828(0LL, v589);
              v591 = WarBoardPieceData__get_isServant(v590, 0LL);
              if ( v591 )
              {
                if ( !routeData )
                  sub_1B71828(v591, v592);
                CanAcquireItem = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v567, 0LL);
                if ( CanAcquireItem )
                {
                  v595 = routeData;
                  if ( !routeData )
                    sub_1B71828(CanAcquireItem, v594);
                  v596 = routeData->fields.flagNow | 0x18000000;
                  goto LABEL_596;
                }
              }
              else
              {
                if ( !routeData )
                  sub_1B71828(v591, v592);
                v597 = routeData->fields.basePiece;
                if ( !v597 )
                  sub_1B71828(0LL, v592);
                isMaster = WarBoardPieceData__get_isMaster(v597, 0LL);
                if ( isMaster )
                {
                  if ( !routeData )
                    sub_1B71828(isMaster, v599);
                  v600 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v567, 0LL);
                  v602 = routeData;
                  if ( v600 )
                  {
                    if ( !routeData )
                      sub_1B71828(v600, v601);
                    routeData->fields.flagNow |= 0x10000000uLL;
                  }
                  else if ( !routeData )
                  {
                    sub_1B71828(v600, v601);
                  }
                  if ( (v602->fields.flagNow & 0x4000000) != 0 )
                  {
                    v603 = v602->fields.actionPiece;
                    if ( !v603 )
                      sub_1B71828(0LL, v601);
                    v604 = WarBoardPieceData__get_isServant(v603, 0LL);
                    if ( v604 )
                    {
                      if ( !routeData )
                        sub_1B71828(v604, v605);
                      v606 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.baseIndex, v567, 0LL);
                      if ( v606 )
                      {
                        v595 = routeData;
                        if ( !routeData )
                          sub_1B71828(v606, v607);
                        v596 = routeData->fields.flagNow | 0x8000000;
LABEL_596:
                        v595->fields.flagNow = v596;
                      }
                    }
                  }
                }
              }
              WarBoardAIRoute__LinkedPieceCount(_4__this, &routeData, v683, v567, 0LL);
              v562 = routeData;
              if ( !routeData )
                sub_1B71828(v608, v609);
            }
            FlagOutOfWarningAreaToDistance = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                               _4__this,
                                               v562->fields.baseIndex,
                                               v562->fields.actionIndex,
                                               0LL);
            v562->fields.isMoveByOutOfWarningArea = FlagOutOfWarningAreaToDistance;
            v612 = routeData;
            if ( !routeData )
              sub_1B71828(FlagOutOfWarningAreaToDistance, v611);
            evalOffsetMagnification = routeData->fields.evalOffsetMagnification;
            if ( !evalOffsetMagnification )
              sub_1B71828(FlagOutOfWarningAreaToDistance, v611);
            evalOffsetMagnification->fields.isAttack = (routeData->fields.flagNow & 2) != 0;
            v614 = v612->fields.basePiece;
            if ( !v614 )
              sub_1B71828(FlagOutOfWarningAreaToDistance, v611);
            piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields.piecePersonalityDic;
            if ( !piecePersonalityDic )
              sub_1B71828(0LL, v611);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                 piecePersonalityDic,
                                                                 v614->fields._index_k__BackingField,
                                                                 &value,
                                                                 (const MethodInfo_3149FE0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v616 = value;
              v617 = (WarBoardAIEvalCalcurater_o *)sub_1B71818(WarBoardAIEvalCalcurater_TypeInfo);
              WarBoardAIEvalCalcurater___ctor(v617, (WarBoardAIRoute_PiecePersonality_o *)v616, 0LL);
              if ( !v617 )
                sub_1B71828(v618, v619);
              WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v617, &routeData, 0LL);
              WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
                v617,
                &routeData,
                _4__this->fields.averageBenefitValue,
                0LL);
              if ( !routeData )
                sub_1B71828(0LL, v620);
              WarBoardAIRoute_RouteData__CalcEvalValue(routeData, v620);
              v621 = WarBoardAIRoute___c_TypeInfo;
              v622 = v699->fields.routeDataList;
              if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v621 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_5 = (System_Func_object__object__o *)v621->static_fields->__9__47_5;
              if ( !_9__47_5 )
              {
                if ( !v621->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v621);
                  v621 = WarBoardAIRoute___c_TypeInfo;
                  v563 = v683;
                }
                v624 = (Il2CppObject *)v621->static_fields->__9;
                _9__47_5 = (System_Func_object__object__o *)sub_1B71818(System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo);
                System_Func_object__object____ctor(
                  _9__47_5,
                  v624,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__,
                  0LL);
                v625 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v625->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
                sub_1B71570((ServantStatusBattleListViewItem_o *)&v625->__9__47_5, (int32_t)_9__47_5, v626, v627);
              }
              v628 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v622,
                                                                      (System_Func_TSource__TResult__o *)_9__47_5,
                                                                      (const MethodInfo_2E8BEEC *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
              v629 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
              System_Collections_Generic_List_object____ctor_55376724(
                v629,
                v628,
                (const MethodInfo_34CFB54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___75825304);
              if ( !v629 )
                sub_1B71828(v630, v631);
              v634 = (Il2CppObject *)routeData;
              v635 = v629->fields._items;
              v636 = Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__;
              ++v629->fields._version;
              if ( !v635 )
                sub_1B71828(v630, v634);
              v637 = v629->fields._size;
              if ( (unsigned int)v637 >= v635->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v629,
                  v634,
                  *(const MethodInfo_34D0260 **)(*(_QWORD *)(v636[4] + 192LL) + 112LL));
              }
              else
              {
                v638 = &v635->obj.klass + v637;
                v629->fields._size = v637 + 1;
                v638[4] = (Il2CppClass *)v634;
                sub_1B71570((ServantStatusBattleListViewItem_o *)(v638 + 4), (int32_t)v634, v632, v633);
              }
              v639 = (WarBoardAIRoute_RouteData_o *)BasicHelper__IndexValue_object__48538040(
                                                      (System_Collections_Generic_List_T__o *)v629,
                                                      v629->fields._size - 2,
                                                      0LL,
                                                      (const MethodInfo_2E4A1B8 *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
              route = v639;
              if ( v639 )
              {
                v641 = (int)routeData;
                if ( !routeData )
                  sub_1B71828(v639, v640);
                if ( routeData->fields.basePiece == v639->fields.basePiece )
                {
                  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
                    v617,
                    &route,
                    routeData,
                    0LL);
                  if ( !route )
                    sub_1B71828(0LL, v643);
                  WarBoardAIRoute_RouteData__CalcEvalValue(route, v643);
                }
              }
              allRouteList = (System_Collections_Generic_List_object__o *)_4__this->fields.allRouteList;
              if ( !allRouteList )
                sub_1B71828(0LL, v640);
              v645 = allRouteList->fields._items;
              v646 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++allRouteList->fields._version;
              if ( !v645 )
                sub_1B71828(allRouteList, v640);
              v647 = allRouteList->fields._size;
              if ( (unsigned int)v647 >= v645->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  allRouteList,
                  (Il2CppObject *)v629,
                  *(const MethodInfo_34D0260 **)(*(_QWORD *)(v646[4] + 192LL) + 112LL));
              }
              else
              {
                v648 = &v645->obj.klass + v647;
                allRouteList->fields._size = v647 + 1;
                v648[4] = (Il2CppClass *)v629;
                sub_1B71570((ServantStatusBattleListViewItem_o *)(v648 + 4), (int32_t)v629, v641, v642);
              }
              if ( !routeData )
                sub_1B71828(this, method);
              if ( routeData->fields.baseIndex != routeData->fields.actionIndex && (routeData->fields.flagNow & 2) == 0 )
              {
                searchCount = v699->fields.searchCount;
                if ( searchCount != 1 )
                {
                  v679 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                           _4__this,
                                           v563,
                                           searchCount,
                                           (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v629,
                                           0LL);
                  v680 = v699;
                  v699->fields.__2__current = v679;
                  sub_1B71570(
                    (ServantStatusBattleListViewItem_o *)&v680->fields.__2__current,
                    (int32_t)v679,
                    v681,
                    v682);
                  result = 1;
                  v699->fields.__1__state = 1;
                  return result;
                }
                dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
                v651 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                         _4__this,
                                         v563,
                                         1,
                                         (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v629,
                                         0LL);
                if ( !routeData )
                  sub_1B71828(v651, v651);
                if ( !dictionaryCreateRouteDataEvalValue )
                  sub_1B71828(v651, v651);
                System_Collections_Generic_Dictionary_object__float___Add(
                  dictionaryCreateRouteDataEvalValue,
                  v651,
                  routeData->fields.evalValue,
                  (const MethodInfo_31A7E14 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
              }
            }
            goto LABEL_648;
          }
        }
        WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v699, v143);
        v243 = v699;
        v244 = v699->fields.searchCount;
        v699->fields.__7__wrap8.fields._current = 0u;
        *(_OWORD *)&v243->fields.__7__wrap8.fields._dictionary = 0u;
        if ( v244 != 1 )
          return 0;
        if ( !_4__this )
          sub_1B71828(v241, v242);
        v245 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        v246 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v246 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__47_6 = (System_Func_T__TResult__o *)v246->static_fields->__9__47_6;
        if ( !_9__47_6 )
        {
          if ( !v246->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v246);
            v246 = WarBoardAIRoute___c_TypeInfo;
          }
          v248 = (Il2CppObject *)v246->static_fields->__9;
          _9__47_6 = (System_Func_T__TResult__o *)sub_1B71818(System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v248,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            0LL);
          v249 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v249->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v249->__9__47_6, (int32_t)_9__47_6, v250, v251);
        }
        v253 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__float___float_(
                 v245,
                 (System_Func_TSource__TKey__o *)_9__47_6,
                 (const MethodInfo_2E85BB4 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v699->fields._servantAndEnemyMasterRange_5__15 = 0;
        v254 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v254 )
          sub_1B71828(0LL, v252);
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v254,
                  (const MethodInfo_31A7AE4 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v257 = _4__this->fields.npcData;
        if ( !v257 )
          sub_1B71828(Count, v256);
        v258 = v699;
        v259 = (float)((float)v257->fields.calcEllipsis / 100.0) * (float)(int)Count;
        v260 = (int)v259;
        if ( v259 == INFINITY )
          v260 = 0x80000000;
        v699->fields._servantAndEnemyRange_5__14 = v260;
        calcEllipsisMin = v257->fields.calcEllipsisMin;
        if ( calcEllipsisMin <= v260 )
          calcEllipsisMin = v260;
        v258->fields._servantAndEnemyRange_5__14 = calcEllipsisMin;
        if ( !v253 )
          sub_1B71828(Count, v256);
        v262 = v253->klass;
        v263 = *(unsigned __int16 *)(&v253->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v253->klass->_2.bitflags2 + 3) )
        {
          p_offset = &v262->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            --v263;
            p_offset += 4;
            if ( !v263 )
              goto LABEL_112;
          }
          p_method = (__int64)&v262->vtable[*p_offset].method;
        }
        else
        {
LABEL_112:
          p_method = sub_1BC35AC(
                       v253,
                       System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo,
                       0LL);
        }
        v266 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                 v253,
                 *(_QWORD *)(p_method + 8));
        v267 = (ServantStatusBattleListViewItem_o *)&v699->fields.__7__wrap24;
        *(_QWORD *)&v699->fields.__7__wrap24 = v266;
        sub_1B71570(v267, v266, v268, v269);
        v4 = v699;
        v699->fields.__1__state = -4;
        goto LABEL_117;
      }
    }
    else
    {
      v125 = _4__this->fields.aiRouteMasterData;
      if ( !v125 )
        sub_1B71828(v120, v121);
      if ( v699 )
      {
        v126 = v125->fields.masterType;
        v699->fields._masterExists_5__8 = v126 != 3;
        if ( v126 == 3 )
          goto LABEL_29;
        goto LABEL_25;
      }
    }
    sub_1B71828(v120, v121);
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

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
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
  if ( (byte_4A1D737 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, method);
    byte_4A1D737 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &this->fields.__7__wrap8,
    (const MethodInfo_329131C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
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

  if ( (byte_4A1D738 & 1) == 0 )
  {
    sub_1B715CC(&System_IDisposable_TypeInfo, method);
    byte_4A1D738 = 1;
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
      v7 = sub_1BC35AC(v3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v7)(v3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall WarBoardAIRoute___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A1D728 & 1) == 0 )
  {
    sub_1B715CC(&WarBoardAIRoute___c_TypeInfo, v1);
    byte_4A1D728 = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(WarBoardAIRoute___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAIRoute___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute___c_o *)v2;
  sub_1B71570((ServantStatusBattleListViewItem_o *)WarBoardAIRoute___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_4A1D729 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1B715CC(&IWarBoardObjectData_TypeInfo, x);
    byte_4A1D729 = 1;
  }
  if ( !x )
    sub_1B71828(this, x);
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
    p_method = sub_1BC35AC(x, IWarBoardObjectData_TypeInfo, 2LL);
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
  if ( (byte_4A1D72A & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__,
      x.fields.key);
    byte_4A1D72A = 1;
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
  if ( (byte_4A1D72B & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__,
      x.fields.key);
    byte_4A1D72B = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, (const MethodInfo *)x.fields.key);
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
  return WarBoardAIRoute_RouteData__ShallowCopy(x, (const MethodInfo *)x);
}


float __fastcall WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // w19

  value = x.fields.value;
  if ( (byte_4A1D72C & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__, x.fields.key);
    byte_4A1D72C = 1;
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

  if ( (byte_4A1D72D & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1B715CC(&IWarBoardObjectData_TypeInfo, x);
    byte_4A1D72D = 1;
  }
  if ( !x )
    sub_1B71828(this, x);
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
    p_method = sub_1BC35AC(x, IWarBoardObjectData_TypeInfo, 4LL);
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

  if ( (byte_4A1D72E & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1B715CC(&IWarBoardObjectData_TypeInfo, x);
    byte_4A1D72E = 1;
  }
  if ( !x )
    sub_1B71828(this, x);
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
    p_method = sub_1BC35AC(x, IWarBoardObjectData_TypeInfo, 5LL);
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
  if ( (byte_4A1D72F & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__,
      *(_QWORD *)&x.fields.key);
    byte_4A1D72F = 1;
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
    sub_1B71828(this, 0LL);
  return !WarBoardItemData__get_Acquired(z, 0LL) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_1B71828(this, 0LL);
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
  if ( (byte_4A1D730 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_1B715CC(&IWarBoardObjectData_TypeInfo, z);
    byte_4A1D730 = 1;
  }
  if ( !z )
    sub_1B71828(this, z);
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
    p_method = sub_1BC35AC(z, IWarBoardObjectData_TypeInfo, 0LL);
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
    v12 = sub_1BC35AC(z, IWarBoardObjectData_TypeInfo, 3LL);
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
    sub_1B71828(this, x);
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
    sub_1B71828(this, 0LL);
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
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

  if ( (byte_4A1D731 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, *(_QWORD *)&square);
    byte_4A1D731 = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_1B71828(0LL, *(_QWORD *)&square);
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_31546A4 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
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
    sub_1B71828(this, x);
  i = this->fields.i;
  if ( (unsigned int)i >= route->max_length )
    sub_1B71830(this, *(_QWORD *)&x);
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
    sub_1B71828(this, x);
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
  if ( (byte_4A1D732 & 1) == 0 )
  {
    sub_1B715CC(&AStarSearch_TypeInfo, x);
    this = (WarBoardAIRoute___c__DisplayClass64_0_o *)sub_1B715CC(&IWarBoardObjectData_TypeInfo, v5);
    byte_4A1D732 = 1;
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
    p_method = sub_1BC35AC(x, IWarBoardObjectData_TypeInfo, 1LL);
  }
  v12 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  if ( !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  this = (WarBoardAIRoute___c__DisplayClass64_0_o *)AStarSearch__RouteSearch(0LL, baseSquareIndex, v12, 0, 0LL, v11);
  if ( !this )
LABEL_14:
    sub_1B71828(this, x);
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
  int32_t v12; // w3
  System_Collections_Generic_List_T__o *routeDataList; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4A1D733 & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, targetObject);
    sub_1B715CC(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v5);
    sub_1B715CC(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__, v6);
    sub_1B715CC(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo, v7);
    byte_4A1D733 = 1;
  }
  v8 = sub_1B71818(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B71828(v9, v10);
  *(_QWORD *)(v8 + 16) = targetObject;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)targetObject, v11, v12);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v14 = (System_Func_object__bool__o *)sub_1B71818(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    0LL);
  return BasicHelper__Any_object_(
           routeDataList,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_2E467B0 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
  if ( (byte_4A1D734 & 1) == 0 )
  {
    sub_1B715CC(&IWarBoardObjectData_TypeInfo, x);
    this = (WarBoardAIRoute___c__DisplayClass65_1_o *)sub_1B715CC(&WarBoardItemData_TypeInfo, v5);
    byte_4A1D734 = 1;
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
    p_method = sub_1BC35AC(v4->fields.targetObject, IWarBoardObjectData_TypeInfo, 0LL);
  }
  this = (WarBoardAIRoute___c__DisplayClass65_1_o *)(*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                                      targetObject,
                                                      *(_QWORD *)(p_method + 8));
  if ( baseIndex == (_DWORD)this )
    return 1;
  v14 = v4->fields.targetObject;
  if ( !v14 )
LABEL_25:
    sub_1B71828(this, x);
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
    v19 = sub_1BC35AC(v14, IWarBoardObjectData_TypeInfo, 0LL);
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
  if ( (byte_4A1D735 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass66_0_o *)sub_1B715CC(
                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__,
                                                        x);
    byte_4A1D735 = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  value = v4->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_1B71828(this, x);
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
    sub_1B71828(this, x);
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
    sub_1B71828(this, x);
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