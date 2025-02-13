void __fastcall ShortestDistanceFromEnemyServant___ctor(
        ShortestDistanceFromEnemyServant_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
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
  ShortestDistanceFromEnemyServant_o *v10; // x19
  int32_t squareIndex_k__BackingField; // w22
  WarBoardPieceData_o *EnemyPieceSquareIndex; // x0
  WarBoardPieceData_o *v13; // x22
  int32_t v14; // w21
  int32_t v15; // w20
  System_Int32_array *v16; // x0
  __int64 v17; // x20
  float BreakPoint; // s0
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  v10 = this;
  if ( (byte_4BD9F7B & 1) == 0 )
  {
    sub_1C21E38(&AStarSearch_TypeInfo);
    this = (ShortestDistanceFromEnemyServant_o *)sub_1C21E38(&WarBoardAIManager_TypeInfo);
    byte_4BD9F7B = 1;
  }
  if ( !targetSquare )
    goto LABEL_18;
  squareIndex_k__BackingField = targetSquare->fields._squareIndex_k__BackingField;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  EnemyPieceSquareIndex = WarBoardAIManager__GetEnemyPieceSquareIndex(squareIndex_k__BackingField, 0LL);
  if ( EnemyPieceSquareIndex )
  {
    v13 = EnemyPieceSquareIndex;
    if ( EnemyPieceSquareIndex->fields._forceId_k__BackingField != forceId )
    {
      this = (ShortestDistanceFromEnemyServant_o *)WarBoardPieceData__get_isMaster(EnemyPieceSquareIndex, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !calcSquare )
          goto LABEL_18;
        v14 = calcSquare->fields._squareIndex_k__BackingField;
        v15 = targetSquare->fields._squareIndex_k__BackingField;
        if ( !AStarSearch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
        v16 = AStarSearch__RouteSearch(v13, v14, v15, 0, 0LL, 0LL);
        if ( v16 )
        {
          v17 = *(_QWORD *)&v16->max_length;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          BreakPoint = WarBoardAIManager__GetBreakPoint(v13, 0LL);
          ratingBase = v10->fields.ratingBase;
          if ( ratingBase )
            return fmaxf(
                     (float)((float)(1.0 - BreakPoint) * (float)ratingBase->fields.adjustmentValueB)
                   + (float)(ratingBase->fields.adjustmentValueA1 - ratingBase->fields.adjustmentValueA2 * (v17 - 1)),
                     0.0);
LABEL_18:
          sub_1C22094(this, *(_QWORD *)&forceId);
        }
      }
    }
  }
  return 0.0;
}