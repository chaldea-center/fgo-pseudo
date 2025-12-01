void EventMissionAddMaster___ctor(EventMissionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC740B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__);
    byte_4CC740B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    143,
    (const MethodInfo_340B614 *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionAddEntity_o *EventMissionAddMaster__GetEntity(
        EventMissionAddMaster_o *this,
        int32_t missionId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC7409 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__);
    byte_4CC7409 = 1;
  }
  PK = (Il2CppObject *)EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&priority);
  return (EventMissionAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_340D938 *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *EventMissionAddMaster__GetEventMissionChangeRewardIcon(
        EventMissionAddMaster_o *this,
        int32_t missionId,
        int32_t targetId,
        bool notifyIcon,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionAddEntity__o *EventMissionAddList; // x0
  __int64 v10; // x1
  EventMissionAddMaster___c_c *v11; // x8
  System_Collections_Generic_List_object__o *v12; // x20
  System_Comparison_T__o *_9__4_0; // x21
  Il2CppObject *v14; // x22
  struct EventMissionAddMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject *current; // x26
  int32_t klass; // w20
  int32_t monitor_high; // w22
  int64_t klass_high; // x21
  System_String_o *v26; // x20
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CC740D & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_EventMissionAddEntity__TypeInfo);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
    sub_1C713B0(&Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__);
    sub_1C713B0(&EventMissionAddMaster___c_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_1165/*"1"*/);
    byte_4CC740D = 1;
  }
  memset(&v29, 0, sizeof(v29));
  EventMissionAddList = EventMissionAddMaster__getEventMissionAddList(
                          this,
                          targetId,
                          missionId,
                          (const MethodInfo *)notifyIcon);
  v11 = EventMissionAddMaster___c_TypeInfo;
  v12 = (System_Collections_Generic_List_object__o *)EventMissionAddList;
  if ( !EventMissionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionAddMaster___c_TypeInfo);
    v11 = EventMissionAddMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v11->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = EventMissionAddMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventMissionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v14,
      Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__,
      0);
    static_fields = EventMissionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventMissionAddEntity__o *)_9__4_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v16, v17, v18, v19, v20, v21);
  }
  if ( !v12 )
    sub_1C71608(EventMissionAddList, v10);
  System_Collections_Generic_List_object___Sort_58794460(
    v12,
    _9__4_0,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    v12,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__) )
    {
      v26 = 0;
      goto LABEL_20;
    }
    current = v29.fields._current;
    if ( v29.fields._current && LODWORD(v29.fields._current[2].monitor) == 3 )
    {
      monitor_high = HIDWORD(v29.fields._current[1].monitor);
      klass = (int32_t)v29.fields._current[2].klass;
      klass_high = SHIDWORD(v29.fields._current[2].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor_high, klass, klass_high, 0, 0, 0) )
        break;
    }
  }
  v26 = (System_String_o *)StringLiteral_1/*""*/;
  if ( HIDWORD(current[2].monitor) )
  {
    v26 = System_Int32__ToString((int)current + 44, 0);
  }
  else if ( !System_String__IsNullOrEmpty((System_String_o *)current[3].klass, 0) )
  {
    v26 = (System_String_o *)current[3].klass;
  }
  if ( !System_String__IsNullOrEmpty(v26, 0) && notifyIcon )
    v26 = System_String__Concat_64031724(v26, (System_String_o *)StringLiteral_1165/*"1"*/, 0);
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
  return v26;
}


// local variable allocation has failed, the output may be wrong!
bool EventMissionAddMaster__TryGetEntity(
        EventMissionAddMaster_o *this,
        EventMissionAddEntity_o **entity,
        int32_t missionId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC740A & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__);
    byte_4CC740A = 1;
  }
  PK = (Il2CppObject *)EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&missionId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_EventMissionAddEntity__o *EventMissionAddMaster__getEventMissionAddList(
        EventMissionAddMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4CC740C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventMissionAddEntity__GetEnumerator__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_EventMissionAddEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionAddEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventMissionAddEntity__TypeInfo);
    byte_4CC740C = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMissionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_EventMissionAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventMissionAddEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_EventMissionAddEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_EventMissionAddEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v28 = v20;
    if ( !v20 )
      sub_1C71608(0, v21);
    if ( *(_DWORD *)(v20 + 24) == eventId && *(_DWORD *)(v20 + 16) == missionId )
    {
      if ( !v7 )
        sub_1C71608(v20, v21);
      items = v7->fields._items;
      v30 = Method_System_Collections_Generic_List_EventMissionAddEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C71608(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_30;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_30:
    v36 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return (System_Collections_Generic_List_EventMissionAddEntity__o *)v7;
}


void EventMissionAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC740E & 1) == 0 )
  {
    sub_1C713B0(&EventMissionAddMaster___c_TypeInfo);
    byte_4CC740E = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(EventMissionAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMissionAddMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionAddMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EventMissionAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventMissionAddMaster___c___ctor(EventMissionAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventMissionAddMaster___c___GetEventMissionChangeRewardIcon_b__4_0(
        EventMissionAddMaster___c_o *this,
        EventMissionAddEntity_o *a,
        EventMissionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C71608(this, a);
  return a->fields.priority - b->fields.priority;
}