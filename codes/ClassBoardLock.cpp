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
  unsigned __int64 v5; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v8; // x2
  System_Enum_o *v9; // x19
  __int64 v10; // x2
  _BOOL8 HasFlag; // x0
  const MethodInfo *v12; // x1
  int v13; // [xsp+8h] [xbp-18h] BYREF
  int v14; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4353B0A & 1) == 0 )
  {
    sub_B70694(&AcquireFlag_TypeInfo);
    this = (ClassBoardLock_o *)sub_B70694(&IClassBoardSquareModel_TypeInfo);
    byte_4353B0A = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_14;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v5;
      p_offset += 2;
      if ( v5 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v14 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
          SquareModel_k__BackingField,
          0LL,
          *(_QWORD *)(p_method + 8));
  v9 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v14, v8);
  v13 = 1;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v13, v10);
  if ( !v9 )
LABEL_14:
    sub_B7076C(this, method);
  HasFlag = System_Enum__HasFlag(v9, (System_Enum_o *)this, 0LL);
  if ( !HasFlag )
    ClassBoardSquare__PlayClickedSe((ClassBoardSquare_o *)HasFlag, v12);
}


void __fastcall ClassBoardLock__PlayReleaseEffect(ClassBoardLock_o *this, const MethodInfo *method)
{
  IClassBoardLockModel_o *LockModel; // x0
  __int64 v4; // x1
  IClassBoardLockModel_c *klass; // x8
  IClassBoardLockModel_o *v6; // x20
  unsigned __int64 v7; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v10; // x2
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x3
  int v15; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4353B0B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardLock__PlayReleaseEffect_b__13_0__);
    sub_B70694(&IClassBoardSquareModel_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_24035/*"{0}{1}"*/);
    sub_B70694(&StringLiteral_15203/*"Unlock"*/);
    byte_4353B0B = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    sub_B7076C(0LL, v4);
  klass = LockModel->klass;
  v6 = LockModel;
  if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v7;
      p_offset += 2;
      if ( v7 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
  }
  v15 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(v6, *(_QWORD *)(p_method + 8));
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v10);
  v12 = System_String__Format_44753704(
          (System_String_o *)StringLiteral_24035/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_15203/*"Unlock"*/,
          v11,
          0LL);
  v13 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, v12, v13, v14);
}


void __fastcall ClassBoardLock__SetupIcon(ClassBoardLock_o *this, const MethodInfo *method)
{
  MethodInfo *LockModel; // x0
  __int64 v4; // x1
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v6; // x20
  unsigned __int64 v7; // x10
  IClassBoardSquareModel_c **v8; // x11
  __int64 v9; // x0
  struct UISprite_array *iconSpritesNormal; // x23
  __int64 v11; // x8
  int v12; // w20
  unsigned __int64 v13; // x24
  UISprite_o *v14; // x21
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x22
  __int64 v16; // x2
  Il2CppObject *v17; // x0
  struct UISprite_array *iconSpritesOn; // x23
  __int64 v19; // x8
  unsigned __int64 v20; // x24
  UISprite_o *v21; // x21
  AtlasManagerUnit_o *v22; // x22
  __int64 v23; // x2
  Il2CppObject *v24; // x0
  struct UISprite_array *iconSpritesOff; // x23
  __int64 v26; // x8
  unsigned __int64 v27; // x24
  UISprite_o *v28; // x21
  AtlasManagerUnit_o *v29; // x22
  __int64 v30; // x2
  Il2CppObject *v31; // x0
  struct UISprite_array *iconSpritesLock; // x22
  __int64 v33; // x8
  unsigned __int64 v34; // x23
  UISprite_o *v35; // x21
  struct UISprite_array *iconSpriteGlow; // x22
  __int64 v37; // x8
  unsigned __int64 v38; // x23
  UISprite_o *v39; // x19
  AtlasManagerUnit_o *v40; // x21
  __int64 v41; // x2
  Il2CppObject *v42; // x0
  __int64 v43; // x0
  int v44; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4353B08 & 1) == 0 )
  {
    sub_B70694(&IClassBoardSquareModel_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_20622/*"lock_light_{0}"*/);
    sub_B70694(&StringLiteral_20625/*"lock_stopper"*/);
    sub_B70694(&StringLiteral_20624/*"lock_on_{0}"*/);
    sub_B70694(&StringLiteral_20623/*"lock_off_{0}"*/);
    sub_B70694(&StringLiteral_20626/*"lock_{0}"*/);
    byte_4353B08 = 1;
  }
  LockModel = (MethodInfo *)ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    goto LABEL_42;
  methodPointer = LockModel->methodPointer;
  v6 = LockModel;
  if ( *((_WORD *)LockModel->methodPointer + 149) )
  {
    v7 = 0LL;
    v8 = (IClassBoardSquareModel_c **)(*((_QWORD *)methodPointer + 22) + 8LL);
    while ( *(v8 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v7;
      v8 += 2;
      if ( v7 >= *((unsigned __int16 *)LockModel->methodPointer + 149) )
        goto LABEL_8;
    }
    v9 = (__int64)methodPointer + 16 * *(_DWORD *)v8 + 344;
  }
  else
  {
LABEL_8:
    v9 = sub_B08590(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
  }
  LockModel = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8));
  iconSpritesNormal = this->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_42;
  v11 = *(_QWORD *)&iconSpritesNormal->max_length;
  v12 = (int)LockModel;
  if ( (int)v11 >= 1 )
  {
    v13 = 0LL;
    while ( v13 < (unsigned int)v11 )
    {
      v14 = iconSpritesNormal->m_Items[v13];
      IconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v44 = v12;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v16);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20626/*"lock_{0}"*/, v17, 0LL);
      if ( !IconAtlasManagerUnit )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(IconAtlasManagerUnit, v14, (System_String_o *)LockModel, 0LL);
      LODWORD(v11) = iconSpritesNormal->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_16;
    }
LABEL_41:
    v43 = sub_B70798(LockModel);
    sub_B70738(v43, 0LL);
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
      v44 = v12;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v23);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20624/*"lock_on_{0}"*/, v24, 0LL);
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
  v26 = *(_QWORD *)&iconSpritesOff->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    while ( v27 < (unsigned int)v26 )
    {
      v28 = iconSpritesOff->m_Items[v27];
      v29 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v44 = v12;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v30);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20623/*"lock_off_{0}"*/, v31, 0LL);
      if ( !v29 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v29, v28, (System_String_o *)LockModel, 0LL);
      LODWORD(v26) = iconSpritesOff->max_length;
      if ( (__int64)++v27 >= (int)v26 )
        goto LABEL_28;
    }
    goto LABEL_41;
  }
LABEL_28:
  iconSpritesLock = this->fields.iconSpritesLock;
  if ( !iconSpritesLock )
    goto LABEL_42;
  v33 = *(_QWORD *)&iconSpritesLock->max_length;
  if ( (int)v33 >= 1 )
  {
    v34 = 0LL;
    while ( v34 < (unsigned int)v33 )
    {
      v35 = iconSpritesLock->m_Items[v34];
      LockModel = (MethodInfo *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      if ( !LockModel )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(
                                  (AtlasManagerUnit_o *)LockModel,
                                  v35,
                                  (System_String_o *)StringLiteral_20625/*"lock_stopper"*/,
                                  0LL);
      LODWORD(v33) = iconSpritesLock->max_length;
      if ( (__int64)++v34 >= (int)v33 )
        goto LABEL_34;
    }
    goto LABEL_41;
  }
LABEL_34:
  iconSpriteGlow = this->fields.iconSpriteGlow;
  if ( !iconSpriteGlow )
LABEL_42:
    sub_B7076C(LockModel, v4);
  v37 = *(_QWORD *)&iconSpriteGlow->max_length;
  if ( (int)v37 >= 1 )
  {
    v38 = 0LL;
    while ( v38 < (unsigned int)v37 )
    {
      v39 = iconSpriteGlow->m_Items[v38];
      v40 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v44 = v12;
      v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v41);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20622/*"lock_light_{0}"*/, v42, 0LL);
      if ( !v40 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v40, v39, (System_String_o *)LockModel, 0LL);
      LODWORD(v37) = iconSpriteGlow->max_length;
      if ( (__int64)++v38 >= (int)v37 )
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
  ClassBoardSquare_o *Value; // x0
  const MethodInfo *v6; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v9; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v12; // w20
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  System_Enum_o *v15; // x21
  __int64 v16; // x2
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  System_Enum_o *v19; // x21
  __int64 v20; // x2
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  System_Enum_o *v23; // x21
  __int64 v24; // x2
  const MethodInfo *v25; // x1
  __int64 v26; // x2
  System_Enum_o *v27; // x20
  __int64 v28; // x2
  const MethodInfo *v29; // x1
  int v30; // [xsp+0h] [xbp-30h] BYREF
  int v31; // [xsp+4h] [xbp-2Ch] BYREF
  System_Nullable_AcquireFlag__o v32; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_T__o v33; // 0:x0.16

  v4 = this;
  v32 = handoverFlag;
  if ( (byte_4353B09 & 1) == 0 )
  {
    sub_B70694(&AcquireFlag_TypeInfo);
    sub_B70694(&IClassBoardSquareModel_TypeInfo);
    sub_B70694(&Method_System_Nullable_AcquireFlag__get_HasValue__);
    this = (ClassBoardLock_o *)sub_B70694(&Method_System_Nullable_AcquireFlag__get_Value__);
    byte_4353B09 = 1;
  }
  if ( (*(_QWORD *)&handoverFlag & 0xFF00000000LL) != 0 )
  {
    v33.fields.value = (Il2CppObject *)&v32;
    *(_QWORD *)&v33.fields.has_value = Method_System_Nullable_AcquireFlag__get_Value__;
    Value = (ClassBoardSquare_o *)System_Nullable_Int32Enum___get_Value(v33, (const MethodInfo_2438540 *)method);
  }
  else
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
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
      p_method = sub_B08590(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    Value = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
                                    SquareModel_k__BackingField,
                                    0LL,
                                    *(_QWORD *)(p_method + 8));
  }
  v12 = (int)Value;
  ClassBoardSquare__SetActiveArrayObject(Value, v4->fields.notCondObjects, 0, v6);
  if ( !v12 )
  {
    ClassBoardSquare__DrawAvailable((ClassBoardSquare_o *)v4, v13);
    return;
  }
  v31 = v12;
  v15 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v31, v14);
  v30 = 1;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v30, v16);
  if ( !v15 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v15, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawAcquired((ClassBoardSquare_o *)v4, v17);
    return;
  }
  v31 = v12;
  v19 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v31, v18);
  v30 = 2;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v30, v20);
  if ( !v19 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v19, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawNotConnected((ClassBoardSquare_o *)v4, v21);
    return;
  }
  v31 = v12;
  v23 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v31, v22);
  v30 = 4;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v30, v24);
  if ( !v23 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v23, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardLock__DrawNotCond(v4, v25);
    return;
  }
  v31 = v12;
  v27 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v31, v26);
  v30 = 16;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v30, v28);
  if ( !v27 )
LABEL_28:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7076C)(this, handoverFlag);
  if ( System_Enum__HasFlag(v27, (System_Enum_o *)this, 0LL) )
    ClassBoardSquare__DrawUnacquired((ClassBoardSquare_o *)v4, v29);
}


void __fastcall ClassBoardLock___PlayReleaseEffect_b__13_0(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_B7076C(0LL, method);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, method);
}


IClassBoardLockModel_o *__fastcall ClassBoardLock__get_LockModel(ClassBoardLock_o *this, const MethodInfo *method)
{
  if ( (byte_4353B07 & 1) == 0 )
  {
    sub_B70694(&IClassBoardLockModel_TypeInfo);
    byte_4353B07 = 1;
  }
  return (IClassBoardLockModel_o *)sub_B70754(this->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo);
}