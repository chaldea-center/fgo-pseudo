void UIKeyBinding___ctor(UIKeyBinding_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool UIKeyBinding__IsModifierActive(UIKeyBinding_o *this, const MethodInfo *method)
{
  int32_t modifier; // w8
  bool result; // w0
  int32_t v4; // w0

  modifier = this->fields.modifier;
  result = 1;
  switch ( modifier )
  {
    case 0:
      return result;
    case 1:
      if ( UnityEngine_Input__GetKey(304, 0) )
        return 1;
      v4 = 303;
      return UnityEngine_Input__GetKey(v4, 0);
    case 2:
      if ( UnityEngine_Input__GetKey(306, 0) )
        return 1;
      v4 = 305;
      break;
    case 3:
      if ( UnityEngine_Input__GetKey(308, 0) )
        return 1;
      v4 = 307;
      break;
    default:
      return 0;
  }
  return UnityEngine_Input__GetKey(v4, 0);
}


void UIKeyBinding__OnBindingClick(UIKeyBinding_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4C5B3BC & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&StringLiteral_9838/*"OnClick"*/);
    byte_4C5B3BC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__Notify(gameObject, (System_String_o *)StringLiteral_9838/*"OnClick"*/, 0, 0);
}


void UIKeyBinding__OnBindingPress(UIKeyBinding_o *this, bool pressed, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  Il2CppObject *v12; // x20
  bool v13[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C5B3BB & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&StringLiteral_9945/*"OnPress"*/);
    byte_4C5B3BB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v13[0] = pressed;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v13, v6, v7, v8, v9, v10, v11);
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__Notify(gameObject, (System_String_o *)StringLiteral_9945/*"OnPress"*/, v12, 0);
}


void UIKeyBinding__OnSubmit(UIKeyBinding_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0

  if ( (byte_4C5B3B9 & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B3B9 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  if ( v3->static_fields->currentKey == this->fields.keyCode
    && (((__int64 (__fastcall *)(UIKeyBinding_o *, const MethodInfo *))this->klass->vtable._6_IsModifierActive.methodPtr)(
          this,
          this->klass->vtable._6_IsModifierActive.method)
      & 1) != 0 )
  {
    this->fields.mIgnoreUp = 1;
  }
}


void UIKeyBinding__Start(UIKeyBinding_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_object; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v7; // x21

  if ( (byte_4C5B3B8 & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B3B8 = 1;
  }
  Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this->fields.mIsInput = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  v4 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( v4 )
  {
    if ( !Component_object )
      sub_1C3E7C0(v4, v5);
    monitor = (System_Collections_Generic_List_EventDelegate__o *)Component_object[5].monitor;
    v7 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v7, (Il2CppObject *)this, (intptr_t)this->klass->vtable._5_OnSubmit.method, 0);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Add(monitor, v7, 0);
  }
}


void UIKeyBinding__Update(UIKeyBinding_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  bool KeyDown; // w21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  _BOOL4 KeyUp; // w20
  int32_t action; // w8
  UICamera_c *v9; // x0
  struct UICamera_StaticFields *static_fields; // x0
  struct UICamera_MouseOrTouch_o *controller; // x1
  struct UICamera_StaticFields *v12; // x8
  struct UICamera_MouseOrTouch_o *currentTouch; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UICamera_c *v20; // x0
  UICamera_c *v21; // x0
  UnityEngine_GameObject_o *v22; // x21
  UnityEngine_GameObject_o *v23; // x21

  if ( (byte_4C5B3BA & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B3BA = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  if ( !v3->static_fields->inputHasFocus
    && this->fields.keyCode
    && (((__int64 (__fastcall *)(UIKeyBinding_o *, const MethodInfo *))this->klass->vtable._6_IsModifierActive.methodPtr)(
          this,
          this->klass->vtable._6_IsModifierActive.method)
      & 1) != 0 )
  {
    KeyDown = UnityEngine_Input__GetKeyDown(this->fields.keyCode, 0);
    KeyUp = UnityEngine_Input__GetKeyUp(this->fields.keyCode, 0);
    if ( KeyDown )
      this->fields.mPress = 1;
    action = this->fields.action;
    if ( (action | 2) == 2 )
    {
      v9 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v9 = UICamera_TypeInfo;
      }
      static_fields = v9->static_fields;
      controller = static_fields->controller;
      static_fields->currentTouch = controller;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->currentTouch, (int32_t)controller, v5, v6);
      v12 = UICamera_TypeInfo->static_fields;
      currentTouch = v12->currentTouch;
      v12->currentScheme = 0;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !currentTouch )
        goto LABEL_44;
      currentTouch->fields.current = gameObject;
      sub_1C3E508((CGThumbnailListItem_o *)&currentTouch->fields.current, (int32_t)gameObject, v16, v17);
      if ( KeyDown )
        ((void (__fastcall *)(UIKeyBinding_o *, __int64, const MethodInfo *))this->klass->vtable._8_OnBindingPress.methodPtr)(
          this,
          1,
          this->klass->vtable._8_OnBindingPress.method);
      if ( KeyUp && this->fields.mPress )
      {
        ((void (__fastcall *)(UIKeyBinding_o *, _QWORD, const MethodInfo *))this->klass->vtable._8_OnBindingPress.methodPtr)(
          this,
          0,
          this->klass->vtable._8_OnBindingPress.method);
        ((void (__fastcall *)(UIKeyBinding_o *, const MethodInfo *))this->klass->vtable._9_OnBindingClick.methodPtr)(
          this,
          this->klass->vtable._9_OnBindingClick.method);
      }
      v20 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v20 = UICamera_TypeInfo;
      }
      gameObject = (UnityEngine_GameObject_o *)v20->static_fields->currentTouch;
      if ( !gameObject )
LABEL_44:
        sub_1C3E7C0(gameObject, v15);
      gameObject[2].fields.m_CachedPtr = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&gameObject[2].fields, 0, v18, v19);
      action = this->fields.action;
    }
    if ( action == 1 )
    {
      if ( !KeyUp )
        return;
    }
    else if ( action != 2 || !KeyUp )
    {
LABEL_42:
      if ( KeyUp )
        this->fields.mPress = 0;
      return;
    }
    if ( this->fields.mIsInput )
    {
      if ( !this->fields.mIgnoreUp )
      {
        v21 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v21 = UICamera_TypeInfo;
        }
        if ( !v21->static_fields->inputHasFocus && this->fields.mPress )
        {
          v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !UICamera_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          UICamera__set_selectedObject(v22, 0);
        }
      }
      this->fields.mIgnoreUp = 0;
    }
    else if ( this->fields.mPress )
    {
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__set_selectedObject(v23, 0);
    }
    goto LABEL_42;
  }
}