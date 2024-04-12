void __fastcall EventMissionAddMaster___ctor(EventMissionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B11A4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__);
    byte_42B11A4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    138,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionAddEntity_o *__fastcall EventMissionAddMaster__GetEntity(
        EventMissionAddMaster_o *this,
        int32_t missionId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B11A2 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__);
    byte_42B11A2 = 1;
  }
  PK = EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&priority);
  return (EventMissionAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23E2728 *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__);
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

  if ( (byte_42B11A6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_EventMissionAddEntity___ctor__);
    sub_B52984(&System_Comparison_EventMissionAddEntity__TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
    sub_B52984(&Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__);
    sub_B52984(&EventMissionAddMaster___c_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_1022/*"1"*/);
    byte_42B11A6 = 1;
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
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventMissionAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v15,
      Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventMissionAddEntity___ctor__);
    v16 = EventMissionAddMaster___c_TypeInfo->static_fields;
    v16->__9__4_0 = (struct System_Comparison_EventMissionAddEntity__o *)_9__4_0;
    sub_B52920(
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
    sub_B52A5C(EventMissionAddList, v10);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v11,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v11,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__) )
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
    v27 = System_String__Concat_44568316(v27, (System_String_o *)StringLiteral_1022/*"1"*/, 0LL);
    v28 = 3;
  }
LABEL_23:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
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

  if ( (byte_42B11A3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__);
    byte_42B11A3 = 1;
  }
  PK = EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&missionId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__);
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
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x10
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0

  if ( (byte_42B11A5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&EventMissionAddEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionAddEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionAddEntity__TypeInfo);
    byte_42B11A5 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v21 + 8));
    if ( !v22 )
      goto LABEL_33;
    v24 = *(&EventMissionAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (EventMissionAddEntity_c *)v22->klass->_2.typeHierarchy[v24 - 1] != EventMissionAddEntity_TypeInfo )
    {
      v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v22);
LABEL_33:
      sub_B52A5C(v22, v23);
    }
    if ( v22->fields.targetId == eventId && v22->fields.missionTargetId == missionId )
    {
      if ( !v7 )
        sub_B52A5C(v22, EventMissionAddEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        v22,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionAddEntity__Add__);
    }
  }
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_29:
    v28 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return (System_Collections_Generic_List_EventMissionAddEntity__o *)v7;
}


void __fastcall EventMissionAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventMissionAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD91F & 1) == 0 )
  {
    sub_B52984(&EventMissionAddMaster___c_TypeInfo);
    byte_42AD91F = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventMissionAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventMissionAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionAddMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return a->fields.priority - b->fields.priority;
}