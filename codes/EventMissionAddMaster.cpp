void __fastcall EventMissionAddMaster___ctor(EventMissionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66BC6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__, method);
    byte_4B66BC6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    143,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionAddEntity_o *__fastcall EventMissionAddMaster__GetEntity(
        EventMissionAddMaster_o *this,
        int32_t missionId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66BC4 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_4B66BC4 = 1;
  }
  PK = (Il2CppObject *)EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&priority);
  return (EventMissionAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *current; // x26
  int32_t klass; // w20
  int32_t monitor_high; // w22
  int64_t klass_high; // x21
  System_String_o *v36; // x20
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B66BC8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_EventMissionAddEntity__TypeInfo, *(_QWORD *)&missionId);
    sub_1BE4ACC(&CondType_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__, v14);
    sub_1BE4ACC(&Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__, v15);
    sub_1BE4ACC(&EventMissionAddMaster___c_TypeInfo, v16);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v17);
    sub_1BE4ACC(&StringLiteral_1262/*"1"*/, v18);
    byte_4B66BC8 = 1;
  }
  memset(&v39, 0, sizeof(v39));
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
    _9__4_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventMissionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v24,
      Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__,
      0LL);
    static_fields = EventMissionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventMissionAddEntity__o *)_9__4_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v26, v27, v28, v29, v30, v31);
  }
  if ( !v22 )
    sub_1BE4D28(EventMissionAddList, v20);
  System_Collections_Generic_List_object___Sort_56548584(
    v22,
    _9__4_0,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    v22,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v39 = v38;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__) )
    {
      v36 = 0LL;
      goto LABEL_20;
    }
    current = v39.fields._current;
    if ( v39.fields._current && LODWORD(v39.fields._current[2].monitor) == 3 )
    {
      monitor_high = HIDWORD(v39.fields._current[1].monitor);
      klass = (int32_t)v39.fields._current[2].klass;
      klass_high = SHIDWORD(v39.fields._current[2].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor_high, klass, klass_high, 0, 0LL, 0LL) )
        break;
    }
  }
  v36 = (System_String_o *)StringLiteral_1/*""*/;
  if ( HIDWORD(current[2].monitor) )
  {
    v36 = System_Int32__ToString((int)current + 44, 0LL);
  }
  else if ( !System_String__IsNullOrEmpty((System_String_o *)current[3].klass, 0LL) )
  {
    v36 = (System_String_o *)current[3].klass;
  }
  if ( !System_String__IsNullOrEmpty(v36, 0LL) && notifyIcon )
    v36 = System_String__Concat_62698808(v36, (System_String_o *)StringLiteral_1262/*"1"*/, 0LL);
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
  return v36;
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

  if ( (byte_4B66BC5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__, entity);
    byte_4B66BC5 = 1;
  }
  PK = (Il2CppObject *)EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&missionId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__);
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
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x8
  EventMissionAddEntity_c *v36; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v39; // x10
  __int64 size; // x11
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0

  if ( (byte_4B66BC7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&EventMissionAddEntity_TypeInfo, v7);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionAddEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMissionAddEntity__TypeInfo, v13);
    byte_4B66BC7 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMissionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v35 = v27;
    if ( !v27 )
      goto LABEL_36;
    v36 = EventMissionAddEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventMissionAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
      || *(EventMissionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != EventMissionAddEntity_TypeInfo )
    {
      sub_1BE4FE8(v27);
LABEL_36:
      sub_1BE4D28(v27, v28);
    }
    if ( *(_DWORD *)(v27 + 24) == eventId && *(_DWORD *)(v27 + 16) == missionId )
    {
      if ( !v14 )
        sub_1BE4D28(v27, EventMissionAddEntity_TypeInfo);
      items = v14->fields._items;
      v39 = Method_System_Collections_Generic_List_EventMissionAddEntity__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1BE4D28(v27, v36);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v27,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v35;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v41 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_32;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_32:
    v45 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
  return (System_Collections_Generic_List_EventMissionAddEntity__o *)v14;
}


void __fastcall EventMissionAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B66BC9 & 1) == 0 )
  {
    sub_1BE4ACC(&EventMissionAddMaster___c_TypeInfo, v1);
    byte_4B66BC9 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventMissionAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionAddMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionAddMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)EventMissionAddMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, a);
  return a->fields.priority - b->fields.priority;
}