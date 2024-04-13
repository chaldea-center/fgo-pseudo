void __fastcall RestrictionSlotMaster___ctor(RestrictionSlotMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAF23 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EAF23 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    445,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string___ctor__);
}


RestrictionSlotEntity_array *__fastcall RestrictionSlotMaster__GetEntities(
        RestrictionSlotMaster_o *this,
        int32_t id,
        int32_t slotNo,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x19
  __int64 v32; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v34; // x1
  __int64 v35; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v41; // x3
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x10
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  unsigned __int64 v50; // x10
  int32_t *v51; // x11
  __int64 v52; // x0

  if ( (byte_42EAF22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, id, slotNo, method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionSlotEntity__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionSlotEntity__ToArray__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionSlotEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_RestrictionSlotEntity__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&RestrictionSlotEntity_TypeInfo, v28, v29, v30);
    byte_42EAF22 = 1;
  }
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_RestrictionSlotEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_RestrictionSlotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v34);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v38;
        p_offset += 4;
        if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v35);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v42 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v44 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_16:
      v45 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v41);
    }
    v46 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v45 + 8));
    if ( !v46 )
      goto LABEL_34;
    v48 = *(&RestrictionSlotEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v46->klass->_2.bitflags2 + 1) < (unsigned int)v48
      || (RestrictionSlotEntity_c *)v46->klass->_2.typeHierarchy[v48 - 1] != RestrictionSlotEntity_TypeInfo )
    {
      sub_B5D990(v46);
LABEL_34:
      sub_B5D69C(v46, v47);
    }
    if ( v46->fields.missionTargetId == id && v46->fields.missionConditionDetailId == slotNo )
    {
      if ( !v31 )
        sub_B5D69C(v46, RestrictionSlotEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v31,
        v46,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RestrictionSlotEntity__Add__);
    }
  }
  v49 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v50 = 0LL;
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      ++v50;
      v51 += 4;
      if ( v50 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_29:
    v52 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v41);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v52 + 8));
  if ( !v31 )
LABEL_36:
    sub_B5D69C(list, v32);
  return (RestrictionSlotEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v31,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_RestrictionSlotEntity__ToArray__);
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

  if ( (byte_42EAF24 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__GetEntity__,
      id,
      slotNo,
      *(_QWORD *)&idx);
    byte_42EAF24 = 1;
  }
  PK = RestrictionSlotEntity__CreatePK(id, slotNo, idx, *(const MethodInfo **)&idx);
  return (RestrictionSlotEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23FB260 *)Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__GetEntity__);
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

  if ( (byte_42EAF25 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&slotNo);
    byte_42EAF25 = 1;
  }
  PK = RestrictionSlotEntity__CreatePK(id, slotNo, idx, *(const MethodInfo **)&slotNo);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__TryGetEntity__);
}