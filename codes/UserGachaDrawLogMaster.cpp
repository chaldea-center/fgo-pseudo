void __fastcall UserGachaDrawLogMaster___ctor(UserGachaDrawLogMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E710F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E710F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    366,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserGachaDrawLogMaster__GetDrawLogNum(
        UserGachaDrawLogMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        int64_t startAt,
        int64_t endAt,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  int32_t v27; // w19
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x3
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0

  if ( (byte_42E7112 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, gachaId, idx, startAt);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UserGachaDrawLogEntity_TypeInfo, v20, v21, v22);
    byte_42E7112 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&gachaId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v24);
  v27 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v28 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_10:
      v31 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v39);
    }
    v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
            Enumerator,
            *(_QWORD *)(v31 + 8));
    if ( !v32 )
      goto LABEL_33;
    v34 = *(&UserGachaDrawLogEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 300LL) < (unsigned int)v34
      || *(UserGachaDrawLogEntity_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * v34 - 8) != UserGachaDrawLogEntity_TypeInfo )
    {
      v32 = sub_B5D990(v32);
LABEL_33:
      sub_B5D69C(v32, v33);
    }
    if ( *(_DWORD *)(v32 + 16) == gachaId && *(_DWORD *)(v32 + 20) == idx )
      v27 += *(_QWORD *)(v32 + 24) >= startAt && *(_QWORD *)(v32 + 24) < endAt;
  }
  v40 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_29:
    v43 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v39);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  return v27;
}


UserGachaDrawLogEntity_o *__fastcall UserGachaDrawLogMaster__GetEntity(
        UserGachaDrawLogMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        int64_t drawAt,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E7110 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__GetEntity__,
      gachaId,
      idx,
      drawAt);
    byte_42E7110 = 1;
  }
  PK = UserGachaDrawLogEntity__CreatePK(gachaId, idx, drawAt, (const MethodInfo *)drawAt);
  return (UserGachaDrawLogEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGachaDrawLogMaster__TryGetEntity(
        UserGachaDrawLogMaster_o *this,
        UserGachaDrawLogEntity_o **entity,
        int32_t gachaId,
        int32_t idx,
        int64_t drawAt,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E7111 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__TryGetEntity__,
      (_DWORD)entity,
      gachaId,
      *(_QWORD *)&idx);
    byte_42E7111 = 1;
  }
  PK = UserGachaDrawLogEntity__CreatePK(gachaId, idx, drawAt, *(const MethodInfo **)&idx);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__TryGetEntity__);
}