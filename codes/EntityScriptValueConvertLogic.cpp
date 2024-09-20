System_Collections_Generic_List_int____o *__fastcall EntityScriptValueConvertLogic__DoubleObjectListToIntArrayList(
        System_Collections_Generic_List_object__o *rawValues,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_object__c *v6; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_int__o *v8; // x0
  __int64 v9; // x1
  System_Int32_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Int32_array *v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5ACFB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_int____TypeInfo);
    byte_4A5ACFB = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_int_____ctor__);
  if ( !rawValues )
LABEL_20:
    sub_1B8880C(v4, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    rawValues,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( v20.fields._current )
    {
      v6 = System_Collections_Generic_List_object__TypeInfo;
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v20.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_List_object__c *)v20.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_1B88ACC(v20.fields._current);
        goto LABEL_20;
      }
    }
    v8 = EntityScriptValueConvertLogic__ObjectListToIntList(
           (System_Collections_Generic_List_object__o *)v20.fields._current,
           (const MethodInfo *)v6);
    if ( !v8 )
      sub_1B8880C(0LL, v9);
    v10 = System_Collections_Generic_List_int___ToArray(
            v8,
            (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    v13 = v10;
    if ( !v3 )
      sub_1B8880C(v10, v10);
    items = v3->fields._items;
    v15 = Method_System_Collections_Generic_List_int____Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1B8880C(v10, v10);
    size = v3->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        &v10->obj,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v17[4] = (Il2CppClass *)v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v13, v11, v12);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_int____o *)v3;
}


System_Int32_array_array *__fastcall EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(
        System_Collections_Generic_List_object__o *rawValue,
        uint16_t separator,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  const MethodInfo *v6; // x2
  System_String_array_array *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  System_String_array_array *v10; // x20
  unsigned __int64 v11; // x25
  EntityScriptValueConvertLogic___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x22
  System_Func_object__int__o *_9__3_0; // x23
  Il2CppObject *v15; // x24
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Int32_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Int32_array *v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4A5ACFC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_string__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int____TypeInfo);
    sub_1B885B0(&Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__);
    sub_1B885B0(&EntityScriptValueConvertLogic___c_TypeInfo);
    byte_4A5ACFC = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_int_____ctor__);
  v7 = EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(rawValue, separator, v6);
  if ( !v7 )
    goto LABEL_25;
  v9 = *(_QWORD *)&v7->max_length;
  v10 = v7;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v9 )
        sub_1B88814(v7, v8);
      v12 = EntityScriptValueConvertLogic___c_TypeInfo;
      v13 = (System_Collections_Generic_IEnumerable_TSource__o *)v10->m_Items[v11];
      if ( !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo);
        v12 = EntityScriptValueConvertLogic___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__int__o *)v12->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = EntityScriptValueConvertLogic___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v12->static_fields->__9;
        _9__3_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_string__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__3_0,
          v15,
          Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__,
          0LL);
        static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v17, v18);
      }
      v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                   v13,
                                                                   (System_Func_TSource__TResult__o *)_9__3_0,
                                                                   (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_string__int___);
      v20 = System_Linq_Enumerable__ToArray_int_(
              v19,
              (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
      v23 = v20;
      if ( !v5 )
        sub_1B8880C(v20, v20);
      items = v5->fields._items;
      v25 = Method_System_Collections_Generic_List_int____Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v20, v20);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          &v20->obj,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v23;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v23, v21, v22);
      }
      LODWORD(v9) = v10->max_length;
      ++v11;
    }
    while ( (__int64)v11 < (int)v9 );
  }
  if ( !v5 )
LABEL_25:
    sub_1B8880C(v7, v8);
  return (System_Int32_array_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_int____ToArray__);
}


System_String_array_array *__fastcall EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_array *v14; // x1
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5ACFD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string____ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string____TypeInfo);
    byte_4A5ACFD = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string_____ctor__);
  if ( !rawValue )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    rawValue,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v21 = v20;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( !v21.fields._current )
      sub_1B8880C(0LL, v8);
    v9 = (System_String_o *)((__int64 (*)(void))v21.fields._current->klass->vtable[3].method)();
    if ( !v9 )
      sub_1B8880C(0LL, v10);
    v11 = System_String__Split(v9, separator, 0, 0LL);
    v14 = v11;
    if ( !v5 )
      sub_1B8880C(v11, v11);
    items = v5->fields._items;
    v16 = Method_System_Collections_Generic_List_string____Add__;
    ++v5->fields._version;
    if ( !items )
      sub_1B8880C(v11, v11);
    size = v5->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        &v11->obj,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v18[4] = (Il2CppClass *)v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v14, v12, v13);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( !v5 )
LABEL_19:
    sub_1B8880C(v6, v7);
  return (System_String_array_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string____ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall EntityScriptValueConvertLogic__ObjectListToIntList(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  unsigned int *v10; // x0
  __int64 v11; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  void *v16; // x0
  void *v17; // x20
  int v18; // w1
  int v19; // w21
  __int64 v20; // x21
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5ACF9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5ACF9 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !rawValue )
    sub_1B8880C(v4, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    rawValue,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v22,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v6 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      return v3;
    }
    if ( !v3 )
      sub_1B8880C(v6, v7);
    if ( !v22.fields._current )
      sub_1B8880C(0LL, v7);
    if ( v22.fields._current->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v10 = (unsigned int *)j_il2cpp_object_unbox_0(v22.fields._current, long_TypeInfo, v8, v9);
    v11 = *v10;
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_int__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1B8880C(v10, v11);
    size = v3->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v3,
        v11,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v3->fields._size = size + 1;
      items->m_Items[size + 1] = v11;
    }
  }
  sub_1B88ACC(v22.fields._current);
  v17 = v16;
  v19 = v18;
  __cxa_end_catch();
  if ( v19 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C73040();
  }
  v20 = *(_QWORD *)__cxa_begin_catch(v17);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v20 )
    sub_1B88804(v20);
  return v3;
}


System_String_array *__fastcall EntityScriptValueConvertLogic__ObjectListToStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  EntityScriptValueConvertLogic___c_c *v3; // x0
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v5; // x21
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_4A5ACFA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_object__string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1B885B0(&System_Func_object__string__TypeInfo);
    sub_1B885B0(&Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__);
    sub_1B885B0(&EntityScriptValueConvertLogic___c_TypeInfo);
    byte_4A5ACFA = 1;
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
    _9__1_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_object__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__1_0,
      v5,
      Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__,
      0LL);
    static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_object__string__o *)_9__1_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v7, v8);
  }
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)rawValue,
                                                              (System_Func_TSource__TResult__o *)_9__1_0,
                                                              (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_object__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v9,
                                  (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_string___);
}


void __fastcall EntityScriptValueConvertLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5ACFE & 1) == 0 )
  {
    sub_1B885B0(&EntityScriptValueConvertLogic___c_TypeInfo);
    byte_4A5ACFE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EntityScriptValueConvertLogic___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EntityScriptValueConvertLogic___c_TypeInfo->static_fields->__9 = (struct EntityScriptValueConvertLogic___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EntityScriptValueConvertLogic___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}