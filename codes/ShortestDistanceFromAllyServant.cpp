void __fastcall ShortestDistanceFromAllyServant___ctor(
        ShortestDistanceFromAllyServant_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
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
  ShortestDistanceFromAllyServant_o *v11; // x19
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  uint32_t Item; // w23
  WarBoardPieceData_o *PieceUnique; // x0
  WarBoardPieceData_o *v17; // x23
  int32_t squareIndex_k__BackingField; // w21
  int32_t v19; // w20
  System_Int32_array *v20; // x0
  __int64 v21; // x20
  float BreakPoint; // s0
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  v11 = this;
  if ( (byte_49B8948 & 1) == 0 )
  {
    sub_1B4CF90(&AStarSearch_TypeInfo, *(_QWORD *)&forceId);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__uint__get_Item__, v13);
    this = (ShortestDistanceFromAllyServant_o *)sub_1B4CF90(&WarBoardAIManager_TypeInfo, v14);
    byte_49B8948 = 1;
  }
  if ( !targetSquare || !dicPiecePlaceData )
    goto LABEL_20;
  if ( System_Collections_Generic_Dictionary_int__uint___ContainsKey(
         dicPiecePlaceData,
         targetSquare->fields._squareIndex_k__BackingField,
         (const MethodInfo_3202BE0 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_int__uint___get_Item(
             dicPiecePlaceData,
             targetSquare->fields._squareIndex_k__BackingField,
             (const MethodInfo_3202958 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Item__);
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    PieceUnique = WarBoardAIManager__GetPieceUnique(Item, 0LL);
    if ( PieceUnique )
    {
      v17 = PieceUnique;
      if ( PieceUnique->fields._forceId_k__BackingField == forceId )
      {
        this = (ShortestDistanceFromAllyServant_o *)WarBoardPieceData__get_isMaster(PieceUnique, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !calcSquare )
            goto LABEL_20;
          squareIndex_k__BackingField = calcSquare->fields._squareIndex_k__BackingField;
          v19 = targetSquare->fields._squareIndex_k__BackingField;
          if ( !AStarSearch_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          v20 = AStarSearch__RouteSearch(v17, squareIndex_k__BackingField, v19, 0, 0LL, 0LL);
          if ( v20 )
          {
            v21 = *(_QWORD *)&v20->max_length;
            if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            BreakPoint = WarBoardAIManager__GetBreakPoint(v17, 0LL);
            ratingBase = v11->fields.ratingBase;
            if ( ratingBase )
              return fmaxf(
                       (float)(BreakPoint * (float)ratingBase->fields.adjustmentValueB)
                     + (float)(ratingBase->fields.adjustmentValueA1 - ratingBase->fields.adjustmentValueA2 * (v21 - 1)),
                       0.0);
LABEL_20:
            sub_1B4D1EC(this, *(_QWORD *)&forceId);
          }
        }
      }
    }
  }
  return 0.0;
}