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
  __int64 v2; // x2
  ClassBoardLock_o *v3; // x19
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x19
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  ClassBoardSquare_o *v9; // x0
  const MethodInfo *v10; // x1

  v3 = this;
  if ( (byte_4B196D6 & 1) == 0 )
  {
    this = (ClassBoardLock_o *)sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, method, v2);
    byte_4B196D6 = 1;
  }
  SquareModel_k__BackingField = v3->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1BCAA3C(this, method);
  klass = SquareModel_k__BackingField->klass;
  v6 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v9 = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
                               SquareModel_k__BackingField,
                               0LL,
                               *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v9 & 1) == 0 )
    ClassBoardSquare__PlayClickedSe(v9, v10);
}


void __fastcall ClassBoardLock__PlayReleaseEffect(ClassBoardLock_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  IClassBoardLockModel_o *LockModel; // x0
  __int64 v15; // x1
  IClassBoardLockModel_c *klass; // x8
  __int64 v17; // x9
  IClassBoardLockModel_o *v18; // x20
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *v21; // x0
  System_String_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x3
  int v28; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B196D7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, v4, v5);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_25361/*"{0}{1}"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_15297/*"Unlock"*/, v12, v13);
    byte_4B196D7 = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    sub_1BCAA3C(0LL, v15);
  klass = LockModel->klass;
  v17 = *(unsigned __int16 *)(&LockModel->klass->_2.bitflags2 + 3);
  v18 = LockModel;
  if ( *(_WORD *)(&LockModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v17;
      p_offset += 2;
      if ( !v17 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
  }
  v28 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(v18, *(_QWORD *)(p_method + 8));
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v22 = System_String__Format_62415592(
          (System_String_o *)StringLiteral_25361/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_15297/*"Unlock"*/,
          v21,
          0LL);
  v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, v22, v26, v27);
}


void __fastcall ClassBoardLock__SetupIcon(ClassBoardLock_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  MethodInfo *LockModel; // x0
  __int64 v17; // x1
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v19; // x20
  __int64 v20; // x9
  IClassBoardSquareModel_c **v21; // x10
  __int64 v22; // x0
  struct UISprite_array *iconSpritesNormal; // x24
  __int64 v24; // x8
  int v25; // w20
  unsigned __int64 v26; // x25
  UISprite_o *v27; // x21
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x22
  Il2CppObject *v29; // x0
  struct UISprite_array *iconSpritesOn; // x24
  __int64 v31; // x8
  unsigned __int64 v32; // x25
  UISprite_o *v33; // x21
  AtlasManagerUnit_o *v34; // x22
  Il2CppObject *v35; // x0
  struct UISprite_array *iconSpritesOff; // x24
  __int64 v37; // x8
  unsigned __int64 v38; // x25
  UISprite_o *v39; // x21
  AtlasManagerUnit_o *v40; // x22
  Il2CppObject *v41; // x0
  struct UISprite_array *iconSpritesLock; // x22
  __int64 v43; // x8
  unsigned __int64 v44; // x24
  UISprite_o *v45; // x21
  struct UISprite_array *iconSpriteGlow; // x22
  __int64 v47; // x8
  unsigned __int64 v48; // x24
  UISprite_o *v49; // x19
  AtlasManagerUnit_o *v50; // x21
  Il2CppObject *v51; // x0
  int v52; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B196D4 & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_21420/*"lock_light_{0}"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_21423/*"lock_stopper"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_21422/*"lock_on_{0}"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_21421/*"lock_off_{0}"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_21424/*"lock_{0}"*/, v14, v15);
    byte_4B196D4 = 1;
  }
  LockModel = (MethodInfo *)ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    goto LABEL_42;
  methodPointer = LockModel->methodPointer;
  v19 = LockModel;
  v20 = *((unsigned __int16 *)LockModel->methodPointer + 151);
  if ( *((_WORD *)LockModel->methodPointer + 151) )
  {
    v21 = (IClassBoardSquareModel_c **)(*((_QWORD *)methodPointer + 22) + 8LL);
    while ( *(v21 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v20;
      v21 += 2;
      if ( !v20 )
        goto LABEL_8;
    }
    v22 = (__int64)methodPointer + 16 * *(_DWORD *)v21 + 344;
  }
  else
  {
LABEL_8:
    v22 = sub_1C1C7C0(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
  }
  LockModel = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  iconSpritesNormal = this->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_42;
  v24 = *(_QWORD *)&iconSpritesNormal->max_length;
  v25 = (int)LockModel;
  if ( (int)v24 >= 1 )
  {
    v26 = 0LL;
    while ( v26 < (unsigned int)v24 )
    {
      v27 = iconSpritesNormal->m_Items[v26];
      IconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v52 = v25;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21424/*"lock_{0}"*/, v29, 0LL);
      if ( !IconAtlasManagerUnit )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(IconAtlasManagerUnit, v27, (System_String_o *)LockModel, 0LL);
      LODWORD(v24) = iconSpritesNormal->max_length;
      if ( (__int64)++v26 >= (int)v24 )
        goto LABEL_16;
    }
LABEL_41:
    sub_1BCAA44(LockModel, v17);
  }
LABEL_16:
  iconSpritesOn = this->fields.iconSpritesOn;
  if ( !iconSpritesOn )
    goto LABEL_42;
  v31 = *(_QWORD *)&iconSpritesOn->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    while ( v32 < (unsigned int)v31 )
    {
      v33 = iconSpritesOn->m_Items[v32];
      v34 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v52 = v25;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21422/*"lock_on_{0}"*/, v35, 0LL);
      if ( !v34 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v34, v33, (System_String_o *)LockModel, 0LL);
      LODWORD(v31) = iconSpritesOn->max_length;
      if ( (__int64)++v32 >= (int)v31 )
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
      v52 = v25;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21421/*"lock_off_{0}"*/, v41, 0LL);
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
  v43 = *(_QWORD *)&iconSpritesLock->max_length;
  if ( (int)v43 >= 1 )
  {
    v44 = 0LL;
    while ( v44 < (unsigned int)v43 )
    {
      v45 = iconSpritesLock->m_Items[v44];
      LockModel = (MethodInfo *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      if ( !LockModel )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(
                                  (AtlasManagerUnit_o *)LockModel,
                                  v45,
                                  (System_String_o *)StringLiteral_21423/*"lock_stopper"*/,
                                  0LL);
      LODWORD(v43) = iconSpritesLock->max_length;
      if ( (__int64)++v44 >= (int)v43 )
        goto LABEL_34;
    }
    goto LABEL_41;
  }
LABEL_34:
  iconSpriteGlow = this->fields.iconSpriteGlow;
  if ( !iconSpriteGlow )
LABEL_42:
    sub_1BCAA3C(LockModel, v17);
  v47 = *(_QWORD *)&iconSpriteGlow->max_length;
  if ( (int)v47 >= 1 )
  {
    v48 = 0LL;
    while ( v48 < (unsigned int)v47 )
    {
      v49 = iconSpriteGlow->m_Items[v48];
      v50 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v52 = v25;
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21420/*"lock_light_{0}"*/, v51, 0LL);
      if ( !v50 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v50, v49, (System_String_o *)LockModel, 0LL);
      LODWORD(v47) = iconSpriteGlow->max_length;
      if ( (__int64)++v48 >= (int)v47 )
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ClassBoardSquare_o *Value; // x0
  const MethodInfo *v10; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v13; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int v16; // w20
  const MethodInfo *v17; // x1
  System_Nullable_AcquireFlag__o v18; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_Int32Enum__o v19; // 0:x0.8

  hasValue = handoverFlag.fields.hasValue;
  v4 = this;
  v18 = handoverFlag;
  if ( (byte_4B196D5 & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, handoverFlag, method);
    sub_1BCA7E0(&Method_System_Nullable_AcquireFlag__get_HasValue__, v5, v6);
    this = (ClassBoardLock_o *)sub_1BCA7E0(&Method_System_Nullable_AcquireFlag__get_Value__, v7, v8);
    byte_4B196D5 = 1;
  }
  if ( hasValue )
  {
    v19 = (System_Nullable_Int32Enum__o)&v18;
    Value = (ClassBoardSquare_o *)System_Nullable_Int32Enum___get_Value(
                                    v19,
                                    (const MethodInfo_36BEE74 *)Method_System_Nullable_AcquireFlag__get_Value__);
  }
  else
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      sub_1BCAA3C(this, handoverFlag);
    klass = SquareModel_k__BackingField->klass;
    v13 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v13;
        p_offset += 2;
        if ( !v13 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    Value = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
                                    SquareModel_k__BackingField,
                                    0LL,
                                    *(_QWORD *)(p_method + 8));
  }
  v16 = (int)Value;
  ClassBoardSquare__SetActiveArrayObject(Value, v4->fields.notCondObjects, 0, v10);
  if ( v16 )
  {
    if ( (v16 & 1) != 0 )
    {
      ClassBoardSquare__DrawAcquired((ClassBoardSquare_o *)v4, v17);
    }
    else if ( (v16 & 2) != 0 )
    {
      ClassBoardSquare__DrawNotConnected((ClassBoardSquare_o *)v4, v17);
    }
    else if ( (v16 & 4) != 0 )
    {
      ClassBoardLock__DrawNotCond(v4, v17);
    }
    else if ( (v16 & 0x10) != 0 )
    {
      ClassBoardSquare__DrawUnacquired((ClassBoardSquare_o *)v4, v17);
    }
  }
  else
  {
    ClassBoardSquare__DrawAvailable((ClassBoardSquare_o *)v4, v17);
  }
}


void __fastcall ClassBoardLock___PlayReleaseEffect_b__13_0(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_1BCAA3C(0LL, method);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, method);
}


IClassBoardLockModel_o *__fastcall ClassBoardLock__get_LockModel(ClassBoardLock_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B196D3 & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardLockModel_TypeInfo, method, v2);
    byte_4B196D3 = 1;
  }
  return (IClassBoardLockModel_o *)sub_1BCA91C(this->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo);
}