void __fastcall StageMaster___ctor(StageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B0AF2 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_StageMaster__StageEntity__string___ctor__);
    byte_42B0AF2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    16,
    (const MethodInfo_23E268C *)Method_DataMasterBase_StageMaster__StageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StageEntity_o *__fastcall StageMaster__GetEntity(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B0AF0 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_StageMaster__StageEntity__string__GetEntity__);
    sub_B52984(&StageEntity_TypeInfo);
    byte_42B0AF0 = 1;
  }
  if ( (BYTE3(StageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
  PK = StageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&wave);
  return (StageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                            PK,
                            (const MethodInfo_23E2728 *)Method_DataMasterBase_StageMaster__StageEntity__string__GetEntity__);
}


System_Collections_Generic_List_StageEntity__o *__fastcall StageMaster__GetEntityListIncludeRemap(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
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
  __int64 v23; // x10
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x5
  _BOOL8 v31; // x0
  __int64 v32; // x1
  int v34[2]; // [xsp+8h] [xbp-78h]
  int v35; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+18h] [xbp-68h] BYREF
  StageEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_42B0AF3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMaster_ReprintStageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__get_Current__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_StageEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ReprintStageEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_StageEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_StageEntity__TypeInfo);
    sub_B52984(&StageEntity_TypeInfo);
    byte_42B0AF3 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  entity = 0LL;
  v35 = 0;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_StageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_StageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_48;
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
    if ( v22 )
    {
      v23 = *(&StageEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v22->klass->_2.bitflags2 + 1) >= (unsigned int)v23
        && (StageEntity_c *)v22->klass->_2.typeHierarchy[v23 - 1] == StageEntity_TypeInfo
        && v22->fields.missionTargetId == questId
        && v22->fields.missionConditionDetailId == questPhase )
      {
        if ( !v7 )
          sub_B52A5C(v22, v22);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          v22,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_StageEntity__Add__);
      }
    }
  }
  v34[0] = 80;
  v35 = 1;
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_29:
    v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  v35 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ReprintStageMaster___);
  if ( !list
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ReprintStageMaster__GetEntityList(
                                                                                             (ReprintStageMaster_o *)list,
                                                                                             questId,
                                                                                             questPhase,
                                                                                             0LL)) == 0LL )
  {
LABEL_48:
    sub_B52A5C(list, v8);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)list,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ReprintStageEntity__GetEnumerator__);
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__MoveNext__);
    if ( !v28 )
      break;
    if ( !v36.fields.current )
      sub_B52A5C(v28, v29);
    v31 = StageMaster__TryGetEntity(
            this,
            &entity,
            HIDWORD(v36.fields.current[1].monitor),
            (int32_t)v36.fields.current[2].klass,
            HIDWORD(v36.fields.current[2].klass),
            v30);
    if ( v31 )
    {
      if ( !v7 )
        sub_B52A5C(v31, v32);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_StageEntity__Add__);
    }
  }
  v34[0] = 173;
  ++v35;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__Dispose__);
  if ( v35 && v34[v35 - 1] == 173 )
    --v35;
  return (System_Collections_Generic_List_StageEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageMaster__GetWaveCount(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  int32_t v11; // w19
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  _DWORD *v16; // x0
  __int64 v17; // x10
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0

  if ( (byte_42B0AF4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&StageEntity_TypeInfo);
    byte_42B0AF4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  v11 = 1;
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
          goto LABEL_23;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_23:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_10:
      v15 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v16 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                      Enumerator,
                      *(_QWORD *)(v15 + 8));
    if ( v16 )
    {
      v17 = *(&StageEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 300LL) >= (unsigned int)v17
        && *(StageEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * v17 - 8) == StageEntity_TypeInfo
        && v16[4] == questId
        && v16[5] == questPhase
        && v16[8] > v11 )
      {
        v11 = v16[8];
      }
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
        goto LABEL_30;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_30:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v11;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall StageMaster__TryGetEntity(
        StageMaster_o *this,
        StageEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B0AF1 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_StageMaster__StageEntity__string__TryGetEntity__);
    sub_B52984(&StageEntity_TypeInfo);
    byte_42B0AF1 = 1;
  }
  if ( (BYTE3(StageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
  PK = StageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&questPhase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_StageMaster__StageEntity__string__TryGetEntity__);
}