void EventStatusQuestMaster___ctor(EventStatusQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938918 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
    byte_5938918 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    267,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
}


EventStatusQuestEntity_o *EventStatusQuestMaster__GetEntity(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938916 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
    byte_5938916 = 1;
  }
  PK = (Il2CppObject *)EventStatusQuestEntity__CreatePK(eventId, statusId, priority, questId, 0);
  return (EventStatusQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
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
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v25; // x21
  struct EventStatusQuestMaster___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5938919 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Item__);
    sub_21FFC50(&System_Comparison_EventStatusQuestEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo);
    sub_21FFC50(&Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__);
    sub_21FFC50(&EventStatusQuestMaster___c_TypeInfo);
    byte_5938919 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Count__);
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
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Item__);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v22[4] = v8;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v8, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_16;
    }
LABEL_24:
    sub_21FFECC(list, v8);
  }
LABEL_16:
  list = EventStatusQuestMaster___c_TypeInfo;
  if ( !*(&EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo, v8);
    list = EventStatusQuestMaster___c_TypeInfo;
  }
  static_fields = (struct EventStatusQuestMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v8);
      static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventStatusQuestEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v25, Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__, 0);
    v26 = EventStatusQuestMaster___c_TypeInfo->static_fields;
    v26->__9__3_0 = (struct System_Comparison_EventStatusQuestEntity__o *)_9__3_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->__9__3_0, (int32_t)_9__3_0, v27, v28, v29, v30, v31, v32);
  }
  if ( !v7 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_71636404(
    v7,
    _9__3_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
  return (System_Collections_Generic_List_EventStatusQuestEntity__o *)v7;
}


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

  if ( (byte_5938917 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
    byte_5938917 = 1;
  }
  PK = (Il2CppObject *)EventStatusQuestEntity__CreatePK(eventId, statusId, priority, questId, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
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
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x9
  System_Predicate_object__o *_9__4_0; // x22
  Il2CppObject *v16; // x23
  struct EventStatusQuestMaster___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *v24; // x0
  System_Predicate_object__o *v25; // x22
  _BOOL8 v26; // x0
  __int64 v27; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_593891A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Predicate_EventStatusQuestEntity__TypeInfo);
    sub_21FFC50(&Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__);
    sub_21FFC50(&Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__);
    sub_21FFC50(&EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo);
    sub_21FFC50(&EventStatusQuestMaster___c_TypeInfo);
    byte_593891A = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v7 = sub_21FFEBC(EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  v8 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = EventStatusQuestMaster__GetEntityList(this, eventId, statusId, v9);
  v12 = EventStatusQuestMaster___c_TypeInfo;
  v13 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !*(&EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo, v11);
    v12 = EventStatusQuestMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__4_0 = (System_Predicate_object__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v11);
      static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_object____ctor(_9__4_0, v16, Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__, 0);
    v17 = EventStatusQuestMaster___c_TypeInfo->static_fields;
    v17->__9__4_0 = (struct System_Predicate_EventStatusQuestEntity__o *)_9__4_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->__9__4_0, (int32_t)_9__4_0, v18, v19, v20, v21, v22, v23);
  }
  if ( !v13 )
    goto LABEL_25;
  v24 = System_Collections_Generic_List_object___Find(
          v13,
          (System_Predicate_T__o *)_9__4_0,
          (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
  if ( !v24 )
    return v8;
  EntityList = (System_Collections_Generic_List_EventStatusQuestEntity__o *)EventStatusQuestEntity__getPriority(
                                                                              (EventStatusQuestEntity_o *)v24,
                                                                              0);
  if ( !v7 )
LABEL_25:
    sub_21FFECC(EntityList, v11);
  *(_DWORD *)(v7 + 16) = (_DWORD)EntityList;
  if ( ((unsigned int)EntityList & 0x80000000) == 0 )
  {
    v25 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_object____ctor(
      v25,
      (Il2CppObject *)v7,
      Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__,
      0);
    System_Collections_Generic_List_object___RemoveAll(
      v13,
      (System_Predicate_T__o *)v25,
      (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      v13,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__);
      if ( !v26 )
        break;
      if ( !v32.fields._current )
        sub_21FFECC(v26, v27);
      if ( !v8
        || (items = v8->fields._items,
            v27 = *(unsigned int *)((char *)&v32.fields._current->klass + (unsigned __int64)off_18 + 4),
            v29 = Method_System_Collections_Generic_List_int__Add__,
            ++v8->fields._version,
            !items) )
      {
        sub_21FFECC(v26, v27);
      }
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v8,
          v27,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v8->fields._size = size + 1;
        items->m_Items[size] = v27;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
  }
  return v8;
}


void EventStatusQuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593891B & 1) == 0 )
  {
    sub_21FFC50(&EventStatusQuestMaster___c_TypeInfo);
    byte_593891B = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventStatusQuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventStatusQuestMaster___c_TypeInfo->static_fields->__9 = (struct EventStatusQuestMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventStatusQuestMaster___c_TypeInfo->static_fields,
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
  if ( !b || (this = (EventStatusQuestMaster___c_o *)EventStatusQuestEntity__getPriority(b, 0), !a) )
    sub_21FFECC(this, a);
  return (_DWORD)this - EventStatusQuestEntity__getPriority(a, 0);
}


bool EventStatusQuestMaster___c___getMismatchQuestList_b__4_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_593891C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_593891C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !a || !Instance )
    sub_21FFECC(Instance, v5);
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
  int32_t priority; // w8

  if ( !a )
    sub_21FFECC(this, 0);
  priority = a->fields.priority;
  return priority >= 0 && priority == this->fields.maxPriority;
}