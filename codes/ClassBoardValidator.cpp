void __fastcall ClassBoardValidator__Check(
        System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *squareList,
        const MethodInfo *method)
{
  __int64 v2; // x3
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  __int64 v14; // x19
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0

  v3 = squareList;
  if ( (byte_41895B2 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardSquareModel_TypeInfo, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, v6);
    squareList = (System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *)sub_B2C35C(
                                                                                         &System_Collections_IEnumerator_TypeInfo,
                                                                                         v7);
    byte_41895B2 = 1;
  }
  if ( !v3 )
    sub_B2C434(squareList, method);
  klass = v3->klass;
  if ( *(_WORD *)&v3->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&v3->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(v3, System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, 0LL, v2);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *, _QWORD))p_method)(
          v3,
          *(_QWORD *)(p_method + 8));
  if ( !v14 )
    sub_B2C434(0LL, v12);
  while ( 1 )
  {
    v15 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v16 = 0LL;
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_15;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_15:
      v18 = sub_AC5258(v14, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
      break;
    v20 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v22 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_22;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_22:
      v23 = sub_AC5258(v14, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL, v19);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v14, *(_QWORD *)(v23 + 8));
  }
  v24 = *(_QWORD *)v14;
  if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
  {
    v25 = 0LL;
    v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
        goto LABEL_29;
    }
    v27 = v24 + 16LL * *v26 + 312;
  }
  else
  {
LABEL_29:
    v27 = sub_AC5258(v14, System_IDisposable_TypeInfo, 0LL, v19);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v27)(v14, *(_QWORD *)(v27 + 8));
}


void __fastcall ClassBoardValidator__Check_28206596(
        System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *lineList,
        const MethodInfo *method)
{
  __int64 v2; // x3
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x1
  __int64 v12; // x3
  __int64 v13; // x19
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  int *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x3
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0

  v3 = lineList;
  if ( (byte_41895B3 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v5);
    lineList = (System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *)sub_B2C35C(
                                                                                     &System_Collections_IEnumerator_TypeInfo,
                                                                                     v6);
    byte_41895B3 = 1;
  }
  if ( !v3 )
    sub_B2C434(lineList, method);
  klass = v3->klass;
  if ( *(_WORD *)&v3->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&v3->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(v3, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL, v2);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *, _QWORD))p_method)(
          v3,
          *(_QWORD *)(p_method + 8));
  if ( !v13 )
    sub_B2C434(0LL, v11);
  while ( 1 )
  {
    v14 = *(_QWORD *)v13;
    if ( *(_WORD *)(*(_QWORD *)v13 + 298LL) )
    {
      v15 = 0LL;
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)(*(_QWORD *)v13 + 298LL) )
          goto LABEL_15;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_15:
      v17 = sub_AC5258(v13, System_Collections_IEnumerator_TypeInfo, 0LL, v12);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    v19 = *(_QWORD *)v13;
    if ( *(_WORD *)(*(_QWORD *)v13 + 298LL) )
    {
      v20 = 0LL;
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v21 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v13 + 298LL) )
          goto LABEL_22;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_22:
      v22 = sub_AC5258(v13, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL, v18);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v22)(v13, *(_QWORD *)(v22 + 8));
  }
  v23 = *(_QWORD *)v13;
  if ( *(_WORD *)(*(_QWORD *)v13 + 298LL) )
  {
    v24 = 0LL;
    v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v13 + 298LL) )
        goto LABEL_29;
    }
    v26 = v23 + 16LL * *v25 + 312;
  }
  else
  {
LABEL_29:
    v26 = sub_AC5258(v13, System_IDisposable_TypeInfo, 0LL, v18);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v26)(v13, *(_QWORD *)(v26 + 8));
}