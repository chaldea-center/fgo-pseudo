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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x23
  __int64 v21; // x2
  int32_t v22; // w22
  WarBoardItemData_o *Item; // x0
  float v24; // s8
  WarBoardItemData_o *v25; // x22
  System_Func_object__bool__o *v26; // x25
  __int64 v27; // x2
  int32_t squareIndex_k__BackingField; // w20
  int32_t v29; // w21
  System_Int32_array *v30; // x0
  il2cpp_array_size_t max_length; // x20
  struct WarBoardRatingBaseEntity_o *ratingBase; // x8
  int v33; // w8

  if ( (byte_596E086 & 1) == 0 )
  {
    sub_2213A60(&AStarSearch_TypeInfo);
    sub_2213A60(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_2213A60(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_2213A60(&Method_ShortestDistanceFromItem___c__DisplayClass0_0__GetRatingBase_b__0__);
    sub_2213A60(&ShortestDistanceFromItem___c__DisplayClass0_0_TypeInfo);
    sub_2213A60(&WarBoardAIManager_TypeInfo);
    byte_596E086 = 1;
  }
  v11 = sub_2213CCC(ShortestDistanceFromItem___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_20;
  *(_QWORD *)(v11 + 16) = targetSquare;
  v20 = v11 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)targetSquare, v14, v15, v16, v17, v18, v19);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_20;
  v22 = *(_DWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v13, v21);
  Item = WarBoardAIManager__GetItem(v22, 0);
  v24 = 0.0;
  if ( Item )
  {
    v25 = Item;
    if ( !WarBoardItemData__get_Acquired(Item, 0) )
    {
      v26 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v26,
        (Il2CppObject *)v11,
        Method_ShortestDistanceFromItem___c__DisplayClass0_0__GetRatingBase_b__0__,
        0);
      evalValue = BasicHelper__Any_object_(
                    (System_Collections_Generic_List_T__o *)routeDataList,
                    (System_Func_T__bool__o *)v26,
                    (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
      if ( (evalValue & 1) == 0 )
      {
        if ( !calcSquare || !*(_QWORD *)v20 )
          goto LABEL_20;
        squareIndex_k__BackingField = calcSquare->fields._squareIndex_k__BackingField;
        v29 = *(_DWORD *)(*(_QWORD *)v20 + 16LL);
        if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v13, v27);
        v30 = AStarSearch__RouteSearch(0, squareIndex_k__BackingField, v29, 0, 0, 0);
        if ( v30 )
        {
          max_length = v30->max_length;
          evalValue = WarBoardItemData__get_evalValue(v25, 0);
          ratingBase = this->fields.ratingBase;
          if ( ratingBase )
          {
            v33 = ratingBase->fields.adjustmentValueA1 + 1;
            if ( (float)((float)((float)v33 - (float)((int)max_length - 1)) * (float)(int)evalValue) >= 0.0 )
              return (float)((float)v33 - (float)((int)max_length - 1)) * (float)(int)evalValue;
            else
              return 0.0;
          }
LABEL_20:
          sub_2213CDC(evalValue, v13);
        }
      }
    }
  }
  return v24;
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
  struct WarBoardSquareData_o *targetSquare; // x8
  int32_t squareIndex_k__BackingField; // w8

  if ( !x || (targetSquare = this->fields.targetSquare) == 0 )
    sub_2213CDC(this, x);
  squareIndex_k__BackingField = targetSquare->fields._squareIndex_k__BackingField;
  return (x->fields.actionIndex == squareIndex_k__BackingField || x->fields.baseIndex == squareIndex_k__BackingField)
      && WarBoardAIRoute_RouteData__HasFlag(x, 0x8000000, 0);
}