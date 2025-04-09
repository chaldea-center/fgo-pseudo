void __fastcall EventAddMaster___ctor(EventAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAD02 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__, method);
    byte_49BAD02 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    206,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventAddEntity_o *__fastcall EventAddMaster__GetEntity(
        EventAddMaster_o *this,
        int32_t eventId,
        int32_t overwriteType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BAD00 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_49BAD00 = 1;
  }
  PK = (Il2CppObject *)EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&priority);
  return (EventAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_31A2454 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventAddMaster__TryGetEntity(
        EventAddMaster_o *this,
        EventAddEntity_o **entity,
        int32_t eventId,
        int32_t overwriteType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BAD01 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__, entity);
    byte_49BAD01 = 1;
  }
  PK = (Il2CppObject *)EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&overwriteType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventAddEntity_o *__fastcall EventAddMaster__getOverwriteEventAddEntity(
        EventAddMaster_o *this,
        int32_t eventId,
        int32_t overwriteType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x19
  __int64 v19; // x1
  void *list; // x0
  int v21; // w23
  int32_t v22; // w24
  Il2CppObject *v23; // x25
  int32_t v24; // w26
  int32_t v25; // w27
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  EventAddMaster___c_c *v32; // x0
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v34; // x21
  struct EventAddMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3

  if ( (byte_49BAD03 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Item__, v7);
    sub_1B4CF90(&System_Comparison_EventAddEntity__TypeInfo, v8);
    sub_1B4CF90(&CondType_TypeInfo, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventAddEntity__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventAddEntity__Sort__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventAddEntity___ctor__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventAddEntity__get_Count__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventAddEntity__get_Item__, v14);
    sub_1B4CF90(&System_Collections_Generic_List_EventAddEntity__TypeInfo, v15);
    sub_1B4CF90(&Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__, v16);
    sub_1B4CF90(&EventAddMaster___c_TypeInfo, v17);
    byte_49BAD03 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v21 = (int)list;
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v22,
               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventAddEntity__get_Item__);
      if ( !list )
        break;
      v23 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == overwriteType )
      {
        v25 = *((_DWORD *)list + 10);
        v24 = *((_DWORD *)list + 11);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsOpen(v25, v24, 0LL, 0, 0LL, 0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v18 )
            break;
          items = v18->fields._items;
          v29 = Method_System_Collections_Generic_List_EventAddEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            break;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              v23,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v23;
            sub_1B4CF34((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v23, v26, v27);
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_19;
    }
LABEL_29:
    sub_1B4D1EC(list, v19);
  }
LABEL_19:
  if ( !v18 )
    goto LABEL_29;
  if ( v18->fields._size < 1 )
    return 0LL;
  v32 = EventAddMaster___c_TypeInfo;
  if ( !EventAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventAddMaster___c_TypeInfo);
    v32 = EventAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v32->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = EventAddMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v32->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v34, Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__, 0LL);
    static_fields = EventAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventAddEntity__o *)_9__3_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v36, v37);
  }
  System_Collections_Generic_List_object___Sort_56106144(
    v18,
    _9__3_0,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventAddEntity__Sort__);
  return (EventAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                               v18,
                               0,
                               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventAddEntity__get_Item__);
}


void __fastcall EventAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BAD04 & 1) == 0 )
  {
    sub_1B4CF90(&EventAddMaster___c_TypeInfo, v1);
    byte_49BAD04 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(EventAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventAddMaster___c_TypeInfo->static_fields->__9 = (struct EventAddMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)EventAddMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventAddMaster___c___ctor(EventAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventAddMaster___c___getOverwriteEventAddEntity_b__3_0(
        EventAddMaster___c_o *this,
        EventAddEntity_o *a,
        EventAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B4D1EC(this, a);
  return b->fields.priority - a->fields.priority;
}