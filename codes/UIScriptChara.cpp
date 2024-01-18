void __fastcall UIScriptChara___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418FD3C & 1) == 0 )
  {
    sub_B2C35C(&UIScriptChara_TypeInfo, v1);
    byte_418FD3C = 1;
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
  if ( (byte_418FD15 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16865/*"blink"*/, kind);
    sub_B2C35C(&StringLiteral_18678/*"fade"*/, v13);
    sub_B2C35C(&StringLiteral_17770/*"crossFade"*/, v14);
    byte_418FD15 = 1;
  }
  if ( !kind )
    goto LABEL_10;
  if ( !System_String__op_Equality(kind, (System_String_o *)StringLiteral_18678/*"fade"*/, 0LL) )
  {
    if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_16865/*"blink"*/, 0LL) )
    {
      v15 = 3LL;
      goto LABEL_11;
    }
    if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_17770/*"crossFade"*/, 0LL) )
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
void __fastcall UIScriptChara__ChangeCharacter_37827556(
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
  sub_B2C2F8(
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
    sub_B2C434(v11, v12);
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
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_418FD1B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_iTween___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418FD1B = 1;
  }
  this->fields.isMove = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v5);
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_iTween___);
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
    UnityEngine_Object__Destroy_35314896(Component_srcLineSprite, 0LL);
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

  UIScriptChara__MoveReturnPositionEase_37831936(this, this->fields.returnDuration, this->fields.returnEaseType, v2);
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
    sub_B2C434(0LL, method);
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
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(baseSpecialEffect, v3);
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
    sub_B2C2F8(p_setCallback, 0LL, v14, v15, v16, v17, v18, v19);
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
    sub_B2C434(0LL, method);
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

  if ( (byte_418FD33 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, method);
    byte_418FD33 = 1;
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

  if ( (byte_418FD35 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, method);
    byte_418FD35 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart(baseEffectBack, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffectStart_37839452(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_418FD36 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, n);
    byte_418FD36 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart_17916324(baseEffectBack, n, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffect_37839228(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_418FD34 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, n);
    byte_418FD34 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsBusy_17915324(baseEffectBack, n, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x8
  ProgramEffectComponent_array *v7; // x19
  unsigned __int64 v8; // x21
  ProgramEffectComponent_o **m_Items; // x22
  ProgramEffectComponent_o *v10; // x8
  __int64 v11; // x11
  ProgramEffectComponent_o *v12; // x20
  __int64 v14; // x0

  if ( (byte_418FD27 & 1) == 0 )
  {
    sub_B2C35C(&CharaCutEffectComponent_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418FD27 = 1;
  }
  v4 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v4 )
LABEL_23:
    sub_B2C434(v4, v5);
  v6 = *(_QWORD *)&v4->max_length;
  v7 = v4;
  if ( (int)v6 < 1 )
    return 0;
  v8 = 0LL;
  m_Items = v4->m_Items;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v6 )
    {
      v14 = sub_B2C460(v4);
      sub_B2C400(v14, 0LL);
    }
    v10 = m_Items[v8];
    if ( v10
      && (v11 = *(&CharaCutEffectComponent_TypeInfo->_2.bitflags2 + 1),
          *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11) )
    {
      v12 = (CharaCutEffectComponent_c *)v10->klass->_2.typeHierarchy[v11 - 1] == CharaCutEffectComponent_TypeInfo
          ? m_Items[v8]
          : 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v4 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_23;
      if ( LOBYTE(v12[1].fields.rightAnchor) )
        return 1;
    }
    LODWORD(v6) = v7->max_length;
    if ( (__int64)++v8 >= (int)v6 )
      return 0;
  }
}


bool __fastcall UIScriptChara__IsCutStart(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ProgramEffectComponent_array *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  ProgramEffectComponent_array *v7; // x19
  unsigned __int64 v8; // x21
  ProgramEffectComponent_o **m_Items; // x22
  ProgramEffectComponent_o *v10; // x8
  __int64 v11; // x11
  ProgramEffectComponent_o *v12; // x20
  __int64 v14; // x0

  if ( (byte_418FD28 & 1) == 0 )
  {
    sub_B2C35C(&CharaCutEffectComponent_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418FD28 = 1;
  }
  v4 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v4 )
LABEL_23:
    sub_B2C434(v4, v5);
  v6 = *(_QWORD *)&v4->max_length;
  v7 = v4;
  if ( (int)v6 < 1 )
    return 1;
  v8 = 0LL;
  m_Items = v4->m_Items;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v6 )
    {
      v14 = sub_B2C460(v4);
      sub_B2C400(v14, 0LL);
    }
    v10 = m_Items[v8];
    if ( v10
      && (v11 = *(&CharaCutEffectComponent_TypeInfo->_2.bitflags2 + 1),
          *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11) )
    {
      v12 = (CharaCutEffectComponent_c *)v10->klass->_2.typeHierarchy[v11 - 1] == CharaCutEffectComponent_TypeInfo
          ? m_Items[v8]
          : 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v4 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_23;
      if ( !v12->fields.isStart )
        return 0;
    }
    LODWORD(v6) = v7->max_length;
    if ( (__int64)++v8 >= (int)v6 )
      return 1;
  }
}


bool __fastcall UIScriptChara__IsEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_418FD2A & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, method);
    byte_418FD2A = 1;
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

  if ( (byte_418FD2C & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, method);
    byte_418FD2C = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart(baseEffect, 0LL);
}


bool __fastcall UIScriptChara__IsEffectStart_37838024(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_418FD2D & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, n);
    byte_418FD2D = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart_17916324(baseEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsEffect_37837800(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_418FD2B & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, n);
    byte_418FD2B = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsBusy_17915324(baseEffect, n, 0LL);
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


bool __fastcall UIScriptChara__IsSpecialEffectStart_37836776(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsStart_25204272(this->fields.baseSpecialEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsSpecialEffect_37836752(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsBusy_25203572(this->fields.baseSpecialEffect, n, 0LL);
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
  __int64 v16; // x1
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_418FD22 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, kind);
    sub_B2C35C(&StringLiteral_5965/*"EndMoveAttack"*/, v11);
    sub_B2C35C(&StringLiteral_21124/*"normal"*/, v12);
    byte_418FD22 = 1;
  }
  if ( duration <= 0.0 )
    duration = 0.5;
  this->fields.isMove = 1;
  if ( kind )
    System_String__op_Equality(kind, (System_String_o *)StringLiteral_21124/*"normal"*/, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  v14 = TweenPosition__Begin(gameObject, duration, v32, 0LL);
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
      v17 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v14->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v17;
      sub_B2C2F8((BattleServantConfConponent_o *)&v14->fields.eventReceiver, v17, v18, v19, v20, v21, v22, v23);
      v24 = (System_Int32_array **)StringLiteral_5965/*"EndMoveAttack"*/;
      v14->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5965/*"EndMoveAttack"*/;
      sub_B2C2F8((BattleServantConfConponent_o *)&v14->fields.callWhenFinished, v24, v25, v26, v27, v28, v29, v30);
      return;
    }
LABEL_16:
    sub_B2C434(transform, v16);
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_16;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_16;
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v31, 0LL);
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
  __int64 v13; // x1
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
  const MethodInfo *v28; // x1
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_418FD19 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5963/*"EndMove"*/, v9);
    byte_418FD19 = 1;
  }
  this->fields.isMove = 1;
  if ( duration > 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v30.fields.x = x;
    v30.fields.y = y;
    v30.fields.z = z;
    v11 = (UnityEngine_Object_o *)TweenPosition__Begin(gameObject, duration, v30, 0LL);
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
        v20 = v11 + 3;
        sub_B2C2F8((BattleServantConfConponent_o *)v20, transform, v14, v15, v16, v17, v18, v19);
        v21 = (System_Int32_array **)StringLiteral_5963/*"EndMove"*/;
        v20->monitor = (void *)StringLiteral_5963/*"EndMove"*/;
        sub_B2C2F8((BattleServantConfConponent_o *)&v20->monitor, v21, v22, v23, v24, v25, v26, v27);
        return;
      }
LABEL_13:
      sub_B2C434(transform, v13);
    }
  }
  transform = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  transform = (System_Int32_array **)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_13;
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v29, 0LL);
  UIScriptChara__EndMove(this, v28);
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
  __int64 v24; // x1
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  UnityEngine_GameObject_o *v29; // x19
  const MethodInfo *v30; // x1
  float v31; // [xsp+Ch] [xbp-54h] BYREF
  float v32; // [xsp+10h] [xbp-50h] BYREF
  float v33; // [xsp+14h] [xbp-4Ch] BYREF
  int v34; // [xsp+18h] [xbp-48h] BYREF
  char v35[4]; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  z = vector.fields.z;
  y = vector.fields.y;
  x = vector.fields.x;
  if ( (byte_418FD1A & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, easetype);
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, v11);
    sub_B2C35C(&float_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_23316/*"x"*/, v13);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v14);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v15);
    sub_B2C35C(&StringLiteral_5963/*"EndMove"*/, v16);
    sub_B2C35C(&StringLiteral_17949/*"delay"*/, v17);
    sub_B2C35C(&StringLiteral_23408/*"y"*/, v18);
    sub_B2C35C(&StringLiteral_19938/*"isLocal"*/, v19);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v20);
    sub_B2C35C(&iTween_TypeInfo, v21);
    byte_418FD1A = 1;
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
        v36.fields.x = x;
        v36.fields.y = y;
        v36.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v36, 0LL);
        UIScriptChara__EndMove(this, v30);
        return;
      }
    }
LABEL_12:
    sub_B2C434(gameObject, v24);
  }
  v22 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_38345656(v22, 0LL);
  v35[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v35);
  if ( !v22 )
    goto LABEL_12;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_19938/*"isLocal"*/,
    gameObject,
    v22->klass->vtable._24_Clear.methodPtr);
  v34 = 0;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &v34);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_17949/*"delay"*/,
    v25,
    v22->klass->vtable._24_Clear.methodPtr);
  v33 = x;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v33);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_23316/*"x"*/,
    v26,
    v22->klass->vtable._24_Clear.methodPtr);
  v32 = y;
  v27 = j_il2cpp_value_box_0(float_TypeInfo, &v32);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_23408/*"y"*/,
    v27,
    v22->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_18114/*"easetype"*/,
    easetype,
    v22->klass->vtable._24_Clear.methodPtr);
  v31 = time;
  v28 = j_il2cpp_value_box_0(float_TypeInfo, &v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_22677/*"time"*/,
    v28,
    v22->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_21263/*"oncomplete"*/,
    StringLiteral_5963/*"EndMove"*/,
    v22->klass->vtable._24_Clear.methodPtr);
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_42732664(v29, v22, 0LL);
}


void __fastcall UIScriptChara__MoveReturnPosition(UIScriptChara_o *this, float duration, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v7; // x20
  System_Int32_array **transform; // x0
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

  if ( (byte_418FD1C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5966/*"EndMoveReturn"*/, v5);
    byte_418FD1C = 1;
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
        v16 = v7 + 3;
        sub_B2C2F8((BattleServantConfConponent_o *)v16, transform, v10, v11, v12, v13, v14, v15);
        v17 = (System_Int32_array **)StringLiteral_5966/*"EndMoveReturn"*/;
        v16->monitor = (void *)StringLiteral_5966/*"EndMoveReturn"*/;
        sub_B2C2F8((BattleServantConfConponent_o *)&v16->monitor, v17, v18, v19, v20, v21, v22, v23);
        return;
      }
LABEL_13:
      sub_B2C434(transform, v9);
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
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Hashtable_o *v32; // x21
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x0
  UnityEngine_GameObject_o *v37; // x20
  float returnDuration; // [xsp+4h] [xbp-4Ch] BYREF
  float v39; // [xsp+8h] [xbp-48h] BYREF
  float v40; // [xsp+Ch] [xbp-44h] BYREF
  int v41; // [xsp+18h] [xbp-38h] BYREF
  char v42[4]; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418FD1E & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, startEaseType);
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, v13);
    sub_B2C35C(&float_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_23316/*"x"*/, v15);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v16);
    sub_B2C35C(&StringLiteral_5967/*"EndMoveReturnEaseHalf"*/, v17);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v18);
    sub_B2C35C(&StringLiteral_17949/*"delay"*/, v19);
    sub_B2C35C(&StringLiteral_23408/*"y"*/, v20);
    sub_B2C35C(&StringLiteral_19938/*"isLocal"*/, v21);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v22);
    sub_B2C35C(&iTween_TypeInfo, v23);
    byte_418FD1E = 1;
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.returnEaseType,
      (System_Int32_array **)returnEaseType,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    v32 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_38345656(v32, 0LL);
    v42[0] = 1;
    gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v42);
    if ( !v32 )
LABEL_14:
      sub_B2C434(gameObject, v25);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
      v32,
      StringLiteral_19938/*"isLocal"*/,
      gameObject,
      v32->klass->vtable._24_Clear.methodPtr);
    v41 = 0;
    v33 = j_il2cpp_value_box_0(float_TypeInfo, &v41);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
      v32,
      StringLiteral_17949/*"delay"*/,
      v33,
      v32->klass->vtable._24_Clear.methodPtr);
    v40 = x;
    v34 = j_il2cpp_value_box_0(float_TypeInfo, &v40);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
      v32,
      StringLiteral_23316/*"x"*/,
      v34,
      v32->klass->vtable._24_Clear.methodPtr);
    v39 = y;
    v35 = j_il2cpp_value_box_0(float_TypeInfo, &v39);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
      v32,
      StringLiteral_23408/*"y"*/,
      v35,
      v32->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
      v32,
      StringLiteral_18114/*"easetype"*/,
      startEaseType,
      v32->klass->vtable._24_Clear.methodPtr);
    returnDuration = this->fields.returnDuration;
    v36 = j_il2cpp_value_box_0(float_TypeInfo, &returnDuration);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
      v32,
      StringLiteral_22677/*"time"*/,
      v36,
      v32->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
      v32,
      StringLiteral_21263/*"oncomplete"*/,
      StringLiteral_5967/*"EndMoveReturnEaseHalf"*/,
      v32->klass->vtable._24_Clear.methodPtr);
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_42732664(v37, v32, 0LL);
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


void __fastcall UIScriptChara__MoveReturnPositionEase_37831936(
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
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float v26; // [xsp+4h] [xbp-3Ch] BYREF
  float y; // [xsp+8h] [xbp-38h] BYREF
  float x; // [xsp+Ch] [xbp-34h] BYREF
  int v29; // [xsp+18h] [xbp-28h] BYREF
  char v30[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_418FD1F & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, returnEaseType);
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, v7);
    sub_B2C35C(&float_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_23316/*"x"*/, v9);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v10);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v11);
    sub_B2C35C(&StringLiteral_17949/*"delay"*/, v12);
    sub_B2C35C(&StringLiteral_5966/*"EndMoveReturn"*/, v13);
    sub_B2C35C(&StringLiteral_23408/*"y"*/, v14);
    sub_B2C35C(&StringLiteral_19938/*"isLocal"*/, v15);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v16);
    sub_B2C35C(&iTween_TypeInfo, v17);
    byte_418FD1F = 1;
  }
  this->fields.isMove = 1;
  if ( time > 0.0 )
  {
    v18 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_38345656(v18, 0LL);
    v30[0] = 1;
    v19 = j_il2cpp_value_box_0(bool_TypeInfo, v30);
    if ( !v18 )
      sub_B2C434(v19, v20);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
      v18,
      StringLiteral_19938/*"isLocal"*/,
      v19,
      v18->klass->vtable._24_Clear.methodPtr);
    v29 = 0;
    v21 = j_il2cpp_value_box_0(float_TypeInfo, &v29);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
      v18,
      StringLiteral_17949/*"delay"*/,
      v21,
      v18->klass->vtable._24_Clear.methodPtr);
    x = this->fields.basePosition.fields.x;
    v22 = j_il2cpp_value_box_0(float_TypeInfo, &x);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
      v18,
      StringLiteral_23316/*"x"*/,
      v22,
      v18->klass->vtable._24_Clear.methodPtr);
    y = this->fields.basePosition.fields.y;
    v23 = j_il2cpp_value_box_0(float_TypeInfo, &y);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
      v18,
      StringLiteral_23408/*"y"*/,
      v23,
      v18->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
      v18,
      StringLiteral_18114/*"easetype"*/,
      returnEaseType,
      v18->klass->vtable._24_Clear.methodPtr);
    v26 = time;
    v24 = j_il2cpp_value_box_0(float_TypeInfo, &v26);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
      v18,
      StringLiteral_22677/*"time"*/,
      v24,
      v18->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
      v18,
      StringLiteral_21263/*"oncomplete"*/,
      StringLiteral_5966/*"EndMoveReturn"*/,
      v18->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_42732664(gameObject, v18, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MoveReturnPosition_37830672(
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
  __int64 v11; // x1
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
  if ( (byte_418FD1D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5968/*"EndMoveReturnHalf"*/, v9);
    byte_418FD1D = 1;
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
        sub_B2C2F8((BattleServantConfConponent_o *)v20, (System_Int32_array **)gameObject, v14, v15, v16, v17, v18, v19);
        v21 = (System_Int32_array **)StringLiteral_5968/*"EndMoveReturnHalf"*/;
        v20->monitor = (void *)StringLiteral_5968/*"EndMoveReturnHalf"*/;
        sub_B2C2F8((BattleServantConfConponent_o *)&v20->monitor, v21, v22, v23, v24, v25, v26, v27);
        return;
      }
LABEL_15:
      sub_B2C434(gameObject, v11);
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

  if ( (byte_418FD20 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5969/*"EndMoveScale"*/, v7);
    byte_418FD20 = 1;
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
        sub_B2C2F8((BattleServantConfConponent_o *)v17, (System_Int32_array **)baseScale, v11, v12, v13, v14, v15, v16);
        v18 = (System_Int32_array **)StringLiteral_5969/*"EndMoveScale"*/;
        v17->monitor = (void *)StringLiteral_5969/*"EndMoveScale"*/;
        sub_B2C2F8((BattleServantConfConponent_o *)&v17->monitor, v18, v19, v20, v21, v22, v23, v24);
        return;
      }
LABEL_12:
      sub_B2C434(baseScale, method);
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
  __int64 v21; // x1
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float v26; // [xsp+0h] [xbp-40h] BYREF
  float y; // [xsp+4h] [xbp-3Ch] BYREF
  float x; // [xsp+8h] [xbp-38h] BYREF
  char v29[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418FD21 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, easetype);
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, v9);
    sub_B2C35C(&float_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_23316/*"x"*/, v11);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v12);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v13);
    sub_B2C35C(&StringLiteral_23408/*"y"*/, v14);
    sub_B2C35C(&StringLiteral_19938/*"isLocal"*/, v15);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v16);
    sub_B2C35C(&StringLiteral_5969/*"EndMoveScale"*/, v17);
    sub_B2C35C(&iTween_TypeInfo, v18);
    byte_418FD21 = 1;
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
    v19 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_38345656(v19, 0LL);
    v29[0] = 1;
    baseScale = (UnityEngine_Component_o *)j_il2cpp_value_box_0(bool_TypeInfo, v29);
    if ( !v19 )
      goto LABEL_11;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_Component_o *, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_19938/*"isLocal"*/,
      baseScale,
      v19->klass->vtable._24_Clear.methodPtr);
    x = this->fields.baseScaleSize.fields.x;
    v22 = j_il2cpp_value_box_0(float_TypeInfo, &x);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_23316/*"x"*/,
      v22,
      v19->klass->vtable._24_Clear.methodPtr);
    y = this->fields.baseScaleSize.fields.y;
    v23 = j_il2cpp_value_box_0(float_TypeInfo, &y);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_23408/*"y"*/,
      v23,
      v19->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_18114/*"easetype"*/,
      easetype,
      v19->klass->vtable._24_Clear.methodPtr);
    v26 = time;
    v24 = j_il2cpp_value_box_0(float_TypeInfo, &v26);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_22677/*"time"*/,
      v24,
      v19->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_21263/*"oncomplete"*/,
      StringLiteral_5969/*"EndMoveScale"*/,
      v19->klass->vtable._24_Clear.methodPtr);
    baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
    if ( !baseScale )
LABEL_11:
      sub_B2C434(baseScale, v21);
    gameObject = UnityEngine_Component__get_gameObject(baseScale, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ScaleTo_42738364(gameObject, v19, 0LL);
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

  if ( (byte_418FD26 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10054/*"OnShake"*/, method);
    byte_418FD26 = 1;
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
        (System_String_o *)StringLiteral_10054/*"OnShake"*/,
        this->fields.shakeCycle,
        0LL);
      return;
    }
LABEL_10:
    sub_B2C434(v5, v6);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_35308996(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10054/*"OnShake"*/,
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


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ResumeBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_418FD38 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, isSkip);
    byte_418FD38 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume(baseEffectBack, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeBackEffect_37840168(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_418FD39 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, n);
    byte_418FD39 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume_17922232(baseEffectBack, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeCutin(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ResumeEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_418FD2F & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, isSkip);
    byte_418FD2F = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume(baseEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeEffect_37838740(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_418FD30 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, n);
    byte_418FD30 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume_17922232(baseEffect, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ProgramEffectManager__Resume(this->fields.baseSpecialEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect_37837656(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  ProgramEffectManager__Resume_25206748(this->fields.baseSpecialEffect, n, isSkip, 0LL);
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
  UIScriptChara__SetBackEffect_37839668(this, n, zero, isSkip, isPause, flip, isOnSublayer, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetBackEffect_37839668(
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
  if ( (byte_418FD37 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, n);
    sub_B2C35C(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v17);
    sub_B2C35C(&Method_UIScriptChara__SetBackEffect_g__Callback_121_0__, v18);
    byte_418FD37 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( isOnSublayer )
  {
    v20 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B2C42C(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
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
    CommonEffectManager__Create_17920784(baseEffectBack, n, v21, v20, isSkip, isPause, flip, 0LL);
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
    CommonEffectManager__Create_17920588(baseEffectBack, n, v22, isSkip, isPause, flip, 0LL);
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
  if ( !transform )
    sub_B2C434(0LL, v8);
  v9.fields.y = y;
  v9.fields.z = z;
  v9.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v9, 0LL);
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
  sub_B2C2F8(
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
    sub_B2C434(baseDepth, *(_QWORD *)&d);
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
  UIScriptChara__SetEffect_37838240(this, n, zero, isSkip, isPause, flip, isOnSublayer, v13);
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
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_Object_o *v43; // x25
  CommonEffectLoadComponent_LoadEndHandler_o *v44; // x25
  UnityEngine_GameObject_o *baseEffect; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float a; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  a = particleColor.fields.a;
  b = particleColor.fields.b;
  g = particleColor.fields.g;
  r = particleColor.fields.r;
  v17 = color.fields.a;
  v18 = color.fields.b;
  v19 = color.fields.g;
  v20 = color.fields.r;
  if ( (byte_418FD16 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, effectName);
    sub_B2C35C(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v23);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v24);
    sub_B2C35C(&Method_UIScriptChara___c__DisplayClass39_0__SetEffectEdgeBlur_b__0__, v25);
    sub_B2C35C(&UIScriptChara___c__DisplayClass39_0_TypeInfo, v26);
    byte_418FD16 = 1;
  }
  v27 = sub_B2C42C(UIScriptChara___c__DisplayClass39_0_TypeInfo);
  UIScriptChara___c__DisplayClass39_0___ctor((UIScriptChara___c__DisplayClass39_0_o *)v27, 0LL);
  if ( !v27 )
    sub_B2C434(v28, v29);
  *(_QWORD *)(v27 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
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
  v36 = (System_Int32_array **)((__int64 (__fastcall *)(UIScriptChara_o *, Il2CppMethodPointer))this->klass->vtable._6_GetBodySubTexture.method)(
                                 this,
                                 this->klass->vtable._7_GetBody.methodPtr);
  *(_QWORD *)(v27 + 56) = v36;
  sub_B2C2F8((BattleServantConfConponent_o *)(v27 + 56), v36, v37, v38, v39, v40, v41, v42);
  v43 = *(UnityEngine_Object_o **)(v27 + 56);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v43, 0LL, 0LL) )
  {
    v44 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B2C42C(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v44,
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
    v51.fields.x = x;
    v51.fields.y = y;
    v51.fields.z = z;
    CommonEffectManager__Create_17920784(baseEffect, effectName, v51, v44, isSkip, isPause, flip, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetEffect_37838240(
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
  if ( (byte_418FD2E & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, n);
    sub_B2C35C(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v17);
    sub_B2C35C(&Method_UIScriptChara__SetEffect_g__Callback_111_0__, v18);
    byte_418FD2E = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( isOnSublayer )
  {
    v20 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B2C42C(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(v20, 0LL, Method_UIScriptChara__SetEffect_g__Callback_111_0__, 0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v21.fields.y = y;
    v21.fields.z = z;
    v21.fields.x = x;
    CommonEffectManager__Create_17920784(baseEffect, n, v21, v20, isSkip, isPause, flip, 0LL);
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
    CommonEffectManager__Create_17920588(baseEffect, n, v22, isSkip, isPause, flip, 0LL);
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
  sub_B2C2F8(
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
    sub_B2C434(0LL, v7);
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
  __int64 v10; // x1
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s3
  struct UnityEngine_Transform_o *baseRoll1; // x0
  float v16; // s11
  float v17; // s12
  float v18; // s13
  float v19; // s14
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_418FD23 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenRotation___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_418FD23 = 1;
  }
  *(UnityEngine_Quaternion_o *)&v11 = UnityEngine_Quaternion__Euler(0.0, 0.0, rollZ, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_14;
  v16 = v11;
  v17 = v12;
  v18 = v13;
  v19 = v14;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)baseRoll1,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
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
  v24.fields.x = v16;
  v24.fields.y = v17;
  v24.fields.z = v18;
  v24.fields.w = v19;
  UnityEngine_Transform__set_localRotation(baseRoll1, v24, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1
    || (v22.fields.x = -x,
        v22.fields.y = -y,
        v22.fields.z = -z,
        UnityEngine_Transform__set_localPosition(baseRoll1, v22, 0LL),
        (baseRoll1 = this->fields.baseRoll2) == 0LL) )
  {
LABEL_14:
    sub_B2C434(baseRoll1, v10);
  }
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  UnityEngine_Transform__set_localPosition(baseRoll1, v23, 0LL);
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
    sub_B2C434(0LL, method);
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
  if ( (byte_418FD29 & 1) == 0 )
  {
    v38 = v20;
    sub_B2C35C(&UnityEngine_Object_TypeInfo, n);
    sub_B2C35C(&StringLiteral_23293/*"wipe"*/, v21);
    sub_B2C35C(&StringLiteral_16378/*"appearanceReverse"*/, v22);
    sub_B2C35C(&StringLiteral_17866/*"darkEnemyErasure"*/, v23);
    sub_B2C35C(&StringLiteral_23299/*"wipeTimeRe"*/, v24);
    sub_B2C35C(&StringLiteral_17867/*"darkWipe"*/, v25);
    sub_B2C35C(&StringLiteral_18762/*"flashErasure"*/, v26);
    sub_B2C35C(&StringLiteral_16377/*"appearance"*/, v27);
    sub_B2C35C(&StringLiteral_18393/*"erasure"*/, v28);
    sub_B2C35C(&StringLiteral_18394/*"erasureReverse"*/, v29);
    sub_B2C35C(&StringLiteral_18362/*"enemyErasure"*/, v30);
    sub_B2C35C(&StringLiteral_23298/*"wipeTime"*/, v31);
    v32 = v38;
    byte_418FD29 = 1;
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
    v35 = PrivateImplementationDetails___ComputeStringHash_21099092(n, 0LL);
    if ( v35 > 0x8D759330 )
    {
      if ( v35 > 0xD4B34506 )
      {
        switch ( v35 )
        {
          case 0xE7555186:
            v36 = &StringLiteral_23293/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v36 = &StringLiteral_17867/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v36 = &StringLiteral_16377/*"appearance"*/;
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
            v36 = &StringLiteral_23299/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v36 = &StringLiteral_18762/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v36 = &StringLiteral_18394/*"erasureReverse"*/;
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
          v36 = &StringLiteral_18393/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v36 = &StringLiteral_18362/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v36 = &StringLiteral_16378/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v35 == 242689791 )
    {
      v36 = &StringLiteral_23298/*"wipeTime"*/;
    }
    else
    {
      if ( v35 != 1242641086 )
        return;
      v36 = &StringLiteral_17866/*"darkEnemyErasure"*/;
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
    sub_B2C434(this, method);
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
  __int64 v9; // x1
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s3
  struct UnityEngine_Transform_o *baseRoll1; // x0
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s11
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v21; // x20
  System_Int32_array **v22; // x0
  UnityEngine_Object_o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Quaternion_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v39; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_418FD24 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenRotation___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_5949/*"EndExecuteCameraRoll"*/, v8);
    byte_418FD24 = 1;
  }
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Euler(0.0, 0.0, rollZ, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_21;
  v15 = v10;
  v16 = v11;
  v17 = v12;
  v18 = v13;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)baseRoll1,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
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
    sub_B2C434(baseRoll1, v9);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseRoll1, 0LL);
  v39.fields.x = v15;
  v39.fields.y = v16;
  v39.fields.z = v17;
  v39.fields.w = v18;
  v21 = (UnityEngine_Object_o *)TweenRotation__Begin(gameObject, duration, v39, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) == 0 )
    goto LABEL_18;
  if ( !v21 )
    goto LABEL_21;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v21, 0LL) )
  {
LABEL_18:
    baseRoll1 = this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v38.fields.x = v15;
      v38.fields.y = v16;
      v38.fields.z = v17;
      v38.fields.w = v18;
      UnityEngine_Transform__set_localRotation(baseRoll1, v38, 0LL);
      return 1;
    }
    goto LABEL_21;
  }
  v22 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v21[3].klass = (UnityEngine_Object_c *)v22;
  v23 = v21 + 3;
  sub_B2C2F8((BattleServantConfConponent_o *)v23, v22, v24, v25, v26, v27, v28, v29);
  v30 = (System_Int32_array **)StringLiteral_5949/*"EndExecuteCameraRoll"*/;
  v23->monitor = (void *)StringLiteral_5949/*"EndExecuteCameraRoll"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->monitor, v30, v31, v32, v33, v34, v35, v36);
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
  __int64 v14; // x1
  float v15; // s1
  float v16; // s2
  float v17; // s3
  UnityEngine_Component_o *baseRoll1; // x0
  float v19; // s0
  float v20; // s9
  float v21; // s10
  float v22; // s11
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v25; // x20
  System_Int32_array **v26; // x0
  UnityEngine_Component_o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  MethodInfo v42; // [xsp+0h] [xbp-70h] BYREF
  float v43; // [xsp+5Ch] [xbp-14h]
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_418FD25 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenRotation___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_UITweener_Begin_TweenRotation___, v12);
    sub_B2C35C(&StringLiteral_5949/*"EndExecuteCameraRoll"*/, v13);
    byte_418FD25 = 1;
  }
  v42.methodPointer = 0LL;
  v42.invoker_method = 0LL;
  *(UnityEngine_Quaternion_o *)(&v15 - 1) = UnityEngine_Quaternion__Euler(0.0, 0.0, rollZ, 0LL);
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  v43 = v19;
  if ( !baseRoll1 )
    goto LABEL_25;
  v20 = v15;
  v21 = v16;
  v22 = v17;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      baseRoll1,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
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
                                           (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenRotation___);
  if ( !baseRoll1 )
    goto LABEL_25;
  v25 = baseRoll1;
  value = TweenRotation__get_value((TweenRotation_o *)baseRoll1, 0LL);
  v42.methodPointer = *(Il2CppMethodPointer *)&value.fields.x;
  v42.invoker_method = *(void **)&value.fields.z;
  *(UnityEngine_Vector3_o *)&v25[5].klass = UnityEngine_Quaternion__get_eulerAngles(value, &v42);
  HIDWORD(v25[5].monitor) = 0;
  v25[5].fields.m_CachedPtr = 0;
  *((float *)&v25[5].fields + 1) = rollZ;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v25, 1.0, 1, 0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v25, 0, 0LL);
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1
    || (v44.fields.x = -x,
        v44.fields.y = -y,
        v44.fields.z = -z,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v44, 0LL),
        (baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll2) == 0LL) )
  {
LABEL_25:
    sub_B2C434(baseRoll1, v14);
  }
  v45.fields.x = x;
  v45.fields.y = y;
  v45.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v45, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL)
    || !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v25, 0LL) )
  {
    baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v47.fields.x = v43;
      v47.fields.y = v20;
      v47.fields.z = v21;
      v47.fields.w = v22;
      UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)baseRoll1, v47, 0LL);
      return 1;
    }
    goto LABEL_25;
  }
  v26 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v25[3].klass = (UnityEngine_Component_c *)v26;
  v27 = v25 + 3;
  sub_B2C2F8((BattleServantConfConponent_o *)v27, v26, v28, v29, v30, v31, v32, v33);
  v34 = (System_Int32_array **)StringLiteral_5949/*"EndExecuteCameraRoll"*/;
  v27->monitor = (void *)StringLiteral_5949/*"EndExecuteCameraRoll"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v27->monitor, v34, v35, v36, v37, v38, v39, v40);
  this->fields.isRoll = 1;
  return 1;
}


void __fastcall UIScriptChara__StartShadowEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *baseShadowEffect; // x19

  if ( (byte_418FD17 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_13562/*"Talk/bit_talk_11"*/, v3);
    byte_418FD17 = 1;
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
    CommonEffectManager__Create_17918988(baseShadowEffect, (System_String_o *)StringLiteral_13562/*"Talk/bit_talk_11"*/, 0, 0, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StopBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_418FD3A & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, isSkip);
    byte_418FD3A = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop(baseEffectBack, isSkip, 0, 0LL);
}


bool __fastcall UIScriptChara__StopBackEffect_37840420(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_418FD3B & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, n);
    byte_418FD3B = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop_17923688(baseEffectBack, n, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopCut(UIScriptChara_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StopEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_418FD31 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, isSkip);
    byte_418FD31 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop(baseEffect, isSkip, 0, 0LL);
}


bool __fastcall UIScriptChara__StopEffect_37838992(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_418FD32 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, n);
    byte_418FD32 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop_17923688(baseEffect, n, isSkip, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__StopShadowEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseShadowEffect; // x20

  if ( (byte_418FD18 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, isSkip);
    byte_418FD18 = 1;
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


void __fastcall UIScriptChara__StopSpecialEffect_37837684(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  ProgramEffectManager__Destory_25208488(this->fields.baseSpecialEffect, n, 0LL);
}


void __fastcall UIScriptChara___SetBackEffect_g__Callback_121_0(
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_418FD3E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418FD3E = 1;
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
      sub_B2C434(v3, v4);
    effect->fields._IsOnSublayer_k__BackingField = 1;
  }
}


void __fastcall UIScriptChara___SetEffect_g__Callback_111_0(CommonEffectComponent_o *effect, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_418FD3D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418FD3D = 1;
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
      sub_B2C434(v3, v4);
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
  if ( (byte_4185380 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___, effect);
    this = (UIScriptChara___c__DisplayClass39_0_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4185380 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  this = (UIScriptChara___c__DisplayClass39_0_o *)_4__this->fields.baseEffect;
  if ( !this
    || (this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          1,
                                                          (const MethodInfo_1AA7D3C *)Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___),
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
    sub_B2C434(this, effect);
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
        v27 = sub_B2C460(this);
        sub_B2C400(v27, 0LL);
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