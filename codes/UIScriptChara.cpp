void __fastcall UIScriptChara___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FE0AA & 1) == 0 )
  {
    sub_1B640C8(&UIScriptChara_TypeInfo, v1);
    byte_49FE0AA = 1;
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
  if ( (byte_49FE082 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17271/*"blink"*/, kind);
    sub_1B640C8(&StringLiteral_19287/*"fade"*/, v13);
    sub_1B640C8(&StringLiteral_18266/*"crossFade"*/, v14);
    byte_49FE082 = 1;
  }
  if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_19287/*"fade"*/, 0LL) )
  {
    v15 = 2LL;
  }
  else if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_17271/*"blink"*/, 0LL) )
  {
    v15 = 3LL;
  }
  else if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_18266/*"crossFade"*/, 0LL) )
  {
    v15 = 4LL;
  }
  else
  {
    v15 = 1LL;
  }
  ((void (__fastcall *)(UIScriptChara_o *, __int64, System_String_o *, _QWORD, System_Action_o *, Il2CppMethodPointer, long double))this->klass->vtable._10_ChangeCharacter.method)(
    this,
    v15,
    imageName,
    (unsigned int)faceType,
    callback,
    this->klass->vtable._11_SetCharacter.methodPtr,
    v10);
}


void __fastcall UIScriptChara__ChangeCharacter_41398356(
        UIScriptChara_o *this,
        int32_t kind,
        float speed,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct System_Action_o **p_changeCallback; // x20
  int v10; // w8
  int v11; // w9

  this->fields.changeCallback = callback;
  p_changeCallback = &this->fields.changeCallback;
  this->fields.changeKind = kind;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.changeCallback,
    (int32_t)callback,
    (int32_t)imageName,
    faceType);
  v10 = *((_DWORD *)p_changeCallback + 2);
  v11 = *((_DWORD *)p_changeCallback - 8);
  *((float *)p_changeCallback - 7) = speed;
  *(struct System_Action_o **)((char *)p_changeCallback - 20) = 0LL;
  *((_DWORD *)p_changeCallback + 2) = v10 == 0;
  *((_DWORD *)p_changeCallback + 3) = v10;
  *((_DWORD *)p_changeCallback - 6) = 0;
  if ( v11 == 3 )
    this->fields.changeRange = fminf(speed, 10.0) / 5.0;
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
  {
    sub_1B64324(gameObject);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.basePosition, 0LL);
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__EndMoveReturnEaseHalf(UIScriptChara_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UIScriptChara__MoveReturnPositionEase_41403024(this, this->fields.returnDuration, this->fields.returnEaseType, v2);
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
    sub_1B64324(0LL);
  UnityEngine_Transform__set_localScale(baseScale, this->fields.baseScaleSize, 0LL);
  this->fields.isMove = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__EndSet(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseSpecialEffect; // x0
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float v7; // s2
  float v8; // s10
  float v9; // s2
  float v10; // s10
  float v11; // s2
  float v12; // s10
  float v13; // s2
  float v14; // s10
  int32_t v15; // w2
  int32_t v16; // w3
  ServantStatusBattleListViewItem_o *p_setCallback; // x19
  struct System_Action_o *v18; // x20
  struct System_Action_o *setCallback; // t1
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_49F700A )
  {
    sub_1B640C8(&UnityEngine_Vector2_TypeInfo, method);
    byte_49F700A = 1;
  }
  baseSpecialEffect = this->fields.baseSpecialEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)(&v7 - 2) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)baseSpecialEffect,
                                          0LL);
  baseSpecialEffect = this->fields.baseSpecialEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v8 = v7;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = v8;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v20, 0LL);
  baseSpecialEffect = this->fields.baseEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)(&v9 - 2) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)baseSpecialEffect,
                                          0LL);
  baseSpecialEffect = this->fields.baseEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v10 = v9;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = v10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v21, 0LL);
  baseSpecialEffect = this->fields.baseEffectBack;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)(&v11 - 2) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseSpecialEffect,
                                           0LL);
  baseSpecialEffect = this->fields.baseEffectBack;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v12 = v11;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = v12;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v22, 0LL);
  baseSpecialEffect = this->fields.baseShadowEffect;
  if ( !baseSpecialEffect
    || (baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v13 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)baseSpecialEffect,
                                                 0LL),
        (baseSpecialEffect = this->fields.baseShadowEffect) == 0LL)
    || (v14 = v13,
        (baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL)) == 0LL) )
  {
LABEL_22:
    sub_1B64324(baseSpecialEffect);
  }
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = v14;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v23, 0LL);
  setCallback = this->fields.setCallback;
  p_setCallback = (ServantStatusBattleListViewItem_o *)&this->fields.setCallback;
  v18 = setCallback;
  if ( setCallback )
  {
    p_setCallback->klass = 0LL;
    sub_1B6406C(p_setCallback, 0, v15, v16);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v18->fields.m_target)(
      v18->fields.original_method_info,
      *(_QWORD *)&v18->fields.extra_arg);
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
    sub_1B64324(0LL);
  localPosition = UnityEngine_Transform__get_localPosition(baseDepth, 0LL);
  return localPosition.fields.z;
}


UnityEngine_Rect_o __fastcall UIScriptChara__GetHighRectEdgeBlur(UIScriptChara_o *this, const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = 0.0;
  v3 = 0.0;
  v4 = 1.0;
  v5 = 1.0;
  result.fields.m_Height = v5;
  result.fields.m_Width = v4;
  result.fields.m_YMin = v3;
  result.fields.m_XMin = v2;
  return result;
}


UnityEngine_Vector3_o __fastcall UIScriptChara__GetOffsetEdgeBlur(UIScriptChara_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F7111 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Rect_o __fastcall UIScriptChara__GetRectEdgeBlur(UIScriptChara_o *this, const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = 0.0;
  v3 = 0.0;
  v4 = 1.0;
  v5 = 1.0;
  result.fields.m_Height = v5;
  result.fields.m_Width = v4;
  result.fields.m_YMin = v3;
  result.fields.m_XMin = v2;
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


void __fastcall UIScriptChara__InitRoll(UIScriptChara_o *this, const MethodInfo *method)
{
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F7111 = 1;
  }
  UIScriptChara__SetRoll(this, 0.0, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, method);
}


bool __fastcall UIScriptChara__IsBackEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_49FE0A1 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, method);
    byte_49FE0A1 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy(baseEffectBack, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_49FE0A3 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, method);
    byte_49FE0A3 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart(baseEffectBack, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffectStart_41410396(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_49FE0A4 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, n);
    byte_49FE0A4 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart_40321368(baseEffectBack, n, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffect_41410196(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_49FE0A2 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, n);
    byte_49FE0A2 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy_40320452(baseEffectBack, n, 0LL);
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
  bool v8; // w21
  unsigned __int64 v9; // x22
  ProgramEffectComponent_o **m_Items; // x25
  ProgramEffectComponent_o *v11; // x8
  __int64 methodPtr_low; // x11
  ProgramEffectComponent_o *v13; // x20

  if ( (byte_49FE095 & 1) == 0 )
  {
    sub_1B640C8(&CharaCutEffectComponent_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FE095 = 1;
  }
  v4 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v4 )
LABEL_21:
    sub_1B64324(v4);
  v6 = *(_QWORD *)&v4->max_length;
  v7 = v4;
  v8 = (int)v6 > 0;
  if ( (int)v6 >= 1 )
  {
    v9 = 0LL;
    m_Items = v4->m_Items;
    do
    {
      if ( v9 >= (unsigned int)v6 )
        sub_1B6432C(v4, v5);
      v11 = m_Items[v9];
      if ( v11
        && (methodPtr_low = LOBYTE(CharaCutEffectComponent_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v11->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (CharaCutEffectComponent_c *)v11->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaCutEffectComponent_TypeInfo )
          v13 = m_Items[v9];
        else
          v13 = 0LL;
      }
      else
      {
        v13 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v4 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_21;
        if ( LOBYTE(v13[1].fields.leftAnchor) )
          break;
      }
      LODWORD(v6) = v7->max_length;
      v8 = (__int64)++v9 < (int)v6;
    }
    while ( (__int64)v9 < (int)v6 );
  }
  return v8;
}


bool __fastcall UIScriptChara__IsCutStart(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ProgramEffectComponent_array *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  ProgramEffectComponent_array *v7; // x19
  bool v8; // w21
  unsigned __int64 v9; // x22
  ProgramEffectComponent_o **m_Items; // x25
  ProgramEffectComponent_o *v11; // x8
  __int64 methodPtr_low; // x11
  ProgramEffectComponent_o *v13; // x20

  if ( (byte_49FE096 & 1) == 0 )
  {
    sub_1B640C8(&CharaCutEffectComponent_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FE096 = 1;
  }
  v4 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v4 )
LABEL_21:
    sub_1B64324(v4);
  v6 = *(_QWORD *)&v4->max_length;
  v7 = v4;
  v8 = (int)v6 > 0;
  if ( (int)v6 >= 1 )
  {
    v9 = 0LL;
    m_Items = v4->m_Items;
    do
    {
      if ( v9 >= (unsigned int)v6 )
        sub_1B6432C(v4, v5);
      v11 = m_Items[v9];
      if ( v11
        && (methodPtr_low = LOBYTE(CharaCutEffectComponent_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v11->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (CharaCutEffectComponent_c *)v11->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaCutEffectComponent_TypeInfo )
          v13 = m_Items[v9];
        else
          v13 = 0LL;
      }
      else
      {
        v13 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v4 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_21;
        if ( !v13->fields.isStart )
          break;
      }
      LODWORD(v6) = v7->max_length;
      v8 = (__int64)++v9 < (int)v6;
    }
    while ( (__int64)v9 < (int)v6 );
  }
  return !v8;
}


bool __fastcall UIScriptChara__IsEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_49FE098 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, method);
    byte_49FE098 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy(baseEffect, 0LL);
}


bool __fastcall UIScriptChara__IsEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_49FE09A & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, method);
    byte_49FE09A = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart(baseEffect, 0LL);
}


bool __fastcall UIScriptChara__IsEffectStart_41409060(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_49FE09B & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, n);
    byte_49FE09B = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart_40321368(baseEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsEffect_41408860(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_49FE099 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, n);
    byte_49FE099 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy_40320452(baseEffect, n, 0LL);
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


bool __fastcall UIScriptChara__IsSpecialEffectStart_41407864(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsStart_40345248(this->fields.baseSpecialEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsSpecialEffect_41407840(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsBusy_40344580(this->fields.baseSpecialEffect, n, 0LL);
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
  UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_49FE090 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, kind);
    sub_1B640C8(&StringLiteral_5951/*"EndMoveAttack"*/, v11);
    sub_1B640C8(&StringLiteral_22036/*"normal"*/, v12);
    byte_49FE090 = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)kind);
  this->fields.isMove = 1;
  if ( duration <= 0.0 )
    duration = 0.5;
  System_String__op_Equality(kind, (System_String_o *)StringLiteral_22036/*"normal"*/, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  v14 = TweenPosition__Begin(gameObject, duration, v23, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( v14 )
    {
      v14->fields.method = 1;
      v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v14->fields.eventReceiver = v16;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14->fields.eventReceiver, (int32_t)v16, v17, v18);
      v19 = StringLiteral_5951/*"EndMoveAttack"*/;
      v14->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5951/*"EndMoveAttack"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14->fields.callWhenFinished, v19, v20, v21);
      return;
    }
LABEL_13:
    sub_1B64324(transform);
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_13;
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v22, 0LL);
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
  TweenPosition_o *v11; // x20
  UnityEngine_GameObject_o *transform; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_49FE087 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_5949/*"EndMove"*/, v9);
    byte_49FE087 = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  if ( duration > 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v19.fields.x = x;
    v19.fields.y = y;
    v19.fields.z = z;
    v11 = TweenPosition__Begin(gameObject, duration, v19, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
    {
      transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v11 )
      {
        v11->fields.eventReceiver = transform;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->fields.eventReceiver, (int32_t)transform, v13, v14);
        v15 = StringLiteral_5949/*"EndMove"*/;
        v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5949/*"EndMove"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->fields.callWhenFinished, v15, v16, v17);
        return;
      }
LABEL_12:
      sub_1B64324(transform);
    }
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_12;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_12;
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v18, 0LL);
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
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Hashtable_o *v24; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x0
  UnityEngine_GameObject_o *v30; // x19
  float v31; // [xsp+Ch] [xbp-64h] BYREF
  float v32; // [xsp+10h] [xbp-60h] BYREF
  float v33; // [xsp+14h] [xbp-5Ch] BYREF
  int v34; // [xsp+18h] [xbp-58h] BYREF
  char v35[4]; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  z = vector.fields.z;
  y = vector.fields.y;
  x = vector.fields.x;
  if ( (byte_49FE088 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, easetype);
    sub_1B640C8(&System_Collections_Hashtable_TypeInfo, v11);
    sub_1B640C8(&float_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_24644/*"x"*/, v13);
    sub_1B640C8(&StringLiteral_18682/*"easetype"*/, v14);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v15);
    sub_1B640C8(&StringLiteral_5949/*"EndMove"*/, v16);
    sub_1B640C8(&StringLiteral_18479/*"delay"*/, v17);
    sub_1B640C8(&StringLiteral_24748/*"y"*/, v18);
    sub_1B640C8(&StringLiteral_20716/*"isLocal"*/, v19);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v20);
    sub_1B640C8(&iTween_TypeInfo, v21);
    byte_49FE088 = 1;
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
        v36.fields.x = x;
        v36.fields.y = y;
        v36.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v36, 0LL);
        this->fields.isMove = 0;
        return;
      }
    }
LABEL_11:
    sub_1B64324(gameObject);
  }
  v24 = (System_Collections_Hashtable_o *)sub_1B64314(System_Collections_Hashtable_TypeInfo, v22, v23);
  System_Collections_Hashtable___ctor_61954820(v24, 0LL);
  v35[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v35);
  if ( !v24 )
    goto LABEL_11;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
    v24,
    StringLiteral_20716/*"isLocal"*/,
    gameObject,
    v24->klass->vtable._24_Clear.methodPtr);
  v34 = 0;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v34);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
    v24,
    StringLiteral_18479/*"delay"*/,
    v26,
    v24->klass->vtable._24_Clear.methodPtr);
  v33 = x;
  v27 = j_il2cpp_value_box_0(float_TypeInfo, &v33);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
    v24,
    StringLiteral_24644/*"x"*/,
    v27,
    v24->klass->vtable._24_Clear.methodPtr);
  v32 = y;
  v28 = j_il2cpp_value_box_0(float_TypeInfo, &v32);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
    v24,
    StringLiteral_24748/*"y"*/,
    v28,
    v24->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
    v24,
    StringLiteral_18682/*"easetype"*/,
    easetype,
    v24->klass->vtable._24_Clear.methodPtr);
  v31 = time;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
    v24,
    StringLiteral_23830/*"time"*/,
    v29,
    v24->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
    v24,
    StringLiteral_22185/*"oncomplete"*/,
    StringLiteral_5949/*"EndMove"*/,
    v24->klass->vtable._24_Clear.methodPtr);
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_59912984(v30, v24, 0LL);
}


void __fastcall UIScriptChara__MoveReturnPosition(UIScriptChara_o *this, float duration, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TweenPosition_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FE089 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_5952/*"EndMoveReturn"*/, v5);
    byte_49FE089 = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  if ( duration <= 0.0 )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TweenPosition__Begin(gameObject, duration, this->fields.basePosition, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
  {
    v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v8 )
      sub_1B64324(v9);
    v8->fields.eventReceiver = v9;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.eventReceiver, (int32_t)v9, v10, v11);
    v12 = StringLiteral_5952/*"EndMoveReturn"*/;
    v8->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5952/*"EndMoveReturn"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.callWhenFinished, v12, v13, v14);
  }
  else
  {
LABEL_9:
    UIScriptChara__EndMoveReturn(this, v6);
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
  const MethodInfo *v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Hashtable_o *v30; // x21
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x0
  UnityEngine_GameObject_o *v35; // x19
  float returnDuration; // [xsp+Ch] [xbp-54h] BYREF
  float v37; // [xsp+10h] [xbp-50h] BYREF
  float v38; // [xsp+14h] [xbp-4Ch] BYREF
  int v39; // [xsp+18h] [xbp-48h] BYREF
  char v40[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_49FE08B & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, startEaseType);
    sub_1B640C8(&System_Collections_Hashtable_TypeInfo, v13);
    sub_1B640C8(&float_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_24644/*"x"*/, v15);
    sub_1B640C8(&StringLiteral_18682/*"easetype"*/, v16);
    sub_1B640C8(&StringLiteral_5953/*"EndMoveReturnEaseHalf"*/, v17);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v18);
    sub_1B640C8(&StringLiteral_18479/*"delay"*/, v19);
    sub_1B640C8(&StringLiteral_24748/*"y"*/, v20);
    sub_1B640C8(&StringLiteral_20716/*"isLocal"*/, v21);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v22);
    sub_1B640C8(&iTween_TypeInfo, v23);
    byte_49FE08B = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)startEaseType);
  this->fields.isMove = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveReturn(this, v25);
    return;
  }
  this->fields.returnEaseType = returnEaseType;
  this->fields.returnDuration = time * 0.5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.returnEaseType, (int32_t)returnEaseType, v26, v27);
  v30 = (System_Collections_Hashtable_o *)sub_1B64314(System_Collections_Hashtable_TypeInfo, v28, v29);
  System_Collections_Hashtable___ctor_61954820(v30, 0LL);
  v40[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v40);
  if ( !v30 )
LABEL_11:
    sub_1B64324(gameObject);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_20716/*"isLocal"*/,
    gameObject,
    v30->klass->vtable._24_Clear.methodPtr);
  v39 = 0;
  v31 = j_il2cpp_value_box_0(float_TypeInfo, &v39);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_18479/*"delay"*/,
    v31,
    v30->klass->vtable._24_Clear.methodPtr);
  v38 = x;
  v32 = j_il2cpp_value_box_0(float_TypeInfo, &v38);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_24644/*"x"*/,
    v32,
    v30->klass->vtable._24_Clear.methodPtr);
  v37 = y;
  v33 = j_il2cpp_value_box_0(float_TypeInfo, &v37);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_24748/*"y"*/,
    v33,
    v30->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_18682/*"easetype"*/,
    startEaseType,
    v30->klass->vtable._24_Clear.methodPtr);
  returnDuration = this->fields.returnDuration;
  v34 = j_il2cpp_value_box_0(float_TypeInfo, &returnDuration);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_23830/*"time"*/,
    v34,
    v30->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_22185/*"oncomplete"*/,
    StringLiteral_5953/*"EndMoveReturnEaseHalf"*/,
    v30->klass->vtable._24_Clear.methodPtr);
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_59912984(v35, v30, 0LL);
}


void __fastcall UIScriptChara__MoveReturnPositionEase_41403024(
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
  const MethodInfo *v18; // x1
  __int64 v19; // x2
  System_Collections_Hashtable_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float v27; // [xsp+Ch] [xbp-44h] BYREF
  float y; // [xsp+10h] [xbp-40h] BYREF
  float x; // [xsp+14h] [xbp-3Ch] BYREF
  int v30; // [xsp+18h] [xbp-38h] BYREF
  char v31[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_49FE08C & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, returnEaseType);
    sub_1B640C8(&System_Collections_Hashtable_TypeInfo, v7);
    sub_1B640C8(&float_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_24644/*"x"*/, v9);
    sub_1B640C8(&StringLiteral_18682/*"easetype"*/, v10);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v11);
    sub_1B640C8(&StringLiteral_18479/*"delay"*/, v12);
    sub_1B640C8(&StringLiteral_5952/*"EndMoveReturn"*/, v13);
    sub_1B640C8(&StringLiteral_24748/*"y"*/, v14);
    sub_1B640C8(&StringLiteral_20716/*"isLocal"*/, v15);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v16);
    sub_1B640C8(&iTween_TypeInfo, v17);
    byte_49FE08C = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)returnEaseType);
  this->fields.isMove = 1;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveReturn(this, v18);
  }
  else
  {
    v20 = (System_Collections_Hashtable_o *)sub_1B64314(System_Collections_Hashtable_TypeInfo, v18, v19);
    System_Collections_Hashtable___ctor_61954820(v20, 0LL);
    v31[0] = 1;
    v21 = j_il2cpp_value_box_0(bool_TypeInfo, v31);
    if ( !v20 )
      sub_1B64324(v21);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v20->klass->vtable._23_Add.method)(
      v20,
      StringLiteral_20716/*"isLocal"*/,
      v21,
      v20->klass->vtable._24_Clear.methodPtr);
    v30 = 0;
    v22 = j_il2cpp_value_box_0(float_TypeInfo, &v30);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v20->klass->vtable._23_Add.method)(
      v20,
      StringLiteral_18479/*"delay"*/,
      v22,
      v20->klass->vtable._24_Clear.methodPtr);
    x = this->fields.basePosition.fields.x;
    v23 = j_il2cpp_value_box_0(float_TypeInfo, &x);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v20->klass->vtable._23_Add.method)(
      v20,
      StringLiteral_24644/*"x"*/,
      v23,
      v20->klass->vtable._24_Clear.methodPtr);
    y = this->fields.basePosition.fields.y;
    v24 = j_il2cpp_value_box_0(float_TypeInfo, &y);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v20->klass->vtable._23_Add.method)(
      v20,
      StringLiteral_24748/*"y"*/,
      v24,
      v20->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v20->klass->vtable._23_Add.method)(
      v20,
      StringLiteral_18682/*"easetype"*/,
      returnEaseType,
      v20->klass->vtable._24_Clear.methodPtr);
    v27 = time;
    v25 = j_il2cpp_value_box_0(float_TypeInfo, &v27);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v20->klass->vtable._23_Add.method)(
      v20,
      StringLiteral_23830/*"time"*/,
      v25,
      v20->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v20->klass->vtable._23_Add.method)(
      v20,
      StringLiteral_22185/*"oncomplete"*/,
      StringLiteral_5952/*"EndMoveReturn"*/,
      v20->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_59912984(gameObject, v20, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MoveReturnPosition_41401828(
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
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *v12; // x0
  TweenPosition_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Vector3_o v19; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_49FE08A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_5954/*"EndMoveReturnHalf"*/, v9);
    byte_49FE08A = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( duration > 0.0 )
  {
    this->fields.returnDuration = duration * 0.5;
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v19.fields.x = x;
    v19.fields.y = y;
    v19.fields.z = z;
    v13 = TweenPosition__Begin(v12, this->fields.returnDuration, v19, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v13 )
      {
        v13->fields.eventReceiver = gameObject;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13->fields.eventReceiver, (int32_t)gameObject, v14, v15);
        v16 = StringLiteral_5954/*"EndMoveReturnHalf"*/;
        v13->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5954/*"EndMoveReturnHalf"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13->fields.callWhenFinished, v16, v17, v18);
        return;
      }
LABEL_12:
      sub_1B64324(gameObject);
    }
  }
  UIScriptChara__EndMoveReturn(this, v11);
}


void __fastcall UIScriptChara__MoveScale(UIScriptChara_o *this, float duration, float s, const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  UnityEngine_Component_o *baseScale; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TweenScale_o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49FE08E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_5955/*"EndMoveScale"*/, v7);
    byte_49FE08E = 1;
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
      goto LABEL_11;
    gameObject = UnityEngine_Component__get_gameObject(baseScale, 0LL);
    v11 = TweenScale__Begin(gameObject, duration, this->fields.baseScaleSize, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
    {
      baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v11 )
      {
        v11->fields.eventReceiver = (struct UnityEngine_GameObject_o *)baseScale;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->fields.eventReceiver, (int32_t)baseScale, v12, v13);
        v14 = StringLiteral_5955/*"EndMoveScale"*/;
        v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5955/*"EndMoveScale"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->fields.callWhenFinished, v14, v15, v16);
        return;
      }
LABEL_11:
      sub_1B64324(baseScale);
    }
  }
  UIScriptChara__EndMoveScale(this, v8);
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
  __int64 v19; // x1
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  System_Collections_Hashtable_o *v22; // x21
  UnityEngine_Component_o *baseScale; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v28; // x19
  float v29; // [xsp+0h] [xbp-50h] BYREF
  float y; // [xsp+4h] [xbp-4Ch] BYREF
  float x; // [xsp+8h] [xbp-48h] BYREF
  char v32[4]; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FE08F & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, easetype);
    sub_1B640C8(&System_Collections_Hashtable_TypeInfo, v9);
    sub_1B640C8(&float_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_24644/*"x"*/, v11);
    sub_1B640C8(&StringLiteral_18682/*"easetype"*/, v12);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v13);
    sub_1B640C8(&StringLiteral_22187/*"oncompletetarget"*/, v14);
    sub_1B640C8(&StringLiteral_24748/*"y"*/, v15);
    sub_1B640C8(&StringLiteral_20716/*"isLocal"*/, v16);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v17);
    sub_1B640C8(&StringLiteral_5955/*"EndMoveScale"*/, v18);
    sub_1B640C8(&iTween_TypeInfo, v19);
    byte_49FE08F = 1;
  }
  UIScriptChara__StopMoveScaleTween(this, (const MethodInfo *)easetype);
  this->fields.baseScaleSize.fields.x = scale;
  this->fields.baseScaleSize.fields.y = scale;
  this->fields.isMove = 1;
  this->fields.baseScaleSize.fields.z = 1.0;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveScale(this, v20);
  }
  else
  {
    v22 = (System_Collections_Hashtable_o *)sub_1B64314(System_Collections_Hashtable_TypeInfo, v20, v21);
    System_Collections_Hashtable___ctor_61954820(v22, 0LL);
    v32[0] = 1;
    baseScale = (UnityEngine_Component_o *)j_il2cpp_value_box_0(bool_TypeInfo, v32);
    if ( !v22 )
      goto LABEL_10;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_Component_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
      v22,
      StringLiteral_20716/*"isLocal"*/,
      baseScale,
      v22->klass->vtable._24_Clear.methodPtr);
    x = this->fields.baseScaleSize.fields.x;
    v24 = j_il2cpp_value_box_0(float_TypeInfo, &x);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
      v22,
      StringLiteral_24644/*"x"*/,
      v24,
      v22->klass->vtable._24_Clear.methodPtr);
    y = this->fields.baseScaleSize.fields.y;
    v25 = j_il2cpp_value_box_0(float_TypeInfo, &y);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
      v22,
      StringLiteral_24748/*"y"*/,
      v25,
      v22->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
      v22,
      StringLiteral_18682/*"easetype"*/,
      easetype,
      v22->klass->vtable._24_Clear.methodPtr);
    v29 = time;
    v26 = j_il2cpp_value_box_0(float_TypeInfo, &v29);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
      v22,
      StringLiteral_23830/*"time"*/,
      v26,
      v22->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
      v22,
      StringLiteral_22185/*"oncomplete"*/,
      StringLiteral_5955/*"EndMoveScale"*/,
      v22->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
      v22,
      StringLiteral_22187/*"oncompletetarget"*/,
      gameObject,
      v22->klass->vtable._24_Clear.methodPtr);
    baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
    if ( !baseScale )
LABEL_10:
      sub_1B64324(baseScale);
    v28 = UnityEngine_Component__get_gameObject(baseScale, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ScaleTo_59918512(v28, v22, 0LL);
  }
}


void __fastcall UIScriptChara__OnShake(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseShake; // x20
  float v4; // s8
  __int64 v5; // x0
  float v6; // s0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE094 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9909/*"OnShake"*/, method);
    byte_49FE094 = 1;
  }
  if ( this->fields.shakeCycle > 0.0
    && (this->fields.shakeTime == 0.0 || UnityEngine_Time__get_time(0LL) < this->fields.shakeTime) )
  {
    baseShake = this->fields.baseShake;
    v4 = UnityEngine_Random__Range(-this->fields.shakeX, this->fields.shakeX, 0LL);
    v6 = UnityEngine_Random__Range(-this->fields.shakeY, this->fields.shakeY, 0LL);
    if ( baseShake )
    {
      v9.fields.y = v6;
      v9.fields.z = 0.0;
      v9.fields.x = v4;
      UnityEngine_Transform__set_localPosition(baseShake, v9, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9909/*"OnShake"*/,
        this->fields.shakeCycle,
        0LL);
      return;
    }
LABEL_12:
    sub_1B64324(v5);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_69112316(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9909/*"OnShake"*/,
    0LL);
  v8 = this->fields.baseShake;
  if ( !byte_49F7111 )
  {
    v5 = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v7);
    byte_49F7111 = 1;
  }
  if ( !v8 )
    goto LABEL_12;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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

  if ( (byte_49FE0A6 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, isSkip);
    byte_49FE0A6 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume(baseEffectBack, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeBackEffect_41411092(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_49FE0A7 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, n);
    byte_49FE0A7 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume_40327144(baseEffectBack, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeCutin(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ResumeEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_49FE09D & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, isSkip);
    byte_49FE09D = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume(baseEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeEffect_41409756(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_49FE09E & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, n);
    byte_49FE09E = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume_40327144(baseEffect, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ProgramEffectManager__Resume(this->fields.baseSpecialEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect_41408728(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  ProgramEffectManager__Resume_40347648(this->fields.baseSpecialEffect, n, isSkip, 0LL);
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
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, n);
    byte_49F7111 = 1;
  }
  UIScriptChara__SetBackEffect_41410644(
    this,
    n,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    isSkip,
    isPause,
    flip,
    isOnSublayer,
    method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetBackEffect_41410644(
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
  if ( (byte_49FE0A5 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, n);
    sub_1B640C8(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v17);
    sub_1B640C8(&Method_UIScriptChara__SetBackEffect_g__Callback_124_0__, v18);
    byte_49FE0A5 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( isOnSublayer )
  {
    v20 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1B64314(
                                                          CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                          n,
                                                          isSkip);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v20,
      0LL,
      Method_UIScriptChara__SetBackEffect_g__Callback_124_0__,
      0LL);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v21.fields.y = y;
    v21.fields.z = z;
    v21.fields.x = x;
    CommonEffectManager__Create_40325656(baseEffectBack, n, v21, v20, isSkip, isPause, flip, 0LL);
  }
  else
  {
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v22.fields.y = y;
    v22.fields.z = z;
    v22.fields.x = x;
    CommonEffectManager__Create_40325464(baseEffectBack, n, v22, isSkip, isPause, flip, 0LL);
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
  UIScriptChara__StopMoveTween(this, method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
  if ( !transform )
    sub_1B64324(0LL);
  v8.fields.x = x;
  v8.fields.y = y;
  v8.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v8, 0LL);
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__SetCharacter(
        UIScriptChara_o *this,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  this->fields.setCallback = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.setCallback,
    (int32_t)callback,
    faceType,
    (int32_t)callback);
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
    sub_1B64324(baseDepth);
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
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, n);
    byte_49F7111 = 1;
  }
  UIScriptChara__SetEffect_41409308(
    this,
    n,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    isSkip,
    isPause,
    flip,
    isOnSublayer,
    method);
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
  __int64 v27; // x25
  __int64 v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  UnityEngine_Object_o *v34; // x24
  __int64 v35; // x1
  __int64 v36; // x2
  CommonEffectLoadComponent_LoadEndHandler_o *v37; // x24
  __int64 v38; // x1
  UnityEngine_GameObject_o *baseEffect; // x23
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  float a; // [xsp+4Ch] [xbp-44h]
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  a = particleColor.fields.a;
  b = particleColor.fields.b;
  g = particleColor.fields.g;
  r = particleColor.fields.r;
  v17 = color.fields.a;
  v18 = color.fields.b;
  v19 = color.fields.g;
  v20 = color.fields.r;
  if ( (byte_49FE083 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, effectName);
    sub_1B640C8(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v23);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v24);
    sub_1B640C8(&Method_UIScriptChara___c__DisplayClass39_0__SetEffectEdgeBlur_b__0__, v25);
    sub_1B640C8(&UIScriptChara___c__DisplayClass39_0_TypeInfo, v26);
    byte_49FE083 = 1;
  }
  v27 = sub_1B64314(UIScriptChara___c__DisplayClass39_0_TypeInfo, effectName, isSkip);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    sub_1B64324(v28);
  *(_QWORD *)(v27 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 16), (int32_t)this, v29, v30);
  *(float *)(v27 + 24) = v20;
  *(float *)(v27 + 28) = v19;
  *(float *)(v27 + 32) = v18;
  *(float *)(v27 + 36) = v17;
  *(float *)(v27 + 40) = r;
  *(float *)(v27 + 44) = g;
  *(float *)(v27 + 48) = b;
  *(float *)(v27 + 52) = a;
  *(float *)(v27 + 64) = thick;
  *(_DWORD *)(v27 + 68) = level;
  v31 = ((__int64 (__fastcall *)(UIScriptChara_o *, Il2CppMethodPointer))this->klass->vtable._7_GetBodySubTexture.method)(
          this,
          this->klass->vtable._8_GetBody.methodPtr);
  *(_QWORD *)(v27 + 56) = v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 56), v31, v32, v33);
  v34 = *(UnityEngine_Object_o **)(v27 + 56);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v34, 0LL, 0LL) )
  {
    v37 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1B64314(
                                                          CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                          v35,
                                                          v36);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v37,
      (Il2CppObject *)v27,
      Method_UIScriptChara___c__DisplayClass39_0__SetEffectEdgeBlur_b__0__,
      0LL);
    baseEffect = this->fields.baseEffect;
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v38);
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v45.fields.x = x;
    v45.fields.y = y;
    v45.fields.z = z;
    CommonEffectManager__Create_40325656(baseEffect, effectName, v45, v37, isSkip, isPause, flip, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetEffect_41409308(
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
  if ( (byte_49FE09C & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, n);
    sub_1B640C8(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v17);
    sub_1B640C8(&Method_UIScriptChara__SetEffect_g__Callback_114_0__, v18);
    byte_49FE09C = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( isOnSublayer )
  {
    v20 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1B64314(
                                                          CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                          n,
                                                          isSkip);
    CommonEffectLoadComponent_LoadEndHandler___ctor(v20, 0LL, Method_UIScriptChara__SetEffect_g__Callback_114_0__, 0LL);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v21.fields.y = y;
    v21.fields.z = z;
    v21.fields.x = x;
    CommonEffectManager__Create_40325656(baseEffect, n, v21, v20, isSkip, isPause, flip, 0LL);
  }
  else
  {
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v22.fields.y = y;
    v22.fields.z = z;
    v22.fields.x = x;
    CommonEffectManager__Create_40325464(baseEffect, n, v22, isSkip, isPause, flip, 0LL);
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
  int32_t v4; // w3
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.filterName, (int32_t)filterName, (int32_t)method, v4);
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
    sub_1B64324(0LL);
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
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_49FE091 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_TweenRotation___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FE091 = 1;
  }
  v21.fields.y = 0.0;
  v21.fields.z = rollZ * 0.017453;
  v21.fields.x = 0.0;
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Internal_FromEulerRad(v21, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_13;
  v15 = v10;
  v16 = v11;
  v17 = v12;
  v18 = v13;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)baseRoll1,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  }
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_13;
  v24.fields.x = v15;
  v24.fields.y = v16;
  v24.fields.z = v17;
  v24.fields.w = v18;
  UnityEngine_Transform__set_localRotation(baseRoll1, v24, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1
    || (v22.fields.z = -z,
        v22.fields.y = -y,
        v22.fields.x = -x,
        UnityEngine_Transform__set_localPosition(baseRoll1, v22, 0LL),
        (baseRoll1 = this->fields.baseRoll2) == 0LL) )
  {
LABEL_13:
    sub_1B64324(baseRoll1);
  }
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  UnityEngine_Transform__set_localPosition(baseRoll1, v23, 0LL);
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
  if ( this->fields.isShadow != isShadow )
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
  uint32_t v34; // w0
  __int64 *v35; // x8
  const MethodInfo *v36; // x2
  int colora; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v39; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_49FE097 & 1) == 0 )
  {
    colora = v20;
    sub_1B640C8(&UnityEngine_Object_TypeInfo, n);
    sub_1B640C8(&StringLiteral_24614/*"wipe"*/, v21);
    sub_1B640C8(&StringLiteral_16748/*"appearanceReverse"*/, v22);
    sub_1B640C8(&StringLiteral_18369/*"darkEnemyErasure"*/, v23);
    sub_1B640C8(&StringLiteral_24620/*"wipeTimeRe"*/, v24);
    sub_1B640C8(&StringLiteral_18370/*"darkWipe"*/, v25);
    sub_1B640C8(&StringLiteral_19383/*"flashErasure"*/, v26);
    sub_1B640C8(&StringLiteral_16747/*"appearance"*/, v27);
    sub_1B640C8(&StringLiteral_18977/*"erasure"*/, v28);
    sub_1B640C8(&StringLiteral_18978/*"erasureReverse"*/, v29);
    sub_1B640C8(&StringLiteral_18946/*"enemyErasure"*/, v30);
    sub_1B640C8(&StringLiteral_24619/*"wipeTime"*/, v31);
    v32 = colora;
    byte_49FE097 = 1;
  }
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v39.fields.r = r;
  v39.fields.g = g;
  v39.fields.b = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v38,
                                          time,
                                          v39,
                                          range,
                                          isSkip,
                                          isPause,
                                          0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(CharaEffect, 0LL, 0LL) )
  {
    v34 = PrivateImplementationDetails___ComputeStringHash(n, 0LL);
    if ( v34 > 0x8D759330 )
    {
      if ( v34 > 0xD4B34506 )
      {
        switch ( v34 )
        {
          case 0xE7555186:
            v35 = &StringLiteral_24614/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v35 = &StringLiteral_18370/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v35 = &StringLiteral_16747/*"appearance"*/;
            break;
          default:
            return;
        }
      }
      else
      {
        switch ( v34 )
        {
          case 0x8DA714B6:
            v35 = &StringLiteral_24620/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v35 = &StringLiteral_19383/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v35 = &StringLiteral_18978/*"erasureReverse"*/;
            break;
          default:
            return;
        }
      }
    }
    else if ( v34 > 0x4A1132BE )
    {
      switch ( v34 )
      {
        case 0x8D759330:
          v35 = &StringLiteral_18977/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v35 = &StringLiteral_18946/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v35 = &StringLiteral_16748/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v34 == 242689791 )
    {
      v35 = &StringLiteral_24619/*"wipeTime"*/;
    }
    else
    {
      if ( v34 != 1242641086 )
        return;
      v35 = &StringLiteral_18369/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v35, 0LL) )
      UIScriptChara__StopShadowEffect(this, isSkip, v36);
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
    sub_1B64324(this);
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
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRotation_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  bool v27; // w8
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v31; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_49FE092 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_TweenRotation___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_5933/*"EndExecuteCameraRoll"*/, v8);
    byte_49FE092 = 1;
  }
  v29.fields.y = 0.0;
  v29.fields.z = rollZ * 0.017453;
  v29.fields.x = 0.0;
  *(UnityEngine_Quaternion_o *)&v9 = UnityEngine_Quaternion__Internal_FromEulerRad(v29, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_19;
  v14 = v9;
  v15 = v10;
  v16 = v11;
  v17 = v12;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)baseRoll1,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  }
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
LABEL_19:
    sub_1B64324(baseRoll1);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseRoll1, 0LL);
  v31.fields.x = v14;
  v31.fields.y = v15;
  v31.fields.z = v16;
  v31.fields.w = v17;
  v20 = TweenRotation__Begin(gameObject, duration, v31, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) == 0 )
    goto LABEL_16;
  if ( !v20 )
    goto LABEL_19;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v20, 0LL) )
  {
LABEL_16:
    baseRoll1 = this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v30.fields.x = v14;
      v30.fields.y = v15;
      v30.fields.z = v16;
      v30.fields.w = v17;
      UnityEngine_Transform__set_localRotation(baseRoll1, v30, 0LL);
      v27 = 0;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20->fields.eventReceiver = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->fields.eventReceiver, (int32_t)v21, v22, v23);
  v24 = StringLiteral_5933/*"EndExecuteCameraRoll"*/;
  v20->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5933/*"EndExecuteCameraRoll"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->fields.callWhenFinished, v24, v25, v26);
  v27 = 1;
LABEL_18:
  this->fields.isRoll = v27;
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
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  bool v31; // w8
  float value; // [xsp+Ch] [xbp-64h]
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_49FE093 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_TweenRotation___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&Method_UITweener_Begin_TweenRotation___, v12);
    sub_1B640C8(&StringLiteral_5933/*"EndExecuteCameraRoll"*/, v13);
    byte_49FE093 = 1;
  }
  v34.fields.y = 0.0;
  v34.fields.z = rollZ * 0.017453;
  v34.fields.x = 0.0;
  *(UnityEngine_Quaternion_o *)(&v14 - 1) = UnityEngine_Quaternion__Internal_FromEulerRad(v34, 0LL);
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  value = v18;
  if ( !baseRoll1 )
    goto LABEL_23;
  v19 = v14;
  v20 = v15;
  v21 = v16;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       baseRoll1,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseRoll1 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_23;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject(baseRoll1, 0LL);
  baseRoll1 = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                           gameObject,
                                           duration,
                                           (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenRotation___);
  if ( !baseRoll1 )
    goto LABEL_23;
  v24 = baseRoll1;
  v38 = TweenRotation__get_value((TweenRotation_o *)baseRoll1, 0LL);
  v35 = UnityEngine_Quaternion__Internal_ToEulerRad(v38, 0LL);
  v35.fields.x = v35.fields.x * 57.296;
  v35.fields.y = v35.fields.y * 57.296;
  v35.fields.z = v35.fields.z * 57.296;
  *(UnityEngine_Vector3_o *)&v24[5].monitor = UnityEngine_Quaternion__Internal_MakePositive(v35, 0LL);
  *((_DWORD *)&v24[5].fields + 1) = 0;
  LODWORD(v24[6].klass) = 0;
  *((float *)&v24[6].klass + 1) = rollZ;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v24, 1.0, 1, 0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v24, 0, 0LL);
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1
    || (v36.fields.z = -z,
        v36.fields.y = -y,
        v36.fields.x = -x,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v36, 0LL),
        (baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll2) == 0LL) )
  {
LABEL_23:
    sub_1B64324(baseRoll1);
  }
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v37, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL)
    || !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v24, 0LL) )
  {
    baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v39.fields.x = value;
      v39.fields.y = v19;
      v39.fields.z = v20;
      v39.fields.w = v21;
      UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)baseRoll1, v39, 0LL);
      v31 = 0;
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v24[3].monitor = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24[3].monitor, (int32_t)v25, v26, v27);
  v28 = StringLiteral_5933/*"EndExecuteCameraRoll"*/;
  *(_QWORD *)&v24[3].fields.m_CachedPtr = StringLiteral_5933/*"EndExecuteCameraRoll"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24[3].fields, v28, v29, v30);
  v31 = 1;
LABEL_22:
  this->fields.isRoll = v31;
  return 1;
}


void __fastcall UIScriptChara__StartShadowEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *baseShadowEffect; // x19

  if ( (byte_49FE084 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_13475/*"Talk/bit_talk_11"*/, v3);
    byte_49FE084 = 1;
  }
  if ( this->fields.isShadow && this->fields.isDisp && !this->fields.isShadowEffect )
  {
    this->fields.isShadowEffect = 1;
    baseShadowEffect = this->fields.baseShadowEffect;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Create_40324036(baseShadowEffect, (System_String_o *)StringLiteral_13475/*"Talk/bit_talk_11"*/, 0, 0, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StopBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_49FE0A8 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, isSkip);
    byte_49FE0A8 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop(baseEffectBack, isSkip, 0, 0LL);
}


bool __fastcall UIScriptChara__StopBackEffect_41411320(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_49FE0A9 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, n);
    byte_49FE0A9 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop_40328372(baseEffectBack, n, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopCut(UIScriptChara_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StopEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_49FE09F & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, isSkip);
    byte_49FE09F = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop(baseEffect, isSkip, 0, 0LL);
}


bool __fastcall UIScriptChara__StopEffect_41409984(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_49FE0A0 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, n);
    byte_49FE0A0 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop_40328372(baseEffect, n, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopMoveScaleTween(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *baseScale; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *Component_object; // x19

  if ( (byte_49FE08D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_22921/*"scaleto"*/, v4);
    sub_1B640C8(&iTween_TypeInfo, v5);
    byte_49FE08D = 1;
  }
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(baseScale, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60024864(gameObject, (System_String_o *)StringLiteral_22921/*"scaleto"*/, 0LL);
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_14;
  baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseScale, 0LL);
  if ( !baseScale )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseScale,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseScale = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)baseScale & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1B64324(baseScale);
  }
}


void __fastcall UIScriptChara__StopMoveTween(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v7; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_49FE086 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_21440/*"moveto"*/, v4);
    sub_1B640C8(&iTween_TypeInfo, v5);
    byte_49FE086 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60024864(gameObject, (System_String_o *)StringLiteral_21440/*"moveto"*/, 0LL);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v7 )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v7,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
      return;
    }
LABEL_12:
    sub_1B64324(v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__StopShadowEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseShadowEffect; // x20

  if ( (byte_49FE085 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectManager_TypeInfo, isSkip);
    byte_49FE085 = 1;
  }
  this->fields.isShadowEffect = 0;
  baseShadowEffect = this->fields.baseShadowEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(baseShadowEffect, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopSpecialEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  ProgramEffectManager__Destory(this->fields.baseSpecialEffect, 0LL);
}


void __fastcall UIScriptChara__StopSpecialEffect_41408756(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  ProgramEffectManager__Destory_40349408(this->fields.baseSpecialEffect, n, 0LL);
}


void __fastcall UIScriptChara___SetBackEffect_g__Callback_124_0(
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  _BOOL8 v3; // x0

  if ( (byte_49FE0AC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE0AC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0LL, 0LL);
  if ( !v3 )
  {
    if ( !effect )
      sub_1B64324(v3);
    effect->fields._IsOnSublayer_k__BackingField = 1;
  }
}


void __fastcall UIScriptChara___SetEffect_g__Callback_114_0(CommonEffectComponent_o *effect, const MethodInfo *method)
{
  _BOOL8 v3; // x0

  if ( (byte_49FE0AB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE0AB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0LL, 0LL);
  if ( !v3 )
  {
    if ( !effect )
      sub_1B64324(v3);
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
  __int64 v10; // x1
  float v11; // s0
  float v12; // s1
  float v13; // s2
  int r_low; // w8
  float v15; // s8
  float v16; // s9
  float v17; // s10
  __int64 v18; // x25
  __int64 v19; // x22
  UnityEngine_Transform_o *transform; // x23
  int v21; // s2
  float v22; // s0
  float v23; // s1
  struct UnityEngine_Texture_o *maskTex; // x8
  UIScriptChara___c__DisplayClass39_0_o *v25; // x23
  struct UnityEngine_Texture_o *v26; // x8
  int v27; // w24
  struct UIScriptChara_o *v28; // x8
  UIScriptChara_c *klass; // x9
  float v30; // s0
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_49FE0AD & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___, effect);
    this = (UIScriptChara___c__DisplayClass39_0_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FE0AD = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_29;
  this = (UIScriptChara___c__DisplayClass39_0_o *)_4__this->fields.baseEffect;
  if ( !this
    || (this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          1,
                                                          (const MethodInfo_2E88B78 *)Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___),
        (v6 = v3->fields.__4__this) == 0LL)
    || (v7 = this,
        this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))v6->klass->vtable._8_GetBody.method)(
                                                          v3->fields.__4__this,
                                                          v6->klass->vtable._9_GetSizeEdgeBlur.methodPtr),
        (v8 = v3->fields.__4__this) == 0LL)
    || (v9 = (UnityEngine_Object_o *)this,
        this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))v8->klass->vtable._4_GetOffsetEdgeBlur.method)(
                                                          v3->fields.__4__this,
                                                          v8->klass->vtable._5_GetRectEdgeBlur.methodPtr),
        !v7) )
  {
LABEL_29:
    sub_1B64324(this);
  }
  r_low = LODWORD(v7->fields.color.fields.r);
  if ( r_low >= 1 )
  {
    v15 = v11;
    v16 = v12;
    v17 = v13;
    v18 = 0LL;
    do
    {
      if ( (unsigned int)v18 >= r_low )
        sub_1B6432C(this, v10);
      v19 = *((_QWORD *)&v7->fields.color.fields.b + v18);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v19 )
          goto LABEL_29;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v19, 0LL);
        this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)v19,
                                                          0LL);
        if ( !this )
          goto LABEL_29;
        *(UnityEngine_Vector3_o *)(&v21 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        if ( !transform )
          goto LABEL_29;
        v22 = v15;
        v23 = v16;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v21 - 2), 0LL);
      }
      else if ( !v19 )
      {
        goto LABEL_29;
      }
      *(struct UnityEngine_Color_o *)(v19 + 96) = v3->fields.color;
      *(struct UnityEngine_Color_o *)(v19 + 112) = v3->fields.particleColor;
      FGOEdgeBlur__set_Texture((FGOEdgeBlur_o *)v19, v3->fields.maskTex, 0LL);
      this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)v19,
                                                        0LL);
      maskTex = v3->fields.maskTex;
      if ( !maskTex )
        goto LABEL_29;
      v25 = this;
      this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))maskTex->klass->vtable._4_get_width.method)(
                                                        v3->fields.maskTex,
                                                        maskTex->klass->vtable._5_set_width.methodPtr);
      v26 = v3->fields.maskTex;
      if ( !v26 )
        goto LABEL_29;
      v27 = (int)this;
      this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v26->klass->vtable._6_get_height.method)(
                                                        v3->fields.maskTex,
                                                        v26->klass->vtable._7_set_height.methodPtr);
      if ( !v25 )
        goto LABEL_29;
      v34.fields.y = (float)(int)this;
      v34.fields.x = (float)v27;
      v34.fields.z = 0.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v25, v34, 0LL);
      FGOEdgeBlur__set_Thickness((FGOEdgeBlur_o *)v19, v3->fields.thick, 0LL);
      FGOEdgeBlur__set_Level((FGOEdgeBlur_o *)v19, v3->fields.level, 0LL);
      this = (UIScriptChara___c__DisplayClass39_0_o *)v3->fields.maskTex;
      if ( !this )
        goto LABEL_29;
      this = (UIScriptChara___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(UIScriptChara___c__DisplayClass39_0_o *, void *))&this->klass[1]._1.byval_arg.bits)(
                                                        this,
                                                        this->klass[1]._1.this_arg.data);
      v28 = v3->fields.__4__this;
      if ( !v28 )
        goto LABEL_29;
      klass = v28->klass;
      if ( (int)this <= 1024 )
        v30 = ((float (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))klass->vtable._5_GetRectEdgeBlur.method)(
                v3->fields.__4__this,
                klass->vtable._6_GetHighRectEdgeBlur.methodPtr);
      else
        v30 = ((float (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))klass->vtable._6_GetHighRectEdgeBlur.method)(
                v3->fields.__4__this,
                klass->vtable._7_GetBodySubTexture.methodPtr);
      FGOEdgeBlur__set_Rect((FGOEdgeBlur_o *)v19, *(UnityEngine_Rect_o *)&v30, 0LL);
      v35.fields.x = v15;
      v35.fields.y = v16;
      v35.fields.z = v17;
      FGOEdgeBlur__setMaskImagePosition((FGOEdgeBlur_o *)v19, v35, 0LL);
      r_low = LODWORD(v7->fields.color.fields.r);
      ++v18;
    }
    while ( (int)v18 < r_low );
  }
}