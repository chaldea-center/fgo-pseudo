void __fastcall EventServantPointRankMaster___ctor(EventServantPointRankMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A9D1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string___ctor__, method);
    byte_418A9D1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    398,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventServantPointRankEntity_o *__fastcall EventServantPointRankMaster__GetEnableEntity(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        int32_t svtPoint,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_List_EventServantPointRankEntity__o *EntityListFromEventAndSvt; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_EventServantPointRankEntity__o *v13; // x20
  unsigned int size; // w8
  __int64 v15; // x22
  EventServantPointRankEntity_o *v16; // x23
  struct EventServantPointRankEntity_array *items; // x9
  EventServantPointRankEntity_o *v18; // x21
  EventServantPointRankEntity_o *v19; // x8

  if ( (byte_418A9D4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__, v9);
    byte_418A9D4 = 1;
  }
  EntityListFromEventAndSvt = EventServantPointRankMaster__GetEntityListFromEventAndSvt(
                                this,
                                eventId,
                                svtId,
                                *(const MethodInfo **)&svtId);
  if ( !EntityListFromEventAndSvt
    || (v13 = EntityListFromEventAndSvt, svtId)
    && !EntityListFromEventAndSvt->fields._size
    && (EntityListFromEventAndSvt = EventServantPointRankMaster__GetEntityListFromEventAndSvt(this, eventId, 0, v12),
        (v13 = EntityListFromEventAndSvt) == 0LL) )
  {
LABEL_26:
    sub_B2C434(EntityListFromEventAndSvt, v11);
  }
  size = v13->fields._size;
  if ( (int)(size - 1) >= 1 )
  {
    v15 = 0LL;
    v16 = 0LL;
    while ( 1 )
    {
      if ( size <= (unsigned int)v15 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      items = v13->fields._items;
      v18 = items->m_Items[(int)v15];
      if ( size <= (int)v15 + 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v18 )
        goto LABEL_26;
      v19 = items->m_Items[v15 + 1];
      if ( v18->fields.svtPoint <= svtPoint )
      {
        if ( !v19 )
          goto LABEL_26;
        if ( v19->fields.svtPoint > svtPoint )
          goto LABEL_22;
      }
      else if ( !v19 )
      {
        goto LABEL_26;
      }
      if ( v19->fields.svtPoint <= svtPoint )
        v18 = items->m_Items[v15 + 1];
      else
        v18 = v16;
LABEL_22:
      size = v13->fields._size;
      ++v15;
      v16 = v18;
      if ( (int)v15 >= (int)(size - 1) )
        return v18;
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventServantPointRankEntity_o *__fastcall EventServantPointRankMaster__GetEntity(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        int32_t svtPoint,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A9CF & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418A9CF = 1;
  }
  PK = EventServantPointRankEntity__CreatePK(eventId, svtPoint, *(const MethodInfo **)&svtPoint);
  return (EventServantPointRankEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_24E4520 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventServantPointRankEntity__o *__fastcall EventServantPointRankMaster__GetEntityListFromEvent(
        EventServantPointRankMaster_o *this,
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

  if ( (byte_418A9D2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B2C35C(&EventServantPointRankEntity_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo, v11);
    byte_418A9D2 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
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
    v29 = *(&EventServantPointRankEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (EventServantPointRankEntity_c *)v27->klass->_2.typeHierarchy[v29 - 1] != EventServantPointRankEntity_TypeInfo )
    {
      sub_B2C728(v27);
LABEL_32:
      sub_B2C434(v27, v28);
    }
    if ( v27->fields.missionTargetId == eventId )
    {
      if ( !v12 )
        sub_B2C434(v27, EventServantPointRankEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        v27,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__);
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
  return (System_Collections_Generic_List_EventServantPointRankEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventServantPointRankEntity__o *__fastcall EventServantPointRankMaster__GetEntityListFromEventAndSvt(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        int32_t svtId,
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

  if ( (byte_418A9D3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B2C35C(&EventServantPointRankEntity_TypeInfo, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo, v13);
    byte_418A9D3 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
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
    v31 = *(&EventServantPointRankEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v31
      || (EventServantPointRankEntity_c *)v29->klass->_2.typeHierarchy[v31 - 1] != EventServantPointRankEntity_TypeInfo )
    {
      sub_B2C728(v29);
LABEL_33:
      sub_B2C434(v29, v30);
    }
    if ( v29->fields.missionTargetId == eventId && v29->fields.missionConditionDetailId == svtId )
    {
      if ( !v14 )
        sub_B2C434(v29, EventServantPointRankEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        v29,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__);
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
  return (System_Collections_Generic_List_EventServantPointRankEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventServantPointRankMaster__IsEnableEvent(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventServantPointRankEntity__o *EntityListFromEvent; // x0
  __int64 v6; // x1

  if ( (byte_418A9D5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Count__, *(_QWORD *)&eventId);
    byte_418A9D5 = 1;
  }
  EntityListFromEvent = EventServantPointRankMaster__GetEntityListFromEvent(this, eventId, method);
  if ( !EntityListFromEvent )
    sub_B2C434(0LL, v6);
  return EntityListFromEvent->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventServantPointRankMaster__TryGetEntity(
        EventServantPointRankMaster_o *this,
        EventServantPointRankEntity_o **entity,
        int32_t eventId,
        int32_t svtPoint,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418A9D0 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__TryGetEntity__,
      entity);
    byte_418A9D0 = 1;
  }
  PK = EventServantPointRankEntity__CreatePK(eventId, svtPoint, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__TryGetEntity__);
}