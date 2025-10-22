void BattleMessageMaster___ctor(BattleMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C56999 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
    byte_4C56999 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    415,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
}


BattleActionData_DisplayMessageData_array *BattleMessageMaster__GetDisplayMessageArray(
        BattleMessageMaster_o *this,
        int32_t id,
        ParseBattleMessage_o *parser,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  const MethodInfo *v8; // x2
  BattleMessageEntity_array *Entities; // x0
  __int64 v10; // x1
  il2cpp_array_size_t max_length; // x8
  BattleMessageEntity_array *v12; // x21
  BattleActionData_DisplayMessageData_o *v13; // x23
  unsigned __int64 v14; // x25
  BattleMessageEntity_o *v15; // x24
  BattleActionData_DisplayMessageData_o *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4C5699D & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_DisplayMessageData_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_LastOrDefault_BattleActionData_DisplayMessageData___);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    byte_4C5699D = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
  Entities = BattleMessageMaster__GetEntities(this, id, v8);
  if ( !Entities )
    goto LABEL_17;
  max_length = Entities->max_length;
  v12 = Entities;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C3E7C8(Entities, v10);
      v15 = v12->m_Items[v14];
      v16 = (BattleActionData_DisplayMessageData_o *)sub_1C3E7B0(BattleActionData_DisplayMessageData_TypeInfo);
      BattleActionData_DisplayMessageData___ctor(v16, v15, parser, v13, 0);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v20 = Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v16,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v16;
        sub_1C3E508((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v16, v17, v18);
      }
      LODWORD(max_length) = v12->max_length;
      ++v14;
      v13 = v16;
      if ( (__int64)v14 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_17:
    sub_1C3E7C0(Entities, v10);
  }
LABEL_13:
  Entities = (BattleMessageEntity_array *)System_Linq_Enumerable__LastOrDefault_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                            (const MethodInfo_31264A8 *)Method_System_Linq_Enumerable_LastOrDefault_BattleActionData_DisplayMessageData___);
  if ( Entities )
    BattleActionData_DisplayMessageData__ResetIntervalTime((BattleActionData_DisplayMessageData_o *)Entities, 0);
  if ( !v7 )
    goto LABEL_17;
  return (BattleActionData_DisplayMessageData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v7,
                                                        (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__ToArray__);
}


BattleMessageEntity_array *BattleMessageMaster__GetEntities(
        BattleMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v6; // x0
  __int64 v7; // x1
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v9; // x19
  BattleMessageMaster___c_c *v10; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__object__o *_9__3_0; // x23
  Il2CppObject *v13; // x24
  struct BattleMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x21
  System_Func_object__bool__o *v18; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  BattleMessageMaster___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v23; // x23
  struct BattleMessageMaster___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x0
  BattleMessageMaster___c_c *v28; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x21
  System_Func_object__int__o *_9__3_3; // x22
  Il2CppObject *v31; // x23
  struct BattleMessageMaster___c_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x21
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x21
  int v42; // w27
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 IsOpen; // x0
  __int64 v52; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v55; // x22
  __int64 v56; // x1
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0

  if ( (byte_4C5699C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_BattleMessageEntity__BattleMessageEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
    sub_1C3E564(&System_Func_BattleMessageEntity__BattleMessageEntity__TypeInfo);
    sub_1C3E564(&System_Func_BattleMessageEntity__bool__TypeInfo);
    sub_1C3E564(&System_Func_BattleMessageEntity__int__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleMessageEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
    sub_1C3E564(&Method_BattleMessageMaster___c__GetEntities_b__3_0__);
    sub_1C3E564(&Method_BattleMessageMaster___c__GetEntities_b__3_2__);
    sub_1C3E564(&Method_BattleMessageMaster___c__GetEntities_b__3_3__);
    sub_1C3E564(&Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__);
    sub_1C3E564(&BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
    sub_1C3E564(&BattleMessageMaster___c_TypeInfo);
    byte_4C5699C = 1;
  }
  v5 = sub_1C3E7B0(BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_67;
  *(_DWORD *)(v5 + 16) = id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
  v10 = BattleMessageMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v10 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v10->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleMessageMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleMessageEntity__BattleMessageEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v13, Method_BattleMessageMaster___c__GetEntities_b__3_0__, 0);
    static_fields = BattleMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_BattleMessageEntity__BattleMessageEntity__o *)_9__3_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_BattleMessageEntity__BattleMessageEntity___);
  v18 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleMessageEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__,
    0);
  v19 = System_Linq_Enumerable__Where_object_(
          v17,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
  v20 = BattleMessageMaster___c_TypeInfo;
  v21 = v19;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v20 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_object__int__o *)v20->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleMessageMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__3_2 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_2, v23, Method_BattleMessageMaster___c__GetEntities_b__3_2__, 0);
    v24 = BattleMessageMaster___c_TypeInfo->static_fields;
    v24->__9__3_2 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_2;
    sub_1C3E508((CGThumbnailListItem_o *)&v24->__9__3_2, (int32_t)_9__3_2, v25, v26);
  }
  v27 = System_Linq_Enumerable__OrderBy_object__int_(
          v21,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_31292A0 *)Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
  v28 = BattleMessageMaster___c_TypeInfo;
  v29 = v27;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v28 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_3 = (System_Func_object__int__o *)v28->static_fields->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = BattleMessageMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__3_3 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_3, v31, Method_BattleMessageMaster___c__GetEntities_b__3_3__, 0);
    v32 = BattleMessageMaster___c_TypeInfo->static_fields;
    v32->__9__3_3 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_3;
    sub_1C3E508((CGThumbnailListItem_o *)&v32->__9__3_3, (int32_t)_9__3_3, v33, v34);
  }
  v6 = System_Linq_Enumerable__ThenByDescending_object__int_(
         v29,
         (System_Func_TSource__TKey__o *)_9__3_3,
         (const MethodInfo_3138A78 *)Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
  if ( !v6 )
    goto LABEL_67;
  klass = v6->klass;
  v36 = v6;
  v37 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleMessageEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_29;
    }
    v39 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_29:
    v39 = sub_1C8ED7C(v6, System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, 0);
  }
  v41 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
  if ( !v41 )
    sub_1C3E7C0(0, v40);
  v42 = -1;
  while ( 1 )
  {
    v43 = *(_QWORD *)v41;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_37;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_37:
      v46 = sub_1C8ED7C(v41, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v41, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v47 = *(_QWORD *)v41;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleMessageEntity__c **)v49 - 1) != System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_44;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_44:
      v50 = sub_1C8ED7C(v41, System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, 0);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v41, *(_QWORD *)(v50 + 8));
    v55 = IsOpen;
    if ( !IsOpen )
      sub_1C3E7C0(0, v52);
    if ( v42 != *(_DWORD *)(IsOpen + 20) )
    {
      v56 = *(unsigned int *)(IsOpen + 28);
      if ( (int)v56 < 1 )
        goto LABEL_51;
      if ( !Master_object )
        sub_1C3E7C0(IsOpen, v56);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v56, 0, 0, 0);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_51:
        if ( !v9 )
          sub_1C3E7C0(IsOpen, v56);
        items = v9->fields._items;
        v58 = Method_System_Collections_Generic_List_BattleMessageEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          sub_1C3E7C0(IsOpen, v56);
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)v55,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        }
        else
        {
          v60 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v60[4] = (Il2CppClass *)v55;
          sub_1C3E508((CGThumbnailListItem_o *)(v60 + 4), v55, v53, v54);
        }
        v42 = *(_DWORD *)(v55 + 20);
      }
    }
  }
  v61 = *(_QWORD *)v41;
  v62 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
  {
    v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      v63 += 4;
      if ( !v62 )
        goto LABEL_61;
    }
    v64 = v61 + 16LL * *v63 + 312;
  }
  else
  {
LABEL_61:
    v64 = sub_1C8ED7C(v41, System_IDisposable_TypeInfo, 0);
  }
  v6 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v64)(
                                                      v41,
                                                      *(_QWORD *)(v64 + 8));
  if ( !v9 )
LABEL_67:
    sub_1C3E7C0(v6, v7);
  return (BattleMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v9,
                                        (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageEntity_o *BattleMessageMaster__GetEntity(
        BattleMessageMaster_o *this,
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C5699A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
    byte_4C5699A = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&priority);
  return (BattleMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_33B7A10 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool BattleMessageMaster__TryGetEntity(
        BattleMessageMaster_o *this,
        BattleMessageEntity_o **entity,
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C5699B & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
    byte_4C5699B = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
}


void BattleMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C5699E & 1) == 0 )
  {
    sub_1C3E564(&BattleMessageMaster___c_TypeInfo);
    byte_4C5699E = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(BattleMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleMessageMaster___c_TypeInfo->static_fields->__9 = (struct BattleMessageMaster___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)BattleMessageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleMessageMaster___c___ctor(BattleMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleMessageEntity_o *BattleMessageMaster___c___GetEntities_b__3_0(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  return ent;
}


int32_t BattleMessageMaster___c___GetEntities_b__3_2(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C3E7C0(this, 0);
  return ent->fields.idx;
}


int32_t BattleMessageMaster___c___GetEntities_b__3_3(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C3E7C0(this, 0);
  return ent->fields.priority;
}


void BattleMessageMaster___c__DisplayClass3_0___ctor(
        BattleMessageMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleMessageMaster___c__DisplayClass3_0___GetEntities_b__1(
        BattleMessageMaster___c__DisplayClass3_0_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  return ent && ent->fields.id == this->fields.id;
}