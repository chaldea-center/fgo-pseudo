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
  __int64 v2; // x3
  ClassBoardSquare_o *v3; // x19
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v6; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  System_Enum_o *v9; // x20
  int v10; // [xsp+8h] [xbp-18h] BYREF
  int v11; // [xsp+Ch] [xbp-14h] BYREF

  v3 = (ClassBoardSquare_o *)this;
  if ( (byte_42B387C & 1) == 0 )
  {
    sub_B52984(&AcquireFlag_TypeInfo);
    this = (ClassBoardLock_o *)sub_B52984(&IClassBoardSquareModel_TypeInfo);
    byte_42B387C = 1;
  }
  SquareModel_k__BackingField = v3->fields._SquareModel_k__BackingField;
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
    p_method = sub_AEB880(v3->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL, v2);
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
    sub_B52A5C(this, method);
  if ( !System_Enum__HasFlag(v9, (System_Enum_o *)this, 0LL) )
    ClassBoardSquare__PlayClickedSe(v3, 0LL);
}


void __fastcall ClassBoardLock__PlayReleaseEffect(ClassBoardLock_o *this, const MethodInfo *method)
{
  IClassBoardLockModel_o *LockModel; // x0
  __int64 v4; // x1
  __int64 v5; // x3
  IClassBoardLockModel_c *klass; // x8
  IClassBoardLockModel_o *v7; // x20
  unsigned __int64 v8; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  System_Action_o *v13; // x21
  int v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B387D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardLock__PlayReleaseEffect_b__13_0__);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_23845/*"{0}{1}"*/);
    sub_B52984(&StringLiteral_15115/*"Unlock"*/);
    byte_42B387D = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    sub_B52A5C(0LL, v4);
  klass = LockModel->klass;
  v7 = LockModel;
  if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v8;
      p_offset += 2;
      if ( v8 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(LockModel, IClassBoardSquareModel_TypeInfo, 2LL, v5);
  }
  v14 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(v7, *(_QWORD *)(p_method + 8));
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12 = System_String__Format_44563852(
          (System_String_o *)StringLiteral_23845/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_15115/*"Unlock"*/,
          v11,
          0LL);
  v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, v12, v13, 0LL);
}


void __fastcall ClassBoardLock__SetupIcon(ClassBoardLock_o *this, const MethodInfo *method)
{
  MethodInfo *LockModel; // x0
  __int64 v4; // x1
  __int64 v5; // x3
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v7; // x20
  unsigned __int64 v8; // x10
  IClassBoardSquareModel_c **v9; // x11
  __int64 v10; // x0
  struct UISprite_array *iconSpritesNormal; // x23
  __int64 v12; // x8
  int v13; // w20
  unsigned __int64 v14; // x24
  UISprite_o *v15; // x21
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x22
  Il2CppObject *v17; // x0
  struct UISprite_array *iconSpritesOn; // x23
  __int64 v19; // x8
  unsigned __int64 v20; // x24
  UISprite_o *v21; // x21
  AtlasManagerUnit_o *v22; // x22
  Il2CppObject *v23; // x0
  struct UISprite_array *iconSpritesOff; // x23
  __int64 v25; // x8
  unsigned __int64 v26; // x24
  UISprite_o *v27; // x21
  AtlasManagerUnit_o *v28; // x22
  Il2CppObject *v29; // x0
  struct UISprite_array *iconSpritesLock; // x22
  __int64 v31; // x8
  unsigned __int64 v32; // x23
  UISprite_o *v33; // x21
  struct UISprite_array *iconSpriteGlow; // x22
  __int64 v35; // x8
  unsigned __int64 v36; // x23
  UISprite_o *v37; // x19
  AtlasManagerUnit_o *v38; // x21
  Il2CppObject *v39; // x0
  __int64 v40; // x0
  int v41; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42B387A & 1) == 0 )
  {
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_20457/*"lock_light_{0}"*/);
    sub_B52984(&StringLiteral_20460/*"lock_stopper"*/);
    sub_B52984(&StringLiteral_20459/*"lock_on_{0}"*/);
    sub_B52984(&StringLiteral_20458/*"lock_off_{0}"*/);
    sub_B52984(&StringLiteral_20461/*"lock_{0}"*/);
    byte_42B387A = 1;
  }
  LockModel = (MethodInfo *)ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    goto LABEL_42;
  methodPointer = LockModel->methodPointer;
  v7 = LockModel;
  if ( *((_WORD *)LockModel->methodPointer + 149) )
  {
    v8 = 0LL;
    v9 = (IClassBoardSquareModel_c **)(*((_QWORD *)methodPointer + 22) + 8LL);
    while ( *(v9 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v8;
      v9 += 2;
      if ( v8 >= *((unsigned __int16 *)LockModel->methodPointer + 149) )
        goto LABEL_8;
    }
    v10 = (__int64)methodPointer + 16 * *(_DWORD *)v9 + 344;
  }
  else
  {
LABEL_8:
    v10 = sub_AEB880(LockModel, IClassBoardSquareModel_TypeInfo, 2LL, v5);
  }
  LockModel = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, _QWORD))v10)(v7, *(_QWORD *)(v10 + 8));
  iconSpritesNormal = this->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_42;
  v12 = *(_QWORD *)&iconSpritesNormal->max_length;
  v13 = (int)LockModel;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( v14 < (unsigned int)v12 )
    {
      v15 = iconSpritesNormal->m_Items[v14];
      IconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v41 = v13;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20461/*"lock_{0}"*/, v17, 0LL);
      if ( !IconAtlasManagerUnit )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(IconAtlasManagerUnit, v15, (System_String_o *)LockModel, 0LL);
      LODWORD(v12) = iconSpritesNormal->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_16;
    }
LABEL_41:
    v40 = sub_B52A88(LockModel);
    sub_B52A28(v40, 0LL);
  }
LABEL_16:
  iconSpritesOn = this->fields.iconSpritesOn;
  if ( !iconSpritesOn )
    goto LABEL_42;
  v19 = *(_QWORD *)&iconSpritesOn->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    while ( v20 < (unsigned int)v19 )
    {
      v21 = iconSpritesOn->m_Items[v20];
      v22 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v41 = v13;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20459/*"lock_on_{0}"*/, v23, 0LL);
      if ( !v22 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v22, v21, (System_String_o *)LockModel, 0LL);
      LODWORD(v19) = iconSpritesOn->max_length;
      if ( (__int64)++v20 >= (int)v19 )
        goto LABEL_22;
    }
    goto LABEL_41;
  }
LABEL_22:
  iconSpritesOff = this->fields.iconSpritesOff;
  if ( !iconSpritesOff )
    goto LABEL_42;
  v25 = *(_QWORD *)&iconSpritesOff->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    while ( v26 < (unsigned int)v25 )
    {
      v27 = iconSpritesOff->m_Items[v26];
      v28 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v41 = v13;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20458/*"lock_off_{0}"*/, v29, 0LL);
      if ( !v28 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v28, v27, (System_String_o *)LockModel, 0LL);
      LODWORD(v25) = iconSpritesOff->max_length;
      if ( (__int64)++v26 >= (int)v25 )
        goto LABEL_28;
    }
    goto LABEL_41;
  }
LABEL_28:
  iconSpritesLock = this->fields.iconSpritesLock;
  if ( !iconSpritesLock )
    goto LABEL_42;
  v31 = *(_QWORD *)&iconSpritesLock->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    while ( v32 < (unsigned int)v31 )
    {
      v33 = iconSpritesLock->m_Items[v32];
      LockModel = (MethodInfo *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      if ( !LockModel )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(
                                  (AtlasManagerUnit_o *)LockModel,
                                  v33,
                                  (System_String_o *)StringLiteral_20460/*"lock_stopper"*/,
                                  0LL);
      LODWORD(v31) = iconSpritesLock->max_length;
      if ( (__int64)++v32 >= (int)v31 )
        goto LABEL_34;
    }
    goto LABEL_41;
  }
LABEL_34:
  iconSpriteGlow = this->fields.iconSpriteGlow;
  if ( !iconSpriteGlow )
LABEL_42:
    sub_B52A5C(LockModel, v4);
  v35 = *(_QWORD *)&iconSpriteGlow->max_length;
  if ( (int)v35 >= 1 )
  {
    v36 = 0LL;
    while ( v36 < (unsigned int)v35 )
    {
      v37 = iconSpriteGlow->m_Items[v36];
      v38 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v41 = v13;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20457/*"lock_light_{0}"*/, v39, 0LL);
      if ( !v38 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v38, v37, (System_String_o *)LockModel, 0LL);
      LODWORD(v35) = iconSpriteGlow->max_length;
      if ( (__int64)++v36 >= (int)v35 )
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
  int32_t Value; // w0
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v9; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v12; // w20
  System_Enum_o *v13; // x21
  System_Enum_o *v14; // x21
  System_Enum_o *v15; // x21
  const MethodInfo *v16; // x1
  System_Enum_o *v17; // x20
  int v18; // [xsp+0h] [xbp-30h] BYREF
  int v19; // [xsp+4h] [xbp-2Ch] BYREF
  System_Nullable_AcquireFlag__o v20; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_T__o v21; // 0:x0.16

  v5 = this;
  v20 = handoverFlag;
  if ( (byte_42B387B & 1) == 0 )
  {
    sub_B52984(&AcquireFlag_TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&Method_System_Nullable_AcquireFlag__get_HasValue__);
    this = (ClassBoardLock_o *)sub_B52984(&Method_System_Nullable_AcquireFlag__get_Value__);
    byte_42B387B = 1;
  }
  if ( (*(_QWORD *)&handoverFlag & 0xFF00000000LL) != 0 )
  {
    v21.fields.value = (Il2CppObject *)&v20;
    *(_QWORD *)&v21.fields.has_value = Method_System_Nullable_AcquireFlag__get_Value__;
    Value = System_Nullable_Int32Enum___get_Value(v21, (const MethodInfo_2171CD0 *)method);
  }
  else
  {
    SquareModel_k__BackingField = v5->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      goto LABEL_28;
    klass = SquareModel_k__BackingField->klass;
    if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v9;
        p_offset += 2;
        if ( v9 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(v5->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL, v3);
    }
    Value = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
              SquareModel_k__BackingField,
              0LL,
              *(_QWORD *)(p_method + 8));
  }
  v12 = Value;
  ClassBoardSquare__SetActiveArrayObject((ClassBoardSquare_o *)v5, v5->fields.notCondObjects, 0, 0LL);
  if ( !v12 )
  {
    ClassBoardSquare__DrawAvailable((ClassBoardSquare_o *)v5, 0LL);
    return;
  }
  v19 = v12;
  v13 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v19);
  v18 = 1;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v18);
  if ( !v13 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v13, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawAcquired((ClassBoardSquare_o *)v5, 0LL);
    return;
  }
  v19 = v12;
  v14 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v19);
  v18 = 2;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v18);
  if ( !v14 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v14, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawNotConnected((ClassBoardSquare_o *)v5, 0LL);
    return;
  }
  v19 = v12;
  v15 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v19);
  v18 = 4;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v18);
  if ( !v15 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v15, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardLock__DrawNotCond(v5, v16);
    return;
  }
  v19 = v12;
  v17 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v19);
  v18 = 16;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v18);
  if ( !v17 )
LABEL_28:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B52A5C)(this, handoverFlag);
  if ( System_Enum__HasFlag(v17, (System_Enum_o *)this, 0LL) )
    ClassBoardSquare__DrawUnacquired((ClassBoardSquare_o *)v5, 0LL);
}


void __fastcall ClassBoardLock___PlayReleaseEffect_b__13_0(ClassBoardLock_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  ClassBoardSquare__SetUpdateDraw((ClassBoardSquare_o *)this, 0LL);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  if ( !releaseEffectPlayer )
    sub_B52A5C(0LL, v3);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, v3);
}


IClassBoardLockModel_o *__fastcall ClassBoardLock__get_LockModel(ClassBoardLock_o *this, const MethodInfo *method)
{
  if ( (byte_42B3879 & 1) == 0 )
  {
    sub_B52984(&IClassBoardLockModel_TypeInfo);
    byte_42B3879 = 1;
  }
  return (IClassBoardLockModel_o *)sub_B52A44(this->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo);
}