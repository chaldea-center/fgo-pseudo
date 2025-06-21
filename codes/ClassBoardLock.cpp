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
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v5; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0

  v2 = (ClassBoardSquare_o *)this;
  if ( (byte_4B1FE04 & 1) == 0 )
  {
    this = (ClassBoardLock_o *)sub_1BCAFF8(&IClassBoardSquareModel_TypeInfo, method);
    byte_4B1FE04 = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1BCB254(this, method);
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
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1B560(v2->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
          SquareModel_k__BackingField,
          0LL,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
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
  int v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1FE05 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, v3);
    sub_1BCAFF8(&IClassBoardSquareModel_TypeInfo, v4);
    sub_1BCAFF8(&int_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_24988/*"{0}{1}"*/, v6);
    sub_1BCAFF8(&StringLiteral_15013/*"Unlock"*/, v7);
    byte_4B1FE05 = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    sub_1BCB254(0LL, v9);
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
    p_method = sub_1C1B560(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
  }
  v21 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(v12, *(_QWORD *)(p_method + 8));
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v15, v16, v17);
  v19 = System_String__Format_62491716(
          (System_String_o *)StringLiteral_24988/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_15013/*"Unlock"*/,
          v18,
          0LL);
  v20 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, v19, 0, v20, 0LL);
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
  __int64 v16; // x2
  struct UISprite_array *iconSpritesNormal; // x24
  __int64 v18; // x8
  int v19; // w20
  unsigned __int64 v20; // x25
  UISprite_o *v21; // x21
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  struct UISprite_array *iconSpritesOn; // x24
  __int64 v28; // x8
  unsigned __int64 v29; // x25
  UISprite_o *v30; // x21
  AtlasManagerUnit_o *v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  struct UISprite_array *iconSpritesOff; // x24
  __int64 v37; // x8
  unsigned __int64 v38; // x25
  UISprite_o *v39; // x21
  AtlasManagerUnit_o *v40; // x22
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x0
  struct UISprite_array *iconSpritesLock; // x22
  __int64 v46; // x8
  unsigned __int64 v47; // x24
  UISprite_o *v48; // x21
  struct UISprite_array *iconSpriteGlow; // x22
  __int64 v50; // x8
  unsigned __int64 v51; // x24
  UISprite_o *v52; // x19
  AtlasManagerUnit_o *v53; // x21
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  int v58; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B1FE02 & 1) == 0 )
  {
    sub_1BCAFF8(&IClassBoardSquareModel_TypeInfo, method);
    sub_1BCAFF8(&int_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_21141/*"lock_light_{0}"*/, v4);
    sub_1BCAFF8(&StringLiteral_21144/*"lock_stopper"*/, v5);
    sub_1BCAFF8(&StringLiteral_21143/*"lock_on_{0}"*/, v6);
    sub_1BCAFF8(&StringLiteral_21142/*"lock_off_{0}"*/, v7);
    sub_1BCAFF8(&StringLiteral_21145/*"lock_{0}"*/, v8);
    byte_4B1FE02 = 1;
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
    v15 = sub_1C1B560(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
  }
  LockModel = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8));
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
      v58 = v19;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v23, v24, v25);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21145/*"lock_{0}"*/, v26, 0LL);
      if ( !IconAtlasManagerUnit )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(IconAtlasManagerUnit, v21, (System_String_o *)LockModel, 0LL);
      LODWORD(v18) = iconSpritesNormal->max_length;
      if ( (__int64)++v20 >= (int)v18 )
        goto LABEL_16;
    }
LABEL_41:
    sub_1BCB25C(LockModel, v10, v16);
  }
LABEL_16:
  iconSpritesOn = this->fields.iconSpritesOn;
  if ( !iconSpritesOn )
    goto LABEL_42;
  v28 = *(_QWORD *)&iconSpritesOn->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0LL;
    while ( v29 < (unsigned int)v28 )
    {
      v30 = iconSpritesOn->m_Items[v29];
      v31 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v58 = v19;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v32, v33, v34);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21143/*"lock_on_{0}"*/, v35, 0LL);
      if ( !v31 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v31, v30, (System_String_o *)LockModel, 0LL);
      LODWORD(v28) = iconSpritesOn->max_length;
      if ( (__int64)++v29 >= (int)v28 )
        goto LABEL_22;
    }
    goto LABEL_41;
  }
LABEL_22:
  iconSpritesOff = this->fields.iconSpritesOff;
  if ( !iconSpritesOff )
    goto LABEL_42;
  v37 = *(_QWORD *)&iconSpritesOff->max_length;
  if ( (int)v37 >= 1 )
  {
    v38 = 0LL;
    while ( v38 < (unsigned int)v37 )
    {
      v39 = iconSpritesOff->m_Items[v38];
      v40 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v58 = v19;
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v41, v42, v43);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21142/*"lock_off_{0}"*/, v44, 0LL);
      if ( !v40 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v40, v39, (System_String_o *)LockModel, 0LL);
      LODWORD(v37) = iconSpritesOff->max_length;
      if ( (__int64)++v38 >= (int)v37 )
        goto LABEL_28;
    }
    goto LABEL_41;
  }
LABEL_28:
  iconSpritesLock = this->fields.iconSpritesLock;
  if ( !iconSpritesLock )
    goto LABEL_42;
  v46 = *(_QWORD *)&iconSpritesLock->max_length;
  if ( (int)v46 >= 1 )
  {
    v47 = 0LL;
    while ( v47 < (unsigned int)v46 )
    {
      v48 = iconSpritesLock->m_Items[v47];
      LockModel = (MethodInfo *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      if ( !LockModel )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(
                                  (AtlasManagerUnit_o *)LockModel,
                                  v48,
                                  (System_String_o *)StringLiteral_21144/*"lock_stopper"*/,
                                  0LL);
      LODWORD(v46) = iconSpritesLock->max_length;
      if ( (__int64)++v47 >= (int)v46 )
        goto LABEL_34;
    }
    goto LABEL_41;
  }
LABEL_34:
  iconSpriteGlow = this->fields.iconSpriteGlow;
  if ( !iconSpriteGlow )
LABEL_42:
    sub_1BCB254(LockModel, v10);
  v50 = *(_QWORD *)&iconSpriteGlow->max_length;
  if ( (int)v50 >= 1 )
  {
    v51 = 0LL;
    while ( v51 < (unsigned int)v50 )
    {
      v52 = iconSpriteGlow->m_Items[v51];
      v53 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v58 = v19;
      v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v54, v55, v56);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21141/*"lock_light_{0}"*/, v57, 0LL);
      if ( !v53 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v53, v52, (System_String_o *)LockModel, 0LL);
      LODWORD(v50) = iconSpriteGlow->max_length;
      if ( (__int64)++v51 >= (int)v50 )
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
  int32_t Value; // w0
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v10; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int32_t v13; // w20
  const MethodInfo *v14; // x1
  System_Nullable_AcquireFlag__o v15; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_Int32Enum__o v16; // 0:x0.8

  hasValue = handoverFlag.fields.hasValue;
  v4 = this;
  v15 = handoverFlag;
  if ( (byte_4B1FE03 & 1) == 0 )
  {
    sub_1BCAFF8(&IClassBoardSquareModel_TypeInfo, handoverFlag);
    sub_1BCAFF8(&Method_System_Nullable_AcquireFlag__get_HasValue__, v5);
    this = (ClassBoardLock_o *)sub_1BCAFF8(&Method_System_Nullable_AcquireFlag__get_Value__, v6);
    byte_4B1FE03 = 1;
  }
  if ( hasValue )
  {
    v16 = (System_Nullable_Int32Enum__o)&v15;
    Value = System_Nullable_Int32Enum___get_Value(
              v16,
              (const MethodInfo_37D91FC *)Method_System_Nullable_AcquireFlag__get_Value__);
  }
  else
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BCB254)(this, handoverFlag);
    klass = SquareModel_k__BackingField->klass;
    v10 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v10;
        p_offset += 2;
        if ( !v10 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 15].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1B560(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 15LL);
    }
    Value = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
              SquareModel_k__BackingField,
              0LL,
              *(_QWORD *)(p_method + 8));
  }
  v13 = Value;
  ClassBoardSquare__SetActiveArrayObject((ClassBoardSquare_o *)v4, v4->fields.notCondObjects, 0, 0LL);
  if ( v13 )
  {
    if ( (v13 & 1) != 0 )
    {
      ClassBoardSquare__DrawAcquired((ClassBoardSquare_o *)v4, 0LL);
    }
    else if ( (v13 & 2) != 0 )
    {
      ClassBoardSquare__DrawNotConnected((ClassBoardSquare_o *)v4, 0LL);
    }
    else if ( (v13 & 4) != 0 )
    {
      ClassBoardLock__DrawNotCond(v4, v14);
    }
    else if ( (v13 & 0x10) != 0 )
    {
      ClassBoardSquare__DrawUnacquired((ClassBoardSquare_o *)v4, 0LL);
    }
  }
  else
  {
    ClassBoardSquare__DrawAvailable((ClassBoardSquare_o *)v4, 0LL);
  }
}


void __fastcall ClassBoardLock___PlayReleaseEffect_b__13_0(ClassBoardLock_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  ClassBoardSquare__SetUpdateDraw((ClassBoardSquare_o *)this, 0LL);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  if ( !releaseEffectPlayer )
    sub_1BCB254(0LL, v3);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, v3);
}


IClassBoardLockModel_o *__fastcall ClassBoardLock__get_LockModel(ClassBoardLock_o *this, const MethodInfo *method)
{
  if ( (byte_4B1FE01 & 1) == 0 )
  {
    sub_1BCAFF8(&IClassBoardLockModel_TypeInfo, method);
    byte_4B1FE01 = 1;
  }
  return (IClassBoardLockModel_o *)sub_1BCB134(this->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo);
}