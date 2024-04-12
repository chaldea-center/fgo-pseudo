void __fastcall TerminalOverwriteMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  struct TerminalOverwriteMaster_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *v5; // x19
  struct TerminalOverwriteMaster_StaticFields *v6; // x0
  System_Collections_Generic_Dictionary_int__int__o *v7; // x19
  struct TerminalOverwriteMaster_StaticFields *v8; // x0

  if ( (byte_42AD031 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&TerminalOverwriteMaster_TypeInfo);
    byte_42AD031 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v1,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v1 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    2,
    3,
    (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    4,
    4,
    (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    7,
    2,
    (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  static_fields = TerminalOverwriteMaster_TypeInfo->static_fields;
  static_fields->overwriteSkinTypeTable = v1;
  sub_B52920(static_fields);
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v5 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    2,
    7,
    (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    4,
    8,
    (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    7,
    6,
    (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v6 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v6->overwriteEffectTypeTable = v5;
  sub_B52920(&v6->overwriteEffectTypeTable);
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v7 )
LABEL_7:
    sub_B52A5C(v2, v3);
  System_Collections_Generic_Dictionary_int__int___Add(
    v7,
    7,
    5,
    (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v8 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v8->overwriteSpriteTypeTable = v7;
  sub_B52920(&v8->overwriteSpriteTypeTable);
}


void __fastcall TerminalOverwriteMaster___ctor(TerminalOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AD029 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
    byte_42AD029 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    461,
    (const MethodInfo_23E268C *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
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

  if ( (byte_42AD027 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
    byte_42AD027 = 1;
  }
  PK = TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (TerminalOverwriteEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23E2728 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
}


System_Collections_Generic_List_TerminalOverwriteEntity__o *__fastcall TerminalOverwriteMaster__GetEntityList(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
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

  if ( (byte_42AD02A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
    sub_B52984(&TerminalOverwriteEntity_TypeInfo);
    byte_42AD02A = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
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
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_32;
    v22 = *(&TerminalOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (TerminalOverwriteEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != TerminalOverwriteEntity_TypeInfo )
    {
      v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v20);
LABEL_32:
      sub_B52A5C(v20, v21);
    }
    if ( v20->fields.missionConditionDetailId == type )
    {
      if ( !v5 )
        sub_B52A5C(v20, TerminalOverwriteEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v20,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__);
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
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return (System_Collections_Generic_List_TerminalOverwriteEntity__o *)v5;
}


int32_t __fastcall TerminalOverwriteMaster__GetOverwriteType(
        TerminalOverwriteMaster_o *this,
        System_Collections_Generic_Dictionary_int__int__o *table,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_42AD02D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    this = (TerminalOverwriteMaster_o *)sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_42AD02D = 1;
  }
  if ( !table )
    sub_B52A5C(this, table);
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         table,
         type,
         (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             table,
             type,
             (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
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

  if ( (byte_42AD028 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
    byte_42AD028 = 1;
  }
  PK = TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
}


bool __fastcall TerminalOverwriteMaster__TryGetOverwriteEffectNames(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **EffectNameList,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_o *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_42AD030 & 1) == 0 )
  {
    sub_B52984(&TerminalOverwriteMaster_TypeInfo);
    byte_42AD030 = 1;
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


bool __fastcall TerminalOverwriteMaster__TryGetOverwriteId(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **overwriteId,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v10; // x20
  TerminalOverwriteMaster___c_c *v11; // x0
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x21
  Il2CppObject *v14; // x22
  struct TerminalOverwriteMaster___c_StaticFields *v15; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x25
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  char v22; // w19
  int v23; // w20
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42AD02B & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_TerminalOverwriteEntity___ctor__);
    sub_B52984(&System_Comparison_TerminalOverwriteEntity__TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__);
    sub_B52984(&TerminalOverwriteMaster___c_TypeInfo);
    byte_42AD02B = 1;
  }
  memset(&v25, 0, sizeof(v25));
  *overwriteId = string_TypeInfo->static_fields->Empty;
  sub_B52920(overwriteId);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v7);
  if ( !EntityList )
    sub_B52A5C(0LL, v9);
  v10 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v11 = TerminalOverwriteMaster___c_TypeInfo;
  if ( (BYTE3(TerminalOverwriteMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
    v11 = TerminalOverwriteMaster___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_TerminalOverwriteEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v14,
      Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_TerminalOverwriteEntity___ctor__);
    v15 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    v15->__9__7_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__7_0;
    sub_B52920(&v15->__9__7_0);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v10,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v10,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    if ( !v16 )
      break;
    current = v25.fields.current;
    if ( !v25.fields.current )
      sub_B52A5C(v16, v17);
    monitor = (int32_t)v25.fields.current[2].monitor;
    monitor_high = HIDWORD(v25.fields.current[2].monitor);
    klass_low = SLODWORD(v25.fields.current[3].klass);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
    {
      *overwriteId = (System_String_o *)current[2].klass;
      sub_B52920(overwriteId);
      v22 = 1;
      v23 = 17;
      goto LABEL_22;
    }
  }
  v22 = 0;
  v23 = 15;
LABEL_22:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
  return (v23 == 17) & v22;
}


bool __fastcall TerminalOverwriteMaster__TryGetOverwriteIds(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **overwriteIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v11; // x20
  TerminalOverwriteMaster___c_c *v12; // x0
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x21
  Il2CppObject *v15; // x22
  struct TerminalOverwriteMaster___c_StaticFields *v16; // x0
  int v17; // w26
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x27
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  __int64 v24; // x1
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42AD02C & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_TerminalOverwriteEntity___ctor__);
    sub_B52984(&System_Comparison_TerminalOverwriteEntity__TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__);
    sub_B52984(&TerminalOverwriteMaster___c_TypeInfo);
    byte_42AD02C = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  *overwriteIds = (System_Collections_Generic_List_string__o *)v7;
  sub_B52920(overwriteIds);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v8);
  if ( !EntityList )
    goto LABEL_29;
  v11 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  if ( EntityList->fields._size )
  {
    v12 = TerminalOverwriteMaster___c_TypeInfo;
    if ( (BYTE3(TerminalOverwriteMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
      v12 = TerminalOverwriteMaster___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_TerminalOverwriteEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__8_0,
        v15,
        Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_TerminalOverwriteEntity___ctor__);
      v16 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      v16->__9__8_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__8_0;
      sub_B52920(&v16->__9__8_0);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v11,
      (System_Comparison_T__o *)_9__8_0,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v11,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    v27 = v26;
    v17 = -1;
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v27,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
      if ( !v18 )
        break;
      current = v27.fields.current;
      if ( !v27.fields.current )
        sub_B52A5C(v18, v19);
      monitor = (int32_t)v27.fields.current[2].monitor;
      monitor_high = HIDWORD(v27.fields.current[2].monitor);
      klass_low = SLODWORD(v27.fields.current[3].klass);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
      {
        if ( v17 != -1 && v17 != LODWORD(current[1].monitor) )
          break;
        if ( !*overwriteIds )
          sub_B52A5C(0LL, v24);
        v17 = (int)current[1].monitor;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*overwriteIds,
          (EventMissionProgressRequest_Argument_ProgressData_o *)current[2].klass,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v27,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    if ( *overwriteIds )
      return (*overwriteIds)->fields._size > 0;
LABEL_29:
    sub_B52A5C(EntityList, v10);
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


bool __fastcall TerminalOverwriteMaster__TryGetOverwriteSkinName(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **skinName,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_c *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_42AD02E & 1) == 0 )
  {
    sub_B52984(&TerminalOverwriteMaster_TypeInfo);
    byte_42AD02E = 1;
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


bool __fastcall TerminalOverwriteMaster__TryGetOverwriteSpriteName(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **spriteName,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_o *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_42AD02F & 1) == 0 )
  {
    sub_B52984(&TerminalOverwriteMaster_TypeInfo);
    byte_42AD02F = 1;
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
  Il2CppObject *v1; // x19
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42ADDD0 & 1) == 0 )
  {
    sub_B52984(&TerminalOverwriteMaster___c_TypeInfo);
    byte_42ADDD0 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(TerminalOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalOverwriteMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall TerminalOverwriteMaster___c___TryGetOverwriteIds_b__8_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}