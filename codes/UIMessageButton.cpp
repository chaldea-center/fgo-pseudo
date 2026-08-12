void UIMessageButton___ctor(UIMessageButton_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59721A9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_59721A9 = 1;
  }
  v3 = System_Collections_Generic_List_EventDelegate__TypeInfo;
  this->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_E9D170;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onClick = (struct System_Collections_Generic_List_EventDelegate__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClick, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.hover = (struct UnityEngine_Color_o)xmmword_E9D930;
  this->fields.pressed = (struct UnityEngine_Color_o)xmmword_E9D210;
  this->fields.normalColor = _Q0;
  this->fields.duration = 0.2;
  UIWidgetContainer___ctor((UIWidgetContainer_o *)this, 0);
}


void UIMessageButton__Fadeout(UIMessageButton_o *this, float d, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x20
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v8; // x19
  int32_t childCount; // w0
  int32_t v10; // w20
  int32_t v11; // w21
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_59721A8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59721A8 = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Implicit(tweenTarget, 0) )
  {
    if ( !this->fields.mStarted )
    {
      this->fields.mStarted = 1;
      UIMessageButtonColor__Init((UIMessageButtonColor_o *)this, v6);
    }
    transform = this->fields.tweenTarget;
    if ( !transform )
      goto LABEL_15;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_15;
    v8 = (UnityEngine_Transform_o *)transform;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0);
    if ( childCount >= 1 )
    {
      v10 = childCount;
      v11 = 0;
      while ( 1 )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(v8, v11, 0);
        if ( !transform )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        TweenAlpha__Begin(gameObject, d, 0.0, 0);
        if ( v10 == ++v11 )
          return;
      }
LABEL_15:
      sub_2213CDC(transform, v6);
    }
  }
}


void UIMessageButton__OnClick(UIMessageButton_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x1
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59721A6 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UIMessageButton_TypeInfo);
    byte_59721A6 = 1;
  }
  if ( (((__int64 (__fastcall *)(UIMessageButton_o *, const MethodInfo *))this->klass->vtable._11_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._11_get_isEnabled.method)
      & 1) != 0 )
  {
    UIMessageButton_TypeInfo->static_fields->current = this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIMessageButton_TypeInfo->static_fields,
      (int32_t)this,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8);
    onClick = this->fields.onClick;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v9);
    EventDelegate__Execute_56285144(onClick, 0);
    UIMessageButton_TypeInfo->static_fields->current = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIMessageButton_TypeInfo->static_fields,
      0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
}


void UIMessageButton__OnDragOut(UIMessageButton_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UICamera_c *v4; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *pressed; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_59721A5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_59721A5 = 1;
  }
  if ( (((__int64 (__fastcall *)(UIMessageButton_o *, const MethodInfo *))this->klass->vtable._11_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._11_get_isEnabled.method)
      & 1) != 0 )
  {
    if ( this->fields.dragHighlight )
      goto LABEL_11;
    v4 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
      v4 = UICamera_TypeInfo;
    }
    currentTouch = v4->static_fields->currentTouch;
    if ( !currentTouch )
      sub_2213CDC(v4, v3);
    pressed = (UnityEngine_Object_o *)currentTouch->fields.pressed;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Equality(pressed, gameObject, 0) )
LABEL_11:
      UIMessageButtonColor__OnDragOut((UIMessageButtonColor_o *)this, v3);
  }
}


void UIMessageButton__OnDragOver(UIMessageButton_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UICamera_c *v4; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *pressed; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_59721A4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_59721A4 = 1;
  }
  if ( (((__int64 (__fastcall *)(UIMessageButton_o *, const MethodInfo *))this->klass->vtable._11_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._11_get_isEnabled.method)
      & 1) != 0 )
  {
    if ( this->fields.dragHighlight )
      goto LABEL_11;
    v4 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
      v4 = UICamera_TypeInfo;
    }
    currentTouch = v4->static_fields->currentTouch;
    if ( !currentTouch )
      sub_2213CDC(v4, v3);
    pressed = (UnityEngine_Object_o *)currentTouch->fields.pressed;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Equality(pressed, gameObject, 0) )
LABEL_11:
      UIMessageButtonColor__OnDragOver((UIMessageButtonColor_o *)this, v3);
  }
}


void UIMessageButton__OnEnable(UIMessageButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x3
  UICamera_c *v5; // x0
  struct UICamera_StaticFields *static_fields; // x8
  int v7; // w10
  int32_t currentScheme; // w9
  UnityEngine_Object_o *hoveredObject; // x20
  UIMessageButton_o *v10; // x0
  bool v11; // w1
  bool v12; // w2
  __int64 v13; // x1
  UnityEngine_Object_o *gameObject; // x21
  bool v15; // w0

  if ( (byte_59721A3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_59721A3 = 1;
  }
  if ( (((__int64 (__fastcall *)(UIMessageButton_o *, const MethodInfo *))this->klass->vtable._11_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._11_get_isEnabled.method)
      & 1) == 0 )
  {
    v10 = this;
    v11 = 0;
    v12 = 1;
LABEL_12:
    UIMessageButton__UpdateColor(v10, v11, v12, v4);
    return;
  }
  if ( !this->fields.mStarted )
    return;
  v5 = UICamera_TypeInfo;
  this->fields.mColor = this->fields.normalColor;
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, v3);
    v5 = UICamera_TypeInfo;
  }
  static_fields = v5->static_fields;
  v7 = *(&v5->_2.cctor_finished + 1);
  currentScheme = static_fields->currentScheme;
  if ( currentScheme != 2 )
  {
    if ( v7 )
    {
      if ( currentScheme )
      {
LABEL_16:
        v10 = this;
        v11 = 1;
        v12 = 0;
        goto LABEL_12;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(v5, v3);
      v5 = UICamera_TypeInfo;
      static_fields = UICamera_TypeInfo->static_fields;
      if ( static_fields->currentScheme )
        goto LABEL_16;
    }
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v3);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    hoveredObject = (UnityEngine_Object_o *)static_fields->hoveredObject;
    goto LABEL_21;
  }
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(v5, v3);
  hoveredObject = (UnityEngine_Object_o *)UICamera__get_selectedObject(0);
LABEL_21:
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v15 = UnityEngine_Object__op_Equality(hoveredObject, gameObject, 0);
  ((void (__fastcall *)(UIMessageButton_o *, bool, const MethodInfo *))this->klass->vtable._7_OnHover.methodPtr)(
    this,
    v15,
    this->klass->vtable._7_OnHover.method);
}


void UIMessageButton__OnHover(UIMessageButton_o *this, bool isOver, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (((__int64 (__fastcall *)(UIMessageButton_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._11_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._11_get_isEnabled.method,
          method)
      & 1) != 0 )
    UIMessageButtonColor__OnHover((UIMessageButtonColor_o *)this, isOver, v5);
}


void UIMessageButton__OnPress(UIMessageButton_o *this, bool isPressed, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (((__int64 (__fastcall *)(UIMessageButton_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._11_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._11_get_isEnabled.method,
          method)
      & 1) != 0 )
    UIMessageButtonColor__OnPress((UIMessageButtonColor_o *)this, isPressed, v5);
}


void UIMessageButton__OnSelect(UIMessageButton_o *this, bool isSelected, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (((__int64 (__fastcall *)(UIMessageButton_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._11_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._11_get_isEnabled.method,
          method)
      & 1) != 0 )
    UIMessageButtonColor__OnSelect((UIMessageButtonColor_o *)this, isSelected, v5);
}


// local variable allocation has failed, the output may be wrong!
void UIMessageButton__UpdateColor(
        UIMessageButton_o *this,
        bool shouldBeEnabled,
        bool immediate,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x22
  const MethodInfo *v8; // x1
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v14; // x21
  int32_t childCount; // w0
  int32_t v16; // w22
  int32_t v17; // w23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x24
  UnityEngine_Color_o defaultColor; // 0:kr00_16.16
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_59721A7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59721A7 = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shouldBeEnabled);
  if ( !UnityEngine_Object__op_Implicit(tweenTarget, 0) )
    return;
  if ( this->fields.mStarted )
  {
    if ( shouldBeEnabled )
    {
LABEL_8:
      defaultColor = UIMessageButtonColor__get_defaultColor((UIMessageButtonColor_o *)this, v8);
      r = defaultColor.fields.r;
      g = defaultColor.fields.g;
      b = defaultColor.fields.b;
      a = defaultColor.fields.a;
      goto LABEL_11;
    }
  }
  else
  {
    this->fields.mStarted = 1;
    UIMessageButtonColor__Init((UIMessageButtonColor_o *)this, v8);
    if ( shouldBeEnabled )
      goto LABEL_8;
  }
  r = this->fields.disabledColor.fields.r;
  g = this->fields.disabledColor.fields.g;
  b = this->fields.disabledColor.fields.b;
  a = this->fields.disabledColor.fields.a;
LABEL_11:
  transform = this->fields.tweenTarget;
  if ( !transform )
    goto LABEL_24;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_24;
  v14 = (UnityEngine_Transform_o *)transform;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0);
  if ( childCount >= 1 )
  {
    v16 = childCount;
    v17 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(v14, v17, 0);
      if ( !transform )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      v23.fields.r = r;
      v23.fields.g = g;
      v23.fields.b = b;
      v23.fields.a = a;
      v20 = (UnityEngine_Object_o *)TweenColor__Begin(gameObject, this->fields.duration, v23, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v20, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 && immediate )
      {
        if ( !v20 )
          break;
        v22.fields.r = r;
        v22.fields.g = g;
        v22.fields.b = b;
        v22.fields.a = a;
        TweenColor__set_value((TweenColor_o *)v20, v22, 0);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v20, 0, 0);
      }
      if ( v16 == ++v17 )
        return;
    }
LABEL_24:
    sub_2213CDC(transform, v8);
  }
}


bool UIMessageButton__get_isEnabled(UIMessageButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_59721A1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59721A1 = 1;
  }
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    return 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0);
  if ( !v5 )
    return 0;
  if ( !Component_object )
    sub_2213CDC(v5, v6);
  return UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)Component_object, 0);
}


void UIMessageButton__set_isEnabled(UIMessageButton_o *this, bool value, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_59721A2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59721A2 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v7 )
  {
    if ( !Component_object )
      sub_2213CDC(v7, v8);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, value, 0);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, value, 0);
  }
  UIMessageButton__UpdateColor(this, value, 0, v9);
}