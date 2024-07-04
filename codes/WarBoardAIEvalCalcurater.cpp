void __fastcall WarBoardAIEvalCalcurater___ctor(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_PiecePersonality_o *piecePersonality,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.piecePersonalityList = piecePersonality;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)piecePersonality, v5, v6);
}


void __fastcall WarBoardAIEvalCalcurater__AddRatingBaseOffsetValue(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        WarBoardActionTrendEntity_o *trend,
        const MethodInfo *method)
{
  struct System_Int32_array *actionTypeIds; // x21
  __int64 v7; // x8
  unsigned __int64 v8; // x22
  WarBoardAIRoute_RouteData_o *v9; // x8
  __int64 v10; // x9

  if ( !*route
    || (WarBoardAIEvalCalcurater__AddTrendEvalValue(this, (*route)->fields.evalOffsetMagnification, trend, method),
        !trend)
    || (actionTypeIds = trend->fields.actionTypeIds) == 0LL )
  {
LABEL_17:
    sub_1B00F28(this, route);
  }
  v7 = *(_QWORD *)&actionTypeIds->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
        sub_1B00F30(this, route);
      this = (WarBoardAIEvalCalcurater_o *)WarBoardActionTrendEntity__GetActionType(
                                             trend,
                                             actionTypeIds->m_Items[v8 + 1],
                                             0LL);
      if ( (_DWORD)this == 2 )
        break;
      if ( (_DWORD)this == 1 )
      {
        v9 = *route;
        if ( !*route )
          goto LABEL_17;
        v10 = 4LL;
LABEL_13:
        v9->fields.flagNow |= v10;
      }
      LODWORD(v7) = actionTypeIds->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        return;
    }
    v9 = *route;
    if ( !*route )
      goto LABEL_17;
    v10 = 8LL;
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
    sub_1B00F28(this, route);
  }
}


void __fastcall WarBoardAIEvalCalcurater__AddTrendEvalValue(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification,
        WarBoardActionTrendEntity_o *trend,
        const MethodInfo *method)
{
  int32_t viewPoint; // w8
  float warAttack; // s8
  float *p_benMove; // x20
  float benAttack; // s8
  float v10; // s8

  if ( !trend )
    goto LABEL_10;
  viewPoint = trend->fields.viewPoint;
  if ( viewPoint == 1 )
  {
    if ( evalOffsetMagnification )
    {
      benAttack = evalOffsetMagnification->fields.benAttack;
      evalOffsetMagnification->fields.benAttack = benAttack + WarBoardActionTrendEntity__GetAttackValue(trend, 0LL);
      p_benMove = &evalOffsetMagnification->fields.benMove;
      goto LABEL_8;
    }
LABEL_10:
    sub_1B00F28(this, evalOffsetMagnification);
  }
  if ( viewPoint )
    return;
  if ( !evalOffsetMagnification )
    goto LABEL_10;
  warAttack = evalOffsetMagnification->fields.warAttack;
  evalOffsetMagnification->fields.warAttack = warAttack + WarBoardActionTrendEntity__GetAttackValue(trend, 0LL);
  p_benMove = &evalOffsetMagnification->fields.warMove;
LABEL_8:
  v10 = *p_benMove;
  *p_benMove = v10 + WarBoardActionTrendEntity__GetMoveValue(trend, 0LL);
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
    sub_1B00F28(this, route);
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
  __int64 v12; // x1
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicPutIndexTargetData; // x22
  int64_t TrendKey; // x0
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  WarBoardActionTrendEntity_o *v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_HashSet_T__o *FutureLookingTrendHashSet; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_48E03E9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__, route);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__, v8);
    this = (WarBoardAIEvalCalcurater_o *)sub_1B00CCC(
                                           &Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__,
                                           v9);
    byte_48E03E9 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  value = 0LL;
  piecePersonalityList = v4->fields.piecePersonalityList;
  if ( !piecePersonalityList
    || (this = (WarBoardAIEvalCalcurater_o *)piecePersonalityList->fields.actionTrandList) == 0LL )
  {
    sub_1B00F28(this, route);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    if ( !v11 )
      break;
    value = 0LL;
    current = v25.fields._current;
    if ( !*route )
      sub_1B00F28(v11, v12);
    if ( !v25.fields._current )
      sub_1B00F28(v11, v12);
    klass = v25.fields._current[1].klass;
    if ( !klass )
      sub_1B00F28(0LL, v12);
    dicPutIndexTargetData = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(*route)->fields.dicPutIndexTargetData;
    TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, 0LL);
    if ( !dicPutIndexTargetData )
      sub_1B00F28(TrendKey, TrendKey);
    System_Collections_Generic_Dictionary_long__object___TryGetValue(
      dicPutIndexTargetData,
      TrendKey,
      &value,
      (const MethodInfo_3077494 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
    if ( WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
           v4,
           *route,
           (WarBoardAIRoute_ActionTrendInfo_o *)current,
           (WarBoardAIRoute_TargetData_o *)value,
           v17) )
    {
      WarBoardAIEvalCalcurater__AddRatingBaseOffsetValue(
        v4,
        route,
        (WarBoardActionTrendEntity_o *)current[1].klass,
        v18);
      v20 = (WarBoardActionTrendEntity_o *)current[1].klass;
      if ( !v20 )
        sub_1B00F28(0LL, v19);
      if ( WarBoardActionTrendEntity__get_HasFutureTrend(v20, 0LL) )
      {
        if ( !*route )
          sub_1B00F28(0LL, v21);
        FutureLookingTrendHashSet = (System_Collections_Generic_HashSet_T__o *)WarBoardAIRoute_RouteData__get_FutureLookingTrendHashSet(
                                                                                 *route,
                                                                                 0LL);
        if ( !FutureLookingTrendHashSet )
          sub_1B00F28(0LL, v23);
        System_Collections_Generic_HashSet_object___Add(
          FutureLookingTrendHashSet,
          current,
          (const MethodInfo_3281444 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
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
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *monitor; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  WarBoardAIRoute_ActionTrendInfo_o *current; // x22
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicPutIndexTargetData; // x23
  int64_t TrendKey; // x0
  const MethodInfo *v26; // x4
  _BOOL8 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  WarBoardAIRoute_RouteData_o *v30; // x8
  ServantStatusBattleListViewItem_o *p_futureEvalOffsetMag; // x23
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *v32; // x24
  _BOOL8 IsAttack; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x1
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_48E03EA & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__, route);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__, v11);
    sub_1B00CCC(
      &Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__,
      v12);
    sub_1B00CCC(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__, v15);
    byte_48E03EA = 1;
  }
  memset(&v41, 0, sizeof(v41));
  memset(&v40, 0, sizeof(v40));
  value = 0LL;
  FutureLookingTrendHashSet = *route;
  if ( !*route )
    goto LABEL_35;
  if ( !WarBoardAIRoute_RouteData__HasFutureTrend(FutureLookingTrendHashSet, 0LL) )
    return;
  FutureLookingTrendHashSet = *route;
  if ( !*route || !futureRoute )
    goto LABEL_35;
  if ( FutureLookingTrendHashSet->fields.basePiece != futureRoute->fields.basePiece )
    return;
  FutureLookingTrendHashSet = (WarBoardAIRoute_RouteData_o *)WarBoardAIRoute_RouteData__get_FutureLookingTrendHashSet(
                                                               FutureLookingTrendHashSet,
                                                               0LL);
  if ( !FutureLookingTrendHashSet )
LABEL_35:
    sub_1B00F28(FutureLookingTrendHashSet, route);
  System_Collections_Generic_HashSet_object___GetEnumerator(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)&v38,
    (System_Collections_Generic_HashSet_T__o *)FutureLookingTrendHashSet,
    (const MethodInfo_3280DC8 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v41 = v38;
  while ( 1 )
  {
    v17 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            (System_Collections_Generic_HashSet_Enumerator_T__o *)&v41,
            (const MethodInfo_313DCA8 *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    if ( !v17 )
      break;
    if ( !v41.fields._current )
      sub_1B00F28(v17, v18);
    monitor = (System_Collections_Generic_List_object__o *)v41.fields._current[2].monitor;
    if ( !monitor )
      sub_1B00F28(0LL, v18);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v38,
      monitor,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v40 = v38;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v40,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
      if ( !v20 )
        break;
      current = (WarBoardAIRoute_ActionTrendInfo_o *)v40.fields._current;
      if ( !v40.fields._current )
        sub_1B00F28(v20, v21);
      klass = v40.fields._current[1].klass;
      if ( !klass )
        sub_1B00F28(0LL, v21);
      dicPutIndexTargetData = (System_Collections_Generic_Dictionary_TKey__TValue__o *)futureRoute->fields.dicPutIndexTargetData;
      TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, 0LL);
      if ( !dicPutIndexTargetData )
        sub_1B00F28(TrendKey, TrendKey);
      System_Collections_Generic_Dictionary_long__object___TryGetValue(
        dicPutIndexTargetData,
        TrendKey,
        &value,
        (const MethodInfo_3077494 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
      v27 = WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
              this,
              futureRoute,
              current,
              (WarBoardAIRoute_TargetData_o *)value,
              v26);
      if ( v27 )
      {
        v30 = *route;
        if ( !*route )
          sub_1B00F28(v27, v28);
        p_futureEvalOffsetMag = (ServantStatusBattleListViewItem_o *)&v30->fields.futureEvalOffsetMag;
        if ( !v30->fields.futureEvalOffsetMag )
        {
          v32 = (WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)sub_1B00F18(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
          WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(v32, 0LL);
          IsAttack = WarBoardAIRoute_RouteData__get_IsAttack(futureRoute, 0LL);
          if ( !v32 )
            sub_1B00F28(IsAttack, v34);
          v32->fields.isAttack = IsAttack;
          p_futureEvalOffsetMag->klass = (ServantStatusBattleListViewItem_c *)v32;
          sub_1B00C70(p_futureEvalOffsetMag, (int32_t)v32, v35, v36);
          v30 = *route;
          if ( !*route )
            sub_1B00F28(v27, v37);
        }
        WarBoardAIEvalCalcurater__AddTrendEvalValue(
          (WarBoardAIEvalCalcurater_o *)v27,
          v30->fields.futureEvalOffsetMag,
          current->fields._Entity_k__BackingField,
          v29);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v40,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)&v41,
    (const MethodInfo_313DCA4 *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
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
  __int64 v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t current; // w1
  WarBoardRatingOffsetEntity_o **v28; // x20
  WarBoardAIManager_c *HasFlag; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x5
  WarBoardRatingOffsetEntity_o *v32; // x2
  char v33; // w8
  WarBoardRatingOffsetEntity_o *v34; // x9
  int32_t attackByLinkedEnemy; // w8
  struct System_Collections_Generic_Dictionary_uint__int__o *v36; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v37; // x23
  struct System_Collections_Generic_Dictionary_uint__int__o *v38; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v39; // x23
  WarBoardPieceData_o *v40; // x0
  struct WarBoardPieceData_o *v41; // x8
  struct BattleServantData_o *v42; // x8
  _BOOL4 v43; // w8
  struct WarBoardPieceData_o *v44; // x21
  WarBoardRatingOffsetEntity_o *v45; // x8
  float v46; // s0
  int v47; // w9
  WarBoardPieceData_o *v48; // x0
  WarBoardPieceData_o *v49; // x0
  WarBoardPieceData_o *v50; // x0
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v52; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v53; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v54; // x23
  WarBoardPieceData_o *v55; // x0
  struct WarBoardPieceData_o *v56; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardRatingOffsetEntity_o *v58; // x9
  int32_t np; // w8
  WarBoardPieceData_o *v60; // x0
  int32_t moveByLinkedEnemy; // w8
  bool v62; // zf
  WarBoardAIManager_c *v63; // x0
  struct WarBoardPieceData_o *actionPiece; // x21
  WarBoardPieceData_o *v65; // x0
  int32_t breakPointMax_k__BackingField; // w21
  int32_t breakPoint_k__BackingField; // w22
  int v68; // w9
  WarBoardAIRoute_RouteData_o *v69; // x8
  struct WarBoardPieceData_o *basePiece; // x21
  bool v71; // cc
  WarBoardAIManager_c *v72; // x0
  struct WarBoardPieceData_o *v73; // x21
  WarBoardPieceData_o *v74; // x0
  int32_t v75; // w21
  int32_t v76; // w22
  WarBoardPieceData_o *v77; // x0
  WarBoardPieceData_o *v78; // x0
  WarBoardPieceData_o *v79; // x0
  WarBoardPieceData_o *v80; // x0
  WarBoardAIRoute_RouteData_o *v81; // x8
  struct System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v83; // x23
  struct System_Collections_Generic_Dictionary_uint__int__o *v84; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v85; // x23
  WarBoardPieceData_o *v86; // x0
  WarBoardPieceData_o *v87; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v88; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v89; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v90; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v91; // x23
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48E03EC & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, route);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v7);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__get_Current__, v11);
    sub_1B00CCC(&System_Func_KeyValuePair_uint__int___bool__TypeInfo, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__, v13);
    sub_1B00CCC(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__, v14);
    sub_1B00CCC(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__, v15);
    sub_1B00CCC(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__, v16);
    sub_1B00CCC(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__, v17);
    sub_1B00CCC(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__, v18);
    sub_1B00CCC(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__, v19);
    sub_1B00CCC(&WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo, v20);
    this = (WarBoardAIEvalCalcurater_o *)sub_1B00CCC(&WarBoardAIManager_TypeInfo, v21);
    byte_48E03EC = 1;
  }
  memset(&v93, 0, sizeof(v93));
  if ( !*route || !ratingOffsetList )
    sub_1B00F28(this, route);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v92,
    (System_Collections_Generic_List_object__o *)ratingOffsetList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__);
  v93 = v92;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v93,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__) )
  {
    v22 = sub_1B00F18(WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v22, 0LL);
    if ( !v22 )
      sub_1B00F28(v23, v24);
    current = (int32_t)v93.fields._current;
    *(_QWORD *)(v22 + 16) = v93.fields._current;
    v28 = (WarBoardRatingOffsetEntity_o **)(v22 + 16);
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v22 + 16), current, v25, v26);
    v32 = *(WarBoardRatingOffsetEntity_o **)(v22 + 16);
    if ( !v32 )
      sub_1B00F28(HasFlag, v30);
    v33 = 1;
    switch ( v32->fields.type )
    {
      case 0:
        break;
      case 1:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v34 = *v28;
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
        attackByLinkedEnemy = (*route)->fields.attackByLinkedEnemy;
        goto LABEL_163;
      case 2:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v34 = *v28;
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
        attackByLinkedEnemy = (*route)->fields.attackByLinkedAlly;
        goto LABEL_163;
      case 3:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        goto LABEL_213;
      case 4:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        goto LABEL_244;
      case 5:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v63 = WarBoardAIManager_TypeInfo;
        actionPiece = (*route)->fields.actionPiece;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        if ( !actionPiece )
          sub_1B00F28(v63, v30);
        if ( !*route )
          sub_1B00F28(v63, v30);
        v65 = (*route)->fields.actionPiece;
        if ( !v65 )
          sub_1B00F28(0LL, v30);
        breakPoint_k__BackingField = actionPiece->fields._breakPoint_k__BackingField;
        breakPointMax_k__BackingField = actionPiece->fields._breakPointMax_k__BackingField;
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v65, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
          v45 = *v28;
          if ( !*v28 )
            sub_1B00F28(HasFlag, v30);
          v46 = (float)(breakPoint_k__BackingField + 1) / (float)(breakPointMax_k__BackingField + 1);
          v68 = v45->fields.value / 100;
LABEL_145:
          if ( v46 <= (float)v68 )
            goto LABEL_146;
        }
        goto LABEL_231;
      case 6:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v72 = WarBoardAIManager_TypeInfo;
        v73 = (*route)->fields.actionPiece;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        if ( !v73 )
          sub_1B00F28(v72, v30);
        if ( !*route )
          sub_1B00F28(v72, v30);
        v74 = (*route)->fields.actionPiece;
        if ( !v74 )
          sub_1B00F28(0LL, v30);
        v76 = v73->fields._breakPoint_k__BackingField;
        v75 = v73->fields._breakPointMax_k__BackingField;
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v74, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        v45 = *v28;
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
        v46 = (float)(v76 + 1) / (float)(v75 + 1);
        v47 = v45->fields.value / 100;
LABEL_35:
        if ( v46 >= (float)v47 )
          goto LABEL_231;
LABEL_146:
        v71 = v46 < (float)(v45->fields.value2 / 100);
        goto LABEL_206;
      case 7:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v60 = (*route)->fields.actionPiece;
        if ( !v60 )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isMaster(v60, 0LL);
        goto LABEL_213;
      case 8:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v78 = (*route)->fields.actionPiece;
        if ( !v78 )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isMaster(v78, 0LL);
        goto LABEL_244;
      case 9:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v50 = (*route)->fields.actionPiece;
        if ( !v50 )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v50, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        goto LABEL_213;
      case 0xA:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v77 = (*route)->fields.actionPiece;
        if ( !v77 )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v77, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        goto LABEL_213;
      case 0xB:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v48 = (*route)->fields.actionPiece;
        if ( !v48 )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v48, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000LL, 0LL);
        goto LABEL_213;
      case 0xC:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v49 = (*route)->fields.actionPiece;
        if ( !v49 )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v49, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000LL, 0LL);
        v33 = (unsigned __int8)HasFlag ^ 1;
        goto LABEL_233;
      case 0xD:
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        HasFlag = WarBoardAIManager_TypeInfo;
        basePiece = (*route)->fields.basePiece;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        if ( !basePiece )
          sub_1B00F28(HasFlag, v30);
        v45 = *v28;
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
        v46 = (float)(basePiece->fields._breakPoint_k__BackingField + 1)
            / (float)(basePiece->fields._breakPointMax_k__BackingField + 1);
        v68 = v45->fields.value / 100;
        goto LABEL_145;
      case 0xE:
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        HasFlag = WarBoardAIManager_TypeInfo;
        v44 = (*route)->fields.basePiece;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        if ( !v44 )
          sub_1B00F28(HasFlag, v30);
        v45 = *v28;
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
        v46 = (float)(v44->fields._breakPoint_k__BackingField + 1)
            / (float)(v44->fields._breakPointMax_k__BackingField + 1);
        v47 = v45->fields.value / 100;
        goto LABEL_35;
      case 0xF:
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v55 = (*route)->fields.basePiece;
        if ( !v55 )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v55, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v56 = (*route)->fields.basePiece;
        if ( !v56 )
          sub_1B00F28(HasFlag, v30);
        battleServant_k__BackingField = v56->fields._battleServant_k__BackingField;
        if ( !battleServant_k__BackingField )
          sub_1B00F28(HasFlag, v30);
        v58 = *v28;
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
        np = battleServant_k__BackingField->fields.np;
        goto LABEL_205;
      case 0x10:
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v40 = (*route)->fields.basePiece;
        if ( !v40 )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v40, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v41 = (*route)->fields.basePiece;
        if ( !v41 )
          sub_1B00F28(HasFlag, v30);
        v42 = v41->fields._battleServant_k__BackingField;
        if ( !v42 )
          sub_1B00F28(HasFlag, v30);
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
        v43 = v42->fields.np < (*v28)->fields.value;
        goto LABEL_232;
      case 0x11:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        moveByLinkedEnemy = (*route)->fields.moveByLinkedEnemy;
        goto LABEL_122;
      case 0x12:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        v69 = *route;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v34 = *v28;
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
        goto LABEL_162;
      case 0x13:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        v81 = *route;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v58 = *v28;
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
        goto LABEL_204;
      case 0x14:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        moveByLinkedEnemy = (*route)->fields.moveByLinkedAlly;
LABEL_122:
        v62 = moveByLinkedEnemy == 0;
        goto LABEL_164;
      case 0x15:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        v69 = *route;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v34 = *v28;
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
LABEL_162:
        attackByLinkedEnemy = v69->fields.moveByLinkedEnemy;
LABEL_163:
        v62 = attackByLinkedEnemy == v34->fields.value;
LABEL_164:
        v43 = v62;
        goto LABEL_232;
      case 0x16:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        v81 = *route;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v58 = *v28;
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
LABEL_204:
        np = v81->fields.moveByLinkedEnemy;
LABEL_205:
        v71 = np < v58->fields.value;
LABEL_206:
        v43 = !v71;
        goto LABEL_232;
      case 0x17:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        dicUniqueKeyRange = (*route)->fields.dicUniqueKeyRange;
        v83 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1B00F18(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v83,
          (Il2CppObject *)v22,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__,
          0LL);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)dicUniqueKeyRange,
                                           (System_Func_TSource__bool__o *)v83,
                                           (const MethodInfo_2D6F030 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_213;
      case 0x18:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v53 = (*route)->fields.dicUniqueKeyRange;
        v54 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1B00F18(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v54,
          (Il2CppObject *)v22,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__,
          0LL);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v53,
                                           (System_Func_TSource__bool__o *)v54,
                                           (const MethodInfo_2D6F030 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_213;
      case 0x19:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
        dicMoveByServantGetDesignationItem = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !dicMoveByServantGetDesignationItem )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                           dicMoveByServantGetDesignationItem,
                                           (*v28)->fields.value,
                                           (const MethodInfo_3027EA4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
        v52 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v52 )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                           v52,
                                           (*v28)->fields.value,
                                           (const MethodInfo_3027C00 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        goto LABEL_213;
      case 0x1A:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
        v88 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v88 )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                           v88,
                                           (*v28)->fields.value,
                                           (const MethodInfo_3027EA4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_245;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
        v89 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v89 )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                           v89,
                                           (*v28)->fields.value,
                                           (const MethodInfo_3027C00 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        goto LABEL_244;
      case 0x1B:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v36 = (*route)->fields.dicUniqueKeyRange;
        v37 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1B00F18(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v37,
          (Il2CppObject *)v22,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__,
          0LL);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v36,
                                           (System_Func_TSource__bool__o *)v37,
                                           (const MethodInfo_2D6F030 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v38 = (*route)->fields.dicUniqueKeyRange;
        v39 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1B00F18(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v39,
          (Il2CppObject *)v22,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__,
          0LL);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v38,
                                           (System_Func_TSource__bool__o *)v39,
                                           (const MethodInfo_2D6F030 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_248;
      case 0x1C:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v84 = (*route)->fields.dicUniqueKeyRange;
        v85 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1B00F18(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v85,
          (Il2CppObject *)v22,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__,
          0LL);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v84,
                                           (System_Func_TSource__bool__o *)v85,
                                           (const MethodInfo_2D6F030 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v90 = (*route)->fields.dicUniqueKeyRange;
        v91 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1B00F18(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v91,
          (Il2CppObject *)v22,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__,
          0LL);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v90,
                                           (System_Func_TSource__bool__o *)v91,
                                           (const MethodInfo_2D6F030 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_248;
      case 0x1D:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v86 = (*route)->fields.basePiece;
        if ( !v86 )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v86, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_245;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v87 = (*route)->fields.actionPiece;
        if ( !v87 )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v87, 0LL);
        goto LABEL_213;
      case 0x1E:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
          if ( !*route )
            sub_1B00F28(HasFlag, v30);
          v79 = (*route)->fields.basePiece;
          if ( !v79 )
            sub_1B00F28(0LL, v30);
          HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v79, 0LL);
          if ( ((unsigned __int8)HasFlag & 1) != 0 )
          {
LABEL_231:
            v43 = 0;
          }
          else
          {
            if ( !*route )
              sub_1B00F28(HasFlag, v30);
            v80 = (*route)->fields.actionPiece;
            if ( !v80 )
              sub_1B00F28(0LL, v30);
            HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v80, 0LL);
LABEL_244:
            v43 = ((unsigned __int8)HasFlag & 1) == 0;
          }
        }
        else
        {
LABEL_245:
          v43 = 1;
        }
        goto LABEL_232;
      case 0x1F:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(HasFlag, v30);
        v43 = (*route)->fields.moveByLinkedItem > 0;
        goto LABEL_232;
      case 0x20:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x10000000LL, 0LL);
LABEL_213:
        v43 = (unsigned __int8)HasFlag & 1;
LABEL_232:
        v33 = v43;
        goto LABEL_233;
      case 0x21:
        if ( !*route )
          sub_1B00F28(0LL, v30);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
LABEL_218:
          v33 = 0;
        }
        else
        {
          if ( !*route )
            sub_1B00F28(0LL, v30);
          HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x200000000LL, 0LL);
LABEL_248:
          v33 = (char)HasFlag;
        }
LABEL_233:
        v32 = *v28;
        if ( !*v28 )
          sub_1B00F28(HasFlag, v30);
        return;
      default:
        v33 = 0;
        break;
    }
    WarBoardAIEvalCalcurater__AddRatingOffsetAddCondition(
      (WarBoardAIEvalCalcurater_o *)HasFlag,
      route,
      v32,
      v33 & 1,
      v32->fields.category,
      v31);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v93,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__);
}


bool __fastcall WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
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
  __int64 v13; // x8
  unsigned __int64 v14; // x27
  WarBoardAIEvalCalcurater_o *ConditionType; // x0
  const MethodInfo *v16; // x5
  int32_t v17; // w24

  if ( !actionTrend
    || (this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(actionTrend, 0LL)) == 0LL )
  {
LABEL_21:
    sub_1B00F28(this, route);
  }
  klass = (int)this[1].klass;
  v9 = this;
  if ( klass >= 1 )
  {
    v10 = 0;
    this = 0LL;
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
      v13 = *(_QWORD *)&conditionTypes->max_length;
      if ( (int)v13 >= 1 )
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
    v14 = 0LL;
    while ( v14 < (unsigned int)v13 )
    {
      ConditionType = (WarBoardAIEvalCalcurater_o *)WarBoardActionTrendConditionEntity__GetConditionType(
                                                      v11,
                                                      conditionTypes->m_Items[v14 + 1],
                                                      0LL);
      v17 = (int)ConditionType;
      if ( actionTrend->fields._HasTargetIndividualityCond_k__BackingField )
      {
        ConditionType = (WarBoardAIEvalCalcurater_o *)WarBoardActionTrendConditionEntity__IsTargetTeamCond(
                                                        (int32_t)ConditionType,
                                                        0LL);
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
      LODWORD(v13) = conditionTypes->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        goto LABEL_19;
    }
LABEL_20:
    sub_1B00F30(this, route);
  }
LABEL_19:
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
  WarBoardPieceData_o *detourRoute; // x0
  bool isMaster; // w0
  int32_t isMoveByMasterAndEnemyRange; // w8
  int32_t isMoveByServantAndEnemyRange; // w8
  int32_t isMoveByServantAndMasterRange; // w8
  WarBoardPieceData_o *actionPiece; // x20
  WarBoardPieceData_o *basePiece; // x21
  WarBoardPieceData_o *v24; // x20
  WarBoardPieceData_o *v25; // x21
  int32_t actionCountOnThisTurn; // w8
  int32_t attackCountOnThisTurn; // w8
  int32_t v28; // w8
  WarBoardPieceData_o *targetPiece; // x20
  WarBoardPieceData_o *v30; // x19
  WarBoardPieceData_o *v31; // x20
  WarBoardPieceData_o *v32; // x19
  _BOOL4 isAround; // w8
  _BOOL4 ExistEnemyOnBaseRoute_k__BackingField; // w8
  int32_t v35; // w19
  bool v36; // cc
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  int32_t v38; // w19
  bool v39; // cc
  struct System_Int32_array *v40; // x8
  struct System_Int32_array *v41; // x8
  struct System_Int32_array *v42; // x8
  int32_t v43; // w9
  int32_t actionIndex; // w9
  bool v45; // cc
  WarBoardPieceData_o *v46; // x20
  WarBoardPieceData_o *v47; // x19
  WarBoardPieceData_o *v48; // x20
  WarBoardPieceData_o *v49; // x19
  struct System_Int32_array *v50; // x8
  struct System_Int32_array *v51; // x8
  struct System_Int32_array *v52; // x8
  struct System_Int32_array *v53; // x8
  struct System_Int32_array *v54; // x8
  int32_t v56; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t value[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48E03EB & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__, route);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Count_int___, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Contains__, v11);
    this = (WarBoardAIEvalCalcurater_o *)sub_1B00CCC(&WarBoardAIManager_TypeInfo, v12);
    byte_48E03EB = 1;
  }
  *(_QWORD *)value = 0LL;
  v56 = 0;
  switch ( condType )
  {
    case 1:
      if ( !route )
        goto LABEL_414;
      v15 = 16LL;
      goto LABEL_356;
    case 2:
      if ( !route )
        goto LABEL_414;
      v16 = 16LL;
      goto LABEL_359;
    case 3:
      if ( !route )
        goto LABEL_414;
      v15 = 64LL;
      goto LABEL_356;
    case 4:
      if ( !route )
        goto LABEL_414;
      v16 = 64LL;
      goto LABEL_359;
    case 5:
      if ( !route )
        goto LABEL_414;
      v15 = 0x4000000LL;
      goto LABEL_356;
    case 6:
      if ( !route )
        goto LABEL_414;
      v16 = 0x4000000LL;
      goto LABEL_359;
    case 7:
      if ( !route )
        goto LABEL_414;
      v15 = 1024LL;
      goto LABEL_356;
    case 8:
      if ( !route )
        goto LABEL_414;
      v16 = 1024LL;
      goto LABEL_359;
    case 9:
      if ( !route )
        goto LABEL_414;
      v15 = 0x8000000000LL;
      goto LABEL_356;
    case 10:
      if ( !route )
        goto LABEL_414;
      v16 = 0x8000000000LL;
      goto LABEL_359;
    case 11:
      if ( !route )
        goto LABEL_414;
      v15 = 2048LL;
      goto LABEL_356;
    case 12:
      if ( !route )
        goto LABEL_414;
      v16 = 2048LL;
      goto LABEL_359;
    case 13:
      if ( !route )
        goto LABEL_414;
      v15 = 0x4000000000LL;
      goto LABEL_356;
    case 14:
      if ( !route )
        goto LABEL_414;
      v16 = 0x4000000000LL;
      goto LABEL_359;
    case 15:
      if ( !route )
        goto LABEL_414;
      v15 = 256LL;
      goto LABEL_356;
    case 16:
      if ( !route )
        goto LABEL_414;
      v16 = 256LL;
      goto LABEL_359;
    case 17:
      if ( !route )
        goto LABEL_414;
      v15 = 512LL;
      goto LABEL_356;
    case 18:
      if ( !route )
        goto LABEL_414;
      v16 = 512LL;
      goto LABEL_359;
    case 19:
      if ( !route )
        goto LABEL_414;
      v15 = 4096LL;
      goto LABEL_356;
    case 20:
      if ( !route )
        goto LABEL_414;
      v16 = 4096LL;
      goto LABEL_359;
    case 21:
      if ( !route )
        goto LABEL_414;
      v15 = 0x2000LL;
      goto LABEL_356;
    case 22:
      if ( !route )
        goto LABEL_414;
      v16 = 0x2000LL;
      goto LABEL_359;
    case 23:
      if ( !route )
        goto LABEL_414;
      if ( !condition )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.listExistDesignationItem;
      if ( !this )
        goto LABEL_414;
      LOBYTE(detourRoute) = System_Collections_Generic_List_int___Contains(
                              (System_Collections_Generic_List_int__o *)this,
                              condition->fields.value,
                              (const MethodInfo_33A4D24 *)Method_System_Collections_Generic_List_int__Contains__);
      return (unsigned __int8)detourRoute & 1;
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
                   (const MethodInfo_33A4D24 *)Method_System_Collections_Generic_List_int__Contains__);
      goto LABEL_360;
    case 25:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByMasterAndEnemyRange;
      goto LABEL_397;
    case 26:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByMasterAndEnemyRange;
      goto LABEL_400;
    case 27:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByMasterAndEnemyRange;
      goto LABEL_403;
    case 28:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndEnemyRange;
      goto LABEL_397;
    case 29:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndEnemyRange;
      goto LABEL_400;
    case 30:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndEnemyRange;
      goto LABEL_403;
    case 31:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndMasterRange;
      goto LABEL_397;
    case 32:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndMasterRange;
      goto LABEL_400;
    case 33:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndMasterRange;
      goto LABEL_403;
    case 34:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndClassAdvantageServantRange;
      goto LABEL_397;
    case 35:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndClassAdvantageServantRange;
      goto LABEL_400;
    case 36:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndClassAdvantageServantRange;
      goto LABEL_403;
    case 37:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndClassDisAdvantageServantRange;
      goto LABEL_397;
    case 38:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndClassDisAdvantageServantRange;
      goto LABEL_400;
    case 39:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndClassDisAdvantageServantRange;
      goto LABEL_403;
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
              &value[1],
              (const MethodInfo_3031EF4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_353;
      isMoveByMasterAndEnemyRange = value[1];
      goto LABEL_397;
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
              value,
              (const MethodInfo_3031EF4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_353;
      isMoveByServantAndEnemyRange = value[0];
      goto LABEL_400;
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
              &v56,
              (const MethodInfo_3031EF4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_353;
      isMoveByServantAndMasterRange = v56;
      goto LABEL_403;
    case 43:
      if ( !route )
        goto LABEL_414;
      v15 = 0x4000LL;
      goto LABEL_356;
    case 44:
      if ( !route )
        goto LABEL_414;
      v16 = 0x4000LL;
      goto LABEL_359;
    case 45:
      if ( !route )
        goto LABEL_414;
      v15 = 0x8000LL;
      goto LABEL_356;
    case 46:
      if ( !route )
        goto LABEL_414;
      v16 = 0x8000LL;
      goto LABEL_359;
    case 47:
      if ( !route )
        goto LABEL_414;
      v15 = 0x10000LL;
      goto LABEL_356;
    case 48:
      if ( !route )
        goto LABEL_414;
      v16 = 0x10000LL;
      goto LABEL_359;
    case 49:
      if ( !route )
        goto LABEL_414;
      v15 = 0x20000LL;
      goto LABEL_356;
    case 50:
      if ( !route )
        goto LABEL_414;
      v16 = 0x20000LL;
      goto LABEL_359;
    case 51:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndAttackAdvantageServantRange;
      goto LABEL_397;
    case 52:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndAttackAdvantageServantRange;
      goto LABEL_400;
    case 53:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndAttackAdvantageServantRange;
      goto LABEL_403;
    case 54:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndAttackDisAdvantageServantRange;
      goto LABEL_397;
    case 55:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndAttackDisAdvantageServantRange;
      goto LABEL_400;
    case 56:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndAttackDisAdvantageServantRange;
      goto LABEL_403;
    case 57:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndDefenseAdvantageServantRange;
      goto LABEL_397;
    case 58:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndDefenseAdvantageServantRange;
      goto LABEL_400;
    case 59:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndDefenseAdvantageServantRange;
      goto LABEL_403;
    case 60:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndDefenseDisAdvantageServantRange;
      goto LABEL_397;
    case 61:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndDefenseDisAdvantageServantRange;
      goto LABEL_400;
    case 62:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndDefenseDisAdvantageServantRange;
      goto LABEL_403;
    case 63:
      if ( !route )
        goto LABEL_414;
      v15 = 128LL;
      goto LABEL_356;
    case 64:
      if ( !route )
        goto LABEL_414;
      v16 = 128LL;
      goto LABEL_359;
    case 65:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByServantAndEnemyMasterRange;
      goto LABEL_397;
    case 66:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByServantAndEnemyMasterRange;
      goto LABEL_400;
    case 67:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByServantAndEnemyMasterRange;
      goto LABEL_403;
    case 68:
      if ( !route )
        goto LABEL_414;
      actionPiece = route->fields.actionPiece;
      if ( !actionPiece )
        goto LABEL_353;
      basePiece = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      if ( !WarBoardAIManager__IsEnemyPiece(basePiece, actionPiece, (const MethodInfo *)condition) )
        goto LABEL_353;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.actionPiece;
      if ( !this )
        goto LABEL_414;
      LOBYTE(detourRoute) = WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)this, 0LL);
      return (unsigned __int8)detourRoute & 1;
    case 69:
      if ( !route )
        goto LABEL_414;
      v24 = route->fields.actionPiece;
      if ( !v24 )
        goto LABEL_353;
      v25 = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      if ( !WarBoardAIManager__IsEnemyPiece(v25, v24, (const MethodInfo *)condition) )
        goto LABEL_353;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.actionPiece;
      if ( !this )
        goto LABEL_414;
      isMaster = WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)this, 0LL);
      goto LABEL_360;
    case 70:
      if ( !route )
        goto LABEL_414;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_ActionType(detourRoute, 0LL);
      if ( !condition )
        goto LABEL_414;
LABEL_368:
      v14 = (_DWORD)this == condition->fields.value;
      goto LABEL_404;
    case 71:
      if ( !route || !condition )
        goto LABEL_414;
      actionCountOnThisTurn = route->fields.actionCountOnThisTurn;
      goto LABEL_263;
    case 72:
      if ( !route || !condition )
        goto LABEL_414;
      attackCountOnThisTurn = route->fields.actionCountOnThisTurn;
      goto LABEL_268;
    case 73:
      if ( !route || !condition )
        goto LABEL_414;
      v28 = route->fields.actionCountOnThisTurn;
      goto LABEL_273;
    case 74:
    case 127:
      v13 = targetData == 0LL;
      goto LABEL_315;
    case 75:
    case 128:
      v14 = targetData == 0LL;
      goto LABEL_404;
    case 76:
      if ( !targetData )
        goto LABEL_353;
      targetPiece = targetData->fields.targetPiece;
      if ( !targetPiece )
        goto LABEL_353;
      if ( !route )
        goto LABEL_414;
      v30 = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      LOBYTE(detourRoute) = WarBoardAIManager__IsEnemyPiece(v30, targetPiece, (const MethodInfo *)condition);
      return (unsigned __int8)detourRoute & 1;
    case 77:
      if ( !targetData )
        goto LABEL_353;
      v31 = targetData->fields.targetPiece;
      if ( !v31 )
        goto LABEL_303;
      if ( !route )
        goto LABEL_414;
      v32 = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      isMaster = WarBoardAIManager__IsEnemyPiece(v32, v31, (const MethodInfo *)condition);
      goto LABEL_360;
    case 78:
      if ( !targetData )
        goto LABEL_353;
      isAround = targetData->fields.isAround;
      goto LABEL_246;
    case 79:
      if ( !targetData )
        goto LABEL_353;
      ExistEnemyOnBaseRoute_k__BackingField = targetData->fields.isAround;
      goto LABEL_249;
    case 80:
      if ( !targetData )
        goto LABEL_353;
      goto LABEL_215;
    case 81:
      if ( !targetData )
        goto LABEL_353;
      goto LABEL_221;
    case 82:
      if ( !targetData )
        goto LABEL_353;
      goto LABEL_227;
    case 83:
      if ( !targetData )
        goto LABEL_353;
      detourRoute = (WarBoardPieceData_o *)targetData->fields.detourRoute;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v35 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)detourRoute,
              (const MethodInfo_2D7D25C *)Method_System_Linq_Enumerable_Count_int___);
      this = (WarBoardAIEvalCalcurater_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
                                             (const MethodInfo_2D7D25C *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_414;
      v36 = v35 - (int)this <= condition->fields.value;
      goto LABEL_380;
    case 84:
      if ( !targetData )
        goto LABEL_353;
      v37 = (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.detourRoute;
      if ( !v37 )
        goto LABEL_303;
      v38 = System_Linq_Enumerable__Count_int_(
              v37,
              (const MethodInfo_2D7D25C *)Method_System_Linq_Enumerable_Count_int___);
      this = (WarBoardAIEvalCalcurater_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
                                             (const MethodInfo_2D7D25C *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_414;
      v39 = v38 - (int)this <= condition->fields.value;
LABEL_256:
      LOBYTE(detourRoute) = !v39;
      return (unsigned __int8)detourRoute & 1;
    case 85:
      if ( !targetData )
        goto LABEL_353;
      v40 = targetData->fields.detourRoute;
      if ( !v40 )
        goto LABEL_353;
      if ( v40->max_length <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v40->m_Items[2] != route->fields.actionIndex )
        goto LABEL_353;
LABEL_215:
      isMoveByMasterAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_397;
    case 86:
      if ( !targetData )
        goto LABEL_353;
      v41 = targetData->fields.detourRoute;
      if ( !v41 )
        goto LABEL_353;
      if ( v41->max_length <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v41->m_Items[2] != route->fields.actionIndex )
        goto LABEL_353;
LABEL_221:
      isMoveByServantAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_400;
    case 87:
      if ( !targetData )
        goto LABEL_353;
      v42 = targetData->fields.detourRoute;
      if ( !v42 )
        goto LABEL_353;
      if ( v42->max_length <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v42->m_Items[2] != route->fields.actionIndex )
        goto LABEL_353;
LABEL_227:
      isMoveByServantAndMasterRange = targetData->fields.moveByDistanceType;
      goto LABEL_403;
    case 88:
      if ( !route )
        goto LABEL_414;
      v15 = 0x20000000LL;
      goto LABEL_356;
    case 89:
      if ( !route )
        goto LABEL_414;
      v16 = 0x20000000LL;
      goto LABEL_359;
    case 90:
      if ( !route )
        goto LABEL_414;
      v15 = 0x40000000LL;
      goto LABEL_356;
    case 91:
      if ( !route )
        goto LABEL_414;
      v16 = 0x40000000LL;
      goto LABEL_359;
    case 92:
      if ( !route )
        goto LABEL_414;
      v15 = 0x80000000LL;
      goto LABEL_356;
    case 93:
      if ( !route )
        goto LABEL_414;
      v16 = 0x80000000LL;
      goto LABEL_359;
    case 94:
      if ( !route )
        goto LABEL_414;
      v15 = 0x100000000LL;
      goto LABEL_356;
    case 95:
      if ( !route )
        goto LABEL_414;
      v16 = 0x100000000LL;
      goto LABEL_359;
    case 96:
      if ( !targetData )
        goto LABEL_353;
      isAround = targetData->fields._ExistEnemyOnBaseRoute_k__BackingField;
LABEL_246:
      v13 = !isAround;
      goto LABEL_315;
    case 97:
      if ( !targetData )
        goto LABEL_353;
      ExistEnemyOnBaseRoute_k__BackingField = targetData->fields._ExistEnemyOnBaseRoute_k__BackingField;
LABEL_249:
      v14 = !ExistEnemyOnBaseRoute_k__BackingField;
      goto LABEL_404;
    case 98:
      if ( !route || !condition )
        goto LABEL_414;
      v43 = condition->fields.value;
      v28 = route->fields.EnemyRangeMin - 1;
      goto LABEL_274;
    case 99:
      if ( !route || !condition )
        goto LABEL_414;
      v39 = route->fields.EnemyRangeMin - 1 <= condition->fields.value;
      goto LABEL_256;
    case 100:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_RouteData__HasFlag(route, 2LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_353;
      if ( !condition )
        goto LABEL_414;
      actionCountOnThisTurn = route->fields.attackCountOnThisTurn;
LABEL_263:
      actionIndex = condition->fields.value;
      goto LABEL_309;
    case 101:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_RouteData__HasFlag(route, 2LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_353;
      if ( !condition )
        goto LABEL_414;
      attackCountOnThisTurn = route->fields.attackCountOnThisTurn;
LABEL_268:
      v45 = attackCountOnThisTurn < condition->fields.value;
LABEL_373:
      LOBYTE(detourRoute) = !v45;
      return (unsigned __int8)detourRoute & 1;
    case 102:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_RouteData__HasFlag(route, 2LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_353;
      if ( !condition )
        goto LABEL_414;
      v28 = route->fields.attackCountOnThisTurn;
LABEL_273:
      v43 = condition->fields.value;
LABEL_274:
      v36 = v28 <= v43;
LABEL_380:
      LOBYTE(detourRoute) = v36;
      return (unsigned __int8)detourRoute & 1;
    case 103:
      if ( !route )
        goto LABEL_414;
      v15 = 0x400000000LL;
      goto LABEL_356;
    case 104:
      if ( !route )
        goto LABEL_414;
      v16 = 0x400000000LL;
      goto LABEL_359;
    case 105:
      if ( !route )
        goto LABEL_414;
      v15 = 0x800000000LL;
      goto LABEL_356;
    case 106:
      if ( !route )
        goto LABEL_414;
      v16 = 0x800000000LL;
      goto LABEL_359;
    case 107:
      if ( !route )
        goto LABEL_414;
      v15 = 0x1000000000LL;
      goto LABEL_356;
    case 108:
      if ( !route )
        goto LABEL_414;
      v16 = 0x1000000000LL;
      goto LABEL_359;
    case 109:
      if ( !route )
        goto LABEL_414;
      v15 = 0x2000000000LL;
      goto LABEL_356;
    case 110:
      if ( !route )
        goto LABEL_414;
      v16 = 0x2000000000LL;
      goto LABEL_359;
    case 111:
      if ( !targetData )
        goto LABEL_353;
      v46 = targetData->fields.targetPiece;
      if ( !v46 )
        goto LABEL_353;
      if ( !route )
        goto LABEL_414;
      v47 = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      LOBYTE(detourRoute) = WarBoardAIManager__IsAllyPiece(v47, v46, (const MethodInfo *)condition);
      return (unsigned __int8)detourRoute & 1;
    case 112:
      if ( !targetData )
        goto LABEL_353;
      v48 = targetData->fields.targetPiece;
      if ( !v48 )
        goto LABEL_303;
      if ( !route )
        goto LABEL_414;
      v49 = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      isMaster = WarBoardAIManager__IsAllyPiece(v49, v48, (const MethodInfo *)condition);
      goto LABEL_360;
    case 113:
      if ( !targetData )
        goto LABEL_353;
      v50 = targetData->fields.detourRoute;
      if ( !v50 )
        goto LABEL_353;
      if ( v50->max_length <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      actionCountOnThisTurn = v50->m_Items[2];
      actionIndex = route->fields.actionIndex;
LABEL_309:
      v14 = actionCountOnThisTurn == actionIndex;
      goto LABEL_404;
    case 114:
      if ( !targetData )
        goto LABEL_353;
      v51 = targetData->fields.detourRoute;
      if ( !v51 )
        goto LABEL_353;
      if ( v51->max_length <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      v13 = v51->m_Items[2] == route->fields.actionIndex;
LABEL_315:
      LOBYTE(detourRoute) = !v13;
      return (unsigned __int8)detourRoute & 1;
    case 115:
      if ( !route )
        goto LABEL_414;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v14 = WarBoardPieceData__get_ActionType(detourRoute, 0LL) == 1;
      goto LABEL_404;
    case 116:
      if ( !route )
        goto LABEL_414;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v14 = WarBoardPieceData__get_ActionType(detourRoute, 0LL) == 2;
      goto LABEL_404;
    case 117:
      if ( !route )
        goto LABEL_414;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v14 = WarBoardPieceData__get_ActionType(detourRoute, 0LL) == 3;
      goto LABEL_404;
    case 118:
      if ( !route )
        goto LABEL_414;
      v15 = 0x10000000000LL;
      goto LABEL_356;
    case 119:
      if ( !route )
        goto LABEL_414;
      v16 = 0x10000000000LL;
      goto LABEL_359;
    case 120:
      if ( !route )
        goto LABEL_414;
      v15 = 0x20000000000LL;
      goto LABEL_356;
    case 121:
      if ( !route )
        goto LABEL_414;
      v16 = 0x20000000000LL;
      goto LABEL_359;
    case 122:
      if ( !targetData )
        goto LABEL_353;
      v52 = targetData->fields.detourRoute;
      if ( !v52 )
        goto LABEL_353;
      if ( v52->max_length <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v52->m_Items[2] != route->fields.actionIndex )
        goto LABEL_353;
      isMoveByMasterAndEnemyRange = targetData->fields.detourMoveByDistanceType;
LABEL_397:
      v14 = isMoveByMasterAndEnemyRange == 1;
      goto LABEL_404;
    case 123:
      if ( !targetData )
        goto LABEL_353;
      v53 = targetData->fields.detourRoute;
      if ( !v53 )
        goto LABEL_353;
      if ( v53->max_length <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v53->m_Items[2] != route->fields.actionIndex )
        goto LABEL_353;
      isMoveByServantAndEnemyRange = targetData->fields.detourMoveByDistanceType;
LABEL_400:
      v14 = isMoveByServantAndEnemyRange == 3;
      goto LABEL_404;
    case 124:
      if ( !targetData )
        goto LABEL_353;
      v54 = targetData->fields.detourRoute;
      if ( !v54 )
        goto LABEL_353;
      if ( v54->max_length <= 1 )
LABEL_415:
        sub_1B00F30(this, route);
      if ( !route )
        goto LABEL_414;
      if ( v54->m_Items[2] == route->fields.actionIndex )
      {
        isMoveByServantAndMasterRange = targetData->fields.detourMoveByDistanceType;
LABEL_403:
        v14 = isMoveByServantAndMasterRange == 2;
LABEL_404:
        LOBYTE(detourRoute) = v14;
      }
      else
      {
LABEL_353:
        LOBYTE(detourRoute) = 0;
      }
      return (unsigned __int8)detourRoute & 1;
    case 125:
      if ( !route )
        goto LABEL_414;
      v15 = 0x40000000000LL;
LABEL_356:
      LOBYTE(detourRoute) = WarBoardAIRoute_RouteData__HasFlag(route, v15, 0LL);
      return (unsigned __int8)detourRoute & 1;
    case 126:
      if ( !route )
        goto LABEL_414;
      v16 = 0x40000000000LL;
LABEL_359:
      isMaster = WarBoardAIRoute_RouteData__HasFlag(route, v16, 0LL);
      goto LABEL_360;
    case 129:
      if ( !condition )
        goto LABEL_414;
      LOBYTE(detourRoute) = WarBoardAiTrendCondJudger__TargetRangeUnder(targetData, condition->fields.value, 0LL);
      return (unsigned __int8)detourRoute & 1;
    case 130:
      if ( !condition )
        goto LABEL_414;
      isMaster = WarBoardAiTrendCondJudger__TargetRangeUnder(targetData, condition->fields.value, 0LL);
      goto LABEL_360;
    case 131:
      if ( route )
      {
        this = (WarBoardAIEvalCalcurater_o *)route->fields.basePiece;
        if ( this )
        {
          this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_survivalTurn((WarBoardPieceData_o *)this, 0LL);
          if ( condition )
            goto LABEL_368;
        }
      }
      goto LABEL_414;
    case 132:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.basePiece;
      if ( !this )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_survivalTurn((WarBoardPieceData_o *)this, 0LL);
      if ( !condition )
        goto LABEL_414;
      v45 = (int)this < condition->fields.value;
      goto LABEL_373;
    case 133:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.basePiece;
      if ( !this )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_survivalTurn((WarBoardPieceData_o *)this, 0LL);
      if ( !condition )
        goto LABEL_414;
      v36 = (int)this <= condition->fields.value;
      goto LABEL_380;
    case 134:
      if ( !route )
        goto LABEL_414;
      LOBYTE(detourRoute) = WarBoardAIRoute_RouteData__get_notAction(route, 0LL);
      return (unsigned __int8)detourRoute & 1;
    case 135:
      if ( !route )
        goto LABEL_414;
      isMaster = WarBoardAIRoute_RouteData__get_notAction(route, 0LL);
      goto LABEL_360;
    case 136:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.baseSquare;
      if ( !this )
        goto LABEL_414;
      goto LABEL_410;
    case 137:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.baseSquare;
      if ( !this )
        goto LABEL_414;
      goto LABEL_413;
    case 138:
      LOBYTE(detourRoute) = WarBoardAiTrendCondJudger__IsReplaceTarget(route, targetData, 0LL);
      return (unsigned __int8)detourRoute & 1;
    case 139:
      isMaster = WarBoardAiTrendCondJudger__IsReplaceTarget(route, targetData, 0LL);
      goto LABEL_360;
    case 140:
      if ( !route )
        goto LABEL_414;
      isMoveByMasterAndEnemyRange = route->fields.isMoveByOutOfWarningArea;
      goto LABEL_397;
    case 141:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndEnemyRange = route->fields.isMoveByOutOfWarningArea;
      goto LABEL_400;
    case 142:
      if ( !route )
        goto LABEL_414;
      isMoveByServantAndMasterRange = route->fields.isMoveByOutOfWarningArea;
      goto LABEL_403;
    case 143:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.actionSquare;
      if ( !this )
        goto LABEL_414;
LABEL_410:
      LOBYTE(detourRoute) = WarBoardSquareData__IsFlag((WarBoardSquareData_o *)this, 1, 0LL);
      return (unsigned __int8)detourRoute & 1;
    case 144:
      if ( !route || (this = (WarBoardAIEvalCalcurater_o *)route->fields.actionSquare) == 0LL )
LABEL_414:
        sub_1B00F28(this, route);
LABEL_413:
      isMaster = WarBoardSquareData__IsFlag((WarBoardSquareData_o *)this, 1, 0LL);
LABEL_360:
      LOBYTE(detourRoute) = !isMaster;
      return (unsigned __int8)detourRoute & 1;
    default:
LABEL_303:
      LOBYTE(detourRoute) = 1;
      return (unsigned __int8)detourRoute & 1;
  }
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
  if ( (byte_48E03ED & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1B00CCC(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x);
    byte_48E03ED = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B00F28)(this, x);
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
  if ( (byte_48E03EE & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1B00CCC(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x);
    byte_48E03EE = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B00F28)(this, x);
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
  if ( (byte_48E03EF & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1B00CCC(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x);
    byte_48E03EF = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B00F28)(this, x);
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
  if ( (byte_48E03F0 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1B00CCC(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x);
    byte_48E03F0 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B00F28)(this, x);
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
  if ( (byte_48E03F1 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1B00CCC(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x);
    byte_48E03F1 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B00F28)(this, x);
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
  if ( (byte_48E03F2 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1B00CCC(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x);
    byte_48E03F2 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B00F28)(this, x);
  return value - 1 >= ratingOffset->fields.value;
}