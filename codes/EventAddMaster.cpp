void EventAddMaster___ctor(EventAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59706BE & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__);
    byte_59706BE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    208,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__);
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

  if ( (byte_59706BC & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__);
    byte_59706BC = 1;
  }
  PK = (Il2CppObject *)EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&priority);
  return (EventAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_3F157EC *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__);
}


int32_t EventAddMaster__GetEventLogoId(EventAddMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v4; // w19
  EventAddEntity_o *OverwriteEventAddEntity; // x0

  v4 = eventId;
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(this, eventId, 12, v3);
  if ( OverwriteEventAddEntity )
    return OverwriteEventAddEntity->fields.overwriteId;
  return v4;
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

  if ( (byte_59706BD & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__);
    byte_59706BD = 1;
  }
  PK = (Il2CppObject *)EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&overwriteType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  EventAddMaster___c_c *v25; // x0
  struct EventAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v28; // x21
  struct EventAddMaster___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  if ( (byte_59706BF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventAddEntity__TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventAddEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventAddEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventAddEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventAddEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventAddEntity__TypeInfo);
    sub_2213A60(&Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__);
    sub_2213A60(&EventAddMaster___c_TypeInfo);
    byte_59706BF = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Item__);
      if ( !list )
        break;
      v12 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == overwriteType )
      {
        v13 = *((_DWORD *)list + 10);
        v14 = *((_DWORD *)list + 11);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8);
        list = (void *)CondType__IsOpen(v13, v14, 0, 0, 0, 0);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v22 = Method_System_Collections_Generic_List_EventAddEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v12,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v12;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v12, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_19;
    }
LABEL_29:
    sub_2213CDC(list, v8);
  }
LABEL_19:
  if ( !v7 )
    goto LABEL_29;
  if ( v7->fields._size < 1 )
    return 0;
  v25 = EventAddMaster___c_TypeInfo;
  if ( !*(&EventAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventAddMaster___c_TypeInfo, v8);
    v25 = EventAddMaster___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v25->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v25, v8);
      static_fields = EventAddMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v28, Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__, 0);
    v29 = EventAddMaster___c_TypeInfo->static_fields;
    v29->__9__3_0 = (struct System_Comparison_EventAddEntity__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->__9__3_0, (int32_t)_9__3_0, v30, v31, v32, v33, v34, v35);
  }
  System_Collections_Generic_List_object___Sort_71849708(
    v7,
    _9__3_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventAddEntity__Sort__);
  return (EventAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                               v7,
                               0,
                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventAddEntity__get_Item__);
}


void EventAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59706C0 & 1) == 0 )
  {
    sub_2213A60(&EventAddMaster___c_TypeInfo);
    byte_59706C0 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventAddMaster___c_TypeInfo->static_fields->__9 = (struct EventAddMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}