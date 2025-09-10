void EventAddMaster___ctor(EventAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27157 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__);
    byte_4C27157 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    206,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventAddEntity_o *EventAddMaster__GetEntity(
        EventAddMaster_o *this,
        int32_t eventId,
        int32_t overwriteType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27155 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__);
    byte_4C27155 = 1;
  }
  PK = (Il2CppObject *)EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&priority);
  return (EventAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_338C850 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventAddMaster__TryGetEntity(
        EventAddMaster_o *this,
        EventAddEntity_o **entity,
        int32_t eventId,
        int32_t overwriteType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27156 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__);
    byte_4C27156 = 1;
  }
  PK = (Il2CppObject *)EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&overwriteType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__);
}


EventAddEntity_o *EventAddMaster__getOverwriteEventAddEntity(
        EventAddMaster_o *this,
        int32_t eventId,
        int32_t overwriteType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  void *list; // x0
  int v10; // w23
  int32_t v11; // w24
  Il2CppObject *v12; // x25
  int32_t v13; // w26
  int32_t v14; // w27
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  EventAddMaster___c_c *v21; // x0
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v23; // x21
  struct EventAddMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C27158 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Item__);
    sub_1C2D490(&System_Comparison_EventAddEntity__TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventAddEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventAddEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventAddEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventAddEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventAddEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_EventAddEntity__TypeInfo);
    sub_1C2D490(&Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__);
    sub_1C2D490(&EventAddMaster___c_TypeInfo);
    byte_4C27158 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v10 = (int)list;
    v11 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v11,
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Item__);
      if ( !list )
        break;
      v12 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == overwriteType )
      {
        v14 = *((_DWORD *)list + 10);
        v13 = *((_DWORD *)list + 11);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsOpen(v14, v13, 0, 0, 0, 0);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v18 = Method_System_Collections_Generic_List_EventAddEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v12,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v12;
            sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v12, v15, v16);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_19;
    }
LABEL_29:
    sub_1C2D6EC(list, v8);
  }
LABEL_19:
  if ( !v7 )
    goto LABEL_29;
  if ( v7->fields._size < 1 )
    return 0;
  v21 = EventAddMaster___c_TypeInfo;
  if ( !EventAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventAddMaster___c_TypeInfo);
    v21 = EventAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v21->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = EventAddMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_EventAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v23, Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__, 0);
    static_fields = EventAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventAddEntity__o *)_9__3_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v25, v26);
  }
  System_Collections_Generic_List_object___Sort_58242632(
    v7,
    _9__3_0,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_EventAddEntity__Sort__);
  return (EventAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                               v7,
                               0,
                               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventAddEntity__get_Item__);
}


void EventAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27159 & 1) == 0 )
  {
    sub_1C2D490(&EventAddMaster___c_TypeInfo);
    byte_4C27159 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventAddMaster___c_TypeInfo->static_fields->__9 = (struct EventAddMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)EventAddMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventAddMaster___c___ctor(EventAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventAddMaster___c___getOverwriteEventAddEntity_b__3_0(
        EventAddMaster___c_o *this,
        EventAddEntity_o *a,
        EventAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2D6EC(this, a);
  return b->fields.priority - a->fields.priority;
}