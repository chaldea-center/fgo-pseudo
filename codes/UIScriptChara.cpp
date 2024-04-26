void __fastcall UIScriptChara___cctor(const MethodInfo *method)
{
  if ( (byte_435A5A8 & 1) == 0 )
  {
    sub_B70694(&UIScriptChara_TypeInfo);
    byte_435A5A8 = 1;
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

  v10 = *(long double *)&speed;
  if ( (byte_435A580 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17118/*"blink"*/);
    sub_B70694(&StringLiteral_18963/*"fade"*/);
    sub_B70694(&StringLiteral_18036/*"crossFade"*/);
    byte_435A580 = 1;
  }
  if ( !kind )
    goto LABEL_10;
  if ( !System_String__op_Equality(kind, (System_String_o *)StringLiteral_18963/*"fade"*/, 0LL) )
  {
    if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_17118/*"blink"*/, 0LL) )
    {
      v13 = 3LL;
      goto LABEL_11;
    }
    if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_18036/*"crossFade"*/, 0LL) )
    {
      v13 = 4LL;
      goto LABEL_11;
    }
LABEL_10:
    v13 = 1LL;
    goto LABEL_11;
  }
  v13 = 2LL;
LABEL_11:
  ((void (__fastcall *)(UIScriptChara_o *, __int64, System_String_o *, _QWORD, System_Action_o *, Il2CppMethodPointer, long double))this->klass->vtable._10_ChangeCharacter.method)(
    this,
    v13,
    imageName,
    (unsigned int)faceType,
    callback,
    this->klass->vtable._11_SetCharacter.methodPtr,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ChangeCharacter_38845148(
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
  __int64 v12; // x1
  int32_t mainIndex; // w8
  bool v14; // zf
  int32_t changeKind; // w8
  int32_t v16; // w9
  float v17; // s0

  this->fields.changeKind = kind;
  this->fields.changeCallback = callback;
  sub_B70630(
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
    sub_B7076C(v11, v12);
  v14 = mainIndex == 0;
  changeKind = this->fields.changeKind;
  v16 = v14;
  this->fields.changeSpeed = speed;
  this->fields.changeTotal = 0.0;
  this->fields.mainIndex = v16;
  *(_QWORD *)&this->fields.changeCount = 0LL;
  if ( changeKind == 3 )
  {
    v17 = speed / 5.0;
    if ( speed >= 10.0 )
      v17 = 2.0;
    this->fields.changeRange = v17;
  }
  this->fields.isDisp = 0;
}


void __fastcall UIScriptChara__EndExecuteCameraRoll(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.isRoll = 0;
}


void __fastcall UIScriptChara__EndMove(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__EndMoveAttack(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__EndMoveReturn(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
  {
    sub_B7076C(gameObject, v4);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.basePosition, 0LL);
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__EndMoveReturnEaseHalf(UIScriptChara_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UIScriptChara__MoveReturnPositionEase_38850000(this, this->fields.returnDuration, this->fields.returnEaseType, v2);
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
    sub_B7076C(0LL, method);
  UnityEngine_Transform__set_localScale(baseScale, this->fields.baseScaleSize, 0LL);
  this->fields.isMove = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__EndSet(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o v3; // x1
  UnityEngine_Vector2_o zero; // kr00_8
  UnityEngine_GameObject_o *baseSpecialEffect; // x0
  float v6; // s2
  float v7; // s10
  float v8; // s2
  float v9; // s10
  float v10; // s2
  float v11; // s10
  float v12; // s2
  float v13; // s10
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleServantConfConponent_o *p_setCallback; // x19
  System_Action_o *v21; // x20
  struct System_Action_o *setCallback; // t1
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  zero = UnityEngine_Vector2__get_zero(0LL);
  baseSpecialEffect = this->fields.baseSpecialEffect;
  if ( !baseSpecialEffect )
    goto LABEL_20;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)(&v6 - 2) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)baseSpecialEffect,
                                          0LL);
  baseSpecialEffect = this->fields.baseSpecialEffect;
  if ( !baseSpecialEffect )
    goto LABEL_20;
  v7 = v6;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_20;
  v23.fields.x = zero.fields.x;
  v23.fields.y = zero.fields.y;
  v23.fields.z = v7;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v23, 0LL);
  baseSpecialEffect = this->fields.baseEffect;
  if ( !baseSpecialEffect )
    goto LABEL_20;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)(&v8 - 2) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)baseSpecialEffect,
                                          0LL);
  baseSpecialEffect = this->fields.baseEffect;
  if ( !baseSpecialEffect )
    goto LABEL_20;
  v9 = v8;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_20;
  v24.fields.x = zero.fields.x;
  v24.fields.y = zero.fields.y;
  v24.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v24, 0LL);
  baseSpecialEffect = this->fields.baseEffectBack;
  if ( !baseSpecialEffect )
    goto LABEL_20;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)(&v10 - 2) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseSpecialEffect,
                                           0LL);
  baseSpecialEffect = this->fields.baseEffectBack;
  if ( !baseSpecialEffect )
    goto LABEL_20;
  v11 = v10;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_20;
  v25.fields.x = zero.fields.x;
  v25.fields.y = zero.fields.y;
  v25.fields.z = v11;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v25, 0LL);
  baseSpecialEffect = this->fields.baseShadowEffect;
  if ( !baseSpecialEffect
    || (baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v12 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)baseSpecialEffect,
                                                 0LL),
        (baseSpecialEffect = this->fields.baseShadowEffect) == 0LL)
    || (v13 = v12,
        (baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL)) == 0LL) )
  {
LABEL_20:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7076C)(baseSpecialEffect, v3);
  }
  v26.fields.x = zero.fields.x;
  v26.fields.y = zero.fields.y;
  v26.fields.z = v13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v26, 0LL);
  setCallback = this->fields.setCallback;
  p_setCallback = (BattleServantConfConponent_o *)&this->fields.setCallback;
  v21 = setCallback;
  if ( setCallback )
  {
    p_setCallback->klass = 0LL;
    sub_B70630(p_setCallback, 0LL, v14, v15, v16, v17, v18, v19);
    System_Action__Invoke(v21, 0LL);
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
    sub_B7076C(0LL, method);
  localPosition = UnityEngine_Transform__get_localPosition(baseDepth, 0LL);
  return localPosition.fields.z;
}


UnityEngine_Rect_o __fastcall UIScriptChara__GetHighRectEdgeBlur(UIScriptChara_o *this, const MethodInfo *method)
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

  if ( (byte_435A59F & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A59F = 1;
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

  if ( (byte_435A5A1 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A5A1 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart(baseEffectBack, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffectStart_38857584(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_435A5A2 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A5A2 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart_17849224(baseEffectBack, n, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffect_38857360(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_435A5A0 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A5A0 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsBusy_17848224(baseEffectBack, n, 0LL);
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
  ProgramEffectComponent_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  ProgramEffectComponent_array *v6; // x19
  unsigned __int64 v7; // x21
  ProgramEffectComponent_o **m_Items; // x22
  ProgramEffectComponent_o *v9; // x8
  __int64 v10; // x11
  ProgramEffectComponent_o *v11; // x20
  __int64 v13; // x0

  if ( (byte_435A593 & 1) == 0 )
  {
    sub_B70694(&CharaCutEffectComponent_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435A593 = 1;
  }
  v3 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v3 )
LABEL_23:
    sub_B7076C(v3, v4);
  v5 = *(_QWORD *)&v3->max_length;
  v6 = v3;
  if ( (int)v5 < 1 )
    return 0;
  v7 = 0LL;
  m_Items = v3->m_Items;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
    {
      v13 = sub_B70798(v3);
      sub_B70738(v13, 0LL);
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
    v3 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
    if ( ((unsigned __int8)v3 & 1) != 0 )
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
  ProgramEffectComponent_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  ProgramEffectComponent_array *v6; // x19
  unsigned __int64 v7; // x21
  ProgramEffectComponent_o **m_Items; // x22
  ProgramEffectComponent_o *v9; // x8
  __int64 v10; // x11
  ProgramEffectComponent_o *v11; // x20
  __int64 v13; // x0

  if ( (byte_435A594 & 1) == 0 )
  {
    sub_B70694(&CharaCutEffectComponent_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435A594 = 1;
  }
  v3 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v3 )
LABEL_23:
    sub_B7076C(v3, v4);
  v5 = *(_QWORD *)&v3->max_length;
  v6 = v3;
  if ( (int)v5 < 1 )
    return 1;
  v7 = 0LL;
  m_Items = v3->m_Items;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
    {
      v13 = sub_B70798(v3);
      sub_B70738(v13, 0LL);
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
    v3 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
    if ( ((unsigned __int8)v3 & 1) != 0 )
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

  if ( (byte_435A596 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A596 = 1;
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

  if ( (byte_435A598 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A598 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart(baseEffect, 0LL);
}


bool __fastcall UIScriptChara__IsEffectStart_38856156(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_435A599 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A599 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart_17849224(baseEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsEffect_38855932(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_435A597 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A597 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsBusy_17848224(baseEffect, n, 0LL);
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


bool __fastcall UIScriptChara__IsSpecialEffectStart_38854908(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsStart_25474024(this->fields.baseSpecialEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsSpecialEffect_38854884(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsBusy_25473324(this->fields.baseSpecialEffect, n, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  TweenPosition_o *v12; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v14; // x1
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_435A58E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_6057/*"EndMoveAttack"*/);
    sub_B70694(&StringLiteral_21465/*"normal"*/);
    byte_435A58E = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)kind);
  if ( duration <= 0.0 )
    duration = 0.5;
  this->fields.isMove = 1;
  if ( kind )
    System_String__op_Equality(kind, (System_String_o *)StringLiteral_21465/*"normal"*/, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  v12 = TweenPosition__Begin(gameObject, duration, v30, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( v12 )
    {
      v12->fields.style = 1;
      v15 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v12->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v15;
      sub_B70630((BattleServantConfConponent_o *)&v12->fields.eventReceiver, v15, v16, v17, v18, v19, v20, v21);
      v22 = (System_Int32_array **)StringLiteral_6057/*"EndMoveAttack"*/;
      v12->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6057/*"EndMoveAttack"*/;
      sub_B70630((BattleServantConfConponent_o *)&v12->fields.callWhenFinished, v22, v23, v24, v25, v26, v27, v28);
      return;
    }
LABEL_16:
    sub_B7076C(transform, v14);
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_16;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_16;
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v29, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v10; // x20
  System_Int32_array **transform; // x0
  __int64 v12; // x1
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
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_435A585 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_6055/*"EndMove"*/);
    byte_435A585 = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  if ( duration > 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v28.fields.x = x;
    v28.fields.y = y;
    v28.fields.z = z;
    v10 = (UnityEngine_Object_o *)TweenPosition__Begin(gameObject, duration, v28, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    {
      transform = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v10 )
      {
        v10[3].klass = (UnityEngine_Object_c *)transform;
        v19 = v10 + 3;
        sub_B70630((BattleServantConfConponent_o *)v19, transform, v13, v14, v15, v16, v17, v18);
        v20 = (System_Int32_array **)StringLiteral_6055/*"EndMove"*/;
        v19->monitor = (void *)StringLiteral_6055/*"EndMove"*/;
        sub_B70630((BattleServantConfConponent_o *)&v19->monitor, v20, v21, v22, v23, v24, v25, v26);
        return;
      }
LABEL_13:
      sub_B7076C(transform, v12);
    }
  }
  transform = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  transform = (System_Int32_array **)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_13;
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v27, 0LL);
  this->fields.isMove = 0;
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
  System_Collections_Hashtable_o *v11; // x21
  __int64 v12; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x0
  __int64 v17; // x2
  __int64 v18; // x0
  __int64 v19; // x2
  __int64 v20; // x0
  __int64 v21; // x2
  __int64 v22; // x0
  UnityEngine_GameObject_o *v23; // x19
  float v24; // [xsp+Ch] [xbp-54h] BYREF
  float v25; // [xsp+10h] [xbp-50h] BYREF
  float v26; // [xsp+14h] [xbp-4Ch] BYREF
  int v27; // [xsp+18h] [xbp-48h] BYREF
  char v28[4]; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  z = vector.fields.z;
  y = vector.fields.y;
  x = vector.fields.x;
  if ( (byte_435A586 & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    sub_B70694(&System_Collections_Hashtable_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&StringLiteral_23699/*"x"*/);
    sub_B70694(&StringLiteral_18388/*"easetype"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_6055/*"EndMove"*/);
    sub_B70694(&StringLiteral_18220/*"delay"*/);
    sub_B70694(&StringLiteral_23791/*"y"*/);
    sub_B70694(&StringLiteral_20250/*"isLocal"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_435A586 = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)easetype);
  this->fields.isMove = 1;
  if ( time <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( gameObject )
      {
        v29.fields.x = x;
        v29.fields.y = y;
        v29.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v29, 0LL);
        this->fields.isMove = 0;
        return;
      }
    }
LABEL_12:
    sub_B7076C(gameObject, v14);
  }
  v11 = (System_Collections_Hashtable_o *)sub_B70764(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39248100(v11, 0LL);
  v28[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v28, v12);
  if ( !v11 )
    goto LABEL_12;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_20250/*"isLocal"*/,
    gameObject,
    v11->klass->vtable._24_Clear.methodPtr);
  v27 = 0;
  v16 = j_il2cpp_value_box_0(float_TypeInfo, &v27, v15);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_18220/*"delay"*/,
    v16,
    v11->klass->vtable._24_Clear.methodPtr);
  v26 = x;
  v18 = j_il2cpp_value_box_0(float_TypeInfo, &v26, v17);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_23699/*"x"*/,
    v18,
    v11->klass->vtable._24_Clear.methodPtr);
  v25 = y;
  v20 = j_il2cpp_value_box_0(float_TypeInfo, &v25, v19);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_23791/*"y"*/,
    v20,
    v11->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_18388/*"easetype"*/,
    easetype,
    v11->klass->vtable._24_Clear.methodPtr);
  v24 = time;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v24, v21);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_23053/*"time"*/,
    v22,
    v11->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_21605/*"oncomplete"*/,
    StringLiteral_6055/*"EndMove"*/,
    v11->klass->vtable._24_Clear.methodPtr);
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_42827204(v23, v11, 0LL);
}


void __fastcall UIScriptChara__MoveReturnPosition(UIScriptChara_o *this, float duration, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v7; // x20
  System_Int32_array **v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *v16; // x20
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_435A587 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_6058/*"EndMoveReturn"*/);
    byte_435A587 = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  if ( duration <= 0.0 )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7 = (UnityEngine_Object_o *)TweenPosition__Begin(gameObject, duration, this->fields.basePosition, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    v8 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v7 )
      sub_B7076C(v8, v9);
    v7[3].klass = (UnityEngine_Object_c *)v8;
    v16 = v7 + 3;
    sub_B70630((BattleServantConfConponent_o *)v16, v8, v10, v11, v12, v13, v14, v15);
    v17 = (System_Int32_array **)StringLiteral_6058/*"EndMoveReturn"*/;
    v16->monitor = (void *)StringLiteral_6058/*"EndMoveReturn"*/;
    sub_B70630((BattleServantConfConponent_o *)&v16->monitor, v17, v18, v19, v20, v21, v22, v23);
  }
  else
  {
LABEL_10:
    UIScriptChara__EndMoveReturn(this, v5);
  }
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Hashtable_o *v22; // x21
  __int64 v23; // x2
  __int64 v24; // x2
  __int64 v25; // x0
  __int64 v26; // x2
  __int64 v27; // x0
  __int64 v28; // x2
  __int64 v29; // x0
  __int64 v30; // x2
  __int64 v31; // x0
  UnityEngine_GameObject_o *v32; // x19
  float returnDuration; // [xsp+4h] [xbp-4Ch] BYREF
  float v34; // [xsp+8h] [xbp-48h] BYREF
  float v35; // [xsp+Ch] [xbp-44h] BYREF
  int v36; // [xsp+18h] [xbp-38h] BYREF
  char v37[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_435A589 & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    sub_B70694(&System_Collections_Hashtable_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&StringLiteral_23699/*"x"*/);
    sub_B70694(&StringLiteral_18388/*"easetype"*/);
    sub_B70694(&StringLiteral_6059/*"EndMoveReturnEaseHalf"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_18220/*"delay"*/);
    sub_B70694(&StringLiteral_23791/*"y"*/);
    sub_B70694(&StringLiteral_20250/*"isLocal"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_435A589 = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)startEaseType);
  this->fields.isMove = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveReturn(this, v15);
    return;
  }
  this->fields.returnEaseType = returnEaseType;
  this->fields.returnDuration = time * 0.5;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.returnEaseType,
    (System_Int32_array **)returnEaseType,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Hashtable_o *)sub_B70764(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39248100(v22, 0LL);
  v37[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v37, v23);
  if ( !v22 )
LABEL_12:
    sub_B7076C(gameObject, v14);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_20250/*"isLocal"*/,
    gameObject,
    v22->klass->vtable._24_Clear.methodPtr);
  v36 = 0;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &v36, v24);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_18220/*"delay"*/,
    v25,
    v22->klass->vtable._24_Clear.methodPtr);
  v35 = x;
  v27 = j_il2cpp_value_box_0(float_TypeInfo, &v35, v26);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_23699/*"x"*/,
    v27,
    v22->klass->vtable._24_Clear.methodPtr);
  v34 = y;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v34, v28);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_23791/*"y"*/,
    v29,
    v22->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_18388/*"easetype"*/,
    startEaseType,
    v22->klass->vtable._24_Clear.methodPtr);
  returnDuration = this->fields.returnDuration;
  v31 = j_il2cpp_value_box_0(float_TypeInfo, &returnDuration, v30);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_23053/*"time"*/,
    v31,
    v22->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_21605/*"oncomplete"*/,
    StringLiteral_6059/*"EndMoveReturnEaseHalf"*/,
    v22->klass->vtable._24_Clear.methodPtr);
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_42827204(v32, v22, 0LL);
}


void __fastcall UIScriptChara__MoveReturnPositionEase_38850000(
        UIScriptChara_o *this,
        float time,
        System_String_o *returnEaseType,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  System_Collections_Hashtable_o *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x0
  __int64 v14; // x2
  __int64 v15; // x0
  __int64 v16; // x2
  __int64 v17; // x0
  __int64 v18; // x2
  __int64 v19; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float v21; // [xsp+4h] [xbp-3Ch] BYREF
  float y; // [xsp+8h] [xbp-38h] BYREF
  float x; // [xsp+Ch] [xbp-34h] BYREF
  int v24; // [xsp+18h] [xbp-28h] BYREF
  char v25[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_435A58A & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    sub_B70694(&System_Collections_Hashtable_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&StringLiteral_23699/*"x"*/);
    sub_B70694(&StringLiteral_18388/*"easetype"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_18220/*"delay"*/);
    sub_B70694(&StringLiteral_6058/*"EndMoveReturn"*/);
    sub_B70694(&StringLiteral_23791/*"y"*/);
    sub_B70694(&StringLiteral_20250/*"isLocal"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_435A58A = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)returnEaseType);
  this->fields.isMove = 1;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveReturn(this, v7);
  }
  else
  {
    v8 = (System_Collections_Hashtable_o *)sub_B70764(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_39248100(v8, 0LL);
    v25[0] = 1;
    v10 = j_il2cpp_value_box_0(bool_TypeInfo, v25, v9);
    if ( !v8 )
      sub_B7076C(v10, v11);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_20250/*"isLocal"*/,
      v10,
      v8->klass->vtable._24_Clear.methodPtr);
    v24 = 0;
    v13 = j_il2cpp_value_box_0(float_TypeInfo, &v24, v12);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_18220/*"delay"*/,
      v13,
      v8->klass->vtable._24_Clear.methodPtr);
    x = this->fields.basePosition.fields.x;
    v15 = j_il2cpp_value_box_0(float_TypeInfo, &x, v14);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_23699/*"x"*/,
      v15,
      v8->klass->vtable._24_Clear.methodPtr);
    y = this->fields.basePosition.fields.y;
    v17 = j_il2cpp_value_box_0(float_TypeInfo, &y, v16);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_23791/*"y"*/,
      v17,
      v8->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_18388/*"easetype"*/,
      returnEaseType,
      v8->klass->vtable._24_Clear.methodPtr);
    v21 = time;
    v19 = j_il2cpp_value_box_0(float_TypeInfo, &v21, v18);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_23053/*"time"*/,
      v19,
      v8->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_21605/*"oncomplete"*/,
      StringLiteral_6058/*"EndMoveReturn"*/,
      v8->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_42827204(gameObject, v8, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MoveReturnPosition_38848780(
        UIScriptChara_o *this,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Object_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Object_o *v20; // x20
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Vector3_o v28; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_435A588 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_6060/*"EndMoveReturnHalf"*/);
    byte_435A588 = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( duration > 0.0 )
  {
    this->fields.returnDuration = duration * 0.5;
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v28.fields.x = x;
    v28.fields.y = y;
    v28.fields.z = z;
    v13 = (UnityEngine_Object_o *)TweenPosition__Begin(v12, this->fields.returnDuration, v28, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v13 )
      {
        v13[3].klass = (UnityEngine_Object_c *)gameObject;
        v20 = v13 + 3;
        sub_B70630((BattleServantConfConponent_o *)v20, (System_Int32_array **)gameObject, v14, v15, v16, v17, v18, v19);
        v21 = (System_Int32_array **)StringLiteral_6060/*"EndMoveReturnHalf"*/;
        v20->monitor = (void *)StringLiteral_6060/*"EndMoveReturnHalf"*/;
        sub_B70630((BattleServantConfConponent_o *)&v20->monitor, v21, v22, v23, v24, v25, v26, v27);
        return;
      }
LABEL_13:
      sub_B7076C(gameObject, v10);
    }
  }
  UIScriptChara__EndMoveReturn(this, v11);
}


void __fastcall UIScriptChara__MoveScale(UIScriptChara_o *this, float duration, float s, const MethodInfo *method)
{
  const MethodInfo *v7; // x1
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

  if ( (byte_435A58C & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_6061/*"EndMoveScale"*/);
    byte_435A58C = 1;
  }
  UIScriptChara__StopMoveScaleTween(this, method);
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
        sub_B70630((BattleServantConfConponent_o *)v17, (System_Int32_array **)baseScale, v11, v12, v13, v14, v15, v16);
        v18 = (System_Int32_array **)StringLiteral_6061/*"EndMoveScale"*/;
        v17->monitor = (void *)StringLiteral_6061/*"EndMoveScale"*/;
        sub_B70630((BattleServantConfConponent_o *)&v17->monitor, v18, v19, v20, v21, v22, v23, v24);
        return;
      }
LABEL_12:
      sub_B7076C(baseScale, v7);
    }
  }
  UIScriptChara__EndMoveScale(this, v7);
}


void __fastcall UIScriptChara__MoveScaleEase(
        UIScriptChara_o *this,
        float scale,
        float time,
        System_String_o *easetype,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  System_Collections_Hashtable_o *v10; // x21
  __int64 v11; // x2
  UnityEngine_Component_o *baseScale; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x0
  __int64 v16; // x2
  __int64 v17; // x0
  __int64 v18; // x2
  __int64 v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x19
  float v22; // [xsp+0h] [xbp-40h] BYREF
  float y; // [xsp+4h] [xbp-3Ch] BYREF
  float x; // [xsp+8h] [xbp-38h] BYREF
  char v25[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_435A58D & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    sub_B70694(&System_Collections_Hashtable_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&StringLiteral_23699/*"x"*/);
    sub_B70694(&StringLiteral_18388/*"easetype"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21607/*"oncompletetarget"*/);
    sub_B70694(&StringLiteral_23791/*"y"*/);
    sub_B70694(&StringLiteral_20250/*"isLocal"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&StringLiteral_6061/*"EndMoveScale"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_435A58D = 1;
  }
  UIScriptChara__StopMoveScaleTween(this, (const MethodInfo *)easetype);
  this->fields.baseScaleSize.fields.x = scale;
  this->fields.baseScaleSize.fields.y = scale;
  this->fields.isMove = 1;
  this->fields.baseScaleSize.fields.z = 1.0;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveScale(this, v9);
  }
  else
  {
    v10 = (System_Collections_Hashtable_o *)sub_B70764(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_39248100(v10, 0LL);
    v25[0] = 1;
    baseScale = (UnityEngine_Component_o *)j_il2cpp_value_box_0(bool_TypeInfo, v25, v11);
    if ( !v10 )
      goto LABEL_11;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_Component_o *, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_20250/*"isLocal"*/,
      baseScale,
      v10->klass->vtable._24_Clear.methodPtr);
    x = this->fields.baseScaleSize.fields.x;
    v15 = j_il2cpp_value_box_0(float_TypeInfo, &x, v14);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_23699/*"x"*/,
      v15,
      v10->klass->vtable._24_Clear.methodPtr);
    y = this->fields.baseScaleSize.fields.y;
    v17 = j_il2cpp_value_box_0(float_TypeInfo, &y, v16);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_23791/*"y"*/,
      v17,
      v10->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_18388/*"easetype"*/,
      easetype,
      v10->klass->vtable._24_Clear.methodPtr);
    v22 = time;
    v19 = j_il2cpp_value_box_0(float_TypeInfo, &v22, v18);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_23053/*"time"*/,
      v19,
      v10->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_21605/*"oncomplete"*/,
      StringLiteral_6061/*"EndMoveScale"*/,
      v10->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_21607/*"oncompletetarget"*/,
      gameObject,
      v10->klass->vtable._24_Clear.methodPtr);
    baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
    if ( !baseScale )
LABEL_11:
      sub_B7076C(baseScale, v13);
    v21 = UnityEngine_Component__get_gameObject(baseScale, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ScaleTo_42832904(v21, v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__OnShake(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseShake; // x20
  float v4; // s8
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0
  UnityEngine_Transform_o *v8; // x20
  int v9; // s0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_435A592 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_10177/*"OnShake"*/);
    byte_435A592 = 1;
  }
  if ( this->fields.shakeCycle > 0.0
    && (this->fields.shakeTime == 0.0 || UnityEngine_Time__get_time(0LL) < this->fields.shakeTime) )
  {
    baseShake = this->fields.baseShake;
    v4 = UnityEngine_Random__Range(-this->fields.shakeX, this->fields.shakeX, 0LL);
    v7 = UnityEngine_Random__Range(-this->fields.shakeY, this->fields.shakeY, 0LL);
    if ( baseShake )
    {
      v12.fields.y = v7;
      v12.fields.z = 0.0;
      v12.fields.x = v4;
      UnityEngine_Transform__set_localPosition(baseShake, v12, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10177/*"OnShake"*/,
        this->fields.shakeCycle,
        0LL);
      return;
    }
LABEL_10:
    sub_B7076C(v5, v6);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_36061308(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10177/*"OnShake"*/,
    0LL);
  v8 = this->fields.baseShake;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v8 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(v8, *(UnityEngine_Vector3_o *)&v9, 0LL);
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


void __fastcall UIScriptChara__ResumeBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_435A5A4 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A5A4 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume(baseEffectBack, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeBackEffect_38858300(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_435A5A5 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A5A5 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume_17855132(baseEffectBack, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeCutin(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ;
}


void __fastcall UIScriptChara__ResumeEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_435A59B & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A59B = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume(baseEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeEffect_38856872(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_435A59C & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A59C = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume_17855132(baseEffect, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ProgramEffectManager__Resume(this->fields.baseSpecialEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect_38855788(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  ProgramEffectManager__Resume_25476500(this->fields.baseSpecialEffect, n, isSkip, 0LL);
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
  UIScriptChara__SetBackEffect_38857800(this, n, zero, isSkip, isPause, flip, isOnSublayer, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetBackEffect_38857800(
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
  UnityEngine_GameObject_o *baseEffectBack; // x23
  CommonEffectLoadComponent_LoadEndHandler_o *v18; // x24
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  z = p.fields.z;
  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_435A5A3 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    sub_B70694(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_B70694(&Method_UIScriptChara__SetBackEffect_g__Callback_124_0__);
    byte_435A5A3 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( isOnSublayer )
  {
    v18 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B70764(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v18,
      0LL,
      Method_UIScriptChara__SetBackEffect_g__Callback_124_0__,
      0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v19.fields.y = y;
    v19.fields.z = z;
    v19.fields.x = x;
    CommonEffectManager__Create_17853684(baseEffectBack, n, v19, v18, isSkip, isPause, flip, 0LL);
  }
  else
  {
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v20.fields.y = y;
    v20.fields.z = z;
    v20.fields.x = x;
    CommonEffectManager__Create_17853488(baseEffectBack, n, v20, isSkip, isPause, flip, 0LL);
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
  __int64 v8; // x1
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  UIScriptChara__StopMoveTween(this, method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
  if ( !transform )
    sub_B7076C(0LL, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v9, 0LL);
  this->fields.isMove = 0;
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
  sub_B70630(
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
    sub_B7076C(baseDepth, *(_QWORD *)&d);
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
  UIScriptChara__SetEffect_38856372(this, n, zero, isSkip, isPause, flip, isOnSublayer, v13);
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
  __int64 v23; // x24
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Object_o *v39; // x25
  CommonEffectLoadComponent_LoadEndHandler_o *v40; // x25
  UnityEngine_GameObject_o *baseEffect; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float a; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  a = particleColor.fields.a;
  b = particleColor.fields.b;
  g = particleColor.fields.g;
  r = particleColor.fields.r;
  v17 = color.fields.a;
  v18 = color.fields.b;
  v19 = color.fields.g;
  v20 = color.fields.r;
  if ( (byte_435A581 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    sub_B70694(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_UIScriptChara___c__DisplayClass39_0__SetEffectEdgeBlur_b__0__);
    sub_B70694(&UIScriptChara___c__DisplayClass39_0_TypeInfo);
    byte_435A581 = 1;
  }
  v23 = sub_B70764(UIScriptChara___c__DisplayClass39_0_TypeInfo);
  UIScriptChara___c__DisplayClass39_0___ctor((UIScriptChara___c__DisplayClass39_0_o *)v23, 0LL);
  if ( !v23 )
    sub_B7076C(v24, v25);
  *(_QWORD *)(v23 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
  *(float *)(v23 + 24) = v20;
  *(float *)(v23 + 28) = v19;
  *(float *)(v23 + 32) = v18;
  *(float *)(v23 + 36) = v17;
  *(float *)(v23 + 40) = r;
  *(float *)(v23 + 44) = g;
  *(float *)(v23 + 64) = thick;
  *(_DWORD *)(v23 + 68) = level;
  *(float *)(v23 + 48) = b;
  *(float *)(v23 + 52) = a;
  v32 = (System_Int32_array **)((__int64 (__fastcall *)(UIScriptChara_o *, Il2CppMethodPointer))this->klass->vtable._7_GetBodySubTexture.method)(
                                 this,
                                 this->klass->vtable._8_GetBody.methodPtr);
  *(_QWORD *)(v23 + 56) = v32;
  sub_B70630((BattleServantConfConponent_o *)(v23 + 56), v32, v33, v34, v35, v36, v37, v38);
  v39 = *(UnityEngine_Object_o **)(v23 + 56);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v39, 0LL, 0LL) )
  {
    v40 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B70764(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v40,
      (Il2CppObject *)v23,
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
    v47.fields.x = x;
    v47.fields.y = y;
    v47.fields.z = z;
    CommonEffectManager__Create_17853684(baseEffect, effectName, v47, v40, isSkip, isPause, flip, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetEffect_38856372(
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
  UnityEngine_GameObject_o *baseEffect; // x23
  CommonEffectLoadComponent_LoadEndHandler_o *v18; // x24
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  z = p.fields.z;
  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_435A59A & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    sub_B70694(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_B70694(&Method_UIScriptChara__SetEffect_g__Callback_114_0__);
    byte_435A59A = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( isOnSublayer )
  {
    v18 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B70764(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(v18, 0LL, Method_UIScriptChara__SetEffect_g__Callback_114_0__, 0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v19.fields.y = y;
    v19.fields.z = z;
    v19.fields.x = x;
    CommonEffectManager__Create_17853684(baseEffect, n, v19, v18, isSkip, isPause, flip, 0LL);
  }
  else
  {
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v20.fields.y = y;
    v20.fields.z = z;
    v20.fields.x = x;
    CommonEffectManager__Create_17853488(baseEffect, n, v20, isSkip, isPause, flip, 0LL);
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
  sub_B70630(
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
  __int64 v7; // x1
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B7076C(0LL, v7);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v8, 0LL);
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
  if ( (byte_435A58F & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435A58F = 1;
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
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
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
    sub_B7076C(baseRoll1, v9);
  }
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localPosition(baseRoll1, v22, 0LL);
  this->fields.isRoll = 0;
  return 1;
}


void __fastcall UIScriptChara__SetScale(UIScriptChara_o *this, float v, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  UIScriptChara__StopMoveScaleTween(this, method);
  this->fields.baseScaleSize.fields.x = v;
  this->fields.baseScaleSize.fields.y = v;
  this->fields.baseScaleSize.fields.z = 1.0;
  UIScriptChara__EndMoveScale(this, v5);
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
  int v21; // s7
  UnityEngine_Object_o *CharaEffect; // x22
  bool v23; // w0
  uint32_t v24; // w0
  __int64 *v25; // x8
  const MethodInfo *v26; // x2
  int v27; // [xsp+5Ch] [xbp-24h]
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v29; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_435A595 & 1) == 0 )
  {
    v27 = v20;
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_23676/*"wipe"*/);
    sub_B70694(&StringLiteral_16620/*"appearanceReverse"*/);
    sub_B70694(&StringLiteral_18132/*"darkEnemyErasure"*/);
    sub_B70694(&StringLiteral_23682/*"wipeTimeRe"*/);
    sub_B70694(&StringLiteral_18133/*"darkWipe"*/);
    sub_B70694(&StringLiteral_19050/*"flashErasure"*/);
    sub_B70694(&StringLiteral_16619/*"appearance"*/);
    sub_B70694(&StringLiteral_18672/*"erasure"*/);
    sub_B70694(&StringLiteral_18673/*"erasureReverse"*/);
    sub_B70694(&StringLiteral_18641/*"enemyErasure"*/);
    sub_B70694(&StringLiteral_23681/*"wipeTime"*/);
    v21 = v27;
    byte_435A595 = 1;
  }
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  v29.fields.r = r;
  v29.fields.g = g;
  v29.fields.b = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v28,
                                          time,
                                          v29,
                                          range,
                                          isSkip,
                                          isPause,
                                          0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = UnityEngine_Object__op_Equality(CharaEffect, 0LL, 0LL);
  if ( n && !v23 )
  {
    v24 = PrivateImplementationDetails___ComputeStringHash_21312356(n, 0LL);
    if ( v24 > 0x8D759330 )
    {
      if ( v24 > 0xD4B34506 )
      {
        switch ( v24 )
        {
          case 0xE7555186:
            v25 = &StringLiteral_23676/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v25 = &StringLiteral_18133/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v25 = &StringLiteral_16619/*"appearance"*/;
            break;
          default:
            return;
        }
      }
      else
      {
        switch ( v24 )
        {
          case 0x8DA714B6:
            v25 = &StringLiteral_23682/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v25 = &StringLiteral_19050/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v25 = &StringLiteral_18673/*"erasureReverse"*/;
            break;
          default:
            return;
        }
      }
    }
    else if ( v24 > 0x4A1132BE )
    {
      switch ( v24 )
      {
        case 0x8D759330:
          v25 = &StringLiteral_18672/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v25 = &StringLiteral_18641/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v25 = &StringLiteral_16620/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v24 == 242689791 )
    {
      v25 = &StringLiteral_23681/*"wipeTime"*/;
    }
    else
    {
      if ( v24 != 1242641086 )
        return;
      v25 = &StringLiteral_18132/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v25, 0LL) )
      UIScriptChara__StopShadowEffect(this, isSkip, v26);
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
    sub_B7076C(this, method);
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
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  struct UnityEngine_Transform_o *baseRoll1; // x0
  float v13; // s8
  float v14; // s9
  float v15; // s10
  float v16; // s11
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v19; // x20
  System_Int32_array **v20; // x0
  UnityEngine_Object_o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  bool v35; // w8
  UnityEngine_Quaternion_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v38; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_435A590 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_6041/*"EndExecuteCameraRoll"*/);
    byte_435A590 = 1;
  }
  *(UnityEngine_Quaternion_o *)&v8 = UnityEngine_Quaternion__Euler(0.0, 0.0, rollZ, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_21;
  v13 = v8;
  v14 = v9;
  v15 = v10;
  v16 = v11;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)baseRoll1,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
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
    sub_B7076C(baseRoll1, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseRoll1, 0LL);
  v38.fields.x = v13;
  v38.fields.y = v14;
  v38.fields.z = v15;
  v38.fields.w = v16;
  v19 = (UnityEngine_Object_o *)TweenRotation__Begin(gameObject, duration, v38, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) == 0 )
    goto LABEL_18;
  if ( !v19 )
    goto LABEL_21;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v19, 0LL) )
  {
LABEL_18:
    baseRoll1 = this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v37.fields.x = v13;
      v37.fields.y = v14;
      v37.fields.z = v15;
      v37.fields.w = v16;
      UnityEngine_Transform__set_localRotation(baseRoll1, v37, 0LL);
      v35 = 0;
      goto LABEL_20;
    }
    goto LABEL_21;
  }
  v20 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v19[3].klass = (UnityEngine_Object_c *)v20;
  v21 = v19 + 3;
  sub_B70630((BattleServantConfConponent_o *)v21, v20, v22, v23, v24, v25, v26, v27);
  v28 = (System_Int32_array **)StringLiteral_6041/*"EndExecuteCameraRoll"*/;
  v21->monitor = (void *)StringLiteral_6041/*"EndExecuteCameraRoll"*/;
  sub_B70630((BattleServantConfConponent_o *)&v21->monitor, v28, v29, v30, v31, v32, v33, v34);
  v35 = 1;
LABEL_20:
  this->fields.isRoll = v35;
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
  float v12; // s1
  float v13; // s2
  float v14; // s3
  UnityEngine_Component_o *baseRoll1; // x0
  float v16; // s0
  float v17; // s9
  float v18; // s10
  float v19; // s11
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v22; // x20
  System_Int32_array **v23; // x0
  UnityEngine_Component_o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  bool v38; // w8
  MethodInfo v40; // [xsp+0h] [xbp-70h] BYREF
  float v41; // [xsp+5Ch] [xbp-14h]
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_435A591 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_UITweener_Begin_TweenRotation___);
    sub_B70694(&StringLiteral_6041/*"EndExecuteCameraRoll"*/);
    byte_435A591 = 1;
  }
  v40.methodPointer = 0LL;
  v40.invoker_method = 0LL;
  *(UnityEngine_Quaternion_o *)(&v12 - 1) = UnityEngine_Quaternion__Euler(0.0, 0.0, rollZ, 0LL);
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  v41 = v16;
  if ( !baseRoll1 )
    goto LABEL_25;
  v17 = v12;
  v18 = v13;
  v19 = v14;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      baseRoll1,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
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
                                           (const MethodInfo_1D645B8 *)Method_UITweener_Begin_TweenRotation___);
  if ( !baseRoll1 )
    goto LABEL_25;
  v22 = baseRoll1;
  value = TweenRotation__get_value((TweenRotation_o *)baseRoll1, 0LL);
  v40.methodPointer = *(Il2CppMethodPointer *)&value.fields.x;
  v40.invoker_method = *(void **)&value.fields.z;
  *(UnityEngine_Vector3_o *)&v22[5].klass = UnityEngine_Quaternion__get_eulerAngles(value, &v40);
  HIDWORD(v22[5].monitor) = 0;
  v22[5].fields.m_CachedPtr = 0;
  *((float *)&v22[5].fields + 1) = rollZ;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v22, 1.0, 1, 0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v22, 0, 0LL);
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1
    || (v42.fields.x = -x,
        v42.fields.y = -y,
        v42.fields.z = -z,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v42, 0LL),
        (baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll2) == 0LL) )
  {
LABEL_25:
    sub_B7076C(baseRoll1, v11);
  }
  v43.fields.x = x;
  v43.fields.y = y;
  v43.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v43, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL)
    || !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v22, 0LL) )
  {
    baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v45.fields.x = v41;
      v45.fields.y = v17;
      v45.fields.z = v18;
      v45.fields.w = v19;
      UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)baseRoll1, v45, 0LL);
      v38 = 0;
      goto LABEL_24;
    }
    goto LABEL_25;
  }
  v23 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22[3].klass = (UnityEngine_Component_c *)v23;
  v24 = v22 + 3;
  sub_B70630((BattleServantConfConponent_o *)v24, v23, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)StringLiteral_6041/*"EndExecuteCameraRoll"*/;
  v24->monitor = (void *)StringLiteral_6041/*"EndExecuteCameraRoll"*/;
  sub_B70630((BattleServantConfConponent_o *)&v24->monitor, v31, v32, v33, v34, v35, v36, v37);
  v38 = 1;
LABEL_24:
  this->fields.isRoll = v38;
  return 1;
}


void __fastcall UIScriptChara__StartShadowEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseShadowEffect; // x19

  if ( (byte_435A582 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    sub_B70694(&StringLiteral_13746/*"Talk/bit_talk_11"*/);
    byte_435A582 = 1;
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
    CommonEffectManager__Create_17851888(baseShadowEffect, (System_String_o *)StringLiteral_13746/*"Talk/bit_talk_11"*/, 0, 0, 0, 0LL);
  }
}


bool __fastcall UIScriptChara__StopBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_435A5A6 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A5A6 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop(baseEffectBack, isSkip, 0, 0LL);
}


bool __fastcall UIScriptChara__StopBackEffect_38858552(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_435A5A7 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A5A7 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop_17856588(baseEffectBack, n, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopCut(UIScriptChara_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall UIScriptChara__StopEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_435A59D & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A59D = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop(baseEffect, isSkip, 0, 0LL);
}


bool __fastcall UIScriptChara__StopEffect_38857124(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_435A59E & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A59E = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop_17856588(baseEffect, n, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopMoveScaleTween(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *baseScale; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_435A58B & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_22262/*"scaleto"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_435A58B = 1;
  }
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject(baseScale, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42946732(gameObject, (System_String_o *)StringLiteral_22262/*"scaleto"*/, 0LL);
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_16;
  baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseScale, 0LL);
  if ( !baseScale )
    goto LABEL_16;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)baseScale,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseScale = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)baseScale & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B7076C(baseScale, method);
  }
}


void __fastcall UIScriptChara__StopMoveTween(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_435A584 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_20904/*"moveto"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_435A584 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42946732(gameObject, (System_String_o *)StringLiteral_20904/*"moveto"*/, 0LL);
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v4 )
    goto LABEL_14;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v4,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
      return;
    }
LABEL_14:
    sub_B7076C(v4, v5);
  }
}


void __fastcall UIScriptChara__StopShadowEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseShadowEffect; // x20

  if ( (byte_435A583 & 1) == 0 )
  {
    sub_B70694(&CommonEffectManager_TypeInfo);
    byte_435A583 = 1;
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


void __fastcall UIScriptChara__StopSpecialEffect_38855816(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  ProgramEffectManager__Destory_25478240(this->fields.baseSpecialEffect, n, 0LL);
}


void __fastcall UIScriptChara___SetBackEffect_g__Callback_124_0(
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_435A5AA & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435A5AA = 1;
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
      sub_B7076C(v3, v4);
    effect->fields._IsOnSublayer_k__BackingField = 1;
  }
}


void __fastcall UIScriptChara___SetEffect_g__Callback_114_0(CommonEffectComponent_o *effect, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_435A5A9 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435A5A9 = 1;
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
      sub_B7076C(v3, v4);
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
  struct UIScriptChara_o *_4__this; // x8
  struct UIScriptChara_o *v5; // x8
  UIScriptChara___c__DisplayClass39_0_o *v6; // x20
  struct UIScriptChara_o *v7; // x8
  UnityEngine_Object_o *v8; // x21
  float v9; // s0
  float v10; // s1
  float v11; // s2
  int r_low; // w8
  float v13; // s8
  float v14; // s9
  float v15; // s10
  __int64 v16; // x25
  __int64 v17; // x22
  UnityEngine_Transform_o *transform; // x23
  int v19; // s2
  float v20; // s0
  float v21; // s1
  struct UnityEngine_Texture_o *maskTex; // x8
  UnityEngine_Transform_o *v23; // x23
  struct UnityEngine_Texture_o *v24; // x8
  int v25; // w24
  struct UIScriptChara_o *v26; // x8
  UIScriptChara_c *klass; // x9
  float v28; // s0
  __int64 v32; // x0
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_434F2D0 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___);
    this = (UIScriptChara___c__DisplayClass39_0_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F2D0 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  this = (UIScriptChara___c__DisplayClass39_0_o *)_4__this->fields.baseEffect;
  if ( !this
    || (this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          1,
                                                          (const MethodInfo_1D4B288 *)Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___),
        (v5 = v3->fields.__4__this) == 0LL)
    || (v6 = this,
        this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))v5->klass->vtable._8_GetBody.method)(
                                                          v3->fields.__4__this,
                                                          v5->klass->vtable._9_GetSizeEdgeBlur.methodPtr),
        (v7 = v3->fields.__4__this) == 0LL)
    || (v8 = (UnityEngine_Object_o *)this,
        this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))v7->klass->vtable._4_GetOffsetEdgeBlur.method)(
                                                          v3->fields.__4__this,
                                                          v7->klass->vtable._5_GetRectEdgeBlur.methodPtr),
        !v6) )
  {
LABEL_30:
    sub_B7076C(this, effect);
  }
  r_low = LODWORD(v6->fields.color.fields.r);
  if ( r_low >= 1 )
  {
    v13 = v9;
    v14 = v10;
    v15 = v11;
    v16 = 0LL;
    do
    {
      if ( (unsigned int)v16 >= r_low )
      {
        v32 = sub_B70798(this);
        sub_B70738(v32, 0LL);
      }
      v17 = *((_QWORD *)&v6->fields.color.fields.b + v16);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_30;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0LL);
        this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)v17,
                                                          0LL);
        if ( !this )
          goto LABEL_30;
        *(UnityEngine_Vector3_o *)(&v19 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        if ( !transform )
          goto LABEL_30;
        v20 = v13;
        v21 = v14;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v19 - 2), 0LL);
      }
      else if ( !v17 )
      {
        goto LABEL_30;
      }
      *(struct UnityEngine_Color_o *)(v17 + 88) = v3->fields.color;
      *(struct UnityEngine_Color_o *)(v17 + 104) = v3->fields.particleColor;
      FGOEdgeBlur__set_Texture((FGOEdgeBlur_o *)v17, v3->fields.maskTex, 0LL);
      this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)v17,
                                                        0LL);
      maskTex = v3->fields.maskTex;
      if ( !maskTex )
        goto LABEL_30;
      v23 = (UnityEngine_Transform_o *)this;
      this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))maskTex->klass->vtable._4_get_width.method)(
                                                        v3->fields.maskTex,
                                                        maskTex->klass->vtable._5_set_width.methodPtr);
      v24 = v3->fields.maskTex;
      if ( !v24 )
        goto LABEL_30;
      v25 = (int)this;
      this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v24->klass->vtable._6_get_height.method)(
                                                        v3->fields.maskTex,
                                                        v24->klass->vtable._7_set_height.methodPtr);
      if ( !v23 )
        goto LABEL_30;
      v33.fields.y = (float)(int)this;
      v33.fields.x = (float)v25;
      v33.fields.z = 0.0;
      UnityEngine_Transform__set_localScale(v23, v33, 0LL);
      FGOEdgeBlur__set_Thickness((FGOEdgeBlur_o *)v17, v3->fields.thick, 0LL);
      FGOEdgeBlur__set_Level((FGOEdgeBlur_o *)v17, v3->fields.level, 0LL);
      this = (UIScriptChara___c__DisplayClass39_0_o *)v3->fields.maskTex;
      if ( !this )
        goto LABEL_30;
      this = (UIScriptChara___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(UIScriptChara___c__DisplayClass39_0_o *, void *))&this->klass[1]._1.byval_arg.bits)(
                                                        this,
                                                        this->klass[1]._1.this_arg.data);
      v26 = v3->fields.__4__this;
      if ( !v26 )
        goto LABEL_30;
      klass = v26->klass;
      if ( (int)this <= 1024 )
        v28 = ((float (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))klass->vtable._5_GetRectEdgeBlur.method)(
                v3->fields.__4__this,
                klass->vtable._6_GetHighRectEdgeBlur.methodPtr);
      else
        v28 = ((float (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))klass->vtable._6_GetHighRectEdgeBlur.method)(
                v3->fields.__4__this,
                klass->vtable._7_GetBodySubTexture.methodPtr);
      FGOEdgeBlur__set_Rect((FGOEdgeBlur_o *)v17, *(UnityEngine_Rect_o *)&v28, 0LL);
      v34.fields.x = v13;
      v34.fields.y = v14;
      v34.fields.z = v15;
      FGOEdgeBlur__setMaskImagePosition((FGOEdgeBlur_o *)v17, v34, 0LL);
      r_low = LODWORD(v6->fields.color.fields.r);
      ++v16;
    }
    while ( (int)v16 < r_low );
  }
}