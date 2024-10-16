void __fastcall EventCommandAssistMaster___ctor(EventCommandAssistMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4AB5C7A & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v3);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v4);
    byte_4AB5C7A = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_31B6460 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.uniqueIdCacheList = (struct System_Collections_Generic_Dictionary_int__int____o *)v5;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.uniqueIdCacheList, (int32_t)v5, v6, v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    451,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventCommandAssistMaster__CreateUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_HashSet_int__o *v13; // x19
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v17; // x20
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v21; // x1
  __int64 v22; // x20
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0

  if ( (byte_4AB5C77 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_int___ctor__, v7);
    sub_1BAB41C(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v9);
    sub_1BAB41C(&System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo, v10);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo, v11);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_4AB5C77 = 1;
  }
  v13 = (System_Collections_Generic_HashSet_int__o *)sub_1BAB668(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v13,
    (const MethodInfo_3401638 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v14 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2EED82C *)Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___);
  if ( !v14 )
    sub_1BAB678(0LL, v15);
  klass = v14->klass;
  v17 = v14;
  v18 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventCommandAssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BFD3FC(v14, System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo, 0LL);
  }
  v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v17,
          *(_QWORD *)(p_method + 8));
  if ( !v22 )
    sub_1BAB678(0LL, v21);
  while ( 1 )
  {
    v23 = *(_QWORD *)v22;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_15;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_15:
      v26 = sub_1BFD3FC(v22, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v27 = *(_QWORD *)v22;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventCommandAssistEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_22;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_22:
      v30 = sub_1BFD3FC(v22, System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v22, *(_QWORD *)(v30 + 8));
    if ( !v31 )
      sub_1BAB678(0LL, v32);
    if ( *(_DWORD *)(v31 + 24) == eventId )
    {
      if ( !v13 )
        sub_1BAB678(v31, v32);
      System_Collections_Generic_HashSet_int___Add(
        v13,
        *(_DWORD *)(v31 + 16),
        (const MethodInfo_340283C *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v33 = *(_QWORD *)v22;
  v34 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
  {
    v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_32;
    }
    v36 = v33 + 16LL * *v35 + 312;
  }
  else
  {
LABEL_32:
    v36 = sub_1BFD3FC(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v36)(v22, *(_QWORD *)(v36 + 8));
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v13,
           (const MethodInfo_2EFCF54 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetAllEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t beforeClearQuestId,
        bool isIncludUnreleased,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x22
  const MethodInfo *v12; // x2
  Il2CppObject *UniqueIdList; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x5
  void *monitor; // x8
  Il2CppObject *v17; // x23
  unsigned __int64 v18; // x25
  bool v19; // w24
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppObject *v25; // x1
  Il2CppClass **v26; // x0

  if ( (byte_4AB5C75 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v9);
    sub_1BAB41C(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v10);
    byte_4AB5C75 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetUniqueIdList(this, eventId, v12);
  if ( !UniqueIdList )
LABEL_15:
    sub_1BAB678(UniqueIdList, v14);
  monitor = UniqueIdList[1].monitor;
  v17 = UniqueIdList;
  if ( (int)monitor >= 1 )
  {
    v18 = 0LL;
    v19 = isIncludUnreleased;
    do
    {
      if ( v18 >= (unsigned int)monitor )
        sub_1BAB680(UniqueIdList, v14);
      UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetCurrentEntity(
                                       this,
                                       eventId,
                                       *((_DWORD *)&v17[2].klass + v18),
                                       beforeClearQuestId,
                                       v19,
                                       v15);
      if ( UniqueIdList )
      {
        if ( !v11 )
          goto LABEL_15;
        items = v11->fields._items;
        v23 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v11->fields._size;
        v25 = UniqueIdList;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            UniqueIdList,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v25;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v25, v20, v21);
        }
      }
      LODWORD(monitor) = v17[1].monitor;
      ++v18;
    }
    while ( (__int64)v18 < (int)monitor );
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
EventCommandAssistEntity_o *__fastcall EventCommandAssistMaster__GetCurrentEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        int32_t beforeClearQuestId,
        bool isIncludUnreleased,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  EventCommandAssistEntity_o *EntityList; // x0
  __int64 v18; // x1
  EventCommandAssistMaster___c_c *v19; // x8
  System_Collections_Generic_List_object__o *v20; // x21
  System_Comparison_T__o *_9__1_0; // x22
  Il2CppObject *v22; // x23
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int size; // w23
  int32_t v27; // w22
  const MethodInfo *v28; // x2

  if ( (byte_4AB5C73 & 1) == 0 )
  {
    sub_1BAB41C(&System_Comparison_EventCommandAssistEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_System_Linq_Enumerable_First_EventCommandAssistEntity___, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v14);
    sub_1BAB41C(&Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__, v15);
    sub_1BAB41C(&EventCommandAssistMaster___c_TypeInfo, v16);
    byte_4AB5C73 = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v19 = EventCommandAssistMaster___c_TypeInfo;
  v20 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v19 = EventCommandAssistMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Comparison_T__o *)v19->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = EventCommandAssistMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_1BAB668(System_Comparison_EventCommandAssistEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_0, v22, Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__, 0LL);
    static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__1_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v24, v25);
  }
  if ( !v20 )
LABEL_19:
    sub_1BAB678(EntityList, v18);
  System_Collections_Generic_List_object___Sort_55899008(
    v20,
    _9__1_0,
    (const MethodInfo_354F380 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v20->fields._size;
  if ( size < 1 )
  {
LABEL_15:
    if ( isIncludUnreleased )
      return (EventCommandAssistEntity_o *)System_Linq_Enumerable__First_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                             (const MethodInfo_2EE5674 *)Method_System_Linq_Enumerable_First_EventCommandAssistEntity___);
    else
      return 0LL;
  }
  else
  {
    v27 = 0;
    while ( 1 )
    {
      EntityList = (EventCommandAssistEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   v20,
                                                   v27,
                                                   (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( !EntityList )
        goto LABEL_19;
      if ( EventCommandAssistEntity__IsOpen(EntityList, beforeClearQuestId, v28) )
        return (EventCommandAssistEntity_o *)System_Collections_Generic_List_object___get_Item(
                                               v20,
                                               v27,
                                               (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( size == ++v27 )
        goto LABEL_15;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
EventCommandAssistEntity_o *__fastcall EventCommandAssistMaster__GetEntity(
        EventCommandAssistMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB5C7B & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4AB5C7B = 1;
  }
  PK = (Il2CppObject *)EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventCommandAssistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31640E8 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x22
  System_Collections_ObjectModel_Collection_T__o *v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4AB5C72 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BAB41C(&EventCommandAssistEntity_TypeInfo, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v10);
    sub_1BAB41C(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v11);
    byte_4AB5C72 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v13 = list;
      methodPtr_low = LOBYTE(EventCommandAssistEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventCommandAssistEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventCommandAssistEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list[1].klass) == eventId && LODWORD(list->fields.items) == id )
      {
        if ( !v12 )
          break;
        items = v12->fields._items;
        v22 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)list,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v13;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v13, v18, v19);
        }
      }
      if ( v16 == ++v17 )
        return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v12;
    }
LABEL_19:
    sub_1BAB678(list, v13);
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
EventCommandAssistEntity_o *__fastcall EventCommandAssistMaster__GetMaxLevelEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventCommandAssistEntity__o *EntityList; // x0
  EventCommandAssistMaster___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__int__o *_9__8_0; // x20
  Il2CppObject *v15; // x21
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_4AB5C79 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___, v7);
    sub_1BAB41C(&System_Func_EventCommandAssistEntity__int__TypeInfo, v8);
    sub_1BAB41C(&Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__, v9);
    sub_1BAB41C(&EventCommandAssistMaster___c_TypeInfo, v10);
    byte_4AB5C79 = 1;
  }
  EntityList = EventCommandAssistMaster__GetEntityList(this, eventId, assistId, method);
  v12 = EventCommandAssistMaster___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v12 = EventCommandAssistMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__int__o *)v12->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = EventCommandAssistMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_1BAB668(System_Func_EventCommandAssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_0, v15, Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__, 0LL);
    static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_EventCommandAssistEntity__int__o *)_9__8_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TKey__o *)_9__8_0,
                                                               (const MethodInfo_2EEE1FC *)Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___);
  return (EventCommandAssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                         v19,
                                         (const MethodInfo_2EE74A0 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventCommandAssistMaster__GetUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *uniqueIdCacheList; // x0
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_Dictionary_int__int____o *v9; // x21

  if ( (byte_4AB5C78 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v6);
    byte_4AB5C78 = 1;
  }
  uniqueIdCacheList = (Il2CppObject *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)uniqueIdCacheList,
          eventId,
          (const MethodInfo_31B7028 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    v9 = this->fields.uniqueIdCacheList;
    uniqueIdCacheList = (Il2CppObject *)EventCommandAssistMaster__CreateUniqueIdList(this, eventId, v8);
    if ( !v9 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v9,
      eventId,
      uniqueIdCacheList,
      (const MethodInfo_31B6E20 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  uniqueIdCacheList = (Il2CppObject *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
LABEL_9:
    sub_1BAB678(uniqueIdCacheList, *(_QWORD *)&eventId);
  return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                 (System_Collections_Generic_Dictionary_int__object__o *)uniqueIdCacheList,
                                 eventId,
                                 (const MethodInfo_31B6D94 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetValidEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x22
  const MethodInfo *v10; // x2
  Il2CppObject *UniqueIdList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5
  void *monitor; // x8
  Il2CppObject *v15; // x23
  unsigned __int64 i; // x24
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppObject *v22; // x1
  Il2CppClass **v23; // x0

  if ( (byte_4AB5C74 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v7);
    sub_1BAB41C(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v8);
    byte_4AB5C74 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetUniqueIdList(this, eventId, v10);
  if ( !UniqueIdList )
LABEL_15:
    sub_1BAB678(UniqueIdList, v12);
  monitor = UniqueIdList[1].monitor;
  v15 = UniqueIdList;
  if ( (int)monitor >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)monitor; ++i )
    {
      if ( i >= (unsigned int)monitor )
        sub_1BAB680(UniqueIdList, v12);
      UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetCurrentEntity(
                                       this,
                                       eventId,
                                       *((_DWORD *)&v15[2].klass + i),
                                       beforeClearQuestId,
                                       0,
                                       v13);
      if ( UniqueIdList )
      {
        if ( !v9 )
          goto LABEL_15;
        items = v9->fields._items;
        v20 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v9->fields._size;
        v22 = UniqueIdList;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            UniqueIdList,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v22;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
        }
      }
      LODWORD(monitor) = v15[1].monitor;
    }
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCommandAssistMaster__IsEnableEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  EventCommandAssistEntity_o *EntityList; // x0
  __int64 v15; // x1
  EventCommandAssistMaster___c_c *v16; // x8
  System_Collections_Generic_List_object__o *v17; // x20
  System_Comparison_T__o *_9__4_0; // x21
  Il2CppObject *v19; // x22
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int size; // w22
  int32_t v24; // w21
  bool v25; // w24
  const MethodInfo *v26; // x2

  if ( (byte_4AB5C76 & 1) == 0 )
  {
    sub_1BAB41C(&System_Comparison_EventCommandAssistEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v11);
    sub_1BAB41C(&Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__, v12);
    sub_1BAB41C(&EventCommandAssistMaster___c_TypeInfo, v13);
    byte_4AB5C76 = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v16 = EventCommandAssistMaster___c_TypeInfo;
  v17 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v16 = EventCommandAssistMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v16->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = EventCommandAssistMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1BAB668(System_Comparison_EventCommandAssistEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v19, Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__, 0LL);
    static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__4_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v21, v22);
  }
  if ( !v17 )
    goto LABEL_18;
  System_Collections_Generic_List_object___Sort_55899008(
    v17,
    _9__4_0,
    (const MethodInfo_354F380 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v17->fields._size;
  if ( size >= 1 )
  {
    v24 = 0;
    v25 = 1;
    while ( 1 )
    {
      EntityList = (EventCommandAssistEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   v17,
                                                   v24,
                                                   (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( !EntityList )
        break;
      if ( !EventCommandAssistEntity__IsOpen(EntityList, beforeClearQuestId, v26) )
      {
        v25 = ++v24 < size;
        if ( size != v24 )
          continue;
      }
      return v25;
    }
LABEL_18:
    sub_1BAB678(EntityList, v15);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCommandAssistMaster__TryGetEntity(
        EventCommandAssistMaster_o *this,
        EventCommandAssistEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB5C7C & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__,
      entity);
    byte_4AB5C7C = 1;
  }
  PK = (Il2CppObject *)EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__);
}


void __fastcall EventCommandAssistMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB5C7D & 1) == 0 )
  {
    sub_1BAB41C(&EventCommandAssistMaster___c_TypeInfo, v1);
    byte_4AB5C7D = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(EventCommandAssistMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventCommandAssistMaster___c_TypeInfo->static_fields->__9 = (struct EventCommandAssistMaster___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)EventCommandAssistMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall EventCommandAssistMaster___c___ctor(EventCommandAssistMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventCommandAssistMaster___c___GetCurrentEntity_b__1_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *a,
        EventCommandAssistEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BAB678(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventCommandAssistMaster___c___GetMaxLevelEntity_b__8_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BAB678(this, 0LL);
  return ent->fields.lv;
}


int32_t __fastcall EventCommandAssistMaster___c___IsEnableEntity_b__4_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *a,
        EventCommandAssistEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BAB678(this, a);
  return b->fields.priority - a->fields.priority;
}