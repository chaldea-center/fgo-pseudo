void __fastcall EventBossStatusUiMaster___ctor(EventBossStatusUiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B26BA & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string___ctor__);
    byte_42B26BA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    287,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventBossStatusUiEntity_o *__fastcall EventBossStatusUiMaster__GetEntity(
        EventBossStatusUiMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B26B8 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__GetEntity__);
    byte_42B26B8 = 1;
  }
  PK = EventBossStatusUiEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventBossStatusUiEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23E2728 *)Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__GetEntity__);
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


System_Collections_Generic_List_EventBossStatusUiEntity__o *__fastcall EventBossStatusUiMaster__GetEntityListFromEventId(
        EventBossStatusUiMaster_o *this,
        int32_t eventId,
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

  if ( (byte_42B26BB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&EventBossStatusUiEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventBossStatusUiEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBossStatusUiEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventBossStatusUiEntity__TypeInfo);
    byte_42B26BB = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventBossStatusUiEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventBossStatusUiEntity___ctor__);
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
    v22 = *(&EventBossStatusUiEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (EventBossStatusUiEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != EventBossStatusUiEntity_TypeInfo )
    {
      sub_B52D50(v20);
LABEL_32:
      sub_B52A5C(v20, v21);
    }
    if ( v20->fields.missionTargetId == eventId )
    {
      if ( !v5 )
        sub_B52A5C(v20, EventBossStatusUiEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v20,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventBossStatusUiEntity__Add__);
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
  return (System_Collections_Generic_List_EventBossStatusUiEntity__o *)v5;
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

  if ( (byte_42B26B9 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__TryGetEntity__);
    byte_42B26B9 = 1;
  }
  PK = EventBossStatusUiEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__TryGetEntity__);
}