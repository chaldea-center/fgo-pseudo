void __fastcall EventMissionAddMaster___ctor(EventMissionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188DB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__, method);
    byte_4188DB8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    137,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionAddEntity_o *__fastcall EventMissionAddMaster__GetEntity(
        EventMissionAddMaster_o *this,
        int32_t missionId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188DB6 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_4188DB6 = 1;
  }
  PK = EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&priority);
  return (EventMissionAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_24E4520 *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__GetEntity__);
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
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionAddEntity__o *EventMissionAddList; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v22; // x20
  EventMissionAddMaster___c_c *v23; // x8
  struct EventMissionAddMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x21
  Il2CppObject *v26; // x22
  struct EventMissionAddMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  Il2CppObject *current; // x23
  int32_t klass; // w20
  int32_t monitor_high; // w22
  int64_t klass_high; // x21
  System_String_o *v38; // x20
  int v39; // w21
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4188DBA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventMissionAddEntity___ctor__, *(_QWORD *)&missionId);
    sub_B2C35C(&System_Comparison_EventMissionAddEntity__TypeInfo, v9);
    sub_B2C35C(&CondType_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__, v15);
    sub_B2C35C(&Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__, v16);
    sub_B2C35C(&EventMissionAddMaster___c_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_1/*""*/, v18);
    sub_B2C35C(&StringLiteral_1006/*"1"*/, v19);
    byte_4188DBA = 1;
  }
  memset(&v42, 0, sizeof(v42));
  EventMissionAddList = EventMissionAddMaster__getEventMissionAddList(
                          this,
                          targetId,
                          missionId,
                          (const MethodInfo *)notifyIcon);
  v22 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EventMissionAddList;
  v23 = EventMissionAddMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionAddMaster___c_TypeInfo);
    v23 = EventMissionAddMaster___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = EventMissionAddMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMissionAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v26,
      Method_EventMissionAddMaster___c__GetEventMissionChangeRewardIcon_b__4_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMissionAddEntity___ctor__);
    v27 = EventMissionAddMaster___c_TypeInfo->static_fields;
    v27->__9__4_0 = (struct System_Comparison_EventMissionAddEntity__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v27->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !v22 )
    sub_B2C434(EventMissionAddList, v21);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v22,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMissionAddEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v22,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionAddEntity__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__MoveNext__) )
    {
      v38 = 0LL;
      v39 = 1;
      goto LABEL_23;
    }
    current = v42.fields.current;
    if ( v42.fields.current && LODWORD(v42.fields.current[2].monitor) == 3 )
    {
      monitor_high = HIDWORD(v42.fields.current[1].monitor);
      klass = (int32_t)v42.fields.current[2].klass;
      klass_high = SHIDWORD(v42.fields.current[2].klass);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor_high, klass, klass_high, 0, 0LL) )
        break;
    }
  }
  v38 = (System_String_o *)StringLiteral_1/*""*/;
  if ( HIDWORD(current[2].monitor) )
  {
    v38 = System_Int32__ToString((int)current + 44, 0LL);
  }
  else if ( !System_String__IsNullOrEmpty((System_String_o *)current[3].klass, 0LL) )
  {
    v38 = (System_String_o *)current[3].klass;
  }
  v39 = 3;
  if ( !System_String__IsNullOrEmpty(v38, 0LL) && notifyIcon )
  {
    v38 = System_String__Concat_44305532(v38, (System_String_o *)StringLiteral_1006/*"1"*/, 0LL);
    v39 = 3;
  }
LABEL_23:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionAddEntity__Dispose__);
  if ( (unsigned int)(v39 + 1) >> 2 )
    return v38;
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

  if ( (byte_4188DB7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__, entity);
    byte_4188DB7 = 1;
  }
  PK = EventMissionAddEntity__CreatePK(missionId, priority, *(const MethodInfo **)&missionId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventMissionAddMaster__EventMissionAddEntity__string__TryGetEntity__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v17; // x1
  __int64 v18; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x3
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x10
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0

  if ( (byte_4188DB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B2C35C(&EventMissionAddEntity_TypeInfo, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionAddEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionAddEntity__TypeInfo, v13);
    byte_4188DB9 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        p_offset += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v18);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      v28 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v24);
    }
    v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v28 + 8));
    if ( !v29 )
      goto LABEL_33;
    v31 = *(&EventMissionAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v31
      || (EventMissionAddEntity_c *)v29->klass->_2.typeHierarchy[v31 - 1] != EventMissionAddEntity_TypeInfo )
    {
      v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v29);
LABEL_33:
      sub_B2C434(v29, v30);
    }
    if ( v29->fields.targetId == eventId && v29->fields.missionTargetId == missionId )
    {
      if ( !v14 )
        sub_B2C434(v29, EventMissionAddEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        v29,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionAddEntity__Add__);
    }
  }
  v32 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_29:
    v35 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v24);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return (System_Collections_Generic_List_EventMissionAddEntity__o *)v14;
}


void __fastcall EventMissionAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventMissionAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184B22 & 1) == 0 )
  {
    sub_B2C35C(&EventMissionAddMaster___c_TypeInfo, v1);
    byte_4184B22 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventMissionAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventMissionAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionAddMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}