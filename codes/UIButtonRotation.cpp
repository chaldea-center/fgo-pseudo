void UIButtonRotation___ctor(UIButtonRotation_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x8
  float v7; // s1

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.hover.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.hover.fields.z = z;
  v6 = v3->static_fields;
  v7 = v6->zeroVector.fields.z;
  *(_QWORD *)&this->fields.pressed.fields.x = *(_QWORD *)&v6->zeroVector.fields.x;
  this->fields.pressed.fields.z = v7;
  this->fields.duration = 0.2;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIButtonRotation__OnDisable(UIButtonRotation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x20
  struct UnityEngine_Transform_o *v4; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4C47562 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47562 = 1;
  }
  if ( this->fields.mStarted )
  {
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
    {
      v4 = this->fields.tweenTarget;
      if ( !v4 )
        goto LABEL_14;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)v4,
                           (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v4 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        if ( Component_object )
        {
          TweenRotation__set_value((TweenRotation_o *)Component_object, this->fields.mRot, 0);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
          return;
        }
LABEL_14:
        sub_1C372B4(v4);
      }
    }
  }
}


void UIButtonRotation__OnEnable(UIButtonRotation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w1
  const MethodInfo *v5; // x2

  if ( (byte_4C47561 & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C47561 = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    UIButtonRotation__OnHover(this, IsHighlighted, v5);
  }
}


void UIButtonRotation__OnHover(UIButtonRotation_o *this, bool isOver, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *tweenTarget; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float duration; // s8
  float x; // s12
  float z; // s9
  float y; // s11
  float w; // s10
  UnityEngine_GameObject_o *v13; // x19
  float v14; // s6
  float v15; // s7
  float v16; // s4
  float v17; // s5
  float v18; // s16
  float v19; // s19
  float v20; // s5
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v23; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

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
    y = this->fields.mRot.fields.y;
    z = this->fields.mRot.fields.z;
    w = this->fields.mRot.fields.w;
    v13 = gameObject;
    if ( isOver )
    {
      v21.fields.x = this->fields.hover.fields.x * 0.017453;
      v21.fields.y = this->fields.hover.fields.y * 0.017453;
      v21.fields.z = this->fields.hover.fields.z * 0.017453;
      v22 = UnityEngine_Quaternion__Internal_FromEulerRad(v21, 0);
      v14 = y * v22.fields.z;
      v15 = z * v22.fields.y;
      v16 = (float)(w * v22.fields.x) + (float)(x * v22.fields.w);
      v17 = (float)(w * v22.fields.y) + (float)(y * v22.fields.w);
      v18 = (float)(w * v22.fields.w) - (float)(x * v22.fields.x);
      v22.fields.w = (float)(x * v22.fields.y) + (float)((float)(w * v22.fields.z) + (float)(z * v22.fields.w));
      v19 = x * v22.fields.z;
      v22.fields.z = z * v22.fields.z;
      v20 = (float)(z * v22.fields.x) + v17;
      z = v22.fields.w - (float)(y * v22.fields.x);
      v22.fields.x = v18 - (float)(y * v22.fields.y);
      x = (float)(v14 + v16) - v15;
      y = v20 - v19;
      w = v22.fields.x - v22.fields.z;
    }
    v23.fields.x = x;
    v23.fields.y = y;
    v23.fields.z = z;
    v23.fields.w = w;
    tweenTarget = (UnityEngine_Component_o *)TweenRotation__Begin(v13, duration, v23, 0);
    if ( !tweenTarget )
LABEL_10:
      sub_1C372B4(tweenTarget);
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
  float v14; // s23
  float v15; // s6
  float v16; // s4
  float v17; // s5
  float v18; // s16
  float v19; // s19
  float v20; // s12
  float v21; // s11
  float v22; // s9
  float v23; // s10
  UnityEngine_GameObject_o *v24; // x21
  bool IsHighlighted; // w0
  float v26; // s6
  float v27; // s7
  float v28; // s4
  float v29; // s5
  float v30; // s16
  float v31; // s19
  float v32; // s5
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v37; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4C47563 & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C47563 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !this->fields.mStarted )
      UIButtonRotation__Start(this, v5);
    tweenTarget = (UnityEngine_Component_o *)this->fields.tweenTarget;
    if ( !tweenTarget )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject(tweenTarget, 0);
    duration = this->fields.duration;
    v9 = gameObject;
    if ( isPressed )
    {
      x = this->fields.mRot.fields.x;
      y = this->fields.mRot.fields.y;
      z = this->fields.mRot.fields.z;
      w = this->fields.mRot.fields.w;
      v33.fields.x = this->fields.pressed.fields.x * 0.017453;
      v33.fields.y = this->fields.pressed.fields.y * 0.017453;
      v33.fields.z = this->fields.pressed.fields.z * 0.017453;
      v35 = UnityEngine_Quaternion__Internal_FromEulerRad(v33, 0);
      v14 = w * v35.fields.w;
      v15 = y * v35.fields.z;
      v16 = (float)(w * v35.fields.x) + (float)(x * v35.fields.w);
      v17 = (float)(w * v35.fields.y) + (float)(y * v35.fields.w);
      v35.fields.w = (float)(w * v35.fields.z) + (float)(z * v35.fields.w);
      v18 = v14 - (float)(x * v35.fields.x);
      v19 = x * v35.fields.z;
      v35.fields.z = z * v35.fields.z;
      v20 = (float)(v15 + v16) - (float)(z * v35.fields.y);
      v21 = (float)((float)(z * v35.fields.x) + v17) - v19;
      v22 = (float)((float)(x * v35.fields.y) + v35.fields.w) - (float)(y * v35.fields.x);
      v23 = (float)(v18 - (float)(y * v35.fields.y)) - v35.fields.z;
    }
    else
    {
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      IsHighlighted = UICamera__IsHighlighted(v24, 0);
      v20 = this->fields.mRot.fields.x;
      v21 = this->fields.mRot.fields.y;
      v22 = this->fields.mRot.fields.z;
      v23 = this->fields.mRot.fields.w;
      if ( IsHighlighted )
      {
        v34.fields.x = this->fields.hover.fields.x * 0.017453;
        v34.fields.y = this->fields.hover.fields.y * 0.017453;
        v34.fields.z = this->fields.hover.fields.z * 0.017453;
        v36 = UnityEngine_Quaternion__Internal_FromEulerRad(v34, 0);
        v26 = v21 * v36.fields.z;
        v27 = v22 * v36.fields.y;
        v28 = (float)(v23 * v36.fields.x) + (float)(v20 * v36.fields.w);
        v29 = (float)(v23 * v36.fields.y) + (float)(v21 * v36.fields.w);
        v30 = (float)(v23 * v36.fields.w) - (float)(v20 * v36.fields.x);
        v36.fields.w = (float)(v20 * v36.fields.y) + (float)((float)(v23 * v36.fields.z) + (float)(v22 * v36.fields.w));
        v31 = v20 * v36.fields.z;
        v36.fields.z = v22 * v36.fields.z;
        v32 = (float)(v22 * v36.fields.x) + v29;
        v22 = v36.fields.w - (float)(v21 * v36.fields.x);
        v36.fields.x = v30 - (float)(v21 * v36.fields.y);
        v20 = (float)(v26 + v28) - v27;
        v21 = v32 - v31;
        v23 = v36.fields.x - v36.fields.z;
      }
    }
    v37.fields.x = v20;
    v37.fields.y = v21;
    v37.fields.z = v22;
    v37.fields.w = v23;
    tweenTarget = (UnityEngine_Component_o *)TweenRotation__Begin(v9, duration, v37, 0);
    if ( !tweenTarget )
LABEL_16:
      sub_1C372B4(tweenTarget);
    LODWORD(tweenTarget[1].monitor) = 3;
  }
}


void UIButtonRotation__OnSelect(UIButtonRotation_o *this, bool isSelected, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  UICamera_c *v6; // x0

  if ( (byte_4C47564 & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C47564 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !isSelected )
      goto LABEL_8;
    v6 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v6 = UICamera_TypeInfo;
    }
    if ( v6->static_fields->currentScheme == 2 )
LABEL_8:
      UIButtonRotation__OnHover(this, isSelected, v5);
  }
}


void UIButtonRotation__Start(UIButtonRotation_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o **p_tweenTarget; // x20
  UnityEngine_Object_o *tweenTarget; // x21
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C47560 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47560 = 1;
  }
  if ( !this->fields.mStarted )
  {
    p_tweenTarget = &this->fields.tweenTarget;
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    this->fields.mStarted = 1;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(tweenTarget, 0, 0) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      this->fields.tweenTarget = transform;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.tweenTarget, (int32_t)transform, v6, v7);
    }
    if ( !*p_tweenTarget )
      sub_1C372B4(0);
    this->fields.mRot = UnityEngine_Transform__get_localRotation(*p_tweenTarget, 0);
  }
}