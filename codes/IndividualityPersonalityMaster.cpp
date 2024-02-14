void __fastcall IndividualityPersonalityMaster___ctor(IndividualityPersonalityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215CD3 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int___ctor__,
      method);
    byte_4215CD3 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    475,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int___ctor__);
}


int32_t __fastcall IndividualityPersonalityMaster__GetPersonalityValue(
        IndividualityPersonalityMaster_o *this,
        System_Int32_array *individuality,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  _QWORD *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  _QWORD *v26; // x22
  __int64 v27; // x10
  __int64 v28; // x21
  System_Func_int__bool__o *v29; // x23
  int32_t v30; // w20
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_4215CD2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, individuality);
    sub_B0D8A4(&Method_System_Linq_Enumerable_All_int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v8);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B0D8A4(&IndividualityPersonalityEntity_TypeInfo, v12);
    byte_4215CD2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B0D97C(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
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
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v22 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    v26 = v23;
    if ( v23 )
    {
      v27 = *(&IndividualityPersonalityEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v23 + 300LL) >= (unsigned int)v27
        && *(IndividualityPersonalityEntity_c **)(*(_QWORD *)(*v23 + 200LL) + 8 * v27 - 8) == IndividualityPersonalityEntity_TypeInfo )
      {
        v28 = v23[3];
        if ( !v28 )
          sub_B0D97C(v23);
        if ( !individuality )
          sub_B0D97C(v23);
        if ( *(_DWORD *)(v28 + 24) == individuality->max_length )
        {
          v29 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v24, v25);
          System_Func_int__bool____ctor(
            v29,
            &individuality->obj,
            Method_System_Linq_Enumerable_Contains_int___,
            (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
          if ( System_Linq_Enumerable__All_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                 (System_Func_TSource__bool__o *)v29,
                 (const MethodInfo_17183F8 *)Method_System_Linq_Enumerable_All_int___) )
          {
            v30 = *((_DWORD *)v26 + 5);
            goto LABEL_27;
          }
        }
      }
    }
  }
  v30 = -1;
LABEL_27:
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_31:
    v34 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return v30;
}