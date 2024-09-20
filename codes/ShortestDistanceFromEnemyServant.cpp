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
  int32_t squareIndex_k__BackingField; // w20
  WarBoardPieceData_o *EnemyPieceSquareIndex; // x0
  WarBoardPieceData_o *v13; // x20
  int32_t v14; // w22
  int32_t v15; // w21
  ShortestDistanceFromEnemyServant_c *klass; // x21
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  v10 = this;
  if ( (byte_4A58D25 & 1) == 0 )
  {
    sub_1B885B0(&AStarSearch_TypeInfo);
    this = (ShortestDistanceFromEnemyServant_o *)sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D25 = 1;
  }
  if ( !targetSquare )
    goto LABEL_18;
  squareIndex_k__BackingField = targetSquare->fields._squareIndex_k__BackingField;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  EnemyPieceSquareIndex = WarBoardAIManager__GetEnemyPieceSquareIndex(
                            squareIndex_k__BackingField,
                            *(const MethodInfo **)&forceId);
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
        this = (ShortestDistanceFromEnemyServant_o *)AStarSearch__RouteSearch(v13, v14, v15, 0, 0LL, 0LL);
        if ( this )
        {
          klass = this[1].klass;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          ratingBase = v10->fields.ratingBase;
          if ( ratingBase )
            return fmaxf(
                     (float)((float)(1.0
                                   - (float)((float)(v13->fields._breakPoint_k__BackingField + 1)
                                           / (float)(v13->fields._breakPointMax_k__BackingField + 1)))
                           * (float)ratingBase->fields.adjustmentValueB)
                   + (float)(ratingBase->fields.adjustmentValueA1
                           - ratingBase->fields.adjustmentValueA2 * ((int)klass - 1)),
                     0.0);
LABEL_18:
          sub_1B8880C(this, *(_QWORD *)&forceId);
        }
      }
    }
  }
  return 0.0;
}