void ContinueDeviceDispMenu___ctor(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C328C8 & 1) == 0 )
  {
    sub_1C32C20(&BaseMenu_TypeInfo);
    byte_4C328C8 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void ContinueDeviceDispMenu__Callback(ContinueDeviceDispMenu_o *this, bool result, const MethodInfo *method)
{
  struct ContinueDeviceDispMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct ContinueDeviceDispMenu_CallbackFunc_o *v4; // x20
  struct ContinueDeviceDispMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C32BC4(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      result,
      v4->fields.method);
  }
}


void ContinueDeviceDispMenu__Close(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ContinueDeviceDispMenu__Close_32966244(this, 0, v2);
}


void ContinueDeviceDispMenu__Close_32966244(
        ContinueDeviceDispMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4C328C3 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ContinueDeviceDispMenu_EndClose__);
    byte_4C328C3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C32BC4(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ContinueDeviceDispMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v5, 0);
}


void ContinueDeviceDispMenu__EndClose(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v5; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ContinueDeviceDispMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v5 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C32BC4(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void ContinueDeviceDispMenu__EndCopyDialog(ContinueDeviceDispMenu_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C328C5 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C328C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void ContinueDeviceDispMenu__EndOpen(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void ContinueDeviceDispMenu__Init(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C328C1 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C328C1 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C32E7C(titleLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void ContinueDeviceDispMenu__OnClickCancel(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C328C7 & 1) == 0 )
  {
    sub_1C32C20(&Method_ContinueDeviceDispMenu_OnClickCancel__);
    byte_4C328C7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ContinueDeviceDispMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ContinueDeviceDispMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ContinueDeviceDispMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ContinueDeviceDispMenu__Callback(this, 0, v5);
  }
}


void ContinueDeviceDispMenu__OnClickCopy(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *code; // x20
  Il2CppObject *Instance; // x20
  System_String_o *v7; // x21
  NotificationDialog_ClickDelegate_o *v8; // x22
  __int64 v9; // x0

  if ( (byte_4C328C4 & 1) == 0 )
  {
    sub_1C32C20(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_ContinueDeviceDispMenu_EndCopyDialog__);
    sub_1C32C20(&Method_ContinueDeviceDispMenu_OnClickCopy__);
    sub_1C32C20(&UnityEngine_GUIUtility_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_3805/*"CONTINUE_DEVICE_DIALOG_MESSAGE1"*/);
    byte_4C328C4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ContinueDeviceDispMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_ContinueDeviceDispMenu_OnClickCopy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ContinueDeviceDispMenu_OnClickCopy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    code = this->fields.code;
    if ( !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo);
    UnityEngine_GUIUtility__set_systemCopyBuffer(code, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3805/*"CONTINUE_DEVICE_DIALOG_MESSAGE1"*/, 0);
    v8 = (NotificationDialog_ClickDelegate_o *)sub_1C32E6C(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(v8, (Il2CppObject *)this, Method_ContinueDeviceDispMenu_EndCopyDialog__, 0);
    if ( !Instance )
      sub_1C32E7C(v9);
    CommonUI__OpenNotificationDialog_31193120(
      (CommonUI_o *)Instance,
      0,
      v7,
      v8,
      -1,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      1,
      0,
      0,
      0,
      0);
  }
}


void ContinueDeviceDispMenu__OnClickDecide(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C328C6 & 1) == 0 )
  {
    sub_1C32C20(&Method_ContinueDeviceDispMenu_OnClickDecide__);
    byte_4C328C6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ContinueDeviceDispMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ContinueDeviceDispMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ContinueDeviceDispMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ContinueDeviceDispMenu__Callback(this, 1, v5);
  }
}


void ContinueDeviceDispMenu__Open(
        ContinueDeviceDispMenu_o *this,
        System_String_o *code,
        ContinueDeviceDispMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t state; // w8
  UILabel_o *titleLabel; // x20
  System_String_o *continueCodeLabel; // x0
  UILabel_o *explanation2Label; // x20
  System_String_o *v11; // x21
  System_String_o *v12; // x0
  UILabel_o *copyLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v16; // x20
  struct ContinueDeviceDispMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_4C328C2 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ContinueDeviceDispMenu_EndOpen__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_3810/*"CONTINUE_DEVICE_DISP_TITLE"*/);
    sub_1C32C20(&StringLiteral_3806/*"CONTINUE_DEVICE_DISP_CANCEL"*/);
    sub_1C32C20(&StringLiteral_3809/*"CONTINUE_DEVICE_DISP_EXPLANATIOIN2"*/);
    sub_1C32C20(&StringLiteral_3808/*"CONTINUE_DEVICE_DISP_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3807/*"CONTINUE_DEVICE_DISP_COPY"*/);
    sub_1C32C20(&StringLiteral_3823/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/);
    byte_4C328C2 = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C32BC4(p_callbackFunc, callback);
    *((_DWORD *)p_callbackFunc - 2) = 2;
  }
  else if ( !state )
  {
    this->fields.code = code;
    sub_1C32BC4(&this->fields.code, code);
    this->fields.callbackFunc = callback;
    sub_1C32BC4(&this->fields.callbackFunc, callback);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"CONTINUE_DEVICE_DISP_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, continueCodeLabel, 0);
    explanation2Label = this->fields.explanation2Label;
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3809/*"CONTINUE_DEVICE_DISP_EXPLANATIOIN2"*/, 0);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, 0);
    continueCodeLabel = System_String__Concat_63556792(v11, (System_String_o *)StringLiteral_43/*"\n"*/, v12, 0);
    if ( !explanation2Label )
      goto LABEL_16;
    UILabel__set_text(explanation2Label, continueCodeLabel, 0);
    copyLabel = this->fields.copyLabel;
    continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3807/*"CONTINUE_DEVICE_DISP_COPY"*/, 0);
    if ( !copyLabel )
      goto LABEL_16;
    UILabel__set_text(copyLabel, continueCodeLabel, 0);
    decideLabel = this->fields.decideLabel;
    continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3808/*"CONTINUE_DEVICE_DISP_DECIDE"*/, 0);
    if ( !decideLabel
      || (UILabel__set_text(decideLabel, continueCodeLabel, 0),
          cancelLabel = this->fields.cancelLabel,
          continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3806/*"CONTINUE_DEVICE_DISP_CANCEL"*/, 0),
          !cancelLabel)
      || (UILabel__set_text(cancelLabel, continueCodeLabel, 0),
          (continueCodeLabel = (System_String_o *)this->fields.continueCodeLabel) == 0) )
    {
LABEL_16:
      sub_1C32E7C(continueCodeLabel);
    }
    UILabel__set_text((UILabel_o *)continueCodeLabel, this->fields.code, 0);
    this->fields.state = 1;
    v16 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_ContinueDeviceDispMenu_EndOpen__, 0);
    BaseMenu__Open((BaseMenu_o *)this, v16, 0);
  }
}


void ContinueDeviceDispMenu__add_callbackFunc(
        ContinueDeviceDispMenu_o *this,
        ContinueDeviceDispMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ContinueDeviceDispMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ContinueDeviceDispMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ContinueDeviceDispMenu_o *v11; // x0
  ContinueDeviceDispMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C328BF & 1) == 0 )
  {
    sub_1C32C20(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    byte_4C328BF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ContinueDeviceDispMenu_CallbackFunc_c *)v8->klass != ContinueDeviceDispMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ContinueDeviceDispMenu_o *)sub_1C3313C(v8);
  ContinueDeviceDispMenu__remove_callbackFunc(v11, v12, v13);
}


void ContinueDeviceDispMenu__remove_callbackFunc(
        ContinueDeviceDispMenu_o *this,
        ContinueDeviceDispMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ContinueDeviceDispMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ContinueDeviceDispMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ContinueDeviceDispMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C328C0 & 1) == 0 )
  {
    sub_1C32C20(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    byte_4C328C0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ContinueDeviceDispMenu_CallbackFunc_c *)v8->klass != ContinueDeviceDispMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ContinueDeviceDispMenu_o *)sub_1C3313C(v8);
  ContinueDeviceDispMenu__EndOpen(v11, v12);
}


void ContinueDeviceDispMenu_CallbackFunc___ctor(
        ContinueDeviceDispMenu_CallbackFunc_o *this,
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
  sub_1C32BC4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6FCA0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6FC58;
}


System_IAsyncResult_o *ContinueDeviceDispMenu_CallbackFunc__BeginInvoke(
        ContinueDeviceDispMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = result;
  if ( (byte_4C328C9 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    byte_4C328C9 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void ContinueDeviceDispMenu_CallbackFunc__EndInvoke(
        ContinueDeviceDispMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void ContinueDeviceDispMenu_CallbackFunc__Invoke(
        ContinueDeviceDispMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}