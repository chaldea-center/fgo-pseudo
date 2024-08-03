System_Collections_Generic_List_int____o *__fastcall EntityScriptValueConvertLogic__DoubleObjectListToIntArrayList(
        System_Collections_Generic_List_object__o *rawValues,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 v13; // x0
  System_Collections_Generic_List_object__c *v14; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_int__o *v16; // x0
  System_Int32_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Int32_array *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FBFBA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int_____ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_List_int____TypeInfo, v11);
    byte_49FBFBA = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_int____TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_int_____ctor__);
  if ( !rawValues )
LABEL_20:
    sub_1B64324(v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    rawValues,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( v27.fields._current )
    {
      v14 = System_Collections_Generic_List_object__TypeInfo;
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v27.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_List_object__c *)v27.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_1B645E4(v27.fields._current);
        goto LABEL_20;
      }
    }
    v16 = EntityScriptValueConvertLogic__ObjectListToIntList(
            (System_Collections_Generic_List_object__o *)v27.fields._current,
            (const MethodInfo *)v14);
    if ( !v16 )
      sub_1B64324(0LL);
    v17 = System_Collections_Generic_List_int___ToArray(
            v16,
            (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    v20 = v17;
    if ( !v12 )
      sub_1B64324(v17);
    items = v12->fields._items;
    v22 = Method_System_Collections_Generic_List_int____Add__;
    ++v12->fields._version;
    if ( !items )
      sub_1B64324(v17);
    size = v12->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        &v17->obj,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v24[4] = (Il2CppClass *)v20;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_int____o *)v12;
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
  __int64 v17; // x2
  __int64 v18; // x8
  System_String_array_array *v19; // x20
  unsigned __int64 v20; // x25
  EntityScriptValueConvertLogic___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x22
  System_Func_object__int__o *_9__3_0; // x23
  Il2CppObject *v24; // x24
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Int32_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Int32_array *v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_49FBFBB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_string__int___, separator);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1B640C8(&System_Func_string__int__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int_____ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_int____TypeInfo, v10);
    sub_1B640C8(&Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__, v11);
    sub_1B640C8(&EntityScriptValueConvertLogic___c_TypeInfo, v12);
    byte_49FBFBB = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_int____TypeInfo,
                                                       separator,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_int_____ctor__);
  v15 = EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(rawValue, separator, v14);
  if ( !v15 )
    goto LABEL_25;
  v18 = *(_QWORD *)&v15->max_length;
  v19 = v15;
  if ( (int)v18 >= 1 )
  {
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)v18 )
        sub_1B6432C(v15, v16);
      v21 = EntityScriptValueConvertLogic___c_TypeInfo;
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v19->m_Items[v20];
      if ( !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo);
        v21 = EntityScriptValueConvertLogic___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__int__o *)v21->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = EntityScriptValueConvertLogic___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v21->static_fields->__9;
        _9__3_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_string__int__TypeInfo, v16, v17);
        System_Func_object__int____ctor(
          _9__3_0,
          v24,
          Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__,
          0LL);
        static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v26, v27);
      }
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                   v22,
                                                                   (System_Func_TSource__TResult__o *)_9__3_0,
                                                                   (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_string__int___);
      v29 = System_Linq_Enumerable__ToArray_int_(
              v28,
              (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
      v32 = v29;
      if ( !v13 )
        sub_1B64324(v29);
      items = v13->fields._items;
      v34 = Method_System_Collections_Generic_List_int____Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1B64324(v29);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          &v29->obj,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v32, v30, v31);
      }
      LODWORD(v18) = v19->max_length;
      ++v20;
    }
    while ( (__int64)v20 < (int)v18 );
  }
  if ( !v13 )
LABEL_25:
    sub_1B64324(v15);
  return (System_Int32_array_array *)System_Collections_Generic_List_object___ToArray(
                                       v13,
                                       (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_int____ToArray__);
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
  System_String_o *v14; // x0
  System_String_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_array *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FBFBC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, separator);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string____Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_string____ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string_____ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_string____TypeInfo, v11);
    byte_49FBFBC = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string____TypeInfo,
                                                       separator,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string_____ctor__);
  if ( !rawValue )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    rawValue,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( !v25.fields._current )
      sub_1B64324(0LL);
    v14 = (System_String_o *)((__int64 (*)(void))v25.fields._current->klass->vtable[3].method)();
    if ( !v14 )
      sub_1B64324(0LL);
    v15 = System_String__Split(v14, separator, 0, 0LL);
    v18 = v15;
    if ( !v12 )
      sub_1B64324(v15);
    items = v12->fields._items;
    v20 = Method_System_Collections_Generic_List_string____Add__;
    ++v12->fields._version;
    if ( !items )
      sub_1B64324(v15);
    size = v12->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        &v15->obj,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v22[4] = (Il2CppClass *)v18;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v18, v16, v17);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( !v12 )
LABEL_19:
    sub_1B64324(v13);
  return (System_String_array_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string____ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall EntityScriptValueConvertLogic__ObjectListToIntList(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  __int64 v12; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  int32_t *v16; // x0
  int32_t v17; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  void *v22; // x0
  void *v23; // x20
  int v24; // w1
  int v25; // w21
  __int64 v26; // x21
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FBFB8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v5);
    sub_1B640C8(&long_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_49FBFB8 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v11 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !rawValue )
    sub_1B64324(v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    rawValue,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v13 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v28,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      return v11;
    }
    if ( !v11 )
      sub_1B64324(v13);
    if ( !v28.fields._current )
      sub_1B64324(0LL);
    if ( v28.fields._current->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v16 = (int32_t *)j_il2cpp_object_unbox_0(v28.fields._current, long_TypeInfo, v14, v15);
    v17 = *v16;
    items = v11->fields._items;
    v19 = Method_System_Collections_Generic_List_int__Add__;
    ++v11->fields._version;
    if ( !items )
      sub_1B64324(v16);
    size = v11->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v11,
        v17,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v11->fields._size = size + 1;
      items->m_Items[size + 1] = v17;
    }
  }
  sub_1B645E4(v28.fields._current);
  v23 = v22;
  v25 = v24;
  __cxa_end_catch();
  if ( v25 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C4EB58();
  }
  v26 = *(_QWORD *)__cxa_begin_catch(v23);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v26 )
    sub_1B6431C(v26);
  return v11;
}


System_String_array *__fastcall EntityScriptValueConvertLogic__ObjectListToStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EntityScriptValueConvertLogic___c_c *v8; // x0
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v10; // x21
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_49FBFB9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_object__string___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_string___, v4);
    sub_1B640C8(&System_Func_object__string__TypeInfo, v5);
    sub_1B640C8(&Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__, v6);
    sub_1B640C8(&EntityScriptValueConvertLogic___c_TypeInfo, v7);
    byte_49FBFB9 = 1;
  }
  v8 = EntityScriptValueConvertLogic___c_TypeInfo;
  if ( !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo);
    v8 = EntityScriptValueConvertLogic___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v8->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EntityScriptValueConvertLogic___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1B64314(System_Func_object__string__TypeInfo, method, v2);
    System_Func_object__object____ctor(
      _9__1_0,
      v10,
      Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__,
      0LL);
    static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_object__string__o *)_9__1_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)rawValue,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_object__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v14,
                                  (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
}


void __fastcall EntityScriptValueConvertLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBFBD & 1) == 0 )
  {
    sub_1B640C8(&EntityScriptValueConvertLogic___c_TypeInfo, v1);
    byte_49FBFBD = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EntityScriptValueConvertLogic___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EntityScriptValueConvertLogic___c_TypeInfo->static_fields->__9 = (struct EntityScriptValueConvertLogic___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EntityScriptValueConvertLogic___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}