void __fastcall FuncDispMaster___ctor(FuncDispMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44CBC & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__, method);
    byte_4B44CBC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    456,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
}


bool __fastcall FuncDispMaster__IsContainFuncIds(
        FuncDispMaster_o *this,
        FuncDispEntity_o **entity,
        System_Int32_array *funcIds,
        const MethodInfo *method)
{
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
  __int64 v23; // x0
  __int64 v24; // x1
  FuncDispEntity_o *v25; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  bool v28; // w21
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4B44CBA & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_FuncDispEntity__GetEnumerator__, entity);
    sub_1BDB878(&Method_System_Linq_Enumerable_SequenceEqual_int___, v7);
    sub_1BDB878(&System_IDisposable_TypeInfo, v8);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo, v9);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4B44CBA = 1;
  }
  *entity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)entity, 0, (int32_t)funcIds, method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BDBAD4(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_FuncDispEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v13);
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
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_FuncDispEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo )
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
      v22 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v25 = (FuncDispEntity_o *)v23;
    if ( !v23 )
      sub_1BDBAD4(0LL, v24);
    if ( System_Linq_Enumerable__SequenceEqual_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v23 + 24),
           (System_Collections_Generic_IEnumerable_TSource__o *)funcIds,
           (const MethodInfo_306B1CC *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
    {
      *entity = v25;
      sub_1BDB81C((CGThumbnailListItem_o *)entity, (int32_t)v25, v26, v27);
      v28 = 1;
      goto LABEL_22;
    }
  }
  v28 = 0;
LABEL_22:
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_26;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_26:
    v32 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return v28;
}


System_String_o *__fastcall FuncDispMaster__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
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
  __int64 v13; // x1
  System_String_o *IsNullOrEmpty; // x0
  __int64 v15; // x1
  System_String_o *v16; // x0
  System_String_o *v17; // x29
  System_String_o *v18; // x0
  System_String_o *v19; // x28
  System_String_o *v20; // x0
  System_String_o *v21; // x27
  System_String_o *v22; // x0
  System_String_o *v23; // x26
  System_String_o *v24; // x0
  System_String_o *v25; // x25
  System_String_o *v26; // x0
  System_String_o *v27; // x24
  System_String_o *v28; // x0
  System_String_o *v29; // x23
  System_String_o *v30; // x0
  System_String_o *v31; // x21
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  System_String_o *v36; // x20
  System_String_o *v37; // x22
  System_String_o *v38; // x22
  System_String_o *v39; // x22
  System_String_o *v40; // x22
  System_String_o *v41; // x22
  System_String_o *v42; // x22
  System_String_o *v43; // x22
  System_String_o *v44; // x21
  MethodInfo methoda; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B44CBB & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_25317/*"{x"*/, funcVals);
    sub_1BDB878(&StringLiteral_25107/*"{"*/, v5);
    sub_1BDB878(&StringLiteral_25038/*"xx}"*/, v6);
    sub_1BDB878(&StringLiteral_25037/*"xxx}"*/, v7);
    sub_1BDB878(&StringLiteral_25345/*"}"*/, v8);
    sub_1BDB878(&StringLiteral_25320/*"{xxxx"*/, v9);
    sub_1BDB878(&StringLiteral_25318/*"{xx"*/, v10);
    sub_1BDB878(&StringLiteral_25036/*"xxxx}"*/, v11);
    sub_1BDB878(&StringLiteral_25039/*"x}"*/, v12);
    sub_1BDB878(&StringLiteral_25319/*"{xxx"*/, v13);
    byte_4B44CBB = 1;
  }
  LODWORD(methoda.methodPointer) = 0;
  IsNullOrEmpty = (System_String_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)funcVals, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    HIDWORD(methoda.methodPointer) = 0;
    if ( !funcVals )
      goto LABEL_27;
    if ( (int)funcVals->max_length >= 1 )
    {
      while ( 1 )
      {
        v16 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0LL);
        v17 = System_String__Concat_62610508(
                (System_String_o *)StringLiteral_25107/*"{"*/,
                v16,
                (System_String_o *)StringLiteral_25036/*"xxxx}"*/,
                0LL);
        v18 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0LL);
        v19 = System_String__Concat_62610508(
                (System_String_o *)StringLiteral_25107/*"{"*/,
                v18,
                (System_String_o *)StringLiteral_25037/*"xxx}"*/,
                0LL);
        v20 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0LL);
        v21 = System_String__Concat_62610508(
                (System_String_o *)StringLiteral_25107/*"{"*/,
                v20,
                (System_String_o *)StringLiteral_25038/*"xx}"*/,
                0LL);
        v22 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0LL);
        v23 = System_String__Concat_62610508(
                (System_String_o *)StringLiteral_25107/*"{"*/,
                v22,
                (System_String_o *)StringLiteral_25039/*"x}"*/,
                0LL);
        v24 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0LL);
        v25 = System_String__Concat_62610508(
                (System_String_o *)StringLiteral_25107/*"{"*/,
                v24,
                (System_String_o *)StringLiteral_25345/*"}"*/,
                0LL);
        v26 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0LL);
        v27 = System_String__Concat_62610508(
                (System_String_o *)StringLiteral_25317/*"{x"*/,
                v26,
                (System_String_o *)StringLiteral_25345/*"}"*/,
                0LL);
        v28 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0LL);
        v29 = System_String__Concat_62610508(
                (System_String_o *)StringLiteral_25318/*"{xx"*/,
                v28,
                (System_String_o *)StringLiteral_25345/*"}"*/,
                0LL);
        v30 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0LL);
        v31 = System_String__Concat_62610508(
                (System_String_o *)StringLiteral_25319/*"{xxx"*/,
                v30,
                (System_String_o *)StringLiteral_25345/*"}"*/,
                0LL);
        v32 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0LL);
        v33 = System_String__Concat_62610508(
                (System_String_o *)StringLiteral_25320/*"{xxxx"*/,
                v32,
                (System_String_o *)StringLiteral_25345/*"}"*/,
                0LL);
        if ( HIDWORD(methoda.methodPointer) >= funcVals->max_length )
          goto LABEL_26;
        v36 = v33;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer) + 1] * 10000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !text )
          break;
        v33 = System_String__Replace_62618808(text, v17, IsNullOrEmpty, 0LL);
        if ( HIDWORD(methoda.methodPointer) >= funcVals->max_length )
          goto LABEL_26;
        v37 = v33;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer) + 1] * 1000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v37 )
          break;
        v33 = System_String__Replace_62618808(v37, v19, IsNullOrEmpty, 0LL);
        if ( HIDWORD(methoda.methodPointer) >= funcVals->max_length )
          goto LABEL_26;
        v38 = v33;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer) + 1] * 100.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v38 )
          break;
        v33 = System_String__Replace_62618808(v38, v21, IsNullOrEmpty, 0LL);
        if ( HIDWORD(methoda.methodPointer) >= funcVals->max_length )
          goto LABEL_26;
        v39 = v33;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer) + 1] * 10.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v39 )
          break;
        v33 = System_String__Replace_62618808(v39, v23, IsNullOrEmpty, 0LL);
        if ( HIDWORD(methoda.methodPointer) >= funcVals->max_length )
          goto LABEL_26;
        v40 = v33;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer) + 1];
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v40 )
          break;
        v33 = System_String__Replace_62618808(v40, v25, IsNullOrEmpty, 0LL);
        if ( HIDWORD(methoda.methodPointer) >= funcVals->max_length )
          goto LABEL_26;
        v41 = v33;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer) + 1] / 10.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v41 )
          break;
        v33 = System_String__Replace_62618808(v41, v27, IsNullOrEmpty, 0LL);
        if ( HIDWORD(methoda.methodPointer) >= funcVals->max_length )
          goto LABEL_26;
        v42 = v33;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer) + 1] / 100.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v42 )
          break;
        v33 = System_String__Replace_62618808(v42, v29, IsNullOrEmpty, 0LL);
        if ( HIDWORD(methoda.methodPointer) >= funcVals->max_length )
          goto LABEL_26;
        v43 = v33;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer) + 1] / 1000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v43 )
          break;
        v33 = System_String__Replace_62618808(v43, v31, IsNullOrEmpty, 0LL);
        if ( HIDWORD(methoda.methodPointer) >= funcVals->max_length )
LABEL_26:
          sub_1BDBADC(v33, v34, v35);
        v44 = v33;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer) + 1] / 10000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v44 )
          break;
        text = System_String__Replace_62618808(v44, v36, IsNullOrEmpty, 0LL);
        ++HIDWORD(methoda.methodPointer);
        if ( SHIDWORD(methoda.methodPointer) >= (signed int)funcVals->max_length )
          return text;
      }
LABEL_27:
      sub_1BDBAD4(IsNullOrEmpty, v15);
    }
  }
  return text;
}