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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass *v24; // x1
  Il2CppClass **v25; // x0
  __int64 v26; // x8
  __int64 v27; // x24
  System_Collections_Generic_Dictionary_int__int____o *v28; // x20
  unsigned __int64 i; // x27
  int32_t v30; // w25
  const MethodInfo *v31; // x5
  System_Collections_Generic_List_int__o *v32; // x26
  const MethodInfo *v33; // x5

  v10 = now;
  if ( (byte_4CEBFD0 & 1) == 0 )
  {
    sub_1C7BAE8(&AStarSearch_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor___78742272);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    *(_QWORD *)&now = sub_1C7BAE8(&System_Collections_Generic_List_int____TypeInfo);
    byte_4CEBFD0 = 1;
  }
  if ( !route )
  {
    route = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      route,
      (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
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
      *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    route->fields._size = size + 1;
    items->m_Items[size] = v10;
  }
  if ( searchLimitRange != -1 && route->fields._size > searchLimitRange )
    return 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_int_____ctor__);
  if ( v10 == end )
  {
    *(_QWORD *)&now = System_Collections_Generic_List_int___ToArray(
                        route,
                        (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( v14 )
    {
      v21 = v14->fields._items;
      v22 = Method_System_Collections_Generic_List_int____Add__;
      ++v14->fields._version;
      if ( v21 )
      {
        v23 = v14->fields._size;
        v24 = *(Il2CppClass **)&now;
        if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            *(Il2CppObject **)&now,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &v21->obj.klass + v23;
          v14->fields._size = v23 + 1;
          v25[4] = v24;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v24, v15, v16, v17, v18, v19, v20);
        }
        return (System_Collections_Generic_List_int____o *)v14;
      }
    }
LABEL_35:
    sub_1C7BD40(*(_QWORD *)&now, *(_QWORD *)&end);
  }
  if ( !squareDict )
    goto LABEL_35;
  *(_QWORD *)&now = System_Collections_Generic_Dictionary_int__object___get_Item(
                      (System_Collections_Generic_Dictionary_int__object__o *)squareDict,
                      v10,
                      (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
  if ( !*(_QWORD *)&now )
    goto LABEL_35;
  v26 = *(_QWORD *)(*(_QWORD *)&now + 24LL);
  v27 = *(_QWORD *)&now;
  if ( (int)v26 >= 1 )
  {
    v28 = squareDict;
    for ( i = 0; (__int64)i < (int)v26; ++i )
    {
      if ( i >= (unsigned int)v26 )
        sub_1C7BD48(*(_QWORD *)&now);
      v30 = *(_DWORD *)(v27 + 32 + 4 * i);
      *(_QWORD *)&now = System_Collections_Generic_List_int___Contains(
                          route,
                          v30,
                          (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (now & 1) == 0 )
      {
        if ( !AStarSearch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
        *(_QWORD *)&now = AStarSearch__RouteSearch(0, v30, end, 0, 0, v31);
        if ( !*(_QWORD *)&now )
          goto LABEL_35;
        if ( searchLimitRange == -1 || searchLimitRange - route->fields._size >= *(_DWORD *)(*(_QWORD *)&now + 24LL) )
        {
          v32 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor_58857132(
            v32,
            (System_Collections_Generic_IEnumerable_T__o *)route,
            (const MethodInfo_38216AC *)Method_System_Collections_Generic_List_int___ctor___78742272);
          *(_QWORD *)&now = AllRouteSearch__CoreLogic(v30, end, v28, v32, searchLimitRange, v33);
          if ( *(_QWORD *)&now )
          {
            if ( !v14 )
              goto LABEL_35;
            System_Collections_Generic_List_object___AddRange(
              v14,
              *(System_Collections_Generic_IEnumerable_T__o **)&now,
              (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_int____AddRange__);
          }
        }
      }
      LODWORD(v26) = *(_DWORD *)(v27 + 24);
    }
  }
  return (System_Collections_Generic_List_int____o *)v14;
}


System_Collections_Generic_Dictionary_int__int____o *AllRouteSearch__GetSquareDict(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x19
  AllRouteSearch___c_c *v5; // x0
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v7; // x21
  struct AllRouteSearch___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Func_object__object__o *_9__1_1; // x21
  Il2CppObject *v16; // x22
  struct AllRouteSearch___c_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CEBFCF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToDictionary_WarBoardSquareData__int__int_____);
    sub_1C7BAE8(&System_Func_WarBoardSquareData__int__TypeInfo);
    sub_1C7BAE8(&System_Func_WarBoardSquareData__int____TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C7BAE8(&Method_AllRouteSearch___c__GetSquareDict_b__1_0__);
    sub_1C7BAE8(&Method_AllRouteSearch___c__GetSquareDict_b__1_1__);
    sub_1C7BAE8(&AllRouteSearch___c_TypeInfo);
    byte_4CEBFCF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = Instance[27].monitor) == 0 )
    sub_1C7BD40(Instance, v2);
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)monitor + 7);
  v5 = AllRouteSearch___c_TypeInfo;
  if ( !AllRouteSearch___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AllRouteSearch___c_TypeInfo);
    v5 = AllRouteSearch___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__int__o *)v5->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = AllRouteSearch___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__1_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_WarBoardSquareData__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_0, v7, Method_AllRouteSearch___c__GetSquareDict_b__1_0__, 0);
    static_fields = AllRouteSearch___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarBoardSquareData__int__o *)_9__1_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v9, v10, v11, v12, v13, v14);
    v5 = AllRouteSearch___c_TypeInfo;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = AllRouteSearch___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__object__o *)v5->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = AllRouteSearch___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v5->static_fields->__9;
    _9__1_1 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_WarBoardSquareData__int____TypeInfo);
    System_Func_object__object____ctor(_9__1_1, v16, Method_AllRouteSearch___c__GetSquareDict_b__1_1__, 0);
    v17 = AllRouteSearch___c_TypeInfo->static_fields;
    v17->__9__1_1 = (struct System_Func_WarBoardSquareData__int____o *)_9__1_1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v17->__9__1_1, (int32_t)_9__1_1, v18, v19, v20, v21, v22, v23);
  }
  return (System_Collections_Generic_Dictionary_int__int____o *)System_Linq_Enumerable__ToDictionary_object__int__object_(
                                                                  v4,
                                                                  (System_Func_TSource__TKey__o *)_9__1_0,
                                                                  (System_Func_TSource__TElement__o *)_9__1_1,
                                                                  (const MethodInfo_31AFAFC *)Method_System_Linq_Enumerable_ToDictionary_WarBoardSquareData__int__int_____);
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
  __int64 v11; // x1

  if ( (byte_4CEBFCE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____ToArray__);
    byte_4CEBFCE = 1;
  }
  v10 = AllRouteSearch__CoreLogic(start, end, squareDict, 0, searchLimitRange, v5);
  if ( !v10 )
    sub_1C7BD40(0, v11);
  return (System_Int32_array_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)v10,
                                       (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_int____ToArray__);
}


void AllRouteSearch___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEBFD1 & 1) == 0 )
  {
    sub_1C7BAE8(&AllRouteSearch___c_TypeInfo);
    byte_4CEBFD1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(AllRouteSearch___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AllRouteSearch___c_TypeInfo->static_fields->__9 = (struct AllRouteSearch___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)AllRouteSearch___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C7BD40(this, 0);
  return x->fields._squareIndex_k__BackingField;
}


System_Int32_array *AllRouteSearch___c___GetSquareDict_b__1_1(
        AllRouteSearch___c_o *this,
        WarBoardSquareData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.linkedSquares;
}