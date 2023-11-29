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
  Il2CppClass *v17; // x8
  unsigned __int64 v18; // x10
  IClassBoardSquareModel_c **v19; // x11
  __int64 v20; // x0
  System_Enum_o *v21; // x19
  System_Enum_o *v22; // x1
  int32_t v23; // w8
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF
  int v27; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_40FAFA1 & 1) == 0 )
  {
    sub_B16FFC(&AcquireFlag_TypeInfo, linkSquares);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v6);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v9);
    byte_40FAFA1 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !linkSquares )
    sub_B170D4();
  size = linkSquares->fields._size;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)linkSquares,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v11 = 0;
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__) )
  {
    current = v26.fields.current;
    if ( !v26.fields.current )
      sub_B170D4();
    klass = v26.fields.current->klass;
    if ( *(_WORD *)&v26.fields.current->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&v26.fields.current->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset + 5].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(v26.fields.current, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      --size;
    }
    else
    {
      v17 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v18 = 0LL;
        v19 = (IClassBoardSquareModel_c **)&v17->_1.interfaceOffsets->offset;
        while ( *(v19 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v18;
          v19 += 2;
          if ( v18 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 13].method;
      }
      else
      {
LABEL_17:
        v20 = sub_AAFEF8(current, IClassBoardSquareModel_TypeInfo, 13LL);
      }
      LODWORD(v25.fields.list) = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v20)(
                                   current,
                                   0LL,
                                   *(_QWORD *)(v20 + 8));
      v21 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v25);
      v27 = 1;
      v22 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v27);
      if ( !v21 )
        sub_B170D4();
      v11 += System_Enum__HasFlag(v21, v22, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  if ( v11 < size )
    v23 = 1;
  else
    v23 = 2;
  if ( v11 )
    return v23;
  else
    return 0;
}


void __fastcall ClassBoardBlank__PlayClickedSe(ClassBoardBlank_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardBlank__PlayTransition(ClassBoardBlank_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v11; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  ClassBoardBlank_o *v14; // x0
  const MethodInfo *v15; // x2
  System_String_o *blackOutTransitionAnimationName; // x1
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FAF9F & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v7);
    byte_40FAF9F = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v8;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_B170D4();
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
    p_method = sub_AAFEF8(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v11; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  ClassBoardBlank_o *v14; // x0
  const MethodInfo *v15; // x2
  int32_t ConnectType; // w0
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FAFA0 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, handoverFlag);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v7);
    byte_40FAFA0 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_B170CC)(
                                                                                                 System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                                                                 handoverFlag,
                                                                                                 method,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v8;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_B170D4();
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
    p_method = sub_AAFEF8(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  v14 = (ClassBoardBlank_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))p_method)(
                               SquareModel_k__BackingField,
                               &linkSquares,
                               *(_QWORD *)(p_method + 8));
  ConnectType = ClassBoardBlank__GetConnectType(v14, linkSquares, v15);
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