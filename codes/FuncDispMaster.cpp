void FuncDispMaster___ctor(FuncDispMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970BC9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
    byte_5970BC9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    458,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool FuncDispMaster__IsContainFuncIds(
        FuncDispMaster_o *this,
        FuncDispEntity_o **entity,
        System_Int32_array *funcIds,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  FuncDispEntity_o *v29; // x22
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int32_t targetId; // w8
  bool v37; // w21
  int v38; // w23
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  System_Collections_Generic_IEnumerator_T__o *v44; // [xsp+18h] [xbp-48h]

  if ( (byte_5970BC7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_FuncDispEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5970BC7 = 1;
  }
  *entity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)entity,
    0,
    (System_String_o *)funcIds,
    *(System_String_o **)&classBoardBaseId,
    (int32_t)method,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_FuncDispEntity__GetEnumerator__);
  v44 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v15);
  for ( i = Enumerator; ; i = v44 )
  {
    klass = i->klass;
    v18 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      v20 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v20 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            i,
            *(_QWORD *)(v20 + 8));
    if ( (v21 & 1) == 0 )
    {
      v37 = 0;
      v38 = 6;
      goto LABEL_30;
    }
    if ( !v44 )
      sub_2213CDC(v21, v22);
    v23 = v44->klass;
    v24 = *(unsigned __int16 *)&v44->klass->_2.rank;
    if ( *(_WORD *)&v44->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_FuncDispEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_18;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_18:
      v26 = sub_224BC3C(v44, System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            v44,
            *(_QWORD *)(v26 + 8));
    v29 = (FuncDispEntity_o *)v27;
    if ( !v27 )
      sub_2213CDC(0, v28);
    if ( System_Linq_Enumerable__SequenceEqual_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v27 + 24),
           (System_Collections_Generic_IEnumerable_TSource__o *)funcIds,
           (const MethodInfo_389444C *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
    {
      break;
    }
LABEL_26:
    ;
  }
  targetId = v29->fields.targetId;
  if ( targetId != classBoardBaseId )
  {
    if ( !targetId && !*entity )
    {
      *entity = v29;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)entity, (int32_t)v29, v30, v31, v32, v33, v34, v35);
    }
    goto LABEL_26;
  }
  *entity = v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)entity, (int32_t)v29, v30, v31, v32, v33, v34, v35);
  v37 = 1;
  v38 = 5;
LABEL_30:
  if ( v44 )
  {
    v39 = v44->klass;
    v40 = *(unsigned __int16 *)&v44->klass->_2.rank;
    if ( *(_WORD *)&v44->klass->_2.rank )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_35;
      }
      v42 = (__int64)&v39->vtable[*v41];
    }
    else
    {
LABEL_35:
      v42 = sub_224BC3C(v44, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(v44, *(_QWORD *)(v42 + 8));
  }
  if ( v38 == 6 )
    return *entity != 0;
  return v37;
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
  System_String_o *v22; // x22
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  System_String_o *v26; // x21
  System_String_o *v27; // x21
  System_String_o *v28; // x21
  System_String_o *v29; // x21
  System_String_o *v30; // x21
  System_String_o *v31; // x21
  System_String_o *v32; // x21
  System_String_o *v33; // x21
  System_String_o *v34; // x0
  int max_length; // w9
  MethodInfo methoda; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_5970BC8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26629/*"{x"*/);
    sub_2213A60(&StringLiteral_26413/*"{"*/);
    sub_2213A60(&StringLiteral_26342/*"xx}"*/);
    sub_2213A60(&StringLiteral_26341/*"xxx}"*/);
    sub_2213A60(&StringLiteral_26659/*"}"*/);
    sub_2213A60(&StringLiteral_26632/*"{xxxx"*/);
    sub_2213A60(&StringLiteral_26630/*"{xx"*/);
    sub_2213A60(&StringLiteral_26340/*"xxxx}"*/);
    sub_2213A60(&StringLiteral_26343/*"x}"*/);
    sub_2213A60(&StringLiteral_26631/*"{xxx"*/);
    byte_5970BC8 = 1;
  }
  methoda.methodPointer = 0;
  IsNullOrEmpty = (System_String_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)funcVals, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    HIDWORD(methoda.methodPointer) = 0;
    if ( !funcVals )
      goto LABEL_26;
    if ( SLODWORD(funcVals->max_length) >= 1 )
    {
      while ( 1 )
      {
        v7 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v8 = System_String__Concat_75694928(
               (System_String_o *)StringLiteral_26413/*"{"*/,
               v7,
               (System_String_o *)StringLiteral_26340/*"xxxx}"*/,
               0);
        v9 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v10 = System_String__Concat_75694928(
                (System_String_o *)StringLiteral_26413/*"{"*/,
                v9,
                (System_String_o *)StringLiteral_26341/*"xxx}"*/,
                0);
        v11 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v12 = System_String__Concat_75694928(
                (System_String_o *)StringLiteral_26413/*"{"*/,
                v11,
                (System_String_o *)StringLiteral_26342/*"xx}"*/,
                0);
        v13 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v14 = System_String__Concat_75694928(
                (System_String_o *)StringLiteral_26413/*"{"*/,
                v13,
                (System_String_o *)StringLiteral_26343/*"x}"*/,
                0);
        v15 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v16 = System_String__Concat_75694928(
                (System_String_o *)StringLiteral_26413/*"{"*/,
                v15,
                (System_String_o *)StringLiteral_26659/*"}"*/,
                0);
        v17 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v18 = System_String__Concat_75694928(
                (System_String_o *)StringLiteral_26629/*"{x"*/,
                v17,
                (System_String_o *)StringLiteral_26659/*"}"*/,
                0);
        v19 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v20 = System_String__Concat_75694928(
                (System_String_o *)StringLiteral_26630/*"{xx"*/,
                v19,
                (System_String_o *)StringLiteral_26659/*"}"*/,
                0);
        v21 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v22 = System_String__Concat_75694928(
                (System_String_o *)StringLiteral_26631/*"{xxx"*/,
                v21,
                (System_String_o *)StringLiteral_26659/*"}"*/,
                0);
        v23 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v24 = System_String__Concat_75694928(
                (System_String_o *)StringLiteral_26632/*"{xxxx"*/,
                v23,
                (System_String_o *)StringLiteral_26659/*"}"*/,
                0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_27;
        v25 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 10000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !text )
          break;
        v24 = System_String__Replace_75703400(text, v8, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_27;
        v26 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 1000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v26 )
          break;
        v24 = System_String__Replace_75703400(v26, v10, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_27;
        v27 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 100.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v27 )
          break;
        v24 = System_String__Replace_75703400(v27, v12, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_27;
        v28 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 10.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v28 )
          break;
        v24 = System_String__Replace_75703400(v28, v14, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_27;
        v29 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)];
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v29 )
          break;
        v24 = System_String__Replace_75703400(v29, v16, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_27;
        v30 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 10.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v30 )
          break;
        v24 = System_String__Replace_75703400(v30, v18, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_27;
        v31 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 100.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v31 )
          break;
        v24 = System_String__Replace_75703400(v31, v20, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_27;
        v32 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 1000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v32 )
          break;
        v24 = System_String__Replace_75703400(v32, v22, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
LABEL_27:
          sub_2213CE4(v24);
        v33 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 10000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v33 )
          break;
        v34 = System_String__Replace_75703400(v33, v25, IsNullOrEmpty, 0);
        max_length = funcVals->max_length;
        text = v34;
        ++HIDWORD(methoda.methodPointer);
        if ( SHIDWORD(methoda.methodPointer) >= max_length )
          return text;
      }
LABEL_26:
      sub_2213CDC(IsNullOrEmpty, v6);
    }
  }
  return text;
}