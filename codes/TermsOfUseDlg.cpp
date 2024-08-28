void __fastcall TermsOfUseDlg___ctor(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  if ( (byte_4A06C4F & 1) == 0 )
  {
    sub_1B686D4(&BaseDialog_TypeInfo, method);
    byte_4A06C4F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TermsOfUseDlg__Callback(TermsOfUseDlg_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct TermsOfUseDlg_CallbackFunc_o *v5; // x20
  struct TermsOfUseDlg_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B68678(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall TermsOfUseDlg__Close(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TermsOfUseDlg__Close_35522420(this, 0LL, v2);
}


void __fastcall TermsOfUseDlg__Close_35522420(
        TermsOfUseDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A06C4B & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callback);
    sub_1B686D4(&Method_TermsOfUseDlg_EndClose__, v6);
    byte_4A06C4B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TermsOfUseDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall TermsOfUseDlg__EndClose(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TermsOfUseDlg__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B68678(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall TermsOfUseDlg__EndOpen(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall TermsOfUseDlg__Init(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4A06C49 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A06C49 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL) )
  {
    sub_1B68930(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TermsOfUseDlg__OnClickCancel(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A06C4E & 1) == 0 )
  {
    sub_1B686D4(&Method_TermsOfUseDlg_OnClickCancel__, method);
    byte_4A06C4E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_TermsOfUseDlg_OnClickCancel__;
    if ( (*((_BYTE *)Method_TermsOfUseDlg_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_TermsOfUseDlg_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    TermsOfUseDlg__Callback(this, 0, v5);
  }
}


void __fastcall TermsOfUseDlg__OnClickDecide(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4A06C4D & 1) == 0 )
  {
    sub_1B686D4(&Method_TermsOfUseDlg_OnClickDecide__, method);
    sub_1B686D4(&TermsOfUseMenu_TypeInfo, v3);
    byte_4A06C4D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_TermsOfUseDlg_OnClickDecide__;
    if ( (*((_BYTE *)Method_TermsOfUseDlg_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B686EC(Method_TermsOfUseDlg_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B686B8(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    if ( !TermsOfUseMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo);
    TermsOfUseMenu__Save(0LL);
    TermsOfUseDlg__Callback(this, 1, v6);
  }
}


void __fastcall TermsOfUseDlg__OnClickShow(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_String_o *wvTitle; // x20
  int32_t wvAddress; // w21
  System_String_o *WebViewAddress_38236288; // x21
  System_Action_o *v12; // x22

  if ( (byte_4A06C4C & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&NetworkManager_TypeInfo, v3);
    sub_1B686D4(&Method_TermsOfUseDlg_OnClickShow__, v4);
    sub_1B686D4(&Method_TermsOfUseDlg_OnEndShowWebView__, v5);
    sub_1B686D4(&WebViewManager_TypeInfo, v6);
    byte_4A06C4C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_TermsOfUseDlg_OnClickShow__;
    if ( (*((_BYTE *)Method_TermsOfUseDlg_OnClickShow__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B686EC(Method_TermsOfUseDlg_OnClickShow__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B686B8(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    wvTitle = this->fields.wvTitle;
    wvAddress = this->fields.wvAddress;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress_38236288 = NetworkManager__getWebViewAddress_38236288(wvAddress, 0LL);
    v12 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_TermsOfUseDlg_OnEndShowWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(wvTitle, WebViewAddress_38236288, v12, 0LL);
  }
}


void __fastcall TermsOfUseDlg__OnEndShowWebView(TermsOfUseDlg_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall TermsOfUseDlg__Open(
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
  __int64 v19; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_Action_o *v24; // x20

  if ( (byte_4A06C4A & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, title);
    sub_1B686D4(&Method_TermsOfUseDlg_EndOpen__, v19);
    byte_4A06C4A = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)message,
      (int32_t)showMessage);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_11;
    UILabel__set_text((UILabel_o *)gameObject, title, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject
      || (UILabel__set_text((UILabel_o *)gameObject, message, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.showLabel) == 0LL)
      || (UILabel__set_text((UILabel_o *)gameObject, showMessage, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelLabel) == 0LL)
      || (UILabel__set_text((UILabel_o *)gameObject, cancelMessage, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.decideLabel) == 0LL) )
    {
LABEL_11:
      sub_1B68930(gameObject, v21);
    }
    UILabel__set_text((UILabel_o *)gameObject, decideMessage, 0LL);
    this->fields.wvAddress = address;
    this->fields.wvTitle = webViewTitle;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.wvTitle, (int32_t)webViewTitle, v22, v23);
    BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
    this->fields.state = 1;
    v24 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_TermsOfUseDlg_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0LL);
  }
}


void __fastcall TermsOfUseDlg__add_callbackFunc(
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

  if ( (byte_4A06C47 & 1) == 0 )
  {
    sub_1B686D4(&TermsOfUseDlg_CallbackFunc_TypeInfo, value);
    byte_4A06C47 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (TermsOfUseDlg_CallbackFunc_c *)v8->klass != TermsOfUseDlg_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BA3BC4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B68BF0(v8);
  TermsOfUseDlg__remove_callbackFunc(v11, v12, v13);
}


void __fastcall TermsOfUseDlg__remove_callbackFunc(
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

  if ( (byte_4A06C48 & 1) == 0 )
  {
    sub_1B686D4(&TermsOfUseDlg_CallbackFunc_TypeInfo, value);
    byte_4A06C48 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (TermsOfUseDlg_CallbackFunc_c *)v8->klass != TermsOfUseDlg_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BA3BC4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B68BF0(v8);
  TermsOfUseDlg__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TermsOfUseDlg_CallbackFunc___ctor(
        TermsOfUseDlg_CallbackFunc_o *this,
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AEBC0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AEB78;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall TermsOfUseDlg_CallbackFunc__BeginInvoke(
        TermsOfUseDlg_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4A06C50 & 1) == 0 )
  {
    sub_1B686D4(&bool_TypeInfo, result);
    byte_4A06C50 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B68688(this, v9, callback, object);
}


void __fastcall TermsOfUseDlg_CallbackFunc__EndInvoke(
        TermsOfUseDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
}


void __fastcall TermsOfUseDlg_CallbackFunc__Invoke(
        TermsOfUseDlg_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}