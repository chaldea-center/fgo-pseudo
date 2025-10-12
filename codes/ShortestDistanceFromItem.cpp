void ShortestDistanceFromItem___ctor(ShortestDistanceFromItem_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float ShortestDistanceFromItem__GetRatingBase(
        ShortestDistanceFromItem_o *this,
        int32_t forceId,
        WarBoardSquareData_o *calcSquare,
        WarBoardSquareData_o *targetSquare,
        System_Collections_Generic_Dictionary_int__uint__o *dicPiecePlaceData,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 evalValue; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x23
  int32_t v16; // w22
  WarBoardItemData_o *Item; // x0
  WarBoardItemData_o *v18; // x22
  System_Func_object__bool__o *v19; // x25
  int32_t squareIndex_k__BackingField; // w20
  int32_t v21; // w21
  System_Int32_array *v22; // x0
  il2cpp_array_size_t max_length; // x20
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  if ( (byte_4C35331 & 1) == 0 )
  {
    sub_1C32C20(&AStarSearch_TypeInfo);
    sub_1C32C20(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1C32C20(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C32C20(&Method_ShortestDistanceFromItem___c__DisplayClass0_0__GetRatingBase_b__0__);
    sub_1C32C20(&ShortestDistanceFromItem___c__DisplayClass0_0_TypeInfo);
    sub_1C32C20(&WarBoardAIManager_TypeInfo);
    byte_4C35331 = 1;
  }
  v11 = sub_1C32E6C(ShortestDistanceFromItem___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_18;
  *(_QWORD *)(v11 + 16) = targetSquare;
  v15 = v11 + 16;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 16), (int32_t)targetSquare, v13, v14);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_18;
  v16 = *(_DWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  Item = WarBoardAIManager__GetItem(v16, 0);
  if ( Item )
  {
    v18 = Item;
    if ( !WarBoardItemData__get_Acquired(Item, 0) )
    {
      v19 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v19,
        (Il2CppObject *)v11,
        Method_ShortestDistanceFromItem___c__DisplayClass0_0__GetRatingBase_b__0__,
        0);
      evalValue = BasicHelper__Any_object_(
                    (System_Collections_Generic_List_T__o *)routeDataList,
                    (System_Func_T__bool__o *)v19,
                    (const MethodInfo_30C6790 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
      if ( (evalValue & 1) == 0 )
      {
        if ( !calcSquare || !*(_QWORD *)v15 )
          goto LABEL_18;
        squareIndex_k__BackingField = calcSquare->fields._squareIndex_k__BackingField;
        v21 = *(_DWORD *)(*(_QWORD *)v15 + 16LL);
        if ( !AStarSearch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
        v22 = AStarSearch__RouteSearch(0, squareIndex_k__BackingField, v21, 0, 0, 0);
        if ( v22 )
        {
          max_length = v22->max_length;
          evalValue = WarBoardItemData__get_evalValue(v18, 0);
          ratingBase = this->fields.ratingBase;
          if ( ratingBase )
            return fmaxf(
                     (float)((float)(ratingBase->fields.adjustmentValueA1 + 1) - (float)((int)max_length - 1))
                   * (float)(int)evalValue,
                     0.0);
LABEL_18:
          sub_1C32E7C(evalValue);
        }
      }
    }
  }
  return 0.0;
}


void ShortestDistanceFromItem___c__DisplayClass0_0___ctor(
        ShortestDistanceFromItem___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShortestDistanceFromItem___c__DisplayClass0_0___GetRatingBase_b__0(
        ShortestDistanceFromItem___c__DisplayClass0_0_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  struct WarBoardSquareData_o *targetSquare; // x9
  int32_t squareIndex_k__BackingField; // w9

  if ( !x || (targetSquare = this->fields.targetSquare) == 0 )
    sub_1C32E7C(this);
  squareIndex_k__BackingField = targetSquare->fields._squareIndex_k__BackingField;
  return (x->fields.actionIndex == squareIndex_k__BackingField || x->fields.baseIndex == squareIndex_k__BackingField)
      && WarBoardAIRoute_RouteData__HasFlag(x, 0x8000000, 0);
}