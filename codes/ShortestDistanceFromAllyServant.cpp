void __fastcall ShortestDistanceFromAllyServant___ctor(
        ShortestDistanceFromAllyServant_o *this,
        const MethodInfo *method)
{
  WarBoardRatingBase___ctor((WarBoardRatingBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall ShortestDistanceFromAllyServant__GetRatingBase(
        ShortestDistanceFromAllyServant_o *this,
        int32_t forceId,
        WarBoardSquareData_o *calcSquare,
        WarBoardSquareData_o *targetSquare,
        System_Collections_Generic_Dictionary_int__uint__o *dicPiecePlaceData,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        const MethodInfo *method)
{
  WarBoardRatingBase_o *v11; // x19
  uint32_t Item; // w23
  WarBoardPieceData_o *PieceUnique; // x0
  WarBoardPieceData_o *v14; // x23
  int32_t squareIndex_k__BackingField; // w22
  int32_t v16; // w24
  System_Int32_array *v17; // x0
  il2cpp_array_size_t max_length; // w20
  float BreakPoint; // s0
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  v11 = (WarBoardRatingBase_o *)this;
  if ( (byte_438C003 & 1) == 0 )
  {
    sub_B775C4(&AStarSearch_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__uint__get_Item__);
    this = (ShortestDistanceFromAllyServant_o *)sub_B775C4(&WarBoardAIManager_TypeInfo);
    byte_438C003 = 1;
  }
  if ( !targetSquare || !dicPiecePlaceData )
    goto LABEL_24;
  if ( System_Collections_Generic_Dictionary_int__uint___ContainsKey(
         dicPiecePlaceData,
         targetSquare->fields._squareIndex_k__BackingField,
         (const MethodInfo_2FFBBE4 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_int__uint___get_Item(
             dicPiecePlaceData,
             targetSquare->fields._squareIndex_k__BackingField,
             (const MethodInfo_2FFB8C0 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Item__);
    if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    }
    PieceUnique = WarBoardAIManager__GetPieceUnique(Item, 0LL);
    if ( PieceUnique )
    {
      v14 = PieceUnique;
      if ( PieceUnique->fields._forceId_k__BackingField == forceId )
      {
        this = (ShortestDistanceFromAllyServant_o *)WarBoardPieceData__get_isMaster(PieceUnique, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !calcSquare )
            goto LABEL_24;
          squareIndex_k__BackingField = calcSquare->fields._squareIndex_k__BackingField;
          v16 = targetSquare->fields._squareIndex_k__BackingField;
          if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AStarSearch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          }
          v17 = AStarSearch__RouteSearch(v14, squareIndex_k__BackingField, v16, 0, 0LL, 0LL);
          if ( v17 )
          {
            max_length = v17->max_length;
            if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            }
            BreakPoint = WarBoardAIManager__GetBreakPoint(v14, 0LL);
            ratingBase = v11->fields.ratingBase;
            if ( ratingBase )
              return fmaxf(
                       (float)(BreakPoint * (float)ratingBase->fields.adjustmentValueB)
                     + (float)(int)(ratingBase->fields.adjustmentValueA1
                                  - ratingBase->fields.adjustmentValueA2 * (max_length - 1)),
                       0.0);
LABEL_24:
            sub_B7769C(this, *(_QWORD *)&forceId);
          }
          WarBoardRatingBase__DebugLog(v11, calcSquare, targetSquare, 0LL);
        }
      }
    }
  }
  return 0.0;
}