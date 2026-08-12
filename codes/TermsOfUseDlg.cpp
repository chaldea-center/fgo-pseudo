void TermsOfUseDlg___ctor(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596E768 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596E768 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TermsOfUseDlg__Callback(TermsOfUseDlg_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct TermsOfUseDlg_CallbackFunc_o *v9; // x20
  struct TermsOfUseDlg_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void TermsOfUseDlg__Close(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TermsOfUseDlg__Close_45614048(this, 0, v2);
}


void TermsOfUseDlg__Close_45614048(TermsOfUseDlg_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596E764 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_TermsOfUseDlg_EndClose__);
    byte_596E764 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TermsOfUseDlg_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void TermsOfUseDlg__EndClose(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TermsOfUseDlg__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void TermsOfUseDlg__EndOpen(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void TermsOfUseDlg__Init(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_596E762 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E762 = 1;
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
    sub_2213CDC(titleLabel, method);
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

  if ( (byte_596E767 & 1) == 0 )
  {
    sub_2213A60(&Method_TermsOfUseDlg_OnClickCancel__);
    byte_596E767 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_TermsOfUseDlg_OnClickCancel__;
    if ( (*((_BYTE *)Method_TermsOfUseDlg_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_TermsOfUseDlg_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    TermsOfUseDlg__Callback(this, 0, v5);
  }
}


void TermsOfUseDlg__OnClickDecide(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_596E766 & 1) == 0 )
  {
    sub_2213A60(&Method_TermsOfUseDlg_OnClickDecide__);
    sub_2213A60(&TermsOfUseMenu_TypeInfo);
    byte_596E766 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_TermsOfUseDlg_OnClickDecide__;
    if ( (*((_BYTE *)Method_TermsOfUseDlg_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_TermsOfUseDlg_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    if ( !*(&TermsOfUseMenu_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo, v5, v6);
    TermsOfUseMenu__Save(0);
    TermsOfUseDlg__Callback(this, 1, v7);
  }
}


void TermsOfUseDlg__OnClickShow(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *wvTitle; // x20
  int32_t wvAddress; // w21
  System_String_o *WebViewAddress_48359816; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_596E765 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_TermsOfUseDlg_OnClickShow__);
    sub_2213A60(&Method_TermsOfUseDlg_OnEndShowWebView__);
    sub_2213A60(&WebViewManager_TypeInfo);
    byte_596E765 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_TermsOfUseDlg_OnClickShow__;
    if ( (*((_BYTE *)Method_TermsOfUseDlg_OnClickShow__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_TermsOfUseDlg_OnClickShow__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    wvTitle = this->fields.wvTitle;
    wvAddress = this->fields.wvAddress;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    WebViewAddress_48359816 = NetworkManager__getWebViewAddress_48359816(wvAddress, 0);
    v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_TermsOfUseDlg_OnEndShowWebView__, 0);
    if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v11, v12);
    WebViewManager__OpenView(wvTitle, WebViewAddress_48359816, v10, 0);
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
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Action_o *v27; // x20

  if ( (byte_596E763 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_TermsOfUseDlg_EndOpen__);
    byte_596E763 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      message,
      showMessage,
      (int32_t)cancelMessage,
      (int32_t)decideMessage,
      address,
      (bool)webViewTitle);
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
      sub_2213CDC(gameObject, v20);
    }
    UILabel__set_text((UILabel_o *)gameObject, decideMessage, 0);
    this->fields.wvAddress = address;
    this->fields.wvTitle = webViewTitle;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.wvTitle,
      (int32_t)webViewTitle,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
    this->fields.state = 1;
    v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_TermsOfUseDlg_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  TermsOfUseDlg_o *v13; // x0
  TermsOfUseDlg_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596E760 & 1) == 0 )
  {
    sub_2213A60(&TermsOfUseDlg_CallbackFunc_TypeInfo);
    byte_596E760 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, TermsOfUseDlg_CallbackFunc_TypeInfo, v9, v10);
  TermsOfUseDlg__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  TermsOfUseDlg_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596E761 & 1) == 0 )
  {
    sub_2213A60(&TermsOfUseDlg_CallbackFunc_TypeInfo);
    byte_596E761 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, TermsOfUseDlg_CallbackFunc_TypeInfo, v9, v10);
  TermsOfUseDlg__Init(v13, v14);
}


void TermsOfUseDlg_CallbackFunc___ctor(
        TermsOfUseDlg_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_200ACB8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200AC70;
}


System_IAsyncResult_o *TermsOfUseDlg_CallbackFunc__BeginInvoke(
        TermsOfUseDlg_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void TermsOfUseDlg_CallbackFunc__EndInvoke(
        TermsOfUseDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void TermsOfUseDlg_CallbackFunc__Invoke(TermsOfUseDlg_CallbackFunc_o *this, bool result, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}