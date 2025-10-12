void BlankEarthShortcutUIButton___ctor(BlankEarthShortcutUIButton_o *this, const MethodInfo *method)
{
  UICommonButton___ctor((UICommonButton_o *)this, 0);
}


void BlankEarthShortcutUIButton__OnClick(BlankEarthShortcutUIButton_o *this, const MethodInfo *method)
{
  ;
}


void BlankEarthShortcutUIButton__OnPress(BlankEarthShortcutUIButton_o *this, bool isPress, const MethodInfo *method)
{
  BlankEarthShortcutUIButton_c *klass; // x8
  int32_t waitState; // w8
  bool v6; // w1
  UICommonButton_o *v7; // x0

  if ( !isPress )
  {
    this->fields.isLongPress = 0;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
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
    UICommonButton__SetButtonEnable(v7, v6, 1, 0);
    return;
  }
  ActionExtensions__Call(this->fields.onPressedAction, 0);
  klass = this->klass;
  this->fields.isLongPress = 1;
  if ( (((__int64 (__fastcall *)(BlankEarthShortcutUIButton_o *, const MethodInfo *))klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    ((void (__fastcall *)(BlankEarthShortcutUIButton_o *, __int64, __int64, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
      this,
      2,
      1,
      this->klass->vtable._14_SetState.method);
  }
  else
  {
    this->fields.isLongPress = 0;
  }
}


void BlankEarthShortcutUIButton__SetPressAction(
        BlankEarthShortcutUIButton_o *this,
        System_Action_o *pressAction,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onPressedAction = pressAction;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onPressedAction, (int32_t)pressAction, (int32_t)method, v3);
}


void BlankEarthShortcutUIButton__SetShortcutButtonEnable(
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
      UICommonButton__SetButtonEnable((UICommonButton_o *)this, 1, 1, 0);
  }
  else
  {
    this->fields.waitState = 2;
  }
}