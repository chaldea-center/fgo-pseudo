void UIKeyBinding___ctor(UIKeyBinding_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool UIKeyBinding__IsModifierActive(UIKeyBinding_o *this, const MethodInfo *method)
{
  int32_t modifier; // w8
  int32_t v3; // w0

  modifier = this->fields.modifier;
  if ( modifier <= 1 )
  {
    if ( modifier )
    {
      if ( modifier != 1 )
        return 0;
      if ( !UnityEngine_Input__GetKey(304, 0) )
      {
        v3 = 303;
        return UnityEngine_Input__GetKey(v3, 0);
      }
    }
    return 1;
  }
  if ( modifier == 2 )
  {
    if ( UnityEngine_Input__GetKey(306, 0) )
      return 1;
    v3 = 305;
  }
  else
  {
    if ( modifier != 3 )
      return 0;
    if ( UnityEngine_Input__GetKey(308, 0) )
      return 1;
    v3 = 307;
  }
  return UnityEngine_Input__GetKey(v3, 0);
}


void UIKeyBinding__OnBindingClick(UIKeyBinding_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_5975001 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_10237/*"OnClick"*/);
    byte_5975001 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
  UICamera__Notify(gameObject, (System_String_o *)StringLiteral_10237/*"OnClick"*/, 0, 0);
}


void UIKeyBinding__OnBindingPress(UIKeyBinding_o *this, bool pressed, const MethodInfo *method)
{
  bool v5; // w23
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  bool v9[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5975000 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_10348/*"OnPress"*/);
    byte_5975000 = 1;
  }
  v5 = pressed;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v9[0] = v5;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v9);
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v7);
  UICamera__Notify(gameObject, (System_String_o *)StringLiteral_10348/*"OnPress"*/, v8, 0);
}


void UIKeyBinding__OnSubmit(UIKeyBinding_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0

  if ( (byte_5974FFE & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974FFE = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
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
  __int64 v3; // x1
  UnityEngine_Object_o *Component_object; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v8; // x21
  __int64 v9; // x1

  if ( (byte_5974FFD & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FFD = 1;
  }
  Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  this->fields.mIsInput = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  v5 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( v5 )
  {
    if ( !Component_object )
      sub_2213CDC(v5, v6);
    monitor = (System_Collections_Generic_List_EventDelegate__o *)Component_object[5].monitor;
    v8 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v8, (Il2CppObject *)this, (intptr_t)this->klass->vtable._5_OnSubmit.method, 0);
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v9);
    EventDelegate__Add(monitor, v8, 0);
  }
}


void UIKeyBinding__Update(UIKeyBinding_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  bool KeyDown; // w21
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  bool KeyUp; // w20
  int32_t action; // w8
  UICamera_c *v14; // x0
  struct UICamera_StaticFields *static_fields; // x0
  struct UICamera_MouseOrTouch_o *controller; // x1
  struct UICamera_StaticFields *v17; // x8
  struct UICamera_MouseOrTouch_o *currentTouch; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  UICamera_c *v33; // x0
  UICamera_c *v34; // x0
  __int64 v35; // x1
  UnityEngine_GameObject_o *v36; // x21
  __int64 v37; // x1
  UnityEngine_GameObject_o *v38; // x21

  if ( (byte_5974FFF & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974FFF = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
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
      v14 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
        v14 = UICamera_TypeInfo;
      }
      static_fields = v14->static_fields;
      controller = static_fields->controller;
      static_fields->currentTouch = controller;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&static_fields->currentTouch,
        (int32_t)controller,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      v17 = UICamera_TypeInfo->static_fields;
      currentTouch = v17->currentTouch;
      v17->currentScheme = 0;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !currentTouch )
        goto LABEL_43;
      currentTouch->fields.current = gameObject;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&currentTouch->fields.current,
        (int32_t)gameObject,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      if ( KeyDown )
        ((void (__fastcall *)(UIKeyBinding_o *, __int64, const MethodInfo *))this->klass->vtable._8_OnBindingPress.methodPtr)(
          this,
          1,
          this->klass->vtable._8_OnBindingPress.method);
      if ( this->fields.mPress && KeyUp )
      {
        ((void (__fastcall *)(UIKeyBinding_o *, _QWORD, const MethodInfo *))this->klass->vtable._8_OnBindingPress.methodPtr)(
          this,
          0,
          this->klass->vtable._8_OnBindingPress.method);
        ((void (__fastcall *)(UIKeyBinding_o *, const MethodInfo *))this->klass->vtable._9_OnBindingClick.methodPtr)(
          this,
          this->klass->vtable._9_OnBindingClick.method);
      }
      v33 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v20);
        v33 = UICamera_TypeInfo;
      }
      gameObject = (UnityEngine_GameObject_o *)v33->static_fields->currentTouch;
      if ( !gameObject )
LABEL_43:
        sub_2213CDC(gameObject, v20);
      gameObject[2].fields.m_CachedPtr = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&gameObject[2].fields, 0, v27, v28, v29, v30, v31, v32);
      action = this->fields.action;
    }
    if ( action == 1 )
    {
      if ( !KeyUp )
        return;
    }
    else if ( action != 2 || !KeyUp )
    {
LABEL_41:
      if ( KeyUp )
        this->fields.mPress = 0;
      return;
    }
    if ( this->fields.mIsInput )
    {
      if ( !this->fields.mIgnoreUp )
      {
        v34 = UICamera_TypeInfo;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
          v34 = UICamera_TypeInfo;
        }
        if ( !v34->static_fields->inputHasFocus && this->fields.mPress )
        {
          v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v35);
          UICamera__set_selectedObject(v36, 0);
        }
      }
      this->fields.mIgnoreUp = 0;
    }
    else if ( this->fields.mPress )
    {
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v37);
      UICamera__set_selectedObject(v38, 0);
    }
    goto LABEL_41;
  }
}