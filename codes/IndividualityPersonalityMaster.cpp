void __fastcall IndividualityPersonalityMaster___ctor(IndividualityPersonalityMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B164F9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int___ctor__,
      method,
      v2);
    byte_4B164F9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    478,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int___ctor__);
}


int32_t __fastcall IndividualityPersonalityMaster__GetPersonalityValue(
        IndividualityPersonalityMaster_o *this,
        System_Int32_array *individuality,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  _QWORD *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  _QWORD *v34; // x21
  __int64 methodPtr_low; // x10
  __int64 v36; // x22
  System_Func_int__bool__o *v37; // x23
  int32_t v38; // w21
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0

  if ( (byte_4B164F8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      individuality,
      method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v7, v8);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&IndividualityPersonalityEntity_TypeInfo, v17, v18);
    byte_4B164F8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, individuality);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                      Enumerator,
                      *(_QWORD *)(v29 + 8));
    v34 = v30;
    if ( v30 )
    {
      methodPtr_low = LOBYTE(IndividualityPersonalityEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v30 + 304LL) >= (unsigned int)methodPtr_low
        && *(IndividualityPersonalityEntity_c **)(*(_QWORD *)(*v30 + 200LL) + 8 * methodPtr_low - 8) == IndividualityPersonalityEntity_TypeInfo )
      {
        v36 = v30[3];
        if ( !v36 )
          sub_1BCAA3C(v30, v31);
        if ( !individuality )
          sub_1BCAA3C(v30, v31);
        if ( *(_DWORD *)(v36 + 24) == individuality->max_length )
        {
          v37 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v31, v32, v33);
          System_Func_int__bool____ctor(v37, &individuality->obj, Method_System_Linq_Enumerable_Contains_int___, 0LL);
          if ( System_Linq_Enumerable__All_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v36,
                 (System_Func_TSource__bool__o *)v37,
                 (const MethodInfo_2F1CDBC *)Method_System_Linq_Enumerable_All_int___) )
          {
            v38 = *((_DWORD *)v34 + 5);
            goto LABEL_27;
          }
        }
      }
    }
  }
  v38 = -1;
LABEL_27:
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_31;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_31:
    v42 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
  return v38;
}