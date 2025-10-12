void UICommonButton___ctor(UICommonButton_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4C391CB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_1C32C20(&UICommonButtonColor_TypeInfo);
    byte_4C391CB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onClick = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClick, (int32_t)v3, v4, v5);
  if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
  UICommonButtonColor___ctor((UICommonButtonColor_o *)this, v6);
}


void UICommonButton__OnClick(UICommonButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4C391C6 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UICommonButton_OnClick__);
    sub_1C32C20(&UICommonButton_TypeInfo);
    byte_4C391C6 = 1;
  }
  if ( !this->fields.isPassive || UICommonButtonColor__get_alpha((UICommonButtonColor_o *)this, method) >= 1.0 )
  {
    current = (UnityEngine_Object_o *)UICommonButton_TypeInfo->static_fields->current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(current, 0, 0) )
    {
      if ( (((__int64 (__fastcall *)(UICommonButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
              this,
              this->klass->vtable._4_get_isEnabled.method)
          & 1) != 0
        || this->fields.isAlwaysValidOnClick )
      {
        UICommonButton_TypeInfo->static_fields->current = this;
        sub_1C32BC4((CGThumbnailListItem_o *)UICommonButton_TypeInfo->static_fields, (int32_t)this, v4, v5);
        onClick = this->fields.onClick;
        if ( !EventDelegate_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
        EventDelegate__Execute_49177388(onClick, 0);
        UICommonButton_TypeInfo->static_fields->current = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)UICommonButton_TypeInfo->static_fields, 0, v7, v8);
      }
      else
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !gameObject )
          sub_1C32E7C(0);
        if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
        {
          v10 = Method_UICommonButton_OnClick__;
          if ( (*((_BYTE *)Method_UICommonButton_OnClick__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1C32C38(Method_UICommonButton_OnClick__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C32C04(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0);
        }
      }
    }
  }
}


void UICommonButton__OnDragOut(UICommonButton_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UICamera_c *v4; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *pressed; // x20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4C391C5 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    sub_1C32C20(&UICommonButton_TypeInfo);
    byte_4C391C5 = 1;
  }
  if ( (!this->fields.isPassive || UICommonButtonColor__get_alpha((UICommonButtonColor_o *)this, method) >= 1.0)
    && (((__int64 (__fastcall *)(UICommonButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    if ( UICommonButton_TypeInfo->static_fields->dragHighlight )
      goto LABEL_13;
    v4 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v4 = UICamera_TypeInfo;
    }
    currentTouch = v4->static_fields->currentTouch;
    if ( !currentTouch )
      sub_1C32E7C(v4);
    pressed = (UnityEngine_Object_o *)currentTouch->fields.pressed;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(pressed, gameObject, 0) )
LABEL_13:
      UICommonButtonColor__OnDragOut((UICommonButtonColor_o *)this, v3);
  }
}


void UICommonButton__OnDragOver(UICommonButton_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UICamera_c *v4; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *pressed; // x20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4C391C4 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    sub_1C32C20(&UICommonButton_TypeInfo);
    byte_4C391C4 = 1;
  }
  if ( (!this->fields.isPassive || UICommonButtonColor__get_alpha((UICommonButtonColor_o *)this, method) >= 1.0)
    && (((__int64 (__fastcall *)(UICommonButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    if ( UICommonButton_TypeInfo->static_fields->dragHighlight )
      goto LABEL_13;
    v4 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v4 = UICamera_TypeInfo;
    }
    currentTouch = v4->static_fields->currentTouch;
    if ( !currentTouch )
      sub_1C32E7C(v4);
    pressed = (UnityEngine_Object_o *)currentTouch->fields.pressed;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(pressed, gameObject, 0) )
LABEL_13:
      UICommonButtonColor__OnDragOver((UICommonButtonColor_o *)this, v3);
  }
}


void UICommonButton__OnEnable(UICommonButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *hoveredObject; // x20
  UICommonButton_c *klass; // x8
  __int64 v5; // x1
  __int64 v6; // x2
  UICommonButton_o *v7; // x0
  int32_t currentScheme; // w21
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *gameObject; // x21
  bool v11; // w0

  if ( (byte_4C391C2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C391C2 = 1;
  }
  if ( (((__int64 (__fastcall *)(UICommonButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) == 0 )
  {
    klass = this->klass;
    v5 = 3;
    v6 = 1;
    v7 = this;
    goto LABEL_9;
  }
  if ( !this->fields.mInitDone )
    return;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    currentScheme = UICamera_TypeInfo->static_fields->currentScheme;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    if ( currentScheme == 2 )
      goto LABEL_7;
    goto LABEL_14;
  }
  if ( UICamera_TypeInfo->static_fields->currentScheme != 2 )
  {
LABEL_14:
    static_fields = UICamera_TypeInfo->static_fields;
    if ( !static_fields->currentScheme )
    {
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        static_fields = UICamera_TypeInfo->static_fields;
      }
      hoveredObject = (UnityEngine_Object_o *)static_fields->hoveredObject;
      goto LABEL_19;
    }
    klass = this->klass;
    v7 = this;
    v5 = 0;
    v6 = 0;
LABEL_9:
    ((void (__fastcall *)(UICommonButton_o *, __int64, __int64, const MethodInfo *))klass->vtable._14_SetState.methodPtr)(
      v7,
      v5,
      v6,
      klass->vtable._14_SetState.method);
    return;
  }
LABEL_7:
  hoveredObject = (UnityEngine_Object_o *)UICamera__get_selectedObject(0);
LABEL_19:
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(hoveredObject, gameObject, 0);
  ((void (__fastcall *)(UICommonButton_o *, bool, const MethodInfo *))this->klass->vtable._9_OnHover.methodPtr)(
    this,
    v11,
    this->klass->vtable._9_OnHover.method);
}


// local variable allocation has failed, the output may be wrong!
void UICommonButton__OnHover(UICommonButton_o *this, bool isOver, const MethodInfo *method)
{
  if ( (!this->fields.isPassive
     || UICommonButtonColor__get_alpha((UICommonButtonColor_o *)this, (const MethodInfo *)isOver) >= 1.0)
    && (((__int64 (__fastcall *)(UICommonButton_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method,
          method)
      & 1) != 0 )
  {
    if ( !this->fields.mInitDone )
      ((void (__fastcall *)(UICommonButton_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
        this,
        this->klass->vtable._6_OnInit.method);
    if ( this->fields.tweenTargets )
      ((void (__fastcall *)(UICommonButton_o *, bool, _QWORD, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
        this,
        isOver,
        0,
        this->klass->vtable._14_SetState.method);
  }
}


// attributes: thunk
void UICommonButton__OnInit(UICommonButton_o *this, const MethodInfo *method)
{
  UICommonButtonColor__OnInit((UICommonButtonColor_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
void UICommonButton__OnPress(UICommonButton_o *this, bool isPressed, const MethodInfo *method)
{
  UICamera_c *v5; // x0
  UICommonButton_c *klass; // x8
  __int64 v7; // x1
  UICamera_c *v8; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *current; // x20
  UnityEngine_Object_o *gameObject; // x21
  UICamera_c *v12; // x0
  struct UICamera_StaticFields *static_fields; // x8
  int32_t currentScheme; // w9
  Il2CppMethodPointer methodPtr; // x4
  const MethodInfo *v16; // x3
  UICommonButton_o *v17; // x0
  UnityEngine_Object_o *hoveredObject; // x20
  UnityEngine_Object_o *v19; // x21

  if ( (byte_4C391C3 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C391C3 = 1;
  }
  if ( (!this->fields.isPassive
     || UICommonButtonColor__get_alpha((UICommonButtonColor_o *)this, (const MethodInfo *)isPressed) >= 1.0)
    && (((__int64 (__fastcall *)(UICommonButton_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
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
        ((void (__fastcall *)(UICommonButton_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
          this,
          this->klass->vtable._6_OnInit.method);
      if ( this->fields.tweenTargets )
      {
        if ( isPressed )
        {
          klass = this->klass;
          v7 = 2;
        }
        else
        {
          v8 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v8 = UICamera_TypeInfo;
          }
          currentTouch = v8->static_fields->currentTouch;
          if ( !currentTouch )
            sub_1C32E7C(v8);
          current = (UnityEngine_Object_o *)currentTouch->fields.current;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(current, gameObject, 0) )
            goto LABEL_34;
          v12 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v12 = UICamera_TypeInfo;
          }
          static_fields = v12->static_fields;
          currentScheme = static_fields->currentScheme;
          if ( currentScheme != 2 )
          {
            if ( !v12->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v12);
              v12 = UICamera_TypeInfo;
              static_fields = UICamera_TypeInfo->static_fields;
              currentScheme = static_fields->currentScheme;
            }
            if ( currentScheme )
              goto LABEL_34;
            if ( !v12->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v12);
              static_fields = UICamera_TypeInfo->static_fields;
            }
            hoveredObject = (UnityEngine_Object_o *)static_fields->hoveredObject;
            v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(hoveredObject, v19, 0) )
            {
LABEL_34:
              v17 = this;
              v7 = 0;
              methodPtr = this->klass->vtable._14_SetState.methodPtr;
              v16 = this->klass->vtable._14_SetState.method;
              goto LABEL_35;
            }
          }
          klass = this->klass;
          v7 = 1;
        }
        methodPtr = klass->vtable._14_SetState.methodPtr;
        v16 = klass->vtable._14_SetState.method;
        v17 = this;
LABEL_35:
        ((void (__fastcall *)(UICommonButton_o *, __int64, _QWORD, const MethodInfo *))methodPtr)(v17, v7, 0, v16);
      }
    }
  }
}


void UICommonButton__SetAlwaysValidOnClick(UICommonButton_o *this, bool isEnable, const MethodInfo *method)
{
  this->fields.isAlwaysValidOnClick = isEnable;
}


void UICommonButton__SetButtonEnable(UICommonButton_o *this, bool isEnable, bool immediate, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x20

  if ( (byte_4C391C8 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C391C8 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v8 )
  {
    if ( !Component_object )
      goto LABEL_18;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 1, 0);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
  if ( !this )
LABEL_18:
    sub_1C32E7C(v8);
  if ( isEnable )
    v9 = 0;
  else
    v9 = 3;
  ((void (__fastcall *)(UICommonButton_o *, __int64, bool, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
    this,
    v9,
    immediate,
    this->klass->vtable._14_SetState.method);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
  if ( v8 )
  {
    if ( v10 )
    {
      UITouchPress__set_IsEnabled((UITouchPress_o *)v10, isEnable, 0);
      return;
    }
    goto LABEL_18;
  }
}


void UICommonButton__SetButtonEnableAndKeepState(
        UICommonButton_o *this,
        bool isEnable,
        bool immediate,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v10; // x20

  if ( (byte_4C391CA & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C391CA = 1;
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0);
  if ( !this )
    goto LABEL_18;
  if ( isEnable )
    v8 = 0;
  else
    v8 = 3;
  ((void (__fastcall *)(UICommonButton_o *, __int64, bool, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
    this,
    v8,
    immediate,
    this->klass->vtable._14_SetState.method);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v7 )
  {
    if ( !Component_object )
      goto LABEL_18;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0);
  }
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
  if ( v7 )
  {
    if ( v10 )
    {
      UITouchPress__set_IsEnabled((UITouchPress_o *)v10, isEnable, 0);
      return;
    }
LABEL_18:
    sub_1C32E7C(v7);
  }
}


void UICommonButton__SetButtonEnableWithCollider(UICommonButton_o *this, bool isEnable, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x21
  _BOOL8 v6; // x0
  Il2CppObject *v7; // x20

  if ( (byte_4C391C9 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C391C9 = 1;
  }
  ((void (__fastcall *)(UICommonButton_o *, bool, const MethodInfo *))this->klass->vtable._5_set_isEnabled.methodPtr)(
    this,
    isEnable,
    this->klass->vtable._5_set_isEnabled.method);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
  {
    if ( !Component_object )
      goto LABEL_14;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0);
  }
  v7 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0);
  if ( v6 )
  {
    if ( v7 )
    {
      UITouchPress__set_IsEnabled((UITouchPress_o *)v7, isEnable, 0);
      return;
    }
LABEL_14:
    sub_1C32E7C(v6);
  }
}


void UICommonButton__SetColliderEnable(UICommonButton_o *this, bool isEnable, bool immediate, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x21
  _BOOL8 v8; // x0
  Il2CppObject *v9; // x20

  if ( (byte_4C391C7 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C391C7 = 1;
  }
  ((void (__fastcall *)(UICommonButton_o *, _QWORD, bool, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
    this,
    0,
    immediate,
    this->klass->vtable._14_SetState.method);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v8 )
  {
    if ( !Component_object )
      goto LABEL_14;
    UITouchPress__set_IsEnabled((UITouchPress_o *)Component_object, isEnable, 0);
  }
  v9 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
  if ( v8 )
  {
    if ( v9 )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v9, isEnable, 0);
      return;
    }
LABEL_14:
    sub_1C32E7C(v8);
  }
}


void UICommonButton__SetEnable(UICommonButton_o *this, bool value, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( !this )
    sub_1C32E7C(0);
  if ( value )
    v3 = 0;
  else
    v3 = 3;
  ((void (__fastcall *)(UICommonButton_o *, __int64, __int64, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
    this,
    v3,
    1,
    this->klass->vtable._14_SetState.method);
}


void UICommonButton__SetState(UICommonButton_o *this, int32_t state, bool immediate, const MethodInfo *method)
{
  UICommonButtonColor__SetState((UICommonButtonColor_o *)this, state, immediate, method);
}


bool UICommonButton__get_isEnabled(UICommonButton_o *this, const MethodInfo *method)
{
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) && this->fields.mState != 3;
}


void UICommonButton__set_isEnabled(UICommonButton_o *this, bool value, const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (((__int64 (__fastcall *)(UICommonButton_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method,
          method)
      & 1) != value )
  {
    if ( value )
      v5 = 0;
    else
      v5 = 3;
    ((void (__fastcall *)(UICommonButton_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
      this,
      v5,
      0,
      this->klass->vtable._14_SetState.method);
  }
}