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
  sub_B2C2F8(
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
    sub_B2C434(this, route);
  }
  if ( (int)*(_QWORD *)&actionTypeIds->max_length >= 1 )
  {
    v7 = 0LL;
    max_length = *(_QWORD *)&actionTypeIds->max_length;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
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
    sub_B2C434(this, route);
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
    sub_B2C434(this, evalOffsetMagnification);
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
    sub_B2C434(this, route);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct WarBoardAIRoute_PiecePersonality_o *piecePersonalityList; // x8
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicPutIndexTargetData; // x22
  int64_t TrendKey; // x0
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x3
  __int64 v19; // x0
  __int64 v20; // x1
  Il2CppClass *v21; // x8
  __int64 v22; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *FutureLookingTrendHashSet; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF
  WarBoardAIRoute_TargetData_o *value; // [xsp+48h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4186753 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__, route);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__, v8);
    this = (WarBoardAIEvalCalcurater_o *)sub_B2C35C(
                                           &Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__,
                                           v9);
    byte_4186753 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  value = 0LL;
  piecePersonalityList = v4->fields.piecePersonalityList;
  if ( !piecePersonalityList
    || (this = (WarBoardAIEvalCalcurater_o *)piecePersonalityList->fields.actionTrandList) == 0LL )
  {
    sub_B2C434(this, route);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    if ( !v11 )
      break;
    value = 0LL;
    current = v26.fields.current;
    if ( !*route )
      sub_B2C434(v11, v12);
    if ( !v26.fields.current )
      sub_B2C434(v11, v12);
    klass = v26.fields.current[1].klass;
    if ( !klass )
      sub_B2C434(0LL, v12);
    dicPutIndexTargetData = (*route)->fields.dicPutIndexTargetData;
    TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, v12);
    if ( !dicPutIndexTargetData )
      sub_B2C434(TrendKey, TrendKey);
    System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___TryGetValue(
      dicPutIndexTargetData,
      TrendKey,
      &value,
      (const MethodInfo_2E5AF58 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
    if ( WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
           v4,
           *route,
           (WarBoardAIRoute_ActionTrendInfo_o *)current,
           value,
           v17) )
    {
      WarBoardAIEvalCalcurater__AddRatingBaseOffsetValue(
        v4,
        route,
        (WarBoardActionTrendEntity_o *)current[1].klass,
        v18);
      v21 = current[1].klass;
      if ( !v21 )
        sub_B2C434(v19, v20);
      if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)&v21->_1.this_arg.bits, 0LL) )
      {
        if ( !*route )
          sub_B2C434(0LL, v22);
        FutureLookingTrendHashSet = WarBoardAIRoute_RouteData__get_FutureLookingTrendHashSet(*route, 0LL);
        if ( !FutureLookingTrendHashSet )
          sub_B2C434(0LL, v24);
        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
          (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)FutureLookingTrendHashSet,
          (WarBoardAIRoute_RouteData_o *)current,
          (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        WarBoardAIRoute_RouteData_o *futureRoute,
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
  WarBoardAIRoute_RouteData_o *FutureLookingTrendHashSet; // x0
  int v17; // w25
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *monitor; // x0
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x1
  WarBoardAIRoute_ActionTrendInfo_o *current; // x22
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicPutIndexTargetData; // x23
  int64_t TrendKey; // x0
  const MethodInfo *v27; // x4
  _BOOL8 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  WarBoardAIRoute_RouteData_o *v31; // x8
  BattleServantConfConponent_o *p_futureEvalOffsetMag; // x23
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *v33; // x24
  _BOOL8 IsAttack; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x1
  int v43; // w23
  int v44; // w20
  _BYTE v45[32]; // [xsp+10h] [xbp-C0h] BYREF
  int v46; // [xsp+30h] [xbp-A0h]
  WarBoardAIRoute_TargetData_o *value; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v49; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4186754 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__, route);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__, v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__,
      v12);
    sub_B2C35C(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__, v15);
    byte_4186754 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  memset(&v48, 0, sizeof(v48));
  value = 0LL;
  v46 = 0;
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
    sub_B2C434(FutureLookingTrendHashSet, route);
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)v45,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)FutureLookingTrendHashSet,
    (const MethodInfo_2D8C544 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v17 = 0;
  v49 = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v45;
  while ( 1 )
  {
    v18 = System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
            &v49,
            (const MethodInfo_20E9DBC *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    if ( !v18 )
      break;
    if ( !v49.fields._current )
      sub_B2C434(v18, v19);
    monitor = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v49.fields._current[2].monitor;
    if ( !monitor )
      sub_B2C434(0LL, v19);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v45,
      monitor,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v48 = *(System_Collections_Generic_List_Enumerator_T__o *)v45;
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v48,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
      if ( !v21 )
        break;
      current = (WarBoardAIRoute_ActionTrendInfo_o *)v48.fields.current;
      if ( !v48.fields.current )
        sub_B2C434(v21, v22);
      klass = v48.fields.current[1].klass;
      if ( !klass )
        sub_B2C434(0LL, v22);
      dicPutIndexTargetData = futureRoute->fields.dicPutIndexTargetData;
      TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, v22);
      if ( !dicPutIndexTargetData )
        sub_B2C434(TrendKey, TrendKey);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___TryGetValue(
        dicPutIndexTargetData,
        TrendKey,
        &value,
        (const MethodInfo_2E5AF58 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
      v28 = WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(this, futureRoute, current, value, v27);
      if ( v28 )
      {
        v31 = *route;
        if ( !*route )
          sub_B2C434(v28, v29);
        p_futureEvalOffsetMag = (BattleServantConfConponent_o *)&v31->fields.futureEvalOffsetMag;
        if ( !v31->fields.futureEvalOffsetMag )
        {
          v33 = (WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)sub_B2C42C(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
          WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(v33, 0LL);
          IsAttack = WarBoardAIRoute_RouteData__get_IsAttack(futureRoute, 0LL);
          if ( !v33 )
            sub_B2C434(IsAttack, v35);
          v33->fields.isAttack = IsAttack;
          p_futureEvalOffsetMag->klass = (BattleServantConfConponent_c *)v33;
          sub_B2C2F8(p_futureEvalOffsetMag, (System_Int32_array **)v33, v36, v37, v38, v39, v40, v41);
          v31 = *route;
          if ( !*route )
            sub_B2C434(v28, v42);
        }
        WarBoardAIEvalCalcurater__AddTrendEvalValue(
          (WarBoardAIEvalCalcurater_o *)v28,
          v31->fields.futureEvalOffsetMag,
          current->fields._Entity_k__BackingField,
          v30);
      }
    }
    *(_DWORD *)&v45[4 * v17 + 24] = 189;
    v43 = ++v46;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v48,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    v17 = 0;
    if ( v43 )
    {
      v17 = v43;
      if ( *(_DWORD *)&v45[4 * v43 + 20] == 189 )
      {
        v17 = v43 - 1;
        v46 = v43 - 1;
      }
    }
  }
  *(_DWORD *)&v45[4 * v17 + 24] = 217;
  v44 = ++v46;
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v49,
    (const MethodInfo_20E9DB8 *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
  if ( v44 && *(_DWORD *)&v45[4 * v44 + 20] == 217 )
    v46 = v44 - 1;
}


void __fastcall WarBoardAIEvalCalcurater__JudgeRatingOffsetAddCondition(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList,
        float avgBeneValue,
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
  __int64 v22; // x1
  __int64 v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **current; // x1
  WarBoardRatingOffsetEntity_o **v33; // x20
  WarBoardAIManager_c *HasFlag; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x5
  WarBoardRatingOffsetEntity_o *v37; // x2
  char v38; // w8
  WarBoardRatingOffsetEntity_o *v39; // x9
  int32_t attackByLinkedEnemy; // w8
  struct System_Collections_Generic_Dictionary_uint__int__o *v41; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v42; // x23
  struct System_Collections_Generic_Dictionary_uint__int__o *v43; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v44; // x23
  WarBoardPieceData_o *v45; // x0
  struct WarBoardPieceData_o *v46; // x8
  struct BattleServantData_o *v47; // x8
  _BOOL4 v48; // w8
  struct WarBoardPieceData_o *v49; // x21
  WarBoardRatingOffsetEntity_o *v50; // x8
  float v51; // s0
  int v52; // w9
  WarBoardPieceData_o *v53; // x0
  WarBoardPieceData_o *v54; // x0
  WarBoardPieceData_o *v55; // x0
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v57; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v58; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v59; // x23
  WarBoardPieceData_o *v60; // x0
  struct WarBoardPieceData_o *v61; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardRatingOffsetEntity_o *v63; // x9
  int32_t np; // w8
  WarBoardPieceData_o *v65; // x0
  int32_t moveByLinkedEnemy; // w8
  bool v67; // zf
  struct WarBoardPieceData_o *actionPiece; // x21
  WarBoardAIManager_c *v69; // x0
  WarBoardPieceData_o *v70; // x0
  int32_t breakPointMax_k__BackingField; // w21
  int32_t breakPoint_k__BackingField; // w22
  int v73; // w9
  WarBoardAIRoute_RouteData_o *v74; // x8
  struct WarBoardPieceData_o *basePiece; // x21
  bool v76; // cc
  struct WarBoardPieceData_o *v77; // x21
  WarBoardAIManager_c *v78; // x0
  WarBoardPieceData_o *v79; // x0
  int32_t v80; // w21
  int32_t v81; // w22
  WarBoardPieceData_o *v82; // x0
  WarBoardPieceData_o *v83; // x0
  WarBoardPieceData_o *v84; // x0
  WarBoardPieceData_o *v85; // x0
  WarBoardAIRoute_RouteData_o *v86; // x8
  struct System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v88; // x23
  struct System_Collections_Generic_Dictionary_uint__int__o *v89; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v90; // x23
  WarBoardPieceData_o *v91; // x0
  WarBoardPieceData_o *v92; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v93; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v94; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v95; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v96; // x23
  System_Collections_Generic_List_Enumerator_T__o v97; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v98; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4186756 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, route);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__get_Current__, v11);
    sub_B2C35C(&Method_System_Func_KeyValuePair_uint__int___bool___ctor__, v12);
    sub_B2C35C(&System_Func_KeyValuePair_uint__int___bool__TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__, v14);
    sub_B2C35C(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__, v15);
    sub_B2C35C(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__, v16);
    sub_B2C35C(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__, v17);
    sub_B2C35C(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__, v18);
    sub_B2C35C(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__, v19);
    sub_B2C35C(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__, v20);
    sub_B2C35C(&WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo, v21);
    this = (WarBoardAIEvalCalcurater_o *)sub_B2C35C(&WarBoardAIManager_TypeInfo, v22);
    byte_4186756 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  if ( !*route || !ratingOffsetList )
    sub_B2C434(this, route);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v97,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ratingOffsetList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__);
  v98 = v97;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v98,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__) )
  {
    v23 = sub_B2C42C(WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo);
    WarBoardAIEvalCalcurater___c__DisplayClass9_0___ctor((WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)v23, 0LL);
    if ( !v23 )
      sub_B2C434(v24, v25);
    current = (System_Int32_array **)v98.fields.current;
    *(_QWORD *)(v23 + 16) = v98.fields.current;
    v33 = (WarBoardRatingOffsetEntity_o **)(v23 + 16);
    sub_B2C2F8((BattleServantConfConponent_o *)(v23 + 16), current, v26, v27, v28, v29, v30, v31);
    v37 = *(WarBoardRatingOffsetEntity_o **)(v23 + 16);
    if ( !v37 )
      sub_B2C434(HasFlag, v35);
    v38 = 1;
    switch ( v37->fields.type )
    {
      case 0:
        break;
      case 1:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v39 = *v33;
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
        attackByLinkedEnemy = (*route)->fields.attackByLinkedEnemy;
        goto LABEL_167;
      case 2:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v39 = *v33;
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
        attackByLinkedEnemy = (*route)->fields.attackByLinkedAlly;
        goto LABEL_167;
      case 3:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        goto LABEL_217;
      case 4:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        goto LABEL_248;
      case 5:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        actionPiece = (*route)->fields.actionPiece;
        v69 = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !actionPiece )
          sub_B2C434(v69, v35);
        if ( !*route )
          sub_B2C434(v69, v35);
        v70 = (*route)->fields.actionPiece;
        if ( !v70 )
          sub_B2C434(0LL, v35);
        breakPoint_k__BackingField = actionPiece->fields._breakPoint_k__BackingField;
        breakPointMax_k__BackingField = actionPiece->fields._breakPointMax_k__BackingField;
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v70, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
          v50 = *v33;
          if ( !*v33 )
            sub_B2C434(HasFlag, v35);
          v51 = (float)(breakPoint_k__BackingField + 1) / (float)(breakPointMax_k__BackingField + 1);
          v73 = v50->fields.value / 100;
LABEL_148:
          if ( v51 <= (float)v73 )
            goto LABEL_149;
        }
        goto LABEL_235;
      case 6:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v77 = (*route)->fields.actionPiece;
        v78 = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !v77 )
          sub_B2C434(v78, v35);
        if ( !*route )
          sub_B2C434(v78, v35);
        v79 = (*route)->fields.actionPiece;
        if ( !v79 )
          sub_B2C434(0LL, v35);
        v81 = v77->fields._breakPoint_k__BackingField;
        v80 = v77->fields._breakPointMax_k__BackingField;
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v79, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        v50 = *v33;
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
        v51 = (float)(v81 + 1) / (float)(v80 + 1);
        v52 = v50->fields.value / 100;
LABEL_36:
        if ( v51 >= (float)v52 )
          goto LABEL_235;
LABEL_149:
        v76 = v51 < (float)(v50->fields.value2 / 100);
        goto LABEL_210;
      case 7:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v65 = (*route)->fields.actionPiece;
        if ( !v65 )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isMaster(v65, 0LL);
        goto LABEL_217;
      case 8:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v83 = (*route)->fields.actionPiece;
        if ( !v83 )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isMaster(v83, 0LL);
        goto LABEL_248;
      case 9:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v55 = (*route)->fields.actionPiece;
        if ( !v55 )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v55, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        goto LABEL_217;
      case 0xA:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v82 = (*route)->fields.actionPiece;
        if ( !v82 )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v82, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        goto LABEL_217;
      case 0xB:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v53 = (*route)->fields.actionPiece;
        if ( !v53 )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v53, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000LL, 0LL);
        goto LABEL_217;
      case 0xC:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v54 = (*route)->fields.actionPiece;
        if ( !v54 )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v54, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000LL, 0LL);
        v38 = (unsigned __int8)HasFlag ^ 1;
        goto LABEL_237;
      case 0xD:
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        basePiece = (*route)->fields.basePiece;
        HasFlag = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !basePiece )
          sub_B2C434(HasFlag, v35);
        v50 = *v33;
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
        v51 = (float)(basePiece->fields._breakPoint_k__BackingField + 1)
            / (float)(basePiece->fields._breakPointMax_k__BackingField + 1);
        v73 = v50->fields.value / 100;
        goto LABEL_148;
      case 0xE:
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v49 = (*route)->fields.basePiece;
        HasFlag = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !v49 )
          sub_B2C434(HasFlag, v35);
        v50 = *v33;
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
        v51 = (float)(v49->fields._breakPoint_k__BackingField + 1)
            / (float)(v49->fields._breakPointMax_k__BackingField + 1);
        v52 = v50->fields.value / 100;
        goto LABEL_36;
      case 0xF:
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v60 = (*route)->fields.basePiece;
        if ( !v60 )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v60, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v61 = (*route)->fields.basePiece;
        if ( !v61 )
          sub_B2C434(HasFlag, v35);
        battleServant_k__BackingField = v61->fields._battleServant_k__BackingField;
        if ( !battleServant_k__BackingField )
          sub_B2C434(HasFlag, v35);
        v63 = *v33;
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
        np = battleServant_k__BackingField->fields.np;
        goto LABEL_209;
      case 0x10:
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v45 = (*route)->fields.basePiece;
        if ( !v45 )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v45, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v46 = (*route)->fields.basePiece;
        if ( !v46 )
          sub_B2C434(HasFlag, v35);
        v47 = v46->fields._battleServant_k__BackingField;
        if ( !v47 )
          sub_B2C434(HasFlag, v35);
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
        v48 = v47->fields.np < (*v33)->fields.value;
        goto LABEL_236;
      case 0x11:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        moveByLinkedEnemy = (*route)->fields.moveByLinkedEnemy;
        goto LABEL_123;
      case 0x12:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v74 = *route;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v39 = *v33;
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
        goto LABEL_166;
      case 0x13:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v86 = *route;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v63 = *v33;
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
        goto LABEL_208;
      case 0x14:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        moveByLinkedEnemy = (*route)->fields.moveByLinkedAlly;
LABEL_123:
        v67 = moveByLinkedEnemy == 0;
        goto LABEL_168;
      case 0x15:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v74 = *route;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v39 = *v33;
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
LABEL_166:
        attackByLinkedEnemy = v74->fields.moveByLinkedEnemy;
LABEL_167:
        v67 = attackByLinkedEnemy == v39->fields.value;
LABEL_168:
        v48 = v67;
        goto LABEL_236;
      case 0x16:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v86 = *route;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v63 = *v33;
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
LABEL_208:
        np = v86->fields.moveByLinkedEnemy;
LABEL_209:
        v76 = np < v63->fields.value;
LABEL_210:
        v48 = !v76;
        goto LABEL_236;
      case 0x17:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        dicUniqueKeyRange = (*route)->fields.dicUniqueKeyRange;
        v88 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B2C42C(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v88,
          (Il2CppObject *)v23,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__,
          (const MethodInfo_2708274 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)dicUniqueKeyRange,
                                           (System_Func_TSource__bool__o *)v88,
                                           (const MethodInfo_17395B8 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_217;
      case 0x18:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v58 = (*route)->fields.dicUniqueKeyRange;
        v59 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B2C42C(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v59,
          (Il2CppObject *)v23,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__,
          (const MethodInfo_2708274 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v58,
                                           (System_Func_TSource__bool__o *)v59,
                                           (const MethodInfo_17395B8 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_217;
      case 0x19:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
        dicMoveByServantGetDesignationItem = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !dicMoveByServantGetDesignationItem )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                           dicMoveByServantGetDesignationItem,
                                           (*v33)->fields.value,
                                           (const MethodInfo_2E1CE80 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
        v57 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v57 )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                           v57,
                                           (*v33)->fields.value,
                                           (const MethodInfo_2E1CB48 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        goto LABEL_217;
      case 0x1A:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
        v93 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v93 )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                           v93,
                                           (*v33)->fields.value,
                                           (const MethodInfo_2E1CE80 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_249;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
        v94 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v94 )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                           v94,
                                           (*v33)->fields.value,
                                           (const MethodInfo_2E1CB48 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        goto LABEL_248;
      case 0x1B:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v41 = (*route)->fields.dicUniqueKeyRange;
        v42 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B2C42C(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v42,
          (Il2CppObject *)v23,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__,
          (const MethodInfo_2708274 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v41,
                                           (System_Func_TSource__bool__o *)v42,
                                           (const MethodInfo_17395B8 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v43 = (*route)->fields.dicUniqueKeyRange;
        v44 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B2C42C(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v44,
          (Il2CppObject *)v23,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__,
          (const MethodInfo_2708274 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v43,
                                           (System_Func_TSource__bool__o *)v44,
                                           (const MethodInfo_17395B8 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_252;
      case 0x1C:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v89 = (*route)->fields.dicUniqueKeyRange;
        v90 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B2C42C(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v90,
          (Il2CppObject *)v23,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__,
          (const MethodInfo_2708274 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v89,
                                           (System_Func_TSource__bool__o *)v90,
                                           (const MethodInfo_17395B8 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v95 = (*route)->fields.dicUniqueKeyRange;
        v96 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B2C42C(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v96,
          (Il2CppObject *)v23,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__,
          (const MethodInfo_2708274 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v95,
                                           (System_Func_TSource__bool__o *)v96,
                                           (const MethodInfo_17395B8 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_252;
      case 0x1D:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v91 = (*route)->fields.basePiece;
        if ( !v91 )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v91, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_249;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v92 = (*route)->fields.actionPiece;
        if ( !v92 )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v92, 0LL);
        goto LABEL_217;
      case 0x1E:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
          if ( !*route )
            sub_B2C434(HasFlag, v35);
          v84 = (*route)->fields.basePiece;
          if ( !v84 )
            sub_B2C434(0LL, v35);
          HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v84, 0LL);
          if ( ((unsigned __int8)HasFlag & 1) != 0 )
          {
LABEL_235:
            v48 = 0;
          }
          else
          {
            if ( !*route )
              sub_B2C434(HasFlag, v35);
            v85 = (*route)->fields.actionPiece;
            if ( !v85 )
              sub_B2C434(0LL, v35);
            HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v85, 0LL);
LABEL_248:
            v48 = ((unsigned __int8)HasFlag & 1) == 0;
          }
        }
        else
        {
LABEL_249:
          v48 = 1;
        }
        goto LABEL_236;
      case 0x1F:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(HasFlag, v35);
        v48 = (*route)->fields.moveByLinkedItem > 0;
        goto LABEL_236;
      case 0x20:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x10000000LL, 0LL);
LABEL_217:
        v48 = (unsigned __int8)HasFlag & 1;
LABEL_236:
        v38 = v48;
        goto LABEL_237;
      case 0x21:
        if ( !*route )
          sub_B2C434(0LL, v35);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
LABEL_222:
          v38 = 0;
        }
        else
        {
          if ( !*route )
            sub_B2C434(0LL, v35);
          HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x200000000LL, 0LL);
LABEL_252:
          v38 = (char)HasFlag;
        }
LABEL_237:
        v37 = *v33;
        if ( !*v33 )
          sub_B2C434(HasFlag, v35);
        return;
      default:
        v38 = 0;
        break;
    }
    WarBoardAIEvalCalcurater__AddRatingOffsetAddCondition(
      (WarBoardAIEvalCalcurater_o *)HasFlag,
      route,
      v37,
      v38 & 1,
      v37->fields.category,
      v36);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v98,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__);
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
    sub_B2C434(this, route);
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
    v17 = sub_B2C460(this);
    sub_B2C400(v17, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  bool v13; // zf
  bool v14; // zf
  int64_t v15; // x1
  int64_t v16; // x1
  int32_t isMoveByMasterAndEnemyRange; // w8
  int32_t isMoveByServantAndEnemyRange; // w8
  int32_t isMoveByServantAndMasterRange; // w8
  bool isMaster; // w0
  int32_t max_length; // w8
  WarBoardPieceData_o *targetPiece; // x20
  WarBoardPieceData_o *v23; // x19
  WarBoardPieceData_o *detourRoute; // x0
  int32_t v25; // w8
  struct System_Int32_array *v26; // x8
  WarBoardPieceData_o *v27; // x20
  WarBoardPieceData_o *v28; // x21
  int32_t EnemyRangeMin; // w8
  struct System_Int32_array *v30; // x8
  bool v31; // cc
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  int32_t v33; // w19
  bool v34; // cc
  int32_t v35; // w9
  _BOOL4 isAround; // w8
  bool v37; // cc
  struct System_Int32_array *baseRoute; // x8
  _BOOL4 ExistEnemyOnBaseRoute_k__BackingField; // w8
  WarBoardPieceData_o *v40; // x20
  WarBoardPieceData_o *v41; // x19
  int32_t attackCountOnThisTurn; // w8
  WarBoardPieceData_o *actionPiece; // x20
  WarBoardPieceData_o *basePiece; // x21
  WarBoardPieceData_o *v45; // x20
  WarBoardPieceData_o *v46; // x19
  struct System_Int32_array *v47; // x8
  struct System_Int32_array *v48; // x8
  WarBoardPieceData_o *v49; // x20
  WarBoardPieceData_o *v50; // x19
  int32_t v51; // w19
  struct System_Int32_array *v52; // x8
  int32_t actionCountOnThisTurn; // w8
  struct System_Int32_array *v54; // x8
  struct System_Int32_array *v55; // x8
  struct System_Int32_array *v56; // x8
  int32_t actionIndex; // w9
  struct System_Int32_array *v58; // x8
  __int64 v60; // x0
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v62[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4186755 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__, route);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v11);
    this = (WarBoardAIEvalCalcurater_o *)sub_B2C35C(&WarBoardAIManager_TypeInfo, v12);
    byte_4186755 = 1;
  }
  *(_QWORD *)v62 = 0LL;
  value = 0;
  switch ( condType )
  {
    case 1:
      if ( !route )
        goto LABEL_426;
      v15 = 16LL;
      goto LABEL_420;
    case 2:
      if ( !route )
        goto LABEL_426;
      v16 = 16LL;
      goto LABEL_423;
    case 3:
      if ( !route )
        goto LABEL_426;
      v15 = 64LL;
      goto LABEL_420;
    case 4:
      if ( !route )
        goto LABEL_426;
      v16 = 64LL;
      goto LABEL_423;
    case 5:
      if ( !route )
        goto LABEL_426;
      v15 = 0x4000000LL;
      goto LABEL_420;
    case 6:
      if ( !route )
        goto LABEL_426;
      v16 = 0x4000000LL;
      goto LABEL_423;
    case 7:
      if ( !route )
        goto LABEL_426;
      v15 = 1024LL;
      goto LABEL_420;
    case 8:
      if ( !route )
        goto LABEL_426;
      v16 = 1024LL;
      goto LABEL_423;
    case 9:
      if ( !route )
        goto LABEL_426;
      v15 = 0x8000000000LL;
      goto LABEL_420;
    case 10:
      if ( !route )
        goto LABEL_426;
      v16 = 0x8000000000LL;
      goto LABEL_423;
    case 11:
      if ( !route )
        goto LABEL_426;
      v15 = 2048LL;
      goto LABEL_420;
    case 12:
      if ( !route )
        goto LABEL_426;
      v16 = 2048LL;
      goto LABEL_423;
    case 13:
      if ( !route )
        goto LABEL_426;
      v15 = 0x4000000000LL;
      goto LABEL_420;
    case 14:
      if ( !route )
        goto LABEL_426;
      v16 = 0x4000000000LL;
      goto LABEL_423;
    case 15:
      if ( !route )
        goto LABEL_426;
      v15 = 256LL;
      goto LABEL_420;
    case 16:
      if ( !route )
        goto LABEL_426;
      v16 = 256LL;
      goto LABEL_423;
    case 17:
      if ( !route )
        goto LABEL_426;
      v15 = 512LL;
      goto LABEL_420;
    case 18:
      if ( !route )
        goto LABEL_426;
      v16 = 512LL;
      goto LABEL_423;
    case 19:
      if ( !route )
        goto LABEL_426;
      v15 = 4096LL;
      goto LABEL_420;
    case 20:
      if ( !route )
        goto LABEL_426;
      v16 = 4096LL;
      goto LABEL_423;
    case 21:
      if ( !route )
        goto LABEL_426;
      v15 = 0x2000LL;
      goto LABEL_420;
    case 22:
      if ( !route )
        goto LABEL_426;
      v16 = 0x2000LL;
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
                              (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
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
                   (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
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
              &v62[1],
              (const MethodInfo_2E29D00 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_392;
      isMoveByMasterAndEnemyRange = v62[1];
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
              v62,
              (const MethodInfo_2E29D00 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_392;
      isMoveByServantAndEnemyRange = v62[0];
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
              (const MethodInfo_2E29D00 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_392;
      isMoveByServantAndMasterRange = value;
      goto LABEL_356;
    case 43:
      if ( !route )
        goto LABEL_426;
      v15 = 0x4000LL;
      goto LABEL_420;
    case 44:
      if ( !route )
        goto LABEL_426;
      v16 = 0x4000LL;
      goto LABEL_423;
    case 45:
      if ( !route )
        goto LABEL_426;
      v15 = 0x8000LL;
      goto LABEL_420;
    case 46:
      if ( !route )
        goto LABEL_426;
      v16 = 0x8000LL;
      goto LABEL_423;
    case 47:
      if ( !route )
        goto LABEL_426;
      v15 = 0x10000LL;
      goto LABEL_420;
    case 48:
      if ( !route )
        goto LABEL_426;
      v16 = 0x10000LL;
      goto LABEL_423;
    case 49:
      if ( !route )
        goto LABEL_426;
      v15 = 0x20000LL;
      goto LABEL_420;
    case 50:
      if ( !route )
        goto LABEL_426;
      v16 = 0x20000LL;
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
      v15 = 128LL;
      goto LABEL_420;
    case 64:
      if ( !route )
        goto LABEL_426;
      v16 = 128LL;
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
      v27 = route->fields.actionPiece;
      if ( !v27 )
        goto LABEL_392;
      v28 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      if ( !WarBoardAIManager__IsEnemyPiece(v28, v27, (const MethodInfo *)condition) )
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
      v14 = (_DWORD)this == condition->fields.value;
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
      v25 = route->fields.actionCountOnThisTurn;
      goto LABEL_160;
    case 74:
    case 127:
      v13 = targetData == 0LL;
      goto LABEL_362;
    case 75:
    case 128:
      v14 = targetData == 0LL;
      goto LABEL_409;
    case 76:
      if ( !targetData )
        goto LABEL_392;
      targetPiece = targetData->fields.targetPiece;
      if ( !targetPiece )
        goto LABEL_392;
      if ( !route )
        goto LABEL_426;
      v23 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      LOBYTE(detourRoute) = WarBoardAIManager__IsEnemyPiece(v23, targetPiece, (const MethodInfo *)condition);
      return (unsigned __int8)detourRoute & 1;
    case 77:
      if ( !targetData )
        goto LABEL_392;
      v45 = targetData->fields.targetPiece;
      if ( !v45 )
        goto LABEL_274;
      if ( !route )
        goto LABEL_426;
      v46 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      isMaster = WarBoardAIManager__IsEnemyPiece(v46, v45, (const MethodInfo *)condition);
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
      v51 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)detourRoute,
              (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
      this = (WarBoardAIEvalCalcurater_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
                                             (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_426;
      v34 = v51 - (int)this <= condition->fields.value;
      goto LABEL_184;
    case 84:
      if ( !targetData )
        goto LABEL_392;
      v32 = (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.detourRoute;
      if ( !v32 )
        goto LABEL_274;
      v33 = System_Linq_Enumerable__Count_int_(
              v32,
              (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
      this = (WarBoardAIEvalCalcurater_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
                                             (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_426;
      v31 = v33 - (int)this <= condition->fields.value;
      goto LABEL_123;
    case 85:
      if ( !targetData )
        goto LABEL_392;
      v52 = targetData->fields.detourRoute;
      if ( !v52 )
        goto LABEL_392;
      if ( v52->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v52->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
LABEL_305:
      isMoveByMasterAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_405;
    case 86:
      if ( !targetData )
        goto LABEL_392;
      v26 = targetData->fields.detourRoute;
      if ( !v26 )
        goto LABEL_392;
      if ( v26->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v26->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
LABEL_239:
      isMoveByServantAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_408;
    case 87:
      if ( !targetData )
        goto LABEL_392;
      v58 = targetData->fields.detourRoute;
      if ( !v58 )
        goto LABEL_392;
      if ( v58->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v58->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
LABEL_355:
      isMoveByServantAndMasterRange = targetData->fields.moveByDistanceType;
      goto LABEL_356;
    case 88:
      if ( !route )
        goto LABEL_426;
      v15 = 0x20000000LL;
      goto LABEL_420;
    case 89:
      if ( !route )
        goto LABEL_426;
      v16 = 0x20000000LL;
      goto LABEL_423;
    case 90:
      if ( !route )
        goto LABEL_426;
      v15 = 0x40000000LL;
      goto LABEL_420;
    case 91:
      if ( !route )
        goto LABEL_426;
      v16 = 0x40000000LL;
      goto LABEL_423;
    case 92:
      if ( !route )
        goto LABEL_426;
      v15 = 0x80000000LL;
      goto LABEL_420;
    case 93:
      if ( !route )
        goto LABEL_426;
      v16 = 0x80000000LL;
      goto LABEL_423;
    case 94:
      if ( !route )
        goto LABEL_426;
      v15 = 0x100000000LL;
      goto LABEL_420;
    case 95:
      if ( !route )
        goto LABEL_426;
      v16 = 0x100000000LL;
      goto LABEL_423;
    case 96:
      if ( !targetData )
        goto LABEL_392;
      isAround = targetData->fields._ExistEnemyOnBaseRoute_k__BackingField;
LABEL_361:
      v13 = !isAround;
      goto LABEL_362;
    case 97:
      if ( !targetData )
        goto LABEL_392;
      ExistEnemyOnBaseRoute_k__BackingField = targetData->fields._ExistEnemyOnBaseRoute_k__BackingField;
LABEL_277:
      v14 = !ExistEnemyOnBaseRoute_k__BackingField;
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
      v37 = attackCountOnThisTurn < condition->fields.value;
LABEL_347:
      LOBYTE(detourRoute) = !v37;
      return (unsigned __int8)detourRoute & 1;
    case 102:
      if ( !route )
        goto LABEL_426;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_RouteData__HasFlag(route, 2LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_392;
      if ( !condition )
        goto LABEL_426;
      v25 = route->fields.attackCountOnThisTurn;
LABEL_160:
      v35 = condition->fields.value;
      goto LABEL_183;
    case 103:
      if ( !route )
        goto LABEL_426;
      v15 = 0x400000000LL;
      goto LABEL_420;
    case 104:
      if ( !route )
        goto LABEL_426;
      v16 = 0x400000000LL;
      goto LABEL_423;
    case 105:
      if ( !route )
        goto LABEL_426;
      v15 = 0x800000000LL;
      goto LABEL_420;
    case 106:
      if ( !route )
        goto LABEL_426;
      v16 = 0x800000000LL;
      goto LABEL_423;
    case 107:
      if ( !route )
        goto LABEL_426;
      v15 = 0x1000000000LL;
      goto LABEL_420;
    case 108:
      if ( !route )
        goto LABEL_426;
      v16 = 0x1000000000LL;
      goto LABEL_423;
    case 109:
      if ( !route )
        goto LABEL_426;
      v15 = 0x2000000000LL;
      goto LABEL_420;
    case 110:
      if ( !route )
        goto LABEL_426;
      v16 = 0x2000000000LL;
      goto LABEL_423;
    case 111:
      if ( !targetData )
        goto LABEL_392;
      v40 = targetData->fields.targetPiece;
      if ( !v40 )
        goto LABEL_392;
      if ( !route )
        goto LABEL_426;
      v41 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      LOBYTE(detourRoute) = WarBoardAIManager__IsAllyPiece(v41, v40, (const MethodInfo *)condition);
      return (unsigned __int8)detourRoute & 1;
    case 112:
      if ( !targetData )
        goto LABEL_392;
      v49 = targetData->fields.targetPiece;
      if ( !v49 )
        goto LABEL_274;
      if ( !route )
        goto LABEL_426;
      v50 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      isMaster = WarBoardAIManager__IsAllyPiece(v50, v49, (const MethodInfo *)condition);
LABEL_424:
      LOBYTE(detourRoute) = !isMaster;
      return (unsigned __int8)detourRoute & 1;
    case 113:
      if ( !targetData )
        goto LABEL_392;
      v56 = targetData->fields.detourRoute;
      if ( !v56 )
        goto LABEL_392;
      if ( v56->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      actionCountOnThisTurn = v56->m_Items[2];
      actionIndex = route->fields.actionIndex;
LABEL_371:
      v14 = actionCountOnThisTurn == actionIndex;
      goto LABEL_409;
    case 114:
      if ( !targetData )
        goto LABEL_392;
      v55 = targetData->fields.detourRoute;
      if ( !v55 )
        goto LABEL_392;
      if ( v55->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      v13 = v55->m_Items[2] == route->fields.actionIndex;
LABEL_362:
      LOBYTE(detourRoute) = !v13;
      return (unsigned __int8)detourRoute & 1;
    case 115:
      if ( !route )
        goto LABEL_426;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v14 = WarBoardPieceData__get_ActionType(detourRoute, 0LL) == 1;
      goto LABEL_409;
    case 116:
      if ( !route )
        goto LABEL_426;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v14 = WarBoardPieceData__get_ActionType(detourRoute, 0LL) == 2;
      goto LABEL_409;
    case 117:
      if ( !route )
        goto LABEL_426;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v14 = WarBoardPieceData__get_ActionType(detourRoute, 0LL) == 3;
      goto LABEL_409;
    case 118:
      if ( !route )
        goto LABEL_426;
      v15 = 0x10000000000LL;
      goto LABEL_420;
    case 119:
      if ( !route )
        goto LABEL_426;
      v16 = 0x10000000000LL;
      goto LABEL_423;
    case 120:
      if ( !route )
        goto LABEL_426;
      v15 = 0x20000000000LL;
      goto LABEL_420;
    case 121:
      if ( !route )
        goto LABEL_426;
      v16 = 0x20000000000LL;
      goto LABEL_423;
    case 122:
      if ( !targetData )
        goto LABEL_392;
      v47 = targetData->fields.detourRoute;
      if ( !v47 )
        goto LABEL_392;
      if ( v47->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v47->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
      isMoveByMasterAndEnemyRange = targetData->fields.detourMoveByDistanceType;
LABEL_405:
      v14 = isMoveByMasterAndEnemyRange == 1;
      goto LABEL_409;
    case 123:
      if ( !targetData )
        goto LABEL_392;
      v54 = targetData->fields.detourRoute;
      if ( !v54 )
        goto LABEL_392;
      if ( v54->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v54->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
      isMoveByServantAndEnemyRange = targetData->fields.detourMoveByDistanceType;
LABEL_408:
      v14 = isMoveByServantAndEnemyRange == 3;
      goto LABEL_409;
    case 124:
      if ( !targetData )
        goto LABEL_392;
      v48 = targetData->fields.detourRoute;
      if ( !v48 )
        goto LABEL_392;
      if ( v48->max_length <= 1 )
      {
LABEL_428:
        v60 = sub_B2C460(this);
        sub_B2C400(v60, 0LL);
      }
      if ( !route )
        goto LABEL_426;
      if ( v48->m_Items[2] == route->fields.actionIndex )
      {
        isMoveByServantAndMasterRange = targetData->fields.detourMoveByDistanceType;
LABEL_356:
        v14 = isMoveByServantAndMasterRange == 2;
LABEL_409:
        LOBYTE(detourRoute) = v14;
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
      v15 = 0x40000000000LL;
LABEL_420:
      LOBYTE(detourRoute) = WarBoardAIRoute_RouteData__HasFlag(route, v15, 0LL);
      return (unsigned __int8)detourRoute & 1;
    case 126:
      if ( !route )
        goto LABEL_426;
      v16 = 0x40000000000LL;
LABEL_423:
      isMaster = WarBoardAIRoute_RouteData__HasFlag(route, v16, 0LL);
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
      v35 = condition->fields.value;
      v25 = EnemyRangeMin - 1;
LABEL_183:
      v34 = v25 <= v35;
LABEL_184:
      LOBYTE(detourRoute) = v34;
      break;
    case 130:
      if ( !condition )
        goto LABEL_426;
      if ( !targetData )
        goto LABEL_274;
      v30 = targetData->fields.baseRoute;
      if ( !v30 )
LABEL_426:
        sub_B2C434(this, route);
      max_length = v30->max_length;
LABEL_122:
      v31 = max_length - 1 <= condition->fields.value;
LABEL_123:
      LOBYTE(detourRoute) = !v31;
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
      v37 = (int)this < condition->fields.value;
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
      v34 = (int)this <= condition->fields.value;
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
        sub_B2C434(this, route);
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
  if ( (byte_41856EA & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B2C35C(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x);
    byte_41856EA = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(this, x);
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
  if ( (byte_41856EB & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B2C35C(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x);
    byte_41856EB = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(this, x);
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
  if ( (byte_41856EC & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B2C35C(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x);
    byte_41856EC = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(this, x);
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
  if ( (byte_41856ED & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B2C35C(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x);
    byte_41856ED = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(this, x);
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
  if ( (byte_41856EE & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B2C35C(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x);
    byte_41856EE = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(this, x);
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
  if ( (byte_41856EF & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B2C35C(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x);
    byte_41856EF = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(this, x);
  return value - 1 >= ratingOffset->fields.value;
}