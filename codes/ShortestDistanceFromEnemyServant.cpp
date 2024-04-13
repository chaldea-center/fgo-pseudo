void __fastcall ShortestDistanceFromEnemyServant___ctor(
        ShortestDistanceFromEnemyServant_o *this,
        const MethodInfo *method)
{
  WarBoardRatingBase___ctor((WarBoardRatingBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall ShortestDistanceFromEnemyServant__GetRatingBase(
        ShortestDistanceFromEnemyServant_o *this,
        int32_t forceId,
        WarBoardSquareData_o *calcSquare,
        WarBoardSquareData_o *targetSquare,
        System_Collections_Generic_Dictionary_int__uint__o *dicPiecePlaceData,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        const MethodInfo *method)
{
  WarBoardRatingBase_o *v10; // x19
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t squareIndex_k__BackingField; // w22
  WarBoardPieceData_o *EnemyPieceSquareIndex; // x0
  WarBoardPieceData_o *v16; // x22
  int32_t v17; // w23
  int32_t v18; // w24
  System_Int32_array *v19; // x0
  il2cpp_array_size_t max_length; // w20
  float BreakPoint; // s0
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  v10 = (WarBoardRatingBase_o *)this;
  if ( (byte_42E9763 & 1) == 0 )
  {
    sub_B5D5C4(&AStarSearch_TypeInfo, forceId, (_DWORD)calcSquare, targetSquare);
    this = (ShortestDistanceFromEnemyServant_o *)sub_B5D5C4(&WarBoardAIManager_TypeInfo, v11, v12, v13);
    byte_42E9763 = 1;
  }
  if ( !targetSquare )
    goto LABEL_22;
  squareIndex_k__BackingField = targetSquare->fields._squareIndex_k__BackingField;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  EnemyPieceSquareIndex = WarBoardAIManager__GetEnemyPieceSquareIndex(squareIndex_k__BackingField, 0LL);
  if ( EnemyPieceSquareIndex )
  {
    v16 = EnemyPieceSquareIndex;
    if ( EnemyPieceSquareIndex->fields._forceId_k__BackingField != forceId )
    {
      this = (ShortestDistanceFromEnemyServant_o *)WarBoardPieceData__get_isMaster(EnemyPieceSquareIndex, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !calcSquare )
          goto LABEL_22;
        v17 = calcSquare->fields._squareIndex_k__BackingField;
        v18 = targetSquare->fields._squareIndex_k__BackingField;
        if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AStarSearch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
        }
        v19 = AStarSearch__RouteSearch(v16, v17, v18, 0, 0LL, 0LL);
        if ( v19 )
        {
          max_length = v19->max_length;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          }
          BreakPoint = WarBoardAIManager__GetBreakPoint(v16, 0LL);
          ratingBase = v10->fields.ratingBase;
          if ( ratingBase )
            return fmaxf(
                     (float)((float)(1.0 - BreakPoint) * (float)ratingBase->fields.adjustmentValueB)
                   + (float)(int)(ratingBase->fields.adjustmentValueA1
                                - ratingBase->fields.adjustmentValueA2 * (max_length - 1)),
                     0.0);
LABEL_22:
          sub_B5D69C(this, *(_QWORD *)&forceId);
        }
        WarBoardRatingBase__DebugLog(v10, calcSquare, targetSquare, 0LL);
      }
    }
  }
  return 0.0;
}