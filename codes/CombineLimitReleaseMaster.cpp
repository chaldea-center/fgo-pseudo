void __fastcall CombineLimitReleaseMaster___ctor(CombineLimitReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF29 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string___ctor__);
    byte_4A5AF29 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    453,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string___ctor__);
}


CombineLimitReleaseEntity_o *__fastcall CombineLimitReleaseMaster__GetEntity(
        CombineLimitReleaseMaster_o *this,
        int32_t svtId,
        int32_t svtLimit,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5AF2A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__GetEntity__);
    byte_4A5AF2A = 1;
  }
  PK = (Il2CppObject *)CombineLimitReleaseEntity__CreatePK(svtId, svtLimit, 0LL);
  return (CombineLimitReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_311DC8C *)Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineLimitReleaseMaster__IsExistSealedLimitCount(
        CombineLimitReleaseMaster_o *this,
        int32_t combineLimitId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  _DWORD *v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x11
  int32_t v20; // w22
  int32_t v21; // w24
  int64_t v22; // x23
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4A5AF28 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&CombineLimitReleaseEntity_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5AF28 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&combineLimitId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v12 & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                      Enumerator,
                      *(_QWORD *)(v16 + 8));
    if ( !v17
      || (methodPtr_low = LOBYTE(CombineLimitReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) < (unsigned int)methodPtr_low)
      || *(CombineLimitReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * methodPtr_low - 8) != CombineLimitReleaseEntity_TypeInfo )
    {
      sub_1B8880C(v17, v18);
    }
    if ( v17[4] == combineLimitId )
    {
      v21 = v17[6];
      v20 = v17[7];
      v22 = (int)v17[8];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsOpen(v21, v20, v22, 0, 0LL, 0LL) )
        goto LABEL_27;
    }
  }
  v12 = 0;
LABEL_27:
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_31;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_31:
    v26 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v12 & 1;
}


bool __fastcall CombineLimitReleaseMaster__TryGetEntity(
        CombineLimitReleaseMaster_o *this,
        CombineLimitReleaseEntity_o **entity,
        int32_t svtId,
        int32_t svtLimit,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5AF2B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__TryGetEntity__);
    byte_4A5AF2B = 1;
  }
  PK = (Il2CppObject *)CombineLimitReleaseEntity__CreatePK(svtId, svtLimit, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__TryGetEntity__);
}