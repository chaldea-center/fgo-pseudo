void EventRewardMaster___ctor(EventRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB63E9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__);
    byte_4CB63E9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    125,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__);
}


EventRewardEntity_o *EventRewardMaster__GetEntity(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB63E7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__);
    byte_4CB63E7 = 1;
  }
  PK = (Il2CppObject *)EventRewardEntity__CreatePK(eventId, slot, groupId, point, (const MethodInfo *)point);
  return (EventRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_33FDB94 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__);
}


EventRewardEntity_array *EventRewardMaster__GetEventRewardEntitiyList(
        EventRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Comparison_T__o *v17; // x20
  Il2CppObject *v18; // x21
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4CB63EA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRewardEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventRewardEntity__TypeInfo);
    sub_1C6BA08(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__);
    sub_1C6BA08(&EventRewardMaster___c_TypeInfo);
    byte_4CB63EA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_EventRewardEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = v6;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v6, v11, v12);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C6BC60(list, v6);
  }
LABEL_15:
  list = EventRewardMaster___c_TypeInfo;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    list = EventRewardMaster___c_TypeInfo;
  }
  v17 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRewardMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)list + 23);
    v17 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(v17, v18, Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__, 0);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventRewardEntity__o *)v17;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v17, v20, v21);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_58729528(
    v5,
    v17,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
}


EventRewardEntity_array *EventRewardMaster__GetEventRewardEntitiyList_42341432(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  Il2CppClass *v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Comparison_T__o *v19; // x20
  Il2CppObject *v20; // x21
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4CB63EB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRewardEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventRewardEntity__TypeInfo);
    sub_1C6BA08(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__);
    sub_1C6BA08(&EventRewardMaster___c_TypeInfo);
    byte_4CB63EB = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v12,
               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Item__);
      if ( list )
      {
        v8 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 6) == groupId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_EventRewardEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = v8;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v8, v13, v14);
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_16;
    }
LABEL_24:
    sub_1C6BC60(list, v8);
  }
LABEL_16:
  list = EventRewardMaster___c_TypeInfo;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    list = EventRewardMaster___c_TypeInfo;
  }
  v19 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v19 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRewardMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)list + 23);
    v19 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(v19, v20, Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__, 0);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventRewardEntity__o *)v19;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v19, v22, v23);
  }
  if ( !v7 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_58729528(
    v7,
    v19,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
}


EventRewardEntity_o *EventRewardMaster__GetNextEventRewardEntity(
        EventRewardMaster_o *this,
        int32_t eventId,
        int64_t eventPoint,
        const MethodInfo *method)
{
  EventRewardEntity_array *EventRewardEntitiyList; // x0
  EventRewardMaster___c_c *v8; // x8
  EventRewardEntity_array *v9; // x20
  System_Comparison_T__o *_9__5_0; // x21
  Il2CppObject *v11; // x22
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  EventRewardEntity_o *result; // x0
  __int64 v16; // x1
  int max_length; // w8
  int v18; // w9

  if ( (byte_4CB63EC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Sort_EventRewardEntity___);
    sub_1C6BA08(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_1C6BA08(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__);
    sub_1C6BA08(&EventRewardMaster___c_TypeInfo);
    byte_4CB63EC = 1;
  }
  EventRewardEntitiyList = EventRewardMaster__GetEventRewardEntitiyList(this, eventId, (const MethodInfo *)eventPoint);
  v8 = EventRewardMaster___c_TypeInfo;
  v9 = EventRewardEntitiyList;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v8 = EventRewardMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Comparison_T__o *)v8->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventRewardMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(_9__5_0, v11, Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__, 0);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventRewardEntity__o *)_9__5_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v13, v14);
  }
  System_Array__Sort_object__51410360(
    (System_Object_array *)v9,
    _9__5_0,
    (const MethodInfo_31075B8 *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !v9 )
    goto LABEL_19;
  max_length = v9->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( max_length == v18 )
        sub_1C6BC68(result);
      result = v9->m_Items[v18];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( max_length == ++v18 )
        return 0;
    }
LABEL_19:
    sub_1C6BC60(result, v16);
  }
  return 0;
}


EventRewardEntity_o *EventRewardMaster__GetNextEventRewardEntity_42342416(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        int64_t eventPoint,
        const MethodInfo *method)
{
  EventRewardEntity_array *EventRewardEntitiyList_42341432; // x0
  EventRewardMaster___c_c *v10; // x8
  EventRewardEntity_array *v11; // x20
  System_Comparison_T__o *_9__6_0; // x21
  Il2CppObject *v13; // x22
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  EventRewardEntity_o *result; // x0
  __int64 v18; // x1
  int max_length; // w8
  int v20; // w9

  if ( (byte_4CB63ED & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Sort_EventRewardEntity___);
    sub_1C6BA08(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_1C6BA08(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__);
    sub_1C6BA08(&EventRewardMaster___c_TypeInfo);
    byte_4CB63ED = 1;
  }
  EventRewardEntitiyList_42341432 = EventRewardMaster__GetEventRewardEntitiyList_42341432(
                                      this,
                                      eventId,
                                      groupId,
                                      (const MethodInfo *)eventPoint);
  v10 = EventRewardMaster___c_TypeInfo;
  v11 = EventRewardEntitiyList_42341432;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    v10 = EventRewardMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v10->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = EventRewardMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v13, Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__, 0);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventRewardEntity__o *)_9__6_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v15, v16);
  }
  System_Array__Sort_object__51410360(
    (System_Object_array *)v11,
    _9__6_0,
    (const MethodInfo_31075B8 *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !v11 )
    goto LABEL_19;
  max_length = v11->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( max_length == v20 )
        sub_1C6BC68(result);
      result = v11->m_Items[v20];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( max_length == ++v20 )
        return 0;
    }
LABEL_19:
    sub_1C6BC60(result, v18);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool EventRewardMaster__TryGetEntity(
        EventRewardMaster_o *this,
        EventRewardEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        int32_t groupId,
        int64_t point,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB63E8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__);
    byte_4CB63E8 = 1;
  }
  PK = (Il2CppObject *)EventRewardEntity__CreatePK(eventId, slot, groupId, point, *(const MethodInfo **)&groupId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__);
}


void EventRewardMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB63EE & 1) == 0 )
  {
    sub_1C6BA08(&EventRewardMaster___c_TypeInfo);
    byte_4CB63EE = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(EventRewardMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRewardMaster___c_TypeInfo->static_fields->__9 = (struct EventRewardMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)EventRewardMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventRewardMaster___c___ctor(EventRewardMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventRewardMaster___c___GetEventRewardEntitiyList_b__3_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *a,
        EventRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t EventRewardMaster___c___GetEventRewardEntitiyList_b__4_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *a,
        EventRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t EventRewardMaster___c___GetNextEventRewardEntity_b__5_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1C6BC60(this, x);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}


int32_t EventRewardMaster___c___GetNextEventRewardEntity_b__6_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1C6BC60(this, x);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}