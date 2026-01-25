void ClassBoardValidator__Check(
        System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *squareList,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *v2; // x19
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__c *klass; // x8
  __int64 v4; // x9
  int32_t *p_offset; // x10
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x19
  __int64 v9; // x8
  __int64 v10; // x9
  int *v11; // x10
  __int64 v12; // x0
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0

  v2 = squareList;
  if ( (byte_4CF2329 & 1) == 0 )
  {
    sub_1C7BAE8(&ClassBoardSquareModel_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo);
    squareList = (System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *)sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    byte_4CF2329 = 1;
  }
  if ( !v2 )
    sub_1C7BD40(squareList, method);
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
    v6 = sub_1C51E70(v2, System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, 0);
  }
  v8 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *, _QWORD))v6)(
         v2,
         *(_QWORD *)(v6 + 8));
  if ( !v8 )
    sub_1C7BD40(0, v7);
  while ( 1 )
  {
    v9 = *(_QWORD *)v8;
    v10 = *(unsigned __int16 *)(*(_QWORD *)v8 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v8 + 302LL) )
    {
      v11 = (int *)(*(_QWORD *)(v9 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v11 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        v11 += 4;
        if ( !v10 )
          goto LABEL_15;
      }
      v12 = v9 + 16LL * *v11 + 312;
    }
    else
    {
LABEL_15:
      v12 = sub_1C51E70(v8, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v12)(v8, *(_QWORD *)(v12 + 8)) & 1) == 0 )
      break;
    v13 = *(_QWORD *)v8;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v8 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v8 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v15 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_22;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_22:
      v16 = sub_1C51E70(v8, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v16)(v8, *(_QWORD *)(v16 + 8));
  }
  v17 = *(_QWORD *)v8;
  v18 = *(unsigned __int16 *)(*(_QWORD *)v8 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v8 + 302LL) )
  {
    v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v19 - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_29;
    }
    v20 = v17 + 16LL * *v19 + 312;
  }
  else
  {
LABEL_29:
    v20 = sub_1C51E70(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v20)(v8, *(_QWORD *)(v20 + 8));
}


void ClassBoardValidator__Check_48760060(
        System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *lineList,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *v2; // x19
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__c *klass; // x8
  __int64 v4; // x9
  int32_t *p_offset; // x10
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x19
  __int64 v9; // x8
  __int64 v10; // x9
  int *v11; // x10
  __int64 v12; // x0
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0

  v2 = lineList;
  if ( (byte_4CF232A & 1) == 0 )
  {
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    lineList = (System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *)sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    byte_4CF232A = 1;
  }
  if ( !v2 )
    sub_1C7BD40(lineList, method);
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
    v6 = sub_1C51E70(v2, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0);
  }
  v8 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *, _QWORD))v6)(
         v2,
         *(_QWORD *)(v6 + 8));
  if ( !v8 )
    sub_1C7BD40(0, v7);
  while ( 1 )
  {
    v9 = *(_QWORD *)v8;
    v10 = *(unsigned __int16 *)(*(_QWORD *)v8 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v8 + 302LL) )
    {
      v11 = (int *)(*(_QWORD *)(v9 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v11 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        v11 += 4;
        if ( !v10 )
          goto LABEL_15;
      }
      v12 = v9 + 16LL * *v11 + 312;
    }
    else
    {
LABEL_15:
      v12 = sub_1C51E70(v8, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v12)(v8, *(_QWORD *)(v12 + 8)) & 1) == 0 )
      break;
    v13 = *(_QWORD *)v8;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v8 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v8 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v15 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_22;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_22:
      v16 = sub_1C51E70(v8, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v16)(v8, *(_QWORD *)(v16 + 8));
  }
  v17 = *(_QWORD *)v8;
  v18 = *(unsigned __int16 *)(*(_QWORD *)v8 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v8 + 302LL) )
  {
    v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v19 - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_29;
    }
    v20 = v17 + 16LL * *v19 + 312;
  }
  else
  {
LABEL_29:
    v20 = sub_1C51E70(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v20)(v8, *(_QWORD *)(v20 + 8));
}