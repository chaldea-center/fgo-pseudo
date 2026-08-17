void UIButtonOffset___ctor(UIButtonOffset_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d0
  float z; // s1

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.pressed.fields.x = xmmword_E9D2F0;
  *(_QWORD *)&this->fields.hover.fields.x = v4;
  this->fields.hover.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIButtonOffset__OnDisable(UIButtonOffset_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x20
  __int64 v4; // x1
  struct UnityEngine_Transform_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_5974F99 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F99 = 1;
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
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
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
          TweenPosition__set_value((TweenPosition_o *)Component_object, this->fields.mPos, 0);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
          return;
        }
LABEL_14:
        sub_2213CDC(v5, v4);
      }
    }
  }
}


void UIButtonOffset__OnEnable(UIButtonOffset_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w8
  const MethodInfo *v6; // x2

  if ( (byte_5974F98 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F98 = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    UIButtonOffset__OnHover(this, IsHighlighted, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIButtonOffset__OnHover(UIButtonOffset_o *this, bool isOver, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *tweenTarget; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s1 OVERLAPPED
  float32x2_t v9; // d2
  unsigned __int32 v10; // s3

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !this->fields.mStarted )
      UIButtonOffset__Start(this, v5);
    tweenTarget = (UnityEngine_Component_o *)this->fields.tweenTarget;
    if ( !tweenTarget )
      goto LABEL_10;
    gameObject = UnityEngine_Component__get_gameObject(tweenTarget, 0);
    x = this->fields.mPos.fields.x;
    v9.n64_u64[0] = *(unsigned __int64 *)&this->fields.mPos.fields.y;
    if ( isOver )
    {
      x = x + this->fields.hover.fields.x;
      v9.n64_u64[0] = vadd_f32(v9, *(float32x2_t *)&this->fields.hover.fields.y).n64_u64[0];
    }
    v10 = v9.n64_u32[1];
    tweenTarget = (UnityEngine_Component_o *)TweenPosition__Begin(
                                               gameObject,
                                               this->fields.duration,
                                               *(UnityEngine_Vector3_o *)&x,
                                               0);
    if ( !tweenTarget )
LABEL_10:
      sub_2213CDC(tweenTarget, v5);
    LODWORD(tweenTarget[1].monitor) = 3;
  }
}


// local variable allocation has failed, the output may be wrong!
void UIButtonOffset__OnPress(UIButtonOffset_o *this, bool isPressed, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *tweenTarget; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float duration; // s8
  UnityEngine_GameObject_o *v9; // x20
  float x; // s1 OVERLAPPED
  float32x2_t v11; // d2
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x21
  bool IsHighlighted; // w0
  unsigned __int32 v15; // s3

  if ( (byte_5974F9A & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F9A = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !this->fields.mStarted )
      UIButtonOffset__Start(this, v5);
    tweenTarget = (UnityEngine_Component_o *)this->fields.tweenTarget;
    if ( !tweenTarget )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject(tweenTarget, 0);
    duration = this->fields.duration;
    v9 = gameObject;
    if ( isPressed )
    {
      x = this->fields.mPos.fields.x + this->fields.pressed.fields.x;
      v11.n64_u64[0] = vadd_f32(
                         *(float32x2_t *)&this->fields.mPos.fields.y,
                         *(float32x2_t *)&this->fields.pressed.fields.y).n64_u64[0];
    }
    else
    {
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
      IsHighlighted = UICamera__IsHighlighted(v13, 0);
      x = this->fields.mPos.fields.x;
      v11.n64_u64[0] = *(unsigned __int64 *)&this->fields.mPos.fields.y;
      if ( IsHighlighted )
      {
        x = x + this->fields.hover.fields.x;
        v11.n64_u64[0] = vadd_f32(v11, *(float32x2_t *)&this->fields.hover.fields.y).n64_u64[0];
      }
    }
    v15 = v11.n64_u32[1];
    tweenTarget = (UnityEngine_Component_o *)TweenPosition__Begin(v9, duration, *(UnityEngine_Vector3_o *)&x, 0);
    if ( !tweenTarget )
LABEL_16:
      sub_2213CDC(tweenTarget, v5);
    LODWORD(tweenTarget[1].monitor) = 3;
  }
}


void UIButtonOffset__OnSelect(UIButtonOffset_o *this, bool isSelected, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UICamera_c *v7; // x0

  if ( (byte_5974F9B & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F9B = 1;
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
      UIButtonOffset__OnHover(this, isSelected, v6);
  }
}


void UIButtonOffset__Start(UIButtonOffset_o *this, const MethodInfo *method)
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

  if ( (byte_5974F97 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F97 = 1;
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
    this->fields.mPos = UnityEngine_Transform__get_localPosition(*p_tweenTarget, 0);
  }
}