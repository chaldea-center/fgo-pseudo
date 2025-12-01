void ContinueDeviceDispMenu___ctor(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CC2287 & 1) == 0 )
  {
    sub_1C713B0(&BaseMenu_TypeInfo);
    byte_4CC2287 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void ContinueDeviceDispMenu__Callback(ContinueDeviceDispMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ContinueDeviceDispMenu_CallbackFunc_o *v9; // x20
  struct ContinueDeviceDispMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void ContinueDeviceDispMenu__Close(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ContinueDeviceDispMenu__Close_33299288(this, 0, v2);
}


void ContinueDeviceDispMenu__Close_33299288(
        ContinueDeviceDispMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CC2282 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ContinueDeviceDispMenu_EndClose__);
    byte_4CC2282 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ContinueDeviceDispMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v10, 0);
}


void ContinueDeviceDispMenu__EndClose(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ContinueDeviceDispMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C71354(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void ContinueDeviceDispMenu__EndCopyDialog(ContinueDeviceDispMenu_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CC2284 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2284 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void ContinueDeviceDispMenu__EndOpen(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void ContinueDeviceDispMenu__Init(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4CC2280 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2280 = 1;
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
    sub_1C71608(titleLabel, method);
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

  if ( (byte_4CC2286 & 1) == 0 )
  {
    sub_1C713B0(&Method_ContinueDeviceDispMenu_OnClickCancel__);
    byte_4CC2286 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ContinueDeviceDispMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ContinueDeviceDispMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ContinueDeviceDispMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
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
  __int64 v10; // x1

  if ( (byte_4CC2283 & 1) == 0 )
  {
    sub_1C713B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_ContinueDeviceDispMenu_EndCopyDialog__);
    sub_1C713B0(&Method_ContinueDeviceDispMenu_OnClickCopy__);
    sub_1C713B0(&UnityEngine_GUIUtility_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_3800/*"CONTINUE_DEVICE_DIALOG_MESSAGE1"*/);
    byte_4CC2283 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ContinueDeviceDispMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_ContinueDeviceDispMenu_OnClickCopy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ContinueDeviceDispMenu_OnClickCopy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    code = this->fields.code;
    if ( !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo);
    UnityEngine_GUIUtility__set_systemCopyBuffer(code, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"CONTINUE_DEVICE_DIALOG_MESSAGE1"*/, 0);
    v8 = (NotificationDialog_ClickDelegate_o *)sub_1C715FC(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(v8, (Il2CppObject *)this, Method_ContinueDeviceDispMenu_EndCopyDialog__, 0);
    if ( !Instance )
      sub_1C71608(v9, v10);
    CommonUI__OpenNotificationDialog_31442944(
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

  if ( (byte_4CC2285 & 1) == 0 )
  {
    sub_1C713B0(&Method_ContinueDeviceDispMenu_OnClickDecide__);
    byte_4CC2285 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ContinueDeviceDispMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ContinueDeviceDispMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ContinueDeviceDispMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t state; // w8
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UILabel_o *titleLabel; // x20
  System_String_o *continueCodeLabel; // x0
  __int64 v20; // x1
  UILabel_o *explanation2Label; // x20
  System_String_o *v22; // x21
  System_String_o *v23; // x0
  UILabel_o *copyLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v27; // x20
  struct ContinueDeviceDispMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_4CC2281 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ContinueDeviceDispMenu_EndOpen__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    sub_1C713B0(&StringLiteral_3805/*"CONTINUE_DEVICE_DISP_TITLE"*/);
    sub_1C713B0(&StringLiteral_3801/*"CONTINUE_DEVICE_DISP_CANCEL"*/);
    sub_1C713B0(&StringLiteral_3804/*"CONTINUE_DEVICE_DISP_EXPLANATIOIN2"*/);
    sub_1C713B0(&StringLiteral_3803/*"CONTINUE_DEVICE_DISP_DECIDE"*/);
    sub_1C713B0(&StringLiteral_3802/*"CONTINUE_DEVICE_DISP_COPY"*/);
    sub_1C713B0(&StringLiteral_3818/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/);
    byte_4CC2281 = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)p_callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    *((_DWORD *)p_callbackFunc - 2) = 2;
  }
  else if ( !state )
  {
    this->fields.code = code;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.code,
      (int32_t)code,
      (int32_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3805/*"CONTINUE_DEVICE_DISP_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, continueCodeLabel, 0);
    explanation2Label = this->fields.explanation2Label;
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"CONTINUE_DEVICE_DISP_EXPLANATIOIN2"*/, 0);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3818/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, 0);
    continueCodeLabel = System_String__Concat_64069988(v22, (System_String_o *)StringLiteral_43/*"\n"*/, v23, 0);
    if ( !explanation2Label )
      goto LABEL_16;
    UILabel__set_text(explanation2Label, continueCodeLabel, 0);
    copyLabel = this->fields.copyLabel;
    continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3802/*"CONTINUE_DEVICE_DISP_COPY"*/, 0);
    if ( !copyLabel )
      goto LABEL_16;
    UILabel__set_text(copyLabel, continueCodeLabel, 0);
    decideLabel = this->fields.decideLabel;
    continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"CONTINUE_DEVICE_DISP_DECIDE"*/, 0);
    if ( !decideLabel
      || (UILabel__set_text(decideLabel, continueCodeLabel, 0),
          cancelLabel = this->fields.cancelLabel,
          continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"CONTINUE_DEVICE_DISP_CANCEL"*/, 0),
          !cancelLabel)
      || (UILabel__set_text(cancelLabel, continueCodeLabel, 0),
          (continueCodeLabel = (System_String_o *)this->fields.continueCodeLabel) == 0) )
    {
LABEL_16:
      sub_1C71608(continueCodeLabel, v20);
    }
    UILabel__set_text((UILabel_o *)continueCodeLabel, this->fields.code, 0);
    this->fields.state = 1;
    v27 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_ContinueDeviceDispMenu_EndOpen__, 0);
    BaseMenu__Open((BaseMenu_o *)this, v27, 0);
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

  if ( (byte_4CC227E & 1) == 0 )
  {
    sub_1C713B0(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    byte_4CC227E = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ContinueDeviceDispMenu_o *)sub_1C719A4(v8);
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

  if ( (byte_4CC227F & 1) == 0 )
  {
    sub_1C713B0(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    byte_4CC227F = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ContinueDeviceDispMenu_o *)sub_1C719A4(v8);
  ContinueDeviceDispMenu__EndOpen(v11, v12);
}


void ContinueDeviceDispMenu_CallbackFunc___ctor(
        ContinueDeviceDispMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9F2F8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9F2B0;
}


System_IAsyncResult_o *ContinueDeviceDispMenu_CallbackFunc__BeginInvoke(
        ContinueDeviceDispMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CC2288 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CC2288 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void ContinueDeviceDispMenu_CallbackFunc__EndInvoke(
        ContinueDeviceDispMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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