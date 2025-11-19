void EventServantMaster___ctor(EventServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB642E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__);
    byte_4CB642E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    127,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__);
}


EventServantEntity_array *EventServantMaster__GetEntities(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4CB6432 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__GetEnumerator__);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_EventServantEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventServantEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventServantEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventServantEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventServantEntity__TypeInfo);
    byte_4CB6432 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventServantEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_EventServantEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_EventServantEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v21 = v18;
    if ( v18 && *(_DWORD *)(v18 + 20) == svtId )
    {
      if ( !v5 )
        sub_1C6BC60(v18, v18);
      items = v5->fields._items;
      v23 = Method_System_Collections_Generic_List_EventServantEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C6BC60(v18, v18);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v21;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v25 + 4), v21, v19, v20);
      }
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_29:
    v29 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                                             Enumerator,
                                                             *(_QWORD *)(v29 + 8));
  if ( !v5 )
LABEL_35:
    sub_1C6BC60(list, v6);
  return (EventServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_EventServantEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *EventServantMaster__GetEntity(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB642C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__);
    sub_1C6BA08(&EventServantEntity_TypeInfo);
    byte_4CB642C = 1;
  }
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  PK = (Il2CppObject *)EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&svtId);
  return (EventServantEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_33FDB94 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventServantMaster__TryGetEntity(
        EventServantMaster_o *this,
        EventServantEntity_o **entity,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB642D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__);
    sub_1C6BA08(&EventServantEntity_TypeInfo);
    byte_4CB642D = 1;
  }
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  PK = (Il2CppObject *)EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *EventServantMaster__getEntity(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  EventServantEntity_o *result; // x0

  if ( (byte_4CB642F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
    byte_4CB642F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v8,
                                         (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
      if ( result && result->fields.svtId == svtId )
        return result;
      if ( v7 == ++v8 )
        return 0;
    }
LABEL_12:
    sub_1C6BC60(list, *(_QWORD *)&svtId);
  }
  return 0;
}


EventServantEntity_o *EventServantMaster__getEntityServantIgnoreEnd(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v9; // x24
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  void **v12; // x23
  int32_t v13; // w24
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Collections_Generic_IList_T__o *items; // x8
  _QWORD *v17; // x9
  __int64 klass_low; // x10
  __int64 v19; // x8
  System_Collections_Generic_List_object__o *v20; // x19
  System_Predicate_object__o *v21; // x20

  if ( (byte_4CB6430 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventServantEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventServantEntity__Find__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventServantEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventServantEntity__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_EventServantEntity__TypeInfo);
    sub_1C6BA08(&System_Predicate_EventServantEntity__TypeInfo);
    sub_1C6BA08(&Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__);
    sub_1C6BA08(&EventServantMaster___c__DisplayClass4_0_TypeInfo);
    byte_4CB6430 = 1;
  }
  v5 = sub_1C6BC54(EventServantMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = v9;
  v12 = (void **)(v5 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v9, v10, v11);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
      if ( list )
      {
        v6 = (Il2CppObject *)list;
        if ( HIDWORD(list->fields.items) == svtId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)*v12;
          if ( !*v12 )
            break;
          items = list->fields.items;
          v17 = Method_System_Collections_Generic_List_EventServantEntity__Add__;
          ++HIDWORD(list[1].klass);
          if ( !items )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(items[1].monitor) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              v6,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = (__int64)items + 8 * klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            *(_QWORD *)(v19 + 32) = v6;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v6, v14, v15);
          }
        }
      }
      if ( Count == ++v13 )
        goto LABEL_16;
    }
LABEL_20:
    sub_1C6BC60(list, v6);
  }
LABEL_16:
  v20 = (System_Collections_Generic_List_object__o *)*v12;
  if ( !*v12 )
    goto LABEL_20;
  if ( v20->fields._size < 1 )
    return 0;
  v21 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_EventServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v21,
    (Il2CppObject *)v5,
    Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__,
    0);
  return (EventServantEntity_o *)System_Collections_Generic_List_object___Find(
                                   v20,
                                   (System_Predicate_T__o *)v21,
                                   (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_EventServantEntity__Find__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *EventServantMaster__getEntity_42356976(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  EventServantEntity_o *result; // x0

  if ( (byte_4CB6431 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
    byte_4CB6431 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v10,
                                         (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
      if ( result && result->fields.eventId == eventId && result->fields.svtId == svtId )
        return result;
      if ( v9 == ++v10 )
        return 0;
    }
LABEL_13:
    sub_1C6BC60(list, *(_QWORD *)&eventId);
  }
  return 0;
}


void EventServantMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB6433 & 1) == 0 )
  {
    sub_1C6BA08(&EventServantMaster___c_TypeInfo);
    byte_4CB6433 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(EventServantMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventServantMaster___c_TypeInfo->static_fields->__9 = (struct EventServantMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)EventServantMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventServantMaster___c___ctor(EventServantMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t EventServantMaster___c___getEntityServantIgnoreEnd_b__4_1(
        EventServantMaster___c_o *this,
        EventServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.endedAt;
}


void EventServantMaster___c__DisplayClass4_0___ctor(
        EventServantMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventServantMaster___c__DisplayClass4_0___getEntityServantIgnoreEnd_b__0(
        EventServantMaster___c__DisplayClass4_0_o *this,
        EventServantEntity_o *a,
        const MethodInfo *method)
{
  EventServantMaster___c__DisplayClass4_0_o *v4; // x20
  int64_t endedAt; // x22
  System_Collections_Generic_IEnumerable_TSource__o *servantEntitys; // x19
  EventServantMaster___c_c *v7; // x0
  System_Func_object__long__o *_9__4_1; // x20
  Il2CppObject *v9; // x21
  struct EventServantMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v13; // x0

  v4 = this;
  if ( (byte_4CB6434 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_EventServantEntity__long___);
    sub_1C6BA08(&System_Func_EventServantEntity__long__TypeInfo);
    sub_1C6BA08(&Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__);
    this = (EventServantMaster___c__DisplayClass4_0_o *)sub_1C6BA08(&EventServantMaster___c_TypeInfo);
    byte_4CB6434 = 1;
  }
  if ( !a )
    sub_1C6BC60(this, a);
  endedAt = a->fields.endedAt;
  servantEntitys = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.servantEntitys;
  v7 = EventServantMaster___c_TypeInfo;
  if ( !EventServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantMaster___c_TypeInfo);
    v7 = EventServantMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__long__o *)v7->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventServantMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__4_1 = (System_Func_object__long__o *)sub_1C6BC54(System_Func_EventServantEntity__long__TypeInfo);
    System_Func_object__long____ctor(_9__4_1, v9, Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__, 0);
    static_fields = EventServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = (struct System_Func_EventServantEntity__long__o *)_9__4_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v11, v12);
  }
  v13 = System_Linq_Enumerable__Select_object__long_(
          servantEntitys,
          (System_Func_TSource__TResult__o *)_9__4_1,
          (const MethodInfo_317181C *)Method_System_Linq_Enumerable_Select_EventServantEntity__long___);
  return endedAt == System_Linq_Enumerable__Max_66967376((System_Collections_Generic_IEnumerable_long__o *)v13, 0);
}