void __fastcall WarBoardSquareIndexGroupMaster___ctor(WarBoardSquareIndexGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FBAEF & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string___ctor__,
      method);
    byte_40FBAEF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    466,
    (const MethodInfo_266F73C *)Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardSquareIndexGroupEntity_o *__fastcall WarBoardSquareIndexGroupMaster__GetEntity(
        WarBoardSquareIndexGroupMaster_o *this,
        int32_t id,
        int32_t stageId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FBAF0 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_40FBAF0 = 1;
  }
  PK = WarBoardSquareIndexGroupEntity__CreatePK(id, stageId, squareIndex, *(const MethodInfo **)&squareIndex);
  return (WarBoardSquareIndexGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                               PK,
                                               (const MethodInfo_266F7D8 *)Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall WarBoardSquareIndexGroupMaster__GetStageList(
        WarBoardSquareIndexGroupMaster_o *this,
        int32_t id,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  _DWORD *v26; // x0
  __int64 v27; // x9
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  if ( (byte_40FBAEE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&id);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B16FFC(&WarBoardSquareIndexGroupEntity_TypeInfo, v14);
    byte_40FBAEE = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&id,
                                                    *(_QWORD *)&stageId,
                                                    method,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                      Enumerator,
                      *(_QWORD *)(v25 + 8));
    if ( !v26 )
      goto LABEL_33;
    v27 = *(&WarBoardSquareIndexGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 300LL) < (unsigned int)v27
      || *(WarBoardSquareIndexGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * v27 - 8) != WarBoardSquareIndexGroupEntity_TypeInfo )
    {
      sub_B173C8(v26);
LABEL_33:
      sub_B170D4();
    }
    if ( v26[4] == id && v26[5] == stageId )
    {
      if ( !v15 )
        sub_B170D4();
      System_Collections_Generic_List_int___Add(
        v15,
        v26[6],
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_29:
    v31 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v15;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardSquareIndexGroupMaster__TryGetEntity(
        WarBoardSquareIndexGroupMaster_o *this,
        WarBoardSquareIndexGroupEntity_o **entity,
        int32_t id,
        int32_t stageId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FBAF1 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__TryGetEntity__,
      entity);
    byte_40FBAF1 = 1;
  }
  PK = WarBoardSquareIndexGroupEntity__CreatePK(id, stageId, squareIndex, *(const MethodInfo **)&stageId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__TryGetEntity__);
}