void __fastcall UIScriptChara___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42F128C & 1) == 0 )
  {
    sub_B5D5C4(&UIScriptChara_TypeInfo, v1, v2, v3);
    byte_42F128C = 1;
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x1

  v10 = *(long double *)&speed;
  if ( (byte_42F1264 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17072/*"blink"*/, (_DWORD)kind, (_DWORD)imageName, *(_QWORD *)&faceType);
    sub_B5D5C4(&StringLiteral_18913/*"fade"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_17989/*"crossFade"*/, v16, v17, v18);
    byte_42F1264 = 1;
  }
  if ( !kind )
    goto LABEL_10;
  if ( !System_String__op_Equality(kind, (System_String_o *)StringLiteral_18913/*"fade"*/, 0LL) )
  {
    if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_17072/*"blink"*/, 0LL) )
    {
      v19 = 3LL;
      goto LABEL_11;
    }
    if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_17989/*"crossFade"*/, 0LL) )
    {
      v19 = 4LL;
      goto LABEL_11;
    }
LABEL_10:
    v19 = 1LL;
    goto LABEL_11;
  }
  v19 = 2LL;
LABEL_11:
  ((void (__fastcall *)(UIScriptChara_o *, __int64, System_String_o *, _QWORD, System_Action_o *, Il2CppMethodPointer, long double))this->klass->vtable._9_ChangeCharacter.method)(
    this,
    v19,
    imageName,
    (unsigned int)faceType,
    callback,
    this->klass->vtable._10_SetCharacter.methodPtr,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ChangeCharacter_39143432(
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
  sub_B5D560(
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
    sub_B5D69C(v11, v12);
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
    sub_B5D69C(gameObject, v4);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.basePosition, 0LL);
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__EndMoveReturnEaseHalf(UIScriptChara_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UIScriptChara__MoveReturnPositionEase_39148284(this, this->fields.returnDuration, this->fields.returnEaseType, v2);
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
    sub_B5D69C(0LL, method);
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
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(baseSpecialEffect, v3);
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
    sub_B5D560(p_setCallback, 0LL, v14, v15, v16, v17, v18, v19);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_42F1283 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42F1283 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_42F1285 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42F1285 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart(baseEffectBack, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffectStart_39155868(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_42F1286 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)n, (_DWORD)method, v3);
    byte_42F1286 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart_18147048(baseEffectBack, n, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffect_39155644(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_42F1284 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)n, (_DWORD)method, v3);
    byte_42F1284 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsBusy_18146048(baseEffectBack, n, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ProgramEffectComponent_array *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  ProgramEffectComponent_array *v11; // x19
  unsigned __int64 v12; // x21
  ProgramEffectComponent_o **m_Items; // x22
  ProgramEffectComponent_o *v14; // x8
  __int64 v15; // x11
  ProgramEffectComponent_o *v16; // x20
  __int64 v18; // x0

  if ( (byte_42F1277 & 1) == 0 )
  {
    sub_B5D5C4(&CharaCutEffectComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42F1277 = 1;
  }
  v8 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v8 )
LABEL_23:
    sub_B5D69C(v8, v9);
  v10 = *(_QWORD *)&v8->max_length;
  v11 = v8;
  if ( (int)v10 < 1 )
    return 0;
  v12 = 0LL;
  m_Items = v8->m_Items;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v10 )
    {
      v18 = sub_B5D6C8(v8);
      sub_B5D668(v18, 0LL);
    }
    v14 = m_Items[v12];
    if ( v14
      && (v15 = *(&CharaCutEffectComponent_TypeInfo->_2.bitflags2 + 1),
          *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v15) )
    {
      v16 = (CharaCutEffectComponent_c *)v14->klass->_2.typeHierarchy[v15 - 1] == CharaCutEffectComponent_TypeInfo
          ? m_Items[v12]
          : 0LL;
    }
    else
    {
      v16 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_23;
      if ( LOBYTE(v16[1].fields.rightAnchor) )
        return 1;
    }
    LODWORD(v10) = v11->max_length;
    if ( (__int64)++v12 >= (int)v10 )
      return 0;
  }
}


bool __fastcall UIScriptChara__IsCutStart(UIScriptChara_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ProgramEffectComponent_array *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  ProgramEffectComponent_array *v11; // x19
  unsigned __int64 v12; // x21
  ProgramEffectComponent_o **m_Items; // x22
  ProgramEffectComponent_o *v14; // x8
  __int64 v15; // x11
  ProgramEffectComponent_o *v16; // x20
  __int64 v18; // x0

  if ( (byte_42F1278 & 1) == 0 )
  {
    sub_B5D5C4(&CharaCutEffectComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42F1278 = 1;
  }
  v8 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v8 )
LABEL_23:
    sub_B5D69C(v8, v9);
  v10 = *(_QWORD *)&v8->max_length;
  v11 = v8;
  if ( (int)v10 < 1 )
    return 1;
  v12 = 0LL;
  m_Items = v8->m_Items;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v10 )
    {
      v18 = sub_B5D6C8(v8);
      sub_B5D668(v18, 0LL);
    }
    v14 = m_Items[v12];
    if ( v14
      && (v15 = *(&CharaCutEffectComponent_TypeInfo->_2.bitflags2 + 1),
          *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v15) )
    {
      v16 = (CharaCutEffectComponent_c *)v14->klass->_2.typeHierarchy[v15 - 1] == CharaCutEffectComponent_TypeInfo
          ? m_Items[v12]
          : 0LL;
    }
    else
    {
      v16 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_23;
      if ( !v16->fields.isStart )
        return 0;
    }
    LODWORD(v10) = v11->max_length;
    if ( (__int64)++v12 >= (int)v10 )
      return 1;
  }
}


bool __fastcall UIScriptChara__IsEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_42F127A & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42F127A = 1;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_42F127C & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42F127C = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart(baseEffect, 0LL);
}


bool __fastcall UIScriptChara__IsEffectStart_39154440(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_42F127D & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)n, (_DWORD)method, v3);
    byte_42F127D = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart_18147048(baseEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsEffect_39154216(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_42F127B & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)n, (_DWORD)method, v3);
    byte_42F127B = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsBusy_18146048(baseEffect, n, 0LL);
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


bool __fastcall UIScriptChara__IsSpecialEffectStart_39153192(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsStart_25093576(this->fields.baseSpecialEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsSpecialEffect_39153168(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsBusy_25092876(this->fields.baseSpecialEffect, n, 0LL);
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
  __int64 v5; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  TweenPosition_o *v19; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v21; // x1
  System_Int32_array **v22; // x0
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
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_42F1272 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)kind, (_DWORD)method, v5);
    sub_B5D5C4(&StringLiteral_6044/*"EndMoveAttack"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21402/*"normal"*/, v15, v16, v17);
    byte_42F1272 = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)kind);
  if ( duration <= 0.0 )
    duration = 0.5;
  this->fields.isMove = 1;
  if ( kind )
    System_String__op_Equality(kind, (System_String_o *)StringLiteral_21402/*"normal"*/, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  v19 = TweenPosition__Begin(gameObject, duration, v37, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( v19 )
    {
      v19->fields.style = 1;
      v22 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v19->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v22;
      sub_B5D560((BattleServantConfConponent_o *)&v19->fields.eventReceiver, v22, v23, v24, v25, v26, v27, v28);
      v29 = (System_Int32_array **)StringLiteral_6044/*"EndMoveAttack"*/;
      v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6044/*"EndMoveAttack"*/;
      sub_B5D560((BattleServantConfConponent_o *)&v19->fields.callWhenFinished, v29, v30, v31, v32, v33, v34, v35);
      return;
    }
LABEL_16:
    sub_B5D69C(transform, v21);
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_16;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_16;
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v36, 0LL);
  this->fields.isMove = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MovePosition(
        UIScriptChara_o *this,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  int v4; // w2
  __int64 v5; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v15; // x20
  System_Int32_array **transform; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Object_o *v24; // x20
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_42F1269 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v4, v5);
    sub_B5D5C4(&StringLiteral_6042/*"EndMove"*/, v11, v12, v13);
    byte_42F1269 = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  if ( duration > 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v33.fields.x = x;
    v33.fields.y = y;
    v33.fields.z = z;
    v15 = (UnityEngine_Object_o *)TweenPosition__Begin(gameObject, duration, v33, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    {
      transform = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v15 )
      {
        v15[3].klass = (UnityEngine_Object_c *)transform;
        v24 = v15 + 3;
        sub_B5D560((BattleServantConfConponent_o *)v24, transform, v18, v19, v20, v21, v22, v23);
        v25 = (System_Int32_array **)StringLiteral_6042/*"EndMove"*/;
        v24->monitor = (void *)StringLiteral_6042/*"EndMove"*/;
        sub_B5D560((BattleServantConfConponent_o *)&v24->monitor, v25, v26, v27, v28, v29, v30, v31);
        return;
      }
LABEL_13:
      sub_B5D69C(transform, v17);
    }
  }
  transform = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  transform = (System_Int32_array **)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_13;
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v32, 0LL);
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
  __int64 v5; // x3
  float z; // s11
  float y; // s9
  float x; // s10
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_Collections_Hashtable_o *v45; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v47; // x1
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x0
  UnityEngine_GameObject_o *v52; // x19
  float v53; // [xsp+Ch] [xbp-54h] BYREF
  float v54; // [xsp+10h] [xbp-50h] BYREF
  float v55; // [xsp+14h] [xbp-4Ch] BYREF
  int v56; // [xsp+18h] [xbp-48h] BYREF
  char v57[4]; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  z = vector.fields.z;
  y = vector.fields.y;
  x = vector.fields.x;
  if ( (byte_42F126A & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)easetype, (_DWORD)method, v5);
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&float_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_23627/*"x"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_6042/*"EndMove"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_18173/*"delay"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_23719/*"y"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_20191/*"isLocal"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v39, v40, v41);
    sub_B5D5C4(&iTween_TypeInfo, v42, v43, v44);
    byte_42F126A = 1;
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
        v58.fields.x = x;
        v58.fields.y = y;
        v58.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v58, 0LL);
        this->fields.isMove = 0;
        return;
      }
    }
LABEL_12:
    sub_B5D69C(gameObject, v47);
  }
  v45 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39706016(v45, 0LL);
  v57[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v57);
  if ( !v45 )
    goto LABEL_12;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
    v45,
    StringLiteral_20191/*"isLocal"*/,
    gameObject,
    v45->klass->vtable._24_Clear.methodPtr);
  v56 = 0;
  v48 = j_il2cpp_value_box_0(float_TypeInfo, &v56);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
    v45,
    StringLiteral_18173/*"delay"*/,
    v48,
    v45->klass->vtable._24_Clear.methodPtr);
  v55 = x;
  v49 = j_il2cpp_value_box_0(float_TypeInfo, &v55);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
    v45,
    StringLiteral_23627/*"x"*/,
    v49,
    v45->klass->vtable._24_Clear.methodPtr);
  v54 = y;
  v50 = j_il2cpp_value_box_0(float_TypeInfo, &v54);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
    v45,
    StringLiteral_23719/*"y"*/,
    v50,
    v45->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
    v45,
    StringLiteral_18341/*"easetype"*/,
    easetype,
    v45->klass->vtable._24_Clear.methodPtr);
  v53 = time;
  v51 = j_il2cpp_value_box_0(float_TypeInfo, &v53);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
    v45,
    StringLiteral_22982/*"time"*/,
    v51,
    v45->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
    v45,
    StringLiteral_21542/*"oncomplete"*/,
    StringLiteral_6042/*"EndMove"*/,
    v45->klass->vtable._24_Clear.methodPtr);
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43183064(v52, v45, 0LL);
}


void __fastcall UIScriptChara__MoveReturnPosition(UIScriptChara_o *this, float duration, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v12; // x20
  System_Int32_array **v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Object_o *v21; // x20
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42F126B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&StringLiteral_6045/*"EndMoveReturn"*/, v7, v8, v9);
    byte_42F126B = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  if ( duration <= 0.0 )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = (UnityEngine_Object_o *)TweenPosition__Begin(gameObject, duration, this->fields.basePosition, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    v13 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v12 )
      sub_B5D69C(v13, v14);
    v12[3].klass = (UnityEngine_Object_c *)v13;
    v21 = v12 + 3;
    sub_B5D560((BattleServantConfConponent_o *)v21, v13, v15, v16, v17, v18, v19, v20);
    v22 = (System_Int32_array **)StringLiteral_6045/*"EndMoveReturn"*/;
    v21->monitor = (void *)StringLiteral_6045/*"EndMoveReturn"*/;
    sub_B5D560((BattleServantConfConponent_o *)&v21->monitor, v22, v23, v24, v25, v26, v27, v28);
  }
  else
  {
LABEL_10:
    UIScriptChara__EndMoveReturn(this, v10);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Hashtable_o *v55; // x21
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x0
  UnityEngine_GameObject_o *v60; // x19
  float returnDuration; // [xsp+4h] [xbp-4Ch] BYREF
  float v62; // [xsp+8h] [xbp-48h] BYREF
  float v63; // [xsp+Ch] [xbp-44h] BYREF
  int v64; // [xsp+18h] [xbp-38h] BYREF
  char v65[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42F126D & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)startEaseType, (_DWORD)returnEaseType, method);
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&float_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_23627/*"x"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_6046/*"EndMoveReturnEaseHalf"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_18173/*"delay"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_23719/*"y"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_20191/*"isLocal"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v40, v41, v42);
    sub_B5D5C4(&iTween_TypeInfo, v43, v44, v45);
    byte_42F126D = 1;
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
    UIScriptChara__EndMoveReturn(this, v48);
    return;
  }
  this->fields.returnEaseType = returnEaseType;
  this->fields.returnDuration = time * 0.5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.returnEaseType,
    (System_Int32_array **)returnEaseType,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39706016(v55, 0LL);
  v65[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v65);
  if ( !v55 )
LABEL_12:
    sub_B5D69C(gameObject, v47);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v55->klass->vtable._23_Add.method)(
    v55,
    StringLiteral_20191/*"isLocal"*/,
    gameObject,
    v55->klass->vtable._24_Clear.methodPtr);
  v64 = 0;
  v56 = j_il2cpp_value_box_0(float_TypeInfo, &v64);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v55->klass->vtable._23_Add.method)(
    v55,
    StringLiteral_18173/*"delay"*/,
    v56,
    v55->klass->vtable._24_Clear.methodPtr);
  v63 = x;
  v57 = j_il2cpp_value_box_0(float_TypeInfo, &v63);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v55->klass->vtable._23_Add.method)(
    v55,
    StringLiteral_23627/*"x"*/,
    v57,
    v55->klass->vtable._24_Clear.methodPtr);
  v62 = y;
  v58 = j_il2cpp_value_box_0(float_TypeInfo, &v62);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v55->klass->vtable._23_Add.method)(
    v55,
    StringLiteral_23719/*"y"*/,
    v58,
    v55->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v55->klass->vtable._23_Add.method)(
    v55,
    StringLiteral_18341/*"easetype"*/,
    startEaseType,
    v55->klass->vtable._24_Clear.methodPtr);
  returnDuration = this->fields.returnDuration;
  v59 = j_il2cpp_value_box_0(float_TypeInfo, &returnDuration);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v55->klass->vtable._23_Add.method)(
    v55,
    StringLiteral_22982/*"time"*/,
    v59,
    v55->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v55->klass->vtable._23_Add.method)(
    v55,
    StringLiteral_21542/*"oncomplete"*/,
    StringLiteral_6046/*"EndMoveReturnEaseHalf"*/,
    v55->klass->vtable._24_Clear.methodPtr);
  v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43183064(v60, v55, 0LL);
}


void __fastcall UIScriptChara__MoveReturnPositionEase_39148284(
        UIScriptChara_o *this,
        float time,
        System_String_o *returnEaseType,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  const MethodInfo *v41; // x1
  System_Collections_Hashtable_o *v42; // x21
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float v50; // [xsp+4h] [xbp-3Ch] BYREF
  float y; // [xsp+8h] [xbp-38h] BYREF
  float x; // [xsp+Ch] [xbp-34h] BYREF
  int v53; // [xsp+18h] [xbp-28h] BYREF
  char v54[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42F126E & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)returnEaseType, (_DWORD)method, v4);
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&float_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23627/*"x"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_18173/*"delay"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_6045/*"EndMoveReturn"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_23719/*"y"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_20191/*"isLocal"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v35, v36, v37);
    sub_B5D5C4(&iTween_TypeInfo, v38, v39, v40);
    byte_42F126E = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)returnEaseType);
  this->fields.isMove = 1;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveReturn(this, v41);
  }
  else
  {
    v42 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_39706016(v42, 0LL);
    v54[0] = 1;
    v43 = j_il2cpp_value_box_0(bool_TypeInfo, v54);
    if ( !v42 )
      sub_B5D69C(v43, v44);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v42->klass->vtable._23_Add.method)(
      v42,
      StringLiteral_20191/*"isLocal"*/,
      v43,
      v42->klass->vtable._24_Clear.methodPtr);
    v53 = 0;
    v45 = j_il2cpp_value_box_0(float_TypeInfo, &v53);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v42->klass->vtable._23_Add.method)(
      v42,
      StringLiteral_18173/*"delay"*/,
      v45,
      v42->klass->vtable._24_Clear.methodPtr);
    x = this->fields.basePosition.fields.x;
    v46 = j_il2cpp_value_box_0(float_TypeInfo, &x);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v42->klass->vtable._23_Add.method)(
      v42,
      StringLiteral_23627/*"x"*/,
      v46,
      v42->klass->vtable._24_Clear.methodPtr);
    y = this->fields.basePosition.fields.y;
    v47 = j_il2cpp_value_box_0(float_TypeInfo, &y);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v42->klass->vtable._23_Add.method)(
      v42,
      StringLiteral_23719/*"y"*/,
      v47,
      v42->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v42->klass->vtable._23_Add.method)(
      v42,
      StringLiteral_18341/*"easetype"*/,
      returnEaseType,
      v42->klass->vtable._24_Clear.methodPtr);
    v50 = time;
    v48 = j_il2cpp_value_box_0(float_TypeInfo, &v50);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v42->klass->vtable._23_Add.method)(
      v42,
      StringLiteral_22982/*"time"*/,
      v48,
      v42->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v42->klass->vtable._23_Add.method)(
      v42,
      StringLiteral_21542/*"oncomplete"*/,
      StringLiteral_6045/*"EndMoveReturn"*/,
      v42->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_43183064(gameObject, v42, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MoveReturnPosition_39147064(
        UIScriptChara_o *this,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  int v4; // w2
  __int64 v5; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Object_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Object_o *v25; // x20
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Vector3_o v33; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_42F126C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v4, v5);
    sub_B5D5C4(&StringLiteral_6047/*"EndMoveReturnHalf"*/, v11, v12, v13);
    byte_42F126C = 1;
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
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v33.fields.x = x;
    v33.fields.y = y;
    v33.fields.z = z;
    v18 = (UnityEngine_Object_o *)TweenPosition__Begin(v17, this->fields.returnDuration, v33, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v18 )
      {
        v18[3].klass = (UnityEngine_Object_c *)gameObject;
        v25 = v18 + 3;
        sub_B5D560((BattleServantConfConponent_o *)v25, (System_Int32_array **)gameObject, v19, v20, v21, v22, v23, v24);
        v26 = (System_Int32_array **)StringLiteral_6047/*"EndMoveReturnHalf"*/;
        v25->monitor = (void *)StringLiteral_6047/*"EndMoveReturnHalf"*/;
        sub_B5D560((BattleServantConfConponent_o *)&v25->monitor, v26, v27, v28, v29, v30, v31, v32);
        return;
      }
LABEL_13:
      sub_B5D69C(gameObject, v15);
    }
  }
  UIScriptChara__EndMoveReturn(this, v16);
}


void __fastcall UIScriptChara__MoveScale(UIScriptChara_o *this, float duration, float s, const MethodInfo *method)
{
  int v4; // w2
  __int64 v5; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  UnityEngine_Component_o *baseScale; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *v22; // x20
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42F1270 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v4, v5);
    sub_B5D5C4(&StringLiteral_6048/*"EndMoveScale"*/, v9, v10, v11);
    byte_42F1270 = 1;
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
    v15 = (UnityEngine_Object_o *)TweenScale__Begin(gameObject, duration, this->fields.baseScaleSize, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    {
      baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v15 )
      {
        v15[3].klass = (UnityEngine_Object_c *)baseScale;
        v22 = v15 + 3;
        sub_B5D560((BattleServantConfConponent_o *)v22, (System_Int32_array **)baseScale, v16, v17, v18, v19, v20, v21);
        v23 = (System_Int32_array **)StringLiteral_6048/*"EndMoveScale"*/;
        v22->monitor = (void *)StringLiteral_6048/*"EndMoveScale"*/;
        sub_B5D560((BattleServantConfConponent_o *)&v22->monitor, v23, v24, v25, v26, v27, v28, v29);
        return;
      }
LABEL_12:
      sub_B5D69C(baseScale, v12);
    }
  }
  UIScriptChara__EndMoveScale(this, v12);
}


void __fastcall UIScriptChara__MoveScaleEase(
        UIScriptChara_o *this,
        float scale,
        float time,
        System_String_o *easetype,
        const MethodInfo *method)
{
  __int64 v5; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  const MethodInfo *v43; // x1
  System_Collections_Hashtable_o *v44; // x21
  UnityEngine_Component_o *baseScale; // x0
  __int64 v46; // x1
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v51; // x19
  float v52; // [xsp+0h] [xbp-40h] BYREF
  float y; // [xsp+4h] [xbp-3Ch] BYREF
  float x; // [xsp+8h] [xbp-38h] BYREF
  char v55[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42F1271 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)easetype, (_DWORD)method, v5);
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&float_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_23627/*"x"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_21544/*"oncompletetarget"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_23719/*"y"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_20191/*"isLocal"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_6048/*"EndMoveScale"*/, v37, v38, v39);
    sub_B5D5C4(&iTween_TypeInfo, v40, v41, v42);
    byte_42F1271 = 1;
  }
  UIScriptChara__StopMoveScaleTween(this, (const MethodInfo *)easetype);
  this->fields.baseScaleSize.fields.x = scale;
  this->fields.baseScaleSize.fields.y = scale;
  this->fields.isMove = 1;
  this->fields.baseScaleSize.fields.z = 1.0;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveScale(this, v43);
  }
  else
  {
    v44 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_39706016(v44, 0LL);
    v55[0] = 1;
    baseScale = (UnityEngine_Component_o *)j_il2cpp_value_box_0(bool_TypeInfo, v55);
    if ( !v44 )
      goto LABEL_11;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_Component_o *, Il2CppMethodPointer))v44->klass->vtable._23_Add.method)(
      v44,
      StringLiteral_20191/*"isLocal"*/,
      baseScale,
      v44->klass->vtable._24_Clear.methodPtr);
    x = this->fields.baseScaleSize.fields.x;
    v47 = j_il2cpp_value_box_0(float_TypeInfo, &x);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v44->klass->vtable._23_Add.method)(
      v44,
      StringLiteral_23627/*"x"*/,
      v47,
      v44->klass->vtable._24_Clear.methodPtr);
    y = this->fields.baseScaleSize.fields.y;
    v48 = j_il2cpp_value_box_0(float_TypeInfo, &y);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v44->klass->vtable._23_Add.method)(
      v44,
      StringLiteral_23719/*"y"*/,
      v48,
      v44->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v44->klass->vtable._23_Add.method)(
      v44,
      StringLiteral_18341/*"easetype"*/,
      easetype,
      v44->klass->vtable._24_Clear.methodPtr);
    v52 = time;
    v49 = j_il2cpp_value_box_0(float_TypeInfo, &v52);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v44->klass->vtable._23_Add.method)(
      v44,
      StringLiteral_22982/*"time"*/,
      v49,
      v44->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v44->klass->vtable._23_Add.method)(
      v44,
      StringLiteral_21542/*"oncomplete"*/,
      StringLiteral_6048/*"EndMoveScale"*/,
      v44->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v44->klass->vtable._23_Add.method)(
      v44,
      StringLiteral_21544/*"oncompletetarget"*/,
      gameObject,
      v44->klass->vtable._24_Clear.methodPtr);
    baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
    if ( !baseScale )
LABEL_11:
      sub_B5D69C(baseScale, v46);
    v51 = UnityEngine_Component__get_gameObject(baseScale, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ScaleTo_43188764(v51, v44, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__OnShake(UIScriptChara_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Transform_o *baseShake; // x20
  float v6; // s8
  __int64 v7; // x0
  __int64 v8; // x1
  float v9; // s0
  UnityEngine_Transform_o *v10; // x20
  int v11; // s0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42F1276 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10160/*"OnShake"*/, (_DWORD)method, v2, v3);
    byte_42F1276 = 1;
  }
  if ( this->fields.shakeCycle > 0.0
    && (this->fields.shakeTime == 0.0 || UnityEngine_Time__get_time(0LL) < this->fields.shakeTime) )
  {
    baseShake = this->fields.baseShake;
    v6 = UnityEngine_Random__Range(-this->fields.shakeX, this->fields.shakeX, 0LL);
    v9 = UnityEngine_Random__Range(-this->fields.shakeY, this->fields.shakeY, 0LL);
    if ( baseShake )
    {
      v14.fields.y = v9;
      v14.fields.z = 0.0;
      v14.fields.x = v6;
      UnityEngine_Transform__set_localPosition(baseShake, v14, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10160/*"OnShake"*/,
        this->fields.shakeCycle,
        0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(v7, v8);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_35614336(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10160/*"OnShake"*/,
    0LL);
  v10 = this->fields.baseShake;
  *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v10 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(v10, *(UnityEngine_Vector3_o *)&v11, 0LL);
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
  __int64 v3; // x3
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_42F1288 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, isSkip, (_DWORD)method, v3);
    byte_42F1288 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume(baseEffectBack, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeBackEffect_39156584(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_42F1289 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)n, isSkip, method);
    byte_42F1289 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume_18152956(baseEffectBack, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeCutin(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ;
}


void __fastcall UIScriptChara__ResumeEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_42F127F & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, isSkip, (_DWORD)method, v3);
    byte_42F127F = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume(baseEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeEffect_39155156(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_42F1280 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)n, isSkip, method);
    byte_42F1280 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Resume_18152956(baseEffect, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ProgramEffectManager__Resume(this->fields.baseSpecialEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect_39154072(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  ProgramEffectManager__Resume_25096052(this->fields.baseSpecialEffect, n, isSkip, 0LL);
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
  UIScriptChara__SetBackEffect_39156084(this, n, zero, isSkip, isPause, flip, isOnSublayer, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetBackEffect_39156084(
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
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  UnityEngine_GameObject_o *baseEffectBack; // x23
  CommonEffectLoadComponent_LoadEndHandler_o *v24; // x24
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  z = p.fields.z;
  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_42F1287 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)n, isSkip, isPause);
    sub_B5D5C4(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_UIScriptChara__SetBackEffect_g__Callback_123_0__, v20, v21, v22);
    byte_42F1287 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( isOnSublayer )
  {
    v24 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B5D694(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v24,
      0LL,
      Method_UIScriptChara__SetBackEffect_g__Callback_123_0__,
      0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v25.fields.y = y;
    v25.fields.z = z;
    v25.fields.x = x;
    CommonEffectManager__Create_18151508(baseEffectBack, n, v25, v24, isSkip, isPause, flip, 0LL);
  }
  else
  {
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v26.fields.y = y;
    v26.fields.z = z;
    v26.fields.x = x;
    CommonEffectManager__Create_18151312(baseEffectBack, n, v26, isSkip, isPause, flip, 0LL);
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
    sub_B5D69C(0LL, v8);
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
  sub_B5D560(
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
    sub_B5D69C(baseDepth, *(_QWORD *)&d);
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
  UIScriptChara__SetEffect_39154656(this, n, zero, isSkip, isPause, flip, isOnSublayer, v13);
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
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  __int64 v35; // x24
  __int64 v36; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_Object_o *v51; // x25
  CommonEffectLoadComponent_LoadEndHandler_o *v52; // x25
  UnityEngine_GameObject_o *baseEffect; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float a; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  a = particleColor.fields.a;
  b = particleColor.fields.b;
  g = particleColor.fields.g;
  r = particleColor.fields.r;
  v17 = color.fields.a;
  v18 = color.fields.b;
  v19 = color.fields.g;
  v20 = color.fields.r;
  if ( (byte_42F1265 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)effectName, isSkip, isPause);
    sub_B5D5C4(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_UIScriptChara___c__DisplayClass39_0__SetEffectEdgeBlur_b__0__, v29, v30, v31);
    sub_B5D5C4(&UIScriptChara___c__DisplayClass39_0_TypeInfo, v32, v33, v34);
    byte_42F1265 = 1;
  }
  v35 = sub_B5D694(UIScriptChara___c__DisplayClass39_0_TypeInfo);
  UIScriptChara___c__DisplayClass39_0___ctor((UIScriptChara___c__DisplayClass39_0_o *)v35, 0LL);
  if ( !v35 )
    sub_B5D69C(v36, v37);
  *(_QWORD *)(v35 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v35 + 16), (System_Int32_array **)this, v38, v39, v40, v41, v42, v43);
  *(float *)(v35 + 24) = v20;
  *(float *)(v35 + 28) = v19;
  *(float *)(v35 + 32) = v18;
  *(float *)(v35 + 36) = v17;
  *(float *)(v35 + 40) = r;
  *(float *)(v35 + 44) = g;
  *(float *)(v35 + 64) = thick;
  *(_DWORD *)(v35 + 68) = level;
  *(float *)(v35 + 48) = b;
  *(float *)(v35 + 52) = a;
  v44 = (System_Int32_array **)((__int64 (__fastcall *)(UIScriptChara_o *, Il2CppMethodPointer))this->klass->vtable._6_GetBodySubTexture.method)(
                                 this,
                                 this->klass->vtable._7_GetBody.methodPtr);
  *(_QWORD *)(v35 + 56) = v44;
  sub_B5D560((BattleServantConfConponent_o *)(v35 + 56), v44, v45, v46, v47, v48, v49, v50);
  v51 = *(UnityEngine_Object_o **)(v35 + 56);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v51, 0LL, 0LL) )
  {
    v52 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B5D694(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v52,
      (Il2CppObject *)v35,
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
    v59.fields.x = x;
    v59.fields.y = y;
    v59.fields.z = z;
    CommonEffectManager__Create_18151508(baseEffect, effectName, v59, v52, isSkip, isPause, flip, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetEffect_39154656(
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
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  UnityEngine_GameObject_o *baseEffect; // x23
  CommonEffectLoadComponent_LoadEndHandler_o *v24; // x24
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  z = p.fields.z;
  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_42F127E & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)n, isSkip, isPause);
    sub_B5D5C4(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_UIScriptChara__SetEffect_g__Callback_113_0__, v20, v21, v22);
    byte_42F127E = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( isOnSublayer )
  {
    v24 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B5D694(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(v24, 0LL, Method_UIScriptChara__SetEffect_g__Callback_113_0__, 0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v25.fields.y = y;
    v25.fields.z = z;
    v25.fields.x = x;
    CommonEffectManager__Create_18151508(baseEffect, n, v25, v24, isSkip, isPause, flip, 0LL);
  }
  else
  {
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v26.fields.y = y;
    v26.fields.z = z;
    v26.fields.x = x;
    CommonEffectManager__Create_18151312(baseEffect, n, v26, isSkip, isPause, flip, 0LL);
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
  sub_B5D560(
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
    sub_B5D69C(0LL, v7);
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
  int v4; // w2
  __int64 v5; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s3
  struct UnityEngine_Transform_o *baseRoll1; // x0
  float v20; // s11
  float v21; // s12
  float v22; // s13
  float v23; // s14
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_42F1273 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenRotation___, (_DWORD)method, v4, v5);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42F1273 = 1;
  }
  *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__Euler(0.0, 0.0, rollZ, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_14;
  v20 = v15;
  v21 = v16;
  v22 = v17;
  v23 = v18;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)baseRoll1,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
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
  v28.fields.x = v20;
  v28.fields.y = v21;
  v28.fields.z = v22;
  v28.fields.w = v23;
  UnityEngine_Transform__set_localRotation(baseRoll1, v28, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1
    || (v26.fields.x = -x,
        v26.fields.y = -y,
        v26.fields.z = -z,
        UnityEngine_Transform__set_localPosition(baseRoll1, v26, 0LL),
        (baseRoll1 = this->fields.baseRoll2) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(baseRoll1, v14);
  }
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  UnityEngine_Transform__set_localPosition(baseRoll1, v27, 0LL);
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
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  int v45; // w1
  char v46; // w2
  __int64 v47; // x3
  int v48; // w1
  char v49; // w2
  __int64 v50; // x3
  int v51; // w1
  char v52; // w2
  __int64 v53; // x3
  int v54; // s7
  UnityEngine_Object_o *CharaEffect; // x22
  bool v56; // w0
  uint32_t v57; // w0
  __int64 *v58; // x8
  const MethodInfo *v59; // x2
  int v60; // [xsp+5Ch] [xbp-24h]
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v62; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42F1279 & 1) == 0 )
  {
    v60 = v20;
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)n, isSkip, isPause);
    sub_B5D5C4(&StringLiteral_23604/*"wipe"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_16576/*"appearanceReverse"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_18085/*"darkEnemyErasure"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_23610/*"wipeTimeRe"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_18086/*"darkWipe"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_18998/*"flashErasure"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_16575/*"appearance"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_18622/*"erasure"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_18623/*"erasureReverse"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_18591/*"enemyErasure"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_23609/*"wipeTime"*/, v51, v52, v53);
    v54 = v60;
    byte_42F1279 = 1;
  }
  v61.fields.x = x;
  v61.fields.y = y;
  v61.fields.z = z;
  v62.fields.r = r;
  v62.fields.g = g;
  v62.fields.b = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v61,
                                          time,
                                          v62,
                                          range,
                                          isSkip,
                                          isPause,
                                          0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v56 = UnityEngine_Object__op_Equality(CharaEffect, 0LL, 0LL);
  if ( n && !v56 )
  {
    v57 = PrivateImplementationDetails___ComputeStringHash_21231600(n, 0LL);
    if ( v57 > 0x8D759330 )
    {
      if ( v57 > 0xD4B34506 )
      {
        switch ( v57 )
        {
          case 0xE7555186:
            v58 = &StringLiteral_23604/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v58 = &StringLiteral_18086/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v58 = &StringLiteral_16575/*"appearance"*/;
            break;
          default:
            return;
        }
      }
      else
      {
        switch ( v57 )
        {
          case 0x8DA714B6:
            v58 = &StringLiteral_23610/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v58 = &StringLiteral_18998/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v58 = &StringLiteral_18623/*"erasureReverse"*/;
            break;
          default:
            return;
        }
      }
    }
    else if ( v57 > 0x4A1132BE )
    {
      switch ( v57 )
      {
        case 0x8D759330:
          v58 = &StringLiteral_18622/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v58 = &StringLiteral_18591/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v58 = &StringLiteral_16576/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v57 == 242689791 )
    {
      v58 = &StringLiteral_23609/*"wipeTime"*/;
    }
    else
    {
      if ( v57 != 1242641086 )
        return;
      v58 = &StringLiteral_18085/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v58, 0LL) )
      UIScriptChara__StopShadowEffect(this, isSkip, v59);
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
    sub_B5D69C(this, method);
  this->fields.shakeTime = v12;
  this->fields.shakeCycle = cycle;
  this->fields.shakeX = x;
  this->fields.shakeY = y;
  UIScriptChara__OnShake(this, method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StartRoll(UIScriptChara_o *this, float duration, float rollZ, const MethodInfo *method)
{
  int v4; // w2
  __int64 v5; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x1
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s3
  struct UnityEngine_Transform_o *baseRoll1; // x0
  float v21; // s8
  float v22; // s9
  float v23; // s10
  float v24; // s11
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v27; // x20
  System_Int32_array **v28; // x0
  UnityEngine_Object_o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  bool v43; // w8
  UnityEngine_Quaternion_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v46; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_42F1274 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenRotation___, (_DWORD)method, v4, v5);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_6028/*"EndExecuteCameraRoll"*/, v12, v13, v14);
    byte_42F1274 = 1;
  }
  *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__Euler(0.0, 0.0, rollZ, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_21;
  v21 = v16;
  v22 = v17;
  v23 = v18;
  v24 = v19;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)baseRoll1,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
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
    sub_B5D69C(baseRoll1, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseRoll1, 0LL);
  v46.fields.x = v21;
  v46.fields.y = v22;
  v46.fields.z = v23;
  v46.fields.w = v24;
  v27 = (UnityEngine_Object_o *)TweenRotation__Begin(gameObject, duration, v46, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) == 0 )
    goto LABEL_18;
  if ( !v27 )
    goto LABEL_21;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v27, 0LL) )
  {
LABEL_18:
    baseRoll1 = this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v45.fields.x = v21;
      v45.fields.y = v22;
      v45.fields.z = v23;
      v45.fields.w = v24;
      UnityEngine_Transform__set_localRotation(baseRoll1, v45, 0LL);
      v43 = 0;
      goto LABEL_20;
    }
    goto LABEL_21;
  }
  v28 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v27[3].klass = (UnityEngine_Object_c *)v28;
  v29 = v27 + 3;
  sub_B5D560((BattleServantConfConponent_o *)v29, v28, v30, v31, v32, v33, v34, v35);
  v36 = (System_Int32_array **)StringLiteral_6028/*"EndExecuteCameraRoll"*/;
  v29->monitor = (void *)StringLiteral_6028/*"EndExecuteCameraRoll"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v29->monitor, v36, v37, v38, v39, v40, v41, v42);
  v43 = 1;
LABEL_20:
  this->fields.isRoll = v43;
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
  int v5; // w2
  __int64 v6; // x3
  float z; // s12
  float y; // s13
  float x; // s14
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x1
  float v23; // s1
  float v24; // s2
  float v25; // s3
  UnityEngine_Component_o *baseRoll1; // x0
  float v27; // s0
  float v28; // s9
  float v29; // s10
  float v30; // s11
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v33; // x20
  System_Int32_array **v34; // x0
  UnityEngine_Component_o *v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  bool v49; // w8
  MethodInfo v51; // [xsp+0h] [xbp-70h] BYREF
  float v52; // [xsp+5Ch] [xbp-14h]
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_42F1275 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenRotation___, (_DWORD)method, v5, v6);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_UITweener_Begin_TweenRotation___, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_6028/*"EndExecuteCameraRoll"*/, v19, v20, v21);
    byte_42F1275 = 1;
  }
  v51.methodPointer = 0LL;
  v51.invoker_method = 0LL;
  *(UnityEngine_Quaternion_o *)(&v23 - 1) = UnityEngine_Quaternion__Euler(0.0, 0.0, rollZ, 0LL);
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  v52 = v27;
  if ( !baseRoll1 )
    goto LABEL_25;
  v28 = v23;
  v29 = v24;
  v30 = v25;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      baseRoll1,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
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
                                           (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenRotation___);
  if ( !baseRoll1 )
    goto LABEL_25;
  v33 = baseRoll1;
  value = TweenRotation__get_value((TweenRotation_o *)baseRoll1, 0LL);
  v51.methodPointer = *(Il2CppMethodPointer *)&value.fields.x;
  v51.invoker_method = *(void **)&value.fields.z;
  *(UnityEngine_Vector3_o *)&v33[5].klass = UnityEngine_Quaternion__get_eulerAngles(value, &v51);
  HIDWORD(v33[5].monitor) = 0;
  v33[5].fields.m_CachedPtr = 0;
  *((float *)&v33[5].fields + 1) = rollZ;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v33, 1.0, 1, 0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v33, 0, 0LL);
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1
    || (v53.fields.x = -x,
        v53.fields.y = -y,
        v53.fields.z = -z,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v53, 0LL),
        (baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll2) == 0LL) )
  {
LABEL_25:
    sub_B5D69C(baseRoll1, v22);
  }
  v54.fields.x = x;
  v54.fields.y = y;
  v54.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v54, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0LL, 0LL)
    || !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v33, 0LL) )
  {
    baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v56.fields.x = v52;
      v56.fields.y = v28;
      v56.fields.z = v29;
      v56.fields.w = v30;
      UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)baseRoll1, v56, 0LL);
      v49 = 0;
      goto LABEL_24;
    }
    goto LABEL_25;
  }
  v34 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v33[3].klass = (UnityEngine_Component_c *)v34;
  v35 = v33 + 3;
  sub_B5D560((BattleServantConfConponent_o *)v35, v34, v36, v37, v38, v39, v40, v41);
  v42 = (System_Int32_array **)StringLiteral_6028/*"EndExecuteCameraRoll"*/;
  v35->monitor = (void *)StringLiteral_6028/*"EndExecuteCameraRoll"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v35->monitor, v42, v43, v44, v45, v46, v47, v48);
  v49 = 1;
LABEL_24:
  this->fields.isRoll = v49;
  return 1;
}


void __fastcall UIScriptChara__StartShadowEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *baseShadowEffect; // x19

  if ( (byte_42F1266 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_13718/*"Talk/bit_talk_11"*/, v5, v6, v7);
    byte_42F1266 = 1;
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
    CommonEffectManager__Create_18149712(baseShadowEffect, (System_String_o *)StringLiteral_13718/*"Talk/bit_talk_11"*/, 0, 0, 0, 0LL);
  }
}


bool __fastcall UIScriptChara__StopBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_42F128A & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, isSkip, (_DWORD)method, v3);
    byte_42F128A = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop(baseEffectBack, isSkip, 0, 0LL);
}


bool __fastcall UIScriptChara__StopBackEffect_39156836(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_42F128B & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)n, isSkip, method);
    byte_42F128B = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop_18154412(baseEffectBack, n, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopCut(UIScriptChara_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall UIScriptChara__StopEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_42F1281 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, isSkip, (_DWORD)method, v3);
    byte_42F1281 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop(baseEffect, isSkip, 0, 0LL);
}


bool __fastcall UIScriptChara__StopEffect_39155408(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_42F1282 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)n, isSkip, method);
    byte_42F1282 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__Stop_18154412(baseEffect, n, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopMoveScaleTween(UIScriptChara_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Component_o *baseScale; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_42F126F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_22194/*"scaleto"*/, v8, v9, v10);
    sub_B5D5C4(&iTween_TypeInfo, v11, v12, v13);
    byte_42F126F = 1;
  }
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject(baseScale, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43302592(gameObject, (System_String_o *)StringLiteral_22194/*"scaleto"*/, 0LL);
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_16;
  baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseScale, 0LL);
  if ( !baseScale )
    goto LABEL_16;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)baseScale,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
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
    sub_B5D69C(baseScale, method);
  }
}


void __fastcall UIScriptChara__StopMoveTween(UIScriptChara_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_42F1268 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_20844/*"moveto"*/, v8, v9, v10);
    sub_B5D5C4(&iTween_TypeInfo, v11, v12, v13);
    byte_42F1268 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43302592(gameObject, (System_String_o *)StringLiteral_20844/*"moveto"*/, 0LL);
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v15 )
    goto LABEL_14;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v15,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v15 & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
      return;
    }
LABEL_14:
    sub_B5D69C(v15, v16);
  }
}


void __fastcall UIScriptChara__StopShadowEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *baseShadowEffect; // x20

  if ( (byte_42F1267 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, isSkip, (_DWORD)method, v3);
    byte_42F1267 = 1;
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


void __fastcall UIScriptChara__StopSpecialEffect_39154100(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  ProgramEffectManager__Destory_25097792(this->fields.baseSpecialEffect, n, 0LL);
}


void __fastcall UIScriptChara___SetBackEffect_g__Callback_123_0(
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_42F128E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42F128E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !effect )
      sub_B5D69C(v5, v6);
    effect->fields._IsOnSublayer_k__BackingField = 1;
  }
}


void __fastcall UIScriptChara___SetEffect_g__Callback_113_0(CommonEffectComponent_o *effect, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_42F128D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42F128D = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !effect )
      sub_B5D69C(v5, v6);
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
  __int64 v3; // x3
  UIScriptChara___c__DisplayClass39_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UIScriptChara_o *_4__this; // x8
  struct UIScriptChara_o *v9; // x8
  UIScriptChara___c__DisplayClass39_0_o *v10; // x20
  struct UIScriptChara_o *v11; // x8
  UnityEngine_Object_o *v12; // x21
  float v13; // s0
  float v14; // s1
  float v15; // s2
  int r_low; // w8
  float v17; // s8
  float v18; // s9
  float v19; // s10
  __int64 i; // x25
  __int64 v21; // x22
  UnityEngine_Transform_o *transform; // x23
  int v23; // s2
  float v24; // s0
  float v25; // s1
  struct UnityEngine_Texture_o *maskTex; // x8
  UnityEngine_Transform_o *v27; // x23
  struct UnityEngine_Texture_o *v28; // x8
  int v29; // w24
  __int64 v30; // x0
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_42E6FC2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___,
      (_DWORD)effect,
      (_DWORD)method,
      v3);
    this = (UIScriptChara___c__DisplayClass39_0_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E6FC2 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  this = (UIScriptChara___c__DisplayClass39_0_o *)_4__this->fields.baseEffect;
  if ( !this
    || (this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          1,
                                                          (const MethodInfo_1CC47FC *)Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___),
        (v9 = v4->fields.__4__this) == 0LL)
    || (v10 = this,
        this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))v9->klass->vtable._7_GetBody.method)(
                                                          v4->fields.__4__this,
                                                          v9->klass->vtable._8_GetSizeEdgeBlur.methodPtr),
        (v11 = v4->fields.__4__this) == 0LL)
    || (v12 = (UnityEngine_Object_o *)this,
        this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))v11->klass->vtable._4_GetOffsetEdgeBlur.method)(
                                                          v4->fields.__4__this,
                                                          v11->klass->vtable._5_GetRectEdgeBlur.methodPtr),
        !v10) )
  {
LABEL_26:
    sub_B5D69C(this, effect);
  }
  r_low = LODWORD(v10->fields.color.fields.r);
  if ( r_low >= 1 )
  {
    v17 = v13;
    v18 = v14;
    v19 = v15;
    for ( i = 0LL; (int)i < r_low; ++i )
    {
      if ( (unsigned int)i >= r_low )
      {
        v30 = sub_B5D6C8(this);
        sub_B5D668(v30, 0LL);
      }
      v21 = *((_QWORD *)&v10->fields.color.fields.b + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_26;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v21, 0LL);
        this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)v21,
                                                          0LL);
        if ( !this )
          goto LABEL_26;
        *(UnityEngine_Vector3_o *)(&v23 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        if ( !transform )
          goto LABEL_26;
        v24 = v17;
        v25 = v18;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v23 - 2), 0LL);
      }
      else if ( !v21 )
      {
        goto LABEL_26;
      }
      *(struct UnityEngine_Color_o *)(v21 + 88) = v4->fields.color;
      *(struct UnityEngine_Color_o *)(v21 + 104) = v4->fields.particleColor;
      FGOEdgeBlur__set_Texture((FGOEdgeBlur_o *)v21, v4->fields.maskTex, 0LL);
      this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)v21,
                                                        0LL);
      maskTex = v4->fields.maskTex;
      if ( !maskTex )
        goto LABEL_26;
      v27 = (UnityEngine_Transform_o *)this;
      this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))maskTex->klass->vtable._4_get_width.method)(
                                                        v4->fields.maskTex,
                                                        maskTex->klass->vtable._5_set_width.methodPtr);
      v28 = v4->fields.maskTex;
      if ( !v28 )
        goto LABEL_26;
      v29 = (int)this;
      this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v28->klass->vtable._6_get_height.method)(
                                                        v4->fields.maskTex,
                                                        v28->klass->vtable._7_set_height.methodPtr);
      if ( !v27 )
        goto LABEL_26;
      v31.fields.y = (float)(int)this;
      v31.fields.x = (float)v29;
      v31.fields.z = 0.0;
      UnityEngine_Transform__set_localScale(v27, v31, 0LL);
      FGOEdgeBlur__set_Thickness((FGOEdgeBlur_o *)v21, v4->fields.thick, 0LL);
      FGOEdgeBlur__set_Level((FGOEdgeBlur_o *)v21, v4->fields.level, 0LL);
      this = (UIScriptChara___c__DisplayClass39_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_26;
      v33.fields.m_XMin = ((float (__fastcall *)(UIScriptChara___c__DisplayClass39_0_o *, void *))this->klass[1]._1.namespaze)(
                            this,
                            this->klass[1]._1.byval_arg.data);
      FGOEdgeBlur__set_Rect((FGOEdgeBlur_o *)v21, v33, 0LL);
      v32.fields.x = v17;
      v32.fields.y = v18;
      v32.fields.z = v19;
      FGOEdgeBlur__setMaskImagePosition((FGOEdgeBlur_o *)v21, v32, 0LL);
      r_low = LODWORD(v10->fields.color.fields.r);
    }
  }
}