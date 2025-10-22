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
  if ( (byte_4C5A8E8 & 1) == 0 )
  {
    this = (ClassBoardLock_o *)sub_1C3E564(&IClassBoardSquareModel_TypeInfo);
    byte_4C5A8E8 = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1C3E7C0(this, method);
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
    v7 = sub_1C8ED7C(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15);
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
  __int64 v4; // x1
  IClassBoardLockModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardLockModel_o *v7; // x20
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v9; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x0
  System_String_o *v17; // x20
  System_Action_o *v18; // x21
  int v19; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C5A8E9 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ClassBoardLock__PlayReleaseEffect_b__13_0__);
    sub_1C3E564(&IClassBoardSquareModel_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_25228/*"{0}{1}"*/);
    sub_1C3E564(&StringLiteral_15146/*"Unlock"*/);
    byte_4C5A8E9 = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    sub_1C3E7C0(0, v4);
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
    v9 = sub_1C8ED7C(LockModel, IClassBoardSquareModel_TypeInfo, 2);
  }
  v19 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v9)(v7, *(_QWORD *)(v9 + 8));
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v10, v11, v12, v13, v14, v15);
  v17 = System_String__Format_63677760(
          (System_String_o *)StringLiteral_25228/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_15146/*"Unlock"*/,
          v16,
          0);
  v18 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, 0);
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, v17, 0, v18, 0);
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
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x0
  struct UISprite_array *iconSpritesOn; // x24
  il2cpp_array_size_t v24; // x8
  unsigned __int64 v25; // x25
  UISprite_o *v26; // x21
  AtlasManagerUnit_o *v27; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  Il2CppObject *v34; // x0
  struct UISprite_array *iconSpritesOff; // x24
  il2cpp_array_size_t v36; // x8
  unsigned __int64 v37; // x25
  UISprite_o *v38; // x21
  AtlasManagerUnit_o *v39; // x22
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  Il2CppObject *v46; // x0
  struct UISprite_array *iconSpritesLock; // x22
  il2cpp_array_size_t v48; // x8
  unsigned __int64 v49; // x24
  UISprite_o *v50; // x21
  struct UISprite_array *iconSpriteGlow; // x22
  il2cpp_array_size_t v52; // x8
  unsigned __int64 v53; // x24
  UISprite_o *v54; // x19
  AtlasManagerUnit_o *v55; // x21
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  __int64 v59; // x5
  __int64 v60; // x6
  __int64 v61; // x7
  Il2CppObject *v62; // x0
  int v63; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C5A8E6 & 1) == 0 )
  {
    sub_1C3E564(&IClassBoardSquareModel_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_21351/*"lock_light_{0}"*/);
    sub_1C3E564(&StringLiteral_21354/*"lock_stopper"*/);
    sub_1C3E564(&StringLiteral_21353/*"lock_on_{0}"*/);
    sub_1C3E564(&StringLiteral_21352/*"lock_off_{0}"*/);
    sub_1C3E564(&StringLiteral_21355/*"lock_{0}"*/);
    byte_4C5A8E6 = 1;
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
    v9 = sub_1C8ED7C(LockModel, IClassBoardSquareModel_TypeInfo, 2);
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
      v63 = v12;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v16, v17, v18, v19, v20, v21);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21355/*"lock_{0}"*/, v22, 0);
      if ( !IconAtlasManagerUnit )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(IconAtlasManagerUnit, v14, (System_String_o *)LockModel, 0);
      LODWORD(max_length) = iconSpritesNormal->max_length;
      if ( (__int64)++v13 >= (int)max_length )
        goto LABEL_16;
    }
LABEL_41:
    sub_1C3E7C8(LockModel, v4);
  }
LABEL_16:
  iconSpritesOn = this->fields.iconSpritesOn;
  if ( !iconSpritesOn )
    goto LABEL_42;
  v24 = iconSpritesOn->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = 0;
    while ( v25 < (unsigned int)v24 )
    {
      v26 = iconSpritesOn->m_Items[v25];
      v27 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v63 = v12;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v28, v29, v30, v31, v32, v33);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21353/*"lock_on_{0}"*/, v34, 0);
      if ( !v27 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v27, v26, (System_String_o *)LockModel, 0);
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
  v36 = iconSpritesOff->max_length;
  if ( (int)v36 >= 1 )
  {
    v37 = 0;
    while ( v37 < (unsigned int)v36 )
    {
      v38 = iconSpritesOff->m_Items[v37];
      v39 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v63 = v12;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v40, v41, v42, v43, v44, v45);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21352/*"lock_off_{0}"*/, v46, 0);
      if ( !v39 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v39, v38, (System_String_o *)LockModel, 0);
      LODWORD(v36) = iconSpritesOff->max_length;
      if ( (__int64)++v37 >= (int)v36 )
        goto LABEL_28;
    }
    goto LABEL_41;
  }
LABEL_28:
  iconSpritesLock = this->fields.iconSpritesLock;
  if ( !iconSpritesLock )
    goto LABEL_42;
  v48 = iconSpritesLock->max_length;
  if ( (int)v48 >= 1 )
  {
    v49 = 0;
    while ( v49 < (unsigned int)v48 )
    {
      v50 = iconSpritesLock->m_Items[v49];
      LockModel = (MethodInfo *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      if ( !LockModel )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(
                                  (AtlasManagerUnit_o *)LockModel,
                                  v50,
                                  (System_String_o *)StringLiteral_21354/*"lock_stopper"*/,
                                  0);
      LODWORD(v48) = iconSpritesLock->max_length;
      if ( (__int64)++v49 >= (int)v48 )
        goto LABEL_34;
    }
    goto LABEL_41;
  }
LABEL_34:
  iconSpriteGlow = this->fields.iconSpriteGlow;
  if ( !iconSpriteGlow )
LABEL_42:
    sub_1C3E7C0(LockModel, v4);
  v52 = iconSpriteGlow->max_length;
  if ( (int)v52 >= 1 )
  {
    v53 = 0;
    while ( v53 < (unsigned int)v52 )
    {
      v54 = iconSpriteGlow->m_Items[v53];
      v55 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v63 = v12;
      v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v56, v57, v58, v59, v60, v61);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21351/*"lock_light_{0}"*/, v62, 0);
      if ( !v55 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v55, v54, (System_String_o *)LockModel, 0);
      LODWORD(v52) = iconSpriteGlow->max_length;
      if ( (__int64)++v53 >= (int)v52 )
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
  if ( (byte_4C5A8E7 & 1) == 0 )
  {
    sub_1C3E564(&IClassBoardSquareModel_TypeInfo);
    sub_1C3E564(&Method_System_Nullable_AcquireFlag__get_HasValue__);
    this = (ClassBoardLock_o *)sub_1C3E564(&Method_System_Nullable_AcquireFlag__get_Value__);
    byte_4C5A8E7 = 1;
  }
  if ( hasValue )
  {
    v5 = (System_Nullable_Int32Enum__o)&v14;
    Value = System_Nullable_Int32Enum___get_Value(
              v5,
              (const MethodInfo_38DAFB4 *)Method_System_Nullable_AcquireFlag__get_Value__);
  }
  else
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      sub_1C3E7C0(this, handoverFlag);
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
      v11 = sub_1C8ED7C(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15);
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
    sub_1C3E7C0(0, v3);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, v3);
}


IClassBoardLockModel_o *ClassBoardLock__get_LockModel(ClassBoardLock_o *this, const MethodInfo *method)
{
  if ( (byte_4C5A8E5 & 1) == 0 )
  {
    sub_1C3E564(&IClassBoardLockModel_TypeInfo);
    byte_4C5A8E5 = 1;
  }
  return (IClassBoardLockModel_o *)sub_1C3E6A0(this->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo);
}