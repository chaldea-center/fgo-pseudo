void __fastcall ClassBoardValidator__Check(
        System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *squareList,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x1
  __int64 v22; // x3
  __int64 v23; // x19
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x3
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0

  v4 = squareList;
  if ( (byte_42EA8CA & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardSquareModel_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, v11, v12, v13);
    squareList = (System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *)sub_B5D5C4(
                                                                                         &System_Collections_IEnumerator_TypeInfo,
                                                                                         v14,
                                                                                         v15,
                                                                                         v16);
    byte_42EA8CA = 1;
  }
  if ( !v4 )
    sub_B5D69C(squareList, method);
  klass = v4->klass;
  if ( *(_WORD *)&v4->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&v4->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(v4, System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, 0LL, v3);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardSquareModel__o *, _QWORD))p_method)(
          v4,
          *(_QWORD *)(p_method + 8));
  if ( !v23 )
    sub_B5D69C(0LL, v21);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_15;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_15:
      v27 = sub_AF54C0(v23, System_Collections_IEnumerator_TypeInfo, 0LL, v22);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v30 = 0LL;
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v31 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_22;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_22:
      v32 = sub_AF54C0(v23, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL, v28);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v32)(v23, *(_QWORD *)(v32 + 8));
  }
  v33 = *(_QWORD *)v23;
  if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
  {
    v34 = 0LL;
    v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
        goto LABEL_29;
    }
    v36 = v33 + 16LL * *v35 + 312;
  }
  else
  {
LABEL_29:
    v36 = sub_AF54C0(v23, System_IDisposable_TypeInfo, 0LL, v28);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v36)(v23, *(_QWORD *)(v36 + 8));
}


void __fastcall ClassBoardValidator__Check_28874664(
        System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *lineList,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  __int64 v20; // x19
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x3
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0

  v4 = lineList;
  if ( (byte_42EA8CB & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v8, v9, v10);
    lineList = (System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *)sub_B5D5C4(
                                                                                     &System_Collections_IEnumerator_TypeInfo,
                                                                                     v11,
                                                                                     v12,
                                                                                     v13);
    byte_42EA8CB = 1;
  }
  if ( !v4 )
    sub_B5D69C(lineList, method);
  klass = v4->klass;
  if ( *(_WORD *)&v4->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&v4->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(v4, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL, v3);
  }
  v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_IClassBoardLineModel__o *, _QWORD))p_method)(
          v4,
          *(_QWORD *)(p_method + 8));
  if ( !v20 )
    sub_B5D69C(0LL, v18);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v22 = 0LL;
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_15;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_15:
      v24 = sub_AF54C0(v20, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v28 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_22;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_22:
      v29 = sub_AF54C0(v20, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL, v25);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v20, *(_QWORD *)(v29 + 8));
  }
  v30 = *(_QWORD *)v20;
  if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
  {
    v31 = 0LL;
    v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
        goto LABEL_29;
    }
    v33 = v30 + 16LL * *v32 + 312;
  }
  else
  {
LABEL_29:
    v33 = sub_AF54C0(v20, System_IDisposable_TypeInfo, 0LL, v25);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v33)(v20, *(_QWORD *)(v33 + 8));
}