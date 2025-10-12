void ClassBoardLock___ctor(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardSquare___ctor((ClassBoardSquare_o *)this, 0);
}


void ClassBoardLock__Awake(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardSquare__Awake((ClassBoardSquare_o *)this, 0);
}


void ClassBoardLock__DrawNotCond(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardSquare__SetActiveArrayObject((ClassBoardSquare_o *)this, this->fields.acquiredObjects, 0, 0);
  ClassBoardSquare__SetActiveArrayObject((ClassBoardSquare_o *)this, this->fields.unacquiredObjects, 0, 0);
  ClassBoardSquare__SetActiveArrayObject((ClassBoardSquare_o *)this, this->fields.availableObjects, 0, 0);
  ClassBoardSquare__SetActiveArrayObject((ClassBoardSquare_o *)this, this->fields.notConnectedObjects, 0, 0);
  ClassBoardSquare__SetActiveArrayObject((ClassBoardSquare_o *)this, this->fields.notCondObjects, 1, 0);
  ClassBoardSquare__SetActiveObject((ClassBoardSquare_o *)this, this->fields.availableEffect, 0, 0);
}


void ClassBoardLock__PlayClickedSe(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardSquare_o *v2; // x19
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v5; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v7; // x0

  v2 = (ClassBoardSquare_o *)this;
  if ( (byte_4C3B421 & 1) == 0 )
  {
    this = (ClassBoardLock_o *)sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    byte_4C3B421 = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1C32E7C(this);
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
    v7 = sub_1C83438(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))v7)(
          SquareModel_k__BackingField,
          0,
          *(_QWORD *)(v7 + 8))
      & 1) == 0 )
    ClassBoardSquare__PlayClickedSe(v2, 0);
}


void ClassBoardLock__PlayReleaseEffect(ClassBoardLock_o *this, const MethodInfo *method)
{
  IClassBoardLockModel_o *LockModel; // x0
  IClassBoardLockModel_c *klass; // x8
  __int64 v5; // x9
  IClassBoardLockModel_o *v6; // x20
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  System_Action_o *v17; // x21
  int v18; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3B422 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ClassBoardLock__PlayReleaseEffect_b__13_0__);
    sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_25203/*"{0}{1}"*/);
    sub_1C32C20(&StringLiteral_15134/*"Unlock"*/);
    byte_4C3B422 = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    sub_1C32E7C(0);
  klass = LockModel->klass;
  v5 = *(unsigned __int16 *)&LockModel->klass->_2.rank;
  v6 = LockModel;
  if ( *(_WORD *)&LockModel->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v5;
      p_offset += 2;
      if ( !v5 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
  }
  else
  {
LABEL_8:
    v8 = sub_1C83438(LockModel, IClassBoardSquareModel_TypeInfo, 2);
  }
  v18 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v8)(v6, *(_QWORD *)(v8 + 8));
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v9, v10, v11, v12, v13, v14);
  v16 = System_String__Format_63559836(
          (System_String_o *)StringLiteral_25203/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_15134/*"Unlock"*/,
          v15,
          0);
  v17 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, 0);
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, v16, 0, v17, 0);
}


void ClassBoardLock__SetupIcon(ClassBoardLock_o *this, const MethodInfo *method)
{
  MethodInfo *LockModel; // x0
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v5; // x20
  __int64 v6; // x9
  IClassBoardSquareModel_c **v7; // x10
  __int64 v8; // x0
  struct UISprite_array *iconSpritesNormal; // x24
  il2cpp_array_size_t max_length; // x8
  int v11; // w20
  unsigned __int64 v12; // x25
  UISprite_o *v13; // x21
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x22
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x0
  struct UISprite_array *iconSpritesOn; // x24
  il2cpp_array_size_t v23; // x8
  unsigned __int64 v24; // x25
  UISprite_o *v25; // x21
  AtlasManagerUnit_o *v26; // x22
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  Il2CppObject *v33; // x0
  struct UISprite_array *iconSpritesOff; // x24
  il2cpp_array_size_t v35; // x8
  unsigned __int64 v36; // x25
  UISprite_o *v37; // x21
  AtlasManagerUnit_o *v38; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  Il2CppObject *v45; // x0
  struct UISprite_array *iconSpritesLock; // x22
  il2cpp_array_size_t v47; // x8
  unsigned __int64 v48; // x24
  UISprite_o *v49; // x21
  struct UISprite_array *iconSpriteGlow; // x22
  il2cpp_array_size_t v51; // x8
  unsigned __int64 v52; // x24
  UISprite_o *v53; // x19
  AtlasManagerUnit_o *v54; // x21
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  __int64 v58; // x5
  __int64 v59; // x6
  __int64 v60; // x7
  Il2CppObject *v61; // x0
  int v62; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C3B41F & 1) == 0 )
  {
    sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_21330/*"lock_light_{0}"*/);
    sub_1C32C20(&StringLiteral_21333/*"lock_stopper"*/);
    sub_1C32C20(&StringLiteral_21332/*"lock_on_{0}"*/);
    sub_1C32C20(&StringLiteral_21331/*"lock_off_{0}"*/);
    sub_1C32C20(&StringLiteral_21334/*"lock_{0}"*/);
    byte_4C3B41F = 1;
  }
  LockModel = (MethodInfo *)ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    goto LABEL_42;
  methodPointer = LockModel->methodPointer;
  v5 = LockModel;
  v6 = *((unsigned __int16 *)LockModel->methodPointer + 151);
  if ( *((_WORD *)LockModel->methodPointer + 151) )
  {
    v7 = (IClassBoardSquareModel_c **)(*((_QWORD *)methodPointer + 22) + 8LL);
    while ( *(v7 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      v7 += 2;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)methodPointer + 16 * *(_DWORD *)v7 + 344;
  }
  else
  {
LABEL_8:
    v8 = sub_1C83438(LockModel, IClassBoardSquareModel_TypeInfo, 2);
  }
  LockModel = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  iconSpritesNormal = this->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_42;
  max_length = iconSpritesNormal->max_length;
  v11 = (int)LockModel;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    while ( v12 < (unsigned int)max_length )
    {
      v13 = iconSpritesNormal->m_Items[v12];
      IconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v62 = v11;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v15, v16, v17, v18, v19, v20);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21334/*"lock_{0}"*/, v21, 0);
      if ( !IconAtlasManagerUnit )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(IconAtlasManagerUnit, v13, (System_String_o *)LockModel, 0);
      LODWORD(max_length) = iconSpritesNormal->max_length;
      if ( (__int64)++v12 >= (int)max_length )
        goto LABEL_16;
    }
LABEL_41:
    sub_1C32E84(LockModel);
  }
LABEL_16:
  iconSpritesOn = this->fields.iconSpritesOn;
  if ( !iconSpritesOn )
    goto LABEL_42;
  v23 = iconSpritesOn->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0;
    while ( v24 < (unsigned int)v23 )
    {
      v25 = iconSpritesOn->m_Items[v24];
      v26 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v62 = v11;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v27, v28, v29, v30, v31, v32);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21332/*"lock_on_{0}"*/, v33, 0);
      if ( !v26 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v26, v25, (System_String_o *)LockModel, 0);
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
  v35 = iconSpritesOff->max_length;
  if ( (int)v35 >= 1 )
  {
    v36 = 0;
    while ( v36 < (unsigned int)v35 )
    {
      v37 = iconSpritesOff->m_Items[v36];
      v38 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v62 = v11;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v39, v40, v41, v42, v43, v44);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21331/*"lock_off_{0}"*/, v45, 0);
      if ( !v38 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v38, v37, (System_String_o *)LockModel, 0);
      LODWORD(v35) = iconSpritesOff->max_length;
      if ( (__int64)++v36 >= (int)v35 )
        goto LABEL_28;
    }
    goto LABEL_41;
  }
LABEL_28:
  iconSpritesLock = this->fields.iconSpritesLock;
  if ( !iconSpritesLock )
    goto LABEL_42;
  v47 = iconSpritesLock->max_length;
  if ( (int)v47 >= 1 )
  {
    v48 = 0;
    while ( v48 < (unsigned int)v47 )
    {
      v49 = iconSpritesLock->m_Items[v48];
      LockModel = (MethodInfo *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      if ( !LockModel )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(
                                  (AtlasManagerUnit_o *)LockModel,
                                  v49,
                                  (System_String_o *)StringLiteral_21333/*"lock_stopper"*/,
                                  0);
      LODWORD(v47) = iconSpritesLock->max_length;
      if ( (__int64)++v48 >= (int)v47 )
        goto LABEL_34;
    }
    goto LABEL_41;
  }
LABEL_34:
  iconSpriteGlow = this->fields.iconSpriteGlow;
  if ( !iconSpriteGlow )
LABEL_42:
    sub_1C32E7C(LockModel);
  v51 = iconSpriteGlow->max_length;
  if ( (int)v51 >= 1 )
  {
    v52 = 0;
    while ( v52 < (unsigned int)v51 )
    {
      v53 = iconSpriteGlow->m_Items[v52];
      v54 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v62 = v11;
      v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v55, v56, v57, v58, v59, v60);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21330/*"lock_light_{0}"*/, v61, 0);
      if ( !v54 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v54, v53, (System_String_o *)LockModel, 0);
      LODWORD(v51) = iconSpriteGlow->max_length;
      if ( (__int64)++v52 >= (int)v51 )
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
  int32_t Value; // w0
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v9; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v11; // x0
  int32_t v12; // w20
  const MethodInfo *v13; // x1
  System_Nullable_AcquireFlag__o v14; // [xsp+8h] [xbp-28h] BYREF

  hasValue = handoverFlag.fields.hasValue;
  v4 = this;
  v14 = handoverFlag;
  if ( (byte_4C3B420 & 1) == 0 )
  {
    sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_AcquireFlag__get_HasValue__);
    this = (ClassBoardLock_o *)sub_1C32C20(&Method_System_Nullable_AcquireFlag__get_Value__);
    byte_4C3B420 = 1;
  }
  if ( hasValue )
  {
    v5 = (System_Nullable_Int32Enum__o)&v14;
    Value = System_Nullable_Int32Enum___get_Value(
              v5,
              (const MethodInfo_38BE310 *)Method_System_Nullable_AcquireFlag__get_Value__);
  }
  else
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      sub_1C32E7C(this);
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
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15];
    }
    else
    {
LABEL_10:
      v11 = sub_1C83438(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15);
    }
    Value = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))v11)(
              SquareModel_k__BackingField,
              0,
              *(_QWORD *)(v11 + 8));
  }
  v12 = Value;
  ClassBoardSquare__SetActiveArrayObject((ClassBoardSquare_o *)v4, v4->fields.notCondObjects, 0, 0);
  if ( v12 )
  {
    if ( (v12 & 1) != 0 )
    {
      ClassBoardSquare__DrawAcquired((ClassBoardSquare_o *)v4, 0);
    }
    else if ( (v12 & 2) != 0 )
    {
      ClassBoardSquare__DrawNotConnected((ClassBoardSquare_o *)v4, 0);
    }
    else if ( (v12 & 4) != 0 )
    {
      ClassBoardLock__DrawNotCond(v4, v13);
    }
    else if ( (v12 & 0x10) != 0 )
    {
      ClassBoardSquare__DrawUnacquired((ClassBoardSquare_o *)v4, 0);
    }
  }
  else
  {
    ClassBoardSquare__DrawAvailable((ClassBoardSquare_o *)v4, 0);
  }
}


void ClassBoardLock___PlayReleaseEffect_b__13_0(ClassBoardLock_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  ClassBoardSquare__SetUpdateDraw((ClassBoardSquare_o *)this, 0);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  if ( !releaseEffectPlayer )
    sub_1C32E7C(0);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, v3);
}


IClassBoardLockModel_o *ClassBoardLock__get_LockModel(ClassBoardLock_o *this, const MethodInfo *method)
{
  if ( (byte_4C3B41E & 1) == 0 )
  {
    sub_1C32C20(&IClassBoardLockModel_TypeInfo);
    byte_4C3B41E = 1;
  }
  return (IClassBoardLockModel_o *)sub_1C32D5C(this->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo);
}