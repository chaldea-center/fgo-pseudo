void __fastcall ClassBoardBlank___ctor(ClassBoardBlank_o *this, const MethodInfo *method)
{
  ClassBoardSquare___ctor((ClassBoardSquare_o *)this, 0LL);
}


int32_t __fastcall ClassBoardBlank__GetConnectType(
        ClassBoardBlank_o *this,
        System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares,
        const MethodInfo *method)
{
  int32_t size; // w20
  int32_t v5; // w21
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  Il2CppClass *v11; // x8
  unsigned __int64 v12; // x10
  IClassBoardSquareModel_c **v13; // x11
  __int64 v14; // x0
  __int64 v15; // x2
  System_Enum_o *v16; // x19
  __int64 v17; // x2
  System_Enum_o *v18; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w8
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-60h] BYREF
  int v25; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4352BA5 & 1) == 0 )
  {
    sub_B70694(&AcquireFlag_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__);
    sub_B70694(&IClassBoardSquareModel_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
    this = (ClassBoardBlank_o *)sub_B70694(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__);
    byte_4352BA5 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !linkSquares )
    sub_B7076C(this, linkSquares);
  size = linkSquares->fields._size;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)linkSquares,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v5 = 0;
  v24 = v23;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    if ( !v19 )
      break;
    current = v24.fields.current;
    if ( !v24.fields.current )
      sub_B7076C(v19, v20);
    klass = v24.fields.current->klass;
    if ( *(_WORD *)&v24.fields.current->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&v24.fields.current->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset + 5].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(v24.fields.current, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      --size;
    }
    else
    {
      v11 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v12 = 0LL;
        v13 = (IClassBoardSquareModel_c **)&v11->_1.interfaceOffsets->offset;
        while ( *(v13 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v12;
          v13 += 2;
          if ( v12 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v14 = (__int64)&v11->vtable[*(_DWORD *)v13 + 13].method;
      }
      else
      {
LABEL_17:
        v14 = sub_B08590(current, IClassBoardSquareModel_TypeInfo, 13LL);
      }
      LODWORD(v23.fields.list) = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v14)(
                                   current,
                                   0LL,
                                   *(_QWORD *)(v14 + 8));
      v16 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v23, v15);
      v25 = 1;
      v18 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v25, v17);
      if ( !v16 )
        sub_B7076C(v18, v18);
      v5 += System_Enum__HasFlag(v16, v18, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  if ( v5 < size )
    v21 = 1;
  else
    v21 = 2;
  if ( v5 )
    return v21;
  else
    return 0;
}


void __fastcall ClassBoardBlank__PlayClickedSe(ClassBoardBlank_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardBlank__PlayTransition(ClassBoardBlank_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v8; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  ClassBoardBlank_o *v11; // x0
  const MethodInfo *v12; // x2
  System_String_o *blackOutTransitionAnimationName; // x1
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4352BA3 & 1) == 0 )
  {
    sub_B70694(&IClassBoardSquareModel_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_B70694(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_4352BA3 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v3;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_B7076C(v4, v5);
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v8;
      p_offset += 2;
      if ( v8 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  v11 = (ClassBoardBlank_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))p_method)(
                               SquareModel_k__BackingField,
                               &linkSquares,
                               *(_QWORD *)(p_method + 8));
  if ( (unsigned int)(ClassBoardBlank__GetConnectType(v11, linkSquares, v12) - 1) > 1 )
    blackOutTransitionAnimationName = this->fields.blackOutTransitionAnimationName;
  else
    blackOutTransitionAnimationName = this->fields.brightTurnTransitionAnimationName;
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, blackOutTransitionAnimationName, 0LL, 0LL);
}


void __fastcall ClassBoardBlank__UpdateDraw(
        ClassBoardBlank_o *this,
        System_Nullable_AcquireFlag__o handoverFlag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v9; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  ClassBoardBlank_o *v12; // x0
  const MethodInfo *v13; // x2
  int32_t ConnectType; // w0
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4352BA4 & 1) == 0 )
  {
    sub_B70694(&IClassBoardSquareModel_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_B70694(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_4352BA4 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v4;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_B7076C(v5, v6);
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v9;
      p_offset += 2;
      if ( v9 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  v12 = (ClassBoardBlank_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))p_method)(
                               SquareModel_k__BackingField,
                               &linkSquares,
                               *(_QWORD *)(p_method + 8));
  ConnectType = ClassBoardBlank__GetConnectType(v12, linkSquares, v13);
  if ( ConnectType )
  {
    if ( ConnectType == 2 )
      ClassBoardSquare__DrawAcquired((ClassBoardSquare_o *)this, 0LL);
    else
      ClassBoardSquare__DrawAvailable((ClassBoardSquare_o *)this, 0LL);
  }
  else
  {
    ClassBoardSquare__DrawNotConnected((ClassBoardSquare_o *)this, 0LL);
  }
}