void UICommonButton___ctor(UICommonButton_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1

  if ( (byte_59720D2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_2213A60(&UICommonButtonColor_TypeInfo);
    byte_59720D2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onClick = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClick, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, v10);
  UICommonButtonColor___ctor((UICommonButtonColor_o *)this, v10);
}


void UICommonButton__OnClick(UICommonButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0

  if ( (byte_59720CD & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UICommonButton_OnClick__);
    sub_2213A60(&UICommonButton_TypeInfo);
    byte_59720CD = 1;
  }
  if ( !this->fields.isPassive || UICommonButtonColor__get_alpha((UICommonButtonColor_o *)this, method) >= 1.0 )
  {
    current = (UnityEngine_Object_o *)UICommonButton_TypeInfo->static_fields->current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(current, 0, 0) )
    {
      if ( (((__int64 (__fastcall *)(UICommonButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
              this,
              this->klass->vtable._4_get_isEnabled.method)
          & 1) != 0
        || this->fields.isAlwaysValidOnClick )
      {
        UICommonButton_TypeInfo->static_fields->current = this;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)UICommonButton_TypeInfo->static_fields,
          (int32_t)this,
          v4,
          v5,
          v6,
          v7,
          v8,
          v9);
        onClick = this->fields.onClick;
        if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v10);
        EventDelegate__Execute_56285144(onClick, 0);
        UICommonButton_TypeInfo->static_fields->current = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)UICommonButton_TypeInfo->static_fields,
          0,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
      }
      else
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !gameObject )
          sub_2213CDC(0, v19);
        if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
        {
          v20 = Method_UICommonButton_OnClick__;
          if ( (*((_BYTE *)Method_UICommonButton_OnClick__ + 83) & 2) != 0 )
            v20 = (_QWORD *)sub_2213A78(Method_UICommonButton_OnClick__);
          v21 = (System_Reflection_MethodBase_o *)sub_2213A44(v20, v20[4]);
          OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0);
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
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_59720CC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&UICommonButton_TypeInfo);
    byte_59720CC = 1;
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
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_59720CB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&UICommonButton_TypeInfo);
    byte_59720CB = 1;
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
LABEL_13:
      UICommonButtonColor__OnDragOver((UICommonButtonColor_o *)this, v3);
  }
}


void UICommonButton__OnEnable(UICommonButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UICamera_c *v4; // x0
  struct UICamera_StaticFields *static_fields; // x8
  int v6; // w10
  int32_t currentScheme; // w9
  UnityEngine_Object_o *hoveredObject; // x20
  UICommonButton_c *klass; // x8
  UICommonButton_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  UnityEngine_Object_o *gameObject; // x21
  bool v15; // w0

  if ( (byte_59720C9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_59720C9 = 1;
  }
  if ( (((__int64 (__fastcall *)(UICommonButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) == 0 )
  {
    klass = this->klass;
    v10 = this;
    v11 = 3;
    v12 = 1;
LABEL_12:
    ((void (__fastcall *)(UICommonButton_o *, __int64, __int64, const MethodInfo *))klass->vtable._14_SetState.methodPtr)(
      v10,
      v11,
      v12,
      klass->vtable._14_SetState.method);
    return;
  }
  if ( !this->fields.mInitDone )
    return;
  v4 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
    v4 = UICamera_TypeInfo;
  }
  static_fields = v4->static_fields;
  v6 = *(&v4->_2.cctor_finished + 1);
  currentScheme = static_fields->currentScheme;
  if ( currentScheme != 2 )
  {
    if ( v6 )
    {
      if ( currentScheme )
      {
LABEL_16:
        klass = this->klass;
        v10 = this;
        v11 = 0;
        v12 = 0;
        goto LABEL_12;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(v4, v3);
      v4 = UICamera_TypeInfo;
      static_fields = UICamera_TypeInfo->static_fields;
      if ( static_fields->currentScheme )
        goto LABEL_16;
    }
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, v3);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    hoveredObject = (UnityEngine_Object_o *)static_fields->hoveredObject;
    goto LABEL_21;
  }
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(v4, v3);
  hoveredObject = (UnityEngine_Object_o *)UICamera__get_selectedObject(0);
LABEL_21:
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v15 = UnityEngine_Object__op_Equality(hoveredObject, gameObject, 0);
  ((void (__fastcall *)(UICommonButton_o *, bool, const MethodInfo *))this->klass->vtable._9_OnHover.methodPtr)(
    this,
    v15,
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

  if ( (byte_59720CA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_59720CA = 1;
  }
  if ( (!this->fields.isPassive
     || UICommonButtonColor__get_alpha((UICommonButtonColor_o *)this, (const MethodInfo *)isPressed) >= 1.0)
    && (((__int64 (__fastcall *)(UICommonButton_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
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
        ((void (__fastcall *)(UICommonButton_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
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
            goto LABEL_33;
          v14 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v13);
            v14 = UICamera_TypeInfo;
          }
          static_fields = v14->static_fields;
          currentScheme = static_fields->currentScheme;
          if ( currentScheme == 2 )
            goto LABEL_24;
          if ( !*(&v14->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v14, v13);
            v14 = UICamera_TypeInfo;
            static_fields = UICamera_TypeInfo->static_fields;
            currentScheme = static_fields->currentScheme;
          }
          if ( currentScheme )
            goto LABEL_33;
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
LABEL_24:
            v7 = 1;
          else
LABEL_33:
            v7 = 0;
        }
        ((void (__fastcall *)(UICommonButton_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
          this,
          v7,
          0,
          this->klass->vtable._14_SetState.method);
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
  __int64 v7; // x1
  Il2CppObject *Component_object; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *v13; // x20

  if ( (byte_59720CF & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59720CF = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v9 )
  {
    if ( !Component_object )
      goto LABEL_18;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 1, 0);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
  if ( !this )
LABEL_18:
    sub_2213CDC(v9, v10);
  if ( isEnable )
    v11 = 0;
  else
    v11 = 3;
  ((void (__fastcall *)(UICommonButton_o *, __int64, bool, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
    this,
    v11,
    immediate,
    this->klass->vtable._14_SetState.method);
  v13 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
  if ( v9 )
  {
    if ( v13 )
    {
      UITouchPress__set_IsEnabled((UITouchPress_o *)v13, isEnable, 0);
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
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Component_object; // x21
  __int64 v12; // x1
  Il2CppObject *v13; // x20

  if ( (byte_59720D1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59720D1 = 1;
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0);
  if ( !this )
    goto LABEL_18;
  if ( isEnable )
    v9 = 0;
  else
    v9 = 3;
  ((void (__fastcall *)(UICommonButton_o *, __int64, bool, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
    this,
    v9,
    immediate,
    this->klass->vtable._14_SetState.method);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v7 )
  {
    if ( !Component_object )
      goto LABEL_18;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0);
  }
  v13 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
  if ( v7 )
  {
    if ( v13 )
    {
      UITouchPress__set_IsEnabled((UITouchPress_o *)v13, isEnable, 0);
      return;
    }
LABEL_18:
    sub_2213CDC(v7, v8);
  }
}


void UICommonButton__SetButtonEnableWithCollider(UICommonButton_o *this, bool isEnable, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *v10; // x20

  if ( (byte_59720D0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59720D0 = 1;
  }
  ((void (__fastcall *)(UICommonButton_o *, bool, const MethodInfo *))this->klass->vtable._5_set_isEnabled.methodPtr)(
    this,
    isEnable,
    this->klass->vtable._5_set_isEnabled.method);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v7 )
  {
    if ( !Component_object )
      goto LABEL_14;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0);
  }
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
  if ( v7 )
  {
    if ( v10 )
    {
      UITouchPress__set_IsEnabled((UITouchPress_o *)v10, isEnable, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v7, v8);
  }
}


void UICommonButton__SetColliderEnable(UICommonButton_o *this, bool isEnable, bool immediate, const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Component_object; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *v12; // x20

  if ( (byte_59720CE & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59720CE = 1;
  }
  ((void (__fastcall *)(UICommonButton_o *, _QWORD, bool, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
    this,
    0,
    immediate,
    this->klass->vtable._14_SetState.method);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v9 )
  {
    if ( !Component_object )
      goto LABEL_14;
    UITouchPress__set_IsEnabled((UITouchPress_o *)Component_object, isEnable, 0);
  }
  v12 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
  if ( v9 )
  {
    if ( v12 )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v12, isEnable, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void UICommonButton__SetEnable(UICommonButton_o *this, bool value, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( !this )
    sub_2213CDC(0, value);
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


// attributes: thunk
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