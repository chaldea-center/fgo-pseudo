void __fastcall ClassBoardLock___ctor(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardSquare___ctor((ClassBoardSquare_o *)this, 0LL);
}


void __fastcall ClassBoardLock__Awake(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardSquare__Awake((ClassBoardSquare_o *)this, 0LL);
}


void __fastcall ClassBoardLock__DrawNotCond(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardSquare__SetActiveArrayObject((ClassBoardSquare_o *)this, this->fields.acquiredObjects, 0, 0LL);
  ClassBoardSquare__SetActiveArrayObject((ClassBoardSquare_o *)this, this->fields.unacquiredObjects, 0, 0LL);
  ClassBoardSquare__SetActiveArrayObject((ClassBoardSquare_o *)this, this->fields.availableObjects, 0, 0LL);
  ClassBoardSquare__SetActiveArrayObject((ClassBoardSquare_o *)this, this->fields.notConnectedObjects, 0, 0LL);
  ClassBoardSquare__SetActiveArrayObject((ClassBoardSquare_o *)this, this->fields.notCondObjects, 1, 0LL);
  ClassBoardSquare__SetActiveObject((ClassBoardSquare_o *)this, this->fields.availableEffect, 0, 0LL);
}


void __fastcall ClassBoardLock__PlayClickedSe(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardSquare_o *v2; // x19
  __int64 v3; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v6; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  System_Enum_o *v9; // x20
  int v10; // [xsp+8h] [xbp-18h] BYREF
  int v11; // [xsp+Ch] [xbp-14h] BYREF

  v2 = (ClassBoardSquare_o *)this;
  if ( (byte_4217B30 & 1) == 0 )
  {
    sub_B0D8A4(&AcquireFlag_TypeInfo, method);
    this = (ClassBoardLock_o *)sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v3);
    byte_4217B30 = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_14;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v6;
      p_offset += 2;
      if ( v6 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v11 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
          SquareModel_k__BackingField,
          0LL,
          *(_QWORD *)(p_method + 8));
  v9 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v11);
  v10 = 1;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v10);
  if ( !v9 )
LABEL_14:
    sub_B0D97C(this);
  if ( !System_Enum__HasFlag(v9, (System_Enum_o *)this, 0LL) )
    ClassBoardSquare__PlayClickedSe(v2, 0LL);
}


void __fastcall ClassBoardLock__PlayReleaseEffect(ClassBoardLock_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  IClassBoardLockModel_o *LockModel; // x0
  IClassBoardLockModel_c *klass; // x8
  IClassBoardLockModel_o *v10; // x20
  unsigned __int64 v11; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x21
  int v19; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4217B31 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, v3);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v4);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_23729/*"{0}{1}"*/, v6);
    sub_B0D8A4(&StringLiteral_15062/*"Unlock"*/, v7);
    byte_4217B31 = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    sub_B0D97C(0LL);
  klass = LockModel->klass;
  v10 = LockModel;
  if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v11;
      p_offset += 2;
      if ( v11 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
  }
  v19 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(v10, *(_QWORD *)(p_method + 8));
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v15 = System_String__Format_43845440(
          (System_String_o *)StringLiteral_23729/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_15062/*"Unlock"*/,
          v14,
          0LL);
  v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, v15, v18, 0LL);
}


void __fastcall ClassBoardLock__SetupIcon(ClassBoardLock_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MethodInfo *LockModel; // x0
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v11; // x20
  unsigned __int64 v12; // x10
  IClassBoardSquareModel_c **v13; // x11
  __int64 v14; // x0
  struct UISprite_array *iconSpritesNormal; // x23
  __int64 v16; // x8
  int v17; // w20
  unsigned __int64 v18; // x24
  UISprite_o *v19; // x21
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x22
  Il2CppObject *v21; // x0
  struct UISprite_array *iconSpritesOn; // x23
  __int64 v23; // x8
  unsigned __int64 v24; // x24
  UISprite_o *v25; // x21
  AtlasManagerUnit_o *v26; // x22
  Il2CppObject *v27; // x0
  struct UISprite_array *iconSpritesOff; // x23
  __int64 v29; // x8
  unsigned __int64 v30; // x24
  UISprite_o *v31; // x21
  AtlasManagerUnit_o *v32; // x22
  Il2CppObject *v33; // x0
  struct UISprite_array *iconSpritesLock; // x22
  __int64 v35; // x8
  unsigned __int64 v36; // x23
  UISprite_o *v37; // x21
  struct UISprite_array *iconSpriteGlow; // x22
  __int64 v39; // x8
  unsigned __int64 v40; // x23
  UISprite_o *v41; // x19
  AtlasManagerUnit_o *v42; // x21
  Il2CppObject *v43; // x0
  __int64 v44; // x0
  int v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4217B2E & 1) == 0 )
  {
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_20366/*"lock_light_{0}"*/, v4);
    sub_B0D8A4(&StringLiteral_20369/*"lock_stopper"*/, v5);
    sub_B0D8A4(&StringLiteral_20368/*"lock_on_{0}"*/, v6);
    sub_B0D8A4(&StringLiteral_20367/*"lock_off_{0}"*/, v7);
    sub_B0D8A4(&StringLiteral_20370/*"lock_{0}"*/, v8);
    byte_4217B2E = 1;
  }
  LockModel = (MethodInfo *)ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    goto LABEL_42;
  methodPointer = LockModel->methodPointer;
  v11 = LockModel;
  if ( *((_WORD *)LockModel->methodPointer + 149) )
  {
    v12 = 0LL;
    v13 = (IClassBoardSquareModel_c **)(*((_QWORD *)methodPointer + 22) + 8LL);
    while ( *(v13 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v12;
      v13 += 2;
      if ( v12 >= *((unsigned __int16 *)LockModel->methodPointer + 149) )
        goto LABEL_8;
    }
    v14 = (__int64)methodPointer + 16 * *(_DWORD *)v13 + 344;
  }
  else
  {
LABEL_8:
    v14 = sub_AA67A0(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
  }
  LockModel = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
  iconSpritesNormal = this->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_42;
  v16 = *(_QWORD *)&iconSpritesNormal->max_length;
  v17 = (int)LockModel;
  if ( (int)v16 >= 1 )
  {
    v18 = 0LL;
    while ( v18 < (unsigned int)v16 )
    {
      v19 = iconSpritesNormal->m_Items[v18];
      IconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v45 = v17;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20370/*"lock_{0}"*/, v21, 0LL);
      if ( !IconAtlasManagerUnit )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(IconAtlasManagerUnit, v19, (System_String_o *)LockModel, 0LL);
      LODWORD(v16) = iconSpritesNormal->max_length;
      if ( (__int64)++v18 >= (int)v16 )
        goto LABEL_16;
    }
LABEL_41:
    v44 = sub_B0D9A8(LockModel);
    sub_B0D948(v44, 0LL);
  }
LABEL_16:
  iconSpritesOn = this->fields.iconSpritesOn;
  if ( !iconSpritesOn )
    goto LABEL_42;
  v23 = *(_QWORD *)&iconSpritesOn->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    while ( v24 < (unsigned int)v23 )
    {
      v25 = iconSpritesOn->m_Items[v24];
      v26 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v45 = v17;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20368/*"lock_on_{0}"*/, v27, 0LL);
      if ( !v26 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v26, v25, (System_String_o *)LockModel, 0LL);
      LODWORD(v23) = iconSpritesOn->max_length;
      if ( (__int64)++v24 >= (int)v23 )
        goto LABEL_22;
    }
    goto LABEL_41;
  }
LABEL_22:
  iconSpritesOff = this->fields.iconSpritesOff;
  if ( !iconSpritesOff )
    goto LABEL_42;
  v29 = *(_QWORD *)&iconSpritesOff->max_length;
  if ( (int)v29 >= 1 )
  {
    v30 = 0LL;
    while ( v30 < (unsigned int)v29 )
    {
      v31 = iconSpritesOff->m_Items[v30];
      v32 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v45 = v17;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20367/*"lock_off_{0}"*/, v33, 0LL);
      if ( !v32 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v32, v31, (System_String_o *)LockModel, 0LL);
      LODWORD(v29) = iconSpritesOff->max_length;
      if ( (__int64)++v30 >= (int)v29 )
        goto LABEL_28;
    }
    goto LABEL_41;
  }
LABEL_28:
  iconSpritesLock = this->fields.iconSpritesLock;
  if ( !iconSpritesLock )
    goto LABEL_42;
  v35 = *(_QWORD *)&iconSpritesLock->max_length;
  if ( (int)v35 >= 1 )
  {
    v36 = 0LL;
    while ( v36 < (unsigned int)v35 )
    {
      v37 = iconSpritesLock->m_Items[v36];
      LockModel = (MethodInfo *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      if ( !LockModel )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(
                                  (AtlasManagerUnit_o *)LockModel,
                                  v37,
                                  (System_String_o *)StringLiteral_20369/*"lock_stopper"*/,
                                  0LL);
      LODWORD(v35) = iconSpritesLock->max_length;
      if ( (__int64)++v36 >= (int)v35 )
        goto LABEL_34;
    }
    goto LABEL_41;
  }
LABEL_34:
  iconSpriteGlow = this->fields.iconSpriteGlow;
  if ( !iconSpriteGlow )
LABEL_42:
    sub_B0D97C(LockModel);
  v39 = *(_QWORD *)&iconSpriteGlow->max_length;
  if ( (int)v39 >= 1 )
  {
    v40 = 0LL;
    while ( v40 < (unsigned int)v39 )
    {
      v41 = iconSpriteGlow->m_Items[v40];
      v42 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v45 = v17;
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20366/*"lock_light_{0}"*/, v43, 0LL);
      if ( !v42 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v42, v41, (System_String_o *)LockModel, 0LL);
      LODWORD(v39) = iconSpriteGlow->max_length;
      if ( (__int64)++v40 >= (int)v39 )
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
  ClassBoardLock_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t Value; // w0
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v11; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v14; // w20
  System_Enum_o *v15; // x21
  System_Enum_o *v16; // x21
  System_Enum_o *v17; // x21
  const MethodInfo *v18; // x1
  System_Enum_o *v19; // x20
  int v20; // [xsp+0h] [xbp-30h] BYREF
  int v21; // [xsp+4h] [xbp-2Ch] BYREF
  System_Nullable_AcquireFlag__o v22; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_T__o v23; // 0:x0.16

  v4 = this;
  v22 = handoverFlag;
  if ( (byte_4217B2F & 1) == 0 )
  {
    sub_B0D8A4(&AcquireFlag_TypeInfo, handoverFlag);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Nullable_AcquireFlag__get_HasValue__, v6);
    this = (ClassBoardLock_o *)sub_B0D8A4(&Method_System_Nullable_AcquireFlag__get_Value__, v7);
    byte_4217B2F = 1;
  }
  if ( (*(_QWORD *)&handoverFlag & 0xFF00000000LL) != 0 )
  {
    v23.fields.value = (Il2CppObject *)&v22;
    *(_QWORD *)&v23.fields.has_value = Method_System_Nullable_AcquireFlag__get_Value__;
    Value = System_Nullable_Int32Enum___get_Value(v23, (const MethodInfo_297FD54 *)method);
  }
  else
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      goto LABEL_28;
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    Value = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
              SquareModel_k__BackingField,
              0LL,
              *(_QWORD *)(p_method + 8));
  }
  v14 = Value;
  ClassBoardSquare__SetActiveArrayObject((ClassBoardSquare_o *)v4, v4->fields.notCondObjects, 0, 0LL);
  if ( !v14 )
  {
    ClassBoardSquare__DrawAvailable((ClassBoardSquare_o *)v4, 0LL);
    return;
  }
  v21 = v14;
  v15 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v21);
  v20 = 1;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v20);
  if ( !v15 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v15, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawAcquired((ClassBoardSquare_o *)v4, 0LL);
    return;
  }
  v21 = v14;
  v16 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v21);
  v20 = 2;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v20);
  if ( !v16 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v16, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawNotConnected((ClassBoardSquare_o *)v4, 0LL);
    return;
  }
  v21 = v14;
  v17 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v21);
  v20 = 4;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v20);
  if ( !v17 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v17, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardLock__DrawNotCond(v4, v18);
    return;
  }
  v21 = v14;
  v19 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v21);
  v20 = 16;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v20);
  if ( !v19 )
LABEL_28:
    sub_B0D97C(this);
  if ( System_Enum__HasFlag(v19, (System_Enum_o *)this, 0LL) )
    ClassBoardSquare__DrawUnacquired((ClassBoardSquare_o *)v4, 0LL);
}


void __fastcall ClassBoardLock___PlayReleaseEffect_b__13_0(ClassBoardLock_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  ClassBoardSquare__SetUpdateDraw((ClassBoardSquare_o *)this, 0LL);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  if ( !releaseEffectPlayer )
    sub_B0D97C(0LL);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, v3);
}


IClassBoardLockModel_o *__fastcall ClassBoardLock__get_LockModel(ClassBoardLock_o *this, const MethodInfo *method)
{
  if ( (byte_4217B2D & 1) == 0 )
  {
    sub_B0D8A4(&IClassBoardLockModel_TypeInfo, method);
    byte_4217B2D = 1;
  }
  return (IClassBoardLockModel_o *)sub_B0D964(this->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo);
}