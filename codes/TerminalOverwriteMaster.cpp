void __fastcall TerminalOverwriteMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_Dictionary_int__int__o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  struct TerminalOverwriteMaster_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *v17; // x19
  struct TerminalOverwriteMaster_StaticFields *v18; // x0
  System_Collections_Generic_Dictionary_int__int__o *v19; // x19
  struct TerminalOverwriteMaster_StaticFields *v20; // x0

  if ( (byte_42E5B6A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4, v5, v6);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&TerminalOverwriteMaster_TypeInfo, v10, v11, v12);
    byte_42E5B6A = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v13,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v13 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v13,
    2,
    3,
    (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v13,
    4,
    4,
    (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v13,
    7,
    2,
    (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  static_fields = TerminalOverwriteMaster_TypeInfo->static_fields;
  static_fields->overwriteSkinTypeTable = v13;
  sub_B5D560(static_fields);
  v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v17,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v17 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v17,
    2,
    7,
    (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v17,
    4,
    8,
    (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v17,
    7,
    6,
    (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v18 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v18->overwriteEffectTypeTable = v17;
  sub_B5D560(&v18->overwriteEffectTypeTable);
  v19 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v19,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v19 )
LABEL_7:
    sub_B5D69C(v14, v15);
  System_Collections_Generic_Dictionary_int__int___Add(
    v19,
    7,
    5,
    (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v20 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v20->overwriteSpriteTypeTable = v19;
  sub_B5D560(&v20->overwriteSpriteTypeTable);
}


void __fastcall TerminalOverwriteMaster___ctor(TerminalOverwriteMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5B62 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E5B62 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    462,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
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

  if ( (byte_42E5B60 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__,
      id,
      type,
      *(_QWORD *)&priority);
    byte_42E5B60 = 1;
  }
  PK = TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (TerminalOverwriteEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23FB260 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
}


System_Collections_Generic_List_TerminalOverwriteEntity__o *__fastcall TerminalOverwriteMaster__GetEntityList(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19
  __int64 v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x10
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0

  if ( (byte_42E5B63 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      type,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&TerminalOverwriteEntity_TypeInfo, v24, v25, v26);
    byte_42E5B63 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v28);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v30);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_16:
      v41 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v37);
    }
    v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v41 + 8));
    if ( !v42 )
      goto LABEL_32;
    v44 = *(&TerminalOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v44
      || (TerminalOverwriteEntity_c *)v42->klass->_2.typeHierarchy[v44 - 1] != TerminalOverwriteEntity_TypeInfo )
    {
      v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v42);
LABEL_32:
      sub_B5D69C(v42, v43);
    }
    if ( v42->fields.missionConditionDetailId == type )
    {
      if ( !v27 )
        sub_B5D69C(v42, TerminalOverwriteEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        v42,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__);
    }
  }
  v45 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_28:
    v48 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  return (System_Collections_Generic_List_TerminalOverwriteEntity__o *)v27;
}


int32_t __fastcall TerminalOverwriteMaster__GetOverwriteType(
        TerminalOverwriteMaster_o *this,
        System_Collections_Generic_Dictionary_int__int__o *table,
        int32_t type,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3

  if ( (byte_42E5B66 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, (_DWORD)table, type, method);
    this = (TerminalOverwriteMaster_o *)sub_B5D5C4(
                                          &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                          v6,
                                          v7,
                                          v8);
    byte_42E5B66 = 1;
  }
  if ( !table )
    sub_B5D69C(this, table);
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         table,
         type,
         (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             table,
             type,
             (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
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

  if ( (byte_42E5B61 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&type);
    byte_42E5B61 = 1;
  }
  PK = TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
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

  if ( (byte_42E5B69 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalOverwriteMaster_TypeInfo, type, (_DWORD)EffectNameList, method);
    byte_42E5B69 = 1;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  const MethodInfo *v40; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v42; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v43; // x20
  TerminalOverwriteMaster___c_c *v44; // x0
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x21
  Il2CppObject *v47; // x22
  struct TerminalOverwriteMaster___c_StaticFields *v48; // x0
  _BOOL8 v49; // x0
  __int64 v50; // x1
  Il2CppObject *current; // x25
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  char v55; // w19
  int v56; // w20
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E5B64 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_TerminalOverwriteEntity___ctor__, type, (_DWORD)overwriteId, method);
    sub_B5D5C4(&System_Comparison_TerminalOverwriteEntity__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&CondType_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v28, v29, v30);
    sub_B5D5C4(&string_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__, v34, v35, v36);
    sub_B5D5C4(&TerminalOverwriteMaster___c_TypeInfo, v37, v38, v39);
    byte_42E5B64 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  *overwriteId = string_TypeInfo->static_fields->Empty;
  sub_B5D560(overwriteId);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v40);
  if ( !EntityList )
    sub_B5D69C(0LL, v42);
  v43 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v44 = TerminalOverwriteMaster___c_TypeInfo;
  if ( (BYTE3(TerminalOverwriteMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
    v44 = TerminalOverwriteMaster___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_TerminalOverwriteEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v47,
      Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_TerminalOverwriteEntity___ctor__);
    v48 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    v48->__9__7_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__7_0;
    sub_B5D560(&v48->__9__7_0);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v43,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v58,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v43,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v58,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    if ( !v49 )
      break;
    current = v58.fields.current;
    if ( !v58.fields.current )
      sub_B5D69C(v49, v50);
    monitor = (int32_t)v58.fields.current[2].monitor;
    monitor_high = HIDWORD(v58.fields.current[2].monitor);
    klass_low = SLODWORD(v58.fields.current[3].klass);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
    {
      *overwriteId = (System_String_o *)current[2].klass;
      sub_B5D560(overwriteId);
      v55 = 1;
      v56 = 17;
      goto LABEL_22;
    }
  }
  v55 = 0;
  v56 = 15;
LABEL_22:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v58,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
  return (v56 == 17) & v55;
}


bool __fastcall TerminalOverwriteMaster__TryGetOverwriteIds(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **overwriteIds,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x22
  const MethodInfo *v50; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v52; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v53; // x20
  TerminalOverwriteMaster___c_c *v54; // x0
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x21
  Il2CppObject *v57; // x22
  struct TerminalOverwriteMaster___c_StaticFields *v58; // x0
  int v59; // w26
  _BOOL8 v60; // x0
  __int64 v61; // x1
  Il2CppObject *current; // x27
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  __int64 v66; // x1
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E5B65 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_TerminalOverwriteEntity___ctor__, type, (_DWORD)overwriteIds, method);
    sub_B5D5C4(&System_Comparison_TerminalOverwriteEntity__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&CondType_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v37, v38, v39);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__, v43, v44, v45);
    sub_B5D5C4(&TerminalOverwriteMaster___c_TypeInfo, v46, v47, v48);
    byte_42E5B65 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  *overwriteIds = (System_Collections_Generic_List_string__o *)v49;
  sub_B5D560(overwriteIds);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v50);
  if ( !EntityList )
    goto LABEL_29;
  v53 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  if ( EntityList->fields._size )
  {
    v54 = TerminalOverwriteMaster___c_TypeInfo;
    if ( (BYTE3(TerminalOverwriteMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
      v54 = TerminalOverwriteMaster___c_TypeInfo;
    }
    static_fields = v54->static_fields;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54);
        static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      }
      v57 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_TerminalOverwriteEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__8_0,
        v57,
        Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_TerminalOverwriteEntity___ctor__);
      v58 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      v58->__9__8_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__8_0;
      sub_B5D560(&v58->__9__8_0);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v53,
      (System_Comparison_T__o *)_9__8_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v68,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v53,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    v69 = v68;
    v59 = -1;
    while ( 1 )
    {
      v60 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v69,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
      if ( !v60 )
        break;
      current = v69.fields.current;
      if ( !v69.fields.current )
        sub_B5D69C(v60, v61);
      monitor = (int32_t)v69.fields.current[2].monitor;
      monitor_high = HIDWORD(v69.fields.current[2].monitor);
      klass_low = SLODWORD(v69.fields.current[3].klass);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
      {
        if ( v59 != -1 && v59 != LODWORD(current[1].monitor) )
          break;
        if ( !*overwriteIds )
          sub_B5D69C(0LL, v66);
        v59 = (int)current[1].monitor;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*overwriteIds,
          (EventMissionProgressRequest_Argument_ProgressData_o *)current[2].klass,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v69,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    if ( *overwriteIds )
      return (*overwriteIds)->fields._size > 0;
LABEL_29:
    sub_B5D69C(EntityList, v52);
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

  if ( (byte_42E5B67 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalOverwriteMaster_TypeInfo, type, (_DWORD)skinName, method);
    byte_42E5B67 = 1;
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

  if ( (byte_42E5B68 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalOverwriteMaster_TypeInfo, type, (_DWORD)spriteName, method);
    byte_42E5B68 = 1;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E64AA & 1) == 0 )
  {
    sub_B5D5C4(&TerminalOverwriteMaster___c_TypeInfo, v1, v2, v3);
    byte_42E64AA = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TerminalOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalOverwriteMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall TerminalOverwriteMaster___c___TryGetOverwriteIds_b__8_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}