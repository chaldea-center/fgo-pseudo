void ClassBoardBlank___ctor(ClassBoardBlank_o *this, const MethodInfo *method)
{
  ClassBoardSquare___ctor((ClassBoardSquare_o *)this, 0);
}


int32_t ClassBoardBlank__GetConnectType(
        ClassBoardBlank_o *this,
        System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares,
        const MethodInfo *method)
{
  int32_t size; // w21
  int32_t v5; // w22
  _BOOL8 v6; // x0
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  Il2CppClass *v12; // x8
  __int64 v13; // x9
  IClassBoardSquareModel_c **v14; // x10
  __int64 v15; // x0
  int32_t v16; // w8
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C46971 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
    this = (ClassBoardBlank_o *)sub_1C37058(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__);
    byte_4C46971 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !linkSquares )
    sub_1C372B4(this);
  size = linkSquares->fields._size;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)linkSquares,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v5 = 0;
  v19 = v18;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    if ( !v6 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1C372B4(v6);
    klass = v19.fields._current->klass;
    v9 = *(unsigned __int16 *)&v19.fields._current->klass->_2.rank;
    if ( *(_WORD *)&v19.fields._current->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset + 5];
    }
    else
    {
LABEL_11:
      v11 = sub_1C87870(v19.fields._current, IClassBoardSquareModel_TypeInfo, 5);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v11)(current, *(_QWORD *)(v11 + 8)) & 1) != 0 )
    {
      --size;
    }
    else
    {
      v12 = current->klass;
      v13 = *(unsigned __int16 *)&current->klass->_2.rank;
      if ( *(_WORD *)&current->klass->_2.rank )
      {
        v14 = (IClassBoardSquareModel_c **)&v12->_1.interfaceOffsets->offset;
        while ( *(v14 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v13;
          v14 += 2;
          if ( !v13 )
            goto LABEL_18;
        }
        v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 15];
      }
      else
      {
LABEL_18:
        v15 = sub_1C87870(current, IClassBoardSquareModel_TypeInfo, 15);
      }
      v5 += (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v15)(current, 0, *(_QWORD *)(v15 + 8)) & 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  if ( v5 < size )
    v16 = 1;
  else
    v16 = 2;
  if ( v5 )
    return v16;
  else
    return 0;
}


void ClassBoardBlank__PlayClickedSe(ClassBoardBlank_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardBlank__PlayTransition(ClassBoardBlank_o *this, bool isQuick, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 v6; // x0
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  IClassBoardSquareModel_c *klass; // x8
  __int64 v9; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v11; // x0
  ClassBoardBlank_o *v12; // x0
  const MethodInfo *v13; // x2
  int32_t ConnectType; // w0
  __int64 v15; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C4696F & 1) == 0 )
  {
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_1C37058(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_4C4696F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v5;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1C372B4(v6);
  klass = SquareModel_k__BackingField->klass;
  v9 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v9;
      p_offset += 2;
      if ( !v9 )
        goto LABEL_8;
    }
    v11 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 17];
  }
  else
  {
LABEL_8:
    v11 = sub_1C87870(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 17);
  }
  v12 = (ClassBoardBlank_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))v11)(
                               SquareModel_k__BackingField,
                               &linkSquares,
                               *(_QWORD *)(v11 + 8));
  ConnectType = ClassBoardBlank__GetConnectType(v12, linkSquares, v13);
  v15 = 120;
  if ( (unsigned int)(ConnectType - 1) >= 2 )
    v15 = 128;
  ClassBoardSquare__PlaySimpleAnimation(
    (ClassBoardSquare_o *)this,
    *(System_String_o **)((char *)&this->klass + v15),
    isQuick,
    0,
    0);
}


void ClassBoardBlank__UpdateDraw(
        ClassBoardBlank_o *this,
        System_Nullable_AcquireFlag__o handoverFlag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x0
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v8; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v10; // x0
  ClassBoardBlank_o *v11; // x0
  const MethodInfo *v12; // x2
  int32_t ConnectType; // w0
  System_Collections_Generic_List_IClassBoardSquareModel__o *linkSquares; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C46970 & 1) == 0 )
  {
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_1C37058(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_4C46970 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  linkSquares = (System_Collections_Generic_List_IClassBoardSquareModel__o *)v4;
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1C372B4(v5);
  klass = SquareModel_k__BackingField->klass;
  v8 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v8;
      p_offset += 2;
      if ( !v8 )
        goto LABEL_8;
    }
    v10 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 17];
  }
  else
  {
LABEL_8:
    v10 = sub_1C87870(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 17);
  }
  v11 = (ClassBoardBlank_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))v10)(
                               SquareModel_k__BackingField,
                               &linkSquares,
                               *(_QWORD *)(v10 + 8));
  ConnectType = ClassBoardBlank__GetConnectType(v11, linkSquares, v12);
  if ( ConnectType )
  {
    if ( ConnectType == 2 )
      ClassBoardSquare__DrawAcquired((ClassBoardSquare_o *)this, 0);
    else
      ClassBoardSquare__DrawAvailable((ClassBoardSquare_o *)this, 0);
  }
  else
  {
    ClassBoardSquare__DrawNotConnected((ClassBoardSquare_o *)this, 0);
  }
}