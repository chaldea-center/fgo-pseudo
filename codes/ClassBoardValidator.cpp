void ClassBoardValidator__Check(
        System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *squareList,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *v2; // x19
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__c *klass; // x8
  __int64 v4; // x9
  int32_t *p_offset; // x10
  __int64 v6; // x0
  __int64 v7; // x19
  __int64 v8; // x8
  __int64 v9; // x9
  int *v10; // x10
  __int64 v11; // x0
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0

  v2 = squareList;
  if ( (byte_4C3B592 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardSquareModel_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo);
    squareList = (System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *)sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    byte_4C3B592 = 1;
  }
  if ( !v2 )
    sub_1C32E7C(squareList);
  klass = v2->klass;
  v4 = *(unsigned __int16 *)&v2->klass->_2.rank;
  if ( *(_WORD *)&v2->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      --v4;
      p_offset += 4;
      if ( !v4 )
        goto LABEL_8;
    }
    v6 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v6 = sub_1C83438(v2, System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, 0);
  }
  v7 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *, _QWORD))v6)(
         v2,
         *(_QWORD *)(v6 + 8));
  if ( !v7 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v8 = *(_QWORD *)v7;
    v9 = *(unsigned __int16 *)(*(_QWORD *)v7 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v7 + 302LL) )
    {
      v10 = (int *)(*(_QWORD *)(v8 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v10 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        v10 += 4;
        if ( !v9 )
          goto LABEL_15;
      }
      v11 = v8 + 16LL * *v10 + 312;
    }
    else
    {
LABEL_15:
      v11 = sub_1C83438(v7, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v11)(v7, *(_QWORD *)(v11 + 8)) & 1) == 0 )
      break;
    v12 = *(_QWORD *)v7;
    v13 = *(unsigned __int16 *)(*(_QWORD *)v7 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v7 + 302LL) )
    {
      v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v14 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_22;
      }
      v15 = v12 + 16LL * *v14 + 312;
    }
    else
    {
LABEL_22:
      v15 = sub_1C83438(v7, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v15)(v7, *(_QWORD *)(v15 + 8));
  }
  v16 = *(_QWORD *)v7;
  v17 = *(unsigned __int16 *)(*(_QWORD *)v7 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v7 + 302LL) )
  {
    v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v18 - 1) != System_IDisposable_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_29;
    }
    v19 = v16 + 16LL * *v18 + 312;
  }
  else
  {
LABEL_29:
    v19 = sub_1C83438(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v19)(v7, *(_QWORD *)(v19 + 8));
}


void ClassBoardValidator__Check_48002772(
        System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *lineList,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *v2; // x19
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__c *klass; // x8
  __int64 v4; // x9
  int32_t *p_offset; // x10
  __int64 v6; // x0
  __int64 v7; // x19
  __int64 v8; // x8
  __int64 v9; // x9
  int *v10; // x10
  __int64 v11; // x0
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0

  v2 = lineList;
  if ( (byte_4C3B593 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    lineList = (System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *)sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    byte_4C3B593 = 1;
  }
  if ( !v2 )
    sub_1C32E7C(lineList);
  klass = v2->klass;
  v4 = *(unsigned __int16 *)&v2->klass->_2.rank;
  if ( *(_WORD *)&v2->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v4;
      p_offset += 4;
      if ( !v4 )
        goto LABEL_8;
    }
    v6 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v6 = sub_1C83438(v2, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0);
  }
  v7 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *, _QWORD))v6)(
         v2,
         *(_QWORD *)(v6 + 8));
  if ( !v7 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v8 = *(_QWORD *)v7;
    v9 = *(unsigned __int16 *)(*(_QWORD *)v7 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v7 + 302LL) )
    {
      v10 = (int *)(*(_QWORD *)(v8 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v10 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        v10 += 4;
        if ( !v9 )
          goto LABEL_15;
      }
      v11 = v8 + 16LL * *v10 + 312;
    }
    else
    {
LABEL_15:
      v11 = sub_1C83438(v7, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v11)(v7, *(_QWORD *)(v11 + 8)) & 1) == 0 )
      break;
    v12 = *(_QWORD *)v7;
    v13 = *(unsigned __int16 *)(*(_QWORD *)v7 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v7 + 302LL) )
    {
      v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v14 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_22;
      }
      v15 = v12 + 16LL * *v14 + 312;
    }
    else
    {
LABEL_22:
      v15 = sub_1C83438(v7, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v15)(v7, *(_QWORD *)(v15 + 8));
  }
  v16 = *(_QWORD *)v7;
  v17 = *(unsigned __int16 *)(*(_QWORD *)v7 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v7 + 302LL) )
  {
    v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v18 - 1) != System_IDisposable_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_29;
    }
    v19 = v16 + 16LL * *v18 + 312;
  }
  else
  {
LABEL_29:
    v19 = sub_1C83438(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v19)(v7, *(_QWORD *)(v19 + 8));
}