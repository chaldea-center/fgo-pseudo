void CombineLimitReleaseMaster___ctor(CombineLimitReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938422 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string___ctor__);
    byte_5938422 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    461,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string___ctor__);
}


CombineLimitReleaseEntity_o *CombineLimitReleaseMaster__GetEntity(
        CombineLimitReleaseMaster_o *this,
        int32_t svtId,
        int32_t svtLimit,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938423 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__GetEntity__);
    byte_5938423 = 1;
  }
  PK = (Il2CppObject *)CombineLimitReleaseEntity__CreatePK(svtId, svtLimit, 0);
  return (CombineLimitReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3EE2044 *)Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool CombineLimitReleaseMaster__IsExistSealedLimitCount(
        CombineLimitReleaseMaster_o *this,
        int32_t combineLimitId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  char v15; // w20
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  _DWORD *v20; // x0
  __int64 v21; // x1
  int64_t v22; // x23
  int32_t v23; // w21
  int32_t v24; // w22
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  System_Collections_Generic_IEnumerator_T__o *v30; // [xsp+18h] [xbp-48h]

  if ( (byte_5938421 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_CombineLimitReleaseEntity__GetEnumerator__);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_CombineLimitReleaseEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5938421 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, *(_QWORD *)&combineLimitId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_CombineLimitReleaseEntity__GetEnumerator__);
  v30 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v7);
  for ( i = Enumerator; ; i = v30 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            i,
            *(_QWORD *)(v12 + 8));
    v15 = v13;
    if ( (v13 & 1) == 0 )
      break;
    if ( !v30 )
      sub_21FFECC(v13, v14);
    v16 = v30->klass;
    v17 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_CombineLimitReleaseEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_CombineLimitReleaseEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_18:
      v19 = sub_2237E2C(v30, System_Collections_Generic_IEnumerator_CombineLimitReleaseEntity__TypeInfo, 0);
    }
    v20 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                      v30,
                      *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_21FFECC(0, v21);
    if ( v20[4] == combineLimitId )
    {
      v22 = (int)v20[8];
      v23 = v20[6];
      v24 = v20[7];
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v21);
      if ( !CondType__IsOpen(v23, v24, v22, 0, 0, 0) )
        goto LABEL_28;
    }
  }
  v15 = 0;
LABEL_28:
  if ( v30 )
  {
    v25 = v30->klass;
    v26 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_33;
      }
      v28 = (__int64)&v25->vtable[*v27];
    }
    else
    {
LABEL_33:
      v28 = sub_2237E2C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(v30, *(_QWORD *)(v28 + 8));
  }
  return v15 & 1;
}


bool CombineLimitReleaseMaster__TryGetEntity(
        CombineLimitReleaseMaster_o *this,
        CombineLimitReleaseEntity_o **entity,
        int32_t svtId,
        int32_t svtLimit,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938424 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__TryGetEntity__);
    byte_5938424 = 1;
  }
  PK = (Il2CppObject *)CombineLimitReleaseEntity__CreatePK(svtId, svtLimit, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__TryGetEntity__);
}