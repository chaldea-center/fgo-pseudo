void __fastcall EventServantPointRankMaster___ctor(EventServantPointRankMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC095 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EC095 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    399,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventServantPointRankEntity_o *__fastcall EventServantPointRankMaster__GetEnableEntity(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        int32_t svtPoint,
        int32_t svtId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_List_EventServantPointRankEntity__o *EntityListFromEventAndSvt; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_EventServantPointRankEntity__o *v15; // x20
  unsigned int size; // w8
  __int64 v17; // x22
  EventServantPointRankEntity_o *v18; // x23
  struct EventServantPointRankEntity_array *items; // x9
  EventServantPointRankEntity_o *v20; // x21
  EventServantPointRankEntity_o *v21; // x8

  if ( (byte_42EC098 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Count__,
      eventId,
      svtPoint,
      *(_QWORD *)&svtId);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__, v9, v10, v11);
    byte_42EC098 = 1;
  }
  EntityListFromEventAndSvt = EventServantPointRankMaster__GetEntityListFromEventAndSvt(
                                this,
                                eventId,
                                svtId,
                                *(const MethodInfo **)&svtId);
  if ( !EntityListFromEventAndSvt
    || (v15 = EntityListFromEventAndSvt, svtId)
    && !EntityListFromEventAndSvt->fields._size
    && (EntityListFromEventAndSvt = EventServantPointRankMaster__GetEntityListFromEventAndSvt(this, eventId, 0, v14),
        (v15 = EntityListFromEventAndSvt) == 0LL) )
  {
LABEL_26:
    sub_B5D69C(EntityListFromEventAndSvt, v13);
  }
  size = v15->fields._size;
  if ( (int)(size - 1) >= 1 )
  {
    v17 = 0LL;
    v18 = 0LL;
    while ( 1 )
    {
      if ( size <= (unsigned int)v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      items = v15->fields._items;
      v20 = items->m_Items[(int)v17];
      if ( size <= (int)v17 + 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v20 )
        goto LABEL_26;
      v21 = items->m_Items[v17 + 1];
      if ( v20->fields.svtPoint <= svtPoint )
      {
        if ( !v21 )
          goto LABEL_26;
        if ( v21->fields.svtPoint > svtPoint )
          goto LABEL_22;
      }
      else if ( !v21 )
      {
        goto LABEL_26;
      }
      if ( v21->fields.svtPoint <= svtPoint )
        v20 = items->m_Items[v17 + 1];
      else
        v20 = v18;
LABEL_22:
      size = v15->fields._size;
      ++v17;
      v18 = v20;
      if ( (int)v17 >= (int)(size - 1) )
        return v20;
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

  if ( (byte_42EC093 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__GetEntity__,
      eventId,
      svtPoint,
      method);
    byte_42EC093 = 1;
  }
  PK = EventServantPointRankEntity__CreatePK(eventId, svtPoint, *(const MethodInfo **)&svtPoint);
  return (EventServantPointRankEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23FB260 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventServantPointRankEntity__o *__fastcall EventServantPointRankMaster__GetEntityListFromEvent(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
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

  if ( (byte_42EC096 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&EventServantPointRankEntity_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo, v24, v25, v26);
    byte_42EC096 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
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
    v44 = *(&EventServantPointRankEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v44
      || (EventServantPointRankEntity_c *)v42->klass->_2.typeHierarchy[v44 - 1] != EventServantPointRankEntity_TypeInfo )
    {
      sub_B5D990(v42);
LABEL_32:
      sub_B5D69C(v42, v43);
    }
    if ( v42->fields.missionTargetId == eventId )
    {
      if ( !v27 )
        sub_B5D69C(v42, EventServantPointRankEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        v42,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__);
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
  return (System_Collections_Generic_List_EventServantPointRankEntity__o *)v27;
}


System_Collections_Generic_List_EventServantPointRankEntity__o *__fastcall EventServantPointRankMaster__GetEntityListFromEventAndSvt(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        int32_t svtId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  __int64 v29; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v31; // x1
  __int64 v32; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v38; // x3
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x10
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0

  if ( (byte_42EC097 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventId,
      svtId,
      method);
    sub_B5D5C4(&EventServantPointRankEntity_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo, v25, v26, v27);
    byte_42EC097 = 1;
  }
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v29);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v32);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_16:
      v42 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v38);
    }
    v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v42 + 8));
    if ( !v43 )
      goto LABEL_33;
    v45 = *(&EventServantPointRankEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v45
      || (EventServantPointRankEntity_c *)v43->klass->_2.typeHierarchy[v45 - 1] != EventServantPointRankEntity_TypeInfo )
    {
      sub_B5D990(v43);
LABEL_33:
      sub_B5D69C(v43, v44);
    }
    if ( v43->fields.missionTargetId == eventId && v43->fields.missionConditionDetailId == svtId )
    {
      if ( !v28 )
        sub_B5D69C(v43, EventServantPointRankEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        v43,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__);
    }
  }
  v46 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_29:
    v49 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v38);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return (System_Collections_Generic_List_EventServantPointRankEntity__o *)v28;
}


bool __fastcall EventServantPointRankMaster__IsEnableEvent(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_EventServantPointRankEntity__o *EntityListFromEvent; // x0
  __int64 v7; // x1

  if ( (byte_42EC099 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    byte_42EC099 = 1;
  }
  EntityListFromEvent = EventServantPointRankMaster__GetEntityListFromEvent(this, eventId, method);
  if ( !EntityListFromEvent )
    sub_B5D69C(0LL, v7);
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

  if ( (byte_42EC094 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&svtPoint);
    byte_42EC094 = 1;
  }
  PK = EventServantPointRankEntity__CreatePK(eventId, svtPoint, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__TryGetEntity__);
}