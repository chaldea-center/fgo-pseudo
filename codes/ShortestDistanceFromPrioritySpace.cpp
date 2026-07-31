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
  float v10; // s8
  int32_t squareIndex_k__BackingField; // w21
  int32_t v12; // w22
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8
  int v14; // w9
  int v15; // w8
  float evalValue_k__BackingField; // s2

  v9 = this;
  if ( (byte_5935F2D & 1) == 0 )
  {
    this = (ShortestDistanceFromPrioritySpace_o *)sub_21FFC50(&AStarSearch_TypeInfo);
    byte_5935F2D = 1;
  }
  if ( !targetSquare )
    goto LABEL_14;
  v10 = 0.0;
  if ( !targetSquare->fields._evalValue_k__BackingField )
    return v10;
  if ( !calcSquare )
    goto LABEL_14;
  squareIndex_k__BackingField = calcSquare->fields._squareIndex_k__BackingField;
  v12 = targetSquare->fields._squareIndex_k__BackingField;
  if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, *(_QWORD *)&forceId, calcSquare);
  this = (ShortestDistanceFromPrioritySpace_o *)AStarSearch__RouteSearch(0, squareIndex_k__BackingField, v12, 0, 0, 0);
  if ( this )
  {
    ratingBase = v9->fields.ratingBase;
    if ( ratingBase )
    {
      v14 = LODWORD(this[1].klass) - 1;
      v15 = ratingBase->fields.adjustmentValueA1 + 1;
      evalValue_k__BackingField = (float)targetSquare->fields._evalValue_k__BackingField;
      if ( (float)((float)((float)v15 - (float)v14) * evalValue_k__BackingField) >= 0.0 )
        return (float)((float)v15 - (float)v14) * evalValue_k__BackingField;
      else
        return 0.0;
    }
LABEL_14:
    sub_21FFECC(this, *(_QWORD *)&forceId);
  }
  return v10;
}