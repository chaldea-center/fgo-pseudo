void __fastcall UserGachaDrawLogMaster___ctor(UserGachaDrawLogMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF1E0 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string___ctor__, method);
    byte_49FF1E0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    367,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string___ctor__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v18; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_49FF1E3 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&gachaId);
    sub_1B64870(&System_IDisposable_TypeInfo, v11);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1B64870(&UserGachaDrawLogEntity_TypeInfo, v14);
    byte_49FF1E3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64ACC(0LL, *(_QWORD *)&gachaId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v16);
  v18 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_17;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_17:
      v26 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(UserGachaDrawLogEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
      || *(UserGachaDrawLogEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != UserGachaDrawLogEntity_TypeInfo )
    {
      sub_1B64D8C(v27);
LABEL_33:
      sub_1B64ACC(v27, v28);
    }
    if ( *(_DWORD *)(v27 + 16) == gachaId && *(_DWORD *)(v27 + 20) == idx )
      v18 += *(_QWORD *)(v27 + 24) >= startAt && *(_QWORD *)(v27 + 24) < endAt;
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_29;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_29:
    v33 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v18;
}


// local variable allocation has failed, the output may be wrong!
UserGachaDrawLogEntity_o *__fastcall UserGachaDrawLogMaster__GetEntity(
        UserGachaDrawLogMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        int64_t drawAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF1E1 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_49FF1E1 = 1;
  }
  PK = (Il2CppObject *)UserGachaDrawLogEntity__CreatePK(gachaId, idx, drawAt, (const MethodInfo *)drawAt);
  return (UserGachaDrawLogEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D64D8 *)Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__GetEntity__);
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
  Il2CppObject *PK; // x2

  if ( (byte_49FF1E2 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__TryGetEntity__, entity);
    byte_49FF1E2 = 1;
  }
  PK = (Il2CppObject *)UserGachaDrawLogEntity__CreatePK(gachaId, idx, drawAt, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__TryGetEntity__);
}