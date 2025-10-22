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
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x23
  int32_t v17; // w22
  WarBoardItemData_o *Item; // x0
  WarBoardItemData_o *v19; // x22
  System_Func_object__bool__o *v20; // x25
  int32_t squareIndex_k__BackingField; // w20
  int32_t v22; // w21
  System_Int32_array *v23; // x0
  il2cpp_array_size_t max_length; // x20
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8

  if ( (byte_4C546B9 & 1) == 0 )
  {
    sub_1C3E564(&AStarSearch_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1C3E564(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C3E564(&Method_ShortestDistanceFromItem___c__DisplayClass0_0__GetRatingBase_b__0__);
    sub_1C3E564(&ShortestDistanceFromItem___c__DisplayClass0_0_TypeInfo);
    sub_1C3E564(&WarBoardAIManager_TypeInfo);
    byte_4C546B9 = 1;
  }
  v11 = sub_1C3E7B0(ShortestDistanceFromItem___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_18;
  *(_QWORD *)(v11 + 16) = targetSquare;
  v16 = v11 + 16;
  sub_1C3E508((CGThumbnailListItem_o *)(v11 + 16), (int32_t)targetSquare, v14, v15);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_18;
  v17 = *(_DWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  Item = WarBoardAIManager__GetItem(v17, 0);
  if ( Item )
  {
    v19 = Item;
    if ( !WarBoardItemData__get_Acquired(Item, 0) )
    {
      v20 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v20,
        (Il2CppObject *)v11,
        Method_ShortestDistanceFromItem___c__DisplayClass0_0__GetRatingBase_b__0__,
        0);
      evalValue = BasicHelper__Any_object_(
                    (System_Collections_Generic_List_T__o *)routeDataList,
                    (System_Func_T__bool__o *)v20,
                    (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
      if ( (evalValue & 1) == 0 )
      {
        if ( !calcSquare || !*(_QWORD *)v16 )
          goto LABEL_18;
        squareIndex_k__BackingField = calcSquare->fields._squareIndex_k__BackingField;
        v22 = *(_DWORD *)(*(_QWORD *)v16 + 16LL);
        if ( !AStarSearch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
        v23 = AStarSearch__RouteSearch(0, squareIndex_k__BackingField, v22, 0, 0, 0);
        if ( v23 )
        {
          max_length = v23->max_length;
          evalValue = WarBoardItemData__get_evalValue(v19, 0);
          ratingBase = this->fields.ratingBase;
          if ( ratingBase )
            return fmaxf(
                     (float)((float)(ratingBase->fields.adjustmentValueA1 + 1) - (float)((int)max_length - 1))
                   * (float)(int)evalValue,
                     0.0);
LABEL_18:
          sub_1C3E7C0(evalValue, v13);
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
    sub_1C3E7C0(this, x);
  squareIndex_k__BackingField = targetSquare->fields._squareIndex_k__BackingField;
  return (x->fields.actionIndex == squareIndex_k__BackingField || x->fields.baseIndex == squareIndex_k__BackingField)
      && WarBoardAIRoute_RouteData__HasFlag(x, 0x8000000, 0);
}