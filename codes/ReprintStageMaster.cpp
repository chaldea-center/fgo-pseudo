void __fastcall ReprintStageMaster___ctor(ReprintStageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3A75 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string___ctor__);
    byte_42B3A75 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    303,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ReprintStageEntity_o *__fastcall ReprintStageMaster__GetEntity(
        ReprintStageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B3A73 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string__GetEntity__);
    byte_42B3A73 = 1;
  }
  PK = ReprintStageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&wave);
  return (ReprintStageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23E2728 *)Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string__GetEntity__);
}


System_Collections_Generic_List_ReprintStageEntity__o *__fastcall ReprintStageMaster__GetEntityList(
        ReprintStageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
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
  __int64 v23; // x10
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_42B3A76 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ReprintStageEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ReprintStageEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ReprintStageEntity__TypeInfo);
    sub_B52984(&ReprintStageEntity_TypeInfo);
    byte_42B3A76 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ReprintStageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ReprintStageEntity___ctor__);
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
    if ( v22 )
    {
      v23 = *(&ReprintStageEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v22->klass->_2.bitflags2 + 1) >= (unsigned int)v23
        && (ReprintStageEntity_c *)v22->klass->_2.typeHierarchy[v23 - 1] == ReprintStageEntity_TypeInfo
        && v22->fields.missionTargetId == questId
        && v22->fields.missionConditionDetailId == questPhase )
      {
        if ( !v7 )
          sub_B52A5C(v22, v22);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          v22,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ReprintStageEntity__Add__);
      }
    }
  }
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
  return (System_Collections_Generic_List_ReprintStageEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ReprintStageMaster__TryGetEntity(
        ReprintStageMaster_o *this,
        ReprintStageEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B3A74 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string__TryGetEntity__);
    byte_42B3A74 = 1;
  }
  PK = ReprintStageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&questPhase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string__TryGetEntity__);
}