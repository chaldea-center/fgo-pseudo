void __fastcall TotalBoxGachaMaster___ctor(TotalBoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5266 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int___ctor__, method);
    byte_4BB5266 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    299,
    (const MethodInfo_3236300 *)Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalBoxGachaEntity_o *__fastcall TotalBoxGachaMaster__GetEntity(
        TotalBoxGachaMaster_o *this,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  TotalBoxGachaEntity_o *v22; // x21
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4BB5267 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_TotalBoxGachaEntity__GetEnumerator__,
      *(_QWORD *)&boxGachaId);
    sub_1C13D24(&Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int__getEntityList__, v5);
    sub_1C13D24(&System_IDisposable_TypeInfo, v6);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo, v7);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4BB5267 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, *(_QWORD *)&boxGachaId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_TotalBoxGachaEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v22 = (TotalBoxGachaEntity_o *)v20;
    if ( !v20 )
      sub_1C13F80(0LL, v21);
    if ( *(_DWORD *)(v20 + 20) == boxGachaId )
      goto LABEL_22;
  }
  v22 = 0LL;
LABEL_22:
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
        goto LABEL_26;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_26:
    v26 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v22;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall TotalBoxGachaMaster__GetEventTotalCount(
        TotalBoxGachaMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *v12; // x19
  int64_t v13; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  if ( (byte_4BB5268 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_TotalBoxGachaEntity__GetEnumerator__,
      *(_QWORD *)&eventId);
    sub_1C13D24(&Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int__getEntityList__, v5);
    sub_1C13D24(&System_IDisposable_TypeInfo, v6);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo, v7);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4BB5268 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_TotalBoxGachaEntity__GetEnumerator__);
  v12 = Enumerator;
  v13 = 0LL;
  while ( 1 )
  {
    if ( !v12 )
      sub_1C13F80(Enumerator, v11);
    klass = v12->klass;
    v15 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C65D04(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v12,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = v12->klass;
    v19 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_17;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_17:
      v21 = sub_1C65D04(v12, System_Collections_Generic_IEnumerator_TotalBoxGachaEntity__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                  v12,
                                                                  *(_QWORD *)(v21 + 8));
    if ( !Enumerator )
      sub_1C13F80(0LL, v11);
    if ( LODWORD(Enumerator[1].klass) == eventId )
      v13 += (int64_t)Enumerator[1].monitor;
  }
  v22 = v12->klass;
  v23 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_26;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_26:
    v25 = sub_1C65D04(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(v12, *(_QWORD *)(v25 + 8));
  return v13;
}


int64_t __fastcall TotalBoxGachaMaster__GetTotalCount(
        TotalBoxGachaMaster_o *this,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)TotalBoxGachaMaster__GetEntity(this, boxGachaId, method);
  if ( result )
    return *(_QWORD *)(result + 24);
  return result;
}