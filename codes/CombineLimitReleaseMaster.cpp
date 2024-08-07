void __fastcall CombineLimitReleaseMaster___ctor(CombineLimitReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE8F3 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string___ctor__, method);
    byte_49FE8F3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    453,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineLimitReleaseEntity_o *__fastcall CombineLimitReleaseMaster__GetEntity(
        CombineLimitReleaseMaster_o *this,
        int32_t svtId,
        int32_t svtLimit,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE8F4 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FE8F4 = 1;
  }
  PK = (Il2CppObject *)CombineLimitReleaseEntity__CreatePK(svtId, svtLimit, 0LL);
  return (CombineLimitReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_30D6AF0 *)Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineLimitReleaseMaster__IsExistSealedLimitCount(
        CombineLimitReleaseMaster_o *this,
        int32_t combineLimitId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v17; // w21
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  _DWORD *v22; // x0
  __int64 v23; // x1
  __int64 methodPtr_low; // x11
  int32_t v25; // w22
  int32_t v26; // w24
  int64_t v27; // x23
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_49FE8F2 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&combineLimitId);
    sub_1B64A00(&CombineLimitReleaseEntity_TypeInfo, v5);
    sub_1B64A00(&CondType_TypeInfo, v6);
    sub_1B64A00(&System_IDisposable_TypeInfo, v7);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_49FE8F2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64C5C(0LL, *(_QWORD *)&combineLimitId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30739D4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64C5C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v17 & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1BB69E0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      Enumerator,
                      *(_QWORD *)(v21 + 8));
    if ( !v22
      || (methodPtr_low = LOBYTE(CombineLimitReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v22 + 304LL) < (unsigned int)methodPtr_low)
      || *(CombineLimitReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v22 + 200LL) + 8 * methodPtr_low - 8) != CombineLimitReleaseEntity_TypeInfo )
    {
      sub_1B64C5C(v22, v23);
    }
    if ( v22[4] == combineLimitId )
    {
      v26 = v22[6];
      v25 = v22[7];
      v27 = (int)v22[8];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsOpen(v26, v25, v27, 0, 0LL) )
        goto LABEL_27;
    }
  }
  v17 = 0;
LABEL_27:
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_31;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_31:
    v31 = sub_1BB69E0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v17 & 1;
}


bool __fastcall CombineLimitReleaseMaster__TryGetEntity(
        CombineLimitReleaseMaster_o *this,
        CombineLimitReleaseEntity_o **entity,
        int32_t svtId,
        int32_t svtLimit,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FE8F5 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__TryGetEntity__,
      entity);
    byte_49FE8F5 = 1;
  }
  PK = (Il2CppObject *)CombineLimitReleaseEntity__CreatePK(svtId, svtLimit, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__TryGetEntity__);
}