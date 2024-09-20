void __fastcall UserGachaDrawLogMaster___ctor(UserGachaDrawLogMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BE60 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string___ctor__);
    byte_4A5BE60 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    367,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string___ctor__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v14; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4A5BE63 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UserGachaDrawLogEntity_TypeInfo);
    byte_4A5BE63 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&gachaId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v12);
  v14 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_17:
      v22 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    if ( !v23 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(UserGachaDrawLogEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) < (unsigned int)methodPtr_low
      || *(UserGachaDrawLogEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * methodPtr_low - 8) != UserGachaDrawLogEntity_TypeInfo )
    {
      sub_1B88ACC(v23);
LABEL_33:
      sub_1B8880C(v23, v24);
    }
    if ( *(_DWORD *)(v23 + 16) == gachaId && *(_DWORD *)(v23 + 20) == idx )
      v14 += *(_QWORD *)(v23 + 24) >= startAt && *(_QWORD *)(v23 + 24) < endAt;
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_29:
    v29 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return v14;
}


UserGachaDrawLogEntity_o *__fastcall UserGachaDrawLogMaster__GetEntity(
        UserGachaDrawLogMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        int64_t drawAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BE61 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__GetEntity__);
    byte_4A5BE61 = 1;
  }
  PK = (Il2CppObject *)UserGachaDrawLogEntity__CreatePK(gachaId, idx, drawAt, (const MethodInfo *)drawAt);
  return (UserGachaDrawLogEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__GetEntity__);
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

  if ( (byte_4A5BE62 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__TryGetEntity__);
    byte_4A5BE62 = 1;
  }
  PK = (Il2CppObject *)UserGachaDrawLogEntity__CreatePK(gachaId, idx, drawAt, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__TryGetEntity__);
}