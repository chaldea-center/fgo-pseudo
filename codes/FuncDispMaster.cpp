void __fastcall FuncDispMaster___ctor(FuncDispMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A4DF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__, method);
    byte_418A4DF = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    448,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v18; // x1
  System_String_array **v19; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v30; // x0
  __int64 v31; // x1
  FuncDispEntity_o *v32; // x22
  __int64 v33; // x9
  System_String_array **v34; // x2
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerator_T__o *v39; // x22
  bool v40; // w20
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  int v46; // [xsp+0h] [xbp-50h]

  if ( (byte_418A4DE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, entity);
    sub_B2C35C(&Method_System_Linq_Enumerable_SequenceEqual_int___, v11);
    sub_B2C35C(&FuncDispEntity_TypeInfo, v12);
    sub_B2C35C(&System_IDisposable_TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v15);
    byte_418A4DE = 1;
  }
  *entity = 0LL;
  sub_B2C2F8(
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
    sub_B2C434(0LL, v16);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
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
      v29 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v25);
    }
    v30 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v29 + 8));
    v32 = (FuncDispEntity_o *)v30;
    if ( !v30 )
      goto LABEL_34;
    v33 = *(&FuncDispEntity_TypeInfo->_2.bitflags2 + 1);
    if ( BYTE4((*v30)[18].monitor) < (unsigned int)v33
      || *((FuncDispEntity_c **)(*v30)[12].monitor + v33 - 1) != FuncDispEntity_TypeInfo )
    {
      sub_B2C728(v30);
LABEL_34:
      sub_B2C434(v30, v31);
    }
    if ( System_Linq_Enumerable__SequenceEqual_int_(
           v30[3],
           (System_Collections_Generic_IEnumerable_TSource__o *)funcIds,
           (const MethodInfo_1A984CC *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
    {
      *entity = v32;
      sub_B2C2F8((BattleServantConfConponent_o *)entity, (System_Int32_array **)v32, v34, v19, v35, v36, v37, v38);
      v39 = Enumerator;
      v46 = 72;
      v40 = 1;
      goto LABEL_24;
    }
  }
  v40 = 0;
  v46 = 70;
  v39 = Enumerator;
LABEL_24:
  v41 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_28:
    v44 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v25);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(v39, *(_QWORD *)(v44 + 8));
  if ( v46 == 70 )
    return 0;
  return v40;
}