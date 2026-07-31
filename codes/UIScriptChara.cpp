void UIScriptChara___cctor(const MethodInfo *method)
{
  if ( (byte_593A799 & 1) == 0 )
  {
    sub_21FFC50(&UIScriptChara_TypeInfo);
    byte_593A799 = 1;
  }
  LODWORD(UIScriptChara_TypeInfo->static_fields->UNIT_SPEED) = (struct UIScriptChara_StaticFields)1014350479;
}


void UIScriptChara___ctor(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.backIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIScriptChara__ChangeCharacter(
        UIScriptChara_o *this,
        System_String_o *kind,
        float speed,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1

  if ( (byte_593A766 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18012/*"blink"*/);
    sub_21FFC50(&StringLiteral_20250/*"fade"*/);
    sub_21FFC50(&StringLiteral_19127/*"crossFade"*/);
    byte_593A766 = 1;
  }
  if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_20250/*"fade"*/, 0) )
  {
    v13 = 2;
  }
  else if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_18012/*"blink"*/, 0) )
  {
    v13 = 3;
  }
  else if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_19127/*"crossFade"*/, 0) )
  {
    v13 = 4;
  }
  else
  {
    v13 = 1;
  }
  ((void (__fastcall *)(UIScriptChara_o *, __int64, System_String_o *, _QWORD, System_Action_o *, const MethodInfo *, float))this->klass->vtable._10_ChangeCharacter.methodPtr)(
    this,
    v13,
    imageName,
    (unsigned int)faceType,
    callback,
    this->klass->vtable._10_ChangeCharacter.method,
    speed);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptChara__ChangeCharacter_51854672(
        UIScriptChara_o *this,
        int32_t kind,
        float speed,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o **p_changeCallback; // x20
  int v12; // w8
  int v13; // w9
  float v14; // s0

  this->fields.changeCallback = callback;
  p_changeCallback = &this->fields.changeCallback;
  this->fields.changeKind = kind;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.changeCallback,
    (int32_t)callback,
    imageName,
    *(System_String_o **)&faceType,
    (int32_t)callback,
    (int32_t)method,
    v7,
    v8);
  v12 = *((_DWORD *)p_changeCallback + 2);
  v13 = *((_DWORD *)p_changeCallback - 8);
  *((float *)p_changeCallback - 7) = speed;
  *(struct System_Action_o **)((char *)p_changeCallback - 20) = 0;
  *((_DWORD *)p_changeCallback - 6) = 0;
  *((_DWORD *)p_changeCallback + 2) = v12 == 0;
  *((_DWORD *)p_changeCallback + 3) = v12;
  if ( v13 == 3 )
  {
    v14 = 10.0;
    if ( speed < 10.0 )
      v14 = speed;
    this->fields.changeRange = v14 / 5.0;
  }
  this->fields.isDisp = 0;
}


void UIScriptChara__DestroyEffectByMark(UIScriptChara_o *this, System_String_o *markKey, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_593A78F & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A78F = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, markKey);
  CommonEffectManager__DestroyByMark(baseEffect, markKey, 0);
}


void UIScriptChara__EndExecuteCameraRoll(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.isRoll = 0;
}


void UIScriptChara__EndExecuteRollAxis(UIScriptChara_o *this, const MethodInfo *method)
{
  const MethodInfo_476E8C0 *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_593A77E & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_593A77E = 1;
  }
  v3 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__;
  this->fields.isRoll = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v3);
  if ( !Instance )
    sub_21FFECC(0, v5);
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
    sub_21FFECC(gameObject, v4);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.basePosition, 0);
  this->fields.isMove = 0;
}


void UIScriptChara__EndMoveReturnEaseHalf(UIScriptChara_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UIScriptChara__MoveReturnPositionEase_51859284(this, this->fields.returnDuration, this->fields.returnEaseType, v2);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(this, method);
  if ( v3 < SLODWORD(moveRelativePositions->max_length) )
    goto LABEL_3;
  currentMoveRelativeLoopNum = this->fields.currentMoveRelativeLoopNum;
  moveRelativeLoopNum = this->fields.moveRelativeLoopNum;
  this->fields.currentMoveRelativeIndex = 0;
  v6 = currentMoveRelativeLoopNum + 1;
  this->fields.currentMoveRelativeLoopNum = v6;
  if ( !moveRelativeLoopNum )
  {
    v6 = 0;
    goto LABEL_8;
  }
  if ( moveRelativeLoopNum > v6 )
  {
LABEL_8:
    this->fields.currentMoveRelativeLoopNum = v6;
LABEL_3:
    UIScriptChara__MoveRelativePosition(this, method);
    return;
  }
  UIScriptChara__StopMoveRelativePositionLoop(this, method);
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
    sub_21FFECC(this, method);
  if ( v3 < SLODWORD(moveRelativePositions->max_length) )
    goto LABEL_3;
  currentMoveRelativeLoopNum = this->fields.currentMoveRelativeLoopNum;
  moveRelativeLoopNum = this->fields.moveRelativeLoopNum;
  this->fields.currentMoveRelativeIndex = 0;
  v6 = currentMoveRelativeLoopNum + 1;
  this->fields.currentMoveRelativeLoopNum = v6;
  if ( !moveRelativeLoopNum )
  {
    v6 = 0;
    goto LABEL_8;
  }
  if ( moveRelativeLoopNum > v6 )
  {
LABEL_8:
    this->fields.currentMoveRelativeLoopNum = v6;
LABEL_3:
    UIScriptChara__MoveRelativePositionEase(this, method);
    return;
  }
  UIScriptChara__StopMoveRelativePositionLoop(this, method);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  MissionNaviTransitionBoardItem_o *p_setCallback; // x19
  struct System_Action_o *v18; // x20
  struct System_Action_o *setCallback; // t1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_5931820 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_5931820 = 1;
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
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v21, 0);
  baseSpecialEffect = this->fields.baseEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, 0);
  baseSpecialEffect = this->fields.baseEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v8 = v22.fields.z;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = v8;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v23, 0);
  baseSpecialEffect = this->fields.baseEffectBack;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v24 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, 0);
  baseSpecialEffect = this->fields.baseEffectBack;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v9 = v24.fields.z;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v25, 0);
  baseSpecialEffect = this->fields.baseShadowEffect;
  if ( !baseSpecialEffect
    || (baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0)) == 0
    || (v26 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, 0),
        (baseSpecialEffect = this->fields.baseShadowEffect) == 0)
    || (v10 = v26.fields.z,
        (baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0)) == 0) )
  {
LABEL_22:
    sub_21FFECC(baseSpecialEffect, method);
  }
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = v10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v27, 0);
  setCallback = this->fields.setCallback;
  p_setCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.setCallback;
  v18 = setCallback;
  if ( setCallback )
  {
    p_setCallback->klass = 0;
    sub_21FFBF4(p_setCallback, 0, v11, v12, v13, v14, v15, v16);
    ((void (__fastcall *)(intptr_t, intptr_t))v18->fields.invoke_impl)(v18->fields.method_code, v18->fields.method);
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

  z = baseAngles.fields.z;
  y = baseAngles.fields.y;
  v7 = localRotationEulerAngles.fields.z;
  v8 = localRotationEulerAngles.fields.y;
  x = localRotationEulerAngles.fields.x;
  if ( (byte_593A781 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26191/*"x"*/);
    sub_21FFC50(&StringLiteral_26293/*"y"*/);
    sub_21FFC50(&StringLiteral_26341/*"z"*/);
    byte_593A781 = 1;
  }
  if ( System_String__op_Equality(axis, (System_String_o *)StringLiteral_26191/*"x"*/, 0) )
  {
    v11 = v8 - y;
    v8 = x;
    if ( (float)((float)(v11 * v11) + (float)((float)(v7 - z) * (float)(v7 - z))) >= 1.0e-10 )
    {
      v12 = 180.0;
      if ( x > 90.0 )
        v12 = 540.0;
      return v12 - x;
    }
  }
  else if ( !System_String__op_Equality(axis, (System_String_o *)StringLiteral_26293/*"y"*/, 0) )
  {
    if ( System_String__op_Equality(axis, (System_String_o *)StringLiteral_26341/*"z"*/, 0) )
      return v7;
    else
      return 0.0;
  }
  return v8;
}


float UIScriptChara__GetDepth(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseDepth; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  baseDepth = this->fields.baseDepth;
  if ( !baseDepth )
    sub_21FFECC(0, method);
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

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
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
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  UIScriptChara__SetRoll(this, 0.0, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, method);
}


bool UIScriptChara__IsBackEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_593A790 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A790 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
  return CommonEffectManager__IsBusy(baseEffectBack, 0);
}


bool UIScriptChara__IsBackEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_593A792 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A792 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
  return CommonEffectManager__IsStart(baseEffectBack, 0);
}


bool UIScriptChara__IsBackEffectStart_51870988(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_593A793 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A793 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  return CommonEffectManager__IsStart_50691188(baseEffectBack, n, 0);
}


bool UIScriptChara__IsBackEffect_51870788(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_593A791 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A791 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  return CommonEffectManager__IsBusy_50690260(baseEffectBack, n, 0);
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
  il2cpp_array_size_t max_length; // x8
  ProgramEffectComponent_array *v6; // x19
  bool v7; // w21
  unsigned __int64 v8; // x22
  ProgramEffectComponent_o **m_Items; // x25
  ProgramEffectComponent_o *v10; // x8
  __int64 naturalAligment; // x11
  ProgramEffectComponent_o *v12; // x20

  if ( (byte_593A783 & 1) == 0 )
  {
    sub_21FFC50(&CharaCutEffectComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A783 = 1;
  }
  v3 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0);
  if ( !v3 )
LABEL_21:
    sub_21FFECC(v3, v4);
  max_length = v3->max_length;
  v6 = v3;
  v7 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    m_Items = v3->m_Items;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_21FFED4(v3);
      v10 = m_Items[v8];
      if ( v10
        && (naturalAligment = CharaCutEffectComponent_TypeInfo->_2.naturalAligment,
            v10->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (CharaCutEffectComponent_c *)v10->klass->_2.typeHierarchy[naturalAligment - 1] == CharaCutEffectComponent_TypeInfo )
          v12 = m_Items[v8];
        else
          v12 = 0;
      }
      else
      {
        v12 = 0;
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      v3 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
      if ( ((unsigned __int8)v3 & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_21;
        if ( LOBYTE(v12[1].fields.leftAnchor) )
          break;
      }
      LODWORD(max_length) = v6->max_length;
      v7 = (__int64)++v8 < (int)max_length;
    }
    while ( (__int64)v8 < (int)max_length );
  }
  return v7;
}


bool UIScriptChara__IsCutStart(UIScriptChara_o *this, const MethodInfo *method)
{
  ProgramEffectComponent_array *v3; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // x8
  ProgramEffectComponent_array *v6; // x19
  bool v7; // w21
  unsigned __int64 v8; // x22
  ProgramEffectComponent_o **m_Items; // x25
  ProgramEffectComponent_o *v10; // x8
  __int64 naturalAligment; // x11
  ProgramEffectComponent_o *v12; // x20

  if ( (byte_593A784 & 1) == 0 )
  {
    sub_21FFC50(&CharaCutEffectComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A784 = 1;
  }
  v3 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0);
  if ( !v3 )
LABEL_21:
    sub_21FFECC(v3, v4);
  max_length = v3->max_length;
  v6 = v3;
  v7 = (int)max_length < 1;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    m_Items = v3->m_Items;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_21FFED4(v3);
      v10 = m_Items[v8];
      if ( v10
        && (naturalAligment = CharaCutEffectComponent_TypeInfo->_2.naturalAligment,
            v10->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (CharaCutEffectComponent_c *)v10->klass->_2.typeHierarchy[naturalAligment - 1] == CharaCutEffectComponent_TypeInfo )
          v12 = m_Items[v8];
        else
          v12 = 0;
      }
      else
      {
        v12 = 0;
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      v3 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
      if ( ((unsigned __int8)v3 & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_21;
        if ( !v12->fields.isStart )
          break;
      }
      LODWORD(max_length) = v6->max_length;
      v7 = (__int64)++v8 >= (int)max_length;
    }
    while ( (__int64)v8 < (int)max_length );
  }
  return v7;
}


bool UIScriptChara__IsEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_593A786 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A786 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
  return CommonEffectManager__IsBusy(baseEffect, 0);
}


bool UIScriptChara__IsEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_593A788 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A788 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
  return CommonEffectManager__IsStart(baseEffect, 0);
}


bool UIScriptChara__IsEffectStart_51869520(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_593A789 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A789 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  return CommonEffectManager__IsStart_50691188(baseEffect, n, 0);
}


bool UIScriptChara__IsEffect_51869320(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_593A787 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A787 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  return CommonEffectManager__IsBusy_50690260(baseEffect, n, 0);
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


bool UIScriptChara__IsSpecialEffectStart_51868332(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  return ProgramEffectManager__IsStart_50722144(this->fields.baseSpecialEffect, n, 0);
}


bool UIScriptChara__IsSpecialEffect_51868308(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  return ProgramEffectManager__IsBusy_50721484(this->fields.baseSpecialEffect, n, 0);
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
  System_String_o *v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  TweenPosition_o *v14; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_593A778 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6254/*"EndMoveAttack"*/);
    sub_21FFC50(&StringLiteral_23361/*"normal"*/);
    byte_593A778 = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)kind);
  v11 = (System_String_o *)StringLiteral_23361/*"normal"*/;
  this->fields.isMove = 1;
  if ( duration <= 0.0 )
    duration = 0.5;
  System_String__op_Equality(kind, v11, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  v14 = TweenPosition__Begin(gameObject, duration, v32, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( v14 )
    {
      v14->fields.method = 1;
      v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v14->fields.eventReceiver = v17;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v14->fields.eventReceiver,
        (int32_t)v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      v24 = StringLiteral_6254/*"EndMoveAttack"*/;
      v14->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6254/*"EndMoveAttack"*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->fields.callWhenFinished, v24, v25, v26, v27, v28, v29, v30);
      return;
    }
LABEL_13:
    sub_21FFECC(transform, v16);
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_13;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_13;
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v31, 0);
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
  __int64 v10; // x1
  TweenPosition_o *v11; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_593A76B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6252/*"EndMove"*/);
    byte_593A76B = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  if ( duration > 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v28.fields.x = x;
    v28.fields.y = y;
    v28.fields.z = z;
    v11 = TweenPosition__Begin(gameObject, duration, v28, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0) )
    {
      transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v11 )
      {
        v11->fields.eventReceiver = transform;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v11->fields.eventReceiver,
          (int32_t)transform,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        v20 = StringLiteral_6252/*"EndMove"*/;
        v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6252/*"EndMove"*/;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v11->fields.callWhenFinished,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        return;
      }
LABEL_12:
      sub_21FFECC(transform, v13);
    }
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_12;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_12;
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v27, 0);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *v19; // x19
  float v20; // [xsp+Ch] [xbp-64h] BYREF
  float v21; // [xsp+10h] [xbp-60h] BYREF
  float v22; // [xsp+14h] [xbp-5Ch] BYREF
  int v23; // [xsp+18h] [xbp-58h] BYREF
  char v24[4]; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  z = vector.fields.z;
  y = vector.fields.y;
  x = vector.fields.x;
  if ( (byte_593A76C & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Hashtable_TypeInfo);
    sub_21FFC50(&StringLiteral_26191/*"x"*/);
    sub_21FFC50(&StringLiteral_19567/*"easetype"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_6252/*"EndMove"*/);
    sub_21FFC50(&StringLiteral_19348/*"delay"*/);
    sub_21FFC50(&StringLiteral_26293/*"y"*/);
    sub_21FFC50(&StringLiteral_21904/*"isLocal"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593A76C = 1;
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
        v25.fields.x = x;
        v25.fields.y = y;
        v25.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v25, 0);
        this->fields.isMove = 0;
        return;
      }
    }
LABEL_11:
    sub_21FFECC(gameObject, v13);
  }
  v11 = (System_Collections_Hashtable_o *)sub_21FFEBC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_76632148(v11, 0);
  v24[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C050, v24);
  if ( !v11 )
    goto LABEL_11;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v11->klass->vtable._22_Add.methodPtr)(
    v11,
    StringLiteral_21904/*"isLocal"*/,
    gameObject,
    v11->klass->vtable._22_Add.method);
  v23 = 0;
  v14 = j_il2cpp_value_box_0(qword_594C0A0, &v23);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v11->klass->vtable._22_Add.methodPtr)(
    v11,
    StringLiteral_19348/*"delay"*/,
    v14,
    v11->klass->vtable._22_Add.method);
  v22 = x;
  v15 = j_il2cpp_value_box_0(qword_594C0A0, &v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, const MethodInfo *))v11->klass->vtable._22_Add.methodPtr)(
    v11,
    StringLiteral_26191/*"x"*/,
    v15,
    v11->klass->vtable._22_Add.method);
  v21 = y;
  v16 = j_il2cpp_value_box_0(qword_594C0A0, &v21);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v11->klass->vtable._22_Add.methodPtr)(
    v11,
    StringLiteral_26293/*"y"*/,
    v16,
    v11->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, const MethodInfo *))v11->klass->vtable._22_Add.methodPtr)(
    v11,
    StringLiteral_19567/*"easetype"*/,
    easetype,
    v11->klass->vtable._22_Add.method);
  v20 = time;
  v17 = j_il2cpp_value_box_0(qword_594C0A0, &v20);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v11->klass->vtable._22_Add.methodPtr)(
    v11,
    StringLiteral_25318/*"time"*/,
    v17,
    v11->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v11->klass->vtable._22_Add.methodPtr)(
    v11,
    StringLiteral_23518/*"oncomplete"*/,
    StringLiteral_6252/*"EndMove"*/,
    v11->klass->vtable._22_Add.method);
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v18);
  iTween__MoveTo_75080224(v19, v11, 0);
}


void UIScriptChara__MoveRelativePosition(UIScriptChara_o *this, const MethodInfo *method)
{
  UIScriptChara_o *v2; // x19
  struct System_Single_array *moveRelativeDurations; // x9
  __int64 currentMoveRelativeIndex; // x8
  struct System_Single_array *v5; // x8
  __int64 v6; // x9
  struct UnityEngine_Vector2_array *v7; // x10
  float *v8; // x8
  float *v9; // x9
  __int64 v10; // x1
  TweenPosition_o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct UnityEngine_Vector2_array *moveRelativePositions; // x9
  const MethodInfo *v26; // x1
  UnityEngine_Vector3_o v27; // 0:s1.4,4:s2.4,8:s3.4

  v2 = this;
  if ( (byte_593A775 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (UIScriptChara_o *)sub_21FFC50(&StringLiteral_6265/*"EndRelativeMove"*/);
    byte_593A775 = 1;
  }
  moveRelativeDurations = v2->fields.moveRelativeDurations;
  v2->fields.isMoveRelativePosition = 1;
  if ( !moveRelativeDurations )
    goto LABEL_20;
  currentMoveRelativeIndex = v2->fields.currentMoveRelativeIndex;
  if ( (unsigned int)currentMoveRelativeIndex >= LODWORD(moveRelativeDurations->max_length) )
    goto LABEL_21;
  if ( moveRelativeDurations->m_Items[currentMoveRelativeIndex] <= 0.0 )
  {
    moveRelativePositions = v2->fields.moveRelativePositions;
    if ( !moveRelativePositions )
      goto LABEL_20;
    if ( (unsigned int)currentMoveRelativeIndex < LODWORD(moveRelativePositions->max_length) )
    {
      UIScriptChara__SetRelativePosition(v2, moveRelativePositions->m_Items[currentMoveRelativeIndex], method);
      UIScriptChara__EndRelativeMove(v2, v26);
      return;
    }
LABEL_21:
    sub_21FFED4(this);
  }
  this = (UIScriptChara_o *)v2->fields.baseRelativePosition;
  if ( !this )
    goto LABEL_20;
  this = (UIScriptChara_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5 = v2->fields.moveRelativeDurations;
  if ( !v5 )
    goto LABEL_20;
  v6 = v2->fields.currentMoveRelativeIndex;
  if ( (unsigned int)v6 >= LODWORD(v5->max_length) )
    goto LABEL_21;
  v7 = v2->fields.moveRelativePositions;
  if ( !v7 )
    goto LABEL_20;
  if ( (unsigned int)v6 >= LODWORD(v7->max_length) )
    goto LABEL_21;
  v8 = (float *)((char *)v5 + 4 * v6);
  v9 = (float *)(&v7->obj.klass + v6);
  v27.fields.z = 0.0;
  v27.fields.x = v9[8];
  v27.fields.y = v9[9];
  v11 = TweenPosition__Begin((UnityEngine_GameObject_o *)this, v8[8], v27, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0) )
  {
    this = (UIScriptChara_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
    if ( v11 )
    {
      v11->fields.eventReceiver = (struct UnityEngine_GameObject_o *)this;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v11->fields.eventReceiver,
        (int32_t)this,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      v18 = StringLiteral_6265/*"EndRelativeMove"*/;
      v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6265/*"EndRelativeMove"*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->fields.callWhenFinished, v18, v19, v20, v21, v22, v23, v24);
      return;
    }
LABEL_20:
    sub_21FFECC(this, method);
  }
}


void UIScriptChara__MoveRelativePositionEase(UIScriptChara_o *this, const MethodInfo *method)
{
  UIScriptChara_o *v2; // x19
  struct System_Single_array *moveRelativeDurations; // x9
  __int64 currentMoveRelativeIndex; // x8
  System_Collections_Hashtable_o *v5; // x20
  __int64 v6; // x0
  struct UnityEngine_Vector2_array *v7; // x8
  __int64 v8; // x9
  __int64 v9; // x0
  struct UnityEngine_Vector2_array *v10; // x8
  __int64 v11; // x9
  __int64 v12; // x0
  struct System_Single_array *v13; // x8
  __int64 v14; // x9
  __int64 v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x19
  struct UnityEngine_Vector2_array *moveRelativePositions; // x9
  const MethodInfo *v20; // x1
  float v21; // [xsp+Ch] [xbp-34h] BYREF
  float y; // [xsp+10h] [xbp-30h] BYREF
  float x; // [xsp+14h] [xbp-2Ch] BYREF
  int v24; // [xsp+18h] [xbp-28h] BYREF
  char v25[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_593A776 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Hashtable_TypeInfo);
    sub_21FFC50(&StringLiteral_26191/*"x"*/);
    sub_21FFC50(&StringLiteral_19567/*"easetype"*/);
    sub_21FFC50(&StringLiteral_6266/*"EndRelativeMoveEase"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23520/*"oncompletetarget"*/);
    sub_21FFC50(&StringLiteral_19348/*"delay"*/);
    sub_21FFC50(&StringLiteral_26293/*"y"*/);
    sub_21FFC50(&StringLiteral_21904/*"isLocal"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    this = (UIScriptChara_o *)sub_21FFC50(&iTween_TypeInfo);
    byte_593A776 = 1;
  }
  moveRelativeDurations = v2->fields.moveRelativeDurations;
  v2->fields.isMoveRelativePosition = 1;
  if ( !moveRelativeDurations )
    goto LABEL_20;
  currentMoveRelativeIndex = v2->fields.currentMoveRelativeIndex;
  if ( (unsigned int)currentMoveRelativeIndex >= LODWORD(moveRelativeDurations->max_length) )
    goto LABEL_21;
  if ( moveRelativeDurations->m_Items[currentMoveRelativeIndex] <= 0.0 )
  {
    moveRelativePositions = v2->fields.moveRelativePositions;
    if ( moveRelativePositions )
    {
      if ( (unsigned int)currentMoveRelativeIndex < LODWORD(moveRelativePositions->max_length) )
      {
        UIScriptChara__SetRelativePosition(v2, moveRelativePositions->m_Items[currentMoveRelativeIndex], method);
        UIScriptChara__EndRelativeMoveEase(v2, v20);
        return;
      }
      goto LABEL_21;
    }
LABEL_20:
    sub_21FFECC(this, method);
  }
  v5 = (System_Collections_Hashtable_o *)sub_21FFEBC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_76632148(v5, 0);
  v25[0] = 1;
  this = (UIScriptChara_o *)j_il2cpp_value_box_0(qword_594C050, v25);
  if ( !v5 )
    goto LABEL_20;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UIScriptChara_o *, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
    v5,
    StringLiteral_21904/*"isLocal"*/,
    this,
    v5->klass->vtable._22_Add.method);
  v24 = 0;
  v6 = j_il2cpp_value_box_0(qword_594C0A0, &v24);
  this = (UIScriptChara_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
                              v5,
                              StringLiteral_19348/*"delay"*/,
                              v6,
                              v5->klass->vtable._22_Add.method);
  v7 = v2->fields.moveRelativePositions;
  if ( !v7 )
    goto LABEL_20;
  v8 = v2->fields.currentMoveRelativeIndex;
  if ( (unsigned int)v8 >= LODWORD(v7->max_length) )
    goto LABEL_21;
  x = v7->m_Items[v8].fields.x;
  v9 = j_il2cpp_value_box_0(qword_594C0A0, &x);
  this = (UIScriptChara_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
                              v5,
                              StringLiteral_26191/*"x"*/,
                              v9,
                              v5->klass->vtable._22_Add.method);
  v10 = v2->fields.moveRelativePositions;
  if ( !v10 )
    goto LABEL_20;
  v11 = v2->fields.currentMoveRelativeIndex;
  if ( (unsigned int)v11 >= LODWORD(v10->max_length) )
    goto LABEL_21;
  y = v10->m_Items[v11].fields.y;
  v12 = j_il2cpp_value_box_0(qword_594C0A0, &y);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
    v5,
    StringLiteral_26293/*"y"*/,
    v12,
    v5->klass->vtable._22_Add.method);
  this = (UIScriptChara_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, struct System_String_o *, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
                              v5,
                              StringLiteral_19567/*"easetype"*/,
                              v2->fields.moveRelativeEaseType,
                              v5->klass->vtable._22_Add.method);
  v13 = v2->fields.moveRelativeDurations;
  if ( !v13 )
    goto LABEL_20;
  v14 = v2->fields.currentMoveRelativeIndex;
  if ( (unsigned int)v14 >= LODWORD(v13->max_length) )
LABEL_21:
    sub_21FFED4(this);
  v21 = v13->m_Items[v14];
  v15 = j_il2cpp_value_box_0(qword_594C0A0, &v21);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
    v5,
    StringLiteral_25318/*"time"*/,
    v15,
    v5->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
    v5,
    StringLiteral_23518/*"oncomplete"*/,
    StringLiteral_6266/*"EndRelativeMoveEase"*/,
    v5->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
    v5,
    StringLiteral_23520/*"oncompletetarget"*/,
    gameObject,
    v5->klass->vtable._22_Add.method);
  this = (UIScriptChara_o *)v2->fields.baseRelativePosition;
  if ( !this )
    goto LABEL_20;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v17);
  iTween__MoveTo_75080224(v18, v5, 0);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x1

  UIScriptChara__StopRelativeMoveTween(this, (const MethodInfo *)movePos);
  this->fields.moveRelativePositions = movePos;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveRelativePositions,
    (int32_t)movePos,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.moveRelativeDurations = duration;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveRelativeDurations,
    (int32_t)duration,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.moveRelativeLoopNum = loopNum;
  this->fields.moveRelativeEaseType = easeType;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveRelativeEaseType,
    (int32_t)easeType,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.currentMoveRelativeIndex = 0;
  this->fields.currentMoveRelativeLoopNum = 0;
  if ( isFastPlay )
    UIScriptChara__StopMoveRelativePositionLoop(this, v31);
  else
    UIScriptChara__MoveRelativePositionEase(this, v31);
}


void UIScriptChara__MoveRelativePositionLoop(
        UIScriptChara_o *this,
        UnityEngine_Vector2_array *movePos,
        System_Single_array *duration,
        int32_t loopNum,
        bool isFastPlay,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x1

  UIScriptChara__StopRelativeMoveTween(this, (const MethodInfo *)movePos);
  this->fields.moveRelativePositions = movePos;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveRelativePositions,
    (int32_t)movePos,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.moveRelativeDurations = duration;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveRelativeDurations,
    (int32_t)duration,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.currentMoveRelativeIndex = 0;
  this->fields.moveRelativeLoopNum = loopNum;
  this->fields.currentMoveRelativeLoopNum = 0;
  if ( isFastPlay )
    UIScriptChara__StopMoveRelativePositionLoop(this, v23);
  else
    UIScriptChara__MoveRelativePosition(this, v23);
}


void UIScriptChara__MoveReturnPosition(UIScriptChara_o *this, float duration, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  TweenPosition_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_593A76D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6255/*"EndMoveReturn"*/);
    byte_593A76D = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  if ( duration <= 0.0 )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8 = TweenPosition__Begin(gameObject, duration, this->fields.basePosition, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0) )
  {
    v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !v8 )
      sub_21FFECC(v9, v10);
    v8->fields.eventReceiver = v9;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v8->fields.eventReceiver,
      (int32_t)v9,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v17 = StringLiteral_6255/*"EndMoveReturn"*/;
    v8->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6255/*"EndMoveReturn"*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.callWhenFinished, v17, v18, v19, v20, v21, v22, v23);
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Hashtable_o *v22; // x21
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x19
  float returnDuration; // [xsp+Ch] [xbp-54h] BYREF
  float v30; // [xsp+10h] [xbp-50h] BYREF
  float v31; // [xsp+14h] [xbp-4Ch] BYREF
  int v32; // [xsp+18h] [xbp-48h] BYREF
  char v33[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_593A76F & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Hashtable_TypeInfo);
    sub_21FFC50(&StringLiteral_26191/*"x"*/);
    sub_21FFC50(&StringLiteral_19567/*"easetype"*/);
    sub_21FFC50(&StringLiteral_6256/*"EndMoveReturnEaseHalf"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_19348/*"delay"*/);
    sub_21FFC50(&StringLiteral_26293/*"y"*/);
    sub_21FFC50(&StringLiteral_21904/*"isLocal"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593A76F = 1;
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.returnEaseType,
    (int32_t)returnEaseType,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Hashtable_o *)sub_21FFEBC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_76632148(v22, 0);
  v33[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C050, v33);
  if ( !v22 )
LABEL_11:
    sub_21FFECC(gameObject, v14);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v22->klass->vtable._22_Add.methodPtr)(
    v22,
    StringLiteral_21904/*"isLocal"*/,
    gameObject,
    v22->klass->vtable._22_Add.method);
  v32 = 0;
  v23 = j_il2cpp_value_box_0(qword_594C0A0, &v32);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v22->klass->vtable._22_Add.methodPtr)(
    v22,
    StringLiteral_19348/*"delay"*/,
    v23,
    v22->klass->vtable._22_Add.method);
  v31 = x;
  v24 = j_il2cpp_value_box_0(qword_594C0A0, &v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, const MethodInfo *))v22->klass->vtable._22_Add.methodPtr)(
    v22,
    StringLiteral_26191/*"x"*/,
    v24,
    v22->klass->vtable._22_Add.method);
  v30 = y;
  v25 = j_il2cpp_value_box_0(qword_594C0A0, &v30);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v22->klass->vtable._22_Add.methodPtr)(
    v22,
    StringLiteral_26293/*"y"*/,
    v25,
    v22->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, const MethodInfo *))v22->klass->vtable._22_Add.methodPtr)(
    v22,
    StringLiteral_19567/*"easetype"*/,
    startEaseType,
    v22->klass->vtable._22_Add.method);
  returnDuration = this->fields.returnDuration;
  v26 = j_il2cpp_value_box_0(qword_594C0A0, &returnDuration);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v22->klass->vtable._22_Add.methodPtr)(
    v22,
    StringLiteral_25318/*"time"*/,
    v26,
    v22->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v22->klass->vtable._22_Add.methodPtr)(
    v22,
    StringLiteral_23518/*"oncomplete"*/,
    StringLiteral_6256/*"EndMoveReturnEaseHalf"*/,
    v22->klass->vtable._22_Add.method);
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v27);
  iTween__MoveTo_75080224(v28, v22, 0);
}


void UIScriptChara__MoveReturnPositionEase_51859284(
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
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  float v17; // [xsp+4h] [xbp-4Ch] BYREF
  float y; // [xsp+8h] [xbp-48h] BYREF
  float x; // [xsp+Ch] [xbp-44h] BYREF
  int v20; // [xsp+18h] [xbp-38h] BYREF
  char v21[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_593A770 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Hashtable_TypeInfo);
    sub_21FFC50(&StringLiteral_26191/*"x"*/);
    sub_21FFC50(&StringLiteral_19567/*"easetype"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_19348/*"delay"*/);
    sub_21FFC50(&StringLiteral_6255/*"EndMoveReturn"*/);
    sub_21FFC50(&StringLiteral_26293/*"y"*/);
    sub_21FFC50(&StringLiteral_21904/*"isLocal"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593A770 = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)returnEaseType);
  this->fields.isMove = 1;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveReturn(this, v7);
  }
  else
  {
    v8 = (System_Collections_Hashtable_o *)sub_21FFEBC(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_76632148(v8, 0);
    v21[0] = 1;
    v9 = j_il2cpp_value_box_0(qword_594C050, v21);
    if ( !v8 )
      sub_21FFECC(v9, v10);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
      v8,
      StringLiteral_21904/*"isLocal"*/,
      v9,
      v8->klass->vtable._22_Add.method);
    v20 = 0;
    v11 = j_il2cpp_value_box_0(qword_594C0A0, &v20);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
      v8,
      StringLiteral_19348/*"delay"*/,
      v11,
      v8->klass->vtable._22_Add.method);
    x = this->fields.basePosition.fields.x;
    v12 = j_il2cpp_value_box_0(qword_594C0A0, &x);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
      v8,
      StringLiteral_26191/*"x"*/,
      v12,
      v8->klass->vtable._22_Add.method);
    y = this->fields.basePosition.fields.y;
    v13 = j_il2cpp_value_box_0(qword_594C0A0, &y);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
      v8,
      StringLiteral_26293/*"y"*/,
      v13,
      v8->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
      v8,
      StringLiteral_19567/*"easetype"*/,
      returnEaseType,
      v8->klass->vtable._22_Add.method);
    v17 = time;
    v14 = j_il2cpp_value_box_0(qword_594C0A0, &v17);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
      v8,
      StringLiteral_25318/*"time"*/,
      v14,
      v8->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
      v8,
      StringLiteral_23518/*"oncomplete"*/,
      StringLiteral_6255/*"EndMoveReturn"*/,
      v8->klass->vtable._22_Add.method);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v15);
    iTween__MoveTo_75080224(gameObject, v8, 0);
  }
}


void UIScriptChara__MoveReturnPosition_51858120(
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
  __int64 v13; // x1
  TweenPosition_o *v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t v21; // w1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_Vector3_o v28; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_593A76E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6257/*"EndMoveReturnHalf"*/);
    byte_593A76E = 1;
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
    v28.fields.x = x;
    v28.fields.y = y;
    v28.fields.z = z;
    v14 = TweenPosition__Begin(v12, this->fields.returnDuration, v28, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v14 )
      {
        v14->fields.eventReceiver = gameObject;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v14->fields.eventReceiver,
          (int32_t)gameObject,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        v21 = StringLiteral_6257/*"EndMoveReturnHalf"*/;
        v14->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6257/*"EndMoveReturnHalf"*/;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v14->fields.callWhenFinished,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        return;
      }
LABEL_12:
      sub_21FFECC(gameObject, v10);
    }
  }
  UIScriptChara__EndMoveReturn(this, v11);
}


void UIScriptChara__MoveScale(UIScriptChara_o *this, float duration, float s, const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  UnityEngine_Component_o *baseScale; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  TweenScale_o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_593A772 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6258/*"EndMoveScale"*/);
    byte_593A772 = 1;
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
    v11 = TweenScale__Begin(gameObject, duration, this->fields.baseScaleSize, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0) )
    {
      baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v11 )
      {
        v11->fields.eventReceiver = (struct UnityEngine_GameObject_o *)baseScale;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v11->fields.eventReceiver,
          (int32_t)baseScale,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        v18 = StringLiteral_6258/*"EndMoveScale"*/;
        v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6258/*"EndMoveScale"*/;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v11->fields.callWhenFinished,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        return;
      }
LABEL_11:
      sub_21FFECC(baseScale, v7);
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
  System_Collections_Hashtable_o *v10; // x20
  UnityEngine_Component_o *baseScale; // x0
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x19
  float v19; // [xsp+0h] [xbp-50h] BYREF
  float y; // [xsp+4h] [xbp-4Ch] BYREF
  float x; // [xsp+8h] [xbp-48h] BYREF
  char v22[4]; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_593A773 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Hashtable_TypeInfo);
    sub_21FFC50(&StringLiteral_26191/*"x"*/);
    sub_21FFC50(&StringLiteral_19567/*"easetype"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23520/*"oncompletetarget"*/);
    sub_21FFC50(&StringLiteral_26293/*"y"*/);
    sub_21FFC50(&StringLiteral_21904/*"isLocal"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&StringLiteral_6258/*"EndMoveScale"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593A773 = 1;
  }
  UIScriptChara__StopMoveScaleTween(this, (const MethodInfo *)easetype);
  this->fields.isMove = 1;
  this->fields.baseScaleSize.fields.x = scale;
  this->fields.baseScaleSize.fields.y = scale;
  this->fields.baseScaleSize.fields.z = 1.0;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveScale(this, v9);
  }
  else
  {
    v10 = (System_Collections_Hashtable_o *)sub_21FFEBC(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_76632148(v10, 0);
    v22[0] = 1;
    baseScale = (UnityEngine_Component_o *)j_il2cpp_value_box_0(qword_594C050, v22);
    if ( !v10 )
      goto LABEL_10;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_Component_o *, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_21904/*"isLocal"*/,
      baseScale,
      v10->klass->vtable._22_Add.method);
    x = this->fields.baseScaleSize.fields.x;
    v13 = j_il2cpp_value_box_0(qword_594C0A0, &x);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_26191/*"x"*/,
      v13,
      v10->klass->vtable._22_Add.method);
    y = this->fields.baseScaleSize.fields.y;
    v14 = j_il2cpp_value_box_0(qword_594C0A0, &y);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_26293/*"y"*/,
      v14,
      v10->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_19567/*"easetype"*/,
      easetype,
      v10->klass->vtable._22_Add.method);
    v19 = time;
    v15 = j_il2cpp_value_box_0(qword_594C0A0, &v19);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_25318/*"time"*/,
      v15,
      v10->klass->vtable._22_Add.method);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_23518/*"oncomplete"*/,
      StringLiteral_6258/*"EndMoveScale"*/,
      v10->klass->vtable._22_Add.method);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
      v10,
      StringLiteral_23520/*"oncompletetarget"*/,
      gameObject,
      v10->klass->vtable._22_Add.method);
    baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
    if ( !baseScale )
LABEL_10:
      sub_21FFECC(baseScale, v12);
    v18 = UnityEngine_Component__get_gameObject(baseScale, 0);
    if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v17);
    iTween__ScaleTo_75085692(v18, v10, 0);
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

  if ( (byte_593A782 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10351/*"OnShake"*/);
    byte_593A782 = 1;
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
        (System_String_o *)StringLiteral_10351/*"OnShake"*/,
        this->fields.shakeCycle,
        0);
      return;
    }
LABEL_12:
    sub_21FFECC(v5, v6);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_83229692(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10351/*"OnShake"*/,
    0);
  v8 = this->fields.baseShake;
  if ( !byte_5931940 )
  {
    v5 = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
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


// local variable allocation has failed, the output may be wrong!
void UIScriptChara__ResumeBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_593A795 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A795 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, isSkip);
  CommonEffectManager__Resume(baseEffectBack, isSkip, 0);
}


void UIScriptChara__ResumeBackEffect_51871684(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_593A796 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A796 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  CommonEffectManager__Resume_50696976(baseEffectBack, n, isSkip, 0);
}


void UIScriptChara__ResumeCutin(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void UIScriptChara__ResumeEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_593A78B & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A78B = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, isSkip);
  CommonEffectManager__Resume(baseEffect, isSkip, 0);
}


void UIScriptChara__ResumeEffect_51870216(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_593A78C & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A78C = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  CommonEffectManager__Resume_50696976(baseEffect, n, isSkip, 0);
}


void UIScriptChara__ResumeSpecialEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ProgramEffectManager__Resume(this->fields.baseSpecialEffect, isSkip, 0);
}


void UIScriptChara__ResumeSpecialEffect_51869192(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  ProgramEffectManager__Resume_50724548(this->fields.baseSpecialEffect, n, isSkip, 0);
}


System_Collections_IEnumerator_o *UIScriptChara__RollAxis(
        UIScriptChara_o *this,
        System_String_o *axis,
        float angle,
        float duration,
        const MethodInfo *method)
{
  __int64 v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_593A77C & 1) == 0 )
  {
    sub_21FFC50(&UIScriptChara__RollAxis_d__121_TypeInfo);
    byte_593A77C = 1;
  }
  v9 = sub_21FFEBC(UIScriptChara__RollAxis_d__121_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 40) = axis;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)axis, v16, v17, v18, v19, v20, v21);
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
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  UIScriptChara__SetBackEffect_51871236(
    this,
    n,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    isSkip,
    isPause,
    flip,
    isOnSublayer,
    method);
}


void UIScriptChara__SetBackEffect_51871236(
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
  __int64 v19; // x1
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  z = p.fields.z;
  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_593A794 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_21FFC50(&Method_UIScriptChara__SetBackEffect_g__Callback_161_0__);
    byte_593A794 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( isOnSublayer )
  {
    v18 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_21FFEBC(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(v18, 0, Method_UIScriptChara__SetBackEffect_g__Callback_161_0__, 0);
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v19);
    v20.fields.y = y;
    v20.fields.z = z;
    v20.fields.x = x;
    CommonEffectManager__Create_50695488(baseEffectBack, n, v20, v18, isSkip, isPause, flip, 0);
  }
  else
  {
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
    v21.fields.y = y;
    v21.fields.z = z;
    v21.fields.x = x;
    CommonEffectManager__Create_50695296(baseEffectBack, n, v21, isSkip, isPause, flip, 0);
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
    sub_21FFECC(0, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v9, 0);
  this->fields.isMove = 0;
}


// local variable allocation has failed, the output may be wrong!
void UIScriptChara__SetCharacter(
        UIScriptChara_o *this,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.setCallback = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setCallback,
    (int32_t)callback,
    *(System_String_o **)&faceType,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
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
    sub_21FFECC(baseDepth, *(_QWORD *)&d);
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
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  UIScriptChara__SetEffect_51869768(
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
  float v13; // s12
  float v14; // s13
  float v15; // s14
  float v16; // s15
  __int64 v23; // x25
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x1
  UnityEngine_Object_o *v40; // x24
  CommonEffectLoadComponent_LoadEndHandler_o *v41; // x24
  __int64 v42; // x1
  UnityEngine_GameObject_o *baseEffect; // x23
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  float a; // [xsp+4Ch] [xbp-44h]
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  b = particleColor.fields.b;
  g = particleColor.fields.g;
  a = particleColor.fields.a;
  r = particleColor.fields.r;
  v13 = color.fields.a;
  v14 = color.fields.b;
  v15 = color.fields.g;
  v16 = color.fields.r;
  if ( (byte_593A767 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UIScriptChara___c__DisplayClass58_0__SetEffectEdgeBlur_b__0__);
    sub_21FFC50(&UIScriptChara___c__DisplayClass58_0_TypeInfo);
    byte_593A767 = 1;
  }
  v23 = sub_21FFEBC(UIScriptChara___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0);
  if ( !v23 )
    sub_21FFECC(v24, v25);
  *(_QWORD *)(v23 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 16), (int32_t)this, v26, v27, v28, v29, v30, v31);
  *(float *)(v23 + 24) = v16;
  *(float *)(v23 + 28) = v15;
  *(float *)(v23 + 32) = v14;
  *(float *)(v23 + 36) = v13;
  *(float *)(v23 + 40) = r;
  *(float *)(v23 + 44) = g;
  *(float *)(v23 + 48) = b;
  *(float *)(v23 + 52) = a;
  *(float *)(v23 + 64) = thick;
  *(_DWORD *)(v23 + 68) = level;
  v32 = ((__int64 (__fastcall *)(UIScriptChara_o *, const MethodInfo *))this->klass->vtable._7_GetBodySubTexture.methodPtr)(
          this,
          this->klass->vtable._7_GetBodySubTexture.method);
  *(_QWORD *)(v23 + 56) = v32;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 56), v32, v33, v34, v35, v36, v37, v38);
  v40 = *(UnityEngine_Object_o **)(v23 + 56);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  if ( !UnityEngine_Object__op_Equality(v40, 0, 0) )
  {
    v41 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_21FFEBC(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v41,
      (Il2CppObject *)v23,
      Method_UIScriptChara___c__DisplayClass58_0__SetEffectEdgeBlur_b__0__,
      0);
    baseEffect = this->fields.baseEffect;
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v42);
    v49.fields.x = x;
    v49.fields.y = y;
    v49.fields.z = z;
    CommonEffectManager__Create_50695488(baseEffect, effectName, v49, v41, isSkip, isPause, flip, 0);
  }
}


void UIScriptChara__SetEffect_51869768(
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
  __int64 v19; // x1
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  z = p.fields.z;
  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_593A78A & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_21FFC50(&Method_UIScriptChara__SetEffect_g__Callback_150_0__);
    byte_593A78A = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( isOnSublayer )
  {
    v18 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_21FFEBC(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(v18, 0, Method_UIScriptChara__SetEffect_g__Callback_150_0__, 0);
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v19);
    v20.fields.y = y;
    v20.fields.z = z;
    v20.fields.x = x;
    CommonEffectManager__Create_50695488(baseEffect, n, v20, v18, isSkip, isPause, flip, 0);
  }
  else
  {
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
    v21.fields.y = y;
    v21.fields.z = z;
    v21.fields.x = x;
    CommonEffectManager__Create_50695296(baseEffect, n, v21, isSkip, isPause, flip, 0);
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
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  float a; // s8
  float b; // s9
  struct System_String_o **p_filterName; // x19
  float g; // s10
  float r; // s11

  a = filterColor.fields.a;
  b = filterColor.fields.b;
  this->fields.filterName = filterName;
  p_filterName = &this->fields.filterName;
  g = filterColor.fields.g;
  r = filterColor.fields.r;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.filterName,
    (int32_t)filterName,
    (System_String_o *)method,
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
    sub_21FFECC(0, v7);
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
    sub_21FFECC(0, v6);
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
  __int64 v15; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_593A779 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A779 = 1;
  }
  UIScriptChara__StopRollAxisTween(this, method);
  v18.fields.y = 0.0;
  v18.fields.z = rollZ * 0.017453;
  v18.fields.x = 0.0;
  v21 = UnityEngine_Quaternion__Internal_FromEulerRad(v18, 0);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_13;
  v11 = v21.fields.x;
  v12 = v21.fields.y;
  v13 = v21.fields.z;
  w = v21.fields.w;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)baseRoll1,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
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
  v22.fields.x = v11;
  v22.fields.y = v12;
  v22.fields.z = v13;
  v22.fields.w = w;
  UnityEngine_Transform__set_localRotation(baseRoll1, v22, 0);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1
    || (v19.fields.z = -z,
        v19.fields.y = -y,
        v19.fields.x = -x,
        UnityEngine_Transform__set_localPosition(baseRoll1, v19, 0),
        (baseRoll1 = this->fields.baseRoll2) == 0) )
  {
LABEL_13:
    sub_21FFECC(baseRoll1, v9);
  }
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  UnityEngine_Transform__set_localPosition(baseRoll1, v20, 0);
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
  __int64 v23; // x1
  UnityEngine_Object_o *CharaEffect; // x22
  uint32_t v25; // w0
  __int64 *v26; // x8
  const MethodInfo *v27; // x2
  float colora; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_593A785 & 1) == 0 )
  {
    colora = color.fields.a;
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_26161/*"wipe"*/);
    sub_21FFC50(&StringLiteral_17495/*"appearanceReverse"*/);
    sub_21FFC50(&StringLiteral_19239/*"darkEnemyErasure"*/);
    sub_21FFC50(&StringLiteral_26167/*"wipeTimeRe"*/);
    sub_21FFC50(&StringLiteral_19240/*"darkWipe"*/);
    sub_21FFC50(&StringLiteral_20355/*"flashErasure"*/);
    sub_21FFC50(&StringLiteral_17494/*"appearance"*/);
    sub_21FFC50(&StringLiteral_19913/*"erasure"*/);
    sub_21FFC50(&StringLiteral_19914/*"erasureReverse"*/);
    sub_21FFC50(&StringLiteral_19874/*"enemyErasure"*/);
    sub_21FFC50(&StringLiteral_26166/*"wipeTime"*/);
    color.fields.a = colora;
    byte_593A785 = 1;
  }
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  v20 = r;
  v21 = g;
  v22 = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v29,
                                          time,
                                          color,
                                          range,
                                          isSkip,
                                          isPause,
                                          0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( !UnityEngine_Object__op_Equality(CharaEffect, 0, 0) )
  {
    v25 = PrivateImplementationDetails___ComputeStringHash(n, 0);
    if ( v25 > 0x8D759330 )
    {
      if ( v25 > 0xD4B34506 )
      {
        switch ( v25 )
        {
          case 0xE7555186:
            v26 = &StringLiteral_26161/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v26 = &StringLiteral_19240/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v26 = &StringLiteral_17494/*"appearance"*/;
            break;
          default:
            return;
        }
      }
      else
      {
        switch ( v25 )
        {
          case 0x8DA714B6:
            v26 = &StringLiteral_26167/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v26 = &StringLiteral_20355/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v26 = &StringLiteral_19914/*"erasureReverse"*/;
            break;
          default:
            return;
        }
      }
    }
    else if ( v25 > 0x4A1132BE )
    {
      switch ( v25 )
      {
        case 0x8D759330:
          v26 = &StringLiteral_19913/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v26 = &StringLiteral_19874/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v26 = &StringLiteral_17495/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v25 == 242689791 )
    {
      v26 = &StringLiteral_26166/*"wipeTime"*/;
    }
    else
    {
      if ( v25 != 1242641086 )
        return;
      v26 = &StringLiteral_19239/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v26, 0) )
      UIScriptChara__StopShadowEffect(this, isSkip, v27);
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
  float v11; // s0

  v11 = 0.0;
  if ( duration > 0.0 )
    v11 = UnityEngine_Time__get_time(0) + duration;
  if ( !this )
    sub_21FFECC(this, method);
  this->fields.shakeTime = v11;
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
  __int64 v13; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  TweenRotation_o *v17; // x20
  UnityEngine_GameObject_o *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  bool v32; // w8
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v37; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_593A77A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6236/*"EndExecuteCameraRoll"*/);
    byte_593A77A = 1;
  }
  UIScriptChara__StopRollAxisTween(this, method);
  v34.fields.y = 0.0;
  v34.fields.z = rollZ * 0.017453;
  v34.fields.x = 0.0;
  v35 = UnityEngine_Quaternion__Internal_FromEulerRad(v34, 0);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_19;
  x = v35.fields.x;
  y = v35.fields.y;
  z = v35.fields.z;
  w = v35.fields.w;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)baseRoll1,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
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
    sub_21FFECC(baseRoll1, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseRoll1, 0);
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  v37.fields.w = w;
  v17 = TweenRotation__Begin(gameObject, duration, v37, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0);
  if ( ((unsigned __int8)baseRoll1 & 1) == 0 )
    goto LABEL_16;
  if ( !v17 )
    goto LABEL_19;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v17, 0) )
  {
LABEL_16:
    baseRoll1 = this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v36.fields.x = x;
      v36.fields.y = y;
      v36.fields.z = z;
      v36.fields.w = w;
      UnityEngine_Transform__set_localRotation(baseRoll1, v36, 0);
      v32 = 0;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v17->fields.eventReceiver = v18;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v17->fields.eventReceiver,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = StringLiteral_6236/*"EndExecuteCameraRoll"*/;
  v17->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6236/*"EndExecuteCameraRoll"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->fields.callWhenFinished, v25, v26, v27, v28, v29, v30, v31);
  v32 = 1;
LABEL_18:
  this->fields.isRoll = v32;
  return 1;
}


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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  _BOOL4 isRollLoop; // w8
  bool v24; // w23
  System_String_o *rollAxis; // x21
  System_String_o *v26; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct UnityEngine_Vector3_StaticFields *v31; // x10
  struct UnityEngine_Vector3_StaticFields *v32; // x10
  System_Collections_IEnumerator_o *v33; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v14 = isLoop;
  if ( (byte_593A77D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26191/*"x"*/);
    sub_21FFC50(&StringLiteral_26293/*"y"*/);
    sub_21FFC50(&StringLiteral_26341/*"z"*/);
    byte_593A77D = 1;
  }
  UIScriptChara__StopRollAxisTween(this, (const MethodInfo *)axis);
  baseRoll1 = this->fields.baseRoll1;
  this->fields.isRollLoop = v14;
  if ( !baseRoll1 )
    sub_21FFECC(0, v15);
  localRotation = UnityEngine_Transform__get_localRotation(baseRoll1, 0);
  v41 = UnityEngine_Quaternion__Internal_ToEulerRad(localRotation, 0);
  v41.fields.x = v41.fields.x * 57.296;
  v41.fields.y = v41.fields.y * 57.296;
  v41.fields.z = v41.fields.z * 57.296;
  Positive = UnityEngine_Quaternion__Internal_MakePositive(v41, 0);
  isRollLoop = this->fields.isRollLoop;
  this->fields.initAngle = Positive;
  if ( isRollLoop )
  {
    v24 = isWait;
    this->fields.rollAxis = axis;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.rollAxis, (int32_t)axis, v17, v18, v19, v20, v21, v22);
    rollAxis = this->fields.rollAxis;
    v26 = (System_String_o *)StringLiteral_26191/*"x"*/;
    this->fields.rollAngle = roll;
    this->fields.rollDuration = duration;
    this->fields.isRollWait = v24;
    if ( System_String__op_Equality(rollAxis, v26, 0) )
    {
      if ( !byte_5931947 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931947 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      p_x = &static_fields->rightVector.fields.x;
      p_y = &static_fields->rightVector.fields.y;
      p_z = &static_fields->rightVector.fields.z;
LABEL_17:
      v43.fields.y = *p_y;
      v43.fields.x = *p_x;
      v43.fields.z = *p_z;
      this->fields.stopLocalRotationLoopEnd = UnityEngine_Quaternion__AngleAxis(stopAngle, v43, 0);
      goto LABEL_18;
    }
    if ( System_String__op_Equality(rollAxis, (System_String_o *)StringLiteral_26293/*"y"*/, 0) )
    {
      if ( !byte_5931948 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931948 = 1;
      }
      v31 = UnityEngine_Vector3_TypeInfo->static_fields;
      p_x = &v31->upVector.fields.x;
      p_y = &v31->upVector.fields.y;
      p_z = &v31->upVector.fields.z;
      goto LABEL_17;
    }
    if ( System_String__op_Equality(rollAxis, (System_String_o *)StringLiteral_26341/*"z"*/, 0) )
    {
      if ( !byte_5931949 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931949 = 1;
      }
      v32 = UnityEngine_Vector3_TypeInfo->static_fields;
      p_x = &v32->forwardVector.fields.x;
      p_y = &v32->forwardVector.fields.y;
      p_z = &v32->forwardVector.fields.z;
      goto LABEL_17;
    }
  }
LABEL_18:
  v33 = UIScriptChara__RollAxis(this, axis, roll, duration, (const MethodInfo *)v17);
  started = UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v33, 0);
  this->fields.runningRotationCoroutine = started;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.runningRotationCoroutine,
    (int32_t)started,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
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
  float x; // s13
  __int64 v11; // x1
  UnityEngine_Component_o *baseRoll1; // x0
  float v13; // s11
  float v14; // s12
  float w; // s14
  __int64 v16; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v19; // x20
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  bool v35; // w8
  float value; // [xsp+Ch] [xbp-64h]
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_593A77B & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UITweener_Begin_TweenRotation___);
    sub_21FFC50(&StringLiteral_6236/*"EndExecuteCameraRoll"*/);
    byte_593A77B = 1;
  }
  UIScriptChara__StopRollAxisTween(this, method);
  v38.fields.y = 0.0;
  v38.fields.z = rollZ * 0.017453;
  v38.fields.x = 0.0;
  v42 = UnityEngine_Quaternion__Internal_FromEulerRad(v38, 0);
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  value = v42.fields.x;
  if ( !baseRoll1 )
    goto LABEL_23;
  v13 = v42.fields.y;
  v14 = v42.fields.z;
  w = v42.fields.w;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       baseRoll1,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
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
                                           (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenRotation___);
  if ( !baseRoll1 )
    goto LABEL_23;
  v19 = baseRoll1;
  v43 = TweenRotation__get_value((TweenRotation_o *)baseRoll1, 0);
  v39 = UnityEngine_Quaternion__Internal_ToEulerRad(v43, 0);
  v39.fields.x = v39.fields.x * 57.296;
  v39.fields.y = v39.fields.y * 57.296;
  v39.fields.z = v39.fields.z * 57.296;
  *(UnityEngine_Vector3_o *)&v19[5].monitor = UnityEngine_Quaternion__Internal_MakePositive(v39, 0);
  HIDWORD(v19[5].fields.m_CachedPtr) = 0;
  LODWORD(v19[6].klass) = 0;
  *((float *)&v19[6].klass + 1) = rollZ;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v19, 1.0, 1, 0);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v19, 0, 0);
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1
    || (v40.fields.z = -z,
        v40.fields.y = -y,
        v40.fields.x = -x,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v40, 0),
        (baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll2) == 0) )
  {
LABEL_23:
    sub_21FFECC(baseRoll1, v11);
  }
  v41.fields.x = x;
  v41.fields.y = y;
  v41.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v41, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0)
    || !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v19, 0) )
  {
    baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v44.fields.y = v13;
      v44.fields.z = v14;
      v44.fields.x = value;
      v44.fields.w = w;
      UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)baseRoll1, v44, 0);
      v35 = 0;
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v19[3].monitor = v21;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v19[3].monitor, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = StringLiteral_6236/*"EndExecuteCameraRoll"*/;
  v19[3].fields.m_CachedPtr = StringLiteral_6236/*"EndExecuteCameraRoll"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v19[3].fields, v28, v29, v30, v31, v32, v33, v34);
  v35 = 1;
LABEL_22:
  this->fields.isRoll = v35;
  return 1;
}


void UIScriptChara__StartShadowEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseShadowEffect; // x20

  if ( (byte_593A768 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&StringLiteral_14170/*"Talk/bit_talk_11"*/);
    byte_593A768 = 1;
  }
  if ( this->fields.isShadow && this->fields.isDisp && !this->fields.isShadowEffect )
  {
    baseShadowEffect = this->fields.baseShadowEffect;
    this->fields.isShadowEffect = 1;
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
    CommonEffectManager__Create_50693860(baseShadowEffect, (System_String_o *)StringLiteral_14170/*"Talk/bit_talk_11"*/, 0, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
bool UIScriptChara__StopBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_593A797 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A797 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, isSkip);
  return CommonEffectManager__Stop(baseEffectBack, isSkip, 0, 0, 0);
}


bool UIScriptChara__StopBackEffect_51871916(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_593A798 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A798 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  return CommonEffectManager__Stop_50698288(baseEffectBack, n, isSkip, 0, 0, 0);
}


void UIScriptChara__StopCut(UIScriptChara_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
bool UIScriptChara__StopEffect(UIScriptChara_o *this, bool isSkip, System_String_o *markKey, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_593A78D & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A78D = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, isSkip);
  return CommonEffectManager__Stop(baseEffect, isSkip, 0, markKey, 0);
}


bool UIScriptChara__StopEffect_51870452(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        System_String_o *markKey,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x22

  if ( (byte_593A78E & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A78E = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  return CommonEffectManager__Stop_50698288(baseEffect, n, isSkip, 0, markKey, 0);
}


void UIScriptChara__StopMoveRelativePositionLoop(UIScriptChara_o *this, const MethodInfo *method)
{
  System_Array_o *moveRelativeDurations; // x0
  const MethodInfo *v4; // x1
  struct UnityEngine_Vector2_array *moveRelativePositions; // x8
  struct System_String_o *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593A777 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A777 = 1;
  }
  UIScriptChara__StopRelativeMoveTween(this, method);
  moveRelativePositions = this->fields.moveRelativePositions;
  if ( !moveRelativePositions )
    goto LABEL_8;
  if ( !LODWORD(moveRelativePositions->max_length) )
    sub_21FFED4(moveRelativeDurations);
  UIScriptChara__SetRelativePosition(
    this,
    *(UnityEngine_Vector2_o *)((char *)moveRelativePositions->m_Items
                             + ((__int64)(((unsigned __int64)LODWORD(moveRelativePositions->max_length) << 32)
                                        - 0x100000000LL) >> 29)),
    v4);
  moveRelativeDurations = (System_Array_o *)this->fields.moveRelativePositions;
  this->fields.isMoveRelativePosition = 0;
  if ( !moveRelativeDurations
    || (System_Array__Initialize(moveRelativeDurations, 0),
        (moveRelativeDurations = (System_Array_o *)this->fields.moveRelativeDurations) == 0) )
  {
LABEL_8:
    sub_21FFECC(moveRelativeDurations, v4);
  }
  System_Array__Initialize(moveRelativeDurations, 0);
  v6 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.moveRelativeLoopNum = 0;
  this->fields.moveRelativeEaseType = v6;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveRelativeEaseType,
    (int32_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.currentMoveRelativeIndex = 0;
  this->fields.currentMoveRelativeLoopNum = 0;
}


void UIScriptChara__StopMoveScaleTween(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *baseScale; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v6; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_593A771 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_24359/*"scaleto"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593A771 = 1;
  }
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(baseScale, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v4);
  iTween__Stop_75191096(gameObject, (System_String_o *)StringLiteral_24359/*"scaleto"*/, 0);
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_14;
  baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseScale, 0);
  if ( !baseScale )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseScale,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
    sub_21FFECC(baseScale, method);
  }
}


void UIScriptChara__StopMoveTween(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_593A76A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_22726/*"moveto"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593A76A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v3);
  iTween__Stop_75191096(gameObject, (System_String_o *)StringLiteral_22726/*"moveto"*/, 0);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v5 )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      return;
    }
LABEL_12:
    sub_21FFECC(v5, v6);
  }
}


void UIScriptChara__StopRelativeMoveTween(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *baseRelativePosition; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v6; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_593A774 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_22726/*"moveto"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593A774 = 1;
  }
  baseRelativePosition = (UnityEngine_Component_o *)this->fields.baseRelativePosition;
  if ( !baseRelativePosition )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(baseRelativePosition, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v4);
  iTween__Stop_75191096(gameObject, (System_String_o *)StringLiteral_22726/*"moveto"*/, 0);
  baseRelativePosition = (UnityEngine_Component_o *)this->fields.baseRelativePosition;
  if ( !baseRelativePosition )
    goto LABEL_14;
  baseRelativePosition = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseRelativePosition, 0);
  if ( !baseRelativePosition )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseRelativePosition,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
    sub_21FFECC(baseRelativePosition, method);
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
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  float v16; // s0
  float rollAngle; // s2
  float v18; // w8
  float v19; // s8
  float v20; // s1
  float v21; // s9
  System_Collections_IEnumerator_o *v22; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593A780 & 1) == 0 )
  {
    sub_21FFC50(&System_MathF_TypeInfo);
    byte_593A780 = 1;
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
    sub_21FFECC(0, v5);
  rollAxis = this->fields.rollAxis;
  localRotation = UnityEngine_Transform__get_localRotation(baseRoll1, 0);
  v30 = UnityEngine_Quaternion__Internal_ToEulerRad(localRotation, 0);
  v30.fields.x = v30.fields.x * 57.296;
  v30.fields.y = v30.fields.y * 57.296;
  v30.fields.z = v30.fields.z * 57.296;
  Positive = UnityEngine_Quaternion__Internal_MakePositive(v30, 0);
  ConvertedLocalRotationEulerAnglesToAngle = UIScriptChara__GetConvertedLocalRotationEulerAnglesToAngle(
                                               v9,
                                               rollAxis,
                                               Positive,
                                               this->fields.initAngle,
                                               v10);
  v32 = UnityEngine_Quaternion__Internal_ToEulerRad(this->fields.stopLocalRotationLoopEnd, 0);
  v32.fields.x = v32.fields.x * 57.296;
  v32.fields.y = v32.fields.y * 57.296;
  v32.fields.z = v32.fields.z * 57.296;
  v33 = UnityEngine_Quaternion__Internal_MakePositive(v32, 0);
  v16 = UIScriptChara__GetConvertedLocalRotationEulerAnglesToAngle(v12, rollAxis, v33, this->fields.initAngle, v13);
  rollAngle = this->fields.rollAngle;
  if ( rollAngle >= 0.0 )
  {
    if ( v16 < ConvertedLocalRotationEulerAnglesToAngle )
    {
      v18 = 360.0;
      goto LABEL_11;
    }
  }
  else if ( v16 >= ConvertedLocalRotationEulerAnglesToAngle )
  {
    v18 = -360.0;
LABEL_11:
    v16 = v16 + v18;
  }
  v19 = v16 - ConvertedLocalRotationEulerAnglesToAngle;
  v20 = 0.0;
  if ( !isFastPlay )
  {
    v21 = rollAngle / this->fields.rollDuration;
    if ( !*(&System_MathF_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_MathF_TypeInfo, v14);
    v20 = fabsf(v19 / v21);
  }
  v22 = UIScriptChara__RollAxis(this, rollAxis, v19, v20, v15);
  started = UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v22, 0);
  this->fields.runningRotationCoroutine = started;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.runningRotationCoroutine,
    (int32_t)started,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void UIScriptChara__StopRollAxisTween(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *baseRoll1; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Coroutine_o *runningRotationCoroutine; // x1

  if ( (byte_593A77F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenRotation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_21FFC50(&StringLiteral_24311/*"rotateby"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593A77F = 1;
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(baseRoll1, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v4);
  iTween__Stop_75191096(gameObject, (System_String_o *)StringLiteral_24311/*"rotateby"*/, 0);
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_17;
  baseRoll1 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseRoll1, 0);
  if ( !baseRoll1 )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseRoll1,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenRotation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
    UnityEngine_MonoBehaviour__StopCoroutine_83232056((UnityEngine_MonoBehaviour_o *)this, runningRotationCoroutine, 0);
  baseRoll1 = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !baseRoll1 )
LABEL_17:
    sub_21FFECC(baseRoll1, method);
  ScriptManager__moveBackScriptZ((ScriptManager_o *)baseRoll1, 0, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptChara__StopShadowEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  CommonEffectManager_c *v5; // x0
  UnityEngine_GameObject_o *baseShadowEffect; // x21

  if ( (byte_593A769 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_593A769 = 1;
  }
  v5 = CommonEffectManager_TypeInfo;
  baseShadowEffect = this->fields.baseShadowEffect;
  this->fields.isShadowEffect = 0;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, isSkip);
  CommonEffectManager__Stop(baseShadowEffect, isSkip, 0, 0, 0);
}


void UIScriptChara__StopSpecialEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  ProgramEffectManager__Destory(this->fields.baseSpecialEffect, 0);
}


void UIScriptChara__StopSpecialEffect_51869216(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  ProgramEffectManager__Destory_50726296(this->fields.baseSpecialEffect, n, 0);
}


void UIScriptChara___SetBackEffect_g__Callback_161_0(CommonEffectComponent_o *effect, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_593A79B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A79B = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0, 0);
  if ( !v3 )
  {
    if ( !effect )
      sub_21FFECC(v3, v4);
    effect->fields._IsOnSublayer_k__BackingField = 1;
  }
}


void UIScriptChara___SetEffect_g__Callback_150_0(CommonEffectComponent_o *effect, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_593A79A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A79A = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0, 0);
  if ( !v3 )
  {
    if ( !effect )
      sub_21FFECC(v3, v4);
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
  __int64 v7; // x1
  UnityEngine_Object_o *sortingGroup; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  System_String_o *axis; // x21
  float z; // s1
  System_String_o *v19; // x1
  struct UnityEngine_Vector3_StaticFields *v20; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  float angularVelocity_5__4; // s8
  float deltaTime; // s0
  struct UnityEngine_Vector3_StaticFields *v26; // x10
  struct UnityEngine_Vector3_StaticFields *v27; // x10
  float v28; // s1
  float v29; // s2
  int32x4_t v30; // q4
  float v31; // v1.s[2]
  float v32; // v2.s[3]
  float v33; // v3.s[1]
  int32x4_t v34; // q5
  float32x4_t v35; // q4
  int32x4_t v36; // q6
  float32x4_t v37; // q7
  int8x16_t v38; // q5
  float32x4_t v39; // q4
  float *v40; // x8
  float angle; // s0
  float duration; // s1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  float v49; // s0
  float time_5__5; // s8
  float v51; // s0
  float v52; // s1
  MissionNaviTransitionBoardItem_o *p__2__current; // x20
  bool result; // w0
  float v55; // s2
  float v56; // s3
  float v57; // s0 OVERLAPPED
  float v58; // s1
  float *v59; // x9
  float *v60; // x10
  float *p_w; // x11
  const MethodInfo *v62; // x1
  float v63; // [xsp+0h] [xbp-80h]
  float v64; // [xsp+10h] [xbp-70h]
  float x; // [xsp+20h] [xbp-60h]
  float w; // [xsp+30h] [xbp-50h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  v2 = this;
  if ( (byte_593A79D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_SortingGroup___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_21FFC50(&StringLiteral_26191/*"x"*/);
    sub_21FFC50(&StringLiteral_26293/*"y"*/);
    this = (UIScriptChara__RollAxis_d__121_o *)sub_21FFC50(&StringLiteral_26341/*"z"*/);
    byte_593A79D = 1;
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
    v68.fields.y = -localPosition.fields.y;
    v68.fields.x = -v5;
    v68.fields.z = -0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v68, 0);
    this = (UIScriptChara__RollAxis_d__121_o *)_4__this->fields.baseRoll2;
    if ( !this )
      goto LABEL_55;
    v69.fields.z = 0.0;
    v69.fields.x = v5;
    v69.fields.y = y;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v69, 0);
    sortingGroup = (UnityEngine_Object_o *)_4__this->fields.sortingGroup;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Equality(sortingGroup, 0, 0) )
    {
      this = (UIScriptChara__RollAxis_d__121_o *)_4__this->fields.baseDepth;
      if ( !this )
        goto LABEL_55;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_SortingGroup___);
      _4__this->fields.sortingGroup = (struct UnityEngine_Rendering_SortingGroup_o *)Component_object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&_4__this->fields.sortingGroup,
        (int32_t)Component_object,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    this = (UIScriptChara__RollAxis_d__121_o *)_4__this->fields.sortingGroup;
    if ( !this )
LABEL_55:
      sub_21FFECC(this, method);
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    {
      this = (UIScriptChara__RollAxis_d__121_o *)_4__this->fields.sortingGroup;
      if ( !this )
        goto LABEL_55;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    }
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    axis = v2->fields.axis;
    z = static_fields->zeroVector.fields.z;
    v19 = (System_String_o *)StringLiteral_26191/*"x"*/;
    *(_QWORD *)&v2->fields._rotationAxis_5__2.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    v2->fields._rotationAxis_5__2.fields.z = z;
    if ( System_String__op_Equality(axis, v19, 0) )
    {
      if ( !byte_5931947 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931947 = 1;
      }
      v20 = UnityEngine_Vector3_TypeInfo->static_fields;
      p_x = &v20->rightVector.fields.x;
      p_y = &v20->rightVector.fields.y;
      p_z = &v20->rightVector.fields.z;
    }
    else if ( System_String__op_Equality(axis, (System_String_o *)StringLiteral_26293/*"y"*/, 0) )
    {
      if ( !byte_5931948 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931948 = 1;
      }
      v26 = UnityEngine_Vector3_TypeInfo->static_fields;
      p_x = &v26->upVector.fields.x;
      p_y = &v26->upVector.fields.y;
      p_z = &v26->upVector.fields.z;
    }
    else
    {
      if ( !System_String__op_Equality(axis, (System_String_o *)StringLiteral_26341/*"z"*/, 0) )
      {
LABEL_38:
        this = (UIScriptChara__RollAxis_d__121_o *)_4__this->fields.baseRoll1;
        if ( !this )
          goto LABEL_55;
        localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)this, 0);
        w = localRotation.fields.w;
        v63 = localRotation.fields.y;
        localRotation.fields.w = v2->fields._rotationAxis_5__2.fields.z;
        v64 = localRotation.fields.z;
        x = localRotation.fields.x;
        localRotation.fields.y = v2->fields._rotationAxis_5__2.fields.x;
        localRotation.fields.z = v2->fields._rotationAxis_5__2.fields.y;
        v71 = UnityEngine_Quaternion__AngleAxis(v2->fields.angle, *(UnityEngine_Vector3_o *)&localRotation.fields.y, 0);
        v30 = (int32x4_t)v71;
        v30.n128_u32[1] = LODWORD(v71.fields.y);
        *(UnityEngine_Quaternion_o *)&v71.fields.y = (UnityEngine_Quaternion_o)v30;
        v31 = v71.fields.z;
        *(UnityEngine_Quaternion_o *)&v71.fields.z = *(UnityEngine_Quaternion_o *)&v71.fields.y;
        v32 = v71.fields.w;
        v33 = v63;
        v34.n128_u64[0] = *(_QWORD *)&v71.fields.w;
        v34.n128_u64[1] = __PAIR64__(LODWORD(x), LODWORD(v64));
        *(UnityEngine_Quaternion_o *)&v71.fields.w = (UnityEngine_Quaternion_o)vzip1q_s32(
                                                                                 vtrn2q_s32(
                                                                                   *(int32x4_t *)&v71.fields.w,
                                                                                   v30),
                                                                                 v30);
        *(UnityEngine_Quaternion_o *)&v71.fields.z = (UnityEngine_Quaternion_o)vmulq_n_f32(
                                                                                 *(float32x4_t *)&v71.fields.z,
                                                                                 w);
        *(UnityEngine_Quaternion_o *)&v71.fields.y = (UnityEngine_Quaternion_o)vrev64q_s32(
                                                                                 vuzp2q_s32(
                                                                                   vuzp1q_s32(
                                                                                     v34,
                                                                                     *(int32x4_t *)&v71.fields.y),
                                                                                   v34));
        v35 = vmulq_f32(v34, vextq_s8(v34, vzip1q_s32(vzip1q_s32(v34, (int32x4_t)v71), v34), 0xCu));
        v36 = vuzp1q_s32(*(int32x4_t *)&v71.fields.w, *(int32x4_t *)&v71.fields.w);
        v71 = (UnityEngine_Quaternion_o)vzip1q_s32((int32x4_t)v71, *(int32x4_t *)&v71.fields.y);
        *(UnityEngine_Quaternion_o *)&v71.fields.w = (UnityEngine_Quaternion_o)vmulq_f32(
                                                                                 *(float32x4_t *)&v71.fields.y,
                                                                                 *(float32x4_t *)&v71.fields.w);
        v37 = vaddq_f32(*(float32x4_t *)&v71.fields.z, v35);
        v38 = vzip2q_s32(v36, v34);
        *(UnityEngine_Quaternion_o *)&v71.fields.z = (UnityEngine_Quaternion_o)vsubq_f32(
                                                                                 *(float32x4_t *)&v71.fields.z,
                                                                                 v35);
        v39 = vaddq_f32(v37, *(float32x4_t *)&v71.fields.w);
        v39.n128_u32[3] = vsubq_f32(*(float32x4_t *)(&v71 + 8), *(float32x4_t *)(&v71 + 12)).n128_u32[3];
        v2->fields._stopRotation_5__3 = (struct UnityEngine_Quaternion_o)vsubq_f32(
                                                                           v39,
                                                                           vmulq_f32(
                                                                             vextq_s8(v38, v38, 8u),
                                                                             vextq_s8(
                                                                               vzip1q_s32(
                                                                                 *(int32x4_t *)&v71.fields.y,
                                                                                 (int32x4_t)v71),
                                                                               (int8x16_t)v71,
                                                                               8u)));
        v40 = &v2->fields._stopRotation_5__3.fields.x;
        if ( v2->fields.duration <= 0.0 )
        {
          this = (UIScriptChara__RollAxis_d__121_o *)_4__this->fields.baseRoll1;
          if ( _4__this->fields.isRollWait )
          {
            v40 = &_4__this->fields.stopLocalRotationLoopEnd.fields.x;
            v59 = &_4__this->fields.stopLocalRotationLoopEnd.fields.y;
            v60 = &_4__this->fields.stopLocalRotationLoopEnd.fields.z;
            p_w = &_4__this->fields.stopLocalRotationLoopEnd.fields.w;
            if ( !this )
              goto LABEL_55;
          }
          else
          {
            p_w = &v2->fields._stopRotation_5__3.fields.w;
            v60 = &v2->fields._stopRotation_5__3.fields.z;
            v59 = &v2->fields._stopRotation_5__3.fields.y;
            if ( !this )
              goto LABEL_55;
          }
          v56 = *p_w;
          v55 = *v60;
          v58 = *v59;
          v57 = *v40;
          goto LABEL_52;
        }
        this = (UIScriptChara__RollAxis_d__121_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !this )
          goto LABEL_55;
        ScriptManager__moveBackScriptZ((ScriptManager_o *)this, 2048, 0, 0);
        angle = v2->fields.angle;
        duration = v2->fields.duration;
        v2->fields._time_5__5 = 0.0;
        _4__this->fields.isRoll = 1;
        angularVelocity_5__4 = angle / duration;
        v2->fields._angularVelocity_5__4 = angle / duration;
        deltaTime = UnityEngine_Time__get_deltaTime(0);
LABEL_42:
        this = (UIScriptChara__RollAxis_d__121_o *)_4__this->fields.baseRoll1;
        if ( this )
        {
          UnityEngine_Transform__Rotate_83281176(
            (UnityEngine_Transform_o *)this,
            v2->fields._rotationAxis_5__2,
            angularVelocity_5__4 * deltaTime,
            0,
            0);
          v49 = 0.0;
          time_5__5 = v2->fields._time_5__5;
          if ( !_4__this->fields.isRollLoop )
            v49 = UnityEngine_Time__get_deltaTime(0);
          v51 = time_5__5 + v49;
          v52 = v2->fields.duration;
          v2->fields._time_5__5 = v51;
          if ( v51 < v52 )
          {
            v2->fields.__2__current = 0;
            p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
            sub_21FFBF4(p__2__current, 0, v43, v44, v45, v46, v47, v48);
            result = 1;
            p__2__current[-1].fields._BoardType_k__BackingField = 1;
            return result;
          }
          this = (UIScriptChara__RollAxis_d__121_o *)_4__this->fields.baseRoll1;
          if ( this )
          {
            v55 = v2->fields._stopRotation_5__3.fields.z;
            v56 = v2->fields._stopRotation_5__3.fields.w;
            v57 = v2->fields._stopRotation_5__3.fields.x;
            v58 = v2->fields._stopRotation_5__3.fields.y;
LABEL_52:
            UnityEngine_Transform__set_localRotation(
              (UnityEngine_Transform_o *)this,
              *(UnityEngine_Quaternion_o *)&v57,
              0);
            UIScriptChara__EndExecuteRollAxis(_4__this, v62);
            return 0;
          }
        }
        goto LABEL_55;
      }
      if ( !byte_5931949 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931949 = 1;
      }
      v27 = UnityEngine_Vector3_TypeInfo->static_fields;
      p_x = &v27->forwardVector.fields.x;
      p_y = &v27->forwardVector.fields.y;
      p_z = &v27->forwardVector.fields.z;
    }
    v28 = *p_y;
    v29 = *p_z;
    v2->fields._rotationAxis_5__2.fields.x = *p_x;
    v2->fields._rotationAxis_5__2.fields.y = v28;
    v2->fields._rotationAxis_5__2.fields.z = v29;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_UIScriptChara__RollAxis_d__121_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  float v9; // s0
  float v10; // s1
  float v11; // s2
  __int64 v12; // x8
  float v13; // s8
  float v14; // s9
  float v15; // s10
  unsigned __int64 v16; // x25
  __int64 v17; // x22
  UnityEngine_Transform_o *transform; // x23
  float v19; // s0
  float v20; // s1
  struct UnityEngine_Texture_o *maskTex; // x8
  UIScriptChara___c__DisplayClass58_0_o *v22; // x23
  struct UnityEngine_Texture_o *v23; // x8
  int v24; // w24
  int v25; // w8
  float (**p_name)(void); // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_593A79C & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___);
    this = (UIScriptChara___c__DisplayClass58_0_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A79C = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  this = (UIScriptChara___c__DisplayClass58_0_o *)_4__this->fields.baseEffect;
  if ( !this
    || (this = (UIScriptChara___c__DisplayClass58_0_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          1,
                                                          (const MethodInfo_3884508 *)Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___),
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
LABEL_30:
    sub_21FFECC(this, effect);
  }
  v12 = *(_QWORD *)&v6->fields.color.fields.r;
  if ( (int)v12 >= 1 )
  {
    v13 = v9;
    v14 = v10;
    v15 = v11;
    v16 = 0;
    do
    {
      if ( v16 >= (unsigned int)v12 )
        sub_21FFED4(this);
      v17 = *((_QWORD *)&v6->fields.color.fields.b + v16);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effect);
      this = (UIScriptChara___c__DisplayClass58_0_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_30;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0);
        this = (UIScriptChara___c__DisplayClass58_0_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)v17,
                                                          0);
        if ( !this )
          goto LABEL_30;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        if ( !transform )
          goto LABEL_30;
        v19 = v13;
        v20 = v14;
        UnityEngine_Transform__set_localPosition(transform, localPosition, 0);
      }
      else if ( !v17 )
      {
        goto LABEL_30;
      }
      *(struct UnityEngine_Color_o *)(v17 + 96) = v3->fields.color;
      *(struct UnityEngine_Color_o *)(v17 + 112) = v3->fields.particleColor;
      FGOEdgeBlur__set_Texture((FGOEdgeBlur_o *)v17, v3->fields.maskTex, 0);
      this = (UIScriptChara___c__DisplayClass58_0_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)v17,
                                                        0);
      maskTex = v3->fields.maskTex;
      if ( !maskTex )
        goto LABEL_30;
      v22 = this;
      this = (UIScriptChara___c__DisplayClass58_0_o *)((UIScriptChara___c__DisplayClass58_0_o *(__fastcall *)(struct UnityEngine_Texture_o *__return_ptr, struct UnityEngine_Texture_o *, const MethodInfo *))maskTex->klass->vtable._4_get_width.methodPtr)(
                                                        maskTex,
                                                        v3->fields.maskTex,
                                                        maskTex->klass->vtable._4_get_width.method);
      v23 = v3->fields.maskTex;
      if ( !v23 )
        goto LABEL_30;
      v24 = (int)this;
      this = (UIScriptChara___c__DisplayClass58_0_o *)((UIScriptChara___c__DisplayClass58_0_o *(__fastcall *)(struct UnityEngine_Texture_o *__return_ptr, struct UnityEngine_Texture_o *, const MethodInfo *))v23->klass->vtable._6_get_height.methodPtr)(
                                                        v23,
                                                        v3->fields.maskTex,
                                                        v23->klass->vtable._6_get_height.method);
      if ( !v22 )
        goto LABEL_30;
      v28.fields.y = (float)(int)this;
      v28.fields.x = (float)v24;
      v28.fields.z = 0.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v22, v28, 0);
      FGOEdgeBlur__set_Thickness((FGOEdgeBlur_o *)v17, v3->fields.thick, 0);
      FGOEdgeBlur__set_Level((FGOEdgeBlur_o *)v17, v3->fields.level, 0);
      this = (UIScriptChara___c__DisplayClass58_0_o *)v3->fields.maskTex;
      if ( !this )
        goto LABEL_30;
      v25 = ((__int64 (__fastcall *)(UIScriptChara___c__DisplayClass58_0_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
              this,
              *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
      this = (UIScriptChara___c__DisplayClass58_0_o *)v3->fields.__4__this;
      if ( v25 <= 1024 )
      {
        if ( !this )
          goto LABEL_30;
        p_name = (float (**)(void))&this->klass[1]._1.name;
      }
      else
      {
        if ( !this )
          goto LABEL_30;
        p_name = (float (**)(void))&this->klass[1]._1.byval_arg;
      }
      v30.fields.m_XMin = (*p_name)();
      FGOEdgeBlur__set_Rect((FGOEdgeBlur_o *)v17, v30, 0);
      v29.fields.x = v13;
      v29.fields.y = v14;
      v29.fields.z = v15;
      FGOEdgeBlur__setMaskImagePosition((FGOEdgeBlur_o *)v17, v29, 0);
      *(float *)&v12 = v6->fields.color.fields.r;
      ++v16;
    }
    while ( (__int64)v16 < (int)v12 );
  }
}