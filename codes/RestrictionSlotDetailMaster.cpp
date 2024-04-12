void __fastcall RestrictionSlotDetailMaster___ctor(RestrictionSlotDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B28CC & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string___ctor__);
    byte_42B28CC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    446,
    (const MethodInfo_23E268C *)Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string___ctor__);
}


RestrictionSlotDetailEntity_array *__fastcall RestrictionSlotDetailMaster__GetEntities(
        RestrictionSlotDetailMaster_o *this,
        System_Collections_Generic_List_int__o *idList,
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
  int32_t *v20; // x0
  __int64 v21; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x22
  __int64 v23; // x9
  _BOOL8 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0

  if ( (byte_42B28CB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_RestrictionSlotDetailEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_RestrictionSlotDetailEntity__TypeInfo);
    sub_B52984(&RestrictionSlotDetailEntity_TypeInfo);
    byte_42B28CB = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_RestrictionSlotDetailEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_RestrictionSlotDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
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
    v20 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                       Enumerator,
                       *(_QWORD *)(v19 + 8));
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)v20;
    if ( !v20 )
      goto LABEL_34;
    v23 = *(&RestrictionSlotDetailEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 300LL) < (unsigned int)v23
      || *(RestrictionSlotDetailEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * v23 - 8) != RestrictionSlotDetailEntity_TypeInfo )
    {
      sub_B52D50(v20);
LABEL_34:
      sub_B52A5C(v20, v21);
    }
    if ( !idList )
      sub_B52A5C(v20, RestrictionSlotDetailEntity_TypeInfo);
    v24 = System_Collections_Generic_List_int___Contains(
            idList,
            v20[4],
            (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( v24 )
    {
      if ( !v5 )
        sub_B52A5C(v24, v25);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v22,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__Add__);
    }
  }
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_29:
    v29 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v29 + 8));
  if ( !v5 )
LABEL_37:
    sub_B52A5C(list, v6);
  return (RestrictionSlotDetailEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionSlotDetailEntity_o *__fastcall RestrictionSlotDetailMaster__GetEntity(
        RestrictionSlotDetailMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B28CD & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__GetEntity__);
    byte_42B28CD = 1;
  }
  PK = RestrictionSlotDetailEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (RestrictionSlotDetailEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23E2728 *)Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RestrictionSlotDetailMaster__TryGetEntity(
        RestrictionSlotDetailMaster_o *this,
        RestrictionSlotDetailEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B28CE & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__TryGetEntity__);
    byte_42B28CE = 1;
  }
  PK = RestrictionSlotDetailEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__TryGetEntity__);
}