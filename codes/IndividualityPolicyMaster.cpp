void __fastcall IndividualityPolicyMaster___ctor(IndividualityPolicyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1BA6 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int___ctor__);
    byte_42B1BA6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    475,
    (const MethodInfo_23E223C *)Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int___ctor__);
}


int32_t __fastcall IndividualityPolicyMaster__GetPolicyValue(
        IndividualityPolicyMaster_o *this,
        System_Int32_array *individuality,
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
  _QWORD *v17; // x0
  __int64 v18; // x1
  _QWORD *v19; // x22
  __int64 v20; // x10
  __int64 v21; // x21
  System_Func_int__bool__o *v22; // x23
  int32_t v23; // w20
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_42B1BA5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Linq_Enumerable_All_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&IndividualityPolicyEntity_TypeInfo);
    byte_42B1BA5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, individuality);
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
    v17 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                      Enumerator,
                      *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( v17 )
    {
      v20 = *(&IndividualityPolicyEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v17 + 300LL) >= (unsigned int)v20
        && *(IndividualityPolicyEntity_c **)(*(_QWORD *)(*v17 + 200LL) + 8 * v20 - 8) == IndividualityPolicyEntity_TypeInfo )
      {
        v21 = v17[3];
        if ( !v21 )
          sub_B52A5C(v17, v18);
        if ( !individuality )
          sub_B52A5C(v17, v18);
        if ( *(_DWORD *)(v21 + 24) == individuality->max_length )
        {
          v22 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v22,
            &individuality->obj,
            Method_System_Linq_Enumerable_Contains_int___,
            (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
          if ( System_Linq_Enumerable__All_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                 (System_Func_TSource__bool__o *)v22,
                 (const MethodInfo_1A5363C *)Method_System_Linq_Enumerable_All_int___) )
          {
            v23 = *((_DWORD *)v19 + 5);
            goto LABEL_27;
          }
        }
      }
    }
  }
  v23 = -1;
LABEL_27:
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_31:
    v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v7);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v23;
}