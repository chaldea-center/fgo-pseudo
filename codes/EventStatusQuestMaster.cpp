void EventStatusQuestMaster___ctor(EventStatusQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C9E8 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
    byte_4D2C9E8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    265,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventStatusQuestEntity_o *EventStatusQuestMaster__GetEntity(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2C9E6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
    byte_4D2C9E6 = 1;
  }
  PK = (Il2CppObject *)EventStatusQuestEntity__CreatePK(
                         eventId,
                         statusId,
                         priority,
                         questId,
                         *(const MethodInfo **)&questId);
  return (EventStatusQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_345FF78 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventStatusQuestEntity__o *EventStatusQuestMaster__GetEntityList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
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
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4D2C9E9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Item__);
    sub_1C94098(&System_Comparison_EventStatusQuestEntity__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo);
    sub_1C94098(&Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__);
    sub_1C94098(&EventStatusQuestMaster___c_TypeInfo);
    byte_4D2C9E9 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Count__);
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
               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Item__);
      if ( list )
      {
        v8 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == statusId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v20 = Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__;
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
  list = EventStatusQuestMaster___c_TypeInfo;
  if ( !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    list = EventStatusQuestMaster___c_TypeInfo;
  }
  v23 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v23 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventStatusQuestMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)**((_QWORD **)list + 23);
    v23 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_EventStatusQuestEntity__TypeInfo);
    System_Comparison_object____ctor(v23, v24, Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__, 0);
    static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventStatusQuestEntity__o *)v23;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)v23, v26, v27, v28, v29, v30, v31);
  }
  if ( !v7 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_59164920(
    v7,
    v23,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
  return (System_Collections_Generic_List_EventStatusQuestEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
bool EventStatusQuestMaster__TryGetEntity(
        EventStatusQuestMaster_o *this,
        EventStatusQuestEntity_o **entity,
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2C9E7 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
    byte_4D2C9E7 = 1;
  }
  PK = (Il2CppObject *)EventStatusQuestEntity__CreatePK(
                         eventId,
                         statusId,
                         priority,
                         questId,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_int__o *EventStatusQuestMaster__getMismatchQuestList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Collections_Generic_List_int__o *v8; // x19
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_EventStatusQuestEntity__o *EntityList; // x0
  __int64 v11; // x1
  EventStatusQuestMaster___c_c *v12; // x8
  System_Collections_Generic_List_object__o *v13; // x21
  System_Predicate_object__o *_9__4_0; // x22
  Il2CppObject *v15; // x23
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x1
  System_Predicate_object__o *v25; // x22
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 monitor_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D2C9EA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Predicate_EventStatusQuestEntity__TypeInfo);
    sub_1C94098(&Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__);
    sub_1C94098(&Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__);
    sub_1C94098(&EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C94098(&EventStatusQuestMaster___c_TypeInfo);
    byte_4D2C9EA = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v7 = sub_1C942E4(EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = EventStatusQuestMaster__GetEntityList(this, eventId, statusId, v9);
  v12 = EventStatusQuestMaster___c_TypeInfo;
  v13 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    v12 = EventStatusQuestMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Predicate_object__o *)v12->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = EventStatusQuestMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__4_0 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_object____ctor(_9__4_0, v15, Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__, 0);
    static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Predicate_EventStatusQuestEntity__o *)_9__4_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v17, v18, v19, v20, v21, v22);
  }
  if ( !v13 )
    goto LABEL_26;
  v23 = System_Collections_Generic_List_object___Find(
          v13,
          (System_Predicate_T__o *)_9__4_0,
          (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
  if ( !v23 )
    return v8;
  EntityList = (System_Collections_Generic_List_EventStatusQuestEntity__o *)EventStatusQuestEntity__getPriority(
                                                                              (EventStatusQuestEntity_o *)v23,
                                                                              v24);
  if ( !v7 )
LABEL_26:
    sub_1C942F0(EntityList, v11);
  *(_DWORD *)(v7 + 16) = (_DWORD)EntityList;
  if ( ((unsigned int)EntityList & 0x80000000) == 0 )
  {
    v25 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_object____ctor(
      v25,
      (Il2CppObject *)v7,
      Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__,
      0);
    System_Collections_Generic_List_object___RemoveAll(
      v13,
      (System_Predicate_T__o *)v25,
      (const MethodInfo_386C490 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      v13,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    v34 = v33;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__);
      if ( !v26 )
        break;
      if ( !v34.fields._current )
        sub_1C942F0(v26, v27);
      if ( !v8 )
        sub_1C942F0(v26, v27);
      monitor_high = HIDWORD(v34.fields._current[1].monitor);
      items = v8->fields._items;
      v30 = Method_System_Collections_Generic_List_int__Add__;
      ++v8->fields._version;
      if ( !items )
        sub_1C942F0(v26, monitor_high);
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v8,
          monitor_high,
          *(const MethodInfo_384DE10 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v8->fields._size = size + 1;
        items->m_Items[size] = monitor_high;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
  }
  return v8;
}


void EventStatusQuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C9EB & 1) == 0 )
  {
    sub_1C94098(&EventStatusQuestMaster___c_TypeInfo);
    byte_4D2C9EB = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(EventStatusQuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventStatusQuestMaster___c_TypeInfo->static_fields->__9 = (struct EventStatusQuestMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)EventStatusQuestMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventStatusQuestMaster___c___ctor(EventStatusQuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventStatusQuestMaster___c___GetEntityList_b__3_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        EventStatusQuestEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || (this = (EventStatusQuestMaster___c_o *)EventStatusQuestEntity__getPriority(b, (const MethodInfo *)a), !a) )
    sub_1C942F0(this, a);
  return (_DWORD)this - EventStatusQuestEntity__getPriority(a, (const MethodInfo *)a);
}


bool EventStatusQuestMaster___c___getMismatchQuestList_b__4_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D2C9EC & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4D2C9EC = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !a || !Instance )
    sub_1C942F0(Instance, v5);
  return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, a->fields.questId, 0, 0);
}


void EventStatusQuestMaster___c__DisplayClass4_0___ctor(
        EventStatusQuestMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventStatusQuestMaster___c__DisplayClass4_0___getMismatchQuestList_b__1(
        EventStatusQuestMaster___c__DisplayClass4_0_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C942F0(this, 0);
  return a->fields.priority >= 0 && a->fields.priority == this->fields.maxPriority;
}