void __fastcall EventMissionAddMaster___ctor(EventMissionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44A7F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__, method);
    byte_4B44A7F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    143,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionAddEntity_o *__fastcall EventMissionAddMaster__GetEntity(
        EventMissionAddMaster_o *this,
        int32_t missionId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B44A7D & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_4B44A7D = 1;
  }
  PK = (Il2CppObject *)EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&priority);
  return (EventMissionAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_32E68F4 *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMissionAddMaster__GetEventMissionChangeRewardIcon(
        EventMissionAddMaster_o *this,
        int32_t missionId,
        int32_t targetId,
        bool notifyIcon,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionAddEntity__o *EventMissionAddList; // x0
  __int64 v20; // x1
  EventMissionAddMaster___c_c *v21; // x8
  System_Collections_Generic_List_object__o *v22; // x20
  System_Comparison_T__o *_9__4_0; // x21
  Il2CppObject *v24; // x22
  struct EventMissionAddMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *current; // x26
  int32_t klass; // w20
  int32_t monitor_high; // w22
  int64_t klass_high; // x21
  System_String_o *v32; // x20
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B44A81 & 1) == 0 )
  {
    sub_1BDB878(&System_Comparison_EventMissionAddEntity__TypeInfo, *(_QWORD *)&missionId);
    sub_1BDB878(&CondType_TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__, v14);
    sub_1BDB878(&Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__, v15);
    sub_1BDB878(&EventMissionAddMaster___c_TypeInfo, v16);
    sub_1BDB878(&StringLiteral_1/*""*/, v17);
    sub_1BDB878(&StringLiteral_1194/*"1"*/, v18);
    byte_4B44A81 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  EventMissionAddList = EventMissionAddMaster__getEventMissionAddList(
                          this,
                          targetId,
                          missionId,
                          (const MethodInfo *)notifyIcon);
  v21 = EventMissionAddMaster___c_TypeInfo;
  v22 = (System_Collections_Generic_List_object__o *)EventMissionAddList;
  if ( !EventMissionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionAddMaster___c_TypeInfo);
    v21 = EventMissionAddMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v21->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = EventMissionAddMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_EventMissionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v24,
      Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__,
      0LL);
    static_fields = EventMissionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventMissionAddEntity__o *)_9__4_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v26, v27);
  }
  if ( !v22 )
    sub_1BDBAD4(EventMissionAddList, v20);
  System_Collections_Generic_List_object___Sort_57505928(
    v22,
    _9__4_0,
    (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    v22,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__) )
    {
      v32 = 0LL;
      goto LABEL_20;
    }
    current = v35.fields._current;
    if ( v35.fields._current && LODWORD(v35.fields._current[2].monitor) == 3 )
    {
      monitor_high = HIDWORD(v35.fields._current[1].monitor);
      klass = (int32_t)v35.fields._current[2].klass;
      klass_high = SHIDWORD(v35.fields._current[2].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor_high, klass, klass_high, 0, 0LL, 0LL) )
        break;
    }
  }
  v32 = (System_String_o *)StringLiteral_1/*""*/;
  if ( HIDWORD(current[2].monitor) )
  {
    v32 = System_Int32__ToString((int)current + 44, 0LL);
  }
  else if ( !System_String__IsNullOrEmpty((System_String_o *)current[3].klass, 0LL) )
  {
    v32 = (System_String_o *)current[3].klass;
  }
  if ( !System_String__IsNullOrEmpty(v32, 0LL) && notifyIcon )
    v32 = System_String__Concat_62572260(v32, (System_String_o *)StringLiteral_1194/*"1"*/, 0LL);
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
  return v32;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionAddMaster__TryGetEntity(
        EventMissionAddMaster_o *this,
        EventMissionAddEntity_o **entity,
        int32_t missionId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B44A7E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__, entity);
    byte_4B44A7E = 1;
  }
  PK = (Il2CppObject *)EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&missionId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionAddEntity__o *__fastcall EventMissionAddMaster__getEventMissionAddList(
        EventMissionAddMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  struct System_Object_array *items; // x9
  _QWORD *v32; // x10
  __int64 size; // x11
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4B44A80 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_EventMissionAddEntity__GetEnumerator__,
      *(_QWORD *)&eventId);
    sub_1BDB878(&System_IDisposable_TypeInfo, v7);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_EventMissionAddEntity__TypeInfo, v8);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionAddEntity__Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__, v11);
    sub_1BDB878(&System_Collections_Generic_List_EventMissionAddEntity__TypeInfo, v12);
    byte_4B44A80 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventMissionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BDBAD4(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_EventMissionAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventMissionAddEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_EventMissionAddEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_EventMissionAddEntity__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v30 = v26;
    if ( !v26 )
      sub_1BDBAD4(0LL, v27);
    if ( *(_DWORD *)(v26 + 24) == eventId && *(_DWORD *)(v26 + 16) == missionId )
    {
      if ( !v13 )
        sub_1BDBAD4(v26, v27);
      items = v13->fields._items;
      v32 = Method_System_Collections_Generic_List_EventMissionAddEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1BDBAD4(v26, v27);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v26,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v30;
        sub_1BDB81C((CGThumbnailListItem_o *)(v34 + 4), v30, v28, v29);
      }
    }
  }
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_30;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_30:
    v38 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return (System_Collections_Generic_List_EventMissionAddEntity__o *)v13;
}


void __fastcall EventMissionAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B44A82 & 1) == 0 )
  {
    sub_1BDB878(&EventMissionAddMaster___c_TypeInfo, v1);
    byte_4B44A82 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EventMissionAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionAddMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionAddMaster___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)EventMissionAddMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventMissionAddMaster___c___ctor(EventMissionAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMissionAddMaster___c___GetEventMissionChangeRewardIcon_b__4_0(
        EventMissionAddMaster___c_o *this,
        EventMissionAddEntity_o *a,
        EventMissionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BDBAD4(this, a);
  return a->fields.priority - b->fields.priority;
}