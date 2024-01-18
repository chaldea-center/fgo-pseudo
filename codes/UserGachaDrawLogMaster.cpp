void __fastcall UserGachaDrawLogMaster___ctor(UserGachaDrawLogMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186FBA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string___ctor__, method);
    byte_4186FBA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    365,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string___ctor__);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  int32_t v19; // w19
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0

  if ( (byte_4186FBD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&gachaId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B2C35C(&UserGachaDrawLogEntity_TypeInfo, v14);
    byte_4186FBD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&gachaId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  v19 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_10:
      v23 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v31);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    if ( !v24 )
      goto LABEL_33;
    v26 = *(&UserGachaDrawLogEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 300LL) < (unsigned int)v26
      || *(UserGachaDrawLogEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * v26 - 8) != UserGachaDrawLogEntity_TypeInfo )
    {
      v24 = sub_B2C728(v24);
LABEL_33:
      sub_B2C434(v24, v25);
    }
    if ( *(_DWORD *)(v24 + 16) == gachaId && *(_DWORD *)(v24 + 20) == idx )
      v19 += *(_QWORD *)(v24 + 24) >= startAt && *(_QWORD *)(v24 + 24) < endAt;
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
    v35 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v31);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return v19;
}


// local variable allocation has failed, the output may be wrong!
UserGachaDrawLogEntity_o *__fastcall UserGachaDrawLogMaster__GetEntity(
        UserGachaDrawLogMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        int64_t drawAt,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4186FBB & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_4186FBB = 1;
  }
  PK = UserGachaDrawLogEntity__CreatePK(gachaId, idx, drawAt, (const MethodInfo *)drawAt);
  return (UserGachaDrawLogEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__GetEntity__);
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

  if ( (byte_4186FBC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__TryGetEntity__, entity);
    byte_4186FBC = 1;
  }
  PK = UserGachaDrawLogEntity__CreatePK(gachaId, idx, drawAt, *(const MethodInfo **)&idx);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__TryGetEntity__);
}