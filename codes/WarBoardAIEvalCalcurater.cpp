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
  sub_B16F98(
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
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int32_array *actionTypeIds; // x8
  unsigned __int64 v10; // x9
  il2cpp_array_size_t max_length; // w11
  int32_t v12; // w11
  WarBoardAIRoute_RouteData_o *v13; // x11
  __int64 v14; // x12

  if ( !*route
    || (WarBoardAIEvalCalcurater__AddTrendEvalValue(this, (*route)->fields.evalOffsetMagnification, trend, method),
        !trend)
    || (actionTypeIds = trend->fields.actionTypeIds) == 0LL )
  {
LABEL_17:
    sub_B170D4();
  }
  if ( (int)*(_QWORD *)&actionTypeIds->max_length >= 1 )
  {
    v10 = 0LL;
    max_length = *(_QWORD *)&actionTypeIds->max_length;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        sub_B17100(v6, v7, v8);
        sub_B170A0();
      }
      v12 = actionTypeIds->m_Items[v10 + 1];
      if ( v12 == 2 )
        break;
      if ( v12 == 1 )
      {
        v13 = *route;
        if ( !*route )
          goto LABEL_17;
        v14 = 4LL;
LABEL_13:
        v13->fields.flagNow |= v14;
      }
      max_length = actionTypeIds->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        return;
    }
    v13 = *route;
    if ( !*route )
      goto LABEL_17;
    v14 = 8LL;
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct WarBoardAIRoute_PiecePersonality_o *piecePersonalityList; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *actionTrandList; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicPutIndexTargetData; // x22
  int64_t TrendKey; // x1
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x3
  Il2CppClass *v19; // x8
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *FutureLookingTrendHashSet; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-60h] BYREF
  WarBoardAIRoute_TargetData_o *value; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_40F8BC1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__, route);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__, v9);
    byte_40F8BC1 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  value = 0LL;
  piecePersonalityList = this->fields.piecePersonalityList;
  if ( !piecePersonalityList
    || (actionTrandList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)piecePersonalityList->fields.actionTrandList) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    actionTrandList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__) )
  {
    value = 0LL;
    current = v22.fields.current;
    if ( !*route )
      sub_B170D4();
    if ( !v22.fields.current )
      sub_B170D4();
    klass = v22.fields.current[1].klass;
    if ( !klass )
      sub_B170D4();
    dicPutIndexTargetData = (*route)->fields.dicPutIndexTargetData;
    TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, v12);
    if ( !dicPutIndexTargetData )
      sub_B170D4();
    System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___TryGetValue(
      dicPutIndexTargetData,
      TrendKey,
      &value,
      (const MethodInfo_2E14828 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
    if ( WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
           this,
           *route,
           (WarBoardAIRoute_ActionTrendInfo_o *)current,
           value,
           v17) )
    {
      WarBoardAIEvalCalcurater__AddRatingBaseOffsetValue(
        this,
        route,
        (WarBoardActionTrendEntity_o *)current[1].klass,
        v18);
      v19 = current[1].klass;
      if ( !v19 )
        sub_B170D4();
      if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)&v19->_1.this_arg.bits, 0LL) )
      {
        if ( !*route )
          sub_B170D4();
        FutureLookingTrendHashSet = WarBoardAIRoute_RouteData__get_FutureLookingTrendHashSet(*route, 0LL);
        if ( !FutureLookingTrendHashSet )
          sub_B170D4();
        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
          (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)FutureLookingTrendHashSet,
          (WarBoardAIRoute_RouteData_o *)current,
          (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
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
  WarBoardAIRoute_RouteData_o *v16; // x0
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *FutureLookingTrendHashSet; // x0
  int v18; // w25
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *monitor; // x0
  const MethodInfo *v20; // x1
  WarBoardAIRoute_ActionTrendInfo_o *current; // x22
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicPutIndexTargetData; // x23
  int64_t TrendKey; // x1
  const MethodInfo *v25; // x4
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x3
  __int64 v30; // x4
  WarBoardAIRoute_RouteData_o *v31; // x8
  BattleServantConfConponent_o *p_futureEvalOffsetMag; // x23
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *v33; // x24
  bool IsAttack; // w0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int v41; // w23
  int v42; // w20
  _BYTE v43[32]; // [xsp+10h] [xbp-C0h] BYREF
  int v44; // [xsp+30h] [xbp-A0h]
  WarBoardAIRoute_TargetData_o *value; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v47; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_40F8BC2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__, route);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__, v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__,
      v12);
    sub_B16FFC(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__, v15);
    byte_40F8BC2 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  memset(&v46, 0, sizeof(v46));
  value = 0LL;
  v44 = 0;
  if ( !*route )
    goto LABEL_39;
  if ( !WarBoardAIRoute_RouteData__HasFutureTrend(*route, 0LL) )
    return;
  v16 = *route;
  if ( !*route || !futureRoute )
    goto LABEL_39;
  if ( v16->fields.basePiece != futureRoute->fields.basePiece )
    return;
  FutureLookingTrendHashSet = WarBoardAIRoute_RouteData__get_FutureLookingTrendHashSet(v16, 0LL);
  if ( !FutureLookingTrendHashSet )
LABEL_39:
    sub_B170D4();
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)v43,
    FutureLookingTrendHashSet,
    (const MethodInfo_21DF444 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v18 = 0;
  v47 = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v43;
  while ( System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
            &v47,
            (const MethodInfo_20739E4 *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__) )
  {
    if ( !v47.fields._current )
      sub_B170D4();
    monitor = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v47.fields._current[2].monitor;
    if ( !monitor )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v43,
      monitor,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v46 = *(System_Collections_Generic_List_Enumerator_T__o *)v43;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v46,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__) )
    {
      current = (WarBoardAIRoute_ActionTrendInfo_o *)v46.fields.current;
      if ( !v46.fields.current )
        sub_B170D4();
      klass = v46.fields.current[1].klass;
      if ( !klass )
        sub_B170D4();
      dicPutIndexTargetData = futureRoute->fields.dicPutIndexTargetData;
      TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, v20);
      if ( !dicPutIndexTargetData )
        sub_B170D4();
      System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___TryGetValue(
        dicPutIndexTargetData,
        TrendKey,
        &value,
        (const MethodInfo_2E14828 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
      v26 = WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(this, futureRoute, current, value, v25);
      if ( v26 )
      {
        v31 = *route;
        if ( !*route )
          sub_B170D4();
        p_futureEvalOffsetMag = (BattleServantConfConponent_o *)&v31->fields.futureEvalOffsetMag;
        if ( !v31->fields.futureEvalOffsetMag )
        {
          v33 = (WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)sub_B170CC(
                                                                         WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo,
                                                                         v27,
                                                                         v28,
                                                                         v29,
                                                                         v30);
          WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(v33, 0LL);
          IsAttack = WarBoardAIRoute_RouteData__get_IsAttack(futureRoute, 0LL);
          if ( !v33 )
            sub_B170D4();
          v33->fields.isAttack = IsAttack;
          p_futureEvalOffsetMag->klass = (BattleServantConfConponent_c *)v33;
          sub_B16F98(p_futureEvalOffsetMag, (System_Int32_array **)v33, v35, v36, v37, v38, v39, v40);
          v31 = *route;
          if ( !*route )
            sub_B170D4();
        }
        WarBoardAIEvalCalcurater__AddTrendEvalValue(
          (WarBoardAIEvalCalcurater_o *)v26,
          v31->fields.futureEvalOffsetMag,
          current->fields._Entity_k__BackingField,
          v29);
      }
    }
    *(_DWORD *)&v43[4 * v18 + 24] = 189;
    v41 = ++v44;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v46,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    v18 = 0;
    if ( v41 )
    {
      v18 = v41;
      if ( *(_DWORD *)&v43[4 * v41 + 20] == 189 )
      {
        v18 = v41 - 1;
        v44 = v41 - 1;
      }
    }
  }
  *(_DWORD *)&v43[4 * v18 + 24] = 217;
  v42 = ++v44;
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v47,
    (const MethodInfo_20739E0 *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
  if ( v42 && *(_DWORD *)&v43[4 * v42 + 20] == 217 )
    v44 = v42 - 1;
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **current; // x1
  WarBoardRatingOffsetEntity_o **v35; // x20
  WarBoardAIManager_c *HasFlag; // x0
  const MethodInfo *v37; // x5
  WarBoardRatingOffsetEntity_o *v38; // x2
  char v39; // w8
  WarBoardRatingOffsetEntity_o *v40; // x9
  int32_t attackByLinkedEnemy; // w8
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  struct System_Collections_Generic_Dictionary_uint__int__o *v46; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  struct System_Collections_Generic_Dictionary_uint__int__o *v52; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v53; // x23
  WarBoardPieceData_o *v54; // x0
  struct WarBoardPieceData_o *v55; // x8
  struct BattleServantData_o *v56; // x8
  _BOOL4 v57; // w8
  struct WarBoardPieceData_o *v58; // x21
  WarBoardRatingOffsetEntity_o *v59; // x8
  float v60; // s0
  int v61; // w9
  WarBoardPieceData_o *v62; // x0
  WarBoardPieceData_o *v63; // x0
  WarBoardPieceData_o *v64; // x0
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  struct System_Collections_Generic_Dictionary_uint__int__o *v71; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v72; // x23
  WarBoardPieceData_o *v73; // x0
  struct WarBoardPieceData_o *v74; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardRatingOffsetEntity_o *v76; // x9
  int32_t np; // w8
  WarBoardPieceData_o *v78; // x0
  int32_t moveByLinkedEnemy; // w8
  bool v80; // zf
  struct WarBoardPieceData_o *actionPiece; // x21
  WarBoardPieceData_o *v82; // x0
  int32_t breakPointMax_k__BackingField; // w21
  int32_t breakPoint_k__BackingField; // w22
  int v85; // w9
  WarBoardAIRoute_RouteData_o *v86; // x8
  struct WarBoardPieceData_o *basePiece; // x21
  bool v88; // cc
  struct WarBoardPieceData_o *v89; // x21
  WarBoardPieceData_o *v90; // x0
  int32_t v91; // w21
  int32_t v92; // w22
  WarBoardPieceData_o *v93; // x0
  WarBoardPieceData_o *v94; // x0
  WarBoardPieceData_o *v95; // x0
  WarBoardPieceData_o *v96; // x0
  WarBoardAIRoute_RouteData_o *v97; // x8
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  struct System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v103; // x23
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  struct System_Collections_Generic_Dictionary_uint__int__o *v108; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v109; // x23
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  WarBoardPieceData_o *v114; // x0
  WarBoardPieceData_o *v115; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v116; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v117; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v118; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v119; // x23
  System_Collections_Generic_List_Enumerator_T__o v120; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v121; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F8BC4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, route);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__get_Current__, v11);
    sub_B16FFC(&Method_System_Func_KeyValuePair_uint__int___bool___ctor__, v12);
    sub_B16FFC(&System_Func_KeyValuePair_uint__int___bool__TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__, v14);
    sub_B16FFC(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__, v15);
    sub_B16FFC(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__, v16);
    sub_B16FFC(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__, v17);
    sub_B16FFC(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__, v18);
    sub_B16FFC(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__, v19);
    sub_B16FFC(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__, v20);
    sub_B16FFC(&WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo, v21);
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v22);
    byte_40F8BC4 = 1;
  }
  memset(&v121, 0, sizeof(v121));
  if ( !*route || !ratingOffsetList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v120,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ratingOffsetList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__);
  v121 = v120;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v121,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__) )
  {
    v27 = sub_B170CC(WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo, v23, v24, v25, v26);
    WarBoardAIEvalCalcurater___c__DisplayClass9_0___ctor((WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)v27, 0LL);
    if ( !v27 )
      sub_B170D4();
    current = (System_Int32_array **)v121.fields.current;
    *(_QWORD *)(v27 + 16) = v121.fields.current;
    v35 = (WarBoardRatingOffsetEntity_o **)(v27 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v27 + 16), current, v28, v29, v30, v31, v32, v33);
    v38 = *(WarBoardRatingOffsetEntity_o **)(v27 + 16);
    if ( !v38 )
      sub_B170D4();
    v39 = 1;
    switch ( v38->fields.type )
    {
      case 0:
        break;
      case 1:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        v40 = *v35;
        if ( !*v35 )
          sub_B170D4();
        attackByLinkedEnemy = (*route)->fields.attackByLinkedEnemy;
        goto LABEL_167;
      case 2:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        v40 = *v35;
        if ( !*v35 )
          sub_B170D4();
        attackByLinkedEnemy = (*route)->fields.attackByLinkedAlly;
        goto LABEL_167;
      case 3:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        goto LABEL_217;
      case 4:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        goto LABEL_248;
      case 5:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B170D4();
        actionPiece = (*route)->fields.actionPiece;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !actionPiece )
          sub_B170D4();
        if ( !*route )
          sub_B170D4();
        v82 = (*route)->fields.actionPiece;
        if ( !v82 )
          sub_B170D4();
        breakPoint_k__BackingField = actionPiece->fields._breakPoint_k__BackingField;
        breakPointMax_k__BackingField = actionPiece->fields._breakPointMax_k__BackingField;
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v82, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
          v59 = *v35;
          if ( !*v35 )
            sub_B170D4();
          v60 = (float)(breakPoint_k__BackingField + 1) / (float)(breakPointMax_k__BackingField + 1);
          v85 = v59->fields.value / 100;
LABEL_148:
          if ( v60 <= (float)v85 )
            goto LABEL_149;
        }
        goto LABEL_235;
      case 6:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B170D4();
        v89 = (*route)->fields.actionPiece;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !v89 )
          sub_B170D4();
        if ( !*route )
          sub_B170D4();
        v90 = (*route)->fields.actionPiece;
        if ( !v90 )
          sub_B170D4();
        v92 = v89->fields._breakPoint_k__BackingField;
        v91 = v89->fields._breakPointMax_k__BackingField;
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v90, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        v59 = *v35;
        if ( !*v35 )
          sub_B170D4();
        v60 = (float)(v92 + 1) / (float)(v91 + 1);
        v61 = v59->fields.value / 100;
LABEL_36:
        if ( v60 >= (float)v61 )
          goto LABEL_235;
LABEL_149:
        v88 = v60 < (float)(v59->fields.value2 / 100);
        goto LABEL_210;
      case 7:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        v78 = (*route)->fields.actionPiece;
        if ( !v78 )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isMaster(v78, 0LL);
        goto LABEL_217;
      case 8:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        v94 = (*route)->fields.actionPiece;
        if ( !v94 )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isMaster(v94, 0LL);
        goto LABEL_248;
      case 9:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        v64 = (*route)->fields.actionPiece;
        if ( !v64 )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v64, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        goto LABEL_217;
      case 0xA:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        v93 = (*route)->fields.actionPiece;
        if ( !v93 )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v93, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        goto LABEL_217;
      case 0xB:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        v62 = (*route)->fields.actionPiece;
        if ( !v62 )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v62, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000LL, 0LL);
        goto LABEL_217;
      case 0xC:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B170D4();
        v63 = (*route)->fields.actionPiece;
        if ( !v63 )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v63, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000LL, 0LL);
        v39 = (unsigned __int8)HasFlag ^ 1;
        goto LABEL_237;
      case 0xD:
        if ( !*route )
          sub_B170D4();
        basePiece = (*route)->fields.basePiece;
        HasFlag = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !basePiece )
          sub_B170D4();
        v59 = *v35;
        if ( !*v35 )
          sub_B170D4();
        v60 = (float)(basePiece->fields._breakPoint_k__BackingField + 1)
            / (float)(basePiece->fields._breakPointMax_k__BackingField + 1);
        v85 = v59->fields.value / 100;
        goto LABEL_148;
      case 0xE:
        if ( !*route )
          sub_B170D4();
        v58 = (*route)->fields.basePiece;
        HasFlag = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        }
        if ( !v58 )
          sub_B170D4();
        v59 = *v35;
        if ( !*v35 )
          sub_B170D4();
        v60 = (float)(v58->fields._breakPoint_k__BackingField + 1)
            / (float)(v58->fields._breakPointMax_k__BackingField + 1);
        v61 = v59->fields.value / 100;
        goto LABEL_36;
      case 0xF:
        if ( !*route )
          sub_B170D4();
        v73 = (*route)->fields.basePiece;
        if ( !v73 )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v73, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        v74 = (*route)->fields.basePiece;
        if ( !v74 )
          sub_B170D4();
        battleServant_k__BackingField = v74->fields._battleServant_k__BackingField;
        if ( !battleServant_k__BackingField )
          sub_B170D4();
        v76 = *v35;
        if ( !*v35 )
          sub_B170D4();
        np = battleServant_k__BackingField->fields.np;
        goto LABEL_209;
      case 0x10:
        if ( !*route )
          sub_B170D4();
        v54 = (*route)->fields.basePiece;
        if ( !v54 )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v54, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        v55 = (*route)->fields.basePiece;
        if ( !v55 )
          sub_B170D4();
        v56 = v55->fields._battleServant_k__BackingField;
        if ( !v56 )
          sub_B170D4();
        if ( !*v35 )
          sub_B170D4();
        v57 = v56->fields.np < (*v35)->fields.value;
        goto LABEL_236;
      case 0x11:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        moveByLinkedEnemy = (*route)->fields.moveByLinkedEnemy;
        goto LABEL_123;
      case 0x12:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v86 = *route;
        if ( !*route )
          sub_B170D4();
        v40 = *v35;
        if ( !*v35 )
          sub_B170D4();
        goto LABEL_166;
      case 0x13:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v97 = *route;
        if ( !*route )
          sub_B170D4();
        v76 = *v35;
        if ( !*v35 )
          sub_B170D4();
        goto LABEL_208;
      case 0x14:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        moveByLinkedEnemy = (*route)->fields.moveByLinkedAlly;
LABEL_123:
        v80 = moveByLinkedEnemy == 0;
        goto LABEL_168;
      case 0x15:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v86 = *route;
        if ( !*route )
          sub_B170D4();
        v40 = *v35;
        if ( !*v35 )
          sub_B170D4();
LABEL_166:
        attackByLinkedEnemy = v86->fields.moveByLinkedEnemy;
LABEL_167:
        v80 = attackByLinkedEnemy == v40->fields.value;
LABEL_168:
        v57 = v80;
        goto LABEL_236;
      case 0x16:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        v97 = *route;
        if ( !*route )
          sub_B170D4();
        v76 = *v35;
        if ( !*v35 )
          sub_B170D4();
LABEL_208:
        np = v97->fields.moveByLinkedEnemy;
LABEL_209:
        v88 = np < v76->fields.value;
LABEL_210:
        v57 = !v88;
        goto LABEL_236;
      case 0x17:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        dicUniqueKeyRange = (*route)->fields.dicUniqueKeyRange;
        v103 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B170CC(
                                                                 System_Func_KeyValuePair_uint__int___bool__TypeInfo,
                                                                 v98,
                                                                 v99,
                                                                 v100,
                                                                 v101);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v103,
          (Il2CppObject *)v27,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__,
          (const MethodInfo_2B614C8 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)dicUniqueKeyRange,
                                           (System_Func_TSource__bool__o *)v103,
                                           (const MethodInfo_18C8E50 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_217;
      case 0x18:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        v71 = (*route)->fields.dicUniqueKeyRange;
        v72 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B170CC(
                                                                System_Func_KeyValuePair_uint__int___bool__TypeInfo,
                                                                v67,
                                                                v68,
                                                                v69,
                                                                v70);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v72,
          (Il2CppObject *)v27,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__,
          (const MethodInfo_2B614C8 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v71,
                                           (System_Func_TSource__bool__o *)v72,
                                           (const MethodInfo_18C8E50 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_217;
      case 0x19:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        if ( !*v35 )
          sub_B170D4();
        dicMoveByServantGetDesignationItem = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !dicMoveByServantGetDesignationItem )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                           dicMoveByServantGetDesignationItem,
                                           (*v35)->fields.value,
                                           (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        if ( !*v35 )
          sub_B170D4();
        v66 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v66 )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                           v66,
                                           (*v35)->fields.value,
                                           (const MethodInfo_2DD55BC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        goto LABEL_217;
      case 0x1A:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        if ( !*v35 )
          sub_B170D4();
        v116 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v116 )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                           v116,
                                           (*v35)->fields.value,
                                           (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_249;
        if ( !*route )
          sub_B170D4();
        if ( !*v35 )
          sub_B170D4();
        v117 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v117 )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                           v117,
                                           (*v35)->fields.value,
                                           (const MethodInfo_2DD55BC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        goto LABEL_248;
      case 0x1B:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B170D4();
        v46 = (*route)->fields.dicUniqueKeyRange;
        v47 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B170CC(
                                                                System_Func_KeyValuePair_uint__int___bool__TypeInfo,
                                                                v42,
                                                                v43,
                                                                v44,
                                                                v45);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v47,
          (Il2CppObject *)v27,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__,
          (const MethodInfo_2B614C8 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v46,
                                           (System_Func_TSource__bool__o *)v47,
                                           (const MethodInfo_18C8E50 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B170D4();
        v52 = (*route)->fields.dicUniqueKeyRange;
        v53 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B170CC(
                                                                System_Func_KeyValuePair_uint__int___bool__TypeInfo,
                                                                v48,
                                                                v49,
                                                                v50,
                                                                v51);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v53,
          (Il2CppObject *)v27,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__,
          (const MethodInfo_2B614C8 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v52,
                                           (System_Func_TSource__bool__o *)v53,
                                           (const MethodInfo_18C8E50 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_252;
      case 0x1C:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B170D4();
        v108 = (*route)->fields.dicUniqueKeyRange;
        v109 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B170CC(
                                                                 System_Func_KeyValuePair_uint__int___bool__TypeInfo,
                                                                 v104,
                                                                 v105,
                                                                 v106,
                                                                 v107);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v109,
          (Il2CppObject *)v27,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__,
          (const MethodInfo_2B614C8 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v108,
                                           (System_Func_TSource__bool__o *)v109,
                                           (const MethodInfo_18C8E50 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_222;
        if ( !*route )
          sub_B170D4();
        v118 = (*route)->fields.dicUniqueKeyRange;
        v119 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_B170CC(
                                                                 System_Func_KeyValuePair_uint__int___bool__TypeInfo,
                                                                 v110,
                                                                 v111,
                                                                 v112,
                                                                 v113);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v119,
          (Il2CppObject *)v27,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__,
          (const MethodInfo_2B614C8 *)Method_System_Func_KeyValuePair_uint__int___bool___ctor__);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v118,
                                           (System_Func_TSource__bool__o *)v119,
                                           (const MethodInfo_18C8E50 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_252;
      case 0x1D:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        v114 = (*route)->fields.basePiece;
        if ( !v114 )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v114, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_249;
        if ( !*route )
          sub_B170D4();
        v115 = (*route)->fields.actionPiece;
        if ( !v115 )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v115, 0LL);
        goto LABEL_217;
      case 0x1E:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
          if ( !*route )
            sub_B170D4();
          v95 = (*route)->fields.basePiece;
          if ( !v95 )
            sub_B170D4();
          HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v95, 0LL);
          if ( ((unsigned __int8)HasFlag & 1) != 0 )
          {
LABEL_235:
            v57 = 0;
          }
          else
          {
            if ( !*route )
              sub_B170D4();
            v96 = (*route)->fields.actionPiece;
            if ( !v96 )
              sub_B170D4();
            HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v96, 0LL);
LABEL_248:
            v57 = ((unsigned __int8)HasFlag & 1) == 0;
          }
        }
        else
        {
LABEL_249:
          v57 = 1;
        }
        goto LABEL_236;
      case 0x1F:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        v57 = (*route)->fields.moveByLinkedItem > 0;
        goto LABEL_236;
      case 0x20:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_235;
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x10000000LL, 0LL);
LABEL_217:
        v57 = (unsigned __int8)HasFlag & 1;
LABEL_236:
        v39 = v57;
        goto LABEL_237;
      case 0x21:
        if ( !*route )
          sub_B170D4();
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
LABEL_222:
          v39 = 0;
        }
        else
        {
          if ( !*route )
            sub_B170D4();
          HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x200000000LL, 0LL);
LABEL_252:
          v39 = (char)HasFlag;
        }
LABEL_237:
        v38 = *v35;
        if ( !*v35 )
          sub_B170D4();
        return;
      default:
        v39 = 0;
        break;
    }
    WarBoardAIEvalCalcurater__AddRatingOffsetAddCondition(
      (WarBoardAIEvalCalcurater_o *)HasFlag,
      route,
      v38,
      v39 & 1,
      v38->fields.category,
      v37);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v121,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__);
}


bool __fastcall WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o *route,
        WarBoardAIRoute_ActionTrendInfo_o *actionTrend,
        WarBoardAIRoute_TargetData_o *targetData,
        const MethodInfo *method)
{
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x5
  int max_length; // w8
  WarBoardActionTrendConditionEntity_array *v13; // x22
  int v14; // w24
  __int64 v15; // x0
  WarBoardActionTrendConditionEntity_o *v16; // x23
  struct System_Int32_array *conditionTypes; // x25
  __int64 v18; // x8
  unsigned __int64 v19; // x26
  int32_t v20; // w3

  if ( !actionTrend
    || (ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(actionTrend, 0LL)) == 0LL )
  {
LABEL_24:
    sub_B170D4();
  }
  max_length = ConditionEntityArray->max_length;
  v13 = ConditionEntityArray;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v15 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        goto LABEL_23;
      v16 = v13->m_Items[v14];
      if ( !v16 )
        goto LABEL_24;
      conditionTypes = v16->fields.conditionTypes;
      if ( !conditionTypes )
        goto LABEL_24;
      v18 = *(_QWORD *)&conditionTypes->max_length;
      if ( (int)v18 >= 1 )
        break;
      if ( (v15 & 1) == 0 )
        goto LABEL_22;
LABEL_20:
      max_length = v13->max_length;
      ++v14;
      v15 = 1LL;
      if ( v14 >= max_length )
        return v15;
    }
    v19 = 0LL;
    while ( v19 < (unsigned int)v18 )
    {
      v20 = conditionTypes->m_Items[v19 + 1];
      if ( actionTrend->fields._HasTargetIndividualityCond_k__BackingField )
      {
        if ( v20 <= 77 )
        {
          if ( (v20 & 0xFFFFFFFE) == 76 )
            goto LABEL_20;
        }
        else if ( (unsigned int)(v20 - 111) < 2 )
        {
          goto LABEL_20;
        }
      }
      v15 = WarBoardAIEvalCalcurater__JudgeSatisfyingTrendCondition(
              (WarBoardAIEvalCalcurater_o *)v15,
              route,
              v16,
              v20,
              targetData,
              v11);
      if ( (v15 & 1) != 0 )
        goto LABEL_20;
      LODWORD(v18) = conditionTypes->max_length;
      if ( (__int64)++v19 >= (int)v18 )
        goto LABEL_22;
    }
LABEL_23:
    sub_B17100(v15, v9, v10);
    sub_B170A0();
  }
LABEL_22:
  LOBYTE(v15) = 0;
  return v15;
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
  System_Collections_Generic_List_int__o *v20; // x0
  bool isMaster; // w0
  int32_t max_length; // w8
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *v23; // x0
  WarBoardPieceData_o *targetPiece; // x20
  WarBoardPieceData_o *v25; // x19
  WarBoardPieceData_o *detourRoute; // x0
  int32_t v27; // w8
  struct System_Int32_array *v28; // x8
  WarBoardPieceData_o *v29; // x20
  WarBoardPieceData_o *v30; // x21
  WarBoardPieceData_o *v31; // x0
  int32_t EnemyRangeMin; // w8
  struct System_Int32_array *v33; // x8
  bool v34; // cc
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  int32_t v36; // w19
  int32_t v37; // w0
  WarBoardPieceData_o *v38; // x0
  int32_t v39; // w0
  bool v40; // cc
  System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  int32_t v42; // w9
  _BOOL4 isAround; // w8
  WarBoardPieceData_o *v44; // x0
  int32_t survivalTurn; // w0
  bool v46; // cc
  struct System_Int32_array *baseRoute; // x8
  _BOOL4 ExistEnemyOnBaseRoute_k__BackingField; // w8
  WarBoardSquareData_o *actionSquare; // x0
  WarBoardSquareData_o *baseSquare; // x0
  WarBoardPieceData_o *v51; // x20
  WarBoardPieceData_o *v52; // x19
  int32_t attackCountOnThisTurn; // w8
  WarBoardPieceData_o *actionPiece; // x20
  WarBoardPieceData_o *basePiece; // x21
  WarBoardPieceData_o *v56; // x0
  WarBoardPieceData_o *v57; // x20
  WarBoardPieceData_o *v58; // x19
  struct System_Int32_array *v59; // x8
  WarBoardPieceData_o *v60; // x0
  int32_t ActionType; // w0
  struct System_Int32_array *v62; // x8
  WarBoardPieceData_o *v63; // x20
  WarBoardPieceData_o *v64; // x19
  int32_t v65; // w19
  int32_t v66; // w0
  struct System_Int32_array *v67; // x8
  int32_t actionCountOnThisTurn; // w8
  struct System_Int32_array *v69; // x8
  struct System_Int32_array *v70; // x8
  struct System_Int32_array *v71; // x8
  int32_t actionIndex; // w9
  struct System_Int32_array *v73; // x8
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *v75; // x0
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v78[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40F8BC3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__, route);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v11);
    this = (WarBoardAIEvalCalcurater_o *)sub_B16FFC(&WarBoardAIManager_TypeInfo, v12);
    byte_40F8BC3 = 1;
  }
  *(_QWORD *)v78 = 0LL;
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
      listExistDesignationItem = route->fields.listExistDesignationItem;
      if ( !listExistDesignationItem )
        goto LABEL_426;
      LOBYTE(detourRoute) = System_Collections_Generic_List_int___Contains(
                              listExistDesignationItem,
                              condition->fields.value,
                              (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
      return (unsigned __int8)detourRoute & 1;
    case 24:
      if ( !route )
        goto LABEL_426;
      if ( !condition )
        goto LABEL_426;
      v20 = route->fields.listExistDesignationItem;
      if ( !v20 )
        goto LABEL_426;
      isMaster = System_Collections_Generic_List_int___Contains(
                   v20,
                   condition->fields.value,
                   (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
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
      dicItemIdKeyIsMoveByServantDesignationItemRange = route->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
      if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
        goto LABEL_426;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___TryGetValue(
              dicItemIdKeyIsMoveByServantDesignationItemRange,
              condition->fields.value,
              &v78[1],
              (const MethodInfo_2DE2774 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_392;
      isMoveByMasterAndEnemyRange = v78[1];
      goto LABEL_405;
    case 41:
      if ( !route )
        goto LABEL_426;
      if ( !condition )
        goto LABEL_426;
      v75 = route->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
      if ( !v75 )
        goto LABEL_426;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___TryGetValue(
              v75,
              condition->fields.value,
              v78,
              (const MethodInfo_2DE2774 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_392;
      isMoveByServantAndEnemyRange = v78[0];
      goto LABEL_408;
    case 42:
      if ( !route )
        goto LABEL_426;
      if ( !condition )
        goto LABEL_426;
      v23 = route->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
      if ( !v23 )
        goto LABEL_426;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___TryGetValue(
              v23,
              condition->fields.value,
              &value,
              (const MethodInfo_2DE2774 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
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
      v56 = route->fields.actionPiece;
      if ( !v56 )
        goto LABEL_426;
      LOBYTE(detourRoute) = WarBoardPieceData__get_isMaster(v56, 0LL);
      return (unsigned __int8)detourRoute & 1;
    case 69:
      if ( !route )
        goto LABEL_426;
      v29 = route->fields.actionPiece;
      if ( !v29 )
        goto LABEL_392;
      v30 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      if ( !WarBoardAIManager__IsEnemyPiece(v30, v29, (const MethodInfo *)condition) )
        goto LABEL_392;
      v31 = route->fields.actionPiece;
      if ( !v31 )
        goto LABEL_426;
      isMaster = WarBoardPieceData__get_isMaster(v31, 0LL);
      goto LABEL_424;
    case 70:
      if ( !route )
        goto LABEL_426;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      ActionType = WarBoardPieceData__get_ActionType(detourRoute, 0LL);
      if ( !condition )
        goto LABEL_426;
LABEL_379:
      v14 = ActionType == condition->fields.value;
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
      v27 = route->fields.actionCountOnThisTurn;
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
      v25 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      LOBYTE(detourRoute) = WarBoardAIManager__IsEnemyPiece(v25, targetPiece, (const MethodInfo *)condition);
      return (unsigned __int8)detourRoute & 1;
    case 77:
      if ( !targetData )
        goto LABEL_392;
      v57 = targetData->fields.targetPiece;
      if ( !v57 )
        goto LABEL_274;
      if ( !route )
        goto LABEL_426;
      v58 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      isMaster = WarBoardAIManager__IsEnemyPiece(v58, v57, (const MethodInfo *)condition);
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
      v65 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)detourRoute,
              (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
      v66 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
              (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_426;
      v40 = v65 - v66 <= condition->fields.value;
      goto LABEL_184;
    case 84:
      if ( !targetData )
        goto LABEL_392;
      v35 = (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.detourRoute;
      if ( !v35 )
        goto LABEL_274;
      v36 = System_Linq_Enumerable__Count_int_(
              v35,
              (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
      v37 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
              (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_426;
      v34 = v36 - v37 <= condition->fields.value;
      goto LABEL_123;
    case 85:
      if ( !targetData )
        goto LABEL_392;
      v67 = targetData->fields.detourRoute;
      if ( !v67 )
        goto LABEL_392;
      if ( v67->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v67->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
LABEL_305:
      isMoveByMasterAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_405;
    case 86:
      if ( !targetData )
        goto LABEL_392;
      v28 = targetData->fields.detourRoute;
      if ( !v28 )
        goto LABEL_392;
      if ( v28->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v28->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
LABEL_239:
      isMoveByServantAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_408;
    case 87:
      if ( !targetData )
        goto LABEL_392;
      v73 = targetData->fields.detourRoute;
      if ( !v73 )
        goto LABEL_392;
      if ( v73->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v73->m_Items[2] != route->fields.actionIndex )
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
      if ( !WarBoardAIRoute_RouteData__HasFlag(route, 2LL, 0LL) )
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
      if ( !WarBoardAIRoute_RouteData__HasFlag(route, 2LL, 0LL) )
        goto LABEL_392;
      if ( !condition )
        goto LABEL_426;
      attackCountOnThisTurn = route->fields.attackCountOnThisTurn;
LABEL_346:
      v46 = attackCountOnThisTurn < condition->fields.value;
LABEL_347:
      LOBYTE(detourRoute) = !v46;
      return (unsigned __int8)detourRoute & 1;
    case 102:
      if ( !route )
        goto LABEL_426;
      if ( !WarBoardAIRoute_RouteData__HasFlag(route, 2LL, 0LL) )
        goto LABEL_392;
      if ( !condition )
        goto LABEL_426;
      v27 = route->fields.attackCountOnThisTurn;
LABEL_160:
      v42 = condition->fields.value;
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
      v51 = targetData->fields.targetPiece;
      if ( !v51 )
        goto LABEL_392;
      if ( !route )
        goto LABEL_426;
      v52 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      LOBYTE(detourRoute) = WarBoardAIManager__IsAllyPiece(v52, v51, (const MethodInfo *)condition);
      return (unsigned __int8)detourRoute & 1;
    case 112:
      if ( !targetData )
        goto LABEL_392;
      v63 = targetData->fields.targetPiece;
      if ( !v63 )
        goto LABEL_274;
      if ( !route )
        goto LABEL_426;
      v64 = route->fields.basePiece;
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      }
      isMaster = WarBoardAIManager__IsAllyPiece(v64, v63, (const MethodInfo *)condition);
LABEL_424:
      LOBYTE(detourRoute) = !isMaster;
      return (unsigned __int8)detourRoute & 1;
    case 113:
      if ( !targetData )
        goto LABEL_392;
      v71 = targetData->fields.detourRoute;
      if ( !v71 )
        goto LABEL_392;
      if ( v71->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      actionCountOnThisTurn = v71->m_Items[2];
      actionIndex = route->fields.actionIndex;
LABEL_371:
      v14 = actionCountOnThisTurn == actionIndex;
      goto LABEL_409;
    case 114:
      if ( !targetData )
        goto LABEL_392;
      v70 = targetData->fields.detourRoute;
      if ( !v70 )
        goto LABEL_392;
      if ( v70->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      v13 = v70->m_Items[2] == route->fields.actionIndex;
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
      v59 = targetData->fields.detourRoute;
      if ( !v59 )
        goto LABEL_392;
      if ( v59->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v59->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
      isMoveByMasterAndEnemyRange = targetData->fields.detourMoveByDistanceType;
LABEL_405:
      v14 = isMoveByMasterAndEnemyRange == 1;
      goto LABEL_409;
    case 123:
      if ( !targetData )
        goto LABEL_392;
      v69 = targetData->fields.detourRoute;
      if ( !v69 )
        goto LABEL_392;
      if ( v69->max_length <= 1 )
        goto LABEL_428;
      if ( !route )
        goto LABEL_426;
      if ( v69->m_Items[2] != route->fields.actionIndex )
        goto LABEL_392;
      isMoveByServantAndEnemyRange = targetData->fields.detourMoveByDistanceType;
LABEL_408:
      v14 = isMoveByServantAndEnemyRange == 3;
      goto LABEL_409;
    case 124:
      if ( !targetData )
        goto LABEL_392;
      v62 = targetData->fields.detourRoute;
      if ( !v62 )
        goto LABEL_392;
      if ( v62->max_length <= 1 )
      {
LABEL_428:
        sub_B17100(this, route, condition);
        sub_B170A0();
      }
      if ( !route )
        goto LABEL_426;
      if ( v62->m_Items[2] == route->fields.actionIndex )
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
      v42 = condition->fields.value;
      v27 = EnemyRangeMin - 1;
LABEL_183:
      v40 = v27 <= v42;
LABEL_184:
      LOBYTE(detourRoute) = v40;
      break;
    case 130:
      if ( !condition )
        goto LABEL_426;
      if ( !targetData )
        goto LABEL_274;
      v33 = targetData->fields.baseRoute;
      if ( !v33 )
LABEL_426:
        sub_B170D4();
      max_length = v33->max_length;
LABEL_122:
      v34 = max_length - 1 <= condition->fields.value;
LABEL_123:
      LOBYTE(detourRoute) = !v34;
      break;
    case 131:
      if ( !route )
        goto LABEL_427;
      v60 = route->fields.basePiece;
      if ( !v60 )
        goto LABEL_427;
      ActionType = WarBoardPieceData__get_survivalTurn(v60, 0LL);
      if ( !condition )
        goto LABEL_427;
      goto LABEL_379;
    case 132:
      if ( !route )
        goto LABEL_427;
      v44 = route->fields.basePiece;
      if ( !v44 )
        goto LABEL_427;
      survivalTurn = WarBoardPieceData__get_survivalTurn(v44, 0LL);
      if ( !condition )
        goto LABEL_427;
      v46 = survivalTurn < condition->fields.value;
      goto LABEL_347;
    case 133:
      if ( !route )
        goto LABEL_427;
      v38 = route->fields.basePiece;
      if ( !v38 )
        goto LABEL_427;
      v39 = WarBoardPieceData__get_survivalTurn(v38, 0LL);
      if ( !condition )
        goto LABEL_427;
      v40 = v39 <= condition->fields.value;
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
        baseSquare = route->fields.baseSquare;
        if ( baseSquare )
          goto LABEL_263;
      }
      goto LABEL_427;
    case 137:
      if ( !route )
        goto LABEL_427;
      actionSquare = route->fields.baseSquare;
      if ( !actionSquare )
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
      baseSquare = route->fields.actionSquare;
      if ( !baseSquare )
        goto LABEL_427;
LABEL_263:
      LOBYTE(detourRoute) = WarBoardSquareData__IsFlag(baseSquare, 1, 0LL);
      return (unsigned __int8)detourRoute & 1;
    case 144:
      if ( !route || (actionSquare = route->fields.actionSquare) == 0LL )
LABEL_427:
        sub_B170D4();
LABEL_201:
      isMaster = WarBoardSquareData__IsFlag(actionSquare, 1, 0LL);
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
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  if ( (byte_40F79C2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__, x);
    byte_40F79C2 = 1;
  }
  ratingOffset = this->fields.ratingOffset;
  if ( !ratingOffset )
    sub_B170D4();
  return value - 1 == ratingOffset->fields.value;
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__1(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  if ( (byte_40F79C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__, x);
    byte_40F79C3 = 1;
  }
  ratingOffset = this->fields.ratingOffset;
  if ( !ratingOffset )
    sub_B170D4();
  return value - 1 >= ratingOffset->fields.value;
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__2(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  if ( (byte_40F79C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__, x);
    byte_40F79C4 = 1;
  }
  ratingOffset = this->fields.ratingOffset;
  if ( !ratingOffset )
    sub_B170D4();
  return ratingOffset->fields.value2 >= value - 1;
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__3(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  if ( (byte_40F79C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__, x);
    byte_40F79C5 = 1;
  }
  ratingOffset = this->fields.ratingOffset;
  if ( !ratingOffset )
    sub_B170D4();
  return value - 1 == ratingOffset->fields.value;
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__4(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  if ( (byte_40F79C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__, x);
    byte_40F79C6 = 1;
  }
  ratingOffset = this->fields.ratingOffset;
  if ( !ratingOffset )
    sub_B170D4();
  return ratingOffset->fields.value2 >= value - 1;
}


bool __fastcall WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__5(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  if ( (byte_40F79C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__, x);
    byte_40F79C7 = 1;
  }
  ratingOffset = this->fields.ratingOffset;
  if ( !ratingOffset )
    sub_B170D4();
  return value - 1 >= ratingOffset->fields.value;
}