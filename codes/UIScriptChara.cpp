void __fastcall UIScriptChara___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421CF83 & 1) == 0 )
  {
    sub_B0D8A4(&UIScriptChara_TypeInfo, v1);
    byte_421CF83 = 1;
  }
  LODWORD(UIScriptChara_TypeInfo->static_fields->UNIT_SPEED) = (struct UIScriptChara_StaticFields)1014350479;
}


void __fastcall UIScriptChara___ctor(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.backIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ChangeCharacter(
        UIScriptChara_o *this,
        System_String_o *kind,
        float speed,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  long double v10; // q8
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1

  v10 = *(long double *)&speed;
  if ( (byte_421CF5C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16915/*"blink"*/, kind);
    sub_B0D8A4(&StringLiteral_18736/*"fade"*/, v13);
    sub_B0D8A4(&StringLiteral_17826/*"crossFade"*/, v14);
    byte_421CF5C = 1;
  }
  if ( !kind )
    goto LABEL_10;
  if ( !System_String__op_Equality(kind, (System_String_o *)StringLiteral_18736/*"fade"*/, 0LL) )
  {
    if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_16915/*"blink"*/, 0LL) )
    {
      v15 = 3LL;
      goto LABEL_11;
    }
    if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_17826/*"crossFade"*/, 0LL) )
    {
      v15 = 4LL;
      goto LABEL_11;
    }
LABEL_10:
    v15 = 1LL;
    goto LABEL_11;
  }
  v15 = 2LL;
LABEL_11:
  ((void (__fastcall *)(UIScriptChara_o *, __int64, System_String_o *, _QWORD, System_Action_o *, Il2CppMethodPointer, long double))this->klass->vtable._9_ChangeCharacter.method)(
    this,
    v15,
    imageName,
    (unsigned int)faceType,
    callback,
    this->klass->vtable._10_SetCharacter.methodPtr,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ChangeCharacter_37534920(
        UIScriptChara_o *this,
        int32_t kind,
        float speed,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  __int64 v11; // x0
  int32_t mainIndex; // w8
  bool v13; // zf
  int32_t changeKind; // w8
  int32_t v15; // w9
  float v16; // s0

  this->fields.changeKind = kind;
  this->fields.changeCallback = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.changeCallback,
    (System_Int32_array **)callback,
    (System_String_array **)imageName,
    *(System_String_array ***)&faceType,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v7,
    v8);
  mainIndex = this->fields.mainIndex;
  this->fields.backIndex = mainIndex;
  if ( !this )
    sub_B0D97C(v11);
  v13 = mainIndex == 0;
  changeKind = this->fields.changeKind;
  v15 = v13;
  this->fields.changeSpeed = speed;
  this->fields.changeTotal = 0.0;
  this->fields.mainIndex = v15;
  *(_QWORD *)&this->fields.changeCount = 0LL;
  if ( changeKind == 3 )
  {
    v16 = speed / 5.0;
    if ( speed >= 10.0 )
      v16 = 2.0;
    this->fields.changeRange = v16;
  }
  this->fields.isDisp = 0;
}


void __fastcall UIScriptChara__EndExecuteCameraRoll(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.isRoll = 0;
}


void __fastcall UIScriptChara__EndMove(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_421CF62 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_iTween___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_421CF62 = 1;
  }
  this->fields.isMove = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_iTween___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(Component_srcLineSprite, 0LL);
  }
}


void __fastcall UIScriptChara__EndMoveAttack(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__EndMoveReturn(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__EndMoveReturnEaseHalf(UIScriptChara_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UIScriptChara__MoveReturnPositionEase_37539300(this, this->fields.returnDuration, this->fields.returnEaseType, v2);
}


void __fastcall UIScriptChara__EndMoveReturnHalf(UIScriptChara_o *this, const MethodInfo *method)
{
  UIScriptChara__MoveReturnPosition(this, this->fields.returnDuration, method);
}


void __fastcall UIScriptChara__EndMoveScale(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseScale; // x0

  baseScale = this->fields.baseScale;
  if ( !baseScale )
    sub_B0D97C(0LL);
  UnityEngine_Transform__set_localScale(baseScale, this->fields.baseScaleSize, 0LL);
  this->fields.isMove = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__EndSet(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o zero; // kr00_8
  UnityEngine_GameObject_o *baseSpecialEffect; // x0
  float v5; // s2
  float v6; // s10
  float v7; // s2
  float v8; // s10
  float v9; // s2
  float v10; // s10
  float v11; // s2
  float v12; // s10
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantConfConponent_o *p_setCallback; // x19
  System_Action_o *v20; // x20
  struct System_Action_o *setCallback; // t1
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  zero = UnityEngine_Vector2__get_zero(0LL);
  baseSpecialEffect = this->fields.baseSpecialEffect;
  if ( !baseSpecialEffect )
    goto LABEL_20;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)(&v5 - 2) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)baseSpecialEffect,
                                          0LL);
  baseSpecialEffect = this->fields.baseSpecialEffect;
  if ( !baseSpecialEffect )
    goto LABEL_20;
  v6 = v5;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_20;
  v22.fields.x = zero.fields.x;
  v22.fields.y = zero.fields.y;
  v22.fields.z = v6;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v22, 0LL);
  baseSpecialEffect = this->fields.baseEffect;
  if ( !baseSpecialEffect )
    goto LABEL_20;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)(&v7 - 2) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)baseSpecialEffect,
                                          0LL);
  baseSpecialEffect = this->fields.baseEffect;
  if ( !baseSpecialEffect )
    goto LABEL_20;
  v8 = v7;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_20;
  v23.fields.x = zero.fields.x;
  v23.fields.y = zero.fields.y;
  v23.fields.z = v8;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v23, 0LL);
  baseSpecialEffect = this->fields.baseEffectBack;
  if ( !baseSpecialEffect )
    goto LABEL_20;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)(&v9 - 2) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)baseSpecialEffect,
                                          0LL);
  baseSpecialEffect = this->fields.baseEffectBack;
  if ( !baseSpecialEffect )
    goto LABEL_20;
  v10 = v9;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_20;
  v24.fields.x = zero.fields.x;
  v24.fields.y = zero.fields.y;
  v24.fields.z = v10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v24, 0LL);
  baseSpecialEffect = this->fields.baseShadowEffect;
  if ( !baseSpecialEffect
    || (baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v11 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)baseSpecialEffect,
                                                 0LL),
        (baseSpecialEffect = this->fields.baseShadowEffect) == 0LL)
    || (v12 = v11,
        (baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL)) == 0LL) )
  {
LABEL_20:
    sub_B0D97C(baseSpecialEffect);
  }
  v25.fields.x = zero.fields.x;
  v25.fields.y = zero.fields.y;
  v25.fields.z = v12;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v25, 0LL);
  setCallback = this->fields.setCallback;
  p_setCallback = (BattleServantConfConponent_o *)&this->fields.setCallback;
  v20 = setCallback;
  if ( setCallback )
  {
    p_setCallback->klass = 0LL;
    sub_B0D840(p_setCallback, 0LL, v13, v14, v15, v16, v17, v18);
    System_Action__Invoke(v20, 0LL);
  }
}


UnityEngine_Vector3_o __fastcall UIScriptChara__GetBasePosition(UIScriptChara_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.basePosition.fields.x;
  y = this->fields.basePosition.fields.y;
  z = this->fields.basePosition.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Transform_o *__fastcall UIScriptChara__GetBody(UIScriptChara_o *this, const MethodInfo *method)
{
  return 0LL;
}


UnityEngine_Texture_o *__fastcall UIScriptChara__GetBodySubTexture(UIScriptChara_o *this, const MethodInfo *method)
{
  return 0LL;
}


float __fastcall UIScriptChara__GetDepth(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseDepth; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  baseDepth = this->fields.baseDepth;
  if ( !baseDepth )
    sub_B0D97C(0LL);
  localPosition = UnityEngine_Transform__get_localPosition(baseDepth, 0LL);
  return localPosition.fields.z;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall UIScriptChara__GetOffsetEdgeBlur(UIScriptChara_o *this, const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  *(UnityEngine_Vector3_o *)&v2 = UnityEngine_Vector3__get_zero(0LL);
  result.fields.z = v4;
  result.fields.y = v3;
  result.fields.x = v2;
  return result;
}


UnityEngine_Rect_o __fastcall UIScriptChara__GetRectEdgeBlur(UIScriptChara_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  __int64 v10; // [xsp+0h] [xbp-10h] BYREF
  __int64 v11; // [xsp+8h] [xbp-8h]
  UnityEngine_Rect_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v12.fields.m_Width = 1.0;
  v12.fields.m_XMin = 0.0;
  v12.fields.m_YMin = 0.0;
  v12.fields.m_Height = 1.0;
  v10 = 0LL;
  v11 = 0LL;
  UnityEngine_Rect___ctor(v12, v2, v3, v4, v5, (const MethodInfo *)&v10);
  v7 = *((float *)&v10 + 1);
  v6 = *(float *)&v10;
  v9 = *((float *)&v11 + 1);
  v8 = *(float *)&v11;
  result.fields.m_Height = v9;
  result.fields.m_Width = v8;
  result.fields.m_YMin = v7;
  result.fields.m_XMin = v6;
  return result;
}


UnityEngine_Vector2_o __fastcall UIScriptChara__GetSizeEdgeBlur(UIScriptChara_o *this, const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v2 = 1024.0;
  v3 = 1024.0;
  result.fields.y = v3;
  result.fields.x = v2;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__InitRoll(UIScriptChara_o *this, const MethodInfo *method)
{
  float y; // s4
  float z; // s5
  float v5; // s3
  const MethodInfo *v6; // x1
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  y = zero.fields.y;
  z = zero.fields.z;
  zero.fields.y = zero.fields.x;
  zero.fields.z = y;
  v5 = z;
  UIScriptChara__SetRoll(this, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v6);
}


bool __fastcall UIScriptChara__IsBackEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_421CF7A & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, method);
    byte_421CF7A = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsBusy(baseEffectBack, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_421CF7C & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, method);
    byte_421CF7C = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart(baseEffectBack, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffectStart_37546816(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_421CF7D & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, n);
    byte_421CF7D = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart_16961896(baseEffectBack, n, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffect_37546592(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_421CF7B & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, n);
    byte_421CF7B = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsBusy_16960896(baseEffectBack, n, 0LL);
}


bool __fastcall UIScriptChara__IsBusyMoveAlpha(UIScriptChara_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall UIScriptChara__IsChange(UIScriptChara_o *this, const MethodInfo *method)
{
  return this->fields.changeKind != 0;
}


bool __fastcall UIScriptChara__IsCut(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ProgramEffectComponent_array *v4; // x0
  __int64 v5; // x8
  ProgramEffectComponent_array *v6; // x19
  unsigned __int64 v7; // x21
  ProgramEffectComponent_o **m_Items; // x22
  ProgramEffectComponent_o *v9; // x8
  __int64 v10; // x11
  ProgramEffectComponent_o *v11; // x20
  __int64 v13; // x0

  if ( (byte_421CF6E & 1) == 0 )
  {
    sub_B0D8A4(&CharaCutEffectComponent_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_421CF6E = 1;
  }
  v4 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v4 )
LABEL_23:
    sub_B0D97C(v4);
  v5 = *(_QWORD *)&v4->max_length;
  v6 = v4;
  if ( (int)v5 < 1 )
    return 0;
  v7 = 0LL;
  m_Items = v4->m_Items;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
    {
      v13 = sub_B0D9A8(v4);
      sub_B0D948(v13, 0LL);
    }
    v9 = m_Items[v7];
    if ( v9
      && (v10 = *(&CharaCutEffectComponent_TypeInfo->_2.bitflags2 + 1),
          *(&v9->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
    {
      v11 = (CharaCutEffectComponent_c *)v9->klass->_2.typeHierarchy[v10 - 1] == CharaCutEffectComponent_TypeInfo
          ? m_Items[v7]
          : 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v4 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_23;
      if ( LOBYTE(v11[1].fields.rightAnchor) )
        return 1;
    }
    LODWORD(v5) = v6->max_length;
    if ( (__int64)++v7 >= (int)v5 )
      return 0;
  }
}


bool __fastcall UIScriptChara__IsCutStart(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ProgramEffectComponent_array *v4; // x0
  __int64 v5; // x8
  ProgramEffectComponent_array *v6; // x19
  unsigned __int64 v7; // x21
  ProgramEffectComponent_o **m_Items; // x22
  ProgramEffectComponent_o *v9; // x8
  __int64 v10; // x11
  ProgramEffectComponent_o *v11; // x20
  __int64 v13; // x0

  if ( (byte_421CF6F & 1) == 0 )
  {
    sub_B0D8A4(&CharaCutEffectComponent_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_421CF6F = 1;
  }
  v4 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v4 )
LABEL_23:
    sub_B0D97C(v4);
  v5 = *(_QWORD *)&v4->max_length;
  v6 = v4;
  if ( (int)v5 < 1 )
    return 1;
  v7 = 0LL;
  m_Items = v4->m_Items;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
    {
      v13 = sub_B0D9A8(v4);
      sub_B0D948(v13, 0LL);
    }
    v9 = m_Items[v7];
    if ( v9
      && (v10 = *(&CharaCutEffectComponent_TypeInfo->_2.bitflags2 + 1),
          *(&v9->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
    {
      v11 = (CharaCutEffectComponent_c *)v9->klass->_2.typeHierarchy[v10 - 1] == CharaCutEffectComponent_TypeInfo
          ? m_Items[v7]
          : 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v4 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_23;
      if ( !v11->fields.isStart )
        return 0;
    }
    LODWORD(v5) = v6->max_length;
    if ( (__int64)++v7 >= (int)v5 )
      return 1;
  }
}


bool __fastcall UIScriptChara__IsEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_421CF71 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, method);
    byte_421CF71 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsBusy(baseEffect, 0LL);
}


bool __fastcall UIScriptChara__IsEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_421CF73 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, method);
    byte_421CF73 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart(baseEffect, 0LL);
}


bool __fastcall UIScriptChara__IsEffectStart_37545388(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_421CF74 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, n);
    byte_421CF74 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart_16961896(baseEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsEffect_37545164(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_421CF72 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, n);
    byte_421CF72 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsBusy_16960896(baseEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsMove(UIScriptChara_o *this, const MethodInfo *method)
{
  return this->fields.isMove;
}


bool __fastcall UIScriptChara__IsRoll(UIScriptChara_o *this, const MethodInfo *method)
{
  return this->fields.isRoll;
}


bool __fastcall UIScriptChara__IsShake(UIScriptChara_o *this, const MethodInfo *method)
{
  return this->fields.shakeCycle > 0.0;
}


bool __fastcall UIScriptChara__IsSpecialEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  return ProgramEffectManager__IsBusy(this->fields.baseSpecialEffect, 0LL);
}


bool __fastcall UIScriptChara__IsSpecialEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  return ProgramEffectManager__IsStart(this->fields.baseSpecialEffect, 0LL);
}


bool __fastcall UIScriptChara__IsSpecialEffectStart_37544140(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsStart_24368428(this->fields.baseSpecialEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsSpecialEffect_37544116(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsBusy_24367728(this->fields.baseSpecialEffect, n, 0LL);
}


void __fastcall UIScriptChara__MoveAlpha(UIScriptChara_o *this, float duration, float a, const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  this->fields.isDisp = a > 0.0;
  UIScriptChara__RecoverShadowEffect(this, 0, v4);
}


void __fastcall UIScriptChara__MoveAlphaSpeed(UIScriptChara_o *this, float speed, float a, const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  this->fields.isDisp = a > 0.0;
  UIScriptChara__RecoverShadowEffect(this, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MoveAttack(
        UIScriptChara_o *this,
        System_String_o *kind,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TweenPosition_o *v14; // x20
  UnityEngine_GameObject_o *transform; // x0
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_421CF69 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, kind);
    sub_B0D8A4(&StringLiteral_5982/*"EndMoveAttack"*/, v11);
    sub_B0D8A4(&StringLiteral_21193/*"normal"*/, v12);
    byte_421CF69 = 1;
  }
  if ( duration <= 0.0 )
    duration = 0.5;
  this->fields.isMove = 1;
  if ( kind )
    System_String__op_Equality(kind, (System_String_o *)StringLiteral_21193/*"normal"*/, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  v14 = TweenPosition__Begin(gameObject, duration, v31, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( v14 )
    {
      v14->fields.style = 1;
      v16 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v14->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v16;
      sub_B0D840((BattleServantConfConponent_o *)&v14->fields.eventReceiver, v16, v17, v18, v19, v20, v21, v22);
      v23 = (System_Int32_array **)StringLiteral_5982/*"EndMoveAttack"*/;
      v14->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5982/*"EndMoveAttack"*/;
      sub_B0D840((BattleServantConfConponent_o *)&v14->fields.callWhenFinished, v23, v24, v25, v26, v27, v28, v29);
      return;
    }
LABEL_16:
    sub_B0D97C(transform);
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_16;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_16;
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v30, 0LL);
  this->fields.isMove = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MovePosition(
        UIScriptChara_o *this,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v11; // x20
  System_Int32_array **transform; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *v19; // x20
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_421CF60 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_5980/*"EndMove"*/, v9);
    byte_421CF60 = 1;
  }
  this->fields.isMove = 1;
  if ( duration > 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v29.fields.x = x;
    v29.fields.y = y;
    v29.fields.z = z;
    v11 = (UnityEngine_Object_o *)TweenPosition__Begin(gameObject, duration, v29, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    {
      transform = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v11 )
      {
        v11[3].klass = (UnityEngine_Object_c *)transform;
        v19 = v11 + 3;
        sub_B0D840((BattleServantConfConponent_o *)v19, transform, v13, v14, v15, v16, v17, v18);
        v20 = (System_Int32_array **)StringLiteral_5980/*"EndMove"*/;
        v19->monitor = (void *)StringLiteral_5980/*"EndMove"*/;
        sub_B0D840((BattleServantConfConponent_o *)&v19->monitor, v20, v21, v22, v23, v24, v25, v26);
        return;
      }
LABEL_13:
      sub_B0D97C(transform);
    }
  }
  transform = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  transform = (System_Int32_array **)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_13;
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v28, 0LL);
  UIScriptChara__EndMove(this, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MovePositionEase(
        UIScriptChara_o *this,
        float time,
        UnityEngine_Vector3_o vector,
        System_String_o *easetype,
        const MethodInfo *method)
{
  float z; // s11
  float y; // s9
  float x; // s10
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Hashtable_o *v22; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  UnityEngine_GameObject_o *v28; // x19
  const MethodInfo *v29; // x1
  float v30; // [xsp+Ch] [xbp-54h] BYREF
  float v31; // [xsp+10h] [xbp-50h] BYREF
  float v32; // [xsp+14h] [xbp-4Ch] BYREF
  int v33; // [xsp+18h] [xbp-48h] BYREF
  char v34[4]; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  z = vector.fields.z;
  y = vector.fields.y;
  x = vector.fields.x;
  if ( (byte_421CF61 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, easetype);
    sub_B0D8A4(&System_Collections_Hashtable_TypeInfo, v11);
    sub_B0D8A4(&float_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_23394/*"x"*/, v13);
    sub_B0D8A4(&StringLiteral_18170/*"easetype"*/, v14);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v15);
    sub_B0D8A4(&StringLiteral_5980/*"EndMove"*/, v16);
    sub_B0D8A4(&StringLiteral_18005/*"delay"*/, v17);
    sub_B0D8A4(&StringLiteral_23486/*"y"*/, v18);
    sub_B0D8A4(&StringLiteral_20001/*"isLocal"*/, v19);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v20);
    sub_B0D8A4(&iTween_TypeInfo, v21);
    byte_421CF61 = 1;
  }
  this->fields.isMove = 1;
  if ( time <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( gameObject )
      {
        v35.fields.x = x;
        v35.fields.y = y;
        v35.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v35, 0LL);
        UIScriptChara__EndMove(this, v29);
        return;
      }
    }
LABEL_12:
    sub_B0D97C(gameObject);
  }
  v22 = (System_Collections_Hashtable_o *)sub_B0D974(System_Collections_Hashtable_TypeInfo, easetype, method);
  System_Collections_Hashtable___ctor_38437272(v22, 0LL);
  v34[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v34);
  if ( !v22 )
    goto LABEL_12;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_20001/*"isLocal"*/,
    gameObject,
    v22->klass->vtable._24_Clear.methodPtr);
  v33 = 0;
  v24 = j_il2cpp_value_box_0(float_TypeInfo, &v33);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_18005/*"delay"*/,
    v24,
    v22->klass->vtable._24_Clear.methodPtr);
  v32 = x;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &v32);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_23394/*"x"*/,
    v25,
    v22->klass->vtable._24_Clear.methodPtr);
  v31 = y;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_23486/*"y"*/,
    v26,
    v22->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_18170/*"easetype"*/,
    easetype,
    v22->klass->vtable._24_Clear.methodPtr);
  v30 = time;
  v27 = j_il2cpp_value_box_0(float_TypeInfo, &v30);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_22753/*"time"*/,
    v27,
    v22->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_21332/*"oncomplete"*/,
    StringLiteral_5980/*"EndMove"*/,
    v22->klass->vtable._24_Clear.methodPtr);
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_42384720(v28, v22, 0LL);
}


void __fastcall UIScriptChara__MoveReturnPosition(UIScriptChara_o *this, float duration, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v7; // x20
  System_Int32_array **transform; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *v15; // x20
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_421CF63 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_5983/*"EndMoveReturn"*/, v5);
    byte_421CF63 = 1;
  }
  this->fields.isMove = 1;
  if ( duration > 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v7 = (UnityEngine_Object_o *)TweenPosition__Begin(gameObject, duration, this->fields.basePosition, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
    {
      transform = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v7 )
      {
        v7[3].klass = (UnityEngine_Object_c *)transform;
        v15 = v7 + 3;
        sub_B0D840((BattleServantConfConponent_o *)v15, transform, v9, v10, v11, v12, v13, v14);
        v16 = (System_Int32_array **)StringLiteral_5983/*"EndMoveReturn"*/;
        v15->monitor = (void *)StringLiteral_5983/*"EndMoveReturn"*/;
        sub_B0D840((BattleServantConfConponent_o *)&v15->monitor, v16, v17, v18, v19, v20, v21, v22);
        return;
      }
LABEL_13:
      sub_B0D97C(transform);
    }
  }
  transform = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  transform = (System_Int32_array **)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.basePosition, 0LL);
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__MoveReturnPositionEase(
        UIScriptChara_o *this,
        float x,
        float y,
        float time,
        System_String_o *startEaseType,
        System_String_o *returnEaseType,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Hashtable_o *v33; // x21
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x0
  UnityEngine_GameObject_o *v38; // x20
  float returnDuration; // [xsp+4h] [xbp-4Ch] BYREF
  float v40; // [xsp+8h] [xbp-48h] BYREF
  float v41; // [xsp+Ch] [xbp-44h] BYREF
  int v42; // [xsp+18h] [xbp-38h] BYREF
  char v43[4]; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421CF65 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, startEaseType);
    sub_B0D8A4(&System_Collections_Hashtable_TypeInfo, v13);
    sub_B0D8A4(&float_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_23394/*"x"*/, v15);
    sub_B0D8A4(&StringLiteral_18170/*"easetype"*/, v16);
    sub_B0D8A4(&StringLiteral_5984/*"EndMoveReturnEaseHalf"*/, v17);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v18);
    sub_B0D8A4(&StringLiteral_18005/*"delay"*/, v19);
    sub_B0D8A4(&StringLiteral_23486/*"y"*/, v20);
    sub_B0D8A4(&StringLiteral_20001/*"isLocal"*/, v21);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v22);
    sub_B0D8A4(&iTween_TypeInfo, v23);
    byte_421CF65 = 1;
  }
  this->fields.isMove = 1;
  if ( time > 0.0 )
  {
    this->fields.returnDuration = time * 0.5;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    this->fields.returnEaseType = returnEaseType;
    this->fields.basePosition = localPosition;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.returnEaseType,
      (System_Int32_array **)returnEaseType,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v33 = (System_Collections_Hashtable_o *)sub_B0D974(System_Collections_Hashtable_TypeInfo, v31, v32);
    System_Collections_Hashtable___ctor_38437272(v33, 0LL);
    v43[0] = 1;
    gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v43);
    if ( !v33 )
LABEL_14:
      sub_B0D97C(gameObject);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
      v33,
      StringLiteral_20001/*"isLocal"*/,
      gameObject,
      v33->klass->vtable._24_Clear.methodPtr);
    v42 = 0;
    v34 = j_il2cpp_value_box_0(float_TypeInfo, &v42);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
      v33,
      StringLiteral_18005/*"delay"*/,
      v34,
      v33->klass->vtable._24_Clear.methodPtr);
    v41 = x;
    v35 = j_il2cpp_value_box_0(float_TypeInfo, &v41);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
      v33,
      StringLiteral_23394/*"x"*/,
      v35,
      v33->klass->vtable._24_Clear.methodPtr);
    v40 = y;
    v36 = j_il2cpp_value_box_0(float_TypeInfo, &v40);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
      v33,
      StringLiteral_23486/*"y"*/,
      v36,
      v33->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
      v33,
      StringLiteral_18170/*"easetype"*/,
      startEaseType,
      v33->klass->vtable._24_Clear.methodPtr);
    returnDuration = this->fields.returnDuration;
    v37 = j_il2cpp_value_box_0(float_TypeInfo, &returnDuration);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
      v33,
      StringLiteral_22753/*"time"*/,
      v37,
      v33->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
      v33,
      StringLiteral_21332/*"oncomplete"*/,
      StringLiteral_5984/*"EndMoveReturnEaseHalf"*/,
      v33->klass->vtable._24_Clear.methodPtr);
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_42384720(v38, v33, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.basePosition, 0LL);
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__MoveReturnPositionEase_37539300(
        UIScriptChara_o *this,
        float time,
        System_String_o *returnEaseType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Hashtable_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float v25; // [xsp+4h] [xbp-3Ch] BYREF
  float y; // [xsp+8h] [xbp-38h] BYREF
  float x; // [xsp+Ch] [xbp-34h] BYREF
  int v28; // [xsp+18h] [xbp-28h] BYREF
  char v29[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_421CF66 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, returnEaseType);
    sub_B0D8A4(&System_Collections_Hashtable_TypeInfo, v7);
    sub_B0D8A4(&float_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_23394/*"x"*/, v9);
    sub_B0D8A4(&StringLiteral_18170/*"easetype"*/, v10);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v11);
    sub_B0D8A4(&StringLiteral_18005/*"delay"*/, v12);
    sub_B0D8A4(&StringLiteral_5983/*"EndMoveReturn"*/, v13);
    sub_B0D8A4(&StringLiteral_23486/*"y"*/, v14);
    sub_B0D8A4(&StringLiteral_20001/*"isLocal"*/, v15);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v16);
    sub_B0D8A4(&iTween_TypeInfo, v17);
    byte_421CF66 = 1;
  }
  this->fields.isMove = 1;
  if ( time > 0.0 )
  {
    v18 = (System_Collections_Hashtable_o *)sub_B0D974(System_Collections_Hashtable_TypeInfo, returnEaseType, method);
    System_Collections_Hashtable___ctor_38437272(v18, 0LL);
    v29[0] = 1;
    v19 = j_il2cpp_value_box_0(bool_TypeInfo, v29);
    if ( !v18 )
      sub_B0D97C(v19);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
      v18,
      StringLiteral_20001/*"isLocal"*/,
      v19,
      v18->klass->vtable._24_Clear.methodPtr);
    v28 = 0;
    v20 = j_il2cpp_value_box_0(float_TypeInfo, &v28);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
      v18,
      StringLiteral_18005/*"delay"*/,
      v20,
      v18->klass->vtable._24_Clear.methodPtr);
    x = this->fields.basePosition.fields.x;
    v21 = j_il2cpp_value_box_0(float_TypeInfo, &x);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
      v18,
      StringLiteral_23394/*"x"*/,
      v21,
      v18->klass->vtable._24_Clear.methodPtr);
    y = this->fields.basePosition.fields.y;
    v22 = j_il2cpp_value_box_0(float_TypeInfo, &y);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
      v18,
      StringLiteral_23486/*"y"*/,
      v22,
      v18->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
      v18,
      StringLiteral_18170/*"easetype"*/,
      returnEaseType,
      v18->klass->vtable._24_Clear.methodPtr);
    v25 = time;
    v23 = j_il2cpp_value_box_0(float_TypeInfo, &v25);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
      v18,
      StringLiteral_22753/*"time"*/,
      v23,
      v18->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
      v18,
      StringLiteral_21332/*"oncomplete"*/,
      StringLiteral_5983/*"EndMoveReturn"*/,
      v18->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_42384720(gameObject, v18, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MoveReturnPosition_37538036(
        UIScriptChara_o *this,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Object_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *v19; // x20
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Vector3_o v27; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_421CF64 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_5985/*"EndMoveReturnHalf"*/, v9);
    byte_421CF64 = 1;
  }
  this->fields.isMove = 1;
  if ( duration > 0.0 )
  {
    this->fields.returnDuration = duration * 0.5;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_15;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_15;
    this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v27.fields.x = x;
    v27.fields.y = y;
    v27.fields.z = z;
    v12 = (UnityEngine_Object_o *)TweenPosition__Begin(v11, this->fields.returnDuration, v27, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v12 )
      {
        v12[3].klass = (UnityEngine_Object_c *)gameObject;
        v19 = v12 + 3;
        sub_B0D840((BattleServantConfConponent_o *)v19, (System_Int32_array **)gameObject, v13, v14, v15, v16, v17, v18);
        v20 = (System_Int32_array **)StringLiteral_5985/*"EndMoveReturnHalf"*/;
        v19->monitor = (void *)StringLiteral_5985/*"EndMoveReturnHalf"*/;
        sub_B0D840((BattleServantConfConponent_o *)&v19->monitor, v20, v21, v22, v23, v24, v25, v26);
        return;
      }
LABEL_15:
      sub_B0D97C(gameObject);
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__MoveScale(UIScriptChara_o *this, float duration, float s, const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Component_o *baseScale; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Object_o *v17; // x20
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_421CF67 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_5986/*"EndMoveScale"*/, v7);
    byte_421CF67 = 1;
  }
  this->fields.baseScaleSize.fields.x = s;
  this->fields.baseScaleSize.fields.y = s;
  this->fields.isMove = 1;
  this->fields.baseScaleSize.fields.z = 1.0;
  if ( duration > 0.0 )
  {
    baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
    if ( !baseScale )
      goto LABEL_12;
    gameObject = UnityEngine_Component__get_gameObject(baseScale, 0LL);
    v10 = (UnityEngine_Object_o *)TweenScale__Begin(gameObject, duration, this->fields.baseScaleSize, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    {
      baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v10 )
      {
        v10[3].klass = (UnityEngine_Object_c *)baseScale;
        v17 = v10 + 3;
        sub_B0D840((BattleServantConfConponent_o *)v17, (System_Int32_array **)baseScale, v11, v12, v13, v14, v15, v16);
        v18 = (System_Int32_array **)StringLiteral_5986/*"EndMoveScale"*/;
        v17->monitor = (void *)StringLiteral_5986/*"EndMoveScale"*/;
        sub_B0D840((BattleServantConfConponent_o *)&v17->monitor, v18, v19, v20, v21, v22, v23, v24);
        return;
      }
LABEL_12:
      sub_B0D97C(baseScale);
    }
  }
  UIScriptChara__EndMoveScale(this, method);
}


void __fastcall UIScriptChara__MoveScaleEase(
        UIScriptChara_o *this,
        float scale,
        float time,
        System_String_o *easetype,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Hashtable_o *v19; // x21
  UnityEngine_Component_o *baseScale; // x0
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float v25; // [xsp+0h] [xbp-40h] BYREF
  float y; // [xsp+4h] [xbp-3Ch] BYREF
  float x; // [xsp+8h] [xbp-38h] BYREF
  char v28[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_421CF68 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, easetype);
    sub_B0D8A4(&System_Collections_Hashtable_TypeInfo, v9);
    sub_B0D8A4(&float_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_23394/*"x"*/, v11);
    sub_B0D8A4(&StringLiteral_18170/*"easetype"*/, v12);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v13);
    sub_B0D8A4(&StringLiteral_23486/*"y"*/, v14);
    sub_B0D8A4(&StringLiteral_20001/*"isLocal"*/, v15);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v16);
    sub_B0D8A4(&StringLiteral_5986/*"EndMoveScale"*/, v17);
    sub_B0D8A4(&iTween_TypeInfo, v18);
    byte_421CF68 = 1;
  }
  this->fields.baseScaleSize.fields.x = scale;
  this->fields.baseScaleSize.fields.y = scale;
  this->fields.isMove = 1;
  this->fields.baseScaleSize.fields.z = 1.0;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveScale(this, (const MethodInfo *)easetype);
  }
  else
  {
    v19 = (System_Collections_Hashtable_o *)sub_B0D974(System_Collections_Hashtable_TypeInfo, easetype, method);
    System_Collections_Hashtable___ctor_38437272(v19, 0LL);
    v28[0] = 1;
    baseScale = (UnityEngine_Component_o *)j_il2cpp_value_box_0(bool_TypeInfo, v28);
    if ( !v19 )
      goto LABEL_11;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_Component_o *, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_20001/*"isLocal"*/,
      baseScale,
      v19->klass->vtable._24_Clear.methodPtr);
    x = this->fields.baseScaleSize.fields.x;
    v21 = j_il2cpp_value_box_0(float_TypeInfo, &x);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_23394/*"x"*/,
      v21,
      v19->klass->vtable._24_Clear.methodPtr);
    y = this->fields.baseScaleSize.fields.y;
    v22 = j_il2cpp_value_box_0(float_TypeInfo, &y);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_23486/*"y"*/,
      v22,
      v19->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_18170/*"easetype"*/,
      easetype,
      v19->klass->vtable._24_Clear.methodPtr);
    v25 = time;
    v23 = j_il2cpp_value_box_0(float_TypeInfo, &v25);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_22753/*"time"*/,
      v23,
      v19->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_21332/*"oncomplete"*/,
      StringLiteral_5986/*"EndMoveScale"*/,
      v19->klass->vtable._24_Clear.methodPtr);
    baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
    if ( !baseScale )
LABEL_11:
      sub_B0D97C(baseScale);
    gameObject = UnityEngine_Component__get_gameObject(baseScale, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ScaleTo_42390420(gameObject, v19, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__OnShake(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseShake; // x20
  float v4; // s8
  __int64 v5; // x0
  float v6; // s0
  UnityEngine_Transform_o *v7; // x20
  int v8; // s0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421CF6D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_10078/*"OnShake"*/, method);
    byte_421CF6D = 1;
  }
  if ( this->fields.shakeCycle > 0.0
    && (this->fields.shakeTime == 0.0 || UnityEngine_Time__get_time(0LL) < this->fields.shakeTime) )
  {
    baseShake = this->fields.baseShake;
    v4 = UnityEngine_Random__Range(-this->fields.shakeX, this->fields.shakeX, 0LL);
    v6 = UnityEngine_Random__Range(-this->fields.shakeY, this->fields.shakeY, 0LL);
    if ( baseShake )
    {
      v11.fields.y = v6;
      v11.fields.z = 0.0;
      v11.fields.x = v4;
      UnityEngine_Transform__set_localPosition(baseShake, v11, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10078/*"OnShake"*/,
        this->fields.shakeCycle,
        0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(v5);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_34929376(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10078/*"OnShake"*/,
    0LL);
  v7 = this->fields.baseShake;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v7 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(v7, *(UnityEngine_Vector3_o *)&v8, 0LL);
  this->fields.shakeCycle = 0.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__RecoverShadowEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  if ( this->fields.isShadow )
    UIScriptChara__StartShadowEffect(this, (const MethodInfo *)isSkip);
  else
    UIScriptChara__StopShadowEffect(this, isSkip, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ResumeBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_421CF7F & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, isSkip);
    byte_421CF7F = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume(baseEffectBack, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeBackEffect_37547532(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_421CF80 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, n);
    byte_421CF80 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume_16967804(baseEffectBack, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeCutin(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ResumeEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_421CF76 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, isSkip);
    byte_421CF76 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume(baseEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeEffect_37546104(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_421CF77 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, n);
    byte_421CF77 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume_16967804(baseEffect, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ProgramEffectManager__Resume(this->fields.baseSpecialEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect_37545020(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  ProgramEffectManager__Resume_24370904(this->fields.baseSpecialEffect, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__SetAlpha(UIScriptChara_o *this, float a, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  this->fields.isDisp = a > 0.0;
  UIScriptChara__RecoverShadowEffect(this, 0, v3);
}


void __fastcall UIScriptChara__SetBackEffect(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        bool isPause,
        int32_t flip,
        bool isOnSublayer,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x6
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  zero = UnityEngine_Vector3__get_zero(0LL);
  UIScriptChara__SetBackEffect_37547032(this, n, zero, isSkip, isPause, flip, isOnSublayer, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetBackEffect_37547032(
        UIScriptChara_o *this,
        System_String_o *n,
        UnityEngine_Vector3_o p,
        bool isSkip,
        bool isPause,
        int32_t flip,
        bool isOnSublayer,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *baseEffectBack; // x23
  CommonEffectLoadComponent_LoadEndHandler_o *v20; // x24
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  z = p.fields.z;
  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_421CF7E & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, n);
    sub_B0D8A4(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v17);
    sub_B0D8A4(&Method_UIScriptChara__SetBackEffect_g__Callback_121_0__, v18);
    byte_421CF7E = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( isOnSublayer )
  {
    v20 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B0D974(
                                                          CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                          n,
                                                          isSkip);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v20,
      0LL,
      Method_UIScriptChara__SetBackEffect_g__Callback_121_0__,
      0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v21.fields.y = y;
    v21.fields.z = z;
    v21.fields.x = x;
    CommonEffectManager__Create_16966356(baseEffectBack, n, v21, v20, isSkip, isPause, flip, 0LL);
  }
  else
  {
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v22.fields.y = y;
    v22.fields.z = z;
    v22.fields.x = x;
    CommonEffectManager__Create_16966160(baseEffectBack, n, v22, isSkip, isPause, flip, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetBasePosition(
        UIScriptChara_o *this,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
  if ( !transform )
    sub_B0D97C(0LL);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetCharacter(
        UIScriptChara_o *this,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.setCallback = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setCallback,
    (System_Int32_array **)callback,
    *(System_String_array ***)&faceType,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
}


void __fastcall UIScriptChara__SetCutin(
        UIScriptChara_o *this,
        System_String_o *n,
        float time,
        float mgd,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  ;
}


void __fastcall UIScriptChara__SetCutout(UIScriptChara_o *this, float time, bool isSkip, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetDepth(UIScriptChara_o *this, int32_t d, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseDepth; // x0
  int v6; // s0
  float v8; // s2

  baseDepth = this->fields.baseDepth;
  if ( !baseDepth
    || (*(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localPosition(baseDepth, 0LL),
        (baseDepth = this->fields.baseDepth) == 0LL) )
  {
    sub_B0D97C(baseDepth);
  }
  v8 = (float)-d * 10.0;
  UnityEngine_Transform__set_localPosition(baseDepth, *(UnityEngine_Vector3_o *)&v6, 0LL);
}


void __fastcall UIScriptChara__SetEffect(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        bool isPause,
        int32_t flip,
        bool isOnSublayer,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x6
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  zero = UnityEngine_Vector3__get_zero(0LL);
  UIScriptChara__SetEffect_37545604(this, n, zero, isSkip, isPause, flip, isOnSublayer, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetEffectEdgeBlur(
        UIScriptChara_o *this,
        System_String_o *effectName,
        UnityEngine_Color_o color,
        UnityEngine_Color_o particleColor,
        bool isSkip,
        bool isPause,
        int32_t flip,
        int32_t level,
        float thick,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  float v17; // s12
  float v18; // s13
  float v19; // s14
  float v20; // s15
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x24
  __int64 v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *v42; // x25
  __int64 v43; // x1
  __int64 v44; // x2
  CommonEffectLoadComponent_LoadEndHandler_o *v45; // x25
  UnityEngine_GameObject_o *baseEffect; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float a; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  a = particleColor.fields.a;
  b = particleColor.fields.b;
  g = particleColor.fields.g;
  r = particleColor.fields.r;
  v17 = color.fields.a;
  v18 = color.fields.b;
  v19 = color.fields.g;
  v20 = color.fields.r;
  if ( (byte_421CF5D & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, effectName);
    sub_B0D8A4(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v23);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v24);
    sub_B0D8A4(&Method_UIScriptChara___c__DisplayClass39_0__SetEffectEdgeBlur_b__0__, v25);
    sub_B0D8A4(&UIScriptChara___c__DisplayClass39_0_TypeInfo, v26);
    byte_421CF5D = 1;
  }
  v27 = sub_B0D974(UIScriptChara___c__DisplayClass39_0_TypeInfo, effectName, isSkip);
  UIScriptChara___c__DisplayClass39_0___ctor((UIScriptChara___c__DisplayClass39_0_o *)v27, 0LL);
  if ( !v27 )
    sub_B0D97C(v28);
  *(_QWORD *)(v27 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(float *)(v27 + 24) = v20;
  *(float *)(v27 + 28) = v19;
  *(float *)(v27 + 32) = v18;
  *(float *)(v27 + 36) = v17;
  *(float *)(v27 + 40) = r;
  *(float *)(v27 + 44) = g;
  *(float *)(v27 + 64) = thick;
  *(_DWORD *)(v27 + 68) = level;
  *(float *)(v27 + 48) = b;
  *(float *)(v27 + 52) = a;
  v35 = (System_Int32_array **)((__int64 (__fastcall *)(UIScriptChara_o *, Il2CppMethodPointer))this->klass->vtable._6_GetBodySubTexture.method)(
                                 this,
                                 this->klass->vtable._7_GetBody.methodPtr);
  *(_QWORD *)(v27 + 56) = v35;
  sub_B0D840((BattleServantConfConponent_o *)(v27 + 56), v35, v36, v37, v38, v39, v40, v41);
  v42 = *(UnityEngine_Object_o **)(v27 + 56);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v42, 0LL, 0LL) )
  {
    v45 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B0D974(
                                                          CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                          v43,
                                                          v44);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v45,
      (Il2CppObject *)v27,
      Method_UIScriptChara___c__DisplayClass39_0__SetEffectEdgeBlur_b__0__,
      0LL);
    baseEffect = this->fields.baseEffect;
    zero = UnityEngine_Vector3__get_zero(0LL);
    x = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v52.fields.x = x;
    v52.fields.y = y;
    v52.fields.z = z;
    CommonEffectManager__Create_16966356(baseEffect, effectName, v52, v45, isSkip, isPause, flip, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetEffect_37545604(
        UIScriptChara_o *this,
        System_String_o *n,
        UnityEngine_Vector3_o p,
        bool isSkip,
        bool isPause,
        int32_t flip,
        bool isOnSublayer,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *baseEffect; // x23
  CommonEffectLoadComponent_LoadEndHandler_o *v20; // x24
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  z = p.fields.z;
  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_421CF75 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, n);
    sub_B0D8A4(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v17);
    sub_B0D8A4(&Method_UIScriptChara__SetEffect_g__Callback_111_0__, v18);
    byte_421CF75 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( isOnSublayer )
  {
    v20 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B0D974(
                                                          CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                          n,
                                                          isSkip);
    CommonEffectLoadComponent_LoadEndHandler___ctor(v20, 0LL, Method_UIScriptChara__SetEffect_g__Callback_111_0__, 0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v21.fields.y = y;
    v21.fields.z = z;
    v21.fields.x = x;
    CommonEffectManager__Create_16966356(baseEffect, n, v21, v20, isSkip, isPause, flip, 0LL);
  }
  else
  {
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v22.fields.y = y;
    v22.fields.z = z;
    v22.fields.x = x;
    CommonEffectManager__Create_16966160(baseEffect, n, v22, isSkip, isPause, flip, 0LL);
  }
}


void __fastcall UIScriptChara__SetFace(
        UIScriptChara_o *this,
        int32_t faceType,
        float fadeTime,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetFilter(
        UIScriptChara_o *this,
        System_String_o *filterName,
        UnityEngine_Color_o filterColor,
        const MethodInfo *method)
{
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  struct System_String_o **p_filterName; // x19
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11

  this->fields.filterName = filterName;
  p_filterName = &this->fields.filterName;
  a = filterColor.fields.a;
  b = filterColor.fields.b;
  g = filterColor.fields.g;
  r = filterColor.fields.r;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.filterName,
    (System_Int32_array **)filterName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  *((float *)p_filterName + 2) = r;
  *((float *)p_filterName + 3) = g;
  *((float *)p_filterName + 4) = b;
  *((float *)p_filterName + 5) = a;
}


void __fastcall UIScriptChara__SetFullScreenScaleType(UIScriptChara_o *this, int32_t type, const MethodInfo *method)
{
  ;
}


void __fastcall UIScriptChara__SetMaskInteraction(
        UIScriptChara_o *this,
        int32_t maskInteraction,
        const MethodInfo *method)
{
  ;
}


void __fastcall UIScriptChara__SetMaterial(UIScriptChara_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetPosition(UIScriptChara_o *this, UnityEngine_Vector3_o v, const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  v7.fields.y = y;
  v7.fields.z = z;
  v7.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__SetRoll(
        UIScriptChara_o *this,
        float rollZ,
        UnityEngine_Vector3_o centerOffset,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x1
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s3
  struct UnityEngine_Transform_o *baseRoll1; // x0
  float v15; // s11
  float v16; // s12
  float v17; // s13
  float v18; // s14
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_421CF6A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenRotation___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_421CF6A = 1;
  }
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Euler(0.0, 0.0, rollZ, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_14;
  v15 = v10;
  v16 = v11;
  v17 = v12;
  v18 = v13;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)baseRoll1,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
  }
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_14;
  v23.fields.x = v15;
  v23.fields.y = v16;
  v23.fields.z = v17;
  v23.fields.w = v18;
  UnityEngine_Transform__set_localRotation(baseRoll1, v23, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1
    || (v21.fields.x = -x,
        v21.fields.y = -y,
        v21.fields.z = -z,
        UnityEngine_Transform__set_localPosition(baseRoll1, v21, 0LL),
        (baseRoll1 = this->fields.baseRoll2) == 0LL) )
  {
LABEL_14:
    sub_B0D97C(baseRoll1);
  }
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localPosition(baseRoll1, v22, 0LL);
  this->fields.isRoll = 0;
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetScale(UIScriptChara_o *this, float v, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseScale; // x0
  float v4; // s2

  baseScale = this->fields.baseScale;
  if ( !baseScale )
    sub_B0D97C(0LL);
  v4 = 1.0;
  UnityEngine_Transform__set_localScale(baseScale, *(UnityEngine_Vector3_o *)&v, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetShadow(UIScriptChara_o *this, bool isShadow, bool isSkip, const MethodInfo *method)
{
  if ( ((!this->fields.isShadow ^ isShadow) & 1) == 0 )
  {
    this->fields.isShadow = isShadow;
    UIScriptChara__RecoverShadowEffect(this, isSkip, (const MethodInfo *)isSkip);
  }
}


void __fastcall UIScriptChara__SetSortingOrder(UIScriptChara_o *this, int32_t order, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetSpecialEffect(
        UIScriptChara_o *this,
        System_String_o *n,
        UnityEngine_Vector3_o pos,
        float time,
        UnityEngine_Color_o color,
        float range,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  float z; // s13
  float y; // s14
  float x; // s15
  int v20; // s7
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  int v32; // s7
  UnityEngine_Object_o *CharaEffect; // x22
  bool v34; // w0
  uint32_t v35; // w0
  __int64 *v36; // x8
  const MethodInfo *v37; // x2
  int v38; // [xsp+5Ch] [xbp-24h]
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v40; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_421CF70 & 1) == 0 )
  {
    v38 = v20;
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, n);
    sub_B0D8A4(&StringLiteral_23371/*"wipe"*/, v21);
    sub_B0D8A4(&StringLiteral_16427/*"appearanceReverse"*/, v22);
    sub_B0D8A4(&StringLiteral_17922/*"darkEnemyErasure"*/, v23);
    sub_B0D8A4(&StringLiteral_23377/*"wipeTimeRe"*/, v24);
    sub_B0D8A4(&StringLiteral_17923/*"darkWipe"*/, v25);
    sub_B0D8A4(&StringLiteral_18820/*"flashErasure"*/, v26);
    sub_B0D8A4(&StringLiteral_16426/*"appearance"*/, v27);
    sub_B0D8A4(&StringLiteral_18450/*"erasure"*/, v28);
    sub_B0D8A4(&StringLiteral_18451/*"erasureReverse"*/, v29);
    sub_B0D8A4(&StringLiteral_18419/*"enemyErasure"*/, v30);
    sub_B0D8A4(&StringLiteral_23376/*"wipeTime"*/, v31);
    v32 = v38;
    byte_421CF70 = 1;
  }
  v39.fields.x = x;
  v39.fields.y = y;
  v39.fields.z = z;
  v40.fields.r = r;
  v40.fields.g = g;
  v40.fields.b = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v39,
                                          time,
                                          v40,
                                          range,
                                          isSkip,
                                          isPause,
                                          0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v34 = UnityEngine_Object__op_Equality(CharaEffect, 0LL, 0LL);
  if ( n && !v34 )
  {
    v35 = PrivateImplementationDetails___ComputeStringHash_20827812(n, 0LL);
    if ( v35 > 0x8D759330 )
    {
      if ( v35 > 0xD4B34506 )
      {
        switch ( v35 )
        {
          case 0xE7555186:
            v36 = &StringLiteral_23371/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v36 = &StringLiteral_17923/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v36 = &StringLiteral_16426/*"appearance"*/;
            break;
          default:
            return;
        }
      }
      else
      {
        switch ( v35 )
        {
          case 0x8DA714B6:
            v36 = &StringLiteral_23377/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v36 = &StringLiteral_18820/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v36 = &StringLiteral_18451/*"erasureReverse"*/;
            break;
          default:
            return;
        }
      }
    }
    else if ( v35 > 0x4A1132BE )
    {
      switch ( v35 )
      {
        case 0x8D759330:
          v36 = &StringLiteral_18450/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v36 = &StringLiteral_18419/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v36 = &StringLiteral_16427/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v35 == 242689791 )
    {
      v36 = &StringLiteral_23376/*"wipeTime"*/;
    }
    else
    {
      if ( v35 != 1242641086 )
        return;
      v36 = &StringLiteral_17922/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v36, 0LL) )
      UIScriptChara__StopShadowEffect(this, isSkip, v37);
  }
}


void __fastcall UIScriptChara__SetTalkMask(UIScriptChara_o *this, bool isMask, const MethodInfo *method)
{
  ;
}


void __fastcall UIScriptChara__Shake(
        UIScriptChara_o *this,
        float duration,
        float cycle,
        float x,
        float y,
        const MethodInfo *method)
{
  bool v11; // cc
  float v12; // s0

  v11 = duration <= 0.0;
  v12 = 0.0;
  if ( !v11 )
    v12 = UnityEngine_Time__get_time(0LL) + duration;
  if ( !this )
    sub_B0D97C(this);
  this->fields.shakeTime = v12;
  this->fields.shakeCycle = cycle;
  this->fields.shakeX = x;
  this->fields.shakeY = y;
  UIScriptChara__OnShake(this, method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StartRoll(UIScriptChara_o *this, float duration, float rollZ, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s3
  struct UnityEngine_Transform_o *baseRoll1; // x0
  float v14; // s8
  float v15; // s9
  float v16; // s10
  float v17; // s11
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v20; // x20
  System_Int32_array **v21; // x0
  UnityEngine_Object_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Quaternion_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v38; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_421CF6B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenRotation___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_5966/*"EndExecuteCameraRoll"*/, v8);
    byte_421CF6B = 1;
  }
  *(UnityEngine_Quaternion_o *)&v9 = UnityEngine_Quaternion__Euler(0.0, 0.0, rollZ, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_21;
  v14 = v9;
  v15 = v10;
  v16 = v11;
  v17 = v12;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)baseRoll1,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_21;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
  }
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
LABEL_21:
    sub_B0D97C(baseRoll1);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseRoll1, 0LL);
  v38.fields.x = v14;
  v38.fields.y = v15;
  v38.fields.z = v16;
  v38.fields.w = v17;
  v20 = (UnityEngine_Object_o *)TweenRotation__Begin(gameObject, duration, v38, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) == 0 )
    goto LABEL_18;
  if ( !v20 )
    goto LABEL_21;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v20, 0LL) )
  {
LABEL_18:
    baseRoll1 = this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v37.fields.x = v14;
      v37.fields.y = v15;
      v37.fields.z = v16;
      v37.fields.w = v17;
      UnityEngine_Transform__set_localRotation(baseRoll1, v37, 0LL);
      return 1;
    }
    goto LABEL_21;
  }
  v21 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20[3].klass = (UnityEngine_Object_c *)v21;
  v22 = v20 + 3;
  sub_B0D840((BattleServantConfConponent_o *)v22, v21, v23, v24, v25, v26, v27, v28);
  v29 = (System_Int32_array **)StringLiteral_5966/*"EndExecuteCameraRoll"*/;
  v22->monitor = (void *)StringLiteral_5966/*"EndExecuteCameraRoll"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v22->monitor, v29, v30, v31, v32, v33, v34, v35);
  this->fields.isRoll = 1;
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StartRollEx(
        UIScriptChara_o *this,
        float duration,
        float rollZ,
        UnityEngine_Vector3_o centerOffset,
        const MethodInfo *method)
{
  float z; // s12
  float y; // s13
  float x; // s14
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  float v14; // s1
  float v15; // s2
  float v16; // s3
  UnityEngine_Component_o *baseRoll1; // x0
  float v18; // s0
  float v19; // s9
  float v20; // s10
  float v21; // s11
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v24; // x20
  System_Int32_array **v25; // x0
  UnityEngine_Component_o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  MethodInfo v41; // [xsp+0h] [xbp-70h] BYREF
  float v42; // [xsp+5Ch] [xbp-14h]
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_421CF6C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenRotation___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&Method_UITweener_Begin_TweenRotation___, v12);
    sub_B0D8A4(&StringLiteral_5966/*"EndExecuteCameraRoll"*/, v13);
    byte_421CF6C = 1;
  }
  v41.methodPointer = 0LL;
  v41.invoker_method = 0LL;
  *(UnityEngine_Quaternion_o *)(&v14 - 1) = UnityEngine_Quaternion__Euler(0.0, 0.0, rollZ, 0LL);
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  v42 = v18;
  if ( !baseRoll1 )
    goto LABEL_25;
  v19 = v14;
  v20 = v15;
  v21 = v16;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      baseRoll1,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseRoll1 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject(baseRoll1, 0LL);
  baseRoll1 = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                           gameObject,
                                           duration,
                                           (const MethodInfo_205679C *)Method_UITweener_Begin_TweenRotation___);
  if ( !baseRoll1 )
    goto LABEL_25;
  v24 = baseRoll1;
  value = TweenRotation__get_value((TweenRotation_o *)baseRoll1, 0LL);
  v41.methodPointer = *(Il2CppMethodPointer *)&value.fields.x;
  v41.invoker_method = *(void **)&value.fields.z;
  *(UnityEngine_Vector3_o *)&v24[5].klass = UnityEngine_Quaternion__get_eulerAngles(value, &v41);
  HIDWORD(v24[5].monitor) = 0;
  v24[5].fields.m_CachedPtr = 0;
  *((float *)&v24[5].fields + 1) = rollZ;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v24, 1.0, 1, 0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v24, 0, 0LL);
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1
    || (v43.fields.x = -x,
        v43.fields.y = -y,
        v43.fields.z = -z,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v43, 0LL),
        (baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll2) == 0LL) )
  {
LABEL_25:
    sub_B0D97C(baseRoll1);
  }
  v44.fields.x = x;
  v44.fields.y = y;
  v44.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v44, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL)
    || !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v24, 0LL) )
  {
    baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v46.fields.x = v42;
      v46.fields.y = v19;
      v46.fields.z = v20;
      v46.fields.w = v21;
      UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)baseRoll1, v46, 0LL);
      return 1;
    }
    goto LABEL_25;
  }
  v25 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v24[3].klass = (UnityEngine_Component_c *)v25;
  v26 = v24 + 3;
  sub_B0D840((BattleServantConfConponent_o *)v26, v25, v27, v28, v29, v30, v31, v32);
  v33 = (System_Int32_array **)StringLiteral_5966/*"EndExecuteCameraRoll"*/;
  v26->monitor = (void *)StringLiteral_5966/*"EndExecuteCameraRoll"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v26->monitor, v33, v34, v35, v36, v37, v38, v39);
  this->fields.isRoll = 1;
  return 1;
}


void __fastcall UIScriptChara__StartShadowEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *baseShadowEffect; // x19

  if ( (byte_421CF5E & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_13606/*"Talk/bit_talk_11"*/, v3);
    byte_421CF5E = 1;
  }
  if ( this->fields.isShadow && this->fields.isDisp && !this->fields.isShadowEffect )
  {
    this->fields.isShadowEffect = 1;
    baseShadowEffect = this->fields.baseShadowEffect;
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    CommonEffectManager__Create_16964560(baseShadowEffect, (System_String_o *)StringLiteral_13606/*"Talk/bit_talk_11"*/, 0, 0, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StopBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_421CF81 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, isSkip);
    byte_421CF81 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop(baseEffectBack, isSkip, 0, 0LL);
}


bool __fastcall UIScriptChara__StopBackEffect_37547784(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_421CF82 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, n);
    byte_421CF82 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop_16969260(baseEffectBack, n, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopCut(UIScriptChara_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StopEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_421CF78 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, isSkip);
    byte_421CF78 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop(baseEffect, isSkip, 0, 0LL);
}


bool __fastcall UIScriptChara__StopEffect_37546356(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_421CF79 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, n);
    byte_421CF79 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop_16969260(baseEffect, n, isSkip, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__StopShadowEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseShadowEffect; // x20

  if ( (byte_421CF5F & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectManager_TypeInfo, isSkip);
    byte_421CF5F = 1;
  }
  this->fields.isShadowEffect = 0;
  baseShadowEffect = this->fields.baseShadowEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Stop(baseShadowEffect, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopSpecialEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  ProgramEffectManager__Destory(this->fields.baseSpecialEffect, 0LL);
}


void __fastcall UIScriptChara__StopSpecialEffect_37545048(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  ProgramEffectManager__Destory_24372644(this->fields.baseSpecialEffect, n, 0LL);
}


void __fastcall UIScriptChara___SetBackEffect_g__Callback_121_0(
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  _BOOL8 v3; // x0

  if ( (byte_421CF85 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421CF85 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0LL, 0LL);
  if ( !v3 )
  {
    if ( !effect )
      sub_B0D97C(v3);
    effect->fields._IsOnSublayer_k__BackingField = 1;
  }
}


void __fastcall UIScriptChara___SetEffect_g__Callback_111_0(CommonEffectComponent_o *effect, const MethodInfo *method)
{
  _BOOL8 v3; // x0

  if ( (byte_421CF84 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421CF84 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0LL, 0LL);
  if ( !v3 )
  {
    if ( !effect )
      sub_B0D97C(v3);
    effect->fields._IsOnSublayer_k__BackingField = 1;
  }
}


void __fastcall UIScriptChara___c__DisplayClass39_0___ctor(
        UIScriptChara___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara___c__DisplayClass39_0___SetEffectEdgeBlur_b__0(
        UIScriptChara___c__DisplayClass39_0_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  UIScriptChara___c__DisplayClass39_0_o *v3; // x19
  __int64 v4; // x1
  struct UIScriptChara_o *_4__this; // x8
  struct UIScriptChara_o *v6; // x8
  UIScriptChara___c__DisplayClass39_0_o *v7; // x20
  struct UIScriptChara_o *v8; // x8
  UnityEngine_Object_o *v9; // x21
  float v10; // s0
  float v11; // s1
  float v12; // s2
  int r_low; // w8
  float v14; // s8
  float v15; // s9
  float v16; // s10
  __int64 i; // x25
  __int64 v18; // x22
  UnityEngine_Transform_o *transform; // x23
  int v20; // s2
  float v21; // s0
  float v22; // s1
  struct UnityEngine_Texture_o *maskTex; // x8
  UnityEngine_Transform_o *v24; // x23
  struct UnityEngine_Texture_o *v25; // x8
  int v26; // w24
  __int64 v27; // x0
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_42125E8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___, effect);
    this = (UIScriptChara___c__DisplayClass39_0_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_42125E8 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  this = (UIScriptChara___c__DisplayClass39_0_o *)_4__this->fields.baseEffect;
  if ( !this
    || (this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          1,
                                                          (const MethodInfo_1B63008 *)Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___),
        (v6 = v3->fields.__4__this) == 0LL)
    || (v7 = this,
        this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))v6->klass->vtable._7_GetBody.method)(
                                                          v3->fields.__4__this,
                                                          v6->klass->vtable._8_GetSizeEdgeBlur.methodPtr),
        (v8 = v3->fields.__4__this) == 0LL)
    || (v9 = (UnityEngine_Object_o *)this,
        this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))v8->klass->vtable._4_GetOffsetEdgeBlur.method)(
                                                          v3->fields.__4__this,
                                                          v8->klass->vtable._5_GetRectEdgeBlur.methodPtr),
        !v7) )
  {
LABEL_26:
    sub_B0D97C(this);
  }
  r_low = LODWORD(v7->fields.color.fields.r);
  if ( r_low >= 1 )
  {
    v14 = v10;
    v15 = v11;
    v16 = v12;
    for ( i = 0LL; (int)i < r_low; ++i )
    {
      if ( (unsigned int)i >= r_low )
      {
        v27 = sub_B0D9A8(this);
        sub_B0D948(v27, 0LL);
      }
      v18 = *((_QWORD *)&v7->fields.color.fields.b + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_26;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0LL);
        this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)v18,
                                                          0LL);
        if ( !this )
          goto LABEL_26;
        *(UnityEngine_Vector3_o *)(&v20 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        if ( !transform )
          goto LABEL_26;
        v21 = v14;
        v22 = v15;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v20 - 2), 0LL);
      }
      else if ( !v18 )
      {
        goto LABEL_26;
      }
      *(struct UnityEngine_Color_o *)(v18 + 88) = v3->fields.color;
      *(struct UnityEngine_Color_o *)(v18 + 104) = v3->fields.particleColor;
      FGOEdgeBlur__set_Texture((FGOEdgeBlur_o *)v18, v3->fields.maskTex, 0LL);
      this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)v18,
                                                        0LL);
      maskTex = v3->fields.maskTex;
      if ( !maskTex )
        goto LABEL_26;
      v24 = (UnityEngine_Transform_o *)this;
      this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))maskTex->klass->vtable._4_get_width.method)(
                                                        v3->fields.maskTex,
                                                        maskTex->klass->vtable._5_set_width.methodPtr);
      v25 = v3->fields.maskTex;
      if ( !v25 )
        goto LABEL_26;
      v26 = (int)this;
      this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v25->klass->vtable._6_get_height.method)(
                                                        v3->fields.maskTex,
                                                        v25->klass->vtable._7_set_height.methodPtr);
      if ( !v24 )
        goto LABEL_26;
      v28.fields.y = (float)(int)this;
      v28.fields.x = (float)v26;
      v28.fields.z = 0.0;
      UnityEngine_Transform__set_localScale(v24, v28, 0LL);
      FGOEdgeBlur__set_Thickness((FGOEdgeBlur_o *)v18, v3->fields.thick, 0LL);
      FGOEdgeBlur__set_Level((FGOEdgeBlur_o *)v18, v3->fields.level, 0LL);
      this = (UIScriptChara___c__DisplayClass39_0_o *)v3->fields.__4__this;
      if ( !this )
        goto LABEL_26;
      v30.fields.m_XMin = ((float (__fastcall *)(UIScriptChara___c__DisplayClass39_0_o *, void *))this->klass[1]._1.namespaze)(
                            this,
                            this->klass[1]._1.byval_arg.data);
      FGOEdgeBlur__set_Rect((FGOEdgeBlur_o *)v18, v30, 0LL);
      v29.fields.x = v14;
      v29.fields.y = v15;
      v29.fields.z = v16;
      FGOEdgeBlur__setMaskImagePosition((FGOEdgeBlur_o *)v18, v29, 0LL);
      r_low = LODWORD(v7->fields.color.fields.r);
    }
  }
}