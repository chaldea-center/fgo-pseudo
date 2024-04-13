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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  uint32_t Item; // w23
  WarBoardPieceData_o *PieceUnique; // x0
  WarBoardPieceData_o *v23; // x23
  int32_t squareIndex_k__BackingField; // w22
  int32_t v25; // w24
  System_Int32_array *v26; // x0
  il2cpp_array_size_t max_length; // w20
  float BreakPoint; // s0
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  v11 = (WarBoardRatingBase_o *)this;
  if ( (byte_42E9761 & 1) == 0 )
  {
    sub_B5D5C4(&AStarSearch_TypeInfo, forceId, (_DWORD)calcSquare, targetSquare);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__uint__get_Item__, v15, v16, v17);
    this = (ShortestDistanceFromAllyServant_o *)sub_B5D5C4(&WarBoardAIManager_TypeInfo, v18, v19, v20);
    byte_42E9761 = 1;
  }
  if ( !targetSquare || !dicPiecePlaceData )
    goto LABEL_24;
  if ( System_Collections_Generic_Dictionary_int__uint___ContainsKey(
         dicPiecePlaceData,
         targetSquare->fields._squareIndex_k__BackingField,
         (const MethodInfo_2F39B30 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_int__uint___get_Item(
             dicPiecePlaceData,
             targetSquare->fields._squareIndex_k__BackingField,
             (const MethodInfo_2F3980C *)Method_System_Collections_Generic_Dictionary_int__uint__get_Item__);
    if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    }
    PieceUnique = WarBoardAIManager__GetPieceUnique(Item, 0LL);
    if ( PieceUnique )
    {
      v23 = PieceUnique;
      if ( PieceUnique->fields._forceId_k__BackingField == forceId )
      {
        this = (ShortestDistanceFromAllyServant_o *)WarBoardPieceData__get_isMaster(PieceUnique, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !calcSquare )
            goto LABEL_24;
          squareIndex_k__BackingField = calcSquare->fields._squareIndex_k__BackingField;
          v25 = targetSquare->fields._squareIndex_k__BackingField;
          if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AStarSearch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          }
          v26 = AStarSearch__RouteSearch(v23, squareIndex_k__BackingField, v25, 0, 0LL, 0LL);
          if ( v26 )
          {
            max_length = v26->max_length;
            if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            }
            BreakPoint = WarBoardAIManager__GetBreakPoint(v23, 0LL);
            ratingBase = v11->fields.ratingBase;
            if ( ratingBase )
              return fmaxf(
                       (float)(BreakPoint * (float)ratingBase->fields.adjustmentValueB)
                     + (float)(int)(ratingBase->fields.adjustmentValueA1
                                  - ratingBase->fields.adjustmentValueA2 * (max_length - 1)),
                       0.0);
LABEL_24:
            sub_B5D69C(this, *(_QWORD *)&forceId);
          }
          WarBoardRatingBase__DebugLog(v11, calcSquare, targetSquare, 0LL);
        }
      }
    }
  }
  return 0.0;
}