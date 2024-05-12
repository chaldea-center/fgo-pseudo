void __fastcall WarBoardAIEvalCalcurater___ctor(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_PiecePersonality_o *piecePersonality,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.piecePersonalityList = piecePersonality;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)piecePersonality,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardAIEvalCalcurater__AddRatingBaseOffsetValue(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        WarBoardActionTrendEntity_o *trend,
        const MethodInfo *method)
{
  struct System_Int32_array *actionTypeIds; // x8
  unsigned __int64 v7; // x9
  il2cpp_array_size_t max_length; // w11
  int32_t v9; // w11
  WarBoardAIRoute_RouteData_o *v10; // x11
  __int64 v11; // x12
  __int64 v12; // x0

  if ( !*route
    || (WarBoardAIEvalCalcurater__AddTrendEvalValue(this, (*route)->fields.evalOffsetMagnification, trend, method),
        !trend)
    || (actionTypeIds = trend->fields.actionTypeIds) == 0LL )
  {
LABEL_17:
    sub_B7769C(this, route);
  }
  if ( (int)*(_QWORD *)&actionTypeIds->max_length >= 1 )
  {
    v7 = 0LL;
    max_length = *(_QWORD *)&actionTypeIds->max_length;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v12 = sub_B776C8(this);
        sub_B77668(v12, 0LL);
      }
      v9 = actionTypeIds->m_Items[v7 + 1];
      if ( v9 == 2 )
        break;
      if ( v9 == 1 )
      {
        v10 = *route;
        if ( !*route )
          goto LABEL_17;
        v11 = 4LL;
LABEL_13:
        v10->fields.flagNow |= v11;
      }
      max_length = actionTypeIds->max_length;
      if ( (__int64)++v7 >= (int)max_length )
        return;
    }
    v10 = *route;
    if ( !*route )
      goto LABEL_17;
    v11 = 8LL;
    goto LABEL_13;
  }
}


void __fastcall WarBoardAIEvalCalcurater__AddRatingOffsetAddCondition(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        WarBoardRatingOffsetEntity_o *ratingOffset,
        bool isAdd,
        int32_t category,
        const MethodInfo *method)
{
  if ( category == 1 )
  {
    if ( isAdd )
    {
      if ( !*route || !ratingOffset )
        goto LABEL_18;
      (*route)->fields.moveEvalOffsetAddValue += ratingOffset->fields.addValue;
    }
    if ( !*route || !ratingOffset )
      goto LABEL_18;
    (*route)->fields.sumMoveEvalOffsetAddValue += ratingOffset->fields.addValue;
  }
  else if ( !category )
  {
    if ( isAdd )
    {
      if ( !*route || !ratingOffset )
        goto LABEL_18;
      (*route)->fields.attackEvalOffsetAddValue += ratingOffset->fields.addValue;
    }
    if ( *route && ratingOffset )
    {
      (*route)->fields.sumAttackEvalOffsetAddValue += ratingOffset->fields.addValue;
      return;
    }
LABEL_18:
    sub_B7769C(this, route);
  }
}


void __fastcall WarBoardAIEvalCalcurater__AddTrendEvalValue(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification,
        WarBoardActionTrendEntity_o *trend,
        const MethodInfo *method)
{
  int32_t viewPoint; // w8
  float *p_benMove; // x8

  if ( !trend )
    goto LABEL_10;
  viewPoint = trend->fields.viewPoint;
  if ( viewPoint == 1 )
  {
    if ( evalOffsetMagnification )
    {
      p_benMove = &evalOffsetMagnification->fields.benMove;
      evalOffsetMagnification->fields.benAttack = evalOffsetMagnification->fields.benAttack
                                                + (float)((float)trend->fields.attackValue / 100.0);
      goto LABEL_8;
    }
LABEL_10:
    sub_B7769C(this, evalOffsetMagnification);
  }
  if ( viewPoint )
    return;
  if ( !evalOffsetMagnification )
    goto LABEL_10;
  p_benMove = &evalOffsetMagnification->fields.warMove;
  evalOffsetMagnification->fields.warAttack = evalOffsetMagnification->fields.warAttack
                                            + (float)((float)trend->fields.attackValue / 100.0);
LABEL_8:
  *p_benMove = *p_benMove + (float)((float)trend->fields.moveValue / 100.0);
}


void __fastcall WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        float avgBeneValue,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  struct WarBoardAIRoute_PiecePersonality_o *piecePersonalityList; // x8

  piecePersonalityList = this->fields.piecePersonalityList;
  if ( !piecePersonalityList )
    sub_B7769C(this, route);
  WarBoardAIEvalCalcurater__JudgeRatingOffsetAddCondition(
    this,
    route,
    piecePersonalityList->fields.ratingOffsetList,
    avgBeneValue,
    v4);
}


void __fastcall WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        const MethodInfo *method)
{
  WarBoardAIEvalCalcurater_o *v4; // x20
  struct WarBoardAIRoute_PiecePersonality_o *piecePersonalityList; // x8
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicPutIndexTargetData; // x22
  int64_t TrendKey; // x0
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  Il2CppClass *v16; // x8
  __int64 v17; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *FutureLookingTrendHashSet; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-60h] BYREF
  WarBoardAIRoute_TargetData_o *value; // [xsp+48h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4388FCA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__);
    this = (WarBoardAIEvalCalcurater_o *)sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    byte_4388FCA = 1;
  }
  memset(&v21, 0, sizeof(v21));
  value = 0LL;
  piecePersonalityList = v4->fields.piecePersonalityList;
  if ( !piecePersonalityList
    || (this = (WarBoardAIEvalCalcurater_o *)piecePersonalityList->fields.actionTrandList) == 0LL )
  {
    sub_B7769C(this, route);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v21,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    if ( !v6 )
      break;
    value = 0LL;
    current = v21.fields.current;
    if ( !*route )
      sub_B7769C(v6, v7);
    if ( !v21.fields.current )
      sub_B7769C(v6, v7);
    klass = v21.fields.current[1].klass;
    if ( !klass )
      sub_B7769C(0LL, v7);
    dicPutIndexTargetData = (*route)->fields.dicPutIndexTargetData;
    TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, v7);
    if ( !dicPutIndexTargetData )
      sub_B7769C(TrendKey, TrendKey);
    System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___TryGetValue(
      dicPutIndexTargetData,
      TrendKey,
      &value,
      (const MethodInfo_2FCFC78 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
    if ( WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
           v4,
           *route,
           (WarBoardAIRoute_ActionTrendInfo_o *)current,
           value,
           v12) )
    {
      WarBoardAIEvalCalcurater__AddRatingBaseOffsetValue(
        v4,
        route,
        (WarBoardActionTrendEntity_o *)current[1].klass,
        v13);
      v16 = current[1].klass;
      if ( !v16 )
        sub_B7769C(v14, v15);
      if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)&v16->_1.this_arg.bits, 0LL) )
      {
        if ( !*route )
          sub_B7769C(0LL, v17);
        FutureLookingTrendHashSet = WarBoardAIRoute_RouteData__get_FutureLookingTrendHashSet(*route, 0LL);
        if ( !FutureLookingTrendHashSet )
          sub_B7769C(0LL, v19);
        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
          (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)FutureLookingTrendHashSet,
          (WarBoardAIRoute_RouteData_o *)current,
          (const MethodInfo_2EE361C *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        WarBoardAIRoute_RouteData_o *futureRoute,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *FutureLookingTrendHashSet; // x0
  int v8; // w25
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *monitor; // x0
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  WarBoardAIRoute_ActionTrendInfo_o *current; // x22
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicPutIndexTargetData; // x23
  int64_t TrendKey; // x0
  const MethodInfo *v18; // x4
  _BOOL8 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  WarBoardAIRoute_RouteData_o *v22; // x8
  BattleServantConfConponent_o *p_futureEvalOffsetMag; // x23
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *v24; // x24
  _BOOL8 IsAttack; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  int v34; // w23
  int v35; // w20
  _BYTE v36[32]; // [xsp+10h] [xbp-C0h] BYREF
  int v37; // [xsp+30h] [xbp-A0h]
  WarBoardAIRoute_TargetData_o *value; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v40; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4388FCB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    sub_B775C4(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    byte_4388FCB = 1;
  }
  memset(&v40, 0, sizeof(v40));
  memset(&v39, 0, sizeof(v39));
  value = 0LL;
  v37 = 0;
  FutureLookingTrendHashSet = *route;
  if ( !*route )
    goto LABEL_39;
  if ( !WarBoardAIRoute_RouteData__HasFutureTrend(FutureLookingTrendHashSet, 0LL) )
    return;
  FutureLookingTrendHashSet = *route;
  if ( !*route || !futureRoute )
    goto LABEL_39;
  if ( FutureLookingTrendHashSet->fields.basePiece != futureRoute->fields.basePiece )
    return;
  FutureLookingTrendHashSet = (WarBoardAIRoute_RouteData_o *)WarBoardAIRoute_RouteData__get_FutureLookingTrendHashSet(
                                                               FutureLookingTrendHashSet,
                                                               0LL);
  if ( !FutureLookingTrendHashSet )
LABEL_39:
    sub_B7769C(FutureLookingTrendHashSet, route);
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)v36,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)FutureLookingTrendHashSet,
    (const MethodInfo_2EE2F48 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v8 = 0;
  v40 = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v36;
  while ( 1 )
  {
    v9 = System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
           &v40,
           (const MethodInfo_225C0B0 *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    if ( !v9 )
      break;
    if ( !v40.fields._current )
      sub_B7769C(v9, v10);
    monitor = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v40.fields._current[2].monitor;
    if ( !monitor )
      sub_B7769C(0LL, v10);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v36,
      monitor,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v39 = *(System_Collections_Generic_List_Enumerator_T__o *)v36;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v39,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
      if ( !v12 )
        break;
      current = (WarBoardAIRoute_ActionTrendInfo_o *)v39.fields.current;
      if ( !v39.fields.current )
        sub_B7769C(v12, v13);
      klass = v39.fields.current[1].klass;
      if ( !klass )
        sub_B7769C(0LL, v13);
      dicPutIndexTargetData = futureRoute->fields.dicPutIndexTargetData;
      TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, v13);
      if ( !dicPutIndexTargetData )
        sub_B7769C(TrendKey, TrendKey);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___TryGetValue(
        dicPutIndexTargetData,
        TrendKey,
        &value,
        (const MethodInfo_2FCFC78 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
      v19 = WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(this, futureRoute, current, value, v18);
      if ( v19 )
      {
        v22 = *route;
        if ( !*route )
          sub_B7769C(v19, v20);
        p_futureEvalOffsetMag = (BattleServantConfConponent_o *)&v22->fields.futureEvalOffsetMag;
        if ( !v22->fields.futureEvalOffsetMag )
        {
          v24 = (WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)sub_B77694(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
          WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(v24, 0LL);
          IsAttack = WarBoardAIRoute_RouteData__get_IsAttack(futureRoute, 0LL);
          if ( !v24 )
            sub_B7769C(IsAttack, v26);
          v24->fields.isAttack = IsAttack;
          p_futureEvalOffsetMag->klass = (BattleServantConfConponent_c *)v24;
          sub_B77560(p_futureEvalOffsetMag, (System_Int32_array **)v24, v27, v28, v29, v30, v31, v32);
          v22 = *route;
          if ( !*route )
            sub_B7769C(v19, v33);
        }
        WarBoardAIEvalCalcurater__AddTrendEvalValue(
          (WarBoardAIEvalCalcurater_o *)v19,
          v22->fields.futureEvalOffsetMag,
          current->fields._Entity_k__BackingField,
          v21);
      }
    }
    *(_DWORD *)&v36[4 * v8 + 24] = 189;
    v34 = ++v37;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v39,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    v8 = 0;
    if ( v34 )
    {
      v8 = v34;
      if ( *(_DWORD *)&v36[4 * v34 + 20] == 189 )
      {
        v8 = v34 - 1;
        v37 = v34 - 1;
      }
    }
  }
  *(_DWORD *)&v36[4 * v8 + 24] = 217;
  v35 = ++v37;
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v40,
    (const MethodInfo_225C0AC *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
  if ( v35 && *(_DWORD *)&v36[4 * v35 + 20] == 217 )
    v37 = v35 - 1;
}


void __fastcall WarBoardAIEvalCalcurater__JudgeRatingOffsetAddCondition(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList,
        float avgBeneValue,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **current; // x1
  WarBoardRatingOffsetEntity_o **v17; // x20
  WarBoardAIManager_c *HasFlag; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x5
  WarBoardRatingOffsetEntity_o *v21; // x2
  char v22; // w8
  WarBoardRatingOffsetEntity_o *v23; // x9
  int32_t attackByLinkedEnemy; // w8
  struct System_Collections_Generic_Dictionary_uint__int__o *v25; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v26; // x23
  struct System_Collections_Generic_Dictionary_uint__int__o *v27; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v28; // x23
  WarBoardPieceData_o *v29; // x0
  struct WarBoardPieceData_o *v30; // x8
  struct BattleServantData_o *v31; // x8
  _BOOL4 v32; // w8
  struct WarBoardPieceData_o *v33; // x21
  WarBoardRatingOffsetEntity_o *v34; // x8
  float v35; // s0
  int v36; // w9
  WarBoardPieceData_o *v37; // x0
  WarBoardPieceData_o *v38; // x0
  WarBoardPieceData_o *v39; // x0
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v41; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v42; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v43; // x23
  WarBoardPieceData_o *v44; // x0
  struct WarBoardPieceData_o *v45; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardRatingOffsetEntity_o *v47; // x9
  int32_t np; // w8
  WarBoardPieceData_o *v49; // x0
  int32_t moveByLinkedEnemy; // w8
  bool v51; // zf
  struct WarBoardPieceData_o *actionPiece; // x21
  WarBoardAIManager_c *v53; // x0
  WarBoardPieceData_o *v54; // x0
  int32_t breakPointMax_k__BackingField; // w21
  int32_t breakPoint_k__BackingField; // w22
  int v57; // w9
  WarBoardAIRoute_RouteData_o *v58; // x8
  struct WarBoardPieceData_o *basePiece; // x21
  bool v60; // cc
  struct WarBoardPieceData_o *v61; // x21
  WarBoardAIManager_c *v62; // x0
  WarBoardPieceData_o *v63; // x0
  int32_t v64; // w21
  int32_t v65; // w22
  WarBoardPieceData_o *v66; // x0
  WarBoardPieceData_o *v67; // x0
  WarBoardPieceData_o *v68; // x0
  WarBoardPieceData_o *v69; // x0
  WarBoardAIRoute_RouteData_o *v70; // x8
  struct System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v72; // x23
  struct System_Collections_Generic_Dictionary_uint__int__o *v73; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v74; // x23
  WarBoardPieceData_o *v75; // x0
  WarBoardPieceData_o *v76; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v77; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v78; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v79; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v80; // x23
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4388FCD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__get_Current__);
    sub_B775C4(&Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
    sub_B775C4(&System_Func_KeyValuePair_uint__int___bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__);
    sub_B775C4(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__);
    sub_B775C4(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__);
    sub_B775C4(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__);
    sub_B775C4(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__);
    sub_B775C4(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__);
    sub_B775C4(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__);
    sub_B775C4(&WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo);
    this = (WarBoardAIEvalCalcurater_o *)sub_B775C4(&WarBoardAIManager_TypeInfo);
    byte_4388FCD = 1;
  }
  memset(&v82, 0, sizeof(v82));
  if ( !*route || !ratingOffsetList )
    sub_B7769C(this, route);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v81,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ratingOffsetList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__);
  v82 = v81;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v82,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__) )
  {
    v7 = sub_B77694(WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo);
    WarBoardAIEvalCalcurater___c__DisplayClass9_0___ctor((WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)v7, 0LL);
    if ( !v7 )
      sub_B7769C(v8, v9);
    current = (System_Int32_array **)v82.fields.current;
    *(_QWORD *)(v7 + 16) = v82.fields.current;
    v17 = (WarBoardRatingOffsetEntity_o **)(v7 + 16);
    sub_B77560((BattleServantConfConponent_o *)(v7 + 16), current, v10, v11, v12, v13, v14, v15);
    v21 = *(WarBoardRatingOffsetEntity_o **)(v7 + 16);
    if ( !v21 )
      sub_B7769C(HasFlag, v19);
    v22 = 1;
    switch ( v21->fields.type )
    {
      case 0:
        break;
      case 1:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v23 = *v17;
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
        attackByLinkedEnemy = (*route)->fields.attackByLinkedEnemy;
        goto LABEL_167;
      case 2:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v23 = *v17;
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
        attackByLinkedEnemy = (*route)->fields.attackByLinkedAlly;
        goto LABEL_167;
      case 3:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        goto LABEL_217;
      case 4:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        goto LABEL_248;
      case 5:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        actionPiece = (*route)->fields.actionPiece;
        v53 = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !actionPiece )
          sub_B7769C(v53, v19);
        if ( !*route )
          sub_B7769C(v53, v19);
        v54 = (*route)->fields.actionPiece;
        if ( !v54 )
          sub_B7769C(0LL, v19);
        breakPoint_k__BackingField = actionPiece->fields._breakPoint_k__BackingField;
        breakPointMax_k__BackingField = actionPiece->fields._breakPointMax_k__BackingField;
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v54, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
          v34 = *v17;
          if ( !*v17 )
            sub_B7769C(HasFlag, v19);
          v35 = (float)(breakPoint_k__BackingField + 1) / (float)(breakPointMax_k__BackingField + 1);
          v57 = v34->fields.value / 100;
LABEL_148:
          if ( v35 <= (float)v57 )
            goto LABEL_149;
        }
        goto LABEL_235;
      case 6:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v61 = (*route)->fields.actionPiece;
        v62 = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !v61 )
          sub_B7769C(v62, v19);
        if ( !*route )
          sub_B7769C(v62, v19);
        v63 = (*route)->fields.actionPiece;
        if ( !v63 )
          sub_B7769C(0LL, v19);
        v65 = v61->fields._breakPoint_k__BackingField;
        v64 = v61->fields._breakPointMax_k__BackingField;
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v63, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        v34 = *v17;
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
        v35 = (float)(v65 + 1) / (float)(v64 + 1);
        v36 = v34->fields.value / 100;
LABEL_36:
        if ( v35 >= (float)v36 )
          goto LABEL_235;
LABEL_149:
        v60 = v35 < (float)(v34->fields.value2 / 100);
        goto LABEL_210;
      case 7:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v49 = (*route)->fields.actionPiece;
        if ( !v49 )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isMaster(v49, 0LL);
        goto LABEL_217;
      case 8:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v67 = (*route)->fields.actionPiece;
        if ( !v67 )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isMaster(v67, 0LL);
        goto LABEL_248;
      case 9:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v39 = (*route)->fields.actionPiece;
        if ( !v39 )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v39, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        goto LABEL_217;
      case 0xA:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v66 = (*route)->fields.actionPiece;
        if ( !v66 )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v66, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        goto LABEL_217;
      case 0xB:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v37 = (*route)->fields.actionPiece;
        if ( !v37 )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v37, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000LL, 0LL);
        goto LABEL_217;
      case 0xC:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v38 = (*route)->fields.actionPiece;
        if ( !v38 )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v38, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000LL, 0LL);
        v22 = (unsigned __int8)HasFlag ^ 1;
        goto LABEL_237;
      case 0xD:
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        basePiece = (*route)->fields.basePiece;
        HasFlag = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !basePiece )
          sub_B7769C(HasFlag, v19);
        v34 = *v17;
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
        v35 = (float)(basePiece->fields._breakPoint_k__BackingField + 1)
            / (float)(basePiece->fields._breakPointMax_k__BackingField + 1);
        v57 = v34->fields.value / 100;
        goto LABEL_148;
      case 0xE:
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v33 = (*route)->fields.basePiece;
        HasFlag = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !v33 )
          sub_B7769C(HasFlag, v19);
        v34 = *v17;
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
        v35 = (float)(v33->fields._breakPoint_k__BackingField + 1)
            / (float)(v33->fields._breakPointMax_k__BackingField + 1);
        v36 = v34->fields.value / 100;
        goto LABEL_36;
      case 0xF:
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v44 = (*route)->fields.basePiece;
        if ( !v44 )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v44, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v45 = (*route)->fields.basePiece;
        if ( !v45 )
          sub_B7769C(HasFlag, v19);
        battleServant_k__BackingField = v45->fields._battleServant_k__BackingField;
        if ( !battleServant_k__BackingField )
          sub_B7769C(HasFlag, v19);
        v47 = *v17;
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
        np = battleServant_k__BackingField->fields.np;
        goto LABEL_209;
      case 0x10:
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v29 = (*route)->fields.basePiece;
        if ( !v29 )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v29, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v30 = (*route)->fields.basePiece;
        if ( !v30 )
          sub_B7769C(HasFlag, v19);
        v31 = v30->fields._battleServant_k__BackingField;
        if ( !v31 )
          sub_B7769C(HasFlag, v19);
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
        v32 = v31->fields.np < (*v17)->fields.value;
        goto LABEL_236;
      case 0x11:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        moveByLinkedEnemy = (*route)->fields.moveByLinkedEnemy;
        goto LABEL_123;
      case 0x12:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v58 = *route;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v23 = *v17;
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
        goto LABEL_166;
      case 0x13:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v70 = *route;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v47 = *v17;
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
        goto LABEL_208;
      case 0x14:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        moveByLinkedEnemy = (*route)->fields.moveByLinkedAlly;
LABEL_123:
        v51 = moveByLinkedEnemy == 0;
        goto LABEL_168;
      case 0x15:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v58 = *route;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v23 = *v17;
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
LABEL_166:
        attackByLinkedEnemy = v58->fields.moveByLinkedEnemy;
LABEL_167:
        v51 = attackByLinkedEnemy == v23->fields.value;
LABEL_168:
        v32 = v51;
        goto LABEL_236;
      case 0x16:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v70 = *route;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v47 = *v17;
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
LABEL_208:
        np = v70->fields.moveByLinkedEnemy;
LABEL_209:
        v60 = np < v47->fields.value;
LABEL_210:
        v32 = !v60;
        goto LABEL_236;
      case 0x17:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        dicUniqueKeyRange = (*route)->fields.dicUniqueKeyRange;
        v72 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B77694(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v72,
          (Il2CppObject *)v7,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__,
          (const MethodInfo_29DC9F0 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)dicUniqueKeyRange,
                                           (System_Func_TSource__bool__o *)v72,
                                           (const MethodInfo_1D1E958 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_217;
      case 0x18:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v42 = (*route)->fields.dicUniqueKeyRange;
        v43 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B77694(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v43,
          (Il2CppObject *)v7,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__,
          (const MethodInfo_29DC9F0 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v42,
                                           (System_Func_TSource__bool__o *)v43,
                                           (const MethodInfo_1D1E958 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_217;
      case 0x19:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
        dicMoveByServantGetDesignationItem = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !dicMoveByServantGetDesignationItem )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                           dicMoveByServantGetDesignationItem,
                                           (*v17)->fields.value,
                                           (const MethodInfo_2F74F68 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
        v41 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v41 )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                           v41,
                                           (*v17)->fields.value,
                                           (const MethodInfo_2F74C30 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        goto LABEL_217;
      case 0x1A:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
        v77 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v77 )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                           v77,
                                           (*v17)->fields.value,
                                           (const MethodInfo_2F74F68 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_249;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
        v78 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v78 )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                           v78,
                                           (*v17)->fields.value,
                                           (const MethodInfo_2F74C30 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        goto LABEL_248;
      case 0x1B:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v25 = (*route)->fields.dicUniqueKeyRange;
        v26 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B77694(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v26,
          (Il2CppObject *)v7,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__,
          (const MethodInfo_29DC9F0 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                           (System_Func_TSource__bool__o *)v26,
                                           (const MethodInfo_1D1E958 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v27 = (*route)->fields.dicUniqueKeyRange;
        v28 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B77694(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v28,
          (Il2CppObject *)v7,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__,
          (const MethodInfo_29DC9F0 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                                           (System_Func_TSource__bool__o *)v28,
                                           (const MethodInfo_1D1E958 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_252;
      case 0x1C:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v73 = (*route)->fields.dicUniqueKeyRange;
        v74 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B77694(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v74,
          (Il2CppObject *)v7,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__,
          (const MethodInfo_29DC9F0 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v73,
                                           (System_Func_TSource__bool__o *)v74,
                                           (const MethodInfo_1D1E958 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v79 = (*route)->fields.dicUniqueKeyRange;
        v80 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B77694(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v80,
          (Il2CppObject *)v7,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__,
          (const MethodInfo_29DC9F0 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v79,
                                           (System_Func_TSource__bool__o *)v80,
                                           (const MethodInfo_1D1E958 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_252;
      case 0x1D:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v75 = (*route)->fields.basePiece;
        if ( !v75 )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v75, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_249;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v76 = (*route)->fields.actionPiece;
        if ( !v76 )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v76, 0LL);
        goto LABEL_217;
      case 0x1E:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
          if ( !*route )
            sub_B7769C(HasFlag, v19);
          v68 = (*route)->fields.basePiece;
          if ( !v68 )
            sub_B7769C(0LL, v19);
          HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v68, 0LL);
          if ( ((unsigned __int8)HasFlag & 1) != 0 )
          {
LABEL_235:
            v32 = 0;
          }
          else
          {
            if ( !*route )
              sub_B7769C(HasFlag, v19);
            v69 = (*route)->fields.actionPiece;
            if ( !v69 )
              sub_B7769C(0LL, v19);
            HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v69, 0LL);
LABEL_248:
            v32 = ((unsigned __int8)HasFlag & 1) == 0;
          }
        }
        else
        {
LABEL_249:
          v32 = 1;
        }
        goto LABEL_236;
      case 0x1F:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(HasFlag, v19);
        v32 = (*route)->fields.moveByLinkedItem > 0;
        goto LABEL_236;
      case 0x20:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x10000000LL, 0LL);
LABEL_217:
        v32 = (unsigned __int8)HasFlag & 1;
LABEL_236:
        v22 = v32;
        goto LABEL_237;
      case 0x21:
        if ( !*route )
          sub_B7769C(0LL, v19);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
LABEL_222:
          v22 = 0;
        }
        else
        {
          if ( !*route )
            sub_B7769C(0LL, v19);
          HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x200000000LL, 0LL);
LABEL_252:
          v22 = (char)HasFlag;
        }
LABEL_237:
        v21 = *v17;
        if ( !*v17 )
          sub_B7769C(HasFlag, v19);
        return;
      default:
        v22 = 0;
        break;
    }
    WarBoardAIEvalCalcurater__AddRatingOffsetAddCondition(
      (WarBoardAIEvalCalcurater_o *)HasFlag,
      route,
      v21,
      v22 & 1,
      v21->fields.category,
      v20);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v82,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__);
}


bool __fastcall WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o *route,
        WarBoardAIRoute_ActionTrendInfo_o *actionTrend,
        WarBoardAIRoute_TargetData_o *targetData,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x5
  int klass; // w8
  WarBoardAIEvalCalcurater_o *v10; // x22
  int v11; // w24
  WarBoardActionTrendConditionEntity_o *v12; // x23
  struct System_Int32_array *conditionTypes; // x25
  __int64 v14; // x8
  unsigned __int64 v15; // x26
  int32_t v16; // w3
  __int64 v17; // x0

  if ( !actionTrend
    || (this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(actionTrend, 0LL)) == 0LL )
  {
LABEL_24:
    sub_B7769C(this, route);
  }
  klass = (int)this[1].klass;
  v10 = this;
  if ( klass >= 1 )
  {
    v11 = 0;
    this = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)klass )
        goto LABEL_23;
      v12 = (WarBoardActionTrendConditionEntity_o *)*((_QWORD *)&v10[1].monitor + v11);
      if ( !v12 )
        goto LABEL_24;
      conditionTypes = v12->fields.conditionTypes;
      if ( !conditionTypes )
        goto LABEL_24;
      v14 = *(_QWORD *)&conditionTypes->max_length;
      if ( (int)v14 >= 1 )
        break;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_22;
LABEL_20:
      klass = (int)v10[1].klass;
      ++v11;
      this = (WarBoardAIEvalCalcurater_o *)(&dword_0 + 1);
      if ( v11 >= klass )
        return (char)this;
    }
    v15 = 0LL;
    while ( v15 < (unsigned int)v14 )
    {
      v16 = conditionTypes->m_Items[v15 + 1];
      if ( actionTrend->fields._HasTargetIndividualityCond_k__BackingField )
      {
        if ( v16 <= 77 )
        {
          if ( (v16 & 0xFFFFFFFE) == 76 )
            goto LABEL_20;
        }
        else if ( (unsigned int)(v16 - 111) < 2 )
        {
          goto LABEL_20;
        }
      }
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIEvalCalcurater__JudgeSatisfyingTrendCondition(
                                             this,
                                             route,
                                             v12,
                                             v16,
                                             targetData,
                                             v8);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_20;
      LODWORD(v14) = conditionTypes->max_length;
      if ( (__int64)++v15 >= (int)v14 )
        goto LABEL_22;
    }
LABEL_23:
    v17 = sub_B776C8(this);
    sub_B77668(v17, 0LL);
  }
LABEL_22:
  LOBYTE(this) = 0;
  return (char)this;
}


bool __fastcall WarBoardAIEvalCalcurater__JudgeSatisfyingTrendCondition(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o *route,
        WarBoardActionTrendConditionEntity_o *condition,
        int32_t condType,
        WarBoardAIRoute_TargetData_o *targetData,
        const MethodInfo *method)
{
  bool v10; // zf
  bool v11; // zf
  int64_t v12; // x1
  int64_t v13; // x1
  int32_t isMoveByMasterAndEnemyRange; // w8
  int32_t isMoveByServantAndEnemyRange; // w8
  int32_t isMoveByServantAndMasterRange; // w8
  bool isMaster; // w0
  int32_t max_length; // w8
  WarBoardPieceData_o *targetPiece; // x20
  WarBoardPieceData_o *v20; // x19
  WarBoardPieceData_o *detourRoute; // x0
  int32_t v22; // w8
  struct System_Int32_array *v23; // x8
  WarBoardPieceData_o *v24; // x20
  WarBoardPieceData_o *v25; // x21
  int32_t EnemyRangeMin; // w8
  struct System_Int32_array *v27; // x8
  bool v28; // cc
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  int32_t v30; // w19
  bool v31; // cc
  int32_t v32; // w9
  _BOOL4 isAround; // w8
  bool v34; // cc
  struct System_Int32_array *baseRoute; // x8
  _BOOL4 ExistEnemyOnBaseRoute_k__BackingField; // w8
  WarBoardPieceData_o *v37; // x20
  WarBoardPieceData_o *v38; // x19
  int32_t attackCountOnThisTurn; // w8
  WarBoardPieceData_o *actionPiece; // x20
  WarBoardPieceData_o *basePiece; // x21
  WarBoardPieceData_o *v42; // x20
  WarBoardPieceData_o *v43; // x19
  struct System_Int32_array *v44; // x8
  struct System_Int32_array *v45; // x8
  WarBoardPieceData_o *v46; // x20
  WarBoardPieceData_o *v47; // x19
  int32_t v48; // w19
  struct System_Int32_array *v49; // x8
  int32_t actionCountOnThisTurn; // w8
  struct System_Int32_array *v51; // x8
  struct System_Int32_array *v52; // x8
  struct System_Int32_array *v53; // x8
  int32_t actionIndex; // w9
  struct System_Int32_array *v55; // x8
  __int64 v57; // x0
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v59[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4388FCC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    this = (WarBoardAIEvalCalcurater_o *)sub_B775C4(&WarBoardAIManager_TypeInfo);
    byte_4388FCC = 1;
  }
  *(_QWORD *)v59 = 0LL;
  value = 0;
  switch ( condType )
  {
    case 1:
      if ( !route )
        goto LABEL_426;
      v12 = 16LL;
      goto LABEL_420;
    case 2:
      if ( !route )
        goto LABEL_426;
      v13 = 16LL;
      goto LABEL_423;
    case 3:
      if ( !route )
        goto LABEL_426;
      v12 = 64LL;
      goto LABEL_420;
    case 4:
      if ( !route )
        goto LABEL_426;
      v13 = 64LL;
      goto LABEL_423;
    case 5:
      if ( !route )
        goto LABEL_426;
      v12 = 0x4000000LL;
      goto LABEL_420;
    case 6:
      if ( !route )
        goto LABEL_426;
      v13 = 0x4000000LL;
      goto LABEL_423;
    case 7:
      if ( !route )
        goto LABEL_426;
      v12 = 1024LL;
      goto LABEL_420;
    case 8:
      if ( !route )
        goto LABEL_426;
      v13 = 1024LL;
      goto LABEL_423;
    case 9:
      if ( !route )
        goto LABEL_426;
      v12 = 0x8000000000LL;
      goto LABEL_420;
    case 10:
      if ( !route )
        goto LABEL_426;
      v13 = 0x8000000000LL;
      goto LABEL_423;
    case 11:
      if ( !route )
        goto LABEL_426;
      v12 = 2048LL;
      goto LABEL_420;
    case 12:
      if ( !route )
        goto LABEL_426;
      v13 = 2048LL;
      goto LABEL_423;
    case 13:
      if ( !route )
        goto LABEL_426;
      v12 = 0x4000000000LL;
      goto LABEL_420;
    case 14:
      if ( !route )
        goto LABEL_426;
      v13 = 0x4000000000LL;
      goto LABEL_423;
    case 15:
      if ( !route )
        goto LABEL_426;
      v12 = 256LL;
      goto LABEL_420;
    case 16:
      if ( !route )
        goto LABEL_426;
      v13 = 256LL;
      goto LABEL_423;
    case 17:
      if ( !route )
        goto LABEL_426;
      v12 = 512LL;
      goto LABEL_420;
    case 18:
      if ( !route )
        goto LABEL_426;
      v13 = 512LL;
      goto LABEL_423;
    case 19:
      if ( !route )
        goto LABEL_426;
      v12 = 4096LL;
      goto LABEL_420;
    case 20:
      if ( !route )
        goto LABEL_426;
      v13 = 4096LL;
      goto LABEL_423;
    case 21:
      if ( !route )
        goto LABEL_426;
      v12 = 0x2000LL;
      goto LABEL_420;
    case 22:
      if ( !route )
        goto LABEL_426;
      v13 = 0x2000LL;
      goto LABEL_423;
    case 23:
      if ( !route )
        goto LABEL_426;
      if ( !condition )
        goto LABEL_426;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.listExistDesignationItem;
      if ( !this )
        goto LABEL_426;
      LOBYTE(detourRoute) = System_Collections_Generic_List_int___Contains(
                              (System_Collections_Generic_List_int__o *)this,
                              condition->fields.value,
                              (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
      return (unsigned __int8)detourRoute & 1;
    case 24:
      if ( !route )
        goto LABEL_426;
      if ( !condition )
        goto LABEL_426;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.listExistDesignationItem;
      if ( !this )
        goto LABEL_426;
      isMaster = System_Collections_Generic_List_int___Contains(
                   (System_Collections_Generic_List_int__o *)this,
                   condition->fields.value,
                   (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
      goto LABEL_424;
    case 25:
      if ( !route )
        goto LABEL_426;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByMasterAndEnemyRange;
      goto LABEL_405;
    case 26:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndEnemyRange = route->fields.isMoveByMasterAndEnemyRange;
      goto LABEL_408;
    case 27:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndMasterRange = route->fields.isMoveByMasterAndEnemyRange;
      goto LABEL_356;
    case 28:
      if ( !route )
        goto LABEL_426;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndEnemyRange;
      goto LABEL_405;
    case 29:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndEnemyRange;
      goto LABEL_408;
    case 30:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndEnemyRange;
      goto LABEL_356;
    case 31:
      if ( !route )
        goto LABEL_426;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndMasterRange;
      goto LABEL_405;
    case 32:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndMasterRange;
      goto LABEL_408;
    case 33:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndMasterRange;
      goto LABEL_356;
    case 34:
      if ( !route )
        goto LABEL_426;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndClassAdvantageServantRange;
      goto LABEL_405;
    case 35:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndClassAdvantageServantRange;
      goto LABEL_408;
    case 36:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndClassAdvantageServantRange;
      goto LABEL_356;
    case 37:
      if ( !route )
        goto LABEL_426;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndClassDisAdvantageServantRange;
      goto LABEL_405;
    case 38:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndClassDisAdvantageServantRange;
      goto LABEL_408;
    case 39:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndClassDisAdvantageServantRange;
      goto LABEL_356;
    case 40:
      if ( !route )
        goto LABEL_426;
      if ( !condition )
        goto LABEL_426;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
      if ( !this )
        goto LABEL_426;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___TryGetValue(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)this,
              condition->fields.value,
              &v59[1],
              (const MethodInfo_2FEE530 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_392;
      isMoveByMasterAndEnemyRange = v59[1];
      goto LABEL_405;
    case 41:
      if ( !route )
        goto LABEL_426;
      if ( !condition )
        goto LABEL_426;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
      if ( !this )
        goto LABEL_426;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___TryGetValue(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)this,
              condition->fields.value,
              v59,
              (const MethodInfo_2FEE530 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_392;
      isMoveByServantAndEnemyRange = v59[0];
      goto LABEL_408;
    case 42:
      if ( !route )
        goto LABEL_426;
      if ( !condition )
        goto LABEL_426;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
      if ( !this )
        goto LABEL_426;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___TryGetValue(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)this,
              condition->fields.value,
              &value,
              (const MethodInfo_2FEE530 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_392;
      isMoveByServantAndMasterRange = value;
      goto LABEL_356;
    case 43:
      if ( !route )
        goto LABEL_426;
      v12 = 0x4000LL;
      goto LABEL_420;
    case 44:
      if ( !route )
        goto LABEL_426;
      v13 = 0x4000LL;
      goto LABEL_423;
    case 45:
      if ( !route )
        goto LABEL_426;
      v12 = 0x8000LL;
      goto LABEL_420;
    case 46:
      if ( !route )
        goto LABEL_426;
      v13 = 0x8000LL;
      goto LABEL_423;
    case 47:
      if ( !route )
        goto LABEL_426;
      v12 = 0x10000LL;
      goto LABEL_420;
    case 48:
      if ( !route )
        goto LABEL_426;
      v13 = 0x10000LL;
      goto LABEL_423;
    case 49:
      if ( !route )
        goto LABEL_426;
      v12 = 0x20000LL;
      goto LABEL_420;
    case 50:
      if ( !route )
        goto LABEL_426;
      v13 = 0x20000LL;
      goto LABEL_423;
    case 51:
      if ( !route )
        goto LABEL_426;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndAttackAdvantageServantRange;
      goto LABEL_405;
    case 52:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndAttackAdvantageServantRange;
      goto LABEL_408;
    case 53:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndAttackAdvantageServantRange;
      goto LABEL_356;
    case 54:
      if ( !route )
        goto LABEL_426;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndAttackDisAdvantageServantRange;
      goto LABEL_405;
    case 55:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndAttackDisAdvantageServantRange;
      goto LABEL_408;
    case 56:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndAttackDisAdvantageServantRange;
      goto LABEL_356;
    case 57:
      if ( !route )
        goto LABEL_426;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndDefenseAdvantageServantRange;
      goto LABEL_405;
    case 58:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndDefenseAdvantageServantRange;
      goto LABEL_408;
    case 59:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndDefenseAdvantageServantRange;
      goto LABEL_356;
    case 60:
      if ( !route )
        goto LABEL_426;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndDefenseDisAdvantageServantRange;
      goto LABEL_405;
    case 61:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndDefenseDisAdvantageServantRange;
      goto LABEL_408;
    case 62:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndDefenseDisAdvantageServantRange;
      goto LABEL_356;
    case 63:
      if ( !route )
        goto LABEL_426;
      v12 = 128LL;
      goto LABEL_420;
    case 64:
      if ( !route )
        goto LABEL_426;
      v13 = 128LL;
      goto LABEL_423;
    case 65:
      if ( !route )
        goto LABEL_426;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndEnemyMasterRange;
      goto LABEL_405;
    case 66:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndEnemyMasterRange;
      goto LABEL_408;
    case 67:
      if ( !route )
        goto LABEL_426;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndEnemyMasterRange;
      goto LABEL_356;
    case 68:
      if ( !route )
        goto LABEL_426;
      actionPiece = route->fields.actionPiece;
      if ( !actionPiece )
        goto LABEL_392;
      basePiece = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      if ( !WarBoardAIManager__IsEnemyPiece(basePiece, actionPiece, (const MethodInfo *)condition) )
        goto LABEL_392;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.actionPiece;
      if ( !this )
        goto LABEL_426;
      LOBYTE(detourRoute) = WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)this, 0LL);
      return (unsigned __int8)detourRoute & 1;
    case 69:
      if ( !route )
        goto LABEL_426;
      v24 = route->fields.actionPiece;
      if ( !v24 )
        goto LABEL_392;
      v25 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      if ( !WarBoardAIManager__IsEnemyPiece(v25, v24, (const MethodInfo *)condition) )
        goto LABEL_392;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.actionPiece;
      if ( !this )
        goto LABEL_426;
      isMaster = WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)this, 0LL);
      goto LABEL_424;
    case 70:
      if ( !route )
        goto LABEL_426;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_ActionType(detourRoute, 0LL);
      if ( !condition )
        goto LABEL_426;
LABEL_379:
      v11 = (_DWORD)this == condition->fields.value;
      goto LABEL_409;
    case 71:
      if ( !route || !condition )
        goto LABEL_426;
      actionCountOnThisTurn = route->fields.actionCountOnThisTurn;
      goto LABEL_370;
    case 72:
      if ( !route || !condition )
        goto LABEL_426;
      attackCountOnThisTurn = route->fields.actionCountOnThisTurn;
      goto LABEL_346;
    case 73:
      if ( !route || !condition )
        goto LABEL_426;
      v22 = route->fields.actionCountOnThisTurn;
      goto LABEL_160;
    case 74:
    case 127:
      v10 = targetData == 0LL;
      goto LABEL_362;
    case 75:
    case 128:
      v11 = targetData == 0LL;
      goto LABEL_409;
    case 76:
      if ( !targetData )
        goto LABEL_392;
      targetPiece = targetData->fields.targetPiece;
      if ( !targetPiece )
        goto LABEL_392;
      if ( !route )
        goto LABEL_426;
      v20 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      LOBYTE(detourRoute) = WarBoardAIManager__IsEnemyPiece(v20, targetPiece, (const MethodInfo *)condition);
      return (unsigned __int8)detourRoute & 1;
    case 77:
      if ( !targetData )
        goto LABEL_392;
      v42 = targetData->fields.targetPiece;
      if ( !v42 )
        goto LABEL_274;
      if ( !route )
        goto LABEL_426;
      v43 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      isMaster = WarBoardAIManager__IsEnemyPiece(v43, v42, (const MethodInfo *)condition);
      goto LABEL_424;
    case 78:
      if ( !targetData )
        goto LABEL_392;
      isAround = targetData->fields.isAround;
      goto LABEL_361;
    case 79:
      if ( !targetData )
        goto LABEL_392;
      ExistEnemyOnBaseRoute_k__BackingField = targetData->fields.isAround;
      goto LABEL_277;
    case 80:
      if ( !targetData )
        goto LABEL_392;
      goto LABEL_305;
    case 81:
      if ( targetData )
        goto LABEL_239;
      goto LABEL_392;
    case 82:
      if ( !targetData )
        goto LABEL_392;
      goto LABEL_355;
    case 83:
      if ( !targetData )
        goto LABEL_392;
      detourRoute = (WarBoardPieceData_o *)targetData->fields.detourRoute;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v48 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)detourRoute,
              (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
      this = (WarBoardAIEvalCalcurater_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
                                             (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_426;
      v31 = v48 - (int)this <= condition->fields.value;
      goto LABEL_184;
    case 84:
      if ( !targetData )
        goto LABEL_392;
      v29 = (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.detourRoute;
      if ( !v29 )
        goto LABEL_274;
      v30 = System_Linq_Enumerable__Count_int_(
              v29,
              (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
      this = (WarBoardAIEvalCalcurater_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
                                             (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_426;
      v28 = v30 - (int)this <= condition->fields.value;
      goto LABEL_123;
    case 85:
      if ( !targetData )
        goto LABEL_392;
      v49 = targetData->fields.detourRoute;
      if ( !v49 )
        goto LABEL_392;
      if ( v49->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v49->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
LABEL_305:
      isMoveByMasterAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_405;
    case 86:
      if ( !targetData )
        goto LABEL_392;
      v23 = targetData->fields.detourRoute;
      if ( !v23 )
        goto LABEL_392;
      if ( v23->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v23->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
LABEL_239:
      isMoveByServantAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_408;
    case 87:
      if ( !targetData )
        goto LABEL_392;
      v55 = targetData->fields.detourRoute;
      if ( !v55 )
        goto LABEL_392;
      if ( v55->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v55->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
LABEL_355:
      isMoveByServantAndMasterRange = targetData->fields.moveByDistanceType;
      goto LABEL_356;
    case 88:
      if ( !route )
        goto LABEL_426;
      v12 = 0x20000000LL;
      goto LABEL_420;
    case 89:
      if ( !route )
        goto LABEL_426;
      v13 = 0x20000000LL;
      goto LABEL_423;
    case 90:
      if ( !route )
        goto LABEL_426;
      v12 = 0x40000000LL;
      goto LABEL_420;
    case 91:
      if ( !route )
        goto LABEL_426;
      v13 = 0x40000000LL;
      goto LABEL_423;
    case 92:
      if ( !route )
        goto LABEL_426;
      v12 = 0x80000000LL;
      goto LABEL_420;
    case 93:
      if ( !route )
        goto LABEL_426;
      v13 = 0x80000000LL;
      goto LABEL_423;
    case 94:
      if ( !route )
        goto LABEL_426;
      v12 = 0x100000000LL;
      goto LABEL_420;
    case 95:
      if ( !route )
        goto LABEL_426;
      v13 = 0x100000000LL;
      goto LABEL_423;
    case 96:
      if ( !targetData )
        goto LABEL_392;
      isAround = targetData->fields._ExistEnemyOnBaseRoute_k__BackingField;
LABEL_361:
      v10 = !isAround;
      goto LABEL_362;
    case 97:
      if ( !targetData )
        goto LABEL_392;
      ExistEnemyOnBaseRoute_k__BackingField = targetData->fields._ExistEnemyOnBaseRoute_k__BackingField;
LABEL_277:
      v11 = !ExistEnemyOnBaseRoute_k__BackingField;
      goto LABEL_409;
    case 98:
      if ( !route || !condition )
        goto LABEL_426;
      EnemyRangeMin = route->fields.EnemyRangeMin;
      goto LABEL_182;
    case 99:
      if ( !route || !condition )
        goto LABEL_426;
      max_length = route->fields.EnemyRangeMin;
      goto LABEL_122;
    case 100:
      if ( !route )
        goto LABEL_426;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_RouteData__HasFlag(route, 2LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_392;
      if ( !condition )
        goto LABEL_426;
      actionCountOnThisTurn = route->fields.attackCountOnThisTurn;
LABEL_370:
      actionIndex = condition->fields.value;
      goto LABEL_371;
    case 101:
      if ( !route )
        goto LABEL_426;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_RouteData__HasFlag(route, 2LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_392;
      if ( !condition )
        goto LABEL_426;
      attackCountOnThisTurn = route->fields.attackCountOnThisTurn;
LABEL_346:
      v34 = attackCountOnThisTurn < condition->fields.value;
LABEL_347:
      LOBYTE(detourRoute) = !v34;
      return (unsigned __int8)detourRoute & 1;
    case 102:
      if ( !route )
        goto LABEL_426;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_RouteData__HasFlag(route, 2LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_392;
      if ( !condition )
        goto LABEL_426;
      v22 = route->fields.attackCountOnThisTurn;
LABEL_160:
      v32 = condition->fields.value;
      goto LABEL_183;
    case 103:
      if ( !route )
        goto LABEL_426;
      v12 = 0x400000000LL;
      goto LABEL_420;
    case 104:
      if ( !route )
        goto LABEL_426;
      v13 = 0x400000000LL;
      goto LABEL_423;
    case 105:
      if ( !route )
        goto LABEL_426;
      v12 = 0x800000000LL;
      goto LABEL_420;
    case 106:
      if ( !route )
        goto LABEL_426;
      v13 = 0x800000000LL;
      goto LABEL_423;
    case 107:
      if ( !route )
        goto LABEL_426;
      v12 = 0x1000000000LL;
      goto LABEL_420;
    case 108:
      if ( !route )
        goto LABEL_426;
      v13 = 0x1000000000LL;
      goto LABEL_423;
    case 109:
      if ( !route )
        goto LABEL_426;
      v12 = 0x2000000000LL;
      goto LABEL_420;
    case 110:
      if ( !route )
        goto LABEL_426;
      v13 = 0x2000000000LL;
      goto LABEL_423;
    case 111:
      if ( !targetData )
        goto LABEL_392;
      v37 = targetData->fields.targetPiece;
      if ( !v37 )
        goto LABEL_392;
      if ( !route )
        goto LABEL_426;
      v38 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      LOBYTE(detourRoute) = WarBoardAIManager__IsAllyPiece(v38, v37, (const MethodInfo *)condition);
      return (unsigned __int8)detourRoute & 1;
    case 112:
      if ( !targetData )
        goto LABEL_392;
      v46 = targetData->fields.targetPiece;
      if ( !v46 )
        goto LABEL_274;
      if ( !route )
        goto LABEL_426;
      v47 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      isMaster = WarBoardAIManager__IsAllyPiece(v47, v46, (const MethodInfo *)condition);
LABEL_424:
      LOBYTE(detourRoute) = !isMaster;
      return (unsigned __int8)detourRoute & 1;
    case 113:
      if ( !targetData )
        goto LABEL_392;
      v53 = targetData->fields.detourRoute;
      if ( !v53 )
        goto LABEL_392;
      if ( v53->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      actionCountOnThisTurn = v53->m_Items[2];
      actionIndex = route->fields.actionIndex;
LABEL_371:
      v11 = actionCountOnThisTurn == actionIndex;
      goto LABEL_409;
    case 114:
      if ( !targetData )
        goto LABEL_392;
      v52 = targetData->fields.detourRoute;
      if ( !v52 )
        goto LABEL_392;
      if ( v52->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      v10 = v52->m_Items[2] == route->fields.actionIndex;
LABEL_362:
      LOBYTE(detourRoute) = !v10;
      return (unsigned __int8)detourRoute & 1;
    case 115:
      if ( !route )
        goto LABEL_426;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v11 = WarBoardPieceData__get_ActionType(detourRoute, 0LL) == 1;
      goto LABEL_409;
    case 116:
      if ( !route )
        goto LABEL_426;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v11 = WarBoardPieceData__get_ActionType(detourRoute, 0LL) == 2;
      goto LABEL_409;
    case 117:
      if ( !route )
        goto LABEL_426;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v11 = WarBoardPieceData__get_ActionType(detourRoute, 0LL) == 3;
      goto LABEL_409;
    case 118:
      if ( !route )
        goto LABEL_426;
      v12 = 0x10000000000LL;
      goto LABEL_420;
    case 119:
      if ( !route )
        goto LABEL_426;
      v13 = 0x10000000000LL;
      goto LABEL_423;
    case 120:
      if ( !route )
        goto LABEL_426;
      v12 = 0x20000000000LL;
      goto LABEL_420;
    case 121:
      if ( !route )
        goto LABEL_426;
      v13 = 0x20000000000LL;
      goto LABEL_423;
    case 122:
      if ( !targetData )
        goto LABEL_392;
      v44 = targetData->fields.detourRoute;
      if ( !v44 )
        goto LABEL_392;
      if ( v44->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v44->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
      isMoveByMasterAndEnemyRange = targetData->fields.detourMoveByDistanceType;
LABEL_405:
      v11 = isMoveByMasterAndEnemyRange == 1;
      goto LABEL_409;
    case 123:
      if ( !targetData )
        goto LABEL_392;
      v51 = targetData->fields.detourRoute;
      if ( !v51 )
        goto LABEL_392;
      if ( v51->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v51->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
      isMoveByServantAndEnemyRange = targetData->fields.detourMoveByDistanceType;
LABEL_408:
      v11 = isMoveByServantAndEnemyRange == 3;
      goto LABEL_409;
    case 124:
      if ( !targetData )
        goto LABEL_392;
      v45 = targetData->fields.detourRoute;
      if ( !v45 )
        goto LABEL_392;
      if ( v45->max_length <= 1 )
      {
LABEL_428:
        v57 = sub_B776C8(this);
        sub_B77668(v57, 0LL);
      }
      if ( !route )
        goto LABEL_426;
      if ( v45->m_Items[2] == route->fields.actionIndex )
      {
        isMoveByServantAndMasterRange = targetData->fields.detourMoveByDistanceType;
LABEL_356:
        v11 = isMoveByServantAndMasterRange == 2;
LABEL_409:
        LOBYTE(detourRoute) = v11;
      }
      else
      {
LABEL_392:
        LOBYTE(detourRoute) = 0;
      }
      break;
    case 125:
      if ( !route )
        goto LABEL_426;
      v12 = 0x40000000000LL;
LABEL_420:
      LOBYTE(detourRoute) = WarBoardAIRoute_RouteData__HasFlag(route, v12, 0LL);
      return (unsigned __int8)detourRoute & 1;
    case 126:
      if ( !route )
        goto LABEL_426;
      v13 = 0x40000000000LL;
LABEL_423:
      isMaster = WarBoardAIRoute_RouteData__HasFlag(route, v13, 0LL);
      goto LABEL_424;
    case 129:
      if ( !condition )
        goto LABEL_426;
      if ( !targetData )
        goto LABEL_392;
      baseRoute = targetData->fields.baseRoute;
      if ( !baseRoute )
        goto LABEL_426;
      EnemyRangeMin = baseRoute->max_length;
LABEL_182:
      v32 = condition->fields.value;
      v22 = EnemyRangeMin - 1;
LABEL_183:
      v31 = v22 <= v32;
LABEL_184:
      LOBYTE(detourRoute) = v31;
      break;
    case 130:
      if ( !condition )
        goto LABEL_426;
      if ( !targetData )
        goto LABEL_274;
      v27 = targetData->fields.baseRoute;
      if ( !v27 )
LABEL_426:
        sub_B7769C(this, route);
      max_length = v27->max_length;
LABEL_122:
      v28 = max_length - 1 <= condition->fields.value;
LABEL_123:
      LOBYTE(detourRoute) = !v28;
      break;
    case 131:
      if ( !route )
        goto LABEL_427;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.basePiece;
      if ( !this )
        goto LABEL_427;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_survivalTurn((WarBoardPieceData_o *)this, 0LL);
      if ( !condition )
        goto LABEL_427;
      goto LABEL_379;
    case 132:
      if ( !route )
        goto LABEL_427;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.basePiece;
      if ( !this )
        goto LABEL_427;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_survivalTurn((WarBoardPieceData_o *)this, 0LL);
      if ( !condition )
        goto LABEL_427;
      v34 = (int)this < condition->fields.value;
      goto LABEL_347;
    case 133:
      if ( !route )
        goto LABEL_427;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.basePiece;
      if ( !this )
        goto LABEL_427;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_survivalTurn((WarBoardPieceData_o *)this, 0LL);
      if ( !condition )
        goto LABEL_427;
      v31 = (int)this <= condition->fields.value;
      goto LABEL_184;
    case 134:
      if ( !route )
        goto LABEL_427;
      LOBYTE(detourRoute) = WarBoardAIRoute_RouteData__get_notAction(route, 0LL);
      return (unsigned __int8)detourRoute & 1;
    case 135:
      if ( !route )
        goto LABEL_427;
      isMaster = WarBoardAIRoute_RouteData__get_notAction(route, 0LL);
      goto LABEL_424;
    case 136:
      if ( route )
      {
        this = (WarBoardAIEvalCalcurater_o *)route->fields.baseSquare;
        if ( this )
          goto LABEL_263;
      }
      goto LABEL_427;
    case 137:
      if ( !route )
        goto LABEL_427;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.baseSquare;
      if ( !this )
        goto LABEL_427;
      goto LABEL_201;
    case 138:
      LOBYTE(detourRoute) = WarBoardAiTrendCondJudger__IsReplaceTarget(route, targetData, (const MethodInfo *)condition);
      return (unsigned __int8)detourRoute & 1;
    case 139:
      isMaster = WarBoardAiTrendCondJudger__IsReplaceTarget(route, targetData, (const MethodInfo *)condition);
      goto LABEL_424;
    case 140:
      if ( !route )
        goto LABEL_427;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByOutOfWarningArea;
      goto LABEL_405;
    case 141:
      if ( !route )
        goto LABEL_427;
      isMoveByServantAndEnemyRange = route->fields.isMoveByOutOfWarningArea;
      goto LABEL_408;
    case 142:
      if ( !route )
        goto LABEL_427;
      isMoveByServantAndMasterRange = route->fields.isMoveByOutOfWarningArea;
      goto LABEL_356;
    case 143:
      if ( !route )
        goto LABEL_427;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.actionSquare;
      if ( !this )
        goto LABEL_427;
LABEL_263:
      LOBYTE(detourRoute) = WarBoardSquareData__IsFlag((WarBoardSquareData_o *)this, 1, 0LL);
      return (unsigned __int8)detourRoute & 1;
    case 144:
      if ( !route || (this = (WarBoardAIEvalCalcurater_o *)route->fields.actionSquare) == 0LL )
LABEL_427:
        sub_B7769C(this, route);
LABEL_201:
      isMaster = WarBoardSquareData__IsFlag((WarBoardSquareData_o *)this, 1, 0LL);
      goto LABEL_424;
    default:
LABEL_274:
      LOBYTE(detourRoute) = 1;
      break;
  }
  return (unsigned __int8)detourRoute & 1;
}


void __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___ctor(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__0(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v4; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v4 = this;
  if ( (byte_4388EFF & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_4388EFF = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7769C)(this, x);
  return value - 1 == ratingOffset->fields.value;
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__1(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v4; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v4 = this;
  if ( (byte_4388F00 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_4388F00 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7769C)(this, x);
  return value - 1 >= ratingOffset->fields.value;
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__2(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v4; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v4 = this;
  if ( (byte_4388F01 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_4388F01 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7769C)(this, x);
  return ratingOffset->fields.value2 >= value - 1;
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__3(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v4; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v4 = this;
  if ( (byte_4388F02 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_4388F02 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7769C)(this, x);
  return value - 1 == ratingOffset->fields.value;
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__4(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v4; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v4 = this;
  if ( (byte_4388F03 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_4388F03 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7769C)(this, x);
  return ratingOffset->fields.value2 >= value - 1;
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__5(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v4; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v4 = this;
  if ( (byte_4388F04 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_4388F04 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7769C)(this, x);
  return value - 1 >= ratingOffset->fields.value;
}