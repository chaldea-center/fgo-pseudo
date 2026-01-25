void ShortestDistanceFromPrioritySpace___ctor(ShortestDistanceFromPrioritySpace_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
float ShortestDistanceFromPrioritySpace__GetRatingBase(
        ShortestDistanceFromPrioritySpace_o *this,
        int32_t forceId,
        WarBoardSquareData_o *calcSquare,
        WarBoardSquareData_o *targetSquare,
        System_Collections_Generic_Dictionary_int__uint__o *dicPiecePlaceData,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        const MethodInfo *method)
{
  ShortestDistanceFromPrioritySpace_o *v9; // x20
  int32_t squareIndex_k__BackingField; // w21
  int32_t v11; // w22
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  v9 = this;
  if ( (byte_4CEBF34 & 1) == 0 )
  {
    this = (ShortestDistanceFromPrioritySpace_o *)sub_1C7BAE8(&AStarSearch_TypeInfo);
    byte_4CEBF34 = 1;
  }
  if ( !targetSquare )
    goto LABEL_12;
  if ( targetSquare->fields._evalValue_k__BackingField )
  {
    if ( !calcSquare )
      goto LABEL_12;
    squareIndex_k__BackingField = calcSquare->fields._squareIndex_k__BackingField;
    v11 = targetSquare->fields._squareIndex_k__BackingField;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    this = (ShortestDistanceFromPrioritySpace_o *)AStarSearch__RouteSearch(0, squareIndex_k__BackingField, v11, 0, 0, 0);
    if ( this )
    {
      ratingBase = v9->fields.ratingBase;
      if ( ratingBase )
        return fmaxf(
                 (float)((float)(ratingBase->fields.adjustmentValueA1 + 1) - (float)(LODWORD(this[1].klass) - 1))
               * (float)targetSquare->fields._evalValue_k__BackingField,
                 0.0);
LABEL_12:
      sub_1C7BD40(this, *(_QWORD *)&forceId);
    }
  }
  return 0.0;
}