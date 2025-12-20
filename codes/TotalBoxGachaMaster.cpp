void TotalBoxGachaMaster___ctor(TotalBoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D55E & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int___ctor__);
    byte_4D2D55E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    301,
    (const MethodInfo_345919C *)Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalBoxGachaEntity_o *TotalBoxGachaMaster__GetEntity(
        TotalBoxGachaMaster_o *this,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  TotalBoxGachaEntity_o *v18; // x21
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4D2D55F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_TotalBoxGachaEntity__GetEnumerator__);
    sub_1C94098(&Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int__getEntityList__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2D55F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, *(_QWORD *)&boxGachaId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_TotalBoxGachaEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    v18 = (TotalBoxGachaEntity_o *)v16;
    if ( !v16 )
      sub_1C942F0(0, v17);
    if ( *(_DWORD *)(v16 + 20) == boxGachaId )
      goto LABEL_22;
  }
  v18 = 0;
LABEL_22:
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_26;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_26:
    v22 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v18;
}


// local variable allocation has failed, the output may be wrong!
int64_t TotalBoxGachaMaster__GetEventTotalCount(TotalBoxGachaMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *v8; // x19
  int64_t v9; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0

  if ( (byte_4D2D560 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_TotalBoxGachaEntity__GetEnumerator__);
    sub_1C94098(&Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int__getEntityList__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2D560 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_TotalBoxGachaEntity__GetEnumerator__);
  v8 = Enumerator;
  v9 = 0;
  while ( 1 )
  {
    if ( !v8 )
      sub_1C942F0(Enumerator, v7);
    klass = v8->klass;
    v11 = *(unsigned __int16 *)&v8->klass->_2.rank;
    if ( *(_WORD *)&v8->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_10;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v13 = sub_1C6A420(v8, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            v8,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = v8->klass;
    v15 = *(unsigned __int16 *)&v8->klass->_2.rank;
    if ( *(_WORD *)&v8->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_17:
      v17 = sub_1C6A420(v8, System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                                                  v8,
                                                                  *(_QWORD *)(v17 + 8));
    if ( !Enumerator )
      sub_1C942F0(0, v7);
    if ( LODWORD(Enumerator[1].klass) == eventId )
      v9 += (int64_t)Enumerator[1].monitor;
  }
  v18 = v8->klass;
  v19 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_26;
    }
    v21 = (__int64)&v18->vtable[*v20];
  }
  else
  {
LABEL_26:
    v21 = sub_1C6A420(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(v8, *(_QWORD *)(v21 + 8));
  return v9;
}


int64_t TotalBoxGachaMaster__GetTotalCount(TotalBoxGachaMaster_o *this, int32_t boxGachaId, const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)TotalBoxGachaMaster__GetEntity(this, boxGachaId, method);
  if ( result )
    return *(_QWORD *)(result + 24);
  return result;
}