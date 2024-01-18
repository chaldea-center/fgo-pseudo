void __fastcall TerminalOverwriteMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__int__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct TerminalOverwriteMaster_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *v9; // x19
  struct TerminalOverwriteMaster_StaticFields *v10; // x0
  System_Collections_Generic_Dictionary_int__int__o *v11; // x19
  struct TerminalOverwriteMaster_StaticFields *v12; // x0

  if ( (byte_4184571 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v2);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_B2C35C(&TerminalOverwriteMaster_TypeInfo, v4);
    byte_4184571 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v5 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    2,
    3,
    (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    4,
    4,
    (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    7,
    2,
    (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  static_fields = TerminalOverwriteMaster_TypeInfo->static_fields;
  static_fields->overwriteSkinTypeTable = v5;
  sub_B2C2F8(static_fields, v5);
  v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v9,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v9 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v9,
    2,
    7,
    (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v9,
    4,
    8,
    (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v9,
    7,
    6,
    (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v10 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v10->overwriteEffectTypeTable = v9;
  sub_B2C2F8(&v10->overwriteEffectTypeTable, v9);
  v11 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v11,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v11 )
LABEL_7:
    sub_B2C434(v6, v7);
  System_Collections_Generic_Dictionary_int__int___Add(
    v11,
    7,
    5,
    (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v12 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v12->overwriteSpriteTypeTable = v11;
  sub_B2C2F8(&v12->overwriteSpriteTypeTable, v11);
}


void __fastcall TerminalOverwriteMaster___ctor(TerminalOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4184569 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__, method);
    byte_4184569 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    460,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TerminalOverwriteEntity_o *__fastcall TerminalOverwriteMaster__GetEntity(
        TerminalOverwriteMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4184567 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4184567 = 1;
  }
  PK = TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (TerminalOverwriteEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_24E4520 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_TerminalOverwriteEntity__o *__fastcall TerminalOverwriteMaster__GetEntityList(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x10
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0

  if ( (byte_418456A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo, v10);
    sub_B2C35C(&TerminalOverwriteEntity_TypeInfo, v11);
    byte_418456A = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_32;
    v29 = *(&TerminalOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (TerminalOverwriteEntity_c *)v27->klass->_2.typeHierarchy[v29 - 1] != TerminalOverwriteEntity_TypeInfo )
    {
      v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v27);
LABEL_32:
      sub_B2C434(v27, v28);
    }
    if ( v27->fields.missionConditionDetailId == type )
    {
      if ( !v12 )
        sub_B2C434(v27, TerminalOverwriteEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        v27,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__);
    }
  }
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_28:
    v33 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return (System_Collections_Generic_List_TerminalOverwriteEntity__o *)v12;
}


int32_t __fastcall TerminalOverwriteMaster__GetOverwriteType(
        TerminalOverwriteMaster_o *this,
        System_Collections_Generic_Dictionary_int__int__o *table,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_418456D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, table);
    this = (TerminalOverwriteMaster_o *)sub_B2C35C(
                                          &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                          v6);
    byte_418456D = 1;
  }
  if ( !table )
    sub_B2C434(this, table);
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         table,
         type,
         (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             table,
             type,
             (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  }
  else
  {
    return -1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetEntity(
        TerminalOverwriteMaster_o *this,
        TerminalOverwriteEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4184568 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__, entity);
    byte_4184568 = 1;
  }
  PK = TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteEffectNames(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **EffectNameList,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_o *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_4184570 & 1) == 0 )
  {
    sub_B2C35C(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_4184570 = 1;
  }
  v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  if ( (BYTE3(TerminalOverwriteMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalOverwriteMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo);
    v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  }
  OverwriteType = TerminalOverwriteMaster__GetOverwriteType(
                    v7,
                    (System_Collections_Generic_Dictionary_int__int__o *)v7[2].fields._lookup->monitor,
                    type,
                    method);
  return TerminalOverwriteMaster__TryGetOverwriteIds(this, OverwriteType, EffectNameList, v9);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteId(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **overwriteId,
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
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v23; // x20
  TerminalOverwriteMaster___c_c *v24; // x0
  struct TerminalOverwriteMaster___c_StaticFields *v25; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x21
  Il2CppObject *v27; // x22
  struct TerminalOverwriteMaster___c_StaticFields *v28; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x25
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  System_String_o *klass; // x1
  char v36; // w19
  int v37; // w20
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418456B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_TerminalOverwriteEntity___ctor__, *(_QWORD *)&type);
    sub_B2C35C(&System_Comparison_TerminalOverwriteEntity__TypeInfo, v7);
    sub_B2C35C(&CondType_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v14);
    sub_B2C35C(&string_TypeInfo, v15);
    sub_B2C35C(&Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__, v16);
    sub_B2C35C(&TerminalOverwriteMaster___c_TypeInfo, v17);
    byte_418456B = 1;
  }
  memset(&v39, 0, sizeof(v39));
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *overwriteId = static_fields->Empty;
  sub_B2C2F8(overwriteId, Empty);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v20);
  if ( !EntityList )
    sub_B2C434(0LL, v22);
  v23 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v24 = TerminalOverwriteMaster___c_TypeInfo;
  if ( (BYTE3(TerminalOverwriteMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
    v24 = TerminalOverwriteMaster___c_TypeInfo;
  }
  v25 = v24->static_fields;
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v25->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v25 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)v25->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_TerminalOverwriteEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v27,
      Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_TerminalOverwriteEntity___ctor__);
    v28 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    v28->__9__7_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__7_0;
    sub_B2C2F8(&v28->__9__7_0, _9__7_0);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v23,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v23,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    if ( !v29 )
      break;
    current = v39.fields.current;
    if ( !v39.fields.current )
      sub_B2C434(v29, v30);
    monitor = (int32_t)v39.fields.current[2].monitor;
    monitor_high = HIDWORD(v39.fields.current[2].monitor);
    klass_low = SLODWORD(v39.fields.current[3].klass);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
    {
      klass = (System_String_o *)current[2].klass;
      *overwriteId = klass;
      sub_B2C2F8(overwriteId, klass);
      v36 = 1;
      v37 = 17;
      goto LABEL_22;
    }
  }
  v36 = 0;
  v37 = 15;
LABEL_22:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
  return (v37 == 17) & v36;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteIds(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **overwriteIds,
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
  __int64 v20; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x22
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v25; // x20
  TerminalOverwriteMaster___c_c *v26; // x0
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x21
  Il2CppObject *v29; // x22
  struct TerminalOverwriteMaster___c_StaticFields *v30; // x0
  int v31; // w26
  _BOOL8 v32; // x0
  __int64 v33; // x1
  Il2CppObject *current; // x27
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  __int64 v38; // x1
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_418456C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_TerminalOverwriteEntity___ctor__, *(_QWORD *)&type);
    sub_B2C35C(&System_Comparison_TerminalOverwriteEntity__TypeInfo, v7);
    sub_B2C35C(&CondType_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v17);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v18);
    sub_B2C35C(&Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__, v19);
    sub_B2C35C(&TerminalOverwriteMaster___c_TypeInfo, v20);
    byte_418456C = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  *overwriteIds = (System_Collections_Generic_List_string__o *)v21;
  sub_B2C2F8(overwriteIds, v21);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v22);
  if ( !EntityList )
    goto LABEL_29;
  v25 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  if ( EntityList->fields._size )
  {
    v26 = TerminalOverwriteMaster___c_TypeInfo;
    if ( (BYTE3(TerminalOverwriteMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
      v26 = TerminalOverwriteMaster___c_TypeInfo;
    }
    static_fields = v26->static_fields;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_TerminalOverwriteEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__8_0,
        v29,
        Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_TerminalOverwriteEntity___ctor__);
      v30 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      v30->__9__8_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__8_0;
      sub_B2C2F8(&v30->__9__8_0, _9__8_0);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v25,
      (System_Comparison_T__o *)_9__8_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v40,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v25,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    v41 = v40;
    v31 = -1;
    while ( 1 )
    {
      v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v41,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
      if ( !v32 )
        break;
      current = v41.fields.current;
      if ( !v41.fields.current )
        sub_B2C434(v32, v33);
      monitor = (int32_t)v41.fields.current[2].monitor;
      monitor_high = HIDWORD(v41.fields.current[2].monitor);
      klass_low = SLODWORD(v41.fields.current[3].klass);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
      {
        if ( v31 != -1 && v31 != LODWORD(current[1].monitor) )
          break;
        if ( !*overwriteIds )
          sub_B2C434(0LL, v38);
        v31 = (int)current[1].monitor;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*overwriteIds,
          (EventMissionProgressRequest_Argument_ProgressData_o *)current[2].klass,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v41,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    if ( *overwriteIds )
      return (*overwriteIds)->fields._size > 0;
LABEL_29:
    sub_B2C434(EntityList, v24);
  }
  return 0;
}


bool __fastcall TerminalOverwriteMaster__TryGetOverwriteMainBgmName(
        TerminalOverwriteMaster_o *this,
        System_String_o **bgmName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return TerminalOverwriteMaster__TryGetOverwriteId(this, 1, bgmName, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteSkinName(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **skinName,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_c *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_418456E & 1) == 0 )
  {
    sub_B2C35C(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_418456E = 1;
  }
  v7 = TerminalOverwriteMaster_TypeInfo;
  if ( (BYTE3(TerminalOverwriteMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalOverwriteMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo);
    v7 = TerminalOverwriteMaster_TypeInfo;
  }
  OverwriteType = TerminalOverwriteMaster__GetOverwriteType(
                    (TerminalOverwriteMaster_o *)v7,
                    v7->static_fields->overwriteSkinTypeTable,
                    type,
                    method);
  return TerminalOverwriteMaster__TryGetOverwriteId(this, OverwriteType, skinName, v9);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteSpriteName(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **spriteName,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_o *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_418456F & 1) == 0 )
  {
    sub_B2C35C(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_418456F = 1;
  }
  v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  if ( (BYTE3(TerminalOverwriteMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalOverwriteMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo);
    v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  }
  OverwriteType = TerminalOverwriteMaster__GetOverwriteType(
                    v7,
                    (System_Collections_Generic_Dictionary_int__int__o *)v7[2].fields._lookup->fields.buckets,
                    type,
                    method);
  return TerminalOverwriteMaster__TryGetOverwriteId(this, OverwriteType, spriteName, v9);
}


void __fastcall TerminalOverwriteMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41847F4 & 1) == 0 )
  {
    sub_B2C35C(&TerminalOverwriteMaster___c_TypeInfo, v1);
    byte_41847F4 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(TerminalOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalOverwriteMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall TerminalOverwriteMaster___c___ctor(TerminalOverwriteMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TerminalOverwriteMaster___c___TryGetOverwriteId_b__7_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall TerminalOverwriteMaster___c___TryGetOverwriteIds_b__8_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}