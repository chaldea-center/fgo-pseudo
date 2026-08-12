void UIMessageButtonColor___ctor(UIMessageButtonColor_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.hover = (struct UnityEngine_Color_o)xmmword_E9D930;
  this->fields.pressed = (struct UnityEngine_Color_o)xmmword_E9D210;
  this->fields.normalColor = _Q0;
  this->fields.duration = 0.2;
  UIWidgetContainer___ctor((UIWidgetContainer_o *)this, 0);
}


void UIMessageButtonColor__Awake(UIMessageButtonColor_o *this, const MethodInfo *method)
{
  if ( !this->fields.mStarted )
  {
    this->fields.mStarted = 1;
    UIMessageButtonColor__Init(this, method);
  }
}


void UIMessageButtonColor__ChangeTweenColor(
        UIMessageButtonColor_o *this,
        float duration,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *tweenTarget; // x20
  __int64 v11; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v13; // x19
  int32_t childCount; // w0
  int32_t v15; // w20
  int32_t v16; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v18; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_59721AF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59721AF = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Implicit(tweenTarget, 0) )
  {
    transform = this->fields.tweenTarget;
    if ( !transform )
      goto LABEL_13;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_13;
    v13 = (UnityEngine_Transform_o *)transform;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0);
    if ( childCount >= 1 )
    {
      v15 = childCount;
      v16 = 0;
      while ( 1 )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(v13, v16, 0);
        if ( !transform )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        v18.fields.r = r;
        v18.fields.g = g;
        v18.fields.b = b;
        v18.fields.a = a;
        TweenColor__Begin(gameObject, duration, v18, 0);
        if ( v15 == ++v16 )
          return;
      }
LABEL_13:
      sub_2213CDC(transform, v11);
    }
  }
}


void UIMessageButtonColor__Init(UIMessageButtonColor_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x21
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59721AC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59721AC = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(tweenTarget, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this->fields.tweenTarget = gameObject;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tweenTarget,
      (int32_t)gameObject,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  this->fields.mColor = this->fields.normalColor;
}


void UIMessageButtonColor__OnDisable(UIMessageButtonColor_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v6; // x20
  int32_t childCount; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  __int64 v10; // x1
  Il2CppObject *Component_object; // x23

  if ( (byte_59721AB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59721AB = 1;
  }
  if ( this->fields.mStarted )
  {
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
    {
      transform = this->fields.tweenTarget;
      if ( !transform )
        goto LABEL_20;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_20;
      v6 = (UnityEngine_Transform_o *)transform;
      childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0);
      if ( childCount >= 1 )
      {
        v8 = childCount;
        v9 = 0;
        while ( 1 )
        {
          transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(v6, v9, 0);
          if ( !transform )
            break;
          transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            break;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               transform,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
          transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Component_object,
                                                    0,
                                                    0);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_object )
              break;
            TweenColor__set_value((TweenColor_o *)Component_object, this->fields.mColor, 0);
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
          }
          if ( v8 == ++v9 )
            return;
        }
LABEL_20:
        sub_2213CDC(transform, v4);
      }
    }
  }
}


void UIMessageButtonColor__OnDragOut(UIMessageButtonColor_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !this->fields.mStarted )
    {
      this->fields.mStarted = 1;
      UIMessageButtonColor__Init(this, v3);
    }
    UIMessageButtonColor__ChangeTweenColor(this, this->fields.duration, this->fields.mColor, v3);
  }
}


void UIMessageButtonColor__OnDragOver(UIMessageButtonColor_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !this->fields.mStarted )
    {
      this->fields.mStarted = 1;
      UIMessageButtonColor__Init(this, v3);
    }
    UIMessageButtonColor__ChangeTweenColor(this, this->fields.duration, this->fields.pressed, v3);
  }
}


void UIMessageButtonColor__OnEnable(UIMessageButtonColor_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w0
  UICamera_c *v6; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UICamera_c *v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *pressed; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x21
  VirtualInvokeData *p__6_OnPress; // x8
  const MethodInfo **p_method; // x9
  struct UICamera_MouseOrTouch_o *v15; // x8
  UnityEngine_Object_o *current; // x20
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x21

  if ( (byte_59721AA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_59721AA = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    ((void (__fastcall *)(UIMessageButtonColor_o *, bool, const MethodInfo *))this->klass->vtable._7_OnHover.methodPtr)(
      this,
      IsHighlighted,
      this->klass->vtable._7_OnHover.method);
  }
  v6 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v6 = UICamera_TypeInfo;
  }
  currentTouch = v6->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, method);
      currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !currentTouch )
        goto LABEL_25;
    }
    pressed = (UnityEngine_Object_o *)currentTouch->fields.pressed;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Equality(pressed, v12, 0) )
    {
      p__6_OnPress = &this->klass->vtable._6_OnPress;
      p_method = &this->klass->vtable._6_OnPress.method;
LABEL_23:
      ((void (__fastcall *)(UIMessageButtonColor_o *, __int64, const MethodInfo *))p__6_OnPress->methodPtr)(
        this,
        1,
        *p_method);
      return;
    }
    v8 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v9);
      v8 = UICamera_TypeInfo;
    }
    v15 = v8->static_fields->currentTouch;
    if ( !v15 )
LABEL_25:
      sub_2213CDC(v8, v9);
    current = (UnityEngine_Object_o *)v15->fields.current;
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Equality(current, v18, 0) )
    {
      p__6_OnPress = &this->klass->vtable._7_OnHover;
      p_method = &this->klass->vtable._7_OnHover.method;
      goto LABEL_23;
    }
  }
}


void UIMessageButtonColor__OnHover(UIMessageButtonColor_o *this, bool isOver, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  struct UnityEngine_Color_o *p_hover; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  UnityEngine_Color_o v10; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !this->fields.mStarted )
    {
      this->fields.mStarted = 1;
      UIMessageButtonColor__Init(this, v5);
    }
    if ( isOver )
    {
      p_hover = &this->fields.hover;
      p_g = &this->fields.hover.fields.g;
      p_b = &this->fields.hover.fields.b;
      p_a = &this->fields.hover.fields.a;
    }
    else
    {
      p_hover = &this->fields.mColor;
      p_g = &this->fields.mColor.fields.g;
      p_b = &this->fields.mColor.fields.b;
      p_a = &this->fields.mColor.fields.a;
    }
    v10.fields.r = p_hover->fields.r;
    v10.fields.g = *p_g;
    v10.fields.b = *p_b;
    v10.fields.a = *p_a;
    UIMessageButtonColor__ChangeTweenColor(this, this->fields.duration, v10, v5);
  }
}


void UIMessageButtonColor__OnPress(UIMessageButtonColor_o *this, bool isPressed, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UICamera_c *v6; // x0
  UnityEngine_Object_o *tweenTarget; // x21
  const MethodInfo *v8; // x1
  struct UnityEngine_Color_o *p_pressed; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  UICamera_c *v13; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *current; // x20
  __int64 v16; // x1
  UnityEngine_Object_o *gameObject; // x21
  UICamera_c *v18; // x0
  UnityEngine_Color_o v19; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_59721AD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_59721AD = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    v6 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      v6 = UICamera_TypeInfo;
    }
    if ( v6->static_fields->currentTouch )
    {
      if ( !this->fields.mStarted )
      {
        this->fields.mStarted = 1;
        UIMessageButtonColor__Init(this, v5);
      }
      tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
      {
        if ( isPressed )
        {
          p_pressed = &this->fields.pressed;
          p_g = &this->fields.pressed.fields.g;
          p_b = &this->fields.pressed.fields.b;
          p_a = &this->fields.pressed.fields.a;
        }
        else
        {
          v13 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
            v13 = UICamera_TypeInfo;
          }
          currentTouch = v13->static_fields->currentTouch;
          if ( !currentTouch )
            sub_2213CDC(v13, v8);
          current = (UnityEngine_Object_o *)currentTouch->fields.current;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
          if ( !UnityEngine_Object__op_Equality(current, gameObject, 0) )
            goto LABEL_25;
          v18 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
            v18 = UICamera_TypeInfo;
          }
          if ( v18->static_fields->currentScheme == 2 )
          {
            p_pressed = &this->fields.hover;
            p_g = &this->fields.hover.fields.g;
            p_b = &this->fields.hover.fields.b;
            p_a = &this->fields.hover.fields.a;
          }
          else
          {
LABEL_25:
            p_pressed = &this->fields.mColor;
            p_g = &this->fields.mColor.fields.g;
            p_b = &this->fields.mColor.fields.b;
            p_a = &this->fields.mColor.fields.a;
          }
        }
        v19.fields.r = p_pressed->fields.r;
        v19.fields.b = *p_b;
        v19.fields.g = *p_g;
        v19.fields.a = *p_a;
        UIMessageButtonColor__ChangeTweenColor(this, this->fields.duration, v19, v8);
      }
    }
  }
}


void UIMessageButtonColor__OnSelect(UIMessageButtonColor_o *this, bool isSelected, const MethodInfo *method)
{
  __int64 v5; // x1
  UICamera_c *v6; // x0
  UnityEngine_Object_o *tweenTarget; // x21

  if ( (byte_59721AE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_59721AE = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !isSelected )
      goto LABEL_8;
    v6 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      v6 = UICamera_TypeInfo;
    }
    if ( v6->static_fields->currentScheme == 2 )
    {
LABEL_8:
      tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
        ((void (__fastcall *)(UIMessageButtonColor_o *, bool, const MethodInfo *))this->klass->vtable._7_OnHover.methodPtr)(
          this,
          isSelected,
          this->klass->vtable._7_OnHover.method);
    }
  }
}


UnityEngine_Color_o UIMessageButtonColor__get_defaultColor(UIMessageButtonColor_o *this, const MethodInfo *method)
{
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !this->fields.mStarted )
  {
    this->fields.mStarted = 1;
    UIMessageButtonColor__Init(this, method);
  }
  result.fields.r = this->fields.mColor.fields.r;
  result.fields.g = this->fields.mColor.fields.g;
  result.fields.b = this->fields.mColor.fields.b;
  result.fields.a = this->fields.mColor.fields.a;
  return result;
}


void UIMessageButtonColor__set_defaultColor(
        UIMessageButtonColor_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( !this->fields.mStarted )
  {
    this->fields.mStarted = 1;
    UIMessageButtonColor__Init(this, method);
  }
  this->fields.mColor.fields.r = r;
  this->fields.mColor.fields.g = g;
  this->fields.mColor.fields.b = b;
  this->fields.mColor.fields.a = a;
}