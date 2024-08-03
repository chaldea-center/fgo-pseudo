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
  int32_t size; // w21
  int32_t v10; // w22
  _BOOL8 v11; // x0
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v17; // x8
  __int64 v18; // x9
  IClassBoardSquareModel_c **v19; // x10
  __int64 v20; // x0
  int32_t v21; // w8
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FF679 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, linkSquares);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v5);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v7);
    this = (ClassBoardBlank_o *)sub_1B640C8(
                                  &Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__,
                                  v8);
    byte_49FF679 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !linkSquares )
    sub_1B64324(this);
  size = linkSquares->fields._size;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)linkSquares,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v10 = 0;
  v24 = v23;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    if ( !v11 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1B64324(v11);
    klass = v24.fields._current->klass;
    v14 = *(unsigned __int16 *)(&v24.fields._current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v24.fields._current->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset + 5].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BB60A8(v24.fields._current, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      --size;
    }
    else
    {
      v17 = current->klass;
      v18 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v19 = (IClassBoardSquareModel_c **)&v17->_1.interfaceOffsets->offset;
        while ( *(v19 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v18;
          v19 += 2;
          if ( !v18 )
            goto LABEL_18;
        }
        v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 13].method;
      }
      else
      {
LABEL_18:
        v20 = sub_1BB60A8(current, IClassBoardSquareModel_TypeInfo, 13LL);
      }
      v10 += (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v20)(current, 0LL, *(_QWORD *)(v20 + 8)) & 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  if ( v10 < size )
    v21 = 1;
  else
    v21 = 2;
  if ( v10 )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 v7; // x0
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v10; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  ClassBoardBlank_o *v13; // x0
  const MethodInfo *v14; // x2
  int32_t ConnectType; // w0
  __int64 v16; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FF677 & 1) == 0 )
  {
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v5);
    byte_49FF677 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v6;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1B64324(v7);
  klass = SquareModel_k__BackingField->klass;
  v10 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v10;
      p_offset += 2;
      if ( !v10 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  v13 = (ClassBoardBlank_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))p_method)(
                               SquareModel_k__BackingField,
                               &linkSquares,
                               *(_QWORD *)(p_method + 8));
  ConnectType = ClassBoardBlank__GetConnectType(v13, linkSquares, v14);
  v16 = 120LL;
  if ( (unsigned int)(ConnectType - 1) >= 2 )
    v16 = 128LL;
  ClassBoardSquare__PlaySimpleAnimation(
    (ClassBoardSquare_o *)this,
    *(System_String_o **)((char *)&this->klass + v16),
    0LL,
    0LL);
}


void __fastcall ClassBoardBlank__UpdateDraw(
        ClassBoardBlank_o *this,
        System_Nullable_AcquireFlag__o handoverFlag,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 v7; // x0
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v10; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  ClassBoardBlank_o *v13; // x0
  const MethodInfo *v14; // x2
  int32_t ConnectType; // w0
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FF678 & 1) == 0 )
  {
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, handoverFlag);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v5);
    byte_49FF678 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_1B64314)(
                                                      System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                      handoverFlag,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v6;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1B64324(v7);
  klass = SquareModel_k__BackingField->klass;
  v10 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v10;
      p_offset += 2;
      if ( !v10 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL);
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