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
  const MethodInfo *v12; // x1
  uint32_t Item; // w22
  WarBoardPieceData_o *PieceUnique; // x0
  WarBoardPieceData_o *v15; // x22
  int32_t squareIndex_k__BackingField; // w21
  int32_t v17; // w20
  ShortestDistanceFromAllyServant_c *klass; // x20
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  v11 = this;
  if ( (byte_4A58D23 & 1) == 0 )
  {
    sub_1B885B0(&AStarSearch_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__uint__get_Item__);
    this = (ShortestDistanceFromAllyServant_o *)sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D23 = 1;
  }
  if ( !targetSquare || !dicPiecePlaceData )
    goto LABEL_20;
  if ( System_Collections_Generic_Dictionary_int__uint___ContainsKey(
         dicPiecePlaceData,
         targetSquare->fields._squareIndex_k__BackingField,
         (const MethodInfo_31797A8 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_int__uint___get_Item(
             dicPiecePlaceData,
             targetSquare->fields._squareIndex_k__BackingField,
             (const MethodInfo_3179520 *)Method_System_Collections_Generic_Dictionary_int__uint__get_Item__);
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    PieceUnique = WarBoardAIManager__GetPieceUnique(Item, v12);
    if ( PieceUnique )
    {
      v15 = PieceUnique;
      if ( PieceUnique->fields._forceId_k__BackingField == forceId )
      {
        this = (ShortestDistanceFromAllyServant_o *)WarBoardPieceData__get_isMaster(PieceUnique, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !calcSquare )
            goto LABEL_20;
          squareIndex_k__BackingField = calcSquare->fields._squareIndex_k__BackingField;
          v17 = targetSquare->fields._squareIndex_k__BackingField;
          if ( !AStarSearch_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
          this = (ShortestDistanceFromAllyServant_o *)AStarSearch__RouteSearch(
                                                        v15,
                                                        squareIndex_k__BackingField,
                                                        v17,
                                                        0,
                                                        0LL,
                                                        0LL);
          if ( this )
          {
            klass = this[1].klass;
            if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            ratingBase = v11->fields.ratingBase;
            if ( ratingBase )
              return fmaxf(
                       (float)((float)((float)(v15->fields._breakPoint_k__BackingField + 1)
                                     / (float)(v15->fields._breakPointMax_k__BackingField + 1))
                             * (float)ratingBase->fields.adjustmentValueB)
                     + (float)(ratingBase->fields.adjustmentValueA1
                             - ratingBase->fields.adjustmentValueA2 * ((int)klass - 1)),
                       0.0);
LABEL_20:
            sub_1B8880C(this, *(_QWORD *)&forceId);
          }
        }
      }
    }
  }
  return 0.0;
}