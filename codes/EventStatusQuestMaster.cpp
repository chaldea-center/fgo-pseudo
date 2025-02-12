void __fastcall EventStatusQuestMaster___ctor(EventStatusQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4843 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__, method);
    byte_4BB4843 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    263,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
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

  if ( (byte_4BB4841 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4BB4841 = 1;
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
                                       (const MethodInfo_323D0DC *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
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
  int64_t v16; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v19; // w23
  int32_t v20; // w24
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x20
  Il2CppObject *v32; // x21
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4BB4844 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Item__, v7);
    sub_1C13D24(&System_Comparison_EventStatusQuestEntity__TypeInfo, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__, v11);
    sub_1C13D24(&System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo, v12);
    sub_1C13D24(&Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__, v13);
    sub_1C13D24(&EventStatusQuestMaster___c_TypeInfo, v14);
    byte_4BB4844 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Count__);
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
               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventStatusQuestEntity__get_Item__);
      if ( list )
      {
        v16 = (int64_t)list;
        if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == statusId )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v28 = Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)list,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v16;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v30 + 4), v16, v21, v22, v23, v24, v25, v26);
          }
        }
      }
      if ( v19 == ++v20 )
        goto LABEL_16;
    }
LABEL_24:
    sub_1C13F80(list, v16);
  }
LABEL_16:
  list = EventStatusQuestMaster___c_TypeInfo;
  if ( !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    list = EventStatusQuestMaster___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventStatusQuestMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)list + 23);
    v31 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_EventStatusQuestEntity__TypeInfo);
    System_Comparison_object____ctor(v31, v32, Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventStatusQuestEntity__o *)v31;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v31, v34, v35, v36, v37, v38, v39);
  }
  if ( !v15 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_56814736(
    v15,
    v31,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
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

  if ( (byte_4BB4842 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__, entity);
    byte_4BB4842 = 1;
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
           (const MethodInfo_323D128 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
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
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *v36; // x0
  const MethodInfo *v37; // x1
  System_Predicate_object__o *v38; // x22
  _BOOL8 v39; // x0
  __int64 v40; // x1
  __int64 monitor_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BB4845 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__,
      *(_QWORD *)&eventId);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__get_Current__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1C13D24(&System_Predicate_EventStatusQuestEntity__TypeInfo, v15);
    sub_1C13D24(&Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__, v16);
    sub_1C13D24(&Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__, v17);
    sub_1C13D24(&EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo, v18);
    sub_1C13D24(&EventStatusQuestMaster___c_TypeInfo, v19);
    byte_4BB4845 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v20 = sub_1C13F70(EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  v21 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
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
    _9__4_0 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_object____ctor(_9__4_0, v28, Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__, 0LL);
    static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Predicate_EventStatusQuestEntity__o *)_9__4_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v30, v31, v32, v33, v34, v35);
  }
  if ( !v26 )
    goto LABEL_26;
  v36 = System_Collections_Generic_List_object___Find(
          v26,
          (System_Predicate_T__o *)_9__4_0,
          (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
  if ( !v36 )
    return v21;
  EntityList = (System_Collections_Generic_List_EventStatusQuestEntity__o *)EventStatusQuestEntity__getPriority(
                                                                              (EventStatusQuestEntity_o *)v36,
                                                                              v37);
  if ( !v20 )
LABEL_26:
    sub_1C13F80(EntityList, v24);
  *(_DWORD *)(v20 + 16) = (_DWORD)EntityList;
  if ( ((unsigned int)EntityList & 0x80000000) == 0 )
  {
    v38 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_object____ctor(
      v38,
      (Il2CppObject *)v20,
      Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__,
      0LL);
    System_Collections_Generic_List_object___RemoveAll(
      v26,
      (System_Predicate_T__o *)v38,
      (const MethodInfo_362E828 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v46,
      v26,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    v47 = v46;
    while ( 1 )
    {
      v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__);
      if ( !v39 )
        break;
      if ( !v47.fields._current )
        sub_1C13F80(v39, v40);
      if ( !v21 )
        sub_1C13F80(v39, v40);
      monitor_high = HIDWORD(v47.fields._current[1].monitor);
      items = v21->fields._items;
      v43 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1C13F80(v39, monitor_high);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          monitor_high,
          *(const MethodInfo_36101A8 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = size + 1;
        items->m_Items[size + 1] = monitor_high;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
  }
  return v21;
}


void __fastcall EventStatusQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB4846 & 1) == 0 )
  {
    sub_1C13D24(&EventStatusQuestMaster___c_TypeInfo, v1);
    byte_4BB4846 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(EventStatusQuestMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventStatusQuestMaster___c_TypeInfo->static_fields->__9 = (struct EventStatusQuestMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventStatusQuestMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, a);
  return (_DWORD)this - EventStatusQuestEntity__getPriority(a, (const MethodInfo *)a);
}


bool __fastcall EventStatusQuestMaster___c___getMismatchQuestList_b__4_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BB4847 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, a);
    byte_4BB4847 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !a || !Instance )
    sub_1C13F80(Instance, v5);
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
    sub_1C13F80(this, 0LL);
  return a->fields.priority >= 0 && a->fields.priority == this->fields.maxPriority;
}