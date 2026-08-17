void UICommonButtonColor___cctor(const MethodInfo *method)
{
  UICommonButtonColor_c *v6; // x8

  if ( (byte_59720DB & 1) == 0 )
  {
    sub_2213A60(&UICommonButtonColor_TypeInfo);
    byte_59720DB = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  UICommonButtonColor_TypeInfo->static_fields->normal = _Q0;
  v6 = UICommonButtonColor_TypeInfo;
  UICommonButtonColor_TypeInfo->static_fields->hover = (struct UnityEngine_Color_o)xmmword_E9C510;
  v6->static_fields->pressed = (struct UnityEngine_Color_o)xmmword_E9C3C0;
  v6->static_fields->disabledColor = (struct UnityEngine_Color_o)xmmword_E9D170;
  v6->static_fields->duration = 0.2;
}


void UICommonButtonColor___ctor(UICommonButtonColor_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  UICommonButtonColor_c *v11; // x0

  if ( (byte_59720DA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&UICommonButtonColor_TypeInfo);
    byte_59720DA = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_2213B20(UnityEngine_GameObject___TypeInfo, 1);
  this->fields.tweenTargets = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tweenTargets, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v11 = UICommonButtonColor_TypeInfo;
  if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, v10);
    v11 = UICommonButtonColor_TypeInfo;
  }
  this->fields.specifyDisabledColor = v11->static_fields->disabledColor;
  this->fields.specifyHoverColor = v11->static_fields->hover;
  this->fields.specifyPressedColor = v11->static_fields->pressed;
  UIWidgetContainer___ctor((UIWidgetContainer_o *)this, 0);
}


void UICommonButtonColor__OnDisable(UICommonButtonColor_o *this, const MethodInfo *method)
{
  UICommonButtonColor_c *v3; // x0
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *tweenTargets; // x8
  __int64 v6; // x24
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v8; // x25
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_array *v10; // x8
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_59720D6 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICommonButtonColor_TypeInfo);
    byte_59720D6 = 1;
  }
  if ( this->fields.mInitDone && this->fields.tweenTargets )
  {
    v3 = (UICommonButtonColor_c *)((__int64 (__fastcall *)(UICommonButtonColor_o *, _QWORD, __int64, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
                                    this,
                                    0,
                                    1,
                                    this->klass->vtable._14_SetState.method);
    tweenTargets = this->fields.tweenTargets;
    if ( !tweenTargets )
LABEL_23:
      sub_2213CDC(v3, v4);
    v6 = 4;
    while ( 1 )
    {
      max_length_low = LODWORD(tweenTargets->max_length);
      v8 = v6 - 4;
      if ( v6 - 4 >= (int)max_length_low )
        break;
      if ( v8 >= max_length_low )
        goto LABEL_25;
      v9 = (UnityEngine_Object_o *)*((_QWORD *)&tweenTargets->obj.klass + v6);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      v3 = (UICommonButtonColor_c *)UnityEngine_Object__op_Inequality(v9, 0, 0);
      if ( ((unsigned __int8)v3 & 1) != 0 )
      {
        v10 = this->fields.tweenTargets;
        if ( !v10 )
          goto LABEL_23;
        if ( v8 >= LODWORD(v10->max_length) )
LABEL_25:
          sub_2213CE4(v3);
        v3 = (UICommonButtonColor_c *)*((_QWORD *)&v10->obj.klass + v6);
        if ( !v3 )
          goto LABEL_23;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v3,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
        v3 = (UICommonButtonColor_c *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)v3 & 1) != 0 )
        {
          v3 = UICommonButtonColor_TypeInfo;
          if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, v4);
          if ( !Component_object )
            goto LABEL_23;
          TweenColor__set_value(
            (TweenColor_o *)Component_object,
            UICommonButtonColor_TypeInfo->static_fields->normal,
            0);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
        }
      }
      tweenTargets = this->fields.tweenTargets;
      ++v6;
      if ( !tweenTargets )
        goto LABEL_23;
    }
  }
}


void UICommonButtonColor__OnDragOut(UICommonButtonColor_o *this, const MethodInfo *method)
{
  if ( (((__int64 (__fastcall *)(UICommonButtonColor_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    if ( !this->fields.mInitDone )
      ((void (__fastcall *)(UICommonButtonColor_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
        this,
        this->klass->vtable._6_OnInit.method);
    if ( this->fields.tweenTargets )
      ((void (__fastcall *)(UICommonButtonColor_o *, _QWORD, _QWORD, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
        this,
        0,
        0,
        this->klass->vtable._14_SetState.method);
  }
}


void UICommonButtonColor__OnDragOver(UICommonButtonColor_o *this, const MethodInfo *method)
{
  if ( (((__int64 (__fastcall *)(UICommonButtonColor_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    if ( !this->fields.mInitDone )
      ((void (__fastcall *)(UICommonButtonColor_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
        this,
        this->klass->vtable._6_OnInit.method);
    if ( this->fields.tweenTargets )
      ((void (__fastcall *)(UICommonButtonColor_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
        this,
        2,
        0,
        this->klass->vtable._14_SetState.method);
  }
}


void UICommonButtonColor__OnEnable(UICommonButtonColor_o *this, const MethodInfo *method)
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

  if ( (byte_59720D5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_59720D5 = 1;
  }
  if ( this->fields.mInitDone )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    ((void (__fastcall *)(UICommonButtonColor_o *, bool, const MethodInfo *))this->klass->vtable._9_OnHover.methodPtr)(
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
      ((void (__fastcall *)(UICommonButtonColor_o *, __int64, const MethodInfo *))p__10_OnPress->methodPtr)(
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
      p__10_OnPress = &this->klass->vtable._9_OnHover;
      p_method = &this->klass->vtable._9_OnHover.method;
      goto LABEL_23;
    }
  }
}


void UICommonButtonColor__OnHover(UICommonButtonColor_o *this, bool isOver, const MethodInfo *method)
{
  if ( (((__int64 (__fastcall *)(UICommonButtonColor_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method,
          method)
      & 1) != 0 )
  {
    if ( !this->fields.mInitDone )
      ((void (__fastcall *)(UICommonButtonColor_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
        this,
        this->klass->vtable._6_OnInit.method);
    if ( this->fields.tweenTargets )
      ((void (__fastcall *)(UICommonButtonColor_o *, bool, _QWORD, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
        this,
        isOver,
        0,
        this->klass->vtable._14_SetState.method);
  }
}


void UICommonButtonColor__OnInit(UICommonButtonColor_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *tweenTargets; // x8
  struct UnityEngine_GameObject_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct UnityEngine_GameObject_array *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_59720D4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    byte_59720D4 = 1;
  }
  tweenTargets = this->fields.tweenTargets;
  this->fields.mInitDone = 1;
  if ( !tweenTargets )
  {
    v4 = (struct UnityEngine_GameObject_array *)sub_2213B20(UnityEngine_GameObject___TypeInfo, 1);
    this->fields.tweenTargets = v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tweenTargets, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    v11 = this->fields.tweenTargets;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !v11 )
      sub_2213CDC(gameObject, v13);
    if ( !LODWORD(v11->max_length) )
      sub_2213CE4(gameObject);
    v11->m_Items[0] = gameObject;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v11->m_Items, (int32_t)gameObject, v14, v15, v16, v17, v18, v19);
  }
}


void UICommonButtonColor__OnPress(UICommonButtonColor_o *this, bool isPressed, const MethodInfo *method)
{
  __int64 v5; // x1
  UICamera_c *v6; // x0
  __int64 v7; // x1
  UICamera_c *v8; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *current; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *gameObject; // x21
  __int64 v13; // x1
  UICamera_c *v14; // x0
  struct UICamera_StaticFields *static_fields; // x8
  int32_t currentScheme; // w9
  UnityEngine_Object_o *hoveredObject; // x20
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x21

  if ( (byte_59720D7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_59720D7 = 1;
  }
  if ( (((__int64 (__fastcall *)(UICommonButtonColor_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
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
        ((void (__fastcall *)(UICommonButtonColor_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
          this,
          this->klass->vtable._6_OnInit.method);
      if ( this->fields.tweenTargets )
      {
        if ( isPressed )
        {
          v7 = 2;
        }
        else
        {
          v8 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
            v8 = UICamera_TypeInfo;
          }
          currentTouch = v8->static_fields->currentTouch;
          if ( !currentTouch )
            sub_2213CDC(v8, v5);
          current = (UnityEngine_Object_o *)currentTouch->fields.current;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
          if ( !UnityEngine_Object__op_Equality(current, gameObject, 0) )
            goto LABEL_31;
          v14 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v13);
            v14 = UICamera_TypeInfo;
          }
          static_fields = v14->static_fields;
          currentScheme = static_fields->currentScheme;
          if ( currentScheme == 2 )
            goto LABEL_22;
          if ( !*(&v14->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v14, v13);
            v14 = UICamera_TypeInfo;
            static_fields = UICamera_TypeInfo->static_fields;
            currentScheme = static_fields->currentScheme;
          }
          if ( currentScheme )
            goto LABEL_31;
          if ( !*(&v14->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v14, v13);
            static_fields = UICamera_TypeInfo->static_fields;
          }
          hoveredObject = (UnityEngine_Object_o *)static_fields->hoveredObject;
          v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
          if ( UnityEngine_Object__op_Equality(hoveredObject, v19, 0) )
LABEL_22:
            v7 = 1;
          else
LABEL_31:
            v7 = 0;
        }
        ((void (__fastcall *)(UICommonButtonColor_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
          this,
          v7,
          0,
          this->klass->vtable._14_SetState.method);
      }
    }
  }
}


void UICommonButtonColor__OnSelect(UICommonButtonColor_o *this, bool isSelected, const MethodInfo *method)
{
  __int64 v5; // x1
  UICamera_c *v6; // x0

  if ( (byte_59720D8 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_59720D8 = 1;
  }
  if ( (((__int64 (__fastcall *)(UICommonButtonColor_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method,
          method)
      & 1) != 0
    && this->fields.tweenTargets )
  {
    v6 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      v6 = UICamera_TypeInfo;
    }
    if ( v6->static_fields->currentScheme == 2 )
      goto LABEL_8;
    if ( !isSelected )
    {
      if ( !*(&v6->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v6, v5);
      if ( UICamera__get_touchCount(0) <= 1 )
      {
        isSelected = 0;
LABEL_8:
        ((void (__fastcall *)(UICommonButtonColor_o *, bool, const MethodInfo *))this->klass->vtable._9_OnHover.methodPtr)(
          this,
          isSelected,
          this->klass->vtable._9_OnHover.method);
      }
    }
  }
}


void UICommonButtonColor__SetSpecifyDisabledColor(
        UICommonButtonColor_o *this,
        UnityEngine_Color_o specifyDisabledColor,
        const MethodInfo *method)
{
  this->fields.specifyDisabledColor = specifyDisabledColor;
}


void UICommonButtonColor__SetSpecifyHoverColor(
        UICommonButtonColor_o *this,
        UnityEngine_Color_o specifyHoverColor,
        const MethodInfo *method)
{
  this->fields.specifyHoverColor = specifyHoverColor;
}


void UICommonButtonColor__SetSpecifyPressedColor(
        UICommonButtonColor_o *this,
        UnityEngine_Color_o specifyPressedColor,
        const MethodInfo *method)
{
  this->fields.specifyPressedColor = specifyPressedColor;
}


// local variable allocation has failed, the output may be wrong!
void UICommonButtonColor__SetState(UICommonButtonColor_o *this, int32_t state, bool instant, const MethodInfo *method)
{
  UICommonButtonColor_c *klass; // x8

  if ( this->fields.mInitDone )
  {
    if ( instant )
      goto LABEL_6;
LABEL_5:
    if ( this->fields.mState == state )
      return;
    goto LABEL_6;
  }
  klass = this->klass;
  this->fields.mInitDone = 1;
  ((void (__fastcall *)(UICommonButtonColor_o *, const MethodInfo *, bool, const MethodInfo *))klass->vtable._6_OnInit.methodPtr)(
    this,
    klass->vtable._6_OnInit.method,
    instant,
    method);
  if ( !instant )
    goto LABEL_5;
LABEL_6:
  this->fields.mState = state;
  UICommonButtonColor__UpdateColor(this, instant, (const MethodInfo *)instant);
}


void UICommonButtonColor__Start(UICommonButtonColor_o *this, const MethodInfo *method)
{
  if ( !this->fields.mInitDone )
    ((void (__fastcall *)(UICommonButtonColor_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
      this,
      this->klass->vtable._6_OnInit.method);
  if ( (((__int64 (__fastcall *)(UICommonButtonColor_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) == 0 )
    ((void (__fastcall *)(UICommonButtonColor_o *, __int64, __int64, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
      this,
      3,
      1,
      this->klass->vtable._14_SetState.method);
}


// local variable allocation has failed, the output may be wrong!
void UICommonButtonColor__UpdateColor(UICommonButtonColor_o *this, bool instant, const MethodInfo *method)
{
  float v3; // s1
  int32_t mState; // w8
  struct UnityEngine_Color_o *p_specifyDisabledColor; // x21
  UICommonButtonColor_c *v8; // x0
  struct UICommonButtonColor_StaticFields *v9; // x8
  float v10; // s10
  float v11; // s8
  float v12; // s9
  void *v13; // x0
  float v14; // s1
  float v15; // s1
  float v16; // s1
  struct UnityEngine_Color_o *v17; // x10
  float *p_g; // x8
  float *p_b; // x9
  float *p_a; // x10
  UICommonButtonColor_c *v21; // x0
  struct UICommonButtonColor_StaticFields *v22; // x8
  float v23; // s10
  float v24; // s8
  float v25; // s9
  float v26; // s1
  float v27; // s1
  float v28; // s1
  struct UnityEngine_Color_o *v29; // x10
  UICommonButtonColor_c *v30; // x0
  struct UICommonButtonColor_StaticFields *static_fields; // x8
  float g; // s10
  float a; // s8
  float b; // s9
  float v35; // s1
  float v36; // s1
  float v37; // s1
  struct UnityEngine_Color_o *v38; // x10
  float r; // s8
  float v40; // s9
  float v41; // s10
  float v42; // s11
  struct UnityEngine_GameObject_array *tweenTargets; // x8
  __int64 v44; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v46; // x24
  UnityEngine_Object_o *v47; // x20
  struct UnityEngine_GameObject_array *v48; // x8
  UICommonButtonColor_c *v49; // x0
  UnityEngine_GameObject_o *v50; // x20
  __int64 v51; // x1
  TweenColor_o *v52; // x20
  __int64 v53; // x23
  unsigned __int64 v54; // x9
  unsigned __int64 v55; // x24
  UnityEngine_Object_o *v56; // x20
  struct UnityEngine_GameObject_array *v57; // x8
  UICommonButtonColor_c *v58; // x0
  UnityEngine_GameObject_o *v59; // x20
  UnityEngine_Color_o v60; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v61; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_59720D9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICommonButtonColor_TypeInfo);
    byte_59720D9 = 1;
  }
  if ( !this->fields.tweenTargets )
    return;
  mState = this->fields.mState;
  switch ( mState )
  {
    case 3:
      p_specifyDisabledColor = &this->fields.specifyDisabledColor;
      v30 = UICommonButtonColor_TypeInfo;
      if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, instant);
        v30 = UICommonButtonColor_TypeInfo;
      }
      static_fields = v30->static_fields;
      g = static_fields->disabledColor.fields.g;
      b = static_fields->disabledColor.fields.b;
      a = static_fields->disabledColor.fields.a;
      v13 = (void *)System_Single__Equals_77225844(
                      static_fields->disabledColor.fields.r,
                      v3,
                      (const MethodInfo *)&this->fields.specifyDisabledColor);
      if ( ((unsigned __int8)v13 & 1) != 0
        && (v13 = (void *)System_Single__Equals_77225844(
                            g,
                            v35,
                            (const MethodInfo *)&this->fields.specifyDisabledColor.fields.g),
            ((unsigned __int8)v13 & 1) != 0)
        && (v13 = (void *)System_Single__Equals_77225844(
                            b,
                            v36,
                            (const MethodInfo *)&this->fields.specifyDisabledColor.fields.b),
            ((unsigned __int8)v13 & 1) != 0)
        && (v13 = (void *)System_Single__Equals_77225844(
                            a,
                            v37,
                            (const MethodInfo *)&this->fields.specifyDisabledColor.fields.a),
            ((unsigned __int8)v13 & 1) != 0) )
      {
        v13 = UICommonButtonColor_TypeInfo;
        if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, instant);
          v13 = UICommonButtonColor_TypeInfo;
        }
        v38 = (struct UnityEngine_Color_o *)*((_QWORD *)v13 + 23);
        p_specifyDisabledColor = v38 + 3;
        p_g = &v38[3].fields.g;
        p_b = &v38[3].fields.b;
        p_a = &v38[3].fields.a;
      }
      else
      {
        p_g = &this->fields.specifyDisabledColor.fields.g;
        p_b = &this->fields.specifyDisabledColor.fields.b;
        p_a = &this->fields.specifyDisabledColor.fields.a;
      }
      break;
    case 2:
      p_specifyDisabledColor = &this->fields.specifyPressedColor;
      v21 = UICommonButtonColor_TypeInfo;
      if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, instant);
        v21 = UICommonButtonColor_TypeInfo;
      }
      v22 = v21->static_fields;
      v23 = v22->pressed.fields.g;
      v25 = v22->pressed.fields.b;
      v24 = v22->pressed.fields.a;
      v13 = (void *)System_Single__Equals_77225844(
                      v22->pressed.fields.r,
                      v3,
                      (const MethodInfo *)&this->fields.specifyPressedColor);
      if ( ((unsigned __int8)v13 & 1) != 0
        && (v13 = (void *)System_Single__Equals_77225844(
                            v23,
                            v26,
                            (const MethodInfo *)&this->fields.specifyPressedColor.fields.g),
            ((unsigned __int8)v13 & 1) != 0)
        && (v13 = (void *)System_Single__Equals_77225844(
                            v25,
                            v27,
                            (const MethodInfo *)&this->fields.specifyPressedColor.fields.b),
            ((unsigned __int8)v13 & 1) != 0)
        && (v13 = (void *)System_Single__Equals_77225844(
                            v24,
                            v28,
                            (const MethodInfo *)&this->fields.specifyPressedColor.fields.a),
            ((unsigned __int8)v13 & 1) != 0) )
      {
        v13 = UICommonButtonColor_TypeInfo;
        if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, instant);
          v13 = UICommonButtonColor_TypeInfo;
        }
        v29 = (struct UnityEngine_Color_o *)*((_QWORD *)v13 + 23);
        p_specifyDisabledColor = v29 + 2;
        p_g = &v29[2].fields.g;
        p_b = &v29[2].fields.b;
        p_a = &v29[2].fields.a;
      }
      else
      {
        p_g = &this->fields.specifyPressedColor.fields.g;
        p_b = &this->fields.specifyPressedColor.fields.b;
        p_a = &this->fields.specifyPressedColor.fields.a;
      }
      break;
    case 1:
      p_specifyDisabledColor = &this->fields.specifyHoverColor;
      v8 = UICommonButtonColor_TypeInfo;
      if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, instant);
        v8 = UICommonButtonColor_TypeInfo;
      }
      v9 = v8->static_fields;
      v10 = v9->hover.fields.g;
      v12 = v9->hover.fields.b;
      v11 = v9->hover.fields.a;
      v13 = (void *)System_Single__Equals_77225844(
                      v9->hover.fields.r,
                      v3,
                      (const MethodInfo *)&this->fields.specifyHoverColor);
      if ( ((unsigned __int8)v13 & 1) != 0
        && (v13 = (void *)System_Single__Equals_77225844(
                            v10,
                            v14,
                            (const MethodInfo *)&this->fields.specifyHoverColor.fields.g),
            ((unsigned __int8)v13 & 1) != 0)
        && (v13 = (void *)System_Single__Equals_77225844(
                            v12,
                            v15,
                            (const MethodInfo *)&this->fields.specifyHoverColor.fields.b),
            ((unsigned __int8)v13 & 1) != 0)
        && (v13 = (void *)System_Single__Equals_77225844(
                            v11,
                            v16,
                            (const MethodInfo *)&this->fields.specifyHoverColor.fields.a),
            ((unsigned __int8)v13 & 1) != 0) )
      {
        v13 = UICommonButtonColor_TypeInfo;
        if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, instant);
          v13 = UICommonButtonColor_TypeInfo;
        }
        v17 = (struct UnityEngine_Color_o *)*((_QWORD *)v13 + 23);
        p_specifyDisabledColor = v17 + 1;
        p_g = &v17[1].fields.g;
        p_b = &v17[1].fields.b;
        p_a = &v17[1].fields.a;
      }
      else
      {
        p_g = &this->fields.specifyHoverColor.fields.g;
        p_b = &this->fields.specifyHoverColor.fields.b;
        p_a = &this->fields.specifyHoverColor.fields.a;
      }
      break;
    default:
      v13 = UICommonButtonColor_TypeInfo;
      if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, instant);
        v13 = UICommonButtonColor_TypeInfo;
      }
      p_specifyDisabledColor = (struct UnityEngine_Color_o *)*((_QWORD *)v13 + 23);
      p_g = &p_specifyDisabledColor->fields.g;
      p_b = &p_specifyDisabledColor->fields.b;
      p_a = &p_specifyDisabledColor->fields.a;
      break;
  }
  r = p_specifyDisabledColor->fields.r;
  v40 = *p_g;
  v41 = *p_b;
  v42 = *p_a;
  tweenTargets = this->fields.tweenTargets;
  if ( instant )
  {
    if ( tweenTargets )
    {
      v44 = 4;
      do
      {
        max_length_low = LODWORD(tweenTargets->max_length);
        v46 = v44 - 4;
        if ( v44 - 4 >= (int)max_length_low )
          return;
        if ( v46 >= max_length_low )
          goto LABEL_74;
        v47 = (UnityEngine_Object_o *)*((_QWORD *)&tweenTargets->obj.klass + v44);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, instant);
        v13 = (void *)UnityEngine_Object__op_Inequality(v47, 0, 0);
        if ( ((unsigned __int8)v13 & 1) != 0 )
        {
          v48 = this->fields.tweenTargets;
          if ( !v48 )
            break;
          if ( v46 >= LODWORD(v48->max_length) )
            goto LABEL_74;
          v49 = UICommonButtonColor_TypeInfo;
          v50 = (UnityEngine_GameObject_o *)*((_QWORD *)&v48->obj.klass + v44);
          if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, instant);
            v49 = UICommonButtonColor_TypeInfo;
          }
          v60.fields.r = r;
          v60.fields.g = v40;
          v60.fields.b = v41;
          v60.fields.a = v42;
          v52 = TweenColor__Begin(v50, v49->static_fields->duration, v60, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
          v13 = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v52, 0, 0);
          if ( ((unsigned __int8)v13 & 1) != 0 )
          {
            if ( !v52 )
              break;
            TweenColor__set_value(v52, v52->fields.to, 0);
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v52, 0, 0);
          }
        }
        tweenTargets = this->fields.tweenTargets;
        ++v44;
      }
      while ( tweenTargets );
    }
LABEL_72:
    sub_2213CDC(v13, instant);
  }
  if ( !tweenTargets )
    goto LABEL_72;
  v53 = 4;
  while ( 1 )
  {
    v54 = LODWORD(tweenTargets->max_length);
    v55 = v53 - 4;
    if ( v53 - 4 >= (int)v54 )
      break;
    if ( v55 >= v54 )
      goto LABEL_74;
    v56 = (UnityEngine_Object_o *)*((_QWORD *)&tweenTargets->obj.klass + v53);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, instant);
    v13 = (void *)UnityEngine_Object__op_Inequality(v56, 0, 0);
    if ( ((unsigned __int8)v13 & 1) != 0 )
    {
      v57 = this->fields.tweenTargets;
      if ( !v57 )
        goto LABEL_72;
      if ( v55 >= LODWORD(v57->max_length) )
LABEL_74:
        sub_2213CE4(v13);
      v58 = UICommonButtonColor_TypeInfo;
      v59 = (UnityEngine_GameObject_o *)*((_QWORD *)&v57->obj.klass + v53);
      if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, instant);
        v58 = UICommonButtonColor_TypeInfo;
      }
      v61.fields.r = r;
      v61.fields.g = v40;
      v61.fields.b = v41;
      v61.fields.a = v42;
      v13 = TweenColor__Begin(v59, v58->static_fields->duration, v61, 0);
    }
    tweenTargets = this->fields.tweenTargets;
    ++v53;
    if ( !tweenTargets )
      goto LABEL_72;
  }
}


float UICommonButtonColor__get_alpha(UICommonButtonColor_o *this, const MethodInfo *method)
{
  UICommonButtonColor_o *v2; // x19
  struct UnityEngine_GameObject_array *tweenTargets; // x8
  __int64 v4; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v6; // x24
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_array *v8; // x8
  __int64 v9; // x1
  Il2CppObject *Component_object; // x20
  float result; // s0

  v2 = this;
  if ( (byte_59720D3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this = (UICommonButtonColor_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59720D3 = 1;
  }
  tweenTargets = v2->fields.tweenTargets;
  if ( tweenTargets )
  {
    v4 = 4;
    while ( 1 )
    {
      max_length_low = LODWORD(tweenTargets->max_length);
      v6 = v4 - 4;
      if ( v4 - 4 >= (int)max_length_low )
        break;
      if ( v6 >= max_length_low )
        goto LABEL_21;
      v7 = (UnityEngine_Object_o *)*((_QWORD *)&tweenTargets->obj.klass + v4);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (UICommonButtonColor_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v8 = v2->fields.tweenTargets;
        if ( !v8 )
          goto LABEL_17;
        if ( v6 >= LODWORD(v8->max_length) )
LABEL_21:
          sub_2213CE4(this);
        this = (UICommonButtonColor_o *)*((_QWORD *)&v8->obj.klass + v4);
        if ( !this )
          goto LABEL_17;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
        this = (UICommonButtonColor_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0,
                                          0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_object )
LABEL_17:
            sub_2213CDC(this, method);
          ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[7].methodPtr)(
            Component_object,
            Component_object->klass->vtable[7].method);
          return result;
        }
      }
      tweenTargets = v2->fields.tweenTargets;
      ++v4;
      if ( !tweenTargets )
        goto LABEL_17;
    }
  }
  return 1.0;
}


bool UICommonButtonColor__get_isEnabled(UICommonButtonColor_o *this, const MethodInfo *method)
{
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
}


int32_t UICommonButtonColor__get_state(UICommonButtonColor_o *this, const MethodInfo *method)
{
  return this->fields.mState;
}


void UICommonButtonColor__set_isEnabled(UICommonButtonColor_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, value, 0);
}


void UICommonButtonColor__set_state(UICommonButtonColor_o *this, int32_t value, const MethodInfo *method)
{
  ((void (__fastcall *)(UICommonButtonColor_o *, int32_t, _QWORD, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
    this,
    value,
    0,
    this->klass->vtable._14_SetState.method);
}