void __fastcall FuncDispMaster___ctor(FuncDispMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D8FB & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
    byte_438D8FB = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    449,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
}


bool __fastcall FuncDispMaster__IsContainFuncIds(
        FuncDispMaster_o *this,
        FuncDispEntity_o **entity,
        System_Int32_array *funcIds,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v23; // x0
  __int64 v24; // x1
  FuncDispEntity_o *v25; // x22
  __int64 v26; // x9
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerator_T__o *v33; // x22
  bool v34; // w20
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  int v40; // [xsp+0h] [xbp-50h]

  if ( (byte_438D8FA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_B775C4(&FuncDispEntity_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_438D8FA = 1;
  }
  *entity = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)entity,
    0LL,
    (System_String_array **)funcIds,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v22 + 8));
    v25 = (FuncDispEntity_o *)v23;
    if ( !v23 )
      goto LABEL_34;
    v26 = *(&FuncDispEntity_TypeInfo->_2.bitflags2 + 1);
    if ( BYTE4((*v23)[18].monitor) < (unsigned int)v26
      || *((FuncDispEntity_c **)(*v23)[12].monitor + v26 - 1) != FuncDispEntity_TypeInfo )
    {
      sub_B77990(v23);
LABEL_34:
      sub_B7769C(v23, v24);
    }
    if ( System_Linq_Enumerable__SequenceEqual_int_(
           v23[3],
           (System_Collections_Generic_IEnumerable_TSource__o *)funcIds,
           (const MethodInfo_1D3A97C *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
    {
      *entity = v25;
      sub_B77560((BattleServantConfConponent_o *)entity, (System_Int32_array **)v25, v27, v28, v29, v30, v31, v32);
      v33 = Enumerator;
      v40 = 72;
      v34 = 1;
      goto LABEL_24;
    }
  }
  v34 = 0;
  v40 = 70;
  v33 = Enumerator;
LABEL_24:
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
    v38 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(v33, *(_QWORD *)(v38 + 8));
  if ( v40 == 70 )
    return 0;
  return v34;
}