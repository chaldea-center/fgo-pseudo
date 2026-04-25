void SaveDataDeleteWarningDialog___ctor(SaveDataDeleteWarningDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4DFEEE5 & 1) == 0 )
  {
    sub_1CE6700(&BaseDialog_TypeInfo);
    byte_4DFEEE5 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SaveDataDeleteWarningDialog__OnClickCancel(SaveDataDeleteWarningDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SaveDataDeleteWarningDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4DFEEE4 & 1) == 0 )
  {
    sub_1CE6700(&Method_SaveDataDeleteWarningDialog_OnClickCancel__);
    byte_4DFEEE4 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_SaveDataDeleteWarningDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SaveDataDeleteWarningDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_SaveDataDeleteWarningDialog_OnClickCancel__);
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


void SaveDataDeleteWarningDialog__OnClickDecide(SaveDataDeleteWarningDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SaveDataDeleteWarningDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4DFEEE3 & 1) == 0 )
  {
    sub_1CE6700(&Method_SaveDataDeleteWarningDialog_OnClickDecide__);
    byte_4DFEEE3 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_SaveDataDeleteWarningDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_SaveDataDeleteWarningDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_SaveDataDeleteWarningDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void SaveDataDeleteWarningDialog__OnEnable(SaveDataDeleteWarningDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4DFEEE2 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_15799/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4DFEEE2 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_46098588(transform, (System_String_o *)StringLiteral_15799/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void SaveDataDeleteWarningDialog__Open(
        SaveDataDeleteWarningDialog_o *this,
        SaveDataDeleteWarningDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  UIButtonColor_o *decideButtonColor; // x0
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  decideButtonColor = this->fields.decideButtonColor;
  if ( !decideButtonColor )
    goto LABEL_5;
  v6.fields.r = 1.0;
  v6.fields.g = 1.0;
  v6.fields.b = 1.0;
  v6.fields.a = 1.0;
  UIButtonColor__set_defaultColor(decideButtonColor, v6, 0);
  decideButtonColor = this->fields.decideButtonColor;
  if ( !decideButtonColor
    || (((void (__fastcall *)(UIButtonColor_o *, _QWORD, __int64, const MethodInfo *))decideButtonColor->klass->vtable._14_SetState.methodPtr)(
          decideButtonColor,
          0,
          1,
          decideButtonColor->klass->vtable._14_SetState.method),
        (decideButtonColor = this->fields.decideButtonColor) == 0) )
  {
LABEL_5:
    sub_1CE6958(decideButtonColor, func);
  }
  ((void (__fastcall *)(UIButtonColor_o *, __int64, const MethodInfo *))decideButtonColor->klass->vtable._5_set_isEnabled.methodPtr)(
    decideButtonColor,
    1,
    decideButtonColor->klass->vtable._5_set_isEnabled.method);
  this->fields.clickFunc = func;
  sub_1CE66A4(&this->fields.clickFunc, func);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


void SaveDataDeleteWarningDialog_ClickDelegate___ctor(
        SaveDataDeleteWarningDialog_ClickDelegate_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1B0EC10;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B0EBC8;
}


System_IAsyncResult_o *SaveDataDeleteWarningDialog_ClickDelegate__BeginInvoke(
        SaveDataDeleteWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4DFEEE6 & 1) == 0 )
  {
    sub_1CE6700(&bool_TypeInfo);
    byte_4DFEEE6 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v9, callback, object);
}


void SaveDataDeleteWarningDialog_ClickDelegate__EndInvoke(
        SaveDataDeleteWarningDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
}


void SaveDataDeleteWarningDialog_ClickDelegate__Invoke(
        SaveDataDeleteWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}