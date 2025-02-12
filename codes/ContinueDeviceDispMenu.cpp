void __fastcall ContinueDeviceDispMenu___ctor(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BC2D53 & 1) == 0 )
  {
    sub_1C1ABD4(&BaseMenu_TypeInfo, method);
    byte_4BC2D53 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall ContinueDeviceDispMenu__Callback(ContinueDeviceDispMenu_o *this, bool result, const MethodInfo *method)
{
  struct ContinueDeviceDispMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct ContinueDeviceDispMenu_CallbackFunc_o *v4; // x20
  struct ContinueDeviceDispMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1C1AB78(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ContinueDeviceDispMenu__Close(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ContinueDeviceDispMenu__Close_31917644(this, 0LL, v2);
}


void __fastcall ContinueDeviceDispMenu__Close_31917644(
        ContinueDeviceDispMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4BC2D4E & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, callback);
    sub_1C1ABD4(&Method_ContinueDeviceDispMenu_EndClose__, v5);
    byte_4BC2D4E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C1AB78(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ContinueDeviceDispMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v6, 0LL);
}


void __fastcall ContinueDeviceDispMenu__EndClose(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ContinueDeviceDispMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C1AE30(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1C1AB78(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceDispMenu__EndCopyDialog(
        ContinueDeviceDispMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BC2D50 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BC2D50 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ContinueDeviceDispMenu__EndOpen(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall ContinueDeviceDispMenu__Init(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4BC2D4C & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, method);
    byte_4BC2D4C = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C1AE30(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ContinueDeviceDispMenu__OnClickCancel(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BC2D52 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ContinueDeviceDispMenu_OnClickCancel__, method);
    byte_4BC2D52 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ContinueDeviceDispMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ContinueDeviceDispMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_ContinueDeviceDispMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    ContinueDeviceDispMenu__Callback(this, 0, v5);
  }
}


void __fastcall ContinueDeviceDispMenu__OnClickCopy(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  System_String_o *code; // x20
  Il2CppObject *Instance; // x20
  System_String_o *v13; // x21
  NotificationDialog_ClickDelegate_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4BC2D4F & 1) == 0 )
  {
    sub_1C1ABD4(&NotificationDialog_ClickDelegate_TypeInfo, method);
    sub_1C1ABD4(&Method_ContinueDeviceDispMenu_EndCopyDialog__, v3);
    sub_1C1ABD4(&Method_ContinueDeviceDispMenu_OnClickCopy__, v4);
    sub_1C1ABD4(&UnityEngine_GUIUtility_TypeInfo, v5);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C1ABD4(&StringLiteral_3911/*"CONTINUE_DEVICE_DIALOG_MESSAGE1"*/, v8);
    byte_4BC2D4F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v9 = Method_ContinueDeviceDispMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_ContinueDeviceDispMenu_OnClickCopy__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C1ABEC(Method_ContinueDeviceDispMenu_OnClickCopy__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
    code = this->fields.code;
    if ( !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo);
    UnityEngine_GUIUtility__set_systemCopyBuffer(code, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3911/*"CONTINUE_DEVICE_DIALOG_MESSAGE1"*/, 0LL);
    v14 = (NotificationDialog_ClickDelegate_o *)sub_1C1AE20(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v14,
      (Il2CppObject *)this,
      Method_ContinueDeviceDispMenu_EndCopyDialog__,
      0LL);
    if ( !Instance )
      sub_1C1AE30(v15, v16);
    CommonUI__OpenNotificationDialog_31101392(
      (CommonUI_o *)Instance,
      0LL,
      v13,
      v14,
      -1,
      0,
      0,
      0,
      0,
      0,
      0LL,
      0LL,
      0,
      0,
      0LL,
      1,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}


void __fastcall ContinueDeviceDispMenu__OnClickDecide(ContinueDeviceDispMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BC2D51 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ContinueDeviceDispMenu_OnClickDecide__, method);
    byte_4BC2D51 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ContinueDeviceDispMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ContinueDeviceDispMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_ContinueDeviceDispMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    ContinueDeviceDispMenu__Callback(this, 1, v5);
  }
}


void __fastcall ContinueDeviceDispMenu__Open(
        ContinueDeviceDispMenu_o *this,
        System_String_o *code,
        ContinueDeviceDispMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t state; // w8
  UILabel_o *titleLabel; // x20
  System_String_o *continueCodeLabel; // x0
  __int64 v19; // x1
  UILabel_o *explanation2Label; // x20
  System_String_o *v21; // x21
  System_String_o *v22; // x0
  UILabel_o *copyLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v26; // x20
  struct ContinueDeviceDispMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_4BC2D4D & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, code);
    sub_1C1ABD4(&Method_ContinueDeviceDispMenu_EndOpen__, v7);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_43/*"\n"*/, v9);
    sub_1C1ABD4(&StringLiteral_3916/*"CONTINUE_DEVICE_DISP_TITLE"*/, v10);
    sub_1C1ABD4(&StringLiteral_3912/*"CONTINUE_DEVICE_DISP_CANCEL"*/, v11);
    sub_1C1ABD4(&StringLiteral_3915/*"CONTINUE_DEVICE_DISP_EXPLANATIOIN2"*/, v12);
    sub_1C1ABD4(&StringLiteral_3914/*"CONTINUE_DEVICE_DISP_DECIDE"*/, v13);
    sub_1C1ABD4(&StringLiteral_3913/*"CONTINUE_DEVICE_DISP_COPY"*/, v14);
    sub_1C1ABD4(&StringLiteral_3929/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, v15);
    byte_4BC2D4D = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C1AB78(p_callbackFunc);
    *((_DWORD *)p_callbackFunc - 2) = 2;
  }
  else if ( !state )
  {
    this->fields.code = code;
    sub_1C1AB78(&this->fields.code);
    this->fields.callbackFunc = callback;
    sub_1C1AB78(&this->fields.callbackFunc);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3916/*"CONTINUE_DEVICE_DISP_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, continueCodeLabel, 0LL);
    explanation2Label = this->fields.explanation2Label;
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3915/*"CONTINUE_DEVICE_DISP_EXPLANATIOIN2"*/, 0LL);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3929/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, 0LL);
    continueCodeLabel = System_String__Concat_63051628(v21, (System_String_o *)StringLiteral_43/*"\n"*/, v22, 0LL);
    if ( !explanation2Label )
      goto LABEL_16;
    UILabel__set_text(explanation2Label, continueCodeLabel, 0LL);
    copyLabel = this->fields.copyLabel;
    continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3913/*"CONTINUE_DEVICE_DISP_COPY"*/, 0LL);
    if ( !copyLabel )
      goto LABEL_16;
    UILabel__set_text(copyLabel, continueCodeLabel, 0LL);
    decideLabel = this->fields.decideLabel;
    continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3914/*"CONTINUE_DEVICE_DISP_DECIDE"*/, 0LL);
    if ( !decideLabel
      || (UILabel__set_text(decideLabel, continueCodeLabel, 0LL),
          cancelLabel = this->fields.cancelLabel,
          continueCodeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_3912/*"CONTINUE_DEVICE_DISP_CANCEL"*/, 0LL),
          !cancelLabel)
      || (UILabel__set_text(cancelLabel, continueCodeLabel, 0LL),
          (continueCodeLabel = (System_String_o *)this->fields.continueCodeLabel) == 0LL) )
    {
LABEL_16:
      sub_1C1AE30(continueCodeLabel, v19);
    }
    UILabel__set_text((UILabel_o *)continueCodeLabel, this->fields.code, 0LL);
    this->fields.state = 1;
    v26 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_ContinueDeviceDispMenu_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v26, 0LL);
  }
}


void __fastcall ContinueDeviceDispMenu__add_callbackFunc(
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

  if ( (byte_4BC2D4A & 1) == 0 )
  {
    sub_1C1ABD4(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, value);
    byte_4BC2D4A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ContinueDeviceDispMenu_CallbackFunc_c *)v8->klass != ContinueDeviceDispMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ContinueDeviceDispMenu_o *)sub_1C1B0F0(v8);
  ContinueDeviceDispMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ContinueDeviceDispMenu__remove_callbackFunc(
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

  if ( (byte_4BC2D4B & 1) == 0 )
  {
    sub_1C1ABD4(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, value);
    byte_4BC2D4B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ContinueDeviceDispMenu_CallbackFunc_c *)v8->klass != ContinueDeviceDispMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ContinueDeviceDispMenu_o *)sub_1C1B0F0(v8);
  ContinueDeviceDispMenu__EndOpen(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceDispMenu_CallbackFunc___ctor(
        ContinueDeviceDispMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1C1AB78(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A54D70;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A54D28;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ContinueDeviceDispMenu_CallbackFunc__BeginInvoke(
        ContinueDeviceDispMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4BC2D54 & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, result);
    byte_4BC2D54 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v9, callback, object);
}


void __fastcall ContinueDeviceDispMenu_CallbackFunc__EndInvoke(
        ContinueDeviceDispMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
}


void __fastcall ContinueDeviceDispMenu_CallbackFunc__Invoke(
        ContinueDeviceDispMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}