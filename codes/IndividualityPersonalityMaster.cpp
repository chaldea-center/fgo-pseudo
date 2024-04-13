void __fastcall IndividualityPersonalityMaster___ctor(IndividualityPersonalityMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA4C8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA4C8 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    477,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int___ctor__);
}


int32_t __fastcall IndividualityPersonalityMaster__GetPersonalityValue(
        IndividualityPersonalityMaster_o *this,
        System_Int32_array *individuality,
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v31; // x1
  __int64 v32; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  _QWORD *v42; // x0
  __int64 v43; // x1
  _QWORD *v44; // x22
  __int64 v45; // x10
  __int64 v46; // x21
  System_Func_int__bool__o *v47; // x23
  int32_t v48; // w20
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  unsigned __int64 v50; // x10
  int32_t *v51; // x11
  __int64 v52; // x0

  if ( (byte_42EA4C7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)individuality,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_All_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&IndividualityPersonalityEntity_TypeInfo, v27, v28, v29);
    byte_42EA4C7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, individuality);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v32);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_16:
      v41 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v32);
    }
    v42 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                      Enumerator,
                      *(_QWORD *)(v41 + 8));
    v44 = v42;
    if ( v42 )
    {
      v45 = *(&IndividualityPersonalityEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v42 + 300LL) >= (unsigned int)v45
        && *(IndividualityPersonalityEntity_c **)(*(_QWORD *)(*v42 + 200LL) + 8 * v45 - 8) == IndividualityPersonalityEntity_TypeInfo )
      {
        v46 = v42[3];
        if ( !v46 )
          sub_B5D69C(v42, v43);
        if ( !individuality )
          sub_B5D69C(v42, v43);
        if ( *(_DWORD *)(v46 + 24) == individuality->max_length )
        {
          v47 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v47,
            &individuality->obj,
            Method_System_Linq_Enumerable_Contains_int___,
            (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
          if ( System_Linq_Enumerable__All_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v46,
                 (System_Func_TSource__bool__o *)v47,
                 (const MethodInfo_1C97B3C *)Method_System_Linq_Enumerable_All_int___) )
          {
            v48 = *((_DWORD *)v44 + 5);
            goto LABEL_27;
          }
        }
      }
    }
  }
  v48 = -1;
LABEL_27:
  v49 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v50 = 0LL;
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      ++v50;
      v51 += 4;
      if ( v50 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_31:
    v52 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v32);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(Enumerator, *(_QWORD *)(v52 + 8));
  return v48;
}