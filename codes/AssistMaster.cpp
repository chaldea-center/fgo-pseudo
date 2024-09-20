void __fastcall AssistMaster___ctor(AssistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AD9D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
    byte_4A5AD9D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    356,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
}


AssistEntity_o *__fastcall AssistMaster__GetAssistEntity(
        AssistMaster_o *this,
        int32_t assistId,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4A5ADA0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76128336);
    sub_1B885B0(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1B885B0(&Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__);
    sub_1B885B0(&AssistMaster___c__DisplayClass5_0_TypeInfo);
    byte_4A5ADA0 = 1;
  }
  v7 = sub_1B887FC(AssistMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_DWORD *)(v7 + 16) = lv;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v10);
  v12 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__,
    0LL);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v12,
                             (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76128336);
}


System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetAvailableEntityList(
        AssistMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  AssistMaster___c_c *v4; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  System_Converter_TInput__TOutput__o *_9__8_0; // x22
  Il2CppObject *v7; // x23
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_TOutput__o *v11; // x21
  Il2CppObject *v12; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v20; // x1
  __int64 v21; // x21
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  Il2CppObject *CurrentLevelEntity; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x1
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0

  if ( (byte_4A5ADA2 & 1) == 0 )
  {
    sub_1B885B0(&AssistMaster_AssistIdComparer_TypeInfo);
    sub_1B885B0(&System_Converter_DataEntityBase__AssistEntity__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Distinct_AssistEntity___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_AssistEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    sub_1B885B0(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___);
    sub_1B885B0(&Method_AssistMaster___c__GetAvailableEntityList_b__8_0__);
    sub_1B885B0(&AssistMaster___c_TypeInfo);
    byte_4A5ADA2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  v4 = AssistMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v4 = AssistMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Converter_TInput__TOutput__o *)v4->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = AssistMaster___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__8_0 = (System_Converter_TInput__TOutput__o *)sub_1B887FC(System_Converter_DataEntityBase__AssistEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__8_0, v7, Method_AssistMaster___c__GetAvailableEntityList_b__8_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Converter_DataEntityBase__AssistEntity__o *)_9__8_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v9, v10);
  }
  v11 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__8_0,
          (const MethodInfo_2F042F8 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___);
  v12 = (Il2CppObject *)sub_1B887FC(AssistMaster_AssistIdComparer_TypeInfo);
  System_Object___ctor(v12, 0LL);
  v13 = System_Linq_Enumerable__Distinct_object__48884956(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v12,
          (const MethodInfo_2E9ECDC *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v13 )
    sub_1B8880C(0LL, v14);
  klass = v13->klass;
  v16 = v13;
  v17 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BDA590(v13, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v16,
          *(_QWORD *)(p_method + 8));
  if ( !v21 )
    sub_1B8880C(0LL, v20);
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_21;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_21:
      v25 = sub_1BDA590(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_28;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_28:
      v29 = sub_1BDA590(v21, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    if ( !v30 )
      sub_1B8880C(0LL, v31);
    CurrentLevelEntity = (Il2CppObject *)AssistMaster__GetCurrentLevelEntity(this, *(_DWORD *)(v30 + 16), v32);
    v36 = CurrentLevelEntity;
    if ( CurrentLevelEntity )
    {
      if ( !v3 )
        sub_1B8880C(CurrentLevelEntity, CurrentLevelEntity);
      items = v3->fields._items;
      v38 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(CurrentLevelEntity, CurrentLevelEntity);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          CurrentLevelEntity,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v36;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v36, v34, v35);
      }
    }
  }
  v41 = *(_QWORD *)v21;
  v42 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_41;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_41:
    v44 = sub_1BDA590(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v21, *(_QWORD *)(v44 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v3;
}


AssistEntity_o *__fastcall AssistMaster__GetCurrentLevelEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  AssistMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v9; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v13; // x0
  AssistMaster___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_object__bool__o *_9__4_1; // x20
  Il2CppObject *v17; // x21
  struct AssistMaster___c_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5AD9F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76128336);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_1B885B0(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_AssistEntity__int__TypeInfo);
    sub_1B885B0(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__);
    sub_1B885B0(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__);
    sub_1B885B0(&AssistMaster___c_TypeInfo);
    byte_4A5AD9F = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v6 = AssistMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v6 = AssistMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v6->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = AssistMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v9, Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_AssistEntity__int__o *)_9__4_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v11, v12);
  }
  v13 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v7,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v14 = AssistMaster___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v14 = AssistMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__bool__o *)v14->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = AssistMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__4_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__4_1, v17, Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__, 0LL);
    v18 = AssistMaster___c_TypeInfo->static_fields;
    v18->__9__4_1 = (struct System_Func_AssistEntity__bool__o *)_9__4_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->__9__4_1, (int32_t)_9__4_1, v19, v20);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                             v15,
                             (System_Func_TSource__bool__o *)_9__4_1,
                             (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76128336);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetEntity(
        AssistMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5AD9B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
    byte_4A5AD9B = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (AssistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_311DC8C *)Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
}


System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetEntityListFromAssistId(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  AssistMaster___c_c *v9; // x0
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v11; // x22
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4A5AD9E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_AssistEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_AssistEntity___);
    sub_1B885B0(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_DataEntityBase__AssistEntity__TypeInfo);
    sub_1B885B0(&Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__);
    sub_1B885B0(&Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__);
    sub_1B885B0(&AssistMaster___c__DisplayClass3_0_TypeInfo);
    sub_1B885B0(&AssistMaster___c_TypeInfo);
    byte_4A5AD9E = 1;
  }
  v5 = sub_1B887FC(AssistMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = assistId;
  list = this->fields.list;
  v9 = AssistMaster___c_TypeInfo;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v9 = AssistMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v9->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = AssistMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_DataEntityBase__AssistEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v11, Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__AssistEntity__o *)_9__3_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___);
  v16 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__,
    0LL);
  v17 = System_Linq_Enumerable__Where_object_(
          v15,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_AssistEntity___);
  return (System_Collections_Generic_List_AssistEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                              v17,
                                                              (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
}


AssistEntity_o *__fastcall AssistMaster__GetMaxLevelEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  AssistMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v9; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_4A5ADA1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_1B885B0(&System_Func_AssistEntity__int__TypeInfo);
    sub_1B885B0(&Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__);
    sub_1B885B0(&AssistMaster___c_TypeInfo);
    byte_4A5ADA1 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v6 = AssistMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v6 = AssistMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__int__o *)v6->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = AssistMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__6_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__6_0, v9, Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_AssistEntity__int__o *)_9__6_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TKey__o *)_9__6_0,
                                                               (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v13,
                             (const MethodInfo_2EA3600 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
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

  if ( (byte_4A5AD9C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
    byte_4A5AD9C = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
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
    sub_1B8880C(this, x);
  return x->fields.id == y->fields.id;
}


int32_t __fastcall AssistMaster_AssistIdComparer__GetHashCode(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_1B8880C(this, 0LL);
  return System_Int32__GetHashCode((_DWORD)obj + 16, 0LL);
}


void __fastcall AssistMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5ADA3 & 1) == 0 )
  {
    sub_1B885B0(&AssistMaster___c_TypeInfo);
    byte_4A5ADA3 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(AssistMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AssistMaster___c_TypeInfo->static_fields->__9 = (struct AssistMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)AssistMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4A5ADA5 & 1) == 0 )
  {
    sub_1B885B0(&AssistEntity_TypeInfo);
    byte_4A5ADA5 = 1;
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
    sub_1B8880C(this, 0LL);
  return ent->fields.lv;
}


bool __fastcall AssistMaster___c___GetCurrentLevelEntity_b__4_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1B8880C(this, 0LL);
  return AssistEntity__IsOpen(ent, (const MethodInfo *)ent);
}


AssistEntity_o *__fastcall AssistMaster___c___GetEntityListFromAssistId_b__3_0(
        AssistMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A5ADA4 & 1) == 0 )
  {
    sub_1B885B0(&AssistEntity_TypeInfo);
    byte_4A5ADA4 = 1;
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return ent->fields.lv == this->fields.lv;
}