void __fastcall EventStatusQuestMaster___ctor(EventStatusQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44BE4 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__, method);
    byte_4B44BE4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    265,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventStatusQuestEntity_o *__fastcall EventStatusQuestMaster__GetEntity(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B44BE2 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B44BE2 = 1;
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
                                       (const MethodInfo_32E68F4 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventStatusQuestEntity__o *__fastcall EventStatusQuestMaster__GetEntityList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
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
  System_Collections_Generic_List_object__o *v15; // x19
  Il2CppClass *v16; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v19; // w23
  int32_t v20; // w24
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Comparison_T__o *v27; // x20
  Il2CppObject *v28; // x21
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4B44BE5 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Item__, v7);
    sub_1BDB878(&System_Comparison_EventStatusQuestEntity__TypeInfo, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__, v11);
    sub_1BDB878(&System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo, v12);
    sub_1BDB878(&Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__, v13);
    sub_1BDB878(&EventStatusQuestMaster___c_TypeInfo, v14);
    byte_4B44BE5 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v20,
               (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Item__);
      if ( list )
      {
        v16 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == statusId )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v24 = Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)list,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v26[4] = v16;
            sub_1BDB81C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v16, v21, v22);
          }
        }
      }
      if ( v19 == ++v20 )
        goto LABEL_16;
    }
LABEL_24:
    sub_1BDBAD4(list, v16);
  }
LABEL_16:
  list = EventStatusQuestMaster___c_TypeInfo;
  if ( !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    list = EventStatusQuestMaster___c_TypeInfo;
  }
  v27 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v27 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventStatusQuestMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)**((_QWORD **)list + 23);
    v27 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_EventStatusQuestEntity__TypeInfo);
    System_Comparison_object____ctor(v27, v28, Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventStatusQuestEntity__o *)v27;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v27, v30, v31);
  }
  if ( !v15 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_57505928(
    v15,
    v27,
    (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
  return (System_Collections_Generic_List_EventStatusQuestEntity__o *)v15;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventStatusQuestMaster__TryGetEntity(
        EventStatusQuestMaster_o *this,
        EventStatusQuestEntity_o **entity,
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B44BE3 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__, entity);
    byte_4B44BE3 = 1;
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
           (const MethodInfo_32E6940 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall EventStatusQuestMaster__getMismatchQuestList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x20
  System_Collections_Generic_List_int__o *v21; // x19
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_EventStatusQuestEntity__o *EntityList; // x0
  __int64 v24; // x1
  EventStatusQuestMaster___c_c *v25; // x8
  System_Collections_Generic_List_object__o *v26; // x21
  System_Predicate_object__o *_9__4_0; // x22
  Il2CppObject *v28; // x23
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x0
  const MethodInfo *v33; // x1
  System_Predicate_object__o *v34; // x22
  _BOOL8 v35; // x0
  __int64 v36; // x1
  __int64 monitor_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B44BE6 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__,
      *(_QWORD *)&eventId);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__get_Current__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1BDB878(&System_Predicate_EventStatusQuestEntity__TypeInfo, v15);
    sub_1BDB878(&Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__, v16);
    sub_1BDB878(&Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__, v17);
    sub_1BDB878(&EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo, v18);
    sub_1BDB878(&EventStatusQuestMaster___c_TypeInfo, v19);
    byte_4B44BE6 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v20 = sub_1BDBAC4(EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  v21 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = EventStatusQuestMaster__GetEntityList(this, eventId, statusId, v22);
  v25 = EventStatusQuestMaster___c_TypeInfo;
  v26 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    v25 = EventStatusQuestMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Predicate_object__o *)v25->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = EventStatusQuestMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__4_0 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_object____ctor(_9__4_0, v28, Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__, 0LL);
    static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Predicate_EventStatusQuestEntity__o *)_9__4_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v30, v31);
  }
  if ( !v26 )
    goto LABEL_26;
  v32 = System_Collections_Generic_List_object___Find(
          v26,
          (System_Predicate_T__o *)_9__4_0,
          (const MethodInfo_36D642C *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
  if ( !v32 )
    return v21;
  EntityList = (System_Collections_Generic_List_EventStatusQuestEntity__o *)EventStatusQuestEntity__getPriority(
                                                                              (EventStatusQuestEntity_o *)v32,
                                                                              v33);
  if ( !v20 )
LABEL_26:
    sub_1BDBAD4(EntityList, v24);
  *(_DWORD *)(v20 + 16) = (_DWORD)EntityList;
  if ( ((unsigned int)EntityList & 0x80000000) == 0 )
  {
    v34 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_object____ctor(
      v34,
      (Il2CppObject *)v20,
      Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__,
      0LL);
    System_Collections_Generic_List_object___RemoveAll(
      v26,
      (System_Predicate_T__o *)v34,
      (const MethodInfo_36D7420 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      v26,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    v43 = v42;
    while ( 1 )
    {
      v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v43,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__);
      if ( !v35 )
        break;
      if ( !v43.fields._current )
        sub_1BDBAD4(v35, v36);
      if ( !v21 )
        sub_1BDBAD4(v35, v36);
      monitor_high = HIDWORD(v43.fields._current[1].monitor);
      items = v21->fields._items;
      v39 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BDBAD4(v35, monitor_high);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          monitor_high,
          *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = size + 1;
        items->m_Items[size + 1] = monitor_high;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v43,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
  }
  return v21;
}


void __fastcall EventStatusQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B44BE7 & 1) == 0 )
  {
    sub_1BDB878(&EventStatusQuestMaster___c_TypeInfo, v1);
    byte_4B44BE7 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EventStatusQuestMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventStatusQuestMaster___c_TypeInfo->static_fields->__9 = (struct EventStatusQuestMaster___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)EventStatusQuestMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventStatusQuestMaster___c___ctor(EventStatusQuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventStatusQuestMaster___c___GetEntityList_b__3_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        EventStatusQuestEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || (this = (EventStatusQuestMaster___c_o *)EventStatusQuestEntity__getPriority(b, (const MethodInfo *)a), !a) )
    sub_1BDBAD4(this, a);
  return (_DWORD)this - EventStatusQuestEntity__getPriority(a, (const MethodInfo *)a);
}


bool __fastcall EventStatusQuestMaster___c___getMismatchQuestList_b__4_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B44BE8 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, a);
    byte_4B44BE8 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !a || !Instance )
    sub_1BDBAD4(Instance, v5);
  return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, a->fields.questId, 0LL);
}


void __fastcall EventStatusQuestMaster___c__DisplayClass4_0___ctor(
        EventStatusQuestMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventStatusQuestMaster___c__DisplayClass4_0___getMismatchQuestList_b__1(
        EventStatusQuestMaster___c__DisplayClass4_0_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BDBAD4(this, 0LL);
  return a->fields.priority >= 0 && a->fields.priority == this->fields.maxPriority;
}