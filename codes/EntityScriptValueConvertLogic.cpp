System_Collections_Generic_List_int____o *EntityScriptValueConvertLogic__DoubleObjectListToIntArrayList(
        System_Collections_Generic_List_object__o *rawValues,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_object__c *v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_int__o *v10; // x0
  __int64 v11; // x1
  System_Int32_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Int32_array *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  struct System_Collections_Generic_List_T__o *list; // x20
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-98h] BYREF
  int v27; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_59381A7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int____Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_int____TypeInfo);
    byte_59381A7 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v27 = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_int_____ctor__);
  if ( !rawValues )
LABEL_20:
    sub_21FFECC(v4, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    rawValues,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v28 = v26;
  v26.fields._list = 0;
  *(_QWORD *)&v26.fields._index = &v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( v28.fields._current )
    {
      v6 = System_Collections_Generic_List_object__TypeInfo;
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( v28.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_List_object__c *)v28.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_220024C(v28.fields._current, System_Collections_Generic_List_object__TypeInfo, v7, v8);
        goto LABEL_20;
      }
    }
    v10 = EntityScriptValueConvertLogic__ObjectListToIntList(
            (System_Collections_Generic_List_object__o *)v28.fields._current,
            (const MethodInfo *)v6);
    if ( !v10 )
      sub_21FFECC(0, v11);
    v12 = System_Collections_Generic_List_int___ToArray(
            v10,
            (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    v19 = v12;
    if ( !v3
      || (items = v3->fields._items,
          v21 = Method_System_Collections_Generic_List_int____Add__,
          ++v3->fields._version,
          !items) )
    {
      sub_21FFECC(v12, v12);
    }
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        &v12->obj,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v19;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v19, v13, v14, v15, v16, v17, v18);
    }
  }
  list = v26.fields._list;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    *(System_Collections_Generic_List_Enumerator_object__o **)&v26.fields._index,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( list )
    sub_21FFEC4(list);
  return (System_Collections_Generic_List_int____o *)v3;
}


System_Int32_array_array *EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(
        System_Collections_Generic_List_object__o *rawValue,
        uint16_t separator,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  const MethodInfo *v6; // x2
  System_String_array_array *v7; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // x8
  System_String_array_array *v10; // x20
  unsigned __int64 v11; // x25
  EntityScriptValueConvertLogic___c_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x22
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__3_0; // x23
  Il2CppObject *v16; // x24
  struct EntityScriptValueConvertLogic___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Int32_array *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Int32_array *v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_59381A8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&System_Func_string__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int____Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int____ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int____TypeInfo);
    sub_21FFC50(&Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__);
    sub_21FFC50(&EntityScriptValueConvertLogic___c_TypeInfo);
    byte_59381A8 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_int_____ctor__);
  v7 = EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(rawValue, separator, v6);
  if ( !v7 )
    goto LABEL_24;
  max_length = v7->max_length;
  v10 = v7;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= (unsigned int)max_length )
        sub_21FFED4(v7);
      v12 = EntityScriptValueConvertLogic___c_TypeInfo;
      v13 = (System_Collections_Generic_IEnumerable_TSource__o *)v10->m_Items[v11];
      if ( !*(&EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo, v8);
        v12 = EntityScriptValueConvertLogic___c_TypeInfo;
      }
      static_fields = v12->static_fields;
      _9__3_0 = (System_Func_object__int__o *)static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !*(&v12->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v12, v8);
          static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
        }
        v16 = (Il2CppObject *)static_fields->__9;
        _9__3_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_string__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__3_0,
          v16,
          Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__,
          0);
        v17 = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
        v17->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->__9__3_0, (int32_t)_9__3_0, v18, v19, v20, v21, v22, v23);
      }
      v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                   v13,
                                                                   (System_Func_TSource__TResult__o *)_9__3_0,
                                                                   (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_string__int___);
      v25 = System_Linq_Enumerable__ToArray_int_(
              v24,
              (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
      v32 = v25;
      if ( !v5
        || (items = v5->fields._items,
            v34 = Method_System_Collections_Generic_List_int____Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_21FFECC(v25, v25);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          &v25->obj,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v32, v26, v27, v28, v29, v30, v31);
      }
      LODWORD(max_length) = v10->max_length;
      ++v11;
    }
    while ( (__int64)v11 < (int)max_length );
  }
  if ( !v5 )
LABEL_24:
    sub_21FFECC(v7, v8);
  return (System_Int32_array_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_445164C *)Method_System_Collections_Generic_List_int____ToArray__);
}


System_String_array_array *EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        uint16_t separator,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_String_array *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_array *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_59381A9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string____Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string____ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string_____ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string____TypeInfo);
    byte_59381A9 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string_____ctor__);
  if ( !rawValue )
    goto LABEL_18;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    rawValue,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( !v25.fields._current )
      sub_21FFECC(0, v8);
    v9 = (System_String_o *)((__int64 (*)(void))v25.fields._current->klass->vtable[3].methodPtr)();
    if ( !v9 )
      sub_21FFECC(0, v10);
    v11 = System_String__Split(v9, separator, 0, 0);
    v18 = v11;
    if ( !v5
      || (items = v5->fields._items,
          v20 = Method_System_Collections_Generic_List_string____Add__,
          ++v5->fields._version,
          !items) )
    {
      sub_21FFECC(v11, v11);
    }
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        &v11->obj,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v22[4] = (Il2CppClass *)v18;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( !v5 )
LABEL_18:
    sub_21FFECC(v6, v7);
  return (System_String_array_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string____ToArray__);
}


System_Collections_Generic_List_float__o *EntityScriptValueConvertLogic__ObjectListToFloatList(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  System_Collections_Generic_List_float__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct System_Single_array *items; // x8
  float v11; // s0
  _QWORD *v12; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+0h] [xbp-70h] BYREF
  float result; // [xsp+1Ch] [xbp-54h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_59381AA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_float__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_float___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_float__TypeInfo);
    byte_59381AA = 1;
  }
  memset(&v17, 0, sizeof(v17));
  result = 0.0;
  v3 = (System_Collections_Generic_List_float__o *)sub_21FFEBC(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v3,
    (const MethodInfo_447A128 *)Method_System_Collections_Generic_List_float___ctor__);
  if ( !rawValue )
    sub_21FFECC(v4, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    rawValue,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v17 = v15;
  v15.fields._list = 0;
  *(_QWORD *)&v15.fields._index = &v17;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( !v17.fields._current )
      sub_21FFECC(0, v6);
    v7 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v17.fields._current->klass->vtable[3].methodPtr)(
                              v17.fields._current,
                              v17.fields._current->klass->vtable[3].method);
    v8 = System_Single__TryParse(v7, &result, 0);
    if ( v8 )
    {
      if ( !v3
        || (items = v3->fields._items,
            v11 = result,
            v12 = Method_System_Collections_Generic_List_float__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(v8, v9);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_float___AddWithResize(
          v3,
          v11,
          *(const MethodInfo_447A9BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = v11;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return v3;
}


System_Collections_Generic_List_int__o *EntityScriptValueConvertLogic__ObjectListToIntList(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x0
  __int64 klass_low; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  struct System_Collections_Generic_List_T__o *list; // x20
  _QWORD *exception; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-98h] BYREF
  int v17; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_59381A5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_59381A5 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v17 = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !rawValue )
    sub_21FFECC(v4, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    rawValue,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v18 = v16;
  v16.fields._list = 0;
  *(_QWORD *)&v16.fields._index = &v18;
  while ( 1 )
  {
    current = (Il2CppObject *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                &v18,
                                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( ((unsigned __int8)current & 1) == 0 )
      break;
    if ( !v3 )
      goto LABEL_13;
    current = v18.fields._current;
    if ( !v18.fields._current )
      goto LABEL_13;
    if ( v18.fields._current->klass->_1.element_class != *(Il2CppClass **)(qword_594C090 + 64) )
    {
      sub_220024C(v18.fields._current, qword_594C090, v8, v9);
      exception = __cxa_allocate_exception(8u);
      *exception = System_Collections_Generic_List_int__TypeInfo;
      __cxa_throw(exception, (struct type_info *)`typeinfo for'Il2CppExceptionWrapper, 0);
    }
    current = (Il2CppObject *)j_il2cpp_object_unbox_0(v18.fields._current, qword_594C090, v8, v9);
    items = v3->fields._items;
    klass_low = LODWORD(current->klass);
    v11 = Method_System_Collections_Generic_List_int__Add__;
    ++v3->fields._version;
    if ( !items )
LABEL_13:
      sub_21FFECC(current, klass_low);
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v3,
        klass_low,
        *(const MethodInfo_4433138 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v3->fields._size = size + 1;
      items->m_Items[size] = klass_low;
    }
  }
  list = v16.fields._list;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    *(System_Collections_Generic_List_Enumerator_object__o **)&v16.fields._index,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( list )
    sub_21FFEC4(list);
  return v3;
}


System_String_array *EntityScriptValueConvertLogic__ObjectListToStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  EntityScriptValueConvertLogic___c_c *v3; // x0
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v6; // x21
  struct EntityScriptValueConvertLogic___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_59381A6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_object__string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_21FFC50(&System_Func_object__string__TypeInfo);
    sub_21FFC50(&Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__);
    sub_21FFC50(&EntityScriptValueConvertLogic___c_TypeInfo);
    byte_59381A6 = 1;
  }
  v3 = EntityScriptValueConvertLogic___c_TypeInfo;
  if ( !*(&EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo, method);
    v3 = EntityScriptValueConvertLogic___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__1_0 = (System_Func_object__object__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_object__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__1_0,
      v6,
      Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__,
      0);
    v7 = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
    v7->__9__1_0 = (struct System_Func_object__string__o *)_9__1_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v7->__9__1_0, (int32_t)_9__1_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)rawValue,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_object__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v14,
                                  (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
}


void EntityScriptValueConvertLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59381AB & 1) == 0 )
  {
    sub_21FFC50(&EntityScriptValueConvertLogic___c_TypeInfo);
    byte_59381AB = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EntityScriptValueConvertLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EntityScriptValueConvertLogic___c_TypeInfo->static_fields->__9 = (struct EntityScriptValueConvertLogic___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EntityScriptValueConvertLogic___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EntityScriptValueConvertLogic___c___ctor(EntityScriptValueConvertLogic___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EntityScriptValueConvertLogic___c___ObjectListTo2DimensionalIntArray_b__3_0(
        EntityScriptValueConvertLogic___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_Int32__Parse(x, 0);
}


System_String_o *EntityScriptValueConvertLogic___c___ObjectListToStringArray_b__1_0(
        EntityScriptValueConvertLogic___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method);
}