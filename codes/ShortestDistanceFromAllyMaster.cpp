void ShortestDistanceFromAllyMaster___ctor(ShortestDistanceFromAllyMaster_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float ShortestDistanceFromAllyMaster__GetRatingBase(
        ShortestDistanceFromAllyMaster_o *this,
        int32_t forceId,
        WarBoardSquareData_o *calcSquare,
        WarBoardSquareData_o *targetSquare,
        System_Collections_Generic_Dictionary_int__uint__o *dicPiecePlaceData,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        const MethodInfo *method)
{
  ShortestDistanceFromAllyMaster_o *v11; // x19
  uint32_t Item; // w23
  WarBoardPieceData_o *PieceUnique; // x0
  WarBoardPieceData_o *v14; // x23
  int32_t squareIndex_k__BackingField; // w21
  int32_t v16; // w20
  System_Int32_array *v17; // x0
  il2cpp_array_size_t max_length; // x20
  float BreakPoint; // s0
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  v11 = this;
  if ( (byte_4C40918 & 1) == 0 )
  {
    sub_1C37058(&AStarSearch_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__uint__get_Item__);
    this = (ShortestDistanceFromAllyMaster_o *)sub_1C37058(&WarBoardAIManager_TypeInfo);
    byte_4C40918 = 1;
  }
  if ( !targetSquare || !dicPiecePlaceData )
    goto LABEL_20;
  if ( System_Collections_Generic_Dictionary_int__uint___ContainsKey(
         dicPiecePlaceData,
         targetSquare->fields._squareIndex_k__BackingField,
         (const MethodInfo_341EBCC *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_int__uint___get_Item(
             dicPiecePlaceData,
             targetSquare->fields._squareIndex_k__BackingField,
             (const MethodInfo_341E944 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Item__);
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    PieceUnique = WarBoardAIManager__GetPieceUnique(Item, 0);
    if ( PieceUnique )
    {
      v14 = PieceUnique;
      if ( PieceUnique->fields._forceId_k__BackingField == forceId )
      {
        this = (ShortestDistanceFromAllyMaster_o *)WarBoardPieceData__get_isMaster(PieceUnique, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !calcSquare )
            goto LABEL_20;
          squareIndex_k__BackingField = calcSquare->fields._squareIndex_k__BackingField;
          v16 = targetSquare->fields._squareIndex_k__BackingField;
          if ( !AStarSearch_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          v17 = AStarSearch__RouteSearch(v14, squareIndex_k__BackingField, v16, 0, 0, 0);
          if ( v17 )
          {
            max_length = v17->max_length;
            if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            BreakPoint = WarBoardAIManager__GetBreakPoint(v14, 0);
            ratingBase = v11->fields.ratingBase;
            if ( ratingBase )
              return fmaxf(
                       (float)((float)(1.0 - BreakPoint) * (float)ratingBase->fields.adjustmentValueB)
                     + (float)(ratingBase->fields.adjustmentValueA1
                             - ratingBase->fields.adjustmentValueA2 * ((int)max_length - 1)),
                       0.0);
LABEL_20:
            sub_1C372B4(this);
          }
        }
      }
    }
  }
  return 0.0;
}