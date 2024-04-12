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
  __int64 v11; // x3
  Il2CppClass *v12; // x8
  unsigned __int64 v13; // x10
  IClassBoardSquareModel_c **v14; // x11
  __int64 v15; // x0
  System_Enum_o *v16; // x19
  System_Enum_o *v17; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  int32_t v21; // w8
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-60h] BYREF
  int v25; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_42B37FC & 1) == 0 )
  {
    sub_B52984(&AcquireFlag_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
    this = (ClassBoardBlank_o *)sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__);
    byte_42B37FC = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !linkSquares )
    sub_B52A5C(this, linkSquares);
  size = linkSquares->fields._size;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)linkSquares,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v5 = 0;
  v24 = v23;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    if ( !v18 )
      break;
    current = v24.fields.current;
    if ( !v24.fields.current )
      sub_B52A5C(v18, v19);
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
      p_method = sub_AEB880(v24.fields.current, IClassBoardSquareModel_TypeInfo, 5LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      --size;
    }
    else
    {
      v12 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v13 = 0LL;
        v14 = (IClassBoardSquareModel_c **)&v12->_1.interfaceOffsets->offset;
        while ( *(v14 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v13;
          v14 += 2;
          if ( v13 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 13].method;
      }
      else
      {
LABEL_17:
        v15 = sub_AEB880(current, IClassBoardSquareModel_TypeInfo, 13LL, v11);
      }
      LODWORD(v23.fields.list) = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v15)(
                                   current,
                                   0LL,
                                   *(_QWORD *)(v15 + 8));
      v16 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v23);
      v25 = 1;
      v17 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v25);
      if ( !v16 )
        sub_B52A5C(v17, v17);
      v5 += System_Enum__HasFlag(v16, v17, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
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
  __int64 v6; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v9; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  ClassBoardBlank_o *v12; // x0
  const MethodInfo *v13; // x2
  System_String_o *blackOutTransitionAnimationName; // x1
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B37FA & 1) == 0 )
  {
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_B52984(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_42B37FA = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v3;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_B52A5C(v4, v5);
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
    p_method = sub_AEB880(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL, v6);
  }
  v12 = (ClassBoardBlank_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))p_method)(
                               SquareModel_k__BackingField,
                               &linkSquares,
                               *(_QWORD *)(p_method + 8));
  if ( (unsigned int)(ClassBoardBlank__GetConnectType(v12, linkSquares, v13) - 1) > 1 )
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
  __int64 v7; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v10; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  ClassBoardBlank_o *v13; // x0
  const MethodInfo *v14; // x2
  int32_t ConnectType; // w0
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B37FB & 1) == 0 )
  {
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_B52984(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_42B37FB = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v4;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_B52A5C(v5, v6);
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v10;
      p_offset += 2;
      if ( v10 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL, v7);
  }
  v13 = (ClassBoardBlank_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))p_method)(
                               SquareModel_k__BackingField,
                               &linkSquares,
                               *(_QWORD *)(p_method + 8));
  ConnectType = ClassBoardBlank__GetConnectType(v13, linkSquares, v14);
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