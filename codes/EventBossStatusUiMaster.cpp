void __fastcall EventBossStatusUiMaster___ctor(EventBossStatusUiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A24C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string___ctor__, method);
    byte_418A24C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    286,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventBossStatusUiEntity_o *__fastcall EventBossStatusUiMaster__GetEntity(
        EventBossStatusUiMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A24A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418A24A = 1;
  }
  PK = EventBossStatusUiEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventBossStatusUiEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_24E4520 *)Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__GetEntity__);
}


EventBossStatusUiEntity_o *__fastcall EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
        EventBossStatusUiMaster_o *this,
        int32_t eventId,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  EventBossStatusUiEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  EventBossStatusUiMaster__TryGetEntity(this, &entity, eventId, index, v4);
  return entity;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventBossStatusUiEntity__o *__fastcall EventBossStatusUiMaster__GetEntityListFromEventId(
        EventBossStatusUiMaster_o *this,
        int32_t eventId,
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

  if ( (byte_418A24D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B2C35C(&EventBossStatusUiEntity_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBossStatusUiEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBossStatusUiEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_EventBossStatusUiEntity__TypeInfo, v11);
    byte_418A24D = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventBossStatusUiEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventBossStatusUiEntity___ctor__);
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
    v29 = *(&EventBossStatusUiEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (EventBossStatusUiEntity_c *)v27->klass->_2.typeHierarchy[v29 - 1] != EventBossStatusUiEntity_TypeInfo )
    {
      sub_B2C728(v27);
LABEL_32:
      sub_B2C434(v27, v28);
    }
    if ( v27->fields.missionTargetId == eventId )
    {
      if ( !v12 )
        sub_B2C434(v27, EventBossStatusUiEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        v27,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventBossStatusUiEntity__Add__);
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
  return (System_Collections_Generic_List_EventBossStatusUiEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBossStatusUiMaster__TryGetEntity(
        EventBossStatusUiMaster_o *this,
        EventBossStatusUiEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418A24B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__TryGetEntity__, entity);
    byte_418A24B = 1;
  }
  PK = EventBossStatusUiEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__TryGetEntity__);
}