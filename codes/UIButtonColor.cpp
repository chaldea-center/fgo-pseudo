void UIButtonColor___ctor(UIButtonColor_o *this, const MethodInfo *method)
{
  this->fields.hover = (struct UnityEngine_Color_o)xmmword_C0CD10;
  this->fields.pressed = (struct UnityEngine_Color_o)xmmword_C0D1A0;
  this->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_C0C4A0;
  this->fields.duration = 0.2;
  UIWidgetContainer___ctor((UIWidgetContainer_o *)this, 0);
}


void UIButtonColor__OnDisable(UIButtonColor_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x20
  UnityEngine_GameObject_o *v4; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4C3BFD4 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFD4 = 1;
  }
  if ( this->fields.mInitDone )
  {
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
    {
      ((void (__fastcall *)(UIButtonColor_o *, _QWORD, __int64, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
        this,
        0,
        1,
        this->klass->vtable._14_SetState.method);
      v4 = this->fields.tweenTarget;
      if ( !v4 )
        goto LABEL_14;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v4,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v4 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        if ( Component_object )
        {
          TweenColor__set_value((TweenColor_o *)Component_object, this->fields.mDefaultColor, 0);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
          return;
        }
LABEL_14:
        sub_1C32E7C(v4);
      }
    }
  }
}


void UIButtonColor__OnDragOut(UIButtonColor_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x20

  if ( (byte_4C3BFD8 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFD8 = 1;
  }
  if ( (((__int64 (__fastcall *)(UIButtonColor_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    if ( !this->fields.mInitDone )
      ((void (__fastcall *)(UIButtonColor_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
        this,
        this->klass->vtable._6_OnInit.method);
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
      ((void (__fastcall *)(UIButtonColor_o *, _QWORD, _QWORD, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
        this,
        0,
        0,
        this->klass->vtable._14_SetState.method);
  }
}


void UIButtonColor__OnDragOver(UIButtonColor_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x20

  if ( (byte_4C3BFD7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFD7 = 1;
  }
  if ( (((__int64 (__fastcall *)(UIButtonColor_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    if ( !this->fields.mInitDone )
      ((void (__fastcall *)(UIButtonColor_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
        this,
        this->klass->vtable._6_OnInit.method);
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
      ((void (__fastcall *)(UIButtonColor_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
        this,
        2,
        0,
        this->klass->vtable._14_SetState.method);
  }
}


void UIButtonColor__OnEnable(UIButtonColor_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w0
  UICamera_c *v5; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UICamera_c *v7; // x0
  UnityEngine_Object_o *pressed; // x20
  UnityEngine_Object_o *v9; // x21
  const MethodInfo *v10; // x2
  Il2CppMethodPointer methodPtr; // x3
  struct UICamera_MouseOrTouch_o *v12; // x8
  UnityEngine_Object_o *current; // x20
  UnityEngine_Object_o *v14; // x21

  if ( (byte_4C3BFD3 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C3BFD3 = 1;
  }
  if ( this->fields.mInitDone )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    ((void (__fastcall *)(UIButtonColor_o *, bool, const MethodInfo *))this->klass->vtable._9_OnHover.methodPtr)(
      this,
      IsHighlighted,
      this->klass->vtable._9_OnHover.method);
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
    v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(pressed, v9, 0) )
    {
      methodPtr = this->klass->vtable._10_OnPress.methodPtr;
      v10 = this->klass->vtable._10_OnPress.method;
LABEL_23:
      ((void (__fastcall *)(UIButtonColor_o *, __int64, const MethodInfo *))methodPtr)(this, 1, v10);
      return;
    }
    v7 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v7 = UICamera_TypeInfo;
    }
    v12 = v7->static_fields->currentTouch;
    if ( !v12 )
LABEL_25:
      sub_1C32E7C(v7);
    current = (UnityEngine_Object_o *)v12->fields.current;
    v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(current, v14, 0) )
    {
      methodPtr = this->klass->vtable._9_OnHover.methodPtr;
      v10 = this->klass->vtable._9_OnHover.method;
      goto LABEL_23;
    }
  }
}


void UIButtonColor__OnHover(UIButtonColor_o *this, bool isOver, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x21

  if ( (byte_4C3BFD5 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFD5 = 1;
  }
  if ( (((__int64 (__fastcall *)(UIButtonColor_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method,
          method)
      & 1) != 0 )
  {
    if ( !this->fields.mInitDone )
      ((void (__fastcall *)(UIButtonColor_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
        this,
        this->klass->vtable._6_OnInit.method);
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
      ((void (__fastcall *)(UIButtonColor_o *, bool, _QWORD, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
        this,
        isOver,
        0,
        this->klass->vtable._14_SetState.method);
  }
}


void UIButtonColor__OnInit(UIButtonColor_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_tweenTarget; // x20
  UnityEngine_Object_o *tweenTarget; // x21
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *v8; // x21
  UnityEngine_GameObject_o *isPlaying; // x0
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *mWidget; // x21
  struct UIWidget_o *v14; // x8
  UnityEngine_Object_o *v15; // x21
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3BFD2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Light___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFD2 = 1;
  }
  p_tweenTarget = &this->fields.tweenTarget;
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  this->fields.mInitDone = 1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(tweenTarget, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this->fields.tweenTarget = gameObject;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tweenTarget, (int32_t)gameObject, v6, v7);
  }
  v8 = (UnityEngine_Object_o *)*p_tweenTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
  {
    isPlaying = *p_tweenTarget;
    if ( !*p_tweenTarget )
      goto LABEL_42;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         isPlaying,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this->fields.mWidget = (struct UIWidget_o *)Component_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mWidget, (int32_t)Component_object, v11, v12);
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  isPlaying = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mWidget, 0, 0);
  if ( ((unsigned __int8)isPlaying & 1) != 0 )
  {
    v14 = this->fields.mWidget;
    if ( v14 )
    {
      this->fields.mDefaultColor = v14->fields.mColor;
LABEL_39:
      this->fields.mStartingColor = this->fields.mDefaultColor;
      return;
    }
LABEL_42:
    sub_1C32E7C(isPlaying);
  }
  v15 = (UnityEngine_Object_o *)*p_tweenTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
  {
    isPlaying = *p_tweenTarget;
    if ( !*p_tweenTarget )
      goto LABEL_42;
    v16 = UnityEngine_GameObject__GetComponent_object_(
            isPlaying,
            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0) )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      isPlaying = (UnityEngine_GameObject_o *)UnityEngine_Application__get_isPlaying(0);
      if ( !v16 )
        goto LABEL_42;
      if ( ((unsigned __int8)isPlaying & 1) != 0 )
      {
        isPlaying = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0);
        if ( !isPlaying )
          goto LABEL_42;
      }
      else
      {
        isPlaying = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                  (UnityEngine_Renderer_o *)v16,
                                                  0);
        if ( !isPlaying )
          goto LABEL_42;
      }
      color = UnityEngine_Material__get_color((UnityEngine_Material_o *)isPlaying, 0);
    }
    else
    {
      isPlaying = *p_tweenTarget;
      if ( !*p_tweenTarget )
        goto LABEL_42;
      v17 = UnityEngine_GameObject__GetComponent_object_(
              isPlaying,
              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Light___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      isPlaying = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0);
      if ( ((unsigned __int8)isPlaying & 1) == 0 )
      {
        this->fields.tweenTarget = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tweenTarget, 0, v18, v19);
        this->fields.mInitDone = 0;
        return;
      }
      if ( !v17 )
        goto LABEL_42;
      color = UnityEngine_Light__get_color((UnityEngine_Light_o *)v17, 0);
    }
    this->fields.mDefaultColor = color;
    goto LABEL_39;
  }
}


void UIButtonColor__OnPress(UIButtonColor_o *this, bool isPressed, const MethodInfo *method)
{
  UICamera_c *v5; // x0
  UnityEngine_Object_o *tweenTarget; // x21
  UIButtonColor_c *klass; // x8
  __int64 v8; // x1
  UICamera_c *v9; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *current; // x20
  UnityEngine_Object_o *gameObject; // x21
  UICamera_c *v13; // x0
  struct UICamera_StaticFields *static_fields; // x8
  int32_t currentScheme; // w9
  Il2CppMethodPointer methodPtr; // x4
  const MethodInfo *v17; // x3
  UIButtonColor_o *v18; // x0
  UnityEngine_Object_o *hoveredObject; // x20
  UnityEngine_Object_o *v20; // x21

  if ( (byte_4C3BFD6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C3BFD6 = 1;
  }
  if ( (((__int64 (__fastcall *)(UIButtonColor_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method,
          method)
      & 1) != 0 )
  {
    v5 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v5 = UICamera_TypeInfo;
    }
    if ( v5->static_fields->currentTouch )
    {
      if ( !this->fields.mInitDone )
        ((void (__fastcall *)(UIButtonColor_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
          this,
          this->klass->vtable._6_OnInit.method);
      tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
      {
        if ( isPressed )
        {
          klass = this->klass;
          v8 = 2;
        }
        else
        {
          v9 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v9 = UICamera_TypeInfo;
          }
          currentTouch = v9->static_fields->currentTouch;
          if ( !currentTouch )
            sub_1C32E7C(v9);
          current = (UnityEngine_Object_o *)currentTouch->fields.current;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(current, gameObject, 0) )
            goto LABEL_34;
          v13 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v13 = UICamera_TypeInfo;
          }
          static_fields = v13->static_fields;
          currentScheme = static_fields->currentScheme;
          if ( currentScheme != 2 )
          {
            if ( !v13->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v13);
              v13 = UICamera_TypeInfo;
              static_fields = UICamera_TypeInfo->static_fields;
              currentScheme = static_fields->currentScheme;
            }
            if ( currentScheme )
              goto LABEL_34;
            if ( !v13->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v13);
              static_fields = UICamera_TypeInfo->static_fields;
            }
            hoveredObject = (UnityEngine_Object_o *)static_fields->hoveredObject;
            v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(hoveredObject, v20, 0) )
            {
LABEL_34:
              v18 = this;
              v8 = 0;
              methodPtr = this->klass->vtable._14_SetState.methodPtr;
              v17 = this->klass->vtable._14_SetState.method;
              goto LABEL_35;
            }
          }
          klass = this->klass;
          v8 = 1;
        }
        methodPtr = klass->vtable._14_SetState.methodPtr;
        v17 = klass->vtable._14_SetState.method;
        v18 = this;
LABEL_35:
        ((void (__fastcall *)(UIButtonColor_o *, __int64, _QWORD, const MethodInfo *))methodPtr)(v18, v8, 0, v17);
      }
    }
  }
}


void UIButtonColor__OnSelect(UIButtonColor_o *this, bool isSelected, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x21
  UICamera_c *v6; // x0
  UIButtonColor_c *klass; // x8
  _BOOL8 v8; // x1
  UIButtonColor_o *v9; // x0

  if ( (byte_4C3BFD9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C3BFD9 = 1;
  }
  if ( (((__int64 (__fastcall *)(UIButtonColor_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method,
          method)
      & 1) != 0 )
  {
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
    {
      v6 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v6 = UICamera_TypeInfo;
      }
      if ( v6->static_fields->currentScheme == 2 )
      {
        klass = this->klass;
        v8 = isSelected;
        v9 = this;
LABEL_11:
        ((void (__fastcall *)(UIButtonColor_o *, _BOOL8, const MethodInfo *))klass->vtable._9_OnHover.methodPtr)(
          v9,
          v8,
          klass->vtable._9_OnHover.method);
        return;
      }
      if ( !isSelected )
      {
        if ( !v6->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v6);
        if ( UICamera__get_touchCount(0) <= 1 )
        {
          klass = this->klass;
          v9 = this;
          v8 = 0;
          goto LABEL_11;
        }
      }
    }
  }
}


void UIButtonColor__ResetDefaultColor(UIButtonColor_o *this, const MethodInfo *method)
{
  UIButtonColor__set_defaultColor(this, this->fields.mStartingColor, method);
}


// local variable allocation has failed, the output may be wrong!
void UIButtonColor__SetState(UIButtonColor_o *this, int32_t state, bool instant, const MethodInfo *method)
{
  UIButtonColor_c *klass; // x8

  if ( !this->fields.mInitDone )
  {
    klass = this->klass;
    this->fields.mInitDone = 1;
    ((void (__fastcall *)(UIButtonColor_o *, const MethodInfo *, bool, const MethodInfo *))klass->vtable._6_OnInit.methodPtr)(
      this,
      klass->vtable._6_OnInit.method,
      instant,
      method);
  }
  if ( this->fields.mState != state )
  {
    this->fields.mState = state;
    UIButtonColor__UpdateColor(this, instant, (const MethodInfo *)instant);
  }
}


void UIButtonColor__Start(UIButtonColor_o *this, const MethodInfo *method)
{
  if ( !this->fields.mInitDone )
    ((void (__fastcall *)(UIButtonColor_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
      this,
      this->klass->vtable._6_OnInit.method);
  if ( (((__int64 (__fastcall *)(UIButtonColor_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) == 0 )
    ((void (__fastcall *)(UIButtonColor_o *, __int64, __int64, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
      this,
      3,
      1,
      this->klass->vtable._14_SetState.method);
}


// local variable allocation has failed, the output may be wrong!
void UIButtonColor__UpdateColor(UIButtonColor_o *this, bool instant, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x21
  int32_t mState; // w8
  UnityEngine_GameObject_o *v7; // x0
  float duration; // s0
  float r; // s1 OVERLAPPED
  float g; // s2
  float b; // s3
  float a; // s4
  TweenColor_o *v13; // x20
  _BOOL8 v14; // x0

  if ( (byte_4C3BFDA & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFDA = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
  {
    mState = this->fields.mState;
    if ( mState == 3 )
    {
      v7 = this->fields.tweenTarget;
      a = this->fields.disabledColor.fields.a;
      duration = this->fields.duration;
      r = this->fields.disabledColor.fields.r;
      g = this->fields.disabledColor.fields.g;
      b = this->fields.disabledColor.fields.b;
    }
    else if ( mState == 2 )
    {
      v7 = this->fields.tweenTarget;
      duration = this->fields.duration;
      r = this->fields.pressed.fields.r;
      g = this->fields.pressed.fields.g;
      b = this->fields.pressed.fields.b;
      a = this->fields.pressed.fields.a;
    }
    else
    {
      v7 = this->fields.tweenTarget;
      duration = this->fields.duration;
      if ( mState == 1 )
      {
        r = this->fields.hover.fields.r;
        g = this->fields.hover.fields.g;
        b = this->fields.hover.fields.b;
        a = this->fields.hover.fields.a;
      }
      else
      {
        r = this->fields.mDefaultColor.fields.r;
        g = this->fields.mDefaultColor.fields.g;
        b = this->fields.mDefaultColor.fields.b;
        a = this->fields.mDefaultColor.fields.a;
      }
    }
    v13 = TweenColor__Begin(v7, duration, *(UnityEngine_Color_o *)&r, 0);
    if ( instant )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
      if ( v14 )
      {
        if ( !v13 )
          sub_1C32E7C(v14);
        TweenColor__set_value(v13, v13->fields.to, 0);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13, 0, 0);
      }
    }
  }
}


UnityEngine_Color_o UIButtonColor__get_defaultColor(UIButtonColor_o *this, const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !this->fields.mInitDone )
    ((void (__fastcall *)(UIButtonColor_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
      this,
      this->klass->vtable._6_OnInit.method);
  r = this->fields.mDefaultColor.fields.r;
  g = this->fields.mDefaultColor.fields.g;
  b = this->fields.mDefaultColor.fields.b;
  a = this->fields.mDefaultColor.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


bool UIButtonColor__get_isEnabled(UIButtonColor_o *this, const MethodInfo *method)
{
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
}


int32_t UIButtonColor__get_state(UIButtonColor_o *this, const MethodInfo *method)
{
  return this->fields.mState;
}


void UIButtonColor__set_defaultColor(UIButtonColor_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UIButtonColor_c *klass; // x8
  __int64 mState; // x1

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( !this->fields.mInitDone )
    ((void (__fastcall *)(UIButtonColor_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
      this,
      this->klass->vtable._6_OnInit.method);
  klass = this->klass;
  this->fields.mDefaultColor.fields.r = r;
  this->fields.mDefaultColor.fields.g = g;
  this->fields.mDefaultColor.fields.b = b;
  this->fields.mDefaultColor.fields.a = a;
  mState = (unsigned int)this->fields.mState;
  this->fields.mState = 3;
  ((void (__fastcall *)(UIButtonColor_o *, __int64, _QWORD, const MethodInfo *))klass->vtable._14_SetState.methodPtr)(
    this,
    mState,
    0,
    klass->vtable._14_SetState.method);
}


void UIButtonColor__set_isEnabled(UIButtonColor_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, value, 0);
}


void UIButtonColor__set_state(UIButtonColor_o *this, int32_t value, const MethodInfo *method)
{
  ((void (__fastcall *)(UIButtonColor_o *, int32_t, _QWORD, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
    this,
    value,
    0,
    this->klass->vtable._14_SetState.method);
}