void BattleMessageMaster___ctor(BattleMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C375FD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
    byte_4C375FD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    415,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
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
  il2cpp_array_size_t max_length; // x8
  BattleMessageEntity_array *v11; // x21
  BattleActionData_DisplayMessageData_o *v12; // x23
  unsigned __int64 v13; // x25
  BattleMessageEntity_o *v14; // x24
  BattleActionData_DisplayMessageData_o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4C37601 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_DisplayMessageData_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_LastOrDefault_BattleActionData_DisplayMessageData___);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    byte_4C37601 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
  Entities = BattleMessageMaster__GetEntities(this, id, v8);
  if ( !Entities )
    goto LABEL_17;
  max_length = Entities->max_length;
  v11 = Entities;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
        sub_1C32E84(Entities);
      v14 = v11->m_Items[v13];
      v15 = (BattleActionData_DisplayMessageData_o *)sub_1C32E6C(BattleActionData_DisplayMessageData_TypeInfo);
      BattleActionData_DisplayMessageData___ctor(v15, v14, parser, v12, 0);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v19 = Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v15,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v15;
        sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v15, v16, v17);
      }
      LODWORD(max_length) = v11->max_length;
      ++v13;
      v12 = v15;
      if ( (__int64)v13 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_17:
    sub_1C32E7C(Entities);
  }
LABEL_13:
  Entities = (BattleMessageEntity_array *)System_Linq_Enumerable__LastOrDefault_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                            (const MethodInfo_3109D4C *)Method_System_Linq_Enumerable_LastOrDefault_BattleActionData_DisplayMessageData___);
  if ( Entities )
    BattleActionData_DisplayMessageData__ResetIntervalTime((BattleActionData_DisplayMessageData_o *)Entities, 0);
  if ( !v7 )
    goto LABEL_17;
  return (BattleActionData_DisplayMessageData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v7,
                                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__ToArray__);
}


BattleMessageEntity_array *BattleMessageMaster__GetEntities(
        BattleMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v6; // x0
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v8; // x19
  BattleMessageMaster___c_c *v9; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__object__o *_9__3_0; // x23
  Il2CppObject *v12; // x24
  struct BattleMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  System_Func_object__bool__o *v17; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  BattleMessageMaster___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v22; // x23
  struct BattleMessageMaster___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x0
  BattleMessageMaster___c_c *v27; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x21
  System_Func_object__int__o *_9__3_3; // x22
  Il2CppObject *v30; // x23
  struct BattleMessageMaster___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x21
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0
  __int64 v39; // x21
  int v40; // w27
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 IsOpen; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v52; // x22
  int32_t v53; // w1
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0

  if ( (byte_4C37600 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_BattleMessageEntity__BattleMessageEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
    sub_1C32C20(&System_Func_BattleMessageEntity__BattleMessageEntity__TypeInfo);
    sub_1C32C20(&System_Func_BattleMessageEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_BattleMessageEntity__int__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleMessageEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
    sub_1C32C20(&Method_BattleMessageMaster___c__GetEntities_b__3_0__);
    sub_1C32C20(&Method_BattleMessageMaster___c__GetEntities_b__3_2__);
    sub_1C32C20(&Method_BattleMessageMaster___c__GetEntities_b__3_3__);
    sub_1C32C20(&Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__);
    sub_1C32C20(&BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
    sub_1C32C20(&BattleMessageMaster___c_TypeInfo);
    byte_4C37600 = 1;
  }
  v5 = sub_1C32E6C(BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_67;
  *(_DWORD *)(v5 + 16) = id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
  v9 = BattleMessageMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v9 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v9->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleMessageMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_BattleMessageEntity__BattleMessageEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v12, Method_BattleMessageMaster___c__GetEntities_b__3_0__, 0);
    static_fields = BattleMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_BattleMessageEntity__BattleMessageEntity__o *)_9__3_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_BattleMessageEntity__BattleMessageEntity___);
  v17 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleMessageEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__,
    0);
  v18 = System_Linq_Enumerable__Where_object_(
          v16,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
  v19 = BattleMessageMaster___c_TypeInfo;
  v20 = v18;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v19 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_object__int__o *)v19->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = BattleMessageMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__3_2 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_2, v22, Method_BattleMessageMaster___c__GetEntities_b__3_2__, 0);
    v23 = BattleMessageMaster___c_TypeInfo->static_fields;
    v23->__9__3_2 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v23->__9__3_2, (int32_t)_9__3_2, v24, v25);
  }
  v26 = System_Linq_Enumerable__OrderBy_object__int_(
          v20,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
  v27 = BattleMessageMaster___c_TypeInfo;
  v28 = v26;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v27 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_3 = (System_Func_object__int__o *)v27->static_fields->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = BattleMessageMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__3_3 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_3, v30, Method_BattleMessageMaster___c__GetEntities_b__3_3__, 0);
    v31 = BattleMessageMaster___c_TypeInfo->static_fields;
    v31->__9__3_3 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_3;
    sub_1C32BC4((CGThumbnailListItem_o *)&v31->__9__3_3, (int32_t)_9__3_3, v32, v33);
  }
  v6 = System_Linq_Enumerable__ThenByDescending_object__int_(
         v28,
         (System_Func_TSource__TKey__o *)_9__3_3,
         (const MethodInfo_311C31C *)Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
  if ( !v6 )
    goto LABEL_67;
  klass = v6->klass;
  v35 = v6;
  v36 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleMessageEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo )
    {
      --v36;
      p_offset += 4;
      if ( !v36 )
        goto LABEL_29;
    }
    v38 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_29:
    v38 = sub_1C83438(v6, System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, 0);
  }
  v39 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
  if ( !v39 )
    sub_1C32E7C(0);
  v40 = -1;
  while ( 1 )
  {
    v41 = *(_QWORD *)v39;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_37;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_37:
      v44 = sub_1C83438(v39, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v39, *(_QWORD *)(v44 + 8)) & 1) == 0 )
      break;
    v45 = *(_QWORD *)v39;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleMessageEntity__c **)v47 - 1) != System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_44;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_44:
      v48 = sub_1C83438(v39, System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, 0);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v39, *(_QWORD *)(v48 + 8));
    v52 = IsOpen;
    if ( !IsOpen )
      sub_1C32E7C(0);
    if ( v40 != *(_DWORD *)(IsOpen + 20) )
    {
      v53 = *(_DWORD *)(IsOpen + 28);
      if ( v53 < 1 )
        goto LABEL_51;
      if ( !Master_object )
        sub_1C32E7C(IsOpen);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v53, 0, 0, 0);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_51:
        if ( !v8 )
          sub_1C32E7C(IsOpen);
        items = v8->fields._items;
        v55 = Method_System_Collections_Generic_List_BattleMessageEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1C32E7C(IsOpen);
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)v52,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v57[4] = (Il2CppClass *)v52;
          sub_1C32BC4((CGThumbnailListItem_o *)(v57 + 4), v52, v50, v51);
        }
        v40 = *(_DWORD *)(v52 + 20);
      }
    }
  }
  v58 = *(_QWORD *)v39;
  v59 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
  {
    v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_61;
    }
    v61 = v58 + 16LL * *v60 + 312;
  }
  else
  {
LABEL_61:
    v61 = sub_1C83438(v39, System_IDisposable_TypeInfo, 0);
  }
  v6 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v61)(
                                                      v39,
                                                      *(_QWORD *)(v61 + 8));
  if ( !v8 )
LABEL_67:
    sub_1C32E7C(v6);
  return (BattleMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v8,
                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
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

  if ( (byte_4C375FE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
    byte_4C375FE = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&priority);
  return (BattleMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_339B2F0 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
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

  if ( (byte_4C375FF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
    byte_4C375FF = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
}


void BattleMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37602 & 1) == 0 )
  {
    sub_1C32C20(&BattleMessageMaster___c_TypeInfo);
    byte_4C37602 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleMessageMaster___c_TypeInfo->static_fields->__9 = (struct BattleMessageMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleMessageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return ent->fields.idx;
}


int32_t BattleMessageMaster___c___GetEntities_b__3_3(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C32E7C(this);
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