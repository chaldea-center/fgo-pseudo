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
  if ( (byte_4C2AD02 & 1) == 0 )
  {
    this = (ClassBoardLock_o *)sub_1C2D490(&IClassBoardSquareModel_TypeInfo);
    byte_4C2AD02 = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1C2D6EC(this, method);
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
    v7 = sub_1C7DCA8(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15);
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x4
  int v17; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C2AD03 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ClassBoardLock__PlayReleaseEffect_b__13_0__);
    sub_1C2D490(&IClassBoardSquareModel_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_25185/*"{0}{1}"*/);
    sub_1C2D490(&StringLiteral_15131/*"Unlock"*/);
    byte_4C2AD03 = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    sub_1C2D6EC(0, v4);
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
    v9 = sub_1C7DCA8(LockModel, IClassBoardSquareModel_TypeInfo, 2);
  }
  v17 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v9)(v7, *(_QWORD *)(v9 + 8));
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v10, v11, v12);
  v14 = System_String__Format_63499156(
          (System_String_o *)StringLiteral_25185/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_15131/*"Unlock"*/,
          v13,
          0);
  v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, 0);
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, v14, 0, v15, v16);
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
  __int64 v10; // x2
  struct UISprite_array *iconSpritesNormal; // x24
  il2cpp_array_size_t max_length; // x8
  int v13; // w20
  unsigned __int64 v14; // x25
  UISprite_o *v15; // x21
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x22
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  struct UISprite_array *iconSpritesOn; // x24
  il2cpp_array_size_t v22; // x8
  unsigned __int64 v23; // x25
  UISprite_o *v24; // x21
  AtlasManagerUnit_o *v25; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  struct UISprite_array *iconSpritesOff; // x24
  il2cpp_array_size_t v31; // x8
  unsigned __int64 v32; // x25
  UISprite_o *v33; // x21
  AtlasManagerUnit_o *v34; // x22
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  struct UISprite_array *iconSpritesLock; // x22
  il2cpp_array_size_t v40; // x8
  unsigned __int64 v41; // x24
  UISprite_o *v42; // x21
  struct UISprite_array *iconSpriteGlow; // x22
  il2cpp_array_size_t v44; // x8
  unsigned __int64 v45; // x24
  UISprite_o *v46; // x19
  AtlasManagerUnit_o *v47; // x21
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x0
  int v52; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C2AD00 & 1) == 0 )
  {
    sub_1C2D490(&IClassBoardSquareModel_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_21318/*"lock_light_{0}"*/);
    sub_1C2D490(&StringLiteral_21321/*"lock_stopper"*/);
    sub_1C2D490(&StringLiteral_21320/*"lock_on_{0}"*/);
    sub_1C2D490(&StringLiteral_21319/*"lock_off_{0}"*/);
    sub_1C2D490(&StringLiteral_21322/*"lock_{0}"*/);
    byte_4C2AD00 = 1;
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
    v9 = sub_1C7DCA8(LockModel, IClassBoardSquareModel_TypeInfo, 2);
  }
  LockModel = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8));
  iconSpritesNormal = this->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_42;
  max_length = iconSpritesNormal->max_length;
  v13 = (int)LockModel;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    while ( v14 < (unsigned int)max_length )
    {
      v15 = iconSpritesNormal->m_Items[v14];
      IconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v52 = v13;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v17, v18, v19);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21322/*"lock_{0}"*/, v20, 0);
      if ( !IconAtlasManagerUnit )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(IconAtlasManagerUnit, v15, (System_String_o *)LockModel, 0);
      LODWORD(max_length) = iconSpritesNormal->max_length;
      if ( (__int64)++v14 >= (int)max_length )
        goto LABEL_16;
    }
LABEL_41:
    sub_1C2D6F4(LockModel, v4, v10);
  }
LABEL_16:
  iconSpritesOn = this->fields.iconSpritesOn;
  if ( !iconSpritesOn )
    goto LABEL_42;
  v22 = iconSpritesOn->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = 0;
    while ( v23 < (unsigned int)v22 )
    {
      v24 = iconSpritesOn->m_Items[v23];
      v25 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v52 = v13;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v26, v27, v28);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21320/*"lock_on_{0}"*/, v29, 0);
      if ( !v25 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v25, v24, (System_String_o *)LockModel, 0);
      LODWORD(v22) = iconSpritesOn->max_length;
      if ( (__int64)++v23 >= (int)v22 )
        goto LABEL_22;
    }
    goto LABEL_41;
  }
LABEL_22:
  iconSpritesOff = this->fields.iconSpritesOff;
  if ( !iconSpritesOff )
    goto LABEL_42;
  v31 = iconSpritesOff->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0;
    while ( v32 < (unsigned int)v31 )
    {
      v33 = iconSpritesOff->m_Items[v32];
      v34 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v52 = v13;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v35, v36, v37);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21319/*"lock_off_{0}"*/, v38, 0);
      if ( !v34 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v34, v33, (System_String_o *)LockModel, 0);
      LODWORD(v31) = iconSpritesOff->max_length;
      if ( (__int64)++v32 >= (int)v31 )
        goto LABEL_28;
    }
    goto LABEL_41;
  }
LABEL_28:
  iconSpritesLock = this->fields.iconSpritesLock;
  if ( !iconSpritesLock )
    goto LABEL_42;
  v40 = iconSpritesLock->max_length;
  if ( (int)v40 >= 1 )
  {
    v41 = 0;
    while ( v41 < (unsigned int)v40 )
    {
      v42 = iconSpritesLock->m_Items[v41];
      LockModel = (MethodInfo *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      if ( !LockModel )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(
                                  (AtlasManagerUnit_o *)LockModel,
                                  v42,
                                  (System_String_o *)StringLiteral_21321/*"lock_stopper"*/,
                                  0);
      LODWORD(v40) = iconSpritesLock->max_length;
      if ( (__int64)++v41 >= (int)v40 )
        goto LABEL_34;
    }
    goto LABEL_41;
  }
LABEL_34:
  iconSpriteGlow = this->fields.iconSpriteGlow;
  if ( !iconSpriteGlow )
LABEL_42:
    sub_1C2D6EC(LockModel, v4);
  v44 = iconSpriteGlow->max_length;
  if ( (int)v44 >= 1 )
  {
    v45 = 0;
    while ( v45 < (unsigned int)v44 )
    {
      v46 = iconSpriteGlow->m_Items[v45];
      v47 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v52 = v13;
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v48, v49, v50);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21318/*"lock_light_{0}"*/, v51, 0);
      if ( !v47 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v47, v46, (System_String_o *)LockModel, 0);
      LODWORD(v44) = iconSpriteGlow->max_length;
      if ( (__int64)++v45 >= (int)v44 )
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
  if ( (byte_4C2AD01 & 1) == 0 )
  {
    sub_1C2D490(&IClassBoardSquareModel_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_AcquireFlag__get_HasValue__);
    this = (ClassBoardLock_o *)sub_1C2D490(&Method_System_Nullable_AcquireFlag__get_Value__);
    byte_4C2AD01 = 1;
  }
  if ( hasValue )
  {
    v5 = (System_Nullable_Int32Enum__o)&v15;
    Value = (ClassBoardSquare_o *)System_Nullable_Int32Enum___get_Value(
                                    v5,
                                    (const MethodInfo_38AF6D8 *)Method_System_Nullable_AcquireFlag__get_Value__);
  }
  else
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C2D6EC)(this, handoverFlag);
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
      v12 = sub_1C7DCA8(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15);
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
    sub_1C2D6EC(0, method);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, 0);
}


IClassBoardLockModel_o *ClassBoardLock__get_LockModel(ClassBoardLock_o *this, const MethodInfo *method)
{
  if ( (byte_4C2ACFF & 1) == 0 )
  {
    sub_1C2D490(&IClassBoardLockModel_TypeInfo);
    byte_4C2ACFF = 1;
  }
  return (IClassBoardLockModel_o *)sub_1C2D5CC(this->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo);
}