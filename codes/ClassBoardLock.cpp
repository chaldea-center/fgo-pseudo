// attributes: thunk
void __fastcall ClassBoardLock___ctor(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardSquare___ctor((ClassBoardSquare_o *)this, method);
}


void __fastcall ClassBoardLock__Awake(ClassBoardLock_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardLock__DrawNotCond(ClassBoardLock_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ClassBoardSquare_o *v4; // x0
  const MethodInfo *v5; // x3
  ClassBoardSquare_o *v6; // x0
  const MethodInfo *v7; // x3
  ClassBoardSquare_o *v8; // x0
  const MethodInfo *v9; // x3
  ClassBoardSquare_o *v10; // x0
  const MethodInfo *v11; // x3
  ClassBoardSquare_o *v12; // x0
  const MethodInfo *v13; // x3

  ClassBoardSquare__SetActiveArrayObject((ClassBoardSquare_o *)this, this->fields.acquiredObjects, 0, v2);
  ClassBoardSquare__SetActiveArrayObject(v4, this->fields.unacquiredObjects, 0, v5);
  ClassBoardSquare__SetActiveArrayObject(v6, this->fields.availableObjects, 0, v7);
  ClassBoardSquare__SetActiveArrayObject(v8, this->fields.notConnectedObjects, 0, v9);
  ClassBoardSquare__SetActiveArrayObject(v10, this->fields.notCondObjects, 1, v11);
  ClassBoardSquare__SetActiveObject(v12, this->fields.availableEffect, 0, v13);
}


void __fastcall ClassBoardLock__PlayClickedSe(ClassBoardLock_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ClassBoardLock_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x19
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v10; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  System_Enum_o *v13; // x19
  _BOOL8 HasFlag; // x0
  const MethodInfo *v15; // x1
  int v16; // [xsp+8h] [xbp-18h] BYREF
  int v17; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42EA816 & 1) == 0 )
  {
    sub_B5D5C4(&AcquireFlag_TypeInfo, (_DWORD)method, v2, v3);
    this = (ClassBoardLock_o *)sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v5, v6, v7);
    byte_42EA816 = 1;
  }
  SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_14;
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
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL, v3);
  }
  v17 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
          SquareModel_k__BackingField,
          0LL,
          *(_QWORD *)(p_method + 8));
  v13 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v17);
  v16 = 1;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v16);
  if ( !v13 )
LABEL_14:
    sub_B5D69C(this, method);
  HasFlag = System_Enum__HasFlag(v13, (System_Enum_o *)this, 0LL);
  if ( !HasFlag )
    ClassBoardSquare__PlayClickedSe((ClassBoardSquare_o *)HasFlag, v15);
}


void __fastcall ClassBoardLock__PlayReleaseEffect(ClassBoardLock_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  IClassBoardLockModel_o *LockModel; // x0
  __int64 v21; // x1
  __int64 v22; // x3
  IClassBoardLockModel_c *klass; // x8
  IClassBoardLockModel_o *v24; // x20
  unsigned __int64 v25; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *v28; // x0
  System_String_o *v29; // x20
  System_Action_o *v30; // x21
  const MethodInfo *v31; // x3
  int v32; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EA817 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, v5, v6, v7);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23963/*"{0}{1}"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_15174/*"Unlock"*/, v17, v18, v19);
    byte_42EA817 = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    sub_B5D69C(0LL, v21);
  klass = LockModel->klass;
  v24 = LockModel;
  if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v25;
      p_offset += 2;
      if ( v25 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(LockModel, IClassBoardSquareModel_TypeInfo, 2LL, v22);
  }
  v32 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(v24, *(_QWORD *)(p_method + 8));
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v29 = System_String__Format_44573324(
          (System_String_o *)StringLiteral_23963/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_15174/*"Unlock"*/,
          v28,
          0LL);
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, v29, v30, v31);
}


void __fastcall ClassBoardLock__SetupIcon(ClassBoardLock_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  MethodInfo *LockModel; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v27; // x20
  unsigned __int64 v28; // x10
  IClassBoardSquareModel_c **v29; // x11
  __int64 v30; // x0
  struct UISprite_array *iconSpritesNormal; // x23
  __int64 v32; // x8
  int v33; // w20
  unsigned __int64 v34; // x24
  UISprite_o *v35; // x21
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x22
  Il2CppObject *v37; // x0
  struct UISprite_array *iconSpritesOn; // x23
  __int64 v39; // x8
  unsigned __int64 v40; // x24
  UISprite_o *v41; // x21
  AtlasManagerUnit_o *v42; // x22
  Il2CppObject *v43; // x0
  struct UISprite_array *iconSpritesOff; // x23
  __int64 v45; // x8
  unsigned __int64 v46; // x24
  UISprite_o *v47; // x21
  AtlasManagerUnit_o *v48; // x22
  Il2CppObject *v49; // x0
  struct UISprite_array *iconSpritesLock; // x22
  __int64 v51; // x8
  unsigned __int64 v52; // x23
  UISprite_o *v53; // x21
  struct UISprite_array *iconSpriteGlow; // x22
  __int64 v55; // x8
  unsigned __int64 v56; // x23
  UISprite_o *v57; // x19
  AtlasManagerUnit_o *v58; // x21
  Il2CppObject *v59; // x0
  __int64 v60; // x0
  int v61; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EA814 & 1) == 0 )
  {
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_20562/*"lock_light_{0}"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_20565/*"lock_stopper"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_20564/*"lock_on_{0}"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_20563/*"lock_off_{0}"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_20566/*"lock_{0}"*/, v20, v21, v22);
    byte_42EA814 = 1;
  }
  LockModel = (MethodInfo *)ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    goto LABEL_42;
  methodPointer = LockModel->methodPointer;
  v27 = LockModel;
  if ( *((_WORD *)LockModel->methodPointer + 149) )
  {
    v28 = 0LL;
    v29 = (IClassBoardSquareModel_c **)(*((_QWORD *)methodPointer + 22) + 8LL);
    while ( *(v29 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v28;
      v29 += 2;
      if ( v28 >= *((unsigned __int16 *)LockModel->methodPointer + 149) )
        goto LABEL_8;
    }
    v30 = (__int64)methodPointer + 16 * *(_DWORD *)v29 + 344;
  }
  else
  {
LABEL_8:
    v30 = sub_AF54C0(LockModel, IClassBoardSquareModel_TypeInfo, 2LL, v25);
  }
  LockModel = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  iconSpritesNormal = this->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_42;
  v32 = *(_QWORD *)&iconSpritesNormal->max_length;
  v33 = (int)LockModel;
  if ( (int)v32 >= 1 )
  {
    v34 = 0LL;
    while ( v34 < (unsigned int)v32 )
    {
      v35 = iconSpritesNormal->m_Items[v34];
      IconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v61 = v33;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20566/*"lock_{0}"*/, v37, 0LL);
      if ( !IconAtlasManagerUnit )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(IconAtlasManagerUnit, v35, (System_String_o *)LockModel, 0LL);
      LODWORD(v32) = iconSpritesNormal->max_length;
      if ( (__int64)++v34 >= (int)v32 )
        goto LABEL_16;
    }
LABEL_41:
    v60 = sub_B5D6C8(LockModel);
    sub_B5D668(v60, 0LL);
  }
LABEL_16:
  iconSpritesOn = this->fields.iconSpritesOn;
  if ( !iconSpritesOn )
    goto LABEL_42;
  v39 = *(_QWORD *)&iconSpritesOn->max_length;
  if ( (int)v39 >= 1 )
  {
    v40 = 0LL;
    while ( v40 < (unsigned int)v39 )
    {
      v41 = iconSpritesOn->m_Items[v40];
      v42 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v61 = v33;
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20564/*"lock_on_{0}"*/, v43, 0LL);
      if ( !v42 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v42, v41, (System_String_o *)LockModel, 0LL);
      LODWORD(v39) = iconSpritesOn->max_length;
      if ( (__int64)++v40 >= (int)v39 )
        goto LABEL_22;
    }
    goto LABEL_41;
  }
LABEL_22:
  iconSpritesOff = this->fields.iconSpritesOff;
  if ( !iconSpritesOff )
    goto LABEL_42;
  v45 = *(_QWORD *)&iconSpritesOff->max_length;
  if ( (int)v45 >= 1 )
  {
    v46 = 0LL;
    while ( v46 < (unsigned int)v45 )
    {
      v47 = iconSpritesOff->m_Items[v46];
      v48 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v61 = v33;
      v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20563/*"lock_off_{0}"*/, v49, 0LL);
      if ( !v48 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v48, v47, (System_String_o *)LockModel, 0LL);
      LODWORD(v45) = iconSpritesOff->max_length;
      if ( (__int64)++v46 >= (int)v45 )
        goto LABEL_28;
    }
    goto LABEL_41;
  }
LABEL_28:
  iconSpritesLock = this->fields.iconSpritesLock;
  if ( !iconSpritesLock )
    goto LABEL_42;
  v51 = *(_QWORD *)&iconSpritesLock->max_length;
  if ( (int)v51 >= 1 )
  {
    v52 = 0LL;
    while ( v52 < (unsigned int)v51 )
    {
      v53 = iconSpritesLock->m_Items[v52];
      LockModel = (MethodInfo *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      if ( !LockModel )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(
                                  (AtlasManagerUnit_o *)LockModel,
                                  v53,
                                  (System_String_o *)StringLiteral_20565/*"lock_stopper"*/,
                                  0LL);
      LODWORD(v51) = iconSpritesLock->max_length;
      if ( (__int64)++v52 >= (int)v51 )
        goto LABEL_34;
    }
    goto LABEL_41;
  }
LABEL_34:
  iconSpriteGlow = this->fields.iconSpriteGlow;
  if ( !iconSpriteGlow )
LABEL_42:
    sub_B5D69C(LockModel, v24);
  v55 = *(_QWORD *)&iconSpriteGlow->max_length;
  if ( (int)v55 >= 1 )
  {
    v56 = 0LL;
    while ( v56 < (unsigned int)v55 )
    {
      v57 = iconSpriteGlow->m_Items[v56];
      v58 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v61 = v33;
      v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20562/*"lock_light_{0}"*/, v59, 0LL);
      if ( !v58 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v58, v57, (System_String_o *)LockModel, 0LL);
      LODWORD(v55) = iconSpriteGlow->max_length;
      if ( (__int64)++v56 >= (int)v55 )
        return;
    }
    goto LABEL_41;
  }
}


void __fastcall ClassBoardLock__UpdateDraw(
        ClassBoardLock_o *this,
        System_Nullable_AcquireFlag__o handoverFlag,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardLock_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  ClassBoardSquare_o *Value; // x0
  const MethodInfo *v16; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v19; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v22; // w20
  const MethodInfo *v23; // x1
  System_Enum_o *v24; // x21
  const MethodInfo *v25; // x1
  System_Enum_o *v26; // x21
  const MethodInfo *v27; // x1
  System_Enum_o *v28; // x21
  const MethodInfo *v29; // x1
  System_Enum_o *v30; // x20
  const MethodInfo *v31; // x1
  int v32; // [xsp+0h] [xbp-30h] BYREF
  int v33; // [xsp+4h] [xbp-2Ch] BYREF
  System_Nullable_AcquireFlag__o v34; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_T__o v35; // 0:x0.16

  v5 = this;
  v34 = handoverFlag;
  if ( (byte_42EA815 & 1) == 0 )
  {
    sub_B5D5C4(&AcquireFlag_TypeInfo, handoverFlag.fields.value, (_DWORD)method, v3);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Nullable_AcquireFlag__get_HasValue__, v9, v10, v11);
    this = (ClassBoardLock_o *)sub_B5D5C4(&Method_System_Nullable_AcquireFlag__get_Value__, v12, v13, v14);
    byte_42EA815 = 1;
  }
  if ( (*(_QWORD *)&handoverFlag & 0xFF00000000LL) != 0 )
  {
    v35.fields.value = (Il2CppObject *)&v34;
    *(_QWORD *)&v35.fields.has_value = Method_System_Nullable_AcquireFlag__get_Value__;
    Value = (ClassBoardSquare_o *)System_Nullable_Int32Enum___get_Value(v35, (const MethodInfo_234B6CC *)method);
  }
  else
  {
    SquareModel_k__BackingField = v5->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      goto LABEL_28;
    klass = SquareModel_k__BackingField->klass;
    if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v19;
        p_offset += 2;
        if ( v19 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(v5->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL, v3);
    }
    Value = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
                                    SquareModel_k__BackingField,
                                    0LL,
                                    *(_QWORD *)(p_method + 8));
  }
  v22 = (int)Value;
  ClassBoardSquare__SetActiveArrayObject(Value, v5->fields.notCondObjects, 0, v16);
  if ( !v22 )
  {
    ClassBoardSquare__DrawAvailable((ClassBoardSquare_o *)v5, v23);
    return;
  }
  v33 = v22;
  v24 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v33);
  v32 = 1;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v32);
  if ( !v24 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v24, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawAcquired((ClassBoardSquare_o *)v5, v25);
    return;
  }
  v33 = v22;
  v26 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v33);
  v32 = 2;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v32);
  if ( !v26 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v26, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawNotConnected((ClassBoardSquare_o *)v5, v27);
    return;
  }
  v33 = v22;
  v28 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v33);
  v32 = 4;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v32);
  if ( !v28 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v28, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardLock__DrawNotCond(v5, v29);
    return;
  }
  v33 = v22;
  v30 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v33);
  v32 = 16;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v32);
  if ( !v30 )
LABEL_28:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(this, handoverFlag);
  if ( System_Enum__HasFlag(v30, (System_Enum_o *)this, 0LL) )
    ClassBoardSquare__DrawUnacquired((ClassBoardSquare_o *)v5, v31);
}


void __fastcall ClassBoardLock___PlayReleaseEffect_b__13_0(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_B5D69C(0LL, method);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, method);
}


IClassBoardLockModel_o *__fastcall ClassBoardLock__get_LockModel(ClassBoardLock_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA813 & 1) == 0 )
  {
    sub_B5D5C4(&IClassBoardLockModel_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA813 = 1;
  }
  return (IClassBoardLockModel_o *)sub_B5D684(this->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo);
}