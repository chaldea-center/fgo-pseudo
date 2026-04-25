void SaveDataDeleteConfirmDialog___ctor(SaveDataDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4DFEEDA & 1) == 0 )
  {
    sub_1CE6700(&BaseDialog_TypeInfo);
    byte_4DFEEDA = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SaveDataDeleteConfirmDialog__OnClickCancel(SaveDataDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SaveDataDeleteConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4DFEED9 & 1) == 0 )
  {
    sub_1CE6700(&Method_SaveDataDeleteConfirmDialog_OnClickCancel__);
    byte_4DFEED9 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_SaveDataDeleteConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SaveDataDeleteConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_SaveDataDeleteConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void SaveDataDeleteConfirmDialog__OnClickDecide(SaveDataDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnlockSlider_o *unlockSlider; // x0
  bool IsLocked; // w20
  _QWORD *v6; // x8
  System_Reflection_MethodBase_o *v7; // x0
  struct SaveDataDeleteConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4DFEED8 & 1) == 0 )
  {
    sub_1CE6700(&Method_SaveDataDeleteConfirmDialog_OnClickDecide__);
    byte_4DFEED8 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    unlockSlider = this->fields.unlockSlider;
    if ( !unlockSlider )
      sub_1CE6958(0, v3);
    IsLocked = UnlockSlider__IsLocked(unlockSlider, 0);
    v6 = Method_SaveDataDeleteConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_SaveDataDeleteConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1CE6718(Method_SaveDataDeleteConfirmDialog_OnClickDecide__);
    v7 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v6, v6[4]);
    if ( IsLocked )
    {
      OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
      clickFunc = this->fields.clickFunc;
      if ( clickFunc )
        ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
          clickFunc->fields.method_code,
          1,
          clickFunc->fields.method);
    }
  }
}


void SaveDataDeleteConfirmDialog__OnEnable(SaveDataDeleteConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4DFEED6 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_15799/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4DFEED6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_46098588(transform, (System_String_o *)StringLiteral_15799/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void SaveDataDeleteConfirmDialog__Open(
        SaveDataDeleteConfirmDialog_o *this,
        SaveDataDeleteConfirmDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  UnlockSlider_o *unlockSlider; // x20
  UnlockSlider_OnDragFinished_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4DFEED7 & 1) == 0 )
  {
    sub_1CE6700(&UnlockSlider_OnDragFinished_TypeInfo);
    sub_1CE6700(&Method_SaveDataDeleteConfirmDialog_UpdateDecideButton__);
    byte_4DFEED7 = 1;
  }
  this->fields.clickFunc = func;
  sub_1CE66A4(&this->fields.clickFunc, func);
  unlockSlider = this->fields.unlockSlider;
  v6 = (UnlockSlider_OnDragFinished_o *)sub_1CE694C(UnlockSlider_OnDragFinished_TypeInfo);
  UnlockSlider_OnDragFinished___ctor(
    v6,
    (Il2CppObject *)this,
    Method_SaveDataDeleteConfirmDialog_UpdateDecideButton__,
    0);
  if ( !unlockSlider )
    sub_1CE6958(v7, v8);
  UnlockSlider__Setup(unlockSlider, v6, 0);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SaveDataDeleteConfirmDialog__UpdateDecideButton(
        SaveDataDeleteConfirmDialog_o *this,
        bool isUnlocked,
        const MethodInfo *method)
{
  UIButtonColor_o *decideButtonColor; // x0
  _BOOL4 v5; // w21
  __int64 v7; // x1
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3

  decideButtonColor = this->fields.decideButtonColor;
  if ( !decideButtonColor )
LABEL_12:
    sub_1CE6958(decideButtonColor, isUnlocked);
  v5 = isUnlocked;
  if ( isUnlocked )
    v7 = 0;
  else
    v7 = 3;
  ((void (__fastcall *)(UIButtonColor_o *, __int64, __int64, const MethodInfo *))decideButtonColor->klass->vtable._14_SetState.methodPtr)(
    decideButtonColor,
    v7,
    1,
    decideButtonColor->klass->vtable._14_SetState.method);
  decideButtonColor = this->fields.decideButtonColor;
  if ( v5 )
  {
    r = 1.0;
    g = 1.0;
    b = 1.0;
    a = 1.0;
    if ( !decideButtonColor )
      goto LABEL_12;
  }
  else
  {
    if ( !decideButtonColor )
      goto LABEL_12;
    r = decideButtonColor->fields.disabledColor.fields.r;
    g = decideButtonColor->fields.disabledColor.fields.g;
    b = decideButtonColor->fields.disabledColor.fields.b;
    a = decideButtonColor->fields.disabledColor.fields.a;
  }
  UIButtonColor__set_defaultColor(decideButtonColor, *(UnityEngine_Color_o *)&r, 0);
  decideButtonColor = this->fields.decideButtonColor;
  if ( !decideButtonColor )
    goto LABEL_12;
  ((void (__fastcall *)(UIButtonColor_o *, bool, const MethodInfo *))decideButtonColor->klass->vtable._5_set_isEnabled.methodPtr)(
    decideButtonColor,
    isUnlocked,
    decideButtonColor->klass->vtable._5_set_isEnabled.method);
}


void SaveDataDeleteConfirmDialog_ClickDelegate___ctor(
        SaveDataDeleteConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1CE66A4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1B0EBAC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B0EB64;
}


System_IAsyncResult_o *SaveDataDeleteConfirmDialog_ClickDelegate__BeginInvoke(
        SaveDataDeleteConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4DFEEDB & 1) == 0 )
  {
    sub_1CE6700(&bool_TypeInfo);
    byte_4DFEEDB = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v9, callback, object);
}


void SaveDataDeleteConfirmDialog_ClickDelegate__EndInvoke(
        SaveDataDeleteConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
}


void SaveDataDeleteConfirmDialog_ClickDelegate__Invoke(
        SaveDataDeleteConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}