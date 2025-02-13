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
  uint32_t Item; // w23
  WarBoardPieceData_o *PieceUnique; // x0
  WarBoardPieceData_o *v14; // x23
  int32_t squareIndex_k__BackingField; // w21
  int32_t v16; // w20
  System_Int32_array *v17; // x0
  __int64 v18; // x20
  float BreakPoint; // s0
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  v11 = this;
  if ( (byte_4BD9F79 & 1) == 0 )
  {
    sub_1C21E38(&AStarSearch_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__uint__get_Item__);
    this = (ShortestDistanceFromAllyServant_o *)sub_1C21E38(&WarBoardAIManager_TypeInfo);
    byte_4BD9F79 = 1;
  }
  if ( !targetSquare || !dicPiecePlaceData )
    goto LABEL_20;
  if ( System_Collections_Generic_Dictionary_int__uint___ContainsKey(
         dicPiecePlaceData,
         targetSquare->fields._squareIndex_k__BackingField,
         (const MethodInfo_32D799C *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_int__uint___get_Item(
             dicPiecePlaceData,
             targetSquare->fields._squareIndex_k__BackingField,
             (const MethodInfo_32D7714 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Item__);
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
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
            goto LABEL_20;
          squareIndex_k__BackingField = calcSquare->fields._squareIndex_k__BackingField;
          v16 = targetSquare->fields._squareIndex_k__BackingField;
          if ( !AStarSearch_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          v17 = AStarSearch__RouteSearch(v14, squareIndex_k__BackingField, v16, 0, 0LL, 0LL);
          if ( v17 )
          {
            v18 = *(_QWORD *)&v17->max_length;
            if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            BreakPoint = WarBoardAIManager__GetBreakPoint(v14, 0LL);
            ratingBase = v11->fields.ratingBase;
            if ( ratingBase )
              return fmaxf(
                       (float)(BreakPoint * (float)ratingBase->fields.adjustmentValueB)
                     + (float)(ratingBase->fields.adjustmentValueA1 - ratingBase->fields.adjustmentValueA2 * (v18 - 1)),
                       0.0);
LABEL_20:
            sub_1C22094(this, *(_QWORD *)&forceId);
          }
        }
      }
    }
  }
  return 0.0;
}