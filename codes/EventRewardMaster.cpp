void EventRewardMaster___ctor(EventRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C988 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__);
    byte_4D2C988 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    125,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string___ctor__);
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

  if ( (byte_4D2C986 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__);
    byte_4D2C986 = 1;
  }
  PK = (Il2CppObject *)EventRewardEntity__CreatePK(eventId, slot, groupId, point, (const MethodInfo *)point);
  return (EventRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_345FF78 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__GetEntity__);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x20
  Il2CppObject *v22; // x21
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4D2C989 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Item__);
    sub_1C94098(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventRewardEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventRewardEntity__TypeInfo);
    sub_1C94098(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__);
    sub_1C94098(&EventRewardMaster___c_TypeInfo);
    byte_4D2C989 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Count__);
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
               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_EventRewardEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = v6;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C942F0(list, v6);
  }
LABEL_15:
  list = EventRewardMaster___c_TypeInfo;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    list = EventRewardMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRewardMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)list + 23);
    v21 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__3_0__, 0);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventRewardEntity__o *)v21;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_59164920(
    v5,
    v21,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
}


EventRewardEntity_array *EventRewardMaster__GetEventRewardEntitiyList_42874004(
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Comparison_T__o *v23; // x20
  Il2CppObject *v24; // x21
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4D2C98A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Item__);
    sub_1C94098(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventRewardEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventRewardEntity__TypeInfo);
    sub_1C94098(&Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__);
    sub_1C94098(&EventRewardMaster___c_TypeInfo);
    byte_4D2C98A = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Count__);
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
               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventRewardEntity__get_Item__);
      if ( list )
      {
        v8 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 6) == groupId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v20 = Method_System_Collections_Generic_List_EventRewardEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v22[4] = v8;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v8, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_16;
    }
LABEL_24:
    sub_1C942F0(list, v8);
  }
LABEL_16:
  list = EventRewardMaster___c_TypeInfo;
  if ( !EventRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardMaster___c_TypeInfo);
    list = EventRewardMaster___c_TypeInfo;
  }
  v23 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v23 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventRewardMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)**((_QWORD **)list + 23);
    v23 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(v23, v24, Method_EventRewardMaster___c__GetEventRewardEntitiyList_b__4_0__, 0);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventRewardEntity__o *)v23;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)v23, v26, v27, v28, v29, v30, v31);
  }
  if ( !v7 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_59164920(
    v7,
    v23,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_EventRewardEntity__Sort__);
  return (EventRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_EventRewardEntity__ToArray__);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  EventRewardEntity_o *result; // x0
  __int64 v20; // x1
  int max_length; // w8
  int v22; // w9

  if ( (byte_4D2C98B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Sort_EventRewardEntity___);
    sub_1C94098(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_1C94098(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__);
    sub_1C94098(&EventRewardMaster___c_TypeInfo);
    byte_4D2C98B = 1;
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
    _9__5_0 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(_9__5_0, v11, Method_EventRewardMaster___c__GetNextEventRewardEntity_b__5_0__, 0);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventRewardEntity__o *)_9__5_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v13, v14, v15, v16, v17, v18);
  }
  System_Array__Sort_object__51807060(
    (System_Object_array *)v9,
    _9__5_0,
    (const MethodInfo_3168354 *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !v9 )
    goto LABEL_19;
  max_length = v9->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( max_length == v22 )
        sub_1C942F8(result);
      result = v9->m_Items[v22];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( max_length == ++v22 )
        return 0;
    }
LABEL_19:
    sub_1C942F0(result, v20);
  }
  return 0;
}


EventRewardEntity_o *EventRewardMaster__GetNextEventRewardEntity_42874988(
        EventRewardMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        int64_t eventPoint,
        const MethodInfo *method)
{
  EventRewardEntity_array *EventRewardEntitiyList_42874004; // x0
  EventRewardMaster___c_c *v10; // x8
  EventRewardEntity_array *v11; // x20
  System_Comparison_T__o *_9__6_0; // x21
  Il2CppObject *v13; // x22
  struct EventRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  EventRewardEntity_o *result; // x0
  __int64 v22; // x1
  int max_length; // w8
  int v24; // w9

  if ( (byte_4D2C98C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Sort_EventRewardEntity___);
    sub_1C94098(&System_Comparison_EventRewardEntity__TypeInfo);
    sub_1C94098(&Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__);
    sub_1C94098(&EventRewardMaster___c_TypeInfo);
    byte_4D2C98C = 1;
  }
  EventRewardEntitiyList_42874004 = EventRewardMaster__GetEventRewardEntitiyList_42874004(
                                      this,
                                      eventId,
                                      groupId,
                                      (const MethodInfo *)eventPoint);
  v10 = EventRewardMaster___c_TypeInfo;
  v11 = EventRewardEntitiyList_42874004;
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
    _9__6_0 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_EventRewardEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v13, Method_EventRewardMaster___c__GetNextEventRewardEntity_b__6_0__, 0);
    static_fields = EventRewardMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventRewardEntity__o *)_9__6_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v15, v16, v17, v18, v19, v20);
  }
  System_Array__Sort_object__51807060(
    (System_Object_array *)v11,
    _9__6_0,
    (const MethodInfo_3168354 *)Method_System_Array_Sort_EventRewardEntity___);
  if ( !v11 )
    goto LABEL_19;
  max_length = v11->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( max_length == v24 )
        sub_1C942F8(result);
      result = v11->m_Items[v24];
      if ( !result )
        break;
      if ( result->fields.point > eventPoint )
        return result;
      if ( max_length == ++v24 )
        return 0;
    }
LABEL_19:
    sub_1C942F0(result, v22);
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

  if ( (byte_4D2C987 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__);
    byte_4D2C987 = 1;
  }
  PK = (Il2CppObject *)EventRewardEntity__CreatePK(eventId, slot, groupId, point, *(const MethodInfo **)&groupId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_EventRewardMaster__EventRewardEntity__string__TryGetEntity__);
}


void EventRewardMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C98D & 1) == 0 )
  {
    sub_1C94098(&EventRewardMaster___c_TypeInfo);
    byte_4D2C98D = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(EventRewardMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRewardMaster___c_TypeInfo->static_fields->__9 = (struct EventRewardMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)EventRewardMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C942F0(this, a);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t EventRewardMaster___c___GetEventRewardEntitiyList_b__4_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *a,
        EventRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C942F0(this, a);
  return LODWORD(a->fields.point) - LODWORD(b->fields.point);
}


int32_t EventRewardMaster___c___GetNextEventRewardEntity_b__5_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1C942F0(this, x);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}


int32_t EventRewardMaster___c___GetNextEventRewardEntity_b__6_0(
        EventRewardMaster___c_o *this,
        EventRewardEntity_o *x,
        EventRewardEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1C942F0(this, x);
  return LODWORD(x->fields.point) - LODWORD(y->fields.point);
}