void __fastcall IndividualityPersonalityMaster___ctor(IndividualityPersonalityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7DCC & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int___ctor__,
      method);
    byte_4BC7DCC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    482,
    (const MethodInfo_3246354 *)Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int___ctor__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  _QWORD *v23; // x0
  __int64 v24; // x1
  _QWORD *v25; // x21
  __int64 methodPtr_low; // x10
  __int64 v27; // x22
  System_Func_int__bool__o *v28; // x23
  int32_t v29; // w21
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4BC7DCB & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_IndividualityPersonalityEntity__GetEnumerator__,
      individuality);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_All_int___, v5);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_1C1ABD4(&System_Func_int__bool__TypeInfo, v7);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v8);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_IndividualityPersonalityEntity__TypeInfo, v9);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1C1ABD4(&IndividualityPersonalityEntity_TypeInfo, v11);
    byte_4BC7DCB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, individuality);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_IndividualityPersonalityEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_IndividualityPersonalityEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_IndividualityPersonalityEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1C6CBB4(
              Enumerator,
              System_Collections_Generic_IEnumerator_IndividualityPersonalityEntity__TypeInfo,
              0LL);
    }
    v23 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( v23 )
    {
      methodPtr_low = LOBYTE(IndividualityPersonalityEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v23 + 304LL) >= (unsigned int)methodPtr_low
        && *(IndividualityPersonalityEntity_c **)(*(_QWORD *)(*v23 + 200LL) + 8 * methodPtr_low - 8) == IndividualityPersonalityEntity_TypeInfo )
      {
        v27 = v23[3];
        if ( !v27 )
          sub_1C1AE30(v23, v24);
        if ( !individuality )
          sub_1C1AE30(v23, v24);
        if ( *(_DWORD *)(v27 + 24) == individuality->max_length )
        {
          v28 = (System_Func_int__bool__o *)sub_1C1AE20(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(v28, &individuality->obj, Method_System_Linq_Enumerable_Contains_int___, 0LL);
          if ( System_Linq_Enumerable__All_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                 (System_Func_TSource__bool__o *)v28,
                 (const MethodInfo_2FA8EA8 *)Method_System_Linq_Enumerable_All_int___) )
          {
            v29 = *((_DWORD *)v25 + 5);
            goto LABEL_27;
          }
        }
      }
    }
  }
  v29 = -1;
LABEL_27:
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_31;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_31:
    v33 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v29;
}