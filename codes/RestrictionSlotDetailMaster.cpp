void __fastcall RestrictionSlotDetailMaster___ctor(RestrictionSlotDetailMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAF1D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EAF1D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    446,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string___ctor__);
}


RestrictionSlotDetailEntity_array *__fastcall RestrictionSlotDetailMaster__GetEntities(
        RestrictionSlotDetailMaster_o *this,
        System_Collections_Generic_List_int__o *idList,
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x19
  __int64 v34; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v36; // x1
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v43; // x3
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  unsigned __int64 v45; // x10
  int32_t *v46; // x11
  __int64 v47; // x0
  int32_t *v48; // x0
  __int64 v49; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x22
  __int64 v51; // x9
  _BOOL8 v52; // x0
  __int64 v53; // x1
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  unsigned __int64 v55; // x10
  int32_t *v56; // x11
  __int64 v57; // x0

  if ( (byte_42EAF1C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)idList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionSlotDetailEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_RestrictionSlotDetailEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&RestrictionSlotDetailEntity_TypeInfo, v30, v31, v32);
    byte_42EAF1C = 1;
  }
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_RestrictionSlotDetailEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_RestrictionSlotDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v36);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v40;
        p_offset += 4;
        if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v37);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v44 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v45 = 0LL;
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v46 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v47 = (__int64)&v44->vtable[*v46].method;
    }
    else
    {
LABEL_16:
      v47 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v43);
    }
    v48 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
                       Enumerator,
                       *(_QWORD *)(v47 + 8));
    v50 = (EventMissionProgressRequest_Argument_ProgressData_o *)v48;
    if ( !v48 )
      goto LABEL_34;
    v51 = *(&RestrictionSlotDetailEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v48 + 300LL) < (unsigned int)v51
      || *(RestrictionSlotDetailEntity_c **)(*(_QWORD *)(*(_QWORD *)v48 + 200LL) + 8 * v51 - 8) != RestrictionSlotDetailEntity_TypeInfo )
    {
      sub_B5D990(v48);
LABEL_34:
      sub_B5D69C(v48, v49);
    }
    if ( !idList )
      sub_B5D69C(v48, RestrictionSlotDetailEntity_TypeInfo);
    v52 = System_Collections_Generic_List_int___Contains(
            idList,
            v48[4],
            (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( v52 )
    {
      if ( !v33 )
        sub_B5D69C(v52, v53);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v33,
        v50,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__Add__);
    }
  }
  v54 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v57 = (__int64)&v54->vtable[*v56].method;
  }
  else
  {
LABEL_29:
    v57 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v43);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v57 + 8));
  if ( !v33 )
LABEL_37:
    sub_B5D69C(list, v34);
  return (RestrictionSlotDetailEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionSlotDetailEntity_o *__fastcall RestrictionSlotDetailMaster__GetEntity(
        RestrictionSlotDetailMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EAF1E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__GetEntity__,
      id,
      idx,
      method);
    byte_42EAF1E = 1;
  }
  PK = RestrictionSlotDetailEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (RestrictionSlotDetailEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23FB260 *)Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__GetEntity__);
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

  if ( (byte_42EAF1F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&idx);
    byte_42EAF1F = 1;
  }
  PK = RestrictionSlotDetailEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__TryGetEntity__);
}