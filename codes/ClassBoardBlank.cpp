void __fastcall ClassBoardBlank___ctor(ClassBoardBlank_o *this, const MethodInfo *method)
{
  ClassBoardSquare___ctor((ClassBoardSquare_o *)this, 0LL);
}


int32_t __fastcall ClassBoardBlank__GetConnectType(
        ClassBoardBlank_o *this,
        System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t size; // w20
  int32_t v11; // w21
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  Il2CppClass *v18; // x8
  unsigned __int64 v19; // x10
  IClassBoardSquareModel_c **v20; // x11
  __int64 v21; // x0
  System_Enum_o *v22; // x19
  System_Enum_o *v23; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x3
  int32_t v27; // w8
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-60h] BYREF
  int v31; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4187D32 & 1) == 0 )
  {
    sub_B2C35C(&AcquireFlag_TypeInfo, linkSquares);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v6);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v8);
    this = (ClassBoardBlank_o *)sub_B2C35C(
                                  &Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__,
                                  v9);
    byte_4187D32 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !linkSquares )
    sub_B2C434(this, linkSquares);
  size = linkSquares->fields._size;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)linkSquares,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v11 = 0;
  v30 = v29;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    if ( !v24 )
      break;
    current = v30.fields.current;
    if ( !v30.fields.current )
      sub_B2C434(v24, v25);
    klass = v30.fields.current->klass;
    if ( *(_WORD *)&v30.fields.current->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&v30.fields.current->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset + 5].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(v30.fields.current, IClassBoardSquareModel_TypeInfo, 5LL, v26);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      --size;
    }
    else
    {
      v18 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v19 = 0LL;
        v20 = (IClassBoardSquareModel_c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v20 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v19;
          v20 += 2;
          if ( v19 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 13].method;
      }
      else
      {
LABEL_17:
        v21 = sub_AC5258(current, IClassBoardSquareModel_TypeInfo, 13LL, v17);
      }
      LODWORD(v29.fields.list) = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v21)(
                                   current,
                                   0LL,
                                   *(_QWORD *)(v21 + 8));
      v22 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v29);
      v31 = 1;
      v23 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v31);
      if ( !v22 )
        sub_B2C434(v23, v23);
      v11 += System_Enum__HasFlag(v22, v23, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  if ( v11 < size )
    v27 = 1;
  else
    v27 = 2;
  if ( v11 )
    return v27;
  else
    return 0;
}


void __fastcall ClassBoardBlank__PlayClickedSe(ClassBoardBlank_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardBlank__PlayTransition(ClassBoardBlank_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v11; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  ClassBoardBlank_o *v14; // x0
  const MethodInfo *v15; // x2
  System_String_o *blackOutTransitionAnimationName; // x1
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187D30 & 1) == 0 )
  {
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v4);
    byte_4187D30 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v5;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_B2C434(v6, v7);
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v11;
      p_offset += 2;
      if ( v11 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL, v8);
  }
  v14 = (ClassBoardBlank_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))p_method)(
                               SquareModel_k__BackingField,
                               &linkSquares,
                               *(_QWORD *)(p_method + 8));
  if ( (unsigned int)(ClassBoardBlank__GetConnectType(v14, linkSquares, v15) - 1) > 1 )
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
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v12; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  ClassBoardBlank_o *v15; // x0
  const MethodInfo *v16; // x2
  int32_t ConnectType; // w0
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187D31 & 1) == 0 )
  {
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, handoverFlag);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v5);
    byte_4187D31 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v6;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_B2C434(v7, v8);
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v12;
      p_offset += 2;
      if ( v12 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL, v9);
  }
  v15 = (ClassBoardBlank_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))p_method)(
                               SquareModel_k__BackingField,
                               &linkSquares,
                               *(_QWORD *)(p_method + 8));
  ConnectType = ClassBoardBlank__GetConnectType(v15, linkSquares, v16);
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