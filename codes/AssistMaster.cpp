void __fastcall AssistMaster___ctor(AssistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC05A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__, method);
    byte_49FC05A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    356,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetAssistEntity(
        AssistMaster_o *this,
        int32_t assistId,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_object__bool__o *v16; // x20

  if ( (byte_49FC05D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____75748736, *(_QWORD *)&assistId);
    sub_1B640C8(&System_Func_AssistEntity__bool__TypeInfo, v7);
    sub_1B640C8(&Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__, v8);
    sub_1B640C8(&AssistMaster___c__DisplayClass5_0_TypeInfo, v9);
    byte_49FC05D = 1;
  }
  v10 = sub_1B64314(AssistMaster___c__DisplayClass5_0_TypeInfo, *(_QWORD *)&assistId, *(_QWORD *)&lv);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B64324(v11);
  *(_DWORD *)(v10 + 16) = lv;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v12);
  v16 = (System_Func_object__bool__o *)sub_1B64314(System_Func_AssistEntity__bool__TypeInfo, v14, v15);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v10,
    Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__,
    0LL);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v16,
                             (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____75748736);
}


System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetAvailableEntityList(
        AssistMaster_o *this,
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  AssistMaster___c_c *v19; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  System_Converter_TInput__TOutput__o *_9__8_0; // x22
  Il2CppObject *v22; // x23
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_TOutput__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *v29; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v36; // x21
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x0
  const MethodInfo *v46; // x2
  Il2CppObject *CurrentLevelEntity; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x1
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0

  if ( (byte_49FC05F & 1) == 0 )
  {
    sub_1B640C8(&AssistMaster_AssistIdComparer_TypeInfo, method);
    sub_1B640C8(&System_Converter_DataEntityBase__AssistEntity__TypeInfo, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Distinct_AssistEntity___, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, v8);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssistEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssistEntity___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_AssistEntity__TypeInfo, v12);
    sub_1B640C8(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___, v13);
    sub_1B640C8(&Method_AssistMaster___c__GetAvailableEntityList_b__8_0__, v14);
    sub_1B640C8(&AssistMaster___c_TypeInfo, v15);
    byte_49FC05F = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_AssistEntity__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  v19 = AssistMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v19 = AssistMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Converter_TInput__TOutput__o *)v19->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = AssistMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__8_0 = (System_Converter_TInput__TOutput__o *)sub_1B64314(
                                                       System_Converter_DataEntityBase__AssistEntity__TypeInfo,
                                                       v17,
                                                       v18);
    System_Converter_object__object____ctor(_9__8_0, v22, Method_AssistMaster___c__GetAvailableEntityList_b__8_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Converter_DataEntityBase__AssistEntity__o *)_9__8_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v24, v25);
  }
  v26 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__8_0,
          (const MethodInfo_2EBC73C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___);
  v29 = (Il2CppObject *)sub_1B64314(AssistMaster_AssistIdComparer_TypeInfo, v27, v28);
  System_Object___ctor(v29, 0LL);
  v30 = System_Linq_Enumerable__Distinct_object__48594800(
          (System_Collections_Generic_IEnumerable_TSource__o *)v26,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v29,
          (const MethodInfo_2E57F70 *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v30 )
    sub_1B64324(0LL);
  klass = v30->klass;
  v32 = v30;
  v33 = *(unsigned __int16 *)(&v30->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v30->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      --v33;
      p_offset += 4;
      if ( !v33 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BB60A8(v30, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0LL);
  }
  v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v32,
          *(_QWORD *)(p_method + 8));
  if ( !v36 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v37 = *(_QWORD *)v36;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_21;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_21:
      v40 = sub_1BB60A8(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) == 0 )
      break;
    v41 = *(_QWORD *)v36;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v43 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_28;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_28:
      v44 = sub_1BB60A8(v36, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v36, *(_QWORD *)(v44 + 8));
    if ( !v45 )
      sub_1B64324(0LL);
    CurrentLevelEntity = (Il2CppObject *)AssistMaster__GetCurrentLevelEntity(this, *(_DWORD *)(v45 + 16), v46);
    v50 = CurrentLevelEntity;
    if ( CurrentLevelEntity )
    {
      if ( !v16 )
        sub_1B64324(CurrentLevelEntity);
      items = v16->fields._items;
      v52 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v16->fields._version;
      if ( !items )
        sub_1B64324(CurrentLevelEntity);
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          CurrentLevelEntity,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v50;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v50, v48, v49);
      }
    }
  }
  v55 = *(_QWORD *)v36;
  v56 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
  {
    v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_41;
    }
    v58 = v55 + 16LL * *v57 + 312;
  }
  else
  {
LABEL_41:
    v58 = sub_1BB60A8(v36, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v58)(v36, *(_QWORD *)(v58 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v16;
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetCurrentLevelEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  AssistMaster___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v17; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  AssistMaster___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  System_Func_object__bool__o *_9__4_1; // x20
  Il2CppObject *v27; // x21
  struct AssistMaster___c_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_49FC05C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____75748736, *(_QWORD *)&assistId);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v5);
    sub_1B640C8(&System_Func_AssistEntity__bool__TypeInfo, v6);
    sub_1B640C8(&System_Func_AssistEntity__int__TypeInfo, v7);
    sub_1B640C8(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__, v8);
    sub_1B640C8(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__, v9);
    sub_1B640C8(&AssistMaster___c_TypeInfo, v10);
    byte_49FC05C = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v14 = AssistMaster___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v14 = AssistMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v14->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = AssistMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_AssistEntity__int__TypeInfo, v12, v13);
    System_Func_object__int____ctor(_9__4_0, v17, Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_AssistEntity__int__o *)_9__4_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v19, v20);
  }
  v21 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v15,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v24 = AssistMaster___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)v21;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v24 = AssistMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__bool__o *)v24->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = AssistMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__4_1 = (System_Func_object__bool__o *)sub_1B64314(System_Func_AssistEntity__bool__TypeInfo, v22, v23);
    System_Func_object__bool____ctor(_9__4_1, v27, Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__, 0LL);
    v28 = AssistMaster___c_TypeInfo->static_fields;
    v28->__9__4_1 = (struct System_Func_AssistEntity__bool__o *)_9__4_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v28->__9__4_1, (int32_t)_9__4_1, v29, v30);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                             v25,
                             (System_Func_TSource__bool__o *)_9__4_1,
                             (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____75748736);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetEntity(
        AssistMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC058 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_49FC058 = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (AssistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_30D41FC *)Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetEntityListFromAssistId(
        AssistMaster_o *this,
        int32_t assistId,
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
  __int64 v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  AssistMaster___c_c *v18; // x0
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v20; // x22
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  System_Func_object__bool__o *v27; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_49FC05B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___, *(_QWORD *)&assistId);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_AssistEntity___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_AssistEntity___, v6);
    sub_1B640C8(&System_Func_AssistEntity__bool__TypeInfo, v7);
    sub_1B640C8(&System_Func_DataEntityBase__AssistEntity__TypeInfo, v8);
    sub_1B640C8(&Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__, v9);
    sub_1B640C8(&Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__, v10);
    sub_1B640C8(&AssistMaster___c__DisplayClass3_0_TypeInfo, v11);
    sub_1B640C8(&AssistMaster___c_TypeInfo, v12);
    byte_49FC05B = 1;
  }
  v13 = sub_1B64314(AssistMaster___c__DisplayClass3_0_TypeInfo, *(_QWORD *)&assistId, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B64324(v14);
  *(_DWORD *)(v13 + 16) = assistId;
  list = this->fields.list;
  v18 = AssistMaster___c_TypeInfo;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v18 = AssistMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v18->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = AssistMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B64314(System_Func_DataEntityBase__AssistEntity__TypeInfo, v15, v16);
    System_Func_object__object____ctor(_9__3_0, v20, Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__AssistEntity__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___);
  v27 = (System_Func_object__bool__o *)sub_1B64314(System_Func_AssistEntity__bool__TypeInfo, v25, v26);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v13,
    Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__,
    0LL);
  v28 = System_Linq_Enumerable__Where_object_(
          v24,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_AssistEntity___);
  return (System_Collections_Generic_List_AssistEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                              v28,
                                                              (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetMaxLevelEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  AssistMaster___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v15; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_49FC05E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___, *(_QWORD *)&assistId);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v5);
    sub_1B640C8(&System_Func_AssistEntity__int__TypeInfo, v6);
    sub_1B640C8(&Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__, v7);
    sub_1B640C8(&AssistMaster___c_TypeInfo, v8);
    byte_49FC05E = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v12 = AssistMaster___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v12 = AssistMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__int__o *)v12->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = AssistMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__6_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_AssistEntity__int__TypeInfo, v10, v11);
    System_Func_object__int____ctor(_9__6_0, v15, Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_AssistEntity__int__o *)_9__6_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TKey__o *)_9__6_0,
                                                               (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v19,
                             (const MethodInfo_2E5C894 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssistMaster__TryGetEntity(
        AssistMaster_o *this,
        AssistEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FC059 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__, entity);
    byte_49FC059 = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
}


void __fastcall AssistMaster_AssistIdComparer___ctor(AssistMaster_AssistIdComparer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssistMaster_AssistIdComparer__Equals(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *x,
        AssistEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1B64324(this);
  return x->fields.id == y->fields.id;
}


int32_t __fastcall AssistMaster_AssistIdComparer__GetHashCode(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_1B64324(this);
  return System_Int32__GetHashCode((_DWORD)obj + 16, 0LL);
}


void __fastcall AssistMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC060 & 1) == 0 )
  {
    sub_1B640C8(&AssistMaster___c_TypeInfo, v1);
    byte_49FC060 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(AssistMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  AssistMaster___c_TypeInfo->static_fields->__9 = (struct AssistMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)AssistMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall AssistMaster___c___ctor(AssistMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


AssistEntity_o *__fastcall AssistMaster___c___GetAvailableEntityList_b__8_0(
        AssistMaster___c_o *this,
        DataEntityBase_o *e,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_49FC062 & 1) == 0 )
  {
    sub_1B640C8(&AssistEntity_TypeInfo, e);
    byte_49FC062 = 1;
  }
  if ( !e )
    return 0LL;
  methodPtr_low = LOBYTE(AssistEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(e->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (AssistEntity_c *)e->klass->_2.typeHierarchy[methodPtr_low - 1] == AssistEntity_TypeInfo )
    return (AssistEntity_o *)e;
  return 0LL;
}


int32_t __fastcall AssistMaster___c___GetCurrentLevelEntity_b__4_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1B64324(this);
  return ent->fields.lv;
}


bool __fastcall AssistMaster___c___GetCurrentLevelEntity_b__4_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1B64324(this);
  return AssistEntity__IsOpen(ent, (const MethodInfo *)ent);
}


AssistEntity_o *__fastcall AssistMaster___c___GetEntityListFromAssistId_b__3_0(
        AssistMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_49FC061 & 1) == 0 )
  {
    sub_1B640C8(&AssistEntity_TypeInfo, data);
    byte_49FC061 = 1;
  }
  if ( !data )
    return 0LL;
  methodPtr_low = LOBYTE(AssistEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (AssistEntity_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == AssistEntity_TypeInfo )
    return (AssistEntity_o *)data;
  return 0LL;
}


int32_t __fastcall AssistMaster___c___GetMaxLevelEntity_b__6_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1B64324(this);
  return ent->fields.lv;
}


void __fastcall AssistMaster___c__DisplayClass3_0___ctor(
        AssistMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssistMaster___c__DisplayClass3_0___GetEntityListFromAssistId_b__1(
        AssistMaster___c__DisplayClass3_0_o *this,
        AssistEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.id == this->fields.assistId;
}


void __fastcall AssistMaster___c__DisplayClass5_0___ctor(
        AssistMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssistMaster___c__DisplayClass5_0___GetAssistEntity_b__0(
        AssistMaster___c__DisplayClass5_0_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1B64324(this);
  return ent->fields.lv == this->fields.lv;
}