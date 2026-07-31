void WarBoardAIEvalCalcurater___ctor(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_PiecePersonality_o *piecePersonality,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.piecePersonalityList = piecePersonality;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)piecePersonality, v5, v6, v7, v8, v9, v10);
}


void WarBoardAIEvalCalcurater__AddRatingBaseOffsetValue(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        WarBoardActionTrendEntity_o *trend,
        const MethodInfo *method)
{
  struct System_Int32_array *actionTypeIds; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x22
  WarBoardAIRoute_RouteData_o *v9; // x8
  __int64 v10; // x9

  if ( !*route
    || (WarBoardAIEvalCalcurater__AddTrendEvalValue(this, (*route)->fields.evalOffsetMagnification, trend, method),
        !trend)
    || (actionTypeIds = trend->fields.actionTypeIds) == 0 )
  {
LABEL_17:
    sub_21FFECC(this, route);
  }
  max_length = actionTypeIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_21FFED4(this);
      this = (WarBoardAIEvalCalcurater_o *)WarBoardActionTrendEntity__GetActionType(
                                             trend,
                                             actionTypeIds->m_Items[v8],
                                             0);
      if ( (_DWORD)this == 2 )
        break;
      if ( (_DWORD)this == 1 )
      {
        v9 = *route;
        if ( !*route )
          goto LABEL_17;
        v10 = 4;
LABEL_13:
        v9->fields.flagNow |= v10;
      }
      LODWORD(max_length) = actionTypeIds->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        return;
    }
    v9 = *route;
    if ( !*route )
      goto LABEL_17;
    v10 = 8;
    goto LABEL_13;
  }
}


void WarBoardAIEvalCalcurater__AddRatingOffsetAddCondition(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        WarBoardRatingOffsetEntity_o *ratingOffset,
        bool isAdd,
        int32_t category,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *v6; // x8
  WarBoardAIRoute_RouteData_o *v7; // x8

  if ( category == 1 )
  {
    v7 = *route;
    if ( isAdd )
    {
      if ( !v7 || !ratingOffset )
        goto LABEL_18;
      v7->fields.moveEvalOffsetAddValue += ratingOffset->fields.addValue;
    }
    else if ( !v7 || !ratingOffset )
    {
      goto LABEL_18;
    }
    v7->fields.sumMoveEvalOffsetAddValue += ratingOffset->fields.addValue;
  }
  else if ( !category )
  {
    v6 = *route;
    if ( isAdd )
    {
      if ( v6 && ratingOffset )
      {
        v6->fields.attackEvalOffsetAddValue += ratingOffset->fields.addValue;
LABEL_13:
        v6->fields.sumAttackEvalOffsetAddValue += ratingOffset->fields.addValue;
        return;
      }
    }
    else if ( v6 && ratingOffset )
    {
      goto LABEL_13;
    }
LABEL_18:
    sub_21FFECC(this, route);
  }
}


void WarBoardAIEvalCalcurater__AddTrendEvalValue(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification,
        WarBoardActionTrendEntity_o *trend,
        const MethodInfo *method)
{
  int32_t viewPoint; // w8
  float warAttack; // s8
  float *p_benMove; // x21
  float benAttack; // s8
  float v9; // s8

  if ( !trend )
    goto LABEL_10;
  viewPoint = trend->fields.viewPoint;
  if ( viewPoint == 1 )
  {
    if ( evalOffsetMagnification )
    {
      benAttack = evalOffsetMagnification->fields.benAttack;
      p_benMove = &evalOffsetMagnification->fields.benMove;
      evalOffsetMagnification->fields.benAttack = benAttack + WarBoardActionTrendEntity__GetAttackValue(trend, 0);
      goto LABEL_8;
    }
LABEL_10:
    sub_21FFECC(this, evalOffsetMagnification);
  }
  if ( viewPoint )
    return;
  if ( !evalOffsetMagnification )
    goto LABEL_10;
  warAttack = evalOffsetMagnification->fields.warAttack;
  p_benMove = &evalOffsetMagnification->fields.warMove;
  evalOffsetMagnification->fields.warAttack = warAttack + WarBoardActionTrendEntity__GetAttackValue(trend, 0);
LABEL_8:
  v9 = *p_benMove;
  *p_benMove = v9 + WarBoardActionTrendEntity__GetMoveValue(trend, 0);
}


void WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        float avgBeneValue,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  struct WarBoardAIRoute_PiecePersonality_o *piecePersonalityList; // x8

  piecePersonalityList = this->fields.piecePersonalityList;
  if ( !piecePersonalityList )
    sub_21FFECC(this, route);
  WarBoardAIEvalCalcurater__JudgeRatingOffsetAddCondition(
    this,
    route,
    piecePersonalityList->fields.ratingOffsetList,
    avgBeneValue,
    v4);
}


void WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        const MethodInfo *method)
{
  WarBoardAIEvalCalcurater_o *v4; // x20
  struct WarBoardAIRoute_PiecePersonality_o *piecePersonalityList; // x8
  _BOOL8 v6; // x0
  __int64 v7; // x1
  WarBoardAIRoute_RouteData_o *v8; // x8
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicPutIndexTargetData; // x22
  int64_t TrendKey; // x0
  const MethodInfo *v13; // x4
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  WarBoardActionTrendEntity_o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *FutureLookingTrendHashSet; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_5935F3E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__);
    this = (WarBoardAIEvalCalcurater_o *)sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    byte_5935F3E = 1;
  }
  piecePersonalityList = v4->fields.piecePersonalityList;
  memset(&v21, 0, sizeof(v21));
  value = 0;
  if ( !piecePersonalityList || (this = (WarBoardAIEvalCalcurater_o *)piecePersonalityList->fields.actionTrandList) == 0 )
    sub_21FFECC(this, route);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v21 = v20;
  v20.fields._list = 0;
  *(_QWORD *)&v20.fields._index = &v21;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    if ( !v6 )
      break;
    v8 = *route;
    current = v21.fields._current;
    value = 0;
    if ( !v8 )
      sub_21FFECC(v6, v7);
    if ( !v21.fields._current )
      sub_21FFECC(v6, v7);
    klass = v21.fields._current[1].klass;
    if ( !klass )
      sub_21FFECC(0, v7);
    dicPutIndexTargetData = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v8->fields.dicPutIndexTargetData;
    TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, 0);
    if ( !dicPutIndexTargetData )
      sub_21FFECC(TrendKey, TrendKey);
    System_Collections_Generic_Dictionary_long__object___TryGetValue(
      dicPutIndexTargetData,
      TrendKey,
      &value,
      (const MethodInfo_3F9DDCC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
    if ( WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
           v4,
           *route,
           (WarBoardAIRoute_ActionTrendInfo_o *)current,
           (WarBoardAIRoute_TargetData_o *)value,
           v13) )
    {
      WarBoardAIEvalCalcurater__AddRatingBaseOffsetValue(
        v4,
        route,
        (WarBoardActionTrendEntity_o *)current[1].klass,
        v14);
      v16 = (WarBoardActionTrendEntity_o *)current[1].klass;
      if ( !v16 )
        sub_21FFECC(0, v15);
      if ( WarBoardActionTrendEntity__get_HasFutureTrend(v16, 0) )
      {
        if ( !*route )
          sub_21FFECC(0, v17);
        FutureLookingTrendHashSet = WarBoardAIRoute_RouteData__get_FutureLookingTrendHashSet(*route, 0);
        if ( !FutureLookingTrendHashSet )
          sub_21FFECC(0, v19);
        System_Collections_Generic_HashSet_object___Add(
          (System_Collections_Generic_HashSet_object__o *)FutureLookingTrendHashSet,
          current,
          (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        WarBoardAIRoute_RouteData_o *futureRoute,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *FutureLookingTrendHashSet; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *monitor; // x0
  __int128 v11; // q0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  WarBoardAIRoute_ActionTrendInfo_o *current; // x22
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicPutIndexTargetData; // x23
  int64_t TrendKey; // x0
  const MethodInfo *v18; // x4
  _BOOL8 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  WarBoardAIRoute_RouteData_o *v22; // x8
  MissionNaviTransitionBoardItem_o *p_futureEvalOffsetMag; // x23
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *v24; // x24
  _BOOL8 IsAttack; // x0
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  System_Collections_Generic_HashSet_Enumerator_T__o v34; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v37; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_5935F3F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    sub_21FFC50(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    byte_5935F3F = 1;
  }
  FutureLookingTrendHashSet = *route;
  memset(&v37, 0, sizeof(v37));
  memset(&v36, 0, sizeof(v36));
  value = 0;
  if ( !FutureLookingTrendHashSet )
    goto LABEL_35;
  if ( !WarBoardAIRoute_RouteData__HasFutureTrend(FutureLookingTrendHashSet, 0) )
    return;
  FutureLookingTrendHashSet = *route;
  if ( !*route || !futureRoute )
    goto LABEL_35;
  if ( FutureLookingTrendHashSet->fields.basePiece != futureRoute->fields.basePiece )
    return;
  FutureLookingTrendHashSet = (WarBoardAIRoute_RouteData_o *)WarBoardAIRoute_RouteData__get_FutureLookingTrendHashSet(
                                                               FutureLookingTrendHashSet,
                                                               0);
  if ( !FutureLookingTrendHashSet )
LABEL_35:
    sub_21FFECC(FutureLookingTrendHashSet, route);
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v34,
    (System_Collections_Generic_HashSet_object__o *)FutureLookingTrendHashSet,
    (const MethodInfo_42872B8 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v37 = v34;
  while ( 1 )
  {
    v8 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
           &v37,
           (const MethodInfo_40C79B8 *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    if ( !v8 )
      break;
    if ( !v37.fields._current )
      sub_21FFECC(v8, v9);
    monitor = (System_Collections_Generic_List_object__o *)v37.fields._current[2].monitor;
    if ( !monitor )
      sub_21FFECC(0, v9);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      monitor,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v11 = *(_OWORD *)&v34.fields._set;
    v34.fields._set = 0;
    *(_QWORD *)&v34.fields._index = &v36;
    *(_OWORD *)&v36.fields._list = v11;
    v36.fields._current = v34.fields._current;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v36,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
      if ( !v12 )
        break;
      current = (WarBoardAIRoute_ActionTrendInfo_o *)v36.fields._current;
      if ( !v36.fields._current )
        sub_21FFECC(v12, v13);
      klass = v36.fields._current[1].klass;
      if ( !klass )
        sub_21FFECC(0, v13);
      dicPutIndexTargetData = (System_Collections_Generic_Dictionary_TKey__TValue__o *)futureRoute->fields.dicPutIndexTargetData;
      TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, 0);
      if ( !dicPutIndexTargetData )
        sub_21FFECC(TrendKey, TrendKey);
      System_Collections_Generic_Dictionary_long__object___TryGetValue(
        dicPutIndexTargetData,
        TrendKey,
        &value,
        (const MethodInfo_3F9DDCC *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
      v19 = WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
              this,
              futureRoute,
              current,
              (WarBoardAIRoute_TargetData_o *)value,
              v18);
      if ( v19 )
      {
        v22 = *route;
        if ( !*route )
          sub_21FFECC(v19, v20);
        p_futureEvalOffsetMag = (MissionNaviTransitionBoardItem_o *)&v22->fields.futureEvalOffsetMag;
        if ( !v22->fields.futureEvalOffsetMag )
        {
          v24 = (WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)sub_21FFEBC(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
          WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(v24, 0);
          IsAttack = WarBoardAIRoute_RouteData__get_IsAttack(futureRoute, 0);
          if ( !v24 )
            sub_21FFECC(IsAttack, v26);
          v24->fields.isAttack = IsAttack;
          p_futureEvalOffsetMag->klass = (MissionNaviTransitionBoardItem_c *)v24;
          sub_21FFBF4(p_futureEvalOffsetMag, (int32_t)v24, v27, v28, v29, v30, v31, v32);
          v22 = *route;
          if ( !*route )
            sub_21FFECC(v19, v33);
        }
        WarBoardAIEvalCalcurater__AddTrendEvalValue(
          (WarBoardAIEvalCalcurater_o *)v19,
          v22->fields.futureEvalOffsetMag,
          current->fields._Entity_k__BackingField,
          v21);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v36,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_40C79B4 *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void WarBoardAIEvalCalcurater__JudgeRatingOffsetAddCondition(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList,
        float avgBeneValue,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *v7; // x8
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t current; // w1
  WarBoardRatingOffsetEntity_o **v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x5
  WarBoardRatingOffsetEntity_o *v22; // x2
  _BOOL8 isMaster; // x0
  _BOOL8 HasFlag; // x0
  __int64 v25; // x1
  WarBoardRatingOffsetEntity_o *v26; // x9
  int32_t attackByLinkedEnemy; // w8
  _BOOL8 v28; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v29; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v30; // x23
  _BOOL8 v31; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v32; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v33; // x23
  WarBoardPieceData_o *v34; // x0
  _BOOL8 v35; // x0
  struct WarBoardPieceData_o *v36; // x8
  struct BattleServantData_o *v37; // x8
  WarBoardPieceData_o *v38; // x21
  __int64 v39; // x0
  float v40; // s0
  WarBoardRatingOffsetEntity_o *v41; // x8
  _BOOL8 v42; // x0
  WarBoardPieceData_o *v43; // x0
  _BOOL4 Item; // w0
  _BOOL8 v45; // x0
  WarBoardPieceData_o *v46; // x0
  _BOOL8 v47; // x0
  WarBoardPieceData_o *v48; // x0
  _BOOL8 v49; // x0
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  _BOOL8 v51; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v52; // x0
  _BOOL8 v53; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v54; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v55; // x23
  _BOOL8 v56; // x0
  WarBoardPieceData_o *v57; // x0
  _BOOL8 v58; // x0
  struct WarBoardPieceData_o *v59; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardRatingOffsetEntity_o *v61; // x9
  int32_t np; // w8
  _BOOL8 v63; // x0
  WarBoardPieceData_o *v64; // x0
  _BOOL8 v65; // x0
  _BOOL8 v66; // x0
  int32_t moveByLinkedEnemy; // w8
  _BOOL8 v68; // x0
  bool v69; // zf
  _BOOL8 v70; // x0
  __int64 v71; // x2
  WarBoardPieceData_o *actionPiece; // x21
  __int64 v73; // x0
  __int64 v74; // x1
  float BreakPoint; // s0
  WarBoardPieceData_o *v76; // x0
  float v77; // s8
  _BOOL8 isServant; // x0
  WarBoardRatingOffsetEntity_o *v79; // x8
  _BOOL8 v80; // x0
  WarBoardAIRoute_RouteData_o *v81; // x8
  WarBoardPieceData_o *basePiece; // x21
  __int64 v83; // x0
  bool v84; // cc
  _BOOL8 v85; // x0
  __int64 v86; // x2
  WarBoardPieceData_o *v87; // x21
  __int64 v88; // x0
  __int64 v89; // x1
  float v90; // s0
  WarBoardPieceData_o *v91; // x0
  _BOOL8 v92; // x0
  _BOOL8 v93; // x0
  _BOOL8 v94; // x0
  WarBoardPieceData_o *v95; // x0
  _BOOL8 v96; // x0
  WarBoardPieceData_o *v97; // x0
  _BOOL8 v98; // x0
  WarBoardPieceData_o *v99; // x0
  _BOOL8 v100; // x0
  WarBoardPieceData_o *v101; // x0
  _BOOL8 v102; // x0
  WarBoardAIRoute_RouteData_o *v103; // x8
  _BOOL8 v104; // x0
  _BOOL8 v105; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v107; // x23
  _BOOL8 v108; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v109; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v110; // x23
  _BOOL8 v111; // x0
  _BOOL8 v112; // x0
  WarBoardPieceData_o *v113; // x0
  _BOOL8 v114; // x0
  WarBoardPieceData_o *v115; // x0
  _BOOL8 v116; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v117; // x0
  _BOOL8 v118; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v119; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v120; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v121; // x23
  struct System_Collections_Generic_List_T__o *list; // x19
  System_Collections_Generic_List_Enumerator_object__o v123; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v124; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_5935F41 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__get_Current__);
    sub_21FFC50(&System_Func_KeyValuePair_uint__int___bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__);
    sub_21FFC50(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__);
    sub_21FFC50(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__);
    sub_21FFC50(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__);
    sub_21FFC50(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__);
    sub_21FFC50(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__);
    sub_21FFC50(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__);
    sub_21FFC50(&WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo);
    this = (WarBoardAIEvalCalcurater_o *)sub_21FFC50(&WarBoardAIManager_TypeInfo);
    byte_5935F41 = 1;
  }
  v7 = *route;
  memset(&v124, 0, sizeof(v124));
  if ( !v7 || !ratingOffsetList )
    sub_21FFECC(this, route);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v123,
    (System_Collections_Generic_List_object__o *)ratingOffsetList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__);
  v124 = v123;
  v123.fields._list = 0;
  *(_QWORD *)&v123.fields._index = &v124;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v124,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__) )
  {
    v8 = sub_21FFEBC(WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo);
    WarBoardAIEvalCalcurater___c__DisplayClass9_0___ctor((WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)v8, 0);
    if ( !v8 )
      sub_21FFECC(v9, v10);
    current = (int32_t)v124.fields._current;
    *(_QWORD *)(v8 + 16) = v124.fields._current;
    v18 = (WarBoardRatingOffsetEntity_o **)(v8 + 16);
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 16), current, v11, v12, v13, v14, v15, v16);
    v22 = *(WarBoardRatingOffsetEntity_o **)(v8 + 16);
    if ( !v22 )
      sub_21FFECC(v19, v20);
    isMaster = 1;
    switch ( v22->fields.type )
    {
      case 0:
        goto LABEL_228;
      case 1:
        if ( !*route )
          sub_21FFECC(0, v20);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !HasFlag )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(HasFlag, v25);
        v26 = *v18;
        if ( !*v18 )
          sub_21FFECC(HasFlag, v25);
        attackByLinkedEnemy = (*route)->fields.attackByLinkedEnemy;
        goto LABEL_159;
      case 2:
        if ( !*route )
          sub_21FFECC(0, v20);
        v56 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !v56 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v56, v25);
        v26 = *v18;
        if ( !*v18 )
          sub_21FFECC(v56, v25);
        attackByLinkedEnemy = (*route)->fields.attackByLinkedAlly;
        goto LABEL_159;
      case 3:
        if ( !*route )
          sub_21FFECC(0, v20);
        if ( WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0) )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(0, v25);
        isMaster = WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000, 0);
        break;
      case 4:
        if ( !*route )
          sub_21FFECC(0, v20);
        if ( WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0) )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(0, v25);
        Item = WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000, 0);
        goto LABEL_238;
      case 5:
        if ( !*route )
          sub_21FFECC(0, v20);
        v70 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !v70 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v70, v25);
        actionPiece = (*route)->fields.actionPiece;
        if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v25, v71);
        BreakPoint = WarBoardAIManager__GetBreakPoint(actionPiece, 0);
        if ( !*route )
          sub_21FFECC(v73, v74);
        v76 = (*route)->fields.actionPiece;
        if ( !v76 )
          sub_21FFECC(0, v74);
        v77 = BreakPoint;
        isServant = WarBoardPieceData__get_isServant(v76, 0);
        if ( !isServant )
          goto LABEL_226;
        v79 = *v18;
        if ( !*v18 )
          sub_21FFECC(isServant, v25);
        if ( v77 > (float)(v79->fields.value / 100) )
          goto LABEL_226;
        goto LABEL_153;
      case 6:
        if ( !*route )
          sub_21FFECC(0, v20);
        v85 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !v85 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v85, v25);
        v87 = (*route)->fields.actionPiece;
        if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v25, v86);
        v90 = WarBoardAIManager__GetBreakPoint(v87, 0);
        if ( !*route )
          sub_21FFECC(v88, v89);
        v91 = (*route)->fields.actionPiece;
        if ( !v91 )
          sub_21FFECC(0, v89);
        v77 = v90;
        v92 = WarBoardPieceData__get_isServant(v91, 0);
        if ( !v92 )
          goto LABEL_226;
        v79 = *v18;
        if ( !*v18 )
          sub_21FFECC(v92, v25);
        if ( v77 >= (float)(v79->fields.value / 100) )
          goto LABEL_226;
LABEL_153:
        v84 = v77 < (float)(v79->fields.value2 / 100);
        goto LABEL_202;
      case 7:
        if ( !*route )
          sub_21FFECC(0, v20);
        v63 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !v63 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v63, v25);
        v64 = (*route)->fields.actionPiece;
        if ( !v64 )
          sub_21FFECC(0, v25);
        isMaster = WarBoardPieceData__get_isMaster(v64, 0);
        break;
      case 8:
        if ( !*route )
          sub_21FFECC(0, v20);
        v96 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !v96 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v96, v25);
        v97 = (*route)->fields.actionPiece;
        if ( !v97 )
          sub_21FFECC(0, v25);
        Item = WarBoardPieceData__get_isMaster(v97, 0);
        goto LABEL_238;
      case 9:
        if ( !*route )
          sub_21FFECC(0, v20);
        v47 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !v47 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v47, v25);
        v48 = (*route)->fields.actionPiece;
        if ( !v48 )
          sub_21FFECC(0, v25);
        if ( !WarBoardPieceData__get_isServant(v48, 0) )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(0, v25);
        isMaster = WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000, 0);
        break;
      case 0xA:
        if ( !*route )
          sub_21FFECC(0, v20);
        v94 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !v94 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v94, v25);
        v95 = (*route)->fields.actionPiece;
        if ( !v95 )
          sub_21FFECC(0, v25);
        if ( !WarBoardPieceData__get_isServant(v95, 0) )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(0, v25);
        if ( WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000, 0) )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(0, v25);
        isMaster = WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000, 0);
        break;
      case 0xB:
        if ( !*route )
          sub_21FFECC(0, v20);
        v42 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !v42 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v42, v25);
        v43 = (*route)->fields.actionPiece;
        if ( !v43 )
          sub_21FFECC(0, v25);
        if ( !WarBoardPieceData__get_isServant(v43, 0) )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(0, v25);
        if ( WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000, 0) )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(0, v25);
        if ( WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000, 0) )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(0, v25);
        isMaster = WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000, 0);
        break;
      case 0xC:
        if ( !*route )
          sub_21FFECC(0, v20);
        v45 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !v45 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v45, v25);
        v46 = (*route)->fields.actionPiece;
        if ( !v46 )
          sub_21FFECC(0, v25);
        if ( !WarBoardPieceData__get_isServant(v46, 0) )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(0, v25);
        if ( WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000, 0) )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(0, v25);
        if ( WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000, 0) )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(0, v25);
        Item = WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000, 0);
        goto LABEL_238;
      case 0xD:
        if ( !*route )
          sub_21FFECC(1, v20);
        basePiece = (*route)->fields.basePiece;
        if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v20, v22);
        v40 = WarBoardAIManager__GetBreakPoint(basePiece, 0);
        v41 = *v18;
        if ( !*v18 )
          sub_21FFECC(v83, v25);
        if ( v40 <= (float)(v41->fields.value / 100) )
          goto LABEL_142;
        goto LABEL_226;
      case 0xE:
        if ( !*route )
          sub_21FFECC(1, v20);
        v38 = (*route)->fields.basePiece;
        if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v20, v22);
        v40 = WarBoardAIManager__GetBreakPoint(v38, 0);
        v41 = *v18;
        if ( !*v18 )
          sub_21FFECC(v39, v25);
        if ( v40 >= (float)(v41->fields.value / 100) )
          goto LABEL_226;
LABEL_142:
        v84 = v40 < (float)(v41->fields.value2 / 100);
        goto LABEL_202;
      case 0xF:
        if ( !*route )
          sub_21FFECC(1, v20);
        v57 = (*route)->fields.basePiece;
        if ( !v57 )
          sub_21FFECC(0, v20);
        v58 = WarBoardPieceData__get_isServant(v57, 0);
        if ( !v58 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v58, v25);
        v59 = (*route)->fields.basePiece;
        if ( !v59 )
          sub_21FFECC(v58, v25);
        battleServant_k__BackingField = v59->fields._battleServant_k__BackingField;
        if ( !battleServant_k__BackingField )
          sub_21FFECC(v58, v25);
        v61 = *v18;
        if ( !*v18 )
          sub_21FFECC(v58, v25);
        np = battleServant_k__BackingField->fields.np;
        goto LABEL_201;
      case 0x10:
        if ( !*route )
          sub_21FFECC(1, v20);
        v34 = (*route)->fields.basePiece;
        if ( !v34 )
          sub_21FFECC(0, v20);
        v35 = WarBoardPieceData__get_isServant(v34, 0);
        if ( !v35 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v35, v25);
        v36 = (*route)->fields.basePiece;
        if ( !v36 )
          sub_21FFECC(v35, v25);
        v37 = v36->fields._battleServant_k__BackingField;
        if ( !v37 )
          sub_21FFECC(v35, v25);
        if ( !*v18 )
          sub_21FFECC(v35, v25);
        isMaster = v37->fields.np < (*v18)->fields.value;
        break;
      case 0x11:
        if ( !*route )
          sub_21FFECC(0, v20);
        v66 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( v66 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v66, v25);
        moveByLinkedEnemy = (*route)->fields.moveByLinkedEnemy;
        goto LABEL_120;
      case 0x12:
        if ( !*route )
          sub_21FFECC(0, v20);
        v93 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( v93 )
          goto LABEL_226;
        v81 = *route;
        if ( !*route )
          sub_21FFECC(v93, v25);
        v26 = *v18;
        if ( !*v18 )
          sub_21FFECC(v93, v25);
        goto LABEL_158;
      case 0x13:
        if ( !*route )
          sub_21FFECC(0, v20);
        v104 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( v104 )
          goto LABEL_226;
        v103 = *route;
        if ( !*route )
          sub_21FFECC(v104, v25);
        v61 = *v18;
        if ( !*v18 )
          sub_21FFECC(v104, v25);
        goto LABEL_200;
      case 0x14:
        if ( !*route )
          sub_21FFECC(0, v20);
        v68 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( v68 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v68, v25);
        moveByLinkedEnemy = (*route)->fields.moveByLinkedAlly;
LABEL_120:
        v69 = moveByLinkedEnemy == 0;
        goto LABEL_160;
      case 0x15:
        if ( !*route )
          sub_21FFECC(0, v20);
        v80 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( v80 )
          goto LABEL_226;
        v81 = *route;
        if ( !*route )
          sub_21FFECC(v80, v25);
        v26 = *v18;
        if ( !*v18 )
          sub_21FFECC(v80, v25);
LABEL_158:
        attackByLinkedEnemy = v81->fields.moveByLinkedEnemy;
LABEL_159:
        v69 = attackByLinkedEnemy == v26->fields.value;
LABEL_160:
        isMaster = v69;
        break;
      case 0x16:
        if ( !*route )
          sub_21FFECC(0, v20);
        v102 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( v102 )
          goto LABEL_226;
        v103 = *route;
        if ( !*route )
          sub_21FFECC(v102, v25);
        v61 = *v18;
        if ( !*v18 )
          sub_21FFECC(v102, v25);
LABEL_200:
        np = v103->fields.moveByLinkedEnemy;
LABEL_201:
        v84 = np < v61->fields.value;
LABEL_202:
        isMaster = !v84;
        break;
      case 0x17:
        if ( !*route )
          sub_21FFECC(0, v20);
        v105 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( v105 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v105, v25);
        dicUniqueKeyRange = (*route)->fields.dicUniqueKeyRange;
        v107 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_21FFEBC(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v107,
          (Il2CppObject *)v8,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__,
          0);
        isMaster = System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                     (System_Collections_Generic_IEnumerable_TSource__o *)dicUniqueKeyRange,
                     (System_Func_TSource__bool__o *)v107,
                     (const MethodInfo_3833C94 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        break;
      case 0x18:
        if ( !*route )
          sub_21FFECC(0, v20);
        v53 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( v53 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v53, v25);
        v54 = (*route)->fields.dicUniqueKeyRange;
        v55 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_21FFEBC(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v55,
          (Il2CppObject *)v8,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__,
          0);
        isMaster = System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v54,
                     (System_Func_TSource__bool__o *)v55,
                     (const MethodInfo_3833C94 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        break;
      case 0x19:
        if ( !*route )
          sub_21FFECC(0, v20);
        v49 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( v49 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v49, v25);
        if ( !*v18 )
          sub_21FFECC(v49, v25);
        dicMoveByServantGetDesignationItem = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !dicMoveByServantGetDesignationItem )
          sub_21FFECC(0, v25);
        v51 = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                dicMoveByServantGetDesignationItem,
                (*v18)->fields.value,
                (const MethodInfo_3F55D94 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( !v51 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v51, v25);
        if ( !*v18 )
          sub_21FFECC(v51, v25);
        v52 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v52 )
          sub_21FFECC(0, v25);
        isMaster = System_Collections_Generic_Dictionary_int__bool___get_Item(
                     v52,
                     (*v18)->fields.value,
                     (const MethodInfo_3F55AF8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        break;
      case 0x1A:
        if ( !*route )
          sub_21FFECC(0, v20);
        v116 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( v116 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v116, v25);
        if ( !*v18 )
          sub_21FFECC(v116, v25);
        v117 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v117 )
          sub_21FFECC(0, v25);
        v118 = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                 v117,
                 (*v18)->fields.value,
                 (const MethodInfo_3F55D94 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( !v118 )
          goto LABEL_239;
        if ( !*route )
          sub_21FFECC(v118, v25);
        if ( !*v18 )
          sub_21FFECC(v118, v25);
        v119 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v119 )
          sub_21FFECC(0, v25);
        Item = System_Collections_Generic_Dictionary_int__bool___get_Item(
                 v119,
                 (*v18)->fields.value,
                 (const MethodInfo_3F55AF8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        goto LABEL_238;
      case 0x1B:
        if ( !*route )
          sub_21FFECC(0, v20);
        v28 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( v28 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v28, v25);
        v29 = (*route)->fields.dicUniqueKeyRange;
        v30 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_21FFEBC(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v30,
          (Il2CppObject *)v8,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__,
          0);
        v31 = System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                (System_Func_TSource__bool__o *)v30,
                (const MethodInfo_3833C94 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( v31 )
          goto LABEL_213;
        if ( !*route )
          sub_21FFECC(v31, v25);
        v32 = (*route)->fields.dicUniqueKeyRange;
        v33 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_21FFEBC(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v33,
          (Il2CppObject *)v8,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__,
          0);
        isMaster = System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                     (System_Func_TSource__bool__o *)v33,
                     (const MethodInfo_3833C94 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        break;
      case 0x1C:
        if ( !*route )
          sub_21FFECC(0, v20);
        v108 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( v108 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v108, v25);
        v109 = (*route)->fields.dicUniqueKeyRange;
        v110 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_21FFEBC(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v110,
          (Il2CppObject *)v8,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__,
          0);
        v111 = System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v109,
                 (System_Func_TSource__bool__o *)v110,
                 (const MethodInfo_3833C94 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( v111 )
        {
LABEL_213:
          isMaster = 0;
        }
        else
        {
          if ( !*route )
            sub_21FFECC(v111, v25);
          v120 = (*route)->fields.dicUniqueKeyRange;
          v121 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_21FFEBC(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
          System_Func_KeyValuePair_uint__int___bool____ctor(
            v121,
            (Il2CppObject *)v8,
            Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__,
            0);
          isMaster = System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v120,
                       (System_Func_TSource__bool__o *)v121,
                       (const MethodInfo_3833C94 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        }
        break;
      case 0x1D:
        if ( !*route )
          sub_21FFECC(0, v20);
        if ( WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0) )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(0, v25);
        v112 = WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000, 0);
        if ( !v112 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v112, v25);
        v113 = (*route)->fields.basePiece;
        if ( !v113 )
          sub_21FFECC(0, v25);
        v114 = WarBoardPieceData__get_isServant(v113, 0);
        if ( v114 )
          goto LABEL_239;
        if ( !*route )
          sub_21FFECC(v114, v25);
        v115 = (*route)->fields.actionPiece;
        if ( !v115 )
          sub_21FFECC(0, v25);
        isMaster = WarBoardPieceData__get_isServant(v115, 0);
        break;
      case 0x1E:
        if ( !*route )
          sub_21FFECC(0, v20);
        if ( WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0) )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(0, v25);
        v98 = WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000, 0);
        if ( v98 )
        {
          if ( !*route )
            sub_21FFECC(v98, v25);
          v99 = (*route)->fields.basePiece;
          if ( !v99 )
            sub_21FFECC(0, v25);
          v100 = WarBoardPieceData__get_isServant(v99, 0);
          if ( v100 )
          {
LABEL_226:
            isMaster = 0;
          }
          else
          {
            if ( !*route )
              sub_21FFECC(v100, v25);
            v101 = (*route)->fields.actionPiece;
            if ( !v101 )
              sub_21FFECC(0, v25);
            Item = WarBoardPieceData__get_isServant(v101, 0);
LABEL_238:
            isMaster = !Item;
          }
        }
        else
        {
LABEL_239:
          isMaster = 1;
        }
        break;
      case 0x1F:
        if ( !*route )
          sub_21FFECC(0, v20);
        v65 = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( v65 )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(v65, v25);
        isMaster = (*route)->fields.moveByLinkedItem > 0;
        break;
      case 0x20:
        if ( !*route )
          sub_21FFECC(0, v20);
        if ( WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0) )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(0, v25);
        isMaster = WarBoardAIRoute_RouteData__HasFlag(*route, 0x10000000, 0);
        break;
      case 0x21:
        if ( !*route )
          sub_21FFECC(0, v20);
        if ( WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0) )
          goto LABEL_226;
        if ( !*route )
          sub_21FFECC(0, v25);
        isMaster = WarBoardAIRoute_RouteData__HasFlag(*route, 0x200000000LL, 0);
        break;
      default:
        isMaster = 0;
        goto LABEL_228;
    }
    v22 = *v18;
    if ( !*v18 )
      sub_21FFECC(isMaster, v25);
LABEL_228:
    WarBoardAIEvalCalcurater__AddRatingOffsetAddCondition(
      (WarBoardAIEvalCalcurater_o *)isMaster,
      route,
      v22,
      isMaster,
      v22->fields.category,
      v21);
  }
  list = v123.fields._list;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    *(System_Collections_Generic_List_Enumerator_object__o **)&v123.fields._index,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__);
  if ( list )
    sub_21FFEC4(list);
}


bool WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o *route,
        WarBoardAIRoute_ActionTrendInfo_o *actionTrend,
        WarBoardAIRoute_TargetData_o *targetData,
        const MethodInfo *method)
{
  int klass; // w8
  WarBoardAIEvalCalcurater_o *v9; // x22
  int v10; // w25
  WarBoardActionTrendConditionEntity_o *v11; // x23
  struct System_Int32_array *conditionTypes; // x26
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x27
  WarBoardAIEvalCalcurater_o *ConditionType; // x0
  const MethodInfo *v16; // x5
  int32_t v17; // w24

  if ( !actionTrend
    || (this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(actionTrend, 0)) == 0 )
  {
LABEL_21:
    sub_21FFECC(this, route);
  }
  klass = (int)this[1].klass;
  v9 = this;
  if ( klass >= 1 )
  {
    v10 = 0;
    this = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)klass )
        goto LABEL_20;
      v11 = (WarBoardActionTrendConditionEntity_o *)*((_QWORD *)&v9[1].monitor + v10);
      if ( !v11 )
        goto LABEL_21;
      conditionTypes = v11->fields.conditionTypes;
      if ( !conditionTypes )
        goto LABEL_21;
      max_length = conditionTypes->max_length;
      if ( (int)max_length >= 1 )
        break;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_19;
LABEL_17:
      klass = (int)v9[1].klass;
      ++v10;
      this = (WarBoardAIEvalCalcurater_o *)(&dword_0 + 1);
      if ( v10 >= klass )
        return (char)this;
    }
    v14 = 0;
    while ( v14 < (unsigned int)max_length )
    {
      ConditionType = (WarBoardAIEvalCalcurater_o *)WarBoardActionTrendConditionEntity__GetConditionType(
                                                      v11,
                                                      conditionTypes->m_Items[v14],
                                                      0);
      v17 = (int)ConditionType;
      if ( actionTrend->fields._HasTargetIndividualityCond_k__BackingField )
      {
        ConditionType = (WarBoardAIEvalCalcurater_o *)WarBoardActionTrendConditionEntity__IsTargetTeamCond(
                                                        (int32_t)ConditionType,
                                                        0);
        if ( ((unsigned __int8)ConditionType & 1) != 0 )
          goto LABEL_17;
      }
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIEvalCalcurater__JudgeSatisfyingTrendCondition(
                                             ConditionType,
                                             route,
                                             v11,
                                             v17,
                                             targetData,
                                             v16);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_17;
      LODWORD(max_length) = conditionTypes->max_length;
      if ( (__int64)++v14 >= (int)max_length )
        goto LABEL_19;
    }
LABEL_20:
    sub_21FFED4(this);
  }
LABEL_19:
  LOBYTE(this) = 0;
  return (char)this;
}


bool WarBoardAIEvalCalcurater__JudgeSatisfyingTrendCondition(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o *route,
        WarBoardActionTrendConditionEntity_o *condition,
        int32_t condType,
        WarBoardAIRoute_TargetData_o *targetData,
        const MethodInfo *method)
{
  bool v10; // zf
  bool v11; // zf
  WarBoardAIRoute_RouteData_o *v12; // x0
  int64_t v13; // x1
  WarBoardAIRoute_RouteData_o *v14; // x0
  int64_t v15; // x1
  int32_t isMoveByMasterAndEnemyRange; // w8
  int32_t isMoveByServantAndEnemyRange; // w8
  int32_t isMoveByServantAndMasterRange; // w8
  bool isMaster; // w0
  bool v20; // cc
  WarBoardPieceData_o *targetPiece; // x20
  WarBoardPieceData_o *v22; // x19
  int32_t v24; // w8
  struct System_Int32_array *v25; // x8
  WarBoardPieceData_o *v26; // x20
  WarBoardPieceData_o *v27; // x21
  WarBoardPieceData_o *v28; // x0
  int32_t v29; // w9
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  int32_t v31; // w19
  bool v32; // cc
  _BOOL4 isAround; // w8
  bool v34; // cc
  WarBoardPieceData_o *v35; // x0
  _BOOL4 ExistEnemyOnBaseRoute_k__BackingField; // w8
  WarBoardPieceData_o *v37; // x20
  WarBoardPieceData_o *v38; // x19
  int32_t attackCountOnThisTurn; // w8
  WarBoardPieceData_o *v40; // x20
  WarBoardPieceData_o *v41; // x19
  WarBoardPieceData_o *actionPiece; // x20
  WarBoardPieceData_o *basePiece; // x21
  WarBoardPieceData_o *v44; // x20
  WarBoardPieceData_o *v45; // x19
  int32_t actionCountOnThisTurn; // w8
  System_Collections_Generic_IEnumerable_TSource__o *detourRoute; // x0
  int32_t v48; // w19
  int32_t actionIndex; // w9
  WarBoardPieceData_o *v50; // x0
  WarBoardPieceData_o *v51; // x0
  int32_t value; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v53[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5935F40 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    this = (WarBoardAIEvalCalcurater_o *)sub_21FFC50(&WarBoardAIManager_TypeInfo);
    byte_5935F40 = 1;
  }
  *(_QWORD *)v53 = 0;
  value = 0;
  switch ( condType )
  {
    case 1:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 16;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 2:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 16;
      goto LABEL_411;
    case 3:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 64;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 4:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 64;
      goto LABEL_411;
    case 5:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x4000000;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 6:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x4000000;
      goto LABEL_411;
    case 7:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 1024;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 8:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 1024;
      goto LABEL_411;
    case 9:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x8000000000LL;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 10:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x8000000000LL;
      goto LABEL_411;
    case 11:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 2048;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 12:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 2048;
      goto LABEL_411;
    case 13:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x4000000000LL;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 14:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x4000000000LL;
      goto LABEL_411;
    case 15:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 256;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 16:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 256;
      goto LABEL_411;
    case 17:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 512;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 18:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 512;
      goto LABEL_411;
    case 19:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 4096;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 20:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 4096;
      goto LABEL_411;
    case 21:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x2000;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 22:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x2000;
      goto LABEL_411;
    case 23:
      if ( !route )
        goto LABEL_414;
      if ( !condition )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.listExistDesignationItem;
      if ( !this )
        goto LABEL_414;
      return System_Collections_Generic_List_int___Contains(
               (System_Collections_Generic_List_int__o *)this,
               condition->fields.value,
               (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
    case 24:
      if ( !route )
        goto LABEL_414;
      if ( !condition )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.listExistDesignationItem;
      if ( !this )
        goto LABEL_414;
      isMaster = System_Collections_Generic_List_int___Contains(
                   (System_Collections_Generic_List_int__o *)this,
                   condition->fields.value,
                   (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
      goto LABEL_412;
    case 25:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByMasterAndEnemyRange;
      goto LABEL_393;
    case 26:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByMasterAndEnemyRange;
      goto LABEL_396;
    case 27:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByMasterAndEnemyRange;
      goto LABEL_344;
    case 28:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndEnemyRange;
      goto LABEL_393;
    case 29:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndEnemyRange;
      goto LABEL_396;
    case 30:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndEnemyRange;
      goto LABEL_344;
    case 31:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndMasterRange;
      goto LABEL_393;
    case 32:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndMasterRange;
      goto LABEL_396;
    case 33:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndMasterRange;
      goto LABEL_344;
    case 34:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndClassAdvantageServantRange;
      goto LABEL_393;
    case 35:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndClassAdvantageServantRange;
      goto LABEL_396;
    case 36:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndClassAdvantageServantRange;
      goto LABEL_344;
    case 37:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndClassDisAdvantageServantRange;
      goto LABEL_393;
    case 38:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndClassDisAdvantageServantRange;
      goto LABEL_396;
    case 39:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndClassDisAdvantageServantRange;
      goto LABEL_344;
    case 40:
      if ( !route )
        goto LABEL_414;
      if ( !condition )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
      if ( !this )
        goto LABEL_414;
      if ( !System_Collections_Generic_Dictionary_int__Int32Enum___TryGetValue(
              (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
              condition->fields.value,
              &v53[1],
              (const MethodInfo_3F64190 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_380;
      isMoveByMasterAndEnemyRange = v53[1];
      goto LABEL_393;
    case 41:
      if ( !route )
        goto LABEL_414;
      if ( !condition )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
      if ( !this )
        goto LABEL_414;
      if ( !System_Collections_Generic_Dictionary_int__Int32Enum___TryGetValue(
              (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
              condition->fields.value,
              v53,
              (const MethodInfo_3F64190 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_380;
      isMoveByServantAndEnemyRange = v53[0];
      goto LABEL_396;
    case 42:
      if ( !route )
        goto LABEL_414;
      if ( !condition )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
      if ( !this )
        goto LABEL_414;
      if ( !System_Collections_Generic_Dictionary_int__Int32Enum___TryGetValue(
              (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
              condition->fields.value,
              &value,
              (const MethodInfo_3F64190 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_380;
      isMoveByServantAndMasterRange = value;
      goto LABEL_344;
    case 43:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x4000;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 44:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x4000;
      goto LABEL_411;
    case 45:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x8000;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 46:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x8000;
      goto LABEL_411;
    case 47:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x10000;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 48:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x10000;
      goto LABEL_411;
    case 49:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x20000;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 50:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x20000;
      goto LABEL_411;
    case 51:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndAttackAdvantageServantRange;
      goto LABEL_393;
    case 52:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndAttackAdvantageServantRange;
      goto LABEL_396;
    case 53:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndAttackAdvantageServantRange;
      goto LABEL_344;
    case 54:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndAttackDisAdvantageServantRange;
      goto LABEL_393;
    case 55:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndAttackDisAdvantageServantRange;
      goto LABEL_396;
    case 56:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndAttackDisAdvantageServantRange;
      goto LABEL_344;
    case 57:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndDefenseAdvantageServantRange;
      goto LABEL_393;
    case 58:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndDefenseAdvantageServantRange;
      goto LABEL_396;
    case 59:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndDefenseAdvantageServantRange;
      goto LABEL_344;
    case 60:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndDefenseDisAdvantageServantRange;
      goto LABEL_393;
    case 61:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndDefenseDisAdvantageServantRange;
      goto LABEL_396;
    case 62:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndDefenseDisAdvantageServantRange;
      goto LABEL_344;
    case 63:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 128;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 64:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 128;
      goto LABEL_411;
    case 65:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndEnemyMasterRange;
      goto LABEL_393;
    case 66:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndEnemyMasterRange;
      goto LABEL_396;
    case 67:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndEnemyMasterRange;
      goto LABEL_344;
    case 68:
      if ( !route )
        goto LABEL_414;
      actionPiece = route->fields.actionPiece;
      if ( !actionPiece )
        goto LABEL_380;
      basePiece = route->fields.basePiece;
      if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, route, condition);
      if ( !WarBoardAIManager__IsEnemyPiece(basePiece, actionPiece, 0) )
        goto LABEL_380;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.actionPiece;
      if ( !this )
        goto LABEL_414;
      return WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)this, 0);
    case 69:
      if ( !route )
        goto LABEL_414;
      v26 = route->fields.actionPiece;
      if ( !v26 )
        goto LABEL_380;
      v27 = route->fields.basePiece;
      if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, route, condition);
      if ( !WarBoardAIManager__IsEnemyPiece(v27, v26, 0) )
        goto LABEL_380;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.actionPiece;
      if ( !this )
        goto LABEL_414;
      isMaster = WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)this, 0);
      goto LABEL_412;
    case 70:
      if ( !route )
        goto LABEL_414;
      v51 = route->fields.basePiece;
      if ( !v51 )
        goto LABEL_380;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_ActionType(v51, 0);
      if ( !condition )
        goto LABEL_414;
LABEL_367:
      v11 = (_DWORD)this == condition->fields.value;
      goto LABEL_397;
    case 71:
      if ( !route || !condition )
        goto LABEL_414;
      actionCountOnThisTurn = route->fields.actionCountOnThisTurn;
      goto LABEL_358;
    case 72:
      if ( !route || !condition )
        goto LABEL_414;
      attackCountOnThisTurn = route->fields.actionCountOnThisTurn;
      goto LABEL_334;
    case 73:
      if ( !route || !condition )
        goto LABEL_414;
      v24 = route->fields.actionCountOnThisTurn;
      goto LABEL_153;
    case 74:
    case 127:
      v10 = targetData == 0;
      goto LABEL_350;
    case 75:
    case 128:
      v11 = targetData == 0;
      goto LABEL_397;
    case 76:
      if ( !targetData )
        goto LABEL_380;
      targetPiece = targetData->fields.targetPiece;
      if ( !targetPiece )
        goto LABEL_380;
      if ( !route )
        goto LABEL_414;
      v22 = route->fields.basePiece;
      if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, route, condition);
      return WarBoardAIManager__IsEnemyPiece(v22, targetPiece, 0);
    case 77:
      if ( !targetData )
        goto LABEL_380;
      v40 = targetData->fields.targetPiece;
      if ( !v40 )
        goto LABEL_260;
      if ( !route )
        goto LABEL_414;
      v41 = route->fields.basePiece;
      if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, route, condition);
      isMaster = WarBoardAIManager__IsEnemyPiece(v41, v40, 0);
      goto LABEL_412;
    case 78:
      if ( !targetData )
        goto LABEL_380;
      isAround = targetData->fields.isAround;
      goto LABEL_349;
    case 79:
      if ( !targetData )
        goto LABEL_380;
      ExistEnemyOnBaseRoute_k__BackingField = targetData->fields.isAround;
      goto LABEL_265;
    case 80:
      if ( !targetData )
        goto LABEL_380;
      goto LABEL_295;
    case 81:
      if ( targetData )
        goto LABEL_219;
      goto LABEL_380;
    case 82:
      if ( !targetData )
        goto LABEL_380;
      goto LABEL_343;
    case 83:
      if ( !targetData )
        goto LABEL_380;
      detourRoute = (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.detourRoute;
      if ( !detourRoute )
        goto LABEL_380;
      v48 = System_Linq_Enumerable__Count_int_(
              detourRoute,
              (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
      this = (WarBoardAIEvalCalcurater_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
                                             (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_414;
      v32 = v48 - (int)this <= condition->fields.value;
      goto LABEL_155;
    case 84:
      if ( !targetData )
        goto LABEL_380;
      v30 = (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.detourRoute;
      if ( !v30 )
        goto LABEL_260;
      v31 = System_Linq_Enumerable__Count_int_(
              v30,
              (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
      this = (WarBoardAIEvalCalcurater_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
                                             (const MethodInfo_3845C0C *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_414;
      v20 = v31 - (int)this <= condition->fields.value;
LABEL_128:
      LOBYTE(v25) = !v20;
      return (unsigned __int8)v25 & 1;
    case 85:
      if ( !targetData )
        goto LABEL_380;
      v25 = targetData->fields.detourRoute;
      if ( !v25 )
        return (unsigned __int8)v25 & 1;
      if ( (v25->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v25->m_Items[1] != route->fields.actionIndex )
        goto LABEL_380;
LABEL_295:
      isMoveByMasterAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_393;
    case 86:
      if ( !targetData )
        goto LABEL_380;
      v25 = targetData->fields.detourRoute;
      if ( !v25 )
        return (unsigned __int8)v25 & 1;
      if ( (v25->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v25->m_Items[1] != route->fields.actionIndex )
        goto LABEL_380;
LABEL_219:
      isMoveByServantAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_396;
    case 87:
      if ( !targetData )
        goto LABEL_380;
      v25 = targetData->fields.detourRoute;
      if ( !v25 )
        return (unsigned __int8)v25 & 1;
      if ( (v25->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v25->m_Items[1] != route->fields.actionIndex )
        goto LABEL_380;
LABEL_343:
      isMoveByServantAndMasterRange = targetData->fields.moveByDistanceType;
      goto LABEL_344;
    case 88:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x20000000;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 89:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x20000000;
      goto LABEL_411;
    case 90:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x40000000;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 91:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x40000000;
      goto LABEL_411;
    case 92:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x80000000LL;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 93:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x80000000LL;
      goto LABEL_411;
    case 94:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x100000000LL;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 95:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x100000000LL;
      goto LABEL_411;
    case 96:
      if ( !targetData )
        goto LABEL_380;
      isAround = targetData->fields._ExistEnemyOnBaseRoute_k__BackingField;
LABEL_349:
      v10 = !isAround;
      goto LABEL_350;
    case 97:
      if ( !targetData )
        goto LABEL_380;
      ExistEnemyOnBaseRoute_k__BackingField = targetData->fields._ExistEnemyOnBaseRoute_k__BackingField;
LABEL_265:
      v11 = !ExistEnemyOnBaseRoute_k__BackingField;
      goto LABEL_397;
    case 98:
      if ( !route || !condition )
        goto LABEL_414;
      v29 = condition->fields.value;
      v24 = route->fields.EnemyRangeMin - 1;
      goto LABEL_154;
    case 99:
      if ( !route || !condition )
        goto LABEL_414;
      v20 = route->fields.EnemyRangeMin - 1 <= condition->fields.value;
      goto LABEL_128;
    case 100:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_RouteData__HasFlag(route, 2, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_380;
      if ( !condition )
        goto LABEL_414;
      actionCountOnThisTurn = route->fields.attackCountOnThisTurn;
LABEL_358:
      actionIndex = condition->fields.value;
      goto LABEL_359;
    case 101:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_RouteData__HasFlag(route, 2, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_380;
      if ( !condition )
        goto LABEL_414;
      attackCountOnThisTurn = route->fields.attackCountOnThisTurn;
LABEL_334:
      v34 = attackCountOnThisTurn < condition->fields.value;
      goto LABEL_335;
    case 102:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_RouteData__HasFlag(route, 2, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_380;
      if ( !condition )
        goto LABEL_414;
      v24 = route->fields.attackCountOnThisTurn;
LABEL_153:
      v29 = condition->fields.value;
LABEL_154:
      v32 = v24 <= v29;
      goto LABEL_155;
    case 103:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x400000000LL;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 104:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x400000000LL;
      goto LABEL_411;
    case 105:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x800000000LL;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 106:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x800000000LL;
      goto LABEL_411;
    case 107:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x1000000000LL;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 108:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x1000000000LL;
      goto LABEL_411;
    case 109:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x2000000000LL;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 110:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x2000000000LL;
      goto LABEL_411;
    case 111:
      if ( !targetData )
        goto LABEL_380;
      v37 = targetData->fields.targetPiece;
      if ( !v37 )
        goto LABEL_380;
      if ( !route )
        goto LABEL_414;
      v38 = route->fields.basePiece;
      if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, route, condition);
      return WarBoardAIManager__IsAllyPiece(v38, v37, 0);
    case 112:
      if ( !targetData )
        goto LABEL_380;
      v44 = targetData->fields.targetPiece;
      if ( !v44 )
        goto LABEL_260;
      if ( !route )
        goto LABEL_414;
      v45 = route->fields.basePiece;
      if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, route, condition);
      isMaster = WarBoardAIManager__IsAllyPiece(v45, v44, 0);
      goto LABEL_412;
    case 113:
      if ( !targetData )
        goto LABEL_380;
      v25 = targetData->fields.detourRoute;
      if ( !v25 )
        return (unsigned __int8)v25 & 1;
      if ( (v25->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      actionCountOnThisTurn = v25->m_Items[1];
      actionIndex = route->fields.actionIndex;
LABEL_359:
      v11 = actionCountOnThisTurn == actionIndex;
      goto LABEL_397;
    case 114:
      if ( !targetData )
        goto LABEL_380;
      v25 = targetData->fields.detourRoute;
      if ( !v25 )
        return (unsigned __int8)v25 & 1;
      if ( (v25->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      v10 = v25->m_Items[1] == route->fields.actionIndex;
LABEL_350:
      LOBYTE(v25) = !v10;
      return (unsigned __int8)v25 & 1;
    case 115:
      if ( !route )
        goto LABEL_414;
      v28 = route->fields.basePiece;
      if ( !v28 )
        goto LABEL_380;
      v11 = WarBoardPieceData__get_ActionType(v28, 0) == 1;
      goto LABEL_397;
    case 116:
      if ( !route )
        goto LABEL_414;
      v50 = route->fields.basePiece;
      if ( !v50 )
        goto LABEL_380;
      v11 = WarBoardPieceData__get_ActionType(v50, 0) == 2;
      goto LABEL_397;
    case 117:
      if ( !route )
        goto LABEL_414;
      v35 = route->fields.basePiece;
      if ( !v35 )
        goto LABEL_380;
      v11 = WarBoardPieceData__get_ActionType(v35, 0) == 3;
      goto LABEL_397;
    case 118:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x10000000000LL;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 119:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x10000000000LL;
      goto LABEL_411;
    case 120:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x20000000000LL;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 121:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x20000000000LL;
      goto LABEL_411;
    case 122:
      if ( !targetData )
        goto LABEL_380;
      v25 = targetData->fields.detourRoute;
      if ( !v25 )
        return (unsigned __int8)v25 & 1;
      if ( (v25->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v25->m_Items[1] != route->fields.actionIndex )
        goto LABEL_380;
      isMoveByMasterAndEnemyRange = targetData->fields.detourMoveByDistanceType;
      goto LABEL_393;
    case 123:
      if ( !targetData )
        goto LABEL_380;
      v25 = targetData->fields.detourRoute;
      if ( !v25 )
        return (unsigned __int8)v25 & 1;
      if ( (v25->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v25->m_Items[1] != route->fields.actionIndex )
        goto LABEL_380;
      isMoveByServantAndEnemyRange = targetData->fields.detourMoveByDistanceType;
      goto LABEL_396;
    case 124:
      if ( !targetData )
        goto LABEL_380;
      v25 = targetData->fields.detourRoute;
      if ( !v25 )
        return (unsigned __int8)v25 & 1;
      if ( (v25->max_length & 0xFFFFFFFE) == 0 )
LABEL_415:
        sub_21FFED4(this);
      if ( !route )
        goto LABEL_414;
      if ( v25->m_Items[1] == route->fields.actionIndex )
      {
        isMoveByServantAndMasterRange = targetData->fields.detourMoveByDistanceType;
LABEL_344:
        v11 = isMoveByServantAndMasterRange == 2;
LABEL_397:
        LOBYTE(v25) = v11;
      }
      else
      {
LABEL_380:
        LOBYTE(v25) = 0;
      }
      return (unsigned __int8)v25 & 1;
    case 125:
      if ( !route )
        goto LABEL_414;
      v12 = route;
      v13 = 0x40000000000LL;
      return WarBoardAIRoute_RouteData__HasFlag(v12, v13, 0);
    case 126:
      if ( !route )
        goto LABEL_414;
      v14 = route;
      v15 = 0x40000000000LL;
LABEL_411:
      isMaster = WarBoardAIRoute_RouteData__HasFlag(v14, v15, 0);
      goto LABEL_412;
    case 129:
      if ( !condition )
        goto LABEL_414;
      return WarBoardAiTrendCondJudger__TargetRangeUnder(targetData, condition->fields.value, 0);
    case 130:
      if ( !condition )
        goto LABEL_414;
      isMaster = WarBoardAiTrendCondJudger__TargetRangeUnder(targetData, condition->fields.value, 0);
      goto LABEL_412;
    case 131:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.basePiece;
      if ( !this )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_survivalTurn((WarBoardPieceData_o *)this, 0);
      if ( !condition )
        goto LABEL_414;
      goto LABEL_367;
    case 132:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.basePiece;
      if ( !this )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_survivalTurn((WarBoardPieceData_o *)this, 0);
      if ( !condition )
        goto LABEL_414;
      v34 = (int)this < condition->fields.value;
LABEL_335:
      LOBYTE(v25) = !v34;
      return (unsigned __int8)v25 & 1;
    case 133:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.basePiece;
      if ( !this )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_survivalTurn((WarBoardPieceData_o *)this, 0);
      if ( !condition )
        goto LABEL_414;
      v32 = (int)this <= condition->fields.value;
LABEL_155:
      LOBYTE(v25) = v32;
      return (unsigned __int8)v25 & 1;
    case 134:
      if ( !route )
        goto LABEL_414;
      return WarBoardAIRoute_RouteData__get_notAction(route, 0);
    case 135:
      if ( !route )
        goto LABEL_414;
      isMaster = WarBoardAIRoute_RouteData__get_notAction(route, 0);
      goto LABEL_412;
    case 136:
      if ( route )
      {
        this = (WarBoardAIEvalCalcurater_o *)route->fields.baseSquare;
        if ( this )
          return WarBoardSquareData__IsFlag((WarBoardSquareData_o *)this, 1, 0);
      }
      goto LABEL_414;
    case 137:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.baseSquare;
      if ( !this )
        goto LABEL_414;
      goto LABEL_193;
    case 138:
      return WarBoardAiTrendCondJudger__IsReplaceTarget(route, targetData, 0);
    case 139:
      isMaster = WarBoardAiTrendCondJudger__IsReplaceTarget(route, targetData, 0);
      goto LABEL_412;
    case 140:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByOutOfWarningArea;
LABEL_393:
      v11 = isMoveByMasterAndEnemyRange == 1;
      goto LABEL_397;
    case 141:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByOutOfWarningArea;
LABEL_396:
      v11 = isMoveByServantAndEnemyRange == 3;
      goto LABEL_397;
    case 142:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByOutOfWarningArea;
      goto LABEL_344;
    case 143:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.actionSquare;
      if ( !this )
        goto LABEL_414;
      return WarBoardSquareData__IsFlag((WarBoardSquareData_o *)this, 1, 0);
    case 144:
      if ( !route || (this = (WarBoardAIEvalCalcurater_o *)route->fields.actionSquare) == 0 )
LABEL_414:
        sub_21FFECC(this, route);
LABEL_193:
      isMaster = WarBoardSquareData__IsFlag((WarBoardSquareData_o *)this, 1, 0);
LABEL_412:
      LOBYTE(v25) = !isMaster;
      return (unsigned __int8)v25 & 1;
    default:
LABEL_260:
      LOBYTE(v25) = 1;
      return (unsigned __int8)v25 & 1;
  }
}


void WarBoardAIEvalCalcurater___c__DisplayClass9_0___ctor(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__0(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v4; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v4 = this;
  if ( (byte_5935F43 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_5935F43 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    sub_21FFECC(this, x);
  return value - 1 == ratingOffset->fields.value;
}


bool WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__1(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v4; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v4 = this;
  if ( (byte_5935F44 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_5935F44 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    sub_21FFECC(this, x);
  return value - 1 >= ratingOffset->fields.value;
}


bool WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__2(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v4; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v4 = this;
  if ( (byte_5935F45 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_5935F45 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    sub_21FFECC(this, x);
  return ratingOffset->fields.value2 >= value - 1;
}


bool WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__3(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v4; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v4 = this;
  if ( (byte_5935F46 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_5935F46 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    sub_21FFECC(this, x);
  return value - 1 == ratingOffset->fields.value;
}


bool WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__4(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v4; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v4 = this;
  if ( (byte_5935F47 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_5935F47 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    sub_21FFECC(this, x);
  return ratingOffset->fields.value2 >= value - 1;
}


bool WarBoardAIEvalCalcurater___c__DisplayClass9_0___JudgeRatingOffsetAddCondition_b__5(
        WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *this,
        System_Collections_Generic_KeyValuePair_uint__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *v4; // x20
  struct WarBoardRatingOffsetEntity_o *ratingOffset; // x8

  value = x.fields.value;
  v4 = this;
  if ( (byte_5935F48 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_5935F48 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    sub_21FFECC(this, x);
  return value - 1 >= ratingOffset->fields.value;
}