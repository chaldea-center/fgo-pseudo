void UIButtonRotation___ctor(UIButtonRotation_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x8
  float v7; // s1

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
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
  __int64 v4; // x1
  struct UnityEngine_Transform_o *v5; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4D35063 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35063 = 1;
  }
  if ( this->fields.mStarted )
  {
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
    {
      v5 = this->fields.tweenTarget;
      if ( !v5 )
        goto LABEL_14;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)v5,
                           (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        sub_1C93D2C(v5, v4);
      }
    }
  }
}


void UIButtonRotation__OnEnable(UIButtonRotation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w1
  const MethodInfo *v5; // x2

  if ( (byte_4D35062 & 1) == 0 )
  {
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D35062 = 1;
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
  float v14; // s7
  float v15; // s19
  float v16; // s2
  float v17; // s5
  float v18; // s0
  UnityEngine_Quaternion_o v19; // 0:kr00_16.16
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v21; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

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
      v20.fields.x = this->fields.hover.fields.x * 0.017453;
      v20.fields.y = this->fields.hover.fields.y * 0.017453;
      v20.fields.z = this->fields.hover.fields.z * 0.017453;
      v19 = UnityEngine_Quaternion__Internal_FromEulerRad(v20, 0);
      v14 = z * v19.fields.y;
      v15 = x * v19.fields.z;
      v16 = z * v19.fields.z;
      v17 = (float)(z * v19.fields.x) + (float)((float)(w * v19.fields.y) + (float)(y * v19.fields.w));
      z = (float)((float)(x * v19.fields.y) + (float)((float)(w * v19.fields.z) + (float)(z * v19.fields.w)))
        - (float)(y * v19.fields.x);
      v18 = (float)((float)(w * v19.fields.w) - (float)(x * v19.fields.x)) - (float)(y * v19.fields.y);
      x = (float)((float)(y * v19.fields.z) + (float)((float)(w * v19.fields.x) + (float)(x * v19.fields.w))) - v14;
      y = v17 - v15;
      w = v18 - v16;
    }
    v21.fields.x = x;
    v21.fields.y = y;
    v21.fields.z = z;
    v21.fields.w = w;
    tweenTarget = (UnityEngine_Component_o *)TweenRotation__Begin(v13, duration, v21, 0);
    if ( !tweenTarget )
LABEL_10:
      sub_1C93D2C(tweenTarget, v5);
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
  float v14; // s5
  float v15; // s3
  float v16; // s16
  float v17; // s2
  float v18; // s12
  float v19; // s11
  float v20; // s9
  float v21; // s10
  UnityEngine_GameObject_o *v22; // x21
  bool IsHighlighted; // w0
  float v24; // s7
  float v25; // s19
  float v26; // s2
  float v27; // s5
  float v28; // s0
  UnityEngine_Quaternion_o v29; // 0:kr00_16.16
  UnityEngine_Quaternion_o v30; // 0:kr10_16.16
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v33; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4D35064 & 1) == 0 )
  {
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D35064 = 1;
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
      v31.fields.x = this->fields.pressed.fields.x * 0.017453;
      v31.fields.y = this->fields.pressed.fields.y * 0.017453;
      v31.fields.z = this->fields.pressed.fields.z * 0.017453;
      v29 = UnityEngine_Quaternion__Internal_FromEulerRad(v31, 0);
      v14 = (float)(w * v29.fields.y) + (float)(y * v29.fields.w);
      v15 = (float)(w * v29.fields.z) + (float)(z * v29.fields.w);
      v16 = (float)(w * v29.fields.w) - (float)(x * v29.fields.x);
      v17 = z * v29.fields.z;
      v18 = (float)((float)(y * v29.fields.z) + (float)((float)(w * v29.fields.x) + (float)(x * v29.fields.w)))
          - (float)(z * v29.fields.y);
      v19 = (float)((float)(z * v29.fields.x) + v14) - (float)(x * v29.fields.z);
      v20 = (float)((float)(x * v29.fields.y) + v15) - (float)(y * v29.fields.x);
      v21 = (float)(v16 - (float)(y * v29.fields.y)) - v17;
    }
    else
    {
      v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      IsHighlighted = UICamera__IsHighlighted(v22, 0);
      v18 = this->fields.mRot.fields.x;
      v19 = this->fields.mRot.fields.y;
      v20 = this->fields.mRot.fields.z;
      v21 = this->fields.mRot.fields.w;
      if ( IsHighlighted )
      {
        v32.fields.x = this->fields.hover.fields.x * 0.017453;
        v32.fields.y = this->fields.hover.fields.y * 0.017453;
        v32.fields.z = this->fields.hover.fields.z * 0.017453;
        v30 = UnityEngine_Quaternion__Internal_FromEulerRad(v32, 0);
        v24 = v20 * v30.fields.y;
        v25 = v18 * v30.fields.z;
        v26 = v20 * v30.fields.z;
        v27 = (float)(v20 * v30.fields.x) + (float)((float)(v21 * v30.fields.y) + (float)(v19 * v30.fields.w));
        v20 = (float)((float)(v18 * v30.fields.y) + (float)((float)(v21 * v30.fields.z) + (float)(v20 * v30.fields.w)))
            - (float)(v19 * v30.fields.x);
        v28 = (float)((float)(v21 * v30.fields.w) - (float)(v18 * v30.fields.x)) - (float)(v19 * v30.fields.y);
        v18 = (float)((float)(v19 * v30.fields.z) + (float)((float)(v21 * v30.fields.x) + (float)(v18 * v30.fields.w)))
            - v24;
        v19 = v27 - v25;
        v21 = v28 - v26;
      }
    }
    v33.fields.x = v18;
    v33.fields.y = v19;
    v33.fields.z = v20;
    v33.fields.w = v21;
    tweenTarget = (UnityEngine_Component_o *)TweenRotation__Begin(v9, duration, v33, 0);
    if ( !tweenTarget )
LABEL_16:
      sub_1C93D2C(tweenTarget, v5);
    LODWORD(tweenTarget[1].monitor) = 3;
  }
}


void UIButtonRotation__OnSelect(UIButtonRotation_o *this, bool isSelected, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  UICamera_c *v6; // x0

  if ( (byte_4D35065 & 1) == 0 )
  {
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D35065 = 1;
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
  __int64 v5; // x1
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D35061 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35061 = 1;
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
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.tweenTarget,
        (int32_t)transform,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
    }
    if ( !*p_tweenTarget )
      sub_1C93D2C(0, v5);
    this->fields.mRot = UnityEngine_Transform__get_localRotation(*p_tweenTarget, 0);
  }
}