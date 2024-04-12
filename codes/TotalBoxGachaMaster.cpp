void __fastcall TotalBoxGachaMaster___ctor(TotalBoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B22DB & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int___ctor__);
    byte_42B22DB = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    294,
    (const MethodInfo_23E223C *)Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalBoxGachaEntity_o *__fastcall TotalBoxGachaMaster__GetEntity(
        TotalBoxGachaMaster_o *this,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  TotalBoxGachaEntity_o *v17; // x0
  __int64 v18; // x1
  TotalBoxGachaEntity_o *v19; // x21
  __int64 v20; // x9
  int v21; // w8
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  int v27; // [xsp+0h] [xbp-40h]

  if ( (byte_42B22DC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&TotalBoxGachaEntity_TypeInfo);
    byte_42B22DC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&boxGachaId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v7);
    }
    v17 = (TotalBoxGachaEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                     Enumerator,
                                     *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( !v17 )
      goto LABEL_34;
    v20 = *(&TotalBoxGachaEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (TotalBoxGachaEntity_c *)v17->klass->_2.typeHierarchy[v20 - 1] != TotalBoxGachaEntity_TypeInfo )
    {
      sub_B52D50(v17);
LABEL_34:
      sub_B52A5C(v17, v18);
    }
    if ( v17->fields.boxGachaId == boxGachaId )
    {
      v21 = 61;
      goto LABEL_24;
    }
  }
  v19 = 0LL;
  v21 = 59;
LABEL_24:
  v27 = v21;
  v22 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_28:
    v25 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v7);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  if ( v27 == 59 )
    return 0LL;
  return v19;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall TotalBoxGachaMaster__GetEventTotalCount(
        TotalBoxGachaMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  TotalBoxGachaEntity_c *v7; // x1
  __int64 v8; // x3
  System_Collections_Generic_IEnumerator_T__o *v9; // x20
  int64_t v10; // x19
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  unsigned __int64 v12; // x10
  int *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0

  if ( (byte_42B22DD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&TotalBoxGachaEntity_TypeInfo);
    byte_42B22DD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v9 = Enumerator;
  v10 = 0LL;
  while ( 1 )
  {
    if ( !v9 )
      goto LABEL_32;
    klass = v9->klass;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_21:
      p_method = sub_AEB880(v9, System_Collections_IEnumerator_TypeInfo, 0LL, v8);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v9,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = v9->klass;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_9:
      v14 = sub_AEB880(v9, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
                                                                  v9,
                                                                  *(_QWORD *)(v14 + 8));
    if ( !Enumerator )
      sub_B52A5C(0LL, v15);
    v7 = TotalBoxGachaEntity_TypeInfo;
    v16 = *(&TotalBoxGachaEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Enumerator->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (TotalBoxGachaEntity_c *)Enumerator->klass->_2.typeHierarchy[v16 - 1] != TotalBoxGachaEntity_TypeInfo )
    {
      sub_B52D50(Enumerator);
LABEL_32:
      sub_B52A5C(Enumerator, v7);
    }
    if ( LODWORD(Enumerator[1].klass) == eventId )
      v10 += (int64_t)Enumerator[1].monitor;
  }
  v22 = v9->klass;
  if ( *(_WORD *)&v9->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_28:
    v25 = sub_AEB880(v9, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(v9, *(_QWORD *)(v25 + 8));
  return v10;
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