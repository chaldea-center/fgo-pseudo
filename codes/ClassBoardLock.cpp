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
  __int64 v3; // x1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x19
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v6; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  System_Enum_o *v9; // x19
  System_Enum_o *v10; // x0
  _BOOL8 HasFlag; // x0
  const MethodInfo *v12; // x1
  int v13; // [xsp+8h] [xbp-18h] BYREF
  int v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FB97B & 1) == 0 )
  {
    sub_B16FFC(&AcquireFlag_TypeInfo, method);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v3);
    byte_40FB97B = 1;
  }
  SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
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
    p_method = sub_AAFEF8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v14 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
          SquareModel_k__BackingField,
          0LL,
          *(_QWORD *)(p_method + 8));
  v9 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v14);
  v13 = 1;
  v10 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v13);
  if ( !v9 )
LABEL_14:
    sub_B170D4();
  HasFlag = System_Enum__HasFlag(v9, v10, 0LL);
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
  IClassBoardLockModel_c *klass; // x8
  IClassBoardLockModel_o *v10; // x20
  unsigned __int64 v11; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x3
  int v22; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FB97C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, v3);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_23557/*"{0}{1}"*/, v6);
    sub_B16FFC(&StringLiteral_14956/*"Unlock"*/, v7);
    byte_40FB97C = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    sub_B170D4();
  klass = LockModel->klass;
  v10 = LockModel;
  if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v11;
      p_offset += 2;
      if ( v11 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
  }
  v22 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(v10, *(_QWORD *)(p_method + 8));
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v15 = System_String__Format_43739268(
          (System_String_o *)StringLiteral_23557/*"{0}{1}"*/,
          (Il2CppObject *)StringLiteral_14956/*"Unlock"*/,
          v14,
          0LL);
  v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ClassBoardLock__PlayReleaseEffect_b__13_0__, 0LL);
  ClassBoardSquare__PlaySimpleAnimation((ClassBoardSquare_o *)this, v15, v20, v21);
}


void __fastcall ClassBoardLock__SetupIcon(ClassBoardLock_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  IClassBoardLockModel_o *LockModel; // x0
  IClassBoardLockModel_c *klass; // x8
  IClassBoardLockModel_o *v11; // x20
  unsigned __int64 v12; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct UISprite_array *iconSpritesNormal; // x23
  __int64 v19; // x8
  int v20; // w20
  unsigned __int64 v21; // x24
  UISprite_o *v22; // x21
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  struct UISprite_array *iconSpritesOn; // x23
  __int64 v27; // x8
  unsigned __int64 v28; // x24
  UISprite_o *v29; // x21
  AtlasManagerUnit_o *v30; // x22
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  struct UISprite_array *iconSpritesOff; // x23
  __int64 v34; // x8
  unsigned __int64 v35; // x24
  UISprite_o *v36; // x21
  AtlasManagerUnit_o *v37; // x22
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  struct UISprite_array *iconSpritesLock; // x22
  __int64 v41; // x8
  unsigned __int64 v42; // x23
  UISprite_o *v43; // x21
  AtlasManagerUnit_o *v44; // x0
  struct UISprite_array *iconSpriteGlow; // x22
  __int64 v46; // x8
  unsigned __int64 v47; // x23
  UISprite_o *v48; // x19
  AtlasManagerUnit_o *v49; // x21
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  int v52; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FB979 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_20220/*"lock_light_{0}"*/, v4);
    sub_B16FFC(&StringLiteral_20223/*"lock_stopper"*/, v5);
    sub_B16FFC(&StringLiteral_20222/*"lock_on_{0}"*/, v6);
    sub_B16FFC(&StringLiteral_20221/*"lock_off_{0}"*/, v7);
    sub_B16FFC(&StringLiteral_20224/*"lock_{0}"*/, v8);
    byte_40FB979 = 1;
  }
  LockModel = ClassBoardLock__get_LockModel(this, method);
  if ( !LockModel )
    goto LABEL_42;
  klass = LockModel->klass;
  v11 = LockModel;
  if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v12;
      p_offset += 2;
      if ( v12 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(LockModel, IClassBoardSquareModel_TypeInfo, 2LL);
  }
  v15 = (const MethodInfo *)(*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(
                              v11,
                              *(_QWORD *)(p_method + 8));
  iconSpritesNormal = this->fields.iconSpritesNormal;
  if ( !iconSpritesNormal )
    goto LABEL_42;
  v19 = *(_QWORD *)&iconSpritesNormal->max_length;
  v20 = (int)v15;
  if ( (int)v19 >= 1 )
  {
    v21 = 0LL;
    while ( v21 < (unsigned int)v19 )
    {
      v22 = iconSpritesNormal->m_Items[v21];
      IconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit(v15);
      v52 = v20;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
      v25 = System_String__Format((System_String_o *)StringLiteral_20224/*"lock_{0}"*/, v24, 0LL);
      if ( !IconAtlasManagerUnit )
        goto LABEL_42;
      v15 = (const MethodInfo *)AtlasManagerUnit__SetUI(IconAtlasManagerUnit, v22, v25, 0LL);
      LODWORD(v19) = iconSpritesNormal->max_length;
      if ( (__int64)++v21 >= (int)v19 )
        goto LABEL_16;
    }
LABEL_41:
    sub_B17100(v15, v16, v17);
    sub_B170A0();
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
      v30 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(v15);
      v52 = v20;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
      v32 = System_String__Format((System_String_o *)StringLiteral_20222/*"lock_on_{0}"*/, v31, 0LL);
      if ( !v30 )
        goto LABEL_42;
      v15 = (const MethodInfo *)AtlasManagerUnit__SetUI(v30, v29, v32, 0LL);
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
  v34 = *(_QWORD *)&iconSpritesOff->max_length;
  if ( (int)v34 >= 1 )
  {
    v35 = 0LL;
    while ( v35 < (unsigned int)v34 )
    {
      v36 = iconSpritesOff->m_Items[v35];
      v37 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(v15);
      v52 = v20;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
      v39 = System_String__Format((System_String_o *)StringLiteral_20221/*"lock_off_{0}"*/, v38, 0LL);
      if ( !v37 )
        goto LABEL_42;
      v15 = (const MethodInfo *)AtlasManagerUnit__SetUI(v37, v36, v39, 0LL);
      LODWORD(v34) = iconSpritesOff->max_length;
      if ( (__int64)++v35 >= (int)v34 )
        goto LABEL_28;
    }
    goto LABEL_41;
  }
LABEL_28:
  iconSpritesLock = this->fields.iconSpritesLock;
  if ( !iconSpritesLock )
    goto LABEL_42;
  v41 = *(_QWORD *)&iconSpritesLock->max_length;
  if ( (int)v41 >= 1 )
  {
    v42 = 0LL;
    while ( v42 < (unsigned int)v41 )
    {
      v43 = iconSpritesLock->m_Items[v42];
      v44 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(v15);
      if ( !v44 )
        goto LABEL_42;
      v15 = (const MethodInfo *)AtlasManagerUnit__SetUI(v44, v43, (System_String_o *)StringLiteral_20223/*"lock_stopper"*/, 0LL);
      LODWORD(v41) = iconSpritesLock->max_length;
      if ( (__int64)++v42 >= (int)v41 )
        goto LABEL_34;
    }
    goto LABEL_41;
  }
LABEL_34:
  iconSpriteGlow = this->fields.iconSpriteGlow;
  if ( !iconSpriteGlow )
LABEL_42:
    sub_B170D4();
  v46 = *(_QWORD *)&iconSpriteGlow->max_length;
  if ( (int)v46 >= 1 )
  {
    v47 = 0LL;
    while ( v47 < (unsigned int)v46 )
    {
      v48 = iconSpriteGlow->m_Items[v47];
      v49 = ClassBoardGlobalObject__get_IconAtlasManagerUnit(v15);
      v52 = v20;
      v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
      v51 = System_String__Format((System_String_o *)StringLiteral_20220/*"lock_light_{0}"*/, v50, 0LL);
      if ( !v49 )
        goto LABEL_42;
      v15 = (const MethodInfo *)AtlasManagerUnit__SetUI(v49, v48, v51, 0LL);
      LODWORD(v46) = iconSpriteGlow->max_length;
      if ( (__int64)++v47 >= (int)v46 )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ClassBoardSquare_o *Value; // x0
  const MethodInfo *v9; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v12; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  int v15; // w20
  const MethodInfo *v16; // x1
  System_Enum_o *v17; // x21
  System_Enum_o *v18; // x0
  const MethodInfo *v19; // x1
  System_Enum_o *v20; // x21
  System_Enum_o *v21; // x0
  const MethodInfo *v22; // x1
  System_Enum_o *v23; // x21
  System_Enum_o *v24; // x0
  const MethodInfo *v25; // x1
  System_Enum_o *v26; // x20
  System_Enum_o *v27; // x0
  const MethodInfo *v28; // x1
  int v29; // [xsp+0h] [xbp-30h] BYREF
  int v30; // [xsp+4h] [xbp-2Ch] BYREF
  System_Nullable_AcquireFlag__o v31; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_T__o v32; // 0:x0.16

  v31 = handoverFlag;
  if ( (byte_40FB97A & 1) == 0 )
  {
    sub_B16FFC(&AcquireFlag_TypeInfo, handoverFlag);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v5);
    sub_B16FFC(&Method_System_Nullable_AcquireFlag__get_HasValue__, v6);
    sub_B16FFC(&Method_System_Nullable_AcquireFlag__get_Value__, v7);
    byte_40FB97A = 1;
  }
  if ( (*(_QWORD *)&handoverFlag & 0xFF00000000LL) != 0 )
  {
    v32.fields.value = (Il2CppObject *)&v31;
    *(_QWORD *)&v32.fields.has_value = Method_System_Nullable_AcquireFlag__get_Value__;
    Value = (ClassBoardSquare_o *)System_Nullable_Int32Enum___get_Value(v32, (const MethodInfo_2968B58 *)method);
  }
  else
  {
    SquareModel_k__BackingField = this->fields._SquareModel_k__BackingField;
    if ( !SquareModel_k__BackingField )
      goto LABEL_28;
    klass = SquareModel_k__BackingField->klass;
    if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v12;
        p_offset += 2;
        if ( v12 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(this->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    Value = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD, _QWORD))p_method)(
                                    SquareModel_k__BackingField,
                                    0LL,
                                    *(_QWORD *)(p_method + 8));
  }
  v15 = (int)Value;
  ClassBoardSquare__SetActiveArrayObject(Value, this->fields.notCondObjects, 0, v9);
  if ( !v15 )
  {
    ClassBoardSquare__DrawAvailable((ClassBoardSquare_o *)this, v16);
    return;
  }
  v30 = v15;
  v17 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v30);
  v29 = 1;
  v18 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v29);
  if ( !v17 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v17, v18, 0LL) )
  {
    ClassBoardSquare__DrawAcquired((ClassBoardSquare_o *)this, v19);
    return;
  }
  v30 = v15;
  v20 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v30);
  v29 = 2;
  v21 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v29);
  if ( !v20 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v20, v21, 0LL) )
  {
    ClassBoardSquare__DrawNotConnected((ClassBoardSquare_o *)this, v22);
    return;
  }
  v30 = v15;
  v23 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v30);
  v29 = 4;
  v24 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v29);
  if ( !v23 )
    goto LABEL_28;
  if ( System_Enum__HasFlag(v23, v24, 0LL) )
  {
    ClassBoardLock__DrawNotCond(this, v25);
    return;
  }
  v30 = v15;
  v26 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v30);
  v29 = 16;
  v27 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v29);
  if ( !v26 )
LABEL_28:
    sub_B170D4();
  if ( System_Enum__HasFlag(v26, v27, 0LL) )
    ClassBoardSquare__DrawUnacquired((ClassBoardSquare_o *)this, v28);
}


void __fastcall ClassBoardLock___PlayReleaseEffect_b__13_0(ClassBoardLock_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  this->fields.isUpdateDraw = 1;
  if ( !releaseEffectPlayer )
    sub_B170D4();
  ClassBoardEffectPlayer__End(releaseEffectPlayer, method);
}


IClassBoardLockModel_o *__fastcall ClassBoardLock__get_LockModel(ClassBoardLock_o *this, const MethodInfo *method)
{
  if ( (byte_40FB978 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardLockModel_TypeInfo, method);
    byte_40FB978 = 1;
  }
  return (IClassBoardLockModel_o *)sub_B170BC(this->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo);
}