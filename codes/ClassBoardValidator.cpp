void __fastcall ClassBoardValidator__Check(
        System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *squareList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x19
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  int *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  int *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0

  if ( (byte_40FBA2C & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardSquareModel_TypeInfo, method);
    sub_B16FFC(&System_IDisposable_TypeInfo, v3);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, v4);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, v5);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v6);
    byte_40FBA2C = 1;
  }
  if ( !squareList )
    sub_B170D4();
  klass = squareList->klass;
  if ( *(_WORD *)&squareList->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&squareList->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(squareList, System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, 0LL);
  }
  v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *, _QWORD))p_method)(
          squareList,
          *(_QWORD *)(p_method + 8));
  if ( !v11 )
    sub_B170D4();
  while ( 1 )
  {
    v12 = *(_QWORD *)v11;
    if ( *(_WORD *)(*(_QWORD *)v11 + 298LL) )
    {
      v13 = 0LL;
      v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)(*(_QWORD *)v11 + 298LL) )
          goto LABEL_15;
      }
      v15 = v12 + 16LL * *v14 + 312;
    }
    else
    {
LABEL_15:
      v15 = sub_AAFEF8(v11, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8)) & 1) == 0 )
      break;
    v16 = *(_QWORD *)v11;
    if ( *(_WORD *)(*(_QWORD *)v11 + 298LL) )
    {
      v17 = 0LL;
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v18 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)(*(_QWORD *)v11 + 298LL) )
          goto LABEL_22;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_22:
      v19 = sub_AAFEF8(v11, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v19)(v11, *(_QWORD *)(v19 + 8));
  }
  v20 = *(_QWORD *)v11;
  if ( *(_WORD *)(*(_QWORD *)v11 + 298LL) )
  {
    v21 = 0LL;
    v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v11 + 298LL) )
        goto LABEL_29;
    }
    v23 = v20 + 16LL * *v22 + 312;
  }
  else
  {
LABEL_29:
    v23 = sub_AAFEF8(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v23)(v11, *(_QWORD *)(v23 + 8));
}


void __fastcall ClassBoardValidator__Check_28149724(
        System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *lineList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v10; // x19
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  int *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0

  if ( (byte_40FBA2D & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v3);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v4);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v5);
    byte_40FBA2D = 1;
  }
  if ( !lineList )
    sub_B170D4();
  klass = lineList->klass;
  if ( *(_WORD *)&lineList->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&lineList->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(lineList, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v10 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *, _QWORD))p_method)(
          lineList,
          *(_QWORD *)(p_method + 8));
  if ( !v10 )
    sub_B170D4();
  while ( 1 )
  {
    v11 = *(_QWORD *)v10;
    if ( *(_WORD *)(*(_QWORD *)v10 + 298LL) )
    {
      v12 = 0LL;
      v13 = (int *)(*(_QWORD *)(v11 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)(*(_QWORD *)v10 + 298LL) )
          goto LABEL_15;
      }
      v14 = v11 + 16LL * *v13 + 312;
    }
    else
    {
LABEL_15:
      v14 = sub_AAFEF8(v10, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v14)(v10, *(_QWORD *)(v14 + 8)) & 1) == 0 )
      break;
    v15 = *(_QWORD *)v10;
    if ( *(_WORD *)(*(_QWORD *)v10 + 298LL) )
    {
      v16 = 0LL;
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v17 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)(*(_QWORD *)v10 + 298LL) )
          goto LABEL_22;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_22:
      v18 = sub_AAFEF8(v10, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v18)(v10, *(_QWORD *)(v18 + 8));
  }
  v19 = *(_QWORD *)v10;
  if ( *(_WORD *)(*(_QWORD *)v10 + 298LL) )
  {
    v20 = 0LL;
    v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      ++v20;
      v21 += 4;
      if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v10 + 298LL) )
        goto LABEL_29;
    }
    v22 = v19 + 16LL * *v21 + 312;
  }
  else
  {
LABEL_29:
    v22 = sub_AAFEF8(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v22)(v10, *(_QWORD *)(v22 + 8));
}