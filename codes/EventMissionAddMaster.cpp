void __fastcall EventMissionAddMaster___ctor(EventMissionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B16E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__);
    byte_4A5B16E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    139,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionAddEntity_o *__fastcall EventMissionAddMaster__GetEntity(
        EventMissionAddMaster_o *this,
        int32_t missionId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B16C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__);
    byte_4A5B16C = 1;
  }
  PK = (Il2CppObject *)EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&priority);
  return (EventMissionAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_311DC8C *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMissionAddMaster__GetEventMissionChangeRewardIcon(
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
  Il2CppObject *current; // x26
  int32_t klass; // w20
  int32_t monitor_high; // w22
  int64_t klass_high; // x21
  System_String_o *v22; // x20
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5B170 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventMissionAddEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
    sub_1B885B0(&Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__);
    sub_1B885B0(&EventMissionAddMaster___c_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_1266/*"1"*/);
    byte_4A5B170 = 1;
  }
  memset(&v25, 0, sizeof(v25));
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
    _9__4_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v14,
      Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__,
      0LL);
    static_fields = EventMissionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventMissionAddEntity__o *)_9__4_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v16, v17);
  }
  if ( !v12 )
    sub_1B8880C(EventMissionAddList, v10);
  System_Collections_Generic_List_object___Sort_55571192(
    v12,
    _9__4_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    v12,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__) )
    {
      v22 = 0LL;
      goto LABEL_20;
    }
    current = v25.fields._current;
    if ( v25.fields._current && LODWORD(v25.fields._current[2].monitor) == 3 )
    {
      monitor_high = HIDWORD(v25.fields._current[1].monitor);
      klass = (int32_t)v25.fields._current[2].klass;
      klass_high = SHIDWORD(v25.fields._current[2].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor_high, klass, klass_high, 0, 0LL, 0LL) )
        break;
    }
  }
  v22 = (System_String_o *)StringLiteral_1/*""*/;
  if ( HIDWORD(current[2].monitor) )
  {
    v22 = System_Int32__ToString((int)current + 44, 0LL);
  }
  else if ( !System_String__IsNullOrEmpty((System_String_o *)current[3].klass, 0LL) )
  {
    v22 = (System_String_o *)current[3].klass;
  }
  if ( !System_String__IsNullOrEmpty(v22, 0LL) && notifyIcon )
    v22 = System_String__Concat_61707032(v22, (System_String_o *)StringLiteral_1266/*"1"*/, 0LL);
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
  return v22;
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

  if ( (byte_4A5B16D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__);
    byte_4A5B16D = 1;
  }
  PK = (Il2CppObject *)EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&missionId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_EventMissionAddEntity__o *__fastcall EventMissionAddMaster__getEventMissionAddList(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  EventMissionAddEntity_c *v25; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4A5B16F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&EventMissionAddEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionAddEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionAddEntity__TypeInfo);
    byte_4A5B16F = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v24 = v20;
    if ( !v20 )
      goto LABEL_36;
    v25 = EventMissionAddEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventMissionAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) < (unsigned int)methodPtr_low
      || *(EventMissionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * methodPtr_low - 8) != EventMissionAddEntity_TypeInfo )
    {
      sub_1B88ACC(v20);
LABEL_36:
      sub_1B8880C(v20, v21);
    }
    if ( *(_DWORD *)(v20 + 24) == eventId && *(_DWORD *)(v20 + 16) == missionId )
    {
      if ( !v7 )
        sub_1B8880C(v20, EventMissionAddEntity_TypeInfo);
      items = v7->fields._items;
      v28 = Method_System_Collections_Generic_List_EventMissionAddEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1B8880C(v20, v25);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), v24, v22, v23);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_32;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_32:
    v34 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_EventMissionAddEntity__o *)v7;
}


void __fastcall EventMissionAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B171 & 1) == 0 )
  {
    sub_1B885B0(&EventMissionAddMaster___c_TypeInfo);
    byte_4A5B171 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventMissionAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventMissionAddMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionAddMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventMissionAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return a->fields.priority - b->fields.priority;
}