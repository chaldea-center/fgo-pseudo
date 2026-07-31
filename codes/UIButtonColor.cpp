void UIButtonColor___ctor(UIButtonColor_o *this, const MethodInfo *method)
{
  this->fields.hover = (struct UnityEngine_Color_o)xmmword_E94790;
  this->fields.pressed = (struct UnityEngine_Color_o)xmmword_E94070;
  this->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_E93FD0;
  this->fields.duration = 0.2;
  UIWidgetContainer___ctor((UIWidgetContainer_o *)this, 0);
}


void UIButtonColor__OnDisable(UIButtonColor_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_593CCB4 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCB4 = 1;
  }
  if ( this->fields.mInitDone )
  {
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
    {
      ((void (__fastcall *)(UIButtonColor_o *, _QWORD, __int64, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
        this,
        0,
        1,
        this->klass->vtable._14_SetState.method);
      v5 = this->fields.tweenTarget;
      if ( !v5 )
        goto LABEL_14;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v5,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( Component_object )
        {
          TweenColor__set_value((TweenColor_o *)Component_object, this->fields.mDefaultColor, 0);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
          return;
        }
LABEL_14:
        sub_21FFECC(v5, v4);
      }
    }
  }
}


void UIButtonColor__OnDragOut(UIButtonColor_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *tweenTarget; // x20

  if ( (byte_593CCB8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCB8 = 1;
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
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
  __int64 v3; // x1
  UnityEngine_Object_o *tweenTarget; // x20

  if ( (byte_593CCB7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCB7 = 1;
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
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
  VirtualInvokeData *p__10_OnPress; // x8
  const MethodInfo **p_method; // x9
  struct UICamera_MouseOrTouch_o *v15; // x8
  UnityEngine_Object_o *current; // x20
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x21

  if ( (byte_593CCB3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593CCB3 = 1;
  }
  if ( this->fields.mInitDone )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    ((void (__fastcall *)(UIButtonColor_o *, bool, const MethodInfo *))this->klass->vtable._9_OnHover.methodPtr)(
      this,
      IsHighlighted,
      this->klass->vtable._9_OnHover.method);
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
      p__10_OnPress = &this->klass->vtable._10_OnPress;
      p_method = &this->klass->vtable._10_OnPress.method;
LABEL_23:
      ((void (__fastcall *)(UIButtonColor_o *, __int64, const MethodInfo *))p__10_OnPress->methodPtr)(
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
      sub_21FFECC(v8, v9);
    current = (UnityEngine_Object_o *)v15->fields.current;
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Equality(current, v18, 0) )
    {
      p__10_OnPress = &this->klass->vtable._9_OnHover;
      p_method = &this->klass->vtable._9_OnHover.method;
      goto LABEL_23;
    }
  }
}


void UIButtonColor__OnHover(UIButtonColor_o *this, bool isOver, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *tweenTarget; // x21

  if ( (byte_593CCB5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCB5 = 1;
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
  UnityEngine_Object_c *v3; // x0
  struct UnityEngine_GameObject_o **p_tweenTarget; // x20
  UnityEngine_Object_o *tweenTarget; // x21
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_Object_o *v14; // x21
  __int64 v15; // x1
  UnityEngine_GameObject_o *isPlaying; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_Object_o *mWidget; // x21
  struct UIWidget_o *v25; // x8
  UnityEngine_Object_o *v26; // x21
  __int64 v27; // x1
  Il2CppObject *v28; // x21
  __int64 v29; // x1
  Il2CppObject *v30; // x21
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593CCB2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Light___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCB2 = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  p_tweenTarget = &this->fields.tweenTarget;
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  this->fields.mInitDone = 1;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( UnityEngine_Object__op_Equality(tweenTarget, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this->fields.tweenTarget = gameObject;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tweenTarget,
      (int32_t)gameObject,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = (UnityEngine_Object_o *)*p_tweenTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
  {
    isPlaying = *p_tweenTarget;
    if ( !*p_tweenTarget )
      goto LABEL_43;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         isPlaying,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this->fields.mWidget = (struct UIWidget_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mWidget,
      (int32_t)Component_object,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  isPlaying = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mWidget, 0, 0);
  if ( ((unsigned __int8)isPlaying & 1) != 0 )
  {
    v25 = this->fields.mWidget;
    if ( v25 )
    {
      this->fields.mDefaultColor = v25->fields.mColor;
LABEL_40:
      this->fields.mStartingColor = this->fields.mDefaultColor;
      return;
    }
LABEL_43:
    sub_21FFECC(isPlaying, v15);
  }
  v26 = (UnityEngine_Object_o *)*p_tweenTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
  {
    isPlaying = *p_tweenTarget;
    if ( !*p_tweenTarget )
      goto LABEL_43;
    v28 = UnityEngine_GameObject__GetComponent_object_(
            isPlaying,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0, 0) )
    {
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v15);
      isPlaying = (UnityEngine_GameObject_o *)UnityEngine_Application__get_isPlaying(0);
      if ( ((unsigned __int8)isPlaying & 1) != 0 )
      {
        if ( !v28 )
          goto LABEL_43;
        isPlaying = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v28, 0);
        if ( !isPlaying )
          goto LABEL_43;
      }
      else
      {
        if ( !v28 )
          goto LABEL_43;
        isPlaying = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                  (UnityEngine_Renderer_o *)v28,
                                                  0);
        if ( !isPlaying )
          goto LABEL_43;
      }
      color = UnityEngine_Material__get_color((UnityEngine_Material_o *)isPlaying, 0);
    }
    else
    {
      isPlaying = *p_tweenTarget;
      if ( !*p_tweenTarget )
        goto LABEL_43;
      v30 = UnityEngine_GameObject__GetComponent_object_(
              isPlaying,
              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Light___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
      isPlaying = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0, 0);
      if ( ((unsigned __int8)isPlaying & 1) == 0 )
      {
        this->fields.tweenTarget = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.tweenTarget, 0, v31, v32, v33, v34, v35, v36);
        this->fields.mInitDone = 0;
        return;
      }
      if ( !v30 )
        goto LABEL_43;
      color = UnityEngine_Light__get_color((UnityEngine_Light_o *)v30, 0);
    }
    this->fields.mDefaultColor = color;
    goto LABEL_40;
  }
}


void UIButtonColor__OnPress(UIButtonColor_o *this, bool isPressed, const MethodInfo *method)
{
  __int64 v5; // x1
  UICamera_c *v6; // x0
  UnityEngine_Object_o *tweenTarget; // x21
  __int64 v8; // x1
  __int64 v9; // x1
  UICamera_c *v10; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *current; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *gameObject; // x21
  __int64 v15; // x1
  UICamera_c *v16; // x0
  struct UICamera_StaticFields *static_fields; // x8
  int32_t currentScheme; // w9
  UnityEngine_Object_o *hoveredObject; // x20
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x21

  if ( (byte_593CCB6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593CCB6 = 1;
  }
  if ( (((__int64 (__fastcall *)(UIButtonColor_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method,
          method)
      & 1) != 0 )
  {
    v6 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      v6 = UICamera_TypeInfo;
    }
    if ( v6->static_fields->currentTouch )
    {
      if ( !this->fields.mInitDone )
        ((void (__fastcall *)(UIButtonColor_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
          this,
          this->klass->vtable._6_OnInit.method);
      tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
      {
        if ( isPressed )
        {
          v9 = 2;
        }
        else
        {
          v10 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
            v10 = UICamera_TypeInfo;
          }
          currentTouch = v10->static_fields->currentTouch;
          if ( !currentTouch )
            sub_21FFECC(v10, v8);
          current = (UnityEngine_Object_o *)currentTouch->fields.current;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
          if ( !UnityEngine_Object__op_Equality(current, gameObject, 0) )
            goto LABEL_33;
          v16 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v15);
            v16 = UICamera_TypeInfo;
          }
          static_fields = v16->static_fields;
          currentScheme = static_fields->currentScheme;
          if ( currentScheme == 2 )
            goto LABEL_24;
          if ( !*(&v16->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v16, v15);
            v16 = UICamera_TypeInfo;
            static_fields = UICamera_TypeInfo->static_fields;
            currentScheme = static_fields->currentScheme;
          }
          if ( currentScheme )
            goto LABEL_33;
          if ( !*(&v16->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v16, v15);
            static_fields = UICamera_TypeInfo->static_fields;
          }
          hoveredObject = (UnityEngine_Object_o *)static_fields->hoveredObject;
          v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
          if ( UnityEngine_Object__op_Equality(hoveredObject, v21, 0) )
LABEL_24:
            v9 = 1;
          else
LABEL_33:
            v9 = 0;
        }
        ((void (__fastcall *)(UIButtonColor_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
          this,
          v9,
          0,
          this->klass->vtable._14_SetState.method);
      }
    }
  }
}


void UIButtonColor__OnSelect(UIButtonColor_o *this, bool isSelected, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *tweenTarget; // x21
  __int64 v7; // x1
  UICamera_c *v8; // x0

  if ( (byte_593CCB9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593CCB9 = 1;
  }
  if ( (((__int64 (__fastcall *)(UIButtonColor_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method,
          method)
      & 1) != 0 )
  {
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
    {
      v8 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v7);
        v8 = UICamera_TypeInfo;
      }
      if ( v8->static_fields->currentScheme == 2 )
        goto LABEL_10;
      if ( !isSelected )
      {
        if ( !*(&v8->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v8, v7);
        if ( UICamera__get_touchCount(0) <= 1 )
        {
          isSelected = 0;
LABEL_10:
          ((void (__fastcall *)(UIButtonColor_o *, bool, const MethodInfo *))this->klass->vtable._9_OnHover.methodPtr)(
            this,
            isSelected,
            this->klass->vtable._9_OnHover.method);
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
  struct UnityEngine_Color_o *p_disabledColor; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  TweenColor_o *v11; // x0
  __int64 v12; // x1
  TweenColor_o *v13; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  UnityEngine_Color_o v16; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_593CCBA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCBA = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, instant);
  if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
  {
    mState = this->fields.mState;
    switch ( mState )
    {
      case 3:
        p_disabledColor = &this->fields.disabledColor;
        p_g = &this->fields.disabledColor.fields.g;
        p_b = &this->fields.disabledColor.fields.b;
        p_a = &this->fields.disabledColor.fields.a;
        break;
      case 2:
        p_disabledColor = &this->fields.pressed;
        p_g = &this->fields.pressed.fields.g;
        p_b = &this->fields.pressed.fields.b;
        p_a = &this->fields.pressed.fields.a;
        break;
      case 1:
        p_disabledColor = &this->fields.hover;
        p_g = &this->fields.hover.fields.g;
        p_b = &this->fields.hover.fields.b;
        p_a = &this->fields.hover.fields.a;
        break;
      default:
        p_disabledColor = &this->fields.mDefaultColor;
        p_g = &this->fields.mDefaultColor.fields.g;
        p_b = &this->fields.mDefaultColor.fields.b;
        p_a = &this->fields.mDefaultColor.fields.a;
        break;
    }
    v16.fields.b = *p_b;
    v16.fields.g = *p_g;
    v16.fields.r = p_disabledColor->fields.r;
    v16.fields.a = *p_a;
    v11 = TweenColor__Begin(this->fields.tweenTarget, this->fields.duration, v16, 0);
    if ( instant )
    {
      v13 = v11;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
      if ( v14 )
      {
        if ( !v13 )
          sub_21FFECC(v14, v15);
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