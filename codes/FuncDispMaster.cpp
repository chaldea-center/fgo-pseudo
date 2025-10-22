void FuncDispMaster___ctor(FuncDispMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C56FCD & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
    byte_4C56FCD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    456,
    (const MethodInfo_33B0C34 *)Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool FuncDispMaster__IsContainFuncIds(
        FuncDispMaster_o *this,
        FuncDispEntity_o **entity,
        System_Int32_array *funcIds,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  FuncDispEntity_o *v23; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t targetId; // w8
  bool v27; // w22
  int v28; // w23
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4C56FCB & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_FuncDispEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    byte_4C56FCB = 1;
  }
  *entity = 0;
  sub_1C3E508((CGThumbnailListItem_o *)entity, 0, (int32_t)funcIds, *(const MethodInfo **)&classBoardBaseId);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3E7C0(0, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_FuncDispEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3E7C0(0, v11);
  while ( 1 )
  {
    do
    {
      klass = Enumerator->klass;
      v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v14;
          p_offset += 4;
          if ( !v14 )
            goto LABEL_9;
        }
        v16 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_9:
        v16 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
              Enumerator,
              *(_QWORD *)(v16 + 8))
          & 1) == 0 )
      {
        v27 = 0;
        v28 = 6;
        goto LABEL_26;
      }
      v17 = Enumerator->klass;
      v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v19 = &v17->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_FuncDispEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo )
        {
          --v18;
          v19 += 4;
          if ( !v18 )
            goto LABEL_16;
        }
        v20 = (__int64)&v17->vtable[*v19];
      }
      else
      {
LABEL_16:
        v20 = sub_1C8ED7C(Enumerator, System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo, 0);
      }
      v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
              Enumerator,
              *(_QWORD *)(v20 + 8));
      v23 = (FuncDispEntity_o *)v21;
      if ( !v21 )
        sub_1C3E7C0(0, v22);
    }
    while ( !System_Linq_Enumerable__SequenceEqual_int_(
               *(System_Collections_Generic_IEnumerable_TSource__o **)(v21 + 24),
               (System_Collections_Generic_IEnumerable_TSource__o *)funcIds,
               (const MethodInfo_3133744 *)Method_System_Linq_Enumerable_SequenceEqual_int___) );
    targetId = v23->fields.targetId;
    if ( targetId == classBoardBaseId )
      break;
    if ( !targetId && !*entity )
    {
      *entity = v23;
      sub_1C3E508((CGThumbnailListItem_o *)entity, (int32_t)v23, v24, v25);
    }
  }
  *entity = v23;
  sub_1C3E508((CGThumbnailListItem_o *)entity, (int32_t)v23, v24, v25);
  v27 = 1;
  v28 = 5;
LABEL_26:
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_30;
    }
    v32 = (__int64)&v29->vtable[*v31];
  }
  else
  {
LABEL_30:
    v32 = sub_1C8ED7C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  if ( v28 == 6 )
    return *entity != 0;
  return v27;
}


System_String_o *FuncDispMaster__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  System_String_o *v7; // x0
  System_String_o *v8; // x29
  System_String_o *v9; // x0
  System_String_o *v10; // x28
  System_String_o *v11; // x0
  System_String_o *v12; // x27
  System_String_o *v13; // x0
  System_String_o *v14; // x26
  System_String_o *v15; // x0
  System_String_o *v16; // x25
  System_String_o *v17; // x0
  System_String_o *v18; // x24
  System_String_o *v19; // x0
  System_String_o *v20; // x23
  System_String_o *v21; // x0
  System_String_o *v22; // x21
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x20
  System_String_o *v27; // x22
  System_String_o *v28; // x22
  System_String_o *v29; // x22
  System_String_o *v30; // x22
  System_String_o *v31; // x22
  System_String_o *v32; // x22
  System_String_o *v33; // x22
  System_String_o *v34; // x21
  MethodInfo methoda; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4C56FCC & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_25248/*"{x"*/);
    sub_1C3E564(&StringLiteral_25053/*"{"*/);
    sub_1C3E564(&StringLiteral_24984/*"xx}"*/);
    sub_1C3E564(&StringLiteral_24983/*"xxx}"*/);
    sub_1C3E564(&StringLiteral_25278/*"}"*/);
    sub_1C3E564(&StringLiteral_25251/*"{xxxx"*/);
    sub_1C3E564(&StringLiteral_25249/*"{xx"*/);
    sub_1C3E564(&StringLiteral_24982/*"xxxx}"*/);
    sub_1C3E564(&StringLiteral_24985/*"x}"*/);
    sub_1C3E564(&StringLiteral_25250/*"{xxx"*/);
    byte_4C56FCC = 1;
  }
  LODWORD(methoda.methodPointer) = 0;
  IsNullOrEmpty = (System_String_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)funcVals, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    HIDWORD(methoda.methodPointer) = 0;
    if ( !funcVals )
      goto LABEL_27;
    if ( SLODWORD(funcVals->max_length) >= 1 )
    {
      while ( 1 )
      {
        v7 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v8 = System_String__Concat_63674716(
               (System_String_o *)StringLiteral_25053/*"{"*/,
               v7,
               (System_String_o *)StringLiteral_24982/*"xxxx}"*/,
               0);
        v9 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v10 = System_String__Concat_63674716(
                (System_String_o *)StringLiteral_25053/*"{"*/,
                v9,
                (System_String_o *)StringLiteral_24983/*"xxx}"*/,
                0);
        v11 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v12 = System_String__Concat_63674716(
                (System_String_o *)StringLiteral_25053/*"{"*/,
                v11,
                (System_String_o *)StringLiteral_24984/*"xx}"*/,
                0);
        v13 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v14 = System_String__Concat_63674716(
                (System_String_o *)StringLiteral_25053/*"{"*/,
                v13,
                (System_String_o *)StringLiteral_24985/*"x}"*/,
                0);
        v15 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v16 = System_String__Concat_63674716(
                (System_String_o *)StringLiteral_25053/*"{"*/,
                v15,
                (System_String_o *)StringLiteral_25278/*"}"*/,
                0);
        v17 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v18 = System_String__Concat_63674716(
                (System_String_o *)StringLiteral_25248/*"{x"*/,
                v17,
                (System_String_o *)StringLiteral_25278/*"}"*/,
                0);
        v19 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v20 = System_String__Concat_63674716(
                (System_String_o *)StringLiteral_25249/*"{xx"*/,
                v19,
                (System_String_o *)StringLiteral_25278/*"}"*/,
                0);
        v21 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v22 = System_String__Concat_63674716(
                (System_String_o *)StringLiteral_25250/*"{xxx"*/,
                v21,
                (System_String_o *)StringLiteral_25278/*"}"*/,
                0);
        v23 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v24 = System_String__Concat_63674716(
                (System_String_o *)StringLiteral_25251/*"{xxxx"*/,
                v23,
                (System_String_o *)StringLiteral_25278/*"}"*/,
                0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v26 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 10000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !text )
          break;
        v24 = System_String__Replace_63683016(text, v8, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v27 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 1000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v27 )
          break;
        v24 = System_String__Replace_63683016(v27, v10, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v28 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 100.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v28 )
          break;
        v24 = System_String__Replace_63683016(v28, v12, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v29 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 10.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v29 )
          break;
        v24 = System_String__Replace_63683016(v29, v14, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v30 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)];
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v30 )
          break;
        v24 = System_String__Replace_63683016(v30, v16, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v31 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 10.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v31 )
          break;
        v24 = System_String__Replace_63683016(v31, v18, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v32 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 100.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v32 )
          break;
        v24 = System_String__Replace_63683016(v32, v20, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v33 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 1000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v33 )
          break;
        v24 = System_String__Replace_63683016(v33, v22, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
LABEL_26:
          sub_1C3E7C8(v24, v25);
        v34 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 10000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v34 )
          break;
        text = System_String__Replace_63683016(v34, v26, IsNullOrEmpty, 0);
        ++HIDWORD(methoda.methodPointer);
        if ( SHIDWORD(methoda.methodPointer) >= SLODWORD(funcVals->max_length) )
          return text;
      }
LABEL_27:
      sub_1C3E7C0(IsNullOrEmpty, v6);
    }
  }
  return text;
}