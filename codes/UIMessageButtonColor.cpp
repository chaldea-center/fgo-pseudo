void UIMessageButtonColor___ctor(UIMessageButtonColor_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.normalColor = _Q0;
  this->fields.hover = (struct UnityEngine_Color_o)xmmword_D00D20;
  this->fields.pressed = (struct UnityEngine_Color_o)xmmword_D011D0;
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
  if ( (byte_4D3229B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3229B = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C93D2C(transform, v11);
    }
  }
}


void UIMessageButtonColor__Init(UIMessageButtonColor_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x21
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D32298 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32298 = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(tweenTarget, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this->fields.tweenTarget = gameObject;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.tweenTarget, (int32_t)gameObject, v5, v6, v7, v8, v9, v10);
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
  Il2CppObject *Component_object; // x23

  if ( (byte_4D32297 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32297 = 1;
  }
  if ( this->fields.mStarted )
  {
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        sub_1C93D2C(transform, v4);
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
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w0
  UICamera_c *v5; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UICamera_c *v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *pressed; // x20
  UnityEngine_Object_o *v10; // x21
  const MethodInfo *v11; // x2
  Il2CppMethodPointer methodPtr; // x3
  struct UICamera_MouseOrTouch_o *v13; // x8
  UnityEngine_Object_o *current; // x20
  UnityEngine_Object_o *v15; // x21

  if ( (byte_4D32296 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D32296 = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    ((void (__fastcall *)(UIMessageButtonColor_o *, bool, const MethodInfo *))this->klass->vtable._7_OnHover.methodPtr)(
      this,
      IsHighlighted,
      this->klass->vtable._7_OnHover.method);
  }
  v5 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  currentTouch = v5->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !currentTouch )
        goto LABEL_25;
    }
    pressed = (UnityEngine_Object_o *)currentTouch->fields.pressed;
    v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(pressed, v10, 0) )
    {
      methodPtr = this->klass->vtable._6_OnPress.methodPtr;
      v11 = this->klass->vtable._6_OnPress.method;
LABEL_23:
      ((void (__fastcall *)(UIMessageButtonColor_o *, __int64, const MethodInfo *))methodPtr)(this, 1, v11);
      return;
    }
    v7 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v7 = UICamera_TypeInfo;
    }
    v13 = v7->static_fields->currentTouch;
    if ( !v13 )
LABEL_25:
      sub_1C93D2C(v7, v8);
    current = (UnityEngine_Object_o *)v13->fields.current;
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(current, v15, 0) )
    {
      methodPtr = this->klass->vtable._7_OnHover.methodPtr;
      v11 = this->klass->vtable._7_OnHover.method;
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
    v10.fields.a = *p_a;
    v10.fields.b = *p_b;
    v10.fields.g = *p_g;
    v10.fields.r = p_hover->fields.r;
    UIMessageButtonColor__ChangeTweenColor(this, this->fields.duration, v10, v5);
  }
}


void UIMessageButtonColor__OnPress(UIMessageButtonColor_o *this, bool isPressed, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UICamera_c *v6; // x0
  UnityEngine_Object_o *tweenTarget; // x21
  const MethodInfo *v8; // x1
  float duration; // s0
  UICamera_c *v13; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *current; // x20
  UnityEngine_Object_o *gameObject; // x21
  UICamera_c *v17; // x0
  UnityEngine_Color_o pressed; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4D32299 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D32299 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    v6 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
      {
        if ( isPressed )
        {
          pressed = this->fields.pressed;
          duration = this->fields.duration;
        }
        else
        {
          v13 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v13 = UICamera_TypeInfo;
          }
          currentTouch = v13->static_fields->currentTouch;
          if ( !currentTouch )
            sub_1C93D2C(v13, v8);
          current = (UnityEngine_Object_o *)currentTouch->fields.current;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(current, gameObject, 0) )
            goto LABEL_25;
          v17 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v17 = UICamera_TypeInfo;
          }
          if ( v17->static_fields->currentScheme == 2 )
          {
            duration = this->fields.duration;
            pressed = this->fields.hover;
          }
          else
          {
LABEL_25:
            duration = this->fields.duration;
            pressed = this->fields.mColor;
          }
        }
        UIMessageButtonColor__ChangeTweenColor(this, duration, pressed, v8);
      }
    }
  }
}


void UIMessageButtonColor__OnSelect(UIMessageButtonColor_o *this, bool isSelected, const MethodInfo *method)
{
  UICamera_c *v5; // x0
  UnityEngine_Object_o *tweenTarget; // x21

  if ( (byte_4D3229A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D3229A = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !isSelected )
      goto LABEL_8;
    v5 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v5 = UICamera_TypeInfo;
    }
    if ( v5->static_fields->currentScheme == 2 )
    {
LABEL_8:
      tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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