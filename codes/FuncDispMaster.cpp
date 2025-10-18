void FuncDispMaster___ctor(FuncDispMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43218 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
    byte_4C43218 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    456,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool FuncDispMaster__IsContainFuncIds(
        FuncDispMaster_o *this,
        FuncDispEntity_o **entity,
        System_Int32_array *funcIds,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  FuncDispEntity_o *v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t targetId; // w8
  bool v24; // w22
  int v25; // w23
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4C43216 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_FuncDispEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    byte_4C43216 = 1;
  }
  *entity = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)entity, 0, (int32_t)funcIds, *(const MethodInfo **)&classBoardBaseId);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C372B4(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_FuncDispEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    do
    {
      klass = Enumerator->klass;
      v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v12;
          p_offset += 4;
          if ( !v12 )
            goto LABEL_9;
        }
        v14 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_9:
        v14 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
              Enumerator,
              *(_QWORD *)(v14 + 8))
          & 1) == 0 )
      {
        v24 = 0;
        v25 = 6;
        goto LABEL_26;
      }
      v15 = Enumerator->klass;
      v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v17 = &v15->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_FuncDispEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_16;
        }
        v18 = (__int64)&v15->vtable[*v17];
      }
      else
      {
LABEL_16:
        v18 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo, 0);
      }
      v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
              Enumerator,
              *(_QWORD *)(v18 + 8));
      v20 = (FuncDispEntity_o *)v19;
      if ( !v19 )
        sub_1C372B4(0);
    }
    while ( !System_Linq_Enumerable__SequenceEqual_int_(
               *(System_Collections_Generic_IEnumerable_TSource__o **)(v19 + 24),
               (System_Collections_Generic_IEnumerable_TSource__o *)funcIds,
               (const MethodInfo_3121850 *)Method_System_Linq_Enumerable_SequenceEqual_int___) );
    targetId = v20->fields.targetId;
    if ( targetId == classBoardBaseId )
      break;
    if ( !targetId && !*entity )
    {
      *entity = v20;
      sub_1C36FFC((CGThumbnailListItem_o *)entity, (int32_t)v20, v21, v22);
    }
  }
  *entity = v20;
  sub_1C36FFC((CGThumbnailListItem_o *)entity, (int32_t)v20, v21, v22);
  v24 = 1;
  v25 = 5;
LABEL_26:
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_30:
    v29 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  if ( v25 == 6 )
    return *entity != 0;
  return v24;
}


System_String_o *FuncDispMaster__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *v6; // x0
  System_String_o *v7; // x29
  System_String_o *v8; // x0
  System_String_o *v9; // x28
  System_String_o *v10; // x0
  System_String_o *v11; // x27
  System_String_o *v12; // x0
  System_String_o *v13; // x26
  System_String_o *v14; // x0
  System_String_o *v15; // x25
  System_String_o *v16; // x0
  System_String_o *v17; // x24
  System_String_o *v18; // x0
  System_String_o *v19; // x23
  System_String_o *v20; // x0
  System_String_o *v21; // x21
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x20
  System_String_o *v25; // x22
  System_String_o *v26; // x22
  System_String_o *v27; // x22
  System_String_o *v28; // x22
  System_String_o *v29; // x22
  System_String_o *v30; // x22
  System_String_o *v31; // x22
  System_String_o *v32; // x21
  MethodInfo methoda; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4C43217 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_25228/*"{x"*/);
    sub_1C37058(&StringLiteral_25033/*"{"*/);
    sub_1C37058(&StringLiteral_24964/*"xx}"*/);
    sub_1C37058(&StringLiteral_24963/*"xxx}"*/);
    sub_1C37058(&StringLiteral_25258/*"}"*/);
    sub_1C37058(&StringLiteral_25231/*"{xxxx"*/);
    sub_1C37058(&StringLiteral_25229/*"{xx"*/);
    sub_1C37058(&StringLiteral_24962/*"xxxx}"*/);
    sub_1C37058(&StringLiteral_24965/*"x}"*/);
    sub_1C37058(&StringLiteral_25230/*"{xxx"*/);
    byte_4C43217 = 1;
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
        v6 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v7 = System_String__Concat_63599904(
               (System_String_o *)StringLiteral_25033/*"{"*/,
               v6,
               (System_String_o *)StringLiteral_24962/*"xxxx}"*/,
               0);
        v8 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v9 = System_String__Concat_63599904(
               (System_String_o *)StringLiteral_25033/*"{"*/,
               v8,
               (System_String_o *)StringLiteral_24963/*"xxx}"*/,
               0);
        v10 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v11 = System_String__Concat_63599904(
                (System_String_o *)StringLiteral_25033/*"{"*/,
                v10,
                (System_String_o *)StringLiteral_24964/*"xx}"*/,
                0);
        v12 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v13 = System_String__Concat_63599904(
                (System_String_o *)StringLiteral_25033/*"{"*/,
                v12,
                (System_String_o *)StringLiteral_24965/*"x}"*/,
                0);
        v14 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v15 = System_String__Concat_63599904(
                (System_String_o *)StringLiteral_25033/*"{"*/,
                v14,
                (System_String_o *)StringLiteral_25258/*"}"*/,
                0);
        v16 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v17 = System_String__Concat_63599904(
                (System_String_o *)StringLiteral_25228/*"{x"*/,
                v16,
                (System_String_o *)StringLiteral_25258/*"}"*/,
                0);
        v18 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v19 = System_String__Concat_63599904(
                (System_String_o *)StringLiteral_25229/*"{xx"*/,
                v18,
                (System_String_o *)StringLiteral_25258/*"}"*/,
                0);
        v20 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v21 = System_String__Concat_63599904(
                (System_String_o *)StringLiteral_25230/*"{xxx"*/,
                v20,
                (System_String_o *)StringLiteral_25258/*"}"*/,
                0);
        v22 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v23 = System_String__Concat_63599904(
                (System_String_o *)StringLiteral_25231/*"{xxxx"*/,
                v22,
                (System_String_o *)StringLiteral_25258/*"}"*/,
                0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v24 = v23;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 10000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !text )
          break;
        v23 = System_String__Replace_63608204(text, v7, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v25 = v23;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 1000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v25 )
          break;
        v23 = System_String__Replace_63608204(v25, v9, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v26 = v23;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 100.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v26 )
          break;
        v23 = System_String__Replace_63608204(v26, v11, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v27 = v23;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 10.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v27 )
          break;
        v23 = System_String__Replace_63608204(v27, v13, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v28 = v23;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)];
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v28 )
          break;
        v23 = System_String__Replace_63608204(v28, v15, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v29 = v23;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 10.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v29 )
          break;
        v23 = System_String__Replace_63608204(v29, v17, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v30 = v23;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 100.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v30 )
          break;
        v23 = System_String__Replace_63608204(v30, v19, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v31 = v23;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 1000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v31 )
          break;
        v23 = System_String__Replace_63608204(v31, v21, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
LABEL_26:
          sub_1C372BC(v23);
        v32 = v23;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 10000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v32 )
          break;
        text = System_String__Replace_63608204(v32, v24, IsNullOrEmpty, 0);
        ++HIDWORD(methoda.methodPointer);
        if ( SHIDWORD(methoda.methodPointer) >= SLODWORD(funcVals->max_length) )
          return text;
      }
LABEL_27:
      sub_1C372B4(IsNullOrEmpty);
    }
  }
  return text;
}