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
  ClassBoardLock_o *v2; // x19
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x19
  IClassBoardSquareModel_c *klass; // x8
  __int64 v5; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  ClassBoardSquare_o *v8; // x0
  const MethodInfo *v9; // x1

  v2 = this;
  if ( (byte_49FF7C1 & 1) == 0 )
  {
    this = (ClassBoardLock_o *)sub_1B640C8(&IClassBoardSquareModel_TypeInfo, method);
    byte_49FF7C1 = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1B64324(this);
  klass = SquareModel_k__BackingField->klass;
  v5 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v5;
      p_offset += 2;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v8 = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
                               SquareModel_k__BackingField,
                               0LL,
                               *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v8 & 1) == 0 )
    ClassBoardSquare__PlayClickedSe(v8, v9);
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
  __int64 v10; // x9
  IClassBoardLockModel_o *v11; // x20
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x3
  int v20; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FF7C2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, v3);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v4);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_25005/*"{0}{1}"*/, v6);
    sub_1B640C8(&StringLiteral_15060/*"Unlock"*/, v7);
    byte_49FF7C2 = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    sub_1B64324(0LL);
  klass = LockModel->klass;
  v10 = *(unsigned __int16 *)(&LockModel->klass->_2.bitflags2 + 3);
  v11 = LockModel;
  if ( *(_WORD *)(&LockModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v10;
      p_offset += 2;
      if ( !v10 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
  }
  v20 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(v11, *(_QWORD *)(p_method + 8));
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v15 = System_String__Format_61389768(
          (System_String_o *)StringLiteral_25005/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_15060/*"Unlock"*/,
          v14,
          0LL);
  v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, v15, v18, v19);
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
  __int64 v12; // x9
  IClassBoardSquareModel_c **v13; // x10
  __int64 v14; // x0
  __int64 v15; // x1
  struct UISprite_array *iconSpritesNormal; // x24
  __int64 v17; // x8
  int v18; // w20
  unsigned __int64 v19; // x25
  UISprite_o *v20; // x21
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x22
  Il2CppObject *v22; // x0
  struct UISprite_array *iconSpritesOn; // x24
  __int64 v24; // x8
  unsigned __int64 v25; // x25
  UISprite_o *v26; // x21
  AtlasManagerUnit_o *v27; // x22
  Il2CppObject *v28; // x0
  struct UISprite_array *iconSpritesOff; // x24
  __int64 v30; // x8
  unsigned __int64 v31; // x25
  UISprite_o *v32; // x21
  AtlasManagerUnit_o *v33; // x22
  Il2CppObject *v34; // x0
  struct UISprite_array *iconSpritesLock; // x22
  __int64 v36; // x8
  unsigned __int64 v37; // x24
  UISprite_o *v38; // x21
  struct UISprite_array *iconSpriteGlow; // x22
  __int64 v40; // x8
  unsigned __int64 v41; // x24
  UISprite_o *v42; // x19
  AtlasManagerUnit_o *v43; // x21
  Il2CppObject *v44; // x0
  int v45; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FF7BF & 1) == 0 )
  {
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_21112/*"lock_light_{0}"*/, v4);
    sub_1B640C8(&StringLiteral_21115/*"lock_stopper"*/, v5);
    sub_1B640C8(&StringLiteral_21114/*"lock_on_{0}"*/, v6);
    sub_1B640C8(&StringLiteral_21113/*"lock_off_{0}"*/, v7);
    sub_1B640C8(&StringLiteral_21116/*"lock_{0}"*/, v8);
    byte_49FF7BF = 1;
  }
  LockModel = (MethodInfo *)ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    goto LABEL_42;
  methodPointer = LockModel->methodPointer;
  v11 = LockModel;
  v12 = *((unsigned __int16 *)LockModel->methodPointer + 151);
  if ( *((_WORD *)LockModel->methodPointer + 151) )
  {
    v13 = (IClassBoardSquareModel_c **)(*((_QWORD *)methodPointer + 22) + 8LL);
    while ( *(v13 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v12;
      v13 += 2;
      if ( !v12 )
        goto LABEL_8;
    }
    v14 = (__int64)methodPointer + 16 * *(_DWORD *)v13 + 344;
  }
  else
  {
LABEL_8:
    v14 = sub_1BB60A8(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
  }
  LockModel = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
  iconSpritesNormal = this->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_42;
  v17 = *(_QWORD *)&iconSpritesNormal->max_length;
  v18 = (int)LockModel;
  if ( (int)v17 >= 1 )
  {
    v19 = 0LL;
    while ( v19 < (unsigned int)v17 )
    {
      v20 = iconSpritesNormal->m_Items[v19];
      IconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v45 = v18;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21116/*"lock_{0}"*/, v22, 0LL);
      if ( !IconAtlasManagerUnit )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(IconAtlasManagerUnit, v20, (System_String_o *)LockModel, 0LL);
      LODWORD(v17) = iconSpritesNormal->max_length;
      if ( (__int64)++v19 >= (int)v17 )
        goto LABEL_16;
    }
LABEL_41:
    sub_1B6432C(LockModel, v15);
  }
LABEL_16:
  iconSpritesOn = this->fields.iconSpritesOn;
  if ( !iconSpritesOn )
    goto LABEL_42;
  v24 = *(_QWORD *)&iconSpritesOn->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = 0LL;
    while ( v25 < (unsigned int)v24 )
    {
      v26 = iconSpritesOn->m_Items[v25];
      v27 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v45 = v18;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21114/*"lock_on_{0}"*/, v28, 0LL);
      if ( !v27 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v27, v26, (System_String_o *)LockModel, 0LL);
      LODWORD(v24) = iconSpritesOn->max_length;
      if ( (__int64)++v25 >= (int)v24 )
        goto LABEL_22;
    }
    goto LABEL_41;
  }
LABEL_22:
  iconSpritesOff = this->fields.iconSpritesOff;
  if ( !iconSpritesOff )
    goto LABEL_42;
  v30 = *(_QWORD *)&iconSpritesOff->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    while ( v31 < (unsigned int)v30 )
    {
      v32 = iconSpritesOff->m_Items[v31];
      v33 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v45 = v18;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21113/*"lock_off_{0}"*/, v34, 0LL);
      if ( !v33 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v33, v32, (System_String_o *)LockModel, 0LL);
      LODWORD(v30) = iconSpritesOff->max_length;
      if ( (__int64)++v31 >= (int)v30 )
        goto LABEL_28;
    }
    goto LABEL_41;
  }
LABEL_28:
  iconSpritesLock = this->fields.iconSpritesLock;
  if ( !iconSpritesLock )
    goto LABEL_42;
  v36 = *(_QWORD *)&iconSpritesLock->max_length;
  if ( (int)v36 >= 1 )
  {
    v37 = 0LL;
    while ( v37 < (unsigned int)v36 )
    {
      v38 = iconSpritesLock->m_Items[v37];
      LockModel = (MethodInfo *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      if ( !LockModel )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(
                                  (AtlasManagerUnit_o *)LockModel,
                                  v38,
                                  (System_String_o *)StringLiteral_21115/*"lock_stopper"*/,
                                  0LL);
      LODWORD(v36) = iconSpritesLock->max_length;
      if ( (__int64)++v37 >= (int)v36 )
        goto LABEL_34;
    }
    goto LABEL_41;
  }
LABEL_34:
  iconSpriteGlow = this->fields.iconSpriteGlow;
  if ( !iconSpriteGlow )
LABEL_42:
    sub_1B64324(LockModel);
  v40 = *(_QWORD *)&iconSpriteGlow->max_length;
  if ( (int)v40 >= 1 )
  {
    v41 = 0LL;
    while ( v41 < (unsigned int)v40 )
    {
      v42 = iconSpriteGlow->m_Items[v41];
      v43 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v45 = v18;
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21112/*"lock_light_{0}"*/, v44, 0LL);
      if ( !v43 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v43, v42, (System_String_o *)LockModel, 0LL);
      LODWORD(v40) = iconSpriteGlow->max_length;
      if ( (__int64)++v41 >= (int)v40 )
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
  bool hasValue; // w20
  ClassBoardLock_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  ClassBoardSquare_o *Value; // x0
  const MethodInfo *v8; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v11; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int v14; // w20
  const MethodInfo *v15; // x1
  System_Nullable_AcquireFlag__o v16; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_Int32Enum__o v17; // 0:x0.8

  hasValue = handoverFlag.fields.hasValue;
  v4 = this;
  v16 = handoverFlag;
  if ( (byte_49FF7C0 & 1) == 0 )
  {
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, handoverFlag);
    sub_1B640C8(&Method_System_Nullable_AcquireFlag__get_HasValue__, v5);
    this = (ClassBoardLock_o *)sub_1B640C8(&Method_System_Nullable_AcquireFlag__get_Value__, v6);
    byte_49FF7C0 = 1;
  }
  if ( hasValue )
  {
    v17 = (System_Nullable_Int32Enum__o)&v16;
    Value = (ClassBoardSquare_o *)System_Nullable_Int32Enum___get_Value(
                                    v17,
                                    (const MethodInfo_35CE15C *)Method_System_Nullable_AcquireFlag__get_Value__);
  }
  else
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      sub_1B64324(this);
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    Value = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
                                    SquareModel_k__BackingField,
                                    0LL,
                                    *(_QWORD *)(p_method + 8));
  }
  v14 = (int)Value;
  ClassBoardSquare__SetActiveArrayObject(Value, v4->fields.notCondObjects, 0, v8);
  if ( v14 )
  {
    if ( (v14 & 1) != 0 )
    {
      ClassBoardSquare__DrawAcquired((ClassBoardSquare_o *)v4, v15);
    }
    else if ( (v14 & 2) != 0 )
    {
      ClassBoardSquare__DrawNotConnected((ClassBoardSquare_o *)v4, v15);
    }
    else if ( (v14 & 4) != 0 )
    {
      ClassBoardLock__DrawNotCond(v4, v15);
    }
    else if ( (v14 & 0x10) != 0 )
    {
      ClassBoardSquare__DrawUnacquired((ClassBoardSquare_o *)v4, v15);
    }
  }
  else
  {
    ClassBoardSquare__DrawAvailable((ClassBoardSquare_o *)v4, v15);
  }
}


void __fastcall ClassBoardLock___PlayReleaseEffect_b__13_0(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_1B64324(0LL);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, method);
}


IClassBoardLockModel_o *__fastcall ClassBoardLock__get_LockModel(ClassBoardLock_o *this, const MethodInfo *method)
{
  if ( (byte_49FF7BE & 1) == 0 )
  {
    sub_1B640C8(&IClassBoardLockModel_TypeInfo, method);
    byte_49FF7BE = 1;
  }
  return (IClassBoardLockModel_o *)sub_1B64204(this->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo);
}