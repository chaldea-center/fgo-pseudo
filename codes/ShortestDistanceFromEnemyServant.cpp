void ShortestDistanceFromEnemyServant___ctor(ShortestDistanceFromEnemyServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
float ShortestDistanceFromEnemyServant__GetRatingBase(
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
  float v13; // s8
  WarBoardPieceData_o *v14; // x22
  __int64 v15; // x2
  int32_t v16; // w21
  int32_t v17; // w20
  System_Int32_array *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  int max_length; // w20
  float BreakPoint; // s0
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8
  float v24; // s0

  v10 = this;
  if ( (byte_596E085 & 1) == 0 )
  {
    sub_2213A60(&AStarSearch_TypeInfo);
    this = (ShortestDistanceFromEnemyServant_o *)sub_2213A60(&WarBoardAIManager_TypeInfo);
    byte_596E085 = 1;
  }
  if ( !targetSquare )
    goto LABEL_20;
  squareIndex_k__BackingField = targetSquare->fields._squareIndex_k__BackingField;
  if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, *(_QWORD *)&forceId, calcSquare);
  EnemyPieceSquareIndex = WarBoardAIManager__GetEnemyPieceSquareIndex(squareIndex_k__BackingField, 0);
  v13 = 0.0;
  if ( EnemyPieceSquareIndex )
  {
    v14 = EnemyPieceSquareIndex;
    if ( EnemyPieceSquareIndex->fields._forceId_k__BackingField != forceId )
    {
      this = (ShortestDistanceFromEnemyServant_o *)WarBoardPieceData__get_isMaster(EnemyPieceSquareIndex, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !calcSquare )
          goto LABEL_20;
        v16 = calcSquare->fields._squareIndex_k__BackingField;
        v17 = targetSquare->fields._squareIndex_k__BackingField;
        if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, *(_QWORD *)&forceId, v15);
        v18 = AStarSearch__RouteSearch(v14, v16, v17, 0, 0, 0);
        if ( v18 )
        {
          max_length = v18->max_length;
          if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v19, v20);
          BreakPoint = WarBoardAIManager__GetBreakPoint(v14, 0);
          ratingBase = v10->fields.ratingBase;
          if ( ratingBase )
          {
            v24 = (float)((float)(1.0 - BreakPoint) * (float)ratingBase->fields.adjustmentValueB)
                + (float)(ratingBase->fields.adjustmentValueA1 - ratingBase->fields.adjustmentValueA2 * (max_length - 1));
            if ( v24 >= 0.0 )
              return v24;
            else
              return 0.0;
          }
LABEL_20:
          sub_2213CDC(this, *(_QWORD *)&forceId);
        }
      }
    }
  }
  return v13;
}