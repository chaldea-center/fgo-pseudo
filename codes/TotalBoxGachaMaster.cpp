void __fastcall TotalBoxGachaMaster___ctor(TotalBoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418993D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int___ctor__, method);
    byte_418993D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    293,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int___ctor__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  TotalBoxGachaEntity_o *v21; // x0
  __int64 v22; // x1
  TotalBoxGachaEntity_o *v23; // x21
  __int64 v24; // x9
  int v25; // w8
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  int v31; // [xsp+0h] [xbp-40h]

  if ( (byte_418993E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&boxGachaId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&TotalBoxGachaEntity_TypeInfo, v8);
    byte_418993E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&boxGachaId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v21 = (TotalBoxGachaEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                     Enumerator,
                                     *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      goto LABEL_34;
    v24 = *(&TotalBoxGachaEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (TotalBoxGachaEntity_c *)v21->klass->_2.typeHierarchy[v24 - 1] != TotalBoxGachaEntity_TypeInfo )
    {
      v21 = (TotalBoxGachaEntity_o *)sub_B2C728(v21);
LABEL_34:
      sub_B2C434(v21, v22);
    }
    if ( v21->fields.boxGachaId == boxGachaId )
    {
      v25 = 61;
      goto LABEL_24;
    }
  }
  v23 = 0LL;
  v25 = 59;
LABEL_24:
  v31 = v25;
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_28:
    v29 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  if ( v31 == 59 )
    return 0LL;
  return v23;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  TotalBoxGachaEntity_c *v11; // x1
  __int64 v12; // x3
  System_Collections_Generic_IEnumerator_T__o *v13; // x20
  int64_t v14; // x19
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0

  if ( (byte_418993F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&TotalBoxGachaEntity_TypeInfo, v8);
    byte_418993F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v13 = Enumerator;
  v14 = 0LL;
  while ( 1 )
  {
    if ( !v13 )
      goto LABEL_32;
    klass = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_21:
      p_method = sub_AC5258(v13, System_Collections_IEnumerator_TypeInfo, 0LL, v12);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v13,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_9:
      v18 = sub_AC5258(v13, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v25);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                                                  v13,
                                                                  *(_QWORD *)(v18 + 8));
    if ( !Enumerator )
      sub_B2C434(0LL, v19);
    v11 = TotalBoxGachaEntity_TypeInfo;
    v20 = *(&TotalBoxGachaEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Enumerator->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (TotalBoxGachaEntity_c *)Enumerator->klass->_2.typeHierarchy[v20 - 1] != TotalBoxGachaEntity_TypeInfo )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)sub_B2C728(Enumerator);
LABEL_32:
      sub_B2C434(Enumerator, v11);
    }
    if ( LODWORD(Enumerator[1].klass) == eventId )
      v14 += (int64_t)Enumerator[1].monitor;
  }
  v26 = v13->klass;
  if ( *(_WORD *)&v13->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_28:
    v29 = sub_AC5258(v13, System_IDisposable_TypeInfo, 0LL, v25);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(v13, *(_QWORD *)(v29 + 8));
  return v14;
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