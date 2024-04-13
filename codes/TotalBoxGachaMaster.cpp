void __fastcall TotalBoxGachaMaster___ctor(TotalBoxGachaMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAC3C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EAC3C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    294,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_TotalBoxGachaMaster__TotalBoxGachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalBoxGachaEntity_o *__fastcall TotalBoxGachaMaster__GetEntity(
        TotalBoxGachaMaster_o *this,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  TotalBoxGachaEntity_o *v30; // x0
  __int64 v31; // x1
  TotalBoxGachaEntity_o *v32; // x21
  __int64 v33; // x9
  int v34; // w8
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  int v40; // [xsp+0h] [xbp-40h]

  if ( (byte_42EAC3D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      boxGachaId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&TotalBoxGachaEntity_TypeInfo, v15, v16, v17);
    byte_42EAC3D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&boxGachaId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v30 = (TotalBoxGachaEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                     Enumerator,
                                     *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( !v30 )
      goto LABEL_34;
    v33 = *(&TotalBoxGachaEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v33
      || (TotalBoxGachaEntity_c *)v30->klass->_2.typeHierarchy[v33 - 1] != TotalBoxGachaEntity_TypeInfo )
    {
      sub_B5D990(v30);
LABEL_34:
      sub_B5D69C(v30, v31);
    }
    if ( v30->fields.boxGachaId == boxGachaId )
    {
      v34 = 61;
      goto LABEL_24;
    }
  }
  v32 = 0LL;
  v34 = 59;
LABEL_24:
  v40 = v34;
  v35 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_28:
    v38 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  if ( v40 == 59 )
    return 0LL;
  return v32;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall TotalBoxGachaMaster__GetEventTotalCount(
        TotalBoxGachaMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  TotalBoxGachaEntity_c *v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__o *v22; // x20
  int64_t v23; // x19
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0

  if ( (byte_42EAC3E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&TotalBoxGachaEntity_TypeInfo, v15, v16, v17);
    byte_42EAC3E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v22 = Enumerator;
  v23 = 0LL;
  while ( 1 )
  {
    if ( !v22 )
      goto LABEL_32;
    klass = v22->klass;
    if ( *(_WORD *)&v22->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_21:
      p_method = sub_AF54C0(v22, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v22,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = v22->klass;
    if ( *(_WORD *)&v22->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_9:
      v27 = sub_AF54C0(v22, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v34);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                  v22,
                                                                  *(_QWORD *)(v27 + 8));
    if ( !Enumerator )
      sub_B5D69C(0LL, v28);
    v20 = TotalBoxGachaEntity_TypeInfo;
    v29 = *(&TotalBoxGachaEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Enumerator->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (TotalBoxGachaEntity_c *)Enumerator->klass->_2.typeHierarchy[v29 - 1] != TotalBoxGachaEntity_TypeInfo )
    {
      sub_B5D990(Enumerator);
LABEL_32:
      sub_B5D69C(Enumerator, v20);
    }
    if ( LODWORD(Enumerator[1].klass) == eventId )
      v23 += (int64_t)Enumerator[1].monitor;
  }
  v35 = v22->klass;
  if ( *(_WORD *)&v22->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_28:
    v38 = sub_AF54C0(v22, System_IDisposable_TypeInfo, 0LL, v34);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(v22, *(_QWORD *)(v38 + 8));
  return v23;
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