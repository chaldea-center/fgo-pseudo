void TermsOfUseDlg___ctor(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  if ( (byte_4C25358 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C25358 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TermsOfUseDlg__Callback(TermsOfUseDlg_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct TermsOfUseDlg_CallbackFunc_o *v5; // x20
  struct TermsOfUseDlg_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void TermsOfUseDlg__Close(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TermsOfUseDlg__Close_38524744(this, 0, v2);
}


void TermsOfUseDlg__Close_38524744(TermsOfUseDlg_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C25354 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_TermsOfUseDlg_EndClose__);
    byte_4C25354 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TermsOfUseDlg_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void TermsOfUseDlg__EndClose(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TermsOfUseDlg__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C2D434(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void TermsOfUseDlg__EndOpen(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void TermsOfUseDlg__Init(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C25352 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C25352 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0) )
  {
    sub_1C2D6EC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void TermsOfUseDlg__OnClickCancel(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C25357 & 1) == 0 )
  {
    sub_1C2D490(&Method_TermsOfUseDlg_OnClickCancel__);
    byte_4C25357 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_TermsOfUseDlg_OnClickCancel__;
    if ( (*((_BYTE *)Method_TermsOfUseDlg_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_TermsOfUseDlg_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    TermsOfUseDlg__Callback(this, 0, v5);
  }
}


void TermsOfUseDlg__OnClickDecide(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C25356 & 1) == 0 )
  {
    sub_1C2D490(&Method_TermsOfUseDlg_OnClickDecide__);
    sub_1C2D490(&TermsOfUseMenu_TypeInfo);
    byte_4C25356 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_TermsOfUseDlg_OnClickDecide__;
    if ( (*((_BYTE *)Method_TermsOfUseDlg_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_TermsOfUseDlg_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    if ( !TermsOfUseMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo);
    TermsOfUseMenu__Save(0);
    TermsOfUseDlg__Callback(this, 1, v5);
  }
}


void TermsOfUseDlg__OnClickShow(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *wvTitle; // x20
  int32_t wvAddress; // w21
  System_String_o *WebViewAddress_41158236; // x21
  System_Action_o *v8; // x22

  if ( (byte_4C25355 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_TermsOfUseDlg_OnClickShow__);
    sub_1C2D490(&Method_TermsOfUseDlg_OnEndShowWebView__);
    sub_1C2D490(&WebViewManager_TypeInfo);
    byte_4C25355 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_TermsOfUseDlg_OnClickShow__;
    if ( (*((_BYTE *)Method_TermsOfUseDlg_OnClickShow__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_TermsOfUseDlg_OnClickShow__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    wvTitle = this->fields.wvTitle;
    wvAddress = this->fields.wvAddress;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress_41158236 = NetworkManager__getWebViewAddress_41158236(wvAddress, 0);
    v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_TermsOfUseDlg_OnEndShowWebView__, 0);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(wvTitle, WebViewAddress_41158236, v8, 0);
  }
}


void TermsOfUseDlg__OnEndShowWebView(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  ;
}


void TermsOfUseDlg__Open(
        TermsOfUseDlg_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *showMessage,
        System_String_o *cancelMessage,
        System_String_o *decideMessage,
        int32_t address,
        System_String_o *webViewTitle,
        TermsOfUseDlg_CallbackFunc_o *callback,
        bool canMaskTouchClose,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Action_o *v23; // x20

  if ( (byte_4C25353 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_TermsOfUseDlg_EndOpen__);
    byte_4C25353 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)message,
      (const MethodInfo *)showMessage);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_11;
    UILabel__set_text((UILabel_o *)gameObject, title, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject
      || (UILabel__set_text((UILabel_o *)gameObject, message, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.showLabel) == 0)
      || (UILabel__set_text((UILabel_o *)gameObject, showMessage, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelLabel) == 0)
      || (UILabel__set_text((UILabel_o *)gameObject, cancelMessage, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.decideLabel) == 0) )
    {
LABEL_11:
      sub_1C2D6EC(gameObject, v20);
    }
    UILabel__set_text((UILabel_o *)gameObject, decideMessage, 0);
    this->fields.wvAddress = address;
    this->fields.wvTitle = webViewTitle;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.wvTitle, (int32_t)webViewTitle, v21, v22);
    BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
    this->fields.state = 1;
    v23 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_TermsOfUseDlg_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0);
  }
}


void TermsOfUseDlg__add_callbackFunc(
        TermsOfUseDlg_o *this,
        TermsOfUseDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct TermsOfUseDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct TermsOfUseDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  TermsOfUseDlg_o *v11; // x0
  TermsOfUseDlg_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C25350 & 1) == 0 )
  {
    sub_1C2D490(&TermsOfUseDlg_CallbackFunc_TypeInfo);
    byte_4C25350 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (TermsOfUseDlg_CallbackFunc_c *)v8->klass != TermsOfUseDlg_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  TermsOfUseDlg__remove_callbackFunc(v11, v12, v13);
}


void TermsOfUseDlg__remove_callbackFunc(
        TermsOfUseDlg_o *this,
        TermsOfUseDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct TermsOfUseDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct TermsOfUseDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  TermsOfUseDlg_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C25351 & 1) == 0 )
  {
    sub_1C2D490(&TermsOfUseDlg_CallbackFunc_TypeInfo);
    byte_4C25351 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (TermsOfUseDlg_CallbackFunc_c *)v8->klass != TermsOfUseDlg_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  TermsOfUseDlg__Init(v11, v12);
}


void TermsOfUseDlg_CallbackFunc___ctor(
        TermsOfUseDlg_CallbackFunc_o *this,
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A707CC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A70784;
}


System_IAsyncResult_o *TermsOfUseDlg_CallbackFunc__BeginInvoke(
        TermsOfUseDlg_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4C25359 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C25359 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void TermsOfUseDlg_CallbackFunc__EndInvoke(
        TermsOfUseDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void TermsOfUseDlg_CallbackFunc__Invoke(TermsOfUseDlg_CallbackFunc_o *this, bool result, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}