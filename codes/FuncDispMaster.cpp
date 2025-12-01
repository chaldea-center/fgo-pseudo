void FuncDispMaster___ctor(FuncDispMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC765E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
    byte_4CC765E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    456,
    (const MethodInfo_3406B5C *)Method_DataMasterBase_FuncDispMaster__FuncDispEntity__int___ctor__);
}


bool FuncDispMaster__IsContainFuncIds(
        FuncDispMaster_o *this,
        FuncDispEntity_o **entity,
        System_Int32_array *funcIds,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  FuncDispEntity_o *v26; // x23
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t targetId; // w8
  bool v34; // w22
  int v35; // w23
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4CC765C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_FuncDispEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CC765C = 1;
  }
  *entity = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)entity,
    0,
    (int32_t)funcIds,
    classBoardBaseId,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_FuncDispEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v14);
  while ( 1 )
  {
    do
    {
      klass = Enumerator->klass;
      v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v17;
          p_offset += 4;
          if ( !v17 )
            goto LABEL_9;
        }
        v19 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_9:
        v19 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
              Enumerator,
              *(_QWORD *)(v19 + 8))
          & 1) == 0 )
      {
        v34 = 0;
        v35 = 6;
        goto LABEL_26;
      }
      v20 = Enumerator->klass;
      v21 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v22 = &v20->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_FuncDispEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_16;
        }
        v23 = (__int64)&v20->vtable[*v22];
      }
      else
      {
LABEL_16:
        v23 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_FuncDispEntity__TypeInfo, 0);
      }
      v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
              Enumerator,
              *(_QWORD *)(v23 + 8));
      v26 = (FuncDispEntity_o *)v24;
      if ( !v24 )
        sub_1C71608(0, v25);
    }
    while ( !System_Linq_Enumerable__SequenceEqual_int_(
               *(System_Collections_Generic_IEnumerable_TSource__o **)(v24 + 24),
               (System_Collections_Generic_IEnumerable_TSource__o *)funcIds,
               (const MethodInfo_3184DE0 *)Method_System_Linq_Enumerable_SequenceEqual_int___) );
    targetId = v26->fields.targetId;
    if ( targetId == classBoardBaseId )
      break;
    if ( !targetId && !*entity )
    {
      *entity = v26;
      sub_1C71354((GrandQuestFolderBoardItem_o *)entity, (int32_t)v26, v27, v28, v29, v30, v31, v32);
    }
  }
  *entity = v26;
  sub_1C71354((GrandQuestFolderBoardItem_o *)entity, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  v34 = 1;
  v35 = 5;
LABEL_26:
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_30;
    }
    v39 = (__int64)&v36->vtable[*v38];
  }
  else
  {
LABEL_30:
    v39 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  if ( v35 == 6 )
    return *entity != 0;
  return v34;
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
  System_String_o *v25; // x20
  System_String_o *v26; // x22
  System_String_o *v27; // x22
  System_String_o *v28; // x22
  System_String_o *v29; // x22
  System_String_o *v30; // x22
  System_String_o *v31; // x22
  System_String_o *v32; // x22
  System_String_o *v33; // x21
  MethodInfo methoda; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4CC765D & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_25358/*"{x"*/);
    sub_1C713B0(&StringLiteral_25163/*"{"*/);
    sub_1C713B0(&StringLiteral_25094/*"xx}"*/);
    sub_1C713B0(&StringLiteral_25093/*"xxx}"*/);
    sub_1C713B0(&StringLiteral_25388/*"}"*/);
    sub_1C713B0(&StringLiteral_25361/*"{xxxx"*/);
    sub_1C713B0(&StringLiteral_25359/*"{xx"*/);
    sub_1C713B0(&StringLiteral_25092/*"xxxx}"*/);
    sub_1C713B0(&StringLiteral_25095/*"x}"*/);
    sub_1C713B0(&StringLiteral_25360/*"{xxx"*/);
    byte_4CC765D = 1;
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
        v8 = System_String__Concat_64069988(
               (System_String_o *)StringLiteral_25163/*"{"*/,
               v7,
               (System_String_o *)StringLiteral_25092/*"xxxx}"*/,
               0);
        v9 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v10 = System_String__Concat_64069988(
                (System_String_o *)StringLiteral_25163/*"{"*/,
                v9,
                (System_String_o *)StringLiteral_25093/*"xxx}"*/,
                0);
        v11 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v12 = System_String__Concat_64069988(
                (System_String_o *)StringLiteral_25163/*"{"*/,
                v11,
                (System_String_o *)StringLiteral_25094/*"xx}"*/,
                0);
        v13 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v14 = System_String__Concat_64069988(
                (System_String_o *)StringLiteral_25163/*"{"*/,
                v13,
                (System_String_o *)StringLiteral_25095/*"x}"*/,
                0);
        v15 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v16 = System_String__Concat_64069988(
                (System_String_o *)StringLiteral_25163/*"{"*/,
                v15,
                (System_String_o *)StringLiteral_25388/*"}"*/,
                0);
        v17 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v18 = System_String__Concat_64069988(
                (System_String_o *)StringLiteral_25358/*"{x"*/,
                v17,
                (System_String_o *)StringLiteral_25388/*"}"*/,
                0);
        v19 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v20 = System_String__Concat_64069988(
                (System_String_o *)StringLiteral_25359/*"{xx"*/,
                v19,
                (System_String_o *)StringLiteral_25388/*"}"*/,
                0);
        v21 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v22 = System_String__Concat_64069988(
                (System_String_o *)StringLiteral_25360/*"{xxx"*/,
                v21,
                (System_String_o *)StringLiteral_25388/*"}"*/,
                0);
        v23 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0);
        v24 = System_String__Concat_64069988(
                (System_String_o *)StringLiteral_25361/*"{xxxx"*/,
                v23,
                (System_String_o *)StringLiteral_25388/*"}"*/,
                0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v25 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 10000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !text )
          break;
        v24 = System_String__Replace_64078288(text, v8, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v26 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 1000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v26 )
          break;
        v24 = System_String__Replace_64078288(v26, v10, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v27 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 100.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v27 )
          break;
        v24 = System_String__Replace_64078288(v27, v12, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v28 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] * 10.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v28 )
          break;
        v24 = System_String__Replace_64078288(v28, v14, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v29 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)];
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v29 )
          break;
        v24 = System_String__Replace_64078288(v29, v16, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v30 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 10.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v30 )
          break;
        v24 = System_String__Replace_64078288(v30, v18, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v31 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 100.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v31 )
          break;
        v24 = System_String__Replace_64078288(v31, v20, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
          goto LABEL_26;
        v32 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 1000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v32 )
          break;
        v24 = System_String__Replace_64078288(v32, v22, IsNullOrEmpty, 0);
        if ( HIDWORD(methoda.methodPointer) >= LODWORD(funcVals->max_length) )
LABEL_26:
          sub_1C71610(v24);
        v33 = v24;
        *(float *)&methoda.methodPointer = (float)funcVals->m_Items[SHIDWORD(methoda.methodPointer)] / 10000.0;
        IsNullOrEmpty = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
        if ( !v33 )
          break;
        text = System_String__Replace_64078288(v33, v25, IsNullOrEmpty, 0);
        ++HIDWORD(methoda.methodPointer);
        if ( SHIDWORD(methoda.methodPointer) >= SLODWORD(funcVals->max_length) )
          return text;
      }
LABEL_27:
      sub_1C71608(IsNullOrEmpty, v6);
    }
  }
  return text;
}