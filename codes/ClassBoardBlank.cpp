void __fastcall ClassBoardBlank___ctor(ClassBoardBlank_o *this, const MethodInfo *method)
{
  ClassBoardSquare___ctor((ClassBoardSquare_o *)this, 0LL);
}


int32_t __fastcall ClassBoardBlank__GetConnectType(
        ClassBoardBlank_o *this,
        System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int32_t size; // w20
  int32_t v24; // w21
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v30; // x3
  Il2CppClass *v31; // x8
  unsigned __int64 v32; // x10
  IClassBoardSquareModel_c **v33; // x11
  __int64 v34; // x0
  System_Enum_o *v35; // x19
  System_Enum_o *v36; // x0
  _BOOL8 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x3
  int32_t v40; // w8
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-60h] BYREF
  int v44; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_42E9BDE & 1) == 0 )
  {
    sub_B5D5C4(&AcquireFlag_TypeInfo, (_DWORD)linkSquares, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v11, v12, v13);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v17, v18, v19);
    this = (ClassBoardBlank_o *)sub_B5D5C4(
                                  &Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__,
                                  v20,
                                  v21,
                                  v22);
    byte_42E9BDE = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( !linkSquares )
    sub_B5D69C(this, linkSquares);
  size = linkSquares->fields._size;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)linkSquares,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v24 = 0;
  v43 = v42;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    if ( !v37 )
      break;
    current = v43.fields.current;
    if ( !v43.fields.current )
      sub_B5D69C(v37, v38);
    klass = v43.fields.current->klass;
    if ( *(_WORD *)&v43.fields.current->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v27;
        p_offset += 4;
        if ( v27 >= *(unsigned __int16 *)&v43.fields.current->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset + 5].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(v43.fields.current, IClassBoardSquareModel_TypeInfo, 5LL, v39);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      --size;
    }
    else
    {
      v31 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v32 = 0LL;
        v33 = (IClassBoardSquareModel_c **)&v31->_1.interfaceOffsets->offset;
        while ( *(v33 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v32;
          v33 += 2;
          if ( v32 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v34 = (__int64)&v31->vtable[*(_DWORD *)v33 + 13].method;
      }
      else
      {
LABEL_17:
        v34 = sub_AF54C0(current, IClassBoardSquareModel_TypeInfo, 13LL, v30);
      }
      LODWORD(v42.fields.list) = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v34)(
                                   current,
                                   0LL,
                                   *(_QWORD *)(v34 + 8));
      v35 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v42);
      v44 = 1;
      v36 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v44);
      if ( !v35 )
        sub_B5D69C(v36, v36);
      v24 += System_Enum__HasFlag(v35, v36, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  if ( v24 < size )
    v40 = 1;
  else
    v40 = 2;
  if ( v24 )
    return v40;
  else
    return 0;
}


void __fastcall ClassBoardBlank__PlayClickedSe(ClassBoardBlank_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardBlank__PlayTransition(ClassBoardBlank_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v17; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  ClassBoardBlank_o *v20; // x0
  const MethodInfo *v21; // x2
  System_String_o *blackOutTransitionAnimationName; // x1
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9BDC & 1) == 0 )
  {
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v8, v9, v10);
    byte_42E9BDC = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v11;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_B5D69C(v12, v13);
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v17;
      p_offset += 2;
      if ( v17 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL, v14);
  }
  v20 = (ClassBoardBlank_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))p_method)(
                               SquareModel_k__BackingField,
                               &linkSquares,
                               *(_QWORD *)(p_method + 8));
  if ( (unsigned int)(ClassBoardBlank__GetConnectType(v20, linkSquares, v21) - 1) > 1 )
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v17; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  ClassBoardBlank_o *v20; // x0
  const MethodInfo *v21; // x2
  int32_t ConnectType; // w0
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9BDD & 1) == 0 )
  {
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, handoverFlag.fields.value, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v8, v9, v10);
    byte_42E9BDD = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v11;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_B5D69C(v12, v13);
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v17;
      p_offset += 2;
      if ( v17 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL, v14);
  }
  v20 = (ClassBoardBlank_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))p_method)(
                               SquareModel_k__BackingField,
                               &linkSquares,
                               *(_QWORD *)(p_method + 8));
  ConnectType = ClassBoardBlank__GetConnectType(v20, linkSquares, v21);
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