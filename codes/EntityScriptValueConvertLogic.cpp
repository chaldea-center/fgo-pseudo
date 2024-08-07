System_Collections_Generic_List_int____o *__fastcall EntityScriptValueConvertLogic__DoubleObjectListToIntArrayList(
        System_Collections_Generic_List_object__o *rawValues,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__c *v14; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_int__o *v16; // x0
  __int64 v17; // x1
  System_Int32_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Int32_array *v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FE6D2 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_int____Add__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_object__GetEnumerator__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_int_____ctor__, v8);
    sub_1B64A00(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_1B64A00(&System_Collections_Generic_List_int____TypeInfo, v10);
    byte_49FE6D2 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_int_____ctor__);
  if ( !rawValues )
LABEL_20:
    sub_1B64C5C(v12, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    rawValues,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( v28.fields._current )
    {
      v14 = System_Collections_Generic_List_object__TypeInfo;
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v28.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_List_object__c *)v28.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_1B64F1C(v28.fields._current);
        goto LABEL_20;
      }
    }
    v16 = EntityScriptValueConvertLogic__ObjectListToIntList(
            (System_Collections_Generic_List_object__o *)v28.fields._current,
            (const MethodInfo *)v14);
    if ( !v16 )
      sub_1B64C5C(0LL, v17);
    v18 = System_Collections_Generic_List_int___ToArray(
            v16,
            (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
    v21 = v18;
    if ( !v11 )
      sub_1B64C5C(v18, v18);
    items = v11->fields._items;
    v23 = Method_System_Collections_Generic_List_int____Add__;
    ++v11->fields._version;
    if ( !items )
      sub_1B64C5C(v18, v18);
    size = v11->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        &v18->obj,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + size;
      v11->fields._size = size + 1;
      v25[4] = (Il2CppClass *)v21;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v21, v19, v20);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_int____o *)v11;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array_array *__fastcall EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(
        System_Collections_Generic_List_object__o *rawValue,
        uint16_t separator,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x19
  const MethodInfo *v14; // x2
  System_String_array_array *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  System_String_array_array *v18; // x20
  unsigned __int64 v19; // x25
  EntityScriptValueConvertLogic___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x22
  System_Func_object__int__o *_9__3_0; // x23
  Il2CppObject *v23; // x24
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Int32_array *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Int32_array *v31; // x1
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_49FE6D3 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_string__int___, separator);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1B64A00(&System_Func_string__int__TypeInfo, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_int____Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_int____ToArray__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_int_____ctor__, v9);
    sub_1B64A00(&System_Collections_Generic_List_int____TypeInfo, v10);
    sub_1B64A00(&Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__, v11);
    sub_1B64A00(&EntityScriptValueConvertLogic___c_TypeInfo, v12);
    byte_49FE6D3 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_int_____ctor__);
  v15 = EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(rawValue, separator, v14);
  if ( !v15 )
    goto LABEL_25;
  v17 = *(_QWORD *)&v15->max_length;
  v18 = v15;
  if ( (int)v17 >= 1 )
  {
    v19 = 0LL;
    do
    {
      if ( v19 >= (unsigned int)v17 )
        sub_1B64C64(v15, v16);
      v20 = EntityScriptValueConvertLogic___c_TypeInfo;
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)v18->m_Items[v19];
      if ( !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo);
        v20 = EntityScriptValueConvertLogic___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__int__o *)v20->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = EntityScriptValueConvertLogic___c_TypeInfo;
        }
        v23 = (Il2CppObject *)v20->static_fields->__9;
        _9__3_0 = (System_Func_object__int__o *)sub_1B64C4C(System_Func_string__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__3_0,
          v23,
          Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__,
          0LL);
        static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v25, v26);
      }
      v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                   v21,
                                                                   (System_Func_TSource__TResult__o *)_9__3_0,
                                                                   (const MethodInfo_2E6B3C4 *)Method_System_Linq_Enumerable_Select_string__int___);
      v28 = System_Linq_Enumerable__ToArray_int_(
              v27,
              (const MethodInfo_2E73B20 *)Method_System_Linq_Enumerable_ToArray_int___);
      v31 = v28;
      if ( !v13 )
        sub_1B64C5C(v28, v28);
      items = v13->fields._items;
      v33 = Method_System_Collections_Generic_List_int____Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1B64C5C(v28, v28);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          &v28->obj,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v31;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v31, v29, v30);
      }
      LODWORD(v17) = v18->max_length;
      ++v19;
    }
    while ( (__int64)v19 < (int)v17 );
  }
  if ( !v13 )
LABEL_25:
    sub_1B64C5C(v15, v16);
  return (System_Int32_array_array *)System_Collections_Generic_List_object___ToArray(
                                       v13,
                                       (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_int____ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_array_array *__fastcall EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        uint16_t separator,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o *v16; // x0
  __int64 v17; // x1
  System_String_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_array *v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FE6D4 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, separator);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_string____Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_object__GetEnumerator__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_string____ToArray__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_string_____ctor__, v10);
    sub_1B64A00(&System_Collections_Generic_List_string____TypeInfo, v11);
    byte_49FE6D4 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_string____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_string_____ctor__);
  if ( !rawValue )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    rawValue,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( !v28.fields._current )
      sub_1B64C5C(0LL, v15);
    v16 = (System_String_o *)((__int64 (*)(void))v28.fields._current->klass->vtable[3].method)();
    if ( !v16 )
      sub_1B64C5C(0LL, v17);
    v18 = System_String__Split(v16, separator, 0, 0LL);
    v21 = v18;
    if ( !v12 )
      sub_1B64C5C(v18, v18);
    items = v12->fields._items;
    v23 = Method_System_Collections_Generic_List_string____Add__;
    ++v12->fields._version;
    if ( !items )
      sub_1B64C5C(v18, v18);
    size = v12->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        &v18->obj,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v25[4] = (Il2CppClass *)v21;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v21, v19, v20);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( !v12 )
LABEL_19:
    sub_1B64C5C(v13, v14);
  return (System_String_array_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_string____ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall EntityScriptValueConvertLogic__ObjectListToIntList(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  unsigned int *v17; // x0
  __int64 v18; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  void *v23; // x0
  void *v24; // x20
  int v25; // w1
  int v26; // w21
  __int64 v27; // x21
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FE6D0 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v4);
    sub_1B64A00(&long_TypeInfo, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_object__GetEnumerator__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_49FE6D0 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v10 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !rawValue )
    sub_1B64C5C(v11, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    rawValue,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v13 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v29,
        (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      return v10;
    }
    if ( !v10 )
      sub_1B64C5C(v13, v14);
    if ( !v29.fields._current )
      sub_1B64C5C(0LL, v14);
    if ( v29.fields._current->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v17 = (unsigned int *)j_il2cpp_object_unbox_0(v29.fields._current, long_TypeInfo, v15, v16);
    v18 = *v17;
    items = v10->fields._items;
    v20 = Method_System_Collections_Generic_List_int__Add__;
    ++v10->fields._version;
    if ( !items )
      sub_1B64C5C(v17, v18);
    size = v10->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v10,
        v18,
        *(const MethodInfo_34927D0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v10->fields._size = size + 1;
      items->m_Items[size + 1] = v18;
    }
  }
  sub_1B64F1C(v29.fields._current);
  v24 = v23;
  v26 = v25;
  __cxa_end_catch();
  if ( v26 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C4F490();
  }
  v27 = *(_QWORD *)__cxa_begin_catch(v24);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v27 )
    sub_1B64C54(v27);
  return v10;
}


System_String_array *__fastcall EntityScriptValueConvertLogic__ObjectListToStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  EntityScriptValueConvertLogic___c_c *v7; // x0
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v9; // x21
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_49FE6D1 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_object__string___, method);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_string___, v3);
    sub_1B64A00(&System_Func_object__string__TypeInfo, v4);
    sub_1B64A00(&Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__, v5);
    sub_1B64A00(&EntityScriptValueConvertLogic___c_TypeInfo, v6);
    byte_49FE6D1 = 1;
  }
  v7 = EntityScriptValueConvertLogic___c_TypeInfo;
  if ( !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo);
    v7 = EntityScriptValueConvertLogic___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v7->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EntityScriptValueConvertLogic___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1B64C4C(System_Func_object__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__1_0,
      v9,
      Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__,
      0LL);
    static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_object__string__o *)_9__1_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)rawValue,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2E6BCA0 *)Method_System_Linq_Enumerable_Select_object__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v13,
                                  (const MethodInfo_2E73CB8 *)Method_System_Linq_Enumerable_ToArray_string___);
}


void __fastcall EntityScriptValueConvertLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FE6D5 & 1) == 0 )
  {
    sub_1B64A00(&EntityScriptValueConvertLogic___c_TypeInfo, v1);
    byte_49FE6D5 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(EntityScriptValueConvertLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EntityScriptValueConvertLogic___c_TypeInfo->static_fields->__9 = (struct EntityScriptValueConvertLogic___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)EntityScriptValueConvertLogic___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall EntityScriptValueConvertLogic___c___ctor(
        EntityScriptValueConvertLogic___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EntityScriptValueConvertLogic___c___ObjectListTo2DimensionalIntArray_b__3_0(
        EntityScriptValueConvertLogic___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_Int32__Parse(x, 0LL);
}


System_String_o *__fastcall EntityScriptValueConvertLogic___c___ObjectListToStringArray_b__1_0(
        EntityScriptValueConvertLogic___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64C5C(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}