void __fastcall WarBoardAIEvalCalcurater___ctor(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_PiecePersonality_o *piecePersonality,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.piecePersonalityList = piecePersonality;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)piecePersonality, v5, v6, v7, v8, v9, v10);
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
    sub_1BCAA3C(this, route);
  }
  v7 = *(_QWORD *)&actionTypeIds->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
        sub_1BCAA44(this, route);
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
    sub_1BCAA3C(this, route);
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
    sub_1BCAA3C(this, evalOffsetMagnification);
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
    sub_1BCAA3C(this, route);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct WarBoardAIRoute_PiecePersonality_o *piecePersonalityList; // x8
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicPutIndexTargetData; // x22
  int64_t TrendKey; // x0
  const MethodInfo *v22; // x4
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  WarBoardActionTrendEntity_o *v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_HashSet_T__o *FutureLookingTrendHashSet; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4B13C93 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__,
      route,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__, v11, v12);
    this = (WarBoardAIEvalCalcurater_o *)sub_1BCA7E0(
                                           &Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__,
                                           v13,
                                           v14);
    byte_4B13C93 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  value = 0LL;
  piecePersonalityList = v4->fields.piecePersonalityList;
  if ( !piecePersonalityList
    || (this = (WarBoardAIEvalCalcurater_o *)piecePersonalityList->fields.actionTrandList) == 0LL )
  {
    sub_1BCAA3C(this, route);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    if ( !v16 )
      break;
    value = 0LL;
    current = v30.fields._current;
    if ( !*route )
      sub_1BCAA3C(v16, v17);
    if ( !v30.fields._current )
      sub_1BCAA3C(v16, v17);
    klass = v30.fields._current[1].klass;
    if ( !klass )
      sub_1BCAA3C(0LL, v17);
    dicPutIndexTargetData = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(*route)->fields.dicPutIndexTargetData;
    TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, 0LL);
    if ( !dicPutIndexTargetData )
      sub_1BCAA3C(TrendKey, TrendKey);
    System_Collections_Generic_Dictionary_long__object___TryGetValue(
      dicPutIndexTargetData,
      TrendKey,
      &value,
      (const MethodInfo_324579C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
    if ( WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
           v4,
           *route,
           (WarBoardAIRoute_ActionTrendInfo_o *)current,
           (WarBoardAIRoute_TargetData_o *)value,
           v22) )
    {
      WarBoardAIEvalCalcurater__AddRatingBaseOffsetValue(
        v4,
        route,
        (WarBoardActionTrendEntity_o *)current[1].klass,
        v23);
      v25 = (WarBoardActionTrendEntity_o *)current[1].klass;
      if ( !v25 )
        sub_1BCAA3C(0LL, v24);
      if ( WarBoardActionTrendEntity__get_HasFutureTrend(v25, 0LL) )
      {
        if ( !*route )
          sub_1BCAA3C(0LL, v26);
        FutureLookingTrendHashSet = (System_Collections_Generic_HashSet_T__o *)WarBoardAIRoute_RouteData__get_FutureLookingTrendHashSet(
                                                                                 *route,
                                                                                 0LL);
        if ( !FutureLookingTrendHashSet )
          sub_1BCAA3C(0LL, v28);
        System_Collections_Generic_HashSet_object___Add(
          FutureLookingTrendHashSet,
          current,
          (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        WarBoardAIRoute_RouteData_o *futureRoute,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  WarBoardAIRoute_RouteData_o *FutureLookingTrendHashSet; // x0
  _BOOL8 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_object__o *monitor; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  WarBoardAIRoute_ActionTrendInfo_o *current; // x22
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicPutIndexTargetData; // x23
  int64_t TrendKey; // x0
  const MethodInfo *v35; // x4
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  const MethodInfo *v39; // x3
  WarBoardAIRoute_RouteData_o *v40; // x8
  PartyOrganizationUtility_o *p_futureEvalOffsetMag; // x23
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *v42; // x24
  _BOOL8 IsAttack; // x0
  __int64 v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x1
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B13C94 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__,
      route,
      futureRoute);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__,
      v17,
      v18);
    sub_1BCA7E0(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__, v23, v24);
    byte_4B13C94 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  memset(&v54, 0, sizeof(v54));
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
    sub_1BCAA3C(FutureLookingTrendHashSet, route);
  System_Collections_Generic_HashSet_object___GetEnumerator(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)&v52,
    (System_Collections_Generic_HashSet_T__o *)FutureLookingTrendHashSet,
    (const MethodInfo_345BB30 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v55 = v52;
  while ( 1 )
  {
    v26 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            (System_Collections_Generic_HashSet_Enumerator_T__o *)&v55,
            (const MethodInfo_33167AC *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    if ( !v26 )
      break;
    if ( !v55.fields._current )
      sub_1BCAA3C(v26, v27);
    monitor = (System_Collections_Generic_List_object__o *)v55.fields._current[2].monitor;
    if ( !monitor )
      sub_1BCAA3C(0LL, v27);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v52,
      monitor,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v54 = v52;
    while ( 1 )
    {
      v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v54,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
      if ( !v29 )
        break;
      current = (WarBoardAIRoute_ActionTrendInfo_o *)v54.fields._current;
      if ( !v54.fields._current )
        sub_1BCAA3C(v29, v30);
      klass = v54.fields._current[1].klass;
      if ( !klass )
        sub_1BCAA3C(0LL, v30);
      dicPutIndexTargetData = (System_Collections_Generic_Dictionary_TKey__TValue__o *)futureRoute->fields.dicPutIndexTargetData;
      TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, 0LL);
      if ( !dicPutIndexTargetData )
        sub_1BCAA3C(TrendKey, TrendKey);
      System_Collections_Generic_Dictionary_long__object___TryGetValue(
        dicPutIndexTargetData,
        TrendKey,
        &value,
        (const MethodInfo_324579C *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
      v36 = WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
              this,
              futureRoute,
              current,
              (WarBoardAIRoute_TargetData_o *)value,
              v35);
      if ( v36 )
      {
        v40 = *route;
        if ( !*route )
          sub_1BCAA3C(v36, v37);
        p_futureEvalOffsetMag = (PartyOrganizationUtility_o *)&v40->fields.futureEvalOffsetMag;
        if ( !v40->fields.futureEvalOffsetMag )
        {
          v42 = (WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)sub_1BCAA2C(
                                                                         WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo,
                                                                         v37,
                                                                         v38,
                                                                         v39);
          WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(v42, 0LL);
          IsAttack = WarBoardAIRoute_RouteData__get_IsAttack(futureRoute, 0LL);
          if ( !v42 )
            sub_1BCAA3C(IsAttack, v44);
          v42->fields.isAttack = IsAttack;
          p_futureEvalOffsetMag->klass = (PartyOrganizationUtility_c *)v42;
          sub_1BCA784(p_futureEvalOffsetMag, (int64_t)v42, v45, v46, v47, v48, v49, v50);
          v40 = *route;
          if ( !*route )
            sub_1BCAA3C(v36, v51);
        }
        WarBoardAIEvalCalcurater__AddTrendEvalValue(
          (WarBoardAIEvalCalcurater_o *)v36,
          v40->fields.futureEvalOffsetMag,
          current->fields._Entity_k__BackingField,
          v39);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v54,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)&v55,
    (const MethodInfo_33167A8 *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIEvalCalcurater__JudgeRatingOffsetAddCondition(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList,
        float avgBeneValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  Il2CppObject *current; // x1
  WarBoardRatingOffsetEntity_o **v50; // x20
  WarBoardAIManager_c *HasFlag; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x5
  WarBoardRatingOffsetEntity_o *v54; // x2
  char v55; // w8
  WarBoardRatingOffsetEntity_o *v56; // x9
  int32_t attackByLinkedEnemy; // w8
  __int64 v58; // x2
  __int64 v59; // x3
  struct System_Collections_Generic_Dictionary_uint__int__o *v60; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v61; // x23
  __int64 v62; // x2
  __int64 v63; // x3
  struct System_Collections_Generic_Dictionary_uint__int__o *v64; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v65; // x23
  WarBoardPieceData_o *v66; // x0
  struct WarBoardPieceData_o *v67; // x8
  struct BattleServantData_o *v68; // x8
  _BOOL4 v69; // w8
  struct WarBoardPieceData_o *v70; // x21
  WarBoardRatingOffsetEntity_o *v71; // x8
  float v72; // s0
  int v73; // w9
  WarBoardPieceData_o *v74; // x0
  WarBoardPieceData_o *v75; // x0
  WarBoardPieceData_o *v76; // x0
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v78; // x0
  __int64 v79; // x2
  __int64 v80; // x3
  struct System_Collections_Generic_Dictionary_uint__int__o *v81; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v82; // x23
  WarBoardPieceData_o *v83; // x0
  struct WarBoardPieceData_o *v84; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardRatingOffsetEntity_o *v86; // x9
  int32_t np; // w8
  WarBoardPieceData_o *v88; // x0
  int32_t moveByLinkedEnemy; // w8
  bool v90; // zf
  WarBoardAIManager_c *v91; // x0
  struct WarBoardPieceData_o *actionPiece; // x21
  WarBoardPieceData_o *v93; // x0
  int32_t breakPointMax_k__BackingField; // w21
  int32_t breakPoint_k__BackingField; // w22
  int v96; // w9
  WarBoardAIRoute_RouteData_o *v97; // x8
  struct WarBoardPieceData_o *basePiece; // x21
  bool v99; // cc
  WarBoardAIManager_c *v100; // x0
  struct WarBoardPieceData_o *v101; // x21
  WarBoardPieceData_o *v102; // x0
  int32_t v103; // w21
  int32_t v104; // w22
  WarBoardPieceData_o *v105; // x0
  WarBoardPieceData_o *v106; // x0
  WarBoardPieceData_o *v107; // x0
  WarBoardPieceData_o *v108; // x0
  WarBoardAIRoute_RouteData_o *v109; // x8
  __int64 v110; // x2
  __int64 v111; // x3
  struct System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v113; // x23
  __int64 v114; // x2
  __int64 v115; // x3
  struct System_Collections_Generic_Dictionary_uint__int__o *v116; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v117; // x23
  __int64 v118; // x2
  __int64 v119; // x3
  WarBoardPieceData_o *v120; // x0
  WarBoardPieceData_o *v121; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v122; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v123; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v124; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v125; // x23
  System_Collections_Generic_List_Enumerator_object__o v126; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v127; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B13C96 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, route, ratingOffsetList);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__get_Current__, v15, v16);
    sub_1BCA7E0(&System_Func_KeyValuePair_uint__int___bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__, v21, v22);
    sub_1BCA7E0(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__, v23, v24);
    sub_1BCA7E0(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__, v25, v26);
    sub_1BCA7E0(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__, v27, v28);
    sub_1BCA7E0(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__, v29, v30);
    sub_1BCA7E0(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__, v31, v32);
    sub_1BCA7E0(&WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo, v33, v34);
    this = (WarBoardAIEvalCalcurater_o *)sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v35, v36);
    byte_4B13C96 = 1;
  }
  memset(&v127, 0, sizeof(v127));
  if ( !*route || !ratingOffsetList )
    sub_1BCAA3C(this, route);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v126,
    (System_Collections_Generic_List_object__o *)ratingOffsetList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__);
  v127 = v126;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v127,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__) )
  {
    v40 = sub_1BCAA2C(WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo, v37, v38, v39);
    System_Object___ctor((Il2CppObject *)v40, 0LL);
    if ( !v40 )
      sub_1BCAA3C(v41, v42);
    current = v127.fields._current;
    *(_QWORD *)(v40 + 16) = v127.fields._current;
    v50 = (WarBoardRatingOffsetEntity_o **)(v40 + 16);
    sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 16), (int64_t)current, v43, v44, v45, v46, v47, v48);
    v54 = *(WarBoardRatingOffsetEntity_o **)(v40 + 16);
    if ( !v54 )
      sub_1BCAA3C(HasFlag, v52);
    v55 = 1;
    switch ( v54->fields.type )
    {
      case 0:
        break;
      case 1:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v56 = *v50;
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
        attackByLinkedEnemy = (*route)->fields.attackByLinkedEnemy;
        goto LABEL_163;
      case 2:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v56 = *v50;
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
        attackByLinkedEnemy = (*route)->fields.attackByLinkedAlly;
        goto LABEL_163;
      case 3:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        goto LABEL_213;
      case 4:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        goto LABEL_244;
      case 5:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v91 = WarBoardAIManager_TypeInfo;
        actionPiece = (*route)->fields.actionPiece;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v52);
        if ( !actionPiece )
          sub_1BCAA3C(v91, v52);
        if ( !*route )
          sub_1BCAA3C(v91, v52);
        v93 = (*route)->fields.actionPiece;
        if ( !v93 )
          sub_1BCAA3C(0LL, v52);
        breakPoint_k__BackingField = actionPiece->fields._breakPoint_k__BackingField;
        breakPointMax_k__BackingField = actionPiece->fields._breakPointMax_k__BackingField;
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v93, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
          v71 = *v50;
          if ( !*v50 )
            sub_1BCAA3C(HasFlag, v52);
          v72 = (float)(breakPoint_k__BackingField + 1) / (float)(breakPointMax_k__BackingField + 1);
          v96 = v71->fields.value / 100;
LABEL_145:
          if ( v72 <= (float)v96 )
            goto LABEL_146;
        }
        goto LABEL_231;
      case 6:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v100 = WarBoardAIManager_TypeInfo;
        v101 = (*route)->fields.actionPiece;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v52);
        if ( !v101 )
          sub_1BCAA3C(v100, v52);
        if ( !*route )
          sub_1BCAA3C(v100, v52);
        v102 = (*route)->fields.actionPiece;
        if ( !v102 )
          sub_1BCAA3C(0LL, v52);
        v104 = v101->fields._breakPoint_k__BackingField;
        v103 = v101->fields._breakPointMax_k__BackingField;
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v102, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        v71 = *v50;
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
        v72 = (float)(v104 + 1) / (float)(v103 + 1);
        v73 = v71->fields.value / 100;
LABEL_35:
        if ( v72 >= (float)v73 )
          goto LABEL_231;
LABEL_146:
        v99 = v72 < (float)(v71->fields.value2 / 100);
        goto LABEL_206;
      case 7:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v88 = (*route)->fields.actionPiece;
        if ( !v88 )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isMaster(v88, 0LL);
        goto LABEL_213;
      case 8:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v106 = (*route)->fields.actionPiece;
        if ( !v106 )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isMaster(v106, 0LL);
        goto LABEL_244;
      case 9:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v76 = (*route)->fields.actionPiece;
        if ( !v76 )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v76, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        goto LABEL_213;
      case 0xA:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v105 = (*route)->fields.actionPiece;
        if ( !v105 )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v105, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        goto LABEL_213;
      case 0xB:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v74 = (*route)->fields.actionPiece;
        if ( !v74 )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v74, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000LL, 0LL);
        goto LABEL_213;
      case 0xC:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v75 = (*route)->fields.actionPiece;
        if ( !v75 )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v75, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000LL, 0LL);
        v55 = (unsigned __int8)HasFlag ^ 1;
        goto LABEL_233;
      case 0xD:
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        HasFlag = WarBoardAIManager_TypeInfo;
        basePiece = (*route)->fields.basePiece;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v52);
        if ( !basePiece )
          sub_1BCAA3C(HasFlag, v52);
        v71 = *v50;
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
        v72 = (float)(basePiece->fields._breakPoint_k__BackingField + 1)
            / (float)(basePiece->fields._breakPointMax_k__BackingField + 1);
        v96 = v71->fields.value / 100;
        goto LABEL_145;
      case 0xE:
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        HasFlag = WarBoardAIManager_TypeInfo;
        v70 = (*route)->fields.basePiece;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v52);
        if ( !v70 )
          sub_1BCAA3C(HasFlag, v52);
        v71 = *v50;
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
        v72 = (float)(v70->fields._breakPoint_k__BackingField + 1)
            / (float)(v70->fields._breakPointMax_k__BackingField + 1);
        v73 = v71->fields.value / 100;
        goto LABEL_35;
      case 0xF:
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v83 = (*route)->fields.basePiece;
        if ( !v83 )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v83, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v84 = (*route)->fields.basePiece;
        if ( !v84 )
          sub_1BCAA3C(HasFlag, v52);
        battleServant_k__BackingField = v84->fields._battleServant_k__BackingField;
        if ( !battleServant_k__BackingField )
          sub_1BCAA3C(HasFlag, v52);
        v86 = *v50;
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
        np = battleServant_k__BackingField->fields.np;
        goto LABEL_205;
      case 0x10:
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v66 = (*route)->fields.basePiece;
        if ( !v66 )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v66, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v67 = (*route)->fields.basePiece;
        if ( !v67 )
          sub_1BCAA3C(HasFlag, v52);
        v68 = v67->fields._battleServant_k__BackingField;
        if ( !v68 )
          sub_1BCAA3C(HasFlag, v52);
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
        v69 = v68->fields.np < (*v50)->fields.value;
        goto LABEL_232;
      case 0x11:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        moveByLinkedEnemy = (*route)->fields.moveByLinkedEnemy;
        goto LABEL_122;
      case 0x12:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        v97 = *route;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v56 = *v50;
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
        goto LABEL_162;
      case 0x13:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        v109 = *route;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v86 = *v50;
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
        goto LABEL_204;
      case 0x14:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        moveByLinkedEnemy = (*route)->fields.moveByLinkedAlly;
LABEL_122:
        v90 = moveByLinkedEnemy == 0;
        goto LABEL_164;
      case 0x15:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        v97 = *route;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v56 = *v50;
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
LABEL_162:
        attackByLinkedEnemy = v97->fields.moveByLinkedEnemy;
LABEL_163:
        v90 = attackByLinkedEnemy == v56->fields.value;
LABEL_164:
        v69 = v90;
        goto LABEL_232;
      case 0x16:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        v109 = *route;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v86 = *v50;
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
LABEL_204:
        np = v109->fields.moveByLinkedEnemy;
LABEL_205:
        v99 = np < v86->fields.value;
LABEL_206:
        v69 = !v99;
        goto LABEL_232;
      case 0x17:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        dicUniqueKeyRange = (*route)->fields.dicUniqueKeyRange;
        v113 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1BCAA2C(
                                                                 System_Func_KeyValuePair_uint__int___bool__TypeInfo,
                                                                 v52,
                                                                 v110,
                                                                 v111);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v113,
          (Il2CppObject *)v40,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__,
          0LL);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)dicUniqueKeyRange,
                                           (System_Func_TSource__bool__o *)v113,
                                           (const MethodInfo_2F1FA54 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_213;
      case 0x18:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v81 = (*route)->fields.dicUniqueKeyRange;
        v82 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1BCAA2C(
                                                                System_Func_KeyValuePair_uint__int___bool__TypeInfo,
                                                                v52,
                                                                v79,
                                                                v80);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v82,
          (Il2CppObject *)v40,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__,
          0LL);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v81,
                                           (System_Func_TSource__bool__o *)v82,
                                           (const MethodInfo_2F1FA54 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_213;
      case 0x19:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
        dicMoveByServantGetDesignationItem = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !dicMoveByServantGetDesignationItem )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                           dicMoveByServantGetDesignationItem,
                                           (*v50)->fields.value,
                                           (const MethodInfo_31F76BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
        v78 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v78 )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                           v78,
                                           (*v50)->fields.value,
                                           (const MethodInfo_31F7418 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        goto LABEL_213;
      case 0x1A:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
        v122 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v122 )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                           v122,
                                           (*v50)->fields.value,
                                           (const MethodInfo_31F76BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_245;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
        v123 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v123 )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                           v123,
                                           (*v50)->fields.value,
                                           (const MethodInfo_31F7418 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        goto LABEL_244;
      case 0x1B:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v60 = (*route)->fields.dicUniqueKeyRange;
        v61 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1BCAA2C(
                                                                System_Func_KeyValuePair_uint__int___bool__TypeInfo,
                                                                v52,
                                                                v58,
                                                                v59);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v61,
          (Il2CppObject *)v40,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__,
          0LL);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v60,
                                           (System_Func_TSource__bool__o *)v61,
                                           (const MethodInfo_2F1FA54 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v64 = (*route)->fields.dicUniqueKeyRange;
        v65 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1BCAA2C(
                                                                System_Func_KeyValuePair_uint__int___bool__TypeInfo,
                                                                v52,
                                                                v62,
                                                                v63);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v65,
          (Il2CppObject *)v40,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__,
          0LL);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v64,
                                           (System_Func_TSource__bool__o *)v65,
                                           (const MethodInfo_2F1FA54 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_248;
      case 0x1C:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v116 = (*route)->fields.dicUniqueKeyRange;
        v117 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1BCAA2C(
                                                                 System_Func_KeyValuePair_uint__int___bool__TypeInfo,
                                                                 v52,
                                                                 v114,
                                                                 v115);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v117,
          (Il2CppObject *)v40,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__,
          0LL);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v116,
                                           (System_Func_TSource__bool__o *)v117,
                                           (const MethodInfo_2F1FA54 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_218;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v124 = (*route)->fields.dicUniqueKeyRange;
        v125 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1BCAA2C(
                                                                 System_Func_KeyValuePair_uint__int___bool__TypeInfo,
                                                                 v52,
                                                                 v118,
                                                                 v119);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v125,
          (Il2CppObject *)v40,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__,
          0LL);
        HasFlag = (WarBoardAIManager_c *)System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v124,
                                           (System_Func_TSource__bool__o *)v125,
                                           (const MethodInfo_2F1FA54 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_248;
      case 0x1D:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v120 = (*route)->fields.basePiece;
        if ( !v120 )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v120, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_245;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v121 = (*route)->fields.actionPiece;
        if ( !v121 )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v121, 0LL);
        goto LABEL_213;
      case 0x1E:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
          if ( !*route )
            sub_1BCAA3C(HasFlag, v52);
          v107 = (*route)->fields.basePiece;
          if ( !v107 )
            sub_1BCAA3C(0LL, v52);
          HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v107, 0LL);
          if ( ((unsigned __int8)HasFlag & 1) != 0 )
          {
LABEL_231:
            v69 = 0;
          }
          else
          {
            if ( !*route )
              sub_1BCAA3C(HasFlag, v52);
            v108 = (*route)->fields.actionPiece;
            if ( !v108 )
              sub_1BCAA3C(0LL, v52);
            HasFlag = (WarBoardAIManager_c *)WarBoardPieceData__get_isServant(v108, 0LL);
LABEL_244:
            v69 = ((unsigned __int8)HasFlag & 1) == 0;
          }
        }
        else
        {
LABEL_245:
          v69 = 1;
        }
        goto LABEL_232;
      case 0x1F:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(HasFlag, v52);
        v69 = (*route)->fields.moveByLinkedItem > 0;
        goto LABEL_232;
      case 0x20:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
          goto LABEL_231;
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x10000000LL, 0LL);
LABEL_213:
        v69 = (unsigned __int8)HasFlag & 1;
LABEL_232:
        v55 = v69;
        goto LABEL_233;
      case 0x21:
        if ( !*route )
          sub_1BCAA3C(0LL, v52);
        HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 2LL, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) != 0 )
        {
LABEL_218:
          v55 = 0;
        }
        else
        {
          if ( !*route )
            sub_1BCAA3C(0LL, v52);
          HasFlag = (WarBoardAIManager_c *)WarBoardAIRoute_RouteData__HasFlag(*route, 0x200000000LL, 0LL);
LABEL_248:
          v55 = (char)HasFlag;
        }
LABEL_233:
        v54 = *v50;
        if ( !*v50 )
          sub_1BCAA3C(HasFlag, v52);
        return;
      default:
        v55 = 0;
        break;
    }
    WarBoardAIEvalCalcurater__AddRatingOffsetAddCondition(
      (WarBoardAIEvalCalcurater_o *)HasFlag,
      route,
      v54,
      v55 & 1,
      v54->fields.category,
      v53);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v127,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__);
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
    sub_1BCAA3C(this, route);
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
    sub_1BCAA44(this, route);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  bool v16; // zf
  bool v17; // zf
  int64_t v18; // x1
  int64_t v19; // x1
  WarBoardPieceData_o *detourRoute; // x0
  bool isMaster; // w0
  int32_t isMoveByMasterAndEnemyRange; // w8
  int32_t isMoveByServantAndEnemyRange; // w8
  int32_t isMoveByServantAndMasterRange; // w8
  WarBoardPieceData_o *actionPiece; // x20
  WarBoardPieceData_o *basePiece; // x21
  WarBoardPieceData_o *v27; // x20
  WarBoardPieceData_o *v28; // x21
  int32_t actionCountOnThisTurn; // w8
  int32_t attackCountOnThisTurn; // w8
  int32_t v31; // w8
  WarBoardPieceData_o *targetPiece; // x20
  WarBoardPieceData_o *v33; // x19
  WarBoardPieceData_o *v34; // x20
  WarBoardPieceData_o *v35; // x19
  _BOOL4 isAround; // w8
  _BOOL4 ExistEnemyOnBaseRoute_k__BackingField; // w8
  int32_t v38; // w19
  bool v39; // cc
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  int32_t v41; // w19
  bool v42; // cc
  struct System_Int32_array *v43; // x8
  struct System_Int32_array *v44; // x8
  struct System_Int32_array *v45; // x8
  int32_t v46; // w9
  int32_t actionIndex; // w9
  bool v48; // cc
  WarBoardPieceData_o *v49; // x20
  WarBoardPieceData_o *v50; // x19
  WarBoardPieceData_o *v51; // x20
  WarBoardPieceData_o *v52; // x19
  struct System_Int32_array *v53; // x8
  struct System_Int32_array *v54; // x8
  struct System_Int32_array *v55; // x8
  struct System_Int32_array *v56; // x8
  struct System_Int32_array *v57; // x8
  int32_t v59; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t value[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B13C95 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__,
      route,
      condition);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v12, v13);
    this = (WarBoardAIEvalCalcurater_o *)sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v14, v15);
    byte_4B13C95 = 1;
  }
  *(_QWORD *)value = 0LL;
  v59 = 0;
  switch ( condType )
  {
    case 1:
      if ( !route )
        goto LABEL_414;
      v18 = 16LL;
      goto LABEL_356;
    case 2:
      if ( !route )
        goto LABEL_414;
      v19 = 16LL;
      goto LABEL_359;
    case 3:
      if ( !route )
        goto LABEL_414;
      v18 = 64LL;
      goto LABEL_356;
    case 4:
      if ( !route )
        goto LABEL_414;
      v19 = 64LL;
      goto LABEL_359;
    case 5:
      if ( !route )
        goto LABEL_414;
      v18 = 0x4000000LL;
      goto LABEL_356;
    case 6:
      if ( !route )
        goto LABEL_414;
      v19 = 0x4000000LL;
      goto LABEL_359;
    case 7:
      if ( !route )
        goto LABEL_414;
      v18 = 1024LL;
      goto LABEL_356;
    case 8:
      if ( !route )
        goto LABEL_414;
      v19 = 1024LL;
      goto LABEL_359;
    case 9:
      if ( !route )
        goto LABEL_414;
      v18 = 0x8000000000LL;
      goto LABEL_356;
    case 10:
      if ( !route )
        goto LABEL_414;
      v19 = 0x8000000000LL;
      goto LABEL_359;
    case 11:
      if ( !route )
        goto LABEL_414;
      v18 = 2048LL;
      goto LABEL_356;
    case 12:
      if ( !route )
        goto LABEL_414;
      v19 = 2048LL;
      goto LABEL_359;
    case 13:
      if ( !route )
        goto LABEL_414;
      v18 = 0x4000000000LL;
      goto LABEL_356;
    case 14:
      if ( !route )
        goto LABEL_414;
      v19 = 0x4000000000LL;
      goto LABEL_359;
    case 15:
      if ( !route )
        goto LABEL_414;
      v18 = 256LL;
      goto LABEL_356;
    case 16:
      if ( !route )
        goto LABEL_414;
      v19 = 256LL;
      goto LABEL_359;
    case 17:
      if ( !route )
        goto LABEL_414;
      v18 = 512LL;
      goto LABEL_356;
    case 18:
      if ( !route )
        goto LABEL_414;
      v19 = 512LL;
      goto LABEL_359;
    case 19:
      if ( !route )
        goto LABEL_414;
      v18 = 4096LL;
      goto LABEL_356;
    case 20:
      if ( !route )
        goto LABEL_414;
      v19 = 4096LL;
      goto LABEL_359;
    case 21:
      if ( !route )
        goto LABEL_414;
      v18 = 0x2000LL;
      goto LABEL_356;
    case 22:
      if ( !route )
        goto LABEL_414;
      v19 = 0x2000LL;
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
                              (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
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
                   (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
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
              (const MethodInfo_320170C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
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
              (const MethodInfo_320170C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
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
              &v59,
              (const MethodInfo_320170C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_353;
      isMoveByServantAndMasterRange = v59;
      goto LABEL_403;
    case 43:
      if ( !route )
        goto LABEL_414;
      v18 = 0x4000LL;
      goto LABEL_356;
    case 44:
      if ( !route )
        goto LABEL_414;
      v19 = 0x4000LL;
      goto LABEL_359;
    case 45:
      if ( !route )
        goto LABEL_414;
      v18 = 0x8000LL;
      goto LABEL_356;
    case 46:
      if ( !route )
        goto LABEL_414;
      v19 = 0x8000LL;
      goto LABEL_359;
    case 47:
      if ( !route )
        goto LABEL_414;
      v18 = 0x10000LL;
      goto LABEL_356;
    case 48:
      if ( !route )
        goto LABEL_414;
      v19 = 0x10000LL;
      goto LABEL_359;
    case 49:
      if ( !route )
        goto LABEL_414;
      v18 = 0x20000LL;
      goto LABEL_356;
    case 50:
      if ( !route )
        goto LABEL_414;
      v19 = 0x20000LL;
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
      v18 = 128LL;
      goto LABEL_356;
    case 64:
      if ( !route )
        goto LABEL_414;
      v19 = 128LL;
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
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, route);
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
      v27 = route->fields.actionPiece;
      if ( !v27 )
        goto LABEL_353;
      v28 = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, route);
      if ( !WarBoardAIManager__IsEnemyPiece(v28, v27, (const MethodInfo *)condition) )
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
      v17 = (_DWORD)this == condition->fields.value;
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
      v31 = route->fields.actionCountOnThisTurn;
      goto LABEL_273;
    case 74:
    case 127:
      v16 = targetData == 0LL;
      goto LABEL_315;
    case 75:
    case 128:
      v17 = targetData == 0LL;
      goto LABEL_404;
    case 76:
      if ( !targetData )
        goto LABEL_353;
      targetPiece = targetData->fields.targetPiece;
      if ( !targetPiece )
        goto LABEL_353;
      if ( !route )
        goto LABEL_414;
      v33 = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, route);
      LOBYTE(detourRoute) = WarBoardAIManager__IsEnemyPiece(v33, targetPiece, (const MethodInfo *)condition);
      return (unsigned __int8)detourRoute & 1;
    case 77:
      if ( !targetData )
        goto LABEL_353;
      v34 = targetData->fields.targetPiece;
      if ( !v34 )
        goto LABEL_303;
      if ( !route )
        goto LABEL_414;
      v35 = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, route);
      isMaster = WarBoardAIManager__IsEnemyPiece(v35, v34, (const MethodInfo *)condition);
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
      v38 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)detourRoute,
              (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
      this = (WarBoardAIEvalCalcurater_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
                                             (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_414;
      v39 = v38 - (int)this <= condition->fields.value;
      goto LABEL_380;
    case 84:
      if ( !targetData )
        goto LABEL_353;
      v40 = (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.detourRoute;
      if ( !v40 )
        goto LABEL_303;
      v41 = System_Linq_Enumerable__Count_int_(
              v40,
              (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
      this = (WarBoardAIEvalCalcurater_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
                                             (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_414;
      v42 = v41 - (int)this <= condition->fields.value;
LABEL_256:
      LOBYTE(detourRoute) = !v42;
      return (unsigned __int8)detourRoute & 1;
    case 85:
      if ( !targetData )
        goto LABEL_353;
      v43 = targetData->fields.detourRoute;
      if ( !v43 )
        goto LABEL_353;
      if ( v43->max_length <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v43->m_Items[2] != route->fields.actionIndex )
        goto LABEL_353;
LABEL_215:
      isMoveByMasterAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_397;
    case 86:
      if ( !targetData )
        goto LABEL_353;
      v44 = targetData->fields.detourRoute;
      if ( !v44 )
        goto LABEL_353;
      if ( v44->max_length <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v44->m_Items[2] != route->fields.actionIndex )
        goto LABEL_353;
LABEL_221:
      isMoveByServantAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_400;
    case 87:
      if ( !targetData )
        goto LABEL_353;
      v45 = targetData->fields.detourRoute;
      if ( !v45 )
        goto LABEL_353;
      if ( v45->max_length <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v45->m_Items[2] != route->fields.actionIndex )
        goto LABEL_353;
LABEL_227:
      isMoveByServantAndMasterRange = targetData->fields.moveByDistanceType;
      goto LABEL_403;
    case 88:
      if ( !route )
        goto LABEL_414;
      v18 = 0x20000000LL;
      goto LABEL_356;
    case 89:
      if ( !route )
        goto LABEL_414;
      v19 = 0x20000000LL;
      goto LABEL_359;
    case 90:
      if ( !route )
        goto LABEL_414;
      v18 = 0x40000000LL;
      goto LABEL_356;
    case 91:
      if ( !route )
        goto LABEL_414;
      v19 = 0x40000000LL;
      goto LABEL_359;
    case 92:
      if ( !route )
        goto LABEL_414;
      v18 = 0x80000000LL;
      goto LABEL_356;
    case 93:
      if ( !route )
        goto LABEL_414;
      v19 = 0x80000000LL;
      goto LABEL_359;
    case 94:
      if ( !route )
        goto LABEL_414;
      v18 = 0x100000000LL;
      goto LABEL_356;
    case 95:
      if ( !route )
        goto LABEL_414;
      v19 = 0x100000000LL;
      goto LABEL_359;
    case 96:
      if ( !targetData )
        goto LABEL_353;
      isAround = targetData->fields._ExistEnemyOnBaseRoute_k__BackingField;
LABEL_246:
      v16 = !isAround;
      goto LABEL_315;
    case 97:
      if ( !targetData )
        goto LABEL_353;
      ExistEnemyOnBaseRoute_k__BackingField = targetData->fields._ExistEnemyOnBaseRoute_k__BackingField;
LABEL_249:
      v17 = !ExistEnemyOnBaseRoute_k__BackingField;
      goto LABEL_404;
    case 98:
      if ( !route || !condition )
        goto LABEL_414;
      v46 = condition->fields.value;
      v31 = route->fields.EnemyRangeMin - 1;
      goto LABEL_274;
    case 99:
      if ( !route || !condition )
        goto LABEL_414;
      v42 = route->fields.EnemyRangeMin - 1 <= condition->fields.value;
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
      v48 = attackCountOnThisTurn < condition->fields.value;
LABEL_373:
      LOBYTE(detourRoute) = !v48;
      return (unsigned __int8)detourRoute & 1;
    case 102:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_RouteData__HasFlag(route, 2LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_353;
      if ( !condition )
        goto LABEL_414;
      v31 = route->fields.attackCountOnThisTurn;
LABEL_273:
      v46 = condition->fields.value;
LABEL_274:
      v39 = v31 <= v46;
LABEL_380:
      LOBYTE(detourRoute) = v39;
      return (unsigned __int8)detourRoute & 1;
    case 103:
      if ( !route )
        goto LABEL_414;
      v18 = 0x400000000LL;
      goto LABEL_356;
    case 104:
      if ( !route )
        goto LABEL_414;
      v19 = 0x400000000LL;
      goto LABEL_359;
    case 105:
      if ( !route )
        goto LABEL_414;
      v18 = 0x800000000LL;
      goto LABEL_356;
    case 106:
      if ( !route )
        goto LABEL_414;
      v19 = 0x800000000LL;
      goto LABEL_359;
    case 107:
      if ( !route )
        goto LABEL_414;
      v18 = 0x1000000000LL;
      goto LABEL_356;
    case 108:
      if ( !route )
        goto LABEL_414;
      v19 = 0x1000000000LL;
      goto LABEL_359;
    case 109:
      if ( !route )
        goto LABEL_414;
      v18 = 0x2000000000LL;
      goto LABEL_356;
    case 110:
      if ( !route )
        goto LABEL_414;
      v19 = 0x2000000000LL;
      goto LABEL_359;
    case 111:
      if ( !targetData )
        goto LABEL_353;
      v49 = targetData->fields.targetPiece;
      if ( !v49 )
        goto LABEL_353;
      if ( !route )
        goto LABEL_414;
      v50 = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, route);
      LOBYTE(detourRoute) = WarBoardAIManager__IsAllyPiece(v50, v49, (const MethodInfo *)condition);
      return (unsigned __int8)detourRoute & 1;
    case 112:
      if ( !targetData )
        goto LABEL_353;
      v51 = targetData->fields.targetPiece;
      if ( !v51 )
        goto LABEL_303;
      if ( !route )
        goto LABEL_414;
      v52 = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, route);
      isMaster = WarBoardAIManager__IsAllyPiece(v52, v51, (const MethodInfo *)condition);
      goto LABEL_360;
    case 113:
      if ( !targetData )
        goto LABEL_353;
      v53 = targetData->fields.detourRoute;
      if ( !v53 )
        goto LABEL_353;
      if ( v53->max_length <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      actionCountOnThisTurn = v53->m_Items[2];
      actionIndex = route->fields.actionIndex;
LABEL_309:
      v17 = actionCountOnThisTurn == actionIndex;
      goto LABEL_404;
    case 114:
      if ( !targetData )
        goto LABEL_353;
      v54 = targetData->fields.detourRoute;
      if ( !v54 )
        goto LABEL_353;
      if ( v54->max_length <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      v16 = v54->m_Items[2] == route->fields.actionIndex;
LABEL_315:
      LOBYTE(detourRoute) = !v16;
      return (unsigned __int8)detourRoute & 1;
    case 115:
      if ( !route )
        goto LABEL_414;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v17 = WarBoardPieceData__get_ActionType(detourRoute, 0LL) == 1;
      goto LABEL_404;
    case 116:
      if ( !route )
        goto LABEL_414;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v17 = WarBoardPieceData__get_ActionType(detourRoute, 0LL) == 2;
      goto LABEL_404;
    case 117:
      if ( !route )
        goto LABEL_414;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v17 = WarBoardPieceData__get_ActionType(detourRoute, 0LL) == 3;
      goto LABEL_404;
    case 118:
      if ( !route )
        goto LABEL_414;
      v18 = 0x10000000000LL;
      goto LABEL_356;
    case 119:
      if ( !route )
        goto LABEL_414;
      v19 = 0x10000000000LL;
      goto LABEL_359;
    case 120:
      if ( !route )
        goto LABEL_414;
      v18 = 0x20000000000LL;
      goto LABEL_356;
    case 121:
      if ( !route )
        goto LABEL_414;
      v19 = 0x20000000000LL;
      goto LABEL_359;
    case 122:
      if ( !targetData )
        goto LABEL_353;
      v55 = targetData->fields.detourRoute;
      if ( !v55 )
        goto LABEL_353;
      if ( v55->max_length <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v55->m_Items[2] != route->fields.actionIndex )
        goto LABEL_353;
      isMoveByMasterAndEnemyRange = targetData->fields.detourMoveByDistanceType;
LABEL_397:
      v17 = isMoveByMasterAndEnemyRange == 1;
      goto LABEL_404;
    case 123:
      if ( !targetData )
        goto LABEL_353;
      v56 = targetData->fields.detourRoute;
      if ( !v56 )
        goto LABEL_353;
      if ( v56->max_length <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v56->m_Items[2] != route->fields.actionIndex )
        goto LABEL_353;
      isMoveByServantAndEnemyRange = targetData->fields.detourMoveByDistanceType;
LABEL_400:
      v17 = isMoveByServantAndEnemyRange == 3;
      goto LABEL_404;
    case 124:
      if ( !targetData )
        goto LABEL_353;
      v57 = targetData->fields.detourRoute;
      if ( !v57 )
        goto LABEL_353;
      if ( v57->max_length <= 1 )
LABEL_415:
        sub_1BCAA44(this, route);
      if ( !route )
        goto LABEL_414;
      if ( v57->m_Items[2] == route->fields.actionIndex )
      {
        isMoveByServantAndMasterRange = targetData->fields.detourMoveByDistanceType;
LABEL_403:
        v17 = isMoveByServantAndMasterRange == 2;
LABEL_404:
        LOBYTE(detourRoute) = v17;
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
      v18 = 0x40000000000LL;
LABEL_356:
      LOBYTE(detourRoute) = WarBoardAIRoute_RouteData__HasFlag(route, v18, 0LL);
      return (unsigned __int8)detourRoute & 1;
    case 126:
      if ( !route )
        goto LABEL_414;
      v19 = 0x40000000000LL;
LABEL_359:
      isMaster = WarBoardAIRoute_RouteData__HasFlag(route, v19, 0LL);
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
      v48 = (int)this < condition->fields.value;
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
      v39 = (int)this <= condition->fields.value;
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
        sub_1BCAA3C(this, route);
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
  if ( (byte_4B13C97 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1BCA7E0(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x,
                                                                method);
    byte_4B13C97 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    sub_1BCAA3C(this, x);
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
  if ( (byte_4B13C98 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1BCA7E0(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x,
                                                                method);
    byte_4B13C98 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    sub_1BCAA3C(this, x);
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
  if ( (byte_4B13C99 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1BCA7E0(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x,
                                                                method);
    byte_4B13C99 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    sub_1BCAA3C(this, x);
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
  if ( (byte_4B13C9A & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1BCA7E0(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x,
                                                                method);
    byte_4B13C9A = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    sub_1BCAA3C(this, x);
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
  if ( (byte_4B13C9B & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1BCA7E0(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x,
                                                                method);
    byte_4B13C9B = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    sub_1BCAA3C(this, x);
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
  if ( (byte_4B13C9C & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1BCA7E0(
                                                                &Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__,
                                                                x,
                                                                method);
    byte_4B13C9C = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    sub_1BCAA3C(this, x);
  return value - 1 >= ratingOffset->fields.value;
}