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
  __int64 v69; // x1
  __int64 v70; // x2
  System_Collections_Generic_List_object__o *v71; // x20
  int32_t v72; // w2
  int32_t v73; // w3
  __int64 v74; // x1
  __int64 v75; // x2
  System_Collections_Generic_Dictionary_int__object__o *v76; // x20
  int32_t v77; // w2
  int32_t v78; // w3
  __int64 v79; // x1
  __int64 v80; // x2
  System_Collections_Generic_List_object__o *v81; // x20
  int32_t v82; // w2
  int32_t v83; // w3
  WarBoardAIRoute_o *v84; // x23
  __int64 v85; // x1
  __int64 v86; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v87; // x20
  int32_t v88; // w2
  int32_t v89; // w3
  __int64 v90; // x1
  __int64 v91; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v92; // x20
  int32_t v93; // w2
  int32_t v94; // w3
  __int64 v95; // x1
  __int64 v96; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v97; // x20
  int32_t v98; // w2
  int32_t v99; // w3
  __int64 v100; // x1
  __int64 v101; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v102; // x20
  int32_t v103; // w2
  int32_t v104; // w3
  __int64 v105; // x1
  __int64 v106; // x2
  System_Collections_Generic_Dictionary_int__object__o *v107; // x20
  int32_t v108; // w2
  int32_t v109; // w3
  Il2CppObject *Instance; // x24
  int32_t v111; // w2
  int32_t v112; // w3
  WarBoardData_o *playedStageReinforcementsList; // x0
  const MethodInfo *v114; // x1
  __int64 v115; // x1
  struct System_Collections_Generic_List_WarBoardRatingBase__o *v116; // x8
  __int64 size; // x2
  int v118; // w9
  struct System_Int32_array *aiIds; // x19
  ServantStatusBattleListViewItem_o *p_aiIds; // x20
  System_Array_o *v121; // x21
  int32_t v122; // w2
  int32_t v123; // w3
  __int64 v124; // x8
  unsigned __int64 v125; // x26
  int v126; // w21
  WarBoardAIRoute_PiecePersonality_o *v127; // x27
  int32_t squares; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *v129; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *stageNpcMaster; // x8
  WarBoardData_o *v131; // x29
  unsigned __int64 v132; // x23
  __int64 v133; // x2
  System_Collections_Generic_List_object__o *actionTrandList; // x20
  Il2CppObject *v135; // x22
  WarBoardAIRoute_ActionTrendInfo_o *v136; // x21
  int32_t v137; // w2
  int32_t v138; // w3
  struct System_Object_array *items; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  Il2CppClass **v142; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v143; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v144; // x8
  WarBoardData_o *v145; // x20
  unsigned __int64 v146; // x21
  int32_t v147; // w2
  int32_t v148; // w3
  Il2CppObject *v149; // x1
  struct System_Int32_array *stageEntity; // x8
  _QWORD *v151; // x9
  __int64 stageNpcMaster_low; // x10
  Il2CppClass **v153; // x8
  Il2CppObject *Master_object; // x27
  Il2CppObject *v155; // x28
  __int64 v156; // x1
  __int64 v157; // x2
  WarBoardData_o *v158; // x29
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x20
  System_Func_object__bool__o *v160; // x21
  System_Collections_Generic_Dictionary_int__object__c *klass; // x8
  WarBoardData_o *v162; // x20
  __int64 v163; // x9
  int32_t *p_offset; // x10
  __int64 v165; // x0
  __int64 v166; // x26
  __int64 v167; // x8
  __int64 v168; // x9
  int *v169; // x10
  __int64 v170; // x0
  __int64 v171; // x8
  __int64 v172; // x9
  int *v173; // x10
  __int64 v174; // x0
  int32_t *v175; // x20
  __int64 id; // x0
  _BOOL8 v177; // x0
  __int64 v178; // x0
  _BOOL8 v179; // x0
  const MethodInfo *v180; // x3
  __int64 v181; // x8
  __int64 v182; // x9
  int *v183; // x10
  __int64 v184; // x0
  __int64 v185; // x2
  ServantStatusBattleListViewItem_o *p_ratingBaseIds; // x20
  struct System_Int32_array *ratingBaseIds; // x22
  System_Array_o *v188; // x21
  int32_t v189; // w2
  int32_t v190; // w3
  __int64 v191; // x8
  unsigned __int64 v192; // x24
  int32_t v193; // w20
  __int64 v194; // x1
  __int64 v195; // x2
  WarBoardData_o *v196; // x25
  _QWORD *v197; // x8
  __int64 v198; // x20
  int32_t v199; // w2
  int32_t v200; // w3
  int32_t v201; // w2
  int32_t v202; // w3
  struct System_Int32_array *v203; // x8
  _QWORD *v204; // x9
  __int64 v205; // x10
  Il2CppClass **v206; // x8
  int32_t v207; // w21
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicRatingbaseCalcValue; // x20
  WarBoardEvalValueSquare_CalcEval_o *v209; // x25
  struct System_Int32_array *tacticalIds; // x19
  ServantStatusBattleListViewItem_o *p_tacticalIds; // x21
  System_Array_o *v212; // x20
  int32_t v213; // w2
  int32_t v214; // w3
  __int64 v215; // x8
  unsigned __int64 v216; // x21
  int32_t v217; // w20
  int32_t v218; // w2
  int32_t v219; // w3
  System_Collections_Generic_List_object__o *v220; // x8
  struct System_Object_array *v221; // x9
  _QWORD *v222; // x10
  __int64 v223; // x11
  WarBoardData_o *v224; // x1
  Il2CppClass **v225; // x0
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v228; // x22
  int32_t v229; // w2
  int32_t v230; // w3
  struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o **p_tacticalTrendList; // [xsp+0h] [xbp-C0h]
  struct System_Collections_Generic_List_WarBoardRatingBase__o **p_ratingBaseList; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_Dictionary_int__object__o **p_piecePersonalityDic; // [xsp+28h] [xbp-98h]
  DataManager_o *v236; // [xsp+30h] [xbp-90h]
  WarBoardReinforcementsEntity_o *v237; // [xsp+38h] [xbp-88h] BYREF
  WarBoardStageReinforcementsEntity_o *v238; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *item; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v240; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  System_RuntimeFieldHandle_o v242; // 0:w1.4
  System_RuntimeFieldHandle_o v243; // 0:w1.4
  System_RuntimeFieldHandle_o v244; // 0:w1.4

  if ( (byte_49FA041 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, npc);
    sub_1B640C8(&Method_BasicHelper_IndexValue_int____75711232, v3);
    sub_1B640C8(&WarBoardEvalValueSquare_CalcEval_TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarBoardAIMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__, v13);
    sub_1B640C8(&Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__, v14);
    sub_1B640C8(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__, v15);
    sub_1B640C8(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__, v16);
    sub_1B640C8(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__, v27);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo, v28);
    sub_1B640C8(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo, v29);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo, v30);
    sub_1B640C8(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo, v31);
    sub_1B640C8(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo, v32);
    sub_1B640C8(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo, v33);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v34);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v35);
    sub_1B640C8(&System_IDisposable_TypeInfo, v36);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, v37);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, v38);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v39);
    sub_1B640C8(&int___TypeInfo, v40);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v41);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__, v42);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__, v43);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v44);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__, v45);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__, v46);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__, v47);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v48);
    sub_1B640C8(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v49);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo, v50);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo, v51);
    sub_1B640C8(&WarBoardAIRoute_PiecePersonality_TypeInfo, v52);
    sub_1B640C8(&ShortestDistanceFromAllyMaster_TypeInfo, v53);
    sub_1B640C8(&ShortestDistanceFromAllyServant_TypeInfo, v54);
    sub_1B640C8(&ShortestDistanceFromEnemyMaster_TypeInfo, v55);
    sub_1B640C8(&ShortestDistanceFromEnemyServant_TypeInfo, v56);
    sub_1B640C8(&ShortestDistanceFromItem_TypeInfo, v57);
    sub_1B640C8(&ShortestDistanceFromPrioritySpace_TypeInfo, v58);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v59);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v60);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384,
      v61);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49,
      v62);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72,
      v63);
    sub_1B640C8(&Method_WarBoardAIRoute___ctor_b__42_0__, v64);
    sub_1B640C8(&WarBoardAiTargetCacher_TypeInfo, v65);
    byte_49FA041 = 1;
  }
  v240 = 0LL;
  entity = 0LL;
  v238 = 0LL;
  item = 0LL;
  v237 = 0LL;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v66 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo,
                                                       npc,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v66,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v66;
  p_tacticalTrendList = &this->fields.tacticalTrendList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tacticalTrendList, (int32_t)v66, v67, v68);
  v71 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardRatingBase__TypeInfo,
                                                       v69,
                                                       v70);
  System_Collections_Generic_List_object____ctor(
    v71,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v71;
  p_ratingBaseList = &this->fields.ratingBaseList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ratingBaseList, (int32_t)v71, v72, v73);
  v76 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo,
                                                                  v74,
                                                                  v75);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v76,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v76;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.piecePersonalityDic, (int32_t)v76, v77, v78);
  v81 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo,
                                                       v79,
                                                       v80);
  System_Collections_Generic_List_object____ctor(
    v81,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v81;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.allRouteList, (int32_t)v81, v82, v83);
  v84 = this;
  v87 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo,
                                                                   v85,
                                                                   v86);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v87,
    (const MethodInfo_31B175C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v87;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicUniqueKeyAdvantagePieceData, (int32_t)v87, v88, v89);
  v92 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo,
                                                                   v90,
                                                                   v91);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v92,
    (const MethodInfo_3181C1C *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v92;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.dictionaryCreateRouteDataEvalValue,
    (int32_t)v92,
    v93,
    v94);
  v97 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo,
                                                                   v95,
                                                                   v96);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v97,
    (const MethodInfo_31B175C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v97;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicUniqueKeyDesignationItem, (int32_t)v97, v98, v99);
  v102 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo,
                                                                    v100,
                                                                    v101);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v102,
    (const MethodInfo_31B175C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v102;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicUniqueKeyTarget, (int32_t)v102, v103, v104);
  v107 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo,
                                                                   v105,
                                                                   v106);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v107,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v107;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicRatingbaseCalcValue, (int32_t)v107, v108, v109);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.npcData, (int32_t)npc, v111, v112);
  if ( !npc )
    goto LABEL_137;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&npc->fields.forceId;
  this->fields.pickValue = npc->fields.pickValue;
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  WarBoardAIRoute__Clear(this, v114);
  playedStageReinforcementsList = (WarBoardData_o *)this->fields.piecePersonalityDic;
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)playedStageReinforcementsList,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  v116 = *p_ratingBaseList;
  if ( !*p_ratingBaseList )
    goto LABEL_137;
  size = (unsigned int)v116->fields._size;
  v118 = v116->fields._version + 1;
  v116->fields._size = 0;
  v116->fields._version = v118;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v116->fields._items, 0, size, 0LL);
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.piecePersonalityDic;
  p_aiIds = (ServantStatusBattleListViewItem_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v121 = (System_Array_o *)sub_1B64170(int___TypeInfo, 4LL);
    v242.fields.value = Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v121, v242, 0LL);
    p_aiIds->klass = (ServantStatusBattleListViewItem_c *)v121;
    sub_1B6406C(p_aiIds, (int32_t)v121, v122, v123);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_137;
  }
  v124 = *(_QWORD *)&aiIds->max_length;
  v236 = (DataManager_o *)Instance;
  if ( (int)v124 >= 1 )
  {
    v125 = 0LL;
    do
    {
      if ( v125 >= (unsigned int)v124 )
        goto LABEL_138;
      v126 = aiIds->m_Items[v125 + 1];
      v127 = (WarBoardAIRoute_PiecePersonality_o *)sub_1B64314(WarBoardAIRoute_PiecePersonality_TypeInfo, v115, size);
      WarBoardAIRoute_PiecePersonality___ctor(v127, 0LL);
      playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !playedStageReinforcementsList )
        goto LABEL_137;
      playedStageReinforcementsList = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
      if ( !playedStageReinforcementsList )
        goto LABEL_137;
      playedStageReinforcementsList = (WarBoardData_o *)WarBoardData__GetPiece(
                                                          playedStageReinforcementsList,
                                                          v84->fields.forceId,
                                                          v84->fields.groupId,
                                                          v125,
                                                          1,
                                                          0LL);
      if ( playedStageReinforcementsList
        && (squares = (int32_t)playedStageReinforcementsList[1].fields.squares, squares > 0)
        || (squares = v126, v126 >= 1) )
      {
        if ( !Instance )
          goto LABEL_137;
        playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !playedStageReinforcementsList )
          goto LABEL_137;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
               &entity,
               squares,
               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
          if ( !entity )
            goto LABEL_137;
          v129 = (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList;
          playedStageReinforcementsList = (WarBoardData_o *)WarBoardAIEntity__GetActionTrendIds(
                                                              (WarBoardAIEntity_o *)entity,
                                                              0LL);
          if ( !playedStageReinforcementsList )
            goto LABEL_137;
          stageNpcMaster = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)playedStageReinforcementsList->fields.stageNpcMaster;
          v131 = playedStageReinforcementsList;
          if ( (int)stageNpcMaster >= 1 )
          {
            v132 = 0LL;
            while ( v132 < (unsigned int)stageNpcMaster )
            {
              if ( !v129 )
                goto LABEL_137;
              playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v129,
                                                                  &v240,
                                                                  *((_DWORD *)&v131->fields.npcEntityDict + v132),
                                                                  (const MethodInfo_30D3EF8 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)playedStageReinforcementsList & 1) != 0 )
              {
                if ( !v127 )
                  goto LABEL_137;
                actionTrandList = (System_Collections_Generic_List_object__o *)v127->fields.actionTrandList;
                v135 = v240;
                v136 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1B64314(
                                                              WarBoardAIRoute_ActionTrendInfo_TypeInfo,
                                                              v115,
                                                              v133);
                WarBoardAIRoute_ActionTrendInfo___ctor(v136, (WarBoardActionTrendEntity_o *)v135, 0LL);
                if ( !actionTrandList )
                  goto LABEL_137;
                items = actionTrandList->fields._items;
                v140 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
                ++actionTrandList->fields._version;
                if ( !items )
                  goto LABEL_137;
                v141 = actionTrandList->fields._size;
                if ( (unsigned int)v141 >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    actionTrandList,
                    (Il2CppObject *)v136,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
                }
                else
                {
                  v142 = &items->obj.klass + v141;
                  actionTrandList->fields._size = v141 + 1;
                  v142[4] = (Il2CppClass *)v136;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v142 + 4), (int32_t)v136, v137, v138);
                }
              }
              LODWORD(stageNpcMaster) = v131->fields.stageNpcMaster;
              if ( (__int64)++v132 >= (int)stageNpcMaster )
                goto LABEL_43;
            }
LABEL_138:
            sub_1B6432C(playedStageReinforcementsList, v115);
          }
LABEL_43:
          Instance = (Il2CppObject *)v236;
          playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                              v236,
                                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_137;
          v143 = (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList;
          playedStageReinforcementsList = (WarBoardData_o *)WarBoardAIEntity__GetRatingOffsetIds(
                                                              (WarBoardAIEntity_o *)entity,
                                                              0LL);
          v84 = this;
          if ( !playedStageReinforcementsList )
            goto LABEL_137;
          v144 = (struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)playedStageReinforcementsList->fields.stageNpcMaster;
          v145 = playedStageReinforcementsList;
          if ( (int)v144 >= 1 )
          {
            v146 = 0LL;
            while ( v146 < (unsigned int)v144 )
            {
              if ( !v143 )
                goto LABEL_137;
              playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  v143,
                                                                  &item,
                                                                  *((_DWORD *)&v145->fields.npcEntityDict + v146),
                                                                  (const MethodInfo_30D3EF8 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)playedStageReinforcementsList & 1) != 0 )
              {
                if ( !v127 )
                  goto LABEL_137;
                playedStageReinforcementsList = (WarBoardData_o *)v127->fields.ratingOffsetList;
                if ( !playedStageReinforcementsList )
                  goto LABEL_137;
                v149 = item;
                stageEntity = (struct System_Int32_array *)playedStageReinforcementsList->fields.stageEntity;
                v151 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
                ++HIDWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( !stageEntity )
                  goto LABEL_137;
                stageNpcMaster_low = SLODWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( (unsigned int)stageNpcMaster_low >= stageEntity->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)playedStageReinforcementsList,
                    v149,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
                }
                else
                {
                  v153 = &stageEntity->obj.klass + stageNpcMaster_low;
                  LODWORD(playedStageReinforcementsList->fields.stageNpcMaster) = stageNpcMaster_low + 1;
                  v153[4] = (Il2CppClass *)v149;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v153 + 4), (int32_t)v149, v147, v148);
                }
              }
              LODWORD(v144) = v145->fields.stageNpcMaster;
              if ( (__int64)++v146 >= (int)v144 )
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
        v125,
        (Il2CppObject *)v127,
        (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      LODWORD(v124) = aiIds->max_length;
    }
    while ( (__int64)++v125 < (int)v124 );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v155 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  playedStageReinforcementsList = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  v158 = (WarBoardData_o *)playedStageReinforcementsList[1].fields.playedStageReinforcementsList;
  if ( !v158 )
    goto LABEL_137;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)v158->fields.pieces;
  v160 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v156, v157);
  System_Func_object__bool____ctor(v160, (Il2CppObject *)v84, Method_WarBoardAIRoute___ctor_b__42_0__, 0LL);
  playedStageReinforcementsList = (WarBoardData_o *)System_Linq_Enumerable__Where_object_(
                                                      pieces,
                                                      (System_Func_TSource__bool__o *)v160,
                                                      (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  if ( !playedStageReinforcementsList )
    goto LABEL_137;
  klass = (System_Collections_Generic_Dictionary_int__object__c *)playedStageReinforcementsList->klass;
  v162 = playedStageReinforcementsList;
  v163 = *(unsigned __int16 *)(&playedStageReinforcementsList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&playedStageReinforcementsList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      --v163;
      p_offset += 4;
      if ( !v163 )
        goto LABEL_68;
    }
    v165 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_68:
    v165 = sub_1BB60A8(
             playedStageReinforcementsList,
             System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo,
             0LL);
  }
  v166 = (*(__int64 (__fastcall **)(WarBoardData_o *, _QWORD))v165)(v162, *(_QWORD *)(v165 + 8));
  if ( !v166 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v167 = *(_QWORD *)v166;
    v168 = *(unsigned __int16 *)(*(_QWORD *)v166 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v166 + 302LL) )
    {
      v169 = (int *)(*(_QWORD *)(v167 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v169 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v168;
        v169 += 4;
        if ( !v168 )
          goto LABEL_75;
      }
      v170 = v167 + 16LL * *v169 + 312;
    }
    else
    {
LABEL_75:
      v170 = sub_1BB60A8(v166, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v170)(v166, *(_QWORD *)(v170 + 8)) & 1) == 0 )
      break;
    v171 = *(_QWORD *)v166;
    v172 = *(unsigned __int16 *)(*(_QWORD *)v166 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v166 + 302LL) )
    {
      v173 = (int *)(*(_QWORD *)(v171 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v173 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        --v172;
        v173 += 4;
        if ( !v172 )
          goto LABEL_82;
      }
      v174 = v171 + 16LL * *v173 + 312;
    }
    else
    {
LABEL_82:
      v174 = sub_1BB60A8(v166, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL);
    }
    v175 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v174)(v166, *(_QWORD *)(v174 + 8));
    if ( !v175 )
      sub_1B64324(0LL);
    if ( !*p_piecePersonalityDic )
      sub_1B64324(0LL);
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            *p_piecePersonalityDic,
            v175[7],
            (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__) )
    {
      id = WarBoardData__get_id(v158, 0LL);
      if ( !Master_object )
        sub_1B64324(id);
      v177 = WarBoardStageReinforcementsMaster__TryGetEntity(
               (WarBoardStageReinforcementsMaster_o *)Master_object,
               &v238,
               id,
               v175[72],
               0LL);
      if ( v177 )
      {
        if ( !v238 )
          sub_1B64324(v177);
        v178 = BasicHelper__IndexValue_int_(
                 v238->fields.reinforcementsIds,
                 v175[73],
                 -1,
                 (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
        if ( !v155 )
          sub_1B64324(v178);
        v179 = WarBoardReinforcementsMaster__TryGetEntity((WarBoardReinforcementsMaster_o *)v155, &v237, v178, 0LL);
        if ( v179 )
        {
          if ( !v237 )
            sub_1B64324(v179);
          WarBoardAIRoute__AddPiecePersonalityDic(this, v237->fields.aiId, v175[7], v180);
        }
      }
    }
  }
  v181 = *(_QWORD *)v166;
  v182 = *(unsigned __int16 *)(*(_QWORD *)v166 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v166 + 302LL) )
  {
    v183 = (int *)(*(_QWORD *)(v181 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v183 - 1) != System_IDisposable_TypeInfo )
    {
      --v182;
      v183 += 4;
      if ( !v182 )
        goto LABEL_98;
    }
    v184 = v181 + 16LL * *v183 + 312;
  }
  else
  {
LABEL_98:
    v184 = sub_1BB60A8(v166, System_IDisposable_TypeInfo, 0LL);
  }
  playedStageReinforcementsList = (WarBoardData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v184)(
                                                      v166,
                                                      *(_QWORD *)(v184 + 8));
  p_ratingBaseIds = (ServantStatusBattleListViewItem_o *)&npc->fields.ratingBaseIds;
  ratingBaseIds = npc->fields.ratingBaseIds;
  if ( !ratingBaseIds )
  {
    v188 = (System_Array_o *)sub_1B64170(int___TypeInfo, 6LL);
    v243.fields.value = Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v188, v243, 0LL);
    p_ratingBaseIds->klass = (ServantStatusBattleListViewItem_c *)v188;
    sub_1B6406C(p_ratingBaseIds, (int32_t)v188, v189, v190);
    ratingBaseIds = (struct System_Int32_array *)p_ratingBaseIds->klass;
    if ( !p_ratingBaseIds->klass )
LABEL_137:
      sub_1B64324(playedStageReinforcementsList);
  }
  v191 = *(_QWORD *)&ratingBaseIds->max_length;
  if ( (int)v191 >= 1 )
  {
    v192 = 0LL;
    while ( 2 )
    {
      if ( v192 >= (unsigned int)v191 )
        goto LABEL_138;
      playedStageReinforcementsList = (WarBoardData_o *)v236;
      if ( v236 )
      {
        v193 = ratingBaseIds->m_Items[v192 + 1];
        playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                            v236,
                                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
        if ( playedStageReinforcementsList )
        {
          playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___GetEntity(
                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
                                                              v193,
                                                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
          if ( playedStageReinforcementsList )
          {
            v196 = playedStageReinforcementsList;
            switch ( HIDWORD(playedStageReinforcementsList->fields.stageEntity) )
            {
              case 0:
                v197 = &ShortestDistanceFromAllyServant_TypeInfo;
                goto LABEL_115;
              case 1:
                v197 = &ShortestDistanceFromEnemyServant_TypeInfo;
                goto LABEL_115;
              case 2:
                v197 = &ShortestDistanceFromAllyMaster_TypeInfo;
                goto LABEL_115;
              case 3:
                v197 = &ShortestDistanceFromEnemyMaster_TypeInfo;
                goto LABEL_115;
              case 4:
                v197 = &ShortestDistanceFromItem_TypeInfo;
                goto LABEL_115;
              case 5:
                v197 = &ShortestDistanceFromPrioritySpace_TypeInfo;
LABEL_115:
                v198 = sub_1B64314(*v197, v194, v195);
                System_Object___ctor((Il2CppObject *)v198, 0LL);
                if ( !v198 )
                  goto LABEL_137;
                *(_QWORD *)(v198 + 16) = v196;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v198 + 16), (int32_t)v196, v199, v200);
                playedStageReinforcementsList = (WarBoardData_o *)*p_ratingBaseList;
                if ( !*p_ratingBaseList )
                  goto LABEL_137;
                v203 = (struct System_Int32_array *)playedStageReinforcementsList->fields.stageEntity;
                v204 = Method_System_Collections_Generic_List_WarBoardRatingBase__Add__;
                ++HIDWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( !v203 )
                  goto LABEL_137;
                v205 = SLODWORD(playedStageReinforcementsList->fields.stageNpcMaster);
                if ( (unsigned int)v205 >= v203->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)playedStageReinforcementsList,
                    (Il2CppObject *)v198,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
                }
                else
                {
                  v206 = &v203->obj.klass + v205;
                  LODWORD(playedStageReinforcementsList->fields.stageNpcMaster) = v205 + 1;
                  v206[4] = (Il2CppClass *)v198;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v206 + 4), v198, v201, v202);
                }
LABEL_121:
                v207 = (int32_t)v196->fields.stageEntity;
                dicRatingbaseCalcValue = this->fields.dicRatingbaseCalcValue;
                v209 = (WarBoardEvalValueSquare_CalcEval_o *)sub_1B64314(
                                                               WarBoardEvalValueSquare_CalcEval_TypeInfo,
                                                               v194,
                                                               v195);
                WarBoardEvalValueSquare_CalcEval___ctor(v209, 0LL);
                if ( !dicRatingbaseCalcValue )
                  goto LABEL_137;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                  v207,
                  (Il2CppObject *)v209,
                  (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
                LODWORD(v191) = ratingBaseIds->max_length;
                if ( (__int64)++v192 >= (int)v191 )
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
    v212 = (System_Array_o *)sub_1B64170(int___TypeInfo, 5LL);
    v244.fields.value = Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v212, v244, 0LL);
    p_tacticalIds->klass = (ServantStatusBattleListViewItem_c *)v212;
    sub_1B6406C(p_tacticalIds, (int32_t)v212, v213, v214);
    tacticalIds = (struct System_Int32_array *)p_tacticalIds->klass;
    if ( !p_tacticalIds->klass )
      goto LABEL_137;
  }
  v215 = *(_QWORD *)&tacticalIds->max_length;
  if ( (int)v215 >= 1 )
  {
    v216 = 0LL;
    while ( v216 < (unsigned int)v215 )
    {
      if ( !v236 )
        goto LABEL_137;
      v217 = tacticalIds->m_Items[v216 + 1];
      playedStageReinforcementsList = (WarBoardData_o *)DataManager__GetMasterData_object_(
                                                          v236,
                                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !playedStageReinforcementsList )
        goto LABEL_137;
      playedStageReinforcementsList = (WarBoardData_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)playedStageReinforcementsList,
                                                          v217,
                                                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      v220 = (System_Collections_Generic_List_object__o *)*p_tacticalTrendList;
      if ( !*p_tacticalTrendList )
        goto LABEL_137;
      v221 = v220->fields._items;
      v222 = Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__;
      ++v220->fields._version;
      if ( !v221 )
        goto LABEL_137;
      v223 = v220->fields._size;
      v224 = playedStageReinforcementsList;
      if ( (unsigned int)v223 >= v221->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v220,
          (Il2CppObject *)playedStageReinforcementsList,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v222[4] + 192LL) + 112LL));
      }
      else
      {
        v225 = &v221->obj.klass + v223;
        v220->fields._size = v223 + 1;
        v225[4] = (Il2CppClass *)v224;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v225 + 4), (int32_t)v224, v218, v219);
      }
      LODWORD(v215) = tacticalIds->max_length;
      if ( (__int64)++v216 >= (int)v215 )
        goto LABEL_136;
    }
    goto LABEL_138;
  }
LABEL_136:
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v228 = (WarBoardAiTargetCacher_o *)sub_1B64314(WarBoardAiTargetCacher_TypeInfo, v115, v185);
  WarBoardAiTargetCacher___ctor(v228, forceId, groupId, 0LL);
  this->fields.aiTargetCacher = v228;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.aiTargetCacher, (int32_t)v228, v229, v230);
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
  __int64 v24; // x1
  __int64 v25; // x2
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x21
  System_Func_T__TResult__o *v27; // x22
  Il2CppObject *Master_object; // x25
  Il2CppObject *v29; // x24
  Il2CppObject *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  WarBoardAIRoute_PiecePersonality_o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x8
  System_Int32_array *v36; // x25
  unsigned __int64 v37; // x29
  __int64 v38; // x2
  System_Collections_Generic_List_object__o *actionTrandList; // x26
  WarBoardActionTrendEntity_o *v40; // x28
  WarBoardAIRoute_ActionTrendInfo_o *v41; // x27
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  __int64 v48; // x8
  System_Int32_array *v49; // x23
  unsigned __int64 v50; // x19
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *p_obj; // x1
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v55; // x9
  __int64 max_length; // x10
  Il2CppArrayBounds *v57; // x8
  WarBoardAIRoute___c__DisplayClass43_0_o *v58; // [xsp+8h] [xbp-78h]
  WarBoardAIRoute_o *v59; // [xsp+10h] [xbp-70h]
  WarBoardAIEntity_o *v60; // [xsp+18h] [xbp-68h]

  if ( (byte_49FA042 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, *(_QWORD *)&aiId);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardAIMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v14);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____, v15);
    sub_1B640C8(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v18);
    sub_1B640C8(&WarBoardAIRoute_PiecePersonality_TypeInfo, v19);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__, v20);
    sub_1B640C8(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo, v21);
    byte_49FA042 = 1;
  }
  v22 = (WarBoardAIRoute___c__DisplayClass43_0_o *)sub_1B64314(
                                                     WarBoardAIRoute___c__DisplayClass43_0_TypeInfo,
                                                     *(_QWORD *)&aiId,
                                                     *(_QWORD *)&pieceIndex);
  WarBoardAIRoute___c__DisplayClass43_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_37;
  v22->fields.pieceIndex = pieceIndex;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  v27 = (System_Func_T__TResult__o *)sub_1B64314(
                                       System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo,
                                       v24,
                                       v25);
  System_Func_KeyValuePair_int__object___bool____ctor(
    v27,
    (Il2CppObject *)v22,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    0LL);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__object___48526892(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v27,
         (const MethodInfo_2E4762C *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  v58 = v22;
  v59 = this;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v29 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v30 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v33 = (WarBoardAIRoute_PiecePersonality_o *)sub_1B64314(WarBoardAIRoute_PiecePersonality_TypeInfo, v31, v32);
  WarBoardAIRoute_PiecePersonality___ctor(v33, 0LL);
  if ( !Master_object )
    goto LABEL_37;
  Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   aiId,
                                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_37;
  v60 = (WarBoardAIEntity_o *)Entity;
  Entity = WarBoardAIEntity__GetActionTrendIds((WarBoardAIEntity_o *)Entity, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v35 = *(_QWORD *)&Entity->max_length;
  v36 = Entity;
  if ( (int)v35 >= 1 )
  {
    v37 = 0LL;
    while ( v37 < (unsigned int)v35 )
    {
      if ( !v29 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v29,
                                       v36->m_Items[v37 + 1],
                                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v33 )
          goto LABEL_37;
        actionTrandList = (System_Collections_Generic_List_object__o *)v33->fields.actionTrandList;
        v40 = (WarBoardActionTrendEntity_o *)Entity;
        v41 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1B64314(WarBoardAIRoute_ActionTrendInfo_TypeInfo, v34, v38);
        WarBoardAIRoute_ActionTrendInfo___ctor(v41, v40, 0LL);
        if ( !actionTrandList )
          goto LABEL_37;
        items = actionTrandList->fields._items;
        v45 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++actionTrandList->fields._version;
        if ( !items )
          goto LABEL_37;
        size = actionTrandList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            actionTrandList,
            (Il2CppObject *)v41,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          actionTrandList->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v41;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v41, v42, v43);
        }
      }
      LODWORD(v35) = v36->max_length;
      if ( (__int64)++v37 >= (int)v35 )
        goto LABEL_22;
    }
LABEL_38:
    sub_1B6432C(Entity, v34);
  }
LABEL_22:
  Entity = WarBoardAIEntity__GetRatingOffsetIds(v60, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v48 = *(_QWORD *)&Entity->max_length;
  v49 = Entity;
  if ( (int)v48 >= 1 )
  {
    v50 = 0LL;
    while ( v50 < (unsigned int)v48 )
    {
      if ( !v30 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
                                       v49->m_Items[v50 + 1],
                                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v33 )
          goto LABEL_37;
        p_obj = &Entity->obj;
        Entity = (System_Int32_array *)v33->fields.ratingOffsetList;
        if ( !Entity )
          goto LABEL_37;
        bounds = Entity->bounds;
        v55 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
        ++Entity->m_Items[0];
        if ( !bounds )
          goto LABEL_37;
        max_length = (int)Entity->max_length;
        if ( (unsigned int)max_length >= bounds[3].length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Entity,
            p_obj,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &bounds[max_length];
          Entity->max_length = max_length + 1;
          v57[4] = (Il2CppArrayBounds)p_obj;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v57[4], (int32_t)p_obj, v51, v52);
        }
      }
      LODWORD(v48) = v49->max_length;
      if ( (__int64)++v50 >= (int)v48 )
        goto LABEL_35;
    }
    goto LABEL_38;
  }
LABEL_35:
  Entity = (System_Int32_array *)v59->fields.piecePersonalityDic;
  if ( !Entity )
LABEL_37:
    sub_1B64324(Entity);
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)Entity,
    v58->fields.pieceIndex,
    (Il2CppObject *)v33,
    (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
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
  __int64 v56; // x1
  __int64 v57; // x2
  _QWORD *v58; // x19
  System_Collections_Generic_List_object__o *v59; // x22
  __int64 v60; // x1
  __int64 v61; // x2
  System_Collections_Generic_List_object__o *v62; // x21
  __int64 v63; // x1
  __int64 v64; // x2
  System_Collections_Generic_List_object__o *v65; // x20
  __int64 v66; // x1
  int32_t v67; // w2
  int32_t v68; // w3
  __int64 v69; // x24
  int v70; // w8
  unsigned int v71; // w25
  __int64 v72; // x23
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  WarBoardAIRoute_o *v77; // x10
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  System_Object_array *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  System_Object_array *v89; // x0
  int32_t v90; // w2
  int32_t v91; // w3
  struct WarBoardSquareData_array *v92; // x1
  int32_t v93; // w2
  int32_t v94; // w3
  struct WarBoardItemData_array *v95; // x1
  int32_t v96; // w2
  int32_t v97; // w3
  struct WarBoardTreasureData_array *v98; // x1
  int32_t v99; // w2
  int32_t v100; // w3
  struct WarBoardWallData_array *v101; // x1
  int32_t v102; // w2
  int32_t v103; // w3
  __int64 v104; // x1
  __int64 v105; // x2
  System_Collections_Generic_List_object__o *v106; // x25
  int32_t forceId; // w19
  int32_t groupId; // w20
  __int64 v109; // x1
  __int64 v110; // x2
  WarBoardAIRoute_AIRouteMasterData_o *v111; // x0
  int32_t v112; // w2
  struct WarBoardAIRoute_AIRouteMasterData_o *v113; // x21
  WarBoardAIRoute_o *v114; // x20
  int32_t v115; // w2
  int32_t v116; // w3
  __int64 v117; // x1
  __int64 v118; // x2
  System_Collections_Generic_Dictionary_int__uint__o *v119; // x19
  int32_t v120; // w2
  int32_t v121; // w3
  struct WarBoardPieceData_array *allAllyPiece; // x9
  int max_length; // w8
  unsigned int v124; // w10
  __int64 v125; // x1
  __int64 v126; // x2
  int32_t forceId_k__BackingField; // w8
  int32_t v128; // w9
  int32_t v129; // w1
  __int64 v130; // x1
  __int64 v131; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v133; // x20
  __int64 v134; // x9
  int *p_offset; // x10
  __int64 v136; // x0
  __int64 v137; // x8
  __int64 v138; // x9
  int *v139; // x10
  __int64 v140; // x0
  __int64 v141; // x8
  __int64 v142; // x9
  int *v143; // x10
  __int64 v144; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v145; // x0
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x20
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  __int64 v148; // x1
  __int64 v149; // x2
  int v150; // w8
  unsigned int v151; // w9
  WarBoardActionTrendConditionEntity_o *v152; // x25
  struct System_Int32_array *conditionTypes; // x24
  __int64 v154; // x8
  unsigned __int64 v155; // x28
  int32_t v156; // w26
  WarBoardAIRoute___c__DisplayClass45_0_o *v157; // x29
  __int64 v158; // x0
  __int64 ConditionType; // x0
  int32_t squareIndex; // w1
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexKeyItemData; // x0
  __int64 v162; // x1
  __int64 v163; // x2
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_object__bool__o *v165; // x21
  Il2CppObject *v166; // x2
  System_Collections_Generic_Dictionary_int__object__o *v167; // x0
  int32_t v168; // w21
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x0
  _BOOL8 IsRegisteredTrendId; // x0
  __int64 v172; // x1
  __int64 v173; // x2
  System_Func_T__TResult__o *v174; // x19
  WarBoardAiTargetCacher_o *v175; // x19
  int64_t v176; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicIndividualityPutSqareIndex; // x21
  int64_t v178; // x19
  int64_t v179; // x23
  __int64 v180; // x1
  __int64 v181; // x2
  WarBoardAIRoute_TargetData_o *v182; // x22
  __int64 v183; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x19
  WarBoardAIRoute_o *v185; // x0
  const MethodInfo *v186; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicSquarePutSqareIndex; // x19
  int64_t v188; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_object__bool__o *v190; // x21
  WarBoardSquareData_o *v191; // x21
  int64_t v192; // x22
  __int64 v193; // x1
  __int64 v194; // x2
  WarBoardAIRoute_TargetData_o *v195; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *v196; // x21
  int64_t v197; // x0
  __int64 v198; // x8
  __int64 v199; // x9
  int *v200; // x10
  __int64 v201; // x21
  __int64 v202; // x0
  __int64 v203; // x1
  __int64 v204; // x2
  WarBoardAiTargetCacher_o *v205; // x20
  WarBoardAIRoute___c_c *v206; // x8
  System_Func_object__bool__o *_9__45_0; // x19
  Il2CppObject *v208; // x21
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v210; // w2
  int32_t v211; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v212; // x0
  __int64 v213; // x2
  WarBoardAIRoute_AdvantagePieceData_o *v214; // x20
  struct WarBoardPieceData_array *v215; // x22
  int v216; // w8
  int32_t v217; // w21
  unsigned int v218; // w23
  Il2CppClass **v219; // x8
  Il2CppClass *v220; // x25
  int32_t ClassId; // w19
  float Magnification; // s10
  float v223; // s11
  float v224; // s8
  float v225; // s9
  const MethodInfo *v226; // x1
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+10h] [xbp-110h]
  struct WarBoardAIRoute_AIRouteMasterData_o **p_aiRouteMasterData; // [xsp+18h] [xbp-108h]
  struct WarBoardPieceData_array *v229; // [xsp+20h] [xbp-100h]
  struct System_Collections_Generic_Dictionary_int__uint__o **p_placePieceData; // [xsp+28h] [xbp-F8h]
  unsigned int v231; // [xsp+34h] [xbp-ECh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-E8h]
  __int64 v233; // [xsp+40h] [xbp-E0h]
  unsigned int v234; // [xsp+4Ch] [xbp-D4h]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_IWarBoardObjectData__o *objectList; // [xsp+70h] [xbp-B0h]
  WarBoardAIRoute_DesignationItemData_o *v238; // [xsp+78h] [xbp-A8h]
  WarBoardAIRoute_PutSquareTarget_o *v239; // [xsp+80h] [xbp-A0h]
  bool notSquareTarget; // [xsp+88h] [xbp-98h] BYREF
  int32_t condType; // [xsp+8Ch] [xbp-94h] BYREF
  Il2CppObject *value; // [xsp+98h] [xbp-88h] BYREF

  if ( (byte_49FA044 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIRoute_AIRouteMasterData_TypeInfo, method);
    sub_1B640C8(&WarBoardAIRoute_AdvantagePieceData_TypeInfo, v2);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&WarBoardAIRoute_DesignationItemData_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__uint__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v23);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v24);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, v25);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, v26);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, v27);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v28);
    sub_1B640C8(&System_Func_IWarBoardObjectData__bool__TypeInfo, v29);
    sub_1B640C8(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v30);
    sub_1B640C8(&System_Func_WarBoardItemData__bool__TypeInfo, v31);
    sub_1B640C8(&System_Func_WarBoardSquareData__bool__TypeInfo, v32);
    sub_1B640C8(&System_IDisposable_TypeInfo, v33);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v34);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v35);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__, v37);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v38);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v39);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v40);
    sub_1B640C8(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__, v41);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v42);
    sub_1B640C8(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo, v43);
    sub_1B640C8(&WarBoardAIRoute_PutSquareTarget_TypeInfo, v44);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v46);
    sub_1B640C8(&SvtClassAttri_TypeInfo, v47);
    sub_1B640C8(&WarBoardAIRoute_TargetData_TypeInfo, v48);
    sub_1B640C8(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__, v49);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__, v50);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__, v51);
    sub_1B640C8(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo, v52);
    sub_1B640C8(&WarBoardAIRoute___c_TypeInfo, v53);
    sub_1B640C8(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__, v54);
    byte_49FA044 = 1;
  }
  value = 0LL;
  condType = 0;
  notSquareTarget = 0;
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_223;
  v58 = *(_QWORD **)&Instance[5].fields._freeCount;
  v59 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                       v56,
                                                       v57);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v62 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                       v60,
                                                       v61);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v65 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                       v63,
                                                       v64);
  System_Collections_Generic_List_object____ctor(
    v65,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v58 )
    goto LABEL_223;
  v69 = v58[6];
  if ( !v69 )
    goto LABEL_223;
  v70 = *(_DWORD *)(v69 + 24);
  if ( v70 >= 1 )
  {
    v71 = 0;
    while ( 1 )
    {
      if ( v71 >= v70 )
LABEL_224:
        sub_1B6432C(Instance, v66);
      if ( !v65 )
        break;
      v72 = *(_QWORD *)(v69 + 8LL * (int)v71 + 32);
      items = v65->fields._items;
      v74 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v65->fields._version;
      if ( !items )
        break;
      size = v65->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v65,
          (Il2CppObject *)v72,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
      }
      else
      {
        v76 = &items->obj.klass + size;
        v65->fields._size = size + 1;
        v76[4] = (Il2CppClass *)v72;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v76 + 4), v72, v67, v68);
      }
      if ( !v72 )
        break;
      if ( !*(_BYTE *)(v72 + 60) )
      {
        v77 = this;
        if ( *(_DWORD *)(v72 + 20) == this->fields.forceId && *(_DWORD *)(v72 + 24) == this->fields.groupId )
        {
          if ( !v59 )
            break;
          v78 = v59->fields._items;
          v79 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v59->fields._version;
          if ( !v78 )
            break;
          v80 = v59->fields._size;
          if ( (unsigned int)v80 >= v78->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v59,
              (Il2CppObject *)v72,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
          }
          else
          {
            v81 = &v78->obj.klass + v80;
            v59->fields._size = v80 + 1;
            v81[4] = (Il2CppClass *)v72;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v81 + 4), v72, v67, v68);
          }
          v77 = this;
        }
        if ( *(_DWORD *)(v72 + 20) != v77->fields.forceId )
        {
          if ( !v62 )
            break;
          v82 = v62->fields._items;
          v83 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v62->fields._version;
          if ( !v82 )
            break;
          v84 = v62->fields._size;
          if ( (unsigned int)v84 >= v82->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v62,
              (Il2CppObject *)v72,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
          }
          else
          {
            v85 = &v82->obj.klass + v84;
            v62->fields._size = v84 + 1;
            v85[4] = (Il2CppClass *)v72;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v85 + 4), v72, v67, v68);
          }
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                (WarBoardPieceData_o *)v72,
                                                                                0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            this->fields.enemyMasterSquareIndex = *(_DWORD *)(v72 + 64);
        }
      }
      v70 = *(_DWORD *)(v69 + 24);
      if ( (int)++v71 >= v70 )
        goto LABEL_33;
    }
LABEL_223:
    sub_1B64324(Instance);
  }
LABEL_33:
  if ( !v59 )
    goto LABEL_223;
  v86 = System_Collections_Generic_List_object___ToArray(
          v59,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allAllyPiece = (struct WarBoardPieceData_array *)v86;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.allAllyPiece, (int32_t)v86, v87, v88);
  if ( !v62 )
    goto LABEL_223;
  v89 = System_Collections_Generic_List_object___ToArray(
          v62,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v89;
  p_allEnemyPiece = &this->fields.allEnemyPiece;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.allEnemyPiece, (int32_t)v89, v90, v91);
  v92 = (struct WarBoardSquareData_array *)v58[7];
  this->fields.allSquare = v92;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.allSquare, (int32_t)v92, v93, v94);
  v95 = (struct WarBoardItemData_array *)v58[9];
  this->fields.allItemData = v95;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.allItemData, (int32_t)v95, v96, v97);
  v98 = (struct WarBoardTreasureData_array *)v58[10];
  this->fields.allTreasureData = v98;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.allTreasureData, (int32_t)v98, v99, v100);
  v101 = (struct WarBoardWallData_array *)v58[11];
  this->fields.allWallData = v101;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.allWallData, (int32_t)v101, v102, v103);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictionaryCreateRouteDataEvalValue;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_object__float___Clear(
    Instance,
    (const MethodInfo_318275C *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_31B22B8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_31B22B8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_31B22B8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_223;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v106 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_IWarBoardObjectData__TypeInfo,
                                                        v104,
                                                        v105);
  System_Collections_Generic_List_object____ctor(
    v106,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v106 )
    goto LABEL_223;
  System_Collections_Generic_List_object___AddRange(
    v106,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allItemData,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v106,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allTreasureData,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v106,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWallData,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  objectList = (System_Collections_Generic_List_IWarBoardObjectData__o *)v106;
  System_Collections_Generic_List_object___AddRange(
    v106,
    (System_Collections_Generic_IEnumerable_T__o *)v65,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v111 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_1B64314(WarBoardAIRoute_AIRouteMasterData_TypeInfo, v109, v110);
  v112 = groupId;
  v113 = v111;
  v114 = this;
  WarBoardAIRoute_AIRouteMasterData___ctor(v111, forceId, v112, 0LL);
  this->fields.aiRouteMasterData = v113;
  p_aiRouteMasterData = &this->fields.aiRouteMasterData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.aiRouteMasterData, (int32_t)v113, v115, v116);
  v119 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__uint__TypeInfo,
                                                                 v117,
                                                                 v118);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v119,
    (const MethodInfo_312EC24 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  this->fields.placePieceData = v119;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.placePieceData, (int32_t)v119, v120, v121);
  allAllyPiece = this->fields.allAllyPiece;
  p_placePieceData = &this->fields.placePieceData;
  if ( !allAllyPiece )
    goto LABEL_223;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v124 = 0;
    v229 = this->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v124 >= max_length )
        goto LABEL_224;
      pieceData = allAllyPiece->m_Items[v124];
      if ( !pieceData )
        goto LABEL_223;
      v231 = v124;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_223;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
                                                                            pieceData->fields._nowSquareIndex_k__BackingField,
                                                                            (const MethodInfo_312F7D4 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_199;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_223;
      System_Collections_Generic_Dictionary_int__uint___Add(
        (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
        pieceData->fields._nowSquareIndex_k__BackingField,
        pieceData->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_312F5E8 *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
      forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
      v128 = v114->fields.forceId;
      if ( forceId_k__BackingField != v128 )
        goto LABEL_57;
      if ( pieceData->fields._groupId_k__BackingField == v114->fields.groupId )
        break;
LABEL_58:
      if ( pieceData->fields._groupId_k__BackingField == v114->fields.groupId )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
        if ( !*p_aiRouteMasterData )
          goto LABEL_223;
        v129 = 2;
        goto LABEL_61;
      }
LABEL_62:
      v238 = (WarBoardAIRoute_DesignationItemData_o *)sub_1B64314(
                                                        WarBoardAIRoute_DesignationItemData_TypeInfo,
                                                        v125,
                                                        v126);
      WarBoardAIRoute_DesignationItemData___ctor(v238, 0LL);
      v239 = (WarBoardAIRoute_PutSquareTarget_o *)sub_1B64314(WarBoardAIRoute_PutSquareTarget_TypeInfo, v130, v131);
      WarBoardAIRoute_PutSquareTarget___ctor(v239, 0LL);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v114->fields.piecePersonalityDic;
      if ( !Instance )
        goto LABEL_223;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                                                            pieceData->fields._index_k__BackingField,
                                                                            &value,
                                                                            (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
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
        v133 = Instance;
        v134 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
          {
            --v134;
            p_offset += 4;
            if ( !v134 )
              goto LABEL_70;
          }
          v136 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_70:
          v136 = sub_1BB60A8(
                   Instance,
                   System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                   0LL);
        }
        v233 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v136)(
                 v133,
                 *(_QWORD *)(v136 + 8));
        if ( !v233 )
          sub_1B64324(0LL);
        while ( 1 )
        {
LABEL_73:
          v137 = *(_QWORD *)v233;
          v138 = *(unsigned __int16 *)(*(_QWORD *)v233 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v233 + 302LL) )
          {
            v139 = (int *)(*(_QWORD *)(v137 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v139 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v138;
              v139 += 4;
              if ( !v138 )
                goto LABEL_77;
            }
            v140 = v137 + 16LL * *v139 + 312;
          }
          else
          {
LABEL_77:
            v140 = sub_1BB60A8(v233, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v140)(v233, *(_QWORD *)(v140 + 8)) & 1) == 0 )
            break;
          v141 = *(_QWORD *)v233;
          v142 = *(unsigned __int16 *)(*(_QWORD *)v233 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v233 + 302LL) )
          {
            v143 = (int *)(*(_QWORD *)(v141 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__c **)v143 - 1) != System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
            {
              --v142;
              v143 += 4;
              if ( !v142 )
                goto LABEL_84;
            }
            v144 = v141 + 16LL * *v143 + 312;
          }
          else
          {
LABEL_84:
            v144 = sub_1BB60A8(
                     v233,
                     System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                     0LL);
          }
          v145 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v144)(
                                                        v233,
                                                        *(_QWORD *)(v144 + 8));
          if ( !v145 )
            sub_1B64324(0LL);
          Entity_k__BackingField = v145->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v145, 0LL);
          if ( !ConditionEntityArray )
            sub_1B64324(0LL);
          v150 = ConditionEntityArray->max_length;
          if ( v150 >= 1 )
          {
            v151 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v151 >= v150 )
                sub_1B6432C(ConditionEntityArray, v148);
              v152 = ConditionEntityArray->m_Items[v151];
              if ( !v152 )
                sub_1B64324(ConditionEntityArray);
              conditionTypes = v152->fields.conditionTypes;
              if ( !conditionTypes )
                sub_1B64324(ConditionEntityArray);
              v154 = *(_QWORD *)&conditionTypes->max_length;
              v234 = v151;
              if ( (int)v154 >= 1 )
                break;
LABEL_137:
              ConditionEntityArray = condEntityArray;
              v150 = condEntityArray->max_length;
              v151 = v234 + 1;
              if ( (int)(v234 + 1) >= v150 )
                goto LABEL_73;
            }
            v155 = 0LL;
            while ( 2 )
            {
              if ( v155 >= (unsigned int)v154 )
                sub_1B6432C(ConditionEntityArray, v148);
              v156 = conditionTypes->m_Items[v155 + 1];
              v157 = (WarBoardAIRoute___c__DisplayClass45_0_o *)sub_1B64314(
                                                                  WarBoardAIRoute___c__DisplayClass45_0_TypeInfo,
                                                                  v148,
                                                                  v149);
              WarBoardAIRoute___c__DisplayClass45_0___ctor(v157, 0LL);
              if ( !v157 )
                sub_1B64324(v158);
              v157->fields.squareIndex = -1;
              ConditionType = WarBoardActionTrendConditionEntity__GetConditionType(v152, v156, 0LL);
              if ( (int)ConditionType <= 39 )
              {
                if ( (_DWORD)ConditionType == 23 || (_DWORD)ConditionType == 24 )
                  goto LABEL_104;
LABEL_136:
                squareIndex = v157->fields.squareIndex;
              }
              else
              {
                if ( (_DWORD)ConditionType != 40 && (_DWORD)ConditionType != 41 && (_DWORD)ConditionType != 42 )
                  goto LABEL_136;
LABEL_104:
                squareIndex = v152->fields.value;
                v157->fields.squareIndex = squareIndex;
              }
              if ( squareIndex != -1 )
              {
                if ( !v238 )
                  sub_1B64324(ConditionType);
                dicSquareIndexKeyItemData = (System_Collections_Generic_Dictionary_int__object__o *)v238->fields.dicSquareIndexKeyItemData;
                if ( !dicSquareIndexKeyItemData )
                  sub_1B64324(0LL);
                if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                        dicSquareIndexKeyItemData,
                        squareIndex,
                        (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__) )
                {
                  allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allItemData;
                  v165 = (System_Func_object__bool__o *)sub_1B64314(
                                                          System_Func_WarBoardItemData__bool__TypeInfo,
                                                          v162,
                                                          v163);
                  System_Func_object__bool____ctor(
                    v165,
                    (Il2CppObject *)v157,
                    Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                    0LL);
                  v166 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
                           allItemData,
                           (System_Func_TSource__bool__o *)v165,
                           (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                  if ( v166 )
                  {
                    v167 = (System_Collections_Generic_Dictionary_int__object__o *)v238->fields.dicSquareIndexKeyItemData;
                    if ( !v167 )
                      sub_1B64324(0LL);
                    System_Collections_Generic_Dictionary_int__object___Add(
                      v167,
                      v157->fields.squareIndex,
                      v166,
                      (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                  }
                }
              }
              v157->fields.squareIndex = -1;
              ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)WarBoardActionTrendConditionEntity__GetConditionType(
                                                                                   v152,
                                                                                   v156,
                                                                                   0LL);
              if ( (_DWORD)ConditionEntityArray == 74 || (_DWORD)ConditionEntityArray == 75 )
              {
                v168 = v152->fields.value;
                v157->fields.squareIndex = v168;
              }
              else
              {
                if ( (unsigned int)((_DWORD)ConditionEntityArray - 127) <= 1 )
                {
                  if ( !Entity_k__BackingField )
                    sub_1B64324(ConditionEntityArray);
                  aiTargetCacher = this->fields.aiTargetCacher;
                  TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  if ( !aiTargetCacher )
                    sub_1B64324(TrendKey);
                  IsRegisteredTrendId = WarBoardAiTargetCacher__IsRegisteredTrendId(aiTargetCacher, TrendKey, 0LL);
                  if ( !IsRegisteredTrendId )
                  {
                    v174 = (System_Func_T__TResult__o *)sub_1B64314(
                                                          System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo,
                                                          v172,
                                                          v173);
                    System_Func_Int32Enum__bool____ctor(
                      v174,
                      0LL,
                      Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                      0LL);
                    WarBoardActionTrendConditionMaster__HasMatchCondition(
                      condEntityArray,
                      (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v174,
                      &condType,
                      0LL);
                    v175 = this->fields.aiTargetCacher;
                    v176 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                    if ( !v175 )
                      sub_1B64324(v176);
                    WarBoardAiTargetCacher__Register(v175, v176, v152, condType, 0LL);
                  }
                  if ( !v239 )
                    sub_1B64324(IsRegisteredTrendId);
                  dicIndividualityPutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v239->fields.dicIndividualityPutSqareIndex;
                  v178 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  v179 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  v182 = (WarBoardAIRoute_TargetData_o *)sub_1B64314(WarBoardAIRoute_TargetData_TypeInfo, v180, v181);
                  WarBoardAIRoute_TargetData___ctor(v182, v179, v156, 0LL);
                  if ( !dicIndividualityPutSqareIndex )
                    sub_1B64324(v183);
                  System_Collections_Generic_Dictionary_long__object___set_Item(
                    dicIndividualityPutSqareIndex,
                    v178,
                    (Il2CppObject *)v182,
                    (const MethodInfo_3161788 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                }
                v168 = v157->fields.squareIndex;
              }
              if ( v168 != -1 )
              {
                if ( !v239 )
                  sub_1B64324(ConditionEntityArray);
                if ( !Entity_k__BackingField )
                  sub_1B64324(ConditionEntityArray);
                dicObjectPutSquareIndex = v239->fields.dicObjectPutSquareIndex;
                v185 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                WarBoardAIRoute__RegisterTargetObjectToDic(
                  v185,
                  dicObjectPutSquareIndex,
                  objectList,
                  v168,
                  (int64_t)v185,
                  v156,
                  &notSquareTarget,
                  v186);
                if ( !notSquareTarget )
                {
                  dicSquarePutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v239->fields.dicSquarePutSqareIndex;
                  v188 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  if ( !dicSquarePutSqareIndex )
                    sub_1B64324(v188);
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__object___ContainsKey(
                                                                                       dicSquarePutSqareIndex,
                                                                                       v188,
                                                                                       (const MethodInfo_3161990 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allSquare;
                    v190 = (System_Func_object__bool__o *)sub_1B64314(
                                                            System_Func_WarBoardSquareData__bool__TypeInfo,
                                                            v148,
                                                            v149);
                    System_Func_object__bool____ctor(
                      v190,
                      (Il2CppObject *)v157,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                      0LL);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                                                                         allSquare,
                                                                                         (System_Func_TSource__bool__o *)v190,
                                                                                         (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                    v191 = (WarBoardSquareData_o *)ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v192 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                      v195 = (WarBoardAIRoute_TargetData_o *)sub_1B64314(
                                                               WarBoardAIRoute_TargetData_TypeInfo,
                                                               v193,
                                                               v194);
                      WarBoardAIRoute_TargetData___ctor_35003588(v195, v191, v192, v156, 0LL);
                      v196 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v239->fields.dicSquarePutSqareIndex;
                      v197 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                      if ( !v196 )
                        sub_1B64324(v197);
                      System_Collections_Generic_Dictionary_long__object___Add(
                        v196,
                        v197,
                        (Il2CppObject *)v195,
                        (const MethodInfo_316179C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                    }
                  }
                }
              }
              LODWORD(v154) = conditionTypes->max_length;
              if ( (__int64)++v155 >= (int)v154 )
                goto LABEL_137;
              continue;
            }
          }
        }
        v198 = *(_QWORD *)v233;
        v199 = *(unsigned __int16 *)(*(_QWORD *)v233 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v233 + 302LL) )
        {
          v200 = (int *)(*(_QWORD *)(v198 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v200 - 1) != System_IDisposable_TypeInfo )
          {
            --v199;
            v200 += 4;
            if ( !v199 )
              goto LABEL_143;
          }
          v201 = v233;
          v202 = v198 + 16LL * *v200 + 312;
        }
        else
        {
LABEL_143:
          v201 = v233;
          v202 = sub_1BB60A8(v233, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v202)(v201, *(_QWORD *)(v202 + 8));
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.aiTargetCacher;
        if ( !Instance )
          goto LABEL_223;
        WarBoardAiTargetCacher__ClearTargetObject((WarBoardAiTargetCacher_o *)Instance, 0LL);
        v205 = this->fields.aiTargetCacher;
        v206 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v206 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__45_0 = (System_Func_object__bool__o *)v206->static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !v206->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v206);
            v206 = WarBoardAIRoute___c_TypeInfo;
          }
          v208 = (Il2CppObject *)v206->static_fields->__9;
          _9__45_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                      System_Func_IWarBoardObjectData__bool__TypeInfo,
                                                      v203,
                                                      v204);
          System_Func_object__bool____ctor(
            _9__45_0,
            v208,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            0LL);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v210, v211);
        }
        v212 = System_Linq_Enumerable__Where_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_object_(
                                                                              v212,
                                                                              (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v205 )
          goto LABEL_223;
        WarBoardAiTargetCacher__AggregateTargetObject(v205, (IWarBoardObjectData_array *)Instance, 0LL);
        v114 = this;
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
        if ( !Instance )
          goto LABEL_223;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v238,
          (const MethodInfo_31B2130 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
        if ( !Instance )
          goto LABEL_223;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v239,
          (const MethodInfo_31B2130 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isServant(
                                                                              pieceData,
                                                                              0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v214 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_1B64314(
                                                           WarBoardAIRoute_AdvantagePieceData_TypeInfo,
                                                           v66,
                                                           v213);
          WarBoardAIRoute_AdvantagePieceData___ctor(v214, 0LL);
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pieceData->fields._battleServant_k__BackingField;
          if ( !Instance )
            goto LABEL_223;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleServantData__getClassId(
                                                                                (BattleServantData_o *)Instance,
                                                                                0LL);
          v215 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_223;
          v216 = v215->max_length;
          if ( v216 >= 1 )
          {
            v217 = (int)Instance;
            v218 = 0;
            while ( 2 )
            {
              if ( v218 >= v216 )
                goto LABEL_224;
              v219 = &v215->obj.klass + (int)v218;
              v220 = v219[4];
              if ( !v220 )
                goto LABEL_223;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                    (WarBoardPieceData_o *)v219[4],
                                                                                    0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_196;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v220->_1.fields;
              if ( !Instance )
                goto LABEL_223;
              ClassId = BattleServantData__getClassId((BattleServantData_o *)Instance, 0LL);
              if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
              Magnification = SvtClassAttri__getMagnification(v217, ClassId, 0LL);
              v223 = SvtClassAttri__getMagnification(ClassId, v217, 0LL);
              v224 = SvtClassAttri__getMagnification(v217, ClassId, 0LL);
              v225 = SvtClassAttri__getMagnification(ClassId, v217, 0LL);
              if ( Magnification <= 1.0 )
              {
                if ( v223 >= 1.0 )
                  goto LABEL_175;
                if ( !v214 )
                  goto LABEL_223;
              }
              else
              {
                if ( !v214 )
                  goto LABEL_223;
                Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v214->fields.dicAttackAdvantageServant;
                if ( !Instance )
                  goto LABEL_223;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                  (int32_t)v220->_1.element_class,
                  (Il2CppObject *)v220,
                  (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                v214->fields.flagNow |= 0x4000uLL;
                if ( v223 >= 1.0 )
                {
LABEL_175:
                  if ( v224 >= 1.0 )
                  {
                    if ( v225 > 1.0 )
                    {
                      if ( !v214 )
                        goto LABEL_223;
                      goto LABEL_182;
                    }
                  }
                  else
                  {
                    if ( !v214 )
                      goto LABEL_223;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v214->fields.dicAttackDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_223;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v220->_1.element_class,
                      (Il2CppObject *)v220,
                      (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v214->fields.flagNow |= 0x8000uLL;
                    if ( v225 <= 1.0 )
                      goto LABEL_184;
LABEL_182:
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v214->fields.dicDefenseDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_223;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v220->_1.element_class,
                      (Il2CppObject *)v220,
                      (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v214->fields.flagNow |= 0x20000uLL;
                  }
LABEL_184:
                  if ( Magnification <= 1.0 || v223 >= 1.0 )
                  {
                    if ( v224 < 1.0 && v225 > 1.0 )
                    {
                      if ( !v214 )
                        goto LABEL_223;
LABEL_194:
                      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v214->fields.dicClassDisAdvantageServant;
                      if ( !Instance )
                        goto LABEL_223;
                      System_Collections_Generic_Dictionary_int__object___Add(
                        (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                        (int32_t)v220->_1.element_class,
                        (Il2CppObject *)v220,
                        (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                      v214->fields.flagNow |= 0x2000uLL;
                    }
                  }
                  else
                  {
                    if ( !v214 )
                      goto LABEL_223;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v214->fields.dicClassAdvantageServant;
                    if ( !Instance )
                      goto LABEL_223;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v220->_1.element_class,
                      (Il2CppObject *)v220,
                      (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v214->fields.flagNow |= 0x1000uLL;
                    if ( v224 < 1.0 && v225 > 1.0 )
                      goto LABEL_194;
                  }
LABEL_196:
                  v216 = v215->max_length;
                  if ( (int)++v218 >= v216 )
                    goto LABEL_197;
                  continue;
                }
              }
              break;
            }
            Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v214->fields.dicDefenseAdvantageServant;
            if ( !Instance )
              goto LABEL_223;
            System_Collections_Generic_Dictionary_int__object___Add(
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              (int32_t)v220->_1.element_class,
              (Il2CppObject *)v220,
              (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
            v214->fields.flagNow |= 0x10000uLL;
            goto LABEL_175;
          }
LABEL_197:
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
          if ( !Instance )
            goto LABEL_223;
          System_Collections_Generic_Dictionary_uint__object___Add(
            Instance,
            pieceData->fields._uniqueIndex_k__BackingField,
            (Il2CppObject *)v214,
            (const MethodInfo_31B2130 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          v114 = this;
        }
      }
LABEL_199:
      allAllyPiece = v229;
      max_length = v229->max_length;
      v124 = v231 + 1;
      if ( (int)(v231 + 1) >= max_length )
        goto LABEL_221;
    }
    if ( WarBoardPieceData__get_isMaster(pieceData, 0LL) )
    {
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_223;
      v129 = 0;
LABEL_61:
      WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        (WarBoardAIRoute_AIRouteMasterData_o *)Instance,
        v129,
        pieceData,
        0LL);
      goto LABEL_62;
    }
    forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
    v128 = v114->fields.forceId;
LABEL_57:
    if ( forceId_k__BackingField != v128 )
      goto LABEL_62;
    goto LABEL_58;
  }
LABEL_221:
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
  if ( !*p_aiRouteMasterData )
    goto LABEL_223;
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData((WarBoardAIRoute_AIRouteMasterData_o *)Instance, 1, 0LL, 0LL);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(v114, v226);
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

  if ( (byte_49FA04E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&targetSquare);
    this = (WarBoardAIRoute_o *)sub_1B640C8(&WarBoardAIManager_TypeInfo, v6);
    byte_49FA04E = 1;
  }
  if ( !alreadyGetItemList )
    sub_1B64324(this);
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
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
    sub_1B64324(v5);
  v20->fields.isMoveByServantAndDefenseDisAdvantageServantRange = (int)v5;
}


void __fastcall WarBoardAIRoute__Clear(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *v2; // x19
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_49FA040 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1B640C8(
                                  &Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__,
                                  method);
    byte_49FA040 = 1;
  }
  allRouteList = v2->fields.allRouteList;
  if ( !allRouteList )
    sub_1B64324(this);
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
  if ( (byte_49FA04D & 1) == 0 )
  {
    sub_1B640C8(&AStarSearch_TypeInfo, *(_QWORD *)&baseRange);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v11);
    dicPieceList = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_1B640C8(
                                                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                                                                        v12);
    byte_49FA04D = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !v6 )
    sub_1B64324(dicPieceList);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v13 = 3;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v18,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
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
            (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
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
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  return v13;
}


void __fastcall WarBoardAIRoute__CreateOutOfWarningAreaToDistance(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__int__o *v7; // x21
  struct System_Collections_Generic_Dictionary_int__int__o **p_dicOutOfWarningAreaRange; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_Dictionary_int__int__o *IsFlag; // x0
  __int64 v12; // x1
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
  int32_t name; // w24
  int32_t v25; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  int32_t v28; // w1
  const MethodInfo_311AEB4 *v29; // x3
  int32_t v30; // w2
  struct System_Collections_Generic_Dictionary_int__int__o **v31; // [xsp+0h] [xbp-70h]

  if ( (byte_49FA059 & 1) == 0 )
  {
    sub_1B640C8(&AStarSearch_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v6);
    byte_49FA059 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                              System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                              method,
                                                              v2);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v7;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicOutOfWarningAreaRange, (int32_t)v7, v9, v10);
  allSquare = this->fields.allSquare;
  if ( !allSquare )
LABEL_33:
    sub_1B64324(IsFlag);
  max_length = allSquare->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    v31 = &this->fields.dicOutOfWarningAreaRange;
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
            v25 = (int32_t)v23->_1.name;
            if ( !AStarSearch_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
            v26 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                         0LL,
                                                                         name,
                                                                         v25,
                                                                         0,
                                                                         0LL,
                                                                         0LL);
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__Count_int_(
                                                                            v26,
                                                                            (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
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
          sub_1B6432C(IsFlag, v12);
        }
        v21 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        IsFlag = *v31;
        if ( !*v31 )
          goto LABEL_33;
        v28 = (int32_t)v17->_1.name;
        v29 = (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v30 = v21;
      }
      else
      {
        IsFlag = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v28 = (int32_t)v17->_1.name;
        v29 = (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v30 = 0;
      }
      System_Collections_Generic_Dictionary_int__int___Add(IsFlag, v28, v30, v29);
      max_length = allSquare->max_length;
      ++v15;
    }
    while ( v15 < max_length );
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall WarBoardAIRoute__CreateRouteData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t searchCount,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49FA046 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo, piecePlaceData);
    byte_49FA046 = 1;
  }
  v9 = sub_1B64314(WarBoardAIRoute__CreateRouteData_d__47_TypeInfo, piecePlaceData, *(_QWORD *)&searchCount);
  WarBoardAIRoute__CreateRouteData_d__47___ctor((WarBoardAIRoute__CreateRouteData_d__47_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_QWORD *)(v9 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 56), (int32_t)piecePlaceData, v13, v14);
  *(_DWORD *)(v9 + 40) = searchCount;
  *(_QWORD *)(v9 + 48) = routeDataList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)routeDataList, v15, v16);
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

  if ( (byte_49FA05E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, basePiece);
    this = (WarBoardAIRoute_o *)sub_1B640C8(&WarBoardAIManager_TypeInfo, v7);
    byte_49FA05E = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_1B64324(this);
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_3130C80 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
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
  _BOOL8 HasFlag_35001680; // x0
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
  if ( (byte_49FA05C & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1B640C8(
                                  &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__,
                                  basePiece);
    byte_49FA05C = 1;
  }
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v6->fields.dicUniqueKeyAdvantagePieceData) == 0LL
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_uint__object___get_Item(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                      basePiece->fields._uniqueIndex_k__BackingField,
                                      (const MethodInfo_31B2090 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0LL )
  {
    sub_1B64324(this);
  }
  v7 = (WarBoardAIRoute_AdvantagePieceData_o *)this;
  HasFlag_35001680 = WarBoardAIRoute_RouteData__HasFlag_35001680(
                       *(_QWORD *)&this->fields.TEMP_SEARCH_DEPTH,
                       4096LL,
                       0LL);
  if ( HasFlag_35001680 )
    v7->fields.baseCARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)HasFlag_35001680,
                               v7->fields.dicClassAdvantageServant,
                               baseSquareIndex,
                               v9);
  v10 = WarBoardAIRoute_RouteData__HasFlag_35001680(v7->fields.flagNow, 0x2000LL, 0LL);
  if ( v10 )
    v7->fields.baseCDARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v10,
                                v7->fields.dicClassDisAdvantageServant,
                                baseSquareIndex,
                                v11);
  v12 = WarBoardAIRoute_RouteData__HasFlag_35001680(v7->fields.flagNow, 0x4000LL, 0LL);
  if ( v12 )
    v7->fields.baseAARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v12,
                               v7->fields.dicAttackAdvantageServant,
                               baseSquareIndex,
                               v13);
  v14 = WarBoardAIRoute_RouteData__HasFlag_35001680(v7->fields.flagNow, 0x8000LL, 0LL);
  if ( v14 )
    v7->fields.baseADARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v14,
                                v7->fields.dicAttackDisAdvantageServant,
                                baseSquareIndex,
                                v15);
  v16 = WarBoardAIRoute_RouteData__HasFlag_35001680(v7->fields.flagNow, 0x10000LL, 0LL);
  if ( v16 )
    v7->fields.baseDARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v16,
                               v7->fields.dicDefenseAdvantageServant,
                               baseSquareIndex,
                               v17);
  v18 = WarBoardAIRoute_RouteData__HasFlag_35001680(v7->fields.flagNow, 0x20000LL, 0LL);
  if ( v18 )
    v7->fields.baseDDARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v18,
                                v7->fields.dicDefenseDisAdvantageServant,
                                baseSquareIndex,
                                v19);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_49FA058 & 1) == 0 )
  {
    sub_1B640C8(&AStarSearch_TypeInfo, routeDataList);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v13);
    byte_49FA058 = 1;
  }
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v14 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1B64314(
                                                                System_Collections_Generic_Dictionary_uint__int__TypeInfo,
                                                                routeDataList,
                                                                *(_QWORD *)&baseSquareIndex);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v14,
    (const MethodInfo_31A8594 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
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
        sub_1B6432C(isMaster, v16);
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
                   (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v14 )
        break;
      v23 = isMaster;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v14,
        v20->fields._uniqueIndex_k__BackingField,
        isMaster,
        (const MethodInfo_31A8F58 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
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
    sub_1B64324(isMaster);
  }
  return v14;
}


// local variable allocation has failed, the output may be wrong!
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
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_IEnumerable_TSource__o *Keys; // x19
  System_Func_int__bool__o *v19; // x20

  if ( (byte_49FA049 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__, piecePlaceData);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v8);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v9);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__, v10);
    sub_1B640C8(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo, v11);
    byte_49FA049 = 1;
  }
  v12 = (WarBoardAIRoute___c__DisplayClass51_0_o *)sub_1B64314(
                                                     WarBoardAIRoute___c__DisplayClass51_0_TypeInfo,
                                                     piecePlaceData,
                                                     *(_QWORD *)&masterSquareIndex);
  WarBoardAIRoute___c__DisplayClass51_0___ctor(v12, 0LL);
  if ( !v12
    || (v12->fields.masterSquareIndex = masterSquareIndex, (aiRouteMasterData = this->fields.aiRouteMasterData) == 0LL)
    || !piecePlaceData )
  {
    sub_1B64324(v13);
  }
  masterType = aiRouteMasterData->fields.masterType;
  Keys = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                                piecePlaceData,
                                                                (const MethodInfo_312F2AC *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  if ( masterType != 1 )
  {
    v19 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v16, v17);
    System_Func_int__bool____ctor(
      v19,
      (Il2CppObject *)v12,
      Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      0LL);
    Keys = System_Linq_Enumerable__Where_int_(
             Keys,
             (System_Func_TSource__bool__o *)v19,
             (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
  }
  return System_Linq_Enumerable__ToArray_int_(
           Keys,
           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  __int64 v29; // x2
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t defenseArea; // w20
  DefenseAreaData_o *v32; // x19
  const MethodInfo *v33; // x3
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_Dictionary_int__object__o *v36; // x20
  __int64 v37; // x1
  WarBoardAIManager_c *v38; // x0
  char v39; // w10
  bool v40; // w8
  bool IsDetour; // w25
  int32_t key; // w26
  Il2CppObject *value; // x27
  System_Int32_array *v44; // x28
  __int64 v45; // x0
  int32_t v46; // w25
  __int64 v47; // x0
  const MethodInfo *v48; // x2
  int32_t MasterAndEnemyRange_k__BackingField; // w8
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x3
  BalanceConfig_c *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  System_Func_int__bool__o *klass; // x28
  int32_t v56; // w2
  int32_t v57; // w3
  const MethodInfo *v58; // x2
  __int64 v59; // x8
  __int64 v60; // x21
  const MethodInfo *v61; // x2
  BalanceConfig_c *v62; // x0
  __int64 v63; // x8
  Il2CppObject *object; // [xsp+0h] [xbp-E0h]
  ServantStatusBattleListViewItem_o *v66; // [xsp+8h] [xbp-D8h]
  bool v68; // [xsp+1Ch] [xbp-C4h]
  char v69; // [xsp+20h] [xbp-C0h]
  bool v70; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v71; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v72; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_49FA04A & 1) == 0 )
  {
    sub_1B640C8(&AStarSearch_TypeInfo, *(_QWORD *)&masterSquareIndex);
    sub_1B640C8(&BalanceConfig_TypeInfo, v8);
    sub_1B640C8(&DefenseAreaData_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v17);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__, v20);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__, v21);
    sub_1B640C8(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo, v22);
    sub_1B640C8(&WarBoardAIManager_TypeInfo, v23);
    byte_49FA04A = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v24 = sub_1B64314(WarBoardAIRoute___c__DisplayClass52_0_TypeInfo, *(_QWORD *)&masterSquareIndex, allyPieces);
  WarBoardAIRoute___c__DisplayClass52_0___ctor((WarBoardAIRoute___c__DisplayClass52_0_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_52;
  *(_QWORD *)(v24 + 16) = piecePlaceData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)piecePlaceData, v26, v27);
  npcData = this->fields.npcData;
  if ( !npcData )
    goto LABEL_52;
  defenseArea = npcData->fields.defenseArea;
  v32 = (DefenseAreaData_o *)sub_1B64314(DefenseAreaData_TypeInfo, v28, v29);
  DefenseAreaData___ctor(v32, masterSquareIndex, defenseArea, v33);
  v36 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  v34,
                                                                  v35);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v36,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  if ( !byte_49FA069 )
  {
    sub_1B640C8(&WarBoardAIManager_TypeInfo, v37);
    byte_49FA069 = 1;
  }
  v38 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v38 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v38->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v71,
    dicSquareIndexEnemyPiece,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v39 = 0;
  object = (Il2CppObject *)v24;
  v66 = (ServantStatusBattleListViewItem_o *)(v24 + 24);
  v40 = 1;
  IsDetour = 1;
  v72 = v71;
LABEL_13:
  v68 = v40;
LABEL_14:
  v69 = v39;
  v70 = IsDetour;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v72,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v72.fields._current.fields.key;
    value = v72.fields._current.fields.value;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v44 = AStarSearch__RouteSearch(0LL, masterSquareIndex, key, 0, 0LL, 0LL);
    v45 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v44,
            (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v36 )
      sub_1B64324(v45);
    v46 = v45;
    System_Collections_Generic_Dictionary_int__object___Add(
      v36,
      key,
      &v44->obj,
      (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v32 )
      sub_1B64324(v47);
    MasterAndEnemyRange_k__BackingField = v32->fields._MasterAndEnemyRange_k__BackingField;
    if ( MasterAndEnemyRange_k__BackingField == -1 || MasterAndEnemyRange_k__BackingField > v46 )
      v32->fields._MasterAndEnemyRange_k__BackingField = v46;
    if ( DefenseAreaData__IsInDefenseArea(v32, key, v48) )
    {
      v52 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v52 = BalanceConfig_TypeInfo;
      }
      if ( !v52->static_fields->IsEnableOldBlockShortestRoute )
      {
        if ( !v44 )
          sub_1B64324(v52);
        if ( (int)v44->max_length >= 2 )
          DefenseAreaData__SetComparisonAllMasterAndEnemyRange(v32, v44->m_Items[2], v46, v51);
      }
      IsDetour = 0;
      v39 = 1;
      if ( v70 )
      {
        IsDetour = WarBoardAIRoute__IsDetour(v44, allyPieces, v50);
        v40 = 0;
        v39 = 1;
        if ( v68 )
        {
          klass = (System_Func_int__bool__o *)v66->klass;
          if ( !v66->klass )
          {
            klass = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v53, v54);
            System_Func_int__bool____ctor(
              klass,
              object,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              0LL);
            v66->klass = (ServantStatusBattleListViewItem_c *)klass;
            sub_1B6406C(v66, (int32_t)klass, v56, v57);
          }
          if ( !AStarSearch_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          v40 = AStarSearch__RouteSearch((WarBoardPieceData_o *)value, key, masterSquareIndex, 0, klass, 0LL) == 0LL;
          v39 = 1;
        }
        goto LABEL_13;
      }
      goto LABEL_14;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v72,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  v59 = 1025LL;
  if ( (v69 & 1) == 0 )
    v59 = 1LL;
  v60 = v70 ? v59 | 0x2000000000LL : v59;
  if ( !v32 )
LABEL_52:
    sub_1B64324(dicSquareIndexEnemyPiece);
  DefenseAreaData__CreateShortestRoutes(v32, (System_Collections_Generic_Dictionary_int__int____o *)v36, v58);
  v62 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v62 = BalanceConfig_TypeInfo;
  }
  if ( !v62->static_fields->IsEnableOldBlockShortestRoute )
    DefenseAreaData__CreateAllShortestRoutes(v32, (System_Collections_Generic_Dictionary_int__int____o *)v36, v61);
  v63 = v60 | 0x10000000000LL;
  if ( !v68 )
    v63 = v60;
  v32->fields._Flag_k__BackingField = v63;
  return v32;
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
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_Dictionary_int__int__o *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x22
  __int64 v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x23
  __int64 v35; // x1
  __int64 v36; // x2
  System_Func_object__bool__o *v37; // x24
  _BOOL8 v38; // x0
  int32_t v39; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  __int64 v41; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+30h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_49FA057 & 1) == 0 )
  {
    sub_1B640C8(&AStarSearch_TypeInfo, basePiece);
    sub_1B640C8(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__,
      v13);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v14);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__, v18);
    sub_1B640C8(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v19);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__, v21);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__, v22);
    this = (WarBoardAIRoute_o *)sub_1B640C8(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo, v23);
    byte_49FA057 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v8->fields.dicUniqueKeyDesignationItem) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_31B2090 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v27 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                     v25,
                                                                     v26),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v27,
          (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (this = (WarBoardAIRoute_o *)Item[1].klass) == 0LL )
  {
    sub_1B64324(this);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v43,
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v44,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v30 = sub_1B64314(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo, v28, v29);
    WarBoardAIRoute___c__DisplayClass66_0___ctor((WarBoardAIRoute___c__DisplayClass66_0_o *)v30, 0LL);
    if ( !v30 )
      sub_1B64324(v31);
    v34 = v30 + 24;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v30 + 16) = v44.fields._current;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 24), 0, v32, v33);
    v37 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v35, v36);
    System_Func_object__bool____ctor(
      v37,
      (Il2CppObject *)v30,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      0LL);
    v38 = BasicHelper__Any_object_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v37,
            (const MethodInfo_2E24870 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    if ( !v38 )
    {
      if ( !*(_QWORD *)v34 )
        sub_1B64324(v38);
      v39 = *(_DWORD *)(*(_QWORD *)v34 + 16LL);
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v40 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   v39,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v41 = System_Linq_Enumerable__Count_int_(
              v40,
              (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v27 )
        sub_1B64324(v41);
      System_Collections_Generic_Dictionary_int__int___Add(
        v27,
        *(_DWORD *)(v30 + 16),
        v41,
        (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v44,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v27;
}


WarBoardEvalValueSquare_EvalValueSquare_o *__fastcall WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_49FA04B & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1B640C8(
                                  &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__,
                                  evalValueSquareList);
    byte_49FA04B = 1;
  }
  if ( !evalValueSquareList )
    sub_1B64324(this);
  return (WarBoardEvalValueSquare_EvalValueSquare_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_int__object__o *)evalValueSquareList,
                                                        index,
                                                        (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
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

  if ( (byte_49FA05F & 1) == 0 )
  {
    sub_1B640C8(&SvtClassAttri_TypeInfo, *(_QWORD *)&baseClassId);
    byte_49FA05F = 1;
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
  if ( WarBoardAIRoute_RouteData__HasFlag_35001680(v8, 0x80000LL, 0LL)
    && WarBoardAIRoute_RouteData__HasFlag_35001680(v8, 0x100000LL, 0LL) )
  {
    v8 |= 0x40000uLL;
  }
  if ( !WarBoardAIRoute_RouteData__HasFlag_35001680(v8, 0x400000LL, 0LL) )
    return v8;
  if ( WarBoardAIRoute_RouteData__HasFlag_35001680(v8, 0x800000LL, 0LL) )
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
  const MethodInfo_3130C80 **v16; // x26
  unsigned __int64 v17; // x19
  __int64 v18; // x23
  int32_t v19; // w24
  const MethodInfo *v20; // x2
  WarBoardPieceData_o *v21; // x25
  const MethodInfo_3130C80 **v22; // x29
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
  if ( (byte_49FA05B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, baseSquare);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1B640C8(&SvtClassAttri_TypeInfo, v12);
    this = (WarBoardAIRoute_o *)sub_1B640C8(&WarBoardAIManager_TypeInfo, v13);
    byte_49FA05B = 1;
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
    v16 = (const MethodInfo_3130C80 **)&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__;
    v17 = 0LL;
    v18 = 1LL;
    v33 = linkedSquares;
    v34 = &linkedSquares->m_Items[1];
    v32 = v10;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v15 )
        sub_1B6432C(this, baseSquare);
      v19 = v34[v17];
      this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_35061152((WarBoardData_o *)this, v19, 0LL);
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
            && !WarBoardAIRoute_RouteData__HasFlag_35001680(v18 | 0x10, 0x1000000LL, 0LL) )
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
    sub_1B64324(this);
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
  System_Collections_Generic_Dictionary_int__int__o *dicOutOfWarningAreaRange; // x0
  System_Collections_Generic_Dictionary_int__int__o *v10; // x8

  if ( (byte_49FA05A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&baseSquareIndex);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    byte_49FA05A = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0LL) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          actionSquareIndex,
          (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                    dicOutOfWarningAreaRange,
                                                                                    baseSquareIndex,
                                                                                    (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( (int)dicOutOfWarningAreaRange > System_Collections_Generic_Dictionary_int__int___get_Item(
                                         this->fields.dicOutOfWarningAreaRange,
                                         actionSquareIndex,
                                         (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange
    || (dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                          dicOutOfWarningAreaRange,
                                                                                          baseSquareIndex,
                                                                                          (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v10 = this->fields.dicOutOfWarningAreaRange) == 0LL) )
  {
LABEL_18:
    sub_1B64324(dicOutOfWarningAreaRange);
  }
  if ( (_DWORD)dicOutOfWarningAreaRange == System_Collections_Generic_Dictionary_int__int___get_Item(
                                             v10,
                                             actionSquareIndex,
                                             (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
  struct WarBoardAIRoute_AIRouteMasterData_o *v14; // x8
  __int128 v16[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v17; // [xsp+20h] [xbp-40h] BYREF

  v4 = this;
  if ( (byte_49FA048 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, piecePlaceData);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v8);
    this = (WarBoardAIRoute_o *)sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v9);
    byte_49FA048 = 1;
  }
  memset(&v17, 0, 32);
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    goto LABEL_18;
  masterType = aiRouteMasterData->fields.masterType;
  if ( !masterType || masterType == 2 )
  {
    if ( piecePlaceData )
    {
      System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v16,
        piecePlaceData,
        (const MethodInfo_312F9C0 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
      *(_OWORD *)&v17.fields._dictionary = v16[0];
      v17.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v16[1];
      while ( 1 )
      {
        v13 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                &v17,
                (const MethodInfo_326C4C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
        if ( !v13 )
          break;
        v14 = v4->fields.aiRouteMasterData;
        if ( !v14 )
          sub_1B64324(v13);
        key = (int32_t)v17.fields._current.fields.key;
        if ( v14->fields.masterUniqueIndex == HIDWORD(v17.fields._current.fields.key) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
            &v17,
            (const MethodInfo_326C5C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
          return key;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
        &v17,
        (const MethodInfo_326C5C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
      return 0;
    }
LABEL_18:
    sub_1B64324(this);
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
  if ( (byte_49FA063 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____, piecePlaceData);
    sub_1B640C8(&System_Func_KeyValuePair_int__uint___bool__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v6);
    this = (WarBoardAIRoute_o *)sub_1B640C8(&Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__, v7);
    byte_49FA063 = 1;
  }
  klass = v4[13].klass;
  if ( !klass )
    sub_1B64324(this);
  if ( LODWORD(klass->_1.name) == 1 )
    return HIDWORD(klass->_1.name);
  v10 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_1B64314(
                                                          System_Func_KeyValuePair_int__uint___bool__TypeInfo,
                                                          piecePlaceData,
                                                          method);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v10,
    v4,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_2E5D21C *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
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
  const MethodInfo *v16; // x2
  Il2CppObject *currentValue; // x24
  WarBoardPieceData_o *monitor; // x22
  int32_t v19; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  int32_t v21; // w22
  int32_t v22; // w0
  int32_t v23; // w2
  int v24; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x22
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  int32_t v27; // w23
  int32_t v28; // w0
  int v29; // w8
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v32; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FA065 & 1) == 0 )
  {
    sub_1B640C8(&AStarSearch_TypeInfo, dicKeyPutIndexValueTargetData);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__,
      v13);
    this = (WarBoardAIRoute_o *)sub_1B640C8(&WarBoardAIManager_TypeInfo, v14);
    byte_49FA065 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !dicKeyPutIndexValueTargetData
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_long__object___get_Values(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicKeyPutIndexValueTargetData,
                                      (const MethodInfo_31615AC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0LL )
  {
    sub_1B64324(this);
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__object___GetEnumerator(
    &v31,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_37BAC88 *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v15 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___MoveNext(
            &v32,
            (const MethodInfo_3272290 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v15 )
      break;
    currentValue = v32.fields._currentValue;
    if ( !v32.fields._currentValue )
      sub_1B64324(v15);
    monitor = (WarBoardPieceData_o *)v32.fields._currentValue[1].monitor;
    if ( !monitor || LODWORD(v32.fields._currentValue[4].monitor) != actionSquareIndex )
      goto LABEL_14;
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    if ( WarBoardAIManager__IsAllyPiece(basePiece, monitor, v16) )
    {
      LODWORD(currentValue[4].klass) = 2;
    }
    else
    {
LABEL_14:
      v19 = (int32_t)currentValue[4].monitor;
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v19,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v21 = System_Linq_Enumerable__Count_int_(
              v20,
              (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
      v22 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
      v23 = (int32_t)currentValue[4].monitor;
      if ( v21 == v22 )
        v24 = 2;
      else
        v24 = 3;
      if ( v21 < v22 )
        v24 = 1;
      LODWORD(currentValue[4].klass) = v24;
      v25 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v23,
                                                                   1,
                                                                   0LL,
                                                                   0LL);
      if ( v25 && (klass = (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[6].klass) != 0LL )
      {
        v27 = System_Linq_Enumerable__Count_int_(
                klass,
                (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
        v28 = System_Linq_Enumerable__Count_int_(
                v25,
                (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
        if ( v28 >= v27 )
        {
          if ( v28 == v27 )
            v29 = 2;
          else
            v29 = 3;
        }
        else
        {
          v29 = 1;
        }
      }
      else
      {
        v29 = 0;
      }
      HIDWORD(currentValue[4].klass) = v29;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___Dispose(
    &v32,
    (const MethodInfo_327228C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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

  if ( (byte_49FA04C & 1) == 0 )
  {
    sub_1B640C8(&AStarSearch_TypeInfo, dicPieceList);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v10);
    this = (WarBoardAIRoute_o *)sub_1B640C8(
                                  &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                  v11);
    byte_49FA04C = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !dicPieceList )
    sub_1B64324(this);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__object__o *)dicPieceList,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v12 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v18,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
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
            (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
    if ( v12 > v15 || v12 == -1 )
      v12 = v15;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v18,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
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
  _BOOL8 v21; // x0
  WarBoardAIRoute_RouteData_o *current; // x24
  _BOOL8 HasFlag; // x0
  struct WarBoardPieceData_o *basePiece; // x8
  int32_t type_k__BackingField; // w9
  int32_t *v26; // x9
  uint32_t uniqueIndex_k__BackingField; // w24
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_49FA047 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__, routeDataList);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__, v13);
    sub_1B640C8(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v18);
    byte_49FA047 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  value = 0;
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  v19 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1B64314(
                                                                System_Collections_Generic_Dictionary_uint__int__TypeInfo,
                                                                routeDataList,
                                                                replaceCount);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v19,
    (const MethodInfo_31A8594 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_1B64324(v20);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)routeDataList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v21 )
      break;
    current = (WarBoardAIRoute_RouteData_o *)v30.fields._current;
    if ( !v30.fields._current )
      sub_1B64324(v21);
    if ( !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v30.fields._current, 0LL) )
    {
      value = 0;
      HasFlag = WarBoardAIRoute_RouteData__HasFlag(current, 0x4000000LL, 0LL);
      basePiece = current->fields.basePiece;
      if ( !HasFlag )
      {
        if ( !basePiece )
          sub_1B64324(HasFlag);
        if ( basePiece->fields._type_k__BackingField == 1 )
          v26 = masterActionCount;
        else
          v26 = actionCount;
        goto LABEL_21;
      }
      if ( !basePiece )
        sub_1B64324(HasFlag);
      type_k__BackingField = basePiece->fields._type_k__BackingField;
      basePiece = current->fields.actionPiece;
      if ( type_k__BackingField != 1 )
      {
        if ( !basePiece )
          sub_1B64324(HasFlag);
        if ( basePiece->fields._type_k__BackingField == 1 )
          v26 = masterReplaceCount;
        else
          v26 = replaceCount;
LABEL_21:
        ++*v26;
        goto LABEL_22;
      }
      ++*masterReplaceCount;
      if ( !basePiece )
        sub_1B64324(HasFlag);
LABEL_22:
      if ( !v19 )
        sub_1B64324(HasFlag);
      uniqueIndex_k__BackingField = basePiece->fields._uniqueIndex_k__BackingField;
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v19,
        uniqueIndex_k__BackingField,
        &value,
        (const MethodInfo_31AA5F0 *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v19,
        uniqueIndex_k__BackingField,
        value + 1,
        (const MethodInfo_31A8F44 *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
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
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  System_Func_object__int__o *v15; // x20

  if ( (byte_49FA066 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____75752944, routeDataList);
    sub_1B640C8(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo, v6);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__, v7);
    sub_1B640C8(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo, v8);
    byte_49FA066 = 1;
  }
  v9 = sub_1B64314(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo, routeDataList, targetPiece);
  WarBoardAIRoute___c__DisplayClass84_0___ctor((WarBoardAIRoute___c__DisplayClass84_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_QWORD *)(v9 + 16) = targetPiece;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)targetPiece, v11, v12);
  v15 = (System_Func_object__int__o *)sub_1B64314(System_Func_WarBoardAIRoute_RouteData__int__TypeInfo, v13, v14);
  System_Func_object__int____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    0LL);
  return System_Linq_Enumerable__Sum_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v15,
           (const MethodInfo_2E700DC *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____75752944);
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
  __int64 v22; // x2
  Il2CppObject *key; // x24
  Il2CppObject *value; // x25
  WarBoardPieceData_array *allEnemyPiece; // x27
  WarBoardAIRoute_TargetData_o *v26; // x26
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+30h] [xbp-90h] BYREF

  v12 = this;
  if ( (byte_49FA054 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__,
      dicPutSquareIndex);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__, v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v15);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v16);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v18);
    this = (WarBoardAIRoute_o *)sub_1B640C8(&WarBoardAIRoute_TargetData_TypeInfo, v19);
    byte_49FA054 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !dicPutSquareIndex )
    sub_1B64324(this);
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicPutSquareIndex,
    (const MethodInfo_3161BD0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v20 = System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v28,
            (const MethodInfo_3271C30 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v20 )
      break;
    key = v28.fields._current.fields.key;
    value = v28.fields._current.fields.value;
    if ( excludeCond )
    {
      if ( !v28.fields._current.fields.value )
        sub_1B64324(v20);
      if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, void *, _QWORD))excludeCond->fields.m_target)(
              excludeCond->fields.original_method_info,
              v28.fields._current.fields.value[3].monitor,
              *(_QWORD *)&excludeCond->fields.extra_arg) & 1) != 0 )
        continue;
    }
    allEnemyPiece = v12->fields.allEnemyPiece;
    v26 = (WarBoardAIRoute_TargetData_o *)sub_1B64314(WarBoardAIRoute_TargetData_TypeInfo, v21, v22);
    WarBoardAIRoute_TargetData___ctor_35004248(
      v26,
      (WarBoardAIRoute_TargetData_o *)value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      0LL);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_1B64324(0LL);
    System_Collections_Generic_Dictionary_long__object___Add(
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
      (int64_t)key,
      (Il2CppObject *)v26,
      (const MethodInfo_316179C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v28,
    (const MethodInfo_3271D50 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
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
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_Dictionary_int__object__o *v45; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x19
  WarBoardAiTargetCacher_o *aiTargetCacher; // x0
  Il2CppObject *key; // x25
  Il2CppObject *value; // x26
  __int64 TargetDetectorId; // x0
  int32_t v51; // w27
  Il2CppObject *Item; // x29
  WarBoardAiTargetCacher_o *v53; // x0
  IWarBoardObjectData_array *TargetObjectsByTrendId; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  IWarBoardObjectData_array *v57; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x29
  System_Func_object__bool__o *klass; // x23
  int32_t v60; // w2
  int32_t v61; // w3
  __int64 v62; // x1
  __int64 v63; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x29
  System_Func_object__int__o *v65; // x23
  int32_t v66; // w2
  int32_t v67; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  WarBoardAIRoute___c_c *v71; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v72; // x29
  System_Func_object__int__o *_9__64_2; // x23
  Il2CppObject *v74; // x24
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  WarBoardAIRoute___c_c *v81; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v82; // x29
  System_Func_object__int__o *_9__64_3; // x23
  Il2CppObject *v84; // x24
  struct WarBoardAIRoute___c_StaticFields *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  __int64 v89; // x1
  __int64 v90; // x2
  WarBoardPieceData_o *v91; // x27
  int32_t v92; // w28
  WarBoardPieceData_array *allEnemyPiece; // x24
  WarBoardAIRoute_TargetData_o *v94; // x23
  ServantStatusBattleListViewItem_o *v95; // [xsp+0h] [xbp-D0h]
  ServantStatusBattleListViewItem_o *v96; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v98; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v99; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_49FA055 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__,
      dicIndividualityPutSqareIndex);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__, v17);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo, v18);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___, v19);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___, v20);
    sub_1B640C8(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___, v21);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v22);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v23);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v24);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v25);
    sub_1B640C8(&System_Func_IWarBoardObjectData__bool__TypeInfo, v26);
    sub_1B640C8(&System_Func_IWarBoardObjectData__int__TypeInfo, v27);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v29);
    sub_1B640C8(&WarBoardAIRoute_TargetData_TypeInfo, v30);
    sub_1B640C8(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__, v31);
    sub_1B640C8(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__, v32);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__, v33);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__, v34);
    sub_1B640C8(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo, v35);
    sub_1B640C8(&WarBoardAIRoute___c_TypeInfo, v36);
    byte_49FA055 = 1;
  }
  memset(&v99, 0, sizeof(v99));
  v37 = sub_1B64314(WarBoardAIRoute___c__DisplayClass64_0_TypeInfo, dicIndividualityPutSqareIndex, excludeCond);
  WarBoardAIRoute___c__DisplayClass64_0___ctor((WarBoardAIRoute___c__DisplayClass64_0_o *)v37, 0LL);
  if ( !v37
    || (*(_QWORD *)(v37 + 16) = excludeCond,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 16), (int32_t)excludeCond, v39, v40),
        *(_QWORD *)(v37 + 24) = basePiece,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 24), (int32_t)basePiece, v41, v42),
        *(_DWORD *)(v37 + 32) = baseSquareIndex,
        v45 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                        System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo,
                                                                        v43,
                                                                        v44),
        System_Collections_Generic_Dictionary_int__object____ctor(
          v45,
          (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__),
        !dicIndividualityPutSqareIndex) )
  {
    sub_1B64324(v38);
  }
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v98,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicIndividualityPutSqareIndex,
    (const MethodInfo_3161BD0 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v99 = v98;
  v46 = 0LL;
  v95 = (ServantStatusBattleListViewItem_o *)(v37 + 48);
  v96 = (ServantStatusBattleListViewItem_o *)(v37 + 40);
  while ( System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v99,
            (const MethodInfo_3271C30 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_1B64324(0LL);
    key = v99.fields._current.fields.key;
    value = v99.fields._current.fields.value;
    TargetDetectorId = WarBoardAiTargetCacher__GetTargetDetectorId(
                         aiTargetCacher,
                         (int64_t)v99.fields._current.fields.key,
                         0LL);
    if ( !v45 )
      sub_1B64324(TargetDetectorId);
    v51 = TargetDetectorId;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           v45,
           TargetDetectorId,
           (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               v45,
               v51,
               (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    }
    else
    {
      v53 = this->fields.aiTargetCacher;
      if ( !v53 )
        sub_1B64324(0LL);
      TargetObjectsByTrendId = WarBoardAiTargetCacher__GetTargetObjectsByTrendId(v53, (int64_t)key, 0LL);
      v57 = TargetObjectsByTrendId;
      if ( TargetObjectsByTrendId )
        v58 = (System_Collections_Generic_IEnumerable_TSource__o *)TargetObjectsByTrendId;
      else
        v58 = v46;
      if ( TargetObjectsByTrendId )
      {
        klass = (System_Func_object__bool__o *)v96->klass;
        if ( !v96->klass )
        {
          klass = (System_Func_object__bool__o *)sub_1B64314(System_Func_IWarBoardObjectData__bool__TypeInfo, v55, v56);
          System_Func_object__bool____ctor(
            klass,
            (Il2CppObject *)v37,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
            0LL);
          v96->klass = (ServantStatusBattleListViewItem_c *)klass;
          sub_1B6406C(v96, (int32_t)klass, v60, v61);
        }
        v64 = System_Linq_Enumerable__Where_object_(
                v58,
                (System_Func_TSource__bool__o *)klass,
                (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        v65 = (System_Func_object__int__o *)v95->klass;
        if ( !v95->klass )
        {
          v65 = (System_Func_object__int__o *)sub_1B64314(System_Func_IWarBoardObjectData__int__TypeInfo, v62, v63);
          System_Func_object__int____ctor(
            v65,
            (Il2CppObject *)v37,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
            0LL);
          v95->klass = (ServantStatusBattleListViewItem_c *)v65;
          sub_1B6406C(v95, (int32_t)v65, v66, v67);
        }
        v68 = System_Linq_Enumerable__OrderBy_object__int_(
                v64,
                (System_Func_TSource__TKey__o *)v65,
                (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
        v71 = WarBoardAIRoute___c_TypeInfo;
        v72 = v68;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v71 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_2 = (System_Func_object__int__o *)v71->static_fields->__9__64_2;
        if ( !_9__64_2 )
        {
          if ( !v71->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v71);
            v71 = WarBoardAIRoute___c_TypeInfo;
          }
          v74 = (Il2CppObject *)v71->static_fields->__9;
          _9__64_2 = (System_Func_object__int__o *)sub_1B64314(System_Func_IWarBoardObjectData__int__TypeInfo, v69, v70);
          System_Func_object__int____ctor(
            _9__64_2,
            v74,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
            0LL);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__64_2, (int32_t)_9__64_2, v76, v77);
        }
        v78 = System_Linq_Enumerable__ThenBy_object__int_(
                v72,
                (System_Func_TSource__TKey__o *)_9__64_2,
                (const MethodInfo_2E709F0 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        v81 = WarBoardAIRoute___c_TypeInfo;
        v82 = v78;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v81 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_3 = (System_Func_object__int__o *)v81->static_fields->__9__64_3;
        if ( !_9__64_3 )
        {
          if ( !v81->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v81);
            v81 = WarBoardAIRoute___c_TypeInfo;
          }
          v84 = (Il2CppObject *)v81->static_fields->__9;
          _9__64_3 = (System_Func_object__int__o *)sub_1B64314(System_Func_IWarBoardObjectData__int__TypeInfo, v79, v80);
          System_Func_object__int____ctor(
            _9__64_3,
            v84,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
            0LL);
          v85 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v85->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v85->__9__64_3, (int32_t)_9__64_3, v86, v87);
        }
        v88 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                     v82,
                                                                     (System_Func_TSource__TKey__o *)_9__64_3,
                                                                     (const MethodInfo_2E709F0 *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        Item = System_Linq_Enumerable__FirstOrDefault_object_(
                 v88,
                 (const MethodInfo_2E5C894 *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
        v46 = (System_Collections_Generic_IEnumerable_TSource__o *)v57;
      }
      else
      {
        Item = 0LL;
      }
    }
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v45,
      v51,
      Item,
      (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( Item )
    {
      v91 = *(WarBoardPieceData_o **)(v37 + 24);
      v92 = *(_DWORD *)(v37 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v94 = (WarBoardAIRoute_TargetData_o *)sub_1B64314(WarBoardAIRoute_TargetData_TypeInfo, v89, v90);
      WarBoardAIRoute_TargetData___ctor_35005280(
        v94,
        (WarBoardAIRoute_TargetData_o *)value,
        (IWarBoardObjectData_o *)Item,
        v91,
        v92,
        allEnemyPiece,
        0LL);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1B64324(0LL);
      System_Collections_Generic_Dictionary_long__object___Add(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)key,
        (Il2CppObject *)v94,
        (const MethodInfo_316179C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1B64324(0LL);
      System_Collections_Generic_Dictionary_long__object___Remove(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)key,
        (const MethodInfo_3162C10 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v99,
    (const MethodInfo_3271D50 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetTargetToDistance_34990020(
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
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *Item; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v21; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *monitor; // x25
  System_Func_object__bool__o *v25; // x26
  const MethodInfo *v26; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *klass; // x25
  __int64 v28; // x1
  __int64 v29; // x2
  System_Func_object__bool__o *v30; // x26
  const MethodInfo *v31; // x6
  const MethodInfo *v32; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FA056 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__, basePiece);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v10);
    sub_1B640C8(&System_Func_IWarBoardObjectData__bool__TypeInfo, v11);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__, v12);
    sub_1B640C8(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo, v13);
    byte_49FA056 = 1;
  }
  v14 = sub_1B64314(WarBoardAIRoute___c__DisplayClass65_0_TypeInfo, basePiece, routeDataList);
  WarBoardAIRoute___c__DisplayClass65_0___ctor((WarBoardAIRoute___c__DisplayClass65_0_o *)v14, 0LL);
  if ( !v14
    || (*(_QWORD *)(v14 + 16) = routeDataList,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)routeDataList, v16, v17),
        !basePiece)
    || (dicUniqueKeyTarget = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 dicUniqueKeyTarget,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_31B2090 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v21 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                         System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                         v19,
                                                                         v20),
        System_Collections_Generic_Dictionary_long__object____ctor(
          v21,
          (const MethodInfo_3160DCC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v21,
        !Item) )
  {
    sub_1B64324(dicUniqueKeyTarget);
  }
  monitor = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].monitor;
  v25 = (System_Func_object__bool__o *)sub_1B64314(System_Func_IWarBoardObjectData__bool__TypeInfo, v22, v23);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v14,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0LL);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    monitor,
    (System_Func_IWarBoardObjectData__bool__o *)v25,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v26);
  klass = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[2].klass;
  v30 = (System_Func_object__bool__o *)sub_1B64314(System_Func_IWarBoardObjectData__bool__TypeInfo, v28, v29);
  System_Func_object__bool____ctor(
    v30,
    (Il2CppObject *)v14,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0LL);
  WarBoardAIRoute__GetTargetToDistanceUsingIndividuality(
    this,
    klass,
    (System_Func_IWarBoardObjectData__bool__o *)v30,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v31);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].klass,
    0LL,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v32);
  return (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v21;
}


float __fastcall WarBoardAIRoute__GetThinkingThreshold(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1B64324(this);
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
  if ( (byte_49FA05D & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, basePiece);
    byte_49FA05D = 1;
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
    this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
      return SHIDWORD(this[3].fields.allSquare) >= v13 + requiredCost;
LABEL_13:
    sub_1B64324(this);
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
  int32_t v19; // w2
  int32_t v20; // w3
  WarBoardPieceData_o **v21; // x25
  bool v22; // w8
  const MethodInfo *v23; // x3
  int32_t RouteSumPieceActionCost; // w23
  __int64 v25; // x1
  __int64 v26; // x2
  System_Func_object__bool__o *v27; // x21
  __int64 v28; // x8

  if ( (byte_49FA061 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, basePiece);
    sub_1B640C8(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__, v15);
    sub_1B640C8(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo, v16);
    byte_49FA061 = 1;
  }
  v17 = sub_1B64314(WarBoardAIRoute___c__DisplayClass76_0_TypeInfo, basePiece, actionPiece);
  WarBoardAIRoute___c__DisplayClass76_0___ctor((WarBoardAIRoute___c__DisplayClass76_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_25;
  *(_QWORD *)(v17 + 16) = actionPiece;
  v21 = (WarBoardPieceData_o **)(v17 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)actionPiece, v19, v20);
  Instance = *(WarBoardPieceData_o **)(v17 + 16);
  if ( !Instance )
    goto LABEL_25;
  v22 = WarBoardPieceData__EnableSwapByOther(Instance, 0, 0LL);
  Instance = 0LL;
  if ( !v22 )
    return (char)Instance;
  if ( !basePiece )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(basePiece, 0LL) )
    goto LABEL_10;
  Instance = *v21;
  if ( !*v21 )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(Instance, 0LL) )
  {
LABEL_10:
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < this->fields.moveCost
                                                               + requiredCost
                                                               + this->fields.masterMoveCost )
      goto LABEL_23;
  }
  else
  {
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < requiredCost + 2 * this->fields.moveCost )
      goto LABEL_23;
  }
  RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                              (WarBoardAIRoute_o *)Instance,
                              routeDataList,
                              *v21,
                              v23);
  if ( !WarBoardPieceData__EnableMoveBySelf(basePiece, sumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v21;
  if ( !*v21 )
    goto LABEL_25;
  if ( !WarBoardPieceData__EnableSwapByOther(Instance, RouteSumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v21;
  if ( !*v21 )
LABEL_25:
    sub_1B64324(Instance);
  if ( !WarBoardPieceData__get_isInfinitelyActable(Instance, 0LL) )
  {
    v27 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v25, v26);
    System_Func_object__bool____ctor(
      v27,
      (Il2CppObject *)v17,
      Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
      0LL);
    Instance = (WarBoardPieceData_o *)System_Linq_Enumerable__Count_object__48591404(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
                                        (System_Func_TSource__bool__o *)v27,
                                        (const MethodInfo_2E5722C *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    v28 = *(_QWORD *)(v17 + 16);
    if ( v28 )
    {
      if ( *(_DWORD *)(v28 + 36) > (int)Instance )
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
  if ( (byte_49FA053 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, piecePlaceData);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v9);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1B640C8(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v10);
    byte_49FA053 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !v6 )
    sub_1B64324(shortestEnemyRoute);
  v11 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v12 = 0;
  v21 = v20;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1B64324(v13);
    monitor = v21.fields._current[1].monitor;
    if ( (int)monitor - 1 <= (int)v11 )
    {
LABEL_16:
      v12 = 0;
      break;
    }
    if ( (unsigned int)v21.fields._current[1].monitor <= (unsigned __int64)v11 )
LABEL_18:
      sub_1B6432C(v13, v14);
    v17 = (unsigned int)((_DWORD)monitor - 1) - 1LL;
    v18 = v11;
    while ( 1 )
    {
      if ( !piecePlaceData )
        sub_1B64324(v13);
      v13 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
              piecePlaceData,
              *((_DWORD *)&current[2].klass + v18),
              (const MethodInfo_312F7D4 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
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
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_49FA050 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    byte_49FA050 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !defenseArea )
    sub_1B64324(v7);
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
  Il2CppClass *klass; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  unsigned int monitor; // w10
  unsigned int v22; // w9
  int v23; // w11
  int v24; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+50h] [xbp-90h] BYREF

  v6 = allShortestRoute;
  if ( (byte_49FA052 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__,
      *(_QWORD *)&index);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__,
      v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__,
      v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__,
      v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__,
      v13);
    allShortestRoute = (System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *)sub_1B640C8(&Method_System_Collections_Generic_List_int____GetEnumerator__, v14);
    byte_49FA052 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  memset(&v28, 0, sizeof(v28));
  if ( !v6 )
    sub_1B64324(allShortestRoute);
  v15 = !isDefenseSquare;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v16 = 0;
  v28 = v26;
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v28,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    if ( !v17 )
      break;
    if ( !v28.fields._current.fields.value )
      sub_1B64324(v17);
    klass = v28.fields._current.fields.value[1].klass;
    if ( !klass )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)klass,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    *(_OWORD *)&v27.fields._list = *(_OWORD *)&v26.fields._dictionary;
    v27.fields._current = v26.fields._current.fields.key;
    do
    {
LABEL_9:
      v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v19 )
      {
        v24 = 4;
        goto LABEL_20;
      }
      if ( !v27.fields._current )
        sub_1B64324(v19);
      monitor = (unsigned int)v27.fields._current[1].monitor;
      v22 = monitor - 1;
    }
    while ( (int)(monitor - 1) <= (int)v15 );
    if ( v15 > monitor )
      monitor = !isDefenseSquare;
    v23 = !isDefenseSquare;
    while ( 1 )
    {
      if ( monitor == v23 )
        sub_1B6432C(v19, v20);
      if ( *((_DWORD *)&v27.fields._current[2].klass + v23) == index )
        break;
      if ( v22 == ++v23 )
        goto LABEL_9;
    }
    v16 = 1;
    v24 = 11;
LABEL_20:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( (v24 | 4) != 4 )
      goto LABEL_26;
  }
  v24 = 12;
LABEL_26:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v28,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
  return v16 & (v24 == 11);
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
  if ( (byte_49FA051 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v8);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1B640C8(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v9);
    byte_49FA051 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !v6 )
    sub_1B64324(shortestEnemyRoute);
  v10 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v20 = v19;
  do
  {
LABEL_5:
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    v13 = v11;
    if ( !v11 )
    {
      v17 = 10;
      goto LABEL_16;
    }
    if ( !v20.fields._current )
      sub_1B64324(v11);
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
      sub_1B6432C(v11, v12);
    if ( *((_DWORD *)&v20.fields._current[2].klass + (int)v16) == index )
      break;
    if ( v15 == ++v16 )
      goto LABEL_5;
  }
  v17 = 9;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w0
  __int64 v14; // x1
  __int64 v15; // x2
  bool v16; // w0
  int v18; // w23
  System_Func_int__bool__o **v19; // x21
  System_Func_int__bool__o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  int v23; // w8

  if ( (byte_49FA04F & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_int____75709408, blockPieces);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v5);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v6);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__, v7);
    sub_1B640C8(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo, v8);
    byte_49FA04F = 1;
  }
  v9 = sub_1B64314(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo, blockPieces, method);
  WarBoardAIRoute___c__DisplayClass58_0___ctor((WarBoardAIRoute___c__DisplayClass58_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_QWORD *)(v9 + 16) = route;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)route, v11, v12);
  v13 = System_Linq_Enumerable__Count_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v9 + 16),
          (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v13 < 2 )
    return 0;
  *(_DWORD *)(v9 + 24) = 1;
  if ( v13 == 2 )
  {
    return 0;
  }
  else
  {
    v18 = v13 - 1;
    v19 = (System_Func_int__bool__o **)(v9 + 32);
    do
    {
      v20 = *v19;
      if ( !*v19 )
      {
        v20 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v14, v15);
        System_Func_int__bool____ctor(
          v20,
          (Il2CppObject *)v9,
          Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
          0LL);
        *(_QWORD *)(v9 + 32) = v20;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)v20, v21, v22);
      }
      v16 = BasicHelper__Any_int__48383472(
              blockPieces,
              (System_Func_T__bool__o *)v20,
              (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408);
      if ( v16 )
        break;
      v23 = *(_DWORD *)(v9 + 24) + 1;
      *(_DWORD *)(v9 + 24) = v23;
    }
    while ( v23 < v18 );
  }
  return v16;
}


bool __fastcall WarBoardAIRoute__IsThinkingThreshold(WarBoardAIRoute_o *this, float v, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1B64324(this);
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

  if ( (byte_49FA060 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, *(_QWORD *)&actionSquareIndex);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1B640C8(&WarBoardAIManager_TypeInfo, v11);
    byte_49FA060 = 1;
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
        sub_1B6432C(Square, v13);
      if ( !piecePlaceData )
        break;
      v17 = *(&npcEntityDict->fields._count + v16);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v17,
             &value,
             (const MethodInfo_3130C80 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Square = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)Square[1].fields.playedStageReinforcementsList;
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardData__GetPiece_35061364(Square, value, 1, 0LL);
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
    sub_1B64324(Square);
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
  WarBoardPieceData_o *v18; // x1
  const MethodInfo *v19; // x4
  System_Collections_Generic_List_object__o *moveByLinkedPiece; // x24
  WarBoardPieceData_o *v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  WarBoardAIRoute_o *v27; // x1
  Il2CppClass **v28; // x0
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  int32_t v31; // w24
  int32_t ClassId; // w25

  if ( (byte_49FA064 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, routeData);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1B640C8(&SvtClassAttri_TypeInfo, v9);
    this = (WarBoardAIRoute_o *)sub_1B640C8(&WarBoardAIManager_TypeInfo, v10);
    byte_49FA064 = 1;
  }
  v11 = *routeData;
  if ( !*routeData
    || (actionSquare = v11->fields.actionSquare) == 0LL
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0LL )
  {
LABEL_51:
    sub_1B64324(this);
  }
  if ( (int)*(_QWORD *)&linkedSquares->max_length >= 1 )
  {
    basePiece = v11->fields.basePiece;
    v15 = 0LL;
    max_length = *(_QWORD *)&linkedSquares->max_length;
    do
    {
      if ( v15 >= max_length )
        sub_1B6432C(this, routeData);
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
      this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetActionPiece(this, v18, v17, piecePlaceData, v19);
      if ( this )
      {
        if ( !*routeData )
          goto LABEL_51;
        moveByLinkedPiece = (System_Collections_Generic_List_object__o *)(*routeData)->fields.moveByLinkedPiece;
        v21 = (WarBoardPieceData_o *)this;
        this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_35061152((WarBoardData_o *)this, v17, 0LL);
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
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          moveByLinkedPiece->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v27;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
        }
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        if ( WarBoardAIManager__IsAllyPiece(basePiece, v21, v29)
          && (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v21, 0LL), ((unsigned __int8)this & 1) != 0) )
        {
          if ( !*routeData )
            goto LABEL_51;
          ++(*routeData)->fields.moveByLinkedAlly;
        }
        else
        {
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v21, v30);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*routeData )
              goto LABEL_51;
            (*routeData)->fields.flagNow |= 0x40uLL;
            if ( WarBoardPieceData__get_isServant(v21, 0LL) )
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
                this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v21, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
                  if ( !this )
                    goto LABEL_51;
                  this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
                  if ( !v21->fields._battleServant_k__BackingField )
                    goto LABEL_51;
                  v31 = (int)this;
                  ClassId = BattleServantData__getClassId(v21->fields._battleServant_k__BackingField, 0LL);
                  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
                  if ( SvtClassAttri__getMagnification(v31, ClassId, 0LL) > 1.0 )
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
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v21, 0LL);
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
  __int64 v24; // x2
  System_Predicate_object__o *v25; // x24
  Il2CppObject *v26; // x0
  Il2CppClass *klass; // x8
  IWarBoardObjectData_o *v28; // x23
  __int64 v29; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  WarBoardAIRoute_TargetData_o *v34; // x22

  if ( (byte_49FA045 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__,
      targetDic);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v14);
    sub_1B640C8(&IWarBoardObjectData_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__, v16);
    sub_1B640C8(&System_Predicate_IWarBoardObjectData__TypeInfo, v17);
    sub_1B640C8(&WarBoardAIRoute_TargetData_TypeInfo, v18);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__, v19);
    sub_1B640C8(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo, v20);
    byte_49FA045 = 1;
  }
  v21 = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_1B64314(
                                                     WarBoardAIRoute___c__DisplayClass46_0_TypeInfo,
                                                     targetDic,
                                                     objectList);
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
         (const MethodInfo_3161990 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v25 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_IWarBoardObjectData__TypeInfo, v23, v24);
  System_Predicate_object____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    0LL);
  if ( !objectList )
LABEL_17:
    sub_1B64324(v22);
  v26 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Predicate_T__o *)v25,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
  if ( v26 )
  {
    *notSquareTarget = 1;
    klass = v26->klass;
    v28 = (IWarBoardObjectData_o *)v26;
    v29 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v29;
        p_offset += 2;
        if ( !v29 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BB60A8(v26, IWarBoardObjectData_TypeInfo, 2LL);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(v28, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      v34 = (WarBoardAIRoute_TargetData_o *)sub_1B64314(WarBoardAIRoute_TargetData_TypeInfo, v32, v33);
      WarBoardAIRoute_TargetData___ctor_35003668(v34, v28, trendKey, conditionId, 0LL);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
        trendKey,
        (Il2CppObject *)v34,
        (const MethodInfo_3161788 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
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

  if ( (byte_49FA043 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__,
      *(_QWORD *)&aiId);
    byte_49FA043 = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_3124E0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
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
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *basePiece; // x8

  if ( (byte_49FA062 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__uint__Remove__, piecePlaceData);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___75611080, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v12);
    byte_49FA062 = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1B64314(
                                                                System_Collections_Generic_Dictionary_int__uint__TypeInfo,
                                                                piecePlaceData,
                                                                routeData);
  System_Collections_Generic_Dictionary_int__uint____ctor_51571972(
    v13,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_312ED04 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___75611080);
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
        (const MethodInfo_312F5D4 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_1B64324(HasFlag);
  }
  if ( !v13 )
    goto LABEL_12;
  HasFlag = System_Collections_Generic_Dictionary_int__uint___Remove(
              v13,
              baseSquareIndex,
              (const MethodInfo_31309A0 *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v13,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_312F5D4 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v13;
}


bool __fastcall WarBoardAIRoute____ctor_b__42_0(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
  if ( (byte_49FA067 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, x);
    byte_49FA067 = 1;
  }
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    sub_1B64324(this);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x22
  struct System_Collections_Generic_List_int____o **p_replaceDataList; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  WarBoardData_o *Instance; // x0
  const MethodInfo *v18; // x4
  WarBoardData_o *v19; // x1
  System_Int32_array *v20; // x8
  unsigned int v21; // w9
  unsigned int max_length; // w10
  unsigned int v23; // w23
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w25
  int32_t v26; // w24
  int32_t v27; // w2
  int32_t v28; // w3
  int stageNpcMaster; // w8
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Int32_array *data; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FA085 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, *(_QWORD *)&forceId);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int_____ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int____TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_49FA085 = 1;
  }
  data = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_OWORD *)&this->fields.masterType = xmmword_BA3D20;
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_int____TypeInfo,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v13;
  p_replaceDataList = &this->fields.replaceDataList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_replaceDataList, (int32_t)v13, v15, v16);
  *((_DWORD *)p_replaceDataList + 2) = -1;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_20;
  Instance = (WarBoardData_o *)WarBoardData__IsDefenseTarget(Instance, &data, forceId, groupId, v18);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  v20 = data;
  if ( !data )
LABEL_20:
    sub_1B64324(Instance);
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
    v25 = v20->m_Items[v21 + 1];
    v26 = v20->m_Items[v23 + 1];
    Instance = (WarBoardData_o *)sub_1B64170(int___TypeInfo, 2LL);
    if ( !Instance )
      goto LABEL_20;
    stageNpcMaster = (int)Instance->fields.stageNpcMaster;
    v19 = Instance;
    if ( !stageNpcMaster || (LODWORD(Instance->fields.npcEntityDict) = v25, stageNpcMaster == 1) )
LABEL_22:
      sub_1B6432C(Instance, v19);
    HIDWORD(Instance->fields.npcEntityDict) = v26;
    if ( v24 )
    {
      items = v24->fields._items;
      v31 = Method_System_Collections_Generic_List_int____Add__;
      ++v24->fields._version;
      if ( items )
      {
        size = v24->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v24,
            (Il2CppObject *)Instance,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v24->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v19;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v19, v27, v28);
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
  __int64 v12; // x1
  __int64 v13; // x8
  unsigned int v14; // w8
  int32_t v15; // w8
  int32_t v16; // w8

  if ( (byte_49FA086 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int____get_Count__, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____get_Item__, v7);
    byte_49FA086 = 1;
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
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_int____get_Item__);
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
                sub_1B6432C(replaceDataList, v12);
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
    sub_1B64324(replaceDataList);
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
  __int64 v20; // x1
  __int64 v21; // x2
  System_Func_T__TResult__o *v22; // x23
  WarBoardActionTrendEntity_array *HasMatchCondition; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x8
  WarBoardActionTrendEntity_array *v27; // x20
  unsigned __int64 i; // x24
  WarBoardActionTrendEntity_o *v29; // x23
  System_Collections_Generic_List_object__o *v30; // x21
  WarBoardAIRoute_ActionTrendInfo_o *v31; // x22
  const MethodInfo *v32; // x2
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  int32_t condType; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FA074 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, entity);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v10);
    sub_1B640C8(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__, v11);
    byte_49FA074 = 1;
  }
  condType = 0;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                                                       entity,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v12;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._FutureTrendInfoList_k__BackingField,
    (int32_t)v12,
    v14,
    v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Entity_k__BackingField = entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)entity, v16, v17);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v18);
  v22 = (System_Func_T__TResult__o *)sub_1B64314(
                                       System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo,
                                       v20,
                                       v21);
  System_Func_Int32Enum__bool____ctor(
    v22,
    0LL,
    Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__,
    0LL);
  HasMatchCondition = (WarBoardActionTrendEntity_array *)WarBoardActionTrendConditionMaster__HasMatchCondition(
                                                           ConditionEntityArray,
                                                           (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v22,
                                                           &condType,
                                                           0LL);
  this->fields._HasTargetIndividualityCond_k__BackingField = (unsigned __int8)HasMatchCondition & 1;
  if ( !entity )
    goto LABEL_20;
  if ( !WarBoardActionTrendEntity__get_HasFutureTrend(entity, 0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  HasMatchCondition = (WarBoardActionTrendEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !HasMatchCondition
    || (HasMatchCondition = WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                              (WarBoardActionTrendMaster_o *)HasMatchCondition,
                              entity,
                              0LL)) == 0LL )
  {
LABEL_20:
    sub_1B64324(HasMatchCondition);
  }
  v26 = *(_QWORD *)&HasMatchCondition->max_length;
  v27 = HasMatchCondition;
  if ( (int)v26 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v26; ++i )
    {
      if ( i >= (unsigned int)v26 )
        sub_1B6432C(HasMatchCondition, v24);
      v29 = v27->m_Items[i];
      if ( v29 )
      {
        v30 = (System_Collections_Generic_List_object__o *)*p_FutureTrendInfoList_k__BackingField;
        v31 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1B64314(WarBoardAIRoute_ActionTrendInfo_TypeInfo, v24, v25);
        WarBoardAIRoute_ActionTrendInfo___ctor(v31, v29, v32);
        if ( !v30 )
          goto LABEL_20;
        items = v30->fields._items;
        v36 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++v30->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v30->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)v31,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v31;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v31, v33, v34);
        }
      }
      LODWORD(v26) = v27->max_length;
    }
  }
}


WarBoardActionTrendConditionEntity_array *__fastcall WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardAIRoute_ActionTrendInfo_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantStatusBattleListViewItem_o *p_conditionEntityArray; // x19
  System_Object_array *conditionEntityArray; // x21
  struct WarBoardActionTrendEntity_o *Entity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *conditionIds; // x20
  WarBoardAIRoute_ActionTrendInfo___c_c *v13; // x0
  System_Func_T__TResult__o *_9__8_0; // x21
  Il2CppObject *v15; // x22
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_T__o *v19; // x0
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  v3 = this;
  if ( (byte_49FA073 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___, v5);
    sub_1B640C8(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo, v6);
    sub_1B640C8(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__, v7);
    this = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1B640C8(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v8);
    byte_49FA073 = 1;
  }
  p_conditionEntityArray = (ServantStatusBattleListViewItem_o *)&v3->fields.conditionEntityArray;
  conditionEntityArray = (System_Object_array *)v3->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = v3->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_1B64324(this);
    conditionIds = (System_Collections_Generic_IEnumerable_TSource__o *)Entity_k__BackingField->fields.conditionIds;
    v13 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    if ( !WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo);
      v13 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    }
    _9__8_0 = (System_Func_T__TResult__o *)v13->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__8_0 = (System_Func_T__TResult__o *)sub_1B64314(
                                               System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo,
                                               method,
                                               v2);
      System_Func_int__object____ctor(
        _9__8_0,
        v15,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        0LL);
      static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v17, v18);
    }
    v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           conditionIds,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_2E66FCC *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v20 = BasicHelper__ExcludeNull_object_(
            v19,
            (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = System_Linq_Enumerable__ToArray_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                             (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    p_conditionEntityArray->klass = (ServantStatusBattleListViewItem_c *)conditionEntityArray;
    sub_1B6406C(p_conditionEntityArray, (int32_t)conditionEntityArray, v21, v22);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA075 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v1);
    byte_49FA075 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_ActionTrendInfo___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FA076 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___, *(_QWORD *)&x);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(
      &Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__,
      v5);
    byte_49FA076 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   x,
                                                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
}


void __fastcall WarBoardAIRoute_AdvantagePieceData___ctor(
        WarBoardAIRoute_AdvantagePieceData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_Dictionary_int__object__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_Dictionary_int__object__o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_Dictionary_int__object__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_Dictionary_int__object__o *v30; // x20
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_49FA07E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v4);
    byte_49FA07E = 1;
  }
  this->fields.flagNow = 1LL;
  *(_QWORD *)&this->fields.baseCARange = -1LL;
  *(_QWORD *)&this->fields.baseAARange = -1LL;
  *(_QWORD *)&this->fields.baseDARange = -1LL;
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                 method,
                                                                 v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicClassAdvantageServant, (int32_t)v5, v6, v7);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                  v8,
                                                                  v9);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicClassDisAdvantageServant, (int32_t)v10, v11, v12);
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                  v13,
                                                                  v14);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicAttackAdvantageServant, (int32_t)v15, v16, v17);
  v20 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                  v18,
                                                                  v19);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v20,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicAttackDisAdvantageServant, (int32_t)v20, v21, v22);
  v25 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                  v23,
                                                                  v24);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v25,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicDefenseAdvantageServant, (int32_t)v25, v26, v27);
  v30 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                  v28,
                                                                  v29);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v30,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicDefenseDisAdvantageServant, (int32_t)v30, v31, v32);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_DesignationItemData___ctor(
        WarBoardAIRoute_DesignationItemData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FA07F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v4);
    byte_49FA07F = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo,
                                                                 method,
                                                                 v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_PiecePersonality___ctor(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FA06D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo, v6);
    byte_49FA06D = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v8, v9);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ratingOffsetList, (int32_t)v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__AttackOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  ServantStatusBattleListViewItem_o *p_attackOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v11; // x0
  System_Func_object__bool__o *_9__4_0; // x21
  Il2CppObject *v13; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_TSource__o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49FA06A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v4);
    sub_1B640C8(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__, v6);
    sub_1B640C8(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v7);
    byte_49FA06A = 1;
  }
  p_attackOffset = (ServantStatusBattleListViewItem_o *)&this->fields.attackOffset;
  result = this->fields.attackOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v11 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v11 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    _9__4_0 = (System_Func_object__bool__o *)v11->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__4_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo,
                                                 method,
                                                 v2);
      System_Func_object__bool____ctor(
        _9__4_0,
        v13,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        0LL);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v15, v16);
    }
    v17 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__4_0,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v18 = System_Linq_Enumerable__ToList_object_(
            v17,
            (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_attackOffset->klass = (ServantStatusBattleListViewItem_c *)v18;
    sub_1B6406C(p_attackOffset, (int32_t)v18, v19, v20);
    return (System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)p_attackOffset->klass;
  }
  return result;
}


System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FA06C & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method);
    byte_49FA06C = 1;
  }
  v4 = sub_1B64314(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = -2;
  *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v4 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 40), (int32_t)this, v5, v6);
  return (System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *)v4;
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__MoveOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  ServantStatusBattleListViewItem_o *p_moveOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v11; // x0
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v13; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_TSource__o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49FA06B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v4);
    sub_1B640C8(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__, v6);
    sub_1B640C8(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v7);
    byte_49FA06B = 1;
  }
  p_moveOffset = (ServantStatusBattleListViewItem_o *)&this->fields.moveOffset;
  result = this->fields.moveOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v11 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo);
      v11 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__bool__o *)v11->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo,
                                                 method,
                                                 v2);
      System_Func_object__bool____ctor(
        _9__5_0,
        v13,
        Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__,
        0LL);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v15, v16);
    }
    v17 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v18 = System_Linq_Enumerable__ToList_object_(
            v17,
            (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_moveOffset->klass = (ServantStatusBattleListViewItem_c *)v18;
    sub_1B6406C(p_moveOffset, (int32_t)v18, v19, v20);
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
  if ( (byte_49FA06F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__, v3);
    this = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_1B640C8(
                                                                                 &Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__,
                                                                                 v4);
    byte_49FA06F = 1;
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
      sub_1B64324(this);
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      &v42,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v16 = v45;
    v17 = *(_OWORD *)&v42.fields._list;
    p__7__wrap3 = (ServantStatusBattleListViewItem_o *)&v45->fields.__7__wrap3;
    v43 = v42;
    v45->fields.__7__wrap3.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v42.fields._current;
    *(_OWORD *)&v16->fields.__7__wrap3.fields._list = v17;
    sub_1B6406C(p__7__wrap3, 0, v19, v20);
    v2 = v45;
LABEL_12:
    v2->fields.__1__state = -4;
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap3,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    v25 = v45;
    if ( v24 )
    {
      current = v45->fields.__7__wrap3.fields._current;
      v45->fields.__2__current = current;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->fields.__2__current, (int32_t)current, v22, v23);
      result = 1;
      v45->fields.__1__state = 2;
      return result;
    }
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(v45, v21);
    v28 = v45;
    *(_OWORD *)&v45->fields._trendInfo_5__3 = 0u;
    v28 = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)((char *)v28 + 72);
    *(_OWORD *)&v28->fields.__1__state = 0u;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v28, 0, v29, v30);
    v13 = v45;
    goto LABEL_15;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1B64324(this);
  actionTrandList = (System_Collections_Generic_List_object__o *)_4__this->fields.actionTrandList;
  if ( !actionTrandList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    &v42,
    actionTrandList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v8 = v45;
  v9 = *(_OWORD *)&v42.fields._list;
  p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v45->fields.__7__wrap1;
  v43 = v42;
  v45->fields.__7__wrap1.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v42.fields._current;
  *(_OWORD *)&v8->fields.__7__wrap1.fields._list = v9;
  sub_1B6406C(p__7__wrap1, 0, v11, v12);
  v13 = v45;
  v45->fields.__1__state = -3;
LABEL_15:
  v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v13->fields.__7__wrap1,
          (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
  v35 = v45;
  if ( v34 )
  {
    v36 = v45->fields.__7__wrap1.fields._current;
    v45->fields._trendInfo_5__3 = v36;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v35->fields._trendInfo_5__3, (int32_t)v36, v32, v33);
    v37 = v45;
    v38 = v45->fields._trendInfo_5__3;
    v45->fields.__2__current = v38;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->fields.__2__current, (int32_t)v38, v39, v40);
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
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  __int64 v5; // x20
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FA072 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method);
    byte_49FA072 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v5 = sub_1B64314(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    *(_DWORD *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v5 + 40) = _4__this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)_4__this, v7, v8);
    return (System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *)v5;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  if ( (byte_49FA070 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, method);
    byte_49FA070 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FA071 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, method);
    byte_49FA071 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA06E & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v1);
    byte_49FA06E = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardAIRoute_PiecePersonality___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_PiecePersonality___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return x->fields.type == 0;
}


bool __fastcall WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.type == 1;
}


void __fastcall WarBoardAIRoute_PutSquareTarget___ctor(
        WarBoardAIRoute_PutSquareTarget_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FA080 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v4);
    byte_49FA080 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                  method,
                                                                  v2);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v5,
    (const MethodInfo_3160DCC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
  v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                   v8,
                                                                   v9);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v10,
    (const MethodInfo_3160DCC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicObjectPutSquareIndex, (int32_t)v10, v11, v12);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                   v13,
                                                                   v14);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v15,
    (const MethodInfo_3160DCC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicIndividualityPutSqareIndex, (int32_t)v15, v16, v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData___ctor(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FA079 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, method);
    byte_49FA079 = 1;
  }
  this->fields.flagNow = 1LL;
  v4 = (Il2CppObject *)sub_1B64314(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, method, v2);
  System_Object___ctor(v4, 0LL);
  this->fields.evalOffsetMagnification = (struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.evalOffsetMagnification, (int32_t)v4, v5, v6);
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

  if ( (byte_49FA07B & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&System_Decimal_TypeInfo, v3);
    byte_49FA07B = 1;
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
  v8 = System_Decimal__op_Implicit_62582764((System_Decimal_o *)v5, WarBoardEvalFactorsAffectRatio, 0LL);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_1B64324(0LL);
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
  v26 = System_Decimal__op_Implicit_62582764(cctor_finished, attackEvalOffsetAddValue, 0LL);
  v29 = System_Decimal__op_Division(v28, v26, v27, (const MethodInfo *)v8);
  v31 = System_Decimal__op_Addition(v30, AttackValue, v21, (const MethodInfo *)v29);
  this->fields.evalValue = System_Decimal__op_Explicit_62583268(v31, v32);
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


bool __fastcall WarBoardAIRoute_RouteData__HasFlag_35001680(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_49FA078 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__, method);
    byte_49FA078 = 1;
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

  if ( (byte_49FA07A & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIRoute_RouteData_TypeInfo, method);
    byte_49FA07A = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0LL);
  if ( result )
  {
    methodPtr_low = LOBYTE(WarBoardAIRoute_RouteData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      sub_1B645E4(result);
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
  __int64 v2; // x2
  __int64 v4; // x1
  ServantStatusBattleListViewItem_o *p_futureLookingTrendHashSet; // x19
  System_Collections_Generic_HashSet_T__o *v6; // x20
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // t1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FA077 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v4);
    byte_49FA077 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = (ServantStatusBattleListViewItem_o *)&this->fields.futureLookingTrendHashSet;
  v6 = (System_Collections_Generic_HashSet_T__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v6 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                      System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                                                      method,
                                                      v2);
    System_Collections_Generic_HashSet_object____ctor(
      v6,
      (const MethodInfo_3369DD0 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    p_futureLookingTrendHashSet->klass = (ServantStatusBattleListViewItem_c *)v6;
    sub_1B6406C(p_futureLookingTrendHashSet, (int32_t)v6, v8, v9);
  }
  return (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)v6;
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

  if ( (byte_49FA07C & 1) == 0 )
  {
    sub_1B640C8(&System_Decimal_TypeInfo, method);
    byte_49FA07C = 1;
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

  if ( (byte_49FA07D & 1) == 0 )
  {
    sub_1B640C8(&System_Decimal_TypeInfo, method);
    byte_49FA07D = 1;
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


void __fastcall WarBoardAIRoute_TargetData___ctor_35003588(
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v8, (int32_t)targetSquare, v9, v10);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35003668(
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)targetObject, v9, v10);
  WarBoardAIRoute_TargetData__DetectObject(this, v11);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35004248(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  __int64 v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct IWarBoardObjectData_o *targetObject; // x1
  struct WarBoardSquareData_o *targetSquare; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseTargetData )
    sub_1B64324(v11);
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)targetObject, v12, v13);
  targetSquare = baseTargetData->fields.targetSquare;
  this->fields.targetSquare = targetSquare;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetSquare, (int32_t)targetSquare, v16, v17);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v18);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35005280(
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)targetObject, v13, v14);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v15);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35005392(
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
  if ( (byte_49FA081 & 1) == 0 )
  {
    b = (WarBoardAIRoute_TargetData_o *)sub_1B640C8(&WarBoardAIRoute_TargetData_TypeInfo, method);
    byte_49FA081 = 1;
  }
  if ( !v2 )
LABEL_9:
    sub_1B64324(b);
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone(v2, 0LL);
  if ( result )
  {
    methodPtr_low = LOBYTE(WarBoardAIRoute_TargetData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      sub_1B645E4(result);
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

  if ( (byte_49FA083 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardItemData_TypeInfo, method);
    sub_1B640C8(&WarBoardPieceData_TypeInfo, v5);
    sub_1B640C8(&WarBoardTreasureData_TypeInfo, v6);
    byte_49FA083 = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_targetPiece, v11, v2, v3);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_targetItem, v19, v13, v14);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_targetTreasure, v27, v21, v22);
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
  const MethodInfo *v17; // x5
  struct IWarBoardObjectData_o *targetObject; // x24
  WarBoardAIRoute_TargetData_o *v19; // x25
  IWarBoardObjectData_c *klass; // x8
  __int64 v21; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 p_method; // x0
  struct WarBoardSquareData_o *targetSquare; // x8
  __int64 squareIndex_k__BackingField; // x0
  int32_t nowSquareIndex; // w24
  struct System_Int32_array *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
  __int64 v31; // x2
  WarBoardAIRoute_TargetData___c_c *v32; // x0
  System_Int32_array *baseRoute; // x24
  WarBoardPieceData_o *v34; // x21
  System_Func_object__int__o *_9__7_0; // x25
  Il2CppObject *v36; // x26
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Int32_array *v41; // x0
  bool IsDetour; // w0
  const MethodInfo *v43; // x5
  int32_t v44; // w23
  struct System_Int32_array *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w0
  struct IWarBoardObjectData_o *v49; // x21
  WarBoardAIRoute_TargetData_o *v50; // x22
  IWarBoardObjectData_c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  struct WarBoardSquareData_o *v55; // x8

  if ( (byte_49FA082 & 1) == 0 )
  {
    sub_1B640C8(&AStarSearch_TypeInfo, baseTargetData);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1B640C8(&System_Func_WarBoardPieceData__int__TypeInfo, v13);
    sub_1B640C8(&IWarBoardObjectData_TypeInfo, v14);
    sub_1B640C8(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, v15);
    sub_1B640C8(&WarBoardAIRoute_TargetData___c_TypeInfo, v16);
    byte_49FA082 = 1;
  }
  WarBoardAIRoute_TargetData__DetectObject(this, (const MethodInfo *)baseTargetData);
  targetObject = this->fields.targetObject;
  if ( targetObject )
    v19 = this;
  else
    v19 = 0LL;
  if ( targetObject )
  {
    klass = targetObject->klass;
    v21 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v21;
        p_offset += 2;
        if ( !v21 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BB60A8(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1LL);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                    targetObject,
                                    *(_QWORD *)(p_method + 8));
    if ( !v19 )
LABEL_49:
      sub_1B64324(squareIndex_k__BackingField);
  }
  else
  {
    targetSquare = this->fields.targetSquare;
    if ( targetSquare )
      squareIndex_k__BackingField = (unsigned int)targetSquare->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = 0xFFFFFFFFLL;
    v19 = this;
    if ( !this )
      goto LABEL_49;
  }
  v19->fields.nowSquareIndex = squareIndex_k__BackingField;
  nowSquareIndex = this->fields.nowSquareIndex;
  if ( !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  v27 = AStarSearch__RouteSearch(0LL, baseSquareIndex, nowSquareIndex, 0, 0LL, v17);
  this->fields.baseRoute = v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseRoute, (int32_t)v27, v28, v29);
  v32 = WarBoardAIRoute_TargetData___c_TypeInfo;
  baseRoute = this->fields.baseRoute;
  if ( !WarBoardAIRoute_TargetData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIRoute_TargetData___c_TypeInfo);
    v32 = WarBoardAIRoute_TargetData___c_TypeInfo;
  }
  v34 = piece;
  _9__7_0 = (System_Func_object__int__o *)v32->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = WarBoardAIRoute_TargetData___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v32->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_WarBoardPieceData__int__TypeInfo, v30, v31);
    System_Func_object__int____ctor(_9__7_0, v36, Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, 0LL);
    static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v38, v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v41 = System_Linq_Enumerable__ToArray_int_(
          v40,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v41, 0LL);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    v44 = this->fields.nowSquareIndex;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    v45 = AStarSearch__RouteSearch(v34, baseSquareIndex, v44, 1, 0LL, v43);
    this->fields.detourRoute = v45;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.detourRoute, (int32_t)v45, v46, v47);
  }
  v48 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
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
      v54 = sub_1BB60A8(v49, IWarBoardObjectData_TypeInfo, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA084 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIRoute_TargetData___c_TypeInfo, v1);
    byte_49FA084 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardAIRoute_TargetData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardAIRoute_TargetData___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_TargetData___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardAIRoute_TargetData___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
  __int64 v2; // x2
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
  int32_t v93; // w2
  int32_t v94; // w3
  struct WarBoardData_o *monitor; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v96; // x0
  __int64 v97; // x0
  struct WarBoardStageNpcEntity_o *npcData; // x9
  int32_t searchDepth; // w8
  WarBoardAIRoute__CreateRouteData_d__47_o *v100; // x9
  int32_t v101; // w10
  int32_t RequiredCost; // w20
  Il2CppObject *v103; // x0
  int32_t MasterSquareIndex; // w2
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // x1
  struct System_Int32_array *AllyPutSquareIndicesWithoutMaster; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v107; // x0
  int32_t v108; // w2
  int32_t v109; // w3
  ServantStatusBattleListViewItem_o *v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  __int64 v113; // x0
  struct WarBoardData_o *warBoardData_5__2; // x8
  System_Collections_Generic_List_int__o *masterExistsForce; // x0
  _BOOL8 v116; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v117; // x8
  int32_t servantAndEnemyRange_5__14; // w8
  int32_t servantAndEnemyMasterRange_5__15; // w9
  struct WarBoardAIRoute_AIRouteMasterData_o *v120; // x9
  int32_t v121; // w9
  struct DefenseAreaData_o *DefenseAreaData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  __int64 v126; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v127; // x8
  struct DefenseAreaData_o *defenseAreaData_5__7; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x10
  bool IsAllBlockShortestRouteEnemyAndMastr; // w0
  System_Collections_Generic_Dictionary_int__uint__o *v131; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v132; // x8
  __int128 v133; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap8; // x0
  int32_t v135; // w2
  int32_t v136; // w3
  const MethodInfo *v137; // x1
  __int64 v138; // x2
  Il2CppObject *key; // x20
  Il2CppObject *v140; // x21
  WarBoardAIRoute__CreateRouteData_d__47_o *v141; // x0
  int32_t v142; // w2
  int32_t v143; // w3
  WarBoardSquareData_o *Square; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v145; // x0
  int32_t v146; // w2
  int32_t v147; // w3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *_8__1; // x21
  WarBoardPieceData_o *PieceUnique; // x0
  int32_t v150; // w2
  int32_t v151; // w3
  __int64 v152; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v153; // x8
  int64_t baseFlag_5__6; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v155; // x9
  int64_t v156; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v157; // x8
  System_Collections_Generic_IEnumerable_TSource__o *routeDataList; // x21
  Il2CppObject *v159; // x23
  __int64 v160; // x1
  __int64 v161; // x2
  System_Func_object__bool__o *v162; // x22
  int32_t v163; // w8
  System_Collections_Generic_List_object__o *v164; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v166; // x8
  __int64 RouteSumPieceActionCost; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v168; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v169; // x9
  _BOOL8 IsActable; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v171; // x9
  System_Collections_Generic_Dictionary_int__int__o *DesignationItemToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v173; // x0
  int32_t v174; // w2
  int32_t v175; // w3
  __int64 v176; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v177; // x9
  struct System_Collections_Generic_Dictionary_int__int__o *TargetToDistance_34990020; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v179; // x0
  int32_t v180; // w2
  int32_t v181; // w3
  System_Collections_Generic_Dictionary_uint__int__o *AllEnemyToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v183; // x0
  int32_t v184; // w2
  int32_t v185; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v186; // x0
  int32_t v187; // w2
  int32_t v188; // w3
  __int64 v189; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v190; // x8
  WarBoardPieceData_o *basePiece; // x0
  _BOOL8 isServant; // x0
  __int64 v193; // x1
  __int64 v194; // x2
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v195; // x9
  WarBoardAIRoute_AdvantagePieceData_o *AdvantagePieceData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v197; // x0
  int32_t v198; // w2
  int32_t v199; // w3
  const MethodInfo *v200; // x5
  int32_t masterSquareIndex_5__4; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v202; // x0
  __int64 v203; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v204; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v205; // x9
  struct WarBoardPieceData_o *v206; // x11
  struct WarBoardAIRoute_AIRouteMasterData_o *v207; // x9
  int32_t masterType; // w10
  int32_t index_k__BackingField; // w11
  struct WarBoardStageNpcEntity_o *v210; // x12
  System_Collections_Generic_HashSet_T__o *v211; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v212; // x0
  int32_t v213; // w2
  int32_t v214; // w3
  __int64 v215; // x1
  __int64 v216; // x2
  System_Collections_Generic_HashSet_T__o *v217; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v218; // x0
  int32_t v219; // w2
  int32_t v220; // w3
  System_Collections_Generic_List_object__o *v221; // x0
  _BOOL8 v222; // x0
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v225; // x10
  struct WarBoardPieceData_o *v226; // x10
  System_Collections_Generic_HashSet_T__o *basePieceActionPieceRouteList_5__22; // x0
  _DWORD *v228; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v229; // x10
  struct WarBoardPieceData_o *v230; // x10
  struct WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData_5__21; // x0
  __int64 v232; // x0
  __int64 v233; // x1
  __int64 v234; // x2
  WarBoardAIRoute__CreateRouteData_d__47_o *v235; // x8
  int32_t v236; // w9
  System_Collections_Generic_IEnumerable_TSource__o *v237; // x20
  WarBoardAIRoute___c_c *v238; // x8
  System_Func_T__TResult__o *_9__47_6; // x21
  Il2CppObject *v240; // x22
  struct WarBoardAIRoute___c_StaticFields *v241; // x0
  int32_t v242; // w2
  int32_t v243; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v244; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v245; // x0
  __int64 Count; // x0
  struct WarBoardStageNpcEntity_o *v247; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v248; // x11
  float v249; // s0
  int32_t v250; // w9
  int32_t calcEllipsisMin; // w8
  System_Linq_IOrderedEnumerable_TSource__c *v252; // x8
  __int64 v253; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v256; // x1
  ServantStatusBattleListViewItem_o *v257; // x0
  int32_t v258; // w2
  int32_t v259; // w3
  __int64 *v260; // x19
  __int64 v261; // x8
  __int64 v262; // x9
  int *v263; // x10
  __int64 v264; // x0
  __int64 v265; // x0
  __int64 *v266; // x19
  __int64 v267; // x8
  __int64 v268; // x9
  int *v269; // x10
  __int64 v270; // x0
  ServantStatusBattleListViewItem_o *p__7__wrap24; // x0
  int32_t v272; // w2
  int32_t v273; // w3
  Il2CppObject *v274; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v275; // x0
  int32_t v276; // w2
  int32_t v277; // w3
  WarBoardSquareData_o *v278; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *MyAndLinkedSquareIndecies; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v280; // x0
  int32_t v281; // w2
  int32_t v282; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v283; // x8
  int v284; // w9
  __int64 v285; // x21
  __int64 v286; // x0
  __int64 v287; // x1
  __int64 v288; // x2
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v289; // x8
  __int64 _7__wrap23_low; // x9
  int32_t *v291; // x27
  WarBoardAIRoute_RouteData_o *v292; // x20
  const MethodInfo *v293; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v294; // x9
  int32_t getEnumeratorRetType; // w8
  int32_t v296; // w10
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v297; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dicBaseDIRange_5__18; // x20
  WarBoardAIRoute___c_c *v299; // x8
  System_Func_T__TResult__o *_9__47_1; // x22
  Il2CppObject *v301; // x23
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int32_t v303; // w2
  int32_t v304; // w3
  System_Func_T__TResult__o *_9__47_2; // x23
  Il2CppObject *v306; // x24
  struct WarBoardAIRoute___c_StaticFields *v307; // x0
  int32_t v308; // w2
  int32_t v309; // w3
  int32_t v310; // w2
  int32_t v311; // w3
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v312; // x20
  WarBoardAIRoute_RouteData_o *v313; // x0
  struct WarBoardSquareData_o *v314; // x1
  __int64 v315; // x0
  int32_t v316; // w2
  int32_t v317; // w3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v318; // x8
  WarBoardAIRoute_RouteData_o *v319; // x0
  struct WarBoardPieceData_o *v320; // x1
  int32_t v321; // w2
  int32_t v322; // w3
  WarBoardAIRoute_RouteData_o *v323; // x0
  WarBoardAIRoute_RouteData_o *v324; // x22
  int32_t v325; // w23
  WarBoardSquareData_o *v326; // x0
  int32_t v327; // w2
  int32_t v328; // w3
  System_Collections_Generic_Dictionary_uint__int__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v330; // x19
  System_Collections_Generic_Dictionary_uint__int__o *v331; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v333; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v334; // x8
  WarBoardAIRoute_RouteData_o *v335; // x22
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *MoveByTargetDistance; // x0
  int32_t v337; // w2
  int32_t v338; // w3
  __int64 v339; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v340; // x9
  WarBoardAIRoute_RouteData_o *v341; // x20
  WarBoardPieceData_o *ActionPiece; // x0
  int32_t v343; // w2
  int32_t v344; // w3
  ServantStatusBattleListViewItem_o *p_actionPiece; // x0
  __int64 v346; // x1
  int32_t v347; // w2
  const MethodInfo *v348; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v349; // x8
  struct WarBoardPieceData_o *v350; // x9
  struct WarBoardPieceData_o *v351; // x10
  struct WarBoardPieceData_o *v352; // x8
  int32_t limitActionCount_k__BackingField; // w19
  int32_t currentActionCount_k__BackingField; // w20
  System_Math_c *v355; // x0
  WarBoardAIRoute_RouteData_o *v356; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v357; // x9
  int v358; // w11
  struct WarBoardSquareData_o *baseSquare_5__11; // x10
  WarBoardData_o *v360; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v361; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v362; // x9
  WarBoardPieceData_o *v363; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v364; // x8
  WarBoardPieceData_o *v365; // x0
  WarBoardPieceData_o *v366; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v367; // x8
  WarBoardPieceData_o *v368; // x22
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v369; // x8
  WarBoardPieceData_o *v370; // x0
  WarBoardPieceData_o *v371; // x0
  WarBoardAIRoute_RouteData_o *v372; // x8
  struct WarBoardPieceData_o *v373; // x9
  WarBoardPieceData_o *v374; // x0
  WarBoardAIRoute_RouteData_o *v375; // x19
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v376; // x8
  struct WarBoardPieceData_o *v377; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  int64_t flagNow; // x22
  __int64 ClassId; // x0
  struct WarBoardPieceData_o *v381; // x8
  int32_t v382; // w20
  BattleServantData_o *v383; // x0
  int32_t v384; // w2
  int64_t FlagAdvantage; // x0
  struct WarBoardPieceData_o *v386; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v387; // x8
  WarBoardPieceData_o *v388; // x22
  WarBoardAIRoute_RouteData_o *v389; // x2
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v390; // x9
  WarBoardPieceData_o *v391; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v392; // x9
  System_Collections_Generic_List_object__o *v393; // x0
  int32_t requiredCost_5__3; // w23
  WarBoardPieceData_o *v395; // x20
  WarBoardPieceData_o *v396; // x22
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v397; // x4
  System_Collections_Generic_Dictionary_int__uint__o *updated; // x25
  int32_t MasterSquareIndexFromPlaceData; // w22
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v400; // x23
  __int64 v401; // x1
  __int64 v402; // x2
  System_Func_object__bool__o *v403; // x24
  DefenseAreaData_o *v404; // x0
  __int64 v405; // x1
  __int64 v406; // x2
  struct WarBoardAIRoute_AdvantagePieceData_o *v407; // x23
  System_Func_object__bool__o *v408; // x24
  struct DefenseAreaData_o *v409; // x23
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v410; // x9
  WarBoardPieceData_o *v411; // x0
  System_Int32_array *v412; // x2
  struct WarBoardAIRoute_AIRouteMasterData_o *v413; // x8
  _BOOL8 v414; // x0
  WarBoardAIRoute_RouteData_o *v415; // x21
  int64_t v416; // x8
  System_Collections_Generic_List_object__o *v417; // x23
  __int64 v418; // x0
  int32_t v419; // w2
  int32_t v420; // w3
  __int64 v421; // x0
  __int64 v422; // x1
  __int64 v423; // x2
  WarBoardAIRoute_RouteData_o *v424; // x21
  System_Collections_Generic_Dictionary_uint__int__o *v425; // x23
  int32_t v426; // w2
  int32_t v427; // w3
  System_Collections_Generic_Dictionary_int__uint__o *v428; // x0
  _BOOL8 v429; // x0
  const MethodInfo *v430; // x5
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v431; // x8
  struct WarBoardPieceData_o *v432; // x8
  uint32_t key_high; // w21
  int32_t v434; // w24
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x23
  int32_t v436; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v437; // x0
  __int64 v438; // x0
  __int64 v439; // x1
  __int64 v440; // x2
  WarBoardAIRoute_RouteData_o *v441; // x21
  System_Collections_Generic_List_int__o *v442; // x23
  __int64 v443; // x0
  int32_t v444; // w2
  int32_t v445; // w3
  WarBoardAIRoute_RouteData_o *v446; // x21
  __int64 v447; // x1
  __int64 v448; // x2
  System_Collections_Generic_Dictionary_int__bool__o *v449; // x23
  __int64 v450; // x0
  int32_t v451; // w2
  int32_t v452; // w3
  WarBoardAIRoute_RouteData_o *v453; // x21
  __int64 v454; // x1
  __int64 v455; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v456; // x23
  __int64 v457; // x0
  int32_t v458; // w2
  int32_t v459; // w3
  __int64 v460; // x0
  WarBoardAIRoute_RouteData_o *v461; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v462; // x8
  WarBoardPieceData_o *v463; // x0
  _BOOL8 IsBlockShortestRouteEnemyAndMaster; // x0
  __int64 v465; // x1
  const MethodInfo *v466; // x2
  const MethodInfo *v467; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v468; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v469; // x9
  struct WarBoardPieceData_o *v470; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v471; // x10
  DefenseAreaData_o *v472; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v473; // x9
  struct WarBoardPieceData_o *v474; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v475; // x11
  int32_t v476; // w10
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v477; // x9
  struct WarBoardPieceData_o *v478; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v479; // x10
  int32_t v480; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v481; // x0
  int32_t v482; // w0
  WarBoardAIRoute_RouteData_o *v483; // x19
  __int64 v484; // x0
  System_Collections_Generic_Dictionary_int__int__o *v485; // x0
  const MethodInfo *v486; // x5
  int32_t v487; // w21
  int32_t v488; // w22
  int32_t v489; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v490; // x0
  __int64 v491; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x23
  __int64 v493; // x0
  __int64 v494; // x0
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  __int64 v496; // x0
  struct System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v499; // x9
  __int64 size; // x10
  const MethodInfo *v501; // x5
  int32_t v502; // w21
  int32_t enemyMasterSquareIndex; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v504; // x0
  int32_t v505; // w0
  WarBoardAIRoute_RouteData_o *v506; // x19
  __int64 v507; // x0
  __int64 v508; // x1
  WarBoardAIRoute_RouteData_o *v509; // x19
  WarBoardAIManager_c *v510; // x0
  __int64 v511; // x0
  struct WarBoardAIRoute_AIRouteMasterData_o *v512; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v513; // x8
  WarBoardPieceData_o *v514; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v515; // x9
  struct WarBoardPieceData_o *v516; // x9
  WarBoardAIManager_c *v517; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v520; // x5
  int32_t currentKey; // w21
  int32_t v522; // w22
  System_Int32_array *v523; // x0
  struct WarBoardStageNpcEntity_o *v524; // x8
  __int64 v525; // x1
  WarBoardAIRoute_RouteData_o *v526; // x19
  WarBoardAIManager_c *v527; // x0
  struct DefenseAreaData_o *v528; // x8
  __int64 v529; // x0
  __int64 v530; // x1
  WarBoardAIManager_c *v531; // x0
  System_Collections_Generic_Dictionary_int__object__o *v532; // x0
  const MethodInfo *v533; // x5
  bool v534; // w21
  int32_t v535; // w22
  int32_t v536; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v537; // x22
  WarBoardAIRoute_RouteData_o *v538; // x19
  System_Collections_Generic_Dictionary_int__uint__o *v539; // x25
  WarBoardData_o *v540; // x0
  WarBoardEffectData_o *Effect; // x0
  __int64 v542; // x1
  __int64 v543; // x2
  System_Collections_Generic_List_int__o *v544; // x22
  System_Collections_Generic_List_object__o *v545; // x0
  _BOOL8 v546; // x0
  Il2CppObject *v547; // x21
  Il2CppClass *v548; // x0
  _BOOL8 v549; // x0
  int32_t monitor_high; // w1
  struct System_Int32_array *v551; // x8
  _QWORD *v552; // x9
  __int64 v553; // x10
  WarBoardPieceData_o *v554; // x0
  WarBoardPieceData_o *v555; // x0
  _BOOL8 v556; // x0
  int32_t v557; // w1
  struct System_Int32_array *v558; // x8
  _QWORD *v559; // x9
  __int64 v560; // x10
  __int64 v561; // x0
  WarBoardPieceData_o *v562; // x0
  _BOOL8 v563; // x0
  _BOOL8 CanAcquireItem; // x0
  WarBoardAIRoute_RouteData_o *v565; // x8
  int64_t v566; // x9
  WarBoardPieceData_o *v567; // x0
  _BOOL8 isMaster; // x0
  _BOOL8 v569; // x0
  WarBoardAIRoute_RouteData_o *v570; // x8
  WarBoardPieceData_o *v571; // x0
  _BOOL8 v572; // x0
  _BOOL8 v573; // x0
  __int64 v574; // x0
  __int64 FlagOutOfWarningAreaToDistance; // x0
  WarBoardAIRoute_RouteData_o *v576; // x8
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x9
  struct WarBoardPieceData_o *v578; // x8
  System_Collections_Generic_Dictionary_int__object__o *piecePersonalityDic; // x0
  Il2CppObject *v580; // x22
  WarBoardAIEvalCalcurater_o *v581; // x21
  __int64 v582; // x0
  const MethodInfo *v583; // x1
  __int64 v584; // x1
  __int64 v585; // x2
  WarBoardAIRoute___c_c *v586; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v587; // x22
  System_Func_object__object__o *_9__47_5; // x23
  Il2CppObject *v589; // x24
  struct WarBoardAIRoute___c_StaticFields *v590; // x0
  int32_t v591; // w2
  int32_t v592; // w3
  System_Collections_Generic_IEnumerable_T__o *v593; // x23
  __int64 v594; // x1
  __int64 v595; // x2
  System_Collections_Generic_List_object__o *v596; // x22
  __int64 v597; // x0
  int32_t v598; // w2
  int32_t v599; // w3
  Il2CppObject *v600; // x1
  struct System_Object_array *v601; // x8
  _QWORD *v602; // x9
  __int64 v603; // x10
  Il2CppClass **v604; // x0
  WarBoardAIRoute_RouteData_o *v605; // x0
  int32_t v606; // w2
  int32_t v607; // w3
  const MethodInfo *v608; // x1
  System_Collections_Generic_List_object__o *allRouteList; // x0
  struct System_Object_array *v610; // x8
  _QWORD *v611; // x9
  __int64 v612; // x10
  Il2CppClass **v613; // x8
  int32_t searchCount; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x21
  Il2CppObject *v616; // x0
  ServantStatusBattleListViewItem_o *p_basePieceBasePieceRouteList_5__23; // x8
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v618; // x10
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *basePieceBasePieceRouteList_5__23; // t1
  WarBoardAIRoute__CreateRouteData_d__47_o *v620; // x0
  int32_t v621; // w2
  int32_t v622; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v623; // x0
  int32_t v624; // w2
  int32_t v625; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v626; // x0
  int32_t v627; // w2
  int32_t v628; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v629; // x0
  int32_t v630; // w2
  int32_t v631; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v632; // x0
  int32_t v633; // w2
  int32_t v634; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v635; // x0
  int32_t v636; // w2
  int32_t v637; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v638; // x0
  int32_t v639; // w2
  int32_t v640; // w3
  WarBoardAIRoute__CreateRouteData_d__47_o *v641; // x0
  int32_t v642; // w2
  int32_t v643; // w3
  Il2CppObject *v644; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v645; // x0
  int32_t v646; // w2
  int32_t v647; // w3
  System_Collections_Generic_Dictionary_int__uint__o *v648; // [xsp+10h] [xbp-1B0h]
  WarBoardAIRoute_o *_4__this; // [xsp+18h] [xbp-1A8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v650; // [xsp+20h] [xbp-1A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v651; // [xsp+50h] [xbp-170h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o **v652; // [xsp+78h] [xbp-148h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v653; // [xsp+80h] [xbp-140h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v654; // [xsp+B0h] [xbp-110h] BYREF
  __int128 v655; // [xsp+D0h] [xbp-F0h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v656; // [xsp+E0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v657; // [xsp+F0h] [xbp-D0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+118h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+120h] [xbp-A0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+128h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v661; // [xsp+130h] [xbp-90h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+148h] [xbp-78h] BYREF
  __int64 actionCount; // [xsp+150h] [xbp-70h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v664; // [xsp+158h] [xbp-68h] BYREF

  v4 = this;
  v664 = this;
  if ( (byte_49FA095 & 1) == 0 )
  {
    sub_1B640C8(&AStarSearch_TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__, v20);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v21);
    sub_1B640C8(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v22);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo, v23);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___, v24);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v25);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, v26);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___, v27);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___, v28);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___,
      v29);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v31);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__,
      v32);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v33);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v34);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v35);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v36);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__,
      v37);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v38);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v39);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v40);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v41);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__,
      v42);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__, v43);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v44);
    sub_1B640C8(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo, v45);
    sub_1B640C8(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v46);
    sub_1B640C8(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo, v47);
    sub_1B640C8(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo, v48);
    sub_1B640C8(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo, v49);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__, v50);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__, v51);
    sub_1B640C8(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo, v52);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo, v53);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo, v54);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v55);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__,
      v56);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__, v57);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v58);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v59);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v60);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v61);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v62);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v63);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__, v64);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v65);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__, v66);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v67);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v68);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v69);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v70);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___75684320, v71);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v72);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v73);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v74);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v75);
    sub_1B640C8(&WarBoardAIRoute_RouteData_TypeInfo, v76);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v77);
    sub_1B640C8(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__, v78);
    sub_1B640C8(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__, v79);
    sub_1B640C8(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__, v80);
    sub_1B640C8(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__, v81);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__, v82);
    sub_1B640C8(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo, v83);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__, v84);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__, v85);
    sub_1B640C8(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo, v86);
    sub_1B640C8(&WarBoardAIRoute___c_TypeInfo, v87);
    sub_1B640C8(&WarBoardAIEvalCalcurater_TypeInfo, v88);
    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)sub_1B640C8(&WarBoardAIManager_TypeInfo, v89);
    byte_49FA095 = 1;
  }
  *(_QWORD *)masterReplaceCount = 0LL;
  actionCount = 0LL;
  memset(&v661, 0, sizeof(v661));
  value = 0LL;
  routeData = 0LL;
  route = 0LL;
  memset(&v654, 0, sizeof(v654));
  memset(&v657, 0, 32);
  v655 = 0u;
  v656 = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v653, 0, sizeof(v653));
  *(_QWORD *)&v651.fields._getEnumeratorRetType = 0LL;
  v652 = &v664;
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
      p__7__wrap24 = (ServantStatusBattleListViewItem_o *)&v664->fields.__7__wrap24;
      *(_QWORD *)&v664->fields.__7__wrap24 = 0LL;
      sub_1B6406C(p__7__wrap24, 0, v272, v273);
      return 0;
    }
LABEL_117:
    v260 = *(__int64 **)&v4->fields.__7__wrap24;
    if ( !v260 )
      sub_1B64324(this);
    v261 = *v260;
    v262 = *(unsigned __int16 *)(*v260 + 302);
    if ( *(_WORD *)(*v260 + 302) )
    {
      v263 = (int *)(*(_QWORD *)(v261 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v263 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v262;
        v263 += 4;
        if ( !v262 )
          goto LABEL_122;
      }
      v264 = v261 + 16LL * *v263 + 312;
    }
    else
    {
LABEL_122:
      v264 = sub_1BB60A8(*(_QWORD *)&v4->fields.__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v265 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v264)(v260, *(_QWORD *)(v264 + 8));
    v4 = v664;
    if ( (v265 & 1) != 0 )
    {
      v266 = *(__int64 **)&v664->fields.__7__wrap24;
      if ( !v266 )
        sub_1B64324(v265);
      v267 = *v266;
      v268 = *(unsigned __int16 *)(*v266 + 302);
      if ( *(_WORD *)(*v266 + 302) )
      {
        v269 = (int *)(*(_QWORD *)(v267 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v269 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          --v268;
          v269 += 4;
          if ( !v268 )
            goto LABEL_130;
        }
        v270 = v267 + 16LL * *v269 + 312;
      }
      else
      {
LABEL_130:
        v270 = sub_1BB60A8(
                 *(_QWORD *)&v664->fields.__7__wrap24,
                 System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo,
                 0LL);
      }
      v274 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v270)(v266, *(_QWORD *)(v270 + 8));
      v275 = v664;
      v664->fields.__2__current = v274;
      v275 = (WarBoardAIRoute__CreateRouteData_d__47_o *)((char *)v275 + 24);
      ++LODWORD(v275->fields._baseSquare_5__11);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)v275, (int32_t)v274, v276, v277);
      result = 1;
      v664->fields.__1__state = 2;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    monitor = (struct WarBoardData_o *)Instance[27].monitor;
    v96 = v664;
    v664->fields._warBoardData_5__2 = monitor;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v96->fields._warBoardData_5__2, (int32_t)monitor, v93, v94);
    if ( !_4__this )
      sub_1B64324(v97);
    npcData = _4__this->fields.npcData;
    if ( !npcData )
      sub_1B64324(v97);
    searchDepth = npcData->fields.searchDepth;
    if ( !searchDepth )
    {
      searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
      npcData->fields.searchDepth = searchDepth;
    }
    v100 = v664;
    v101 = v664->fields.searchCount + 1;
    v664->fields.searchCount = v101;
    if ( v101 > searchDepth )
      return 0;
    *(_QWORD *)masterReplaceCount = 0LL;
    actionCount = 0LL;
    WarBoardAIRoute__GetRouteDataActionList(
      _4__this,
      v100->fields.routeDataList,
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
    v664->fields._requiredCost_5__3 = RequiredCost;
    v103 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v103 )
      sub_1B64324(0LL);
    if ( RequiredCost >= SHIDWORD(v103[47].klass) )
      return 0;
    MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v664->fields.piecePlaceData, 0LL);
    piecePlaceData = v664->fields.piecePlaceData;
    v664->fields._masterSquareIndex_5__4 = MasterSquareIndex;
    AllyPutSquareIndicesWithoutMaster = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                          _4__this,
                                          piecePlaceData,
                                          MasterSquareIndex,
                                          0LL);
    v107 = v664;
    v664->fields._allyPieceIndexs_5__5 = AllyPutSquareIndicesWithoutMaster;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&v107->fields._allyPieceIndexs_5__5,
      (int32_t)AllyPutSquareIndicesWithoutMaster,
      v108,
      v109);
    v110 = (ServantStatusBattleListViewItem_o *)v664;
    v664->fields._defenseAreaData_5__7 = 0LL;
    v110 = (ServantStatusBattleListViewItem_o *)((char *)v110 + 104);
    *(_QWORD *)&v110[-1].fields.isMine = 1LL;
    sub_1B6406C(v110, 0, v111, v112);
    warBoardData_5__2 = v664->fields._warBoardData_5__2;
    if ( !warBoardData_5__2 )
      sub_1B64324(v113);
    masterExistsForce = warBoardData_5__2->fields.masterExistsForce;
    if ( !masterExistsForce )
      sub_1B64324(0LL);
    v116 = System_Collections_Generic_List_int___Contains(
             masterExistsForce,
             _4__this->fields.forceId,
             (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
    v117 = v664;
    if ( v116 )
    {
      if ( v664 )
      {
        v664->fields._masterExists_5__8 = 1;
LABEL_25:
        DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                            _4__this,
                            v117->fields._masterSquareIndex_5__4,
                            v117->fields._allyPieceIndexs_5__5,
                            v117->fields.piecePlaceData,
                            0LL);
        v123 = v664;
        v664->fields._defenseAreaData_5__7 = DefenseAreaData;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v123->fields._defenseAreaData_5__7,
          (int32_t)DefenseAreaData,
          v124,
          v125);
        v127 = v664;
        defenseAreaData_5__7 = v664->fields._defenseAreaData_5__7;
        if ( !defenseAreaData_5__7 )
          sub_1B64324(v126);
        v664->fields._baseFlag_5__6 |= defenseAreaData_5__7->fields._Flag_k__BackingField;
        aiRouteMasterData = _4__this->fields.aiRouteMasterData;
        if ( !aiRouteMasterData )
          sub_1B64324(v126);
        IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                                 defenseAreaData_5__7->fields._ShortestRoutes_k__BackingField,
                                                 v127->fields.piecePlaceData,
                                                 aiRouteMasterData->fields.masterType == 1,
                                                 0LL);
        v117 = v664;
        if ( IsAllBlockShortestRouteEnemyAndMastr )
          v664->fields._baseFlag_5__6 |= 0x20000000uLL;
LABEL_29:
        v131 = v117->fields.piecePlaceData;
        if ( !v131 )
          sub_1B64324(0LL);
        System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
          &v651,
          v131,
          (const MethodInfo_312F9C0 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
        v132 = v664;
        v133 = *(_OWORD *)&v651.fields._dictionary;
        p__7__wrap8 = (ServantStatusBattleListViewItem_o *)&v664->fields.__7__wrap8;
        *(_OWORD *)&v650.fields._dictionary = *(_OWORD *)&v651.fields._dictionary;
        v650.fields._current = v651.fields._current;
        v664->fields.__7__wrap8.fields._current = v651.fields._current;
        *(_OWORD *)&v132->fields.__7__wrap8.fields._dictionary = v133;
        sub_1B6406C(p__7__wrap8, 0, v135, v136);
        v664->fields.__1__state = -3;
LABEL_44:
        while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                  &v664->fields.__7__wrap8,
                  (const MethodInfo_326C4C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
        {
          key = v664->fields.__7__wrap8.fields._current.fields.key;
          v140 = (Il2CppObject *)sub_1B64314(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo, v137, v138);
          System_Object___ctor(v140, 0LL);
          v141 = v664;
          v664->fields.__8__1 = (struct WarBoardAIRoute___c__DisplayClass47_0_o *)v140;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v141->fields.__8__1, (int32_t)v140, v142, v143);
          v664->fields.__7__wrap8.fields._getEnumeratorRetType = (int)key;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          Square = WarBoardAIManager__GetSquare((int32_t)key, 0LL);
          v145 = v664;
          *(_QWORD *)&v664->fields._baseSquareIndex_5__10 = Square;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&v145->fields._baseSquareIndex_5__10,
            (int32_t)Square,
            v146,
            v147);
          _8__1 = v664->fields.__8__1;
          PieceUnique = WarBoardAIManager__GetPieceUnique(HIDWORD(key), 0LL);
          if ( !_8__1 )
            sub_1B64324(PieceUnique);
          _8__1->fields.basePiece = PieceUnique;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&_8__1->fields, (int32_t)PieceUnique, v150, v151);
          v153 = v664;
          baseFlag_5__6 = v664->fields._baseFlag_5__6;
          v155 = v664->fields.__8__1;
          v664->fields._tmpFlagNow_5__12 = -1LL;
          v153->fields._servantAndMasterRange_5__13 = -1;
          v153->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
          if ( !v155 )
            sub_1B64324(v152);
          if ( !_4__this )
            sub_1B64324(0LL);
          v156 = WarBoardAIRoute__GetFlagAroundSquareCheck(
                   _4__this,
                   *(WarBoardSquareData_o **)&v153->fields._baseSquareIndex_5__10,
                   v155->fields.basePiece,
                   v153->fields.piecePlaceData,
                   v153->fields._masterSquareIndex_5__4,
                   0LL);
          v157 = v664;
          v664->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)(v156 | baseFlag_5__6);
          routeDataList = (System_Collections_Generic_IEnumerable_TSource__o *)v157->fields.routeDataList;
          v159 = (Il2CppObject *)v157->fields.__8__1;
          v162 = (System_Func_object__bool__o *)sub_1B64314(
                                                  System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                  v160,
                                                  v161);
          System_Func_object__bool____ctor(
            v162,
            v159,
            Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
            0LL);
          v163 = System_Linq_Enumerable__Count_object__48591404(
                   routeDataList,
                   (System_Func_TSource__bool__o *)v162,
                   (const MethodInfo_2E5722C *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
          v164 = (System_Collections_Generic_List_object__o *)v664->fields.routeDataList;
          v664->fields._servantAndEnemyRange_5__14 = v163;
          if ( !v164 )
            sub_1B64324(0LL);
          Only = System_Collections_Generic_List_object___AsReadOnly(
                   v164,
                   (const MethodInfo_34AD8FC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
          v166 = v664->fields.__8__1;
          if ( !v166 )
            sub_1B64324(Only);
          RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                      _4__this,
                                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                      v166->fields.basePiece,
                                      0LL);
          v168 = v664;
          v169 = v664->fields.__8__1;
          v664->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
          if ( !v169 )
            sub_1B64324(RouteSumPieceActionCost);
          IsActable = WarBoardAIRoute__IsActable(
                        _4__this,
                        v169->fields.basePiece,
                        v168->fields._servantAndEnemyRange_5__14,
                        v168->fields._requiredCost_5__3,
                        RouteSumPieceActionCost,
                        0LL);
          if ( IsActable )
          {
            v171 = v664->fields.__8__1;
            if ( !v171 )
              sub_1B64324(IsActable);
            DesignationItemToDistance = WarBoardAIRoute__GetDesignationItemToDistance(
                                          _4__this,
                                          v171->fields.basePiece,
                                          v664->fields.routeDataList,
                                          v664->fields.__7__wrap8.fields._getEnumeratorRetType,
                                          0LL);
            v173 = v664;
            *(_QWORD *)&v664->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&v173->fields._sumPieceActionCost_5__17,
              (int32_t)DesignationItemToDistance,
              v174,
              v175);
            v177 = v664->fields.__8__1;
            if ( !v177 )
              sub_1B64324(v176);
            TargetToDistance_34990020 = (struct System_Collections_Generic_Dictionary_int__int__o *)WarBoardAIRoute__GetTargetToDistance_34990020(_4__this, v177->fields.basePiece, v664->fields.routeDataList, v664->fields.__7__wrap8.fields._getEnumeratorRetType, 0LL);
            v179 = v664;
            v664->fields._dicBaseDIRange_5__18 = TargetToDistance_34990020;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&v179->fields._dicBaseDIRange_5__18,
              (int32_t)TargetToDistance_34990020,
              v180,
              v181);
            AllEnemyToDistance = WarBoardAIRoute__GetAllEnemyToDistance(
                                   _4__this,
                                   v664->fields.routeDataList,
                                   v664->fields.__7__wrap8.fields._getEnumeratorRetType,
                                   (int32_t *)&v664->fields._tmpFlagNow_5__12 + 1,
                                   &v664->fields._servantAndMasterRange_5__13,
                                   0LL);
            v183 = v664;
            v664->fields._dicKeyPutIndexValueTargetData_5__19 = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)AllEnemyToDistance;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&v183->fields._dicKeyPutIndexValueTargetData_5__19,
              (int32_t)AllEnemyToDistance,
              v184,
              v185);
            v186 = v664;
            v664->fields._dicEnemyRange_5__20 = 0LL;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v186->fields._dicEnemyRange_5__20, 0, v187, v188);
            v190 = v664->fields.__8__1;
            if ( !v190 )
              sub_1B64324(v189);
            basePiece = v190->fields.basePiece;
            if ( !basePiece )
              sub_1B64324(0LL);
            isServant = WarBoardPieceData__get_isServant(basePiece, 0LL);
            if ( isServant )
            {
              v195 = v664->fields.__8__1;
              if ( !v195 )
                sub_1B64324(isServant);
              AdvantagePieceData = WarBoardAIRoute__GetAdvantagePieceData(
                                     _4__this,
                                     v195->fields.basePiece,
                                     v664->fields.__7__wrap8.fields._getEnumeratorRetType,
                                     0LL);
              v197 = v664;
              v664->fields._dicEnemyRange_5__20 = (struct System_Collections_Generic_Dictionary_uint__int__o *)AdvantagePieceData;
              sub_1B6406C(
                (ServantStatusBattleListViewItem_o *)&v197->fields._dicEnemyRange_5__20,
                (int32_t)AdvantagePieceData,
                v198,
                v199);
              if ( v664->fields._masterExists_5__8 )
              {
                masterSquareIndex_5__4 = v664->fields._masterSquareIndex_5__4;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v202 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              (int32_t)key,
                                                                              masterSquareIndex_5__4,
                                                                              0,
                                                                              0LL,
                                                                              v200);
                v203 = System_Linq_Enumerable__Count_int_(
                         v202,
                         (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
                v204 = v664;
                v205 = v664->fields.__8__1;
                LODWORD(v664->fields._tmpFlagNow_5__12) = v203;
                if ( !v205 )
                  sub_1B64324(v203);
                v206 = v205->fields.basePiece;
                if ( !v206 )
                  sub_1B64324(v203);
                v207 = _4__this->fields.aiRouteMasterData;
                if ( !v207 )
                  sub_1B64324(v203);
                masterType = v207->fields.masterType;
                index_k__BackingField = v206->fields._index_k__BackingField;
                if ( masterType != 2 || v207->fields.masterPieceIndex != index_k__BackingField )
                {
                  v210 = _4__this->fields.npcData;
                  if ( !v210 )
                    sub_1B64324(v203);
                  if ( v210->fields.defenseArea > (int)v203 )
                    v204->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v204->fields._baseSquare_5__11 | 0x800);
                  if ( (masterType != 2 || v207->fields.masterPieceIndex != index_k__BackingField)
                    && WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                         v204->fields._defenseAreaData_5__7,
                         v204->fields.__7__wrap8.fields._getEnumeratorRetType,
                         masterType == 1,
                         0LL) )
                  {
                    v664->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v664->fields._baseSquare_5__11 | 0x80000000);
                  }
                }
              }
            }
            v211 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                                System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo,
                                                                v193,
                                                                v194);
            System_Collections_Generic_HashSet_object____ctor(
              v211,
              (const MethodInfo_3369DD0 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v212 = v664;
            v664->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v211;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&v212->fields._advantagePieceData_5__21,
              (int32_t)v211,
              v213,
              v214);
            v217 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                                System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo,
                                                                v215,
                                                                v216);
            System_Collections_Generic_HashSet_object____ctor(
              v217,
              (const MethodInfo_3369DD0 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v218 = v664;
            v664->fields._basePieceActionPieceRouteList_5__22 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)v217;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&v218->fields._basePieceActionPieceRouteList_5__22,
              (int32_t)v217,
              v219,
              v220);
            v221 = (System_Collections_Generic_List_object__o *)v664->fields.routeDataList;
            if ( !v221 )
              sub_1B64324(0LL);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v650,
              v221,
              (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
            *(_OWORD *)&v661.fields._list = *(_OWORD *)&v650.fields._dictionary;
            v661.fields._current = v650.fields._current.fields.key;
            while ( 1 )
            {
              v222 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v661,
                       (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
              if ( !v222 )
                break;
              current = v661.fields._current;
              if ( !v661.fields._current )
                sub_1B64324(v222);
              if ( LODWORD(v661.fields._current[1].monitor) != HIDWORD(v661.fields._current[1].monitor) )
              {
                klass = v661.fields._current[3].klass;
                if ( !klass )
                  sub_1B64324(v222);
                v225 = v664->fields.__8__1;
                if ( !v225 )
                  sub_1B64324(v222);
                v226 = v225->fields.basePiece;
                if ( !v226 )
                  sub_1B64324(v222);
                if ( HIDWORD(klass->_1.namespaze) == v226->fields._index_k__BackingField )
                {
                  basePieceActionPieceRouteList_5__22 = (System_Collections_Generic_HashSet_T__o *)v664->fields._basePieceActionPieceRouteList_5__22;
                  if ( !basePieceActionPieceRouteList_5__22 )
                    sub_1B64324(0LL);
                  v222 = System_Collections_Generic_HashSet_object___Add(
                           basePieceActionPieceRouteList_5__22,
                           v661.fields._current,
                           (const MethodInfo_336AFB4 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                }
                if ( (BYTE3(current[1].klass) & 4) != 0 )
                {
                  v228 = current[3].monitor;
                  if ( !v228 )
                    sub_1B64324(v222);
                  v229 = v664->fields.__8__1;
                  if ( !v229 )
                    sub_1B64324(v222);
                  v230 = v229->fields.basePiece;
                  if ( !v230 )
                    sub_1B64324(v222);
                  if ( v228[7] == v230->fields._index_k__BackingField )
                  {
                    advantagePieceData_5__21 = v664->fields._advantagePieceData_5__21;
                    if ( !advantagePieceData_5__21 )
                      sub_1B64324(0LL);
                    System_Collections_Generic_HashSet_object___Add(
                      (System_Collections_Generic_HashSet_T__o *)advantagePieceData_5__21,
                      current,
                      (const MethodInfo_336AFB4 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                  }
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v661,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
            v278 = *(WarBoardSquareData_o **)&v664->fields._baseSquareIndex_5__10;
            if ( !v278 )
              sub_1B64324(0LL);
            MyAndLinkedSquareIndecies = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)WarBoardSquareData__GetMyAndLinkedSquareIndecies(v278, 0LL);
            v280 = v664;
            v664->fields._basePieceBasePieceRouteList_5__23 = MyAndLinkedSquareIndecies;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&v280->fields._basePieceBasePieceRouteList_5__23,
              (int32_t)MyAndLinkedSquareIndecies,
              v281,
              v282);
            v283 = v664;
            v284 = 0;
            LODWORD(v664->fields.__7__wrap23) = 0;
            while ( 2 )
            {
              basePieceBasePieceRouteList_5__23 = v283->fields._basePieceBasePieceRouteList_5__23;
              p_basePieceBasePieceRouteList_5__23 = (ServantStatusBattleListViewItem_o *)&v283->fields._basePieceBasePieceRouteList_5__23;
              v618 = basePieceBasePieceRouteList_5__23;
              if ( !basePieceBasePieceRouteList_5__23 )
                sub_1B64324(this);
              if ( v284 >= SLODWORD(v618->fields._slots) )
              {
                p_basePieceBasePieceRouteList_5__23->klass = 0LL;
                sub_1B6406C(p_basePieceBasePieceRouteList_5__23, 0, v2, v3);
                v620 = v664;
                v664->fields.__8__1 = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v620->fields.__8__1, 0, v621, v622);
                v623 = v664;
                *(_QWORD *)&v664->fields._baseSquareIndex_5__10 = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v623->fields._baseSquareIndex_5__10, 0, v624, v625);
                v626 = v664;
                *(_QWORD *)&v664->fields._sumPieceActionCost_5__17 = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v626->fields._sumPieceActionCost_5__17, 0, v627, v628);
                v629 = v664;
                v664->fields._dicBaseDIRange_5__18 = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v629->fields._dicBaseDIRange_5__18, 0, v630, v631);
                v632 = v664;
                v664->fields._dicKeyPutIndexValueTargetData_5__19 = 0LL;
                sub_1B6406C(
                  (ServantStatusBattleListViewItem_o *)&v632->fields._dicKeyPutIndexValueTargetData_5__19,
                  0,
                  v633,
                  v634);
                v635 = v664;
                v664->fields._dicEnemyRange_5__20 = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v635->fields._dicEnemyRange_5__20, 0, v636, v637);
                v638 = v664;
                v664->fields._advantagePieceData_5__21 = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v638->fields._advantagePieceData_5__21, 0, v639, v640);
                v641 = v664;
                v664->fields._basePieceActionPieceRouteList_5__22 = 0LL;
                sub_1B6406C(
                  (ServantStatusBattleListViewItem_o *)&v641->fields._basePieceActionPieceRouteList_5__22,
                  0,
                  v642,
                  v643);
                goto LABEL_44;
              }
              v285 = sub_1B64314(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo, method, v2);
              System_Object___ctor((Il2CppObject *)v285, 0LL);
              v289 = v664->fields._basePieceBasePieceRouteList_5__23;
              if ( !v289 )
                sub_1B64324(v286);
              _7__wrap23_low = SLODWORD(v664->fields.__7__wrap23);
              if ( (unsigned int)_7__wrap23_low >= LODWORD(v289->fields._slots) )
                sub_1B6432C(v286, v287);
              if ( !v285 )
                sub_1B64324(v286);
              *(_DWORD *)(v285 + 16) = *(&v289->fields._count + _7__wrap23_low);
              v291 = (int32_t *)(v285 + 16);
              v292 = (WarBoardAIRoute_RouteData_o *)sub_1B64314(WarBoardAIRoute_RouteData_TypeInfo, v287, v288);
              WarBoardAIRoute_RouteData___ctor(v292, v293);
              routeData = v292;
              if ( !v292 )
                sub_1B64324(this);
              v294 = v664;
              getEnumeratorRetType = v664->fields.__7__wrap8.fields._getEnumeratorRetType;
              v292->fields.baseIndex = getEnumeratorRetType;
              v296 = *v291;
              v292->fields.actionIndex = *v291;
              if ( getEnumeratorRetType == v296 )
              {
                v297 = v294->fields.routeDataList;
                if ( !v297 )
                  sub_1B64324(this);
                if ( v297->fields._size > 0 )
                  goto LABEL_648;
              }
              dicBaseDIRange_5__18 = (System_Collections_Generic_IEnumerable_TSource__o *)v294->fields._dicBaseDIRange_5__18;
              v299 = WarBoardAIRoute___c_TypeInfo;
              if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v299 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_1 = (System_Func_T__TResult__o *)v299->static_fields->__9__47_1;
              if ( !_9__47_1 )
              {
                if ( !v299->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v299);
                  v299 = WarBoardAIRoute___c_TypeInfo;
                }
                v301 = (Il2CppObject *)v299->static_fields->__9;
                _9__47_1 = (System_Func_T__TResult__o *)sub_1B64314(
                                                          System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo,
                                                          method,
                                                          v2);
                System_Func_KeyValuePair_long__object___long____ctor(
                  _9__47_1,
                  v301,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
                  0LL);
                static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
                static_fields->__9__47_1 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)_9__47_1;
                sub_1B6406C(
                  (ServantStatusBattleListViewItem_o *)&static_fields->__9__47_1,
                  (int32_t)_9__47_1,
                  v303,
                  v304);
                v299 = WarBoardAIRoute___c_TypeInfo;
              }
              if ( !v299->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v299);
                v299 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_2 = (System_Func_T__TResult__o *)v299->static_fields->__9__47_2;
              if ( !_9__47_2 )
              {
                if ( !v299->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v299);
                  v299 = WarBoardAIRoute___c_TypeInfo;
                }
                v306 = (Il2CppObject *)v299->static_fields->__9;
                _9__47_2 = (System_Func_T__TResult__o *)sub_1B64314(
                                                          System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo,
                                                          method,
                                                          v2);
                System_Func_KeyValuePair_long__object___object____ctor(
                  _9__47_2,
                  v306,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
                  0LL);
                v307 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v307->__9__47_2 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)_9__47_2;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v307->__9__47_2, (int32_t)_9__47_2, v308, v309);
              }
              v312 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__object___long__object_(
                                                                                                    dicBaseDIRange_5__18,
                                                                                                    (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                                    (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                                    (const MethodInfo_2E718A4 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
              v313 = routeData;
              if ( !routeData )
                sub_1B64324(0LL);
              v314 = *(struct WarBoardSquareData_o **)&v664->fields._baseSquareIndex_5__10;
              routeData->fields.baseSquare = v314;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v313->fields.baseSquare, (int32_t)v314, v310, v311);
              v318 = v664->fields.__8__1;
              if ( !v318 )
                sub_1B64324(v315);
              v319 = routeData;
              if ( !routeData )
                sub_1B64324(0LL);
              v320 = v318->fields.basePiece;
              routeData->fields.basePiece = v320;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v319->fields.basePiece, (int32_t)v320, v316, v317);
              v323 = routeData;
              if ( !routeData )
                sub_1B64324(0LL);
              routeData->fields.actionPiece = 0LL;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v323->fields.actionPiece, 0, v321, v322);
              v324 = routeData;
              v325 = *v291;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              v326 = WarBoardAIManager__GetSquare(v325, 0LL);
              if ( !v324 )
                sub_1B64324(v326);
              v324->fields.actionSquare = v326;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v324->fields.actionSquare, (int32_t)v326, v327, v328);
              dicKeyPutIndexValueTargetData_5__19 = (System_Collections_Generic_Dictionary_uint__int__o *)v664->fields._dicKeyPutIndexValueTargetData_5__19;
              if ( !dicKeyPutIndexValueTargetData_5__19 )
                sub_1B64324(0LL);
              v330 = routeData;
              if ( System_Collections_Generic_Dictionary_uint__int___get_Count(
                     dicKeyPutIndexValueTargetData_5__19,
                     (const MethodInfo_31A8C0C *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0 )
              {
                v333 = 0x7FFFFFFFLL;
                if ( !v330 )
                  goto LABEL_253;
              }
              else
              {
                v331 = (System_Collections_Generic_Dictionary_uint__int__o *)v664->fields._dicKeyPutIndexValueTargetData_5__19;
                if ( !v331 )
                  sub_1B64324(0LL);
                Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                           v331,
                           (const MethodInfo_31A8D6C *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
                v333 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
                if ( !v330 )
LABEL_253:
                  sub_1B64324(v333);
              }
              v330->fields.EnemyRangeMin = v333;
              v334 = v664->fields.__8__1;
              if ( !v334 )
                sub_1B64324(v333);
              if ( !_4__this )
                sub_1B64324(0LL);
              v335 = routeData;
              MoveByTargetDistance = WarBoardAIRoute__GetMoveByTargetDistance(
                                       _4__this,
                                       v312,
                                       *v291,
                                       v334->fields.basePiece,
                                       0LL);
              if ( !v335 )
                sub_1B64324(MoveByTargetDistance);
              v335->fields.dicPutIndexTargetData = MoveByTargetDistance;
              sub_1B6406C(
                (ServantStatusBattleListViewItem_o *)&v335->fields.dicPutIndexTargetData,
                (int32_t)MoveByTargetDistance,
                v337,
                v338);
              v340 = v664->fields.__8__1;
              if ( !v340 )
                sub_1B64324(v339);
              v341 = routeData;
              ActionPiece = WarBoardAIRoute__GetActionPiece(
                              _4__this,
                              v340->fields.basePiece,
                              *v291,
                              v664->fields.piecePlaceData,
                              0LL);
              if ( !v341 )
                sub_1B64324(ActionPiece);
              v341->fields.actionPiece = ActionPiece;
              sub_1B6406C(
                (ServantStatusBattleListViewItem_o *)&v341->fields.actionPiece,
                (int32_t)ActionPiece,
                v343,
                v344);
              v349 = v664->fields.__8__1;
              if ( !v349 )
                sub_1B64324(p_actionPiece);
              v350 = v349->fields.basePiece;
              if ( !v350 )
                sub_1B64324(p_actionPiece);
              if ( v350->fields._nowSquareIndex_k__BackingField == *v291 )
              {
                if ( !routeData )
                  sub_1B64324(0LL);
                p_actionPiece = (ServantStatusBattleListViewItem_o *)&routeData->fields.actionPiece;
                v351 = routeData->fields.actionPiece;
                if ( v351 )
                {
                  if ( v351->fields._uniqueIndex_k__BackingField == v350->fields._uniqueIndex_k__BackingField )
                  {
                    p_actionPiece->klass = 0LL;
                    sub_1B6406C(p_actionPiece, 0, v347, (int32_t)v348);
                    v349 = v664->fields.__8__1;
                    if ( !v349 )
                      sub_1B64324(p_actionPiece);
                  }
                }
              }
              v352 = v349->fields.basePiece;
              if ( !v352 )
                sub_1B64324(p_actionPiece);
              limitActionCount_k__BackingField = v352->fields._limitActionCount_k__BackingField;
              currentActionCount_k__BackingField = v352->fields._currentActionCount_k__BackingField;
              if ( !byte_49F779E )
              {
                sub_1B640C8(&System_Math_TypeInfo, v346);
                byte_49F779E = 1;
              }
              v355 = System_Math_TypeInfo;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v356 = routeData;
              if ( !routeData )
                sub_1B64324(v355);
              v357 = v664;
              v358 = limitActionCount_k__BackingField - currentActionCount_k__BackingField;
              if ( limitActionCount_k__BackingField - currentActionCount_k__BackingField < 0 )
                v358 = currentActionCount_k__BackingField - limitActionCount_k__BackingField;
              routeData->fields.actionCountOnThisTurn = v358 + v664->fields._servantAndEnemyRange_5__14 + 1;
              baseSquare_5__11 = v357->fields._baseSquare_5__11;
              *(_QWORD *)&v356->fields.attackByLinkedEnemy = 0LL;
              v356->fields.flagNow = (int64_t)baseSquare_5__11;
              v360 = v357->fields._warBoardData_5__2;
              if ( !v360 )
                sub_1B64324(0LL);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardData__GetWall(v360, *v291, 0, v348);
              v361 = this;
              if ( this )
              {
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                if ( !this )
                  sub_1B64324(0LL);
                if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.wallAttackCost
                                                                + v664->fields._requiredCost_5__3 )
                  goto LABEL_648;
                v362 = v664->fields.__8__1;
                if ( !v362 )
                  sub_1B64324(this);
                v363 = v362->fields.basePiece;
                if ( !v363 )
                  sub_1B64324(0LL);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableWallAttack(
                                                                     v363,
                                                                     v664->fields._servantAndEnemyMasterRange_5__15,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_648;
                v364 = v664->fields.__8__1;
                if ( !v364 )
                  sub_1B64324(this);
                v365 = v364->fields.basePiece;
                if ( !v365 )
                  sub_1B64324(0LL);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__CheckWallAttackCond(
                                                                     v365,
                                                                     (WarBoardWallData_o *)v361,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_648;
              }
              if ( !routeData )
                sub_1B64324(this);
              v366 = routeData->fields.actionPiece;
              if ( v366 )
              {
                v367 = v664->fields.__8__1;
                if ( !v367 )
                  sub_1B64324(this);
                v368 = v367->fields.basePiece;
                if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsEnemyPiece(v368, v366, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v369 = v664->fields.__8__1;
                  if ( !v369 )
                    sub_1B64324(this);
                  v370 = v369->fields.basePiece;
                  if ( !v370 )
                    sub_1B64324(0LL);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v370, 0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_239;
                  if ( !routeData )
                    sub_1B64324(this);
                  v371 = routeData->fields.actionPiece;
                  if ( !v371 )
                    sub_1B64324(0LL);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v371, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_239:
                    v372 = routeData;
                    if ( !routeData )
                      sub_1B64324(this);
                    v373 = routeData->fields.basePiece;
                    routeData->fields.flagNow |= 2uLL;
                    if ( !v373 )
                      sub_1B64324(this);
                    v374 = v372->fields.actionPiece;
                    v372->fields.attackCountOnThisTurn = v373->fields._attackCount_k__BackingField + 1;
                    if ( !v374 )
                      sub_1B64324(0LL);
                    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isServant(v374, 0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v375 = routeData;
                      if ( !routeData )
                        sub_1B64324(this);
                      v376 = v664->fields.__8__1;
                      if ( !v376 )
                        sub_1B64324(this);
                      v377 = v376->fields.basePiece;
                      if ( !v377 )
                        sub_1B64324(this);
                      battleServant_k__BackingField = v377->fields._battleServant_k__BackingField;
                      if ( !battleServant_k__BackingField )
                        sub_1B64324(0LL);
                      flagNow = routeData->fields.flagNow;
                      ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
                      if ( !routeData )
                        sub_1B64324(ClassId);
                      v381 = routeData->fields.actionPiece;
                      if ( !v381 )
                        sub_1B64324(ClassId);
                      v382 = ClassId;
                      v383 = v381->fields._battleServant_k__BackingField;
                      if ( !v383 )
                        sub_1B64324(0LL);
                      v384 = BattleServantData__getClassId(v383, 0LL);
                      FlagAdvantage = WarBoardAIRoute__GetFlagAdvantage(_4__this, v382, v384, 0LL);
                      v375->fields.flagNow = FlagAdvantage | flagNow;
                      if ( !routeData )
                        sub_1B64324(FlagAdvantage);
                      WarBoardAIRoute__LinkedCount(
                        _4__this,
                        *v291,
                        v664->fields.piecePlaceData,
                        &routeData->fields.attackByLinkedEnemy,
                        &routeData->fields.attackByLinkedAlly,
                        0LL);
                    }
                    break;
                  }
LABEL_648:
                  v283 = v664;
                  v284 = LODWORD(v664->fields.__7__wrap23) + 1;
                  LODWORD(v664->fields.__7__wrap23) = v284;
                  continue;
                }
                if ( !routeData )
                  sub_1B64324(this);
                v386 = routeData->fields.actionPiece;
                if ( !v386 )
                  sub_1B64324(this);
                if ( v386->fields._roleType_k__BackingField == 1 )
                  goto LABEL_648;
                v387 = v664->fields.__8__1;
                if ( !v387 )
                  sub_1B64324(this);
                v388 = v387->fields.basePiece;
                if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsAllyPiece(v388, v386, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !routeData )
                    sub_1B64324(this);
                  routeData->fields.flagNow |= 0x4000000uLL;
                }
              }
              break;
            }
            v389 = routeData;
            if ( !routeData )
              sub_1B64324(this);
            if ( (routeData->fields.flagNow & 2) != 0 )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_1B64324(0LL);
              if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.attackCost
                                                              + v664->fields._requiredCost_5__3 )
                goto LABEL_648;
              v410 = v664->fields.__8__1;
              if ( !v410 )
                sub_1B64324(this);
              v411 = v410->fields.basePiece;
              if ( !v411 )
                sub_1B64324(0LL);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableAttack(
                                                                   v411,
                                                                   v664->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_648;
              v389 = routeData;
              if ( !routeData )
                sub_1B64324(this);
            }
            if ( (v389->fields.flagNow & 2) == 0 )
            {
              v390 = v664->fields.__8__1;
              if ( !v390 )
                sub_1B64324(this);
              v391 = v390->fields.basePiece;
              if ( !v391 )
                sub_1B64324(0LL);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableMoveBySelf(
                                                                   v391,
                                                                   v664->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_648;
              v389 = routeData;
              if ( !routeData )
                sub_1B64324(this);
            }
            if ( (v389->fields.flagNow & 0x4000000) != 0 )
            {
              v392 = v664->fields.__8__1;
              if ( !v392 )
                sub_1B64324(this);
              v393 = (System_Collections_Generic_List_object__o *)v664->fields.routeDataList;
              if ( !v393 )
                sub_1B64324(0LL);
              requiredCost_5__3 = v664->fields._requiredCost_5__3;
              v395 = v392->fields.basePiece;
              v396 = v389->fields.actionPiece;
              v397 = System_Collections_Generic_List_object___AsReadOnly(
                       v393,
                       (const MethodInfo_34AD8FC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIRoute__IsActableReplace(
                                                                   _4__this,
                                                                   v395,
                                                                   v396,
                                                                   requiredCost_5__3,
                                                                   (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v397,
                                                                   v664->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_648;
              v389 = routeData;
            }
            updated = WarBoardAIRoute__UpdatePiecePlaceData(
                        _4__this,
                        v664->fields.piecePlaceData,
                        v389,
                        v664->fields.__7__wrap8.fields._getEnumeratorRetType,
                        *v291,
                        0LL);
            MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(_4__this, updated, 0LL);
            v400 = v664->fields._basePieceActionPieceRouteList_5__22;
            v403 = (System_Func_object__bool__o *)sub_1B64314(
                                                    System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                    v401,
                                                    v402);
            System_Func_object__bool____ctor(
              v403,
              (Il2CppObject *)v285,
              Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
              0LL);
            v404 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__48531816(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v400,
                                          (System_Func_TSource__bool__o *)v403,
                                          (const MethodInfo_2E48968 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)v404 & 1) != 0
              || (v407 = v664->fields._advantagePieceData_5__21,
                  v408 = (System_Func_object__bool__o *)sub_1B64314(
                                                          System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                          v405,
                                                          v406),
                  System_Func_object__bool____ctor(
                    v408,
                    (Il2CppObject *)v285,
                    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
                    0LL),
                  v404 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__48531816(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)v407,
                                                (System_Func_TSource__bool__o *)v408,
                                                (const MethodInfo_2E48968 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___),
                  ((unsigned __int8)v404 & 1) != 0) )
            {
              if ( !routeData )
                sub_1B64324(v404);
              routeData->fields.flagNow |= 0x20000000000uLL;
            }
            if ( v664->fields._masterExists_5__8 )
            {
              if ( v664->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
                goto LABEL_291;
              if ( !routeData )
                sub_1B64324(v404);
              if ( (routeData->fields.flagNow & 0x400) != 0 )
              {
LABEL_291:
                v412 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                         _4__this,
                         updated,
                         MasterSquareIndexFromPlaceData,
                         0LL);
                v404 = WarBoardAIRoute__GetDefenseAreaData(_4__this, MasterSquareIndexFromPlaceData, v412, updated, 0LL);
                v409 = v404;
              }
              else
              {
                v409 = v664->fields._defenseAreaData_5__7;
              }
              if ( !v409 )
                sub_1B64324(v404);
              v413 = _4__this->fields.aiRouteMasterData;
              if ( !v413 )
                sub_1B64324(v404);
              v414 = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                       v409->fields._ShortestRoutes_k__BackingField,
                       updated,
                       v413->fields.masterType == 1,
                       0LL);
              v415 = routeData;
              if ( v414 )
              {
                if ( !routeData )
                  sub_1B64324(v414);
                routeData->fields.flagNow |= 0x40000000uLL;
              }
              else if ( !routeData )
              {
                sub_1B64324(v414);
              }
              v416 = v415->fields.flagNow;
              if ( (v416 & 0x400) != 0 && (v409->fields._Flag_k__BackingField & 0x10000000000LL) != 0 )
                v415->fields.flagNow = v416 | 0x40000000000LL;
            }
            else
            {
              v415 = routeData;
            }
            v417 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                  v405,
                                                                  v406);
            System_Collections_Generic_List_object____ctor(
              v417,
              (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v415 )
              sub_1B64324(v418);
            v415->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v417;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v415->fields.moveByLinkedPiece, (int32_t)v417, v419, v420);
            v424 = routeData;
            if ( !routeData )
              sub_1B64324(v421);
            *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0LL;
            v425 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1B64314(
                                                                           System_Collections_Generic_Dictionary_uint__int__TypeInfo,
                                                                           v422,
                                                                           v423);
            System_Collections_Generic_Dictionary_uint__int____ctor(
              v425,
              (const MethodInfo_31A8594 *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
            v424->fields.dicUniqueKeyRange = v425;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v424->fields.dicUniqueKeyRange, (int32_t)v425, v426, v427);
            v428 = v664->fields.piecePlaceData;
            if ( !v428 )
              sub_1B64324(0LL);
            v648 = updated;
            System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
              &v650,
              v428,
              (const MethodInfo_312F9C0 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
            *(_OWORD *)&v657.fields._dictionary = *(_OWORD *)&v650.fields._dictionary;
            v657.fields._current = v650.fields._current;
            while ( 1 )
            {
              v429 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                       &v657,
                       (const MethodInfo_326C4C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
              if ( !v429 )
                break;
              v431 = v664->fields.__8__1;
              if ( !v431 )
                sub_1B64324(v429);
              v432 = v431->fields.basePiece;
              if ( !v432 )
                sub_1B64324(v429);
              key_high = HIDWORD(v657.fields._current.fields.key);
              if ( v432->fields._uniqueIndex_k__BackingField != HIDWORD(v657.fields._current.fields.key) )
              {
                if ( !routeData )
                  sub_1B64324(v429);
                v434 = (int32_t)v657.fields._current.fields.key;
                dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
                v436 = *v291;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v437 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v436,
                                                                              v434,
                                                                              0,
                                                                              0LL,
                                                                              v430);
                v438 = System_Linq_Enumerable__Count_int_(
                         v437,
                         (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !dicUniqueKeyRange )
                  sub_1B64324(v438);
                System_Collections_Generic_Dictionary_uint__int___Add(
                  dicUniqueKeyRange,
                  key_high,
                  v438,
                  (const MethodInfo_31A8F58 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
              &v657,
              (const MethodInfo_326C5C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
            v441 = routeData;
            v442 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                               System_Collections_Generic_List_int__TypeInfo,
                                                               v439,
                                                               v440);
            System_Collections_Generic_List_int____ctor(
              v442,
              (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v441 )
              sub_1B64324(v443);
            v441->fields.listExistDesignationItem = v442;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&v441->fields.listExistDesignationItem,
              (int32_t)v442,
              v444,
              v445);
            v446 = routeData;
            v449 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B64314(
                                                                           System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                           v447,
                                                                           v448);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v449,
              (const MethodInfo_3114728 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( !v446 )
              sub_1B64324(v450);
            v446->fields.dicMoveByServantGetDesignationItem = v449;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&v446->fields.dicMoveByServantGetDesignationItem,
              (int32_t)v449,
              v451,
              v452);
            v453 = routeData;
            v456 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                              System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo,
                                                                              v454,
                                                                              v455);
            System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
              v456,
              (const MethodInfo_311D2F0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
            if ( !v453 )
              sub_1B64324(v457);
            v453->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)v456;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&v453->fields.dicItemIdKeyIsMoveByServantDesignationItemRange,
              (int32_t)v456,
              v458,
              v459);
            v461 = routeData;
            if ( !routeData )
              sub_1B64324(v460);
            routeData->fields.isMoveByOutOfWarningArea = 0;
            *(_QWORD *)&v461->fields.isMoveByServantAndEnemyRange = 0LL;
            *(_QWORD *)&v461->fields.isMoveByMasterAndEnemyRange = 0LL;
            *(_QWORD *)&v461->fields.isMoveByServantAndAttackAdvantageServantRange = 0LL;
            *(_QWORD *)&v461->fields.isMoveByServantAndDefenseAdvantageServantRange = 0LL;
            *(_QWORD *)&v461->fields.isMoveByServantAndClassAdvantageServantRange = 0LL;
            v462 = v664->fields.__8__1;
            if ( !v462 )
              sub_1B64324(v460);
            v463 = v462->fields.basePiece;
            if ( !v463 )
              sub_1B64324(0LL);
            IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isServant(v463, 0LL);
            if ( IsBlockShortestRouteEnemyAndMaster )
            {
              v468 = v664;
              if ( v664->fields._masterExists_5__8 )
              {
                v469 = v664->fields.__8__1;
                if ( !v469 )
                  sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                v470 = v469->fields.basePiece;
                if ( !v470 )
                  sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                v471 = _4__this->fields.aiRouteMasterData;
                if ( !v471 )
                  sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                if ( v471->fields.masterType != 2
                  || v471->fields.masterPieceIndex != v470->fields._index_k__BackingField )
                {
                  v472 = v664->fields._defenseAreaData_5__7;
                  if ( !v472 )
                    sub_1B64324(0LL);
                  IsBlockShortestRouteEnemyAndMaster = DefenseAreaData__IsInDefenseArea(v472, *v291, 0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                    routeData->fields.flagNow |= 0x4000000000uLL;
                  }
                }
                v473 = v664->fields.__8__1;
                if ( !v473 )
                  sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                v474 = v473->fields.basePiece;
                if ( !v474 )
                  sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                v475 = _4__this->fields.aiRouteMasterData;
                if ( !v475 )
                  sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                v476 = v475->fields.masterType;
                if ( v476 != 2 || v475->fields.masterPieceIndex != v474->fields._index_k__BackingField )
                {
                  IsBlockShortestRouteEnemyAndMaster = WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                                                         v664->fields._defenseAreaData_5__7,
                                                         *v291,
                                                         v476 == 1,
                                                         0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                    routeData->fields.flagNow |= 0x100000000uLL;
                  }
                }
                v468 = v664;
                v477 = v664->fields.__8__1;
                if ( !v477 )
                  sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                v478 = v477->fields.basePiece;
                if ( !v478 )
                  sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                v479 = _4__this->fields.aiRouteMasterData;
                if ( !v479 )
                  sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                if ( v479->fields.masterType != 2
                  || v479->fields.masterPieceIndex != v478->fields._index_k__BackingField )
                {
                  v480 = *v291;
                  if ( *v291 == MasterSquareIndexFromPlaceData )
                  {
                    if ( !routeData )
                      sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                    routeData->fields.isMoveByServantAndMasterRange = 2;
                  }
                  else
                  {
                    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                    v481 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                                  0LL,
                                                                                  v480,
                                                                                  MasterSquareIndexFromPlaceData,
                                                                                  0,
                                                                                  0LL,
                                                                                  v467);
                    v482 = System_Linq_Enumerable__Count_int_(
                             v481,
                             (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
                    v483 = routeData;
                    v484 = WarBoardAIRoute__CalcurateDistanceType(v482, v664->fields._tmpFlagNow_5__12, 0LL);
                    if ( !v483 )
                      sub_1B64324(v484);
                    v483->fields.isMoveByServantAndMasterRange = v484;
                    v468 = v664;
                  }
                }
              }
              v485 = *(System_Collections_Generic_Dictionary_int__int__o **)&v468->fields._sumPieceActionCost_5__17;
              if ( !v485 )
                sub_1B64324(0LL);
              System_Collections_Generic_Dictionary_int__int___GetEnumerator(
                &v650,
                v485,
                (const MethodInfo_311B28C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
              v655 = *(_OWORD *)&v650.fields._dictionary;
              v656 = v650.fields._current;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
                        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v655,
                        (const MethodInfo_32682F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
              {
                v487 = (int32_t)v656.fields.key;
                v488 = HIDWORD(v656.fields.key);
                v489 = *v291;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v490 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v489,
                                                                              v487,
                                                                              0,
                                                                              0LL,
                                                                              v486);
                v491 = System_Linq_Enumerable__Count_int_(
                         v490,
                         (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
                if ( !routeData )
                  sub_1B64324(v491);
                dicItemIdKeyIsMoveByServantDesignationItemRange = (System_Collections_Generic_Dictionary_TKey__TValue__o *)routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
                v493 = WarBoardAIRoute__CalcurateDistanceType(v491, v488, 0LL);
                if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
                  sub_1B64324(v493);
                System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
                  dicItemIdKeyIsMoveByServantDesignationItemRange,
                  v487,
                  v493,
                  (const MethodInfo_311DCA0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
                if ( !routeData )
                  sub_1B64324(v494);
                dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
                if ( !dicMoveByServantGetDesignationItem )
                  sub_1B64324(0LL);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  dicMoveByServantGetDesignationItem,
                  v487,
                  *v291 == v487,
                  (const MethodInfo_3115100 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
                if ( !routeData )
                  sub_1B64324(v496);
                listExistDesignationItem = routeData->fields.listExistDesignationItem;
                if ( !listExistDesignationItem )
                  sub_1B64324(0LL);
                items = listExistDesignationItem->fields._items;
                v499 = Method_System_Collections_Generic_List_int__Add__;
                ++listExistDesignationItem->fields._version;
                if ( !items )
                  sub_1B64324(listExistDesignationItem);
                size = listExistDesignationItem->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    listExistDesignationItem,
                    v487,
                    *(const MethodInfo_348FEDC **)(*(_QWORD *)(v499[4] + 192LL) + 112LL));
                }
                else
                {
                  listExistDesignationItem->fields._size = size + 1;
                  items->m_Items[size + 1] = v487;
                }
              }
              System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v655,
                (const MethodInfo_32683F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
              v502 = *v291;
              enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
              if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
              v504 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                            0LL,
                                                                            v502,
                                                                            enemyMasterSquareIndex,
                                                                            0,
                                                                            0LL,
                                                                            v501);
              v505 = System_Linq_Enumerable__Count_int_(
                       v504,
                       (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
              v506 = routeData;
              v507 = WarBoardAIRoute__CalcurateDistanceType(v505, v664->fields._servantAndMasterRange_5__13, 0LL);
              if ( !v506 )
                sub_1B64324(v507);
              v506->fields.isMoveByServantAndEnemyMasterRange = v507;
              v509 = routeData;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_49FA069 )
              {
                sub_1B640C8(&WarBoardAIManager_TypeInfo, v508);
                byte_49FA069 = 1;
              }
              v510 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v510 = WarBoardAIManager_TypeInfo;
              }
              v511 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v510->static_fields->dicSquareIndexEnemyPiece,
                       HIDWORD(v664->fields._tmpFlagNow_5__12),
                       *v291,
                       0LL);
              if ( !v509 )
                sub_1B64324(v511);
              v509->fields.isMoveByServantAndEnemyRange = v511;
              WarBoardAIRoute__ClassAdvantageDistance(
                _4__this,
                &routeData,
                (WarBoardAIRoute_AdvantagePieceData_o *)v664->fields._dicEnemyRange_5__20,
                *v291,
                0LL);
            }
            v512 = _4__this->fields.aiRouteMasterData;
            if ( !v512 )
              sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
            if ( v512->fields.masterType )
            {
LABEL_486:
              if ( v512->fields.masterType == 2 )
              {
                v515 = v664->fields.__8__1;
                if ( !v515 )
                  sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                v516 = v515->fields.basePiece;
                if ( !v516 )
                  sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                if ( v516->fields._index_k__BackingField == v512->fields.masterPieceIndex )
                  goto LABEL_490;
              }
            }
            else
            {
              v513 = v664->fields.__8__1;
              if ( !v513 )
                sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
              v514 = v513->fields.basePiece;
              if ( !v514 )
                sub_1B64324(0LL);
              IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isMaster(v514, 0LL);
              if ( !IsBlockShortestRouteEnemyAndMaster )
              {
                v512 = _4__this->fields.aiRouteMasterData;
                if ( !v512 )
                  sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                goto LABEL_486;
              }
LABEL_490:
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_49FA069 )
              {
                sub_1B640C8(&WarBoardAIManager_TypeInfo, v465);
                byte_49FA069 = 1;
              }
              v517 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v517 = WarBoardAIManager_TypeInfo;
              }
              dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v517->static_fields->dicSquareIndexEnemyPiece;
              if ( !dicSquareIndexEnemyPiece )
                sub_1B64324(0LL);
              Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                       dicSquareIndexEnemyPiece,
                       (const MethodInfo_3123644 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
              if ( !Keys )
                sub_1B64324(0LL);
              System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
                (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v650,
                Keys,
                (const MethodInfo_33CA744 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
              *(_OWORD *)&v654.fields._dictionary = *(_OWORD *)&v650.fields._dictionary;
              v654.fields._currentKey = v650.fields._current.fields.key;
              while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
                        &v654,
                        (const MethodInfo_326A744 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                currentKey = (int32_t)v654.fields._currentKey;
                v522 = *v291;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v523 = AStarSearch__RouteSearch(0LL, v522, currentKey, 0, 0LL, v520);
                if ( !v523 )
                  sub_1B64324(0LL);
                v524 = _4__this->fields.npcData;
                if ( !v524 )
                  sub_1B64324(v523);
                if ( (signed int)(v523->max_length - 1) <= v524->fields.defenseArea )
                {
                  if ( !routeData )
                    sub_1B64324(v523);
                  routeData->fields.flagNow |= 0x8000000000uLL;
                  break;
                }
              }
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
                &v654,
                (const MethodInfo_326A740 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
              v526 = routeData;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
              if ( !byte_49FA069 )
              {
                sub_1B640C8(&WarBoardAIManager_TypeInfo, v525);
                byte_49FA069 = 1;
              }
              v527 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v527 = WarBoardAIManager_TypeInfo;
              }
              v528 = v664->fields._defenseAreaData_5__7;
              if ( !v528 )
                sub_1B64324(v527);
              v529 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v527->static_fields->dicSquareIndexEnemyPiece,
                       v528->fields._MasterAndEnemyRange_k__BackingField,
                       *v291,
                       0LL);
              if ( !v526 )
                sub_1B64324(v529);
              v526->fields.isMoveByMasterAndEnemyRange = v529;
              if ( !byte_49FA069 )
              {
                sub_1B640C8(&WarBoardAIManager_TypeInfo, v530);
                byte_49FA069 = 1;
              }
              v531 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
                v531 = WarBoardAIManager_TypeInfo;
              }
              v532 = (System_Collections_Generic_Dictionary_int__object__o *)v531->static_fields->dicSquareIndexEnemyPiece;
              if ( !v532 )
                sub_1B64324(0LL);
              System_Collections_Generic_Dictionary_int__object___GetEnumerator(
                &v650,
                v532,
                (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
              v653 = v650;
              do
              {
                v534 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                         &v653,
                         (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
                if ( !v534 )
                  break;
                v535 = (int32_t)v653.fields._current.fields.key;
                v536 = *v291;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
                v537 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v536,
                                                                              v535,
                                                                              0,
                                                                              0LL,
                                                                              v533);
                System_Linq_Enumerable__Count_int_(
                  v537,
                  (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
              }
              while ( WarBoardAIRoute__IsDetour((System_Int32_array *)v537, v664->fields._allyPieceIndexs_5__5, 0LL) );
              System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
                &v653,
                (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( !v534 )
              {
                if ( !routeData )
                  sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
                routeData->fields.flagNow |= 0x1000000000uLL;
              }
            }
            v538 = routeData;
            if ( !routeData )
              sub_1B64324(IsBlockShortestRouteEnemyAndMaster);
            v539 = v648;
            if ( !routeData->fields.actionPiece || (routeData->fields.flagNow & 0x4000000) != 0 )
            {
              v540 = v664->fields._warBoardData_5__2;
              if ( !v540 )
                sub_1B64324(0LL);
              Effect = WarBoardData__GetEffect(v540, *v291, v466);
              if ( Effect )
              {
                if ( !routeData )
                  sub_1B64324(Effect);
                routeData->fields.flagNow |= 0x200000000uLL;
              }
              v544 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                                 System_Collections_Generic_List_int__TypeInfo,
                                                                 v542,
                                                                 v543);
              System_Collections_Generic_List_int____ctor(
                v544,
                (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
              v545 = (System_Collections_Generic_List_object__o *)v664->fields.routeDataList;
              if ( !v545 )
                sub_1B64324(0LL);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v650,
                v545,
                (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
              *(_OWORD *)&v661.fields._list = *(_OWORD *)&v650.fields._dictionary;
              v661.fields._current = v650.fields._current.fields.key;
              while ( 1 )
              {
                v546 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v661,
                         (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
                if ( !v546 )
                  break;
                v547 = v661.fields._current;
                if ( !v661.fields._current )
                  sub_1B64324(v546);
                if ( (BYTE3(v661.fields._current[1].klass) & 8) != 0 )
                {
                  v548 = v661.fields._current[3].klass;
                  if ( !v548 )
                    sub_1B64324(0LL);
                  v549 = WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v548, 0LL);
                  if ( v549 )
                  {
                    if ( !v544 )
                      sub_1B64324(v549);
                    monitor_high = HIDWORD(v547[1].monitor);
                    v551 = v544->fields._items;
                    v552 = Method_System_Collections_Generic_List_int__Add__;
                    ++v544->fields._version;
                    if ( !v551 )
                      sub_1B64324(v549);
                    v553 = v544->fields._size;
                    if ( (unsigned int)v553 >= v551->max_length )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v544,
                        monitor_high,
                        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v552[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v544->fields._size = v553 + 1;
                      v551->m_Items[v553 + 1] = monitor_high;
                    }
                  }
                  if ( (BYTE3(v547[1].klass) & 4) != 0 )
                  {
                    v554 = (WarBoardPieceData_o *)v547[3].klass;
                    if ( !v554 )
                      sub_1B64324(0LL);
                    if ( WarBoardPieceData__get_isMaster(v554, 0LL) )
                    {
                      v555 = (WarBoardPieceData_o *)v547[3].monitor;
                      if ( !v555 )
                        sub_1B64324(0LL);
                      v556 = WarBoardPieceData__get_isServant(v555, 0LL);
                      if ( v556 )
                      {
                        if ( !v544 )
                          sub_1B64324(v556);
                        v557 = (int32_t)v547[1].monitor;
                        v558 = v544->fields._items;
                        v559 = Method_System_Collections_Generic_List_int__Add__;
                        ++v544->fields._version;
                        if ( !v558 )
                          sub_1B64324(v556);
                        v560 = v544->fields._size;
                        if ( (unsigned int)v560 >= v558->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v544,
                            v557,
                            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v559[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v544->fields._size = v560 + 1;
                          v558->m_Items[v560 + 1] = v557;
                        }
                      }
                    }
                  }
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v661,
                (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
              if ( !routeData )
                sub_1B64324(v561);
              v562 = routeData->fields.basePiece;
              if ( !v562 )
                sub_1B64324(0LL);
              v563 = WarBoardPieceData__get_isServant(v562, 0LL);
              if ( v563 )
              {
                if ( !routeData )
                  sub_1B64324(v563);
                CanAcquireItem = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v544, 0LL);
                if ( CanAcquireItem )
                {
                  v565 = routeData;
                  if ( !routeData )
                    sub_1B64324(CanAcquireItem);
                  v566 = routeData->fields.flagNow | 0x18000000;
                  goto LABEL_596;
                }
              }
              else
              {
                if ( !routeData )
                  sub_1B64324(v563);
                v567 = routeData->fields.basePiece;
                if ( !v567 )
                  sub_1B64324(0LL);
                isMaster = WarBoardPieceData__get_isMaster(v567, 0LL);
                if ( isMaster )
                {
                  if ( !routeData )
                    sub_1B64324(isMaster);
                  v569 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v544, 0LL);
                  v570 = routeData;
                  if ( v569 )
                  {
                    if ( !routeData )
                      sub_1B64324(v569);
                    routeData->fields.flagNow |= 0x10000000uLL;
                  }
                  else if ( !routeData )
                  {
                    sub_1B64324(v569);
                  }
                  if ( (v570->fields.flagNow & 0x4000000) != 0 )
                  {
                    v571 = v570->fields.actionPiece;
                    if ( !v571 )
                      sub_1B64324(0LL);
                    v572 = WarBoardPieceData__get_isServant(v571, 0LL);
                    if ( v572 )
                    {
                      if ( !routeData )
                        sub_1B64324(v572);
                      v573 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.baseIndex, v544, 0LL);
                      if ( v573 )
                      {
                        v565 = routeData;
                        if ( !routeData )
                          sub_1B64324(v573);
                        v566 = routeData->fields.flagNow | 0x8000000;
LABEL_596:
                        v565->fields.flagNow = v566;
                      }
                    }
                  }
                }
              }
              WarBoardAIRoute__LinkedPieceCount(_4__this, &routeData, v648, v544, 0LL);
              v538 = routeData;
              if ( !routeData )
                sub_1B64324(v574);
            }
            FlagOutOfWarningAreaToDistance = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                               _4__this,
                                               v538->fields.baseIndex,
                                               v538->fields.actionIndex,
                                               0LL);
            v538->fields.isMoveByOutOfWarningArea = FlagOutOfWarningAreaToDistance;
            v576 = routeData;
            if ( !routeData )
              sub_1B64324(FlagOutOfWarningAreaToDistance);
            evalOffsetMagnification = routeData->fields.evalOffsetMagnification;
            if ( !evalOffsetMagnification )
              sub_1B64324(FlagOutOfWarningAreaToDistance);
            evalOffsetMagnification->fields.isAttack = (routeData->fields.flagNow & 2) != 0;
            v578 = v576->fields.basePiece;
            if ( !v578 )
              sub_1B64324(FlagOutOfWarningAreaToDistance);
            piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields.piecePersonalityDic;
            if ( !piecePersonalityDic )
              sub_1B64324(0LL);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                 piecePersonalityDic,
                                                                 v578->fields._index_k__BackingField,
                                                                 &value,
                                                                 (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v580 = value;
              v581 = (WarBoardAIEvalCalcurater_o *)sub_1B64314(WarBoardAIEvalCalcurater_TypeInfo, method, v2);
              WarBoardAIEvalCalcurater___ctor(v581, (WarBoardAIRoute_PiecePersonality_o *)v580, 0LL);
              if ( !v581 )
                sub_1B64324(v582);
              WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v581, &routeData, 0LL);
              WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
                v581,
                &routeData,
                _4__this->fields.averageBenefitValue,
                0LL);
              if ( !routeData )
                sub_1B64324(0LL);
              WarBoardAIRoute_RouteData__CalcEvalValue(routeData, v583);
              v586 = WarBoardAIRoute___c_TypeInfo;
              v587 = v664->fields.routeDataList;
              if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
                v586 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_5 = (System_Func_object__object__o *)v586->static_fields->__9__47_5;
              if ( !_9__47_5 )
              {
                if ( !v586->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v586);
                  v586 = WarBoardAIRoute___c_TypeInfo;
                  v539 = v648;
                }
                v589 = (Il2CppObject *)v586->static_fields->__9;
                _9__47_5 = (System_Func_object__object__o *)sub_1B64314(
                                                              System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo,
                                                              v584,
                                                              v585);
                System_Func_object__object____ctor(
                  _9__47_5,
                  v589,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__,
                  0LL);
                v590 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v590->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v590->__9__47_5, (int32_t)_9__47_5, v591, v592);
              }
              v593 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v587,
                                                                      (System_Func_TSource__TResult__o *)_9__47_5,
                                                                      (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
              v596 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                    System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo,
                                                                    v594,
                                                                    v595);
              System_Collections_Generic_List_object____ctor_55234504(
                v596,
                v593,
                (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___75684320);
              if ( !v596 )
                sub_1B64324(v597);
              v600 = (Il2CppObject *)routeData;
              v601 = v596->fields._items;
              v602 = Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__;
              ++v596->fields._version;
              if ( !v601 )
                sub_1B64324(v597);
              v603 = v596->fields._size;
              if ( (unsigned int)v603 >= v601->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v596,
                  v600,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v602[4] + 192LL) + 112LL));
              }
              else
              {
                v604 = &v601->obj.klass + v603;
                v596->fields._size = v603 + 1;
                v604[4] = (Il2CppClass *)v600;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v604 + 4), (int32_t)v600, v598, v599);
              }
              v605 = (WarBoardAIRoute_RouteData_o *)BasicHelper__IndexValue_object__48398780(
                                                      (System_Collections_Generic_List_T__o *)v596,
                                                      v596->fields._size - 2,
                                                      0LL,
                                                      (const MethodInfo_2E281BC *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
              route = v605;
              if ( v605 )
              {
                v606 = (int)routeData;
                if ( !routeData )
                  sub_1B64324(v605);
                if ( routeData->fields.basePiece == v605->fields.basePiece )
                {
                  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
                    v581,
                    &route,
                    routeData,
                    0LL);
                  if ( !route )
                    sub_1B64324(0LL);
                  WarBoardAIRoute_RouteData__CalcEvalValue(route, v608);
                }
              }
              allRouteList = (System_Collections_Generic_List_object__o *)_4__this->fields.allRouteList;
              if ( !allRouteList )
                sub_1B64324(0LL);
              v610 = allRouteList->fields._items;
              v611 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++allRouteList->fields._version;
              if ( !v610 )
                sub_1B64324(allRouteList);
              v612 = allRouteList->fields._size;
              if ( (unsigned int)v612 >= v610->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  allRouteList,
                  (Il2CppObject *)v596,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v611[4] + 192LL) + 112LL));
              }
              else
              {
                v613 = &v610->obj.klass + v612;
                allRouteList->fields._size = v612 + 1;
                v613[4] = (Il2CppClass *)v596;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v613 + 4), (int32_t)v596, v606, v607);
              }
              if ( !routeData )
                sub_1B64324(this);
              if ( routeData->fields.baseIndex != routeData->fields.actionIndex && (routeData->fields.flagNow & 2) == 0 )
              {
                searchCount = v664->fields.searchCount;
                if ( searchCount != 1 )
                {
                  v644 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                           _4__this,
                                           v539,
                                           searchCount,
                                           (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v596,
                                           0LL);
                  v645 = v664;
                  v664->fields.__2__current = v644;
                  sub_1B6406C(
                    (ServantStatusBattleListViewItem_o *)&v645->fields.__2__current,
                    (int32_t)v644,
                    v646,
                    v647);
                  result = 1;
                  v664->fields.__1__state = 1;
                  return result;
                }
                dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
                v616 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                         _4__this,
                                         v539,
                                         1,
                                         (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v596,
                                         0LL);
                if ( !routeData )
                  sub_1B64324(v616);
                if ( !dictionaryCreateRouteDataEvalValue )
                  sub_1B64324(v616);
                System_Collections_Generic_Dictionary_object__float___Add(
                  dictionaryCreateRouteDataEvalValue,
                  v616,
                  routeData->fields.evalValue,
                  (const MethodInfo_31825CC *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
              }
            }
            goto LABEL_648;
          }
        }
        WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v664, v137);
        v235 = v664;
        v236 = v664->fields.searchCount;
        v664->fields.__7__wrap8.fields._current = 0u;
        *(_OWORD *)&v235->fields.__7__wrap8.fields._dictionary = 0u;
        if ( v236 != 1 )
          return 0;
        if ( !_4__this )
          sub_1B64324(v232);
        v237 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        v238 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo);
          v238 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__47_6 = (System_Func_T__TResult__o *)v238->static_fields->__9__47_6;
        if ( !_9__47_6 )
        {
          if ( !v238->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v238);
            v238 = WarBoardAIRoute___c_TypeInfo;
          }
          v240 = (Il2CppObject *)v238->static_fields->__9;
          _9__47_6 = (System_Func_T__TResult__o *)sub_1B64314(
                                                    System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo,
                                                    v233,
                                                    v234);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v240,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            0LL);
          v241 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v241->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v241->__9__47_6, (int32_t)_9__47_6, v242, v243);
        }
        v244 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__float___float_(
                 v237,
                 (System_Func_TSource__TKey__o *)_9__47_6,
                 (const MethodInfo_2E63368 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v664->fields._servantAndEnemyMasterRange_5__15 = 0;
        v245 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v245 )
          sub_1B64324(0LL);
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v245,
                  (const MethodInfo_318229C *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v247 = _4__this->fields.npcData;
        if ( !v247 )
          sub_1B64324(Count);
        v248 = v664;
        v249 = (float)((float)v247->fields.calcEllipsis / 100.0) * (float)(int)Count;
        v250 = (int)v249;
        if ( v249 == INFINITY )
          v250 = 0x80000000;
        v664->fields._servantAndEnemyRange_5__14 = v250;
        calcEllipsisMin = v247->fields.calcEllipsisMin;
        if ( calcEllipsisMin <= v250 )
          calcEllipsisMin = v250;
        v248->fields._servantAndEnemyRange_5__14 = calcEllipsisMin;
        if ( !v244 )
          sub_1B64324(Count);
        v252 = v244->klass;
        v253 = *(unsigned __int16 *)(&v244->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v244->klass->_2.bitflags2 + 3) )
        {
          p_offset = &v252->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            --v253;
            p_offset += 4;
            if ( !v253 )
              goto LABEL_112;
          }
          p_method = (__int64)&v252->vtable[*p_offset].method;
        }
        else
        {
LABEL_112:
          p_method = sub_1BB60A8(
                       v244,
                       System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo,
                       0LL);
        }
        v256 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                 v244,
                 *(_QWORD *)(p_method + 8));
        v257 = (ServantStatusBattleListViewItem_o *)&v664->fields.__7__wrap24;
        *(_QWORD *)&v664->fields.__7__wrap24 = v256;
        sub_1B6406C(v257, v256, v258, v259);
        v4 = v664;
        v664->fields.__1__state = -4;
        goto LABEL_117;
      }
    }
    else
    {
      v120 = _4__this->fields.aiRouteMasterData;
      if ( !v120 )
        sub_1B64324(v116);
      if ( v664 )
      {
        v121 = v120->fields.masterType;
        v664->fields._masterExists_5__8 = v121 != 3;
        if ( v121 == 3 )
          goto LABEL_29;
        goto LABEL_25;
      }
    }
    sub_1B64324(v116);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  if ( (byte_49FA096 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, method);
    byte_49FA096 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &this->fields.__7__wrap8,
    (const MethodInfo_326C5C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
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

  if ( (byte_49FA097 & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, method);
    byte_49FA097 = 1;
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
      v7 = sub_1BB60A8(v3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v7)(v3, *(_QWORD *)(v7 + 8));
  }
}


void __fastcall WarBoardAIRoute___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA087 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIRoute___c_TypeInfo, v1);
    byte_49FA087 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardAIRoute___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardAIRoute___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)WarBoardAIRoute___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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

  if ( (byte_49FA088 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1B640C8(&IWarBoardObjectData_TypeInfo, x);
    byte_49FA088 = 1;
  }
  if ( !x )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(x, IWarBoardObjectData_TypeInfo, 2LL);
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
  if ( (byte_49FA089 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__,
      x.fields.key);
    byte_49FA089 = 1;
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
  if ( (byte_49FA08A & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__,
      x.fields.key);
    byte_49FA08A = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, (const MethodInfo *)x.fields.key);
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return WarBoardAIRoute_RouteData__ShallowCopy(x, (const MethodInfo *)x);
}


float __fastcall WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // w19

  value = x.fields.value;
  if ( (byte_49FA08B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__, x.fields.key);
    byte_49FA08B = 1;
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

  if ( (byte_49FA08C & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1B640C8(&IWarBoardObjectData_TypeInfo, x);
    byte_49FA08C = 1;
  }
  if ( !x )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(x, IWarBoardObjectData_TypeInfo, 4LL);
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

  if ( (byte_49FA08D & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1B640C8(&IWarBoardObjectData_TypeInfo, x);
    byte_49FA08D = 1;
  }
  if ( !x )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(x, IWarBoardObjectData_TypeInfo, 5LL);
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
  if ( (byte_49FA08E & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__,
      *(_QWORD *)&x.fields.key);
    byte_49FA08E = 1;
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
    sub_1B64324(this);
  return !WarBoardItemData__get_Acquired(z, 0LL) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_1B64324(this);
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
  if ( (byte_49FA08F & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_1B640C8(&IWarBoardObjectData_TypeInfo, z);
    byte_49FA08F = 1;
  }
  if ( !z )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(z, IWarBoardObjectData_TypeInfo, 0LL);
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
    v12 = sub_1BB60A8(z, IWarBoardObjectData_TypeInfo, 3LL);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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

  if ( (byte_49FA090 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, *(_QWORD *)&square);
    byte_49FA090 = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_1B64324(0LL);
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_312F7D4 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
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
    sub_1B64324(this);
  i = this->fields.i;
  if ( (unsigned int)i >= route->max_length )
    sub_1B6432C(this, *(_QWORD *)&x);
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
    sub_1B64324(this);
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
  if ( (byte_49FA091 & 1) == 0 )
  {
    sub_1B640C8(&AStarSearch_TypeInfo, x);
    this = (WarBoardAIRoute___c__DisplayClass64_0_o *)sub_1B640C8(&IWarBoardObjectData_TypeInfo, v5);
    byte_49FA091 = 1;
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
    p_method = sub_1BB60A8(x, IWarBoardObjectData_TypeInfo, 1LL);
  }
  v12 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  if ( !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
  this = (WarBoardAIRoute___c__DisplayClass64_0_o *)AStarSearch__RouteSearch(0LL, baseSquareIndex, v12, 0, 0LL, v11);
  if ( !this )
LABEL_14:
    sub_1B64324(this);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_T__o *routeDataList; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Func_object__bool__o *v15; // x20

  if ( (byte_49FA092 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, targetObject);
    sub_1B640C8(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__, v6);
    sub_1B640C8(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo, v7);
    byte_49FA092 = 1;
  }
  v8 = sub_1B64314(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo, targetObject, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  *(_QWORD *)(v8 + 16) = targetObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)targetObject, v10, v11);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v15 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v13, v14);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    0LL);
  return BasicHelper__Any_object_(
           routeDataList,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_2E24870 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
  if ( (byte_49FA093 & 1) == 0 )
  {
    sub_1B640C8(&IWarBoardObjectData_TypeInfo, x);
    this = (WarBoardAIRoute___c__DisplayClass65_1_o *)sub_1B640C8(&WarBoardItemData_TypeInfo, v5);
    byte_49FA093 = 1;
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
    p_method = sub_1BB60A8(v4->fields.targetObject, IWarBoardObjectData_TypeInfo, 0LL);
  }
  this = (WarBoardAIRoute___c__DisplayClass65_1_o *)(*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                                      targetObject,
                                                      *(_QWORD *)(p_method + 8));
  if ( baseIndex == (_DWORD)this )
    return 1;
  v14 = v4->fields.targetObject;
  if ( !v14 )
LABEL_25:
    sub_1B64324(this);
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
    v19 = sub_1BB60A8(v14, IWarBoardObjectData_TypeInfo, 0LL);
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
  if ( (byte_49FA094 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass66_0_o *)sub_1B640C8(
                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__,
                                                        x);
    byte_49FA094 = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  value = v4->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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