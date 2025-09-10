void UIScriptChara___cctor(const MethodInfo *method)
{
  if ( (byte_4C29358 & 1) == 0 )
  {
    sub_1C2D490(&UIScriptChara_TypeInfo);
    byte_4C29358 = 1;
  }
  LODWORD(UIScriptChara_TypeInfo->static_fields->UNIT_SPEED) = (struct UIScriptChara_StaticFields)1014350479;
}


void UIScriptChara___ctor(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.backIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptChara__ChangeCharacter(
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
  if ( (byte_4C29325 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17304/*"blink"*/);
    sub_1C2D490(&StringLiteral_19371/*"fade"*/);
    sub_1C2D490(&StringLiteral_18334/*"crossFade"*/);
    byte_4C29325 = 1;
  }
  if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_19371/*"fade"*/, 0) )
  {
    v13 = 2;
  }
  else if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_17304/*"blink"*/, 0) )
  {
    v13 = 3;
  }
  else if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_18334/*"crossFade"*/, 0) )
  {
    v13 = 4;
  }
  else
  {
    v13 = 1;
  }
  ((void (__fastcall *)(UIScriptChara_o *, __int64, System_String_o *, _QWORD, System_Action_o *, const MethodInfo *, long double))this->klass->vtable._10_ChangeCharacter.methodPtr)(
    this,
    v13,
    imageName,
    (unsigned int)faceType,
    callback,
    this->klass->vtable._10_ChangeCharacter.method,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptChara__ChangeCharacter_44667436(
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
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.changeCallback,
    (int32_t)callback,
    (int32_t)imageName,
    *(const MethodInfo **)&faceType);
  v10 = *((_DWORD *)p_changeCallback + 2);
  v11 = *((_DWORD *)p_changeCallback - 8);
  *((float *)p_changeCallback - 7) = speed;
  *(struct System_Action_o **)((char *)p_changeCallback - 20) = 0;
  *((_DWORD *)p_changeCallback + 2) = v10 == 0;
  *((_DWORD *)p_changeCallback + 3) = v10;
  *((_DWORD *)p_changeCallback - 6) = 0;
  if ( v11 == 3 )
    this->fields.changeRange = fminf(speed, 10.0) / 5.0;
  this->fields.isDisp = 0;
}


void UIScriptChara__DestroyEffectByMark(UIScriptChara_o *this, System_String_o *markKey, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4C2934E & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C2934E = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__DestroyByMark(baseEffect, markKey, 0);
}


void UIScriptChara__EndExecuteCameraRoll(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.isRoll = 0;
}


void UIScriptChara__EndExecuteRollAxis(UIScriptChara_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2933D & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4C2933D = 1;
  }
  this->fields.isRoll = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  ScriptManager__moveBackScriptZ((ScriptManager_o *)Instance, 0, 1, 0);
}


void UIScriptChara__EndMove(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.isMove = 0;
}


void UIScriptChara__EndMoveAttack(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.isMove = 0;
}


void UIScriptChara__EndMoveReturn(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
  {
    sub_1C2D6EC(gameObject, v4);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.basePosition, 0);
  this->fields.isMove = 0;
}


void UIScriptChara__EndMoveReturnEaseHalf(UIScriptChara_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UIScriptChara__MoveReturnPositionEase_44672108(this, this->fields.returnDuration, this->fields.returnEaseType, v2);
}


void UIScriptChara__EndMoveReturnHalf(UIScriptChara_o *this, const MethodInfo *method)
{
  UIScriptChara__MoveReturnPosition(this, this->fields.returnDuration, method);
}


void UIScriptChara__EndMoveScale(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseScale; // x0

  baseScale = this->fields.baseScale;
  if ( !baseScale )
    sub_1C2D6EC(0, method);
  UnityEngine_Transform__set_localScale(baseScale, this->fields.baseScaleSize, 0);
  this->fields.isMove = 0;
}


void UIScriptChara__EndRelativeMove(UIScriptChara_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_array *moveRelativePositions; // x9
  int32_t v3; // w8
  int32_t currentMoveRelativeLoopNum; // w8
  int32_t moveRelativeLoopNum; // w9
  int32_t v6; // w8

  moveRelativePositions = this->fields.moveRelativePositions;
  v3 = this->fields.currentMoveRelativeIndex + 1;
  this->fields.currentMoveRelativeIndex = v3;
  if ( !moveRelativePositions )
    sub_1C2D6EC(this, method);
  if ( v3 >= SLODWORD(moveRelativePositions->max_length) )
  {
    currentMoveRelativeLoopNum = this->fields.currentMoveRelativeLoopNum;
    moveRelativeLoopNum = this->fields.moveRelativeLoopNum;
    this->fields.currentMoveRelativeIndex = 0;
    v6 = currentMoveRelativeLoopNum + 1;
    this->fields.currentMoveRelativeLoopNum = v6;
    if ( moveRelativeLoopNum )
    {
      if ( moveRelativeLoopNum <= v6 )
      {
        UIScriptChara__StopMoveRelativePositionLoop(this, method);
        return;
      }
    }
    else
    {
      v6 = 0;
    }
    this->fields.currentMoveRelativeLoopNum = v6;
  }
  UIScriptChara__MoveRelativePosition(this, method);
}


void UIScriptChara__EndRelativeMoveEase(UIScriptChara_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_array *moveRelativePositions; // x9
  int32_t v3; // w8
  int32_t currentMoveRelativeLoopNum; // w8
  int32_t moveRelativeLoopNum; // w9
  int32_t v6; // w8

  moveRelativePositions = this->fields.moveRelativePositions;
  v3 = this->fields.currentMoveRelativeIndex + 1;
  this->fields.currentMoveRelativeIndex = v3;
  if ( !moveRelativePositions )
    sub_1C2D6EC(this, method);
  if ( v3 >= SLODWORD(moveRelativePositions->max_length) )
  {
    currentMoveRelativeLoopNum = this->fields.currentMoveRelativeLoopNum;
    moveRelativeLoopNum = this->fields.moveRelativeLoopNum;
    this->fields.currentMoveRelativeIndex = 0;
    v6 = currentMoveRelativeLoopNum + 1;
    this->fields.currentMoveRelativeLoopNum = v6;
    if ( moveRelativeLoopNum )
    {
      if ( moveRelativeLoopNum <= v6 )
      {
        UIScriptChara__StopMoveRelativePositionLoop(this, method);
        return;
      }
    }
    else
    {
      v6 = 0;
    }
    this->fields.currentMoveRelativeLoopNum = v6;
  }
  UIScriptChara__MoveRelativePositionEase(this, method);
}


void UIScriptChara__EndSet(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseSpecialEffect; // x0
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  float v8; // s10
  float v9; // s10
  float v10; // s10
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  CGThumbnailListItem_o *p_setCallback; // x19
  struct System_Action_o *v14; // x20
  struct System_Action_o *setCallback; // t1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4C20C9A )
  {
    sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
    byte_4C20C9A = 1;
  }
  baseSpecialEffect = this->fields.baseSpecialEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, 0);
  baseSpecialEffect = this->fields.baseSpecialEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  z = localPosition.fields.z;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v17, 0);
  baseSpecialEffect = this->fields.baseEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, 0);
  baseSpecialEffect = this->fields.baseEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v8 = v18.fields.z;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = v8;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v19, 0);
  baseSpecialEffect = this->fields.baseEffectBack;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, 0);
  baseSpecialEffect = this->fields.baseEffectBack;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v9 = v20.fields.z;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v21, 0);
  baseSpecialEffect = this->fields.baseShadowEffect;
  if ( !baseSpecialEffect
    || (baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0)) == 0
    || (v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, 0),
        (baseSpecialEffect = this->fields.baseShadowEffect) == 0)
    || (v10 = v22.fields.z,
        (baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0)) == 0) )
  {
LABEL_22:
    sub_1C2D6EC(baseSpecialEffect, method);
  }
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = v10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v23, 0);
  setCallback = this->fields.setCallback;
  p_setCallback = (CGThumbnailListItem_o *)&this->fields.setCallback;
  v14 = setCallback;
  if ( setCallback )
  {
    p_setCallback->klass = 0;
    sub_1C2D434(p_setCallback, 0, v11, v12);
    ((void (__fastcall *)(intptr_t, intptr_t))v14->fields.invoke_impl)(v14->fields.method_code, v14->fields.method);
  }
}


UnityEngine_Vector3_o UIScriptChara__GetBasePosition(UIScriptChara_o *this, const MethodInfo *method)
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


UnityEngine_Transform_o *UIScriptChara__GetBody(UIScriptChara_o *this, const MethodInfo *method)
{
  return 0;
}


UnityEngine_Texture_o *UIScriptChara__GetBodySubTexture(UIScriptChara_o *this, const MethodInfo *method)
{
  return 0;
}


float UIScriptChara__GetConvertedLocalRotationEulerAnglesToAngle(
        UIScriptChara_o *this,
        System_String_o *axis,
        UnityEngine_Vector3_o localRotationEulerAngles,
        UnityEngine_Vector3_o baseAngles,
        const MethodInfo *method)
{
  float z; // s11
  float y; // s12
  float v7; // s8
  float v8; // s9
  float x; // s10
  float v11; // s0
  float v12; // s0
  float result; // s0
  bool v14; // w0

  z = baseAngles.fields.z;
  y = baseAngles.fields.y;
  v7 = localRotationEulerAngles.fields.z;
  v8 = localRotationEulerAngles.fields.y;
  x = localRotationEulerAngles.fields.x;
  if ( (byte_4C29340 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24841/*"x"*/);
    sub_1C2D490(&StringLiteral_24943/*"y"*/);
    sub_1C2D490(&StringLiteral_24990/*"z"*/);
    byte_4C29340 = 1;
  }
  if ( System_String__op_Equality(axis, (System_String_o *)StringLiteral_24841/*"x"*/, 0) )
  {
    v11 = (float)((float)(v8 - y) * (float)(v8 - y)) + (float)((float)(v7 - z) * (float)(v7 - z));
    v8 = x;
    if ( v11 >= 1.0e-10 )
    {
      v12 = 180.0;
      if ( x > 90.0 )
        v12 = 540.0;
      return v12 - x;
    }
    return v8;
  }
  if ( System_String__op_Equality(axis, (System_String_o *)StringLiteral_24943/*"y"*/, 0) )
    return v8;
  v14 = System_String__op_Equality(axis, (System_String_o *)StringLiteral_24990/*"z"*/, 0);
  result = 0.0;
  if ( v14 )
    return v7;
  return result;
}


float UIScriptChara__GetDepth(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseDepth; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  baseDepth = this->fields.baseDepth;
  if ( !baseDepth )
    sub_1C2D6EC(0, method);
  localPosition = UnityEngine_Transform__get_localPosition(baseDepth, 0);
  return localPosition.fields.z;
}


UnityEngine_Rect_o UIScriptChara__GetHighRectEdgeBlur(UIScriptChara_o *this, const MethodInfo *method)
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


UnityEngine_Vector3_o UIScriptChara__GetOffsetEdgeBlur(UIScriptChara_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
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


UnityEngine_Rect_o UIScriptChara__GetRectEdgeBlur(UIScriptChara_o *this, const MethodInfo *method)
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


UnityEngine_Vector2_o UIScriptChara__GetSizeEdgeBlur(UIScriptChara_o *this, const MethodInfo *method)
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


void UIScriptChara__InitRoll(UIScriptChara_o *this, const MethodInfo *method)
{
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  UIScriptChara__SetRoll(this, 0.0, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, method);
}


bool UIScriptChara__IsBackEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_4C2934F & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C2934F = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy(baseEffectBack, 0);
}


bool UIScriptChara__IsBackEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_4C29351 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C29351 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart(baseEffectBack, 0);
}


bool UIScriptChara__IsBackEffectStart_44683908(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_4C29352 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C29352 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart_43511416(baseEffectBack, n, 0);
}


bool UIScriptChara__IsBackEffect_44683708(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_4C29350 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C29350 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy_43510500(baseEffectBack, n, 0);
}


bool UIScriptChara__IsBusyMoveAlpha(UIScriptChara_o *this, const MethodInfo *method)
{
  return 0;
}


bool UIScriptChara__IsChange(UIScriptChara_o *this, const MethodInfo *method)
{
  return this->fields.changeKind != 0;
}


bool UIScriptChara__IsCut(UIScriptChara_o *this, const MethodInfo *method)
{
  ProgramEffectComponent_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  il2cpp_array_size_t max_length; // x8
  ProgramEffectComponent_array *v7; // x19
  bool v8; // w21
  unsigned __int64 v9; // x22
  ProgramEffectComponent_o **m_Items; // x25
  ProgramEffectComponent_o *v11; // x8
  __int64 naturalAligment; // x11
  ProgramEffectComponent_o *v13; // x20

  if ( (byte_4C29342 & 1) == 0 )
  {
    sub_1C2D490(&CharaCutEffectComponent_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29342 = 1;
  }
  v3 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0);
  if ( !v3 )
LABEL_21:
    sub_1C2D6EC(v3, v4);
  max_length = v3->max_length;
  v7 = v3;
  v8 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    m_Items = v3->m_Items;
    do
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C2D6F4(v3, v4, v5);
      v11 = m_Items[v9];
      if ( v11
        && (naturalAligment = CharaCutEffectComponent_TypeInfo->_2.naturalAligment,
            v11->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (CharaCutEffectComponent_c *)v11->klass->_2.typeHierarchy[naturalAligment - 1] == CharaCutEffectComponent_TypeInfo )
          v13 = m_Items[v9];
        else
          v13 = 0;
      }
      else
      {
        v13 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v3 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
      if ( ((unsigned __int8)v3 & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_21;
        if ( LOBYTE(v13[1].fields.leftAnchor) )
          break;
      }
      LODWORD(max_length) = v7->max_length;
      v8 = (__int64)++v9 < (int)max_length;
    }
    while ( (__int64)v9 < (int)max_length );
  }
  return v8;
}


bool UIScriptChara__IsCutStart(UIScriptChara_o *this, const MethodInfo *method)
{
  ProgramEffectComponent_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  il2cpp_array_size_t max_length; // x8
  ProgramEffectComponent_array *v7; // x19
  bool v8; // w21
  unsigned __int64 v9; // x22
  ProgramEffectComponent_o **m_Items; // x25
  ProgramEffectComponent_o *v11; // x8
  __int64 naturalAligment; // x11
  ProgramEffectComponent_o *v13; // x20

  if ( (byte_4C29343 & 1) == 0 )
  {
    sub_1C2D490(&CharaCutEffectComponent_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29343 = 1;
  }
  v3 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0);
  if ( !v3 )
LABEL_21:
    sub_1C2D6EC(v3, v4);
  max_length = v3->max_length;
  v7 = v3;
  v8 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    m_Items = v3->m_Items;
    do
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C2D6F4(v3, v4, v5);
      v11 = m_Items[v9];
      if ( v11
        && (naturalAligment = CharaCutEffectComponent_TypeInfo->_2.naturalAligment,
            v11->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (CharaCutEffectComponent_c *)v11->klass->_2.typeHierarchy[naturalAligment - 1] == CharaCutEffectComponent_TypeInfo )
          v13 = m_Items[v9];
        else
          v13 = 0;
      }
      else
      {
        v13 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v3 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
      if ( ((unsigned __int8)v3 & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_21;
        if ( !v13->fields.isStart )
          break;
      }
      LODWORD(max_length) = v7->max_length;
      v8 = (__int64)++v9 < (int)max_length;
    }
    while ( (__int64)v9 < (int)max_length );
  }
  return !v8;
}


bool UIScriptChara__IsEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_4C29345 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C29345 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy(baseEffect, 0);
}


bool UIScriptChara__IsEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_4C29347 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C29347 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart(baseEffect, 0);
}


bool UIScriptChara__IsEffectStart_44682440(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4C29348 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C29348 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart_43511416(baseEffect, n, 0);
}


bool UIScriptChara__IsEffect_44682240(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4C29346 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C29346 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy_43510500(baseEffect, n, 0);
}


bool UIScriptChara__IsMove(UIScriptChara_o *this, const MethodInfo *method)
{
  return this->fields.isMove;
}


bool UIScriptChara__IsMoveRelativePosition(UIScriptChara_o *this, const MethodInfo *method)
{
  return this->fields.isMoveRelativePosition;
}


bool UIScriptChara__IsMoveRelativePositionLoop(UIScriptChara_o *this, const MethodInfo *method)
{
  return this->fields.moveRelativeLoopNum == 0;
}


bool UIScriptChara__IsRoll(UIScriptChara_o *this, const MethodInfo *method)
{
  return this->fields.isRoll;
}


bool UIScriptChara__IsShake(UIScriptChara_o *this, const MethodInfo *method)
{
  return this->fields.shakeCycle > 0.0;
}


bool UIScriptChara__IsSpecialEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  return ProgramEffectManager__IsBusy(this->fields.baseSpecialEffect, 0);
}


bool UIScriptChara__IsSpecialEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  return ProgramEffectManager__IsStart(this->fields.baseSpecialEffect, 0);
}


bool UIScriptChara__IsSpecialEffectStart_44681244(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  return ProgramEffectManager__IsStart_43539680(this->fields.baseSpecialEffect, n, 0);
}


bool UIScriptChara__IsSpecialEffect_44681220(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  return ProgramEffectManager__IsBusy_43539012(this->fields.baseSpecialEffect, n, 0);
}


void UIScriptChara__MoveAlpha(UIScriptChara_o *this, float duration, float a, const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  this->fields.isDisp = a > 0.0;
  UIScriptChara__RecoverShadowEffect(this, 0, v4);
}


void UIScriptChara__MoveAlphaSpeed(UIScriptChara_o *this, float speed, float a, const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  this->fields.isDisp = a > 0.0;
  UIScriptChara__RecoverShadowEffect(this, 0, v4);
}


void UIScriptChara__MoveAttack(
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
  UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_4C29337 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6003/*"EndMoveAttack"*/);
    sub_1C2D490(&StringLiteral_22260/*"normal"*/);
    byte_4C29337 = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)kind);
  this->fields.isMove = 1;
  if ( duration <= 0.0 )
    duration = 0.5;
  System_String__op_Equality(kind, (System_String_o *)StringLiteral_22260/*"normal"*/, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  v12 = TweenPosition__Begin(gameObject, duration, v22, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( v12 )
    {
      v12->fields.method = 1;
      v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v12->fields.eventReceiver = v15;
      sub_1C2D434((CGThumbnailListItem_o *)&v12->fields.eventReceiver, (int32_t)v15, v16, v17);
      v18 = StringLiteral_6003/*"EndMoveAttack"*/;
      v12->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6003/*"EndMoveAttack"*/;
      sub_1C2D434((CGThumbnailListItem_o *)&v12->fields.callWhenFinished, v18, v19, v20);
      return;
    }
LABEL_13:
    sub_1C2D6EC(transform, v14);
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_13;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_13;
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v21, 0);
  this->fields.isMove = 0;
}


void UIScriptChara__MovePosition(
        UIScriptChara_o *this,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  TweenPosition_o *v10; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_4C2932A & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6001/*"EndMove"*/);
    byte_4C2932A = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  if ( duration > 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v19.fields.x = x;
    v19.fields.y = y;
    v19.fields.z = z;
    v10 = TweenPosition__Begin(gameObject, duration, v19, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0) )
    {
      transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v10 )
      {
        v10->fields.eventReceiver = transform;
        sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.eventReceiver, (int32_t)transform, v13, v14);
        v15 = StringLiteral_6001/*"EndMove"*/;
        v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6001/*"EndMove"*/;
        sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.callWhenFinished, v15, v16, v17);
        return;
      }
LABEL_12:
      sub_1C2D6EC(transform, v12);
    }
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_12;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_12;
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v18, 0);
  this->fields.isMove = 0;
}


void UIScriptChara__MovePositionEase(
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
  __int64 v13; // x3
  __int64 v14; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x0
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x0
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x0
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x0
  UnityEngine_GameObject_o *v33; // x19
  float v34; // [xsp+Ch] [xbp-64h] BYREF
  float v35; // [xsp+10h] [xbp-60h] BYREF
  float v36; // [xsp+14h] [xbp-5Ch] BYREF
  int v37; // [xsp+18h] [xbp-58h] BYREF
  char v38[4]; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  z = vector.fields.z;
  y = vector.fields.y;
  x = vector.fields.x;
  if ( (byte_4C2932B & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24841/*"x"*/);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_6001/*"EndMove"*/);
    sub_1C2D490(&StringLiteral_18545/*"delay"*/);
    sub_1C2D490(&StringLiteral_24943/*"y"*/);
    sub_1C2D490(&StringLiteral_20915/*"isLocal"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2932B = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)easetype);
  this->fields.isMove = 1;
  if ( time <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( gameObject )
      {
        v39.fields.x = x;
        v39.fields.y = y;
        v39.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v39, 0);
        this->fields.isMove = 0;
        return;
      }
    }
LABEL_11:
    sub_1C2D6EC(gameObject, v16);
  }
  v11 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64822836(v11, 0);
  v38[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v38, v12, v13, v14);
  if ( !v11 )
    goto LABEL_11;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v11->klass->vtable._22_Add.methodPtr)(
    v11,
    StringLiteral_20915/*"isLocal"*/,
    gameObject,
    v11->klass->vtable._22_Add.method);
  v37 = 0;
  v20 = j_il2cpp_value_box_0(float_TypeInfo, &v37, v17, v18, v19);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v11->klass->vtable._22_Add.methodPtr)(
    v11,
    StringLiteral_18545/*"delay"*/,
    v20,
    v11->klass->vtable._22_Add.method);
  v36 = x;
  v24 = j_il2cpp_value_box_0(float_TypeInfo, &v36, v21, v22, v23);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, const MethodInfo *))v11->klass->vtable._22_Add.methodPtr)(
    v11,
    StringLiteral_24841/*"x"*/,
    v24,
    v11->klass->vtable._22_Add.method);
  v35 = y;
  v28 = j_il2cpp_value_box_0(float_TypeInfo, &v35, v25, v26, v27);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v11->klass->vtable._22_Add.methodPtr)(
    v11,
    StringLiteral_24943/*"y"*/,
    v28,
    v11->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, const MethodInfo *))v11->klass->vtable._22_Add.methodPtr)(
    v11,
    StringLiteral_18742/*"easetype"*/,
    easetype,
    v11->klass->vtable._22_Add.method);
  v34 = time;
  v32 = j_il2cpp_value_box_0(float_TypeInfo, &v34, v29, v30, v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v11->klass->vtable._22_Add.methodPtr)(
    v11,
    StringLiteral_24049/*"time"*/,
    v32,
    v11->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v11->klass->vtable._22_Add.methodPtr)(
    v11,
    StringLiteral_22410/*"oncomplete"*/,
    StringLiteral_6001/*"EndMove"*/,
    v11->klass->vtable._22_Add.method);
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63095428(v33, v11, 0);
}


void UIScriptChara__MoveRelativePosition(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIScriptChara_o *v3; // x19
  struct System_Single_array *moveRelativeDurations; // x9
  __int64 currentMoveRelativeIndex; // x8
  struct System_Single_array *v6; // x8
  __int64 v7; // x9
  struct UnityEngine_Vector2_array *v8; // x10
  float *v9; // x8
  float *v10; // x9
  TweenPosition_o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UnityEngine_Vector2_array *moveRelativePositions; // x9
  const MethodInfo *v18; // x1
  UnityEngine_Vector3_o v19; // 0:s1.4,4:s2.4,8:s3.4

  v3 = this;
  if ( (byte_4C29334 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (UIScriptChara_o *)sub_1C2D490(&StringLiteral_6014/*"EndRelativeMove"*/);
    byte_4C29334 = 1;
  }
  moveRelativeDurations = v3->fields.moveRelativeDurations;
  v3->fields.isMoveRelativePosition = 1;
  if ( !moveRelativeDurations )
    goto LABEL_20;
  currentMoveRelativeIndex = v3->fields.currentMoveRelativeIndex;
  if ( (unsigned int)currentMoveRelativeIndex >= LODWORD(moveRelativeDurations->max_length) )
    goto LABEL_21;
  if ( moveRelativeDurations->m_Items[currentMoveRelativeIndex] <= 0.0 )
  {
    moveRelativePositions = v3->fields.moveRelativePositions;
    if ( !moveRelativePositions )
      goto LABEL_20;
    if ( (unsigned int)currentMoveRelativeIndex < LODWORD(moveRelativePositions->max_length) )
    {
      UIScriptChara__SetRelativePosition(v3, moveRelativePositions->m_Items[currentMoveRelativeIndex], method);
      UIScriptChara__EndRelativeMove(v3, v18);
      return;
    }
LABEL_21:
    sub_1C2D6F4(this, method, v2);
  }
  this = (UIScriptChara_o *)v3->fields.baseRelativePosition;
  if ( !this )
    goto LABEL_20;
  this = (UIScriptChara_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = v3->fields.moveRelativeDurations;
  if ( !v6 )
    goto LABEL_20;
  v7 = v3->fields.currentMoveRelativeIndex;
  if ( (unsigned int)v7 >= LODWORD(v6->max_length) )
    goto LABEL_21;
  v8 = v3->fields.moveRelativePositions;
  if ( !v8 )
    goto LABEL_20;
  if ( (unsigned int)v7 >= LODWORD(v8->max_length) )
    goto LABEL_21;
  v9 = (float *)((char *)v6 + 4 * v7);
  v10 = (float *)(&v8->obj.klass + v7);
  v19.fields.x = v10[8];
  v19.fields.y = v10[9];
  v19.fields.z = 0.0;
  v11 = TweenPosition__Begin((UnityEngine_GameObject_o *)this, v9[8], v19, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0) )
  {
    this = (UIScriptChara_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
    if ( v11 )
    {
      v11->fields.eventReceiver = (struct UnityEngine_GameObject_o *)this;
      sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.eventReceiver, (int32_t)this, v12, v13);
      v14 = StringLiteral_6014/*"EndRelativeMove"*/;
      v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6014/*"EndRelativeMove"*/;
      sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.callWhenFinished, v14, v15, v16);
      return;
    }
LABEL_20:
    sub_1C2D6EC(this, method);
  }
}


void UIScriptChara__MoveRelativePositionEase(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIScriptChara_o *v3; // x19
  struct System_Single_array *moveRelativeDurations; // x9
  __int64 currentMoveRelativeIndex; // x8
  System_Collections_Hashtable_o *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x0
  __int64 v14; // x3
  __int64 v15; // x4
  struct UnityEngine_Vector2_array *v16; // x8
  __int64 v17; // x9
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x4
  struct UnityEngine_Vector2_array *v21; // x8
  __int64 v22; // x9
  __int64 v23; // x0
  __int64 v24; // x3
  __int64 v25; // x4
  struct System_Single_array *v26; // x8
  __int64 v27; // x9
  __int64 v28; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v30; // x19
  struct UnityEngine_Vector2_array *moveRelativePositions; // x9
  const MethodInfo *v32; // x1
  float v33; // [xsp+Ch] [xbp-34h] BYREF
  float y; // [xsp+10h] [xbp-30h] BYREF
  float x; // [xsp+14h] [xbp-2Ch] BYREF
  int v36; // [xsp+18h] [xbp-28h] BYREF
  char v37[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4C29335 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24841/*"x"*/);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_6015/*"EndRelativeMoveEase"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22412/*"oncompletetarget"*/);
    sub_1C2D490(&StringLiteral_18545/*"delay"*/);
    sub_1C2D490(&StringLiteral_24943/*"y"*/);
    sub_1C2D490(&StringLiteral_20915/*"isLocal"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    this = (UIScriptChara_o *)sub_1C2D490(&iTween_TypeInfo);
    byte_4C29335 = 1;
  }
  moveRelativeDurations = v3->fields.moveRelativeDurations;
  v3->fields.isMoveRelativePosition = 1;
  if ( !moveRelativeDurations )
    goto LABEL_20;
  currentMoveRelativeIndex = v3->fields.currentMoveRelativeIndex;
  if ( (unsigned int)currentMoveRelativeIndex >= LODWORD(moveRelativeDurations->max_length) )
    goto LABEL_21;
  if ( moveRelativeDurations->m_Items[currentMoveRelativeIndex] <= 0.0 )
  {
    moveRelativePositions = v3->fields.moveRelativePositions;
    if ( moveRelativePositions )
    {
      if ( (unsigned int)currentMoveRelativeIndex < LODWORD(moveRelativePositions->max_length) )
      {
        UIScriptChara__SetRelativePosition(v3, moveRelativePositions->m_Items[currentMoveRelativeIndex], method);
        UIScriptChara__EndRelativeMoveEase(v3, v32);
        return;
      }
      goto LABEL_21;
    }
LABEL_20:
    sub_1C2D6EC(this, method);
  }
  v6 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64822836(v6, 0);
  v37[0] = 1;
  this = (UIScriptChara_o *)j_il2cpp_value_box_0(bool_TypeInfo, v37, v7, v8, v9);
  if ( !v6 )
    goto LABEL_20;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UIScriptChara_o *, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
    v6,
    StringLiteral_20915/*"isLocal"*/,
    this,
    v6->klass->vtable._22_Add.method);
  v36 = 0;
  v13 = j_il2cpp_value_box_0(float_TypeInfo, &v36, v10, v11, v12);
  this = (UIScriptChara_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
                              v6,
                              StringLiteral_18545/*"delay"*/,
                              v13,
                              v6->klass->vtable._22_Add.method);
  v16 = v3->fields.moveRelativePositions;
  if ( !v16 )
    goto LABEL_20;
  v17 = v3->fields.currentMoveRelativeIndex;
  if ( (unsigned int)v17 >= LODWORD(v16->max_length) )
    goto LABEL_21;
  x = v16->m_Items[v17].fields.x;
  v18 = j_il2cpp_value_box_0(float_TypeInfo, &x, v2, v14, v15);
  this = (UIScriptChara_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
                              v6,
                              StringLiteral_24841/*"x"*/,
                              v18,
                              v6->klass->vtable._22_Add.method);
  v21 = v3->fields.moveRelativePositions;
  if ( !v21 )
    goto LABEL_20;
  v22 = v3->fields.currentMoveRelativeIndex;
  if ( (unsigned int)v22 >= LODWORD(v21->max_length) )
    goto LABEL_21;
  y = v21->m_Items[v22].fields.y;
  v23 = j_il2cpp_value_box_0(float_TypeInfo, &y, v2, v19, v20);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
    v6,
    StringLiteral_24943/*"y"*/,
    v23,
    v6->klass->vtable._22_Add.method);
  this = (UIScriptChara_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, struct System_String_o *, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
                              v6,
                              StringLiteral_18742/*"easetype"*/,
                              v3->fields.moveRelativeEaseType,
                              v6->klass->vtable._22_Add.method);
  v26 = v3->fields.moveRelativeDurations;
  if ( !v26 )
    goto LABEL_20;
  v27 = v3->fields.currentMoveRelativeIndex;
  if ( (unsigned int)v27 >= LODWORD(v26->max_length) )
LABEL_21:
    sub_1C2D6F4(this, method, v2);
  v33 = v26->m_Items[v27];
  v28 = j_il2cpp_value_box_0(float_TypeInfo, &v33, v2, v24, v25);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
    v6,
    StringLiteral_24049/*"time"*/,
    v28,
    v6->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
    v6,
    StringLiteral_22410/*"oncomplete"*/,
    StringLiteral_6015/*"EndRelativeMoveEase"*/,
    v6->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v6->klass->vtable._22_Add.methodPtr)(
    v6,
    StringLiteral_22412/*"oncompletetarget"*/,
    gameObject,
    v6->klass->vtable._22_Add.method);
  this = (UIScriptChara_o *)v3->fields.baseRelativePosition;
  if ( !this )
    goto LABEL_20;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63095428(v30, v6, 0);
}


void UIScriptChara__MoveRelativePositionEaseLoop(
        UIScriptChara_o *this,
        UnityEngine_Vector2_array *movePos,
        System_Single_array *duration,
        int32_t loopNum,
        System_String_o *easeType,
        bool isFastPlay,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1

  UIScriptChara__StopRelativeMoveTween(this, (const MethodInfo *)movePos);
  this->fields.moveRelativePositions = movePos;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.moveRelativePositions, (int32_t)movePos, v13, v14);
  this->fields.moveRelativeDurations = duration;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.moveRelativeDurations, (int32_t)duration, v15, v16);
  this->fields.moveRelativeLoopNum = loopNum;
  this->fields.moveRelativeEaseType = easeType;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.moveRelativeEaseType, (int32_t)easeType, v17, v18);
  this->fields.currentMoveRelativeIndex = 0;
  this->fields.currentMoveRelativeLoopNum = 0;
  if ( isFastPlay )
    UIScriptChara__StopMoveRelativePositionLoop(this, v19);
  else
    UIScriptChara__MoveRelativePositionEase(this, v19);
}


void UIScriptChara__MoveRelativePositionLoop(
        UIScriptChara_o *this,
        UnityEngine_Vector2_array *movePos,
        System_Single_array *duration,
        int32_t loopNum,
        bool isFastPlay,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1

  UIScriptChara__StopRelativeMoveTween(this, (const MethodInfo *)movePos);
  this->fields.moveRelativePositions = movePos;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.moveRelativePositions, (int32_t)movePos, v11, v12);
  this->fields.moveRelativeDurations = duration;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.moveRelativeDurations, (int32_t)duration, v13, v14);
  this->fields.currentMoveRelativeIndex = 0;
  this->fields.moveRelativeLoopNum = loopNum;
  this->fields.currentMoveRelativeLoopNum = 0;
  if ( isFastPlay )
    UIScriptChara__StopMoveRelativePositionLoop(this, v15);
  else
    UIScriptChara__MoveRelativePosition(this, v15);
}


void UIScriptChara__MoveReturnPosition(UIScriptChara_o *this, float duration, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TweenPosition_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C2932C & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6004/*"EndMoveReturn"*/);
    byte_4C2932C = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  if ( duration <= 0.0 )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7 = TweenPosition__Begin(gameObject, duration, this->fields.basePosition, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0) )
  {
    v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !v7 )
      sub_1C2D6EC(v8, v9);
    v7->fields.eventReceiver = v8;
    sub_1C2D434((CGThumbnailListItem_o *)&v7->fields.eventReceiver, (int32_t)v8, v10, v11);
    v12 = StringLiteral_6004/*"EndMoveReturn"*/;
    v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6004/*"EndMoveReturn"*/;
    sub_1C2D434((CGThumbnailListItem_o *)&v7->fields.callWhenFinished, v12, v13, v14);
  }
  else
  {
LABEL_9:
    UIScriptChara__EndMoveReturn(this, v5);
  }
}


void UIScriptChara__MoveReturnPositionEase(
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Hashtable_o *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x0
  UnityEngine_GameObject_o *v38; // x19
  float returnDuration; // [xsp+Ch] [xbp-54h] BYREF
  float v40; // [xsp+10h] [xbp-50h] BYREF
  float v41; // [xsp+14h] [xbp-4Ch] BYREF
  int v42; // [xsp+18h] [xbp-48h] BYREF
  char v43[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C2932E & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24841/*"x"*/);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_6005/*"EndMoveReturnEaseHalf"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_18545/*"delay"*/);
    sub_1C2D490(&StringLiteral_24943/*"y"*/);
    sub_1C2D490(&StringLiteral_20915/*"isLocal"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2932E = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)startEaseType);
  this->fields.isMove = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_11;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_11;
  this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveReturn(this, v15);
    return;
  }
  this->fields.returnEaseType = returnEaseType;
  this->fields.returnDuration = time * 0.5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.returnEaseType, (int32_t)returnEaseType, v16, v17);
  v18 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64822836(v18, 0);
  v43[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v43, v19, v20, v21);
  if ( !v18 )
LABEL_11:
    sub_1C2D6EC(gameObject, v14);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v18->klass->vtable._22_Add.methodPtr)(
    v18,
    StringLiteral_20915/*"isLocal"*/,
    gameObject,
    v18->klass->vtable._22_Add.method);
  v42 = 0;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &v42, v22, v23, v24);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v18->klass->vtable._22_Add.methodPtr)(
    v18,
    StringLiteral_18545/*"delay"*/,
    v25,
    v18->klass->vtable._22_Add.method);
  v41 = x;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v41, v26, v27, v28);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, const MethodInfo *))v18->klass->vtable._22_Add.methodPtr)(
    v18,
    StringLiteral_24841/*"x"*/,
    v29,
    v18->klass->vtable._22_Add.method);
  v40 = y;
  v33 = j_il2cpp_value_box_0(float_TypeInfo, &v40, v30, v31, v32);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v18->klass->vtable._22_Add.methodPtr)(
    v18,
    StringLiteral_24943/*"y"*/,
    v33,
    v18->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, const MethodInfo *))v18->klass->vtable._22_Add.methodPtr)(
    v18,
    StringLiteral_18742/*"easetype"*/,
    startEaseType,
    v18->klass->vtable._22_Add.method);
  returnDuration = this->fields.returnDuration;
  v37 = j_il2cpp_value_box_0(float_TypeInfo, &returnDuration, v34, v35, v36);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v18->klass->vtable._22_Add.methodPtr)(
    v18,
    StringLiteral_24049/*"time"*/,
    v37,
    v18->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v18->klass->vtable._22_Add.methodPtr)(
    v18,
    StringLiteral_22410/*"oncomplete"*/,
    StringLiteral_6005/*"EndMoveReturnEaseHalf"*/,
    v18->klass->vtable._22_Add.method);
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63095428(v38, v18, 0);
}


void UIScriptChara__MoveReturnPositionEase_44672108(
        UIScriptChara_o *this,
        float time,
        System_String_o *returnEaseType,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  System_Collections_Hashtable_o *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float v31; // [xsp+Ch] [xbp-44h] BYREF
  float y; // [xsp+10h] [xbp-40h] BYREF
  float x; // [xsp+14h] [xbp-3Ch] BYREF
  int v34; // [xsp+18h] [xbp-38h] BYREF
  char v35[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C2932F & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24841/*"x"*/);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_18545/*"delay"*/);
    sub_1C2D490(&StringLiteral_6004/*"EndMoveReturn"*/);
    sub_1C2D490(&StringLiteral_24943/*"y"*/);
    sub_1C2D490(&StringLiteral_20915/*"isLocal"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2932F = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)returnEaseType);
  this->fields.isMove = 1;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveReturn(this, v7);
  }
  else
  {
    v8 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_64822836(v8, 0);
    v35[0] = 1;
    v12 = j_il2cpp_value_box_0(bool_TypeInfo, v35, v9, v10, v11);
    if ( !v8 )
      sub_1C2D6EC(v12, v13);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
      v8,
      StringLiteral_20915/*"isLocal"*/,
      v12,
      v8->klass->vtable._22_Add.method);
    v34 = 0;
    v17 = j_il2cpp_value_box_0(float_TypeInfo, &v34, v14, v15, v16);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
      v8,
      StringLiteral_18545/*"delay"*/,
      v17,
      v8->klass->vtable._22_Add.method);
    x = this->fields.basePosition.fields.x;
    v21 = j_il2cpp_value_box_0(float_TypeInfo, &x, v18, v19, v20);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
      v8,
      StringLiteral_24841/*"x"*/,
      v21,
      v8->klass->vtable._22_Add.method);
    y = this->fields.basePosition.fields.y;
    v25 = j_il2cpp_value_box_0(float_TypeInfo, &y, v22, v23, v24);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
      v8,
      StringLiteral_24943/*"y"*/,
      v25,
      v8->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
      v8,
      StringLiteral_18742/*"easetype"*/,
      returnEaseType,
      v8->klass->vtable._22_Add.method);
    v31 = time;
    v29 = j_il2cpp_value_box_0(float_TypeInfo, &v31, v26, v27, v28);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
      v8,
      StringLiteral_24049/*"time"*/,
      v29,
      v8->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
      v8,
      StringLiteral_22410/*"oncomplete"*/,
      StringLiteral_6004/*"EndMoveReturn"*/,
      v8->klass->vtable._22_Add.method);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_63095428(gameObject, v8, 0);
  }
}


void UIScriptChara__MoveReturnPosition_44670912(
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
  TweenPosition_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Vector3_o v19; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_4C2932D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6006/*"EndMoveReturnHalf"*/);
    byte_4C2932D = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_12;
  this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  if ( duration > 0.0 )
  {
    this->fields.returnDuration = duration * 0.5;
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v19.fields.x = x;
    v19.fields.y = y;
    v19.fields.z = z;
    v13 = TweenPosition__Begin(v12, this->fields.returnDuration, v19, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v13 )
      {
        v13->fields.eventReceiver = gameObject;
        sub_1C2D434((CGThumbnailListItem_o *)&v13->fields.eventReceiver, (int32_t)gameObject, v14, v15);
        v16 = StringLiteral_6006/*"EndMoveReturnHalf"*/;
        v13->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6006/*"EndMoveReturnHalf"*/;
        sub_1C2D434((CGThumbnailListItem_o *)&v13->fields.callWhenFinished, v16, v17, v18);
        return;
      }
LABEL_12:
      sub_1C2D6EC(gameObject, v10);
    }
  }
  UIScriptChara__EndMoveReturn(this, v11);
}


void UIScriptChara__MoveScale(UIScriptChara_o *this, float duration, float s, const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  UnityEngine_Component_o *baseScale; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TweenScale_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C29331 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6007/*"EndMoveScale"*/);
    byte_4C29331 = 1;
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
    gameObject = UnityEngine_Component__get_gameObject(baseScale, 0);
    v10 = TweenScale__Begin(gameObject, duration, this->fields.baseScaleSize, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0) )
    {
      baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v10 )
      {
        v10->fields.eventReceiver = (struct UnityEngine_GameObject_o *)baseScale;
        sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.eventReceiver, (int32_t)baseScale, v11, v12);
        v13 = StringLiteral_6007/*"EndMoveScale"*/;
        v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6007/*"EndMoveScale"*/;
        sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.callWhenFinished, v13, v14, v15);
        return;
      }
LABEL_11:
      sub_1C2D6EC(baseScale, v7);
    }
  }
  UIScriptChara__EndMoveScale(this, v7);
}


void UIScriptChara__MoveScaleEase(
        UIScriptChara_o *this,
        float scale,
        float time,
        System_String_o *easetype,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  System_Collections_Hashtable_o *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  UnityEngine_Component_o *baseScale; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x0
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v29; // x19
  float v30; // [xsp+0h] [xbp-50h] BYREF
  float y; // [xsp+4h] [xbp-4Ch] BYREF
  float x; // [xsp+8h] [xbp-48h] BYREF
  char v33[4]; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C29332 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24841/*"x"*/);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22412/*"oncompletetarget"*/);
    sub_1C2D490(&StringLiteral_24943/*"y"*/);
    sub_1C2D490(&StringLiteral_20915/*"isLocal"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&StringLiteral_6007/*"EndMoveScale"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C29332 = 1;
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
    v10 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_64822836(v10, 0);
    v33[0] = 1;
    baseScale = (UnityEngine_Component_o *)j_il2cpp_value_box_0(bool_TypeInfo, v33, v11, v12, v13);
    if ( !v10 )
      goto LABEL_10;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_Component_o *, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_20915/*"isLocal"*/,
      baseScale,
      v10->klass->vtable._22_Add.method);
    x = this->fields.baseScaleSize.fields.x;
    v19 = j_il2cpp_value_box_0(float_TypeInfo, &x, v16, v17, v18);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_24841/*"x"*/,
      v19,
      v10->klass->vtable._22_Add.method);
    y = this->fields.baseScaleSize.fields.y;
    v23 = j_il2cpp_value_box_0(float_TypeInfo, &y, v20, v21, v22);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_24943/*"y"*/,
      v23,
      v10->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_18742/*"easetype"*/,
      easetype,
      v10->klass->vtable._22_Add.method);
    v30 = time;
    v27 = j_il2cpp_value_box_0(float_TypeInfo, &v30, v24, v25, v26);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_24049/*"time"*/,
      v27,
      v10->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_22410/*"oncomplete"*/,
      StringLiteral_6007/*"EndMoveScale"*/,
      v10->klass->vtable._22_Add.method);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_22412/*"oncompletetarget"*/,
      gameObject,
      v10->klass->vtable._22_Add.method);
    baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
    if ( !baseScale )
LABEL_10:
      sub_1C2D6EC(baseScale, v15);
    v29 = UnityEngine_Component__get_gameObject(baseScale, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ScaleTo_63100956(v29, v10, 0);
  }
}


void UIScriptChara__OnShake(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseShake; // x20
  float v4; // s8
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C29341 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9955/*"OnShake"*/);
    byte_4C29341 = 1;
  }
  if ( this->fields.shakeCycle > 0.0
    && (this->fields.shakeTime == 0.0 || UnityEngine_Time__get_time(0) < this->fields.shakeTime) )
  {
    baseShake = this->fields.baseShake;
    v4 = UnityEngine_Random__Range(-this->fields.shakeX, this->fields.shakeX, 0);
    v7 = UnityEngine_Random__Range(-this->fields.shakeY, this->fields.shakeY, 0);
    if ( baseShake )
    {
      v9.fields.y = v7;
      v9.fields.z = 0.0;
      v9.fields.x = v4;
      UnityEngine_Transform__set_localPosition(baseShake, v9, 0);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9955/*"OnShake"*/,
        this->fields.shakeCycle,
        0);
      return;
    }
LABEL_12:
    sub_1C2D6EC(v5, v6);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_71148584(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9955/*"OnShake"*/,
    0);
  v8 = this->fields.baseShake;
  if ( !byte_4C20DA1 )
  {
    v5 = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v8 )
    goto LABEL_12;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  this->fields.shakeCycle = 0.0;
}


// local variable allocation has failed, the output may be wrong!
void UIScriptChara__RecoverShadowEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  if ( this->fields.isShadow )
    UIScriptChara__StartShadowEffect(this, (const MethodInfo *)isSkip);
  else
    UIScriptChara__StopShadowEffect(this, isSkip, method);
}


void UIScriptChara__ResumeBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_4C29354 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C29354 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume(baseEffectBack, isSkip, 0);
}


void UIScriptChara__ResumeBackEffect_44684604(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_4C29355 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C29355 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume_43517440(baseEffectBack, n, isSkip, 0);
}


void UIScriptChara__ResumeCutin(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ;
}


void UIScriptChara__ResumeEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4C2934A & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C2934A = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume(baseEffect, isSkip, 0);
}


void UIScriptChara__ResumeEffect_44683136(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_4C2934B & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C2934B = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume_43517440(baseEffect, n, isSkip, 0);
}


void UIScriptChara__ResumeSpecialEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ProgramEffectManager__Resume(this->fields.baseSpecialEffect, isSkip, 0);
}


void UIScriptChara__ResumeSpecialEffect_44682108(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  ProgramEffectManager__Resume_43542080(this->fields.baseSpecialEffect, n, isSkip, 0);
}


System_Collections_IEnumerator_o *UIScriptChara__RollAxis(
        UIScriptChara_o *this,
        System_String_o *axis,
        float angle,
        float duration,
        const MethodInfo *method)
{
  __int64 v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C2933B & 1) == 0 )
  {
    sub_1C2D490(&UIScriptChara__RollAxis_d__121_TypeInfo);
    byte_4C2933B = 1;
  }
  v9 = sub_1C2D6DC(UIScriptChara__RollAxis_d__121_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 40) = axis;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 40), (int32_t)axis, v12, v13);
  *(float *)(v9 + 48) = angle;
  *(float *)(v9 + 52) = duration;
  return (System_Collections_IEnumerator_o *)v9;
}


void UIScriptChara__SetAlpha(UIScriptChara_o *this, float a, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  this->fields.isDisp = a > 0.0;
  UIScriptChara__RecoverShadowEffect(this, 0, v3);
}


void UIScriptChara__SetBackEffect(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        bool isPause,
        int32_t flip,
        bool isOnSublayer,
        const MethodInfo *method)
{
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  UIScriptChara__SetBackEffect_44684156(
    this,
    n,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    isSkip,
    isPause,
    flip,
    isOnSublayer,
    method);
}


void UIScriptChara__SetBackEffect_44684156(
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
  if ( (byte_4C29353 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    sub_1C2D490(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_1C2D490(&Method_UIScriptChara__SetBackEffect_g__Callback_161_0__);
    byte_4C29353 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( isOnSublayer )
  {
    v18 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1C2D6DC(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(v18, 0, Method_UIScriptChara__SetBackEffect_g__Callback_161_0__, 0);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v19.fields.y = y;
    v19.fields.z = z;
    v19.fields.x = x;
    CommonEffectManager__Create_43515944(baseEffectBack, n, v19, v18, isSkip, isPause, flip, 0);
  }
  else
  {
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v20.fields.y = y;
    v20.fields.z = z;
    v20.fields.x = x;
    CommonEffectManager__Create_43515752(baseEffectBack, n, v20, isSkip, isPause, flip, 0);
  }
}


void UIScriptChara__SetBasePosition(UIScriptChara_o *this, UnityEngine_Vector3_o v, const MethodInfo *method)
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
  if ( !transform )
    sub_1C2D6EC(0, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v9, 0);
  this->fields.isMove = 0;
}


void UIScriptChara__SetCharacter(
        UIScriptChara_o *this,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  this->fields.setCallback = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.setCallback,
    (int32_t)callback,
    faceType,
    (const MethodInfo *)callback);
}


void UIScriptChara__SetCutin(
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


void UIScriptChara__SetCutout(UIScriptChara_o *this, float time, bool isSkip, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void UIScriptChara__SetDepth(UIScriptChara_o *this, int32_t d, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseDepth; // x0
  float v6; // s2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  baseDepth = this->fields.baseDepth;
  if ( !baseDepth
    || (localPosition = UnityEngine_Transform__get_localPosition(baseDepth, 0), (baseDepth = this->fields.baseDepth) == 0) )
  {
    sub_1C2D6EC(baseDepth, *(_QWORD *)&d);
  }
  v6 = (float)-d * 10.0;
  UnityEngine_Transform__set_localPosition(baseDepth, localPosition, 0);
}


void UIScriptChara__SetEffect(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        bool isPause,
        int32_t flip,
        bool isOnSublayer,
        const MethodInfo *method)
{
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  UIScriptChara__SetEffect_44682688(
    this,
    n,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    isSkip,
    isPause,
    flip,
    isOnSublayer,
    method);
}


void UIScriptChara__SetEffectEdgeBlur(
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
  __int64 v23; // x25
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UnityEngine_Object_o *v31; // x24
  CommonEffectLoadComponent_LoadEndHandler_o *v32; // x24
  UnityEngine_GameObject_o *baseEffect; // x23
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  float a; // [xsp+4Ch] [xbp-44h]
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  a = particleColor.fields.a;
  b = particleColor.fields.b;
  g = particleColor.fields.g;
  r = particleColor.fields.r;
  v17 = color.fields.a;
  v18 = color.fields.b;
  v19 = color.fields.g;
  v20 = color.fields.r;
  if ( (byte_4C29326 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    sub_1C2D490(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_UIScriptChara___c__DisplayClass58_0__SetEffectEdgeBlur_b__0__);
    sub_1C2D490(&UIScriptChara___c__DisplayClass58_0_TypeInfo);
    byte_4C29326 = 1;
  }
  v23 = sub_1C2D6DC(UIScriptChara___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0);
  if ( !v23 )
    sub_1C2D6EC(v24, v25);
  *(_QWORD *)(v23 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v23 + 16), (int32_t)this, v26, v27);
  *(float *)(v23 + 24) = v20;
  *(float *)(v23 + 28) = v19;
  *(float *)(v23 + 32) = v18;
  *(float *)(v23 + 36) = v17;
  *(float *)(v23 + 40) = r;
  *(float *)(v23 + 44) = g;
  *(float *)(v23 + 48) = b;
  *(float *)(v23 + 52) = a;
  *(float *)(v23 + 64) = thick;
  *(_DWORD *)(v23 + 68) = level;
  v28 = ((__int64 (__fastcall *)(UIScriptChara_o *, const MethodInfo *))this->klass->vtable._7_GetBodySubTexture.methodPtr)(
          this,
          this->klass->vtable._7_GetBodySubTexture.method);
  *(_QWORD *)(v23 + 56) = v28;
  sub_1C2D434((CGThumbnailListItem_o *)(v23 + 56), v28, v29, v30);
  v31 = *(UnityEngine_Object_o **)(v23 + 56);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v31, 0, 0) )
  {
    v32 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1C2D6DC(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v32,
      (Il2CppObject *)v23,
      Method_UIScriptChara___c__DisplayClass58_0__SetEffectEdgeBlur_b__0__,
      0);
    baseEffect = this->fields.baseEffect;
    if ( !byte_4C20DA1 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v39.fields.x = x;
    v39.fields.y = y;
    v39.fields.z = z;
    CommonEffectManager__Create_43515944(baseEffect, effectName, v39, v32, isSkip, isPause, flip, 0);
  }
}


void UIScriptChara__SetEffect_44682688(
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
  if ( (byte_4C29349 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    sub_1C2D490(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_1C2D490(&Method_UIScriptChara__SetEffect_g__Callback_150_0__);
    byte_4C29349 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( isOnSublayer )
  {
    v18 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1C2D6DC(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(v18, 0, Method_UIScriptChara__SetEffect_g__Callback_150_0__, 0);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v19.fields.y = y;
    v19.fields.z = z;
    v19.fields.x = x;
    CommonEffectManager__Create_43515944(baseEffect, n, v19, v18, isSkip, isPause, flip, 0);
  }
  else
  {
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v20.fields.y = y;
    v20.fields.z = z;
    v20.fields.x = x;
    CommonEffectManager__Create_43515752(baseEffect, n, v20, isSkip, isPause, flip, 0);
  }
}


void UIScriptChara__SetFace(UIScriptChara_o *this, int32_t faceType, float fadeTime, const MethodInfo *method)
{
  ;
}


void UIScriptChara__SetFilter(
        UIScriptChara_o *this,
        System_String_o *filterName,
        UnityEngine_Color_o filterColor,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.filterName, (int32_t)filterName, (int32_t)method, v4);
  *((float *)p_filterName + 2) = r;
  *((float *)p_filterName + 3) = g;
  *((float *)p_filterName + 4) = b;
  *((float *)p_filterName + 5) = a;
}


void UIScriptChara__SetFullScreenScaleType(UIScriptChara_o *this, int32_t type, const MethodInfo *method)
{
  ;
}


void UIScriptChara__SetMaskInteraction(UIScriptChara_o *this, int32_t maskInteraction, const MethodInfo *method)
{
  ;
}


void UIScriptChara__SetMaterial(UIScriptChara_o *this, const MethodInfo *method)
{
  ;
}


void UIScriptChara__SetPosition(UIScriptChara_o *this, UnityEngine_Vector3_o v, const MethodInfo *method)
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C2D6EC(0, v7);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v8, 0);
}


void UIScriptChara__SetRelativePosition(UIScriptChara_o *this, UnityEngine_Vector2_o pos, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v6; // x1
  UnityEngine_Transform_o *baseRelativePosition; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  UIScriptChara__StopRelativeMoveTween(this, method);
  baseRelativePosition = this->fields.baseRelativePosition;
  if ( !baseRelativePosition )
    sub_1C2D6EC(0, v6);
  v8.fields.z = 0.0;
  v8.fields.x = x;
  v8.fields.y = y;
  UnityEngine_Transform__set_localPosition(baseRelativePosition, v8, 0);
}


bool UIScriptChara__SetRoll(
        UIScriptChara_o *this,
        float rollZ,
        UnityEngine_Vector3_o centerOffset,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x1
  struct UnityEngine_Transform_o *baseRoll1; // x0
  float v11; // s11
  float v12; // s12
  float v13; // s13
  float w; // s14
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_4C29338 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29338 = 1;
  }
  UIScriptChara__StopRollAxisTween(this, method);
  v17.fields.y = 0.0;
  v17.fields.z = rollZ * 0.017453;
  v17.fields.x = 0.0;
  v20 = UnityEngine_Quaternion__Internal_FromEulerRad(v17, 0);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_13;
  v11 = v20.fields.x;
  v12 = v20.fields.y;
  v13 = v20.fields.z;
  w = v20.fields.w;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)baseRoll1,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)baseRoll1 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_13;
  v21.fields.x = v11;
  v21.fields.y = v12;
  v21.fields.z = v13;
  v21.fields.w = w;
  UnityEngine_Transform__set_localRotation(baseRoll1, v21, 0);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1
    || (v18.fields.z = -z,
        v18.fields.y = -y,
        v18.fields.x = -x,
        UnityEngine_Transform__set_localPosition(baseRoll1, v18, 0),
        (baseRoll1 = this->fields.baseRoll2) == 0) )
  {
LABEL_13:
    sub_1C2D6EC(baseRoll1, v9);
  }
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  UnityEngine_Transform__set_localPosition(baseRoll1, v19, 0);
  this->fields.isRoll = 0;
  return 1;
}


void UIScriptChara__SetScale(UIScriptChara_o *this, float v, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  UIScriptChara__StopMoveScaleTween(this, method);
  this->fields.baseScaleSize.fields.x = v;
  this->fields.baseScaleSize.fields.y = v;
  this->fields.baseScaleSize.fields.z = 1.0;
  UIScriptChara__EndMoveScale(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptChara__SetShadow(UIScriptChara_o *this, bool isShadow, bool isSkip, const MethodInfo *method)
{
  if ( this->fields.isShadow != isShadow )
  {
    this->fields.isShadow = isShadow;
    UIScriptChara__RecoverShadowEffect(this, isSkip, (const MethodInfo *)isSkip);
  }
}


void UIScriptChara__SetSortingOrder(UIScriptChara_o *this, int32_t order, const MethodInfo *method)
{
  ;
}


void UIScriptChara__SetSpecialEffect(
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
  float v20; // s4
  float v21; // s5
  float v22; // s6
  UnityEngine_Object_o *CharaEffect; // x22
  uint32_t v24; // w0
  __int64 *v25; // x8
  const MethodInfo *v26; // x2
  float colora; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C29344 & 1) == 0 )
  {
    colora = color.fields.a;
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_24812/*"wipe"*/);
    sub_1C2D490(&StringLiteral_16816/*"appearanceReverse"*/);
    sub_1C2D490(&StringLiteral_18440/*"darkEnemyErasure"*/);
    sub_1C2D490(&StringLiteral_24818/*"wipeTimeRe"*/);
    sub_1C2D490(&StringLiteral_18441/*"darkWipe"*/);
    sub_1C2D490(&StringLiteral_19468/*"flashErasure"*/);
    sub_1C2D490(&StringLiteral_16815/*"appearance"*/);
    sub_1C2D490(&StringLiteral_19054/*"erasure"*/);
    sub_1C2D490(&StringLiteral_19055/*"erasureReverse"*/);
    sub_1C2D490(&StringLiteral_19016/*"enemyErasure"*/);
    sub_1C2D490(&StringLiteral_24817/*"wipeTime"*/);
    color.fields.a = colora;
    byte_4C29344 = 1;
  }
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  v20 = r;
  v21 = g;
  v22 = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v28,
                                          time,
                                          color,
                                          range,
                                          isSkip,
                                          isPause,
                                          0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(CharaEffect, 0, 0) )
  {
    v24 = PrivateImplementationDetails___ComputeStringHash(n, 0);
    if ( v24 > 0x8D759330 )
    {
      if ( v24 > 0xD4B34506 )
      {
        switch ( v24 )
        {
          case 0xE7555186:
            v25 = &StringLiteral_24812/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v25 = &StringLiteral_18441/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v25 = &StringLiteral_16815/*"appearance"*/;
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
            v25 = &StringLiteral_24818/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v25 = &StringLiteral_19468/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v25 = &StringLiteral_19055/*"erasureReverse"*/;
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
          v25 = &StringLiteral_19054/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v25 = &StringLiteral_19016/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v25 = &StringLiteral_16816/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v24 == 242689791 )
    {
      v25 = &StringLiteral_24817/*"wipeTime"*/;
    }
    else
    {
      if ( v24 != 1242641086 )
        return;
      v25 = &StringLiteral_18440/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v25, 0) )
      UIScriptChara__StopShadowEffect(this, isSkip, v26);
  }
}


void UIScriptChara__SetTalkMask(UIScriptChara_o *this, bool isMask, const MethodInfo *method)
{
  ;
}


void UIScriptChara__SetUseSimpleMesh(UIScriptChara_o *this, bool useSimpleMesh, const MethodInfo *method)
{
  ;
}


void UIScriptChara__Shake(
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
    v12 = UnityEngine_Time__get_time(0) + duration;
  if ( !this )
    sub_1C2D6EC(this, method);
  this->fields.shakeTime = v12;
  this->fields.shakeCycle = cycle;
  this->fields.shakeX = x;
  this->fields.shakeY = y;
  UIScriptChara__OnShake(this, method);
}


bool UIScriptChara__StartRoll(UIScriptChara_o *this, float duration, float rollZ, const MethodInfo *method)
{
  __int64 v7; // x1
  struct UnityEngine_Transform_o *baseRoll1; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRotation_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  bool v22; // w8
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v27; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4C29339 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_5985/*"EndExecuteCameraRoll"*/);
    byte_4C29339 = 1;
  }
  UIScriptChara__StopRollAxisTween(this, method);
  v24.fields.y = 0.0;
  v24.fields.z = rollZ * 0.017453;
  v24.fields.x = 0.0;
  v25 = UnityEngine_Quaternion__Internal_FromEulerRad(v24, 0);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_19;
  x = v25.fields.x;
  y = v25.fields.y;
  z = v25.fields.z;
  w = v25.fields.w;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)baseRoll1,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)baseRoll1 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
LABEL_19:
    sub_1C2D6EC(baseRoll1, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseRoll1, 0);
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  v27.fields.w = w;
  v15 = TweenRotation__Begin(gameObject, duration, v27, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
  if ( ((unsigned __int8)baseRoll1 & 1) == 0 )
    goto LABEL_16;
  if ( !v15 )
    goto LABEL_19;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v15, 0) )
  {
LABEL_16:
    baseRoll1 = this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v26.fields.x = x;
      v26.fields.y = y;
      v26.fields.z = z;
      v26.fields.w = w;
      UnityEngine_Transform__set_localRotation(baseRoll1, v26, 0);
      v22 = 0;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v15->fields.eventReceiver = v16;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.eventReceiver, (int32_t)v16, v17, v18);
  v19 = StringLiteral_5985/*"EndExecuteCameraRoll"*/;
  v15->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5985/*"EndExecuteCameraRoll"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.callWhenFinished, v19, v20, v21);
  v22 = 1;
LABEL_18:
  this->fields.isRoll = v22;
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void UIScriptChara__StartRollAxis(
        UIScriptChara_o *this,
        System_String_o *axis,
        float roll,
        float duration,
        bool isLoop,
        bool isWait,
        float stopAngle,
        const MethodInfo *method)
{
  bool v14; // w22
  __int64 v15; // x1
  UnityEngine_Transform_o *baseRoll1; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  _BOOL4 isRollLoop; // w8
  System_String_o *rollAxis; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s1 OVERLAPPED
  float y; // s2
  float z; // s3
  struct UnityEngine_Vector3_StaticFields *v25; // x8
  struct UnityEngine_Vector3_StaticFields *v26; // x8
  System_Collections_IEnumerator_o *v27; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v14 = isLoop;
  if ( (byte_4C2933C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24841/*"x"*/);
    sub_1C2D490(&StringLiteral_24943/*"y"*/);
    sub_1C2D490(&StringLiteral_24990/*"z"*/);
    byte_4C2933C = 1;
  }
  UIScriptChara__StopRollAxisTween(this, (const MethodInfo *)axis);
  baseRoll1 = this->fields.baseRoll1;
  this->fields.isRollLoop = v14;
  if ( !baseRoll1 )
    sub_1C2D6EC(0, v15);
  localRotation = UnityEngine_Transform__get_localRotation(baseRoll1, 0);
  v31 = UnityEngine_Quaternion__Internal_ToEulerRad(localRotation, 0);
  v31.fields.x = v31.fields.x * 57.296;
  v31.fields.y = v31.fields.y * 57.296;
  v31.fields.z = v31.fields.z * 57.296;
  Positive = UnityEngine_Quaternion__Internal_MakePositive(v31, 0);
  isRollLoop = this->fields.isRollLoop;
  this->fields.initAngle = Positive;
  if ( isRollLoop )
  {
    this->fields.rollAxis = axis;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rollAxis, (int32_t)axis, (int32_t)v17, v18);
    this->fields.rollAngle = roll;
    this->fields.rollDuration = duration;
    this->fields.isRollWait = isWait;
    rollAxis = this->fields.rollAxis;
    if ( System_String__op_Equality(rollAxis, (System_String_o *)StringLiteral_24841/*"x"*/, 0) )
    {
      if ( !byte_4C20DA8 )
      {
        sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA8 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->rightVector.fields.x;
      y = static_fields->rightVector.fields.y;
      z = static_fields->rightVector.fields.z;
LABEL_17:
      this->fields.stopLocalRotationLoopEnd = UnityEngine_Quaternion__AngleAxis(
                                                stopAngle,
                                                *(UnityEngine_Vector3_o *)&x,
                                                0);
      goto LABEL_18;
    }
    if ( System_String__op_Equality(rollAxis, (System_String_o *)StringLiteral_24943/*"y"*/, 0) )
    {
      if ( !byte_4C20DA9 )
      {
        sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA9 = 1;
      }
      v25 = UnityEngine_Vector3_TypeInfo->static_fields;
      x = v25->upVector.fields.x;
      y = v25->upVector.fields.y;
      z = v25->upVector.fields.z;
      goto LABEL_17;
    }
    if ( System_String__op_Equality(rollAxis, (System_String_o *)StringLiteral_24990/*"z"*/, 0) )
    {
      if ( !byte_4C20DAA )
      {
        sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DAA = 1;
      }
      v26 = UnityEngine_Vector3_TypeInfo->static_fields;
      x = v26->forwardVector.fields.x;
      y = v26->forwardVector.fields.y;
      z = v26->forwardVector.fields.z;
      goto LABEL_17;
    }
  }
LABEL_18:
  v27 = UIScriptChara__RollAxis(this, axis, roll, duration, v17);
  started = UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v27, 0);
  this->fields.runningRotationCoroutine = started;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.runningRotationCoroutine, (int32_t)started, v29, v30);
}


bool UIScriptChara__StartRollEx(
        UIScriptChara_o *this,
        float duration,
        float rollZ,
        UnityEngine_Vector3_o centerOffset,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s14
  __int64 v11; // x1
  UnityEngine_Component_o *baseRoll1; // x0
  float v13; // s11
  float v14; // s12
  float w; // s13
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  bool v25; // w8
  float value; // [xsp+Ch] [xbp-64h]
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_4C2933A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_UITweener_Begin_TweenRotation___);
    sub_1C2D490(&StringLiteral_5985/*"EndExecuteCameraRoll"*/);
    byte_4C2933A = 1;
  }
  UIScriptChara__StopRollAxisTween(this, method);
  v28.fields.y = 0.0;
  v28.fields.z = rollZ * 0.017453;
  v28.fields.x = 0.0;
  v32 = UnityEngine_Quaternion__Internal_FromEulerRad(v28, 0);
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  value = v32.fields.x;
  if ( !baseRoll1 )
    goto LABEL_23;
  v13 = v32.fields.y;
  v14 = v32.fields.z;
  w = v32.fields.w;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       baseRoll1,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseRoll1 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)baseRoll1 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_23;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject(baseRoll1, 0);
  baseRoll1 = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                           gameObject,
                                           duration,
                                           (const MethodInfo_318A268 *)Method_UITweener_Begin_TweenRotation___);
  if ( !baseRoll1 )
    goto LABEL_23;
  v18 = baseRoll1;
  v33 = TweenRotation__get_value((TweenRotation_o *)baseRoll1, 0);
  v29 = UnityEngine_Quaternion__Internal_ToEulerRad(v33, 0);
  v29.fields.x = v29.fields.x * 57.296;
  v29.fields.y = v29.fields.y * 57.296;
  v29.fields.z = v29.fields.z * 57.296;
  *(UnityEngine_Vector3_o *)&v18[5].monitor = UnityEngine_Quaternion__Internal_MakePositive(v29, 0);
  HIDWORD(v18[5].fields.m_CachedPtr) = 0;
  LODWORD(v18[6].klass) = 0;
  *((float *)&v18[6].klass + 1) = rollZ;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v18, 1.0, 1, 0);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v18, 0, 0);
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1
    || (v30.fields.z = -z,
        v30.fields.y = -y,
        v30.fields.x = -x,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v30, 0),
        (baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll2) == 0) )
  {
LABEL_23:
    sub_1C2D6EC(baseRoll1, v11);
  }
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v31, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0)
    || !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v18, 0) )
  {
    baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v34.fields.x = value;
      v34.fields.y = v13;
      v34.fields.z = v14;
      v34.fields.w = w;
      UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)baseRoll1, v34, 0);
      v25 = 0;
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v18[3].monitor = v19;
  sub_1C2D434((CGThumbnailListItem_o *)&v18[3].monitor, (int32_t)v19, v20, v21);
  v22 = StringLiteral_5985/*"EndExecuteCameraRoll"*/;
  v18[3].fields.m_CachedPtr = StringLiteral_5985/*"EndExecuteCameraRoll"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v18[3].fields, v22, v23, v24);
  v25 = 1;
LABEL_22:
  this->fields.isRoll = v25;
  return 1;
}


void UIScriptChara__StartShadowEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseShadowEffect; // x19

  if ( (byte_4C29327 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13633/*"Talk/bit_talk_11"*/);
    byte_4C29327 = 1;
  }
  if ( this->fields.isShadow && this->fields.isDisp && !this->fields.isShadowEffect )
  {
    this->fields.isShadowEffect = 1;
    baseShadowEffect = this->fields.baseShadowEffect;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Create_43514092(baseShadowEffect, (System_String_o *)StringLiteral_13633/*"Talk/bit_talk_11"*/, 0, 0, 0, 0);
  }
}


bool UIScriptChara__StopBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_4C29356 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C29356 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop(baseEffectBack, isSkip, 0, 0, 0);
}


bool UIScriptChara__StopBackEffect_44684836(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_4C29357 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C29357 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop_43518868(baseEffectBack, n, isSkip, 0, 0, 0);
}


void UIScriptChara__StopCut(UIScriptChara_o *this, const MethodInfo *method)
{
  ;
}


bool UIScriptChara__StopEffect(UIScriptChara_o *this, bool isSkip, System_String_o *markKey, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_4C2934C & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C2934C = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop(baseEffect, isSkip, 0, markKey, 0);
}


bool UIScriptChara__StopEffect_44683372(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        System_String_o *markKey,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x22

  if ( (byte_4C2934D & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C2934D = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop_43518868(baseEffect, n, isSkip, 0, markKey, 0);
}


void UIScriptChara__StopMoveRelativePositionLoop(UIScriptChara_o *this, const MethodInfo *method)
{
  System_Array_o *moveRelativeDurations; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  struct UnityEngine_Vector2_array *moveRelativePositions; // x8
  int max_length; // w9
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C29336 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C29336 = 1;
  }
  UIScriptChara__StopRelativeMoveTween(this, method);
  moveRelativePositions = this->fields.moveRelativePositions;
  if ( !moveRelativePositions )
    goto LABEL_8;
  max_length = moveRelativePositions->max_length;
  if ( !max_length )
    sub_1C2D6F4(moveRelativeDurations, v4, v5);
  UIScriptChara__SetRelativePosition(this, moveRelativePositions->m_Items[max_length - 1], v4);
  moveRelativeDurations = (System_Array_o *)this->fields.moveRelativePositions;
  this->fields.isMoveRelativePosition = 0;
  if ( !moveRelativeDurations
    || (System_Array__Initialize(moveRelativeDurations, 0),
        (moveRelativeDurations = (System_Array_o *)this->fields.moveRelativeDurations) == 0) )
  {
LABEL_8:
    sub_1C2D6EC(moveRelativeDurations, v4);
  }
  System_Array__Initialize(moveRelativeDurations, 0);
  this->fields.moveRelativeLoopNum = 0;
  v8 = StringLiteral_1/*""*/;
  this->fields.moveRelativeEaseType = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.moveRelativeEaseType, v8, v9, v10);
  this->fields.currentMoveRelativeIndex = 0;
  this->fields.currentMoveRelativeLoopNum = 0;
}


void UIScriptChara__StopMoveScaleTween(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *baseScale; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *Component_object; // x19

  if ( (byte_4C29330 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_23176/*"scaleto"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C29330 = 1;
  }
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(baseScale, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63207308(gameObject, (System_String_o *)StringLiteral_23176/*"scaleto"*/, 0);
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_14;
  baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseScale, 0);
  if ( !baseScale )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseScale,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseScale = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)baseScale & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      return;
    }
LABEL_14:
    sub_1C2D6EC(baseScale, method);
  }
}


void UIScriptChara__StopMoveTween(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v4; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4C29329 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_21648/*"moveto"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C29329 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63207308(gameObject, (System_String_o *)StringLiteral_21648/*"moveto"*/, 0);
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v4 )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v4,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      return;
    }
LABEL_12:
    sub_1C2D6EC(v4, v5);
  }
}


void UIScriptChara__StopRelativeMoveTween(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *baseRelativePosition; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *Component_object; // x19

  if ( (byte_4C29333 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_21648/*"moveto"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C29333 = 1;
  }
  baseRelativePosition = (UnityEngine_Component_o *)this->fields.baseRelativePosition;
  if ( !baseRelativePosition )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(baseRelativePosition, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63207308(gameObject, (System_String_o *)StringLiteral_21648/*"moveto"*/, 0);
  baseRelativePosition = (UnityEngine_Component_o *)this->fields.baseRelativePosition;
  if ( !baseRelativePosition )
    goto LABEL_14;
  baseRelativePosition = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseRelativePosition, 0);
  if ( !baseRelativePosition )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseRelativePosition,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseRelativePosition = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)Component_object,
                                                      0,
                                                      0);
  if ( ((unsigned __int8)baseRelativePosition & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      return;
    }
LABEL_14:
    sub_1C2D6EC(baseRelativePosition, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScriptChara__StopRollAxisLoop(UIScriptChara_o *this, bool isFastPlay, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  _BOOL4 isRollWait; // w8
  UnityEngine_Transform_o *baseRoll1; // x0
  System_String_o *rollAxis; // x21
  UIScriptChara_o *v9; // x0
  const MethodInfo *v10; // x2
  float ConvertedLocalRotationEulerAnglesToAngle; // s8
  UIScriptChara_o *v12; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  float v15; // s0
  float rollAngle; // s2
  float v17; // w8
  float v18; // s8
  float v19; // s1
  float v20; // s9
  System_Collections_IEnumerator_o *v21; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2933F & 1) == 0 )
  {
    sub_1C2D490(&System_MathF_TypeInfo);
    byte_4C2933F = 1;
  }
  UIScriptChara__StopRollAxisTween(this, (const MethodInfo *)isFastPlay);
  isRollWait = this->fields.isRollWait;
  this->fields.isRollLoop = 0;
  if ( !isRollWait )
  {
    UIScriptChara__EndExecuteRollAxis(this, v5);
    return;
  }
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    sub_1C2D6EC(0, v5);
  rollAxis = this->fields.rollAxis;
  localRotation = UnityEngine_Transform__get_localRotation(baseRoll1, 0);
  v25 = UnityEngine_Quaternion__Internal_ToEulerRad(localRotation, 0);
  v25.fields.x = v25.fields.x * 57.296;
  v25.fields.y = v25.fields.y * 57.296;
  v25.fields.z = v25.fields.z * 57.296;
  Positive = UnityEngine_Quaternion__Internal_MakePositive(v25, 0);
  ConvertedLocalRotationEulerAnglesToAngle = UIScriptChara__GetConvertedLocalRotationEulerAnglesToAngle(
                                               v9,
                                               rollAxis,
                                               Positive,
                                               this->fields.initAngle,
                                               v10);
  v27 = UnityEngine_Quaternion__Internal_ToEulerRad(this->fields.stopLocalRotationLoopEnd, 0);
  v27.fields.x = v27.fields.x * 57.296;
  v27.fields.y = v27.fields.y * 57.296;
  v27.fields.z = v27.fields.z * 57.296;
  v28 = UnityEngine_Quaternion__Internal_MakePositive(v27, 0);
  v15 = UIScriptChara__GetConvertedLocalRotationEulerAnglesToAngle(v12, rollAxis, v28, this->fields.initAngle, v13);
  rollAngle = this->fields.rollAngle;
  if ( rollAngle >= 0.0 )
  {
    if ( v15 < ConvertedLocalRotationEulerAnglesToAngle )
    {
      v17 = 360.0;
      goto LABEL_11;
    }
  }
  else if ( v15 >= ConvertedLocalRotationEulerAnglesToAngle )
  {
    v17 = -360.0;
LABEL_11:
    v15 = v15 + v17;
  }
  v18 = v15 - ConvertedLocalRotationEulerAnglesToAngle;
  v19 = 0.0;
  if ( !isFastPlay )
  {
    v20 = rollAngle / this->fields.rollDuration;
    if ( !System_MathF_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_MathF_TypeInfo);
    v19 = fabsf(v18 / v20);
  }
  v21 = UIScriptChara__RollAxis(this, rollAxis, v18, v19, v14);
  started = UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v21, 0);
  this->fields.runningRotationCoroutine = started;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.runningRotationCoroutine, (int32_t)started, v23, v24);
}


void UIScriptChara__StopRollAxisTween(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *baseRoll1; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *Component_object; // x20
  UnityEngine_Coroutine_o *runningRotationCoroutine; // x1

  if ( (byte_4C2933E & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenRotation___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C2D490(&StringLiteral_23129/*"rotateby"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2933E = 1;
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(baseRoll1, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63207308(gameObject, (System_String_o *)StringLiteral_23129/*"rotateby"*/, 0);
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_17;
  baseRoll1 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseRoll1, 0);
  if ( !baseRoll1 )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseRoll1,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenRotation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseRoll1 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)baseRoll1 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  runningRotationCoroutine = this->fields.runningRotationCoroutine;
  if ( runningRotationCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_71149896((UnityEngine_MonoBehaviour_o *)this, runningRotationCoroutine, 0);
  baseRoll1 = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !baseRoll1 )
LABEL_17:
    sub_1C2D6EC(baseRoll1, method);
  ScriptManager__moveBackScriptZ((ScriptManager_o *)baseRoll1, 0, 1, 0);
}


void UIScriptChara__StopShadowEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseShadowEffect; // x20

  if ( (byte_4C29328 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    byte_4C29328 = 1;
  }
  this->fields.isShadowEffect = 0;
  baseShadowEffect = this->fields.baseShadowEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(baseShadowEffect, isSkip, 0, 0, 0);
}


void UIScriptChara__StopSpecialEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  ProgramEffectManager__Destory(this->fields.baseSpecialEffect, 0);
}


void UIScriptChara__StopSpecialEffect_44682136(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  ProgramEffectManager__Destory_43543840(this->fields.baseSpecialEffect, n, 0);
}


void UIScriptChara___SetBackEffect_g__Callback_161_0(CommonEffectComponent_o *effect, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_4C2935A & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2935A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0, 0);
  if ( !v3 )
  {
    if ( !effect )
      sub_1C2D6EC(v3, v4);
    effect->fields._IsOnSublayer_k__BackingField = 1;
  }
}


void UIScriptChara___SetEffect_g__Callback_150_0(CommonEffectComponent_o *effect, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_4C29359 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29359 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0, 0);
  if ( !v3 )
  {
    if ( !effect )
      sub_1C2D6EC(v3, v4);
    effect->fields._IsOnSublayer_k__BackingField = 1;
  }
}


bool UIScriptChara__get_IsDisp(UIScriptChara_o *this, const MethodInfo *method)
{
  return this->fields.isDisp;
}


void UIScriptChara__RollAxis_d__121___ctor(
        UIScriptChara__RollAxis_d__121_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool UIScriptChara__RollAxis_d__121__MoveNext(UIScriptChara__RollAxis_d__121_o *this, const MethodInfo *method)
{
  UIScriptChara__RollAxis_d__121_o *v2; // x20
  int32_t _1__state; // w8
  struct UIScriptChara_o *_4__this; // x19
  float v5; // s8
  float y; // s9
  UnityEngine_Object_o *sortingGroup; // x22
  UIScriptChara__RollAxis_d__121_o **p_sortingGroup; // x21
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *axis; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v15; // x9
  _QWORD *p_x; // x8
  float *p_z; // x9
  float angularVelocity_5__4; // s8
  float deltaTime; // s0
  struct UnityEngine_Vector3_StaticFields *v20; // x9
  struct UnityEngine_Vector3_StaticFields *v21; // x9
  float v22; // s1
  float x; // s8
  float v24; // s9
  float v25; // s10
  float w; // s11
  float *p_w; // x9
  float *v28; // x8
  float *p_y; // x10
  float *v30; // x11
  float angle; // s0
  float duration; // s1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  float time_5__5; // s8
  float v36; // s0
  float v37; // s1
  float v38; // s0
  CGThumbnailListItem_o *p__2__current; // x20
  bool result; // w0
  float v41; // s2
  float v42; // s3
  float v43; // s0 OVERLAPPED
  float v44; // s1
  const MethodInfo *v45; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4C2935C & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_SortingGroup___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C2D490(&StringLiteral_24841/*"x"*/);
    sub_1C2D490(&StringLiteral_24943/*"y"*/);
    this = (UIScriptChara__RollAxis_d__121_o *)sub_1C2D490(&StringLiteral_24990/*"z"*/);
    byte_4C2935C = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    angularVelocity_5__4 = v2->fields._angularVelocity_5__4;
    v2->fields.__1__state = -1;
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    if ( !_4__this )
      goto LABEL_55;
    goto LABEL_42;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_55;
    this = (UIScriptChara__RollAxis_d__121_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)_4__this,
                                                 0);
    if ( !this )
      goto LABEL_55;
    this = (UIScriptChara__RollAxis_d__121_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
    if ( !this )
      goto LABEL_55;
    LODWORD(v5) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    this = (UIScriptChara__RollAxis_d__121_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)_4__this,
                                                 0);
    if ( !this )
      goto LABEL_55;
    this = (UIScriptChara__RollAxis_d__121_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
    if ( !this )
      goto LABEL_55;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    this = (UIScriptChara__RollAxis_d__121_o *)_4__this->fields.baseRoll1;
    if ( !this )
      goto LABEL_55;
    y = localPosition.fields.y;
    v47.fields.y = -localPosition.fields.y;
    v47.fields.x = -v5;
    v47.fields.z = -0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v47, 0);
    this = (UIScriptChara__RollAxis_d__121_o *)_4__this->fields.baseRoll2;
    if ( !this )
      goto LABEL_55;
    v48.fields.z = 0.0;
    v48.fields.x = v5;
    v48.fields.y = y;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v48, 0);
    sortingGroup = (UnityEngine_Object_o *)_4__this->fields.sortingGroup;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_sortingGroup = (UIScriptChara__RollAxis_d__121_o **)&_4__this->fields.sortingGroup;
    if ( UnityEngine_Object__op_Equality(sortingGroup, 0, 0) )
    {
      this = (UIScriptChara__RollAxis_d__121_o *)_4__this->fields.baseDepth;
      if ( !this )
        goto LABEL_55;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_SortingGroup___);
      *p_sortingGroup = (UIScriptChara__RollAxis_d__121_o *)Component_object;
      sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.sortingGroup, (int32_t)Component_object, v10, v11);
    }
    this = *p_sortingGroup;
    if ( !*p_sortingGroup )
      goto LABEL_55;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    {
      this = *p_sortingGroup;
      if ( !*p_sortingGroup )
        goto LABEL_55;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    }
    if ( !byte_4C20DA1 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    axis = v2->fields.axis;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&v2->fields._rotationAxis_5__2.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    v2->fields._rotationAxis_5__2.fields.z = z;
    if ( System_String__op_Equality(axis, (System_String_o *)StringLiteral_24841/*"x"*/, 0) )
    {
      if ( !byte_4C20DA8 )
      {
        sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA8 = 1;
      }
      v15 = UnityEngine_Vector3_TypeInfo->static_fields;
      p_x = (_QWORD *)&v15->rightVector.fields.x;
      p_z = &v15->rightVector.fields.z;
    }
    else if ( System_String__op_Equality(axis, (System_String_o *)StringLiteral_24943/*"y"*/, 0) )
    {
      if ( !byte_4C20DA9 )
      {
        sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA9 = 1;
      }
      v20 = UnityEngine_Vector3_TypeInfo->static_fields;
      p_x = (_QWORD *)&v20->upVector.fields.x;
      p_z = &v20->upVector.fields.z;
    }
    else
    {
      if ( !System_String__op_Equality(axis, (System_String_o *)StringLiteral_24990/*"z"*/, 0) )
      {
LABEL_38:
        this = (UIScriptChara__RollAxis_d__121_o *)_4__this->fields.baseRoll1;
        if ( !this )
          goto LABEL_55;
        localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)this, 0);
        x = localRotation.fields.x;
        v24 = localRotation.fields.y;
        v25 = localRotation.fields.z;
        localRotation.fields.y = v2->fields._rotationAxis_5__2.fields.x;
        localRotation.fields.z = v2->fields._rotationAxis_5__2.fields.y;
        w = localRotation.fields.w;
        localRotation.fields.w = v2->fields._rotationAxis_5__2.fields.z;
        v50 = UnityEngine_Quaternion__AngleAxis(v2->fields.angle, *(UnityEngine_Vector3_o *)&localRotation.fields.y, 0);
        v2->fields._stopRotation_5__3.fields.w = (float)((float)((float)(w * v50.fields.w) - (float)(x * v50.fields.x))
                                                       - (float)(v24 * v50.fields.y))
                                               - (float)(v25 * v50.fields.z);
        p_w = &v2->fields._stopRotation_5__3.fields.w;
        v2->fields._stopRotation_5__3.fields.x = (float)((float)(v24 * v50.fields.z)
                                                       + (float)((float)(w * v50.fields.x) + (float)(x * v50.fields.w)))
                                               - (float)(v25 * v50.fields.y);
        v28 = &v2->fields._stopRotation_5__3.fields.x;
        v2->fields._stopRotation_5__3.fields.y = (float)((float)(v25 * v50.fields.x)
                                                       + (float)((float)(w * v50.fields.y) + (float)(v24 * v50.fields.w)))
                                               - (float)(x * v50.fields.z);
        p_y = &v2->fields._stopRotation_5__3.fields.y;
        v2->fields._stopRotation_5__3.fields.z = (float)((float)(x * v50.fields.y)
                                                       + (float)((float)(w * v50.fields.z) + (float)(v25 * v50.fields.w)))
                                               - (float)(v24 * v50.fields.x);
        v30 = &v2->fields._stopRotation_5__3.fields.z;
        if ( v2->fields.duration > 0.0 )
        {
          this = (UIScriptChara__RollAxis_d__121_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
          if ( !this )
            goto LABEL_55;
          ScriptManager__moveBackScriptZ((ScriptManager_o *)this, 2048, 0, 0);
          angle = v2->fields.angle;
          duration = v2->fields.duration;
          v2->fields._time_5__5 = 0.0;
          angularVelocity_5__4 = angle / duration;
          v2->fields._angularVelocity_5__4 = angle / duration;
          _4__this->fields.isRoll = 1;
          deltaTime = UnityEngine_Time__get_deltaTime(0);
LABEL_42:
          this = (UIScriptChara__RollAxis_d__121_o *)_4__this->fields.baseRoll1;
          if ( this )
          {
            UnityEngine_Transform__Rotate_71188572(
              (UnityEngine_Transform_o *)this,
              v2->fields._rotationAxis_5__2,
              angularVelocity_5__4 * deltaTime,
              0,
              0);
            time_5__5 = v2->fields._time_5__5;
            v36 = 0.0;
            if ( !_4__this->fields.isRollLoop )
              v36 = UnityEngine_Time__get_deltaTime(0);
            v37 = v2->fields.duration;
            v38 = time_5__5 + v36;
            v2->fields._time_5__5 = v38;
            if ( v38 < v37 )
            {
              v2->fields.__2__current = 0;
              p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1C2D434(p__2__current, 0, v33, v34);
              result = 1;
              LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
              return result;
            }
            this = (UIScriptChara__RollAxis_d__121_o *)_4__this->fields.baseRoll1;
            if ( this )
            {
              v41 = v2->fields._stopRotation_5__3.fields.z;
              v42 = v2->fields._stopRotation_5__3.fields.w;
              v43 = v2->fields._stopRotation_5__3.fields.x;
              v44 = v2->fields._stopRotation_5__3.fields.y;
LABEL_53:
              UnityEngine_Transform__set_localRotation(
                (UnityEngine_Transform_o *)this,
                *(UnityEngine_Quaternion_o *)&v43,
                0);
              UIScriptChara__EndExecuteRollAxis(_4__this, v45);
              return 0;
            }
          }
          goto LABEL_55;
        }
        this = (UIScriptChara__RollAxis_d__121_o *)_4__this->fields.baseRoll1;
        if ( _4__this->fields.isRollWait )
        {
          v28 = &_4__this->fields.stopLocalRotationLoopEnd.fields.x;
          p_y = &_4__this->fields.stopLocalRotationLoopEnd.fields.y;
          v30 = &_4__this->fields.stopLocalRotationLoopEnd.fields.z;
          p_w = &_4__this->fields.stopLocalRotationLoopEnd.fields.w;
        }
        if ( this )
        {
          v42 = *p_w;
          v41 = *v30;
          v44 = *p_y;
          v43 = *v28;
          goto LABEL_53;
        }
LABEL_55:
        sub_1C2D6EC(this, method);
      }
      if ( !byte_4C20DAA )
      {
        sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DAA = 1;
      }
      v21 = UnityEngine_Vector3_TypeInfo->static_fields;
      p_x = (_QWORD *)&v21->forwardVector.fields.x;
      p_z = &v21->forwardVector.fields.z;
    }
    v22 = *p_z;
    *(_QWORD *)&v2->fields._rotationAxis_5__2.fields.x = *p_x;
    v2->fields._rotationAxis_5__2.fields.z = v22;
    goto LABEL_38;
  }
  return 0;
}


Il2CppObject *UIScriptChara__RollAxis_d__121__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        UIScriptChara__RollAxis_d__121_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn UIScriptChara__RollAxis_d__121__System_Collections_IEnumerator_Reset(
        UIScriptChara__RollAxis_d__121_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_UIScriptChara__RollAxis_d__121_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *UIScriptChara__RollAxis_d__121__System_Collections_IEnumerator_get_Current(
        UIScriptChara__RollAxis_d__121_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void UIScriptChara__RollAxis_d__121__System_IDisposable_Dispose(
        UIScriptChara__RollAxis_d__121_o *this,
        const MethodInfo *method)
{
  ;
}


void UIScriptChara___c__DisplayClass58_0___ctor(UIScriptChara___c__DisplayClass58_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptChara___c__DisplayClass58_0___SetEffectEdgeBlur_b__0(
        UIScriptChara___c__DisplayClass58_0_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  UIScriptChara___c__DisplayClass58_0_o *v3; // x19
  struct UIScriptChara_o *_4__this; // x8
  struct UIScriptChara_o *v5; // x8
  UIScriptChara___c__DisplayClass58_0_o *v6; // x20
  struct UIScriptChara_o *v7; // x8
  UnityEngine_Object_o *v8; // x21
  __int64 v9; // x2
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
  float v20; // s0
  float v21; // s1
  struct UnityEngine_Texture_o *maskTex; // x8
  UIScriptChara___c__DisplayClass58_0_o *v23; // x23
  struct UnityEngine_Texture_o *v24; // x8
  int v25; // w24
  struct UIScriptChara_o *v26; // x8
  UIScriptChara_c *klass; // x9
  float v28; // s0 OVERLAPPED
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4C2935B & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___);
    this = (UIScriptChara___c__DisplayClass58_0_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2935B = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_29;
  this = (UIScriptChara___c__DisplayClass58_0_o *)_4__this->fields.baseEffect;
  if ( !this
    || (this = (UIScriptChara___c__DisplayClass58_0_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          1,
                                                          (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___),
        (v5 = v3->fields.__4__this) == 0)
    || (v6 = this,
        this = (UIScriptChara___c__DisplayClass58_0_o *)((UIScriptChara___c__DisplayClass58_0_o *(__fastcall *)(struct UIScriptChara_o *__return_ptr, struct UIScriptChara_o *, const MethodInfo *))v5->klass->vtable._8_GetBody.methodPtr)(
                                                          v5,
                                                          v3->fields.__4__this,
                                                          v5->klass->vtable._8_GetBody.method),
        (v7 = v3->fields.__4__this) == 0)
    || (v8 = (UnityEngine_Object_o *)this,
        this = (UIScriptChara___c__DisplayClass58_0_o *)((UIScriptChara___c__DisplayClass58_0_o *(__fastcall *)(struct UIScriptChara_o *__return_ptr, struct UIScriptChara_o *, const MethodInfo *))v7->klass->vtable._4_GetOffsetEdgeBlur.methodPtr)(
                                                          v7,
                                                          v3->fields.__4__this,
                                                          v7->klass->vtable._4_GetOffsetEdgeBlur.method),
        !v6) )
  {
LABEL_29:
    sub_1C2D6EC(this, effect);
  }
  r_low = LODWORD(v6->fields.color.fields.r);
  if ( r_low >= 1 )
  {
    v14 = v10;
    v15 = v11;
    v16 = v12;
    v17 = 0;
    do
    {
      if ( (unsigned int)v17 >= r_low )
        sub_1C2D6F4(this, effect, v9);
      v18 = *((_QWORD *)&v6->fields.color.fields.b + v17);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (UIScriptChara___c__DisplayClass58_0_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_29;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0);
        this = (UIScriptChara___c__DisplayClass58_0_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)v18,
                                                          0);
        if ( !this )
          goto LABEL_29;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        if ( !transform )
          goto LABEL_29;
        v20 = v14;
        v21 = v15;
        UnityEngine_Transform__set_localPosition(transform, localPosition, 0);
      }
      else if ( !v18 )
      {
        goto LABEL_29;
      }
      *(struct UnityEngine_Color_o *)(v18 + 96) = v3->fields.color;
      *(struct UnityEngine_Color_o *)(v18 + 112) = v3->fields.particleColor;
      FGOEdgeBlur__set_Texture((FGOEdgeBlur_o *)v18, v3->fields.maskTex, 0);
      this = (UIScriptChara___c__DisplayClass58_0_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)v18,
                                                        0);
      maskTex = v3->fields.maskTex;
      if ( !maskTex )
        goto LABEL_29;
      v23 = this;
      this = (UIScriptChara___c__DisplayClass58_0_o *)((UIScriptChara___c__DisplayClass58_0_o *(__fastcall *)(struct UnityEngine_Texture_o *__return_ptr, struct UnityEngine_Texture_o *, const MethodInfo *))maskTex->klass->vtable._4_get_width.methodPtr)(
                                                        maskTex,
                                                        v3->fields.maskTex,
                                                        maskTex->klass->vtable._4_get_width.method);
      v24 = v3->fields.maskTex;
      if ( !v24 )
        goto LABEL_29;
      v25 = (int)this;
      this = (UIScriptChara___c__DisplayClass58_0_o *)((UIScriptChara___c__DisplayClass58_0_o *(__fastcall *)(struct UnityEngine_Texture_o *__return_ptr, struct UnityEngine_Texture_o *, const MethodInfo *))v24->klass->vtable._6_get_height.methodPtr)(
                                                        v24,
                                                        v3->fields.maskTex,
                                                        v24->klass->vtable._6_get_height.method);
      if ( !v23 )
        goto LABEL_29;
      v33.fields.y = (float)(int)this;
      v33.fields.x = (float)v25;
      v33.fields.z = 0.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v23, v33, 0);
      FGOEdgeBlur__set_Thickness((FGOEdgeBlur_o *)v18, v3->fields.thick, 0);
      FGOEdgeBlur__set_Level((FGOEdgeBlur_o *)v18, v3->fields.level, 0);
      this = (UIScriptChara___c__DisplayClass58_0_o *)v3->fields.maskTex;
      if ( !this )
        goto LABEL_29;
      this = (UIScriptChara___c__DisplayClass58_0_o *)((__int64 (__fastcall *)(UIScriptChara___c__DisplayClass58_0_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
                                                        this,
                                                        *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
      v26 = v3->fields.__4__this;
      if ( !v26 )
        goto LABEL_29;
      klass = v26->klass;
      if ( (int)this <= 1024 )
        v28 = ((float (__fastcall *)(struct UIScriptChara_o *, const MethodInfo *))klass->vtable._5_GetRectEdgeBlur.methodPtr)(
                v3->fields.__4__this,
                klass->vtable._5_GetRectEdgeBlur.method);
      else
        v28 = ((float (__fastcall *)(struct UIScriptChara_o *, const MethodInfo *))klass->vtable._6_GetHighRectEdgeBlur.methodPtr)(
                v3->fields.__4__this,
                klass->vtable._6_GetHighRectEdgeBlur.method);
      FGOEdgeBlur__set_Rect((FGOEdgeBlur_o *)v18, *(UnityEngine_Rect_o *)&v28, 0);
      v34.fields.x = v14;
      v34.fields.y = v15;
      v34.fields.z = v16;
      FGOEdgeBlur__setMaskImagePosition((FGOEdgeBlur_o *)v18, v34, 0);
      r_low = LODWORD(v6->fields.color.fields.r);
      ++v17;
    }
    while ( (int)v17 < r_low );
  }
}