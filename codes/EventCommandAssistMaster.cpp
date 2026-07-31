void EventCommandAssistMaster___ctor(EventCommandAssistMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593859E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    byte_593859E = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.uniqueIdCacheList = (struct System_Collections_Generic_Dictionary_int__int____o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.uniqueIdCacheList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    459,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__);
}


System_Int32_array *EventCommandAssistMaster__CreateUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x19
  System_Collections_Generic_IEnumerable_TResult__o *v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v9; // x21
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 i; // x21
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v33; // [xsp+18h] [xbp-38h]

  if ( (byte_593859B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_593859B = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v6 = System_Linq_Enumerable__OfType_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___);
  if ( !v6 )
    sub_21FFECC(0, v7);
  klass = v6->klass;
  v9 = v6;
  v10 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventCommandAssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_8;
    }
    v12 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v12 = sub_2237E2C(v6, System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo, 0);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v12)(
          v9,
          *(_QWORD *)(v12 + 8));
  v33 = v13;
  if ( !v13 )
    sub_21FFECC(0, v14);
  for ( i = v13; ; i = v33 )
  {
    v16 = *(_QWORD *)i;
    v17 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_16:
      v19 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(i, *(_QWORD *)(v19 + 8));
    if ( (v20 & 1) == 0 )
      break;
    if ( !v33 )
      sub_21FFECC(v20, v21);
    v22 = *(_QWORD *)v33;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventCommandAssistEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_24;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_24:
      v25 = sub_2237E2C(v33, System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v33, *(_QWORD *)(v25 + 8));
    if ( !v26 )
      sub_21FFECC(0, v27);
    if ( *(_DWORD *)(v26 + 24) == eventId )
    {
      if ( !v5 )
        sub_21FFECC(v26, v27);
      System_Collections_Generic_HashSet_int___Add(
        v5,
        *(_DWORD *)(v26 + 16),
        (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  if ( v33 )
  {
    v28 = *(_QWORD *)v33;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_37;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_37:
      v31 = sub_2237E2C(v33, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v33, *(_QWORD *)(v31 + 8));
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Collections_Generic_List_EventCommandAssistEntity__o *EventCommandAssistMaster__GetAllEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t beforeClearQuestId,
        bool isIncludUnreleased,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  const MethodInfo *v10; // x2
  Il2CppObject *UniqueIdList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5
  void *monitor; // x8
  Il2CppObject *v15; // x24
  unsigned __int64 i; // x25
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppObject *v25; // x1
  Il2CppClass **v26; // x0

  if ( (byte_5938599 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
    byte_5938599 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetUniqueIdList(this, eventId, v10);
  if ( !UniqueIdList )
LABEL_15:
    sub_21FFECC(UniqueIdList, v12);
  monitor = UniqueIdList[1].monitor;
  v15 = UniqueIdList;
  if ( (int)monitor >= 1 )
  {
    for ( i = 0; (__int64)i < (int)monitor; ++i )
    {
      if ( i >= (unsigned int)monitor )
        sub_21FFED4(UniqueIdList);
      UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetCurrentEntity(
                                       this,
                                       eventId,
                                       *((_DWORD *)&v15[2].klass + i),
                                       beforeClearQuestId,
                                       isIncludUnreleased,
                                       v13);
      if ( UniqueIdList )
      {
        if ( !v9 )
          goto LABEL_15;
        items = v9->fields._items;
        v23 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v9->fields._size;
        v25 = UniqueIdList;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            UniqueIdList,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v25;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v26 + 4),
            (int32_t)v25,
            v17,
            v18,
            v19,
            (int32_t)v13,
            v20,
            v21);
        }
      }
      LODWORD(monitor) = v15[1].monitor;
    }
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
  __int64 v12; // x1
  EventCommandAssistMaster___c_c *v13; // x8
  System_Collections_Generic_List_object__o *v14; // x21
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__1_0; // x22
  Il2CppObject *v17; // x23
  struct EventCommandAssistMaster___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int size; // w23
  int32_t v26; // w22
  const MethodInfo *v27; // x2

  if ( (byte_5938597 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventCommandAssistEntity__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_First_EventCommandAssistEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    sub_21FFC50(&Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__);
    sub_21FFC50(&EventCommandAssistMaster___c_TypeInfo);
    byte_5938597 = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v13 = EventCommandAssistMaster___c_TypeInfo;
  v14 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !*(&EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo, v12);
    v13 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__1_0 = (System_Comparison_T__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v12);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventCommandAssistEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_0, v17, Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__, 0);
    v18 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v18->__9__1_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__1_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->__9__1_0, (int32_t)_9__1_0, v19, v20, v21, v22, v23, v24);
  }
  if ( !v14 )
LABEL_19:
    sub_21FFECC(EntityList, v12);
  System_Collections_Generic_List_object___Sort_71636404(
    v14,
    _9__1_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v14->fields._size;
  if ( size < 1 )
  {
LABEL_15:
    if ( isIncludUnreleased )
      return (EventCommandAssistEntity_o *)System_Linq_Enumerable__First_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                             (const MethodInfo_384C73C *)Method_System_Linq_Enumerable_First_EventCommandAssistEntity___);
    else
      return 0;
  }
  else
  {
    v26 = 0;
    while ( 1 )
    {
      EntityList = (EventCommandAssistEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   v14,
                                                   v26,
                                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( !EntityList )
        goto LABEL_19;
      if ( EventCommandAssistEntity__IsOpen(EntityList, beforeClearQuestId, v27) )
        return (EventCommandAssistEntity_o *)System_Collections_Generic_List_object___get_Item(
                                               v14,
                                               v26,
                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
      if ( size == ++v26 )
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

  if ( (byte_593859F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__);
    byte_593859F = 1;
  }
  PK = (Il2CppObject *)EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventCommandAssistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventCommandAssistEntity__o *EventCommandAssistMaster__GetEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_5938596 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventCommandAssistEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventCommandAssistEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
    byte_5938596 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventCommandAssistEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventCommandAssistEntity__get_Item__);
      if ( !list )
        break;
      v8 = list;
      if ( LODWORD(list[1].klass) == eventId && LODWORD(list->fields.items) == id )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v20 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v8;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v8, v13, v14, v15, v16, v17, v18);
        }
      }
      if ( v11 == ++v12 )
        return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v7;
    }
LABEL_17:
    sub_21FFECC(list, v8);
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
  __int64 v8; // x1
  EventCommandAssistMaster___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__8_0; // x20
  Il2CppObject *v13; // x21
  struct EventCommandAssistMaster___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_593859D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___);
    sub_21FFC50(&System_Func_EventCommandAssistEntity__int__TypeInfo);
    sub_21FFC50(&Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__);
    sub_21FFC50(&EventCommandAssistMaster___c_TypeInfo);
    byte_593859D = 1;
  }
  EntityList = EventCommandAssistMaster__GetEntityList(this, eventId, assistId, method);
  v9 = EventCommandAssistMaster___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
  if ( !*(&EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo, v8);
    v9 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__8_0 = (System_Func_object__int__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v8);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_EventCommandAssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_0, v13, Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__, 0);
    v14 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v14->__9__8_0 = (struct System_Func_EventCommandAssistEntity__int__o *)_9__8_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__8_0, (int32_t)_9__8_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v10,
                                                               (System_Func_TSource__TKey__o *)_9__8_0,
                                                               (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___);
  return (EventCommandAssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                         v21,
                                         (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *EventCommandAssistMaster__GetUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *uniqueIdCacheList; // x0
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_Dictionary_int__int____o *v7; // x21

  if ( (byte_593859C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    byte_593859C = 1;
  }
  uniqueIdCacheList = (Il2CppObject *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)uniqueIdCacheList,
          eventId,
          (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    v7 = this->fields.uniqueIdCacheList;
    uniqueIdCacheList = (Il2CppObject *)EventCommandAssistMaster__CreateUniqueIdList(this, eventId, v6);
    if ( !v7 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v7,
      eventId,
      uniqueIdCacheList,
      (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  uniqueIdCacheList = (Il2CppObject *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
LABEL_9:
    sub_21FFECC(uniqueIdCacheList, *(_QWORD *)&eventId);
  return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                 (System_Collections_Generic_Dictionary_int__object__o *)uniqueIdCacheList,
                                 eventId,
                                 (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x5
  void *monitor; // x8
  Il2CppObject *v13; // x23
  unsigned __int64 i; // x24
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppObject *v23; // x1
  Il2CppClass **v24; // x0

  if ( (byte_5938598 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
    byte_5938598 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetUniqueIdList(this, eventId, v8);
  if ( !UniqueIdList )
LABEL_15:
    sub_21FFECC(UniqueIdList, v10);
  monitor = UniqueIdList[1].monitor;
  v13 = UniqueIdList;
  if ( (int)monitor >= 1 )
  {
    for ( i = 0; (__int64)i < (int)monitor; ++i )
    {
      if ( i >= (unsigned int)monitor )
        sub_21FFED4(UniqueIdList);
      UniqueIdList = (Il2CppObject *)EventCommandAssistMaster__GetCurrentEntity(
                                       this,
                                       eventId,
                                       *((_DWORD *)&v13[2].klass + i),
                                       beforeClearQuestId,
                                       0,
                                       v11);
      if ( UniqueIdList )
      {
        if ( !v7 )
          goto LABEL_15;
        items = v7->fields._items;
        v21 = Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v7->fields._size;
        v23 = UniqueIdList;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            UniqueIdList,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v23;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v24 + 4),
            (int32_t)v23,
            v15,
            v16,
            v17,
            (int32_t)v11,
            v18,
            v19);
        }
      }
      LODWORD(monitor) = v13[1].monitor;
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
  __int64 v10; // x1
  EventCommandAssistMaster___c_c *v11; // x8
  System_Collections_Generic_List_object__o *v12; // x20
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__4_0; // x21
  Il2CppObject *v15; // x22
  struct EventCommandAssistMaster___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int size; // w22
  int32_t v24; // w21
  bool v25; // w24
  const MethodInfo *v26; // x2

  if ( (byte_593859A & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventCommandAssistEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    sub_21FFC50(&Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__);
    sub_21FFC50(&EventCommandAssistMaster___c_TypeInfo);
    byte_593859A = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v11 = EventCommandAssistMaster___c_TypeInfo;
  v12 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !*(&EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo, v10);
    v11 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v10);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventCommandAssistEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v15, Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__, 0);
    v16 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v16->__9__4_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__4_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->__9__4_0, (int32_t)_9__4_0, v17, v18, v19, v20, v21, v22);
  }
  if ( !v12 )
    goto LABEL_18;
  System_Collections_Generic_List_object___Sort_71636404(
    v12,
    _9__4_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v12->fields._size;
  if ( size >= 1 )
  {
    v24 = 0;
    v25 = 1;
    while ( 1 )
    {
      EntityList = (EventCommandAssistEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   v12,
                                                   v24,
                                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
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
    sub_21FFECC(EntityList, v10);
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

  if ( (byte_59385A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__);
    byte_59385A0 = 1;
  }
  PK = (Il2CppObject *)EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__);
}


void EventCommandAssistMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59385A1 & 1) == 0 )
  {
    sub_21FFC50(&EventCommandAssistMaster___c_TypeInfo);
    byte_59385A1 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventCommandAssistMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCommandAssistMaster___c_TypeInfo->static_fields->__9 = (struct EventCommandAssistMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventCommandAssistMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t EventCommandAssistMaster___c___GetMaxLevelEntity_b__8_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
  return ent->fields.lv;
}


int32_t EventCommandAssistMaster___c___IsEnableEntity_b__4_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *a,
        EventCommandAssistEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}