void __fastcall RestrictionSlotMaster___ctor(RestrictionSlotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DC02 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string___ctor__);
    byte_438DC02 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    445,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string___ctor__);
}


RestrictionSlotEntity_array *__fastcall RestrictionSlotMaster__GetEntities(
        RestrictionSlotMaster_o *this,
        int32_t id,
        int32_t slotNo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
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

  if ( (byte_438DC01 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_RestrictionSlotEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_RestrictionSlotEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_RestrictionSlotEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_RestrictionSlotEntity__TypeInfo);
    sub_B775C4(&RestrictionSlotEntity_TypeInfo);
    byte_438DC01 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_RestrictionSlotEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_RestrictionSlotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v19 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_34;
    v22 = *(&RestrictionSlotEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (RestrictionSlotEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != RestrictionSlotEntity_TypeInfo )
    {
      sub_B77990(v20);
LABEL_34:
      sub_B7769C(v20, v21);
    }
    if ( v20->fields.missionTargetId == id && v20->fields.missionConditionDetailId == slotNo )
    {
      if ( !v7 )
        sub_B7769C(v20, RestrictionSlotEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        v20,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_RestrictionSlotEntity__Add__);
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
        goto LABEL_29;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_29:
    v26 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v26 + 8));
  if ( !v7 )
LABEL_36:
    sub_B7769C(list, v8);
  return (RestrictionSlotEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                          (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_RestrictionSlotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionSlotEntity_o *__fastcall RestrictionSlotMaster__GetEntity(
        RestrictionSlotMaster_o *this,
        int32_t id,
        int32_t slotNo,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438DC03 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__GetEntity__);
    byte_438DC03 = 1;
  }
  PK = RestrictionSlotEntity__CreatePK(id, slotNo, idx, *(const MethodInfo **)&idx);
  return (RestrictionSlotEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_21FBCE4 *)Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RestrictionSlotMaster__TryGetEntity(
        RestrictionSlotMaster_o *this,
        RestrictionSlotEntity_o **entity,
        int32_t id,
        int32_t slotNo,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438DC04 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__TryGetEntity__);
    byte_438DC04 = 1;
  }
  PK = RestrictionSlotEntity__CreatePK(id, slotNo, idx, *(const MethodInfo **)&slotNo);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__TryGetEntity__);
}