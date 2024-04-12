void __fastcall WarBoardSquareIndexGroupMaster___ctor(WarBoardSquareIndexGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B225D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string___ctor__);
    byte_42B225D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    467,
    (const MethodInfo_23E268C *)Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string___ctor__);
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

  if ( (byte_42B225E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__GetEntity__);
    byte_42B225E = 1;
  }
  PK = WarBoardSquareIndexGroupEntity__CreatePK(id, stageId, squareIndex, *(const MethodInfo **)&squareIndex);
  return (WarBoardSquareIndexGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                               PK,
                                               (const MethodInfo_23E2728 *)Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__GetEntity__);
}


System_Collections_Generic_List_int__o *__fastcall WarBoardSquareIndexGroupMaster__GetStageList(
        WarBoardSquareIndexGroupMaster_o *this,
        int32_t id,
        int32_t stageId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x19
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
  _DWORD *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x9
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0

  if ( (byte_42B225C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&WarBoardSquareIndexGroupEntity_TypeInfo);
    byte_42B225C = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
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
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      Enumerator,
                      *(_QWORD *)(v21 + 8));
    if ( !v22 )
      goto LABEL_33;
    v24 = *(&WarBoardSquareIndexGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v22 + 300LL) < (unsigned int)v24
      || *(WarBoardSquareIndexGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v22 + 200LL) + 8 * v24 - 8) != WarBoardSquareIndexGroupEntity_TypeInfo )
    {
      sub_B52D50(v22);
LABEL_33:
      sub_B52A5C(v22, v23);
    }
    if ( v22[4] == id && v22[5] == stageId )
    {
      if ( !v7 )
        sub_B52A5C(v22, WarBoardSquareIndexGroupEntity_TypeInfo);
      System_Collections_Generic_List_int___Add(
        v7,
        v22[6],
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_29:
    v28 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return v7;
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

  if ( (byte_42B225F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__TryGetEntity__);
    byte_42B225F = 1;
  }
  PK = WarBoardSquareIndexGroupEntity__CreatePK(id, stageId, squareIndex, *(const MethodInfo **)&stageId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_WarBoardSquareIndexGroupMaster__WarBoardSquareIndexGroupEntity__string__TryGetEntity__);
}