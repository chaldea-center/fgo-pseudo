void __fastcall BlankEarthShortcutUIButton___ctor(BlankEarthShortcutUIButton_o *this, const MethodInfo *method)
{
  if ( (byte_4214B93 & 1) == 0 )
  {
    sub_B0D8A4(&UICommonButton_TypeInfo, method);
    byte_4214B93 = 1;
  }
  if ( (BYTE3(UICommonButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICommonButton_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButton_TypeInfo);
  }
  UICommonButton___ctor((UICommonButton_o *)this, 0LL);
}


void __fastcall BlankEarthShortcutUIButton__OnClick(BlankEarthShortcutUIButton_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthShortcutUIButton__OnPress(
        BlankEarthShortcutUIButton_o *this,
        bool isPress,
        const MethodInfo *method)
{
  BlankEarthShortcutUIButton_c *klass; // x8
  int32_t waitState; // w8
  bool v6; // w1
  UICommonButton_o *v7; // x0

  if ( !isPress )
  {
    this->fields.isLongPress = 0;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    waitState = this->fields.waitState;
    if ( waitState == 2 )
    {
      v7 = (UICommonButton_o *)this;
      v6 = 0;
    }
    else
    {
      if ( waitState != 1 )
        return;
      v6 = 1;
      v7 = (UICommonButton_o *)this;
    }
    UICommonButton__SetButtonEnable(v7, v6, 1, 0LL);
    return;
  }
  ActionExtensions__Call(this->fields.onPressedAction, 0LL);
  klass = this->klass;
  this->fields.isLongPress = 1;
  if ( (((__int64 (__fastcall *)(BlankEarthShortcutUIButton_o *, Il2CppMethodPointer))klass->vtable._4_get_isEnabled.method)(
          this,
          klass->vtable._5_set_isEnabled.methodPtr) & 1) != 0 )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    ((void (__fastcall *)(BlankEarthShortcutUIButton_o *, __int64, __int64, Il2CppMethodPointer))this->klass->vtable._14_SetState.method)(
      this,
      2LL,
      1LL,
      this->klass->vtable._15_OnPress.methodPtr);
  }
  else
  {
    this->fields.isLongPress = 0;
  }
}


void __fastcall BlankEarthShortcutUIButton__SetPressAction(
        BlankEarthShortcutUIButton_o *this,
        System_Action_o *pressAction,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onPressedAction = pressAction;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onPressedAction,
    (System_Int32_array **)pressAction,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BlankEarthShortcutUIButton__SetShortcutButtonEnable(
        BlankEarthShortcutUIButton_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  _BOOL4 isLongPress; // w8

  if ( isEnable )
  {
    isLongPress = this->fields.isLongPress;
    this->fields.waitState = 1;
    if ( !isLongPress )
      UICommonButton__SetButtonEnable((UICommonButton_o *)this, 1, 1, 0LL);
  }
  else
  {
    this->fields.waitState = 2;
  }
}