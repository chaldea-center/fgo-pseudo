// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int____o *AllRouteSearch__CoreLogic(
        int32_t now,
        int32_t end,
        System_Collections_Generic_Dictionary_int__int____o *squareDict,
        System_Collections_Generic_List_int__o *route,
        int32_t searchLimitRange,
        const MethodInfo *method)
{
  int32_t v10; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass *v20; // x1
  Il2CppClass **v21; // x0
  __int64 v22; // x8
  __int64 v23; // x24
  System_Collections_Generic_Dictionary_int__int____o *v24; // x20
  unsigned __int64 i; // x27
  int32_t v26; // w25
  const MethodInfo *v27; // x5
  System_Collections_Generic_List_int__o *v28; // x26
  const MethodInfo *v29; // x5

  v10 = now;
  if ( (byte_4C353CE & 1) == 0 )
  {
    sub_1C32C20(&AStarSearch_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int____AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor___78010240);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    *(_QWORD *)&now = sub_1C32C20(&System_Collections_Generic_List_int____TypeInfo);
    byte_4C353CE = 1;
  }
  if ( !route )
  {
    route = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      route,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !route )
      goto LABEL_35;
  }
  items = route->fields._items;
  v12 = Method_System_Collections_Generic_List_int__Add__;
  ++route->fields._version;
  if ( !items )
    goto LABEL_35;
  size = route->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      route,
      v10,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    route->fields._size = size + 1;
    items->m_Items[size] = v10;
  }
  if ( searchLimitRange != -1 && route->fields._size > searchLimitRange )
    return 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_int_____ctor__);
  if ( v10 == end )
  {
    *(_QWORD *)&now = System_Collections_Generic_List_int___ToArray(
                        route,
                        (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( v14 )
    {
      v17 = v14->fields._items;
      v18 = Method_System_Collections_Generic_List_int____Add__;
      ++v14->fields._version;
      if ( v17 )
      {
        v19 = v14->fields._size;
        v20 = *(Il2CppClass **)&now;
        if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            *(Il2CppObject **)&now,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &v17->obj.klass + v19;
          v14->fields._size = v19 + 1;
          v21[4] = v20;
          sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
        }
        return (System_Collections_Generic_List_int____o *)v14;
      }
    }
LABEL_35:
    sub_1C32E7C(*(_QWORD *)&now);
  }
  if ( !squareDict )
    goto LABEL_35;
  *(_QWORD *)&now = System_Collections_Generic_Dictionary_int__object___get_Item(
                      (System_Collections_Generic_Dictionary_int__object__o *)squareDict,
                      v10,
                      (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
  if ( !*(_QWORD *)&now )
    goto LABEL_35;
  v22 = *(_QWORD *)(*(_QWORD *)&now + 24LL);
  v23 = *(_QWORD *)&now;
  if ( (int)v22 >= 1 )
  {
    v24 = squareDict;
    for ( i = 0; (__int64)i < (int)v22; ++i )
    {
      if ( i >= (unsigned int)v22 )
        sub_1C32E84(*(_QWORD *)&now);
      v26 = *(_DWORD *)(v23 + 32 + 4 * i);
      *(_QWORD *)&now = System_Collections_Generic_List_int___Contains(
                          route,
                          v26,
                          (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (now & 1) == 0 )
      {
        if ( !AStarSearch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
        *(_QWORD *)&now = AStarSearch__RouteSearch(0, v26, end, 0, 0, v27);
        if ( !*(_QWORD *)&now )
          goto LABEL_35;
        if ( searchLimitRange == -1 || searchLimitRange - route->fields._size >= *(_DWORD *)(*(_QWORD *)&now + 24LL) )
        {
          v28 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor_58175596(
            v28,
            (System_Collections_Generic_IEnumerable_T__o *)route,
            (const MethodInfo_377B06C *)Method_System_Collections_Generic_List_int___ctor___78010240);
          *(_QWORD *)&now = AllRouteSearch__CoreLogic(v26, end, v24, v28, searchLimitRange, v29);
          if ( *(_QWORD *)&now )
          {
            if ( !v14 )
              goto LABEL_35;
            System_Collections_Generic_List_object___AddRange(
              v14,
              *(System_Collections_Generic_IEnumerable_T__o **)&now,
              (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_int____AddRange__);
          }
        }
      }
      LODWORD(v22) = *(_DWORD *)(v23 + 24);
    }
  }
  return (System_Collections_Generic_List_int____o *)v14;
}


System_Collections_Generic_Dictionary_int__int____o *AllRouteSearch__GetSquareDict(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x19
  AllRouteSearch___c_c *v4; // x0
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v6; // x21
  struct AllRouteSearch___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Func_object__object__o *_9__1_1; // x21
  Il2CppObject *v11; // x22
  struct AllRouteSearch___c_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C353CD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToDictionary_WarBoardSquareData__int__int_____);
    sub_1C32C20(&System_Func_WarBoardSquareData__int__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardSquareData__int____TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_AllRouteSearch___c__GetSquareDict_b__1_0__);
    sub_1C32C20(&Method_AllRouteSearch___c__GetSquareDict_b__1_1__);
    sub_1C32C20(&AllRouteSearch___c_TypeInfo);
    byte_4C353CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = Instance[27].monitor) == 0 )
    sub_1C32E7C(Instance);
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)monitor + 7);
  v4 = AllRouteSearch___c_TypeInfo;
  if ( !AllRouteSearch___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AllRouteSearch___c_TypeInfo);
    v4 = AllRouteSearch___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__int__o *)v4->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = AllRouteSearch___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__1_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_WarBoardSquareData__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_0, v6, Method_AllRouteSearch___c__GetSquareDict_b__1_0__, 0);
    static_fields = AllRouteSearch___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarBoardSquareData__int__o *)_9__1_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v8, v9);
    v4 = AllRouteSearch___c_TypeInfo;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = AllRouteSearch___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__object__o *)v4->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = AllRouteSearch___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v4->static_fields->__9;
    _9__1_1 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_WarBoardSquareData__int____TypeInfo);
    System_Func_object__object____ctor(_9__1_1, v11, Method_AllRouteSearch___c__GetSquareDict_b__1_1__, 0);
    v12 = AllRouteSearch___c_TypeInfo->static_fields;
    v12->__9__1_1 = (struct System_Func_WarBoardSquareData__int____o *)_9__1_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v12->__9__1_1, (int32_t)_9__1_1, v13, v14);
  }
  return (System_Collections_Generic_Dictionary_int__int____o *)System_Linq_Enumerable__ToDictionary_object__int__object_(
                                                                  v3,
                                                                  (System_Func_TSource__TKey__o *)_9__1_0,
                                                                  (System_Func_TSource__TElement__o *)_9__1_1,
                                                                  (const MethodInfo_311D3A4 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardSquareData__int__int_____);
}


System_Int32_array_array *AllRouteSearch__RouteSearch(
        int32_t start,
        int32_t end,
        System_Collections_Generic_Dictionary_int__int____o *squareDict,
        int32_t searchLimitRange,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  System_Collections_Generic_List_int____o *v10; // x0

  if ( (byte_4C353CC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int____ToArray__);
    byte_4C353CC = 1;
  }
  v10 = AllRouteSearch__CoreLogic(start, end, squareDict, 0, searchLimitRange, v5);
  if ( !v10 )
    sub_1C32E7C(0);
  return (System_Int32_array_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)v10,
                                       (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_int____ToArray__);
}


void AllRouteSearch___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C353CF & 1) == 0 )
  {
    sub_1C32C20(&AllRouteSearch___c_TypeInfo);
    byte_4C353CF = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(AllRouteSearch___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AllRouteSearch___c_TypeInfo->static_fields->__9 = (struct AllRouteSearch___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)AllRouteSearch___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void AllRouteSearch___c___ctor(AllRouteSearch___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t AllRouteSearch___c___GetSquareDict_b__1_0(
        AllRouteSearch___c_o *this,
        WarBoardSquareData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields._squareIndex_k__BackingField;
}


System_Int32_array *AllRouteSearch___c___GetSquareDict_b__1_1(
        AllRouteSearch___c_o *this,
        WarBoardSquareData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.linkedSquares;
}