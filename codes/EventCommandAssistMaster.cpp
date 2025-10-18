void EventCommandAssistMaster___ctor(EventCommandAssistMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C42ECE & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    byte_4C42ECE = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.uniqueIdCacheList = (struct System_Collections_Generic_Dictionary_int__int____o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.uniqueIdCacheList, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    457,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__);
}


System_Int32_array *EventCommandAssistMaster__CreateUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x19
  System_Collections_Generic_IEnumerable_TResult__o *v6; // x0
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v8; // x20
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x20
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  if ( (byte_4C42ECB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    byte_4C42ECB = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v6 = System_Linq_Enumerable__OfType_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___);
  if ( !v6 )
    sub_1C372B4(0);
  klass = v6->klass;
  v8 = v6;
  v9 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventCommandAssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_8;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v11 = sub_1C87870(v6, System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v11)(
          v8,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_15;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_15:
      v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    v17 = *(_QWORD *)v12;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventCommandAssistEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_22;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_22:
      v20 = sub_1C87870(v12, System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
    if ( !v21 )
      sub_1C372B4(0);
    if ( *(_DWORD *)(v21 + 24) == eventId )
    {
      if ( !v5 )
        sub_1C372B4(v21);
      System_Collections_Generic_HashSet_int___Add(
        v5,
        *(_DWORD *)(v21 + 16),
        (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v22 = *(_QWORD *)v12;
  v23 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_32;
    }
    v25 = v22 + 16LL * *v24 + 312;
  }
  else
  {
LABEL_32:
    v25 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v25)(v12, *(_QWORD *)(v25 + 8));
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Collections_Generic_List_EventCommandAssistEntity__o *EventCommandAssistMaster__GetAllEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t beforeClearQuestId,
        bool isIncludUnreleased,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x22
  const MethodInfo *v10; // x2
  Il2CppObject *UniqueIdList; // x0
  const MethodInfo *v12; // x5
  void *monitor; // x8
  Il2CppObject *v14; // x23
  unsigned __int64 v15; // x25
  bool v16; // w24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppObject *v22; // x1
  Il2CppClass **v23; // x0

  if ( (byte_4C42EC9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
    byte_4C42EC9 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetUniqueIdList(this, eventId, v10);
  if ( !UniqueIdList )
LABEL_15:
    sub_1C372B4(UniqueIdList);
  monitor = UniqueIdList[1].monitor;
  v14 = UniqueIdList;
  if ( (int)monitor >= 1 )
  {
    v15 = 0;
    v16 = isIncludUnreleased;
    do
    {
      if ( v15 >= (unsigned int)monitor )
        sub_1C372BC(UniqueIdList);
      UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetCurrentEntity(
                                       this,
                                       eventId,
                                       *((_DWORD *)&v14[2].klass + v15),
                                       beforeClearQuestId,
                                       v16,
                                       v12);
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
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            UniqueIdList,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v22;
          sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
        }
      }
      LODWORD(monitor) = v14[1].monitor;
      ++v15;
    }
    while ( (__int64)v15 < (int)monitor );
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
EventCommandAssistEntity_o *EventCommandAssistMaster__GetCurrentEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        int32_t beforeClearQuestId,
        bool isIncludUnreleased,
        const MethodInfo *method)
{
  EventCommandAssistEntity_o *EntityList; // x0
  EventCommandAssistMaster___c_c *v12; // x8
  System_Collections_Generic_List_object__o *v13; // x21
  System_Comparison_T__o *_9__1_0; // x22
  Il2CppObject *v15; // x23
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int size; // w23
  int32_t v20; // w22
  const MethodInfo *v21; // x2

  if ( (byte_4C42EC7 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventCommandAssistEntity__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_First_EventCommandAssistEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    sub_1C37058(&Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__);
    sub_1C37058(&EventCommandAssistMaster___c_TypeInfo);
    byte_4C42EC7 = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v12 = EventCommandAssistMaster___c_TypeInfo;
  v13 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v12 = EventCommandAssistMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Comparison_T__o *)v12->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = EventCommandAssistMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventCommandAssistEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_0, v15, Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__, 0);
    static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__1_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v17, v18);
  }
  if ( !v13 )
LABEL_19:
    sub_1C372B4(EntityList);
  System_Collections_Generic_List_object___Sort_58346216(
    v13,
    _9__1_0,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v13->fields._size;
  if ( size < 1 )
  {
LABEL_15:
    if ( isIncludUnreleased )
      return (EventCommandAssistEntity_o *)System_Linq_Enumerable__First_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                             (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_EventCommandAssistEntity___);
    else
      return 0;
  }
  else
  {
    v20 = 0;
    while ( 1 )
    {
      EntityList = (EventCommandAssistEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   v13,
                                                   v20,
                                                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( !EntityList )
        goto LABEL_19;
      if ( EventCommandAssistEntity__IsOpen(EntityList, beforeClearQuestId, v21) )
        return (EventCommandAssistEntity_o *)System_Collections_Generic_List_object___get_Item(
                                               v13,
                                               v20,
                                               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( size == ++v20 )
        goto LABEL_15;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
EventCommandAssistEntity_o *EventCommandAssistMaster__GetEntity(
        EventCommandAssistMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C42ECF & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__);
    byte_4C42ECF = 1;
  }
  PK = (Il2CppObject *)EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventCommandAssistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_33A5B58 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventCommandAssistEntity__o *EventCommandAssistMaster__GetEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_ObjectModel_Collection_T__o *v14; // x1
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4C42EC6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventCommandAssistEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventCommandAssistEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
    byte_4C42EC6 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventCommandAssistEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventCommandAssistEntity__get_Item__);
      if ( !list )
        break;
      v14 = list;
      if ( LODWORD(list[1].klass) == eventId && LODWORD(list->fields.items) == id )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v16 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v14;
          sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v14, v12, v13);
        }
      }
      if ( v10 == ++v11 )
        return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v7;
    }
LABEL_17:
    sub_1C372B4(list);
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v7;
}


EventCommandAssistEntity_o *EventCommandAssistMaster__GetMaxLevelEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t assistId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventCommandAssistEntity__o *EntityList; // x0
  EventCommandAssistMaster___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  System_Func_object__int__o *_9__8_0; // x20
  Il2CppObject *v11; // x21
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4C42ECD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___);
    sub_1C37058(&System_Func_EventCommandAssistEntity__int__TypeInfo);
    sub_1C37058(&Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__);
    sub_1C37058(&EventCommandAssistMaster___c_TypeInfo);
    byte_4C42ECD = 1;
  }
  EntityList = EventCommandAssistMaster__GetEntityList(this, eventId, assistId, method);
  v8 = EventCommandAssistMaster___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v8 = EventCommandAssistMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__int__o *)v8->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventCommandAssistMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_EventCommandAssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_0, v11, Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__, 0);
    static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_EventCommandAssistEntity__int__o *)_9__8_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v9,
                                                               (System_Func_TSource__TKey__o *)_9__8_0,
                                                               (const MethodInfo_311792C *)Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___);
  return (EventCommandAssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                         v15,
                                         (const MethodInfo_311035C *)Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___);
}


System_Int32_array *EventCommandAssistMaster__GetUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *uniqueIdCacheList; // x0
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_Dictionary_int__int____o *v7; // x21

  if ( (byte_4C42ECC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    byte_4C42ECC = 1;
  }
  uniqueIdCacheList = (Il2CppObject *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)uniqueIdCacheList,
          eventId,
          (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    v7 = this->fields.uniqueIdCacheList;
    uniqueIdCacheList = (Il2CppObject *)EventCommandAssistMaster__CreateUniqueIdList(this, eventId, v6);
    if ( !v7 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v7,
      eventId,
      uniqueIdCacheList,
      (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  uniqueIdCacheList = (Il2CppObject *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
LABEL_9:
    sub_1C372B4(uniqueIdCacheList);
  return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                 (System_Collections_Generic_Dictionary_int__object__o *)uniqueIdCacheList,
                                 eventId,
                                 (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
}


System_Collections_Generic_List_EventCommandAssistEntity__o *EventCommandAssistMaster__GetValidEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  const MethodInfo *v8; // x2
  Il2CppObject *UniqueIdList; // x0
  const MethodInfo *v10; // x5
  void *monitor; // x8
  Il2CppObject *v12; // x23
  unsigned __int64 i; // x24
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppObject *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_4C42EC8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
    byte_4C42EC8 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetUniqueIdList(this, eventId, v8);
  if ( !UniqueIdList )
LABEL_15:
    sub_1C372B4(UniqueIdList);
  monitor = UniqueIdList[1].monitor;
  v12 = UniqueIdList;
  if ( (int)monitor >= 1 )
  {
    for ( i = 0; (__int64)i < (int)monitor; ++i )
    {
      if ( i >= (unsigned int)monitor )
        sub_1C372BC(UniqueIdList);
      UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetCurrentEntity(
                                       this,
                                       eventId,
                                       *((_DWORD *)&v12[2].klass + i),
                                       beforeClearQuestId,
                                       0,
                                       v10);
      if ( UniqueIdList )
      {
        if ( !v7 )
          goto LABEL_15;
        items = v7->fields._items;
        v17 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v7->fields._size;
        v19 = UniqueIdList;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            UniqueIdList,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v19;
          sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
        }
      }
      LODWORD(monitor) = v12[1].monitor;
    }
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
bool EventCommandAssistMaster__IsEnableEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  EventCommandAssistEntity_o *EntityList; // x0
  EventCommandAssistMaster___c_c *v10; // x8
  System_Collections_Generic_List_object__o *v11; // x20
  System_Comparison_T__o *_9__4_0; // x21
  Il2CppObject *v13; // x22
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int size; // w22
  int32_t v18; // w21
  bool v19; // w24
  const MethodInfo *v20; // x2

  if ( (byte_4C42ECA & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventCommandAssistEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    sub_1C37058(&Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__);
    sub_1C37058(&EventCommandAssistMaster___c_TypeInfo);
    byte_4C42ECA = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v10 = EventCommandAssistMaster___c_TypeInfo;
  v11 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v10 = EventCommandAssistMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v10->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = EventCommandAssistMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventCommandAssistEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v13, Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__, 0);
    static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__4_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v15, v16);
  }
  if ( !v11 )
    goto LABEL_18;
  System_Collections_Generic_List_object___Sort_58346216(
    v11,
    _9__4_0,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v11->fields._size;
  if ( size >= 1 )
  {
    v18 = 0;
    v19 = 1;
    while ( 1 )
    {
      EntityList = (EventCommandAssistEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   v11,
                                                   v18,
                                                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( !EntityList )
        break;
      if ( !EventCommandAssistEntity__IsOpen(EntityList, beforeClearQuestId, v20) )
      {
        v19 = ++v18 < size;
        if ( size != v18 )
          continue;
      }
      return v19;
    }
LABEL_18:
    sub_1C372B4(EntityList);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool EventCommandAssistMaster__TryGetEntity(
        EventCommandAssistMaster_o *this,
        EventCommandAssistEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C42ED0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__);
    byte_4C42ED0 = 1;
  }
  PK = (Il2CppObject *)EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__);
}


void EventCommandAssistMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C42ED1 & 1) == 0 )
  {
    sub_1C37058(&EventCommandAssistMaster___c_TypeInfo);
    byte_4C42ED1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventCommandAssistMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCommandAssistMaster___c_TypeInfo->static_fields->__9 = (struct EventCommandAssistMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EventCommandAssistMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventCommandAssistMaster___c___ctor(EventCommandAssistMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventCommandAssistMaster___c___GetCurrentEntity_b__1_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *a,
        EventCommandAssistEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}


int32_t EventCommandAssistMaster___c___GetMaxLevelEntity_b__8_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C372B4(this);
  return ent->fields.lv;
}


int32_t EventCommandAssistMaster___c___IsEnableEntity_b__4_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *a,
        EventCommandAssistEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}