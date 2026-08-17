void SaveDataDeleteWarningDialog___ctor(SaveDataDeleteWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A909 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A909 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SaveDataDeleteWarningDialog__OnClickCancel(SaveDataDeleteWarningDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SaveDataDeleteWarningDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_596A908 & 1) == 0 )
  {
    sub_2213A60(&Method_SaveDataDeleteWarningDialog_OnClickCancel__);
    byte_596A908 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_SaveDataDeleteWarningDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SaveDataDeleteWarningDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SaveDataDeleteWarningDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596A907 & 1) == 0 )
  {
    sub_2213A60(&Method_SaveDataDeleteWarningDialog_OnClickDecide__);
    byte_596A907 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_SaveDataDeleteWarningDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_SaveDataDeleteWarningDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SaveDataDeleteWarningDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596A906 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/);
    byte_596A906 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void SaveDataDeleteWarningDialog__Open(
        SaveDataDeleteWarningDialog_o *this,
        SaveDataDeleteWarningDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  UIButtonColor_o *decideButtonColor; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  decideButtonColor = this->fields.decideButtonColor;
  if ( !decideButtonColor )
    goto LABEL_5;
  v12.fields.r = 1.0;
  v12.fields.g = 1.0;
  v12.fields.b = 1.0;
  v12.fields.a = 1.0;
  UIButtonColor__set_defaultColor(decideButtonColor, v12, 0);
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
    sub_2213CDC(decideButtonColor, func);
  }
  ((void (__fastcall *)(UIButtonColor_o *, __int64, const MethodInfo *))decideButtonColor->klass->vtable._5_set_isEnabled.methodPtr)(
    decideButtonColor,
    1,
    decideButtonColor->klass->vtable._5_set_isEnabled.method);
  this->fields.clickFunc = func;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v6, v7, v8, v9, v10, v11);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


void SaveDataDeleteWarningDialog_ClickDelegate___ctor(
        SaveDataDeleteWarningDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFFFFC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFFFB4;
}


System_IAsyncResult_o *SaveDataDeleteWarningDialog_ClickDelegate__BeginInvoke(
        SaveDataDeleteWarningDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void SaveDataDeleteWarningDialog_ClickDelegate__EndInvoke(
        SaveDataDeleteWarningDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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