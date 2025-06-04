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
  __int64 v12; // x1
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v18; // x8
  __int64 v19; // x9
  IClassBoardSquareModel_c **v20; // x10
  __int64 v21; // x0
  int32_t v22; // w8
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B0580D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, linkSquares);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v5);
    sub_1BC3008(&IClassBoardSquareModel_TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v7);
    this = (ClassBoardBlank_o *)sub_1BC3008(
                                  &Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__,
                                  v8);
    byte_4B0580D = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !linkSquares )
    sub_1BC3264(this, linkSquares);
  size = linkSquares->fields._size;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)linkSquares,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v10 = 0;
  v25 = v24;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    if ( !v11 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1BC3264(v11, v12);
    klass = v25.fields._current->klass;
    v15 = *(unsigned __int16 *)(&v25.fields._current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v25.fields._current->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset + 5].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C13570(v25.fields._current, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      --size;
    }
    else
    {
      v18 = current->klass;
      v19 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v20 = (IClassBoardSquareModel_c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v20 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v19;
          v20 += 2;
          if ( !v19 )
            goto LABEL_18;
        }
        v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 15].method;
      }
      else
      {
LABEL_18:
        v21 = sub_1C13570(current, IClassBoardSquareModel_TypeInfo, 15LL);
      }
      v10 += (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v21)(current, 0LL, *(_QWORD *)(v21 + 8)) & 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  if ( v10 < size )
    v22 = 1;
  else
    v22 = 2;
  if ( v10 )
    return v22;
  else
    return 0;
}


void __fastcall ClassBoardBlank__PlayClickedSe(ClassBoardBlank_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardBlank__PlayTransition(ClassBoardBlank_o *this, bool isQuick, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  IClassBoardSquareModel_c *klass; // x8
  __int64 v12; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  ClassBoardBlank_o *v15; // x0
  const MethodInfo *v16; // x2
  int32_t ConnectType; // w0
  __int64 v18; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B0580B & 1) == 0 )
  {
    sub_1BC3008(&IClassBoardSquareModel_TypeInfo, isQuick);
    sub_1BC3008(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v5);
    sub_1BC3008(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v6);
    byte_4B0580B = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v7;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1BC3264(v8, v9);
  klass = SquareModel_k__BackingField->klass;
  v12 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 17].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C13570(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 17LL);
  }
  v15 = (ClassBoardBlank_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))p_method)(
                               SquareModel_k__BackingField,
                               &linkSquares,
                               *(_QWORD *)(p_method + 8));
  ConnectType = ClassBoardBlank__GetConnectType(v15, linkSquares, v16);
  v18 = 120LL;
  if ( (unsigned int)(ConnectType - 1) >= 2 )
    v18 = 128LL;
  ClassBoardSquare__PlaySimpleAnimation(
    (ClassBoardSquare_o *)this,
    *(System_String_o **)((char *)&this->klass + v18),
    isQuick,
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
  __int64 v8; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v11; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  ClassBoardBlank_o *v14; // x0
  const MethodInfo *v15; // x2
  int32_t ConnectType; // w0
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B0580C & 1) == 0 )
  {
    sub_1BC3008(&IClassBoardSquareModel_TypeInfo, handoverFlag);
    sub_1BC3008(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v4);
    sub_1BC3008(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v5);
    byte_4B0580C = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v6;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1BC3264(v7, v8);
  klass = SquareModel_k__BackingField->klass;
  v11 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 17].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C13570(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 17LL);
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