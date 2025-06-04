void __fastcall EventGroupMaster___ctor(EventGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B01FE2 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__, method);
    byte_4B01FE2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    299,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventGroupEntity__o *__fastcall EventGroupMaster__GetEntitiesByGroupId(
        EventGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4B01FE3 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Count__, *(_QWORD *)&groupId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventGroupEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventGroupEntity___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_EventGroupEntity__TypeInfo, v8);
    byte_4B01FE3 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1BC3264(list, v10);
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Item__);
    if ( list )
    {
      v10 = list;
      if ( LODWORD(list->fields.items) == groupId )
      {
        if ( !v9 )
          goto LABEL_15;
        items = v9->fields._items;
        v16 = Method_System_Collections_Generic_List_EventGroupEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v10;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v10, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_15;
  }
  return (System_Collections_Generic_List_EventGroupEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
EventGroupEntity_o *__fastcall EventGroupMaster__GetEntity(
        EventGroupMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B01FE0 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B01FE0 = 1;
  }
  PK = (Il2CppObject *)EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_32B3B28 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventGroupMaster__GetEventGroupId(
        EventGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v7; // w21
  Il2CppObject *Item; // x0

  if ( (byte_4B01FE4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Item__, v5);
    byte_4B01FE4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_10:
    sub_1BC3264(list, *(_QWORD *)&eventId);
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Count__) )
      return -1;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_10;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v7,
             (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_EventGroupEntity__get_Item__);
    if ( Item )
    {
      if ( HIDWORD(Item[1].klass) == eventId )
        return (int32_t)Item[1].klass;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v7;
    if ( !list )
      goto LABEL_10;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventGroupMaster__GetFirstOpenEventId(
        EventGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t EventGroupId; // w0
  const MethodInfo *v11; // x2
  void *EntitiesByGroupId; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  EventGroupMaster___c_c *v15; // x0
  System_Comparison_T__o *_9__5_0; // x20
  Il2CppObject *v17; // x21
  struct EventGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  v3 = eventId;
  if ( (byte_4B01FE5 & 1) == 0 )
  {
    sub_1BC3008(&System_Comparison_EventGroupEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventGroupEntity__Sort__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventGroupEntity__get_Item__, v7);
    sub_1BC3008(&Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__, v8);
    sub_1BC3008(&EventGroupMaster___c_TypeInfo, v9);
    byte_4B01FE5 = 1;
  }
  EventGroupId = EventGroupMaster__GetEventGroupId(this, v3, method);
  if ( EventGroupId != -1 )
  {
    EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(this, EventGroupId, v11);
    if ( !EntitiesByGroupId )
      goto LABEL_15;
    v14 = (System_Collections_Generic_List_object__o *)EntitiesByGroupId;
    if ( *((_DWORD *)EntitiesByGroupId + 6) )
    {
      v15 = EventGroupMaster___c_TypeInfo;
      if ( !EventGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventGroupMaster___c_TypeInfo);
        v15 = EventGroupMaster___c_TypeInfo;
      }
      _9__5_0 = (System_Comparison_T__o *)v15->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          v15 = EventGroupMaster___c_TypeInfo;
        }
        v17 = (Il2CppObject *)v15->static_fields->__9;
        _9__5_0 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_EventGroupEntity__TypeInfo);
        System_Comparison_object____ctor(_9__5_0, v17, Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__, 0LL);
        static_fields = EventGroupMaster___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Comparison_EventGroupEntity__o *)_9__5_0;
        sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v19, v20);
      }
      System_Collections_Generic_List_object___Sort_57288964(
        v14,
        _9__5_0,
        (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_EventGroupEntity__Sort__);
      EntitiesByGroupId = System_Collections_Generic_List_object___get_Item(
                            v14,
                            0,
                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventGroupEntity__get_Item__);
      if ( EntitiesByGroupId )
        return *((_DWORD *)EntitiesByGroupId + 5);
LABEL_15:
      sub_1BC3264(EntitiesByGroupId, v13);
    }
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventGroupMaster__TryGetEntity(
        EventGroupMaster_o *this,
        EventGroupEntity_o **entity,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B01FE1 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__, entity);
    byte_4B01FE1 = 1;
  }
  PK = (Il2CppObject *)EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__);
}


void __fastcall EventGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B01FE6 & 1) == 0 )
  {
    sub_1BC3008(&EventGroupMaster___c_TypeInfo, v1);
    byte_4B01FE6 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(EventGroupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventGroupMaster___c_TypeInfo->static_fields->__9 = (struct EventGroupMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)EventGroupMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventGroupMaster___c___ctor(EventGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventGroupMaster___c___GetFirstOpenEventId_b__5_0(
        EventGroupMaster___c_o *this,
        EventGroupEntity_o *a,
        EventGroupEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BC3264(this, a);
  return a->fields.eventId - b->fields.eventId;
}