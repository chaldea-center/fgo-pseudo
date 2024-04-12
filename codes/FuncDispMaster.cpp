void __fastcall FuncDispMaster___ctor(FuncDispMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2BC7 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
    byte_42B2BC7 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    449,
    (const MethodInfo_23E223C *)Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
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
  System_String_array **v14; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v25; // x0
  __int64 v26; // x1
  FuncDispEntity_o *v27; // x22
  __int64 v28; // x9
  System_String_array **v29; // x2
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerator_T__o *v34; // x22
  bool v35; // w20
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  int v41; // [xsp+0h] [xbp-50h]

  if ( (byte_42B2BC6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_B52984(&FuncDispEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B2BC6 = 1;
  }
  *entity = 0LL;
  sub_B52920(
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
    sub_B52A5C(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v25 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v24 + 8));
    v27 = (FuncDispEntity_o *)v25;
    if ( !v25 )
      goto LABEL_34;
    v28 = *(&FuncDispEntity_TypeInfo->_2.bitflags2 + 1);
    if ( BYTE4((*v25)[18].monitor) < (unsigned int)v28
      || *((FuncDispEntity_c **)(*v25)[12].monitor + v28 - 1) != FuncDispEntity_TypeInfo )
    {
      sub_B52D50(v25);
LABEL_34:
      sub_B52A5C(v25, v26);
    }
    if ( System_Linq_Enumerable__SequenceEqual_int_(
           v25[3],
           (System_Collections_Generic_IEnumerable_TSource__o *)funcIds,
           (const MethodInfo_1B6BA88 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
    {
      *entity = v27;
      sub_B52920((BattleServantConfConponent_o *)entity, (System_Int32_array **)v27, v29, v14, v30, v31, v32, v33);
      v34 = Enumerator;
      v41 = 72;
      v35 = 1;
      goto LABEL_24;
    }
  }
  v35 = 0;
  v41 = 70;
  v34 = Enumerator;
LABEL_24:
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_28:
    v39 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(v34, *(_QWORD *)(v39 + 8));
  if ( v41 == 70 )
    return 0;
  return v35;
}