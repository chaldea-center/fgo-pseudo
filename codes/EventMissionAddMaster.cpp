void __fastcall EventMissionAddMaster___ctor(EventMissionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C6CA & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__);
    byte_438C6CA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    138,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionAddEntity_o *__fastcall EventMissionAddMaster__GetEntity(
        EventMissionAddMaster_o *this,
        int32_t missionId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438C6C8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__);
    byte_438C6C8 = 1;
  }
  PK = EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&priority);
  return (EventMissionAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__);
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
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v11; // x20
  EventMissionAddMaster___c_c *v12; // x8
  struct EventMissionAddMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x21
  Il2CppObject *v15; // x22
  struct EventMissionAddMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  Il2CppObject *current; // x23
  int32_t klass; // w20
  int32_t monitor_high; // w22
  int64_t klass_high; // x21
  System_String_o *v27; // x20
  int v28; // w21
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_438C6CC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Comparison_EventMissionAddEntity___ctor__);
    sub_B775C4(&System_Comparison_EventMissionAddEntity__TypeInfo);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
    sub_B775C4(&Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__);
    sub_B775C4(&EventMissionAddMaster___c_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_1033/*"1"*/);
    byte_438C6CC = 1;
  }
  memset(&v31, 0, sizeof(v31));
  EventMissionAddList = EventMissionAddMaster__getEventMissionAddList(
                          this,
                          targetId,
                          missionId,
                          (const MethodInfo *)notifyIcon);
  v11 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EventMissionAddList;
  v12 = EventMissionAddMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionAddMaster___c_TypeInfo);
    v12 = EventMissionAddMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = EventMissionAddMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventMissionAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v15,
      Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventMissionAddEntity___ctor__);
    v16 = EventMissionAddMaster___c_TypeInfo->static_fields;
    v16->__9__4_0 = (struct System_Comparison_EventMissionAddEntity__o *)_9__4_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v16->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v11 )
    sub_B7769C(EventMissionAddList, v10);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v11,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v11,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__) )
    {
      v27 = 0LL;
      v28 = 1;
      goto LABEL_23;
    }
    current = v31.fields.current;
    if ( v31.fields.current && LODWORD(v31.fields.current[2].monitor) == 3 )
    {
      monitor_high = HIDWORD(v31.fields.current[1].monitor);
      klass = (int32_t)v31.fields.current[2].klass;
      klass_high = SHIDWORD(v31.fields.current[2].klass);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor_high, klass, klass_high, 0, 0LL) )
        break;
    }
  }
  v27 = (System_String_o *)StringLiteral_1/*""*/;
  if ( HIDWORD(current[2].monitor) )
  {
    v27 = System_Int32__ToString((int)current + 44, 0LL);
  }
  else if ( !System_String__IsNullOrEmpty((System_String_o *)current[3].klass, 0LL) )
  {
    v27 = (System_String_o *)current[3].klass;
  }
  v28 = 3;
  if ( !System_String__IsNullOrEmpty(v27, 0LL) && notifyIcon )
  {
    v27 = System_String__Concat_44901936(v27, (System_String_o *)StringLiteral_1033/*"1"*/, 0LL);
    v28 = 3;
  }
LABEL_23:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
  if ( (unsigned int)(v28 + 1) >> 2 )
    return v27;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionAddMaster__TryGetEntity(
        EventMissionAddMaster_o *this,
        EventMissionAddEntity_o **entity,
        int32_t missionId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438C6C9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__);
    byte_438C6C9 = 1;
  }
  PK = EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&missionId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_EventMissionAddEntity__o *__fastcall EventMissionAddMaster__getEventMissionAddList(
        EventMissionAddMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0

  if ( (byte_438C6CB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&EventMissionAddEntity_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMissionAddEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventMissionAddEntity__TypeInfo);
    byte_438C6CB = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventMissionAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_33;
    v22 = *(&EventMissionAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (EventMissionAddEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != EventMissionAddEntity_TypeInfo )
    {
      v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B77990(v20);
LABEL_33:
      sub_B7769C(v20, v21);
    }
    if ( v20->fields.targetId == eventId && v20->fields.missionTargetId == missionId )
    {
      if ( !v7 )
        sub_B7769C(v20, EventMissionAddEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        v20,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventMissionAddEntity__Add__);
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_29:
    v26 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return (System_Collections_Generic_List_EventMissionAddEntity__o *)v7;
}


void __fastcall EventMissionAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventMissionAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4388689 & 1) == 0 )
  {
    sub_B775C4(&EventMissionAddMaster___c_TypeInfo);
    byte_4388689 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventMissionAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventMissionAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionAddMaster___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, a);
  return a->fields.priority - b->fields.priority;
}