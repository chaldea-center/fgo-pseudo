void __fastcall ClassBoardValidator__Check(
        System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *squareList,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *v2; // x19
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__c *klass; // x8
  unsigned __int64 v4; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v7; // x1
  __int64 v8; // x19
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  int *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x8
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0

  v2 = squareList;
  if ( (byte_438D47C & 1) == 0 )
  {
    sub_B775C4(&ClassBoardSquareModel_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo);
    squareList = (System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *)sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_438D47C = 1;
  }
  if ( !v2 )
    sub_B7769C(squareList, method);
  klass = v2->klass;
  if ( *(_WORD *)&v2->klass->_2.bitflags1 )
  {
    v4 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      ++v4;
      p_offset += 4;
      if ( v4 >= *(unsigned __int16 *)&v2->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B0F4C0(v2, System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, 0LL);
  }
  v8 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *, _QWORD))p_method)(
         v2,
         *(_QWORD *)(p_method + 8));
  if ( !v8 )
    sub_B7769C(0LL, v7);
  while ( 1 )
  {
    v9 = *(_QWORD *)v8;
    if ( *(_WORD *)(*(_QWORD *)v8 + 298LL) )
    {
      v10 = 0LL;
      v11 = (int *)(*(_QWORD *)(v9 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v11 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        v11 += 4;
        if ( v10 >= *(unsigned __int16 *)(*(_QWORD *)v8 + 298LL) )
          goto LABEL_15;
      }
      v12 = v9 + 16LL * *v11 + 312;
    }
    else
    {
LABEL_15:
      v12 = sub_B0F4C0(v8, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v12)(v8, *(_QWORD *)(v12 + 8)) & 1) == 0 )
      break;
    v13 = *(_QWORD *)v8;
    if ( *(_WORD *)(*(_QWORD *)v8 + 298LL) )
    {
      v14 = 0LL;
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v15 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)(*(_QWORD *)v8 + 298LL) )
          goto LABEL_22;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_22:
      v16 = sub_B0F4C0(v8, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v16)(v8, *(_QWORD *)(v16 + 8));
  }
  v17 = *(_QWORD *)v8;
  if ( *(_WORD *)(*(_QWORD *)v8 + 298LL) )
  {
    v18 = 0LL;
    v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v19 - 1) != System_IDisposable_TypeInfo )
    {
      ++v18;
      v19 += 4;
      if ( v18 >= *(unsigned __int16 *)(*(_QWORD *)v8 + 298LL) )
        goto LABEL_29;
    }
    v20 = v17 + 16LL * *v19 + 312;
  }
  else
  {
LABEL_29:
    v20 = sub_B0F4C0(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v20)(v8, *(_QWORD *)(v20 + 8));
}


void __fastcall ClassBoardValidator__Check_29299100(
        System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *lineList,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *v2; // x19
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__c *klass; // x8
  unsigned __int64 v4; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v7; // x1
  __int64 v8; // x19
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  int *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x8
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0

  v2 = lineList;
  if ( (byte_438D47D & 1) == 0 )
  {
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    lineList = (System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *)sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_438D47D = 1;
  }
  if ( !v2 )
    sub_B7769C(lineList, method);
  klass = v2->klass;
  if ( *(_WORD *)&v2->klass->_2.bitflags1 )
  {
    v4 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      ++v4;
      p_offset += 4;
      if ( v4 >= *(unsigned __int16 *)&v2->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B0F4C0(v2, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v8 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *, _QWORD))p_method)(
         v2,
         *(_QWORD *)(p_method + 8));
  if ( !v8 )
    sub_B7769C(0LL, v7);
  while ( 1 )
  {
    v9 = *(_QWORD *)v8;
    if ( *(_WORD *)(*(_QWORD *)v8 + 298LL) )
    {
      v10 = 0LL;
      v11 = (int *)(*(_QWORD *)(v9 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v11 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        v11 += 4;
        if ( v10 >= *(unsigned __int16 *)(*(_QWORD *)v8 + 298LL) )
          goto LABEL_15;
      }
      v12 = v9 + 16LL * *v11 + 312;
    }
    else
    {
LABEL_15:
      v12 = sub_B0F4C0(v8, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v12)(v8, *(_QWORD *)(v12 + 8)) & 1) == 0 )
      break;
    v13 = *(_QWORD *)v8;
    if ( *(_WORD *)(*(_QWORD *)v8 + 298LL) )
    {
      v14 = 0LL;
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v15 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)(*(_QWORD *)v8 + 298LL) )
          goto LABEL_22;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_22:
      v16 = sub_B0F4C0(v8, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v16)(v8, *(_QWORD *)(v16 + 8));
  }
  v17 = *(_QWORD *)v8;
  if ( *(_WORD *)(*(_QWORD *)v8 + 298LL) )
  {
    v18 = 0LL;
    v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v19 - 1) != System_IDisposable_TypeInfo )
    {
      ++v18;
      v19 += 4;
      if ( v18 >= *(unsigned __int16 *)(*(_QWORD *)v8 + 298LL) )
        goto LABEL_29;
    }
    v20 = v17 + 16LL * *v19 + 312;
  }
  else
  {
LABEL_29:
    v20 = sub_B0F4C0(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v20)(v8, *(_QWORD *)(v20 + 8));
}