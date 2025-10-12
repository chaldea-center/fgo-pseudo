void EventGroupMaster___ctor(EventGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37984 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__);
    byte_4C37984 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    299,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__);
}


System_Collections_Generic_List_EventGroupEntity__o *EventGroupMaster__GetEntitiesByGroupId(
        EventGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v7; // w22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C37985 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventGroupEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventGroupEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventGroupEntity__TypeInfo);
    byte_4C37985 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1C32E7C(list);
  v7 = 0;
  while ( v7 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v7,
                                                               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Item__);
    if ( list )
    {
      v10 = list;
      if ( LODWORD(list->fields.items) == groupId )
      {
        if ( !v5 )
          goto LABEL_15;
        items = v5->fields._items;
        v12 = Method_System_Collections_Generic_List_EventGroupEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v10;
          sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v7;
    if ( !list )
      goto LABEL_15;
  }
  return (System_Collections_Generic_List_EventGroupEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
EventGroupEntity_o *EventGroupMaster__GetEntity(
        EventGroupMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37982 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__);
    byte_4C37982 = 1;
  }
  PK = (Il2CppObject *)EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_339B2F0 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__);
}


int32_t EventGroupMaster__GetEventGroupId(EventGroupMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x0

  if ( (byte_4C37986 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Item__);
    byte_4C37986 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_10:
    sub_1C32E7C(list);
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Count__) )
      return -1;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_10;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v6,
             (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Item__);
    if ( Item )
    {
      if ( HIDWORD(Item[1].klass) == eventId )
        return (int32_t)Item[1].klass;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v6;
    if ( !list )
      goto LABEL_10;
  }
}


int32_t EventGroupMaster__GetFirstOpenEventId(EventGroupMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int32_t EventGroupId; // w0
  const MethodInfo *v6; // x2
  void *EntitiesByGroupId; // x0
  System_Collections_Generic_List_object__o *v8; // x19
  EventGroupMaster___c_c *v9; // x0
  System_Comparison_T__o *_9__5_0; // x20
  Il2CppObject *v11; // x21
  struct EventGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C37987 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_EventGroupEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventGroupEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventGroupEntity__get_Item__);
    sub_1C32C20(&Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__);
    sub_1C32C20(&EventGroupMaster___c_TypeInfo);
    byte_4C37987 = 1;
  }
  EventGroupId = EventGroupMaster__GetEventGroupId(this, eventId, method);
  if ( EventGroupId != -1 )
  {
    EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(this, EventGroupId, v6);
    if ( !EntitiesByGroupId )
      goto LABEL_15;
    v8 = (System_Collections_Generic_List_object__o *)EntitiesByGroupId;
    if ( *((_DWORD *)EntitiesByGroupId + 6) )
    {
      v9 = EventGroupMaster___c_TypeInfo;
      if ( !EventGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventGroupMaster___c_TypeInfo);
        v9 = EventGroupMaster___c_TypeInfo;
      }
      _9__5_0 = (System_Comparison_T__o *)v9->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = EventGroupMaster___c_TypeInfo;
        }
        v11 = (Il2CppObject *)v9->static_fields->__9;
        _9__5_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_EventGroupEntity__TypeInfo);
        System_Comparison_object____ctor(_9__5_0, v11, Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__, 0);
        static_fields = EventGroupMaster___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Comparison_EventGroupEntity__o *)_9__5_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v13, v14);
      }
      System_Collections_Generic_List_object___Sort_58303104(
        v8,
        _9__5_0,
        (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_EventGroupEntity__Sort__);
      EntitiesByGroupId = System_Collections_Generic_List_object___get_Item(
                            v8,
                            0,
                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventGroupEntity__get_Item__);
      if ( EntitiesByGroupId )
        return *((_DWORD *)EntitiesByGroupId + 5);
LABEL_15:
      sub_1C32E7C(EntitiesByGroupId);
    }
  }
  return eventId;
}


// local variable allocation has failed, the output may be wrong!
bool EventGroupMaster__TryGetEntity(
        EventGroupMaster_o *this,
        EventGroupEntity_o **entity,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37983 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__);
    byte_4C37983 = 1;
  }
  PK = (Il2CppObject *)EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__);
}


void EventGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37988 & 1) == 0 )
  {
    sub_1C32C20(&EventGroupMaster___c_TypeInfo);
    byte_4C37988 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventGroupMaster___c_TypeInfo->static_fields->__9 = (struct EventGroupMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)EventGroupMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventGroupMaster___c___ctor(EventGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventGroupMaster___c___GetFirstOpenEventId_b__5_0(
        EventGroupMaster___c_o *this,
        EventGroupEntity_o *a,
        EventGroupEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C32E7C(this);
  return a->fields.eventId - b->fields.eventId;
}