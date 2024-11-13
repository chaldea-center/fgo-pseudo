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
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t squareIndex_k__BackingField; // w20
  WarBoardPieceData_o *EnemyPieceSquareIndex; // x0
  WarBoardPieceData_o *v15; // x20
  int32_t v16; // w22
  int32_t v17; // w21
  ShortestDistanceFromEnemyServant_c *klass; // x21
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  v10 = this;
  if ( (byte_4B13C80 & 1) == 0 )
  {
    sub_1BCA7E0(&AStarSearch_TypeInfo, *(_QWORD *)&forceId, calcSquare);
    this = (ShortestDistanceFromEnemyServant_o *)sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v11, v12);
    byte_4B13C80 = 1;
  }
  if ( !targetSquare )
    goto LABEL_18;
  squareIndex_k__BackingField = targetSquare->fields._squareIndex_k__BackingField;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, *(_QWORD *)&forceId);
  EnemyPieceSquareIndex = WarBoardAIManager__GetEnemyPieceSquareIndex(
                            squareIndex_k__BackingField,
                            *(const MethodInfo **)&forceId);
  if ( EnemyPieceSquareIndex )
  {
    v15 = EnemyPieceSquareIndex;
    if ( EnemyPieceSquareIndex->fields._forceId_k__BackingField != forceId )
    {
      this = (ShortestDistanceFromEnemyServant_o *)WarBoardPieceData__get_isMaster(EnemyPieceSquareIndex, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !calcSquare )
          goto LABEL_18;
        v16 = calcSquare->fields._squareIndex_k__BackingField;
        v17 = targetSquare->fields._squareIndex_k__BackingField;
        if ( !AStarSearch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, *(_QWORD *)&forceId);
        this = (ShortestDistanceFromEnemyServant_o *)AStarSearch__RouteSearch(v15, v16, v17, 0, 0LL, 0LL);
        if ( this )
        {
          klass = this[1].klass;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, *(_QWORD *)&forceId);
          ratingBase = v10->fields.ratingBase;
          if ( ratingBase )
            return fmaxf(
                     (float)((float)(1.0
                                   - (float)((float)(v15->fields._breakPoint_k__BackingField + 1)
                                           / (float)(v15->fields._breakPointMax_k__BackingField + 1)))
                           * (float)ratingBase->fields.adjustmentValueB)
                   + (float)(ratingBase->fields.adjustmentValueA1
                           - ratingBase->fields.adjustmentValueA2 * ((int)klass - 1)),
                     0.0);
LABEL_18:
          sub_1BCAA3C(this, *(_QWORD *)&forceId);
        }
      }
    }
  }
  return 0.0;
}