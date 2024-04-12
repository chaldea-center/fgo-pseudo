void __fastcall UIScriptChara___cctor(const MethodInfo *method)
{
  if ( (byte_42B891D & 1) == 0 )
  {
    sub_B52984(&UIScriptChara_TypeInfo);
    byte_42B891D = 1;
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
  if ( (byte_42B88F5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16981/*"blink"*/);
    sub_B52984(&StringLiteral_18818/*"fade"*/);
    sub_B52984(&StringLiteral_17895/*"crossFade"*/);
    byte_42B88F5 = 1;
  }
  if ( !kind )
    goto LABEL_10;
  if ( !System_String__op_Equality(kind, (System_String_o *)StringLiteral_18818/*"fade"*/, 0LL) )
  {
    if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_16981/*"blink"*/, 0LL) )
    {
      v13 = 3LL;
      goto LABEL_11;
    }
    if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_17895/*"crossFade"*/, 0LL) )
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
  ((void (__fastcall *)(UIScriptChara_o *, __int64, System_String_o *, _QWORD, System_Action_o *, Il2CppMethodPointer, long double))this->klass->vtable._9_ChangeCharacter.method)(
    this,
    v13,
    imageName,
    (unsigned int)faceType,
    callback,
    this->klass->vtable._10_SetCharacter.methodPtr,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ChangeCharacter_39053640(
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
  sub_B52920(
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
    sub_B52A5C(v11, v12);
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
    sub_B52A5C(gameObject, v4);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.basePosition, 0LL);
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__EndMoveReturnEaseHalf(UIScriptChara_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UIScriptChara__MoveReturnPositionEase_39058492(this, this->fields.returnDuration, this->fields.returnEaseType, v2);
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
    sub_B52A5C(0LL, method);
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
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B52A5C)(baseSpecialEffect, v3);
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
    sub_B52920(p_setCallback, 0LL, v14, v15, v16, v17, v18, v19);
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
    sub_B52A5C(0LL, method);
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

  if ( (byte_42B8914 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B8914 = 1;
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

  if ( (byte_42B8916 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B8916 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart(baseEffectBack, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffectStart_39066076(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_42B8917 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B8917 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart_18103108(baseEffectBack, n, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffect_39065852(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_42B8915 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B8915 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsBusy_18102108(baseEffectBack, n, 0LL);
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

  if ( (byte_42B8908 & 1) == 0 )
  {
    sub_B52984(&CharaCutEffectComponent_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B8908 = 1;
  }
  v3 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v3 )
LABEL_23:
    sub_B52A5C(v3, v4);
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
      v13 = sub_B52A88(v3);
      sub_B52A28(v13, 0LL);
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

  if ( (byte_42B8909 & 1) == 0 )
  {
    sub_B52984(&CharaCutEffectComponent_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B8909 = 1;
  }
  v3 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v3 )
LABEL_23:
    sub_B52A5C(v3, v4);
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
      v13 = sub_B52A88(v3);
      sub_B52A28(v13, 0LL);
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

  if ( (byte_42B890B & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B890B = 1;
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

  if ( (byte_42B890D & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B890D = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart(baseEffect, 0LL);
}


bool __fastcall UIScriptChara__IsEffectStart_39064648(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_42B890E & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B890E = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart_18103108(baseEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsEffect_39064424(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_42B890C & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B890C = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsBusy_18102108(baseEffect, n, 0LL);
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


bool __fastcall UIScriptChara__IsSpecialEffectStart_39063400(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsStart_24688016(this->fields.baseSpecialEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsSpecialEffect_39063376(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsBusy_24687316(this->fields.baseSpecialEffect, n, 0LL);
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
  if ( (byte_42B8903 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_6008/*"EndMoveAttack"*/);
    sub_B52984(&StringLiteral_21296/*"normal"*/);
    byte_42B8903 = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)kind);
  if ( duration <= 0.0 )
    duration = 0.5;
  this->fields.isMove = 1;
  if ( kind )
    System_String__op_Equality(kind, (System_String_o *)StringLiteral_21296/*"normal"*/, 0LL);
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
      sub_B52920((BattleServantConfConponent_o *)&v12->fields.eventReceiver, v15, v16, v17, v18, v19, v20, v21);
      v22 = (System_Int32_array **)StringLiteral_6008/*"EndMoveAttack"*/;
      v12->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6008/*"EndMoveAttack"*/;
      sub_B52920((BattleServantConfConponent_o *)&v12->fields.callWhenFinished, v22, v23, v24, v25, v26, v27, v28);
      return;
    }
LABEL_16:
    sub_B52A5C(transform, v14);
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
  if ( (byte_42B88FA & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_6006/*"EndMove"*/);
    byte_42B88FA = 1;
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
        sub_B52920((BattleServantConfConponent_o *)v19, transform, v13, v14, v15, v16, v17, v18);
        v20 = (System_Int32_array **)StringLiteral_6006/*"EndMove"*/;
        v19->monitor = (void *)StringLiteral_6006/*"EndMove"*/;
        sub_B52920((BattleServantConfConponent_o *)&v19->monitor, v20, v21, v22, v23, v24, v25, v26);
        return;
      }
LABEL_13:
      sub_B52A5C(transform, v12);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  UnityEngine_GameObject_o *v18; // x19
  float v19; // [xsp+Ch] [xbp-54h] BYREF
  float v20; // [xsp+10h] [xbp-50h] BYREF
  float v21; // [xsp+14h] [xbp-4Ch] BYREF
  int v22; // [xsp+18h] [xbp-48h] BYREF
  char v23[4]; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  z = vector.fields.z;
  y = vector.fields.y;
  x = vector.fields.x;
  if ( (byte_42B88FB & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&System_Collections_Hashtable_TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&StringLiteral_23509/*"x"*/);
    sub_B52984(&StringLiteral_18247/*"easetype"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_6006/*"EndMove"*/);
    sub_B52984(&StringLiteral_18079/*"delay"*/);
    sub_B52984(&StringLiteral_23601/*"y"*/);
    sub_B52984(&StringLiteral_20088/*"isLocal"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B88FB = 1;
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
        v24.fields.x = x;
        v24.fields.y = y;
        v24.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v24, 0LL);
        this->fields.isMove = 0;
        return;
      }
    }
LABEL_12:
    sub_B52A5C(gameObject, v13);
  }
  v11 = (System_Collections_Hashtable_o *)sub_B52A54(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39351252(v11, 0LL);
  v23[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v23);
  if ( !v11 )
    goto LABEL_12;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_20088/*"isLocal"*/,
    gameObject,
    v11->klass->vtable._24_Clear.methodPtr);
  v22 = 0;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_18079/*"delay"*/,
    v14,
    v11->klass->vtable._24_Clear.methodPtr);
  v21 = x;
  v15 = j_il2cpp_value_box_0(float_TypeInfo, &v21);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_23509/*"x"*/,
    v15,
    v11->klass->vtable._24_Clear.methodPtr);
  v20 = y;
  v16 = j_il2cpp_value_box_0(float_TypeInfo, &v20);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_23601/*"y"*/,
    v16,
    v11->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_18247/*"easetype"*/,
    easetype,
    v11->klass->vtable._24_Clear.methodPtr);
  v19 = time;
  v17 = j_il2cpp_value_box_0(float_TypeInfo, &v19);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_22867/*"time"*/,
    v17,
    v11->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_21433/*"oncomplete"*/,
    StringLiteral_6006/*"EndMove"*/,
    v11->klass->vtable._24_Clear.methodPtr);
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43223368(v18, v11, 0LL);
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

  if ( (byte_42B88FC & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_6009/*"EndMoveReturn"*/);
    byte_42B88FC = 1;
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
      sub_B52A5C(v8, v9);
    v7[3].klass = (UnityEngine_Object_c *)v8;
    v16 = v7 + 3;
    sub_B52920((BattleServantConfConponent_o *)v16, v8, v10, v11, v12, v13, v14, v15);
    v17 = (System_Int32_array **)StringLiteral_6009/*"EndMoveReturn"*/;
    v16->monitor = (void *)StringLiteral_6009/*"EndMoveReturn"*/;
    sub_B52920((BattleServantConfConponent_o *)&v16->monitor, v17, v18, v19, v20, v21, v22, v23);
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
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  UnityEngine_GameObject_o *v27; // x19
  float returnDuration; // [xsp+4h] [xbp-4Ch] BYREF
  float v29; // [xsp+8h] [xbp-48h] BYREF
  float v30; // [xsp+Ch] [xbp-44h] BYREF
  int v31; // [xsp+18h] [xbp-38h] BYREF
  char v32[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42B88FE & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&System_Collections_Hashtable_TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&StringLiteral_23509/*"x"*/);
    sub_B52984(&StringLiteral_18247/*"easetype"*/);
    sub_B52984(&StringLiteral_6010/*"EndMoveReturnEaseHalf"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_18079/*"delay"*/);
    sub_B52984(&StringLiteral_23601/*"y"*/);
    sub_B52984(&StringLiteral_20088/*"isLocal"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B88FE = 1;
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.returnEaseType,
    (System_Int32_array **)returnEaseType,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Hashtable_o *)sub_B52A54(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39351252(v22, 0LL);
  v32[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v32);
  if ( !v22 )
LABEL_12:
    sub_B52A5C(gameObject, v14);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_20088/*"isLocal"*/,
    gameObject,
    v22->klass->vtable._24_Clear.methodPtr);
  v31 = 0;
  v23 = j_il2cpp_value_box_0(float_TypeInfo, &v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_18079/*"delay"*/,
    v23,
    v22->klass->vtable._24_Clear.methodPtr);
  v30 = x;
  v24 = j_il2cpp_value_box_0(float_TypeInfo, &v30);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_23509/*"x"*/,
    v24,
    v22->klass->vtable._24_Clear.methodPtr);
  v29 = y;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &v29);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_23601/*"y"*/,
    v25,
    v22->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_18247/*"easetype"*/,
    startEaseType,
    v22->klass->vtable._24_Clear.methodPtr);
  returnDuration = this->fields.returnDuration;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &returnDuration);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_22867/*"time"*/,
    v26,
    v22->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_21433/*"oncomplete"*/,
    StringLiteral_6010/*"EndMoveReturnEaseHalf"*/,
    v22->klass->vtable._24_Clear.methodPtr);
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43223368(v27, v22, 0LL);
}


void __fastcall UIScriptChara__MoveReturnPositionEase_39058492(
        UIScriptChara_o *this,
        float time,
        System_String_o *returnEaseType,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  System_Collections_Hashtable_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float v16; // [xsp+4h] [xbp-3Ch] BYREF
  float y; // [xsp+8h] [xbp-38h] BYREF
  float x; // [xsp+Ch] [xbp-34h] BYREF
  int v19; // [xsp+18h] [xbp-28h] BYREF
  char v20[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42B88FF & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&System_Collections_Hashtable_TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&StringLiteral_23509/*"x"*/);
    sub_B52984(&StringLiteral_18247/*"easetype"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_18079/*"delay"*/);
    sub_B52984(&StringLiteral_6009/*"EndMoveReturn"*/);
    sub_B52984(&StringLiteral_23601/*"y"*/);
    sub_B52984(&StringLiteral_20088/*"isLocal"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B88FF = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)returnEaseType);
  this->fields.isMove = 1;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveReturn(this, v7);
  }
  else
  {
    v8 = (System_Collections_Hashtable_o *)sub_B52A54(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_39351252(v8, 0LL);
    v20[0] = 1;
    v9 = j_il2cpp_value_box_0(bool_TypeInfo, v20);
    if ( !v8 )
      sub_B52A5C(v9, v10);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_20088/*"isLocal"*/,
      v9,
      v8->klass->vtable._24_Clear.methodPtr);
    v19 = 0;
    v11 = j_il2cpp_value_box_0(float_TypeInfo, &v19);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_18079/*"delay"*/,
      v11,
      v8->klass->vtable._24_Clear.methodPtr);
    x = this->fields.basePosition.fields.x;
    v12 = j_il2cpp_value_box_0(float_TypeInfo, &x);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_23509/*"x"*/,
      v12,
      v8->klass->vtable._24_Clear.methodPtr);
    y = this->fields.basePosition.fields.y;
    v13 = j_il2cpp_value_box_0(float_TypeInfo, &y);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_23601/*"y"*/,
      v13,
      v8->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_18247/*"easetype"*/,
      returnEaseType,
      v8->klass->vtable._24_Clear.methodPtr);
    v16 = time;
    v14 = j_il2cpp_value_box_0(float_TypeInfo, &v16);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_22867/*"time"*/,
      v14,
      v8->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_21433/*"oncomplete"*/,
      StringLiteral_6009/*"EndMoveReturn"*/,
      v8->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_43223368(gameObject, v8, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MoveReturnPosition_39057272(
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
  if ( (byte_42B88FD & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_6011/*"EndMoveReturnHalf"*/);
    byte_42B88FD = 1;
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
        sub_B52920((BattleServantConfConponent_o *)v20, (System_Int32_array **)gameObject, v14, v15, v16, v17, v18, v19);
        v21 = (System_Int32_array **)StringLiteral_6011/*"EndMoveReturnHalf"*/;
        v20->monitor = (void *)StringLiteral_6011/*"EndMoveReturnHalf"*/;
        sub_B52920((BattleServantConfConponent_o *)&v20->monitor, v21, v22, v23, v24, v25, v26, v27);
        return;
      }
LABEL_13:
      sub_B52A5C(gameObject, v10);
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

  if ( (byte_42B8901 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_6012/*"EndMoveScale"*/);
    byte_42B8901 = 1;
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
        sub_B52920((BattleServantConfConponent_o *)v17, (System_Int32_array **)baseScale, v11, v12, v13, v14, v15, v16);
        v18 = (System_Int32_array **)StringLiteral_6012/*"EndMoveScale"*/;
        v17->monitor = (void *)StringLiteral_6012/*"EndMoveScale"*/;
        sub_B52920((BattleServantConfConponent_o *)&v17->monitor, v18, v19, v20, v21, v22, v23, v24);
        return;
      }
LABEL_12:
      sub_B52A5C(baseScale, v7);
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
  UnityEngine_Component_o *baseScale; // x0
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v17; // x19
  float v18; // [xsp+0h] [xbp-40h] BYREF
  float y; // [xsp+4h] [xbp-3Ch] BYREF
  float x; // [xsp+8h] [xbp-38h] BYREF
  char v21[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B8902 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&System_Collections_Hashtable_TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&StringLiteral_23509/*"x"*/);
    sub_B52984(&StringLiteral_18247/*"easetype"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21435/*"oncompletetarget"*/);
    sub_B52984(&StringLiteral_23601/*"y"*/);
    sub_B52984(&StringLiteral_20088/*"isLocal"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&StringLiteral_6012/*"EndMoveScale"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B8902 = 1;
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
    v10 = (System_Collections_Hashtable_o *)sub_B52A54(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_39351252(v10, 0LL);
    v21[0] = 1;
    baseScale = (UnityEngine_Component_o *)j_il2cpp_value_box_0(bool_TypeInfo, v21);
    if ( !v10 )
      goto LABEL_11;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_Component_o *, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_20088/*"isLocal"*/,
      baseScale,
      v10->klass->vtable._24_Clear.methodPtr);
    x = this->fields.baseScaleSize.fields.x;
    v13 = j_il2cpp_value_box_0(float_TypeInfo, &x);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_23509/*"x"*/,
      v13,
      v10->klass->vtable._24_Clear.methodPtr);
    y = this->fields.baseScaleSize.fields.y;
    v14 = j_il2cpp_value_box_0(float_TypeInfo, &y);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_23601/*"y"*/,
      v14,
      v10->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_18247/*"easetype"*/,
      easetype,
      v10->klass->vtable._24_Clear.methodPtr);
    v18 = time;
    v15 = j_il2cpp_value_box_0(float_TypeInfo, &v18);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_22867/*"time"*/,
      v15,
      v10->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_21433/*"oncomplete"*/,
      StringLiteral_6012/*"EndMoveScale"*/,
      v10->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_21435/*"oncompletetarget"*/,
      gameObject,
      v10->klass->vtable._24_Clear.methodPtr);
    baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
    if ( !baseScale )
LABEL_11:
      sub_B52A5C(baseScale, v12);
    v17 = UnityEngine_Component__get_gameObject(baseScale, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ScaleTo_43229068(v17, v10, 0LL);
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

  if ( (byte_42B8907 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10118/*"OnShake"*/);
    byte_42B8907 = 1;
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
        (System_String_o *)StringLiteral_10118/*"OnShake"*/,
        this->fields.shakeCycle,
        0LL);
      return;
    }
LABEL_10:
    sub_B52A5C(v5, v6);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_35611056(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10118/*"OnShake"*/,
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

  if ( (byte_42B8919 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B8919 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume(baseEffectBack, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeBackEffect_39066792(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_42B891A & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B891A = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume_18109016(baseEffectBack, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeCutin(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ;
}


void __fastcall UIScriptChara__ResumeEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_42B8910 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B8910 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume(baseEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeEffect_39065364(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_42B8911 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B8911 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume_18109016(baseEffect, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ProgramEffectManager__Resume(this->fields.baseSpecialEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect_39064280(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  ProgramEffectManager__Resume_24690492(this->fields.baseSpecialEffect, n, isSkip, 0LL);
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
  UIScriptChara__SetBackEffect_39066292(this, n, zero, isSkip, isPause, flip, isOnSublayer, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetBackEffect_39066292(
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
  if ( (byte_42B8918 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_B52984(&Method_UIScriptChara__SetBackEffect_g__Callback_123_0__);
    byte_42B8918 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( isOnSublayer )
  {
    v18 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B52A54(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v18,
      0LL,
      Method_UIScriptChara__SetBackEffect_g__Callback_123_0__,
      0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v19.fields.y = y;
    v19.fields.z = z;
    v19.fields.x = x;
    CommonEffectManager__Create_18107568(baseEffectBack, n, v19, v18, isSkip, isPause, flip, 0LL);
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
    CommonEffectManager__Create_18107372(baseEffectBack, n, v20, isSkip, isPause, flip, 0LL);
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
    sub_B52A5C(0LL, v8);
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
  sub_B52920(
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
    sub_B52A5C(baseDepth, *(_QWORD *)&d);
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
  UIScriptChara__SetEffect_39064864(this, n, zero, isSkip, isPause, flip, isOnSublayer, v13);
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
  if ( (byte_42B88F6 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_UIScriptChara___c__DisplayClass39_0__SetEffectEdgeBlur_b__0__);
    sub_B52984(&UIScriptChara___c__DisplayClass39_0_TypeInfo);
    byte_42B88F6 = 1;
  }
  v23 = sub_B52A54(UIScriptChara___c__DisplayClass39_0_TypeInfo);
  UIScriptChara___c__DisplayClass39_0___ctor((UIScriptChara___c__DisplayClass39_0_o *)v23, 0LL);
  if ( !v23 )
    sub_B52A5C(v24, v25);
  *(_QWORD *)(v23 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
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
  v32 = (System_Int32_array **)((__int64 (__fastcall *)(UIScriptChara_o *, Il2CppMethodPointer))this->klass->vtable._6_GetBodySubTexture.method)(
                                 this,
                                 this->klass->vtable._7_GetBody.methodPtr);
  *(_QWORD *)(v23 + 56) = v32;
  sub_B52920((BattleServantConfConponent_o *)(v23 + 56), v32, v33, v34, v35, v36, v37, v38);
  v39 = *(UnityEngine_Object_o **)(v23 + 56);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v39, 0LL, 0LL) )
  {
    v40 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B52A54(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
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
    CommonEffectManager__Create_18107568(baseEffect, effectName, v47, v40, isSkip, isPause, flip, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetEffect_39064864(
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
  if ( (byte_42B890F & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_B52984(&Method_UIScriptChara__SetEffect_g__Callback_113_0__);
    byte_42B890F = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( isOnSublayer )
  {
    v18 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B52A54(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(v18, 0LL, Method_UIScriptChara__SetEffect_g__Callback_113_0__, 0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v19.fields.y = y;
    v19.fields.z = z;
    v19.fields.x = x;
    CommonEffectManager__Create_18107568(baseEffect, n, v19, v18, isSkip, isPause, flip, 0LL);
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
    CommonEffectManager__Create_18107372(baseEffect, n, v20, isSkip, isPause, flip, 0LL);
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
  sub_B52920(
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
    sub_B52A5C(0LL, v7);
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
  if ( (byte_42B8904 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B8904 = 1;
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
                                                      (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
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
    sub_B52A5C(baseRoll1, v9);
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
  if ( (byte_42B890A & 1) == 0 )
  {
    v27 = v20;
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_23486/*"wipe"*/);
    sub_B52984(&StringLiteral_16490/*"appearanceReverse"*/);
    sub_B52984(&StringLiteral_17991/*"darkEnemyErasure"*/);
    sub_B52984(&StringLiteral_23492/*"wipeTimeRe"*/);
    sub_B52984(&StringLiteral_17992/*"darkWipe"*/);
    sub_B52984(&StringLiteral_18903/*"flashErasure"*/);
    sub_B52984(&StringLiteral_16489/*"appearance"*/);
    sub_B52984(&StringLiteral_18527/*"erasure"*/);
    sub_B52984(&StringLiteral_18528/*"erasureReverse"*/);
    sub_B52984(&StringLiteral_18496/*"enemyErasure"*/);
    sub_B52984(&StringLiteral_23491/*"wipeTime"*/);
    v21 = v27;
    byte_42B890A = 1;
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
    v24 = PrivateImplementationDetails___ComputeStringHash_21189352(n, 0LL);
    if ( v24 > 0x8D759330 )
    {
      if ( v24 > 0xD4B34506 )
      {
        switch ( v24 )
        {
          case 0xE7555186:
            v25 = &StringLiteral_23486/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v25 = &StringLiteral_17992/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v25 = &StringLiteral_16489/*"appearance"*/;
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
            v25 = &StringLiteral_23492/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v25 = &StringLiteral_18903/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v25 = &StringLiteral_18528/*"erasureReverse"*/;
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
          v25 = &StringLiteral_18527/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v25 = &StringLiteral_18496/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v25 = &StringLiteral_16490/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v24 == 242689791 )
    {
      v25 = &StringLiteral_23491/*"wipeTime"*/;
    }
    else
    {
      if ( v24 != 1242641086 )
        return;
      v25 = &StringLiteral_17991/*"darkEnemyErasure"*/;
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
    sub_B52A5C(this, method);
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

  if ( (byte_42B8905 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_5992/*"EndExecuteCameraRoll"*/);
    byte_42B8905 = 1;
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
                                                      (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
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
    sub_B52A5C(baseRoll1, v7);
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
  sub_B52920((BattleServantConfConponent_o *)v21, v20, v22, v23, v24, v25, v26, v27);
  v28 = (System_Int32_array **)StringLiteral_5992/*"EndExecuteCameraRoll"*/;
  v21->monitor = (void *)StringLiteral_5992/*"EndExecuteCameraRoll"*/;
  sub_B52920((BattleServantConfConponent_o *)&v21->monitor, v28, v29, v30, v31, v32, v33, v34);
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
  if ( (byte_42B8906 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_UITweener_Begin_TweenRotation___);
    sub_B52984(&StringLiteral_5992/*"EndExecuteCameraRoll"*/);
    byte_42B8906 = 1;
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
                                                      (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
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
                                           (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenRotation___);
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
    sub_B52A5C(baseRoll1, v11);
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
  sub_B52920((BattleServantConfConponent_o *)v24, v23, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)StringLiteral_5992/*"EndExecuteCameraRoll"*/;
  v24->monitor = (void *)StringLiteral_5992/*"EndExecuteCameraRoll"*/;
  sub_B52920((BattleServantConfConponent_o *)&v24->monitor, v31, v32, v33, v34, v35, v36, v37);
  v38 = 1;
LABEL_24:
  this->fields.isRoll = v38;
  return 1;
}


void __fastcall UIScriptChara__StartShadowEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseShadowEffect; // x19

  if ( (byte_42B88F7 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&StringLiteral_13659/*"Talk/bit_talk_11"*/);
    byte_42B88F7 = 1;
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
    CommonEffectManager__Create_18105772(baseShadowEffect, (System_String_o *)StringLiteral_13659/*"Talk/bit_talk_11"*/, 0, 0, 0, 0LL);
  }
}


bool __fastcall UIScriptChara__StopBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_42B891B & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B891B = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop(baseEffectBack, isSkip, 0, 0LL);
}


bool __fastcall UIScriptChara__StopBackEffect_39067044(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_42B891C & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B891C = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop_18110472(baseEffectBack, n, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopCut(UIScriptChara_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall UIScriptChara__StopEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_42B8912 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B8912 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop(baseEffect, isSkip, 0, 0LL);
}


bool __fastcall UIScriptChara__StopEffect_39065616(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_42B8913 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B8913 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop_18110472(baseEffect, n, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopMoveScaleTween(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *baseScale; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_42B8900 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_22080/*"scaleto"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B8900 = 1;
  }
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject(baseScale, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43342896(gameObject, (System_String_o *)StringLiteral_22080/*"scaleto"*/, 0LL);
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_16;
  baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseScale, 0LL);
  if ( !baseScale )
    goto LABEL_16;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)baseScale,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
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
    sub_B52A5C(baseScale, method);
  }
}


void __fastcall UIScriptChara__StopMoveTween(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_42B88F9 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_20739/*"moveto"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B88F9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43342896(gameObject, (System_String_o *)StringLiteral_20739/*"moveto"*/, 0LL);
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v4 )
    goto LABEL_14;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v4,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    sub_B52A5C(v4, v5);
  }
}


void __fastcall UIScriptChara__StopShadowEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseShadowEffect; // x20

  if ( (byte_42B88F8 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42B88F8 = 1;
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


void __fastcall UIScriptChara__StopSpecialEffect_39064308(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  ProgramEffectManager__Destory_24692232(this->fields.baseSpecialEffect, n, 0LL);
}


void __fastcall UIScriptChara___SetBackEffect_g__Callback_123_0(
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_42B891F & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B891F = 1;
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
      sub_B52A5C(v3, v4);
    effect->fields._IsOnSublayer_k__BackingField = 1;
  }
}


void __fastcall UIScriptChara___SetEffect_g__Callback_113_0(CommonEffectComponent_o *effect, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_42B891E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B891E = 1;
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
      sub_B52A5C(v3, v4);
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
  __int64 i; // x25
  __int64 v17; // x22
  UnityEngine_Transform_o *transform; // x23
  int v19; // s2
  float v20; // s0
  float v21; // s1
  struct UnityEngine_Texture_o *maskTex; // x8
  UnityEngine_Transform_o *v23; // x23
  struct UnityEngine_Texture_o *v24; // x8
  int v25; // w24
  __int64 v26; // x0
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_42AE551 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___);
    this = (UIScriptChara___c__DisplayClass39_0_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE551 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  this = (UIScriptChara___c__DisplayClass39_0_o *)_4__this->fields.baseEffect;
  if ( !this
    || (this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          1,
                                                          (const MethodInfo_1B7B618 *)Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___),
        (v5 = v3->fields.__4__this) == 0LL)
    || (v6 = this,
        this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))v5->klass->vtable._7_GetBody.method)(
                                                          v3->fields.__4__this,
                                                          v5->klass->vtable._8_GetSizeEdgeBlur.methodPtr),
        (v7 = v3->fields.__4__this) == 0LL)
    || (v8 = (UnityEngine_Object_o *)this,
        this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))v7->klass->vtable._4_GetOffsetEdgeBlur.method)(
                                                          v3->fields.__4__this,
                                                          v7->klass->vtable._5_GetRectEdgeBlur.methodPtr),
        !v6) )
  {
LABEL_26:
    sub_B52A5C(this, effect);
  }
  r_low = LODWORD(v6->fields.color.fields.r);
  if ( r_low >= 1 )
  {
    v13 = v9;
    v14 = v10;
    v15 = v11;
    for ( i = 0LL; (int)i < r_low; ++i )
    {
      if ( (unsigned int)i >= r_low )
      {
        v26 = sub_B52A88(this);
        sub_B52A28(v26, 0LL);
      }
      v17 = *((_QWORD *)&v6->fields.color.fields.b + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_26;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0LL);
        this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)v17,
                                                          0LL);
        if ( !this )
          goto LABEL_26;
        *(UnityEngine_Vector3_o *)(&v19 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        if ( !transform )
          goto LABEL_26;
        v20 = v13;
        v21 = v14;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v19 - 2), 0LL);
      }
      else if ( !v17 )
      {
        goto LABEL_26;
      }
      *(struct UnityEngine_Color_o *)(v17 + 88) = v3->fields.color;
      *(struct UnityEngine_Color_o *)(v17 + 104) = v3->fields.particleColor;
      FGOEdgeBlur__set_Texture((FGOEdgeBlur_o *)v17, v3->fields.maskTex, 0LL);
      this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)v17,
                                                        0LL);
      maskTex = v3->fields.maskTex;
      if ( !maskTex )
        goto LABEL_26;
      v23 = (UnityEngine_Transform_o *)this;
      this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))maskTex->klass->vtable._4_get_width.method)(
                                                        v3->fields.maskTex,
                                                        maskTex->klass->vtable._5_set_width.methodPtr);
      v24 = v3->fields.maskTex;
      if ( !v24 )
        goto LABEL_26;
      v25 = (int)this;
      this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v24->klass->vtable._6_get_height.method)(
                                                        v3->fields.maskTex,
                                                        v24->klass->vtable._7_set_height.methodPtr);
      if ( !v23 )
        goto LABEL_26;
      v27.fields.y = (float)(int)this;
      v27.fields.x = (float)v25;
      v27.fields.z = 0.0;
      UnityEngine_Transform__set_localScale(v23, v27, 0LL);
      FGOEdgeBlur__set_Thickness((FGOEdgeBlur_o *)v17, v3->fields.thick, 0LL);
      FGOEdgeBlur__set_Level((FGOEdgeBlur_o *)v17, v3->fields.level, 0LL);
      this = (UIScriptChara___c__DisplayClass39_0_o *)v3->fields.__4__this;
      if ( !this )
        goto LABEL_26;
      v29.fields.m_XMin = ((float (__fastcall *)(UIScriptChara___c__DisplayClass39_0_o *, void *))this->klass[1]._1.namespaze)(
                            this,
                            this->klass[1]._1.byval_arg.data);
      FGOEdgeBlur__set_Rect((FGOEdgeBlur_o *)v17, v29, 0LL);
      v28.fields.x = v13;
      v28.fields.y = v14;
      v28.fields.z = v15;
      FGOEdgeBlur__setMaskImagePosition((FGOEdgeBlur_o *)v17, v28, 0LL);
      r_low = LODWORD(v6->fields.color.fields.r);
    }
  }
}