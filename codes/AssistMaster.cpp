void __fastcall AssistMaster___ctor(AssistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC15F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
    byte_4BDC15F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    360,
    (const MethodInfo_325E55C *)Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
}


AssistEntity_o *__fastcall AssistMaster__GetAssistEntity(
        AssistMaster_o *this,
        int32_t assistId,
        int32_t lv,
        const MethodInfo *method)
{
  AssistMaster___c__DisplayClass5_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4BDC162 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____77669832);
    sub_1C21E38(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C21E38(&Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__);
    sub_1C21E38(&AssistMaster___c__DisplayClass5_0_TypeInfo);
    byte_4BDC162 = 1;
  }
  v7 = (AssistMaster___c__DisplayClass5_0_o *)sub_1C22084(AssistMaster___c__DisplayClass5_0_TypeInfo);
  AssistMaster___c__DisplayClass5_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  v7->fields.lv = lv;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v10);
  v12 = (System_Func_object__bool__o *)sub_1C22084(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__,
    0LL);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50149120(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v12,
                             (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____77669832);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_TOutput__o *v15; // x21
  AssistMaster_AssistIdComparer_o *v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v24; // x1
  __int64 v25; // x21
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  Il2CppObject *CurrentLevelEntity; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0

  if ( (byte_4BDC164 & 1) == 0 )
  {
    sub_1C21E38(&AssistMaster_AssistIdComparer_TypeInfo);
    sub_1C21E38(&System_Converter_AssistEntity__AssistEntity__TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Distinct_AssistEntity___);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssistEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    sub_1C21E38(&Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___);
    sub_1C21E38(&Method_AssistMaster___c__GetAvailableEntityList_b__8_0__);
    sub_1C21E38(&AssistMaster___c_TypeInfo);
    byte_4BDC164 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
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
    _9__8_0 = (System_Converter_TInput__TOutput__o *)sub_1C22084(System_Converter_AssistEntity__AssistEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__8_0, v7, Method_AssistMaster___c__GetAvailableEntityList_b__8_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Converter_AssistEntity__AssistEntity__o *)_9__8_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__8_0,
          (const MethodInfo_3036358 *)Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___);
  v16 = (AssistMaster_AssistIdComparer_o *)sub_1C22084(AssistMaster_AssistIdComparer_TypeInfo);
  AssistMaster_AssistIdComparer___ctor(v16, 0LL);
  v17 = System_Linq_Enumerable__Distinct_object__50123732(
          (System_Collections_Generic_IEnumerable_TSource__o *)v15,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v16,
          (const MethodInfo_2FCD3D4 *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v17 )
    sub_1C22094(0LL, v18);
  klass = v17->klass;
  v20 = v17;
  v21 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C73E18(v17, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0LL);
  }
  v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v20,
          *(_QWORD *)(p_method + 8));
  if ( !v25 )
    sub_1C22094(0LL, v24);
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_21;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_21:
      v29 = sub_1C73E18(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v25;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_28;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_28:
      v33 = sub_1C73E18(v25, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0LL);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
    if ( !v34 )
      sub_1C22094(0LL, v35);
    CurrentLevelEntity = (Il2CppObject *)AssistMaster__GetCurrentLevelEntity(this, *(_DWORD *)(v34 + 16), v36);
    v44 = (int64_t)CurrentLevelEntity;
    if ( CurrentLevelEntity )
    {
      if ( !v3 )
        sub_1C22094(CurrentLevelEntity, CurrentLevelEntity);
      items = v3->fields._items;
      v46 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C22094(CurrentLevelEntity, CurrentLevelEntity);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          CurrentLevelEntity,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v44;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v48 + 4), v44, v38, v39, v40, v41, v42, v43);
      }
    }
  }
  v49 = *(_QWORD *)v25;
  v50 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_41;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_41:
    v52 = sub_1C73E18(v25, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v52)(v25, *(_QWORD *)(v52 + 8));
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x0
  AssistMaster___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_object__bool__o *_9__4_1; // x20
  Il2CppObject *v21; // x21
  struct AssistMaster___c_StaticFields *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4BDC161 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____77669832);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_1C21E38(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C21E38(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C21E38(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__);
    sub_1C21E38(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__);
    sub_1C21E38(&AssistMaster___c_TypeInfo);
    byte_4BDC161 = 1;
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
    _9__4_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v9, Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_AssistEntity__int__o *)_9__4_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v7,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v18 = AssistMaster___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v18 = AssistMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__bool__o *)v18->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = AssistMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__4_1 = (System_Func_object__bool__o *)sub_1C22084(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__4_1, v21, Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__, 0LL);
    v22 = AssistMaster___c_TypeInfo->static_fields;
    v22->__9__4_1 = (struct System_Func_AssistEntity__bool__o *)_9__4_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v22->__9__4_1, (int64_t)_9__4_1, v23, v24, v25, v26, v27, v28);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50149120(
                             v19,
                             (System_Func_TSource__bool__o *)_9__4_1,
                             (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____77669832);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetEntity(
        AssistMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDC15D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
    byte_4BDC15D = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (AssistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_3260880 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
}


System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetEntityListFromAssistId(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  AssistMaster___c__DisplayClass3_0_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  AssistMaster___c_c *v9; // x0
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v11; // x22
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  System_Func_object__bool__o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4BDC160 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_AssistEntity__AssistEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_AssistEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_AssistEntity___);
    sub_1C21E38(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C21E38(&System_Func_AssistEntity__AssistEntity__TypeInfo);
    sub_1C21E38(&Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__);
    sub_1C21E38(&Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__);
    sub_1C21E38(&AssistMaster___c__DisplayClass3_0_TypeInfo);
    sub_1C21E38(&AssistMaster___c_TypeInfo);
    byte_4BDC160 = 1;
  }
  v5 = (AssistMaster___c__DisplayClass3_0_o *)sub_1C22084(AssistMaster___c__DisplayClass3_0_TypeInfo);
  AssistMaster___c__DisplayClass3_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  v5->fields.assistId = assistId;
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
    _9__3_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_AssistEntity__AssistEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v11, Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_AssistEntity__AssistEntity__o *)_9__3_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_AssistEntity__AssistEntity___);
  v20 = (System_Func_object__bool__o *)sub_1C22084(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v5,
    Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__,
    0LL);
  v21 = System_Linq_Enumerable__Where_object_(
          v19,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
  return (System_Collections_Generic_List_AssistEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                              v21,
                                                              (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4BDC163 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_1C21E38(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C21E38(&Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__);
    sub_1C21E38(&AssistMaster___c_TypeInfo);
    byte_4BDC163 = 1;
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
    _9__6_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__6_0, v9, Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_AssistEntity__int__o *)_9__6_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TKey__o *)_9__6_0,
                                                               (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v17,
                             (const MethodInfo_2FD26B0 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
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

  if ( (byte_4BDC15E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
    byte_4BDC15E = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
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
    sub_1C22094(this, x);
  return x->fields.id == y->fields.id;
}


int32_t __fastcall AssistMaster_AssistIdComparer__GetHashCode(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_1C22094(this, 0LL);
  return System_Int32__GetHashCode((_DWORD)obj + 16, 0LL);
}


void __fastcall AssistMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC165 & 1) == 0 )
  {
    sub_1C21E38(&AssistMaster___c_TypeInfo);
    byte_4BDC165 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(AssistMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AssistMaster___c_TypeInfo->static_fields->__9 = (struct AssistMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)AssistMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall AssistMaster___c___ctor(AssistMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


AssistEntity_o *__fastcall AssistMaster___c___GetAvailableEntityList_b__8_0(
        AssistMaster___c_o *this,
        AssistEntity_o *e,
        const MethodInfo *method)
{
  return e;
}


int32_t __fastcall AssistMaster___c___GetCurrentLevelEntity_b__4_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C22094(this, 0LL);
  return ent->fields.lv;
}


bool __fastcall AssistMaster___c___GetCurrentLevelEntity_b__4_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C22094(this, 0LL);
  return AssistEntity__IsOpen(ent, 0LL);
}


AssistEntity_o *__fastcall AssistMaster___c___GetEntityListFromAssistId_b__3_0(
        AssistMaster___c_o *this,
        AssistEntity_o *data,
        const MethodInfo *method)
{
  return data;
}


int32_t __fastcall AssistMaster___c___GetMaxLevelEntity_b__6_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
  return ent->fields.lv == this->fields.lv;
}