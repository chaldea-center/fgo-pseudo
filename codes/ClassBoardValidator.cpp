void __fastcall ClassBoardValidator__Check(
        System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *squareList,
        const MethodInfo *method)
{
  __int64 v2; // x3
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *v3; // x19
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  __int64 v10; // x19
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  int *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x3
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  int *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0

  v3 = squareList;
  if ( (byte_42B0785 & 1) == 0 )
  {
    sub_B52984(&ClassBoardSquareModel_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo);
    squareList = (System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *)sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B0785 = 1;
  }
  if ( !v3 )
    sub_B52A5C(squareList, method);
  klass = v3->klass;
  if ( *(_WORD *)&v3->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&v3->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(v3, System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, 0LL, v2);
  }
  v10 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *, _QWORD))p_method)(
          v3,
          *(_QWORD *)(p_method + 8));
  if ( !v10 )
    sub_B52A5C(0LL, v8);
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
      v14 = sub_AEB880(v10, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v14)(v10, *(_QWORD *)(v14 + 8)) & 1) == 0 )
      break;
    v16 = *(_QWORD *)v10;
    if ( *(_WORD *)(*(_QWORD *)v10 + 298LL) )
    {
      v17 = 0LL;
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v18 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)(*(_QWORD *)v10 + 298LL) )
          goto LABEL_22;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_22:
      v19 = sub_AEB880(v10, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL, v15);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v19)(v10, *(_QWORD *)(v19 + 8));
  }
  v20 = *(_QWORD *)v10;
  if ( *(_WORD *)(*(_QWORD *)v10 + 298LL) )
  {
    v21 = 0LL;
    v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v10 + 298LL) )
        goto LABEL_29;
    }
    v23 = v20 + 16LL * *v22 + 312;
  }
  else
  {
LABEL_29:
    v23 = sub_AEB880(v10, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v23)(v10, *(_QWORD *)(v23 + 8));
}


void __fastcall ClassBoardValidator__Check_25883588(
        System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *lineList,
        const MethodInfo *method)
{
  __int64 v2; // x3
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *v3; // x19
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  __int64 v10; // x19
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  int *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x3
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  int *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0

  v3 = lineList;
  if ( (byte_42B0786 & 1) == 0 )
  {
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    lineList = (System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *)sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B0786 = 1;
  }
  if ( !v3 )
    sub_B52A5C(lineList, method);
  klass = v3->klass;
  if ( *(_WORD *)&v3->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&v3->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(v3, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL, v2);
  }
  v10 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *, _QWORD))p_method)(
          v3,
          *(_QWORD *)(p_method + 8));
  if ( !v10 )
    sub_B52A5C(0LL, v8);
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
      v14 = sub_AEB880(v10, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v14)(v10, *(_QWORD *)(v14 + 8)) & 1) == 0 )
      break;
    v16 = *(_QWORD *)v10;
    if ( *(_WORD *)(*(_QWORD *)v10 + 298LL) )
    {
      v17 = 0LL;
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v18 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)(*(_QWORD *)v10 + 298LL) )
          goto LABEL_22;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_22:
      v19 = sub_AEB880(v10, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL, v15);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v19)(v10, *(_QWORD *)(v19 + 8));
  }
  v20 = *(_QWORD *)v10;
  if ( *(_WORD *)(*(_QWORD *)v10 + 298LL) )
  {
    v21 = 0LL;
    v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v10 + 298LL) )
        goto LABEL_29;
    }
    v23 = v20 + 16LL * *v22 + 312;
  }
  else
  {
LABEL_29:
    v23 = sub_AEB880(v10, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v23)(v10, *(_QWORD *)(v23 + 8));
}