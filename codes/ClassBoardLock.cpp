// attributes: thunk
void ClassBoardLock___ctor(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardSquare___ctor((ClassBoardSquare_o *)this, method);
}


void ClassBoardLock__Awake(ClassBoardLock_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardLock__DrawNotCond(ClassBoardLock_o *this, const MethodInfo *method)
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


void ClassBoardLock__PlayClickedSe(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardSquare_o *v2; // x19
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v5; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v7; // x0
  const MethodInfo *v8; // x1

  v2 = (ClassBoardSquare_o *)this;
  if ( (byte_4CF2270 & 1) == 0 )
  {
    this = (ClassBoardLock_o *)sub_1C7BAE8(&IClassBoardSquareModel_TypeInfo);
    byte_4CF2270 = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1C7BD40(this, method);
  klass = SquareModel_k__BackingField->klass;
  v5 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v5;
      p_offset += 2;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15];
  }
  else
  {
LABEL_8:
    v7 = sub_1C51E70(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))v7)(
          SquareModel_k__BackingField,
          0,
          *(_QWORD *)(v7 + 8))
      & 1) == 0 )
    ClassBoardSquare__PlayClickedSe(v2, v8);
}


void ClassBoardLock__PlayReleaseEffect(ClassBoardLock_o *this, const MethodInfo *method)
{
  IClassBoardLockModel_o *LockModel; // x0
  __int64 v4; // x1
  IClassBoardLockModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardLockModel_o *v7; // x20
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v9; // x0
  Il2CppObject *v10; // x0
  System_String_o *v11; // x20
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x4
  int v14; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CF2271 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ClassBoardLock__PlayReleaseEffect_b__13_0__);
    sub_1C7BAE8(&IClassBoardSquareModel_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25464/*"{0}{1}"*/);
    sub_1C7BAE8(&StringLiteral_15194/*"Unlock"*/);
    byte_4CF2271 = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    sub_1C7BD40(0, v4);
  klass = LockModel->klass;
  v6 = *(unsigned __int16 *)&LockModel->klass->_2.rank;
  v7 = LockModel;
  if ( *(_WORD *)&LockModel->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
  }
  else
  {
LABEL_8:
    v9 = sub_1C51E70(LockModel, IClassBoardSquareModel_TypeInfo, 2);
  }
  v14 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v9)(v7, *(_QWORD *)(v9 + 8));
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v11 = System_String__Format_64218220(
          (System_String_o *)StringLiteral_25464/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_15194/*"Unlock"*/,
          v10,
          0);
  v12 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, 0);
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, v11, 0, v12, v13);
}


void ClassBoardLock__SetupIcon(ClassBoardLock_o *this, const MethodInfo *method)
{
  MethodInfo *LockModel; // x0
  __int64 v4; // x1
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v6; // x20
  __int64 v7; // x9
  IClassBoardSquareModel_c **v8; // x10
  __int64 v9; // x0
  struct UISprite_array *iconSpritesNormal; // x24
  il2cpp_array_size_t max_length; // x8
  int v12; // w20
  unsigned __int64 v13; // x25
  UISprite_o *v14; // x21
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x22
  Il2CppObject *v16; // x0
  struct UISprite_array *iconSpritesOn; // x24
  il2cpp_array_size_t v18; // x8
  unsigned __int64 v19; // x25
  UISprite_o *v20; // x21
  AtlasManagerUnit_o *v21; // x22
  Il2CppObject *v22; // x0
  struct UISprite_array *iconSpritesOff; // x24
  il2cpp_array_size_t v24; // x8
  unsigned __int64 v25; // x25
  UISprite_o *v26; // x21
  AtlasManagerUnit_o *v27; // x22
  Il2CppObject *v28; // x0
  struct UISprite_array *iconSpritesLock; // x22
  il2cpp_array_size_t v30; // x8
  unsigned __int64 v31; // x24
  UISprite_o *v32; // x21
  struct UISprite_array *iconSpriteGlow; // x22
  il2cpp_array_size_t v34; // x8
  unsigned __int64 v35; // x24
  UISprite_o *v36; // x19
  AtlasManagerUnit_o *v37; // x21
  Il2CppObject *v38; // x0
  int v39; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CF226E & 1) == 0 )
  {
    sub_1C7BAE8(&IClassBoardSquareModel_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_21532/*"lock_light_{0}"*/);
    sub_1C7BAE8(&StringLiteral_21535/*"lock_stopper"*/);
    sub_1C7BAE8(&StringLiteral_21534/*"lock_on_{0}"*/);
    sub_1C7BAE8(&StringLiteral_21533/*"lock_off_{0}"*/);
    sub_1C7BAE8(&StringLiteral_21536/*"lock_{0}"*/);
    byte_4CF226E = 1;
  }
  LockModel = (MethodInfo *)ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    goto LABEL_42;
  methodPointer = LockModel->methodPointer;
  v6 = LockModel;
  v7 = *((unsigned __int16 *)LockModel->methodPointer + 151);
  if ( *((_WORD *)LockModel->methodPointer + 151) )
  {
    v8 = (IClassBoardSquareModel_c **)(*((_QWORD *)methodPointer + 22) + 8LL);
    while ( *(v8 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v7;
      v8 += 2;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)methodPointer + 16 * *(_DWORD *)v8 + 344;
  }
  else
  {
LABEL_8:
    v9 = sub_1C51E70(LockModel, IClassBoardSquareModel_TypeInfo, 2);
  }
  LockModel = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8));
  iconSpritesNormal = this->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_42;
  max_length = iconSpritesNormal->max_length;
  v12 = (int)LockModel;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    while ( v13 < (unsigned int)max_length )
    {
      v14 = iconSpritesNormal->m_Items[v13];
      IconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v39 = v12;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21536/*"lock_{0}"*/, v16, 0);
      if ( !IconAtlasManagerUnit )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(IconAtlasManagerUnit, v14, (System_String_o *)LockModel, 0);
      LODWORD(max_length) = iconSpritesNormal->max_length;
      if ( (__int64)++v13 >= (int)max_length )
        goto LABEL_16;
    }
LABEL_41:
    sub_1C7BD48(LockModel);
  }
LABEL_16:
  iconSpritesOn = this->fields.iconSpritesOn;
  if ( !iconSpritesOn )
    goto LABEL_42;
  v18 = iconSpritesOn->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0;
    while ( v19 < (unsigned int)v18 )
    {
      v20 = iconSpritesOn->m_Items[v19];
      v21 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v39 = v12;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21534/*"lock_on_{0}"*/, v22, 0);
      if ( !v21 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v21, v20, (System_String_o *)LockModel, 0);
      LODWORD(v18) = iconSpritesOn->max_length;
      if ( (__int64)++v19 >= (int)v18 )
        goto LABEL_22;
    }
    goto LABEL_41;
  }
LABEL_22:
  iconSpritesOff = this->fields.iconSpritesOff;
  if ( !iconSpritesOff )
    goto LABEL_42;
  v24 = iconSpritesOff->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = 0;
    while ( v25 < (unsigned int)v24 )
    {
      v26 = iconSpritesOff->m_Items[v25];
      v27 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v39 = v12;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21533/*"lock_off_{0}"*/, v28, 0);
      if ( !v27 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v27, v26, (System_String_o *)LockModel, 0);
      LODWORD(v24) = iconSpritesOff->max_length;
      if ( (__int64)++v25 >= (int)v24 )
        goto LABEL_28;
    }
    goto LABEL_41;
  }
LABEL_28:
  iconSpritesLock = this->fields.iconSpritesLock;
  if ( !iconSpritesLock )
    goto LABEL_42;
  v30 = iconSpritesLock->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0;
    while ( v31 < (unsigned int)v30 )
    {
      v32 = iconSpritesLock->m_Items[v31];
      LockModel = (MethodInfo *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      if ( !LockModel )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(
                                  (AtlasManagerUnit_o *)LockModel,
                                  v32,
                                  (System_String_o *)StringLiteral_21535/*"lock_stopper"*/,
                                  0);
      LODWORD(v30) = iconSpritesLock->max_length;
      if ( (__int64)++v31 >= (int)v30 )
        goto LABEL_34;
    }
    goto LABEL_41;
  }
LABEL_34:
  iconSpriteGlow = this->fields.iconSpriteGlow;
  if ( !iconSpriteGlow )
LABEL_42:
    sub_1C7BD40(LockModel, v4);
  v34 = iconSpriteGlow->max_length;
  if ( (int)v34 >= 1 )
  {
    v35 = 0;
    while ( v35 < (unsigned int)v34 )
    {
      v36 = iconSpriteGlow->m_Items[v35];
      v37 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v39 = v12;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21532/*"lock_light_{0}"*/, v38, 0);
      if ( !v37 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v37, v36, (System_String_o *)LockModel, 0);
      LODWORD(v34) = iconSpriteGlow->max_length;
      if ( (__int64)++v35 >= (int)v34 )
        return;
    }
    goto LABEL_41;
  }
}


void ClassBoardLock__UpdateDraw(
        ClassBoardLock_o *this,
        System_Nullable_AcquireFlag__o handoverFlag,
        const MethodInfo *method)
{
  bool hasValue; // w20
  ClassBoardLock_o *v4; // x19
  System_Nullable_Int32Enum__o v5; // x0
  ClassBoardSquare_o *Value; // x0
  const MethodInfo *v7; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v10; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v12; // x0
  int v13; // w20
  const MethodInfo *v14; // x1
  System_Nullable_AcquireFlag__o v15; // [xsp+8h] [xbp-28h] BYREF

  hasValue = handoverFlag.fields.hasValue;
  v4 = this;
  v15 = handoverFlag;
  if ( (byte_4CF226F & 1) == 0 )
  {
    sub_1C7BAE8(&IClassBoardSquareModel_TypeInfo);
    sub_1C7BAE8(&Method_System_Nullable_AcquireFlag__get_HasValue__);
    this = (ClassBoardLock_o *)sub_1C7BAE8(&Method_System_Nullable_AcquireFlag__get_Value__);
    byte_4CF226F = 1;
  }
  if ( hasValue )
  {
    v5 = (System_Nullable_Int32Enum__o)&v15;
    Value = (ClassBoardSquare_o *)System_Nullable_Int32Enum___get_Value(
                                    v5,
                                    (const MethodInfo_3965028 *)Method_System_Nullable_AcquireFlag__get_Value__);
  }
  else
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C7BD40)(this, handoverFlag);
    klass = SquareModel_k__BackingField->klass;
    v10 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
    if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
    {
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v10;
        p_offset += 2;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15];
    }
    else
    {
LABEL_10:
      v12 = sub_1C51E70(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15);
    }
    Value = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))v12)(
                                    SquareModel_k__BackingField,
                                    0,
                                    *(_QWORD *)(v12 + 8));
  }
  v13 = (int)Value;
  ClassBoardSquare__SetActiveArrayObject(Value, v4->fields.notCondObjects, 0, v7);
  if ( v13 )
  {
    if ( (v13 & 1) != 0 )
    {
      ClassBoardSquare__DrawAcquired((ClassBoardSquare_o *)v4, v14);
    }
    else if ( (v13 & 2) != 0 )
    {
      ClassBoardSquare__DrawNotConnected((ClassBoardSquare_o *)v4, v14);
    }
    else if ( (v13 & 4) != 0 )
    {
      ClassBoardLock__DrawNotCond(v4, v14);
    }
    else if ( (v13 & 0x10) != 0 )
    {
      ClassBoardSquare__DrawUnacquired((ClassBoardSquare_o *)v4, v14);
    }
  }
  else
  {
    ClassBoardSquare__DrawAvailable((ClassBoardSquare_o *)v4, v14);
  }
}


void ClassBoardLock___PlayReleaseEffect_b__13_0(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_1C7BD40(0, method);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, 0);
}


IClassBoardLockModel_o *ClassBoardLock__get_LockModel(ClassBoardLock_o *this, const MethodInfo *method)
{
  if ( (byte_4CF226D & 1) == 0 )
  {
    sub_1C7BAE8(&IClassBoardLockModel_TypeInfo);
    byte_4CF226D = 1;
  }
  return (IClassBoardLockModel_o *)sub_1C7BC24(this->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo);
}