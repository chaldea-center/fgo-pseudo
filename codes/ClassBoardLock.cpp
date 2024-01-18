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
  __int64 v2; // x3
  ClassBoardLock_o *v3; // x19
  __int64 v4; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x19
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  System_Enum_o *v10; // x19
  _BOOL8 HasFlag; // x0
  const MethodInfo *v12; // x1
  int v13; // [xsp+8h] [xbp-18h] BYREF
  int v14; // [xsp+Ch] [xbp-14h] BYREF

  v3 = this;
  if ( (byte_4189501 & 1) == 0 )
  {
    sub_B2C35C(&AcquireFlag_TypeInfo, method);
    this = (ClassBoardLock_o *)sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v4);
    byte_4189501 = 1;
  }
  SquareModel_k__BackingField = v3->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_14;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v7;
      p_offset += 2;
      if ( v7 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL, v2);
  }
  v14 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
          SquareModel_k__BackingField,
          0LL,
          *(_QWORD *)(p_method + 8));
  v10 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v14);
  v13 = 1;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v13);
  if ( !v10 )
LABEL_14:
    sub_B2C434(this, method);
  HasFlag = System_Enum__HasFlag(v10, (System_Enum_o *)this, 0LL);
  if ( !HasFlag )
    ClassBoardSquare__PlayClickedSe((ClassBoardSquare_o *)HasFlag, v12);
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
  __int64 v10; // x3
  IClassBoardLockModel_c *klass; // x8
  IClassBoardLockModel_o *v12; // x20
  unsigned __int64 v13; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *v16; // x0
  System_String_o *v17; // x20
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x3
  int v20; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4189502 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, v3);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_23651/*"{0}{1}"*/, v6);
    sub_B2C35C(&StringLiteral_15016/*"Unlock"*/, v7);
    byte_4189502 = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    sub_B2C434(0LL, v9);
  klass = LockModel->klass;
  v12 = LockModel;
  if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v13;
      p_offset += 2;
      if ( v13 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(LockModel, IClassBoardSquareModel_TypeInfo, 2LL, v10);
  }
  v20 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(v12, *(_QWORD *)(p_method + 8));
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v17 = System_String__Format_44301068(
          (System_String_o *)StringLiteral_23651/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_15016/*"Unlock"*/,
          v16,
          0LL);
  v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, v17, v18, v19);
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
  __int64 v11; // x3
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v13; // x20
  unsigned __int64 v14; // x10
  IClassBoardSquareModel_c **v15; // x11
  __int64 v16; // x0
  struct UISprite_array *iconSpritesNormal; // x23
  __int64 v18; // x8
  int v19; // w20
  unsigned __int64 v20; // x24
  UISprite_o *v21; // x21
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x22
  Il2CppObject *v23; // x0
  struct UISprite_array *iconSpritesOn; // x23
  __int64 v25; // x8
  unsigned __int64 v26; // x24
  UISprite_o *v27; // x21
  AtlasManagerUnit_o *v28; // x22
  Il2CppObject *v29; // x0
  struct UISprite_array *iconSpritesOff; // x23
  __int64 v31; // x8
  unsigned __int64 v32; // x24
  UISprite_o *v33; // x21
  AtlasManagerUnit_o *v34; // x22
  Il2CppObject *v35; // x0
  struct UISprite_array *iconSpritesLock; // x22
  __int64 v37; // x8
  unsigned __int64 v38; // x23
  UISprite_o *v39; // x21
  struct UISprite_array *iconSpriteGlow; // x22
  __int64 v41; // x8
  unsigned __int64 v42; // x23
  UISprite_o *v43; // x19
  AtlasManagerUnit_o *v44; // x21
  Il2CppObject *v45; // x0
  __int64 v46; // x0
  int v47; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_41894FF & 1) == 0 )
  {
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_20303/*"lock_light_{0}"*/, v4);
    sub_B2C35C(&StringLiteral_20306/*"lock_stopper"*/, v5);
    sub_B2C35C(&StringLiteral_20305/*"lock_on_{0}"*/, v6);
    sub_B2C35C(&StringLiteral_20304/*"lock_off_{0}"*/, v7);
    sub_B2C35C(&StringLiteral_20307/*"lock_{0}"*/, v8);
    byte_41894FF = 1;
  }
  LockModel = (MethodInfo *)ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    goto LABEL_42;
  methodPointer = LockModel->methodPointer;
  v13 = LockModel;
  if ( *((_WORD *)LockModel->methodPointer + 149) )
  {
    v14 = 0LL;
    v15 = (IClassBoardSquareModel_c **)(*((_QWORD *)methodPointer + 22) + 8LL);
    while ( *(v15 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v14;
      v15 += 2;
      if ( v14 >= *((unsigned __int16 *)LockModel->methodPointer + 149) )
        goto LABEL_8;
    }
    v16 = (__int64)methodPointer + 16 * *(_DWORD *)v15 + 344;
  }
  else
  {
LABEL_8:
    v16 = sub_AC5258(LockModel, IClassBoardSquareModel_TypeInfo, 2LL, v11);
  }
  LockModel = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, _QWORD))v16)(v13, *(_QWORD *)(v16 + 8));
  iconSpritesNormal = this->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_42;
  v18 = *(_QWORD *)&iconSpritesNormal->max_length;
  v19 = (int)LockModel;
  if ( (int)v18 >= 1 )
  {
    v20 = 0LL;
    while ( v20 < (unsigned int)v18 )
    {
      v21 = iconSpritesNormal->m_Items[v20];
      IconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v47 = v19;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20307/*"lock_{0}"*/, v23, 0LL);
      if ( !IconAtlasManagerUnit )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(IconAtlasManagerUnit, v21, (System_String_o *)LockModel, 0LL);
      LODWORD(v18) = iconSpritesNormal->max_length;
      if ( (__int64)++v20 >= (int)v18 )
        goto LABEL_16;
    }
LABEL_41:
    v46 = sub_B2C460(LockModel);
    sub_B2C400(v46, 0LL);
  }
LABEL_16:
  iconSpritesOn = this->fields.iconSpritesOn;
  if ( !iconSpritesOn )
    goto LABEL_42;
  v25 = *(_QWORD *)&iconSpritesOn->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    while ( v26 < (unsigned int)v25 )
    {
      v27 = iconSpritesOn->m_Items[v26];
      v28 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v47 = v19;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20305/*"lock_on_{0}"*/, v29, 0LL);
      if ( !v28 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v28, v27, (System_String_o *)LockModel, 0LL);
      LODWORD(v25) = iconSpritesOn->max_length;
      if ( (__int64)++v26 >= (int)v25 )
        goto LABEL_22;
    }
    goto LABEL_41;
  }
LABEL_22:
  iconSpritesOff = this->fields.iconSpritesOff;
  if ( !iconSpritesOff )
    goto LABEL_42;
  v31 = *(_QWORD *)&iconSpritesOff->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    while ( v32 < (unsigned int)v31 )
    {
      v33 = iconSpritesOff->m_Items[v32];
      v34 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v47 = v19;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20304/*"lock_off_{0}"*/, v35, 0LL);
      if ( !v34 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v34, v33, (System_String_o *)LockModel, 0LL);
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
  v37 = *(_QWORD *)&iconSpritesLock->max_length;
  if ( (int)v37 >= 1 )
  {
    v38 = 0LL;
    while ( v38 < (unsigned int)v37 )
    {
      v39 = iconSpritesLock->m_Items[v38];
      LockModel = (MethodInfo *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      if ( !LockModel )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(
                                  (AtlasManagerUnit_o *)LockModel,
                                  v39,
                                  (System_String_o *)StringLiteral_20306/*"lock_stopper"*/,
                                  0LL);
      LODWORD(v37) = iconSpritesLock->max_length;
      if ( (__int64)++v38 >= (int)v37 )
        goto LABEL_34;
    }
    goto LABEL_41;
  }
LABEL_34:
  iconSpriteGlow = this->fields.iconSpriteGlow;
  if ( !iconSpriteGlow )
LABEL_42:
    sub_B2C434(LockModel, v10);
  v41 = *(_QWORD *)&iconSpriteGlow->max_length;
  if ( (int)v41 >= 1 )
  {
    v42 = 0LL;
    while ( v42 < (unsigned int)v41 )
    {
      v43 = iconSpriteGlow->m_Items[v42];
      v44 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v47 = v19;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_20303/*"lock_light_{0}"*/, v45, 0LL);
      if ( !v44 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v44, v43, (System_String_o *)LockModel, 0LL);
      LODWORD(v41) = iconSpriteGlow->max_length;
      if ( (__int64)++v42 >= (int)v41 )
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ClassBoardSquare_o *Value; // x0
  const MethodInfo *v10; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v13; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v16; // w20
  const MethodInfo *v17; // x1
  System_Enum_o *v18; // x21
  const MethodInfo *v19; // x1
  System_Enum_o *v20; // x21
  const MethodInfo *v21; // x1
  System_Enum_o *v22; // x21
  const MethodInfo *v23; // x1
  System_Enum_o *v24; // x20
  const MethodInfo *v25; // x1
  int v26; // [xsp+0h] [xbp-30h] BYREF
  int v27; // [xsp+4h] [xbp-2Ch] BYREF
  System_Nullable_AcquireFlag__o v28; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_T__o v29; // 0:x0.16

  v5 = this;
  v28 = handoverFlag;
  if ( (byte_4189500 & 1) == 0 )
  {
    sub_B2C35C(&AcquireFlag_TypeInfo, handoverFlag);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v6);
    sub_B2C35C(&Method_System_Nullable_AcquireFlag__get_HasValue__, v7);
    this = (ClassBoardLock_o *)sub_B2C35C(&Method_System_Nullable_AcquireFlag__get_Value__, v8);
    byte_4189500 = 1;
  }
  if ( (*(_QWORD *)&handoverFlag & 0xFF00000000LL) != 0 )
  {
    v29.fields.value = (Il2CppObject *)&v28;
    *(_QWORD *)&v29.fields.has_value = Method_System_Nullable_AcquireFlag__get_Value__;
    Value = (ClassBoardSquare_o *)System_Nullable_Int32Enum___get_Value(v29, (const MethodInfo_2151FF8 *)method);
  }
  else
  {
    SquareModel_k__BackingField = v5->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      goto LABEL_28;
    klass = SquareModel_k__BackingField->klass;
    if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v13;
        p_offset += 2;
        if ( v13 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(v5->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL, v3);
    }
    Value = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
                                    SquareModel_k__BackingField,
                                    0LL,
                                    *(_QWORD *)(p_method + 8));
  }
  v16 = (int)Value;
  ClassBoardSquare__SetActiveArrayObject(Value, v5->fields.notCondObjects, 0, v10);
  if ( !v16 )
  {
    ClassBoardSquare__DrawAvailable((ClassBoardSquare_o *)v5, v17);
    return;
  }
  v27 = v16;
  v18 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v27);
  v26 = 1;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v26);
  if ( !v18 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v18, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawAcquired((ClassBoardSquare_o *)v5, v19);
    return;
  }
  v27 = v16;
  v20 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v27);
  v26 = 2;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v26);
  if ( !v20 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v20, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardSquare__DrawNotConnected((ClassBoardSquare_o *)v5, v21);
    return;
  }
  v27 = v16;
  v22 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v27);
  v26 = 4;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v26);
  if ( !v22 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v22, (System_Enum_o *)this, 0LL) )
  {
    ClassBoardLock__DrawNotCond(v5, v23);
    return;
  }
  v27 = v16;
  v24 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v27);
  v26 = 16;
  this = (ClassBoardLock_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v26);
  if ( !v24 )
LABEL_28:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(this, handoverFlag);
  if ( System_Enum__HasFlag(v24, (System_Enum_o *)this, 0LL) )
    ClassBoardSquare__DrawUnacquired((ClassBoardSquare_o *)v5, v25);
}


void __fastcall ClassBoardLock___PlayReleaseEffect_b__13_0(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_B2C434(0LL, method);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, method);
}


IClassBoardLockModel_o *__fastcall ClassBoardLock__get_LockModel(ClassBoardLock_o *this, const MethodInfo *method)
{
  if ( (byte_41894FE & 1) == 0 )
  {
    sub_B2C35C(&IClassBoardLockModel_TypeInfo, method);
    byte_41894FE = 1;
  }
  return (IClassBoardLockModel_o *)sub_B2C41C(this->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo);
}