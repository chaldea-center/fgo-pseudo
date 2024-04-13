void __fastcall FuncDispMaster___ctor(FuncDispMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB531 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EB531 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    449,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v28; // x1
  System_String_array **v29; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v35; // x3
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v40; // x0
  __int64 v41; // x1
  FuncDispEntity_o *v42; // x22
  __int64 v43; // x9
  System_String_array **v44; // x2
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_IEnumerator_T__o *v49; // x22
  bool v50; // w20
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  int v56; // [xsp+0h] [xbp-50h]

  if ( (byte_42EB530 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)entity,
      (_DWORD)funcIds,
      method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SequenceEqual_int___, v11, v12, v13);
    sub_B5D5C4(&FuncDispEntity_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v23, v24, v25);
    byte_42EB530 = 1;
  }
  *entity = 0LL;
  sub_B5D560(
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
    sub_B5D69C(0LL, v26);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v28);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v32;
        p_offset += 4;
        if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v29);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v36 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v38 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v39 = (__int64)&v36->vtable[*v38].method;
    }
    else
    {
LABEL_16:
      v39 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v35);
    }
    v40 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v39 + 8));
    v42 = (FuncDispEntity_o *)v40;
    if ( !v40 )
      goto LABEL_34;
    v43 = *(&FuncDispEntity_TypeInfo->_2.bitflags2 + 1);
    if ( BYTE4((*v40)[18].monitor) < (unsigned int)v43
      || *((FuncDispEntity_c **)(*v40)[12].monitor + v43 - 1) != FuncDispEntity_TypeInfo )
    {
      sub_B5D990(v40);
LABEL_34:
      sub_B5D69C(v40, v41);
    }
    if ( System_Linq_Enumerable__SequenceEqual_int_(
           v40[3],
           (System_Collections_Generic_IEnumerable_TSource__o *)funcIds,
           (const MethodInfo_1CB4CD8 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
    {
      *entity = v42;
      sub_B5D560((BattleServantConfConponent_o *)entity, (System_Int32_array **)v42, v44, v29, v45, v46, v47, v48);
      v49 = Enumerator;
      v56 = 72;
      v50 = 1;
      goto LABEL_24;
    }
  }
  v50 = 0;
  v56 = 70;
  v49 = Enumerator;
LABEL_24:
  v51 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_28:
    v54 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v35);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(v49, *(_QWORD *)(v54 + 8));
  if ( v56 == 70 )
    return 0;
  return v50;
}