void UICommonButtonColor___cctor(const MethodInfo *method)
{
  UICommonButtonColor_c *v6; // x8

  if ( (byte_4CB7B10 & 1) == 0 )
  {
    sub_1C6BA08(&UICommonButtonColor_TypeInfo);
    byte_4CB7B10 = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  UICommonButtonColor_TypeInfo->static_fields->normal = _Q0;
  v6 = UICommonButtonColor_TypeInfo;
  UICommonButtonColor_TypeInfo->static_fields->hover = (struct UnityEngine_Color_o)xmmword_CED190;
  v6->static_fields->pressed = (struct UnityEngine_Color_o)xmmword_CEDA10;
  v6->static_fields->disabledColor = (struct UnityEngine_Color_o)xmmword_CEBD60;
  v6->static_fields->duration = 0.2;
}


void UICommonButtonColor___ctor(UICommonButtonColor_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UICommonButtonColor_c *v6; // x0

  if ( (byte_4CB7B0F & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_GameObject___TypeInfo);
    sub_1C6BA08(&UICommonButtonColor_TypeInfo);
    byte_4CB7B0F = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_1C6BAB0(UnityEngine_GameObject___TypeInfo, 1);
  this->fields.tweenTargets = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.tweenTargets, (int32_t)v3, v4, v5);
  v6 = UICommonButtonColor_TypeInfo;
  if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
    v6 = UICommonButtonColor_TypeInfo;
  }
  this->fields.specifyDisabledColor = v6->static_fields->disabledColor;
  this->fields.specifyHoverColor = v6->static_fields->hover;
  this->fields.specifyPressedColor = v6->static_fields->pressed;
  UIWidgetContainer___ctor((UIWidgetContainer_o *)this, 0);
}


void UICommonButtonColor__OnDisable(UICommonButtonColor_o *this, const MethodInfo *method)
{
  UICommonButtonColor_c *v3; // x0
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *tweenTargets; // x8
  __int64 v6; // x21
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v8; // x25
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_array *v10; // x8
  Il2CppObject *Component_object; // x20

  if ( (byte_4CB7B0B & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UICommonButtonColor_TypeInfo);
    byte_4CB7B0B = 1;
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
      sub_1C6BC60(v3, v4);
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v3 = (UICommonButtonColor_c *)UnityEngine_Object__op_Inequality(v9, 0, 0);
      if ( ((unsigned __int8)v3 & 1) != 0 )
      {
        v10 = this->fields.tweenTargets;
        if ( !v10 )
          goto LABEL_23;
        if ( v8 >= LODWORD(v10->max_length) )
LABEL_25:
          sub_1C6BC68(v3);
        v3 = (UICommonButtonColor_c *)*((_QWORD *)&v10->obj.klass + v6);
        if ( !v3 )
          goto LABEL_23;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v3,
                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v3 = (UICommonButtonColor_c *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)v3 & 1) != 0 )
        {
          v3 = UICommonButtonColor_TypeInfo;
          if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
            v3 = UICommonButtonColor_TypeInfo;
          }
          if ( !Component_object )
            goto LABEL_23;
          TweenColor__set_value((TweenColor_o *)Component_object, v3->static_fields->normal, 0);
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

  if ( (byte_4CB7B0A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UICamera_TypeInfo);
    byte_4CB7B0A = 1;
  }
  if ( this->fields.mInitDone )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    ((void (__fastcall *)(UICommonButtonColor_o *, bool, const MethodInfo *))this->klass->vtable._9_OnHover.methodPtr)(
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
    v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(pressed, v10, 0) )
    {
      methodPtr = this->klass->vtable._10_OnPress.methodPtr;
      v11 = this->klass->vtable._10_OnPress.method;
LABEL_23:
      ((void (__fastcall *)(UICommonButtonColor_o *, __int64, const MethodInfo *))methodPtr)(this, 1, v11);
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
      sub_1C6BC60(v7, v8);
    current = (UnityEngine_Object_o *)v13->fields.current;
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(current, v15, 0) )
    {
      methodPtr = this->klass->vtable._9_OnHover.methodPtr;
      v11 = this->klass->vtable._9_OnHover.method;
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UnityEngine_GameObject_array *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB7B09 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_GameObject___TypeInfo);
    byte_4CB7B09 = 1;
  }
  tweenTargets = this->fields.tweenTargets;
  this->fields.mInitDone = 1;
  if ( !tweenTargets )
  {
    v4 = (struct UnityEngine_GameObject_array *)sub_1C6BAB0(UnityEngine_GameObject___TypeInfo, 1);
    this->fields.tweenTargets = v4;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.tweenTargets, (int32_t)v4, v5, v6);
    v7 = this->fields.tweenTargets;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !v7 )
      sub_1C6BC60(gameObject, v9);
    if ( !LODWORD(v7->max_length) )
      sub_1C6BC68(gameObject);
    v7->m_Items[0] = gameObject;
    sub_1C6B9AC((CGThumbnailListItem_o *)v7->m_Items, (int32_t)gameObject, v10, v11);
  }
}


void UICommonButtonColor__OnPress(UICommonButtonColor_o *this, bool isPressed, const MethodInfo *method)
{
  __int64 v5; // x1
  UICamera_c *v6; // x0
  UICommonButtonColor_c *klass; // x8
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
  UICommonButtonColor_o *v18; // x0
  UnityEngine_Object_o *hoveredObject; // x20
  UnityEngine_Object_o *v20; // x21

  if ( (byte_4CB7B0C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UICamera_TypeInfo);
    byte_4CB7B0C = 1;
  }
  if ( (((__int64 (__fastcall *)(UICommonButtonColor_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method,
          method)
      & 1) != 0 )
  {
    v6 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
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
            sub_1C6BC60(v9, v5);
          current = (UnityEngine_Object_o *)currentTouch->fields.current;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(current, gameObject, 0) )
            goto LABEL_32;
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
              goto LABEL_32;
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
LABEL_32:
              v18 = this;
              v8 = 0;
              methodPtr = this->klass->vtable._14_SetState.methodPtr;
              v17 = this->klass->vtable._14_SetState.method;
              goto LABEL_33;
            }
          }
          klass = this->klass;
          v8 = 1;
        }
        methodPtr = klass->vtable._14_SetState.methodPtr;
        v17 = klass->vtable._14_SetState.method;
        v18 = this;
LABEL_33:
        ((void (__fastcall *)(UICommonButtonColor_o *, __int64, _QWORD, const MethodInfo *))methodPtr)(v18, v8, 0, v17);
      }
    }
  }
}


void UICommonButtonColor__OnSelect(UICommonButtonColor_o *this, bool isSelected, const MethodInfo *method)
{
  UICamera_c *v5; // x0
  UICommonButtonColor_c *klass; // x8
  _BOOL8 v7; // x1
  UICommonButtonColor_o *v8; // x0

  if ( (byte_4CB7B0D & 1) == 0 )
  {
    sub_1C6BA08(&UICamera_TypeInfo);
    byte_4CB7B0D = 1;
  }
  if ( (((__int64 (__fastcall *)(UICommonButtonColor_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method,
          method)
      & 1) != 0
    && this->fields.tweenTargets )
  {
    v5 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v5 = UICamera_TypeInfo;
    }
    if ( v5->static_fields->currentScheme == 2 )
    {
      klass = this->klass;
      v7 = isSelected;
      v8 = this;
LABEL_9:
      ((void (__fastcall *)(UICommonButtonColor_o *, _BOOL8, const MethodInfo *))klass->vtable._9_OnHover.methodPtr)(
        v8,
        v7,
        klass->vtable._9_OnHover.method);
      return;
    }
    if ( !isSelected )
    {
      if ( !v5->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v5);
      if ( UICamera__get_touchCount(0) <= 1 )
      {
        klass = this->klass;
        v8 = this;
        v7 = 0;
        goto LABEL_9;
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
  UICommonButtonColor_c *v7; // x0
  struct UICommonButtonColor_StaticFields *v8; // x8
  struct UnityEngine_Color_o *p_specifyDisabledColor; // x21
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
  struct UICommonButtonColor_StaticFields *static_fields; // x8
  float g; // s10
  float a; // s8
  float b; // s9
  float v26; // s1
  float v27; // s1
  float v28; // s1
  struct UnityEngine_Color_o *v29; // x10
  UICommonButtonColor_c *v30; // x0
  struct UICommonButtonColor_StaticFields *v31; // x8
  float v32; // s10
  float v33; // s8
  float v34; // s9
  float v35; // s1
  float v36; // s1
  float v37; // s1
  struct UnityEngine_Color_o *v38; // x10
  float r; // s8
  float v40; // s9
  float v41; // s10
  float v42; // s11
  struct UnityEngine_GameObject_array *tweenTargets; // x8
  __int64 v44; // x21
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v46; // x24
  UnityEngine_Object_o *v47; // x20
  struct UnityEngine_GameObject_array *v48; // x8
  UICommonButtonColor_c *v49; // x0
  UnityEngine_GameObject_o *v50; // x20
  TweenColor_o *v51; // x20
  __int64 v52; // x21
  unsigned __int64 v53; // x9
  unsigned __int64 v54; // x24
  UnityEngine_Object_o *v55; // x20
  struct UnityEngine_GameObject_array *v56; // x8
  UICommonButtonColor_c *v57; // x0
  UnityEngine_GameObject_o *v58; // x20
  UnityEngine_Color_o v59; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v60; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4CB7B0E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UICommonButtonColor_TypeInfo);
    byte_4CB7B0E = 1;
  }
  if ( !this->fields.tweenTargets )
    return;
  mState = this->fields.mState;
  switch ( mState )
  {
    case 3:
      v21 = UICommonButtonColor_TypeInfo;
      if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
        v21 = UICommonButtonColor_TypeInfo;
      }
      static_fields = v21->static_fields;
      p_specifyDisabledColor = &this->fields.specifyDisabledColor;
      g = static_fields->disabledColor.fields.g;
      b = static_fields->disabledColor.fields.b;
      a = static_fields->disabledColor.fields.a;
      v13 = (void *)System_Single__Equals_65560076(
                      static_fields->disabledColor.fields.r,
                      v3,
                      (const MethodInfo *)&this->fields.specifyDisabledColor);
      if ( ((unsigned __int8)v13 & 1) != 0
        && (v13 = (void *)System_Single__Equals_65560076(
                            g,
                            v26,
                            (const MethodInfo *)&this->fields.specifyDisabledColor.fields.g),
            ((unsigned __int8)v13 & 1) != 0)
        && (v13 = (void *)System_Single__Equals_65560076(
                            b,
                            v27,
                            (const MethodInfo *)&this->fields.specifyDisabledColor.fields.b),
            ((unsigned __int8)v13 & 1) != 0)
        && (v13 = (void *)System_Single__Equals_65560076(
                            a,
                            v28,
                            (const MethodInfo *)&this->fields.specifyDisabledColor.fields.a),
            ((unsigned __int8)v13 & 1) != 0) )
      {
        v13 = UICommonButtonColor_TypeInfo;
        if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
          v13 = UICommonButtonColor_TypeInfo;
        }
        v29 = (struct UnityEngine_Color_o *)*((_QWORD *)v13 + 23);
        p_specifyDisabledColor = v29 + 3;
        p_g = &v29[3].fields.g;
        p_b = &v29[3].fields.b;
        p_a = &v29[3].fields.a;
      }
      else
      {
        p_g = &this->fields.specifyDisabledColor.fields.g;
        p_b = &this->fields.specifyDisabledColor.fields.b;
        p_a = &this->fields.specifyDisabledColor.fields.a;
      }
      break;
    case 2:
      v30 = UICommonButtonColor_TypeInfo;
      if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
        v30 = UICommonButtonColor_TypeInfo;
      }
      v31 = v30->static_fields;
      p_specifyDisabledColor = &this->fields.specifyPressedColor;
      v32 = v31->pressed.fields.g;
      v34 = v31->pressed.fields.b;
      v33 = v31->pressed.fields.a;
      v13 = (void *)System_Single__Equals_65560076(
                      v31->pressed.fields.r,
                      v3,
                      (const MethodInfo *)&this->fields.specifyPressedColor);
      if ( ((unsigned __int8)v13 & 1) != 0
        && (v13 = (void *)System_Single__Equals_65560076(
                            v32,
                            v35,
                            (const MethodInfo *)&this->fields.specifyPressedColor.fields.g),
            ((unsigned __int8)v13 & 1) != 0)
        && (v13 = (void *)System_Single__Equals_65560076(
                            v34,
                            v36,
                            (const MethodInfo *)&this->fields.specifyPressedColor.fields.b),
            ((unsigned __int8)v13 & 1) != 0)
        && (v13 = (void *)System_Single__Equals_65560076(
                            v33,
                            v37,
                            (const MethodInfo *)&this->fields.specifyPressedColor.fields.a),
            ((unsigned __int8)v13 & 1) != 0) )
      {
        v13 = UICommonButtonColor_TypeInfo;
        if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
          v13 = UICommonButtonColor_TypeInfo;
        }
        v38 = (struct UnityEngine_Color_o *)*((_QWORD *)v13 + 23);
        p_specifyDisabledColor = v38 + 2;
        p_g = &v38[2].fields.g;
        p_b = &v38[2].fields.b;
        p_a = &v38[2].fields.a;
      }
      else
      {
        p_g = &this->fields.specifyPressedColor.fields.g;
        p_b = &this->fields.specifyPressedColor.fields.b;
        p_a = &this->fields.specifyPressedColor.fields.a;
      }
      break;
    case 1:
      v7 = UICommonButtonColor_TypeInfo;
      if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
        v7 = UICommonButtonColor_TypeInfo;
      }
      v8 = v7->static_fields;
      p_specifyDisabledColor = &this->fields.specifyHoverColor;
      v10 = v8->hover.fields.g;
      v12 = v8->hover.fields.b;
      v11 = v8->hover.fields.a;
      v13 = (void *)System_Single__Equals_65560076(
                      v8->hover.fields.r,
                      v3,
                      (const MethodInfo *)&this->fields.specifyHoverColor);
      if ( ((unsigned __int8)v13 & 1) != 0
        && (v13 = (void *)System_Single__Equals_65560076(
                            v10,
                            v14,
                            (const MethodInfo *)&this->fields.specifyHoverColor.fields.g),
            ((unsigned __int8)v13 & 1) != 0)
        && (v13 = (void *)System_Single__Equals_65560076(
                            v12,
                            v15,
                            (const MethodInfo *)&this->fields.specifyHoverColor.fields.b),
            ((unsigned __int8)v13 & 1) != 0)
        && (v13 = (void *)System_Single__Equals_65560076(
                            v11,
                            v16,
                            (const MethodInfo *)&this->fields.specifyHoverColor.fields.a),
            ((unsigned __int8)v13 & 1) != 0) )
      {
        v13 = UICommonButtonColor_TypeInfo;
        if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
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
      if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
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
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
            v49 = UICommonButtonColor_TypeInfo;
          }
          v59.fields.r = r;
          v59.fields.g = v40;
          v59.fields.b = v41;
          v59.fields.a = v42;
          v51 = TweenColor__Begin(v50, v49->static_fields->duration, v59, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v13 = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v51, 0, 0);
          if ( ((unsigned __int8)v13 & 1) != 0 )
          {
            if ( !v51 )
              break;
            TweenColor__set_value(v51, v51->fields.to, 0);
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v51, 0, 0);
          }
        }
        tweenTargets = this->fields.tweenTargets;
        ++v44;
      }
      while ( tweenTargets );
    }
LABEL_72:
    sub_1C6BC60(v13, instant);
  }
  if ( !tweenTargets )
    goto LABEL_72;
  v52 = 4;
  while ( 1 )
  {
    v53 = LODWORD(tweenTargets->max_length);
    v54 = v52 - 4;
    if ( v52 - 4 >= (int)v53 )
      break;
    if ( v54 >= v53 )
      goto LABEL_74;
    v55 = (UnityEngine_Object_o *)*((_QWORD *)&tweenTargets->obj.klass + v52);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = (void *)UnityEngine_Object__op_Inequality(v55, 0, 0);
    if ( ((unsigned __int8)v13 & 1) != 0 )
    {
      v56 = this->fields.tweenTargets;
      if ( !v56 )
        goto LABEL_72;
      if ( v54 >= LODWORD(v56->max_length) )
LABEL_74:
        sub_1C6BC68(v13);
      v57 = UICommonButtonColor_TypeInfo;
      v58 = (UnityEngine_GameObject_o *)*((_QWORD *)&v56->obj.klass + v52);
      if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
        v57 = UICommonButtonColor_TypeInfo;
      }
      v60.fields.r = r;
      v60.fields.g = v40;
      v60.fields.b = v41;
      v60.fields.a = v42;
      v13 = TweenColor__Begin(v58, v57->static_fields->duration, v60, 0);
    }
    tweenTargets = this->fields.tweenTargets;
    ++v52;
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
  __int64 v8; // x1
  struct UnityEngine_GameObject_array *v9; // x8
  Il2CppObject *Component_object; // x20
  float result; // s0

  v2 = this;
  if ( (byte_4CB7B08 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this = (UICommonButtonColor_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B08 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (UICommonButtonColor_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v2->fields.tweenTargets;
        if ( !v9 )
          goto LABEL_17;
        if ( v6 >= LODWORD(v9->max_length) )
LABEL_21:
          sub_1C6BC68(this);
        this = (UICommonButtonColor_o *)*((_QWORD *)&v9->obj.klass + v4);
        if ( !this )
          goto LABEL_17;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (UICommonButtonColor_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0,
                                          0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_object )
LABEL_17:
            sub_1C6BC60(this, v8);
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