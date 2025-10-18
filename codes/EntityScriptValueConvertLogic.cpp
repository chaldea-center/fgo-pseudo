System_Collections_Generic_List_int____o *EntityScriptValueConvertLogic__DoubleObjectListToIntArrayList(
        System_Collections_Generic_List_object__o *rawValues,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x0
  System_Collections_Generic_List_object__c *v5; // x1
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_int__o *v7; // x0
  System_Int32_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Int32_array *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C42ADF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C37058(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_int____TypeInfo);
    byte_4C42ADF = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_int_____ctor__);
  if ( !rawValues )
LABEL_20:
    sub_1C372B4(v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    rawValues,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( v18.fields._current )
    {
      v5 = System_Collections_Generic_List_object__TypeInfo;
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( v18.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_List_object__c *)v18.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_1C37574(v18.fields._current);
        goto LABEL_20;
      }
    }
    v7 = EntityScriptValueConvertLogic__ObjectListToIntList(
           (System_Collections_Generic_List_object__o *)v18.fields._current,
           (const MethodInfo *)v5);
    if ( !v7 )
      sub_1C372B4(0);
    v8 = System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    v11 = v8;
    if ( !v3 )
      sub_1C372B4(v8);
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_int____Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1C372B4(v8);
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        &v8->obj,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v15[4] = (Il2CppClass *)v11;
      sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
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
  il2cpp_array_size_t max_length; // x8
  System_String_array_array *v9; // x20
  unsigned __int64 v10; // x25
  EntityScriptValueConvertLogic___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x22
  System_Func_object__int__o *_9__3_0; // x23
  Il2CppObject *v14; // x24
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Int32_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Int32_array *v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4C42AE0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_Func_string__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int____ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C37058(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C37058(&Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__);
    sub_1C37058(&EntityScriptValueConvertLogic___c_TypeInfo);
    byte_4C42AE0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_int_____ctor__);
  v7 = EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(rawValue, separator, v6);
  if ( !v7 )
    goto LABEL_25;
  max_length = v7->max_length;
  v9 = v7;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C372BC(v7);
      v11 = EntityScriptValueConvertLogic___c_TypeInfo;
      v12 = (System_Collections_Generic_IEnumerable_TSource__o *)v9->m_Items[v10];
      if ( !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo);
        v11 = EntityScriptValueConvertLogic___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__int__o *)v11->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v11->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v11 = EntityScriptValueConvertLogic___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v11->static_fields->__9;
        _9__3_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_string__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__3_0,
          v14,
          Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__,
          0);
        static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v16, v17);
      }
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                   v12,
                                                                   (System_Func_TSource__TResult__o *)_9__3_0,
                                                                   (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_string__int___);
      v19 = System_Linq_Enumerable__ToArray_int_(
              v18,
              (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
      v22 = v19;
      if ( !v5 )
        sub_1C372B4(v19);
      items = v5->fields._items;
      v24 = Method_System_Collections_Generic_List_int____Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C372B4(v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          &v19->obj,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v22;
        sub_1C36FFC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v22, v20, v21);
      }
      LODWORD(max_length) = v9->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)max_length );
  }
  if ( !v5 )
LABEL_25:
    sub_1C372B4(v7);
  return (System_Int32_array_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_int____ToArray__);
}


System_String_array_array *EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        uint16_t separator,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x0
  System_String_o *v7; // x0
  System_String_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_array *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C42AE1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_string____Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_string____ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_string_____ctor__);
    sub_1C37058(&System_Collections_Generic_List_string____TypeInfo);
    byte_4C42AE1 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string_____ctor__);
  if ( !rawValue )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    rawValue,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( !v18.fields._current )
      sub_1C372B4(0);
    v7 = (System_String_o *)((__int64 (*)(void))v18.fields._current->klass->vtable[3].methodPtr)();
    if ( !v7 )
      sub_1C372B4(0);
    v8 = System_String__Split(v7, separator, 0, 0);
    v11 = v8;
    if ( !v5 )
      sub_1C372B4(v8);
    items = v5->fields._items;
    v13 = Method_System_Collections_Generic_List_string____Add__;
    ++v5->fields._version;
    if ( !items )
      sub_1C372B4(v8);
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        &v8->obj,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v15[4] = (Il2CppClass *)v11;
      sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( !v5 )
LABEL_19:
    sub_1C372B4(v6);
  return (System_String_array_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string____ToArray__);
}


System_Collections_Generic_List_float__o *EntityScriptValueConvertLogic__ObjectListToFloatList(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  System_Collections_Generic_List_float__o *v3; // x19
  __int64 v4; // x0
  System_String_o *v5; // x0
  _BOOL8 v6; // x0
  float v7; // s0
  struct System_Single_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+0h] [xbp-70h] BYREF
  float result; // [xsp+1Ch] [xbp-54h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C42AE2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_float__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1C37058(&System_Collections_Generic_List_float__TypeInfo);
    byte_4C42AE2 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  result = 0.0;
  v3 = (System_Collections_Generic_List_float__o *)sub_1C372A4(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor(
    v3,
    (const MethodInfo_37C8344 *)Method_System_Collections_Generic_List_float___ctor__);
  if ( !rawValue )
    sub_1C372B4(v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    rawValue,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v14 = v12;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( !v14.fields._current )
      sub_1C372B4(0);
    v5 = (System_String_o *)((__int64 (*)(void))v14.fields._current->klass->vtable[3].methodPtr)();
    v6 = System_Single__TryParse(v5, &result, 0);
    if ( v6 )
    {
      if ( !v3 )
        sub_1C372B4(v6);
      v7 = result;
      items = v3->fields._items;
      v9 = Method_System_Collections_Generic_List_float__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(v6);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_float___AddWithResize(
          v3,
          v7,
          *(const MethodInfo_37C8BA0 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = v7;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return v3;
}


System_Collections_Generic_List_int__o *EntityScriptValueConvertLogic__ObjectListToIntList(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  int32_t *v8; // x0
  int32_t v9; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  void *v14; // x0
  void *v15; // x20
  int v16; // w1
  int v17; // w21
  __int64 v18; // x21
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C42ADD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C42ADD = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !rawValue )
    sub_1C372B4(v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    rawValue,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v5 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      return v3;
    }
    if ( !v3 )
      sub_1C372B4(v5);
    if ( !v20.fields._current )
      sub_1C372B4(0);
    if ( v20.fields._current->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v8 = (int32_t *)j_il2cpp_object_unbox_0(v20.fields._current, long_TypeInfo, v6, v7);
    v9 = *v8;
    items = v3->fields._items;
    v11 = Method_System_Collections_Generic_List_int__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1C372B4(v8);
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v3,
        v9,
        *(const MethodInfo_3786000 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v3->fields._size = size + 1;
      items->m_Items[size] = v9;
    }
  }
  sub_1C37574(v20.fields._current);
  v15 = v14;
  v17 = v16;
  __cxa_end_catch();
  if ( v17 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1D2018C();
  }
  v18 = *(_QWORD *)__cxa_begin_catch(v15);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v18 )
    sub_1C372AC(v18);
  return v3;
}


System_String_array *EntityScriptValueConvertLogic__ObjectListToStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  EntityScriptValueConvertLogic___c_c *v3; // x0
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v5; // x21
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_4C42ADE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_object__string___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C37058(&System_Func_object__string__TypeInfo);
    sub_1C37058(&Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__);
    sub_1C37058(&EntityScriptValueConvertLogic___c_TypeInfo);
    byte_4C42ADE = 1;
  }
  v3 = EntityScriptValueConvertLogic___c_TypeInfo;
  if ( !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo);
    v3 = EntityScriptValueConvertLogic___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v3->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EntityScriptValueConvertLogic___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_object__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__1_0,
      v5,
      Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__,
      0);
    static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_object__string__o *)_9__1_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v7, v8);
  }
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)rawValue,
                                                              (System_Func_TSource__TResult__o *)_9__1_0,
                                                              (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_object__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v9,
                                  (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_string___);
}


void EntityScriptValueConvertLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C42AE3 & 1) == 0 )
  {
    sub_1C37058(&EntityScriptValueConvertLogic___c_TypeInfo);
    byte_4C42AE3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EntityScriptValueConvertLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EntityScriptValueConvertLogic___c_TypeInfo->static_fields->__9 = (struct EntityScriptValueConvertLogic___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EntityScriptValueConvertLogic___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method);
}