void UIButtonRotation___ctor(UIButtonRotation_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x8
  __int64 v7; // d0
  float v8; // s1

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.hover.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.hover.fields.z = z;
  v6 = v3->static_fields;
  v7 = *(_QWORD *)&v6->zeroVector.fields.x;
  v8 = v6->zeroVector.fields.z;
  this->fields.duration = 0.2;
  *(_QWORD *)&this->fields.pressed.fields.x = v7;
  this->fields.pressed.fields.z = v8;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIButtonRotation__OnDisable(UIButtonRotation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x20
  __int64 v4; // x1
  struct UnityEngine_Transform_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_5974F9E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F9E = 1;
  }
  if ( this->fields.mStarted )
  {
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
    {
      v5 = this->fields.tweenTarget;
      if ( !v5 )
        goto LABEL_14;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)v5,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      v5 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( Component_object )
        {
          TweenRotation__set_value((TweenRotation_o *)Component_object, this->fields.mRot, 0);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
          return;
        }
LABEL_14:
        sub_2213CDC(v5, v4);
      }
    }
  }
}


void UIButtonRotation__OnEnable(UIButtonRotation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w8
  const MethodInfo *v6; // x2

  if ( (byte_5974F9D & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F9D = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    UIButtonRotation__OnHover(this, IsHighlighted, v6);
  }
}


void UIButtonRotation__OnHover(UIButtonRotation_o *this, bool isOver, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *tweenTarget; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float duration; // s8
  float x; // s11
  UnityEngine_GameObject_o *v10; // x19
  float z; // s9
  float y; // s10
  float w; // s12
  float v14; // s0
  float v15; // s3
  float v16; // s18
  float v17; // s6
  float v18; // s2
  float v19; // s7
  UnityEngine_Vector3_o v20; // 0:kr10_12.12
  UnityEngine_Quaternion_o v21; // 0:kr00_16.16
  UnityEngine_Quaternion_o v22; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !this->fields.mStarted )
      UIButtonRotation__Start(this, v5);
    tweenTarget = (UnityEngine_Component_o *)this->fields.tweenTarget;
    if ( !tweenTarget )
      goto LABEL_10;
    gameObject = UnityEngine_Component__get_gameObject(tweenTarget, 0);
    duration = this->fields.duration;
    x = this->fields.mRot.fields.x;
    v10 = gameObject;
    y = this->fields.mRot.fields.y;
    z = this->fields.mRot.fields.z;
    w = this->fields.mRot.fields.w;
    if ( isOver )
    {
      *(float32x2_t *)&v20.fields.x = vmul_f32(*(float32x2_t *)&this->fields.hover.fields.x, vdup_n_s32(0x3C8EFA35u));
      v20.fields.z = this->fields.hover.fields.z * 0.017453;
      v21 = UnityEngine_Quaternion__Internal_FromEulerRad(v20, 0);
      v14 = y * v21.fields.x;
      v15 = (float)(w * v21.fields.w) - (float)(x * v21.fields.x);
      v16 = y * v21.fields.y;
      v17 = x * v21.fields.z;
      v18 = z * v21.fields.z;
      v19 = (float)(x * v21.fields.y) + (float)((float)(w * v21.fields.z) + (float)(z * v21.fields.w));
      x = (float)((float)(y * v21.fields.z) + (float)((float)(w * v21.fields.x) + (float)(x * v21.fields.w)))
        - (float)(z * v21.fields.y);
      y = (float)((float)(z * v21.fields.x) + (float)((float)(w * v21.fields.y) + (float)(y * v21.fields.w))) - v17;
      z = v19 - v14;
      w = (float)(v15 - v16) - v18;
    }
    v22.fields.x = x;
    v22.fields.y = y;
    v22.fields.z = z;
    v22.fields.w = w;
    tweenTarget = (UnityEngine_Component_o *)TweenRotation__Begin(v10, duration, v22, 0);
    if ( !tweenTarget )
LABEL_10:
      sub_2213CDC(tweenTarget, v5);
    LODWORD(tweenTarget[1].monitor) = 3;
  }
}


void UIButtonRotation__OnPress(UIButtonRotation_o *this, bool isPressed, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *tweenTarget; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float duration; // s8
  UnityEngine_GameObject_o *v9; // x19
  float x; // s9
  float y; // s10
  float z; // s11
  float w; // s12
  float v14; // s0
  float v15; // s16
  float v16; // s2
  float v17; // s5
  float v18; // s3
  float v19; // s11
  float v20; // s10
  float v21; // s9
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x21
  bool IsHighlighted; // w0
  float v25; // s12
  float v26; // s0
  float v27; // s6
  float v28; // s7
  UnityEngine_Vector3_o v29; // 0:kr20_12.12
  UnityEngine_Vector3_o v30; // 0:kr34_12.12
  UnityEngine_Quaternion_o v31; // 0:kr00_16.16
  UnityEngine_Quaternion_o v32; // 0:kr10_16.16
  UnityEngine_Quaternion_o v33; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_5974F9F & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F9F = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !this->fields.mStarted )
      UIButtonRotation__Start(this, v5);
    tweenTarget = (UnityEngine_Component_o *)this->fields.tweenTarget;
    if ( !tweenTarget )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject(tweenTarget, 0);
    duration = this->fields.duration;
    v9 = gameObject;
    if ( isPressed )
    {
      x = this->fields.mRot.fields.x;
      y = this->fields.mRot.fields.y;
      z = this->fields.mRot.fields.z;
      w = this->fields.mRot.fields.w;
      *(float32x2_t *)&v29.fields.x = vmul_f32(*(float32x2_t *)&this->fields.pressed.fields.x, vdup_n_s32(0x3C8EFA35u));
      v29.fields.z = this->fields.pressed.fields.z * 0.017453;
      v31 = UnityEngine_Quaternion__Internal_FromEulerRad(v29, 0);
      v14 = y * v31.fields.x;
      v15 = (float)(w * v31.fields.z) + (float)(z * v31.fields.w);
      v16 = z * v31.fields.z;
      v17 = (float)(z * v31.fields.x) + (float)((float)(w * v31.fields.y) + (float)(y * v31.fields.w));
      v18 = (float)((float)(w * v31.fields.w) - (float)(x * v31.fields.x)) - (float)(y * v31.fields.y);
      v19 = (float)((float)(y * v31.fields.z) + (float)((float)(w * v31.fields.x) + (float)(x * v31.fields.w)))
          - (float)(z * v31.fields.y);
      v20 = v17 - (float)(x * v31.fields.z);
      v21 = (float)((float)(x * v31.fields.y) + v15) - v14;
    }
    else
    {
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v22);
      IsHighlighted = UICamera__IsHighlighted(v23, 0);
      v19 = this->fields.mRot.fields.x;
      v20 = this->fields.mRot.fields.y;
      v21 = this->fields.mRot.fields.z;
      v25 = this->fields.mRot.fields.w;
      if ( !IsHighlighted )
      {
LABEL_14:
        v33.fields.x = v19;
        v33.fields.y = v20;
        v33.fields.z = v21;
        v33.fields.w = v25;
        tweenTarget = (UnityEngine_Component_o *)TweenRotation__Begin(v9, duration, v33, 0);
        if ( tweenTarget )
        {
          LODWORD(tweenTarget[1].monitor) = 3;
          return;
        }
LABEL_17:
        sub_2213CDC(tweenTarget, v5);
      }
      *(float32x2_t *)&v30.fields.x = vmul_f32(*(float32x2_t *)&this->fields.hover.fields.x, vdup_n_s32(0x3C8EFA35u));
      v30.fields.z = this->fields.hover.fields.z * 0.017453;
      v32 = UnityEngine_Quaternion__Internal_FromEulerRad(v30, 0);
      v26 = v20 * v32.fields.x;
      v27 = v19 * v32.fields.z;
      v16 = v21 * v32.fields.z;
      v28 = (float)(v19 * v32.fields.y) + (float)((float)(v25 * v32.fields.z) + (float)(v21 * v32.fields.w));
      v18 = (float)((float)(v25 * v32.fields.w) - (float)(v19 * v32.fields.x)) - (float)(v20 * v32.fields.y);
      v19 = (float)((float)(v20 * v32.fields.z) + (float)((float)(v25 * v32.fields.x) + (float)(v19 * v32.fields.w)))
          - (float)(v21 * v32.fields.y);
      v20 = (float)((float)(v21 * v32.fields.x) + (float)((float)(v25 * v32.fields.y) + (float)(v20 * v32.fields.w)))
          - v27;
      v21 = v28 - v26;
    }
    v25 = v18 - v16;
    goto LABEL_14;
  }
}


void UIButtonRotation__OnSelect(UIButtonRotation_o *this, bool isSelected, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UICamera_c *v7; // x0

  if ( (byte_5974FA0 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974FA0 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !isSelected )
      goto LABEL_8;
    v7 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      v7 = UICamera_TypeInfo;
    }
    if ( v7->static_fields->currentScheme == 2 )
LABEL_8:
      UIButtonRotation__OnHover(this, isSelected, v6);
  }
}


void UIButtonRotation__Start(UIButtonRotation_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o **p_tweenTarget; // x20
  UnityEngine_Object_o *tweenTarget; // x21
  __int64 v5; // x1
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5974F9C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F9C = 1;
  }
  if ( !this->fields.mStarted )
  {
    p_tweenTarget = &this->fields.tweenTarget;
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    this->fields.mStarted = 1;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(tweenTarget, 0, 0) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      this->fields.tweenTarget = transform;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.tweenTarget,
        (int32_t)transform,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
    }
    if ( !*p_tweenTarget )
      sub_2213CDC(0, v5);
    this->fields.mRot = UnityEngine_Transform__get_localRotation(*p_tweenTarget, 0);
  }
}