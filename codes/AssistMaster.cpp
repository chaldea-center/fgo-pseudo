void __fastcall AssistMaster___ctor(AssistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE772 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__, method);
    byte_49FE772 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    356,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_49FE775 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____75758744, *(_QWORD *)&assistId);
    sub_1B64A00(&System_Func_AssistEntity__bool__TypeInfo, v7);
    sub_1B64A00(&Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__, v8);
    sub_1B64A00(&AssistMaster___c__DisplayClass5_0_TypeInfo, v9);
    byte_49FE775 = 1;
  }
  v10 = sub_1B64C4C(AssistMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B64C5C(v11, v12);
  *(_DWORD *)(v10 + 16) = lv;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v13);
  v15 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__,
    0LL);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48628184(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v15,
                             (const MethodInfo_2E601D8 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____75758744);
}


System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetAvailableEntityList(
        AssistMaster_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x19
  AssistMaster___c_c *v16; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  System_Converter_TInput__TOutput__o *_9__8_0; // x22
  Il2CppObject *v19; // x23
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_TOutput__o *v23; // x21
  Il2CppObject *v24; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v32; // x1
  __int64 v33; // x21
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  Il2CppObject *CurrentLevelEntity; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  Il2CppObject *v48; // x1
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0

  if ( (byte_49FE777 & 1) == 0 )
  {
    sub_1B64A00(&AssistMaster_AssistIdComparer_TypeInfo, method);
    sub_1B64A00(&System_Converter_DataEntityBase__AssistEntity__TypeInfo, v3);
    sub_1B64A00(&Method_System_Linq_Enumerable_Distinct_AssistEntity___, v4);
    sub_1B64A00(&System_IDisposable_TypeInfo, v5);
    sub_1B64A00(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, v6);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, v7);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_AssistEntity__Add__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_AssistEntity___ctor__, v10);
    sub_1B64A00(&System_Collections_Generic_List_AssistEntity__TypeInfo, v11);
    sub_1B64A00(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___, v12);
    sub_1B64A00(&Method_AssistMaster___c__GetAvailableEntityList_b__8_0__, v13);
    sub_1B64A00(&AssistMaster___c_TypeInfo, v14);
    byte_49FE777 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  v16 = AssistMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v16 = AssistMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Converter_TInput__TOutput__o *)v16->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = AssistMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__8_0 = (System_Converter_TInput__TOutput__o *)sub_1B64C4C(System_Converter_DataEntityBase__AssistEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__8_0, v19, Method_AssistMaster___c__GetAvailableEntityList_b__8_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Converter_DataEntityBase__AssistEntity__o *)_9__8_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v21, v22);
  }
  v23 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__8_0,
          (const MethodInfo_2EBF030 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___);
  v24 = (Il2CppObject *)sub_1B64C4C(AssistMaster_AssistIdComparer_TypeInfo);
  System_Object___ctor(v24, 0LL);
  v25 = System_Linq_Enumerable__Distinct_object__48605284(
          (System_Collections_Generic_IEnumerable_TSource__o *)v23,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v24,
          (const MethodInfo_2E5A864 *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v25 )
    sub_1B64C5C(0LL, v26);
  klass = v25->klass;
  v28 = v25;
  v29 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BB69E0(v25, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0LL);
  }
  v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v28,
          *(_QWORD *)(p_method + 8));
  if ( !v33 )
    sub_1B64C5C(0LL, v32);
  while ( 1 )
  {
    v34 = *(_QWORD *)v33;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_21;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_21:
      v37 = sub_1BB69E0(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v33;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v40 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_28;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_28:
      v41 = sub_1BB69E0(v33, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0LL);
    }
    v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
    if ( !v42 )
      sub_1B64C5C(0LL, v43);
    CurrentLevelEntity = (Il2CppObject *)AssistMaster__GetCurrentLevelEntity(this, *(_DWORD *)(v42 + 16), v44);
    v48 = CurrentLevelEntity;
    if ( CurrentLevelEntity )
    {
      if ( !v15 )
        sub_1B64C5C(CurrentLevelEntity, CurrentLevelEntity);
      items = v15->fields._items;
      v50 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1B64C5C(CurrentLevelEntity, CurrentLevelEntity);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          CurrentLevelEntity,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v52[4] = (Il2CppClass *)v48;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v48, v46, v47);
      }
    }
  }
  v53 = *(_QWORD *)v33;
  v54 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
  {
    v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_41;
    }
    v56 = v53 + 16LL * *v55 + 312;
  }
  else
  {
LABEL_41:
    v56 = sub_1BB69E0(v33, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v56)(v33, *(_QWORD *)(v56 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v15;
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
  AssistMaster___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v15; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  AssistMaster___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_object__bool__o *_9__4_1; // x20
  Il2CppObject *v23; // x21
  struct AssistMaster___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_49FE774 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____75758744, *(_QWORD *)&assistId);
    sub_1B64A00(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v5);
    sub_1B64A00(&System_Func_AssistEntity__bool__TypeInfo, v6);
    sub_1B64A00(&System_Func_AssistEntity__int__TypeInfo, v7);
    sub_1B64A00(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__, v8);
    sub_1B64A00(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__, v9);
    sub_1B64A00(&AssistMaster___c_TypeInfo, v10);
    byte_49FE774 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v12 = AssistMaster___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v12 = AssistMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v12->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = AssistMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1B64C4C(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v15, Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_AssistEntity__int__o *)_9__4_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v13,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_2E65E78 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v20 = AssistMaster___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v20 = AssistMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__bool__o *)v20->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = AssistMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__4_1 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__4_1, v23, Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__, 0LL);
    v24 = AssistMaster___c_TypeInfo->static_fields;
    v24->__9__4_1 = (struct System_Func_AssistEntity__bool__o *)_9__4_1;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v24->__9__4_1, (int32_t)_9__4_1, v25, v26);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48628184(
                             v21,
                             (System_Func_TSource__bool__o *)_9__4_1,
                             (const MethodInfo_2E601D8 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____75758744);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetEntity(
        AssistMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE770 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_49FE770 = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (AssistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_30D6AF0 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
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
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  AssistMaster___c_c *v17; // x0
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v19; // x22
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  System_Func_object__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_49FE773 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___, *(_QWORD *)&assistId);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_AssistEntity___, v5);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_AssistEntity___, v6);
    sub_1B64A00(&System_Func_AssistEntity__bool__TypeInfo, v7);
    sub_1B64A00(&System_Func_DataEntityBase__AssistEntity__TypeInfo, v8);
    sub_1B64A00(&Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__, v9);
    sub_1B64A00(&Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__, v10);
    sub_1B64A00(&AssistMaster___c__DisplayClass3_0_TypeInfo, v11);
    sub_1B64A00(&AssistMaster___c_TypeInfo, v12);
    byte_49FE773 = 1;
  }
  v13 = sub_1B64C4C(AssistMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B64C5C(v14, v15);
  *(_DWORD *)(v13 + 16) = assistId;
  list = this->fields.list;
  v17 = AssistMaster___c_TypeInfo;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v17 = AssistMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v17->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = AssistMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B64C4C(System_Func_DataEntityBase__AssistEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v19, Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__AssistEntity__o *)_9__3_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2E6BCA0 *)Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___);
  v24 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__,
    0LL);
  v25 = System_Linq_Enumerable__Where_object_(
          v23,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
  return (System_Collections_Generic_List_AssistEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                              v25,
                                                              (const MethodInfo_2E77910 *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
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
  AssistMaster___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v13; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_49FE776 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___, *(_QWORD *)&assistId);
    sub_1B64A00(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v5);
    sub_1B64A00(&System_Func_AssistEntity__int__TypeInfo, v6);
    sub_1B64A00(&Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__, v7);
    sub_1B64A00(&AssistMaster___c_TypeInfo, v8);
    byte_49FE776 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v10 = AssistMaster___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v10 = AssistMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__int__o *)v10->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = AssistMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__6_0 = (System_Func_object__int__o *)sub_1B64C4C(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__6_0, v13, Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_AssistEntity__int__o *)_9__6_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TKey__o *)_9__6_0,
                                                               (const MethodInfo_2E65E78 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v17,
                             (const MethodInfo_2E5F188 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
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

  if ( (byte_49FE771 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__, entity);
    byte_49FE771 = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
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
    sub_1B64C5C(this, x);
  return x->fields.id == y->fields.id;
}


int32_t __fastcall AssistMaster_AssistIdComparer__GetHashCode(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_1B64C5C(this, 0LL);
  return System_Int32__GetHashCode((_DWORD)obj + 16, 0LL);
}


void __fastcall AssistMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FE778 & 1) == 0 )
  {
    sub_1B64A00(&AssistMaster___c_TypeInfo, v1);
    byte_49FE778 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(AssistMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AssistMaster___c_TypeInfo->static_fields->__9 = (struct AssistMaster___c_o *)v2;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)AssistMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_49FE77A & 1) == 0 )
  {
    sub_1B64A00(&AssistEntity_TypeInfo, e);
    byte_49FE77A = 1;
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
    sub_1B64C5C(this, 0LL);
  return ent->fields.lv;
}


bool __fastcall AssistMaster___c___GetCurrentLevelEntity_b__4_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1B64C5C(this, 0LL);
  return AssistEntity__IsOpen(ent, (const MethodInfo *)ent);
}


AssistEntity_o *__fastcall AssistMaster___c___GetEntityListFromAssistId_b__3_0(
        AssistMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_49FE779 & 1) == 0 )
  {
    sub_1B64A00(&AssistEntity_TypeInfo, data);
    byte_49FE779 = 1;
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
    sub_1B64C5C(this, 0LL);
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
    sub_1B64C5C(this, 0LL);
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
    sub_1B64C5C(this, 0LL);
  return ent->fields.lv == this->fields.lv;
}