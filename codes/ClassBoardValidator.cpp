void __fastcall ClassBoardValidator__Check(
        System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *squareList,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v11; // x1
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0

  v2 = squareList;
  if ( (byte_4A51CB3 & 1) == 0 )
  {
    sub_1B863B8(&ClassBoardSquareModel_TypeInfo, method);
    sub_1B863B8(&System_IDisposable_TypeInfo, v3);
    sub_1B863B8(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, v4);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, v5);
    squareList = (System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *)sub_1B863B8(
                                                                                         &System_Collections_IEnumerator_TypeInfo,
                                                                                         v6);
    byte_4A51CB3 = 1;
  }
  if ( !v2 )
    sub_1B86614(squareList, method);
  klass = v2->klass;
  v8 = *(unsigned __int16 *)(&v2->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v2->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BD6B4C(v2, System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, 0LL);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *, _QWORD))p_method)(
          v2,
          *(_QWORD *)(p_method + 8));
  if ( !v12 )
    sub_1B86614(0LL, v11);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_15;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_15:
      v16 = sub_1BD6B4C(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    v17 = *(_QWORD *)v12;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v19 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_22;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_22:
      v20 = sub_1BD6B4C(v12, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
  }
  v21 = *(_QWORD *)v12;
  v22 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_29;
    }
    v24 = v21 + 16LL * *v23 + 312;
  }
  else
  {
LABEL_29:
    v24 = sub_1BD6B4C(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v24)(v12, *(_QWORD *)(v24 + 8));
}


void __fastcall ClassBoardValidator__Check_45798948(
        System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *lineList,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v10; // x1
  __int64 v11; // x19
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0

  v2 = lineList;
  if ( (byte_4A51CB4 & 1) == 0 )
  {
    sub_1B863B8(&System_IDisposable_TypeInfo, method);
    sub_1B863B8(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v3);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v4);
    lineList = (System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *)sub_1B863B8(
                                                                                     &System_Collections_IEnumerator_TypeInfo,
                                                                                     v5);
    byte_4A51CB4 = 1;
  }
  if ( !v2 )
    sub_1B86614(lineList, method);
  klass = v2->klass;
  v7 = *(unsigned __int16 *)(&v2->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v2->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BD6B4C(v2, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *, _QWORD))p_method)(
          v2,
          *(_QWORD *)(p_method + 8));
  if ( !v11 )
    sub_1B86614(0LL, v10);
  while ( 1 )
  {
    v12 = *(_QWORD *)v11;
    v13 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_15;
      }
      v15 = v12 + 16LL * *v14 + 312;
    }
    else
    {
LABEL_15:
      v15 = sub_1BD6B4C(v11, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8)) & 1) == 0 )
      break;
    v16 = *(_QWORD *)v11;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v18 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_22;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_22:
      v19 = sub_1BD6B4C(v11, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v19)(v11, *(_QWORD *)(v19 + 8));
  }
  v20 = *(_QWORD *)v11;
  v21 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
  {
    v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_29;
    }
    v23 = v20 + 16LL * *v22 + 312;
  }
  else
  {
LABEL_29:
    v23 = sub_1BD6B4C(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v23)(v11, *(_QWORD *)(v23 + 8));
}