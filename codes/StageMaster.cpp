void __fastcall StageMaster___ctor(StageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188C3C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_StageMaster__StageEntity__string___ctor__, method);
    byte_4188C3C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    16,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_StageMaster__StageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StageEntity_o *__fastcall StageMaster__GetEntity(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *PK; // x1

  if ( (byte_4188C3A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_StageMaster__StageEntity__string__GetEntity__, *(_QWORD *)&questId);
    sub_B2C35C(&StageEntity_TypeInfo, v9);
    byte_4188C3A = 1;
  }
  if ( (BYTE3(StageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
  PK = StageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&wave);
  return (StageEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                            PK,
                            (const MethodInfo_24E4520 *)Method_DataMasterBase_StageMaster__StageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_StageEntity__o *__fastcall StageMaster__GetEntityListIncludeRemap(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v23; // x1
  __int64 v24; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v30; // x3
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x0
  __int64 v36; // x10
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  _BOOL8 v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x5
  _BOOL8 v44; // x0
  __int64 v45; // x1
  int v47[2]; // [xsp+8h] [xbp-78h]
  int v48; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+18h] [xbp-68h] BYREF
  StageEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4188C3D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMaster_ReprintStageMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__get_Current__, v11);
    sub_B2C35C(&System_IDisposable_TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_StageEntity__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ReprintStageEntity__GetEnumerator__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_StageEntity___ctor__, v17);
    sub_B2C35C(&System_Collections_Generic_List_StageEntity__TypeInfo, v18);
    sub_B2C35C(&StageEntity_TypeInfo, v19);
    byte_4188C3D = 1;
  }
  memset(&v49, 0, sizeof(v49));
  entity = 0LL;
  v48 = 0;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_StageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_StageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v27;
        p_offset += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v24);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v30);
    }
    v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v34 + 8));
    if ( v35 )
    {
      v36 = *(&StageEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v35->klass->_2.bitflags2 + 1) >= (unsigned int)v36
        && (StageEntity_c *)v35->klass->_2.typeHierarchy[v36 - 1] == StageEntity_TypeInfo
        && v35->fields.missionTargetId == questId
        && v35->fields.missionConditionDetailId == questPhase )
      {
        if ( !v20 )
          sub_B2C434(v35, v35);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          v35,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_StageEntity__Add__);
      }
    }
  }
  v47[0] = 80;
  v48 = 1;
  v37 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_29:
    v40 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v30);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  v48 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ReprintStageMaster___);
  if ( !list
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ReprintStageMaster__GetEntityList(
                                                                                             (ReprintStageMaster_o *)list,
                                                                                             questId,
                                                                                             questPhase,
                                                                                             0LL)) == 0LL )
  {
LABEL_48:
    sub_B2C434(list, v21);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v49,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)list,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ReprintStageEntity__GetEnumerator__);
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v49,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__MoveNext__);
    if ( !v41 )
      break;
    if ( !v49.fields.current )
      sub_B2C434(v41, v42);
    v44 = StageMaster__TryGetEntity(
            this,
            &entity,
            HIDWORD(v49.fields.current[1].monitor),
            (int32_t)v49.fields.current[2].klass,
            HIDWORD(v49.fields.current[2].klass),
            v43);
    if ( v44 )
    {
      if ( !v20 )
        sub_B2C434(v44, v45);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_StageEntity__Add__);
    }
  }
  v47[0] = 173;
  ++v48;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v49,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__Dispose__);
  if ( v48 && v47[v48 - 1] == 173 )
    --v48;
  return (System_Collections_Generic_List_StageEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageMaster__GetWaveCount(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  int32_t v15; // w19
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  _DWORD *v20; // x0
  __int64 v21; // x10
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v26; // x3
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0

  if ( (byte_4188C3E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&StageEntity_TypeInfo, v10);
    byte_4188C3E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v12);
  v15 = 1;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_23:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
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
          goto LABEL_10;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_10:
      v19 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v26);
    }
    v20 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                      Enumerator,
                      *(_QWORD *)(v19 + 8));
    if ( v20 )
    {
      v21 = *(&StageEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 300LL) >= (unsigned int)v21
        && *(StageEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * v21 - 8) == StageEntity_TypeInfo
        && v20[4] == questId
        && v20[5] == questPhase
        && v20[8] > v15 )
      {
        v15 = v20[8];
      }
    }
  }
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_30:
    v30 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v26);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v15;
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
  __int64 v11; // x1
  System_String_o *PK; // x2

  if ( (byte_4188C3B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_StageMaster__StageEntity__string__TryGetEntity__, entity);
    sub_B2C35C(&StageEntity_TypeInfo, v11);
    byte_4188C3B = 1;
  }
  if ( (BYTE3(StageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
  PK = StageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&questPhase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_StageMaster__StageEntity__string__TryGetEntity__);
}