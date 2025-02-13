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
  if ( (byte_4BDFB2A & 1) == 0 )
  {
    this = (ClassBoardLock_o *)sub_1C21E38(&IClassBoardSquareModel_TypeInfo);
    byte_4BDFB2A = 1;
  }
  SquareModel_k__BackingField = v2->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    sub_1C22094(this, method);
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
    p_method = sub_1C73E18(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
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
  IClassBoardLockModel_o *LockModel; // x0
  __int64 v4; // x1
  IClassBoardLockModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardLockModel_o *v7; // x20
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x3
  int v17; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDFB2B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ClassBoardLock__PlayReleaseEffect_b__13_0__);
    sub_1C21E38(&IClassBoardSquareModel_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_25553/*"{0}{1}"*/);
    sub_1C21E38(&StringLiteral_15394/*"Unlock"*/);
    byte_4BDFB2B = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    sub_1C22094(0LL, v4);
  klass = LockModel->klass;
  v6 = *(unsigned __int16 *)(&LockModel->klass->_2.bitflags2 + 3);
  v7 = LockModel;
  if ( *(_WORD *)(&LockModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C73E18(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
  }
  v17 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(v7, *(_QWORD *)(p_method + 8));
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v10, v11, v12);
  v14 = System_String__Format_63129848(
          (System_String_o *)StringLiteral_25553/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_15394/*"Unlock"*/,
          v13,
          0LL);
  v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, v14, v15, v16);
}


void __fastcall ClassBoardLock__SetupIcon(ClassBoardLock_o *this, const MethodInfo *method)
{
  MethodInfo *LockModel; // x0
  __int64 v4; // x1
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v6; // x20
  __int64 v7; // x9
  IClassBoardSquareModel_c **v8; // x10
  __int64 v9; // x0
  struct UISprite_array *iconSpritesNormal; // x24
  __int64 v11; // x8
  int v12; // w20
  unsigned __int64 v13; // x25
  UISprite_o *v14; // x21
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x22
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  struct UISprite_array *iconSpritesOn; // x24
  __int64 v21; // x8
  unsigned __int64 v22; // x25
  UISprite_o *v23; // x21
  AtlasManagerUnit_o *v24; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  struct UISprite_array *iconSpritesOff; // x24
  __int64 v30; // x8
  unsigned __int64 v31; // x25
  UISprite_o *v32; // x21
  AtlasManagerUnit_o *v33; // x22
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  struct UISprite_array *iconSpritesLock; // x22
  __int64 v39; // x8
  unsigned __int64 v40; // x24
  UISprite_o *v41; // x21
  struct UISprite_array *iconSpriteGlow; // x22
  __int64 v43; // x8
  unsigned __int64 v44; // x24
  UISprite_o *v45; // x19
  AtlasManagerUnit_o *v46; // x21
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  int v51; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BDFB28 & 1) == 0 )
  {
    sub_1C21E38(&IClassBoardSquareModel_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_21572/*"lock_light_{0}"*/);
    sub_1C21E38(&StringLiteral_21575/*"lock_stopper"*/);
    sub_1C21E38(&StringLiteral_21574/*"lock_on_{0}"*/);
    sub_1C21E38(&StringLiteral_21573/*"lock_off_{0}"*/);
    sub_1C21E38(&StringLiteral_21576/*"lock_{0}"*/);
    byte_4BDFB28 = 1;
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
    v9 = sub_1C73E18(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
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
      v51 = v12;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v16, v17, v18);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21576/*"lock_{0}"*/, v19, 0LL);
      if ( !IconAtlasManagerUnit )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(IconAtlasManagerUnit, v14, (System_String_o *)LockModel, 0LL);
      LODWORD(v11) = iconSpritesNormal->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_16;
    }
LABEL_41:
    sub_1C2209C(LockModel, v4);
  }
LABEL_16:
  iconSpritesOn = this->fields.iconSpritesOn;
  if ( !iconSpritesOn )
    goto LABEL_42;
  v21 = *(_QWORD *)&iconSpritesOn->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    while ( v22 < (unsigned int)v21 )
    {
      v23 = iconSpritesOn->m_Items[v22];
      v24 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v51 = v12;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v25, v26, v27);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21574/*"lock_on_{0}"*/, v28, 0LL);
      if ( !v24 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v24, v23, (System_String_o *)LockModel, 0LL);
      LODWORD(v21) = iconSpritesOn->max_length;
      if ( (__int64)++v22 >= (int)v21 )
        goto LABEL_22;
    }
    goto LABEL_41;
  }
LABEL_22:
  iconSpritesOff = this->fields.iconSpritesOff;
  if ( !iconSpritesOff )
    goto LABEL_42;
  v30 = *(_QWORD *)&iconSpritesOff->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    while ( v31 < (unsigned int)v30 )
    {
      v32 = iconSpritesOff->m_Items[v31];
      v33 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v51 = v12;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v34, v35, v36);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21573/*"lock_off_{0}"*/, v37, 0LL);
      if ( !v33 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v33, v32, (System_String_o *)LockModel, 0LL);
      LODWORD(v30) = iconSpritesOff->max_length;
      if ( (__int64)++v31 >= (int)v30 )
        goto LABEL_28;
    }
    goto LABEL_41;
  }
LABEL_28:
  iconSpritesLock = this->fields.iconSpritesLock;
  if ( !iconSpritesLock )
    goto LABEL_42;
  v39 = *(_QWORD *)&iconSpritesLock->max_length;
  if ( (int)v39 >= 1 )
  {
    v40 = 0LL;
    while ( v40 < (unsigned int)v39 )
    {
      v41 = iconSpritesLock->m_Items[v40];
      LockModel = (MethodInfo *)ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      if ( !LockModel )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(
                                  (AtlasManagerUnit_o *)LockModel,
                                  v41,
                                  (System_String_o *)StringLiteral_21575/*"lock_stopper"*/,
                                  0LL);
      LODWORD(v39) = iconSpritesLock->max_length;
      if ( (__int64)++v40 >= (int)v39 )
        goto LABEL_34;
    }
    goto LABEL_41;
  }
LABEL_34:
  iconSpriteGlow = this->fields.iconSpriteGlow;
  if ( !iconSpriteGlow )
LABEL_42:
    sub_1C22094(LockModel, v4);
  v43 = *(_QWORD *)&iconSpriteGlow->max_length;
  if ( (int)v43 >= 1 )
  {
    v44 = 0LL;
    while ( v44 < (unsigned int)v43 )
    {
      v45 = iconSpriteGlow->m_Items[v44];
      v46 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(LockModel);
      v51 = v12;
      v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v47, v48, v49);
      LockModel = (MethodInfo *)System_String__Format((System_String_o *)StringLiteral_21572/*"lock_light_{0}"*/, v50, 0LL);
      if ( !v46 )
        goto LABEL_42;
      LockModel = (MethodInfo *)AtlasManagerUnit__SetUI(v46, v45, (System_String_o *)LockModel, 0LL);
      LODWORD(v43) = iconSpriteGlow->max_length;
      if ( (__int64)++v44 >= (int)v43 )
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
  ClassBoardSquare_o *Value; // x0
  const MethodInfo *v6; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v9; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int v12; // w20
  const MethodInfo *v13; // x1
  System_Nullable_AcquireFlag__o v14; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_Int32Enum__o v15; // 0:x0.8

  hasValue = handoverFlag.fields.hasValue;
  v4 = this;
  v14 = handoverFlag;
  if ( (byte_4BDFB29 & 1) == 0 )
  {
    sub_1C21E38(&IClassBoardSquareModel_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_AcquireFlag__get_HasValue__);
    this = (ClassBoardLock_o *)sub_1C21E38(&Method_System_Nullable_AcquireFlag__get_Value__);
    byte_4BDFB29 = 1;
  }
  if ( hasValue )
  {
    v15 = (System_Nullable_Int32Enum__o)&v14;
    Value = (ClassBoardSquare_o *)System_Nullable_Int32Enum___get_Value(
                                    v15,
                                    (const MethodInfo_376BB74 *)Method_System_Nullable_AcquireFlag__get_Value__);
  }
  else
  {
    SquareModel_k__BackingField = v4->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C22094)(this, handoverFlag);
    klass = SquareModel_k__BackingField->klass;
    v9 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v9;
        p_offset += 2;
        if ( !v9 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C73E18(v4->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    Value = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
                                    SquareModel_k__BackingField,
                                    0LL,
                                    *(_QWORD *)(p_method + 8));
  }
  v12 = (int)Value;
  ClassBoardSquare__SetActiveArrayObject(Value, v4->fields.notCondObjects, 0, v6);
  if ( v12 )
  {
    if ( (v12 & 1) != 0 )
    {
      ClassBoardSquare__DrawAcquired((ClassBoardSquare_o *)v4, v13);
    }
    else if ( (v12 & 2) != 0 )
    {
      ClassBoardSquare__DrawNotConnected((ClassBoardSquare_o *)v4, v13);
    }
    else if ( (v12 & 4) != 0 )
    {
      ClassBoardLock__DrawNotCond(v4, v13);
    }
    else if ( (v12 & 0x10) != 0 )
    {
      ClassBoardSquare__DrawUnacquired((ClassBoardSquare_o *)v4, v13);
    }
  }
  else
  {
    ClassBoardSquare__DrawAvailable((ClassBoardSquare_o *)v4, v13);
  }
}


void __fastcall ClassBoardLock___PlayReleaseEffect_b__13_0(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_1C22094(0LL, method);
  ClassBoardEffectPlayer__End(releaseEffectPlayer, method);
}


IClassBoardLockModel_o *__fastcall ClassBoardLock__get_LockModel(ClassBoardLock_o *this, const MethodInfo *method)
{
  if ( (byte_4BDFB27 & 1) == 0 )
  {
    sub_1C21E38(&IClassBoardLockModel_TypeInfo);
    byte_4BDFB27 = 1;
  }
  return (IClassBoardLockModel_o *)sub_1C21F74(this->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo);
}