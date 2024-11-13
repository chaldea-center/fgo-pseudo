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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t size; // w21
  int32_t v15; // w22
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v23; // x8
  __int64 v24; // x9
  IClassBoardSquareModel_c **v25; // x10
  __int64 v26; // x0
  int32_t v27; // w8
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B19663 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__,
      linkSquares,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v6, v7);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v10, v11);
    this = (ClassBoardBlank_o *)sub_1BCA7E0(
                                  &Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__,
                                  v12,
                                  v13);
    byte_4B19663 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !linkSquares )
    sub_1BCAA3C(this, linkSquares);
  size = linkSquares->fields._size;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)linkSquares,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v15 = 0;
  v30 = v29;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    if ( !v16 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_1BCAA3C(v16, v17);
    klass = v30.fields._current->klass;
    v20 = *(unsigned __int16 *)(&v30.fields._current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v30.fields._current->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset + 5].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(v30.fields._current, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      --size;
    }
    else
    {
      v23 = current->klass;
      v24 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
      {
        v25 = (IClassBoardSquareModel_c **)&v23->_1.interfaceOffsets->offset;
        while ( *(v25 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v24;
          v25 += 2;
          if ( !v24 )
            goto LABEL_18;
        }
        v26 = (__int64)&v23->vtable[*(_DWORD *)v25 + 13].method;
      }
      else
      {
LABEL_18:
        v26 = sub_1C1C7C0(current, IClassBoardSquareModel_TypeInfo, 13LL);
      }
      v15 += (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v26)(current, 0LL, *(_QWORD *)(v26 + 8)) & 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  if ( v15 < size )
    v27 = 1;
  else
    v27 = 2;
  if ( v15 )
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v14; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  ClassBoardBlank_o *v17; // x0
  const MethodInfo *v18; // x2
  int32_t ConnectType; // w0
  __int64 v20; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19661 & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v7, v8);
    byte_4B19661 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v9;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1BCAA3C(v10, v11);
  klass = SquareModel_k__BackingField->klass;
  v14 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  v17 = (ClassBoardBlank_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))p_method)(
                               SquareModel_k__BackingField,
                               &linkSquares,
                               *(_QWORD *)(p_method + 8));
  ConnectType = ClassBoardBlank__GetConnectType(v17, linkSquares, v18);
  v20 = 120LL;
  if ( (unsigned int)(ConnectType - 1) >= 2 )
    v20 = 128LL;
  ClassBoardSquare__PlaySimpleAnimation(
    (ClassBoardSquare_o *)this,
    *(System_String_o **)((char *)&this->klass + v20),
    0LL,
    0LL);
}


void __fastcall ClassBoardBlank__UpdateDraw(
        ClassBoardBlank_o *this,
        System_Nullable_AcquireFlag__o handoverFlag,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v14; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  ClassBoardBlank_o *v17; // x0
  const MethodInfo *v18; // x2
  int32_t ConnectType; // w0
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19662 & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, handoverFlag, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v7, v8);
    byte_4B19662 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_1BCAA2C)(
                                                      System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                      handoverFlag,
                                                      method,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v9;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1BCAA3C(v10, v11);
  klass = SquareModel_k__BackingField->klass;
  v14 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  v17 = (ClassBoardBlank_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))p_method)(
                               SquareModel_k__BackingField,
                               &linkSquares,
                               *(_QWORD *)(p_method + 8));
  ConnectType = ClassBoardBlank__GetConnectType(v17, linkSquares, v18);
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