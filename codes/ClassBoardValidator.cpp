void __fastcall ClassBoardValidator__Check(
        System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *squareList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v16; // x1
  __int64 v17; // x19
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0

  v3 = squareList;
  if ( (byte_4B19758 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardSquareModel_TypeInfo, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, v8, v9);
    squareList = (System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *)sub_1BCA7E0(
                                                                                         &System_Collections_IEnumerator_TypeInfo,
                                                                                         v10,
                                                                                         v11);
    byte_4B19758 = 1;
  }
  if ( !v3 )
    sub_1BCAA3C(squareList, method);
  klass = v3->klass;
  v13 = *(unsigned __int16 *)(&v3->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v3->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(v3, System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, 0LL);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *, _QWORD))p_method)(
          v3,
          *(_QWORD *)(p_method + 8));
  if ( !v17 )
    sub_1BCAA3C(0LL, v16);
  while ( 1 )
  {
    v18 = *(_QWORD *)v17;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_15;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_15:
      v21 = sub_1C1C7C0(v17, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
      break;
    v22 = *(_QWORD *)v17;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v24 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_22;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_22:
      v25 = sub_1C1C7C0(v17, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v17, *(_QWORD *)(v25 + 8));
  }
  v26 = *(_QWORD *)v17;
  v27 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
  {
    v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = v26 + 16LL * *v28 + 312;
  }
  else
  {
LABEL_29:
    v29 = sub_1C1C7C0(v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v29)(v17, *(_QWORD *)(v29 + 8));
}


void __fastcall ClassBoardValidator__Check_45311712(
        System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *lineList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v14; // x1
  __int64 v15; // x19
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  v3 = lineList;
  if ( (byte_4B19759 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v6, v7);
    lineList = (System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *)sub_1BCA7E0(
                                                                                     &System_Collections_IEnumerator_TypeInfo,
                                                                                     v8,
                                                                                     v9);
    byte_4B19759 = 1;
  }
  if ( !v3 )
    sub_1BCAA3C(lineList, method);
  klass = v3->klass;
  v11 = *(unsigned __int16 *)(&v3->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v3->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(v3, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *, _QWORD))p_method)(
          v3,
          *(_QWORD *)(p_method + 8));
  if ( !v15 )
    sub_1BCAA3C(0LL, v14);
  while ( 1 )
  {
    v16 = *(_QWORD *)v15;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_15;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_15:
      v19 = sub_1C1C7C0(v15, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
      break;
    v20 = *(_QWORD *)v15;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v22 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_22;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_22:
      v23 = sub_1C1C7C0(v15, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
  }
  v24 = *(_QWORD *)v15;
  v25 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
  {
    v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_29;
    }
    v27 = v24 + 16LL * *v26 + 312;
  }
  else
  {
LABEL_29:
    v27 = sub_1C1C7C0(v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v27)(v15, *(_QWORD *)(v27 + 8));
}