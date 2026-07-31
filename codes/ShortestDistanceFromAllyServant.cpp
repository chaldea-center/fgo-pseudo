void ShortestDistanceFromAllyServant___ctor(ShortestDistanceFromAllyServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
float ShortestDistanceFromAllyServant__GetRatingBase(
        ShortestDistanceFromAllyServant_o *this,
        int32_t forceId,
        WarBoardSquareData_o *calcSquare,
        WarBoardSquareData_o *targetSquare,
        System_Collections_Generic_Dictionary_int__uint__o *dicPiecePlaceData,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        const MethodInfo *method)
{
  ShortestDistanceFromAllyServant_o *v11; // x19
  float v12; // s8
  __int64 v13; // x1
  __int64 v14; // x2
  uint32_t Item; // w23
  WarBoardPieceData_o *PieceUnique; // x0
  WarBoardPieceData_o *v17; // x23
  __int64 v18; // x2
  int32_t squareIndex_k__BackingField; // w21
  int32_t v20; // w20
  System_Int32_array *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int max_length; // w20
  float BreakPoint; // s0
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8
  float v27; // s0

  v11 = this;
  if ( (byte_5935F29 & 1) == 0 )
  {
    sub_21FFC50(&AStarSearch_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__uint__get_Item__);
    this = (ShortestDistanceFromAllyServant_o *)sub_21FFC50(&WarBoardAIManager_TypeInfo);
    byte_5935F29 = 1;
  }
  if ( !targetSquare || !dicPiecePlaceData )
    goto LABEL_22;
  v12 = 0.0;
  if ( System_Collections_Generic_Dictionary_int__uint___ContainsKey(
         dicPiecePlaceData,
         targetSquare->fields._squareIndex_k__BackingField,
         (const MethodInfo_3F727A8 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_int__uint___get_Item(
             dicPiecePlaceData,
             targetSquare->fields._squareIndex_k__BackingField,
             (const MethodInfo_3F72520 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Item__);
    if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v13, v14);
    PieceUnique = WarBoardAIManager__GetPieceUnique(Item, 0);
    if ( PieceUnique )
    {
      v17 = PieceUnique;
      if ( PieceUnique->fields._forceId_k__BackingField == forceId )
      {
        this = (ShortestDistanceFromAllyServant_o *)WarBoardPieceData__get_isMaster(PieceUnique, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !calcSquare )
            goto LABEL_22;
          squareIndex_k__BackingField = calcSquare->fields._squareIndex_k__BackingField;
          v20 = targetSquare->fields._squareIndex_k__BackingField;
          if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, *(_QWORD *)&forceId, v18);
          v21 = AStarSearch__RouteSearch(v17, squareIndex_k__BackingField, v20, 0, 0, 0);
          if ( v21 )
          {
            max_length = v21->max_length;
            if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v22, v23);
            BreakPoint = WarBoardAIManager__GetBreakPoint(v17, 0);
            ratingBase = v11->fields.ratingBase;
            if ( ratingBase )
            {
              v27 = (float)(BreakPoint * (float)ratingBase->fields.adjustmentValueB)
                  + (float)(ratingBase->fields.adjustmentValueA1
                          - ratingBase->fields.adjustmentValueA2 * (max_length - 1));
              if ( v27 >= 0.0 )
                return v27;
              else
                return 0.0;
            }
LABEL_22:
            sub_21FFECC(this, *(_QWORD *)&forceId);
          }
        }
      }
    }
  }
  return v12;
}