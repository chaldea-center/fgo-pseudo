void WarBoardAIEvalCalcurater___ctor(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_PiecePersonality_o *piecePersonality,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.piecePersonalityList = piecePersonality;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)piecePersonality, v5, v6, v7, v8, v9, v10);
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
    sub_1C942F0(this, route);
  }
  max_length = actionTypeIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C942F8(this);
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
    sub_1C942F0(this, route);
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
      evalOffsetMagnification->fields.benAttack = benAttack + WarBoardActionTrendEntity__GetAttackValue(trend, 0);
      p_benMove = &evalOffsetMagnification->fields.benMove;
      goto LABEL_8;
    }
LABEL_10:
    sub_1C942F0(this, evalOffsetMagnification);
  }
  if ( viewPoint )
    return;
  if ( !evalOffsetMagnification )
    goto LABEL_10;
  warAttack = evalOffsetMagnification->fields.warAttack;
  evalOffsetMagnification->fields.warAttack = warAttack + WarBoardActionTrendEntity__GetAttackValue(trend, 0);
  p_benMove = &evalOffsetMagnification->fields.warMove;
LABEL_8:
  v10 = *p_benMove;
  *p_benMove = v10 + WarBoardActionTrendEntity__GetMoveValue(trend, 0);
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
    sub_1C942F0(this, route);
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
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicPutIndexTargetData; // x22
  int64_t TrendKey; // x0
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  WarBoardActionTrendEntity_o *v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_HashSet_T__o *FutureLookingTrendHashSet; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4D2A0E3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__);
    this = (WarBoardAIEvalCalcurater_o *)sub_1C94098(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    byte_4D2A0E3 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  value = 0;
  piecePersonalityList = v4->fields.piecePersonalityList;
  if ( !piecePersonalityList || (this = (WarBoardAIEvalCalcurater_o *)piecePersonalityList->fields.actionTrandList) == 0 )
    sub_1C942F0(this, route);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    if ( !v6 )
      break;
    value = 0;
    current = v20.fields._current;
    if ( !*route )
      sub_1C942F0(v6, v7);
    if ( !v20.fields._current )
      sub_1C942F0(v6, v7);
    klass = v20.fields._current[1].klass;
    if ( !klass )
      sub_1C942F0(0, v7);
    dicPutIndexTargetData = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(*route)->fields.dicPutIndexTargetData;
    TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, 0);
    if ( !dicPutIndexTargetData )
      sub_1C942F0(TrendKey, TrendKey);
    System_Collections_Generic_Dictionary_long__object___TryGetValue(
      dicPutIndexTargetData,
      TrendKey,
      &value,
      (const MethodInfo_34FE2C8 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
    if ( WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
           v4,
           *route,
           (WarBoardAIRoute_ActionTrendInfo_o *)current,
           (WarBoardAIRoute_TargetData_o *)value,
           v12) )
    {
      WarBoardAIEvalCalcurater__AddRatingBaseOffsetValue(
        v4,
        route,
        (WarBoardActionTrendEntity_o *)current[1].klass,
        v13);
      v15 = (WarBoardActionTrendEntity_o *)current[1].klass;
      if ( !v15 )
        sub_1C942F0(0, v14);
      if ( WarBoardActionTrendEntity__get_HasFutureTrend(v15, 0) )
      {
        if ( !*route )
          sub_1C942F0(0, v16);
        FutureLookingTrendHashSet = (System_Collections_Generic_HashSet_T__o *)WarBoardAIRoute_RouteData__get_FutureLookingTrendHashSet(
                                                                                 *route,
                                                                                 0);
        if ( !FutureLookingTrendHashSet )
          sub_1C942F0(0, v18);
        System_Collections_Generic_HashSet_object___Add(
          FutureLookingTrendHashSet,
          current,
          (const MethodInfo_371F98C *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
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
  _BOOL8 v11; // x0
  __int64 v12; // x1
  WarBoardAIRoute_ActionTrendInfo_o *current; // x22
  Il2CppClass *klass; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicPutIndexTargetData; // x23
  int64_t TrendKey; // x0
  const MethodInfo *v17; // x4
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  WarBoardAIRoute_RouteData_o *v21; // x8
  GrandQuestFolderBoardItem_o *p_futureEvalOffsetMag; // x23
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *v23; // x24
  _BOOL8 IsAttack; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  __int64 v32; // x1
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4D2A0E4 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__);
    sub_1C94098(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    byte_4D2A0E4 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  memset(&v35, 0, sizeof(v35));
  value = 0;
  FutureLookingTrendHashSet = *route;
  if ( !*route )
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
    sub_1C942F0(FutureLookingTrendHashSet, route);
  System_Collections_Generic_HashSet_object___GetEnumerator(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)&v33,
    (System_Collections_Generic_HashSet_T__o *)FutureLookingTrendHashSet,
    (const MethodInfo_371F310 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v36 = v33;
  while ( 1 )
  {
    v8 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
           (System_Collections_Generic_HashSet_Enumerator_T__o *)&v36,
           (const MethodInfo_35EBC50 *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    if ( !v8 )
      break;
    if ( !v36.fields._current )
      sub_1C942F0(v8, v9);
    monitor = (System_Collections_Generic_List_object__o *)v36.fields._current[2].monitor;
    if ( !monitor )
      sub_1C942F0(0, v9);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      monitor,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v35 = v33;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
      if ( !v11 )
        break;
      current = (WarBoardAIRoute_ActionTrendInfo_o *)v35.fields._current;
      if ( !v35.fields._current )
        sub_1C942F0(v11, v12);
      klass = v35.fields._current[1].klass;
      if ( !klass )
        sub_1C942F0(0, v12);
      dicPutIndexTargetData = (System_Collections_Generic_Dictionary_TKey__TValue__o *)futureRoute->fields.dicPutIndexTargetData;
      TrendKey = WarBoardActionTrendEntity__get_TrendKey((WarBoardActionTrendEntity_o *)klass, 0);
      if ( !dicPutIndexTargetData )
        sub_1C942F0(TrendKey, TrendKey);
      System_Collections_Generic_Dictionary_long__object___TryGetValue(
        dicPutIndexTargetData,
        TrendKey,
        &value,
        (const MethodInfo_34FE2C8 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TryGetValue__);
      v18 = WarBoardAIEvalCalcurater__JudgeSatisfyingTrend(
              this,
              futureRoute,
              current,
              (WarBoardAIRoute_TargetData_o *)value,
              v17);
      if ( v18 )
      {
        v21 = *route;
        if ( !*route )
          sub_1C942F0(v18, v19);
        p_futureEvalOffsetMag = (GrandQuestFolderBoardItem_o *)&v21->fields.futureEvalOffsetMag;
        if ( !v21->fields.futureEvalOffsetMag )
        {
          v23 = (WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)sub_1C942E4(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo);
          WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(v23, 0);
          IsAttack = WarBoardAIRoute_RouteData__get_IsAttack(futureRoute, 0);
          if ( !v23 )
            sub_1C942F0(IsAttack, v25);
          v23->fields.isAttack = IsAttack;
          p_futureEvalOffsetMag->klass = (GrandQuestFolderBoardItem_c *)v23;
          sub_1C9403C(p_futureEvalOffsetMag, (int32_t)v23, v26, v27, v28, v29, v30, v31);
          v21 = *route;
          if ( !*route )
            sub_1C942F0(v18, v32);
        }
        WarBoardAIEvalCalcurater__AddTrendEvalValue(
          (WarBoardAIEvalCalcurater_o *)v18,
          v21->fields.futureEvalOffsetMag,
          current->fields._Entity_k__BackingField,
          v20);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)&v36,
    (const MethodInfo_35EBC4C *)Method_System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void WarBoardAIEvalCalcurater__JudgeRatingOffsetAddCondition(
        WarBoardAIEvalCalcurater_o *this,
        WarBoardAIRoute_RouteData_o **route,
        System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList,
        float avgBeneValue,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t current; // w1
  WarBoardRatingOffsetEntity_o **v17; // x20
  _BOOL8 HasFlag; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x5
  WarBoardRatingOffsetEntity_o *v21; // x2
  char v22; // w8
  __int64 v23; // x1
  WarBoardRatingOffsetEntity_o *v24; // x9
  int32_t attackByLinkedEnemy; // w8
  struct System_Collections_Generic_Dictionary_uint__int__o *v26; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v27; // x23
  struct System_Collections_Generic_Dictionary_uint__int__o *v28; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v29; // x23
  WarBoardPieceData_o *v30; // x0
  struct WarBoardPieceData_o *v31; // x8
  struct BattleServantData_o *v32; // x8
  _BOOL4 v33; // w8
  WarBoardPieceData_o *v34; // x21
  float v35; // s0
  WarBoardRatingOffsetEntity_o *v36; // x8
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
  WarBoardPieceData_o *actionPiece; // x21
  __int64 v53; // x0
  __int64 v54; // x1
  float BreakPoint; // s0
  WarBoardPieceData_o *v56; // x0
  float v57; // s8
  WarBoardRatingOffsetEntity_o *v58; // x8
  WarBoardAIRoute_RouteData_o *v59; // x8
  WarBoardPieceData_o *basePiece; // x21
  bool v61; // cc
  WarBoardPieceData_o *v62; // x21
  __int64 v63; // x0
  __int64 v64; // x1
  float v65; // s0
  WarBoardPieceData_o *v66; // x0
  WarBoardPieceData_o *v67; // x0
  WarBoardPieceData_o *v68; // x0
  WarBoardPieceData_o *v69; // x0
  WarBoardPieceData_o *v70; // x0
  WarBoardAIRoute_RouteData_o *v71; // x8
  struct System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v73; // x23
  struct System_Collections_Generic_Dictionary_uint__int__o *v74; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v75; // x23
  WarBoardPieceData_o *v76; // x0
  WarBoardPieceData_o *v77; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v78; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v79; // x0
  struct System_Collections_Generic_Dictionary_uint__int__o *v80; // x22
  System_Func_KeyValuePair_uint__int___bool__o *v81; // x23
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4D2A0E6 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__get_Current__);
    sub_1C94098(&System_Func_KeyValuePair_uint__int___bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__);
    sub_1C94098(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__);
    sub_1C94098(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__);
    sub_1C94098(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__);
    sub_1C94098(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__);
    sub_1C94098(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__);
    sub_1C94098(&Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__);
    sub_1C94098(&WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo);
    this = (WarBoardAIEvalCalcurater_o *)sub_1C94098(&WarBoardAIManager_TypeInfo);
    byte_4D2A0E6 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  if ( !*route || !ratingOffsetList )
    sub_1C942F0(this, route);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v82,
    (System_Collections_Generic_List_object__o *)ratingOffsetList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__GetEnumerator__);
  v83 = v82;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v83,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__MoveNext__) )
  {
    v7 = sub_1C942E4(WarBoardAIEvalCalcurater___c__DisplayClass9_0_TypeInfo);
    WarBoardAIEvalCalcurater___c__DisplayClass9_0___ctor((WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)v7, 0);
    if ( !v7 )
      sub_1C942F0(v8, v9);
    current = (int32_t)v83.fields._current;
    *(_QWORD *)(v7 + 16) = v83.fields._current;
    v17 = (WarBoardRatingOffsetEntity_o **)(v7 + 16);
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), current, v10, v11, v12, v13, v14, v15);
    v21 = *(WarBoardRatingOffsetEntity_o **)(v7 + 16);
    if ( !v21 )
      sub_1C942F0(HasFlag, v19);
    v22 = 1;
    switch ( v21->fields.type )
    {
      case 0:
        break;
      case 1:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v24 = *v17;
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
        attackByLinkedEnemy = (*route)->fields.attackByLinkedEnemy;
        goto LABEL_159;
      case 2:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v24 = *v17;
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
        attackByLinkedEnemy = (*route)->fields.attackByLinkedAlly;
        goto LABEL_159;
      case 3:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000, 0);
        goto LABEL_209;
      case 4:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000, 0);
        goto LABEL_240;
      case 5:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !HasFlag )
          goto LABEL_214;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        actionPiece = (*route)->fields.actionPiece;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        BreakPoint = WarBoardAIManager__GetBreakPoint(actionPiece, 0);
        if ( !*route )
          sub_1C942F0(v53, v54);
        v56 = (*route)->fields.actionPiece;
        if ( !v56 )
          sub_1C942F0(0, v54);
        v57 = BreakPoint;
        HasFlag = WarBoardPieceData__get_isServant(v56, 0);
        if ( !HasFlag )
          goto LABEL_227;
        v58 = *v17;
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
        if ( v57 > (float)(v58->fields.value / 100) )
          goto LABEL_227;
        goto LABEL_153;
      case 6:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !HasFlag )
          goto LABEL_214;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v62 = (*route)->fields.actionPiece;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        v65 = WarBoardAIManager__GetBreakPoint(v62, 0);
        if ( !*route )
          sub_1C942F0(v63, v64);
        v66 = (*route)->fields.actionPiece;
        if ( !v66 )
          sub_1C942F0(0, v64);
        v57 = v65;
        HasFlag = WarBoardPieceData__get_isServant(v66, 0);
        if ( !HasFlag )
          goto LABEL_227;
        v58 = *v17;
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
        if ( v57 >= (float)(v58->fields.value / 100) )
          goto LABEL_227;
LABEL_153:
        v61 = v57 < (float)(v58->fields.value2 / 100);
        goto LABEL_202;
      case 7:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v49 = (*route)->fields.actionPiece;
        if ( !v49 )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardPieceData__get_isMaster(v49, 0);
        goto LABEL_209;
      case 8:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v68 = (*route)->fields.actionPiece;
        if ( !v68 )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardPieceData__get_isMaster(v68, 0);
        goto LABEL_240;
      case 9:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v39 = (*route)->fields.actionPiece;
        if ( !v39 )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardPieceData__get_isServant(v39, 0);
        if ( !HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000, 0);
        goto LABEL_209;
      case 0xA:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v67 = (*route)->fields.actionPiece;
        if ( !v67 )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardPieceData__get_isServant(v67, 0);
        if ( !HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000, 0);
        if ( HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000, 0);
        goto LABEL_209;
      case 0xB:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v37 = (*route)->fields.actionPiece;
        if ( !v37 )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardPieceData__get_isServant(v37, 0);
        if ( !HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000, 0);
        if ( HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000, 0);
        if ( HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000, 0);
        goto LABEL_209;
      case 0xC:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( !HasFlag )
          goto LABEL_214;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v38 = (*route)->fields.actionPiece;
        if ( !v38 )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardPieceData__get_isServant(v38, 0);
        if ( !HasFlag )
          goto LABEL_214;
        if ( !*route )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 0x40000, 0);
        if ( HasFlag )
          goto LABEL_214;
        if ( !*route )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 0x80000, 0);
        if ( HasFlag )
          goto LABEL_214;
        if ( !*route )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 0x800000, 0);
        v22 = !HasFlag;
        goto LABEL_229;
      case 0xD:
        if ( !*route )
          sub_1C942F0(HasFlag, v19);
        basePiece = (*route)->fields.basePiece;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        v35 = WarBoardAIManager__GetBreakPoint(basePiece, 0);
        v36 = *v17;
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
        if ( v35 <= (float)(v36->fields.value / 100) )
          goto LABEL_142;
        goto LABEL_227;
      case 0xE:
        if ( !*route )
          sub_1C942F0(HasFlag, v19);
        v34 = (*route)->fields.basePiece;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        v35 = WarBoardAIManager__GetBreakPoint(v34, 0);
        v36 = *v17;
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
        if ( v35 >= (float)(v36->fields.value / 100) )
          goto LABEL_227;
LABEL_142:
        v61 = v35 < (float)(v36->fields.value2 / 100);
        goto LABEL_202;
      case 0xF:
        if ( !*route )
          sub_1C942F0(HasFlag, v19);
        v44 = (*route)->fields.basePiece;
        if ( !v44 )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardPieceData__get_isServant(v44, 0);
        if ( !HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v45 = (*route)->fields.basePiece;
        if ( !v45 )
          sub_1C942F0(HasFlag, v23);
        battleServant_k__BackingField = v45->fields._battleServant_k__BackingField;
        if ( !battleServant_k__BackingField )
          sub_1C942F0(HasFlag, v23);
        v47 = *v17;
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
        np = battleServant_k__BackingField->fields.np;
        goto LABEL_201;
      case 0x10:
        if ( !*route )
          sub_1C942F0(HasFlag, v19);
        v30 = (*route)->fields.basePiece;
        if ( !v30 )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardPieceData__get_isServant(v30, 0);
        if ( !HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v31 = (*route)->fields.basePiece;
        if ( !v31 )
          sub_1C942F0(HasFlag, v23);
        v32 = v31->fields._battleServant_k__BackingField;
        if ( !v32 )
          sub_1C942F0(HasFlag, v23);
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
        v33 = v32->fields.np < (*v17)->fields.value;
        goto LABEL_228;
      case 0x11:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        moveByLinkedEnemy = (*route)->fields.moveByLinkedEnemy;
        goto LABEL_120;
      case 0x12:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        v59 = *route;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v24 = *v17;
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
        goto LABEL_158;
      case 0x13:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        v71 = *route;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v47 = *v17;
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
        goto LABEL_200;
      case 0x14:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        moveByLinkedEnemy = (*route)->fields.moveByLinkedAlly;
LABEL_120:
        v51 = moveByLinkedEnemy == 0;
        goto LABEL_160;
      case 0x15:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        v59 = *route;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v24 = *v17;
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
LABEL_158:
        attackByLinkedEnemy = v59->fields.moveByLinkedEnemy;
LABEL_159:
        v51 = attackByLinkedEnemy == v24->fields.value;
LABEL_160:
        v33 = v51;
        goto LABEL_228;
      case 0x16:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        v71 = *route;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v47 = *v17;
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
LABEL_200:
        np = v71->fields.moveByLinkedEnemy;
LABEL_201:
        v61 = np < v47->fields.value;
LABEL_202:
        v33 = !v61;
        goto LABEL_228;
      case 0x17:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        dicUniqueKeyRange = (*route)->fields.dicUniqueKeyRange;
        v73 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1C942E4(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v73,
          (Il2CppObject *)v7,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__0__,
          0);
        HasFlag = System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                    (System_Collections_Generic_IEnumerable_TSource__o *)dicUniqueKeyRange,
                    (System_Func_TSource__bool__o *)v73,
                    (const MethodInfo_31A9154 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_209;
      case 0x18:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v42 = (*route)->fields.dicUniqueKeyRange;
        v43 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1C942E4(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v43,
          (Il2CppObject *)v7,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__1__,
          0);
        HasFlag = System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v42,
                    (System_Func_TSource__bool__o *)v43,
                    (const MethodInfo_31A9154 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_209;
      case 0x19:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
        dicMoveByServantGetDesignationItem = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !dicMoveByServantGetDesignationItem )
          sub_1C942F0(0, v23);
        HasFlag = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                    dicMoveByServantGetDesignationItem,
                    (*v17)->fields.value,
                    (const MethodInfo_34A6274 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( !HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
        v41 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v41 )
          sub_1C942F0(0, v23);
        HasFlag = System_Collections_Generic_Dictionary_int__bool___get_Item(
                    v41,
                    (*v17)->fields.value,
                    (const MethodInfo_34A5FD0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        goto LABEL_209;
      case 0x1A:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
        v78 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v78 )
          sub_1C942F0(0, v23);
        HasFlag = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                    v78,
                    (*v17)->fields.value,
                    (const MethodInfo_34A6274 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        if ( !HasFlag )
          goto LABEL_241;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
        v79 = (*route)->fields.dicMoveByServantGetDesignationItem;
        if ( !v79 )
          sub_1C942F0(0, v23);
        HasFlag = System_Collections_Generic_Dictionary_int__bool___get_Item(
                    v79,
                    (*v17)->fields.value,
                    (const MethodInfo_34A5FD0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
        goto LABEL_240;
      case 0x1B:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_214;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v26 = (*route)->fields.dicUniqueKeyRange;
        v27 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1C942E4(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v27,
          (Il2CppObject *)v7,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__2__,
          0);
        HasFlag = System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                    (System_Func_TSource__bool__o *)v27,
                    (const MethodInfo_31A9154 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( HasFlag )
          goto LABEL_214;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v28 = (*route)->fields.dicUniqueKeyRange;
        v29 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1C942E4(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v29,
          (Il2CppObject *)v7,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__3__,
          0);
        HasFlag = System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                    (System_Func_TSource__bool__o *)v29,
                    (const MethodInfo_31A9154 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_244;
      case 0x1C:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_214;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v74 = (*route)->fields.dicUniqueKeyRange;
        v75 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1C942E4(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v75,
          (Il2CppObject *)v7,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__4__,
          0);
        HasFlag = System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v74,
                    (System_Func_TSource__bool__o *)v75,
                    (const MethodInfo_31A9154 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        if ( HasFlag )
          goto LABEL_214;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v80 = (*route)->fields.dicUniqueKeyRange;
        v81 = (System_Func_KeyValuePair_uint__int___bool__o *)sub_1C942E4(System_Func_KeyValuePair_uint__int___bool__TypeInfo);
        System_Func_KeyValuePair_uint__int___bool____ctor(
          v81,
          (Il2CppObject *)v7,
          Method_WarBoardAIEvalCalcurater___c__DisplayClass9_0__JudgeRatingOffsetAddCondition_b__5__,
          0);
        HasFlag = System_Linq_Enumerable__Any_KeyValuePair_uint__int__(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v80,
                    (System_Func_TSource__bool__o *)v81,
                    (const MethodInfo_31A9154 *)Method_System_Linq_Enumerable_Any_KeyValuePair_uint__int____);
        goto LABEL_244;
      case 0x1D:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000, 0);
        if ( !HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v76 = (*route)->fields.basePiece;
        if ( !v76 )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardPieceData__get_isServant(v76, 0);
        if ( HasFlag )
          goto LABEL_241;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v77 = (*route)->fields.actionPiece;
        if ( !v77 )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardPieceData__get_isServant(v77, 0);
        goto LABEL_209;
      case 0x1E:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 0x4000000, 0);
        if ( HasFlag )
        {
          if ( !*route )
            sub_1C942F0(HasFlag, v23);
          v69 = (*route)->fields.basePiece;
          if ( !v69 )
            sub_1C942F0(0, v23);
          HasFlag = WarBoardPieceData__get_isServant(v69, 0);
          if ( HasFlag )
          {
LABEL_227:
            v33 = 0;
          }
          else
          {
            if ( !*route )
              sub_1C942F0(HasFlag, v23);
            v70 = (*route)->fields.actionPiece;
            if ( !v70 )
              sub_1C942F0(0, v23);
            HasFlag = WarBoardPieceData__get_isServant(v70, 0);
LABEL_240:
            v33 = !HasFlag;
          }
        }
        else
        {
LABEL_241:
          v33 = 1;
        }
        goto LABEL_228;
      case 0x1F:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(HasFlag, v23);
        v33 = (*route)->fields.moveByLinkedItem > 0;
        goto LABEL_228;
      case 0x20:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
          goto LABEL_227;
        if ( !*route )
          sub_1C942F0(0, v23);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 0x10000000, 0);
LABEL_209:
        v33 = HasFlag;
LABEL_228:
        v22 = v33;
        goto LABEL_229;
      case 0x21:
        if ( !*route )
          sub_1C942F0(0, v19);
        HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 2, 0);
        if ( HasFlag )
        {
LABEL_214:
          v22 = 0;
        }
        else
        {
          if ( !*route )
            sub_1C942F0(0, v23);
          HasFlag = WarBoardAIRoute_RouteData__HasFlag(*route, 0x200000000LL, 0);
LABEL_244:
          v22 = HasFlag;
        }
LABEL_229:
        v21 = *v17;
        if ( !*v17 )
          sub_1C942F0(HasFlag, v23);
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
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v83,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_WarBoardRatingOffsetEntity__Dispose__);
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
    sub_1C942F0(this, route);
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
    sub_1C942F8(this);
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
  int64_t v12; // x1
  int64_t v13; // x1
  WarBoardPieceData_o *detourRoute; // x0
  bool isMaster; // w0
  int32_t isMoveByMasterAndEnemyRange; // w8
  int32_t isMoveByServantAndEnemyRange; // w8
  int32_t isMoveByServantAndMasterRange; // w8
  WarBoardPieceData_o *actionPiece; // x20
  WarBoardPieceData_o *basePiece; // x21
  WarBoardPieceData_o *v21; // x20
  WarBoardPieceData_o *v22; // x21
  int32_t actionCountOnThisTurn; // w8
  int32_t attackCountOnThisTurn; // w8
  int32_t v25; // w8
  WarBoardPieceData_o *targetPiece; // x20
  WarBoardPieceData_o *v27; // x19
  WarBoardPieceData_o *v28; // x20
  WarBoardPieceData_o *v29; // x19
  _BOOL4 isAround; // w8
  _BOOL4 ExistEnemyOnBaseRoute_k__BackingField; // w8
  int32_t v32; // w19
  bool v33; // cc
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  int32_t v35; // w19
  bool v36; // cc
  struct System_Int32_array *v37; // x8
  struct System_Int32_array *v38; // x8
  struct System_Int32_array *v39; // x8
  int32_t v40; // w9
  int32_t actionIndex; // w9
  bool v42; // cc
  WarBoardPieceData_o *v43; // x20
  WarBoardPieceData_o *v44; // x19
  WarBoardPieceData_o *v45; // x20
  WarBoardPieceData_o *v46; // x19
  struct System_Int32_array *v47; // x8
  struct System_Int32_array *v48; // x8
  struct System_Int32_array *v49; // x8
  struct System_Int32_array *v50; // x8
  struct System_Int32_array *v51; // x8
  int32_t v53; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t value[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2A0E5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__);
    sub_1C94098(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    this = (WarBoardAIEvalCalcurater_o *)sub_1C94098(&WarBoardAIManager_TypeInfo);
    byte_4D2A0E5 = 1;
  }
  *(_QWORD *)value = 0;
  v53 = 0;
  switch ( condType )
  {
    case 1:
      if ( !route )
        goto LABEL_414;
      v12 = 16;
      goto LABEL_356;
    case 2:
      if ( !route )
        goto LABEL_414;
      v13 = 16;
      goto LABEL_359;
    case 3:
      if ( !route )
        goto LABEL_414;
      v12 = 64;
      goto LABEL_356;
    case 4:
      if ( !route )
        goto LABEL_414;
      v13 = 64;
      goto LABEL_359;
    case 5:
      if ( !route )
        goto LABEL_414;
      v12 = 0x4000000;
      goto LABEL_356;
    case 6:
      if ( !route )
        goto LABEL_414;
      v13 = 0x4000000;
      goto LABEL_359;
    case 7:
      if ( !route )
        goto LABEL_414;
      v12 = 1024;
      goto LABEL_356;
    case 8:
      if ( !route )
        goto LABEL_414;
      v13 = 1024;
      goto LABEL_359;
    case 9:
      if ( !route )
        goto LABEL_414;
      v12 = 0x8000000000LL;
      goto LABEL_356;
    case 10:
      if ( !route )
        goto LABEL_414;
      v13 = 0x8000000000LL;
      goto LABEL_359;
    case 11:
      if ( !route )
        goto LABEL_414;
      v12 = 2048;
      goto LABEL_356;
    case 12:
      if ( !route )
        goto LABEL_414;
      v13 = 2048;
      goto LABEL_359;
    case 13:
      if ( !route )
        goto LABEL_414;
      v12 = 0x4000000000LL;
      goto LABEL_356;
    case 14:
      if ( !route )
        goto LABEL_414;
      v13 = 0x4000000000LL;
      goto LABEL_359;
    case 15:
      if ( !route )
        goto LABEL_414;
      v12 = 256;
      goto LABEL_356;
    case 16:
      if ( !route )
        goto LABEL_414;
      v13 = 256;
      goto LABEL_359;
    case 17:
      if ( !route )
        goto LABEL_414;
      v12 = 512;
      goto LABEL_356;
    case 18:
      if ( !route )
        goto LABEL_414;
      v13 = 512;
      goto LABEL_359;
    case 19:
      if ( !route )
        goto LABEL_414;
      v12 = 4096;
      goto LABEL_356;
    case 20:
      if ( !route )
        goto LABEL_414;
      v13 = 4096;
      goto LABEL_359;
    case 21:
      if ( !route )
        goto LABEL_414;
      v12 = 0x2000;
      goto LABEL_356;
    case 22:
      if ( !route )
        goto LABEL_414;
      v13 = 0x2000;
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
                              (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
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
                   (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
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
              (const MethodInfo_34B02AC *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
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
              (const MethodInfo_34B02AC *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
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
              &v53,
              (const MethodInfo_34B02AC *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TryGetValue__) )
        goto LABEL_353;
      isMoveByServantAndMasterRange = v53;
      goto LABEL_403;
    case 43:
      if ( !route )
        goto LABEL_414;
      v12 = 0x4000;
      goto LABEL_356;
    case 44:
      if ( !route )
        goto LABEL_414;
      v13 = 0x4000;
      goto LABEL_359;
    case 45:
      if ( !route )
        goto LABEL_414;
      v12 = 0x8000;
      goto LABEL_356;
    case 46:
      if ( !route )
        goto LABEL_414;
      v13 = 0x8000;
      goto LABEL_359;
    case 47:
      if ( !route )
        goto LABEL_414;
      v12 = 0x10000;
      goto LABEL_356;
    case 48:
      if ( !route )
        goto LABEL_414;
      v13 = 0x10000;
      goto LABEL_359;
    case 49:
      if ( !route )
        goto LABEL_414;
      v12 = 0x20000;
      goto LABEL_356;
    case 50:
      if ( !route )
        goto LABEL_414;
      v13 = 0x20000;
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
      v12 = 128;
      goto LABEL_356;
    case 64:
      if ( !route )
        goto LABEL_414;
      v13 = 128;
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
      if ( !WarBoardAIManager__IsEnemyPiece(basePiece, actionPiece, 0) )
        goto LABEL_353;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.actionPiece;
      if ( !this )
        goto LABEL_414;
      LOBYTE(detourRoute) = WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)this, 0);
      return (unsigned __int8)detourRoute & 1;
    case 69:
      if ( !route )
        goto LABEL_414;
      v21 = route->fields.actionPiece;
      if ( !v21 )
        goto LABEL_353;
      v22 = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      if ( !WarBoardAIManager__IsEnemyPiece(v22, v21, 0) )
        goto LABEL_353;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.actionPiece;
      if ( !this )
        goto LABEL_414;
      isMaster = WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)this, 0);
      goto LABEL_360;
    case 70:
      if ( !route )
        goto LABEL_414;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_ActionType(detourRoute, 0);
      if ( !condition )
        goto LABEL_414;
LABEL_368:
      v11 = (_DWORD)this == condition->fields.value;
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
      v25 = route->fields.actionCountOnThisTurn;
      goto LABEL_273;
    case 74:
    case 127:
      v10 = targetData == 0;
      goto LABEL_315;
    case 75:
    case 128:
      v11 = targetData == 0;
      goto LABEL_404;
    case 76:
      if ( !targetData )
        goto LABEL_353;
      targetPiece = targetData->fields.targetPiece;
      if ( !targetPiece )
        goto LABEL_353;
      if ( !route )
        goto LABEL_414;
      v27 = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      LOBYTE(detourRoute) = WarBoardAIManager__IsEnemyPiece(v27, targetPiece, 0);
      return (unsigned __int8)detourRoute & 1;
    case 77:
      if ( !targetData )
        goto LABEL_353;
      v28 = targetData->fields.targetPiece;
      if ( !v28 )
        goto LABEL_303;
      if ( !route )
        goto LABEL_414;
      v29 = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      isMaster = WarBoardAIManager__IsEnemyPiece(v29, v28, 0);
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
      v32 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)detourRoute,
              (const MethodInfo_31BC098 *)Method_System_Linq_Enumerable_Count_int___);
      this = (WarBoardAIEvalCalcurater_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
                                             (const MethodInfo_31BC098 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_414;
      v33 = v32 - (int)this <= condition->fields.value;
      goto LABEL_380;
    case 84:
      if ( !targetData )
        goto LABEL_353;
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.detourRoute;
      if ( !v34 )
        goto LABEL_303;
      v35 = System_Linq_Enumerable__Count_int_(
              v34,
              (const MethodInfo_31BC098 *)Method_System_Linq_Enumerable_Count_int___);
      this = (WarBoardAIEvalCalcurater_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)targetData->fields.baseRoute,
                                             (const MethodInfo_31BC098 *)Method_System_Linq_Enumerable_Count_int___);
      if ( !condition )
        goto LABEL_414;
      v36 = v35 - (int)this <= condition->fields.value;
LABEL_256:
      LOBYTE(detourRoute) = !v36;
      return (unsigned __int8)detourRoute & 1;
    case 85:
      if ( !targetData )
        goto LABEL_353;
      v37 = targetData->fields.detourRoute;
      if ( !v37 )
        goto LABEL_353;
      if ( LODWORD(v37->max_length) <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v37->m_Items[1] != route->fields.actionIndex )
        goto LABEL_353;
LABEL_215:
      isMoveByMasterAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_397;
    case 86:
      if ( !targetData )
        goto LABEL_353;
      v38 = targetData->fields.detourRoute;
      if ( !v38 )
        goto LABEL_353;
      if ( LODWORD(v38->max_length) <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v38->m_Items[1] != route->fields.actionIndex )
        goto LABEL_353;
LABEL_221:
      isMoveByServantAndEnemyRange = targetData->fields.moveByDistanceType;
      goto LABEL_400;
    case 87:
      if ( !targetData )
        goto LABEL_353;
      v39 = targetData->fields.detourRoute;
      if ( !v39 )
        goto LABEL_353;
      if ( LODWORD(v39->max_length) <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v39->m_Items[1] != route->fields.actionIndex )
        goto LABEL_353;
LABEL_227:
      isMoveByServantAndMasterRange = targetData->fields.moveByDistanceType;
      goto LABEL_403;
    case 88:
      if ( !route )
        goto LABEL_414;
      v12 = 0x20000000;
      goto LABEL_356;
    case 89:
      if ( !route )
        goto LABEL_414;
      v13 = 0x20000000;
      goto LABEL_359;
    case 90:
      if ( !route )
        goto LABEL_414;
      v12 = 0x40000000;
      goto LABEL_356;
    case 91:
      if ( !route )
        goto LABEL_414;
      v13 = 0x40000000;
      goto LABEL_359;
    case 92:
      if ( !route )
        goto LABEL_414;
      v12 = 0x80000000LL;
      goto LABEL_356;
    case 93:
      if ( !route )
        goto LABEL_414;
      v13 = 0x80000000LL;
      goto LABEL_359;
    case 94:
      if ( !route )
        goto LABEL_414;
      v12 = 0x100000000LL;
      goto LABEL_356;
    case 95:
      if ( !route )
        goto LABEL_414;
      v13 = 0x100000000LL;
      goto LABEL_359;
    case 96:
      if ( !targetData )
        goto LABEL_353;
      isAround = targetData->fields._ExistEnemyOnBaseRoute_k__BackingField;
LABEL_246:
      v10 = !isAround;
      goto LABEL_315;
    case 97:
      if ( !targetData )
        goto LABEL_353;
      ExistEnemyOnBaseRoute_k__BackingField = targetData->fields._ExistEnemyOnBaseRoute_k__BackingField;
LABEL_249:
      v11 = !ExistEnemyOnBaseRoute_k__BackingField;
      goto LABEL_404;
    case 98:
      if ( !route || !condition )
        goto LABEL_414;
      v40 = condition->fields.value;
      v25 = route->fields.EnemyRangeMin - 1;
      goto LABEL_274;
    case 99:
      if ( !route || !condition )
        goto LABEL_414;
      v36 = route->fields.EnemyRangeMin - 1 <= condition->fields.value;
      goto LABEL_256;
    case 100:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_RouteData__HasFlag(route, 2, 0);
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
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_RouteData__HasFlag(route, 2, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_353;
      if ( !condition )
        goto LABEL_414;
      attackCountOnThisTurn = route->fields.attackCountOnThisTurn;
LABEL_268:
      v42 = attackCountOnThisTurn < condition->fields.value;
LABEL_373:
      LOBYTE(detourRoute) = !v42;
      return (unsigned __int8)detourRoute & 1;
    case 102:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardAIRoute_RouteData__HasFlag(route, 2, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_353;
      if ( !condition )
        goto LABEL_414;
      v25 = route->fields.attackCountOnThisTurn;
LABEL_273:
      v40 = condition->fields.value;
LABEL_274:
      v33 = v25 <= v40;
LABEL_380:
      LOBYTE(detourRoute) = v33;
      return (unsigned __int8)detourRoute & 1;
    case 103:
      if ( !route )
        goto LABEL_414;
      v12 = 0x400000000LL;
      goto LABEL_356;
    case 104:
      if ( !route )
        goto LABEL_414;
      v13 = 0x400000000LL;
      goto LABEL_359;
    case 105:
      if ( !route )
        goto LABEL_414;
      v12 = 0x800000000LL;
      goto LABEL_356;
    case 106:
      if ( !route )
        goto LABEL_414;
      v13 = 0x800000000LL;
      goto LABEL_359;
    case 107:
      if ( !route )
        goto LABEL_414;
      v12 = 0x1000000000LL;
      goto LABEL_356;
    case 108:
      if ( !route )
        goto LABEL_414;
      v13 = 0x1000000000LL;
      goto LABEL_359;
    case 109:
      if ( !route )
        goto LABEL_414;
      v12 = 0x2000000000LL;
      goto LABEL_356;
    case 110:
      if ( !route )
        goto LABEL_414;
      v13 = 0x2000000000LL;
      goto LABEL_359;
    case 111:
      if ( !targetData )
        goto LABEL_353;
      v43 = targetData->fields.targetPiece;
      if ( !v43 )
        goto LABEL_353;
      if ( !route )
        goto LABEL_414;
      v44 = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      LOBYTE(detourRoute) = WarBoardAIManager__IsAllyPiece(v44, v43, 0);
      return (unsigned __int8)detourRoute & 1;
    case 112:
      if ( !targetData )
        goto LABEL_353;
      v45 = targetData->fields.targetPiece;
      if ( !v45 )
        goto LABEL_303;
      if ( !route )
        goto LABEL_414;
      v46 = route->fields.basePiece;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
      isMaster = WarBoardAIManager__IsAllyPiece(v46, v45, 0);
      goto LABEL_360;
    case 113:
      if ( !targetData )
        goto LABEL_353;
      v47 = targetData->fields.detourRoute;
      if ( !v47 )
        goto LABEL_353;
      if ( LODWORD(v47->max_length) <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      actionCountOnThisTurn = v47->m_Items[1];
      actionIndex = route->fields.actionIndex;
LABEL_309:
      v11 = actionCountOnThisTurn == actionIndex;
      goto LABEL_404;
    case 114:
      if ( !targetData )
        goto LABEL_353;
      v48 = targetData->fields.detourRoute;
      if ( !v48 )
        goto LABEL_353;
      if ( LODWORD(v48->max_length) <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      v10 = v48->m_Items[1] == route->fields.actionIndex;
LABEL_315:
      LOBYTE(detourRoute) = !v10;
      return (unsigned __int8)detourRoute & 1;
    case 115:
      if ( !route )
        goto LABEL_414;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v11 = WarBoardPieceData__get_ActionType(detourRoute, 0) == 1;
      goto LABEL_404;
    case 116:
      if ( !route )
        goto LABEL_414;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v11 = WarBoardPieceData__get_ActionType(detourRoute, 0) == 2;
      goto LABEL_404;
    case 117:
      if ( !route )
        goto LABEL_414;
      detourRoute = route->fields.basePiece;
      if ( !detourRoute )
        return (unsigned __int8)detourRoute & 1;
      v11 = WarBoardPieceData__get_ActionType(detourRoute, 0) == 3;
      goto LABEL_404;
    case 118:
      if ( !route )
        goto LABEL_414;
      v12 = 0x10000000000LL;
      goto LABEL_356;
    case 119:
      if ( !route )
        goto LABEL_414;
      v13 = 0x10000000000LL;
      goto LABEL_359;
    case 120:
      if ( !route )
        goto LABEL_414;
      v12 = 0x20000000000LL;
      goto LABEL_356;
    case 121:
      if ( !route )
        goto LABEL_414;
      v13 = 0x20000000000LL;
      goto LABEL_359;
    case 122:
      if ( !targetData )
        goto LABEL_353;
      v49 = targetData->fields.detourRoute;
      if ( !v49 )
        goto LABEL_353;
      if ( LODWORD(v49->max_length) <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v49->m_Items[1] != route->fields.actionIndex )
        goto LABEL_353;
      isMoveByMasterAndEnemyRange = targetData->fields.detourMoveByDistanceType;
LABEL_397:
      v11 = isMoveByMasterAndEnemyRange == 1;
      goto LABEL_404;
    case 123:
      if ( !targetData )
        goto LABEL_353;
      v50 = targetData->fields.detourRoute;
      if ( !v50 )
        goto LABEL_353;
      if ( LODWORD(v50->max_length) <= 1 )
        goto LABEL_415;
      if ( !route )
        goto LABEL_414;
      if ( v50->m_Items[1] != route->fields.actionIndex )
        goto LABEL_353;
      isMoveByServantAndEnemyRange = targetData->fields.detourMoveByDistanceType;
LABEL_400:
      v11 = isMoveByServantAndEnemyRange == 3;
      goto LABEL_404;
    case 124:
      if ( !targetData )
        goto LABEL_353;
      v51 = targetData->fields.detourRoute;
      if ( !v51 )
        goto LABEL_353;
      if ( LODWORD(v51->max_length) <= 1 )
LABEL_415:
        sub_1C942F8(this);
      if ( !route )
        goto LABEL_414;
      if ( v51->m_Items[1] == route->fields.actionIndex )
      {
        isMoveByServantAndMasterRange = targetData->fields.detourMoveByDistanceType;
LABEL_403:
        v11 = isMoveByServantAndMasterRange == 2;
LABEL_404:
        LOBYTE(detourRoute) = v11;
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
      v12 = 0x40000000000LL;
LABEL_356:
      LOBYTE(detourRoute) = WarBoardAIRoute_RouteData__HasFlag(route, v12, 0);
      return (unsigned __int8)detourRoute & 1;
    case 126:
      if ( !route )
        goto LABEL_414;
      v13 = 0x40000000000LL;
LABEL_359:
      isMaster = WarBoardAIRoute_RouteData__HasFlag(route, v13, 0);
      goto LABEL_360;
    case 129:
      if ( !condition )
        goto LABEL_414;
      LOBYTE(detourRoute) = WarBoardAiTrendCondJudger__TargetRangeUnder(targetData, condition->fields.value, 0);
      return (unsigned __int8)detourRoute & 1;
    case 130:
      if ( !condition )
        goto LABEL_414;
      isMaster = WarBoardAiTrendCondJudger__TargetRangeUnder(targetData, condition->fields.value, 0);
      goto LABEL_360;
    case 131:
      if ( route )
      {
        this = (WarBoardAIEvalCalcurater_o *)route->fields.basePiece;
        if ( this )
        {
          this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_survivalTurn((WarBoardPieceData_o *)this, 0);
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
      this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_survivalTurn((WarBoardPieceData_o *)this, 0);
      if ( !condition )
        goto LABEL_414;
      v42 = (int)this < condition->fields.value;
      goto LABEL_373;
    case 133:
      if ( !route )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)route->fields.basePiece;
      if ( !this )
        goto LABEL_414;
      this = (WarBoardAIEvalCalcurater_o *)WarBoardPieceData__get_survivalTurn((WarBoardPieceData_o *)this, 0);
      if ( !condition )
        goto LABEL_414;
      v33 = (int)this <= condition->fields.value;
      goto LABEL_380;
    case 134:
      if ( !route )
        goto LABEL_414;
      LOBYTE(detourRoute) = WarBoardAIRoute_RouteData__get_notAction(route, 0);
      return (unsigned __int8)detourRoute & 1;
    case 135:
      if ( !route )
        goto LABEL_414;
      isMaster = WarBoardAIRoute_RouteData__get_notAction(route, 0);
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
      LOBYTE(detourRoute) = WarBoardAiTrendCondJudger__IsReplaceTarget(route, targetData, 0);
      return (unsigned __int8)detourRoute & 1;
    case 139:
      isMaster = WarBoardAiTrendCondJudger__IsReplaceTarget(route, targetData, 0);
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
      LOBYTE(detourRoute) = WarBoardSquareData__IsFlag((WarBoardSquareData_o *)this, 1, 0);
      return (unsigned __int8)detourRoute & 1;
    case 144:
      if ( !route || (this = (WarBoardAIEvalCalcurater_o *)route->fields.actionSquare) == 0 )
LABEL_414:
        sub_1C942F0(this, route);
LABEL_413:
      isMaster = WarBoardSquareData__IsFlag((WarBoardSquareData_o *)this, 1, 0);
LABEL_360:
      LOBYTE(detourRoute) = !isMaster;
      return (unsigned __int8)detourRoute & 1;
    default:
LABEL_303:
      LOBYTE(detourRoute) = 1;
      return (unsigned __int8)detourRoute & 1;
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
  if ( (byte_4D2A0E8 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_4D2A0E8 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C942F0)(this, x);
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
  if ( (byte_4D2A0E9 & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_4D2A0E9 = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C942F0)(this, x);
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
  if ( (byte_4D2A0EA & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_4D2A0EA = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C942F0)(this, x);
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
  if ( (byte_4D2A0EB & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_4D2A0EB = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C942F0)(this, x);
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
  if ( (byte_4D2A0EC & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_4D2A0EC = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C942F0)(this, x);
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
  if ( (byte_4D2A0ED & 1) == 0 )
  {
    this = (WarBoardAIEvalCalcurater___c__DisplayClass9_0_o *)sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_uint__int__get_Value__);
    byte_4D2A0ED = 1;
  }
  ratingOffset = v4->fields.ratingOffset;
  if ( !ratingOffset )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C942F0)(this, x);
  return value - 1 >= ratingOffset->fields.value;
}