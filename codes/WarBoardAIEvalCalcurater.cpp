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
  sub_B5D560(
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
    sub_B5D69C(this, route);
  }
  if ( (int)*(_QWORD *)&actionTypeIds->max_length >= 1 )
  {
    v7 = 0LL;
    max_length = *(_QWORD *)&actionTypeIds->max_length;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
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
    sub_B5D69C(this, route);
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
    sub_B5D69C(this, evalOffsetMagnification);
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
    sub_B5D69C(this, route);
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
  __int64 v3; // x3
  WarBoardAIEvalCalcurater_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct WarBoardAIRoute_PiecePersonality_o *piecePersonalityList; // x8
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x1
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicPutIndexTargetData; // x22
  int64_t TrendKey; // x0
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x3
  __int64 v30; // x0
  __int64 v31; // x1
  Il2CppClass *v32; // x8
  __int64 v33; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *FutureLookingTrendHashSet; // x0
  __int64 v35; // x1
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-60h] BYREF
  WarBoardAIRoute_TargetData_o *value; // [xsp+48h] [xbp-38h] BYREF

  v5 = this;
  if ( (byte_42E68C9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__,
      (_DWORD)route,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__, v15, v16, v17);
    this = (WarBoardAIEvalCalcurater_o *)sub_B5D5C4(
                                           &Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__,
                                           v18,
                                           v19,
                                           v20);
    byte_42E68C9 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  value = 0LL;
  piecePersonalityList = v5->fields.piecePersonalityList;
  if ( !piecePersonalityList
    || (this = (WarBoardAIEvalCalcurater_o *)piecePersonalityList->fields.actionTrandList) == 0LL )
  {
    sub_B5D69C(this, route);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    if ( !v22 )
      break;
    value = 0LL;
    current = v37.fields.current;
    if ( !*route )
      sub_B5D69C(v22, v23);
    if ( !v37.fields.current )
      sub_B5D69C(v22, v23);
    klass = v37.fields.current[1].klass;
    if ( !klass )
      sub_B5D69C(0LL, v23);
    dicPutIndexTargetData = (*route)->fields.dicPutIndexTargetData;
    TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, v23);
    if ( !dicPutIndexTargetData )
      sub_B5D69C(TrendKey, TrendKey);
    System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___TryGetValue(
      dicPutIndexTargetData,
      TrendKey,
      &value,
      (const MethodInfo_2F5E530 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
    if ( WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
           v5,
           *route,
           (WarBoardAIRoute_ActionTrendInfo_o *)current,
           value,
           v28) )
    {
      WarBoardAIEvalCalcurater__AddRatingBaseOffsetValue(
        v5,
        route,
        (WarBoardActionTrendEntity_o *)current[1].klass,
        v29);
      v32 = current[1].klass;
      if ( !v32 )
        sub_B5D69C(v30, v31);
      if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)&v32->_1.this_arg.bits, 0LL) )
      {
        if ( !*route )
          sub_B5D69C(0LL, v33);
        FutureLookingTrendHashSet = WarBoardAIRoute_RouteData__get_FutureLookingTrendHashSet(*route, 0LL);
        if ( !FutureLookingTrendHashSet )
          sub_B5D69C(0LL, v35);
        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
          (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)FutureLookingTrendHashSet,
          (WarBoardAIRoute_RouteData_o *)current,
          (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        WarBoardAIRoute_RouteData_o *futureRoute,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  WarBoardAIRoute_RouteData_o *FutureLookingTrendHashSet; // x0
  int v35; // w25
  _BOOL8 v36; // x0
  __int64 v37; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *monitor; // x0
  _BOOL8 v39; // x0
  const MethodInfo *v40; // x1
  WarBoardAIRoute_ActionTrendInfo_o *current; // x22
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicPutIndexTargetData; // x23
  int64_t TrendKey; // x0
  const MethodInfo *v45; // x4
  _BOOL8 v46; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x3
  WarBoardAIRoute_RouteData_o *v49; // x8
  BattleServantConfConponent_o *p_futureEvalOffsetMag; // x23
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *v51; // x24
  _BOOL8 IsAttack; // x0
  __int64 v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x1
  int v61; // w23
  int v62; // w20
  _BYTE v63[32]; // [xsp+10h] [xbp-C0h] BYREF
  int v64; // [xsp+30h] [xbp-A0h]
  WarBoardAIRoute_TargetData_o *value; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v67; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_42E68CA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__,
      (_DWORD)route,
      (_DWORD)futureRoute,
      method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__,
      v13,
      v14,
      v15);
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__,
      v16,
      v17,
      v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__,
      v19,
      v20,
      v21);
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__,
      v22,
      v23,
      v24);
    sub_B5D5C4(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, v25, v26, v27);
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__,
      v28,
      v29,
      v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__, v31, v32, v33);
    byte_42E68CA = 1;
  }
  memset(&v67, 0, sizeof(v67));
  memset(&v66, 0, sizeof(v66));
  value = 0LL;
  v64 = 0;
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
    sub_B5D69C(FutureLookingTrendHashSet, route);
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)v63,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)FutureLookingTrendHashSet,
    (const MethodInfo_250693C *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v35 = 0;
  v67 = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v63;
  while ( 1 )
  {
    v36 = System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
            &v67,
            (const MethodInfo_201E960 *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    if ( !v36 )
      break;
    if ( !v67.fields._current )
      sub_B5D69C(v36, v37);
    monitor = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v67.fields._current[2].monitor;
    if ( !monitor )
      sub_B5D69C(0LL, v37);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v63,
      monitor,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v66 = *(System_Collections_Generic_List_Enumerator_T__o *)v63;
    while ( 1 )
    {
      v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v66,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
      if ( !v39 )
        break;
      current = (WarBoardAIRoute_ActionTrendInfo_o *)v66.fields.current;
      if ( !v66.fields.current )
        sub_B5D69C(v39, v40);
      klass = v66.fields.current[1].klass;
      if ( !klass )
        sub_B5D69C(0LL, v40);
      dicPutIndexTargetData = futureRoute->fields.dicPutIndexTargetData;
      TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, v40);
      if ( !dicPutIndexTargetData )
        sub_B5D69C(TrendKey, TrendKey);
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___TryGetValue(
        dicPutIndexTargetData,
        TrendKey,
        &value,
        (const MethodInfo_2F5E530 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
      v46 = WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(this, futureRoute, current, value, v45);
      if ( v46 )
      {
        v49 = *route;
        if ( !*route )
          sub_B5D69C(v46, v47);
        p_futureEvalOffsetMag = (BattleServantConfConponent_o *)&v49->fields.futureEvalOffsetMag;
        if ( !v49->fields.futureEvalOffsetMag )
        {
          v51 = (WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)sub_B5D694(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
          WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(v51, 0LL);
          IsAttack = WarBoardAIRoute_RouteData__get_IsAttack(futureRoute, 0LL);
          if ( !v51 )
            sub_B5D69C(IsAttack, v53);
          v51->fields.isAttack = IsAttack;
          p_futureEvalOffsetMag->klass = (BattleServantConfConponent_c *)v51;
          sub_B5D560(p_futureEvalOffsetMag, (System_Int32_array **)v51, v54, v55, v56, v57, v58, v59);
          v49 = *route;
          if ( !*route )
            sub_B5D69C(v46, v60);
        }
        WarBoardAIEvalCalcurater__AddTrendEvalValue(
          (WarBoardAIEvalCalcurater_o *)v46,
          v49->fields.futureEvalOffsetMag,
          current->fields._Entity_k__BackingField,
          v48);
      }
    }
    *(_DWORD *)&v63[4 * v35 + 24] = 189;
    v61 = ++v64;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v66,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    v35 = 0;
    if ( v61 )
    {
      v35 = v61;
      if ( *(_DWORD *)&v63[4 * v61 + 20] == 189 )
      {
        v35 = v61 - 1;
        v64 = v61 - 1;
      }
    }
  }
  *(_DWORD *)&v63[4 * v35 + 24] = 217;
  v62 = ++v64;
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v67,
    (const MethodInfo_201E95C *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
  if ( v62 && *(_DWORD *)&v63[4 * v62 + 20] == 217 )
    v64 = v62 - 1;
}


void __fastcall WarBoardAIEvalCalcurater__JudgeRatingOffsetAddCondition(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList,
        float avgBeneValue,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  __int64 v55; // x21
  __int64 v56; // x0
  __int64 v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **current; // x1
  WarBoardRatingOffsetEntity_o **v65; // x20
  WarBoardAIManager_c *HasFlag; // x0
  __int64 v67; // x1
  const MethodInfo *v68; // x5
  WarBoardRatingOffsetEntity_o *v69; // x2
  char v70; // w8
  WarBoardRatingOffsetEntity_o *v71; // x9
  int32_t attackByLinkedEnemy; // w8
  struct System_Collections_Generic_Dictionary_uint__int__o *v73; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v74; // x23
  struct System_Collections_Generic_Dictionary_uint__int__o *v75; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v76; // x23
  WarBoardPieceData_o *v77; // x0
  struct WarBoardPieceData_o *v78; // x8
  struct BattleServantData_o *v79; // x8
  _BOOL4 v80; // w8
  struct WarBoardPieceData_o *v81; // x21
  WarBoardRatingOffsetEntity_o *v82; // x8
  float v83; // s0
  int v84; // w9
  WarBoardPieceData_o *v85; // x0
  WarBoardPieceData_o *v86; // x0
  WarBoardPieceData_o *v87; // x0
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v89; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v90; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v91; // x23
  WarBoardPieceData_o *v92; // x0
  struct WarBoardPieceData_o *v93; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardRatingOffsetEntity_o *v95; // x9
  int32_t np; // w8
  WarBoardPieceData_o *v97; // x0
  int32_t moveByLinkedEnemy; // w8
  bool v99; // zf
  struct WarBoardPieceData_o *actionPiece; // x21
  WarBoardAIManager_c *v101; // x0
  WarBoardPieceData_o *v102; // x0
  int32_t breakPointMax_k__BackingField; // w21
  int32_t breakPoint_k__BackingField; // w22
  int v105; // w9
  WarBoardAIRoute_RouteData_o *v106; // x8
  struct WarBoardPieceData_o *basePiece; // x21
  bool v108; // cc
  struct WarBoardPieceData_o *v109; // x21
  WarBoardAIManager_c *v110; // x0
  WarBoardPieceData_o *v111; // x0
  int32_t v112; // w21
  int32_t v113; // w22
  WarBoardPieceData_o *v114; // x0
  WarBoardPieceData_o *v115; // x0
  WarBoardPieceData_o *v116; // x0
  WarBoardPieceData_o *v117; // x0
  WarBoardAIRoute_RouteData_o *v118; // x8
  struct System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v120; // x23
  struct System_Collections_Generic_Dictionary_uint__int__o *v121; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v122; // x23
  WarBoardPieceData_o *v123; // x0
  WarBoardPieceData_o *v124; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v125; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v126; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v127; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v128; // x23
  System_Collections_Generic_List_Enumerator_T__o v129; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v130; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E68CC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__,
      (_DWORD)route,
      (_DWORD)ratingOffsetList,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__, v16, v17, v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__get_Current__,
      v19,
      v20,
      v21);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_uint__int___bool___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Func_KeyValuePair_uint__int___bool__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__, v28, v29, v30);
    sub_B5D5C4(
      &Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__,
      v31,
      v32,
      v33);
    sub_B5D5C4(
      &Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__,
      v34,
      v35,
      v36);
    sub_B5D5C4(
      &Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__,
      v37,
      v38,
      v39);
    sub_B5D5C4(
      &Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__,
      v40,
      v41,
      v42);
    sub_B5D5C4(
      &Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__,
      v43,
      v44,
      v45);
    sub_B5D5C4(
      &Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__,
      v46,
      v47,
      v48);
    sub_B5D5C4(&WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo, v49, v50, v51);
    this = (WarBoardAIEvalCalcurater_o *)sub_B5D5C4(&WarBoardAIManager_TypeInfo, v52, v53, v54);
    byte_42E68CC = 1;
  }
  memset(&v130, 0, sizeof(v130));
  if ( !*route || !ratingOffsetList )
    sub_B5D69C(this, route);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v129,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ratingOffsetList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__);
  v130 = v129;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v130,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__) )
  {
    v55 = sub_B5D694(WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo);
    WarBoardAIEvalCalcurater___c__DisplayClass9_0___ctor((WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)v55, 0LL);
    if ( !v55 )
      sub_B5D69C(v56, v57);
    current = (System_Int32_array **)v130.fields.current;
    *(_QWORD *)(v55 + 16) = v130.fields.current;
    v65 = (WarBoardRatingOffsetEntity_o **)(v55 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v55 + 16), current, v58, v59, v60, v61, v62, v63);
    v69 = *(WarBoardRatingOffsetEntity_o **)(v55 + 16);
    if ( !v69 )
      sub_B5D69C(HasFlag, v67);
    v70 = 1;
    switch ( v69->fields.type )
    {
      case 0:
        break;
      case 1:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v71 = *v65;
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
        attackByLinkedEnemy = (*route)->fields.attackByLinkedEnemy;
        goto LABEL_167;
      case 2:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v71 = *v65;
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
        attackByLinkedEnemy = (*route)->fields.attackByLinkedAlly;
        goto LABEL_167;
      case 3:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        goto LABEL_217;
      case 4:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        goto LABEL_248;
      case 5:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        actionPiece = (*route)->fields.actionPiece;
        v101 = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !actionPiece )
          sub_B5D69C(v101, v67);
        if ( !*route )
          sub_B5D69C(v101, v67);
        v102 = (*route)->fields.actionPiece;
        if ( !v102 )
          sub_B5D69C(0LL, v67);
        breakPoint_k__BackingField = actionPiece->fields._breakPoint_k__BackingField;
        breakPointMax_k__BackingField = actionPiece->fields._breakPointMax_k__BackingField;
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v102, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
          v82 = *v65;
          if ( !*v65 )
            sub_B5D69C(HasFlag, v67);
          v83 = (float)(breakPoint_k__BackingField + 1) / (float)(breakPointMax_k__BackingField + 1);
          v105 = v82->fields.value / 100;
LABEL_148:
          if ( v83 <= (float)v105 )
            goto LABEL_149;
        }
        goto LABEL_235;
      case 6:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v109 = (*route)->fields.actionPiece;
        v110 = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !v109 )
          sub_B5D69C(v110, v67);
        if ( !*route )
          sub_B5D69C(v110, v67);
        v111 = (*route)->fields.actionPiece;
        if ( !v111 )
          sub_B5D69C(0LL, v67);
        v113 = v109->fields._breakPoint_k__BackingField;
        v112 = v109->fields._breakPointMax_k__BackingField;
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v111, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        v82 = *v65;
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
        v83 = (float)(v113 + 1) / (float)(v112 + 1);
        v84 = v82->fields.value / 100;
LABEL_36:
        if ( v83 >= (float)v84 )
          goto LABEL_235;
LABEL_149:
        v108 = v83 < (float)(v82->fields.value2 / 100);
        goto LABEL_210;
      case 7:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v97 = (*route)->fields.actionPiece;
        if ( !v97 )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isMaster(v97, 0LL);
        goto LABEL_217;
      case 8:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v115 = (*route)->fields.actionPiece;
        if ( !v115 )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isMaster(v115, 0LL);
        goto LABEL_248;
      case 9:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v87 = (*route)->fields.actionPiece;
        if ( !v87 )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v87, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        goto LABEL_217;
      case 0xA:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v114 = (*route)->fields.actionPiece;
        if ( !v114 )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v114, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        goto LABEL_217;
      case 0xB:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v85 = (*route)->fields.actionPiece;
        if ( !v85 )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v85, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000LL, 0LL);
        goto LABEL_217;
      case 0xC:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v86 = (*route)->fields.actionPiece;
        if ( !v86 )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v86, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000LL, 0LL);
        v70 = (unsigned __int8)HasFlag ^ 1;
        goto LABEL_237;
      case 0xD:
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        basePiece = (*route)->fields.basePiece;
        HasFlag = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !basePiece )
          sub_B5D69C(HasFlag, v67);
        v82 = *v65;
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
        v83 = (float)(basePiece->fields._breakPoint_k__BackingField + 1)
            / (float)(basePiece->fields._breakPointMax_k__BackingField + 1);
        v105 = v82->fields.value / 100;
        goto LABEL_148;
      case 0xE:
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v81 = (*route)->fields.basePiece;
        HasFlag = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !v81 )
          sub_B5D69C(HasFlag, v67);
        v82 = *v65;
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
        v83 = (float)(v81->fields._breakPoint_k__BackingField + 1)
            / (float)(v81->fields._breakPointMax_k__BackingField + 1);
        v84 = v82->fields.value / 100;
        goto LABEL_36;
      case 0xF:
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v92 = (*route)->fields.basePiece;
        if ( !v92 )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v92, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v93 = (*route)->fields.basePiece;
        if ( !v93 )
          sub_B5D69C(HasFlag, v67);
        battleServant_k__BackingField = v93->fields._battleServant_k__BackingField;
        if ( !battleServant_k__BackingField )
          sub_B5D69C(HasFlag, v67);
        v95 = *v65;
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
        np = battleServant_k__BackingField->fields.np;
        goto LABEL_209;
      case 0x10:
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v77 = (*route)->fields.basePiece;
        if ( !v77 )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v77, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v78 = (*route)->fields.basePiece;
        if ( !v78 )
          sub_B5D69C(HasFlag, v67);
        v79 = v78->fields._battleServant_k__BackingField;
        if ( !v79 )
          sub_B5D69C(HasFlag, v67);
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
        v80 = v79->fields.np < (*v65)->fields.value;
        goto LABEL_236;
      case 0x11:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        moveByLinkedEnemy = (*route)->fields.moveByLinkedEnemy;
        goto LABEL_123;
      case 0x12:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v106 = *route;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v71 = *v65;
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
        goto LABEL_166;
      case 0x13:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v118 = *route;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v95 = *v65;
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
        goto LABEL_208;
      case 0x14:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        moveByLinkedEnemy = (*route)->fields.moveByLinkedAlly;
LABEL_123:
        v99 = moveByLinkedEnemy == 0;
        goto LABEL_168;
      case 0x15:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v106 = *route;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v71 = *v65;
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
LABEL_166:
        attackByLinkedEnemy = v106->fields.moveByLinkedEnemy;
LABEL_167:
        v99 = attackByLinkedEnemy == v71->fields.value;
LABEL_168:
        v80 = v99;
        goto LABEL_236;
      case 0x16:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v118 = *route;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v95 = *v65;
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
LABEL_208:
        np = v118->fields.moveByLinkedEnemy;
LABEL_209:
        v108 = np < v95->fields.value;
LABEL_210:
        v80 = !v108;
        goto LABEL_236;
      case 0x17:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        dicUniqueKeyRange = (*route)->fields.dicUniqueKeyRange;
        v120 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B5D694(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v120,
          (Il2CppObject *)v55,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__,
          (const MethodInfo_279933C *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)dicUniqueKeyRange,
                                           (System_Func_TSource__bool__o *)v120,
                                           (const MethodInfo_1C99BEC *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_217;
      case 0x18:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v90 = (*route)->fields.dicUniqueKeyRange;
        v91 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B5D694(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v91,
          (Il2CppObject *)v55,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__,
          (const MethodInfo_279933C *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v90,
                                           (System_Func_TSource__bool__o *)v91,
                                           (const MethodInfo_1C99BEC *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_217;
      case 0x19:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
        dicMoveByServantGetDesignationItem = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !dicMoveByServantGetDesignationItem )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                           dicMoveByServantGetDesignationItem,
                                           (*v65)->fields.value,
                                           (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
        v89 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v89 )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                           v89,
                                           (*v65)->fields.value,
                                           (const MethodInfo_2F03460 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        goto LABEL_217;
      case 0x1A:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
        v125 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v125 )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                           v125,
                                           (*v65)->fields.value,
                                           (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_249;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
        v126 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v126 )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                           v126,
                                           (*v65)->fields.value,
                                           (const MethodInfo_2F03460 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        goto LABEL_248;
      case 0x1B:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v73 = (*route)->fields.dicUniqueKeyRange;
        v74 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B5D694(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v74,
          (Il2CppObject *)v55,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__,
          (const MethodInfo_279933C *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v73,
                                           (System_Func_TSource__bool__o *)v74,
                                           (const MethodInfo_1C99BEC *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v75 = (*route)->fields.dicUniqueKeyRange;
        v76 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B5D694(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v76,
          (Il2CppObject *)v55,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__,
          (const MethodInfo_279933C *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v75,
                                           (System_Func_TSource__bool__o *)v76,
                                           (const MethodInfo_1C99BEC *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_252;
      case 0x1C:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v121 = (*route)->fields.dicUniqueKeyRange;
        v122 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B5D694(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v122,
          (Il2CppObject *)v55,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__,
          (const MethodInfo_279933C *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v121,
                                           (System_Func_TSource__bool__o *)v122,
                                           (const MethodInfo_1C99BEC *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v127 = (*route)->fields.dicUniqueKeyRange;
        v128 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B5D694(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v128,
          (Il2CppObject *)v55,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__,
          (const MethodInfo_279933C *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v127,
                                           (System_Func_TSource__bool__o *)v128,
                                           (const MethodInfo_1C99BEC *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_252;
      case 0x1D:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v123 = (*route)->fields.basePiece;
        if ( !v123 )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v123, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_249;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v124 = (*route)->fields.actionPiece;
        if ( !v124 )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v124, 0LL);
        goto LABEL_217;
      case 0x1E:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
          if ( !*route )
            sub_B5D69C(HasFlag, v67);
          v116 = (*route)->fields.basePiece;
          if ( !v116 )
            sub_B5D69C(0LL, v67);
          HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v116, 0LL);
          if ( ((unsigned __int8)HasFlag & 1) != 0 )
          {
LABEL_235:
            v80 = 0;
          }
          else
          {
            if ( !*route )
              sub_B5D69C(HasFlag, v67);
            v117 = (*route)->fields.actionPiece;
            if ( !v117 )
              sub_B5D69C(0LL, v67);
            HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v117, 0LL);
LABEL_248:
            v80 = ((unsigned __int8)HasFlag & 1) == 0;
          }
        }
        else
        {
LABEL_249:
          v80 = 1;
        }
        goto LABEL_236;
      case 0x1F:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(HasFlag, v67);
        v80 = (*route)->fields.moveByLinkedItem > 0;
        goto LABEL_236;
      case 0x20:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x10000000LL, 0LL);
LABEL_217:
        v80 = (unsigned __int8)HasFlag & 1;
LABEL_236:
        v70 = v80;
        goto LABEL_237;
      case 0x21:
        if ( !*route )
          sub_B5D69C(0LL, v67);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
LABEL_222:
          v70 = 0;
        }
        else
        {
          if ( !*route )
            sub_B5D69C(0LL, v67);
          HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x200000000LL, 0LL);
LABEL_252:
          v70 = (char)HasFlag;
        }
LABEL_237:
        v69 = *v65;
        if ( !*v65 )
          sub_B5D69C(HasFlag, v67);
        return;
      default:
        v70 = 0;
        break;
    }
    WarBoardAIEvalCalcurater__AddRatingOffsetAddCondition(
      (WarBoardAIEvalCalcurater_o *)HasFlag,
      route,
      v69,
      v70 & 1,
      v69->fields.category,
      v68);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v130,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__);
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
    sub_B5D69C(this, route);
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
    v17 = sub_B5D6C8(this);
    sub_B5D668(v17, 0LL);
  }
LABEL_22:
  LOBYTE(this) = 0;
  return (char)this;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIEvalCalcurater__JudgeSatisfyingTrendCondition(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o *route,
        WarBoardActionTrendConditionEntity_o *condition,
        int32_t condType,
        WarBoardAIRoute_TargetData_o *targetData,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  bool v19; // zf
  bool v20; // zf
  int64_t v21; // x1
  int64_t v22; // x1
  int32_t isMoveByMasterAndEnemyRange; // w8
  int32_t isMoveByServantAndEnemyRange; // w8
  int32_t isMoveByServantAndMasterRange; // w8
  bool isMaster; // w0
  int32_t max_length; // w8
  WarBoardPieceData_o *targetPiece; // x20
  WarBoardPieceData_o *v29; // x19
  WarBoardPieceData_o *detourRoute; // x0
  int32_t v31; // w8
  struct System_Int32_array *v32; // x8
  WarBoardPieceData_o *v33; // x20
  WarBoardPieceData_o *v34; // x21
  int32_t EnemyRangeMin; // w8
  struct System_Int32_array *v36; // x8
  bool v37; // cc
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  int32_t v39; // w19
  bool v40; // cc
  int32_t v41; // w9
  _BOOL4 isAround; // w8
  bool v43; // cc
  struct System_Int32_array *baseRoute; // x8
  _BOOL4 ExistEnemyOnBaseRoute_k__BackingField; // w8
  WarBoardPieceData_o *v46; // x20
  WarBoardPieceData_o *v47; // x19
  int32_t attackCountOnThisTurn; // w8
  WarBoardPieceData_o *actionPiece; // x20
  WarBoardPieceData_o *basePiece; // x21
  WarBoardPieceData_o *v51; // x20
  WarBoardPieceData_o *v52; // x19
  struct System_Int32_array *v53; // x8
  struct System_Int32_array *v54; // x8
  WarBoardPieceData_o *v55; // x20
  WarBoardPieceData_o *v56; // x19
  int32_t v57; // w19
  struct System_Int32_array *v58; // x8
  int32_t actionCountOnThisTurn; // w8
  struct System_Int32_array *v60; // x8
  struct System_Int32_array *v61; // x8
  struct System_Int32_array *v62; // x8
  int32_t actionIndex; // w9
  struct System_Int32_array *v64; // x8
  __int64 v66; // x0
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v68[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42E68CB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__,
      (_DWORD)route,
      (_DWORD)condition,
      *(_QWORD *)&condType);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v13, v14, v15);
    this = (WarBoardAIEvalCalcurater_o *)sub_B5D5C4(&WarBoardAIManager_TypeInfo, v16, v17, v18);
    byte_42E68CB = 1;
  }
  *(_QWORD *)v68 = 0LL;
  value = 0;
  switch ( condType )
  {
    case 1:
      if ( !route )
        goto LABEL_426;
      v21 = 16LL;
      goto LABEL_420;
    case 2:
      if ( !route )
        goto LABEL_426;
      v22 = 16LL;
      goto LABEL_423;
    case 3:
      if ( !route )
        goto LABEL_426;
      v21 = 64LL;
      goto LABEL_420;
    case 4:
      if ( !route )
        goto LABEL_426;
      v22 = 64LL;
      goto LABEL_423;
    case 5:
      if ( !route )
        goto LABEL_426;
      v21 = 0x4000000LL;
      goto LABEL_420;
    case 6:
      if ( !route )
        goto LABEL_426;
      v22 = 0x4000000LL;
      goto LABEL_423;
    case 7:
      if ( !route )
        goto LABEL_426;
      v21 = 1024LL;
      goto LABEL_420;
    case 8:
      if ( !route )
        goto LABEL_426;
      v22 = 1024LL;
      goto LABEL_423;
    case 9:
      if ( !route )
        goto LABEL_426;
      v21 = 0x8000000000LL;
      goto LABEL_420;
    case 10:
      if ( !route )
        goto LABEL_426;
      v22 = 0x8000000000LL;
      goto LABEL_423;
    case 11:
      if ( !route )
        goto LABEL_426;
      v21 = 2048LL;
      goto LABEL_420;
    case 12:
      if ( !route )
        goto LABEL_426;
      v22 = 2048LL;
      goto LABEL_423;
    case 13:
      if ( !route )
        goto LABEL_426;
      v21 = 0x4000000000LL;
      goto LABEL_420;
    case 14:
      if ( !route )
        goto LABEL_426;
      v22 = 0x4000000000LL;
      goto LABEL_423;
    case 15:
      if ( !route )
        goto LABEL_426;
      v21 = 256LL;
      goto LABEL_420;
    case 16:
      if ( !route )
        goto LABEL_426;
      v22 = 256LL;
      goto LABEL_423;
    case 17:
      if ( !route )
        goto LABEL_426;
      v21 = 512LL;
      goto LABEL_420;
    case 18:
      if ( !route )
        goto LABEL_426;
      v22 = 512LL;
      goto LABEL_423;
    case 19:
      if ( !route )
        goto LABEL_426;
      v21 = 4096LL;
      goto LABEL_420;
    case 20:
      if ( !route )
        goto LABEL_426;
      v22 = 4096LL;
      goto LABEL_423;
    case 21:
      if ( !route )
        goto LABEL_426;
      v21 = 0x2000LL;
      goto LABEL_420;
    case 22:
      if ( !route )
        goto LABEL_426;
      v22 = 0x2000LL;
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
                              (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
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
                   (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
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
              &v68[1],
              (const MethodInfo_2F2C47C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_392;
      isMoveByMasterAndEnemyRange = v68[1];
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
              v68,
              (const MethodInfo_2F2C47C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_392;
      isMoveByServantAndEnemyRange = v68[0];
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
              (const MethodInfo_2F2C47C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_392;
      isMoveByServantAndMasterRange = value;
      goto LABEL_356;
    case 43:
      if ( !route )
        goto LABEL_426;
      v21 = 0x4000LL;
      goto LABEL_420;
    case 44:
      if ( !route )
        goto LABEL_426;
      v22 = 0x4000LL;
      goto LABEL_423;
    case 45:
      if ( !route )
        goto LABEL_426;
      v21 = 0x8000LL;
      goto LABEL_420;
    case 46:
      if ( !route )
        goto LABEL_426;
      v22 = 0x8000LL;
      goto LABEL_423;
    case 47:
      if ( !route )
        goto LABEL_426;
      v21 = 0x10000LL;
      goto LABEL_420;
    case 48:
      if ( !route )
        goto LABEL_426;
      v22 = 0x10000LL;
      goto LABEL_423;
    case 49:
      if ( !route )
        goto LABEL_426;
      v21 = 0x20000LL;
      goto LABEL_420;
    case 50:
      if ( !route )
        goto LABEL_426;
      v22 = 0x20000LL;
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
      v21 = 128LL;
      goto LABEL_420;
    case 64:
      if ( !route )
        goto LABEL_426;
      v22 = 128LL;
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
      v33 = route->fields.actionPiece;
      if ( !v33 )
        goto LABEL_392;
      v34 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      if ( !WarBoardAIManager__IsEnemyPiece(v34, v33, (const MethodInfo *)condition) )
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
      v20 = (_DWORD)this == condition->fields.value;
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
      v31 = route->fields.actionCountOnThisTurn;
      goto LABEL_160;
    case 74:
    case 127:
      v19 = targetData == 0LL;
      goto LABEL_362;
    case 75:
    case 128:
      v20 = targetData == 0LL;
      goto LABEL_409;
    case 76:
      if ( !targetData )
        goto LABEL_392;
      targetPiece = targetData->fields.targetPiece;
      if ( !targetPiece )
        goto LABEL_392;
      if ( !route )
        goto LABEL_426;
      v29 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      LOBYTE(detourRoute) = WarBoardAIManager__IsEnemyPiece(v29, targetPiece, (const MethodInfo *)condition);
      return (unsigned __int8)detourRoute & 1;
    case 77:
      if ( !targetData )
        goto LABEL_392;
      v51 = targetData->fields.targetPiece;
      if ( !v51 )
        goto LABEL_274;
      if ( !route )
        goto LABEL_426;
      v52 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      isMaster = WarBoardAIManager__IsEnemyPiece(v52, v51, (const MethodInfo *)condition);
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
      v57 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)detourRoute,
              (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
      this = (WarBoardAIEvalCalcurater_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
                                             (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_426;
      v40 = v57 - (int)this <= condition->fields.value;
      goto LABEL_184;
    case 84:
      if ( !targetData )
        goto LABEL_392;
      v38 = (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.detourRoute;
      if ( !v38 )
        goto LABEL_274;
      v39 = System_Linq_Enumerable__Count_int_(
              v38,
              (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
      this = (WarBoardAIEvalCalcurater_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
                                             (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_426;
      v37 = v39 - (int)this <= condition->fields.value;
      goto LABEL_123;
    case 85:
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
LABEL_305:
      isMoveByMasterAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_405;
    case 86:
      if ( !targetData )
        goto LABEL_392;
      v32 = targetData->fields.detourRoute;
      if ( !v32 )
        goto LABEL_392;
      if ( v32->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v32->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
LABEL_239:
      isMoveByServantAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_408;
    case 87:
      if ( !targetData )
        goto LABEL_392;
      v64 = targetData->fields.detourRoute;
      if ( !v64 )
        goto LABEL_392;
      if ( v64->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v64->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
LABEL_355:
      isMoveByServantAndMasterRange = targetData->fields.moveByDistanceType;
      goto LABEL_356;
    case 88:
      if ( !route )
        goto LABEL_426;
      v21 = 0x20000000LL;
      goto LABEL_420;
    case 89:
      if ( !route )
        goto LABEL_426;
      v22 = 0x20000000LL;
      goto LABEL_423;
    case 90:
      if ( !route )
        goto LABEL_426;
      v21 = 0x40000000LL;
      goto LABEL_420;
    case 91:
      if ( !route )
        goto LABEL_426;
      v22 = 0x40000000LL;
      goto LABEL_423;
    case 92:
      if ( !route )
        goto LABEL_426;
      v21 = 0x80000000LL;
      goto LABEL_420;
    case 93:
      if ( !route )
        goto LABEL_426;
      v22 = 0x80000000LL;
      goto LABEL_423;
    case 94:
      if ( !route )
        goto LABEL_426;
      v21 = 0x100000000LL;
      goto LABEL_420;
    case 95:
      if ( !route )
        goto LABEL_426;
      v22 = 0x100000000LL;
      goto LABEL_423;
    case 96:
      if ( !targetData )
        goto LABEL_392;
      isAround = targetData->fields._ExistEnemyOnBaseRoute_k__BackingField;
LABEL_361:
      v19 = !isAround;
      goto LABEL_362;
    case 97:
      if ( !targetData )
        goto LABEL_392;
      ExistEnemyOnBaseRoute_k__BackingField = targetData->fields._ExistEnemyOnBaseRoute_k__BackingField;
LABEL_277:
      v20 = !ExistEnemyOnBaseRoute_k__BackingField;
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
      v43 = attackCountOnThisTurn < condition->fields.value;
LABEL_347:
      LOBYTE(detourRoute) = !v43;
      return (unsigned __int8)detourRoute & 1;
    case 102:
      if ( !route )
        goto LABEL_426;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_RouteData__HasFlag(route, 2LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_392;
      if ( !condition )
        goto LABEL_426;
      v31 = route->fields.attackCountOnThisTurn;
LABEL_160:
      v41 = condition->fields.value;
      goto LABEL_183;
    case 103:
      if ( !route )
        goto LABEL_426;
      v21 = 0x400000000LL;
      goto LABEL_420;
    case 104:
      if ( !route )
        goto LABEL_426;
      v22 = 0x400000000LL;
      goto LABEL_423;
    case 105:
      if ( !route )
        goto LABEL_426;
      v21 = 0x800000000LL;
      goto LABEL_420;
    case 106:
      if ( !route )
        goto LABEL_426;
      v22 = 0x800000000LL;
      goto LABEL_423;
    case 107:
      if ( !route )
        goto LABEL_426;
      v21 = 0x1000000000LL;
      goto LABEL_420;
    case 108:
      if ( !route )
        goto LABEL_426;
      v22 = 0x1000000000LL;
      goto LABEL_423;
    case 109:
      if ( !route )
        goto LABEL_426;
      v21 = 0x2000000000LL;
      goto LABEL_420;
    case 110:
      if ( !route )
        goto LABEL_426;
      v22 = 0x2000000000LL;
      goto LABEL_423;
    case 111:
      if ( !targetData )
        goto LABEL_392;
      v46 = targetData->fields.targetPiece;
      if ( !v46 )
        goto LABEL_392;
      if ( !route )
        goto LABEL_426;
      v47 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      LOBYTE(detourRoute) = WarBoardAIManager__IsAllyPiece(v47, v46, (const MethodInfo *)condition);
      return (unsigned __int8)detourRoute & 1;
    case 112:
      if ( !targetData )
        goto LABEL_392;
      v55 = targetData->fields.targetPiece;
      if ( !v55 )
        goto LABEL_274;
      if ( !route )
        goto LABEL_426;
      v56 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      isMaster = WarBoardAIManager__IsAllyPiece(v56, v55, (const MethodInfo *)condition);
LABEL_424:
      LOBYTE(detourRoute) = !isMaster;
      return (unsigned __int8)detourRoute & 1;
    case 113:
      if ( !targetData )
        goto LABEL_392;
      v62 = targetData->fields.detourRoute;
      if ( !v62 )
        goto LABEL_392;
      if ( v62->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      actionCountOnThisTurn = v62->m_Items[2];
      actionIndex = route->fields.actionIndex;
LABEL_371:
      v20 = actionCountOnThisTurn == actionIndex;
      goto LABEL_409;
    case 114:
      if ( !targetData )
        goto LABEL_392;
      v61 = targetData->fields.detourRoute;
      if ( !v61 )
        goto LABEL_392;
      if ( v61->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      v19 = v61->m_Items[2] == route->fields.actionIndex;
LABEL_362:
      LOBYTE(detourRoute) = !v19;
      return (unsigned __int8)detourRoute & 1;
    case 115:
      if ( !route )
        goto LABEL_426;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v20 = WarBoardPieceData__get_ActionType(detourRoute, 0LL) == 1;
      goto LABEL_409;
    case 116:
      if ( !route )
        goto LABEL_426;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v20 = WarBoardPieceData__get_ActionType(detourRoute, 0LL) == 2;
      goto LABEL_409;
    case 117:
      if ( !route )
        goto LABEL_426;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v20 = WarBoardPieceData__get_ActionType(detourRoute, 0LL) == 3;
      goto LABEL_409;
    case 118:
      if ( !route )
        goto LABEL_426;
      v21 = 0x10000000000LL;
      goto LABEL_420;
    case 119:
      if ( !route )
        goto LABEL_426;
      v22 = 0x10000000000LL;
      goto LABEL_423;
    case 120:
      if ( !route )
        goto LABEL_426;
      v21 = 0x20000000000LL;
      goto LABEL_420;
    case 121:
      if ( !route )
        goto LABEL_426;
      v22 = 0x20000000000LL;
      goto LABEL_423;
    case 122:
      if ( !targetData )
        goto LABEL_392;
      v53 = targetData->fields.detourRoute;
      if ( !v53 )
        goto LABEL_392;
      if ( v53->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v53->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
      isMoveByMasterAndEnemyRange = targetData->fields.detourMoveByDistanceType;
LABEL_405:
      v20 = isMoveByMasterAndEnemyRange == 1;
      goto LABEL_409;
    case 123:
      if ( !targetData )
        goto LABEL_392;
      v60 = targetData->fields.detourRoute;
      if ( !v60 )
        goto LABEL_392;
      if ( v60->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v60->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
      isMoveByServantAndEnemyRange = targetData->fields.detourMoveByDistanceType;
LABEL_408:
      v20 = isMoveByServantAndEnemyRange == 3;
      goto LABEL_409;
    case 124:
      if ( !targetData )
        goto LABEL_392;
      v54 = targetData->fields.detourRoute;
      if ( !v54 )
        goto LABEL_392;
      if ( v54->max_length <= 1 )
      {
LABEL_428:
        v66 = sub_B5D6C8(this);
        sub_B5D668(v66, 0LL);
      }
      if ( !route )
        goto LABEL_426;
      if ( v54->m_Items[2] == route->fields.actionIndex )
      {
        isMoveByServantAndMasterRange = targetData->fields.detourMoveByDistanceType;
LABEL_356:
        v20 = isMoveByServantAndMasterRange == 2;
LABEL_409:
        LOBYTE(detourRoute) = v20;
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
      v21 = 0x40000000000LL;
LABEL_420:
      LOBYTE(detourRoute) = WarBoardAIRoute_RouteData__HasFlag(route, v21, 0LL);
      return (unsigned __int8)detourRoute & 1;
    case 126:
      if ( !route )
        goto LABEL_426;
      v22 = 0x40000000000LL;
LABEL_423:
      isMaster = WarBoardAIRoute_RouteData__HasFlag(route, v22, 0LL);
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
      v41 = condition->fields.value;
      v31 = EnemyRangeMin - 1;
LABEL_183:
      v40 = v31 <= v41;
LABEL_184:
      LOBYTE(detourRoute) = v40;
      break;
    case 130:
      if ( !condition )
        goto LABEL_426;
      if ( !targetData )
        goto LABEL_274;
      v36 = targetData->fields.baseRoute;
      if ( !v36 )
LABEL_426:
        sub_B5D69C(this, route);
      max_length = v36->max_length;
LABEL_122:
      v37 = max_length - 1 <= condition->fields.value;
LABEL_123:
      LOBYTE(detourRoute) = !v37;
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
      v43 = (int)this < condition->fields.value;
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
      v40 = (int)this <= condition->fields.value;
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
        sub_B5D69C(this, route);
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
  __int64 v3; // x3
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v5; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v5 = this;
  if ( (byte_42E703D & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B5D5C4(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x.fields.key,
                                                                (_DWORD)method,
                                                                v3);
    byte_42E703D = 1;
  }
  ratingOffset = v5->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(this, x);
  return value - 1 == ratingOffset->fields.value;
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__1(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v5; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v5 = this;
  if ( (byte_42E703E & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B5D5C4(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x.fields.key,
                                                                (_DWORD)method,
                                                                v3);
    byte_42E703E = 1;
  }
  ratingOffset = v5->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(this, x);
  return value - 1 >= ratingOffset->fields.value;
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__2(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v5; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v5 = this;
  if ( (byte_42E703F & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B5D5C4(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x.fields.key,
                                                                (_DWORD)method,
                                                                v3);
    byte_42E703F = 1;
  }
  ratingOffset = v5->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(this, x);
  return ratingOffset->fields.value2 >= value - 1;
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__3(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v5; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v5 = this;
  if ( (byte_42E7040 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B5D5C4(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x.fields.key,
                                                                (_DWORD)method,
                                                                v3);
    byte_42E7040 = 1;
  }
  ratingOffset = v5->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(this, x);
  return value - 1 == ratingOffset->fields.value;
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__4(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v5; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v5 = this;
  if ( (byte_42E7041 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B5D5C4(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x.fields.key,
                                                                (_DWORD)method,
                                                                v3);
    byte_42E7041 = 1;
  }
  ratingOffset = v5->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(this, x);
  return ratingOffset->fields.value2 >= value - 1;
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__5(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v5; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v5 = this;
  if ( (byte_42E7042 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_B5D5C4(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x.fields.key,
                                                                (_DWORD)method,
                                                                v3);
    byte_42E7042 = 1;
  }
  ratingOffset = v5->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(this, x);
  return value - 1 >= ratingOffset->fields.value;
}