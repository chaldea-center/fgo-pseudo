void __fastcall UIScriptChara___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AB7A38 & 1) == 0 )
  {
    sub_1BAB41C(&UIScriptChara_TypeInfo, v1);
    byte_4AB7A38 = 1;
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
  if ( (byte_4AB7A10 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_17371/*"blink"*/, kind);
    sub_1BAB41C(&StringLiteral_19394/*"fade"*/, v13);
    sub_1BAB41C(&StringLiteral_18367/*"crossFade"*/, v14);
    byte_4AB7A10 = 1;
  }
  if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_19394/*"fade"*/, 0LL) )
  {
    v15 = 2LL;
  }
  else if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_17371/*"blink"*/, 0LL) )
  {
    v15 = 3LL;
  }
  else if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_18367/*"crossFade"*/, 0LL) )
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


void __fastcall UIScriptChara__ChangeCharacter_42136580(
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
  sub_1BAB3C0(
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
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
  {
    sub_1BAB678(gameObject, v4);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.basePosition, 0LL);
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__EndMoveReturnEaseHalf(UIScriptChara_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UIScriptChara__MoveReturnPositionEase_42141248(this, this->fields.returnDuration, this->fields.returnEaseType, v2);
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
    sub_1BAB678(0LL, method);
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

  if ( !byte_4AB058A )
  {
    sub_1BAB41C(&UnityEngine_Vector2_TypeInfo, method);
    byte_4AB058A = 1;
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
    sub_1BAB678(baseSpecialEffect, method);
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
    sub_1BAB3C0(p_setCallback, 0, v15, v16);
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
    sub_1BAB678(0LL, method);
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

  if ( !byte_4AB0691 )
  {
    sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4AB0691 = 1;
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
  if ( !byte_4AB0691 )
  {
    sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4AB0691 = 1;
  }
  UIScriptChara__SetRoll(this, 0.0, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, method);
}


bool __fastcall UIScriptChara__IsBackEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_4AB7A2F & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, method);
    byte_4AB7A2F = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy(baseEffectBack, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_4AB7A31 & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, method);
    byte_4AB7A31 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart(baseEffectBack, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffectStart_42148620(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_4AB7A32 & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, n);
    byte_4AB7A32 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart_41052988(baseEffectBack, n, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffect_42148420(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_4AB7A30 & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, n);
    byte_4AB7A30 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy_41052072(baseEffectBack, n, 0LL);
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

  if ( (byte_4AB7A23 & 1) == 0 )
  {
    sub_1BAB41C(&CharaCutEffectComponent_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB7A23 = 1;
  }
  v4 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v4 )
LABEL_21:
    sub_1BAB678(v4, v5);
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
        sub_1BAB680(v4, v5);
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

  if ( (byte_4AB7A24 & 1) == 0 )
  {
    sub_1BAB41C(&CharaCutEffectComponent_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB7A24 = 1;
  }
  v4 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v4 )
LABEL_21:
    sub_1BAB678(v4, v5);
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
        sub_1BAB680(v4, v5);
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

  if ( (byte_4AB7A26 & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, method);
    byte_4AB7A26 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy(baseEffect, 0LL);
}


bool __fastcall UIScriptChara__IsEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_4AB7A28 & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, method);
    byte_4AB7A28 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart(baseEffect, 0LL);
}


bool __fastcall UIScriptChara__IsEffectStart_42147284(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4AB7A29 & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, n);
    byte_4AB7A29 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart_41052988(baseEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsEffect_42147084(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4AB7A27 & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, n);
    byte_4AB7A27 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy_41052072(baseEffect, n, 0LL);
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


bool __fastcall UIScriptChara__IsSpecialEffectStart_42146088(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsStart_41076808(this->fields.baseSpecialEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsSpecialEffect_42146064(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsBusy_41076140(this->fields.baseSpecialEffect, n, 0LL);
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
  UnityEngine_GameObject_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_4AB7A1E & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, kind);
    sub_1BAB41C(&StringLiteral_5981/*"EndMoveAttack"*/, v11);
    sub_1BAB41C(&StringLiteral_22159/*"normal"*/, v12);
    byte_4AB7A1E = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)kind);
  this->fields.isMove = 1;
  if ( duration <= 0.0 )
    duration = 0.5;
  System_String__op_Equality(kind, (System_String_o *)StringLiteral_22159/*"normal"*/, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  v14 = TweenPosition__Begin(gameObject, duration, v24, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( v14 )
    {
      v14->fields.method = 1;
      v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v14->fields.eventReceiver = v17;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v14->fields.eventReceiver, (int32_t)v17, v18, v19);
      v20 = StringLiteral_5981/*"EndMoveAttack"*/;
      v14->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5981/*"EndMoveAttack"*/;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v14->fields.callWhenFinished, v20, v21, v22);
      return;
    }
LABEL_13:
    sub_1BAB678(transform, v16);
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_13;
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v23, 0LL);
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
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_4AB7A15 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_5979/*"EndMove"*/, v9);
    byte_4AB7A15 = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  if ( duration > 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v20.fields.x = x;
    v20.fields.y = y;
    v20.fields.z = z;
    v11 = TweenPosition__Begin(gameObject, duration, v20, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
    {
      transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v11 )
      {
        v11->fields.eventReceiver = transform;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v11->fields.eventReceiver, (int32_t)transform, v14, v15);
        v16 = StringLiteral_5979/*"EndMove"*/;
        v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5979/*"EndMove"*/;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v11->fields.callWhenFinished, v16, v17, v18);
        return;
      }
LABEL_12:
      sub_1BAB678(transform, v13);
    }
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_12;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_12;
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v19, 0LL);
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
  System_Collections_Hashtable_o *v22; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x0
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x0
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x0
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x0
  UnityEngine_GameObject_o *v44; // x19
  float v45; // [xsp+Ch] [xbp-64h] BYREF
  float v46; // [xsp+10h] [xbp-60h] BYREF
  float v47; // [xsp+14h] [xbp-5Ch] BYREF
  int v48; // [xsp+18h] [xbp-58h] BYREF
  char v49[4]; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  z = vector.fields.z;
  y = vector.fields.y;
  x = vector.fields.x;
  if ( (byte_4AB7A16 & 1) == 0 )
  {
    sub_1BAB41C(&bool_TypeInfo, easetype);
    sub_1BAB41C(&System_Collections_Hashtable_TypeInfo, v11);
    sub_1BAB41C(&float_TypeInfo, v12);
    sub_1BAB41C(&StringLiteral_24785/*"x"*/, v13);
    sub_1BAB41C(&StringLiteral_18784/*"easetype"*/, v14);
    sub_1BAB41C(&StringLiteral_23968/*"time"*/, v15);
    sub_1BAB41C(&StringLiteral_5979/*"EndMove"*/, v16);
    sub_1BAB41C(&StringLiteral_18580/*"delay"*/, v17);
    sub_1BAB41C(&StringLiteral_24889/*"y"*/, v18);
    sub_1BAB41C(&StringLiteral_20831/*"isLocal"*/, v19);
    sub_1BAB41C(&StringLiteral_22309/*"oncomplete"*/, v20);
    sub_1BAB41C(&iTween_TypeInfo, v21);
    byte_4AB7A16 = 1;
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
        v50.fields.x = x;
        v50.fields.y = y;
        v50.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v50, 0LL);
        this->fields.isMove = 0;
        return;
      }
    }
LABEL_11:
    sub_1BAB678(gameObject, v27);
  }
  v22 = (System_Collections_Hashtable_o *)sub_1BAB668(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62627560(v22, 0LL);
  v49[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v49, v23, v24, v25);
  if ( !v22 )
    goto LABEL_11;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_20831/*"isLocal"*/,
    gameObject,
    v22->klass->vtable._24_Clear.methodPtr);
  v48 = 0;
  v31 = j_il2cpp_value_box_0(float_TypeInfo, &v48, v28, v29, v30);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_18580/*"delay"*/,
    v31,
    v22->klass->vtable._24_Clear.methodPtr);
  v47 = x;
  v35 = j_il2cpp_value_box_0(float_TypeInfo, &v47, v32, v33, v34);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_24785/*"x"*/,
    v35,
    v22->klass->vtable._24_Clear.methodPtr);
  v46 = y;
  v39 = j_il2cpp_value_box_0(float_TypeInfo, &v46, v36, v37, v38);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_24889/*"y"*/,
    v39,
    v22->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_18784/*"easetype"*/,
    easetype,
    v22->klass->vtable._24_Clear.methodPtr);
  v45 = time;
  v43 = j_il2cpp_value_box_0(float_TypeInfo, &v45, v40, v41, v42);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_23968/*"time"*/,
    v43,
    v22->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_22309/*"oncomplete"*/,
    StringLiteral_5979/*"EndMove"*/,
    v22->klass->vtable._24_Clear.methodPtr);
  v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_60586460(v44, v22, 0LL);
}


void __fastcall UIScriptChara__MoveReturnPosition(UIScriptChara_o *this, float duration, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TweenPosition_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4AB7A17 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_5982/*"EndMoveReturn"*/, v5);
    byte_4AB7A17 = 1;
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
      sub_1BAB678(v9, v10);
    v8->fields.eventReceiver = v9;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v8->fields.eventReceiver, (int32_t)v9, v11, v12);
    v13 = StringLiteral_5982/*"EndMoveReturn"*/;
    v8->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5982/*"EndMoveReturn"*/;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v8->fields.callWhenFinished, v13, v14, v15);
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
  __int64 v25; // x1
  const MethodInfo *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Hashtable_o *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x0
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x0
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x0
  UnityEngine_GameObject_o *v49; // x19
  float returnDuration; // [xsp+Ch] [xbp-54h] BYREF
  float v51; // [xsp+10h] [xbp-50h] BYREF
  float v52; // [xsp+14h] [xbp-4Ch] BYREF
  int v53; // [xsp+18h] [xbp-48h] BYREF
  char v54[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4AB7A19 & 1) == 0 )
  {
    sub_1BAB41C(&bool_TypeInfo, startEaseType);
    sub_1BAB41C(&System_Collections_Hashtable_TypeInfo, v13);
    sub_1BAB41C(&float_TypeInfo, v14);
    sub_1BAB41C(&StringLiteral_24785/*"x"*/, v15);
    sub_1BAB41C(&StringLiteral_18784/*"easetype"*/, v16);
    sub_1BAB41C(&StringLiteral_5983/*"EndMoveReturnEaseHalf"*/, v17);
    sub_1BAB41C(&StringLiteral_23968/*"time"*/, v18);
    sub_1BAB41C(&StringLiteral_18580/*"delay"*/, v19);
    sub_1BAB41C(&StringLiteral_24889/*"y"*/, v20);
    sub_1BAB41C(&StringLiteral_20831/*"isLocal"*/, v21);
    sub_1BAB41C(&StringLiteral_22309/*"oncomplete"*/, v22);
    sub_1BAB41C(&iTween_TypeInfo, v23);
    byte_4AB7A19 = 1;
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
    UIScriptChara__EndMoveReturn(this, v26);
    return;
  }
  this->fields.returnEaseType = returnEaseType;
  this->fields.returnDuration = time * 0.5;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.returnEaseType, (int32_t)returnEaseType, v27, v28);
  v29 = (System_Collections_Hashtable_o *)sub_1BAB668(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62627560(v29, 0LL);
  v54[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v54, v30, v31, v32);
  if ( !v29 )
LABEL_11:
    sub_1BAB678(gameObject, v25);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
    v29,
    StringLiteral_20831/*"isLocal"*/,
    gameObject,
    v29->klass->vtable._24_Clear.methodPtr);
  v53 = 0;
  v36 = j_il2cpp_value_box_0(float_TypeInfo, &v53, v33, v34, v35);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
    v29,
    StringLiteral_18580/*"delay"*/,
    v36,
    v29->klass->vtable._24_Clear.methodPtr);
  v52 = x;
  v40 = j_il2cpp_value_box_0(float_TypeInfo, &v52, v37, v38, v39);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
    v29,
    StringLiteral_24785/*"x"*/,
    v40,
    v29->klass->vtable._24_Clear.methodPtr);
  v51 = y;
  v44 = j_il2cpp_value_box_0(float_TypeInfo, &v51, v41, v42, v43);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
    v29,
    StringLiteral_24889/*"y"*/,
    v44,
    v29->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
    v29,
    StringLiteral_18784/*"easetype"*/,
    startEaseType,
    v29->klass->vtable._24_Clear.methodPtr);
  returnDuration = this->fields.returnDuration;
  v48 = j_il2cpp_value_box_0(float_TypeInfo, &returnDuration, v45, v46, v47);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
    v29,
    StringLiteral_23968/*"time"*/,
    v48,
    v29->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
    v29,
    StringLiteral_22309/*"oncomplete"*/,
    StringLiteral_5983/*"EndMoveReturnEaseHalf"*/,
    v29->klass->vtable._24_Clear.methodPtr);
  v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_60586460(v49, v29, 0LL);
}


void __fastcall UIScriptChara__MoveReturnPositionEase_42141248(
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
  System_Collections_Hashtable_o *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x0
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float v42; // [xsp+Ch] [xbp-44h] BYREF
  float y; // [xsp+10h] [xbp-40h] BYREF
  float x; // [xsp+14h] [xbp-3Ch] BYREF
  int v45; // [xsp+18h] [xbp-38h] BYREF
  char v46[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4AB7A1A & 1) == 0 )
  {
    sub_1BAB41C(&bool_TypeInfo, returnEaseType);
    sub_1BAB41C(&System_Collections_Hashtable_TypeInfo, v7);
    sub_1BAB41C(&float_TypeInfo, v8);
    sub_1BAB41C(&StringLiteral_24785/*"x"*/, v9);
    sub_1BAB41C(&StringLiteral_18784/*"easetype"*/, v10);
    sub_1BAB41C(&StringLiteral_23968/*"time"*/, v11);
    sub_1BAB41C(&StringLiteral_18580/*"delay"*/, v12);
    sub_1BAB41C(&StringLiteral_5982/*"EndMoveReturn"*/, v13);
    sub_1BAB41C(&StringLiteral_24889/*"y"*/, v14);
    sub_1BAB41C(&StringLiteral_20831/*"isLocal"*/, v15);
    sub_1BAB41C(&StringLiteral_22309/*"oncomplete"*/, v16);
    sub_1BAB41C(&iTween_TypeInfo, v17);
    byte_4AB7A1A = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)returnEaseType);
  this->fields.isMove = 1;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveReturn(this, v18);
  }
  else
  {
    v19 = (System_Collections_Hashtable_o *)sub_1BAB668(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_62627560(v19, 0LL);
    v46[0] = 1;
    v23 = j_il2cpp_value_box_0(bool_TypeInfo, v46, v20, v21, v22);
    if ( !v19 )
      sub_1BAB678(v23, v24);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_20831/*"isLocal"*/,
      v23,
      v19->klass->vtable._24_Clear.methodPtr);
    v45 = 0;
    v28 = j_il2cpp_value_box_0(float_TypeInfo, &v45, v25, v26, v27);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_18580/*"delay"*/,
      v28,
      v19->klass->vtable._24_Clear.methodPtr);
    x = this->fields.basePosition.fields.x;
    v32 = j_il2cpp_value_box_0(float_TypeInfo, &x, v29, v30, v31);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_24785/*"x"*/,
      v32,
      v19->klass->vtable._24_Clear.methodPtr);
    y = this->fields.basePosition.fields.y;
    v36 = j_il2cpp_value_box_0(float_TypeInfo, &y, v33, v34, v35);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_24889/*"y"*/,
      v36,
      v19->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_18784/*"easetype"*/,
      returnEaseType,
      v19->klass->vtable._24_Clear.methodPtr);
    v42 = time;
    v40 = j_il2cpp_value_box_0(float_TypeInfo, &v42, v37, v38, v39);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_23968/*"time"*/,
      v40,
      v19->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
      v19,
      StringLiteral_22309/*"oncomplete"*/,
      StringLiteral_5982/*"EndMoveReturn"*/,
      v19->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_60586460(gameObject, v19, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MoveReturnPosition_42140052(
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
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  TweenPosition_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_4AB7A18 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_5984/*"EndMoveReturnHalf"*/, v9);
    byte_4AB7A18 = 1;
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
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v20.fields.x = x;
    v20.fields.y = y;
    v20.fields.z = z;
    v14 = TweenPosition__Begin(v13, this->fields.returnDuration, v20, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v14 )
      {
        v14->fields.eventReceiver = gameObject;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v14->fields.eventReceiver, (int32_t)gameObject, v15, v16);
        v17 = StringLiteral_5984/*"EndMoveReturnHalf"*/;
        v14->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5984/*"EndMoveReturnHalf"*/;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v14->fields.callWhenFinished, v17, v18, v19);
        return;
      }
LABEL_12:
      sub_1BAB678(gameObject, v11);
    }
  }
  UIScriptChara__EndMoveReturn(this, v12);
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

  if ( (byte_4AB7A1C & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_5985/*"EndMoveScale"*/, v7);
    byte_4AB7A1C = 1;
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
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v11->fields.eventReceiver, (int32_t)baseScale, v12, v13);
        v14 = StringLiteral_5985/*"EndMoveScale"*/;
        v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5985/*"EndMoveScale"*/;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v11->fields.callWhenFinished, v14, v15, v16);
        return;
      }
LABEL_11:
      sub_1BAB678(baseScale, v8);
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
  System_Collections_Hashtable_o *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UnityEngine_Component_o *baseScale; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x0
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x0
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v40; // x19
  float v41; // [xsp+0h] [xbp-50h] BYREF
  float y; // [xsp+4h] [xbp-4Ch] BYREF
  float x; // [xsp+8h] [xbp-48h] BYREF
  char v44[4]; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4AB7A1D & 1) == 0 )
  {
    sub_1BAB41C(&bool_TypeInfo, easetype);
    sub_1BAB41C(&System_Collections_Hashtable_TypeInfo, v9);
    sub_1BAB41C(&float_TypeInfo, v10);
    sub_1BAB41C(&StringLiteral_24785/*"x"*/, v11);
    sub_1BAB41C(&StringLiteral_18784/*"easetype"*/, v12);
    sub_1BAB41C(&StringLiteral_23968/*"time"*/, v13);
    sub_1BAB41C(&StringLiteral_22311/*"oncompletetarget"*/, v14);
    sub_1BAB41C(&StringLiteral_24889/*"y"*/, v15);
    sub_1BAB41C(&StringLiteral_20831/*"isLocal"*/, v16);
    sub_1BAB41C(&StringLiteral_22309/*"oncomplete"*/, v17);
    sub_1BAB41C(&StringLiteral_5985/*"EndMoveScale"*/, v18);
    sub_1BAB41C(&iTween_TypeInfo, v19);
    byte_4AB7A1D = 1;
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
    v21 = (System_Collections_Hashtable_o *)sub_1BAB668(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_62627560(v21, 0LL);
    v44[0] = 1;
    baseScale = (UnityEngine_Component_o *)j_il2cpp_value_box_0(bool_TypeInfo, v44, v22, v23, v24);
    if ( !v21 )
      goto LABEL_10;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_Component_o *, Il2CppMethodPointer))v21->klass->vtable._23_Add.method)(
      v21,
      StringLiteral_20831/*"isLocal"*/,
      baseScale,
      v21->klass->vtable._24_Clear.methodPtr);
    x = this->fields.baseScaleSize.fields.x;
    v30 = j_il2cpp_value_box_0(float_TypeInfo, &x, v27, v28, v29);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v21->klass->vtable._23_Add.method)(
      v21,
      StringLiteral_24785/*"x"*/,
      v30,
      v21->klass->vtable._24_Clear.methodPtr);
    y = this->fields.baseScaleSize.fields.y;
    v34 = j_il2cpp_value_box_0(float_TypeInfo, &y, v31, v32, v33);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v21->klass->vtable._23_Add.method)(
      v21,
      StringLiteral_24889/*"y"*/,
      v34,
      v21->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v21->klass->vtable._23_Add.method)(
      v21,
      StringLiteral_18784/*"easetype"*/,
      easetype,
      v21->klass->vtable._24_Clear.methodPtr);
    v41 = time;
    v38 = j_il2cpp_value_box_0(float_TypeInfo, &v41, v35, v36, v37);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v21->klass->vtable._23_Add.method)(
      v21,
      StringLiteral_23968/*"time"*/,
      v38,
      v21->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v21->klass->vtable._23_Add.method)(
      v21,
      StringLiteral_22309/*"oncomplete"*/,
      StringLiteral_5985/*"EndMoveScale"*/,
      v21->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v21->klass->vtable._23_Add.method)(
      v21,
      StringLiteral_22311/*"oncompletetarget"*/,
      gameObject,
      v21->klass->vtable._24_Clear.methodPtr);
    baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
    if ( !baseScale )
LABEL_10:
      sub_1BAB678(baseScale, v26);
    v40 = UnityEngine_Component__get_gameObject(baseScale, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ScaleTo_60591988(v40, v21, 0LL);
  }
}


void __fastcall UIScriptChara__OnShake(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseShake; // x20
  float v4; // s8
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AB7A22 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_9960/*"OnShake"*/, method);
    byte_4AB7A22 = 1;
  }
  if ( this->fields.shakeCycle > 0.0
    && (this->fields.shakeTime == 0.0 || UnityEngine_Time__get_time(0LL) < this->fields.shakeTime) )
  {
    baseShake = this->fields.baseShake;
    v4 = UnityEngine_Random__Range(-this->fields.shakeX, this->fields.shakeX, 0LL);
    v7 = UnityEngine_Random__Range(-this->fields.shakeY, this->fields.shakeY, 0LL);
    if ( baseShake )
    {
      v9.fields.y = v7;
      v9.fields.z = 0.0;
      v9.fields.x = v4;
      UnityEngine_Transform__set_localPosition(baseShake, v9, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9960/*"OnShake"*/,
        this->fields.shakeCycle,
        0LL);
      return;
    }
LABEL_12:
    sub_1BAB678(v5, v6);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_69785200(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9960/*"OnShake"*/,
    0LL);
  v8 = this->fields.baseShake;
  if ( !byte_4AB0691 )
  {
    v5 = sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v6);
    byte_4AB0691 = 1;
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

  if ( (byte_4AB7A34 & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, isSkip);
    byte_4AB7A34 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume(baseEffectBack, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeBackEffect_42149316(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_4AB7A35 & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, n);
    byte_4AB7A35 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume_41058764(baseEffectBack, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeCutin(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ResumeEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4AB7A2B & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, isSkip);
    byte_4AB7A2B = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume(baseEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeEffect_42147980(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_4AB7A2C & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, n);
    byte_4AB7A2C = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume_41058764(baseEffect, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ProgramEffectManager__Resume(this->fields.baseSpecialEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect_42146952(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  ProgramEffectManager__Resume_41079208(this->fields.baseSpecialEffect, n, isSkip, 0LL);
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
  if ( !byte_4AB0691 )
  {
    sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, n);
    byte_4AB0691 = 1;
  }
  UIScriptChara__SetBackEffect_42148868(
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
void __fastcall UIScriptChara__SetBackEffect_42148868(
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
  if ( (byte_4AB7A33 & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, n);
    sub_1BAB41C(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v17);
    sub_1BAB41C(&Method_UIScriptChara__SetBackEffect_g__Callback_124_0__, v18);
    byte_4AB7A33 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( isOnSublayer )
  {
    v20 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1BAB668(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
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
    CommonEffectManager__Create_41057276(baseEffectBack, n, v21, v20, isSkip, isPause, flip, 0LL);
  }
  else
  {
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v22.fields.y = y;
    v22.fields.z = z;
    v22.fields.x = x;
    CommonEffectManager__Create_41057084(baseEffectBack, n, v22, isSkip, isPause, flip, 0LL);
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
    sub_1BAB678(0LL, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v9, 0LL);
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
  sub_1BAB3C0(
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
    sub_1BAB678(baseDepth, *(_QWORD *)&d);
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
  if ( !byte_4AB0691 )
  {
    sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, n);
    byte_4AB0691 = 1;
  }
  UIScriptChara__SetEffect_42147532(
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
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  UnityEngine_Object_o *v35; // x24
  CommonEffectLoadComponent_LoadEndHandler_o *v36; // x24
  __int64 v37; // x1
  UnityEngine_GameObject_o *baseEffect; // x23
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  float a; // [xsp+4Ch] [xbp-44h]
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  a = particleColor.fields.a;
  b = particleColor.fields.b;
  g = particleColor.fields.g;
  r = particleColor.fields.r;
  v17 = color.fields.a;
  v18 = color.fields.b;
  v19 = color.fields.g;
  v20 = color.fields.r;
  if ( (byte_4AB7A11 & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, effectName);
    sub_1BAB41C(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v23);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v24);
    sub_1BAB41C(&Method_UIScriptChara___c__DisplayClass39_0__SetEffectEdgeBlur_b__0__, v25);
    sub_1BAB41C(&UIScriptChara___c__DisplayClass39_0_TypeInfo, v26);
    byte_4AB7A11 = 1;
  }
  v27 = sub_1BAB668(UIScriptChara___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    sub_1BAB678(v28, v29);
  *(_QWORD *)(v27 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v27 + 16), (int32_t)this, v30, v31);
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
  v32 = ((__int64 (__fastcall *)(UIScriptChara_o *, Il2CppMethodPointer))this->klass->vtable._7_GetBodySubTexture.method)(
          this,
          this->klass->vtable._8_GetBody.methodPtr);
  *(_QWORD *)(v27 + 56) = v32;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v27 + 56), v32, v33, v34);
  v35 = *(UnityEngine_Object_o **)(v27 + 56);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v35, 0LL, 0LL) )
  {
    v36 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1BAB668(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v36,
      (Il2CppObject *)v27,
      Method_UIScriptChara___c__DisplayClass39_0__SetEffectEdgeBlur_b__0__,
      0LL);
    baseEffect = this->fields.baseEffect;
    if ( !byte_4AB0691 )
    {
      sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v37);
      byte_4AB0691 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v44.fields.x = x;
    v44.fields.y = y;
    v44.fields.z = z;
    CommonEffectManager__Create_41057276(baseEffect, effectName, v44, v36, isSkip, isPause, flip, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetEffect_42147532(
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
  if ( (byte_4AB7A2A & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, n);
    sub_1BAB41C(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v17);
    sub_1BAB41C(&Method_UIScriptChara__SetEffect_g__Callback_114_0__, v18);
    byte_4AB7A2A = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( isOnSublayer )
  {
    v20 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1BAB668(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(v20, 0LL, Method_UIScriptChara__SetEffect_g__Callback_114_0__, 0LL);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v21.fields.y = y;
    v21.fields.z = z;
    v21.fields.x = x;
    CommonEffectManager__Create_41057276(baseEffect, n, v21, v20, isSkip, isPause, flip, 0LL);
  }
  else
  {
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v22.fields.y = y;
    v22.fields.z = z;
    v22.fields.x = x;
    CommonEffectManager__Create_41057084(baseEffect, n, v22, isSkip, isPause, flip, 0LL);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.filterName, (int32_t)filterName, (int32_t)method, v4);
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
    sub_1BAB678(0LL, v7);
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
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_4AB7A1F & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_TweenRotation___, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v9);
    byte_4AB7A1F = 1;
  }
  v22.fields.y = 0.0;
  v22.fields.z = rollZ * 0.017453;
  v22.fields.x = 0.0;
  *(UnityEngine_Quaternion_o *)&v11 = UnityEngine_Quaternion__Internal_FromEulerRad(v22, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_13;
  v16 = v11;
  v17 = v12;
  v18 = v13;
  v19 = v14;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)baseRoll1,
                       (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
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
  v25.fields.x = v16;
  v25.fields.y = v17;
  v25.fields.z = v18;
  v25.fields.w = v19;
  UnityEngine_Transform__set_localRotation(baseRoll1, v25, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1
    || (v23.fields.z = -z,
        v23.fields.y = -y,
        v23.fields.x = -x,
        UnityEngine_Transform__set_localPosition(baseRoll1, v23, 0LL),
        (baseRoll1 = this->fields.baseRoll2) == 0LL) )
  {
LABEL_13:
    sub_1BAB678(baseRoll1, v10);
  }
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  UnityEngine_Transform__set_localPosition(baseRoll1, v24, 0LL);
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
  if ( (byte_4AB7A25 & 1) == 0 )
  {
    colora = v20;
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, n);
    sub_1BAB41C(&StringLiteral_24755/*"wipe"*/, v21);
    sub_1BAB41C(&StringLiteral_16850/*"appearanceReverse"*/, v22);
    sub_1BAB41C(&StringLiteral_18470/*"darkEnemyErasure"*/, v23);
    sub_1BAB41C(&StringLiteral_24761/*"wipeTimeRe"*/, v24);
    sub_1BAB41C(&StringLiteral_18471/*"darkWipe"*/, v25);
    sub_1BAB41C(&StringLiteral_19491/*"flashErasure"*/, v26);
    sub_1BAB41C(&StringLiteral_16849/*"appearance"*/, v27);
    sub_1BAB41C(&StringLiteral_19080/*"erasure"*/, v28);
    sub_1BAB41C(&StringLiteral_19081/*"erasureReverse"*/, v29);
    sub_1BAB41C(&StringLiteral_19047/*"enemyErasure"*/, v30);
    sub_1BAB41C(&StringLiteral_24760/*"wipeTime"*/, v31);
    v32 = colora;
    byte_4AB7A25 = 1;
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
            v35 = &StringLiteral_24755/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v35 = &StringLiteral_18471/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v35 = &StringLiteral_16849/*"appearance"*/;
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
            v35 = &StringLiteral_24761/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v35 = &StringLiteral_19491/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v35 = &StringLiteral_19081/*"erasureReverse"*/;
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
          v35 = &StringLiteral_19080/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v35 = &StringLiteral_19047/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v35 = &StringLiteral_16850/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v34 == 242689791 )
    {
      v35 = &StringLiteral_24760/*"wipeTime"*/;
    }
    else
    {
      if ( v34 != 1242641086 )
        return;
      v35 = &StringLiteral_18470/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v35, 0LL) )
      UIScriptChara__StopShadowEffect(this, isSkip, v36);
  }
}


void __fastcall UIScriptChara__SetTalkMask(UIScriptChara_o *this, bool isMask, const MethodInfo *method)
{
  ;
}


void __fastcall UIScriptChara__SetUseSimpleMesh(UIScriptChara_o *this, bool useSimpleMesh, const MethodInfo *method)
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
    sub_1BAB678(this, method);
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
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRotation_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  bool v28; // w8
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v32; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4AB7A20 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_TweenRotation___, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v7);
    sub_1BAB41C(&StringLiteral_5963/*"EndExecuteCameraRoll"*/, v8);
    byte_4AB7A20 = 1;
  }
  v30.fields.y = 0.0;
  v30.fields.z = rollZ * 0.017453;
  v30.fields.x = 0.0;
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Internal_FromEulerRad(v30, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_19;
  v15 = v10;
  v16 = v11;
  v17 = v12;
  v18 = v13;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)baseRoll1,
                       (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
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
    sub_1BAB678(baseRoll1, v9);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseRoll1, 0LL);
  v32.fields.x = v15;
  v32.fields.y = v16;
  v32.fields.z = v17;
  v32.fields.w = v18;
  v21 = TweenRotation__Begin(gameObject, duration, v32, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) == 0 )
    goto LABEL_16;
  if ( !v21 )
    goto LABEL_19;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v21, 0LL) )
  {
LABEL_16:
    baseRoll1 = this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v31.fields.x = v15;
      v31.fields.y = v16;
      v31.fields.z = v17;
      v31.fields.w = v18;
      UnityEngine_Transform__set_localRotation(baseRoll1, v31, 0LL);
      v28 = 0;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v21->fields.eventReceiver = v22;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v21->fields.eventReceiver, (int32_t)v22, v23, v24);
  v25 = StringLiteral_5963/*"EndExecuteCameraRoll"*/;
  v21->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5963/*"EndExecuteCameraRoll"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v21->fields.callWhenFinished, v25, v26, v27);
  v28 = 1;
LABEL_18:
  this->fields.isRoll = v28;
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
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v25; // x20
  UnityEngine_GameObject_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  bool v32; // w8
  float value; // [xsp+Ch] [xbp-64h]
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_4AB7A21 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_TweenRotation___, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v11);
    sub_1BAB41C(&Method_UITweener_Begin_TweenRotation___, v12);
    sub_1BAB41C(&StringLiteral_5963/*"EndExecuteCameraRoll"*/, v13);
    byte_4AB7A21 = 1;
  }
  v35.fields.y = 0.0;
  v35.fields.z = rollZ * 0.017453;
  v35.fields.x = 0.0;
  *(UnityEngine_Quaternion_o *)(&v15 - 1) = UnityEngine_Quaternion__Internal_FromEulerRad(v35, 0LL);
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  value = v19;
  if ( !baseRoll1 )
    goto LABEL_23;
  v20 = v15;
  v21 = v16;
  v22 = v17;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       baseRoll1,
                       (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
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
                                           (const MethodInfo_2F77064 *)Method_UITweener_Begin_TweenRotation___);
  if ( !baseRoll1 )
    goto LABEL_23;
  v25 = baseRoll1;
  v39 = TweenRotation__get_value((TweenRotation_o *)baseRoll1, 0LL);
  v36 = UnityEngine_Quaternion__Internal_ToEulerRad(v39, 0LL);
  v36.fields.x = v36.fields.x * 57.296;
  v36.fields.y = v36.fields.y * 57.296;
  v36.fields.z = v36.fields.z * 57.296;
  *(UnityEngine_Vector3_o *)&v25[5].monitor = UnityEngine_Quaternion__Internal_MakePositive(v36, 0LL);
  *((_DWORD *)&v25[5].fields + 1) = 0;
  LODWORD(v25[6].klass) = 0;
  *((float *)&v25[6].klass + 1) = rollZ;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v25, 1.0, 1, 0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v25, 0, 0LL);
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1
    || (v37.fields.z = -z,
        v37.fields.y = -y,
        v37.fields.x = -x,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v37, 0LL),
        (baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll2) == 0LL) )
  {
LABEL_23:
    sub_1BAB678(baseRoll1, v14);
  }
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v38, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL)
    || !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v25, 0LL) )
  {
    baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v40.fields.x = value;
      v40.fields.y = v20;
      v40.fields.z = v21;
      v40.fields.w = v22;
      UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)baseRoll1, v40, 0LL);
      v32 = 0;
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v25[3].monitor = v26;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v25[3].monitor, (int32_t)v26, v27, v28);
  v29 = StringLiteral_5963/*"EndExecuteCameraRoll"*/;
  *(_QWORD *)&v25[3].fields.m_CachedPtr = StringLiteral_5963/*"EndExecuteCameraRoll"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v25[3].fields, v29, v30, v31);
  v32 = 1;
LABEL_22:
  this->fields.isRoll = v32;
  return 1;
}


void __fastcall UIScriptChara__StartShadowEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *baseShadowEffect; // x19

  if ( (byte_4AB7A12 & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_13574/*"Talk/bit_talk_11"*/, v3);
    byte_4AB7A12 = 1;
  }
  if ( this->fields.isShadow && this->fields.isDisp && !this->fields.isShadowEffect )
  {
    this->fields.isShadowEffect = 1;
    baseShadowEffect = this->fields.baseShadowEffect;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Create_41055656(baseShadowEffect, (System_String_o *)StringLiteral_13574/*"Talk/bit_talk_11"*/, 0, 0, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StopBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_4AB7A36 & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, isSkip);
    byte_4AB7A36 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop(baseEffectBack, isSkip, 0, 0LL);
}


bool __fastcall UIScriptChara__StopBackEffect_42149544(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_4AB7A37 & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, n);
    byte_4AB7A37 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop_41059992(baseEffectBack, n, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopCut(UIScriptChara_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StopEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4AB7A2D & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, isSkip);
    byte_4AB7A2D = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop(baseEffect, isSkip, 0, 0LL);
}


bool __fastcall UIScriptChara__StopEffect_42148208(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_4AB7A2E & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, n);
    byte_4AB7A2E = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop_41059992(baseEffect, n, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopMoveScaleTween(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *baseScale; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *Component_object; // x19

  if ( (byte_4AB7A1B & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_23054/*"scaleto"*/, v4);
    sub_1BAB41C(&iTween_TypeInfo, v5);
    byte_4AB7A1B = 1;
  }
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(baseScale, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60698340(gameObject, (System_String_o *)StringLiteral_23054/*"scaleto"*/, 0LL);
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_14;
  baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseScale, 0LL);
  if ( !baseScale )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseScale,
                       (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
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
    sub_1BAB678(baseScale, method);
  }
}


void __fastcall UIScriptChara__StopMoveTween(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4AB7A14 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_21553/*"moveto"*/, v4);
    sub_1BAB41C(&iTween_TypeInfo, v5);
    byte_4AB7A14 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60698340(gameObject, (System_String_o *)StringLiteral_21553/*"moveto"*/, 0LL);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v7 )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v7,
                       (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    sub_1BAB678(v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__StopShadowEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseShadowEffect; // x20

  if ( (byte_4AB7A13 & 1) == 0 )
  {
    sub_1BAB41C(&CommonEffectManager_TypeInfo, isSkip);
    byte_4AB7A13 = 1;
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


void __fastcall UIScriptChara__StopSpecialEffect_42146980(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  ProgramEffectManager__Destory_41080968(this->fields.baseSpecialEffect, n, 0LL);
}


void __fastcall UIScriptChara___SetBackEffect_g__Callback_124_0(
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_4AB7A3A & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB7A3A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0LL, 0LL);
  if ( !v3 )
  {
    if ( !effect )
      sub_1BAB678(v3, v4);
    effect->fields._IsOnSublayer_k__BackingField = 1;
  }
}


void __fastcall UIScriptChara___SetEffect_g__Callback_114_0(CommonEffectComponent_o *effect, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_4AB7A39 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB7A39 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0LL, 0LL);
  if ( !v3 )
  {
    if ( !effect )
      sub_1BAB678(v3, v4);
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
  __int64 v17; // x25
  __int64 v18; // x22
  UnityEngine_Transform_o *transform; // x23
  int v20; // s2
  float v21; // s0
  float v22; // s1
  struct UnityEngine_Texture_o *maskTex; // x8
  UIScriptChara___c__DisplayClass39_0_o *v24; // x23
  struct UnityEngine_Texture_o *v25; // x8
  int v26; // w24
  struct UIScriptChara_o *v27; // x8
  UIScriptChara_c *klass; // x9
  float v29; // s0
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4AB7A3B & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___, effect);
    this = (UIScriptChara___c__DisplayClass39_0_o *)sub_1BAB41C(&UnityEngine_Object_TypeInfo, v4);
    byte_4AB7A3B = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_29;
  this = (UIScriptChara___c__DisplayClass39_0_o *)_4__this->fields.baseEffect;
  if ( !this
    || (this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          1,
                                                          (const MethodInfo_2F14610 *)Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___),
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
    sub_1BAB678(this, effect);
  }
  r_low = LODWORD(v7->fields.color.fields.r);
  if ( r_low >= 1 )
  {
    v14 = v10;
    v15 = v11;
    v16 = v12;
    v17 = 0LL;
    do
    {
      if ( (unsigned int)v17 >= r_low )
        sub_1BAB680(this, effect);
      v18 = *((_QWORD *)&v7->fields.color.fields.b + v17);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_29;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0LL);
        this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)v18,
                                                          0LL);
        if ( !this )
          goto LABEL_29;
        *(UnityEngine_Vector3_o *)(&v20 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        if ( !transform )
          goto LABEL_29;
        v21 = v14;
        v22 = v15;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v20 - 2), 0LL);
      }
      else if ( !v18 )
      {
        goto LABEL_29;
      }
      *(struct UnityEngine_Color_o *)(v18 + 96) = v3->fields.color;
      *(struct UnityEngine_Color_o *)(v18 + 112) = v3->fields.particleColor;
      FGOEdgeBlur__set_Texture((FGOEdgeBlur_o *)v18, v3->fields.maskTex, 0LL);
      this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)v18,
                                                        0LL);
      maskTex = v3->fields.maskTex;
      if ( !maskTex )
        goto LABEL_29;
      v24 = this;
      this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))maskTex->klass->vtable._4_get_width.method)(
                                                        v3->fields.maskTex,
                                                        maskTex->klass->vtable._5_set_width.methodPtr);
      v25 = v3->fields.maskTex;
      if ( !v25 )
        goto LABEL_29;
      v26 = (int)this;
      this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v25->klass->vtable._6_get_height.method)(
                                                        v3->fields.maskTex,
                                                        v25->klass->vtable._7_set_height.methodPtr);
      if ( !v24 )
        goto LABEL_29;
      v33.fields.y = (float)(int)this;
      v33.fields.x = (float)v26;
      v33.fields.z = 0.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v24, v33, 0LL);
      FGOEdgeBlur__set_Thickness((FGOEdgeBlur_o *)v18, v3->fields.thick, 0LL);
      FGOEdgeBlur__set_Level((FGOEdgeBlur_o *)v18, v3->fields.level, 0LL);
      this = (UIScriptChara___c__DisplayClass39_0_o *)v3->fields.maskTex;
      if ( !this )
        goto LABEL_29;
      this = (UIScriptChara___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(UIScriptChara___c__DisplayClass39_0_o *, void *))&this->klass[1]._1.byval_arg.bits)(
                                                        this,
                                                        this->klass[1]._1.this_arg.data);
      v27 = v3->fields.__4__this;
      if ( !v27 )
        goto LABEL_29;
      klass = v27->klass;
      if ( (int)this <= 1024 )
        v29 = ((float (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))klass->vtable._5_GetRectEdgeBlur.method)(
                v3->fields.__4__this,
                klass->vtable._6_GetHighRectEdgeBlur.methodPtr);
      else
        v29 = ((float (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))klass->vtable._6_GetHighRectEdgeBlur.method)(
                v3->fields.__4__this,
                klass->vtable._7_GetBodySubTexture.methodPtr);
      FGOEdgeBlur__set_Rect((FGOEdgeBlur_o *)v18, *(UnityEngine_Rect_o *)&v29, 0LL);
      v34.fields.x = v14;
      v34.fields.y = v15;
      v34.fields.z = v16;
      FGOEdgeBlur__setMaskImagePosition((FGOEdgeBlur_o *)v18, v34, 0LL);
      r_low = LODWORD(v7->fields.color.fields.r);
      ++v17;
    }
    while ( (int)v17 < r_low );
  }
}