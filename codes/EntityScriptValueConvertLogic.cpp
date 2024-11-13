System_Collections_Generic_List_int____o *__fastcall EntityScriptValueConvertLogic__DoubleObjectListToIntArrayList(
        System_Collections_Generic_List_object__o *rawValues,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_object__c *v24; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_int__o *v26; // x0
  __int64 v27; // x1
  System_Int32_array *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B15D83 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int_____ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_int____TypeInfo, v19, v20);
    byte_4B15D83 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_int____TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_int_____ctor__);
  if ( !rawValues )
LABEL_20:
    sub_1BCAA3C(v22, v23);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    rawValues,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( v42.fields._current )
    {
      v24 = System_Collections_Generic_List_object__TypeInfo;
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v42.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_List_object__c *)v42.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_1BCACFC(v42.fields._current);
        goto LABEL_20;
      }
    }
    v26 = EntityScriptValueConvertLogic__ObjectListToIntList(
            (System_Collections_Generic_List_object__o *)v42.fields._current,
            (const MethodInfo *)v24);
    if ( !v26 )
      sub_1BCAA3C(0LL, v27);
    v28 = System_Collections_Generic_List_int___ToArray(
            v26,
            (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    v35 = (int64_t)v28;
    if ( !v21 )
      sub_1BCAA3C(v28, v28);
    items = v21->fields._items;
    v37 = Method_System_Collections_Generic_List_int____Add__;
    ++v21->fields._version;
    if ( !items )
      sub_1BCAA3C(v28, v28);
    size = v21->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        &v28->obj,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = &items->obj.klass + size;
      v21->fields._size = size + 1;
      v39[4] = (Il2CppClass *)v35;
      sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_int____o *)v21;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array_array *__fastcall EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(
        System_Collections_Generic_List_object__o *rawValue,
        uint16_t separator,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x19
  const MethodInfo *v23; // x2
  System_String_array_array *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x8
  System_String_array_array *v29; // x20
  unsigned __int64 v30; // x25
  EntityScriptValueConvertLogic___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x22
  System_Func_object__int__o *_9__3_0; // x23
  Il2CppObject *v34; // x24
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Int32_array *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0

  if ( (byte_4B15D84 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__int___, separator, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v6, v7);
    sub_1BCA7E0(&System_Func_string__int__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int_____ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_int____TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__, v18, v19);
    sub_1BCA7E0(&EntityScriptValueConvertLogic___c_TypeInfo, v20, v21);
    byte_4B15D84 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_int____TypeInfo,
                                                       separator,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_int_____ctor__);
  v24 = EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(rawValue, separator, v23);
  if ( !v24 )
    goto LABEL_25;
  v28 = *(_QWORD *)&v24->max_length;
  v29 = v24;
  if ( (int)v28 >= 1 )
  {
    v30 = 0LL;
    do
    {
      if ( v30 >= (unsigned int)v28 )
        sub_1BCAA44(v24, v25);
      v31 = EntityScriptValueConvertLogic___c_TypeInfo;
      v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v29->m_Items[v30];
      if ( !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo, v25);
        v31 = EntityScriptValueConvertLogic___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__int__o *)v31->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31, v25);
          v31 = EntityScriptValueConvertLogic___c_TypeInfo;
        }
        v34 = (Il2CppObject *)v31->static_fields->__9;
        _9__3_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_string__int__TypeInfo, v25, v26, v27);
        System_Func_object__int____ctor(
          _9__3_0,
          v34,
          Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__,
          0LL);
        static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__3_0,
          (int64_t)_9__3_0,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                   v32,
                                                                   (System_Func_TSource__TResult__o *)_9__3_0,
                                                                   (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_string__int___);
      v43 = System_Linq_Enumerable__ToArray_int_(
              v42,
              (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
      v50 = (int64_t)v43;
      if ( !v22 )
        sub_1BCAA3C(v43, v43);
      items = v22->fields._items;
      v52 = Method_System_Collections_Generic_List_int____Add__;
      ++v22->fields._version;
      if ( !items )
        sub_1BCAA3C(v43, v43);
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          &v43->obj,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v22->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v50;
        sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), v50, v44, v45, v46, v47, v48, v49);
      }
      LODWORD(v28) = v29->max_length;
      ++v30;
    }
    while ( (__int64)v30 < (int)v28 );
  }
  if ( !v22 )
LABEL_25:
    sub_1BCAA3C(v24, v25);
  return (System_Int32_array_array *)System_Collections_Generic_List_object___ToArray(
                                       v22,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_int____ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_array_array *__fastcall EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        uint16_t separator,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  System_String_o *v24; // x0
  __int64 v25; // x1
  System_String_array *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B15D85 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, separator, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string____Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string____ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string_____ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_string____TypeInfo, v18, v19);
    byte_4B15D85 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string____TypeInfo,
                                                       separator,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string_____ctor__);
  if ( !rawValue )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    rawValue,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v40 = v39;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( !v40.fields._current )
      sub_1BCAA3C(0LL, v23);
    v24 = (System_String_o *)((__int64 (*)(void))v40.fields._current->klass->vtable[3].method)();
    if ( !v24 )
      sub_1BCAA3C(0LL, v25);
    v26 = System_String__Split(v24, separator, 0, 0LL);
    v33 = (int64_t)v26;
    if ( !v20 )
      sub_1BCAA3C(v26, v26);
    items = v20->fields._items;
    v35 = Method_System_Collections_Generic_List_string____Add__;
    ++v20->fields._version;
    if ( !items )
      sub_1BCAA3C(v26, v26);
    size = v20->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        &v26->obj,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v37 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v37[4] = (Il2CppClass *)v33;
      sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), v33, v27, v28, v29, v30, v31, v32);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( !v20 )
LABEL_19:
    sub_1BCAA3C(v21, v22);
  return (System_String_array_array *)System_Collections_Generic_List_object___ToArray(
                                        v20,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string____ToArray__);
}


System_Collections_Generic_List_float__o *__fastcall EntityScriptValueConvertLogic__ObjectListToFloatList(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_float__o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  System_String_o *v21; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  float v24; // s0
  struct System_Single_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+0h] [xbp-70h] BYREF
  float result; // [xsp+1Ch] [xbp-54h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B15D86 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_float__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_float___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_float__TypeInfo, v15, v16);
    byte_4B15D86 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  result = 0.0;
  v17 = (System_Collections_Generic_List_float__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_float__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_float____ctor(
    v17,
    (const MethodInfo_35C1B7C *)Method_System_Collections_Generic_List_float___ctor__);
  if ( !rawValue )
    sub_1BCAA3C(v18, v19);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    rawValue,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v31 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( !v31.fields._current )
      sub_1BCAA3C(0LL, v20);
    v21 = (System_String_o *)((__int64 (*)(void))v31.fields._current->klass->vtable[3].method)();
    v22 = System_Single__TryParse(v21, &result, 0LL);
    if ( v22 )
    {
      if ( !v17 )
        sub_1BCAA3C(v22, v23);
      v24 = result;
      items = v17->fields._items;
      v26 = Method_System_Collections_Generic_List_float__Add__;
      ++v17->fields._version;
      if ( !items )
        sub_1BCAA3C(v22, v23);
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_float___AddWithResize(
          v17,
          v24,
          *(const MethodInfo_35C23D8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v17->fields._size = size + 1;
        items->m_Items[size + 1] = v24;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return v17;
}


System_Collections_Generic_List_int__o *__fastcall EntityScriptValueConvertLogic__ObjectListToIntList(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  unsigned int *v26; // x0
  __int64 v27; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  void *v32; // x0
  void *v33; // x20
  int v34; // w1
  int v35; // w21
  __int64 v36; // x21
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B15D81 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    byte_4B15D81 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !rawValue )
    sub_1BCAA3C(v20, v21);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    rawValue,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v22 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v38,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      return v19;
    }
    if ( !v19 )
      sub_1BCAA3C(v22, v23);
    if ( !v38.fields._current )
      sub_1BCAA3C(0LL, v23);
    if ( v38.fields._current->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v26 = (unsigned int *)j_il2cpp_object_unbox_0(v38.fields._current, long_TypeInfo, v24, v25);
    v27 = *v26;
    items = v19->fields._items;
    v29 = Method_System_Collections_Generic_List_int__Add__;
    ++v19->fields._version;
    if ( !items )
      sub_1BCAA3C(v26, v27);
    size = v19->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v19,
        v27,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v19->fields._size = size + 1;
      items->m_Items[size + 1] = v27;
    }
  }
  sub_1BCACFC(v38.fields._current);
  v33 = v32;
  v35 = v34;
  __cxa_end_catch();
  if ( v35 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1CB5270();
  }
  v36 = *(_QWORD *)__cxa_begin_catch(v33);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v36 )
    sub_1BCAA34(v36);
  return v19;
}


System_String_array *__fastcall EntityScriptValueConvertLogic__ObjectListToStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  EntityScriptValueConvertLogic___c_c *v13; // x0
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v15; // x21
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_4B15D82 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_object__string___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_string___, v5, v6);
    sub_1BCA7E0(&System_Func_object__string__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__, v9, v10);
    sub_1BCA7E0(&EntityScriptValueConvertLogic___c_TypeInfo, v11, v12);
    byte_4B15D82 = 1;
  }
  v13 = EntityScriptValueConvertLogic___c_TypeInfo;
  if ( !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo, method);
    v13 = EntityScriptValueConvertLogic___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v13->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = EntityScriptValueConvertLogic___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1BCAA2C(System_Func_object__string__TypeInfo, method, v2, v3);
    System_Func_object__object____ctor(
      _9__1_0,
      v15,
      Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__,
      0LL);
    static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_object__string__o *)_9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v17, v18, v19, v20, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)rawValue,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_object__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v23,
                                  (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
}


void __fastcall EntityScriptValueConvertLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15D87 & 1) == 0 )
  {
    sub_1BCA7E0(&EntityScriptValueConvertLogic___c_TypeInfo, v1, v2);
    byte_4B15D87 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EntityScriptValueConvertLogic___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EntityScriptValueConvertLogic___c_TypeInfo->static_fields->__9 = (struct EntityScriptValueConvertLogic___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EntityScriptValueConvertLogic___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}