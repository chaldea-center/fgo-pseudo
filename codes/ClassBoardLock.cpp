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
  if ( (byte_4BCB069 & 1) == 0 )
  {
    this = (ClassBoardLock_o *)sub_1C1ABD4(&IClassBoardSquareModel_TypeInfo, method);
    byte_4BCB069 = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1C1AE30(this, method);
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
    p_method = sub_1C6CBB4(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
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
  __int64 v9; // x1
  IClassBoardLockModel_c *klass; // x8
  __int64 v11; // x9
  IClassBoardLockModel_o *v12; // x20
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x20
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x3
  int v22; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BCB06A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, v3);
    sub_1C1ABD4(&IClassBoardSquareModel_TypeInfo, v4);
    sub_1C1ABD4(&int_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_25531/*"{0}{1}"*/, v6);
    sub_1C1ABD4(&StringLiteral_15383/*"Unlock"*/, v7);
    byte_4BCB06A = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    sub_1C1AE30(0LL, v9);
  klass = LockModel->klass;
  v11 = *(unsigned __int16 *)(&LockModel->klass->_2.bitflags2 + 3);
  v12 = LockModel;
  if ( *(_WORD *)(&LockModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C6CBB4(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
  }
  v22 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(v12, *(_QWORD *)(p_method + 8));
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v15, v16, v17);
  v19 = System_String__Format_63054740(
          (System_String_o *)StringLiteral_25531/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_15383/*"Unlock"*/,
          v18,
          0LL);
  v20 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, v19, v20, v21);
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
  __int64 v10; // x1
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v12; // x20
  __int64 v13; // x9
  IClassBoardSquareModel_c **v14; // x10
  __int64 v15; // x0
  struct UISprite_array *iconSpritesNormal; // x24
  __int64 v17; // x8
  int v18; // w20
  unsigned __int64 v19; // x25
  UISprite_o *v20; // x21
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x22
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  struct UISprite_array *iconSpritesOn; // x24
  __int64 v27; // x8
  unsigned __int64 v28; // x25
  UISprite_o *v29; // x21
  AtlasManagerUnit_o *v30; // x22
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  struct UISprite_array *iconSpritesOff; // x24
  __int64 v36; // x8
  unsigned __int64 v37; // x25
  UISprite_o *v38; // x21
  AtlasManagerUnit_o *v39; // x22
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x0
  struct UISprite_array *iconSpritesLock; // x22
  __int64 v45; // x8
  unsigned __int64 v46; // x24
  UISprite_o *v47; // x21
  struct UISprite_array *iconSpriteGlow; // x22
  __int64 v49; // x8
  unsigned __int64 v50; // x24
  UISprite_o *v51; // x19
  AtlasManagerUnit_o *v52; // x21
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x0
  int v57; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BCB067 & 1) == 0 )
  {
    sub_1C1ABD4(&IClassBoardSquareModel_TypeInfo, method);
    sub_1C1ABD4(&int_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_21554/*"lock_light_{0}"*/, v4);
    sub_1C1ABD4(&StringLiteral_21557/*"lock_stopper"*/, v5);
    sub_1C1ABD4(&StringLiteral_21556/*"lock_on_{0}"*/, v6);
    sub_1C1ABD4(&StringLiteral_21555/*"lock_off_{0}"*/, v7);
    sub_1C1ABD4(&StringLiteral_21558/*"lock_{0}"*/, v8);
    byte_4BCB067 = 1;
  }
  LockModel = (MethodInfo *)ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    goto LABEL_42;
  methodPointer = LockModel->methodPointer;
  v12 = LockModel;
  v13 = *((unsigned __int16 *)LockModel->methodPointer + 151);
  if ( *((_WORD *)LockModel->methodPointer + 151) )
  {
    v14 = (IClassBoardSquareModel_c **)(*((_QWORD *)methodPointer + 22) + 8LL);
    while ( *(v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      v14 += 2;
      if ( !v13 )
        goto LABEL_8;
    }
    v15 = (__int64)methodPointer + 16 * *(_DWORD *)v14 + 344;
  }
  else
  {
LABEL_8:
    v15 = sub_1C6CBB4(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
  }
  LockModel = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8));
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
      v57 = v18;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v22, v23, v24);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21558/*"lock_{0}"*/, v25, 0LL);
      if ( !IconAtlasManagerUnit )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(IconAtlasManagerUnit, v20, (System_String_o *)LockModel, 0LL);
      LODWORD(v17) = iconSpritesNormal->max_length;
      if ( (__int64)++v19 >= (int)v17 )
        goto LABEL_16;
    }
LABEL_41:
    sub_1C1AE38(LockModel, v10);
  }
LABEL_16:
  iconSpritesOn = this->fields.iconSpritesOn;
  if ( !iconSpritesOn )
    goto LABEL_42;
  v27 = *(_QWORD *)&iconSpritesOn->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = 0LL;
    while ( v28 < (unsigned int)v27 )
    {
      v29 = iconSpritesOn->m_Items[v28];
      v30 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v57 = v18;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v31, v32, v33);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21556/*"lock_on_{0}"*/, v34, 0LL);
      if ( !v30 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v30, v29, (System_String_o *)LockModel, 0LL);
      LODWORD(v27) = iconSpritesOn->max_length;
      if ( (__int64)++v28 >= (int)v27 )
        goto LABEL_22;
    }
    goto LABEL_41;
  }
LABEL_22:
  iconSpritesOff = this->fields.iconSpritesOff;
  if ( !iconSpritesOff )
    goto LABEL_42;
  v36 = *(_QWORD *)&iconSpritesOff->max_length;
  if ( (int)v36 >= 1 )
  {
    v37 = 0LL;
    while ( v37 < (unsigned int)v36 )
    {
      v38 = iconSpritesOff->m_Items[v37];
      v39 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v57 = v18;
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v40, v41, v42);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21555/*"lock_off_{0}"*/, v43, 0LL);
      if ( !v39 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v39, v38, (System_String_o *)LockModel, 0LL);
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
  v45 = *(_QWORD *)&iconSpritesLock->max_length;
  if ( (int)v45 >= 1 )
  {
    v46 = 0LL;
    while ( v46 < (unsigned int)v45 )
    {
      v47 = iconSpritesLock->m_Items[v46];
      LockModel = (MethodInfo *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      if ( !LockModel )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(
                                  (AtlasManagerUnit_o *)LockModel,
                                  v47,
                                  (System_String_o *)StringLiteral_21557/*"lock_stopper"*/,
                                  0LL);
      LODWORD(v45) = iconSpritesLock->max_length;
      if ( (__int64)++v46 >= (int)v45 )
        goto LABEL_34;
    }
    goto LABEL_41;
  }
LABEL_34:
  iconSpriteGlow = this->fields.iconSpriteGlow;
  if ( !iconSpriteGlow )
LABEL_42:
    sub_1C1AE30(LockModel, v10);
  v49 = *(_QWORD *)&iconSpriteGlow->max_length;
  if ( (int)v49 >= 1 )
  {
    v50 = 0LL;
    while ( v50 < (unsigned int)v49 )
    {
      v51 = iconSpriteGlow->m_Items[v50];
      v52 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v57 = v18;
      v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v53, v54, v55);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21554/*"lock_light_{0}"*/, v56, 0LL);
      if ( !v52 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v52, v51, (System_String_o *)LockModel, 0LL);
      LODWORD(v49) = iconSpriteGlow->max_length;
      if ( (__int64)++v50 >= (int)v49 )
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
  if ( (byte_4BCB068 & 1) == 0 )
  {
    sub_1C1ABD4(&IClassBoardSquareModel_TypeInfo, handoverFlag);
    sub_1C1ABD4(&Method_System_Nullable_AcquireFlag__get_HasValue__, v5);
    this = (ClassBoardLock_o *)sub_1C1ABD4(&Method_System_Nullable_AcquireFlag__get_Value__, v6);
    byte_4BCB068 = 1;
  }
  if ( hasValue )
  {
    v17 = (System_Nullable_Int32Enum__o)&v16;
    Value = (ClassBoardSquare_o *)System_Nullable_Int32Enum___get_Value(
                                    v17,
                                    (const MethodInfo_37590D8 *)Method_System_Nullable_AcquireFlag__get_Value__);
  }
  else
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C1AE30)(this, handoverFlag);
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
      p_method = sub_1C6CBB4(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
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
    sub_1C1AE30(0LL, method);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, method);
}


IClassBoardLockModel_o *__fastcall ClassBoardLock__get_LockModel(ClassBoardLock_o *this, const MethodInfo *method)
{
  if ( (byte_4BCB066 & 1) == 0 )
  {
    sub_1C1ABD4(&IClassBoardLockModel_TypeInfo, method);
    byte_4BCB066 = 1;
  }
  return (IClassBoardLockModel_o *)sub_1C1AD10(this->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo);
}